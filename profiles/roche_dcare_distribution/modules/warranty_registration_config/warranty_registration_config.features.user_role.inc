<?php
/**
 * @file
 * warranty_registration_config.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function warranty_registration_config_user_default_roles() {
  $roles = array();

  // Exported role: Meter Registration access.
  $roles['Meter Registration access'] = array(
    'name' => 'Meter Registration access',
    'weight' => '3',
  );

  return $roles;
}
