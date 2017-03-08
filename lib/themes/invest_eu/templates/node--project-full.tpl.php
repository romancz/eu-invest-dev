<?php
/**
 * @file
 * Ec_resp's theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $display_user_picture: Whether node author's picture should be displayed.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>>
      <a href="<?php print filter_xss($node_url); ?>"><?php print $title; ?></a>
    </h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <div class="content clearfix"<?php print $content_attributes; ?>>
    <?php if ($prefix_display):?>
    <div class="node-private label label-default clearfix">
      <span class="glyphicon glyphicon-lock"></span>
      <?php print t('This content is private'); ?>
    </div>
    <?php endif; ?>

    <?php
    // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
    ?>

  <div class="top-banner <?php $video_banner ? print 'video-banner' : print ''; ?>">
    <?php if ($video_banner): ?>
      <div id="play-video" class="lightbox" style="display: none;">
        <?php print render($content['field_video']); ?>
      </div>
      <a href="#play-video" class="fancybox play-video-icon"></a>
    <?php endif; ?>
      <?php print render($content['field_banner']); ?>
      <?php print render($content['field_banner_copy']); ?>
  </div>


    <div class="contentWrap">
      <div class="socialNWtopDiv">
        <div class="socialNW">
          <span><?php print t("Share this article"); ?></span>
          <a class="popup" href="//www.facebook.com/share.php?u=<?php print $share_url; ?>" target="_blank">
            <img src="<?php print $img_path; ?>facebook.png">
          </a>
          <a class="popup" href="https://twitter.com/intent/tweet?url=<?php print $share_url; ?>" target="_blank">
            <img src="<?php print $img_path; ?>twitter.png">
          </a>
          <a href="https://www.linkedin.com/shareArticle?mini=true&url=<?php print $share_url; ?>&title=<?php print $title; ?>&summary=&source=" target="_blank">
            <img src="<?php print $img_path; ?>linkedin.png">
            </a>
        </div>
      </div>
        <h1 class="project-title">
            <img src="<?php print $img_path; ?>map_pointer.png">
            <?php print $title; ?>
        </h1>
        <?php print render($content['field_pr_subtitle']); ?>
        <span class="blue-label project-small-blueText"><?php print t("About this project"); ?></span>
        <?php print render($content['field_about_project']); ?>
        <?php print $project_updates; ?>

        <div class="project-textBox_facts">
            <span class="blue-label"><?php print t("Project facts");?></span>
            <div class="row">
                <div class="col-sm-8 left">
                    <span class="section-label"><?php print t("Background information"); ?></span>
                    <?php print render($content['field_background_information']); ?>
                    <span class="section-label">External links</span>
                    <?php print render($content['field_external_links']); ?>
                    <?php print render($content['field_docs_to_download']); ?>
                </div>
                <div class="col-sm-4 right">
                    <div>
                        <?php print t("Coordinator");?>:
                        <div class="box-row"><?php print render($content['field_coordinator']); ?></div>
                    </div>
                    <?php if (isset($eu_funding)): ?>
                    <div>
                        <?php print t("EU Funding");?>:
                        <div class="box-row">EUR <?php print render($eu_funding); ?></div>
                    </div>
                    <?php endif; ?>
                    <div>
                        <?php print t("Partners");?>:
                        <div class="box-row"><?php print render($content['field_partners']); ?></div>
                    </div>
                    <div>
                        <?php print t("Location");?>:
                        <div class="box-row"><?php print $location; ?></div>
                    </div>
                    <?php if (isset($timeframe)): ?>
                    <div>
                        <?php print t("Timeframe");?>:
                        <div class="box-row"><?php print $timeframe; ?></div>
                    </div>
                    <?php endif; ?>
                </div>
            </div>
        </div>
    </div>

    <?php if ($suffix_display): ?>
    <div class="row node-info">
      <div class="node-info-submitted col-lg-6 col-md-6 col-sm-6 col-xs-12 col-lg-offset-6 col-md-offset-6 col-sm-offset-6">
        <div class="well well-sm node-submitted clearfix">
          <small>
          <?php print $user_picture; ?>
          <?php print $submitted; ?>
          </small>
        </div>
      </div>
    </div>
    <?php endif;?>

    <div class="link-wrapper right">
      <?php print render($content['links']); ?>
    </div>

    <?php print render($content['comments']); ?>

  </div>
</div>
