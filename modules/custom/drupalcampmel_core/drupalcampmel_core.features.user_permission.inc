<?php
/**
 * @file
 * drupalcampmel_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function drupalcampmel_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  return $permissions;
}
