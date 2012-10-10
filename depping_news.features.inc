<?php
/**
 * @file
 * depping_news.features.inc
 */

/**
 * Implements hook_node_info().
 */
function depping_news_node_info() {
  $items = array(
    'depping_news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Use <em>News</em> for small news items.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
