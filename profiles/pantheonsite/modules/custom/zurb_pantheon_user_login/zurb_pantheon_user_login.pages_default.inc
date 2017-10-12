<?php
/**
 * @file
 * zurb_pantheon_user_login.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function zurb_pantheon_user_login_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'regestrationpanel';
  $page->task = 'page';
  $page->admin_title = 'registration';
  $page->admin_description = '';
  $page->path = 'registration';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_regestrationpanel__panel';
  $handler->task = 'page';
  $handler->subtask = 'regestrationpanel';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8281b170-bef2-4e87-968f-1ee9cdf6849e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_regestrationpanel__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-86f4b9dd-a09c-4a20-aefb-ddd490428d30';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86f4b9dd-a09c-4a20-aefb-ddd490428d30';
  $display->content['new-86f4b9dd-a09c-4a20-aefb-ddd490428d30'] = $pane;
  $display->panels['left'][0] = 'new-86f4b9dd-a09c-4a20-aefb-ddd490428d30';
  $pane = new stdClass();
  $pane->pid = 'new-d3ec4841-7a76-441f-b55a-e0d5537ae0db';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'imageblock-3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd3ec4841-7a76-441f-b55a-e0d5537ae0db';
  $display->content['new-d3ec4841-7a76-441f-b55a-e0d5537ae0db'] = $pane;
  $display->panels['left'][1] = 'new-d3ec4841-7a76-441f-b55a-e0d5537ae0db';
  $pane = new stdClass();
  $pane->pid = 'new-996a2668-d7f7-4530-bba8-a5f7b18cc901';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'imageblock-4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '996a2668-d7f7-4530-bba8-a5f7b18cc901';
  $display->content['new-996a2668-d7f7-4530-bba8-a5f7b18cc901'] = $pane;
  $display->panels['left'][2] = 'new-996a2668-d7f7-4530-bba8-a5f7b18cc901';
  $pane = new stdClass();
  $pane->pid = 'new-873ae606-3584-49d4-9f35-7e429c2459f5';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'imageblock-5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '873ae606-3584-49d4-9f35-7e429c2459f5';
  $display->content['new-873ae606-3584-49d4-9f35-7e429c2459f5'] = $pane;
  $display->panels['left'][3] = 'new-873ae606-3584-49d4-9f35-7e429c2459f5';
  $pane = new stdClass();
  $pane->pid = 'new-b36d57c4-7338-4fc0-ac7f-08c7f1d955ea';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b36d57c4-7338-4fc0-ac7f-08c7f1d955ea';
  $display->content['new-b36d57c4-7338-4fc0-ac7f-08c7f1d955ea'] = $pane;
  $display->panels['left'][4] = 'new-b36d57c4-7338-4fc0-ac7f-08c7f1d955ea';
  $pane = new stdClass();
  $pane->pid = 'new-7eec8a2a-5645-4c7f-ae99-b4d49525a9ca';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'imageblock-6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '7eec8a2a-5645-4c7f-ae99-b4d49525a9ca';
  $display->content['new-7eec8a2a-5645-4c7f-ae99-b4d49525a9ca'] = $pane;
  $display->panels['left'][5] = 'new-7eec8a2a-5645-4c7f-ae99-b4d49525a9ca';
  $pane = new stdClass();
  $pane->pid = 'new-714964a6-afca-481b-ac5f-e051909a9884';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '714964a6-afca-481b-ac5f-e051909a9884';
  $display->content['new-714964a6-afca-481b-ac5f-e051909a9884'] = $pane;
  $display->panels['left'][6] = 'new-714964a6-afca-481b-ac5f-e051909a9884';
  $pane = new stdClass();
  $pane->pid = 'new-770418ad-9b16-406d-bf4b-2b9b441b9d51';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-29';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '770418ad-9b16-406d-bf4b-2b9b441b9d51';
  $display->content['new-770418ad-9b16-406d-bf4b-2b9b441b9d51'] = $pane;
  $display->panels['left'][7] = 'new-770418ad-9b16-406d-bf4b-2b9b441b9d51';
  $pane = new stdClass();
  $pane->pid = 'new-7f48a63b-67e1-4535-b730-e377a510ba2f';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-28';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7f48a63b-67e1-4535-b730-e377a510ba2f';
  $display->content['new-7f48a63b-67e1-4535-b730-e377a510ba2f'] = $pane;
  $display->panels['right'][0] = 'new-7f48a63b-67e1-4535-b730-e377a510ba2f';
  $pane = new stdClass();
  $pane->pid = 'new-b7350b81-cee2-4e3a-94ef-3d1c294b0bf9';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'hybridauth-hybridauth';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b7350b81-cee2-4e3a-94ef-3d1c294b0bf9';
  $display->content['new-b7350b81-cee2-4e3a-94ef-3d1c294b0bf9'] = $pane;
  $display->panels['right'][1] = 'new-b7350b81-cee2-4e3a-94ef-3d1c294b0bf9';
  $pane = new stdClass();
  $pane->pid = 'new-bc526c4b-dc44-498b-9e43-4c2f5048533e';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'formblock-user_register';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'bc526c4b-dc44-498b-9e43-4c2f5048533e';
  $display->content['new-bc526c4b-dc44-498b-9e43-4c2f5048533e'] = $pane;
  $display->panels['right'][2] = 'new-bc526c4b-dc44-498b-9e43-4c2f5048533e';
  $pane = new stdClass();
  $pane->pid = 'new-baa9d4b1-8be9-4e3e-9341-2eba3bcfc397';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'Sign Up For Free',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'baa9d4b1-8be9-4e3e-9341-2eba3bcfc397';
  $display->content['new-baa9d4b1-8be9-4e3e-9341-2eba3bcfc397'] = $pane;
  $display->panels['top'][0] = 'new-baa9d4b1-8be9-4e3e-9341-2eba3bcfc397';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bc526c4b-dc44-498b-9e43-4c2f5048533e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['regestrationpanel'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'register';
  $page->task = 'page';
  $page->admin_title = 'registration_user';
  $page->admin_description = '';
  $page->path = 'registration_user';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_register__panel';
  $handler->task = 'page';
  $handler->subtask = 'register';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100.0,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_region',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_region' => array(
        'type' => 'region',
        'title' => 'left region',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_region',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'bottom_region' => array(
        'type' => 'region',
        'title' => 'bottom region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'above_left' => NULL,
      'above_right' => NULL,
      'middle' => NULL,
      'below_left' => NULL,
      'below_right' => NULL,
      'bottom' => NULL,
      'left_region' => NULL,
      'bottom_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '52a48e9c-ade6-43b0-974b-0ee441995576';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_register__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5442eaae-dfb4-43f2-9812-f219cb866618';
  $pane->panel = 'bottom_region';
  $pane->type = 'block';
  $pane->subtype = 'formblock-user_register';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Try It for Free',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5442eaae-dfb4-43f2-9812-f219cb866618';
  $display->content['new-5442eaae-dfb4-43f2-9812-f219cb866618'] = $pane;
  $display->panels['bottom_region'][0] = 'new-5442eaae-dfb4-43f2-9812-f219cb866618';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['register'] = $page;

  return $pages;

}
