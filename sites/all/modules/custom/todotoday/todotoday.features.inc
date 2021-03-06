<?php
/**
 * @file
 * todotoday.features.inc
 */

/**
 * Implements hook_node_info().
 */
function todotoday_node_info() {
  $items = array(
    'task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => t('Task to add to a to-do list'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
