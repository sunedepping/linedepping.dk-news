<?php
/**
 * @file
 * depping_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function depping_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

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
