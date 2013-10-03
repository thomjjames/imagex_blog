<?php
/**
 * @file
 * imagex_blog_categories.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function imagex_blog_categories_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'General',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '88bf0bd0-2aab-44ce-95bf-aaf50a3b9de1',
    'vocabulary_machine_name' => 'imagex_blog_category',
    'metatags' => array(),
  );
  return $terms;
}
