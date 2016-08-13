<?php
/**
 * @file
 * Renders the Paragraphs Bundles Button paragraph.
 */

/**
 * Render function used for any option selected on a paragraph widget that is
 * of the bundle: paragraphs_bundles_button.
 *
 * @param array $vars
 *   Variables available for pre-processing.
 * @param string $name
 *   The paragraph bundle.
 * @param string $field_name
 *   The name of the field providing the data.
 * @param string $value
 *   The field data.
 */
function pb_button_paragraphs_bundles_button_render_values(&$vars, $name, $field_name, $value = NULL) {

  // Add our template to the suggestions and custom css for our widget.
  if (!in_array('pb_button_paragraphs_bundles_button_render', $vars['theme_hook_suggestions'])) {
    $vars['theme_hook_suggestions'][] = 'pb_button_paragraphs_bundles_button_render';
    // Add our css as well.
    drupal_add_css(drupal_get_path('module', 'pb_button') . '/css/pb_button.css');
  }

  // Metadata wrapper for the paragraph item.
  $wrapper = entity_metadata_wrapper('paragraphs_item', $vars['paragraphs_item']);

  // Define output based on the field.
  switch ($field_name) {
    case 'field_pb_button_bg_color':
      $vars['bg_color'] = '';
      $vars['linkit'] = '';
      if (isset($wrapper->{$field_name})) {
        $linkit = $wrapper->field_pb_button_link;
        if (isset($linkit)) {
          $vars['linkit'] = $linkit->value()['url'];
        }
        else {
          $vars['linkit'] = '#';
        }
        $value = $wrapper->{$field_name}->value()['rgb'];
        if (!empty($value)) {
          $vars['bg_color'] = $value;
        }
      }
      break;

    case 'field_pb_button_text':
      $vars['button_text'] = '';
      if (isset($wrapper->{$field_name})) {
        $value = $wrapper->{$field_name}->value()['safe_value'];
        if (!empty($value)) {
          $vars['button_text'] = $value;
        }
      }
      break;

    case 'field_pb_button_image':
      $image_style_field = $wrapper->field_pb_button_image_style;
      if (isset($image_style_field)) {
        $image_style = $image_style_field->value();
        $vars['button_image'] = '';
        if (isset($wrapper->{$field_name})) {
          $value = $wrapper->{$field_name}->value();
          if (isset($value)) {
            $value['path'] = $value['uri'];
            $value['style_name'] = $image_style;
            $styled_image = theme_image_style($value);
            $vars['button_image'] = $styled_image;
          }
        }
      }
      break;
  }
}
