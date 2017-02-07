<?php
/**
 * @file
 * hhs_gov_content_types_internal_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hhs_gov_content_types_internal_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hhs_gov_content_types_internal_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hhs_gov_content_types_internal_blog_node_info() {
  $items = array(
    'internal_blog_post' => array(
      'name' => t('Internal Blog Post'),
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
