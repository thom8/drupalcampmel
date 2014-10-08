<?php
/**
 * @file
 * template.php
 */

/**
 * Implements hook_preprocess_panels_pane().
 */
function drupalcampmel_theme_preprocess_panels_pane(&$vars) {
  if ($vars['pane']->type == 'page_logo') {
    $vars['content'] = str_replace('.png', '.svg', $vars['content']);
  }
}
