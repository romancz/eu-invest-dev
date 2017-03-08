<?php
/**
 * @file
 * invest_eu_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function invest_eu_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function invest_eu_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function invest_eu_core_image_default_styles() {
  $styles = array();

  // Exported image style: banner.
  $styles['banner'] = array(
    'label' => 'banner',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 387,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_full.
  $styles['gallery_full'] = array(
    'label' => 'gallery_full',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 890,
          'height' => 485,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_thumb.
  $styles['gallery_thumb'] = array(
    'label' => 'gallery_thumb',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 62,
          'height' => 62,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mobile_banner.
  $styles['mobile_banner'] = array(
    'label' => 'mobile_banner',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 660,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: teaser_box.
  $styles['teaser_box'] = array(
    'label' => 'teaser_box',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 215,
          'height' => 162,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function invest_eu_core_node_info() {
  $items = array(
    'home_page' => array(
      'name' => t('Home page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('Project page, all content is to be imported form the source site, do not edit this content type directly - any changes will be overriten by import script!'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'project_update' => array(
      'name' => t('Project update'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
