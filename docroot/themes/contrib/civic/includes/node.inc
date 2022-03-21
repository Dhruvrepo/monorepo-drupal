<?php

/**
 * @file
 * Node related functions.
 */

use Drupal\Core\Template\Attribute;

/**
 * Generic pre-process for all view mode of nodes.
 */
function _civic_preprocess_node(&$variables) {
  $node = $variables['node'];

  if (!$node) {
    return;
  }

  $view_mode = $variables['elements']['#view_mode'];
  // Do not display node title on revision pages.
  if ($view_mode === 'full') {
    unset($variables['label']);
  }

  // Add Table of Contents if the value is set on node.
  if ($node->hasField('field_c_n_show_toc') && $node->field_c_n_show_toc->getString()) {
    $variables['content_attributes']['data-table-of-contents-position'] = 'prepend';
    $variables['content_attributes']['data-table-of-contents-theme'] = 'light';
    $variables['content_attributes']['data-table-of-contents-anchor-selector'] = 'h2';
    $variables['content_attributes']['data-table-of-contents-title'] = t('On this page');
    // @todo Update selector to '.civic-content--main .civic-content' once
    // container layout is fixed.
    $variables['content_attributes']['data-table-of-contents-anchor-scope-selector'] = '[data-table-of-contents-initialised]';
  }
}

/**
 * Pre-process Full view mode of nodes.
 */
function _civic_preprocess_node__full(&$variables) {
  /** @var \Drupal\node\NodeInterface $node */
  $node = $variables['node'];
  $type = $node->getType();
  $type_callback = '_civic_preprocess_node__' . $type . '__full';
  if (function_exists($type_callback)) {
    $type_callback($variables);
  }
  civic_attributes_to_modifier_class($variables);
}

/**
 * Default view mode fallback preprocessor for nodes.
 */
function _civic_preprocess_node__default(&$variables) {
  /** @var \Drupal\node\NodeInterface $node */
  $node = $variables['node'];
  $type = $node->getType();
  $type_callback = '_civic_preprocess_node__' . $type . '__full';
  if (function_exists($type_callback)) {
    $type_callback($variables);
  }
  civic_attributes_to_modifier_class($variables);
}

/**
 * Pre-process Civic alert nodes.
 */
function _civic_preprocess_node__civic_alert__full(&$variables) {
  $node = $variables['node'];
  $variables['id'] = $node->id();
  $variables['title'] = $node->label();
  $variables['description'] = $node->get('field_c_n_body')->value;
  $variables['type'] = $node->get('field_c_n_alert_type')->getString();
}

/**
 * Generic page pre-process for all view mode of nodes.
 */
function _civic_preprocess_page__node(&$variables) {
  /** @var \Drupal\node\Entity\Node $node */
  $node = _civic_load_node_or_revision($variables);

  if (!$node) {
    return;
  }
  // Layout determines whether a node is contained and what it's layout is.
  $variables['page']['content_contained'] = FALSE;

  // Add Table of Contents if the value is set on node.
  if ($node->hasField('field_c_n_show_toc') && $node->field_c_n_show_toc->getString()) {
    $toc_attributes = [];
    $toc_attributes['data-table-of-contents-position'] = 'prepend';
    $toc_attributes['data-table-of-contents-theme'] = 'light';
    $toc_attributes['data-table-of-contents-anchor-selector'] = 'h2';
    $toc_attributes['data-table-of-contents-title'] = t('On this page');
    $toc_attributes['data-table-of-contents-anchor-scope-selector'] = '.civic-content__main';
    $toc_attributes = new Attribute($toc_attributes);

    // Inject TOC wrapper into 'content_top' slot of the Content component.
    // We need to do this because content area may not be contained, but TOC
    // always has to be.
    $variables['page']['content_top']['toc'] = [
      '#markup' => '<div class="container"><div class="row"><div class="table-of-contents-container col-m-12" ' . $toc_attributes . '></div></div></div>',
    ];
  }
}