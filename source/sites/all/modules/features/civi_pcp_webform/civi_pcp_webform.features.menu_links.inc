<?php
/**
 * @file
 * civi_pcp_webform.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function civi_pcp_webform_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_create-your-campaign-here:node/4.
  $menu_links['main-menu_create-your-campaign-here:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Create your campaign here',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_create-your-campaign-here:node/4',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Create your campaign here');

  return $menu_links;
}
