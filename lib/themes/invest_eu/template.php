<?php

/**
 * @file
 * Theme preprocess functions.
 */

/**
 * Implements hook_preprocess_node().
 */
function invest_eu_preprocess_node(&$vars) {
  // Global.
  global $base_url;
  $vars['share_url'] = $base_url . $vars['node_url'];
  $vars['img_path'] = '/' . path_to_theme() . '/images/';
  // Project page.
  if ($vars['type'] == 'project') {
    $vars['theme_hook_suggestions'][] = 'node__project_' . $vars['view_mode'];

    if ($vars['view_mode'] == 'full') {
      $vars['project_updates'] = views_embed_view('project_updates', 'block');
      // Format banner with video.
      $vars['video_banner'] = FALSE;
      if (!empty($vars['field_video'])) {
        $vars['video_banner'] = TRUE;
      }
      if (!empty($vars['field_eu_funding']) && $vars['field_eu_funding'][0]['value'] > 0) {
        $vars['eu_funding'] = number_format($vars['field_eu_funding'][0]['value'], 0, ",", " ");
      }
      if (!empty($vars['field_timeframe'])) {
        $vars['timeframe'] = date("Y", $vars['field_timeframe'][0]['value']);
        if (!empty($vars['field_timeframe'][0]['value2'])) {
          $vars['timeframe'] .= ' - ' . date("Y", $vars['field_timeframe'][0]['value2']);
        }
      }
      if (!empty($vars['field_project_location'])) {
        $countries_list = country_get_list();
        $country_code = $vars['field_project_location'][0]['country'];
        $country = $countries_list[$country_code];
        $vars['location'] = $country;
        if (!empty($vars['field_project_location'][0]['locality'])) {
          $vars['location'] .= ', ' . $vars['field_project_location'][0]['locality'];
        }
      }

    }
    if ($vars['view_mode'] == 'teaser') {

      $vars['date'] = FALSE;
      if (!empty($vars['content']['field_timeframe'])) {
        $timestamp = $vars['content']['field_timeframe']['#items'][0]['value'];
        $vars['date'] = date("d/m/Y", $timestamp);
      }
      $vars['img'] = FALSE;
      if (isset($vars['content']['field_visual'])) {
        $uri = $vars['content']['field_visual'][0]['#item']['uri'];
        $img_variables = array(
          'style_name' => 'teaser_box',
          'path' => $uri,
          'alt' => $vars['node']->title,
          'title' => $vars['node']->title,
        );
        $vars['img'] = theme('image_style', $img_variables);
      }
    }
  }

  if ($vars['type'] == 'home_page') {

    // All CTA field are required.
    $vars['cta_copy'] = $vars['content']['field_cta_copy'][0]['#markup'];
    $cta_uri = $vars['content']['field_cta_image'][0]['#item']['uri'];
    $img_variables = array(
      'style_name' => 'banner',
      'path' => $cta_uri,
      'attributes' => array('class' => 'desktop-banner'),
      'alt' => $vars['cta_copy'],
      'title' => $vars['cta_copy'],
    );
    $vars['cta_img'] = theme('image_style', $img_variables);
    $cta_mob_uri = $vars['content']['field_cta_mobile_image'][0]['#item']['uri'];
    $img_mob_variables = array(
      'style_name' => 'mobile_banner',
      'path' => $cta_mob_uri,
      'attributes' => array('class' => 'resp-banner'),
      'alt' => $vars['cta_copy'],
      'title' => $vars['cta_copy'],
    );
    $vars['cta_mob_img'] = theme('image_style', $img_mob_variables);
    $vars['cta_link_title'] = $vars['content']['field_cta_link'][0]['#element']['title'];
    $vars['cta_link_url'] = $vars['content']['field_cta_link'][0]['#element']['url'];
  }
}

/**
 * Implements theme_menu_link__menu_breadcrumb_menu().
 */
function invest_eu_menu_link__menu_breadcrumb_menu(array $variables) {
  if ($node = menu_get_object()) {
  }
  global $base_url;
  $separator = variable_get('easy_breadcrumb-segments_separator');
  $element = $variables['element'];
  if ($element['#title'] == 'European Commission') {
    global $language;
    $element['#title'] = t('Europa');
    $element['#href'] = 'http://europa.eu/index_' . $language->language . '.htm';
  }
  // Format output.
  $element['#localized_options']['html'] = TRUE;
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  $output .= '<span class="easy-breadcrumb_segment-separator"> ' . $separator . ' </span>';
  $output .= l(t("Invest EU"), $base_url);
  if ($node = menu_get_object() && $node->type == 'project') {
    $output .= '<span class="easy-breadcrumb_segment-separator"> ' . $separator . ' </span>';
    $output .= l(t("Projects"), "/projects");
  }
  return $output;
}

/**
 * Implements hook_preprocess_node().
 */
function invest_eu_preprocess_page(&$vars) {

  if (isset($vars['node']) && $vars['node']->type == 'project') {

  }
  $vars['mobile_search'] = drupal_get_form('search_block_form');
}

/**
 * Format file links.
 */
function invest_eu_file_formatter_table($variables) {
  $output = '';
  foreach ($variables['items'] as $item) {

    $output .= '<div class="file-to-download">' . theme('file_link', array('file' => (object) $item));
    $output .= ' (' . format_size($item['filesize']) . ')</div>';
  }

  return $output;
}

/**
 * Implements hook_preprocess_field().
 *
 * Enable this back to use node title for image alts and titles.
 *
 * Function invest_eu_preprocess_field(&$vars, $hook) {
 * //Make sure field alt and title atributes are always populated
 * if($vars['element']['#field_type'] == 'image' &&
 * ($vars['element']['#entity_type'] == 'node')) {
 * $node_title = $vars['element']['#object']->title;
 * foreach($vars['items'] as $delta => $item){
 * if(empty($item['#item']['alt'])){
 * $vars['items'][$delta]['#item']['alt'] = $node_title;
 * }
 * if(empty($item['#item']['title'])){
 * $vars['items'][$delta]['#item']['title'] = $node_title;
 * }
 * }
 * }
 * }
*/
