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
