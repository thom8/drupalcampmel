<?php
/**
 * @file
 * Block module integration.
 */

/**
 * Implements hook_block_info().
 */
function drupalcampmel_core_block_info() {
  $blocks['copyright'] = array(
    'info'       => t('Copyright Block'),
    'status'     => TRUE,
    'weight'     => 0,
    'visibility' => 0,
  );

  return $blocks;
}

/**
 * Implements hook_block_view().
 */
function drupalcampmel_core_block_view($delta = '') {
  $block = array();

  switch ($delta) {
    case 'copyright':
      $block['subject'] = t('');
      $block['content'] = '&copy; 2015 DrupalMelbourne Community. <br>' . l('Fork this site on Github', 'https://github.com/drupalmel/drupalcampmel') . '.';
      break;
  }

  return $block;
}
