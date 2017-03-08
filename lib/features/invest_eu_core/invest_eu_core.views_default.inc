<?php
/**
 * @file
 * invest_eu_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function invest_eu_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'project_updates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project updates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project updates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_project_target_id']['id'] = 'field_parent_project_target_id';
  $handler->display->display_options['relationships']['field_parent_project_target_id']['table'] = 'field_data_field_parent_project';
  $handler->display->display_options['relationships']['field_parent_project_target_id']['field'] = 'field_parent_project_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  /* Field: Content: Multimedia */
  $handler->display->display_options['fields']['field_update_multimedia']['id'] = 'field_update_multimedia';
  $handler->display->display_options['fields']['field_update_multimedia']['table'] = 'field_data_field_update_multimedia';
  $handler->display->display_options['fields']['field_update_multimedia']['field'] = 'field_update_multimedia';
  $handler->display->display_options['fields']['field_update_multimedia']['label'] = '';
  $handler->display->display_options['fields']['field_update_multimedia']['element_type'] = '0';
  $handler->display->display_options['fields']['field_update_multimedia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_update_multimedia']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_update_multimedia']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_update_multimedia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_update_multimedia']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  /* Field: Content: Slideshow */
  $handler->display->display_options['fields']['field_update_slideshow']['id'] = 'field_update_slideshow';
  $handler->display->display_options['fields']['field_update_slideshow']['table'] = 'field_data_field_update_slideshow';
  $handler->display->display_options['fields']['field_update_slideshow']['field'] = 'field_update_slideshow';
  $handler->display->display_options['fields']['field_update_slideshow']['label'] = '';
  $handler->display->display_options['fields']['field_update_slideshow']['element_type'] = '0';
  $handler->display->display_options['fields']['field_update_slideshow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_update_slideshow']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_update_slideshow']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_update_slideshow']['settings'] = array(
    'image_style' => 'gallery_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_update_slideshow']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_update_slideshow']['separator'] = '';
  /* Field: Content: Slideshow */
  $handler->display->display_options['fields']['field_update_slideshow_1']['id'] = 'field_update_slideshow_1';
  $handler->display->display_options['fields']['field_update_slideshow_1']['table'] = 'field_data_field_update_slideshow';
  $handler->display->display_options['fields']['field_update_slideshow_1']['field'] = 'field_update_slideshow';
  $handler->display->display_options['fields']['field_update_slideshow_1']['label'] = '';
  $handler->display->display_options['fields']['field_update_slideshow_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_update_slideshow_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_update_slideshow_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_update_slideshow_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_update_slideshow_1']['settings'] = array(
    'image_style' => 'gallery_full',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_update_slideshow_1']['delta_offset'] = '0';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_parent_project_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd/m/Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: External links */
  $handler->display->display_options['fields']['field_external_links']['id'] = 'field_external_links';
  $handler->display->display_options['fields']['field_external_links']['table'] = 'field_data_field_external_links';
  $handler->display->display_options['fields']['field_external_links']['field'] = 'field_external_links';
  $handler->display->display_options['fields']['field_external_links']['label'] = '';
  $handler->display->display_options['fields']['field_external_links']['element_type'] = '0';
  $handler->display->display_options['fields']['field_external_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_links']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_external_links']['element_wrapper_class'] = 'field-name-field-external-links';
  $handler->display->display_options['fields']['field_external_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_external_links']['separator'] = '';
  /* Field: Content: Docs to download */
  $handler->display->display_options['fields']['field_docs_to_download']['id'] = 'field_docs_to_download';
  $handler->display->display_options['fields']['field_docs_to_download']['table'] = 'field_data_field_docs_to_download';
  $handler->display->display_options['fields']['field_docs_to_download']['field'] = 'field_docs_to_download';
  $handler->display->display_options['fields']['field_docs_to_download']['label'] = '';
  $handler->display->display_options['fields']['field_docs_to_download']['element_type'] = '0';
  $handler->display->display_options['fields']['field_docs_to_download']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_docs_to_download']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_docs_to_download']['element_wrapper_class'] = 'field-name-field-docs-to-download';
  $handler->display->display_options['fields']['field_docs_to_download']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_docs_to_download']['type'] = 'file_table';
  $handler->display->display_options['fields']['field_docs_to_download']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_docs_to_download']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = '0';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_update_subtitle']['id'] = 'field_update_subtitle';
  $handler->display->display_options['fields']['field_update_subtitle']['table'] = 'field_data_field_update_subtitle';
  $handler->display->display_options['fields']['field_update_subtitle']['field'] = 'field_update_subtitle';
  $handler->display->display_options['fields']['field_update_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_update_subtitle']['element_type'] = '0';
  $handler->display->display_options['fields']['field_update_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_update_subtitle']['element_wrapper_type'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Parent Project (field_parent_project) */
  $handler->display->display_options['arguments']['field_parent_project_target_id']['id'] = 'field_parent_project_target_id';
  $handler->display->display_options['arguments']['field_parent_project_target_id']['table'] = 'field_data_field_parent_project';
  $handler->display->display_options['arguments']['field_parent_project_target_id']['field'] = 'field_parent_project_target_id';
  $handler->display->display_options['arguments']['field_parent_project_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_project_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_parent_project_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_project_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_project_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project_update' => 'project_update',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['project_updates'] = $view;

  $view = new view();
  $view->name = 'projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_project_location_country' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All countries',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_sector_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All categories',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'preview-project';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Your search yielded no results, please try again or <a href="/projects">reset your search</a>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_parent_project_node']['id'] = 'reverse_field_parent_project_node';
  $handler->display->display_options['relationships']['reverse_field_parent_project_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_parent_project_node']['field'] = 'reverse_field_parent_project_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: About this project */
  $handler->display->display_options['fields']['field_about_project']['id'] = 'field_about_project';
  $handler->display->display_options['fields']['field_about_project']['table'] = 'field_data_field_about_project';
  $handler->display->display_options['fields']['field_about_project']['field'] = 'field_about_project';
  $handler->display->display_options['fields']['field_about_project']['label'] = '';
  $handler->display->display_options['fields']['field_about_project']['alter']['max_length'] = '550';
  $handler->display->display_options['fields']['field_about_project']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_about_project']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_about_project']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_about_project']['group_columns'] = array(
    'format' => 'format',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = '0';
  /* Field: Content: Visual */
  $handler->display->display_options['fields']['field_visual']['id'] = 'field_visual';
  $handler->display->display_options['fields']['field_visual']['table'] = 'field_data_field_visual';
  $handler->display->display_options['fields']['field_visual']['field'] = 'field_visual';
  $handler->display->display_options['fields']['field_visual']['label'] = '';
  $handler->display->display_options['fields']['field_visual']['element_type'] = '0';
  $handler->display->display_options['fields']['field_visual']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visual']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_visual']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_visual']['settings'] = array(
    'image_style' => 'gallery_thumb',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_visual']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_visual']['separator'] = '';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = '0';
  /* Field: Content: Visual */
  $handler->display->display_options['fields']['field_visual_1']['id'] = 'field_visual_1';
  $handler->display->display_options['fields']['field_visual_1']['table'] = 'field_data_field_visual';
  $handler->display->display_options['fields']['field_visual_1']['field'] = 'field_visual';
  $handler->display->display_options['fields']['field_visual_1']['label'] = '';
  $handler->display->display_options['fields']['field_visual_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_visual_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_visual_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_visual_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_visual_1']['settings'] = array(
    'image_style' => 'teaser_box',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_visual_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_visual_1']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_type'] = '0';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project location - Country */
  $handler->display->display_options['filters']['field_project_location_country']['id'] = 'field_project_location_country';
  $handler->display->display_options['filters']['field_project_location_country']['table'] = 'field_data_field_project_location';
  $handler->display->display_options['filters']['field_project_location_country']['field'] = 'field_project_location_country';
  $handler->display->display_options['filters']['field_project_location_country']['value'] = array(
    'AT' => 'AT',
    'BE' => 'BE',
    'BG' => 'BG',
    'HR' => 'HR',
    'CY' => 'CY',
    'CZ' => 'CZ',
    'DK' => 'DK',
    'EE' => 'EE',
    'FI' => 'FI',
    'FR' => 'FR',
    'DE' => 'DE',
    'GR' => 'GR',
    'HU' => 'HU',
    'IE' => 'IE',
    'LV' => 'LV',
    'LT' => 'LT',
    'LU' => 'LU',
    'NL' => 'NL',
    'PL' => 'PL',
    'PT' => 'PT',
    'RO' => 'RO',
    'SK' => 'SK',
    'SI' => 'SI',
    'ES' => 'ES',
    'SE' => 'SE',
    'GB' => 'GB',
  );
  $handler->display->display_options['filters']['field_project_location_country']['group'] = 1;
  $handler->display->display_options['filters']['field_project_location_country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_location_country']['expose']['operator_id'] = 'field_project_location_country_op';
  $handler->display->display_options['filters']['field_project_location_country']['expose']['operator'] = 'field_project_location_country_op';
  $handler->display->display_options['filters']['field_project_location_country']['expose']['identifier'] = 'country';
  $handler->display->display_options['filters']['field_project_location_country']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_project_location_country']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Sector (field_sector) */
  $handler->display->display_options['filters']['field_sector_tid']['id'] = 'field_sector_tid';
  $handler->display->display_options['filters']['field_sector_tid']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_tid']['field'] = 'field_sector_tid';
  $handler->display->display_options['filters']['field_sector_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_tid']['expose']['operator_id'] = 'field_sector_tid_op';
  $handler->display->display_options['filters']['field_sector_tid']['expose']['operator'] = 'field_sector_tid_op';
  $handler->display->display_options['filters']['field_sector_tid']['expose']['identifier'] = 'sector';
  $handler->display->display_options['filters']['field_sector_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_sector_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sector_tid']['vocabulary'] = 'sector';
  $handler->display->display_options['filters']['field_sector_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: About this project (field_about_project:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_field_about_project';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'projects';
  $export['projects'] = $view;

  return $export;
}
