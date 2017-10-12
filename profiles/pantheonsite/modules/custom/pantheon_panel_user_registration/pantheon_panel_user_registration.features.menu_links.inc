<?php
/**
 * @file
 * pantheon_panel_user_registration.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pantheon_panel_user_registration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_agencies:<front>.
  $menu_links['main-menu_agencies:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'AGENCIES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_agencies:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_customers:<front>.
  $menu_links['main-menu_customers:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'CUSTOMERS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_customers:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_get-free-account--:registration.
  $menu_links['main-menu_get-free-account--:registration'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'registration',
    'router_path' => 'registration',
    'link_title' => 'GET FREE ACCOUNT  >',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_get-free-account--:registration',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_pricing:<front>.
  $menu_links['main-menu_pricing:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'PRICING',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_pricing:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: management_block:admin/structure/menu/manage/menu-block.
  $menu_links['management_block:admin/structure/menu/manage/menu-block'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-block',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'BLOCK',
    'options' => array(
      'identifier' => 'management_block:admin/structure/menu/manage/menu-block',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_company:admin/structure/menu/manage/menu-company.
  $menu_links['management_company:admin/structure/menu/manage/menu-company'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-company',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'COMPANY',
    'options' => array(
      'identifier' => 'management_company:admin/structure/menu/manage/menu-company',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_contact-sales:admin/structure/menu/manage/menu-contact-sales.
  $menu_links['management_contact-sales:admin/structure/menu/manage/menu-contact-sales'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-contact-sales',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'CONTACT SALES',
    'options' => array(
      'identifier' => 'management_contact-sales:admin/structure/menu/manage/menu-contact-sales',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_documentation:admin/structure/menu/manage/menu-documentation.
  $menu_links['management_documentation:admin/structure/menu/manage/menu-documentation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-documentation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'DOCUMENTATION',
    'options' => array(
      'identifier' => 'management_documentation:admin/structure/menu/manage/menu-documentation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_help:admin/structure/menu/manage/menu-help.
  $menu_links['management_help:admin/structure/menu/manage/menu-help'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-help',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'HELP',
    'options' => array(
      'identifier' => 'management_help:admin/structure/menu/manage/menu-help',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_popular:admin/structure/menu/manage/menu-popular.
  $menu_links['management_popular:admin/structure/menu/manage/menu-popular'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-popular',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'POPULAR',
    'options' => array(
      'identifier' => 'management_popular:admin/structure/menu/manage/menu-popular',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_product:admin/structure/menu/manage/menu-product.
  $menu_links['management_product:admin/structure/menu/manage/menu-product'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-product',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'PRODUCT',
    'options' => array(
      'identifier' => 'management_product:admin/structure/menu/manage/menu-product',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_resources:admin/structure/menu/manage/menu-resources.
  $menu_links['management_resources:admin/structure/menu/manage/menu-resources'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-resources',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'RESOURCES',
    'options' => array(
      'identifier' => 'management_resources:admin/structure/menu/manage/menu-resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_solutions:admin/structure/menu/manage/menu-solutions.
  $menu_links['management_solutions:admin/structure/menu/manage/menu-solutions'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-solutions',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'SOLUTIONS',
    'options' => array(
      'identifier' => 'management_solutions:admin/structure/menu/manage/menu-solutions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_tb-mega-menu:admin/structure/tb-megamenu.
  $menu_links['management_tb-mega-menu:admin/structure/tb-megamenu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/tb-megamenu',
    'router_path' => 'admin/structure/tb-megamenu',
    'link_title' => 'TB Mega Menu',
    'options' => array(
      'attributes' => array(
        'title' => 'TB Mega Menu',
      ),
      'identifier' => 'management_tb-mega-menu:admin/structure/tb-megamenu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: menu-block_block:<front>.
  $menu_links['menu-block_block:<front>'] = array(
    'menu_name' => 'menu-block',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'BLOCK',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-block_block:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-company_about:<front>.
  $menu_links['menu-company_about:<front>'] = array(
    'menu_name' => 'menu-company',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-company_about:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-company_careers:<front>.
  $menu_links['menu-company_careers:<front>'] = array(
    'menu_name' => 'menu-company',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Careers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-company_careers:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-company_event:<front>.
  $menu_links['menu-company_event:<front>'] = array(
    'menu_name' => 'menu-company',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-company_event:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-contact-sales_contact-sales:<front>.
  $menu_links['menu-contact-sales_contact-sales:<front>'] = array(
    'menu_name' => 'menu-contact-sales',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'CONTACT SALES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-contact-sales_contact-sales:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-documentation_documentation:<front>.
  $menu_links['menu-documentation_documentation:<front>'] = array(
    'menu_name' => 'menu-documentation',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'DOCUMENTATION',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-documentation_documentation:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-resources_resources:<front>.
  $menu_links['menu-resources_resources:<front>'] = array(
    'menu_name' => 'menu-resources',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'RESOURCES',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-resources_resources:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('AGENCIES');
  t('About');
  t('BLOCK');
  t('COMPANY');
  t('CONTACT SALES');
  t('CUSTOMERS');
  t('Careers');
  t('DOCUMENTATION');
  t('Event');
  t('GET FREE ACCOUNT  >');
  t('HELP');
  t('POPULAR');
  t('PRICING');
  t('PRODUCT');
  t('RESOURCES');
  t('SOLUTIONS');
  t('TB Mega Menu');

  return $menu_links;
}
