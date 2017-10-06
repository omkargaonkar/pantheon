<?php

/**
 * Implements template_preprocess_html().
 */
function zurb_pantheon_preprocess_html(&$variables) {
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
/**
* Implements hook_form_alter().
*/
function zurb_pantheon_form_alter(&$form, &$form_state, $form_id) {
  switch($form_id) {
  case 'user_register_form': // the value we stole from the rendered form
  $form['lable'] = array(
    '#type' => 'lable',
    '#title' => 'lable',
    '#required' => TRUE,
    '#weight' => 1,
  );

  $form['password'] = array(
   '#type' => 'password',
   '#title' => t('Password'),
  //  '#description' => t('Please enter your password'),
   '#size' => 32,
   '#maxlength' => 32,
   '#required' => TRUE,
   '#weight' => 9,

 );
 $form['checkbox'] = array(
  '#type' => 'checkbox',
  '#title' => '(additional DevOps tools for agency developers)
    By creating an account, you agree to our',
  '#weight' => 10, // Adjust so that you can place it whereever
  );
     break;
 }
}
