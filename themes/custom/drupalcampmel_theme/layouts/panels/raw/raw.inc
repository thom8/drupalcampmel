<?php

/**
 * @file
 */

/**
 * implementation of hook_panels_layouts()
 */
$plugin = array(
  'title'    => t('Raw'),
  'category' => t('DrupalCampMel'),
  'theme'    => 'drupalcampmel_raw',
  'regions'  => array(
    'content' => t('Content'),
  ),
);
