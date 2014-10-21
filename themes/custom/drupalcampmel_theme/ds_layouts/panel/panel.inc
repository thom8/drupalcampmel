<?php
/**
 * @file
 * Display Suite layout.
 */

function ds_panel() {
  return array(
    'label'   => t('DrupalCampMelbourne: Bootstrap panel'),
    'regions' => array(
      'body'    => t('Body'),
      'footer'  => t('Footer'),
    ),
  );
}
