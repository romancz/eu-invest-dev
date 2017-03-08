<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 */
?>

<?php global $base_url; ?>
<?php $share_url = $base_url . $fields['path']->content . '%23update-' . $row->nid; ?>
<?php $img_path = '/' . path_to_theme() . '/images/'; ?>
<?php $with_slideshow = FALSE; ?>
<?php $with_video = FALSE; ?>
<?php $only_one_slide = FALSE; ?>
<?php if (count($row->field_field_update_slideshow) === 1){
  $only_one_slide = TRUE;
}
?>
<?php if (!empty($row->field_field_update_slideshow)){
  $with_slideshow = TRUE;
}
if (!empty($row->field_field_update_multimedia)){
  $with_video = TRUE;
}
?>
<div class="update-wrapper" id="update-<?php print $row->nid; ?>"></div>

  <h3 class="update-title"><?php print $fields['title_field']->content; ?></h3>

  <div class="row views-inside-row <?php $with_slideshow ? print 'with-slideshow' : print ''; ?>">
  <?php if ($with_video): ?>
  <div class="col-sm-7">
      <span class="selected-project-date"><?php print $fields['field_update_subtitle']->content; ?></span>
      <?php print $fields['body']->content; ?>
      <div class="field-name-field-external-links">
      <?php print $fields['field_external_links']->content; ?>
      </div>
      <div class="field-name-field-docs-to-download">
      <?php print $fields['field_docs_to_download']->content; ?>
      </div>
  </div>
  <div class="col-sm-5 right">
      <?php print $fields['field_update_multimedia']->content; ?>
  </div>
<?php else: ?>
  <span class="selected-project-date"><?php print $fields['field_update_subtitle']->content; ?></span>
  <?php print $fields['body']->content; ?>
    <div class="field-name-field-external-links">
      <?php print $fields['field_external_links']->content; ?>
    </div>
    <div class="field-name-field-docs-to-download">
      <?php print $fields['field_docs_to_download']->content; ?>
    </div>
<?php endif; ?>
</div>

<?php if ($with_slideshow): ?>
  <div class="slick-project-photo-gallery-for slick-project-for">
    <?php print $fields['field_update_slideshow_1']->content; ?>
  </div>
  <div class="slick-project-photo-gallery-nav slick-project-nav <?php $only_one_slide ? print 'single-slide' : print ''; ?>">
      <?php print $fields['field_update_slideshow']->content; ?>
  </div>
<?php endif; ?>

  <div class="socialNW">
  <span><?php print t("Share this update"); ?></span>
    <a class="popup" href="//www.facebook.com/share.php?u=<?php print $share_url; ?>" target="_blank">
      <img src="<?php print $img_path; ?>facebook.png">
    </a>
    <a class="popup" href="https://twitter.com/intent/tweet?url=<?php print $share_url; ?>" target="_blank">
      <img src="<?php print $img_path; ?>twitter.png">
    </a>
    <a href="https://www.linkedin.com/shareArticle?mini=true&url=<?php print $share_url; ?>&title=<?php print $fields['title']->content; ?>&summary=&source=" target="_blank">
      <img src="<?php print $img_path; ?>linkedin.png">
      </a>
  </div>
