<?php
/**
 * @file
 * drupalcampmel_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function drupalcampmel_core_user_default_roles() {
  $roles = array();

  // Exported role: ticket holder.
  $roles['ticket holder'] = array(
    'name' => 'ticket holder',
    'weight' => 2,
  );

  return $roles;
}
