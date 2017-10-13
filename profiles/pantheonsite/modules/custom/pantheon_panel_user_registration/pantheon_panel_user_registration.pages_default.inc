<?php
/**
 * @file
 * pantheon_panel_user_registration.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function pantheon_panel_user_registration_default_page_manager_pages() {
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
  $pane->pid = 'new-8c0c14d6-c44c-4feb-aecf-0df6a34e4121';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-5';
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
  $pane->uuid = '8c0c14d6-c44c-4feb-aecf-0df6a34e4121';
  $display->content['new-8c0c14d6-c44c-4feb-aecf-0df6a34e4121'] = $pane;
  $display->panels['left'][0] = 'new-8c0c14d6-c44c-4feb-aecf-0df6a34e4121';
  $pane = new stdClass();
  $pane->pid = 'new-edc39766-0bce-415d-a581-da447cd0e6fa';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'imageblock-2';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'edc39766-0bce-415d-a581-da447cd0e6fa';
  $display->content['new-edc39766-0bce-415d-a581-da447cd0e6fa'] = $pane;
  $display->panels['left'][1] = 'new-edc39766-0bce-415d-a581-da447cd0e6fa';
  $pane = new stdClass();
  $pane->pid = 'new-062b2a1f-3a28-43ea-9ed1-af5d9f03acf5';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-6';
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
  $pane->uuid = '062b2a1f-3a28-43ea-9ed1-af5d9f03acf5';
  $display->content['new-062b2a1f-3a28-43ea-9ed1-af5d9f03acf5'] = $pane;
  $display->panels['left'][2] = 'new-062b2a1f-3a28-43ea-9ed1-af5d9f03acf5';
  $pane = new stdClass();
  $pane->pid = 'new-6938847c-e7ab-486a-b884-b433e1c334d6';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'imageblock-3';
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
  $pane->uuid = '6938847c-e7ab-486a-b884-b433e1c334d6';
  $display->content['new-6938847c-e7ab-486a-b884-b433e1c334d6'] = $pane;
  $display->panels['left'][3] = 'new-6938847c-e7ab-486a-b884-b433e1c334d6';
  $pane = new stdClass();
  $pane->pid = 'new-fdd3600b-baeb-4ada-b2e7-32f7bf0dea12';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-7';
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
  $pane->uuid = 'fdd3600b-baeb-4ada-b2e7-32f7bf0dea12';
  $display->content['new-fdd3600b-baeb-4ada-b2e7-32f7bf0dea12'] = $pane;
  $display->panels['left'][4] = 'new-fdd3600b-baeb-4ada-b2e7-32f7bf0dea12';
  $pane = new stdClass();
  $pane->pid = 'new-ab5b01f4-8b08-40e6-b3c0-8307cd22aeec';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'ab5b01f4-8b08-40e6-b3c0-8307cd22aeec';
  $display->content['new-ab5b01f4-8b08-40e6-b3c0-8307cd22aeec'] = $pane;
  $display->panels['left'][5] = 'new-ab5b01f4-8b08-40e6-b3c0-8307cd22aeec';
  $pane = new stdClass();
  $pane->pid = 'new-096969b8-910b-4d2c-98f8-b18b5fdec00d';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-8';
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
  $pane->uuid = '096969b8-910b-4d2c-98f8-b18b5fdec00d';
  $display->content['new-096969b8-910b-4d2c-98f8-b18b5fdec00d'] = $pane;
  $display->panels['left'][6] = 'new-096969b8-910b-4d2c-98f8-b18b5fdec00d';
  $pane = new stdClass();
  $pane->pid = 'new-d9126a2d-cc1e-409e-9ea4-2bbd270dead1';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'd9126a2d-cc1e-409e-9ea4-2bbd270dead1';
  $display->content['new-d9126a2d-cc1e-409e-9ea4-2bbd270dead1'] = $pane;
  $display->panels['left'][7] = 'new-d9126a2d-cc1e-409e-9ea4-2bbd270dead1';
  $pane = new stdClass();
  $pane->pid = 'new-cfc55d82-f591-41fa-975f-af8f8d8614fc';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-9';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'cfc55d82-f591-41fa-975f-af8f8d8614fc';
  $display->content['new-cfc55d82-f591-41fa-975f-af8f8d8614fc'] = $pane;
  $display->panels['left'][8] = 'new-cfc55d82-f591-41fa-975f-af8f8d8614fc';
  $pane = new stdClass();
  $pane->pid = 'new-e41d970b-392a-47ac-8f84-5297266fc031';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'e41d970b-392a-47ac-8f84-5297266fc031';
  $display->content['new-e41d970b-392a-47ac-8f84-5297266fc031'] = $pane;
  $display->panels['left'][9] = 'new-e41d970b-392a-47ac-8f84-5297266fc031';
  $pane = new stdClass();
  $pane->pid = 'new-a487c5ef-b05d-4132-99c2-c711e8862059';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-11';
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'a487c5ef-b05d-4132-99c2-c711e8862059';
  $display->content['new-a487c5ef-b05d-4132-99c2-c711e8862059'] = $pane;
  $display->panels['left'][10] = 'new-a487c5ef-b05d-4132-99c2-c711e8862059';
  $pane = new stdClass();
  $pane->pid = 'new-8f9e18fa-c0e3-4168-aca9-0b0fbc5aecc1';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-12';
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
  $pane->uuid = '8f9e18fa-c0e3-4168-aca9-0b0fbc5aecc1';
  $display->content['new-8f9e18fa-c0e3-4168-aca9-0b0fbc5aecc1'] = $pane;
  $display->panels['right'][0] = 'new-8f9e18fa-c0e3-4168-aca9-0b0fbc5aecc1';
  $pane = new stdClass();
  $pane->pid = 'new-985d2567-3e7e-42ee-adba-bb40372d8bc6';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-13';
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
  $pane->uuid = '985d2567-3e7e-42ee-adba-bb40372d8bc6';
  $display->content['new-985d2567-3e7e-42ee-adba-bb40372d8bc6'] = $pane;
  $display->panels['right'][1] = 'new-985d2567-3e7e-42ee-adba-bb40372d8bc6';
  $pane = new stdClass();
  $pane->pid = 'new-6d65e184-6821-4657-bcb2-7a58854dab62';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'hybridauth-hybridauth';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
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
  $pane->uuid = '6d65e184-6821-4657-bcb2-7a58854dab62';
  $display->content['new-6d65e184-6821-4657-bcb2-7a58854dab62'] = $pane;
  $display->panels['right'][2] = 'new-6d65e184-6821-4657-bcb2-7a58854dab62';
  $pane = new stdClass();
  $pane->pid = 'new-bc526c4b-dc44-498b-9e43-4c2f5048533e';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'formblock-user_register';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<hr>or<hr>',
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
  $pane->uuid = 'bc526c4b-dc44-498b-9e43-4c2f5048533e';
  $display->content['new-bc526c4b-dc44-498b-9e43-4c2f5048533e'] = $pane;
  $display->panels['right'][3] = 'new-bc526c4b-dc44-498b-9e43-4c2f5048533e';
  $display->hide_title = PANELS_TITLE_NONE;
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
        ),
        'parent' => 'canvas',
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
  $pane->pid = 'new-f9707f63-3932-4374-8218-91443089c0ae';
  $pane->panel = 'top';
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
  $pane->uuid = 'f9707f63-3932-4374-8218-91443089c0ae';
  $display->content['new-f9707f63-3932-4374-8218-91443089c0ae'] = $pane;
  $display->panels['top'][0] = 'new-f9707f63-3932-4374-8218-91443089c0ae';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['register'] = $page;

  return $pages;

}
