<?php
/**
 * @file
 * features_hhs_blog.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function features_hhs_blog_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'blog_home-feed_1';
  $ds_vd->label = 'Blog_home: Feed (Views template)';
  $export['blog_home-feed_1'] = $ds_vd;

  return $export;
}
