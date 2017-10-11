<?php
/**
 * @file
 * form_block_registration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function form_block_registration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
