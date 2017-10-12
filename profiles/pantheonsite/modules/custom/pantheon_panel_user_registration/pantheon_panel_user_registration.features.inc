<?php
/**
 * @file
 * pantheon_panel_user_registration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pantheon_panel_user_registration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
