<?php
/**
 * @file
 * invest_eu_core.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function invest_eu_core_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bluebox|node|project|form';
  $field_group->group_name = 'group_bluebox';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Blue box',
    'weight' => '10',
    'children' => array(
      0 => 'field_coordinator',
      1 => 'field_partners',
      2 => 'field_eu_funding',
      3 => 'field_project_location',
      4 => 'field_timeframe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bluebox field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_bluebox|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta|node|home_page|form';
  $field_group->group_name = 'group_cta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Call to action',
    'weight' => '7',
    'children' => array(
      0 => 'field_cta_image',
      1 => 'field_cta_copy',
      2 => 'field_cta_link',
      3 => 'field_cta_mobile_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cta field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cta|node|home_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_facts|node|project|form';
  $field_group->group_name = 'group_project_facts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project facts',
    'weight' => '9',
    'children' => array(
      0 => 'field_background_information',
      1 => 'field_external_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-facts field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_project_facts|node|project|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blue box');
  t('Call to action');
  t('Project facts');

  return $field_groups;
}
