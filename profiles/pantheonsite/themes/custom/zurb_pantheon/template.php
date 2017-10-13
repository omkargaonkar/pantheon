<?php

/**
 * Implements template_preprocess_html().
 */
function zurb_pantheon_preprocess_html(&$variables) {
  drupal_add_css('https://fonts.googleapis.com/css?family=Cabin+Condensed',array(
    'type' => 'external'));

    drupal_add_css('https://fonts.googleapis.com/css?family=Archivo+Black',array(
      'type' => 'external'));
}

/**
 * Implements template_preprocess_page.
 */
function zurb_pantheon_preprocess_page(&$variables) {
}

/**
 * Implements template_preprocess_node.
 */
function zurb_pantheon_preprocess_node(&$variables) {
}
function zurb_pantheon_preprocess_breadcrumb(&$variables)
{
  array_pop($variables['breadcrumb']);
}
