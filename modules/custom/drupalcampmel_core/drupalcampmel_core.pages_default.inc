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
          0 => 1,
          1 => 'main-row',
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          6 => 6,
          7 => 7,
          8 => 8,
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
        'class' => 'color-bg-orange',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Region 02',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_01',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'region_01' => array(
        'type' => 'region',
        'title' => 'Region 01',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_03',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'region_03' => array(
        'type' => 'region',
        'title' => 'Region 03',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_04',
        ),
        'parent' => 'main',
        'class' => 'color-bg-grey-light',
      ),
      'region_04' => array(
        'type' => 'region',
        'title' => 'Region 04',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_05',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'region_05' => array(
        'type' => 'region',
        'title' => 'Region 05',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_06',
        ),
        'parent' => 'main',
        'class' => 'color-bg-grey-light',
      ),
      'region_06' => array(
        'type' => 'region',
        'title' => 'Region 06',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_07',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_08',
        ),
        'parent' => 'main',
        'class' => 'color-bg-grey-light',
      ),
      'region_07' => array(
        'type' => 'region',
        'title' => 'Region 07',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
      'region_08' => array(
        'type' => 'region',
        'title' => 'Region 08',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'region_09',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'region_09' => array(
        'type' => 'region',
        'title' => 'Region 09',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
      'region_01' => NULL,
      'region_03' => NULL,
      'region_04' => NULL,
      'region_05' => NULL,
      'region_06' => NULL,
      'region_07' => NULL,
      'region_08' => NULL,
      'region_09' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ab8ac775-bcdc-4d9b-a049-6063fc9ce645';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-91125be3-4301-4291-851c-b54daefaec7b';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Tickets on sale now!',
      'title' => '',
      'body' => '<i class="fa fa-ticket"></i>
<h2 class="pane-title" id="tickets">Tickets on sale now!</h2>
<div class="text">Tickets are now on sale,  sign up below and do the following once you have logged in:<ul><li>Purchase your ticket</li><li>Connect your account to your ticket purchase</li><li>Submit your presentation</li></ul>Seats are limited so don\'t wait!</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '91125be3-4301-4291-851c-b54daefaec7b';
    $display->content['new-91125be3-4301-4291-851c-b54daefaec7b'] = $pane;
    $display->panels['center'][0] = 'new-91125be3-4301-4291-851c-b54daefaec7b';
    $pane = new stdClass();
    $pane->pid = 'new-c27a1fed-5431-4642-a6c1-50b66ff22040';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'entityform_block-register_interest';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-5',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c27a1fed-5431-4642-a6c1-50b66ff22040';
    $display->content['new-c27a1fed-5431-4642-a6c1-50b66ff22040'] = $pane;
    $display->panels['center'][1] = 'new-c27a1fed-5431-4642-a6c1-50b66ff22040';
    $pane = new stdClass();
    $pane->pid = 'new-dcfaf694-a63c-432d-8305-4215ef8f1d56';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-5 col-sm-push-2',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'dcfaf694-a63c-432d-8305-4215ef8f1d56';
    $display->content['new-dcfaf694-a63c-432d-8305-4215ef8f1d56'] = $pane;
    $display->panels['center'][2] = 'new-dcfaf694-a63c-432d-8305-4215ef8f1d56';
    $pane = new stdClass();
    $pane->pid = 'new-8d2006e6-b35b-4ddd-b901-20c16427dc84';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Eventbrite order',
            'php' => 'return drupalcampmel_core_has_eventbrite_order();',
          ),
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Ticket icon',
      'title' => '',
      'body' => '<i class="fa fa-ticket"></i>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8d2006e6-b35b-4ddd-b901-20c16427dc84';
    $display->content['new-8d2006e6-b35b-4ddd-b901-20c16427dc84'] = $pane;
    $display->panels['center'][3] = 'new-8d2006e6-b35b-4ddd-b901-20c16427dc84';
    $pane = new stdClass();
    $pane->pid = 'new-b111eec2-1158-4802-80c6-8b537ad3223b';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Eventbrite order',
            'php' => 'return drupalcampmel_core_has_eventbrite_order();',
          ),
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Get your ticket now!',
      'body' => '<p>There are limited tickets available, and we have more registrations of interest than seats available.</p> <p>Thanks to our awesome sponsors, tickets are only $5.</p>Get yours now, before they\'re all gone!</p>
<a href="https://www.eventbrite.com/e/drupalcampmelbourne2014-2732-tickets-13596805411" class="btn btn-primary form-submit">Buy ticket now</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-5',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'b111eec2-1158-4802-80c6-8b537ad3223b';
    $display->content['new-b111eec2-1158-4802-80c6-8b537ad3223b'] = $pane;
    $display->panels['center'][4] = 'new-b111eec2-1158-4802-80c6-8b537ad3223b';
    $pane = new stdClass();
    $pane->pid = 'new-437e2917-ce32-4fe5-87ac-9c0b9cea04ab';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Eventbrite order',
            'php' => 'return drupalcampmel_core_has_eventbrite_order();',
          ),
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Join the waiting list.',
      'body' => '<p>Tickets are now officially sold out, but don\'t fret, there is a waiting list, so get your name down now and we will alert you when/if more tickets become available.</p>
<a href="https://www.eventbrite.com/e/drupalcampmelbourne2014-2732-tickets-13596805411" class="btn btn-primary form-submit">Buy ticket now</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-5',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '437e2917-ce32-4fe5-87ac-9c0b9cea04ab';
    $display->content['new-437e2917-ce32-4fe5-87ac-9c0b9cea04ab'] = $pane;
    $display->panels['center'][5] = 'new-437e2917-ce32-4fe5-87ac-9c0b9cea04ab';
    $pane = new stdClass();
    $pane->pid = 'new-e987b753-9edb-4826-96e5-c961c9344acd';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'entityform_block-confirm_order';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Eventbrite order',
            'php' => 'return drupalcampmel_core_has_eventbrite_order();',
          ),
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Already have a ticket?',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-5 col-sm-push-2',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'e987b753-9edb-4826-96e5-c961c9344acd';
    $display->content['new-e987b753-9edb-4826-96e5-c961c9344acd'] = $pane;
    $display->panels['center'][6] = 'new-e987b753-9edb-4826-96e5-c961c9344acd';
    $pane = new stdClass();
    $pane->pid = 'new-5e124459-2625-4cec-b23b-74ab968b025b';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
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
          'name' => 'php',
          'settings' => array(
            'description' => 'Eventbrite order.',
            'php' => 'return drupalcampmel_core_has_eventbrite_order();',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'user_node',
          'settings' => array(
            'content_type' => 'session',
          ),
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Submit your session now!',
      'body' => 'This camp works best when the attendees present something, this means you too!
Things you might like to talk about:
<ul>
<li>How to use a module, group of modules or a Drupal distribution</li>
<li>Case study for one of your projects</li>
<li>Demonstartion of something interesting to the Drupal community</li>
<li>Open discussion on a subject you are interested in</li>
<li>Ask the community for input on a problem your experiencing</li>
</ul>
<div class="center"><a href="/node/add/session" class="btn btn-lg btn-primary">Add your session</a></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '5e124459-2625-4cec-b23b-74ab968b025b';
    $display->content['new-5e124459-2625-4cec-b23b-74ab968b025b'] = $pane;
    $display->panels['center'][7] = 'new-5e124459-2625-4cec-b23b-74ab968b025b';
    $pane = new stdClass();
    $pane->pid = 'new-a17de792-60fb-4c94-bac3-6835c3c8a9cb';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'user_node',
          'settings' => array(
            'content_type' => 'session',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Star',
      'title' => '',
      'body' => '<i class="fa fa-star"></i>
<h2 class="pane-title">You\'re a star!</h2>
You\'ve connected your ticket and added a session, thats awersome, we look forward to seeing you at the camp!',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'a17de792-60fb-4c94-bac3-6835c3c8a9cb';
    $display->content['new-a17de792-60fb-4c94-bac3-6835c3c8a9cb'] = $pane;
    $display->panels['center'][8] = 'new-a17de792-60fb-4c94-bac3-6835c3c8a9cb';
    $pane = new stdClass();
    $pane->pid = 'new-6a9e3ccd-ee53-447f-8594-7bb3650096cd';
    $pane->panel = 'region_01';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'About',
      'title' => '',
      'body' => '<h2>A two-day event aimed at bringing Drupal enthusiasts together to share knowledge, network, and most of all have fun!</h2>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'typo-heading-black',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6a9e3ccd-ee53-447f-8594-7bb3650096cd';
    $display->content['new-6a9e3ccd-ee53-447f-8594-7bb3650096cd'] = $pane;
    $display->panels['region_01'][0] = 'new-6a9e3ccd-ee53-447f-8594-7bb3650096cd';
    $pane = new stdClass();
    $pane->pid = 'new-579d67ac-b97a-4e0c-aeff-1aa0183bb713';
    $pane->panel = 'region_03';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Where',
      'body' => '<p>Catch Tram <a href="http://ptv.vic.gov.au/route/view/2903" target="_blank">48</a> or <a href="http://ptv.vic.gov.au/route/view/3343" target="_blank">11</a> to stop D18 where it’s just a 3 minute walk to:<p>
<div class="row">
  <div class="col-sm-6">
    <p><h3>Library At The Dock</h3><br>
    107 Victoria Harbour Promenade<br>
    Docklands<br>
    VIC 3008</p>
  </div>
  <div class="col-sm-6">
    <iframe width="100%" frameborder="0" style="border:0" src="https://www.google.com/maps/embed/v1/place?key=AIzaSyAjBQD17FoR341SBcPnqU-KpFTsw7i-OW8&q=Library+At+The+Dock">
</iframe>
  </div>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '579d67ac-b97a-4e0c-aeff-1aa0183bb713';
    $display->content['new-579d67ac-b97a-4e0c-aeff-1aa0183bb713'] = $pane;
    $display->panels['region_03'][0] = 'new-579d67ac-b97a-4e0c-aeff-1aa0183bb713';
    $pane = new stdClass();
    $pane->pid = 'new-c220e791-5334-4053-981e-5f2f24160203';
    $pane->panel = 'region_04';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Unconference',
      'body' => 'The camp will be relatively unstructured. Votes for interesting Lightning talks during the opening session will help us schedule expanded presentations throughout the rest of the day. We will use these votes to sort out the running order on the day.

Whatever your Drupal interest, you\'re sure to find something of interest.

<div class="row">
  <div class="col-sm-6">
    <h3>Friday:</h3>
    Presentations and BoF\'s
  </div>
  <div class="col-sm-6">
    <h3>Saturday:</h3>
    BoF\'s and Mentored Sprints
  </div>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c220e791-5334-4053-981e-5f2f24160203';
    $display->content['new-c220e791-5334-4053-981e-5f2f24160203'] = $pane;
    $display->panels['region_04'][0] = 'new-c220e791-5334-4053-981e-5f2f24160203';
    $pane = new stdClass();
    $pane->pid = 'new-aaaf1ff1-b935-48cb-8153-0fd3224492a2';
    $pane->panel = 'region_05';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'You make the camp',
      'body' => 'If you have any cool ideas for the camp then please be sure to contact us. You might like to:
<div class="row">
  <div class="col-sm-6">
    <h3>Give a lightning talk</h3>
    Give a short informal summary of a longer presentation (no longer than 5 minutes) during the opening session on the day.
  </div>
  <div class="col-sm-6">
    <h3>Make a presentation</h3>
    We\'re looking for presentations from 30-45 minutes long.
  </div>
</div>
<div class="row">
  <div class="col-sm-6">
    <h3>Organise a BoF</h3>
    BoF stands for Birds of a Feather, which are an informal gathering of like-minded individuals who wish to discuss a certain topic without a pre-planned agenda.
  </div>
  <div class="col-sm-6">
    <h3>Help with organisation and promotion</h3>
    We need some volunteers on the day to help out with a few minor tasks. If you\'re interested, please contact us. And don\'t forget to spread the word!!!
  </div>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aaaf1ff1-b935-48cb-8153-0fd3224492a2';
    $display->content['new-aaaf1ff1-b935-48cb-8153-0fd3224492a2'] = $pane;
    $display->panels['region_05'][0] = 'new-aaaf1ff1-b935-48cb-8153-0fd3224492a2';
    $pane = new stdClass();
    $pane->pid = 'new-d916c451-2d4c-4129-bf13-36dddd50f611';
    $pane->panel = 'region_06';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Whom should attend?',
      'body' => 'It is open to old hands and newcomers alike. Drupal people love helping others and sharing knowledge. For those learning there will be helpers and mentors on hand to answer your questions. If you are evaluating Drupal and want to check out the community it is also for you. We\'ll be happy to talk through what you want to get out of Drupal... and what you can give back too :)
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd916c451-2d4c-4129-bf13-36dddd50f611';
    $display->content['new-d916c451-2d4c-4129-bf13-36dddd50f611'] = $pane;
    $display->panels['region_06'][0] = 'new-d916c451-2d4c-4129-bf13-36dddd50f611';
    $pane = new stdClass();
    $pane->pid = 'new-369e6c69-7be5-44e3-adff-1de6e122d6e4';
    $pane->panel = 'region_07';
    $pane->type = 'block';
    $pane->subtype = 'views-sponsors-block';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '369e6c69-7be5-44e3-adff-1de6e122d6e4';
    $display->content['new-369e6c69-7be5-44e3-adff-1de6e122d6e4'] = $pane;
    $display->panels['region_07'][0] = 'new-369e6c69-7be5-44e3-adff-1de6e122d6e4';
    $pane = new stdClass();
    $pane->pid = 'new-6ef96251-5dab-4909-a7af-28b3608d9ae7';
    $pane->panel = 'region_08';
    $pane->type = 'block';
    $pane->subtype = 'entityform_block-contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Get in contact',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6ef96251-5dab-4909-a7af-28b3608d9ae7';
    $display->content['new-6ef96251-5dab-4909-a7af-28b3608d9ae7'] = $pane;
    $display->panels['region_08'][0] = 'new-6ef96251-5dab-4909-a7af-28b3608d9ae7';
    $pane = new stdClass();
    $pane->pid = 'new-5a58819b-907c-4c65-add2-827f96e14296';
    $pane->panel = 'region_09';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Not for profit',
      'body' => 'This event is not intended to generate a profit. Any incidental profit will be incorporated back to the <a href="https://assoc.drupal.org/" target="_blank">Drupal Association</a> (our legal entity) and will be available for the funding of future Melbourne Drupal Camps.',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-4 col-md-push-1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5a58819b-907c-4c65-add2-827f96e14296';
    $display->content['new-5a58819b-907c-4c65-add2-827f96e14296'] = $pane;
    $display->panels['region_09'][0] = 'new-5a58819b-907c-4c65-add2-827f96e14296';
    $pane = new stdClass();
    $pane->pid = 'new-2fae9a2e-8f52-4ef6-a2d8-d71efda512b0';
    $pane->panel = 'region_09';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Contributors',
      'body' => 'Brian&nbsp;Gilbert&nbsp;(<a href="https://www.drupal.org/user/139189" target="_blank">realityloop</a>), Guy&nbsp;Owen&nbsp;(<a href="https://www.drupal.org/user/1159450">GRO</a>), Jarkko&nbsp;Oksanen&nbsp;(<a href="https://www.drupal.org/user/2352292" target="_blank">jOksanen</a>), Luis&nbsp;Saavedra&nbsp;(<a href="https://www.drupal.org/user/373022" target="_blank">Luisga</a>), Stuart&nbsp;Clark&nbsp;(<a href="https://www.drupal.org/user/103796" target="_blank">Deciphered</a>)',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-4 col-md-push-3',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2fae9a2e-8f52-4ef6-a2d8-d71efda512b0';
    $display->content['new-2fae9a2e-8f52-4ef6-a2d8-d71efda512b0'] = $pane;
    $display->panels['region_09'][1] = 'new-2fae9a2e-8f52-4ef6-a2d8-d71efda512b0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vote_sessions';
  $page->task = 'page';
  $page->admin_title = 'Vote sessions';
  $page->admin_description = '';
  $page->path = 'sessions/vote';
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
  $page->menu = array();
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
