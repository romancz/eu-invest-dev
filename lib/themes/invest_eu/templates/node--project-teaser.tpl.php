<?php
/**
 * @file
 * Project teaser.
 */
 ?>
<div class="selected-project-row row">
  <div class="col-sm-8 left">
    <h3 class="selected-project-title"><a href="<?php print $node_url;?>"/><?php print $title; ?></a></h3>
    <span class="selected-project-date"><?php print date("d/m/Y", $node->created); ?></span>
    <?php if (isset($content['field_about_project'])): ?>
      <div class="selected-project-text"><?php print $content['field_about_project'][0]['#markup']; ?></div>
    <?php endif; ?>
    <a href="<?php print $node_url; ?>" title="<?php print $title; ?>" class="selected-project-read-more">
      <?php print t("Read more"); ?> &gt;
      <span class="sr-only"><?php print $title; ?></span>
    </a>
  </div>
  <div class="col-sm-4 right">
    <?php if ($img): ?>
      <?php print $img; ?>
    <?php endif; ?>
  </div>
</div>
