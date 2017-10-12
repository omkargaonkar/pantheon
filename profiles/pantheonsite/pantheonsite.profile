<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function pantheonsite_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}

/**
  * Implementing the hook_install_tasks()*
  */

function pantheonsite_install_tasks(&$install_state) {
  $tasks = array();
  $tasks['pantheonsite_default_user'] = array();
  return $tasks;
}

/**
  * Implementing the pantheonsite_default_user() create the custom user *
  */


function pantheonsite_default_user() {
  $roles = user_roles();
  $admin_user = variable_get('user_admin_role');
  unset($roles[$admin_user]);
  unset($roles[DRUPAL_ANONYMOUS_RID]);
  unset($roles[DRUPAL_AUTHENTICATED_RID]);
  foreach($roles as $key => $value) {
    $mail = 'test-' . $value . '@osseed.com';
    $new_user = array(
       'name' => $value,
       'mail' => strtolower($mail),
       'pass' => strtolower($value),
       'status' => 1,
       'init' => $mail,
       'roles' =>array(
         $key => $value,
       ),
     );
     user_save('',$new_user);
   }
}
