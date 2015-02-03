<?php
/**
 * @file
 * warranty_registration_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function warranty_registration_config_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function warranty_registration_config_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function warranty_registration_config_node_info() {
  $items = array(
    'product' => array(
      'name' => t('Product'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'warranty_registration' => array(
      'name' => t('Warranty Registration'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
