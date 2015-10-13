<?php
/**
 * @file
 * drupalcampmel_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalcampmel_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalcampmel_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function drupalcampmel_core_default_entityform_type() {
  $items = array();
  $items['confirm_order'] = entity_import('entityform_type', '{
    "type" : "confirm_order",
    "label" : "Confirm order",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Confirm ticket",
      "submit_confirm_msg" : "Thank you for confirming your ticket.",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "2" : "2", "1" : 0 },
      "resubmit_action" : "disallow",
      "redirect_path" : "\\u003Cfront\\u003E",
      "instruction_pre" : {
        "value" : "Add your Eventbrite order number here so we can assign your ticket to your user, and confirm you are a verified attendee.",
        "format" : "full_html"
      },
      "current_type" : "confirm_order",
      "enable_block" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  $items['contact'] = entity_import('entityform_type', '{
    "type" : "contact",
    "label" : "Contact",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "\\u003Cfront\\u003E",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EGot a question or suggestion? Looking to sponsor or contribute to the event? Leave a message with the DrupalCampMelbourne team and we will get back to you ASAP.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E",
        "format" : "full_html"
      },
      "current_type" : "contact",
      "enable_block" : 1
    },
    "weight" : "0",
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/contact",
        "alias" : "contact",
        "language" : "und"
      }
    }
  }');
  $items['poll'] = entity_import('entityform_type', '{
    "type" : "poll",
    "label" : "Have your say",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : 0, "3" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "\\u003Cfront\\u003E",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EAfter the success of last years DrupalCampMelbourne, it\\u0027s time to do it all again, and we want your help to do it even better.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ELast year was a two day event; one day of sessions followed by a code sprint, running from Friday to Saturday; Did that work for you? Do you want more? Less?\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ELet us know below:\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u0026nbsp;\\u003C\\/p\\u003E",
        "format" : "full_html"
      },
      "enable_block" : 0
    },
    "weight" : "0",
    "paths" : { "submit" : { "source" : "eform\\/submit\\/poll", "alias" : "poll", "language" : "und" } }
  }');
  $items['register_interest'] = entity_import('entityform_type', '{
    "type" : "register_interest",
    "label" : "Register interest",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "plain_text" },
      "submit_button_text" : "Register",
      "submit_confirm_msg" : "Thank you for registering your interest in DrupalCampMelbourne 2015. More information will be supplied by email shortly.",
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
      "roles" : { "1" : "1", "2" : 0, "3" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "\\u003Cfront\\u003E",
      "instruction_pre" : { "value" : "", "format" : "plain_text" },
      "current_type" : "register_interest",
      "enable_block" : 1
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}

/**
 * Implements hook_flag_default_flags().
 */
function drupalcampmel_core_flag_default_flags() {
  $flags = array();
  // Exported flag: "Vote".
  $flags['vote'] = array(
    'entity_type' => 'node',
    'title' => 'Vote',
    'global' => 0,
    'types' => array(
      0 => 'session',
    ),
    'flag_short' => 'Vote',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unvote',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'token' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => 'others',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'drupalcampmel_core',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function drupalcampmel_core_image_default_styles() {
  $styles = array();

  // Exported image style: logo.
  $styles['logo'] = array(
    'label' => 'Logo',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 250,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: logo_custom_user_desktop_1x.
  $styles['logo_custom_user_desktop_1x'] = array(
    'label' => 'Logo: Desktop',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 205,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: logo_custom_user_tablet_1x.
  $styles['logo_custom_user_tablet_1x'] = array(
    'label' => 'Logo: Tablet',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: logo_custom_user_wide_1x.
  $styles['logo_custom_user_wide_1x'] = array(
    'label' => 'Logo: Wide',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 255,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function drupalcampmel_core_node_info() {
  $items = array(
    'session' => array(
      'name' => t('Session'),
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
