<?php
/**
 * @file
 * drupalcampmel_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcampmel_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function drupalcampmel_core_default_entityform_type() {
  $items = array();
  $items['register_interest'] = entity_import('entityform_type', '{
    "type" : "register_interest",
    "label" : "Register interest",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "plain_text" },
      "submit_button_text" : "Register interest",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "plain_text" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "\\u003Cfront\\u003E",
      "instruction_pre" : { "value" : "", "format" : "plain_text" },
      "current_type" : "register_interest",
      "enable_block" : 1
    },
    "weight" : "0"
  }');
  return $items;
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function drupalcampmel_core_fontyourface_features_default_font() {
  return array(
    'Bree Serif regular (latin)' => array(
      'name' => 'Bree Serif regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Bree Serif&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Bree Serif',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:18:"Bree Serif:regular";s:6:"subset";s:5:"latin";}',
    ),
  );
}
