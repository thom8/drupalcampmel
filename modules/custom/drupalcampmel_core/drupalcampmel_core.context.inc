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
  $context->name = 'global';
  $context->description = '';
  $context->tag = 'DrupalCampMel::Layout';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'drupalcampmel_core-copyright' => array(
          'module' => 'drupalcampmel_core',
          'delta' => 'copyright',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('DrupalCampMel::Layout');
  $export['global'] = $context;

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
      'coffee' => 'enable',
      'context_ui' => 'enable',
      'dblog' => 'enable',
      'devel' => 'enable',
      'field_ui' => 'enable',
      'module_filter' => 'enable',
      'navbar' => 'enable',
      'navbar_region' => 'enable',
      'reroute_email' => 'enable',
      'speedy' => 'disable',
    ),
    'variable' => array(
      'prepro' => array(
        'filetypes' => array(
          'sass' => array(
            'compile_handler' => 'sassy/sassy',
            'cache_handler' => 'prepro/onload',
            'cache_path' => 'public://prepro',
          ),
          'scss' => array(
            'compile_handler' => 'sassy/sassy',
            'cache_handler' => 'prepro/onload',
            'cache_path' => 'public://prepro',
          ),
        ),
        'additional' => array(
          'sassy' => array(
            'watchdog' => 1,
            'debug' => 1,
            'errors' => 'watchdog',
            'style' => 'expanded',
          ),
        ),
        'show_warnings' => TRUE,
      ),
      'cache' => 0,
      'preprocess_css' => 0,
      'preprocess_js' => 0,
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
  $context->reactions = array(
    'module' => array(
      'coffee' => 'disable',
      'context_ui' => 'disable',
      'dblog' => 'disable',
      'devel' => 'disable',
      'field_ui' => 'disable',
      'module_filter' => 'disable',
      'navbar' => 'disable',
      'navbar_region' => 'disable',
      'reroute_email' => 'disable',
      'speedy' => 'enable',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('DrupalCampMel::Servers');
  $export['server-production'] = $context;

  return $export;
}
