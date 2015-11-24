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
      // Add classes to submit button.
      $form['actions']['submit']['#attributes']['class'][] = 'btn';
      $form['actions']['submit']['#attributes']['class'][] = 'btn-primary';
      $form['actions']['submit']['#attributes']['class'][] = 'btn-lg';
      break;

    case 'poll_entityform_edit_form':
      $instances = field_info_instances('entityform', 'poll');
      foreach ($instances as $field_name => $instance) {
        $lang_code = field_language('entityform', $form['#entity'], $field_name);
        if (isset($form[$field_name][$lang_code]['#type']) && $form[$field_name][$lang_code]['#type'] == 'radios') {
          foreach ($form[$field_name][$lang_code]['#options'] as $delta => $value) {
            $form[$field_name][$lang_code][$delta]['#wrapper_attributes']['class'][] = 'radio-inline';
          }
        }
      }
      break;
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
  $vars['logo']  = NULL;
  $vars['title'] = '';
}

/**
 * Implements hook_preprocess_views_view_matrix().
 */
function drupalcampmel_theme_preprocess_views_view_matrix(&$vars) {
  // Attach proper styles.
  $vars['matrix_attributes']['class'] = array('table', 'table-responsive');

  // Name rooms.
  $rooms = array('Community Room (2F)', 'Activities room (GF)', 'The Terrace (2F)');
  foreach ($vars['header'] as $id => $header) {
    if ($id == 0) {
      continue;
    }

    $vars['header'][$id]['data'] = $rooms[$id - 1];
  }

  // Schedule.
  $schedule = array();
  switch (count($vars['rows'])) {
    // 45 minute session schedule.
    case 6:
      $schedule = array(
        1       => '10:45 - 11:30',
        2       => '11:35 - 12:20',
        'lunch' => t('Lunch'),
        3       => '13:20 - 14:05',
        4       => '14:10 - 14:55',
        'break' => t('Break'),
        5       => '15:10 - 15:55',
        6       => '16:00 - 16:45',
      );
      break;

    // 40 minute session schedule.
    case 7:
      $schedule = array(
        1       => '10:45 - 11:25',
        2       => '11:30 - 12:10',
        'lunch' => t('Lunch'),
        3       => '13:10 - 13:50',
        4       => '13:55 - 14:35',
        5       => '14:40 - 15:20',
        'break' => t('Break'),
        6       => '15:35 - 16:15',
        7       => '16:20 - 17:00',
      );

      break;

    // 30 minute session schedule.
    case 8:
      $schedule = array(
        1       => '10:45 - 11:15',
        2       => '11:20 - 11:50',
        'lunch' => t('Lunch'),
        3       => '12:50 - 13:20',
        4       => '13:25 - 13:55',
        5       => '14:00 - 14:30',
        'break' => t('Break'),
        6       => '14:45 - 15:15',
        7       => '15:20 - 15:50',
        8       => '15:55 - 16:25',
      );
      break;
  }

  $i = 0;
  $next = array_keys($schedule);
  foreach ($vars['rows'] as $id => $row) {
    $i++;
    $vars['rows'][$id]['header']['data'] = $schedule[$i];
    if (isset($next[$i]) && !is_numeric($next[$i])) {
      $vars['rows'] = array_slice($vars['rows'], 0, $i, TRUE) +
        array(
          $next[$i] => array(
            'header' => array(
              'data'       => $schedule[$next[$i]],
              'attributes' => array(),
            ),
            array(
              'data'       => '',
              'attributes' => array(),
            ),
            array(
              'data'       => '',
              'attributes' => array(),
            ),
            array(
              'data'       => '',
              'attributes' => array(),
            ),
          )
        ) + array_slice($vars['rows'], $i, NULL, TRUE);
      $vars['row_classes'][$next[$i]] = array();
    }
  }
}
