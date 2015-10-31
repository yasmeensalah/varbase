<?php
/**
 * @file
 * varbase_default_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function varbase_default_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'vartheme_admin';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'anonymous';
  $strongarm->value = 'Anonymous';
  $export['anonymous'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long';
  $strongarm->value = 'l, F j, Y - g:ia';
  $export['date_format_long'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_long_date';
  $strongarm->value = 'l, F j, Y';
  $export['date_format_long_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium';
  $strongarm->value = 'D, m/d/Y - H:i';
  $export['date_format_medium'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_medium_date';
  $strongarm->value = 'D, d/m/Y';
  $export['date_format_medium_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'M j, Y';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_varbase_date_and_time';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_format_varbase_date_and_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_varbase_time';
  $strongarm->value = 'h:i a';
  $export['date_format_varbase_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_alert';
  $strongarm->value = 0;
  $export['extlink_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_alert_text';
  $strongarm->value = 'This link will take you to an external web site.';
  $export['extlink_alert_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_class';
  $strongarm->value = 0;
  $export['extlink_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_css_exclude';
  $strongarm->value = '';
  $export['extlink_css_exclude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_css_explicit';
  $strongarm->value = '';
  $export['extlink_css_explicit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_exclude';
  $strongarm->value = '';
  $export['extlink_exclude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_img_class';
  $strongarm->value = 0;
  $export['extlink_img_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_include';
  $strongarm->value = '';
  $export['extlink_include'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_mailto_class';
  $strongarm->value = 0;
  $export['extlink_mailto_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_subdomains';
  $strongarm->value = 1;
  $export['extlink_subdomains'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_target';
  $strongarm->value = '_blank';
  $export['extlink_target'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontawesome_use_cdn';
  $strongarm->value = 1;
  $export['fontawesome_use_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = '1.5';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'google';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_migrate_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_migrate_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_migrate_enable';
  $strongarm->value = 0;
  $export['jquery_update_jquery_migrate_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_migrate_trace';
  $strongarm->value = 0;
  $export['jquery_update_jquery_migrate_trace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_migrate_warnings';
  $strongarm->value = 0;
  $export['jquery_update_jquery_migrate_warnings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.8';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode_status';
  $strongarm->value = 0;
  $export['media_wysiwyg_view_mode_audio_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'wysiwyg' => 'wysiwyg',
    'default' => 0,
    'teaser' => 0,
    'full' => 0,
    'preview' => 0,
    'rss' => 0,
    'token' => 0,
  );
  $export['media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_audio_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_document_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_file_wysiwyg_view_mode_status';
  $strongarm->value = 0;
  $export['media_wysiwyg_view_mode_document_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'wysiwyg' => 'wysiwyg',
    'default' => 0,
    'teaser' => 0,
    'full' => 0,
    'preview' => 0,
    'rss' => 0,
    'token' => 0,
  );
  $export['media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_document_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_image_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_file_wysiwyg_view_mode_status';
  $strongarm->value = 0;
  $export['media_wysiwyg_view_mode_image_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'wysiwyg' => 'wysiwyg',
    'default' => 0,
    'teaser' => 0,
    'full' => 0,
    'preview' => 0,
    'rss' => 0,
    'token' => 0,
  );
  $export['media_wysiwyg_view_mode_image_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_file_wysiwyg_view_mode';
  $strongarm->value = 'wysiwyg';
  $export['media_wysiwyg_view_mode_video_file_wysiwyg_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_file_wysiwyg_view_mode_status';
  $strongarm->value = 0;
  $export['media_wysiwyg_view_mode_video_file_wysiwyg_view_mode_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes';
  $strongarm->value = array(
    'wysiwyg' => 'wysiwyg',
    'default' => 0,
    'teaser' => 0,
    'full' => 0,
    'preview' => 0,
    'rss' => 0,
    'token' => 0,
  );
  $export['media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes_status';
  $strongarm->value = 1;
  $export['media_wysiwyg_view_mode_video_wysiwyg_restricted_view_modes_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = '0';
  $export['page_manager_node_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:11:"panels_page";s:23:"allowed_layout_settings";a:13:{s:8:"flexible";b:0;s:14:"twocol_stacked";b:0;s:13:"twocol_bricks";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:6:"onecol";b:1;s:17:"threecol_33_34_33";b:0;s:6:"twocol";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:26:"bootstrap_threecol_stacked";b:0;s:24:"bootstrap_twocol_stacked";b:0;s:20:"varbase_with_primary";b:1;s:22:"varbase_with_secondary";b:1;}s:10:"form_state";N;}';
  $export['panels_page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_allowed_types';
  $strongarm->value = array(
    'token-term:i18n-vocabulary' => 'token-term:i18n-vocabulary',
    'token-term:i18n-parent' => 'token-term:i18n-parent',
    'token-node:source' => 0,
    'token-node:log' => 0,
    'token-node:content-type' => 0,
    'token-node:diff' => 0,
    'token-node:diff-markdown' => 0,
    'token-node:nid' => 0,
    'token-node:vid' => 0,
    'token-node:title' => 0,
    'token-node:body' => 0,
    'token-node:summary' => 0,
    'token-node:language' => 0,
    'token-node:url' => 0,
    'token-node:edit-url' => 0,
    'token-node:created' => 0,
    'token-node:changed' => 0,
    'token-node:author' => 0,
    'token-node:scheduler-publish' => 0,
    'token-node:scheduler-unpublish' => 0,
    'token-node:menu-link' => 0,
    'token-node:original' => 0,
    'token-node:is-new' => 0,
    'token-node:status' => 0,
    'token-node:promote' => 0,
    'token-node:sticky' => 0,
    'token-node:revision' => 0,
    'token-node:field-up-thumbnail' => 0,
    'token-node:field-up-category' => 0,
    'token-node:field-up-dossier' => 0,
    'token-node:field-up-tags' => 0,
    'token-node:field_up_thumbnail' => 0,
    'token-node:field_up_category' => 0,
    'token-node:field_up_dossier' => 0,
    'token-node:field_up_tags' => 0,
    'token-content-type:name' => 0,
    'token-content-type:machine-name' => 0,
    'token-content-type:description' => 0,
    'token-content-type:node-count' => 0,
    'token-content-type:edit-url' => 0,
    'token-term:edit-url' => 0,
    'token-term:parents' => 0,
    'token-term:root' => 0,
    'token-term:tid' => 0,
    'token-term:name' => 0,
    'token-term:description' => 0,
    'token-term:node-count' => 0,
    'token-term:url' => 0,
    'token-term:vocabulary' => 0,
    'token-term:parent' => 0,
    'token-term:i18n-name' => 0,
    'token-term:i18n-description' => 0,
    'token-term:original' => 0,
    'token-term:weight' => 0,
    'token-term:parents-all' => 0,
    'token-vocabulary:machine-name' => 0,
    'token-vocabulary:edit-url' => 0,
    'token-vocabulary:vid' => 0,
    'token-vocabulary:name' => 0,
    'token-vocabulary:description' => 0,
    'token-vocabulary:node-count' => 0,
    'token-vocabulary:term-count' => 0,
    'token-vocabulary:i18n-name' => 0,
    'token-vocabulary:i18n-description' => 0,
    'token-vocabulary:original' => 0,
    'token-file:basename' => 0,
    'token-file:extension' => 0,
    'token-file:size-raw' => 0,
    'token-file:ffp-name-only' => 0,
    'token-file:ffp-name-only-original' => 0,
    'token-file:ffp-extension-original' => 0,
    'token-file:type' => 0,
    'token-file:download-url' => 0,
    'token-file:fid' => 0,
    'token-file:name' => 0,
    'token-file:path' => 0,
    'token-file:mime' => 0,
    'token-file:size' => 0,
    'token-file:url' => 0,
    'token-file:timestamp' => 0,
    'token-file:owner' => 0,
    'token-file:original' => 0,
    'token-file:field-file-image-alt-text' => 0,
    'token-file:field-file-image-title-text' => 0,
    'token-file:field_file_image_alt_text' => 0,
    'token-file:field_file_image_title_text' => 0,
    'token-user:cancel-url' => 0,
    'token-user:one-time-login-url' => 0,
    'token-user:roles' => 0,
    'token-user:uid' => 0,
    'token-user:name' => 0,
    'token-user:mail' => 0,
    'token-user:url' => 0,
    'token-user:edit-url' => 0,
    'token-user:last-login' => 0,
    'token-user:created' => 0,
    'token-user:original' => 0,
    'token-user:last-access' => 0,
    'token-user:status' => 0,
    'token-user:theme' => 0,
    'token-current-user:ip-address' => 0,
    'token-menu-link:mlid' => 0,
    'token-menu-link:title' => 0,
    'token-menu-link:url' => 0,
    'token-menu-link:parent' => 0,
    'token-menu-link:parents' => 0,
    'token-menu-link:root' => 0,
    'token-menu-link:menu' => 0,
    'token-menu-link:edit-url' => 0,
    'token-current-page:title' => 0,
    'token-current-page:url' => 0,
    'token-current-page:page-number' => 0,
    'token-current-page:query' => 0,
    'token-url:path' => 0,
    'token-url:relative' => 0,
    'token-url:absolute' => 0,
    'token-url:brief' => 0,
    'token-url:unaliased' => 0,
    'token-url:args' => 0,
    'token-array:first' => 0,
    'token-array:last' => 0,
    'token-array:count' => 0,
    'token-array:reversed' => 0,
    'token-array:keys' => 0,
    'token-array:join' => 0,
    'token-array:value' => 0,
    'token-array:join-path' => 0,
    'token-random:number' => 0,
    'token-random:hash' => 0,
    'token-date-field-value:date' => 0,
    'token-date-field-value:to-date' => 0,
    'token-file-type:name' => 0,
    'token-file-type:machine-name' => 0,
    'token-file-type:count' => 0,
    'token-file-type:edit-url' => 0,
    'token-site:name' => 0,
    'token-site:slogan' => 0,
    'token-site:mail' => 0,
    'token-site:url' => 0,
    'token-site:url-brief' => 0,
    'token-site:login-url' => 0,
    'token-site:current-user' => 0,
    'token-site:current-date' => 0,
    'token-site:current-page' => 0,
    'token-date:short' => 0,
    'token-date:medium' => 0,
    'token-date:long' => 0,
    'token-date:custom' => 0,
    'token-date:since' => 0,
    'token-date:raw' => 0,
    'token-variable:environment_indicator_suppress_pages' => 0,
    'token-variable:i18n_select_page_list' => 0,
    'token-variable:i18n_select_skip_tags' => 0,
    'token-variable:media_wysiwyg_wysiwyg_title' => 0,
    'token-variable:media_wysiwyg_wysiwyg_icon_title' => 0,
    'token-variable:site_name' => 0,
    'token-variable:site_mail' => 0,
    'token-variable:site_slogan' => 0,
    'token-variable:anonymous' => 0,
    'token-variable:feed_description' => 0,
    'token-variable:maintenance_mode_message' => 0,
    'token-variable:user_registration_help' => 0,
    'token-variable:user_picture_default' => 0,
    'token-variable:user_picture_dimensions' => 0,
    'token-variable:user_picture_file_size' => 0,
    'token-variable:user_picture_guidelines' => 0,
    'token-view:name' => 0,
    'token-view:description' => 0,
    'token-view:machine-name' => 0,
    'token-view:title' => 0,
    'token-view:url' => 0,
    'token-rules_text:value' => 0,
    'token-rules_integer:value' => 0,
    'token-rules_uri:value' => 0,
    'token-rules_token:value' => 0,
    'token-rules_decimal:value' => 0,
    'token-rules_date:value' => 0,
    'token-rules_duration:value' => 0,
    'token-menu:name' => 0,
    'token-menu:machine-name' => 0,
    'token-menu:description' => 0,
    'token-menu:menu-link-count' => 0,
    'token-menu:edit-url' => 0,
    'token-fieldable_panels_pane:field-text' => 0,
    'token-fieldable_panels_pane:field-fpp-slides' => 0,
    'token-fieldable_panels_pane:field_text' => 0,
    'token-fieldable_panels_pane:field_fpp_slides' => 0,
    'token-field_collection_item:item-id' => 0,
    'token-field_collection_item:revision-id' => 0,
    'token-field_collection_item:archived' => 0,
    'token-field_collection_item:url' => 0,
    'token-field_collection_item:field-image' => 0,
    'token-field_collection_item:field-link' => 0,
    'token-field_collection_item:field-text' => 0,
    'token-field_collection_item:field-title' => 0,
    'token-field_collection_item:field_image' => 0,
    'token-field_collection_item:field_link' => 0,
    'token-field_collection_item:field_text' => 0,
    'token-field_collection_item:field_title' => 0,
    'token-rules_config:id' => 0,
    'token-rules_config:label' => 0,
    'token-rules_config:plugin' => 0,
    'token-rules_config:active' => 0,
    'token-rules_config:weight' => 0,
    'token-rules_config:status' => 0,
    'token-rules_config:dirty' => 0,
    'token-rules_config:module' => 0,
    'token-rules_config:owner' => 0,
    'token-rules_config:access-exposed' => 0,
    'token-list<fieldable_panels_pane>:0' => 0,
    'token-list<fieldable_panels_pane>:1' => 0,
    'token-list<fieldable_panels_pane>:2' => 0,
    'token-list<fieldable_panels_pane>:3' => 0,
    'token-list<field_collection_item>:0' => 0,
    'token-list<field_collection_item>:1' => 0,
    'token-list<field_collection_item>:2' => 0,
    'token-list<field_collection_item>:3' => 0,
    'token-list<node>:0' => 0,
    'token-list<node>:1' => 0,
    'token-list<node>:2' => 0,
    'token-list<node>:3' => 0,
    'token-list<file>:0' => 0,
    'token-list<file>:1' => 0,
    'token-list<file>:2' => 0,
    'token-list<file>:3' => 0,
    'token-list<term>:0' => 0,
    'token-list<term>:1' => 0,
    'token-list<term>:2' => 0,
    'token-list<term>:3' => 0,
    'token-list<vocabulary>:0' => 0,
    'token-list<vocabulary>:1' => 0,
    'token-list<vocabulary>:2' => 0,
    'token-list<vocabulary>:3' => 0,
    'token-list<user>:0' => 0,
    'token-list<user>:1' => 0,
    'token-list<user>:2' => 0,
    'token-list<user>:3' => 0,
    'token-list<rules_config>:0' => 0,
    'token-list<rules_config>:1' => 0,
    'token-list<rules_config>:2' => 0,
    'token-list<rules_config>:3' => 0,
    'token-list<date>:0' => 0,
    'token-list<date>:1' => 0,
    'token-list<date>:2' => 0,
    'token-list<date>:3' => 0,
    'custom-custom' => 0,
    'node-node' => 'node-node',
    'page_title-page_title' => 'page_title-page_title',
    'node_terms-node_terms' => 'node_terms-node_terms',
    'node_content-node_content' => 'node_content-node_content',
    'node_title-node_title' => 'node_title-node_title',
    'node_body-node_body' => 'node_body-node_body',
    'node_created-node_created' => 'node_created-node_created',
    'varbase_region_pane-varbase_region_pane' => 'varbase_region_pane-varbase_region_pane',
    'views_row-views_row' => 'views_row-views_row',
    'views_header-views_header' => 'views_header-views_header',
    'views_pager-views_pager' => 'views_pager-views_pager',
    'user_profile-user_profile' => 0,
    'user_signature-user_signature' => 0,
    'user_picture-user_picture' => 0,
    'node_form_log-node_form_log' => 0,
    'node_form_title-node_form_title' => 0,
    'node_form_language-node_form_language' => 0,
    'node_form_menu-node_form_menu' => 0,
    'node_form_publishing-node_form_publishing' => 0,
    'node_form_author-node_form_author' => 0,
    'node_form_buttons-node_form_buttons' => 0,
    'node_form_path-node_form_path' => 0,
    'form-form' => 0,
    'page_secondary_links-page_secondary_links' => 0,
    'page_slogan-page_slogan' => 0,
    'page_tabs-page_tabs' => 0,
    'page_help-page_help' => 0,
    'page_primary_links-page_primary_links' => 0,
    'page_actions-page_actions' => 0,
    'page_breadcrumb-page_breadcrumb' => 0,
    'page_messages-page_messages' => 0,
    'page_feed_icons-page_feed_icons' => 0,
    'page_logo-page_logo' => 0,
    'page_site_name-page_site_name' => 0,
    'vocabulary_terms-vocabulary_terms' => 0,
    'term_list-term_list' => 0,
    'term_description-term_description' => 0,
    'node_updated-node_updated' => 0,
    'node_author-node_author' => 0,
    'node_type_desc-node_type_desc' => 0,
    'node_links-node_links' => 0,
    'node_attachments-node_attachments' => 0,
    'file_display-file_display' => 0,
    'file_content-file_content' => 0,
    'scheduler_form_pane-scheduler_form_pane' => 0,
    'taxonomy-taxonomy' => 0,
    'overview_user-overview_user' => 0,
    'overview_content-overview_content' => 0,
    'panel_pages-panel_pages' => 0,
    'create-create' => 0,
    'welcome-welcome' => 0,
    'webform-webform' => 0,
    'nodequeue-nodequeue' => 0,
    'overview-overview' => 0,
    'node_types-node_types' => 0,
    'menus-menus' => 0,
    'uber_publisher_latest_bar-uber_publisher_latest_bar' => 0,
    'views_view-views_view' => 0,
    'views_attachments-views_attachments' => 0,
    'views_empty-views_empty' => 0,
    'views_exposed-views_exposed' => 0,
    'views_feed-views_feed' => 0,
    'views_footer-views_footer' => 0,
    'dsc-dsc' => 0,
    'panelizer_form_default-panelizer_form_default' => 0,
    'entity_form_field-fieldable_panels_pane:field_fpp_slides' => 0,
    'entity_form_field-fieldable_panels_pane:field_text' => 0,
    'entity_form_field-field_collection_item:field_image' => 0,
    'entity_form_field-field_collection_item:field_link' => 0,
    'entity_form_field-field_collection_item:field_text' => 0,
    'entity_form_field-field_collection_item:field_title' => 0,
    'entity_form_field-node:field_up_thumbnail' => 0,
    'entity_form_field-node:body' => 0,
    'entity_form_field-node:field_up_category' => 0,
    'entity_form_field-node:field_up_dossier' => 0,
    'entity_form_field-node:field_up_tags' => 0,
    'entity_form_field-file:field_file_image_alt_text' => 0,
    'entity_form_field-file:field_file_image_title_text' => 0,
    'entity_field-node:body' => 'entity_field-node:body',
    'entity_field-fieldable_panels_pane:field_fpp_slides' => 0,
    'entity_field-fieldable_panels_pane:field_text' => 0,
    'entity_field-field_collection_item:field_image' => 0,
    'entity_field-field_collection_item:field_link' => 0,
    'entity_field-field_collection_item:field_text' => 0,
    'entity_field-field_collection_item:field_title' => 0,
    'entity_field-node:field_up_thumbnail' => 0,
    'entity_field-node:field_up_category' => 0,
    'entity_field-node:field_up_dossier' => 0,
    'entity_field-node:field_up_tags' => 0,
    'entity_field-file:field_file_image_alt_text' => 0,
    'entity_field-file:field_file_image_title_text' => 0,
    'entity_field_extra-node:language' => 'entity_field_extra-node:language',
    'entity_field_extra-fieldable_panels_pane:title' => 0,
    'entity_field_extra-file:file' => 0,
    'entity_field_extra-taxonomy_term:description' => 0,
    'entity_field_extra-taxonomy_term:language' => 0,
    'entity_field_extra-user:masquerade' => 0,
    'entity_field_extra-user:summary' => 0,
    'block-masquerade-masquerade' => 0,
    'block-context_ui-editor' => 0,
    'block-context_ui-devel' => 0,
    'block-diff-inline' => 0,
    'block-locale-language' => 0,
    'block-menu-devel' => 0,
    'block-node-syndicate' => 0,
    'block-node-recent' => 0,
    'block-responsive_preview-controls' => 0,
    'block-shortcut-shortcuts' => 0,
    'block-system-powered-by' => 0,
    'block-system-help' => 0,
    'block-system-navigation' => 0,
    'block-system-management' => 0,
    'block-system-user-menu' => 0,
    'block-system-main-menu' => 0,
    'block-user-login' => 0,
    'block-user-new' => 0,
    'block-user-online' => 0,
    'block-workbench-block' => 0,
    'block-devel-execute_php' => 0,
    'block-devel-switch_user' => 0,
    'entity_view-fieldable_panels_pane' => 'entity_view-fieldable_panels_pane',
    'entity_view-field_collection_item' => 'entity_view-field_collection_item',
    'entity_view-node' => 'entity_view-node',
    'entity_view-file' => 'entity_view-file',
    'entity_view-taxonomy_term' => 'entity_view-taxonomy_term',
    'entity_view-user' => 'entity_view-user',
    'entity_view-rules_config' => 0,
    'fieldable_panels_pane-slideshow' => 'fieldable_panels_pane-slideshow',
    'fieldable_panels_pane-raw_html' => 'fieldable_panels_pane-raw_html',
    'fieldable_panels_pane-wysiwyg' => 'fieldable_panels_pane-wysiwyg',
    'fieldable_panels_pane-fpid:2' => 'fieldable_panels_pane-fpid:2',
    'views-article_listing' => 0,
    'views-uber_publisher_latest_bar' => 0,
    'views-varbase_content_view' => 0,
    'views-varbase_fpp_slideshow' => 0,
    'views-admin_views_file' => 0,
    'views-admin_views_fpp' => 0,
    'views-admin_views_node' => 0,
    'views-admin_views_user' => 0,
    'views-control_content' => 0,
    'views-control_content_panes' => 0,
    'views-control_my_content_panes' => 0,
    'views-control_terms' => 0,
    'views-control_users' => 0,
    'views-control_users_panes' => 0,
    'views-fieldable_pane_entities' => 0,
    'views-fieldable_pane_entity_revisions' => 0,
    'views-media_default' => 0,
    'views-taxonomy_general' => 0,
    'views-workbench_current_user' => 0,
    'views-workbench_edited' => 0,
    'views-workbench_moderation' => 0,
    'views-workbench_recent_content' => 0,
    'views_panes-article_listing-recent_articles' => 0,
    'views_panes-article_listing-most_read' => 0,
    'views_panes-varbase_content_view-content_listing_view_modes' => 0,
    'views_panes-control_content_panes-pane_tc_new' => 0,
    'views_panes-control_content_panes-pane_tc_updated' => 0,
    'views_panes-control_content_panes-pane_tc_unpub' => 0,
    'views_panes-control_my_content_panes-pane_tc_updated' => 0,
    'views_panes-control_my_content_panes-panel_pane_1' => 0,
    'views_panes-control_my_content_panes-panel_pane_2' => 0,
    'views_panes-control_terms-panel_pane_1' => 0,
    'views_panes-control_users_panes-pane_tc_new_users' => 0,
    'views_panes-taxonomy_general-hot_tags' => 0,
  );
  $export['panels_page_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_default';
  $strongarm->value = array(
    'entity_field' => 'entity_field',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'views_panes' => 'views_panes',
    'token' => 0,
    'custom' => 0,
    'entity_form_field' => 0,
    'entity_field_extra' => 0,
    'block' => 0,
    'views' => 0,
    'other' => 0,
  );
  $export['panels_page_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_adminimal_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'style_checkboxes' => 1,
    'display_icons_config' => 1,
    'avoid_custom_font' => 0,
    'use_custom_media_queries' => 0,
    'media_query_mobile' => 'only screen and (max-width: 480px)',
    'media_query_tablet' => 'only screen and (min-width : 481px) and (max-width : 1024px)',
    'custom_css' => 0,
    'adminimal_theme_skin' => 'default',
    'jquery_update_jquery_version' => '1.7',
  );
  $export['theme_adminimal_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_vartheme_admin_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'style_checkboxes' => 1,
    'display_icons_config' => 1,
    'avoid_custom_font' => 0,
    'use_custom_media_queries' => 0,
    'media_query_mobile' => 'only screen and (max-width: 480px)',
    'media_query_tablet' => 'only screen and (min-width : 481px) and (max-width : 1024px)',
    'custom_css' => 0,
    'adminimal_theme_skin' => 'default',
    'jquery_update_jquery_version' => '1.7',
  );
  $export['theme_vartheme_admin_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '0';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_cancel_method';
  $strongarm->value = 'user_cancel_block';
  $export['user_cancel_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = 0;
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '0';
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_frontpage_changefreq';
  $strongarm->value = '86400';
  $export['xmlsitemap_frontpage_changefreq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_frontpage_priority';
  $strongarm->value = '1.0';
  $export['xmlsitemap_frontpage_priority'] = $strongarm;

  return $export;
}