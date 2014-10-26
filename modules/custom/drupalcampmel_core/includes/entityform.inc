<?php
/**
 * @file
 * Entityforms module integration.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function drupalcampmel_core_form_register_interest_entityform_edit_form_alter(&$form, &$form_state) {
  $form['field_mailchimp']['#access'] = FALSE;
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function drupalcampmel_core_form_confirm_order_entityform_edit_form_alter(&$form, $form_state) {
  $form['#validate'][] = 'drupalcampmel_core_user_eventbrite_validation';
}

/**
 * Validation callback for Users Eventbrite order.
 */
function drupalcampmel_core_user_eventbrite_validation($form, $form_state) {
  if (isset($form_state['values']['field_eventbrite_order'][LANGUAGE_NONE][0]['value'])) {
    $order_id = $form_state['values']['field_eventbrite_order'][LANGUAGE_NONE][0]['value'];
    if (!empty($order_id) && is_numeric($order_id)) {
      $token   = variable_get('eventbrite_api_token', 0);
      $url     = "https://www.eventbriteapi.com/v3/orders/{$order_id}/?token={$token}";
      $request = drupal_http_request($url);

      if ($request->code != 200) {
        form_set_error('field_eventbrite_order', t('The Eventbrite order you entered does not exist.'));

        return;
      }

      $data = json_decode($request->data);
      if ('13596805411' != $data->event->id) {
        form_set_error('field_eventbrite_order', t('The Eventbrite order you entered is invalid.'));

        return;
      }

      $orders = variable_get('eventbrite_api_orders', array());
      if (isset($orders[$order_id])) {
        form_set_error('field_eventbrite_order', t('The Eventbrite order you entered is already in use by another user.'));

        return;
      }

      $orders[$order_id] = TRUE;
    }
  }
}

/**
 * Check if current user has an Eventbrite order.
 */
function drupalcampmel_core_has_eventbrite_order() {
  global $user;
  $query = new EntityFieldQuery();
  $result = $query->entityCondition('entity_type', 'entityform')
    ->entityCondition('bundle', 'confirm_order')
    ->propertyCondition('uid', $user->uid)
    ->execute();
  return !empty($result['entityform']);
}
