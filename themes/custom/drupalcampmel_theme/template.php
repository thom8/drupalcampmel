<?php
/**
 * @file
 * template.php
 */

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
    foreach ($parts[1] as $part) {
      $delta = strtolower($part);
      $vars['content'] .= "<span class='part-{$delta}'>{$part}</span>";
    }
  }
}
