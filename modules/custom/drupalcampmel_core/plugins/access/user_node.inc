<?php
/**
 * CTools access plugin; Node: User node exists.
 */

$plugin = array(
  'title'         => t('Node: User node exists'),
  'description'   => t('Check if user has a node of a certain type.'),
  'callback'      => 'drupalcampmel_core_ctools_access_user_node_access_check',
  'default'       => array('content_type' => NULL),
  'settings form' => 'drupalcampmel_core_ctools_access_user_node_settings',
  'summary'       => 'drupalcampmel_core_ctools_access_user_node_summary',
);

/**
 * CTool access plugin callback.
 */
function drupalcampmel_core_ctools_access_user_node_access_check($conf, $context) {
  if (isset($conf['content_type'])) {
    global $user;

    $query = new EntityFieldQuery();
    $result = $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', $conf['content_type'])
      ->propertyCondition('uid', $user->uid)
      ->execute();
    if (!empty($result['node'])) {
      return TRUE;
    }
  }
  return FALSE;
}

/**
 * CTool access plugin settings callback.
 */
function drupalcampmel_core_ctools_access_user_node_settings($form, &$form_state, $conf) {
  $content_types = node_type_get_types();
  $options       = array();
  foreach ($content_types as $content_type) {
    $options[$content_type->type] = $content_type->name;
  }
  $form['settings']['content_type'] = array(
    '#type'          => 'select',
    '#title'         => t('Content type'),
    '#options'       => $options,
    '#default_value' => isset($conf['content_type']) ? $conf['content_type'] : '',
  );

  return $form;
}

/**
 * CTool access plugin summary callback.
 */
function drupalcampmel_core_ctools_access_user_node_summary($conf, $context) {
  if (isset($conf['content_type'])) {
    return t('Logged in user has a node of type "@session"', array('@session' => $conf['content_type']));
  }
}
