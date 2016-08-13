<?php
/**
 * @file
 * Template used to render the Paragraphs Bundles Button.
 *
 * Bundle: paragraphs_bundles_button
 */
?>

<div class="pb-button-background" style="background-color: <?php print $bg_color; ?>; ">
  <a class="pb-button-no-color" href="/<?php print $linkit; ?>">
  <div class="inner-button-contents">
    <div class="pb-button-image">
      <?php print $button_image; ?>
    </div>
    <div class="pb-button-text">
      <?php print $button_text; ?>
    </div>
  </div>
  </a>
</div>
