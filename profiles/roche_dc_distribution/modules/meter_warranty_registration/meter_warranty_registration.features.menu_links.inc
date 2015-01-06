<?php
/**
 * @file
 * meter_warranty_registration.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function meter_warranty_registration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_register-warranty:node/1
  $menu_links['main-menu_register-warranty:node/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Register Warranty',
    'options' => array(
      'attributes' => array(
        'title' => 'Meter Warranty Registration',
      ),
      'identifier' => 'main-menu_register-warranty:node/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Register Warranty');


  return $menu_links;
}
