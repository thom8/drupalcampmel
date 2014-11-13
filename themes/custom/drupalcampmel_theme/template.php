<?php
/**
 * @file
 * template.php
 */

/**
 * Implements hook_form_alter().
 */
function drupalcampmel_theme_form_alter(&$form, $form_state, $form_id) {
  // Move field labels into bootstrap placeholders.
  $form_ids = array(
    'confirm_order_entityform_edit_form',
    'contact_entityform_edit_form',
    'register_interest_entityform_edit_form'
  );
  if (in_array($form_id, $form_ids)) {
    _drupalcampmel_theme_add_field_placeholders($form);
  }

  switch ($form_id) {
    case 'register_interest_entityform_edit_form':
    case 'contact_entityform_edit_form':
      // Modify field sizes.
      $form['field_first_name']['#prefix'] = '<div class="row">';
      $form['field_last_name']['#suffix']  = '</div>';

      $form['field_email_address']['#prefix'] = '<div class="row">';
      $form['field_email_address']['#suffix'] = '</div>';

      $form['field_first_name']['#attributes']['class'][]    = 'col-sm-6';
      $form['field_last_name']['#attributes']['class'][]     = 'col-sm-6';
      $form['field_email_address']['#attributes']['class'][] = 'col-sm-12';

      // Add classes to submit button.
      $form['actions']['submit']['#attributes']['class'][] = 'btn';
      $form['actions']['submit']['#attributes']['class'][] = 'btn-primary';
      $form['actions']['submit']['#attributes']['class'][] = 'btn-lg';
      break;
  }

  if ('contact_entityform_edit_form' == $form_id) {
    $form['field_body']['#prefix']                = '<div class="row">';
    $form['field_body']['#suffix']                = '</div>';
    $form['field_body']['#attributes']['class'][] = 'col-sm-12';
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function drupalcampmel_theme_form_user_login_block_alter(&$form, $form_state) {
  // Use placeholder instead of title.
  $form['name']['#title_display']             = 'invisible';
  $form['name']['#attributes']['placeholder'] = $form['name']['#title'];
  $form['pass']['#title_display']             = 'invisible';
  $form['pass']['#attributes']['placeholder'] = $form['pass']['#title'];

  // Remove 'request new password' link.
  unset($form['links']);

  // Add classes to submit button.
  $form['actions']['submit']['#attributes']['class'][] = 'btn';
  $form['actions']['submit']['#attributes']['class'][] = 'btn-primary';
  $form['actions']['submit']['#attributes']['class'][] = 'btn-lg';
}

/**
 * Move field labels into bootstrap placeholders.
 */
function _drupalcampmel_theme_add_field_placeholders(&$form) {
  foreach (element_children($form) as $child) {
    if (isset($form[$child][LANGUAGE_NONE][0])) {
      foreach (element_children($form[$child][LANGUAGE_NONE][0]) as $key) {
        // Use placeholder instead of title.
        $form[$child][LANGUAGE_NONE][0][$key]['#title_display']             = 'invisible';
        $form[$child][LANGUAGE_NONE][0][$key]['#attributes']['placeholder'] = $form[$child][LANGUAGE_NONE][0][$key]['#title'];
      }
    }
  }
}

/**
 * Implements hook_preprocess().
 */
function drupalcampmel_theme_preprocess(&$vars, $hook) {
  if ('block' == $hook) {
    // Wrap all content blocks (excepting system main block on front page) with
    // bootstrap container class.
    if ('content' == $vars['block']->region && (!drupal_is_front_page() || 'block-system-main' != $vars['block_html_id'])) {
      $vars['classes_array'][] = 'container';
    }

    // Block specific modifications.
    switch ($vars['block_html_id']) {
      // Use SVG logo.
      case 'block-blockify-blockify-logo':
        $vars['content'] = str_replace('.png', '.svg', $vars['content']);
        break;

      // Add SPANs to site name string.
      case 'block-blockify-blockify-site-name':
        preg_match_all('/([A-Z][a-z]+|[0-9]+)/', variable_get('site_name', NULL), $parts);

        $vars['content'] = '';
        foreach ($parts[1] as $delta => $part) {
          $id = strtolower($part);
          $vars['content'] .= "<span class='part-{$delta} part-{$id}'>{$part}</span>";
        }
        break;
    }
  }
}

/**
 * Implements hook_preprocess_page().
 */
function drupalcampmel_theme_preprocess_page(&$vars) {
  $vars['breadcrumb'] = '';
  $vars['logo']       = NULL;
  $vars['title']      = '';
  unset($vars['site_slogan'], $vars['tabs']);
}

/**
 * Implements hook_preprocess_views_view_matrix().
 */
function drupalcampmel_theme_preprocess_views_view_matrix(&$vars) {
  // Attach proper styles.
  $vars['matrix_attributes']['class'] = array('table', 'table-responsive');

  // Name rooms.
  $rooms = array('Activity room', 'Meeting room 1', 'Meeting room 2');
  foreach ($vars['header'] as $id => $header) {
    if ($id == 0) {
      continue;
    }

    $vars['header'][$id]['data'] = $rooms[$id - 1];
  }

  // Schedule.
  if (count($vars['rows']) <= 6) {
    $schedule = array(
      1 => '10:45 - 11:30',
      2 => '11:40 - 12:25',
      3 => '13:10 - 13:55',
      4 => '14:05 - 14:50',
      5 => '15:20 - 16:05',
      6 => '16:15 - 17:00',
    );
  }
  else {
    $schedule = array(
      1 => '10:45 - 11:30',
      2 => '11:35 - 12:05',
      3 => '12:55 - 13:25',
      4 => '13:30 - 14:00',
      5 => '14:05 - 14:35',
      6 => '15:00 - 15:30',
      7 => '15:35 - 16:05',
      8 => '16:10 - 16:40',
    );
  }

  $i = 0;
  foreach ($vars['rows'] as $id => $row) {
    $i++;
    $vars['rows'][$id]['header']['data'] = $schedule[$i];
  }
}
