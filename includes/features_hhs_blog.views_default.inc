<?php
/**
 * @file
 * features_hhs_blog.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_hhs_blog_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'archive_years';
  $view->description = 'Display a list of months that link to content for that month.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog: Archive years';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blog Archives';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Sort criterion: Content: Date Posted (field_post_date) */
  $handler->display->display_options['sorts']['field_post_date_value']['id'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['sorts']['field_post_date_value']['field'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Related Blog Posts */
  $handler = $view->new_display('block', 'Related Blog Posts', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blog Archives';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'year_month_list_view_mode';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_post_date|field_post_date_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'year_month_list_view_mode';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'external_blog_post' => 'external_blog_post',
    'internal_blog_post' => 'internal_blog_post',
  );

  /* Display: Testimony Archives */
  $handler = $view->new_display('block', 'Testimony Archives', 'testimony');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Testimony Archives';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'year_month_list_view_mode';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_post_date|field_post_date_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'year_month_list_view_mode';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Testimony Date (field_testimony_date) */
  $handler->display->display_options['sorts']['field_testimony_date_value']['id'] = 'field_testimony_date_value';
  $handler->display->display_options['sorts']['field_testimony_date_value']['table'] = 'field_data_field_testimony_date';
  $handler->display->display_options['sorts']['field_testimony_date_value']['field'] = 'field_testimony_date_value';
  $handler->display->display_options['sorts']['field_testimony_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'testimony' => 'testimony',
  );
  $translatables['archive_years'] = array(
    t('Master'),
    t('Blog Archives'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Related Blog Posts'),
    t('Testimony Archives'),
  );
  $export['archive_years'] = $view;

  $view = new view();
  $view->name = 'authors_view';
  $view->description = 'Provides a teaser list of blog posts';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog: Authors View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'blog-post';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Date Posted (field_post_date) */
  $handler->display->display_options['sorts']['field_post_date_value']['id'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['sorts']['field_post_date_value']['field'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'external_blog_post' => 'external_blog_post',
    'internal_blog_post' => 'internal_blog_post',
  );
  $translatables['authors_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
  );
  $export['authors_view'] = $view;

  $view = new view();
  $view->name = 'blog_home';
  $view->description = 'A view for showing up selected blog posts on home';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog: home';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Selected HHS Blog Posts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« First';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ Previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Next ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'Last »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Date Posted (field_post_date) */
  $handler->display->display_options['sorts']['field_post_date_value']['id'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['sorts']['field_post_date_value']['field'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'external_blog_post' => 'external_blog_post',
    'internal_blog_post' => 'internal_blog_post',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date Posted (field_post_date) */
  $handler->display->display_options['filters']['field_post_date_value']['id'] = 'field_post_date_value';
  $handler->display->display_options['filters']['field_post_date_value']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['filters']['field_post_date_value']['field'] = 'field_post_date_value';
  $handler->display->display_options['filters']['field_post_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_post_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_post_date_value']['year_range'] = '-3:+0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'blog-post';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date Posted */
  $handler->display->display_options['fields']['field_post_date']['id'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['fields']['field_post_date']['field'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['label'] = '';
  $handler->display->display_options['fields']['field_post_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_blog_post_image']['id'] = 'field_blog_post_image';
  $handler->display->display_options['fields']['field_blog_post_image']['table'] = 'field_data_field_blog_post_image';
  $handler->display->display_options['fields']['field_blog_post_image']['field'] = 'field_blog_post_image';
  $handler->display->display_options['fields']['field_blog_post_image']['label'] = '';
  $handler->display->display_options['fields']['field_blog_post_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_post_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_blog_post_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_blog_post_image']['delta_limit'] = 'all';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Topic Category */
  $handler->display->display_options['fields']['field_categorized']['id'] = 'field_categorized';
  $handler->display->display_options['fields']['field_categorized']['table'] = 'field_data_field_categorized';
  $handler->display->display_options['fields']['field_categorized']['field'] = 'field_categorized';
  $handler->display->display_options['fields']['field_categorized']['label'] = 'Posted in';
  /* Field: Content: Topic Tags */
  $handler->display->display_options['fields']['field_tagged']['id'] = 'field_tagged';
  $handler->display->display_options['fields']['field_tagged']['table'] = 'field_data_field_tagged';
  $handler->display->display_options['fields']['field_tagged']['field'] = 'field_tagged';
  $handler->display->display_options['fields']['field_tagged']['label'] = 'Tagged';
  $handler->display->display_options['fields']['field_tagged']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tagged']['separator'] = ' | ';
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => '[view:title] page [current-page:page-number] | [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[view:description]',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'robots' => array(
        'value' => array(
          'noodp' => 'noodp',
          'noydir' => 'noydir',
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
        'default' => array(
          'noodp' => 'noodp',
          'noydir' => 'noydir',
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'standout' => array(
        'value' => '',
        'default' => '',
      ),
      'rights' => array(
        'value' => '',
        'default' => '',
      ),
      'image_src' => array(
        'value' => '',
        'default' => '',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
        'default' => '[current-page:url:unaliased]',
      ),
      'publisher' => array(
        'value' => 'https://plus.google.com/+HHS',
        'default' => 'https://plus.google.com/+HHS',
      ),
      'author' => array(
        'value' => '',
        'default' => '',
      ),
      'original-source' => array(
        'value' => '',
        'default' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
        'default' => '',
      ),
      'content-language' => array(
        'value' => '',
        'default' => '',
      ),
      'dcterms.title' => array(
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'dcterms.creator' => array(
        'value' => 'Assistant Secretary for Public Affairs (ASPA)',
        'default' => 'Assistant Secretary for Public Affairs (ASPA)',
      ),
      'dcterms.subject' => array(
        'value' => 'Blog List',
        'default' => '',
      ),
      'dcterms.description' => array(
        'value' => '',
        'default' => '',
      ),
      'dcterms.publisher' => array(
        'value' => '',
        'default' => '',
      ),
      'dcterms.contributor' => array(
        'value' => '',
        'default' => '',
      ),
      'dcterms.date' => array(
        'value' => '',
        'default' => '',
      ),
      'dcterms.modified' => array(
        'value' => '',
        'default' => '',
      ),
      'dcterms.type' => array(
        'value' => 'Text',
        'default' => 'Text',
      ),
      'dcterms.format' => array(
        'value' => 'text/html',
        'default' => 'text/html',
      ),
      'dcterms.identifier' => array(
        'value' => '[current-page:url:absolute]',
        'default' => '[current-page:url:absolute]',
      ),
      'dcterms.source' => array(
        'value' => '',
        'default' => '',
      ),
      'dcterms.language' => array(
        'value' => '',
        'default' => '',
      ),
      'dcterms.relation' => array(
        'value' => '',
        'default' => '',
      ),
      'dcterms.coverage' => array(
        'value' => '',
        'default' => '',
      ),
      'dcterms.rights' => array(
        'value' => '',
        'default' => '',
      ),
      'fb:admins' => array(
        'value' => '',
        'default' => '',
      ),
      'fb:app_id' => array(
        'value' => '',
        'default' => '',
      ),
      'itemtype' => array(
        'value' => 'Organization',
        'default' => 'Organization',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'itemprop:description' => array(
        'value' => '',
        'default' => '',
      ),
      'itemprop:image' => array(
        'value' => '',
        'default' => '',
      ),
      'og:type' => array(
        'value' => 'website',
        'default' => 'website',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
        'default' => '[current-page:url:absolute]',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'og:determiner' => array(
        'value' => '',
        'default' => '',
      ),
      'og:description' => array(
        'value' => '',
        'default' => '',
      ),
      'og:updated_time' => array(
        'value' => '',
        'default' => '',
      ),
      'og:see_also' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:type' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:width' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:height' => array(
        'value' => '',
        'default' => '',
      ),
      'og:latitude' => array(
        'value' => '',
        'default' => '',
      ),
      'og:longitude' => array(
        'value' => '',
        'default' => '',
      ),
      'og:street-address' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locality' => array(
        'value' => '',
        'default' => '',
      ),
      'og:region' => array(
        'value' => '',
        'default' => '',
      ),
      'og:postal-code' => array(
        'value' => '',
        'default' => '',
      ),
      'og:country-name' => array(
        'value' => '',
        'default' => '',
      ),
      'og:email' => array(
        'value' => '',
        'default' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
        'default' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locale' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locale:alternate' => array(
        'value' => '',
        'default' => '',
      ),
      'article:author' => array(
        'value' => '',
        'default' => '',
      ),
      'article:publisher' => array(
        'value' => '',
        'default' => '',
      ),
      'article:section' => array(
        'value' => '',
        'default' => '',
      ),
      'article:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'article:published_time' => array(
        'value' => '',
        'default' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
        'default' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:username' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:gender' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
        'default' => '',
      ),
      'book:author' => array(
        'value' => '',
        'default' => '',
      ),
      'book:isbn' => array(
        'value' => '',
        'default' => '',
      ),
      'book:release_date' => array(
        'value' => '',
        'default' => '',
      ),
      'book:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:width' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:height' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:type' => array(
        'value' => '',
        'default' => '',
      ),
      'video:actor' => array(
        'value' => '',
        'default' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
        'default' => '',
      ),
      'video:director' => array(
        'value' => '',
        'default' => '',
      ),
      'video:writer' => array(
        'value' => '',
        'default' => '',
      ),
      'video:duration' => array(
        'value' => '',
        'default' => '',
      ),
      'video:release_date' => array(
        'value' => '',
        'default' => '',
      ),
      'video:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'video:series' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:card' => array(
        'value' => 'summary',
        'default' => 'summary',
      ),
      'twitter:creator' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
        'default' => '[current-page:url:absolute]',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'twitter:description' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image:src' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image:width' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image0' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:name:iphone' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:name:ipad' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:name:googleplay' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:label1' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
        'default' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'blog/index.html';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'body',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'path';
  $handler->display->display_options['row_options']['description_field'] = 'body';
  $handler->display->display_options['row_options']['creator_field'] = 'field_blog_post_author';
  $handler->display->display_options['row_options']['date_field'] = 'field_post_date';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'title',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date Posted */
  $handler->display->display_options['fields']['field_post_date']['id'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['fields']['field_post_date']['field'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['label'] = '';
  $handler->display->display_options['fields']['field_post_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_post_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Description & Summary */
  $handler->display->display_options['fields']['field_description_summary']['id'] = 'field_description_summary';
  $handler->display->display_options['fields']['field_description_summary']['table'] = 'field_data_field_description_summary';
  $handler->display->display_options['fields']['field_description_summary']['field'] = 'field_description_summary';
  $handler->display->display_options['fields']['field_description_summary']['label'] = '';
  $handler->display->display_options['fields']['field_description_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_blog_post_author']['id'] = 'field_blog_post_author';
  $handler->display->display_options['fields']['field_blog_post_author']['table'] = 'field_data_field_blog_post_author';
  $handler->display->display_options['fields']['field_blog_post_author']['field'] = 'field_blog_post_author';
  $handler->display->display_options['fields']['field_blog_post_author']['label'] = '';
  $handler->display->display_options['fields']['field_blog_post_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_blog_post_author']['alter']['text'] = 'By: Office of the Secretary';
  $handler->display->display_options['fields']['field_blog_post_author']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_blog_post_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_post_author']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_blog_post_author']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
  );
  /* Field: Content: Topic Tags */
  $handler->display->display_options['fields']['field_tagged']['id'] = 'field_tagged';
  $handler->display->display_options['fields']['field_tagged']['table'] = 'field_data_field_tagged';
  $handler->display->display_options['fields']['field_tagged']['field'] = 'field_tagged';
  $handler->display->display_options['fields']['field_tagged']['label'] = '';
  $handler->display->display_options['fields']['field_tagged']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tagged']['delta_offset'] = '0';
  /* Field: Content: Topic Category */
  $handler->display->display_options['fields']['field_categorized']['id'] = 'field_categorized';
  $handler->display->display_options['fields']['field_categorized']['table'] = 'field_data_field_categorized';
  $handler->display->display_options['fields']['field_categorized']['field'] = 'field_categorized';
  $handler->display->display_options['fields']['field_categorized']['label'] = '';
  $handler->display->display_options['fields']['field_categorized']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_categorized']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]
Posted in: [field_categorized]<br>
Tagged: [field_tagged]
';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'rss/blog.xml';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'urlset';
  $handler->display->display_options['style_options']['item_node'] = 'url';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'loc';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date Created */
  $handler->display->display_options['fields']['field_create_date']['id'] = 'field_create_date';
  $handler->display->display_options['fields']['field_create_date']['table'] = 'field_data_field_create_date';
  $handler->display->display_options['fields']['field_create_date']['field'] = 'field_create_date';
  $handler->display->display_options['fields']['field_create_date']['label'] = 'news:publication_date';
  $handler->display->display_options['fields']['field_create_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_create_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_create_date']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_create_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_create_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_create_date']['settings'] = array(
    'format_type' => 'year_month_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'news:keywords';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'authors' => 0,
    'categories' => 0,
    'external_blog_sites' => 0,
    'faq_careers' => 0,
    'faq_hipaa' => 0,
    'faq_human_subjects_research' => 0,
    'faq_sub_category' => 0,
    'faq_travel' => 0,
    'hhs_audience' => 0,
    'hhs_organization' => 0,
    'image_types' => 0,
    'offices' => 0,
    'section' => 0,
    'tags' => 0,
    'states_territories' => 0,
  );
  $handler->display->display_options['path'] = 'googlenews.xml';

  /* Display: Pager block */
  $handler = $view->new_display('freepager', 'Pager block', 'freepager_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="previous-post">Previous Post</span><br>[title]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<span class="next-post">Next Post</span><br>[title]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'nid';
  $handler->display->display_options['previous'] = 'nothing';
  $handler->display->display_options['next'] = 'nothing_1';
  $translatables['blog_home'] = array(
    t('Master'),
    t('Selected HHS Blog Posts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« First'),
    t('‹ Previous'),
    t('Next ›'),
    t('Last »'),
    t('Page'),
    t('« first'),
    t('‹'),
    t('›'),
    t('last »'),
    t('Posted in'),
    t('Tagged'),
    t('Feed'),
    t('By: Office of the Secretary'),
    t('[body]
Posted in: [field_categorized]<br>
Tagged: [field_tagged]
'),
    t('Data export'),
    t('loc'),
    t('news:publication_date'),
    t('news:keywords'),
    t('Pager block'),
    t('node/[nid]'),
    t('<span class="previous-post">Previous Post</span><br>[title]'),
    t('<span class="next-post">Next Post</span><br>[title]'),
  );
  $export['blog_home'] = $view;

  $view = new view();
  $view->name = 'categories_rightrail';
  $view->description = 'View to display blog categories listing on left sidebar';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Blog: Categories Navigation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Categories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content using Topic Category */
  $handler->display->display_options['relationships']['reverse_field_categorized_node']['id'] = 'reverse_field_categorized_node';
  $handler->display->display_options['relationships']['reverse_field_categorized_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_categorized_node']['field'] = 'reverse_field_categorized_node';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_categorized_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['prefix'] = '(';
  $handler->display->display_options['fields']['nid']['suffix'] = ')';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'categories' => 'categories',
  );
  /* Filter criterion: COUNT(Content: Nid) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_categorized_node';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_categorized_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'external_blog_post' => 'external_blog_post',
    'internal_blog_post' => 'internal_blog_post',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_categorized_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['prefix'] = '(';
  $handler->display->display_options['fields']['nid']['suffix'] = ')';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] [nid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $translatables['categories_rightrail'] = array(
    t('Master'),
    t('Categories'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_categorized'),
    t('Block'),
    t('[name] [nid]'),
  );
  $export['categories_rightrail'] = $view;

  $view = new view();
  $view->name = 'categories_view';
  $view->description = 'View to display blog posts for a category';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog: Categories Landing Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'blog-post';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date Posted */
  $handler->display->display_options['fields']['field_post_date']['id'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['fields']['field_post_date']['field'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['label'] = '';
  $handler->display->display_options['fields']['field_post_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Topic Category */
  $handler->display->display_options['fields']['field_categorized']['id'] = 'field_categorized';
  $handler->display->display_options['fields']['field_categorized']['table'] = 'field_data_field_categorized';
  $handler->display->display_options['fields']['field_categorized']['field'] = 'field_categorized';
  $handler->display->display_options['fields']['field_categorized']['label'] = 'Posted in';
  /* Field: Content: Topic Tags */
  $handler->display->display_options['fields']['field_tagged']['id'] = 'field_tagged';
  $handler->display->display_options['fields']['field_tagged']['table'] = 'field_data_field_tagged';
  $handler->display->display_options['fields']['field_tagged']['field'] = 'field_tagged';
  $handler->display->display_options['fields']['field_tagged']['label'] = 'Tagged';
  /* Sort criterion: Content: Date Posted (field_post_date) */
  $handler->display->display_options['sorts']['field_post_date_value']['id'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['sorts']['field_post_date_value']['field'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Topic Category (field_categorized) */
  $handler->display->display_options['arguments']['field_categorized_tid']['id'] = 'field_categorized_tid';
  $handler->display->display_options['arguments']['field_categorized_tid']['table'] = 'field_data_field_categorized';
  $handler->display->display_options['arguments']['field_categorized_tid']['field'] = 'field_categorized_tid';
  $handler->display->display_options['arguments']['field_categorized_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_categorized_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_categorized_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_categorized_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
    'external_blog_post' => 'external_blog_post',
    'internal_blog_post' => 'internal_blog_post',
  );
  $translatables['categories_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹'),
    t('›'),
    t('last »'),
    t('Posted in'),
    t('Tagged'),
    t('All'),
  );
  $export['categories_view'] = $view;

  $view = new view();
  $view->name = 'external_blog_sites_view';
  $view->description = 'View to display blog posts for an external site';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog: External blog sites';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'blog-post';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Date Posted (field_post_date) */
  $handler->display->display_options['sorts']['field_post_date_value']['id'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['sorts']['field_post_date_value']['field'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: External Blog Name (field_original_blog_name) */
  $handler->display->display_options['arguments']['field_original_blog_name_tid']['id'] = 'field_original_blog_name_tid';
  $handler->display->display_options['arguments']['field_original_blog_name_tid']['table'] = 'field_data_field_original_blog_name';
  $handler->display->display_options['arguments']['field_original_blog_name_tid']['field'] = 'field_original_blog_name_tid';
  $handler->display->display_options['arguments']['field_original_blog_name_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_original_blog_name_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_original_blog_name_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_original_blog_name_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'external_blog_post' => 'external_blog_post',
  );
  $translatables['external_blog_sites_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
  );
  $export['external_blog_sites_view'] = $view;

  $view = new view();
  $view->name = 'recent_posts';
  $view->description = 'View to get 3 blog posts';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog: Recent Posts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Posts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'long_title_view_mode';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'long_title_view_mode';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Date Posted (field_post_date) */
  $handler->display->display_options['sorts']['field_post_date_value']['id'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['sorts']['field_post_date_value']['field'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'external_blog_post' => 'external_blog_post',
    'internal_blog_post' => 'internal_blog_post',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['recent_posts'] = array(
    t('Master'),
    t('Recent Posts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['recent_posts'] = $view;

  $view = new view();
  $view->name = 'related_posts';
  $view->description = 'View to get a list of related blog posts';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog: Related Posts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Posts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'long_title_view_mode';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'long_title_view_mode';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Date Posted (field_post_date) */
  $handler->display->display_options['sorts']['field_post_date_value']['id'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['sorts']['field_post_date_value']['field'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Topic Category (field_categorized) */
  $handler->display->display_options['arguments']['field_categorized_tid']['id'] = 'field_categorized_tid';
  $handler->display->display_options['arguments']['field_categorized_tid']['table'] = 'field_data_field_categorized';
  $handler->display->display_options['arguments']['field_categorized_tid']['field'] = 'field_categorized_tid';
  $handler->display->display_options['arguments']['field_categorized_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_categorized_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_categorized_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_categorized_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_categorized_tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['field_categorized_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_categorized_tid']['default_argument_options']['vocabularies'] = array(
    'categories' => 'categories',
  );
  $handler->display->display_options['arguments']['field_categorized_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_categorized_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_categorized_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'external_blog_post' => 'external_blog_post',
    'internal_blog_post' => 'internal_blog_post',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related  Blog Posts';
  $translatables['related_posts'] = array(
    t('Master'),
    t('Related Posts'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
    t('Related  Blog Posts'),
  );
  $export['related_posts'] = $view;

  $view = new view();
  $view->name = 'sort_authors';
  $view->description = 'Get the listing of blog posts authors';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Blog: Sort authors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sort authors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Field: Taxonomy term: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_last_name],';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'authors' => 'authors',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_last_name' => 'field_last_name',
    'field_first_name' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = '';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['sort_authors'] = array(
    t('Master'),
    t('Sort authors'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_last_name],'),
    t('Block'),
    t('Entity Reference'),
  );
  $export['sort_authors'] = $view;

  $view = new view();
  $view->name = 'tags_in_use';
  $view->description = 'List the tags currently in use';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Internal: Tags in use';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tags in use';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'nid' => 'nid',
  );
  $handler->display->display_options['row_options']['separator'] = ', ';
  /* Relationship: Taxonomy term: Content using Topic Tags */
  $handler->display->display_options['relationships']['reverse_field_tagged_node']['id'] = 'reverse_field_tagged_node';
  $handler->display->display_options['relationships']['reverse_field_tagged_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_tagged_node']['field'] = 'reverse_field_tagged_node';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_tagged_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'tags' => 'tags',
  );
  /* Filter criterion: COUNT(Content: Nid) */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_tagged_node';
  $handler->display->display_options['filters']['nid']['group_type'] = 'count';
  $handler->display->display_options['filters']['nid']['operator'] = '>=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['tags_in_use'] = array(
    t('Master'),
    t('Tags in use'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_tagged'),
    t('Block'),
  );
  $export['tags_in_use'] = $view;

  $view = new view();
  $view->name = 'tags_view';
  $view->description = 'View to display blog posts for a tag';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Blog: Tags View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'blog-post';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['load_comments'] = 0;
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date Posted */
  $handler->display->display_options['fields']['field_post_date']['id'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['fields']['field_post_date']['field'] = 'field_post_date';
  $handler->display->display_options['fields']['field_post_date']['label'] = '';
  $handler->display->display_options['fields']['field_post_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Topic Category */
  $handler->display->display_options['fields']['field_categorized']['id'] = 'field_categorized';
  $handler->display->display_options['fields']['field_categorized']['table'] = 'field_data_field_categorized';
  $handler->display->display_options['fields']['field_categorized']['field'] = 'field_categorized';
  $handler->display->display_options['fields']['field_categorized']['label'] = 'Posted in';
  /* Field: Content: Topic Tags */
  $handler->display->display_options['fields']['field_tagged']['id'] = 'field_tagged';
  $handler->display->display_options['fields']['field_tagged']['table'] = 'field_data_field_tagged';
  $handler->display->display_options['fields']['field_tagged']['field'] = 'field_tagged';
  $handler->display->display_options['fields']['field_tagged']['label'] = 'Tagged';
  $handler->display->display_options['fields']['field_tagged']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tagged']['separator'] = ' | ';
  /* Sort criterion: Content: Date Posted (field_post_date) */
  $handler->display->display_options['sorts']['field_post_date_value']['id'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['table'] = 'field_data_field_post_date';
  $handler->display->display_options['sorts']['field_post_date_value']['field'] = 'field_post_date_value';
  $handler->display->display_options['sorts']['field_post_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Topic Tags (field_tagged) */
  $handler->display->display_options['arguments']['field_tagged_tid']['id'] = 'field_tagged_tid';
  $handler->display->display_options['arguments']['field_tagged_tid']['table'] = 'field_data_field_tagged';
  $handler->display->display_options['arguments']['field_tagged_tid']['field'] = 'field_tagged_tid';
  $handler->display->display_options['arguments']['field_tagged_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tagged_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tagged_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tagged_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'external_blog_post' => 'external_blog_post',
    'internal_blog_post' => 'internal_blog_post',
  );
  $translatables['tags_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Posted in'),
    t('Tagged'),
    t('All'),
  );
  $export['tags_view'] = $view;

  return $export;
}
