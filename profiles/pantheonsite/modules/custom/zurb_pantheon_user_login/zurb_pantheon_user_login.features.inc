<?php
/**
 * @file
 * zurb_pantheon_user_login.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function zurb_pantheon_user_login_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
