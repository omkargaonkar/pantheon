<?php
/**
 * @file
 * pantheon_panel_user_registration.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function pantheon_panel_user_registration_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-block.
  $menus['menu-block'] = array(
    'menu_name' => 'menu-block',
    'title' => 'BLOCK',
    'description' => '',
  );
  // Exported menu: menu-company.
  $menus['menu-company'] = array(
    'menu_name' => 'menu-company',
    'title' => 'COMPANY',
    'description' => '',
  );
  // Exported menu: menu-contact-sales.
  $menus['menu-contact-sales'] = array(
    'menu_name' => 'menu-contact-sales',
    'title' => 'CONTACT SALES',
    'description' => '',
  );
  // Exported menu: menu-documentation.
  $menus['menu-documentation'] = array(
    'menu_name' => 'menu-documentation',
    'title' => 'DOCUMENTATION',
    'description' => '',
  );
  // Exported menu: menu-help.
  $menus['menu-help'] = array(
    'menu_name' => 'menu-help',
    'title' => 'HELP',
    'description' => '',
  );
  // Exported menu: menu-popular.
  $menus['menu-popular'] = array(
    'menu_name' => 'menu-popular',
    'title' => 'POPULAR',
    'description' => '',
  );
  // Exported menu: menu-product.
  $menus['menu-product'] = array(
    'menu_name' => 'menu-product',
    'title' => 'PRODUCT',
    'description' => '',
  );
  // Exported menu: menu-resources.
  $menus['menu-resources'] = array(
    'menu_name' => 'menu-resources',
    'title' => 'RESOURCES',
    'description' => '',
  );
  // Exported menu: menu-solutions.
  $menus['menu-solutions'] = array(
    'menu_name' => 'menu-solutions',
    'title' => 'SOLUTIONS',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('BLOCK');
  t('COMPANY');
  t('CONTACT SALES');
  t('DOCUMENTATION');
  t('HELP');
  t('Main menu');
  t('Management');
  t('POPULAR');
  t('PRODUCT');
  t('RESOURCES');
  t('SOLUTIONS');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');

  return $menus;
}
