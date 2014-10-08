<?php
/**
 * @file
 * drupalcampmel_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function drupalcampmel_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'server-development';
  $context->description = '';
  $context->tag = 'DrupalCampMel::Servers';
  $context->conditions = array(
    'server_vars' => array(
      'values' => array(
        'variables' => array(
          0 => array(
            'name' => 'HTTP_HOST',
            'op' => '==',
            'negate' => 1,
            'value' => 'melbourne2014.drupalcamp.net.au',
          ),
        ),
        'and_or' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'navbar_region-home' => array(
          'module' => 'navbar_region',
          'delta' => 'home',
          'region' => 'navbar_region',
          'weight' => '-10',
        ),
        'navbar_region-administration' => array(
          'module' => 'navbar_region',
          'delta' => 'administration',
          'region' => 'navbar_region',
          'weight' => '-9',
        ),
        'menu-devel' => array(
          'module' => 'menu',
          'delta' => 'devel',
          'region' => 'navbar_region',
          'weight' => '-8',
        ),
        'navbar_region-user' => array(
          'module' => 'navbar_region',
          'delta' => 'user',
          'region' => 'navbar_region',
          'weight' => '-7',
        ),
      ),
    ),
    'module' => array(
      'devel' => 'enable',
      'context_ui' => 'enable',
      'module_filter' => 'enable',
      'coffee' => 'enable',
      'field_ui' => 'enable',
      'reroute_email' => 'enable',
      'navbar' => 'enable',
      'navbar_region' => 'enable',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('DrupalCampMel::Servers');
  $export['server-development'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'server-production';
  $context->description = '';
  $context->tag = 'DrupalCampMel::Servers';
  $context->conditions = array(
    'server_vars' => array(
      'values' => array(
        'variables' => array(
          0 => array(
            'name' => 'HTTP_HOST',
            'op' => '==',
            'negate' => 0,
            'value' => 'melbourne2014.drupalcamp.net.au',
          ),
        ),
        'and_or' => 0,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('DrupalCampMel::Servers');
  $export['server-production'] = $context;

  return $export;
}
