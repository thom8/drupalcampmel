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
        $form[$child][LANGUAGE_NONE][0][$key]['#title_display'] = 'invisible';
        $form[$child][LANGUAGE_NONE][0][$key]['#attributes']['placeholder'] = $form[$child][LANGUAGE_NONE][0][$key]['#title'];

        // Modify field sizes.
        if ('field_email_address' != $child) {
          $form[$child]['#attributes']['class'][] = 'col-sm-6';
        }
      }
    }
  }

  // Add classes to submit button.
  $form['actions']['submit']['#attributes']['class'][] = 'btn';
  $form['actions']['submit']['#attributes']['class'][] = 'btn-primary';
  $form['actions']['submit']['#attributes']['class'][] = 'btn-lg';
}

/**
 * Implements hook_preprocess_panels_pane().
 */
function drupalcampmel_theme_preprocess_panels_pane(&$vars) {
  // Use SVG logo.
  if ('page_logo' == $vars['pane']->type) {
    $vars['content'] = str_replace('.png', '.svg', $vars['content']);
  }

  // Add SPANs to site name string.
  if ('page_site_name' == $vars['pane']->type) {
    preg_match_all('/([A-Z][a-z]+|[0-9]+)/', $vars['content'], $parts);

    $vars['content'] = '';
    foreach ($parts[1] as $delta => $part) {
      $id = strtolower($part);
      $vars['content'] .= "<span class='part-{$delta} part-{$id}'>{$part}</span>";
    }
  }
}
