<?php
/**
 * @file
 * invest_eu_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function invest_eu_permissions_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = (object) array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: contributor.
  $roles['contributor'] = (object) array(
    'name' => 'contributor',
    'weight' => 3,
  );

  // Exported role: editor.
  $roles['editor'] = (object) array(
    'name' => 'editor',
    'weight' => 4,
  );

  return $roles;
}
