<?php
/**
 * @file
 * Mobile Friendly Navigation Toolbar module integration.
 */

/**
 * Implements hook_init().
 */
function drupalcampmel_core_init() {
  global $theme;

  if ($theme == variable_get('theme_default', NULL)) {
    navbar_suppress(TRUE);
  }
}
