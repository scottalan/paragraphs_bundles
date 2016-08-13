<?php
/**
 * @file
 * Hooks provided by the Paragraphs Bundles module.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * A hook used to define information about the paragraph bundles' fields.
 *
 * @code
 *   function hook_paragraphs_bundles_field_info() {
 *     return array(
 *       'field_name_of_my_field' => array(
 *         'paragraph_bundle_name' => array(
 *           'render callback' => 'MYMODULE_my_render_callback',
 *           'allowed values' => 'MYMODULE_get_allowed_values' || array('key' => 'value),
 *         ),
 *       ),
 *     );
 *   }
 * @endcode
 */
function MYMODULE_paragraphs_bundles_field_info() {}

/**
 * A hook used to alter the values returned by hook_paragraphs_bundles_field_info().
 */
function MYMODULE_paragraphs_bundles_field_info_alter(&$info) {
  foreach ($info as $field_name => $bundle) {
    if ($field_name == 'field_name_of_my_field') {
      foreach ($bundle as $name => $data) {
        if ($name == 'paragraph_bundle_name') {
          $info[$field_name][$bundle]['render callback'] = 'MYMODULE_new_render_callback';
        }
      }
    }
  }
}
