<?php
/**
 * @file
 * Ec_resp's theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template normally located in the
 * modules/system folder.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/ec_resp.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 * - $hide_site_name: TRUE if the site name has been toggled off on the theme
 *   settings page. If hidden, the "element-invisible" class is added to make
 *   the site name visually hidden, but still accessible.
 * - $hide_site_slogan: TRUE if the site slogan has been toggled off on the
 *   theme settings page. If hidden, the "element-invisible" class is added to
 *   make the site slogan visually hidden, but still accessible.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 * - $menu_visible: Checking if the main menu is available in the
 *    region featured
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['header_top']: Displayed at the top line of the header
 *    -> language switcher, links, ...
 * - $page['header_right']: Displayed in the right part of the header
 *    -> logo, search box, ...
 * - $page['featured']: Displayed below the header, take full width of screen
 *    -> main menu, global information, ...
 * - $page['tools']: Displayed on top right of content area
 *    -> login/logout buttons, author information, ...
 * - $page['sidebar_left']: Small sidebar displayed on left of the content
 *    -> navigation, pictures, ...
 * - $page['sidebar_right']: Small sidebar displayed on right of the content
 *    -> latest content, calendar, ...
 * - $page['content_top']: Displayed in middle column
 *    -> carousel, important news, ...
 * - $page['help']: Displayed between page title and content
 *    -> information about the page, contextual help, ...
 * - $page['content']: The main content of the current page.
 * - $page['content_right']: Large sidebar displayed on right of the content
 *    -> 2 column layout
 * - $page['content_bottom']: Displayed below the content, in middle column
 *    -> print button, share tools, ...
 * - $page['footer']: Displayed at bottom of the page, on full width
 *    -> latest update, copyright, ...
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see ec_resp_process_page()
 */
?>

<?php
global $base_url;
?>

  <a id="top-page"></a>

  <div class="container">
    <?php print $regions['header_top']; ?>
  </div>

  <div id="layout-header">

    <div class="container">
      <?php if (!empty($logo)): ?>
      <div id="logo"><a href="<?php print $front_page; ?>"><img alt="<?php print t('European Commission logo'); ?>"  src="<?php print $logo; ?>" /></a></div>
      <?php endif; ?>

      <span id="banner-image-right" class="hidden-sm hidden-xs">
        <?php print $regions['header_right']; ?>
      </span>

      <div id="main-title"><?php print $site_name; ?></div>
      <div id="sub-title"><?php print $site_slogan; ?></div>
    </div>
  </div><!-- /#layout-header -->

    <ul id="accessibility-menu" class="reset-list">
    <li class="m-menu"><a href="#" data-toggle="collapse" data-target=".navbar-ex1-collapse"><span><?php print t("Menu"); ?></span></a></li>
    <li class="m-search"><a href="#" data-toggle="collapse" data-target=".mobile-search-box"><span><?php print t("Search"); ?></span></a></li>
</ul>
  <div class="mobile-search-box collapse navbar-collapse">
  <?php print render($mobile_search); ?>
  </div>

  <div class="region-featured-wrapper <?php print ($has_responsive_sidebar ? 'sidebar-visible-sm' : ''); ?>">


    <?php print $regions['featured']; ?>

  </div>

  <?php if ($has_responsive_sidebar): ?>
    <div id="responsive-sidebar">
      <div id="responsive-header-right"></div>
      <div id="responsive-sidebar-left"></div>
      <div id="responsive-sidebar-right"></div>
    </div><!-- /#responsive-sidebar-->
  <?php endif; ?>

  <div id="layout-body" class="container projects-page">

    <?php if ($messages): ?>
    <div id="messages">
        <?php print $messages; ?>
    </div><!-- /#messages -->
    <?php endif; ?>

    <?php if ($tabs): ?>
      <div class="tabs">
        <?php print render($tabs); ?>
      </div>
    <?php endif; ?>

    <a id="content"></a>
    <div class="views-projects-banner">
      <h1 class="views-title">
        <?php print t("Projects"); ?>
      </h1>
    </div>

    <?php print $regions['content_top']; ?>

    <?php print $regions['help']; ?>

    <?php if ($action_links): ?>
    <ul class="action-links">
      <?php print render($action_links); ?>
    </ul>
    <?php endif; ?>

    <?php print $regions['content']; ?>

    </div><!-- /#layout-body -->

  <a href="#top-page" class="btn-back-top">
    <span class="glyphicon glyphicon-chevron-up"></span>
  </a>

  <div id="layout-footer">
    <div class="container">
      <?php print $regions['footer']; ?>
    </div>
  </div><!-- /#layout-footer -->
