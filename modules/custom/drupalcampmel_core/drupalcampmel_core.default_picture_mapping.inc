<?php
/**
 * @file
 * drupalcampmel_core.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function drupalcampmel_core_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Logo';
  $picture_mapping->machine_name = 'logo';
  $picture_mapping->breakpoint_group = 'logo';
  $picture_mapping->mapping = array(
    'custom.user.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'logo_custom_user_wide_1x',
      ),
    ),
    'custom.user.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'logo_custom_user_desktop_1x',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'logo_custom_user_tablet_1x',
      ),
    ),
  );
  $export['logo'] = $picture_mapping;

  return $export;
}
