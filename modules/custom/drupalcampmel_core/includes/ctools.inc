<?php
/**
 * @file
 * Chaos tools module integration.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function drupalcampmel_core_form_ctools_block_content_type_edit_form_alter(&$form, &$form_state) {
  $form['class'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Class'),
    '#default_value' => isset($form_state['conf']['class']) ? $form_state['conf']['class'] : '',
  );

  $form['#submit'][] = 'drupalcampmel_core_ctools_content_configure_form_submit';
}

/**
 * Submit callback for
 */
function drupalcampmel_core_ctools_content_configure_form_submit($form, &$form_state) {
  $form_state['conf']['class'] = $form_state['values']['class'];
}

/**
 *
 */
function drupalcampmel_core_preprocess_panels_pane(&$vars) {
  $vars['classes_array'][] = $vars['pane']->configuration['class'];
}
