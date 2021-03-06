<?php

/**
 * @file
 * FormBit file for varbase_auth feature mdoule.
 */

use Drupal\Core\Form\FormStateInterface;

/**
 * Get editable config names.
 *
 * @return array
 *   Array of config names, and list of values.
 */
function varbase_auth_get_editable_config_names() {
  $editable_cofnigs = [
    'simple.settings' => [
      'social_auth_type' => ['social_auth_google'],
    ],
  ];

  return $editable_cofnigs;
}

/**
 * Build form bit.
 *
 * @param array $formbit
 *   FormBit for the form.
 * @param Drupal\Core\Form\FormStateInterface $form_state
 *   Form status.
 * @param array $install_state
 *   Install state.
 */
function varbase_auth_build_formbit(array &$formbit, FormStateInterface &$form_state, array &$install_state = NULL) {
  $formbit['social_auth_type'] = [
    '#type' => 'checkboxes',
    '#title' => t('Social authentications to enable'),
    '#default_value' => ['social_auth_google'],
    '#options' => [
      'social_auth_google' => t('Google +'),
      'social_auth_facebook' => t('Facebook'),
      'social_auth_linkedin' => t('Linkedin'),
      'social_auth_twitter' => t('Twitter'),
    ],
  ];
}

/**
 * Submit form bit with editable config values.
 *
 * To update the editable config in drupal active config.
 *
 * @param array $editable_config_values
 *   Editable cofnig values.
 */
function varbase_auth_submit_formbit(array $editable_config_values) {
  $configFactory = \Drupal::configFactory()->getEditable('simple.settings');
  $configFactory->set('social_auth_type', $editable_config_values['simple.settings']['social_auth_type']);
  $configFactory->save(TRUE);

  _varbase_auth_enable_modules();
}

/**
 * Custom function to get checked values.
 *
 * From the Config and enable the modules.
 */
function _varbase_auth_enable_modules() {
  $configFactory = \Drupal::configFactory()->getEditable('simple.settings');
  $modules = $configFactory->get('social_auth_type');
  if (\Drupal::moduleHandler()->moduleExists('varbase_auth') && $modules != NULL) {
    foreach ($modules as $key => $module) {
      if (is_string($module)) {
        \Drupal::service('module_installer')->install([$module]);
      }
    }
  }
}
