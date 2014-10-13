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
          0 => 1,
          1 => 'main-row',
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          6 => 6,
          7 => 7,
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ab8ac775-bcdc-4d9b-a049-6063fc9ce645';
  $display->content = array();
  $display->panels = array();
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c27a1fed-5431-4642-a6c1-50b66ff22040';
    $display->content['new-c27a1fed-5431-4642-a6c1-50b66ff22040'] = $pane;
    $display->panels['center'][0] = 'new-c27a1fed-5431-4642-a6c1-50b66ff22040';
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
    $pane->pid = 'new-74316545-b326-4cdc-8f61-ab2a2f1e7828';
    $pane->panel = 'region_03';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Tickets',
      'body' => '<p>We are keeping the cost of the event to a minimum for participants. Tickets cost $[n] (excluding GST and Eventbrite cost) per day. A ticket includes:
<ul>
<li>Entry to the event</li>
<li>Drinks and snacks throughout the day</li>
<li>Wifi at the venue</li>
<li>Lunch</li>
</ul>

[Buy your ticket now]</p>',
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
    $pane->uuid = '74316545-b326-4cdc-8f61-ab2a2f1e7828';
    $display->content['new-74316545-b326-4cdc-8f61-ab2a2f1e7828'] = $pane;
    $display->panels['region_03'][0] = 'new-74316545-b326-4cdc-8f61-ab2a2f1e7828';
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
<p>Library at the Dock<br>
107 Victoria Harbour Promenade<br>
Docklands<br>
Vic 3008</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '579d67ac-b97a-4e0c-aeff-1aa0183bb713';
    $display->content['new-579d67ac-b97a-4e0c-aeff-1aa0183bb713'] = $pane;
    $display->panels['region_03'][1] = 'new-579d67ac-b97a-4e0c-aeff-1aa0183bb713';
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

<h3>Friday:</h3>
Presentations and BoF\'s

<h3>Saturday:</h3>
BoF\'s and Mentored Sprints
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
<h3>Give a lightning talk</h3>
Give a short informal summary of a longer presentation (no longer than 5 minutes) during the opening session on the day.
<h3>Make a presentation</h3>
We\'re looking for presentations from 30 minutes long.
<h3>Organise a BoF</h3>
BoF stands for Birds of a Feather, which are an informal gathering of like-minded individuals who wish to discuss a certain topic without a pre-planned agenda.
<h3>Help with organisation and promotion</h3>
We need some volunteers on the day to help out with a few minor tasks. If you\'re interested, please contact us. And don\'t forget to spread the word!!!
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
    $pane->pid = 'new-6ef96251-5dab-4909-a7af-28b3608d9ae7';
    $pane->panel = 'region_07';
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
    $display->panels['region_07'][0] = 'new-6ef96251-5dab-4909-a7af-28b3608d9ae7';
    $pane = new stdClass();
    $pane->pid = 'new-5a58819b-907c-4c65-add2-827f96e14296';
    $pane->panel = 'region_08';
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
    $display->panels['region_08'][0] = 'new-5a58819b-907c-4c65-add2-827f96e14296';
    $pane = new stdClass();
    $pane->pid = 'new-2fae9a2e-8f52-4ef6-a2d8-d71efda512b0';
    $pane->panel = 'region_08';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Contributors',
      'body' => 'Brian Gilbert (<a href="https://www.drupal.org/user/139189" target="_blank">realityloop</a>), Luis Saavedra (<a href="https://www.drupal.org/user/373022" target="_blank">Luisga</a>), Stuart Clark (<a href="https://www.drupal.org/user/103796" target="_blank">Deciphered</a>)',
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
    $display->panels['region_08'][1] = 'new-2fae9a2e-8f52-4ef6-a2d8-d71efda512b0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
