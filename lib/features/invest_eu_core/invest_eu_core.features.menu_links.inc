<?php
/**
 * @file
 * invest_eu_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function invest_eu_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-the-investment-plan-for-europe:node/5.
  $menu_links['main-menu_about-the-investment-plan-for-europe:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'About the Investment Plan for Europe',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'main-menu_about-the-investment-plan-for-europe:node/5',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_project-overview:projects.
  $menu_links['main-menu_project-overview:projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projects',
    'router_path' => 'projects',
    'link_title' => 'Project overview',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_project-overview:projects',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-breadcrumb-menu_european-commission:http://ec.europa.eu/index_en.htm.
  $menu_links['menu-breadcrumb-menu_european-commission:http://ec.europa.eu/index_en.htm'] = array(
    'menu_name' => 'menu-breadcrumb-menu',
    'link_path' => 'http://ec.europa.eu/index_en.htm',
    'router_path' => '',
    'link_title' => 'European Commission',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'data-display-title' => 1,
        'data-remove-class' => 1,
      ),
      'identifier' => 'menu-breadcrumb-menu_european-commission:http://ec.europa.eu/index_en.htm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: menu-hp-bottom-links_about-the-eu:http://ec.europa.eu/info/about-european-union_en.
  $menu_links['menu-hp-bottom-links_about-the-eu:http://ec.europa.eu/info/about-european-union_en'] = array(
    'menu_name' => 'menu-hp-bottom-links',
    'link_path' => 'http://ec.europa.eu/info/about-european-union_en',
    'router_path' => '',
    'link_title' => 'ABOUT THE EU',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'menu-hp-bottom-links_about-the-eu:http://ec.europa.eu/info/about-european-union_en',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-hp-bottom-links_ec-funding-and-tenders:https://ec.europa.eu/info/funding-tenders_en.
  $menu_links['menu-hp-bottom-links_ec-funding-and-tenders:https://ec.europa.eu/info/funding-tenders_en'] = array(
    'menu_name' => 'menu-hp-bottom-links',
    'link_path' => 'https://ec.europa.eu/info/funding-tenders_en',
    'router_path' => '',
    'link_title' => 'EC FUNDING AND TENDERS',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'menu-hp-bottom-links_ec-funding-and-tenders:https://ec.europa.eu/info/funding-tenders_en',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-hp-bottom-links_eu-budget-for-results:https://ec.europa.eu/budget/euprojects/search-projects_en.
  $menu_links['menu-hp-bottom-links_eu-budget-for-results:https://ec.europa.eu/budget/euprojects/search-projects_en'] = array(
    'menu_name' => 'menu-hp-bottom-links',
    'link_path' => 'https://ec.europa.eu/budget/euprojects/search-projects_en',
    'router_path' => '',
    'link_title' => 'EU BUDGET FOR RESULTS',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'menu-hp-bottom-links_eu-budget-for-results:https://ec.europa.eu/budget/euprojects/search-projects_en',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-hp-bottom-links_your-europe:http://europa.eu/youreurope.
  $menu_links['menu-hp-bottom-links_your-europe:http://europa.eu/youreurope'] = array(
    'menu_name' => 'menu-hp-bottom-links',
    'link_path' => 'http://europa.eu/youreurope',
    'router_path' => '',
    'link_title' => 'YOUR EUROPE',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'menu-hp-bottom-links_your-europe:http://europa.eu/youreurope',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_-:http://ec.europa.eu/geninfo/legal_notices_bg.htm.
  $menu_links['menu-service-tools_-:http://ec.europa.eu/geninfo/legal_notices_bg.htm'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/geninfo/legal_notices_bg.htm',
    'router_path' => '',
    'link_title' => 'Правна информация',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_-:http://ec.europa.eu/geninfo/legal_notices_bg.htm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'bg',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_contact-on-europa:http://ec.europa.eu/contact/index_en.htm.
  $menu_links['menu-service-tools_contact-on-europa:http://ec.europa.eu/contact/index_en.htm'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/contact/index_en.htm',
    'router_path' => '',
    'link_title' => 'Contact on Europa',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-remove-class' => 1,
      ),
      'identifier' => 'menu-service-tools_contact-on-europa:http://ec.europa.eu/contact/index_en.htm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: menu-service-tools_cookies:http://ec.europa.eu/cookies/index_en.htm.
  $menu_links['menu-service-tools_cookies:http://ec.europa.eu/cookies/index_en.htm'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/cookies/index_en.htm',
    'router_path' => '',
    'link_title' => 'Cookies',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-remove-class' => 1,
      ),
      'identifier' => 'menu-service-tools_cookies:http://ec.europa.eu/cookies/index_en.htm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: menu-service-tools_legal-notice:http://ec.europa.eu/geninfo/legal_notices_en.htm.
  $menu_links['menu-service-tools_legal-notice:http://ec.europa.eu/geninfo/legal_notices_en.htm'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/geninfo/legal_notices_en.htm',
    'router_path' => '',
    'link_title' => 'Legal notice',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-service-tools_legal-notice:http://ec.europa.eu/geninfo/legal_notices_en.htm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-service-tools_search-on-europa:http://ec.europa.eu/geninfo/query/search_en.html.
  $menu_links['menu-service-tools_search-on-europa:http://ec.europa.eu/geninfo/query/search_en.html'] = array(
    'menu_name' => 'menu-service-tools',
    'link_path' => 'http://ec.europa.eu/geninfo/query/search_en.html',
    'router_path' => '',
    'link_title' => 'Search on Europa',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-remove-class' => 1,
      ),
      'identifier' => 'menu-service-tools_search-on-europa:http://ec.europa.eu/geninfo/query/search_en.html',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('ABOUT THE EU');
  t('About the Investment Plan for Europe');
  t('Contact on Europa');
  t('Cookies');
  t('EC FUNDING AND TENDERS');
  t('EU BUDGET FOR RESULTS');
  t('European Commission');
  t('Home');
  t('Legal notice');
  t('Project overview');
  t('Search on Europa');
  t('YOUR EUROPE');
  t('Правна информация');

  return $menu_links;
}
