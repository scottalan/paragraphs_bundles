<?php
/**
 * @file
 * pb_button.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pb_button_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background|paragraphs_item|paragraphs_bundles_button|form';
  $field_group->group_name = 'group_background';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'paragraphs_bundles_button';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '0',
    'children' => array(
      0 => 'field_pb_button_bg_color',
      1 => 'field_pb_button_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-background field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_background|paragraphs_item|paragraphs_bundles_button|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|paragraphs_item|paragraphs_bundles_button|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'paragraphs_bundles_button';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '2',
    'children' => array(
      0 => 'field_pb_button_image',
      1 => 'field_pb_button_image_style',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-image field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_image|paragraphs_item|paragraphs_bundles_button|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Background');
  t('Image');

  return $field_groups;
}
