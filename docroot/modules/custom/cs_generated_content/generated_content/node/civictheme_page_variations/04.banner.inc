<?php

/**
 * @file
 * Variations for CivicTheme Page nodes.
 */

use Drupal\cs_generated_content\CsGeneratedContentHelper;

/**
 * Page, Banner.
 */
function _cs_generated_content_create_node_civictheme_page__variations__banner() {
  /** @var \Drupal\cs_generated_content\CsGeneratedContentHelper $helper */
  $helper = CsGeneratedContentHelper::getInstance();

  $variations = [
    // Page, Banner.
    [
      'title' => 'Demo Page, Banner',
      'content' => _cs_generated_content_create_node_civictheme_page__variations_components_content_default(6),
    ],
    [
      'title' => 'Demo Page, Banner, Default, Light',
      'banner_type' => $helper::civicthemeBannerTypeDefault(),
      'banner_theme' => $helper::civicthemeThemeLight(),
      'content' => _cs_generated_content_create_node_civictheme_page__variations_components_content_default(7),
    ],
    [
      'title' => 'Demo Page, Banner, Default, Dark',
      'banner_type' => $helper::civicthemeBannerTypeDefault(),
      'banner_theme' => $helper::civicthemeThemeDark(),
      'content' => _cs_generated_content_create_node_civictheme_page__variations_components_content_default(7),
    ],
    [
      'title' => 'Demo Page, Banner, Large, Light',
      'banner_type' => $helper::civicthemeBannerTypeLarge(),
      'banner_theme' => $helper::civicthemeThemeLight(),
      'content' => _cs_generated_content_create_node_civictheme_page__variations_components_content_default(8),
    ],
    [
      'title' => 'Demo Page, Banner, Large, Dark',
      'banner_type' => $helper::civicthemeBannerTypeLarge(),
      'banner_theme' => $helper::civicthemeThemeDark(),
      'content' => _cs_generated_content_create_node_civictheme_page__variations_components_content_default(9),
    ],

    [
      'title' => 'Demo Page, Banner, Default, Light, Background',
      'banner_type' => $helper::civicthemeBannerTypeDefault(),
      'banner_theme' => $helper::civicthemeThemeLight(),
      'banner_background' => $helper->staticMediaItem('civictheme_image'),
      'content' => _cs_generated_content_create_node_civictheme_page__variations_components_content_default(7),
    ],
    [
      'title' => 'Demo Page, Banner, Default, Dark, Background',
      'banner_type' => $helper::civicthemeBannerTypeDefault(),
      'banner_theme' => $helper::civicthemeThemeDark(),
      'banner_background' => $helper->staticMediaItem('civictheme_image'),
      'content' => _cs_generated_content_create_node_civictheme_page__variations_components_content_default(7),
    ],
    [
      'title' => 'Demo Page, Banner, Large, Light, Background',
      'banner_type' => $helper::civicthemeBannerTypeLarge(),
      'banner_theme' => $helper::civicthemeThemeLight(),
      'banner_background' => $helper->staticMediaItem('civictheme_image'),
      'content' => _cs_generated_content_create_node_civictheme_page__variations_components_content_default(8),
    ],
    [
      'title' => 'Demo Page, Banner, Large, Dark, Background',
      'banner_type' => $helper::civicthemeBannerTypeLarge(),
      'banner_theme' => $helper::civicthemeThemeDark(),
      'banner_background' => $helper->staticMediaItem('civictheme_image'),
      'content' => _cs_generated_content_create_node_civictheme_page__variations_components_content_default(9),
    ],

    [
      'title' => 'Demo Page, Banner, Default, Light, Background, Image',
      'banner_type' => $helper::civicthemeBannerTypeDefault(),
      'banner_theme' => $helper::civicthemeThemeLight(),
      'banner_background' => $helper->staticMediaItem('civictheme_image'),
      'banner_featured_image' => $helper->staticMediaItem('civictheme_image'),
      'content' => _cs_generated_content_create_node_civictheme_page__variations_components_content_default(10),
    ],
    [
      'title' => 'Demo Page, Banner, Default, Dark, Background, Image',
      'banner_type' => $helper::civicthemeBannerTypeDefault(),
      'banner_theme' => $helper::civicthemeThemeDark(),
      'banner_background' => $helper->staticMediaItem('civictheme_image'),
      'banner_featured_image' => $helper->staticMediaItem('civictheme_image'),
      'content' => _cs_generated_content_create_node_civictheme_page__variations_components_content_default(11),
    ],
    [
      'title' => 'Demo Page, Banner, Large, Light, Background, Image',
      'banner_type' => $helper::civicthemeBannerTypeLarge(),
      'banner_theme' => $helper::civicthemeThemeLight(),
      'banner_background' => $helper->staticMediaItem('civictheme_image'),
      'banner_featured_image' => $helper->staticMediaItem('civictheme_image'),
      'content' => _cs_generated_content_create_node_civictheme_page__variations_components_content_default(12),
    ],
    [
      'title' => 'Demo Page, Banner, Large, Dark, Background, Image',
      'banner_type' => $helper::civicthemeBannerTypeLarge(),
      'banner_theme' => $helper::civicthemeThemeDark(),
      'banner_background' => $helper->staticMediaItem('civictheme_image'),
      'banner_featured_image' => $helper->staticMediaItem('civictheme_image'),
      'content' => _cs_generated_content_create_node_civictheme_page__variations_components_content_default(13),
    ],
  ];

  return $variations;
}