<?php
/**
 * @file
 * imagex_blog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function imagex_blog_taxonomy_default_vocabularies() {
  return array(
    'imagex_blog_category' => array(
      'name' => 'Blog Categories',
      'machine_name' => 'imagex_blog_category',
      'description' => 'Blog Categories',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
