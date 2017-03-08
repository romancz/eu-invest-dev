<?php
/**
 * @file
 * Projects.
 */
global $base_url; ?>
<?php $share_url = $base_url . $fields['path']->content; ?>
<?php $img_path = '/' . path_to_theme() . '/images/'; ?>
<?php $with_slideshow = FALSE; ?>
<?php $only_one_slide = FALSE; ?>
<?php if (count($row->field_field_visual) === 1){
  $only_one_slide = TRUE;
}
?>
<?php if (!empty($row->field_field_visual)){
  $with_slideshow = TRUE;
}
?>
<div class="preview-content-row row">
  <div class="socialNW">
  <span><?php print t("Share"); ?></span>
    <a class="popup" href="//www.facebook.com/share.php?u=<?php print $share_url; ?>" target="_blank">
      <img src="<?php print $img_path; ?>facebook.png">
    </a>
    <a class="popup" href="https://twitter.com/intent/tweet?url=<?php print $share_url; ?>" target="_blank">
      <img src="<?php print $img_path; ?>twitter.png">
    </a>
    <a href="https://www.linkedin.com/shareArticle?mini=true&url=<?php print $share_url; ?>&title=<?php print $fields['title_field']->content; ?>&summary=&source=" target="_blank">
      <img src="<?php print $img_path; ?>linkedin.png">
      </a>
  </div>
    <div class="col-sm-5 left">
    <?php if($with_slideshow): ?>
      <div class="slick-project-list-for slick-preview-for">
      <?php print $fields['field_visual_1']->content; ?>
      </div>
      <div class="slick-project-list-nav slick-preview-nav <?php $only_one_slide ? print 'single-slide' : print ''; ?>">
      <?php print $fields['field_visual']->content; ?>
      </div>
    <?php endif; ?>
    </div>
    <div class="col-sm-7 right">
        <h2 class="project-preview-title"><a href="<?php print $fields['path']->content; ?>"><?php print $fields['title_field']->content; ?></a></h2>
        <div class="project-preview-text">
          <?php print $fields['field_about_project']->content; ?>
        </div>
        <a href="<?php print $fields['path']->content; ?>" title="<?php print $fields['title_field']->content; ?>"
        class="project-preview-read">
        <span class="sr-only"><?php print $fields['title_field']->content; ?></span>
        <?php print t("Read more"); ?> &gt;</a>
    </div>
</div>
