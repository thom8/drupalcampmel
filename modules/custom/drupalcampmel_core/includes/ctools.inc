<?php
/**
 * @file
 * Chaos tools module integration.
 */

/**
 * Implements hook_ctools_plugin_directory().
 */
function drupalcampmel_core_ctools_plugin_directory($module, $plugin) {
  if ($module == 'ctools' && !empty($plugin)) {
    return "plugins/$plugin";
  }
}

/**
 * Implements hook_ctools_render_alter().
 *
 * This is a bit hacky, it was done as an alternative to writing a CTools
 * context plugin to provide the NID of the current users Session node.
 */
function drupalcampmel_core_ctools_render_alter(&$info, $page, $context) {
  if ('edit_my_session' == $context['handler']->subtask) {
    global $user;

    $query  = new EntityFieldQuery();
    $result = $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'session')
      ->propertyCondition('uid', $user->uid)
      ->execute();
    if (!empty($result['node'])) {
      $info['destination'] = str_replace('NID', key($result['node']), $info['destination']);
    }
  }
}
