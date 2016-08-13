<?php
/**
 * @file
 * pb_button.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pb_button_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function pb_button_image_default_styles() {
  $styles = array();

  // Exported image style: paragraph_button.
  $styles['paragraph_button'] = array(
    'label' => 'Paragraph Button',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => -10,
      ),
      1 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 300,
          'height' => 150,
        ),
        'weight' => -9,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_paragraphs_info().
 */
function pb_button_paragraphs_info() {
  $items = array(
    'paragraphs_bundles_button' => array(
      'name' => 'Paragraphs Bundles Button',
      'bundle' => 'paragraphs_bundles_button',
      'locked' => '1',
    ),
  );
  return $items;
}
