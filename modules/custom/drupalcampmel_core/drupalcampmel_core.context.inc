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
  $context->name = 'layout-global';
  $context->description = '';
  $context->tag = 'DrupalCampMel::Layout';
  $context->conditions = array(
    'theme' => array(
      'values' => array(
        'drupalcampmel_theme' => 'drupalcampmel_theme',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'blockify-blockify-logo' => array(
          'module' => 'blockify',
          'delta' => 'blockify-logo',
          'region' => 'content',
          'weight' => '-16',
        ),
        'blockify-blockify-site-name' => array(
          'module' => 'blockify',
          'delta' => 'blockify-site-name',
          'region' => 'content',
          'weight' => '-15',
        ),
        'blockify-blockify-site-slogan' => array(
          'module' => 'blockify',
          'delta' => 'blockify-site-slogan',
          'region' => 'content',
          'weight' => '-14',
        ),
        'blockify-blockify-breadcrumb' => array(
          'module' => 'blockify',
          'delta' => 'blockify-breadcrumb',
          'region' => 'content',
          'weight' => '-13',
        ),
        'blockify-blockify-page-title' => array(
          'module' => 'blockify',
          'delta' => 'blockify-page-title',
          'region' => 'content',
          'weight' => '-12',
        ),
        'blockify-blockify-tabs' => array(
          'module' => 'blockify',
          'delta' => 'blockify-tabs',
          'region' => 'content',
          'weight' => '-11',
        ),
        'blockify-blockify-messages' => array(
          'module' => 'blockify',
          'delta' => 'blockify-messages',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
        'drupalcampmel_core-copyright' => array(
          'module' => 'drupalcampmel_core',
          'delta' => 'copyright',
          'region' => 'footer',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('DrupalCampMel::Layout');
  $export['layout-global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-node_form-session';
  $context->description = '';
  $context->tag = 'DrupalCampMel::Layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'session' => 'session',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-creating-session' => array(
          'module' => 'bean',
          'delta' => 'creating-session',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('DrupalCampMel::Layout');
  $export['layout-node_form-session'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-sponsors';
  $context->description = '';
  $context->tag = 'DrupalCampMel::Layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~sponsors' => '~sponsors',
      ),
    ),
    'theme' => array(
      'values' => array(
        'drupalcampmel_theme' => 'drupalcampmel_theme',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sponsors-block' => array(
          'module' => 'views',
          'delta' => 'sponsors-block',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('DrupalCampMel::Layout');
  $export['layout-sponsors'] = $context;

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
            'value' => 'dcm2015.drupal.org.au',
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
      'escape_admin' => 'enable',
      'views_ui' => 'enable',
      'speedy' => 'disable',
      'contextual' => 'enable',
    ),
    'variable' => array(
      '#set' => array(
        'cache' => 0,
        'googleanalytics_account' => 0,
        'mailchimp_api_key' => 0,
        'prepro' => 0,
        'preprocess_css' => 0,
        'preprocess_js' => 0,
        'reroute_email_address' => 0,
        'reroute_email_enable' => 0,
      ),
      'cache' => 0,
      'googleanalytics_account' => '',
      'mailchimp_api_key' => '1234567890',
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
        'show_warnings' => 1,
      ),
      'preprocess_css' => 0,
      'preprocess_js' => 0,
      'reroute_email_address' => '',
      'reroute_email_enable' => 1,
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
            'value' => 'dcm2015.drupal.org.au',
          ),
        ),
        'and_or' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'module' => array(
      'speedy' => 'enable',
      'coffee' => 'disable',
      'context_ui' => 'disable',
      'dblog' => 'disable',
      'devel' => 'disable',
      'field_ui' => 'disable',
      'module_filter' => 'disable',
      'navbar' => 'disable',
      'navbar_region' => 'disable',
      'reroute_email' => 'disable',
      'escape_admin' => 'disable',
      'views_ui' => 'disable',
      'contextual' => 'disable',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('DrupalCampMel::Servers');
  $export['server-production'] = $context;

  return $export;
}
