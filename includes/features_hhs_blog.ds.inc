<?php
/**
 * @file
 * features_hhs_blog.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function features_hhs_blog_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|external_blog_post|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'external_blog_post';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'custom_posted_in' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'custom_tags' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'full_content_dynamic_title_' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'original_post_info_box' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'byline' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_description_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Summary',
          'lb-el' => 'div',
          'lb-cl' => 'summary-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'summary-wrapper',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'summary-description',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_post_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|external_blog_post|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|external_blog_post|long_title_view_mode';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'external_blog_post';
  $ds_fieldsetting->view_mode = 'long_title_view_mode';
  $ds_fieldsetting->settings = array(
    'dynamic_title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_thumbnail_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|external_blog_post|long_title_view_mode'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|external_blog_post|rss';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'external_blog_post';
  $ds_fieldsetting->view_mode = 'rss';
  $ds_fieldsetting->settings = array(
    'byline' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|external_blog_post|rss'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|external_blog_post|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'external_blog_post';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'custom_posted_in' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'custom_tags' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'byline' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'dynamic_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_description_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_post_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_thumbnail_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|external_blog_post|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|external_blog_post|year_month_list_view_mode';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'external_blog_post';
  $ds_fieldsetting->view_mode = 'year_month_list_view_mode';
  $ds_fieldsetting->settings = array(
    'year_month_list' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|external_blog_post|year_month_list_view_mode'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|internal_blog_post|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'internal_blog_post';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'byline' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'custom_posted_in' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'custom_tags' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'full_content_dynamic_title_' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_description_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Summary',
          'lb-el' => 'div',
          'lb-cl' => 'summary-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'summary-wrapper',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'summary-description',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_post_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|internal_blog_post|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|internal_blog_post|long_title_view_mode';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'internal_blog_post';
  $ds_fieldsetting->view_mode = 'long_title_view_mode';
  $ds_fieldsetting->settings = array(
    'dynamic_title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_thumbnail_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|internal_blog_post|long_title_view_mode'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|internal_blog_post|rss';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'internal_blog_post';
  $ds_fieldsetting->view_mode = 'rss';
  $ds_fieldsetting->settings = array(
    'byline' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|internal_blog_post|rss'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|internal_blog_post|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'internal_blog_post';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'custom_posted_in' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'custom_tags' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'byline' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'dynamic_title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_description_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_post_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_thumbnail_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|internal_blog_post|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|internal_blog_post|year_month_list_view_mode';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'internal_blog_post';
  $ds_fieldsetting->view_mode = 'year_month_list_view_mode';
  $ds_fieldsetting->settings = array(
    'year_month_list' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|internal_blog_post|year_month_list_view_mode'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function features_hhs_blog_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'byline';
  $ds_field->label = 'Byline';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php 
$term=taxonomy_term_load($entity->field_blog_post_author[\'und\'][0][\'target_id\']);
$termpath = taxonomy_term_uri($term);
print \'By: <span property="schema:author">\' . l($term->name, $termpath[\'path\']) ; 
if ($term->field_author_title != NULL) {
$authortitle = $term->field_author_title[\'und\'][0][\'value\'] ; 
print "</span>, " . $authortitle; }
else { print "</span>"; }

if (!empty($entity->field_co_author)) {
 foreach($entity->field_co_author[\'und\'] as $oneco) {
  $coterm=taxonomy_term_load($oneco[\'target_id\']);
   $cotermpath = taxonomy_term_uri($coterm);
   print \' and <span property="schema:contributor">\' . l($coterm->name, $cotermpath[\'path\']) ; 
   if ($coterm->field_author_title != NULL) {
     $coauthortitle = $coterm->field_author_title[\'und\'][0][\'value\'] ; 
       print "</span>, " . $coauthortitle; }
   else { print "</span>"; }
   }
}
?>
',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['byline'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'custom_posted_in';
  $ds_field->label = 'Custom Topic Category​';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php 
 if(!empty($entity->field_categorized)) {
     $toprint = \'<div class="field-label">Posted In: </div><span rel="schema:about">\';
     foreach($entity->field_categorized[\'und\'] as $onetermary) {
        $oneterm=taxonomy_term_load($onetermary[\'tid\']);
        $onetermpath = taxonomy_term_uri($oneterm);
        $toprint .= l($oneterm->name, $onetermpath[\'path\']) . " | " ; 
     }
    $toprint = rtrim($toprint, " | ");
    print $toprint . \'</span>\';
} 
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['custom_posted_in'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'custom_tags';
  $ds_field->label = 'Custom Topic Tags';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php 
//print "<pre>"; print_r($entity); print "</pre>";
 if(!empty($entity->field_tagged)) {
     $toprint = \'<div class="field-label">Tagged: </div>\';
     foreach($entity->field_tagged[\'und\'] as $onetermary) {
        $oneterm=taxonomy_term_load($onetermary[\'tid\']);
        //$authorresult=field_view_field(\'taxonomy_term\',$term,\'field_author_title\');
        //$byline_result=taxonomy_term_view($term, $view_mode = \'view_mode_byline\', $langcode = NULL);

        $onetermpath = taxonomy_term_uri($oneterm);
        $toprint .= \'<span rel="schema:keywords">\' . l($oneterm->name, $onetermpath[\'path\']) . "</span> | " ; 
     }
    $toprint = rtrim($toprint, " | ");
    print $toprint;
} 
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['custom_tags'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dynamic_title';
  $ds_field->label = 'Dynamic title';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
if (!empty($entity->field_long_title))
print "<a href=[node:url]>[node:field_long_title]</a>";
else print "<a href=[node:url]>[node:title]</a>";
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['dynamic_title'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'full_content_dynamic_title_';
  $ds_field->label = 'Full content dynamic title ';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
if (!empty($entity->field_long_title))
print "<h1>[node:field_long_title]</h1>";
else print "<h1>[node:title]</h1>";
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['full_content_dynamic_title_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'original_post_info_box';
  $ds_field->label = 'Original post info box';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="field field-name-field-original-blog-name field-type-taxonomy-term-reference field-label-above">
<a href="[node:field_original_blog_post_url]">View the original post on [node:field_original_blog_name]</a></br>
<?php
$oriterm=taxonomy_term_load($entity->field_original_blog_name[\'und\'][0][\'tid\']);
$oritermpath = taxonomy_term_uri($oriterm);
//print "<pre>"; print_r($term); print "</pre>";
print "<p>All re-posted from: " .  l($oriterm->name, $oritermpath[\'path\']) ; 
?>
</div>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['original_post_info_box'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'schema_source_organization';
  $ds_field->label = 'schema source organization';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<span property="schema:sourceOrganization" content="[node:field_operating_division]"></span>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['schema_source_organization'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'year_month_list';
  $ds_field->label = 'Year-month list';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
print "<pre>"; print_r($entity->field_post_date[\'und\'][0][\'value\']); print"</pre>";
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['year_month_list'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_hhs_blog_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|external_blog_post|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'external_blog_post';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'full_content_dynamic_title_',
        1 => 'field_post_date',
        2 => 'byline',
        3 => 'field_description_summary',
        4 => 'body',
        5 => 'custom_posted_in',
        6 => 'custom_tags',
        7 => 'original_post_info_box',
      ),
    ),
    'fields' => array(
      'full_content_dynamic_title_' => 'ds_content',
      'field_post_date' => 'ds_content',
      'byline' => 'ds_content',
      'field_description_summary' => 'ds_content',
      'body' => 'ds_content',
      'custom_posted_in' => 'ds_content',
      'custom_tags' => 'ds_content',
      'original_post_info_box' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|external_blog_post|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|external_blog_post|long_title_view_mode';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'external_blog_post';
  $ds_layout->view_mode = 'long_title_view_mode';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_thumbnail_image',
        1 => 'dynamic_title',
      ),
    ),
    'fields' => array(
      'field_thumbnail_image' => 'ds_content',
      'dynamic_title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|external_blog_post|long_title_view_mode'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|external_blog_post|rss';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'external_blog_post';
  $ds_layout->view_mode = 'rss';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'byline',
        1 => 'field_description_summary',
        2 => 'field_categorized',
        3 => 'field_tagged',
      ),
    ),
    'fields' => array(
      'byline' => 'ds_content',
      'field_description_summary' => 'ds_content',
      'field_categorized' => 'ds_content',
      'field_tagged' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|external_blog_post|rss'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|external_blog_post|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'external_blog_post';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'dynamic_title',
      ),
      'left' => array(
        1 => 'field_thumbnail_image',
      ),
      'right' => array(
        2 => 'field_post_date',
        3 => 'byline',
        4 => 'field_description_summary',
        5 => 'custom_posted_in',
        6 => 'custom_tags',
      ),
    ),
    'fields' => array(
      'dynamic_title' => 'header',
      'field_thumbnail_image' => 'left',
      'field_post_date' => 'right',
      'byline' => 'right',
      'field_description_summary' => 'right',
      'custom_posted_in' => 'right',
      'custom_tags' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|external_blog_post|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|external_blog_post|year_month_list_view_mode';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'external_blog_post';
  $ds_layout->view_mode = 'year_month_list_view_mode';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'year_month_list',
      ),
    ),
    'fields' => array(
      'year_month_list' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|external_blog_post|year_month_list_view_mode'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|internal_blog_post|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'internal_blog_post';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'full_content_dynamic_title_',
        1 => 'field_post_date',
        2 => 'byline',
        3 => 'field_description_summary',
        4 => 'body',
        5 => 'custom_posted_in',
        6 => 'custom_tags',
      ),
    ),
    'fields' => array(
      'full_content_dynamic_title_' => 'ds_content',
      'field_post_date' => 'ds_content',
      'byline' => 'ds_content',
      'field_description_summary' => 'ds_content',
      'body' => 'ds_content',
      'custom_posted_in' => 'ds_content',
      'custom_tags' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '%node:field_long_title',
  );
  $export['node|internal_blog_post|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|internal_blog_post|long_title_view_mode';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'internal_blog_post';
  $ds_layout->view_mode = 'long_title_view_mode';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_thumbnail_image',
        1 => 'dynamic_title',
      ),
    ),
    'fields' => array(
      'field_thumbnail_image' => 'ds_content',
      'dynamic_title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|internal_blog_post|long_title_view_mode'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|internal_blog_post|rss';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'internal_blog_post';
  $ds_layout->view_mode = 'rss';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'byline',
        1 => 'field_description_summary',
        2 => 'field_categorized',
        3 => 'field_tagged',
      ),
    ),
    'fields' => array(
      'byline' => 'ds_content',
      'field_description_summary' => 'ds_content',
      'field_categorized' => 'ds_content',
      'field_tagged' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|internal_blog_post|rss'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|internal_blog_post|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'internal_blog_post';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'dynamic_title',
      ),
      'left' => array(
        1 => 'field_thumbnail_image',
      ),
      'right' => array(
        2 => 'field_post_date',
        3 => 'byline',
        4 => 'field_description_summary',
        5 => 'custom_posted_in',
        6 => 'custom_tags',
      ),
    ),
    'fields' => array(
      'dynamic_title' => 'header',
      'field_thumbnail_image' => 'left',
      'field_post_date' => 'right',
      'byline' => 'right',
      'field_description_summary' => 'right',
      'custom_posted_in' => 'right',
      'custom_tags' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|internal_blog_post|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|internal_blog_post|year_month_list_view_mode';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'internal_blog_post';
  $ds_layout->view_mode = 'year_month_list_view_mode';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'year_month_list',
      ),
    ),
    'fields' => array(
      'year_month_list' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|internal_blog_post|year_month_list_view_mode'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function features_hhs_blog_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'long_title_view_mode';
  $ds_view_mode->label = 'Long title view mode';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['long_title_view_mode'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'year_month_list_view_mode';
  $ds_view_mode->label = 'Year-month list view mode';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['year_month_list_view_mode'] = $ds_view_mode;

  return $export;
}
