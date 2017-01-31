<?php
/**
 * @file
 * features_hhs_blog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_hhs_blog_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_external_blog_post';
  $strongarm->value = 0;
  $export['comment_anonymous_external_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_internal_blog_post';
  $strongarm->value = 0;
  $export['comment_anonymous_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_external_blog_post';
  $strongarm->value = 0;
  $export['comment_default_mode_external_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_internal_blog_post';
  $strongarm->value = 1;
  $export['comment_default_mode_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_external_blog_post';
  $strongarm->value = '50';
  $export['comment_default_per_page_external_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_internal_blog_post';
  $strongarm->value = '50';
  $export['comment_default_per_page_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_external_blog_post';
  $strongarm->value = '1';
  $export['comment_external_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_external_blog_post';
  $strongarm->value = 0;
  $export['comment_form_location_external_blog_post'] = $strongarm;

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
  $strongarm->name = 'comment_preview_external_blog_post';
  $strongarm->value = '1';
  $export['comment_preview_external_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_internal_blog_post';
  $strongarm->value = '1';
  $export['comment_preview_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_external_blog_post';
  $strongarm->value = 0;
  $export['comment_subject_field_external_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_internal_blog_post';
  $strongarm->value = 1;
  $export['comment_subject_field_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_revision_enabled';
  $strongarm->value = TRUE;
  $export['entity_translation_revision_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__external_blog_post';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'long_title_view_mode' => array(
        'custom_settings' => TRUE,
      ),
      'year_month_list_view_mode' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'abridged_bio' => array(
        'custom_settings' => FALSE,
      ),
      'blog_short_title_display' => array(
        'custom_settings' => TRUE,
      ),
      'regions_leaders_contact_info' => array(
        'custom_settings' => FALSE,
      ),
      'regions_leaders_info' => array(
        'custom_settings' => FALSE,
      ),
      'region_with_no_leadership' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '20',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '19',
        ),
        'rabbit_hole' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '18',
        ),
        'workbench_access' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__external_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__internal_blog_post';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'long_title_view_mode' => array(
        'custom_settings' => TRUE,
      ),
      'year_month_list_view_mode' => array(
        'custom_settings' => TRUE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'abridged_bio' => array(
        'custom_settings' => FALSE,
      ),
      'regions_leaders_contact_info' => array(
        'custom_settings' => FALSE,
      ),
      'regions_leaders_info' => array(
        'custom_settings' => FALSE,
      ),
      'blog_short_title_display' => array(
        'custom_settings' => TRUE,
      ),
      'region_with_no_leadership' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '18',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '17',
        ),
        'rabbit_hole' => array(
          'weight' => '1',
        ),
        'redirect' => array(
          'weight' => '16',
        ),
        'workbench_access' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_external_blog_post';
  $strongarm->value = '0';
  $export['language_content_type_external_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_internal_blog_post';
  $strongarm->value = '0';
  $export['language_content_type_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_external_blog_post';
  $strongarm->value = array();
  $export['menu_options_external_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_internal_blog_post';
  $strongarm->value = array();
  $export['menu_options_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_external_blog_post';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_external_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_internal_blog_post';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_external_blog_post';
  $strongarm->value = array(
    0 => 'promote',
    1 => 'moderation',
    2 => 'revision',
  );
  $export['node_options_external_blog_post'] = $strongarm;

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
  $strongarm->name = 'node_preview_external_blog_post';
  $strongarm->value = '1';
  $export['node_preview_external_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_internal_blog_post';
  $strongarm->value = '1';
  $export['node_preview_internal_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_external_blog_post';
  $strongarm->value = 0;
  $export['node_submitted_external_blog_post'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_internal_blog_post';
  $strongarm->value = 0;
  $export['node_submitted_internal_blog_post'] = $strongarm;

  return $export;
}
