<?php
/**
 * @file
 * drupalcampmel_core.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function drupalcampmel_core_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'summary',
      ),
    ),
    'fields' => array(
      'summary' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|form';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_first_name',
        1 => 'field_last_name',
        2 => 'account',
      ),
      'hidden' => array(
        3 => 'googleanalytics',
        4 => 'timezone',
        5 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_first_name' => 'ds_content',
      'field_last_name' => 'ds_content',
      'account' => 'ds_content',
      'googleanalytics' => 'hidden',
      'timezone' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|form'] = $ds_layout;

  return $export;
}
