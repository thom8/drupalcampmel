<?php
/**
 * @file
 * drupalcampmel_core.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function drupalcampmel_core_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|session|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'session';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'author' => array(
      'weight' => '1',
      'label' => 'inline',
      'format' => 'author',
    ),
  );
  $export['node|session|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function drupalcampmel_core_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|session|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'session';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'two_col_9_3';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        1 => 'author',
        2 => 'field_session_level',
        3 => 'field_session_style',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'author' => 'right',
      'field_session_level' => 'right',
      'field_session_style' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|session|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|session|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'session';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'two_col_9_3';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_summary',
        2 => 'body',
      ),
      'right' => array(
        3 => 'field_session_level',
        4 => 'field_session_style',
        5 => 'options',
      ),
      'hidden' => array(
        6 => 'path',
        7 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_summary' => 'left',
      'body' => 'left',
      'field_session_level' => 'right',
      'field_session_style' => 'right',
      'options' => 'right',
      'path' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|session|form'] = $ds_layout;

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
