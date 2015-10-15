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

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create field_tickets'.
  $permissions['create field_tickets'] = array(
    'name' => 'create field_tickets',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create session content'.
  $permissions['create session content'] = array(
    'name' => 'create session content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own session content'.
  $permissions['edit own session content'] = array(
    'name' => 'edit own session content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'flag vote'.
  $permissions['flag vote'] = array(
    'name' => 'flag vote',
    'roles' => array(
      'ticket holder' => 'ticket holder',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag vote'.
  $permissions['unflag vote'] = array(
    'name' => 'unflag vote',
    'roles' => array(
      'ticket holder' => 'ticket holder',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'view any misc bean'.
  $permissions['view any misc bean'] = array(
    'name' => 'view any misc bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any sponsor bean'.
  $permissions['view any sponsor bean'] = array(
    'name' => 'view any sponsor bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view field_session_room'.
  $permissions['view field_session_room'] = array(
    'name' => 'view field_session_room',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_session_slot'.
  $permissions['view field_session_slot'] = array(
    'name' => 'view field_session_slot',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
