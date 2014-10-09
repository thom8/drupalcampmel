<?php
/**
 * @file
 * drupalcampmel_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupalcampmel_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 1;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '3600';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dindent_non_cacheable_pages';
  $strongarm->value = 1;
  $export['dindent_non_cacheable_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityform_block_types';
  $strongarm->value = array(
    0 => 'register_interest',
  );
  $export['entityform_block_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'navbar_region_settings';
  $strongarm->value = array(
    'context_ui-editor' => array(
      'title' => '',
      'icon' => '',
    ),
    'context_ui-devel' => array(
      'title' => '',
      'icon' => '',
    ),
    'devel-execute_php' => array(
      'title' => '',
      'icon' => '',
    ),
    'menu-features' => array(
      'title' => '',
      'icon' => '',
    ),
    'system-main-menu' => array(
      'title' => '',
      'icon' => '',
    ),
    'system-management' => array(
      'title' => '',
      'icon' => '',
    ),
    'system-navigation' => array(
      'title' => '',
      'icon' => '',
    ),
    'system-powered-by' => array(
      'title' => '',
      'icon' => '',
    ),
    'node-recent' => array(
      'title' => '',
      'icon' => '',
    ),
    'devel-switch_user' => array(
      'title' => '',
      'icon' => '',
    ),
    'node-syndicate' => array(
      'title' => '',
      'icon' => '',
    ),
    'user-login' => array(
      'title' => '',
      'icon' => '',
    ),
    'system-user-menu' => array(
      'title' => '',
      'icon' => '',
    ),
    'user-new' => array(
      'title' => '',
      'icon' => '',
    ),
    'system-main' => array(
      'title' => '',
      'icon' => '',
    ),
    'system-help' => array(
      'title' => '',
      'icon' => '',
    ),
    'user-online' => array(
      'title' => '',
      'icon' => '',
    ),
    'menu-devel' => array(
      'title' => 'Devel',
      'icon' => 'configuration',
    ),
    'navbar_region-home' => array(
      'title' => '',
      'icon' => '',
    ),
    'navbar_region-administration' => array(
      'title' => '',
      'icon' => '',
    ),
    'navbar_region-user' => array(
      'title' => '',
      'icon' => '',
    ),
  );
  $export['navbar_region_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '86400';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prepro';
  $strongarm->value = array(
    'filetypes' => array(
      'sass' => array(
        'compile_handler' => 'sassy/sassy',
        'cache_handler' => 'prepro/onload',
        'cache_path' => 'public://prepro',
      ),
      'scss' => array(
        'compile_handler' => 'sassy/sassy',
        'cache_handler' => 'prepro/manual',
        'cache_path' => 'public://prepro',
      ),
    ),
    'additional' => array(
      'sassy' => array(
        'watchdog' => 0,
        'debug' => 0,
        'errors' => 'silent',
        'style' => 'compressed',
      ),
    ),
    'show_warnings' => TRUE,
  );
  $export['prepro'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 1;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 1;
  $export['preprocess_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'home';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'drupalcampmel_theme';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_drupalcampmel_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'general__active_tab' => 'edit-theme-settings',
    'bootstrap__active_tab' => 'edit-components',
    'bootstrap_breadcrumb' => '1',
    'bootstrap_breadcrumb_home' => 0,
    'bootstrap_breadcrumb_title' => 1,
    'bootstrap_navbar_position' => '',
    'bootstrap_navbar_inverse' => 0,
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-navbar_region' => '',
    'bootstrap_anchors_fix' => 1,
    'bootstrap_anchors_smooth_scrolling' => 1,
    'bootstrap_popover_enabled' => 1,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'right',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => '0',
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 1,
    'bootstrap_tooltip_descriptions' => 1,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 0,
    'bootstrap_tooltip_placement' => 'auto left',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => '0',
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_cdn' => '3.0.2',
    'bootstrap_bootswatch' => '',
    'bootstrap_rebuild_registry' => 0,
    'bootstrap_toggle_jquery_error' => 0,
  );
  $export['theme_drupalcampmel_theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notification_threshold';
  $strongarm->value = 'security';
  $export['update_notification_threshold'] = $strongarm;

  return $export;
}
