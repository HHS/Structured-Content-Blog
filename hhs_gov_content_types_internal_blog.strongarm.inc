<?php
/**
 * @file
 * hhs_gov_content_types_internal_blog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hhs_gov_content_types_internal_blog_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_internal_blog_post';
  $strongarm->value = 1;
  $export['comment_form_location_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_internal_blog_post';
  $strongarm->value = '2';
  $export['comment_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_internal_blog_post';
  $strongarm->value = '1';
  $export['comment_preview_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_internal_blog_post';
  $strongarm->value = 1;
  $export['comment_subject_field_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_internal_blog_post';
  $strongarm->value = array(
    0 => 'default',
    1 => 'full',
    2 => 'teaser',
    3 => 'blog_short_title_display',
    4 => 'long_title_view_mode',
    5 => 'year_month_list_view_mode',
  );
  $export['ds_extras_view_modes_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_internal_blog_post';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_internal_blog_post';
  $strongarm->value = '0';
  $export['language_content_type_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_internal_blog_post';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_internal_blog_post';
  $strongarm->value = array();
  $export['menu_options_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_internal_blog_post';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nh_allowchild_internal_blog_post';
  $strongarm->value = array();
  $export['nh_allowchild_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_internal_blog_post';
  $strongarm->value = array(
    0 => 'promote',
    1 => 'moderation',
    2 => 'revision',
  );
  $export['node_options_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_internal_blog_post';
  $strongarm->value = '1';
  $export['node_preview_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_internal_blog_post';
  $strongarm->value = 0;
  $export['node_submitted_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_internal_blog_post_pattern';
  $strongarm->value = '[node:created:custom:Y]/[node:created:custom:m]/[node:created:custom:d]/[node:title].html';
  $export['pathauto_node_internal_blog_post_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_categories_pattern';
  $strongarm->value = 'blog/[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_categories_pattern'] = $strongarm;

  return $export;
}
