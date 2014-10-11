<?php
/**
 * @file
 * template.php
 */

/**
 * Implements hook_form_alter().
 */
function drupalcampmel_theme_form_register_interest_entityform_edit_form_alter(&$form, $form_state) {
  foreach (element_children($form) as $child) {
    if (isset($form[$child][LANGUAGE_NONE][0])) {
      foreach (element_children($form[$child][LANGUAGE_NONE][0]) as $key) {
        // Use placeholder instead of title.
        $form[$child][LANGUAGE_NONE][0][$key]['#title_display']             = 'invisible';
        $form[$child][LANGUAGE_NONE][0][$key]['#attributes']['placeholder'] = $form[$child][LANGUAGE_NONE][0][$key]['#title'];
      }
    }
  }

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
}

/**
 * Implements hook_preprocess().
 */
function drupalcampmel_theme_preprocess(&$vars, $hook) {
  if ('block' == $hook) {
    // Wrap all content blocks (excepting system main block) with bootstrap
    // container class.
    if ('content' == $vars['block']->region && 'block-system-main' != $vars['block_html_id']) {
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
 * Implements hook_preprocess_panels_pane().
 */
function drupalcampmel_theme_preprocess_panels_pane(&$vars) {
  // Add bootstrap container class to all panels panes.
//  $vars['classes_array'][] = 'container';
}

/**
 * Implements hook_preprocess_page().
 */
function drupalcampmel_theme_preprocess_page(&$vars) {
  $vars['breadcrumb'] = '';
  $vars['title'] = '';
  unset($vars['tabs']);
}
