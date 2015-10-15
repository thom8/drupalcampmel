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
  $page->name = 'edit_my_session';
  $page->task = 'page';
  $page->admin_title = 'Edit my session';
  $page->admin_description = '';
  $page->path = 'session/edit';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'user_node',
        'settings' => array(
          'content_type' => 'session',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Edit session',
    'name' => 'user-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_edit_my_session_http_response';
  $handler->task = 'page';
  $handler->subtask = 'edit_my_session';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'HTTP response code',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => 'node/NID/edit',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['edit_my_session'] = $page;

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
  $handler->name = 'page_home__panel';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'raw';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'container',
        'contains' => 'row',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'wrapper' => 'div',
        'element_id_default' => 0,
        'element_id' => '',
        'class' => '',
        'class_default_add' => 0,
        'container_class_add' => 0,
        'container_full_class_add' => 0,
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'container_class' => '',
      ),
      'main' => array(
        'type' => 'row',
        'children' => array(
          0 => 'main-column',
        ),
        'parent' => 'canvas',
        'wrapper' => 'div',
        'element_id_default' => 0,
        'element_id' => '',
        'class' => '',
        'class_default_add' => 0,
      ),
      'main-column' => array(
        'type' => 'column',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => '',
          'md' => 'col-md-12',
          'lg' => 'col-lg-12',
        ),
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'wrapper' => 'div',
        'element_id_default' => 0,
        'element_id' => '',
        'class' => '',
        'class_default_add' => 0,
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Content',
        'parent' => 'main-column',
        'wrapper' => 'div',
        'element_id_default' => 0,
        'element_id' => '',
        'class' => '',
        'class_default_add' => 0,
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'content' => array(
          'prefix' => '',
          'suffix' => '',
        ),
        'theme' => 0,
      ),
      'top' => NULL,
      'middle' => NULL,
      'slogan' => array(
        'content' => array(
          'element' => 'h2',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'theme' => 0,
      ),
      'content' => array(
        'content' => array(
          'element' => 'div',
          'attributes' => array(
            'id' => '',
            'class' => 'container',
          ),
        ),
        'theme' => 0,
      ),
    ),
    'style' => 'wrapper_raw',
    'slogan' => array(
      'style' => 'wrapper_element',
    ),
    'content' => array(
      'style' => 'wrapper_element',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '86dcafe2-ffc2-4935-a548-b305e2786d5c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-48a11da8-e051-42f2-adcb-1492062bcab2';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Slogan',
      'title' => '',
      'body' => '<h2>A two-day event aimed at bringing Drupal enthusiasts together to share knowledge, network, and most of all have fun!</h2>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'panel-body',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'panel',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '48a11da8-e051-42f2-adcb-1492062bcab2';
    $display->content['new-48a11da8-e051-42f2-adcb-1492062bcab2'] = $pane;
    $display->panels['content'][0] = 'new-48a11da8-e051-42f2-adcb-1492062bcab2';
    $pane = new stdClass();
    $pane->pid = 'new-92060bd2-a2f7-4408-86e2-100310675eff';
    $pane->panel = 'content';
    $pane->type = 'panels_mini';
    $pane->subtype = 'tickets';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => 'pane-title panel-title',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'jumbotron',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '92060bd2-a2f7-4408-86e2-100310675eff';
    $display->content['new-92060bd2-a2f7-4408-86e2-100310675eff'] = $pane;
    $display->panels['content'][1] = 'new-92060bd2-a2f7-4408-86e2-100310675eff';
    $pane = new stdClass();
    $pane->pid = 'new-c73d717b-4a2d-45ad-8fd1-3c50cf8c33d0';
    $pane->panel = 'content';
    $pane->type = 'panels_mini';
    $pane->subtype = 'where';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'pane-title panel-title',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => 'https://maps.google.com/maps?ll=-37.852092,144.984566&z=10&t=m&hl=en-US&gl=US&mapclient=embed&cid=9684580574928242433',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'panel-body',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'row panel',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c73d717b-4a2d-45ad-8fd1-3c50cf8c33d0';
    $display->content['new-c73d717b-4a2d-45ad-8fd1-3c50cf8c33d0'] = $pane;
    $display->panels['content'][2] = 'new-c73d717b-4a2d-45ad-8fd1-3c50cf8c33d0';
    $pane = new stdClass();
    $pane->pid = 'new-8e09a193-dc97-4449-9b2f-9c133537e336';
    $pane->panel = 'content';
    $pane->type = 'panels_mini';
    $pane->subtype = 'about';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'pane-title panel-title',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'panel-body row',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'panel',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8e09a193-dc97-4449-9b2f-9c133537e336';
    $display->content['new-8e09a193-dc97-4449-9b2f-9c133537e336'] = $pane;
    $display->panels['content'][3] = 'new-8e09a193-dc97-4449-9b2f-9c133537e336';
    $pane = new stdClass();
    $pane->pid = 'new-e5e187df-fd36-4a70-96a1-e61dbc568527';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'views-sponsors-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'pane-title panel-title',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'panel-body',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'panel',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e5e187df-fd36-4a70-96a1-e61dbc568527';
    $display->content['new-e5e187df-fd36-4a70-96a1-e61dbc568527'] = $pane;
    $display->panels['content'][4] = 'new-e5e187df-fd36-4a70-96a1-e61dbc568527';
    $pane = new stdClass();
    $pane->pid = 'new-b5a44a92-6dd8-4cb7-9216-01c6a80cec85';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'entityform_block-contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 1,
          'class' => 'pane-title panel-title',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'panel-body',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'panel',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'b5a44a92-6dd8-4cb7-9216-01c6a80cec85';
    $display->content['new-b5a44a92-6dd8-4cb7-9216-01c6a80cec85'] = $pane;
    $display->panels['content'][5] = 'new-b5a44a92-6dd8-4cb7-9216-01c6a80cec85';
    $pane = new stdClass();
    $pane->pid = 'new-48e3c4b0-d9a0-4e3b-b310-76f955b9f1ef';
    $pane->panel = 'content';
    $pane->type = 'panels_mini';
    $pane->subtype = 'credits';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'panel-body',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'panel row',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '48e3c4b0-d9a0-4e3b-b310-76f955b9f1ef';
    $display->content['new-48e3c4b0-d9a0-4e3b-b310-76f955b9f1ef'] = $pane;
    $display->panels['content'][6] = 'new-48e3c4b0-d9a0-4e3b-b310-76f955b9f1ef';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vote_sessions';
  $page->task = 'page';
  $page->admin_title = 'Vote sessions';
  $page->admin_description = '';
  $page->path = 'schedule';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Vote',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_vote_sessions_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'vote_sessions';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Lightning talks';
  $display->uuid = '902906a3-e975-46d9-add2-0fe5394b89f6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-878cf8cd-8dea-43a0-aa80-c227ddf44ae1';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'bean-creating-a-session';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'user_node',
          'settings' => array(
            'content_type' => 'session',
          ),
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '878cf8cd-8dea-43a0-aa80-c227ddf44ae1';
    $display->content['new-878cf8cd-8dea-43a0-aa80-c227ddf44ae1'] = $pane;
    $display->panels['middle'][0] = 'new-878cf8cd-8dea-43a0-aa80-c227ddf44ae1';
    $pane = new stdClass();
    $pane->pid = 'new-9fbed68e-a44d-42ce-bef0-422974245168';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-session_vote-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9fbed68e-a44d-42ce-bef0-422974245168';
    $display->content['new-9fbed68e-a44d-42ce-bef0-422974245168'] = $pane;
    $display->panels['middle'][1] = 'new-9fbed68e-a44d-42ce-bef0-422974245168';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9fbed68e-a44d-42ce-bef0-422974245168';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['vote_sessions'] = $page;

  return $pages;

}
