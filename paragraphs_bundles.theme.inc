<?php
/**
 * @file
 * Contains theme preprocessors for various theme hooks.
 */

/**
 * Implements hook_preprocess_paragraphs_field_multiple_value_form().
 */
function paragraphs_bundles_preprocess_paragraphs_field_multiple_value_form(&$vars) {

  // Set the title.
  $vars['element']['#title'] = '';

  $children = !empty($vars['element']['add_more']) ? element_children($vars['element']['add_more']) : array();
  if (!empty($children)) {
    foreach ($children as $bundle) {
      $machine_name = str_replace(PB_ADD_MORE_BUNDLE, '', $bundle);
      // Allow modules the ability to define their own icons and titles for
      // paragraph add-more submit buttons. If a title is not defined we are
      // just using the #value that comes from the default input button.
      // $info should be an array containing 'icon' and 'title'. The 'title' is
      // optional.
      $info = module_invoke_all('paragraphs_bundles_icons', $machine_name);
      if (!empty($info)) {
        // Changes the #value to an icon and sets the 'title' to the old #value.
        // We are using unicode since this is an <input>.
        $vars['element']['add_more'][$bundle]['#attributes']['title'][] = isset($info['title']) ? $info['title'] : $vars['element']['add_more'][$bundle]['#value'];
        $vars['element']['add_more'][$bundle]['#value'] = isset($info['icon']) ? $info['icon'] : $vars['element']['add_more'][$bundle]['#value'];
        $vars['element']['add_more'][$bundle]['#attributes']['class'][] = 'paragraphs-add-mode-button';
      }
    }
  }
}
