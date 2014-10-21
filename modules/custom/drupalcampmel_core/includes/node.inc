<?php
/**
 * @file
 * Node module integration.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function drupalcampmel_core_form_session_node_form_alter(&$form, $form_state) {
  // Modify 'Publishing options' element.
  unset($form['options']['#group']);
  $form['options']['#collapsible'] = FALSE;
  $form['options']['#attributes']['class'][] = 'panel-danger';

  // Adjust access levels.
  $form['options']['#access'] = TRUE;
  $form['options']['promote']['#access'] = FALSE;
  $form['options']['sticky']['#access'] = FALSE;
  $form['revision_information']['#access'] = FALSE;
}

/**
 * Implements hook_field_extra_fields().
 */
function drupalcampmel_core_field_extra_fields() {
  $extra['node']['session']['form']['options'] = array(
    'label'       => t('Publishing options'),
    'description' => t('Publishing options'),
    'weight'      => 0,
  );

  return $extra;
}
