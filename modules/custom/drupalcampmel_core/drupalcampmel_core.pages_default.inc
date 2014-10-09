<?php
/**
 * @file
 * drupalcampmel_core.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function drupalcampmel_core_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ab8ac775-bcdc-4d9b-a049-6063fc9ce645';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9f3ddedc-ec1e-424d-a758-00a4c19a1eae';
    $pane->panel = 'center';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9f3ddedc-ec1e-424d-a758-00a4c19a1eae';
    $display->content['new-9f3ddedc-ec1e-424d-a758-00a4c19a1eae'] = $pane;
    $display->panels['center'][0] = 'new-9f3ddedc-ec1e-424d-a758-00a4c19a1eae';
    $pane = new stdClass();
    $pane->pid = 'new-f3e837b7-2441-4f59-82ce-ceb4a02257d3';
    $pane->panel = 'center';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f3e837b7-2441-4f59-82ce-ceb4a02257d3';
    $display->content['new-f3e837b7-2441-4f59-82ce-ceb4a02257d3'] = $pane;
    $display->panels['center'][1] = 'new-f3e837b7-2441-4f59-82ce-ceb4a02257d3';
    $pane = new stdClass();
    $pane->pid = 'new-71107b32-5af1-4754-888d-834d86844db9';
    $pane->panel = 'center';
    $pane->type = 'page_slogan';
    $pane->subtype = 'page_slogan';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '71107b32-5af1-4754-888d-834d86844db9';
    $display->content['new-71107b32-5af1-4754-888d-834d86844db9'] = $pane;
    $display->panels['center'][2] = 'new-71107b32-5af1-4754-888d-834d86844db9';
    $pane = new stdClass();
    $pane->pid = 'new-ee733f5a-ec04-4c52-a51e-a71f942ebdfc';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'blockify-blockify-messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ee733f5a-ec04-4c52-a51e-a71f942ebdfc';
    $display->content['new-ee733f5a-ec04-4c52-a51e-a71f942ebdfc'] = $pane;
    $display->panels['center'][3] = 'new-ee733f5a-ec04-4c52-a51e-a71f942ebdfc';
    $pane = new stdClass();
    $pane->pid = 'new-c27a1fed-5431-4642-a6c1-50b66ff22040';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'entityform_block-register_interest';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c27a1fed-5431-4642-a6c1-50b66ff22040';
    $display->content['new-c27a1fed-5431-4642-a6c1-50b66ff22040'] = $pane;
    $display->panels['center'][4] = 'new-c27a1fed-5431-4642-a6c1-50b66ff22040';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
