<?php

/**
 * @file
 * User module integration.
 */

/**
 * Implements hook_form_alter().
 *
 * @param $form
 * @param $form_state
 */
function drupalcampmel_core_form_user_register_form_alter(&$form, &$form_state) {
  // Only make modifications when user is anonymous.
  if (user_is_anonymous()) {

    // Make product reference human readable..
    foreach ($form['field_tickets'][LANGUAGE_NONE]['#options'] as $product_id => &$option) {
      $product = commerce_product_load($product_id);
      /** @var EntityDrupalWrapper $wrapper */
      $wrapper = entity_metadata_wrapper('commerce_product', $product);
      $option  = t('@title - @price', array(
        '@title' => $wrapper->title->value(),
        '@price' => commerce_currency_format($wrapper->commerce_price->amount->value(), $wrapper->commerce_price->currency_code->value()),
      ));
      if ($wrapper->commerce_stock->value() <= 0) {
        $option .= ' ' . t("<strong>SOLD OUT</strong>");
        $form['field_tickets'][LANGUAGE_NONE][$product_id]['#attributes']['disabled'] = TRUE;
      }
    }

    // Add a description

    $form['field_tickets']['und']['#description'] = t("Choose which days you want to attend.");
    $form['field_tickets']['und']['#title_display'] = "invisible";


    // Modify form fields; use placeholder attribute instead of title and hide
    // until a ticket is selected.
    foreach (array('first_name', 'last_name', 'diet', 't_shirt_size') as $field) {
      $form["field_{$field}"][LANGUAGE_NONE][0]['value']['#attributes']['placeholder']      = $form["field_{$field}"][LANGUAGE_NONE][0]['value']['#title'];
      $form["field_{$field}"][LANGUAGE_NONE][0]['value']['#title_display']                  = 'invisible';
      $form["field_{$field}"]['#states']['invisible']['#edit-field-tickets .form-checkbox'] = array(
        'checked' => FALSE
      );
    }

    $form['account']['#states']['invisible']['#edit-field-tickets .form-checkbox'] = array(
      'checked' => FALSE
    );

    $form['account']['name']['#attributes']['placeholder'] = $form['account']['name']['#title'];
    $form['account']['name']['#title_display']             = 'invisible';

    $form['account']['mail']['#attributes']['placeholder'] = $form['account']['mail']['#title'];
    $form['account']['mail']['#title_display']             = 'invisible';

    $form['account']['mail']['#attributes']['placeholder'] = $form['account']['mail']['#title'];
    $form['account']['mail']['#title_display']             = 'invisible';


    $form['actions']['#states']['invisible']['#edit-field-tickets .form-checkbox'] = array(
      'checked' => FALSE
    );
    $form['field_tickets']['und']['#title_display'] = "invisible";

    // @TODO - Password field modifications.

    $form['#submit'][] = 'drupalcampmel_core_purchase_tickets';
  }
}

function drupalcampmel_core_checkbox($variables) {
  dsm(variables);
  $element = $variables['element'];
  $element['#attributes']['type'] = 'checkbox';
  element_set_attributes($element, array('id', 'name', '#return_value' => 'value'));

  // Unchecked checkbox has #value of integer 0.
  if (!empty($element['#checked'])) {
    $element['#attributes']['checked'] = 'checked';
  }
  _form_set_class($element, array('form-checkbox'));

  return '<input' . drupal_attributes($element['#attributes']) . ' />';
}

/**
 * @param $form
 * @param $form_state
 */
function drupalcampmel_core_purchase_tickets($form, $form_state) {
  $user = $form_state['user'];
  /** @var EntityDrupalWrapper $wrapper */
  $wrapper = entity_metadata_wrapper('user', $user);

  commerce_cart_order_new($user->uid);
  /** @var EntityDrupalWrapper $product */
  foreach ($wrapper->field_tickets as $product) {
    /** @var stdClass $line_item */
    $line_item = commerce_product_line_item_new($product->value(), 1, 0, array(), 'product');

    // Allow modules to prepare this as necessary. This hook is defined by the
    // Product Pricing module.
    drupal_alter('commerce_product_calculate_sell_price_line_item', $line_item);

    // Process the unit price through Rules so it reflects the user's actual
    // purchase price.
    rules_invoke_event('commerce_product_calculate_sell_price', $line_item);

    // Only attempt an Add to Cart if the line item has a valid unit price.
    /** @var EntityDrupalWrapper $line_item_wrapper */
    $line_item_wrapper = entity_metadata_wrapper('commerce_line_item', $line_item);

    if (!is_null($line_item_wrapper->commerce_unit_price->value())) {
      // Add the product to the specified shopping cart.
      commerce_cart_product_add($form_state['values']['uid'], $line_item, isset($line_item->data['context']['add_to_cart_combine']) ? $line_item->data['context']['add_to_cart_combine'] : TRUE);
    }
  }

  $order                               = commerce_cart_order_load($user->uid);
  $order->data['payment_redirect_key'] = drupal_hash_base64(time());
  commerce_checkout_complete($order);
  commerce_order_save($order);

  $instance_id    = 'paypal_wps|commerce_payment_paypal_wps_da';
  $payment_method = commerce_payment_method_instance_load($instance_id);

  $redirect_form_state = array('values' => array());
  $redirect_form       = commerce_paypal_wps_redirect_form(array(), $redirect_form_state, $order, $payment_method);
  $data                = array();
  foreach (element_children($redirect_form) as $child) {
    if ($redirect_form[$child]['#type'] == 'hidden') {
      $data[$child] = $redirect_form[$child]['#value'];
    }
  }

  // @TODO - React correctly to cancelled orders.
  $data['cancel_return'] = url('', array('absolute' => TRUE));
  $data['return']        = url('', array('absolute' => TRUE));
  $data['item_name_1'] .= ' (2732)';
  drupal_goto($redirect_form['#action'], array('query' => $data));
}
