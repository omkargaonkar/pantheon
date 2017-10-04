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
function pantheonprofile_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}

/**
  * Implementing the hook_install_tasks()*
  */

function Pantheonprofile_install_tasks(&$install_state) {
 $tasks = array();
 $tasks['Pantheonprofile_default_content'] = array();
 return $tasks;
}

function Pantheonprofile_default_content() {
  $result = db_query("SELECT rid FROM {role} where name like :id",array(':id' => 'administrator'));
   $admin_rid = $result->fetchField(0);
   $u_roles = user_roles();
   unset($u_roles[1]);
   unset($u_roles[2]);
   unset($u_roles[$admin_rid]);
   foreach($u_roles as $key => $value) {
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
