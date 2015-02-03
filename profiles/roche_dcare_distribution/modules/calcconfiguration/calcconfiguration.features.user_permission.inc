<?php
/**
 * @file
 * calcconfiguration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function calcconfiguration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'calculator'.
  $permissions['calculator'] = array(
    'name' => 'calculator',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'calculator',
  );

  return $permissions;
}
