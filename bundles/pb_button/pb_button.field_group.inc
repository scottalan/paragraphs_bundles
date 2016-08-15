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
      'label' => 'Background',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-background field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
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
    'weight' => '1',
    'children' => array(
      0 => 'field_pb_button_image',
      1 => 'field_pb_button_image_style',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-image field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_image|paragraphs_item|paragraphs_bundles_button|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|paragraphs_item|paragraphs_bundles_button|form';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'paragraphs_bundles_button';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '2',
    'children' => array(
      0 => 'field_pb_button_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-text field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_text|paragraphs_item|paragraphs_bundles_button|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Background');
  t('Image');
  t('Text');

  return $field_groups;
}
