<?php
/**
 * @file
 * civi_pcp_webform.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function civi_pcp_webform_webform_defaults() {
$webforms = array();
  $webforms['create_your_campaign_here'] = array(
  'title' => 'Create your campaign here',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'dc39deaf-1368-4b91-b908-6603af5b2430',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c2bde896-cc95-45c3-8f69-2b0c3144e9cf',
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'webform' => array(
    'next_serial' => 74,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'machine_name' => 'create_your_campaign_here',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      'create_your_campaign_here__civicrm_1_contact_1_fieldset_fie' => array(
        'form_key' => 'civicrm_1_contact_1_fieldset_fieldset',
        'name' => 'Contact 1',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
          'description_above' => FALSE,
          'private' => FALSE,
        ),
        'required' => 0,
        'weight' => 1,
        'machine_name' => 'create_your_campaign_here__civicrm_1_contact_1_fieldset_fie',
        'page_num' => 1,
      ),
      'create_your_campaign_here__civicrm_1_contact_1_contact_cont' => array(
        'form_key' => 'civicrm_1_contact_1_contact_contact_id',
        'name' => 'Contact ID',
        'type' => 'hidden',
        'value' => '',
        'extra' => array(
          'private' => 0,
          'hidden_type' => 'value',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 16,
        'machine_name' => 'create_your_campaign_here__civicrm_1_contact_1_contact_cont',
        'page_num' => 1,
        'parent_machine_name' => 'create_your_campaign_here__civicrm_1_contact_1_fieldset_fie',
      ),
      'create_your_campaign_here__civicrm_1_contact_1_email_email' => array(
        'form_key' => 'civicrm_1_contact_1_email_email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'width' => 20,
          'private' => 0,
          'multiple' => 0,
          'format' => 'short',
          'unique' => 0,
          'disabled' => 0,
          'title_display' => 0,
          'description' => '',
          'description_above' => FALSE,
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 73,
        'machine_name' => 'create_your_campaign_here__civicrm_1_contact_1_email_email',
        'page_num' => 1,
        'parent_machine_name' => 'create_your_campaign_here__civicrm_1_contact_1_fieldset_fie',
      ),
      'create_your_campaign_here__first_name' => array(
        'form_key' => 'first_name',
        'name' => 'First Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 9991,
        'machine_name' => 'create_your_campaign_here__first_name',
        'page_num' => 1,
        'parent_machine_name' => 'create_your_campaign_here__civicrm_1_contact_1_fieldset_fie',
      ),
      'create_your_campaign_here__last_name' => array(
        'form_key' => 'last_name',
        'name' => 'Last Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 9992,
        'machine_name' => 'create_your_campaign_here__last_name',
        'page_num' => 1,
        'parent_machine_name' => 'create_your_campaign_here__civicrm_1_contact_1_fieldset_fie',
      ),
      'create_your_campaign_here__email_address' => array(
        'form_key' => 'email_address',
        'name' => 'Email Address',
        'type' => 'email',
        'value' => '[current-user:mail]',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'multiple' => 0,
          'format' => 'short',
          'width' => '',
          'unique' => 0,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 9994,
        'machine_name' => 'create_your_campaign_here__email_address',
        'page_num' => 1,
        'parent_machine_name' => 'create_your_campaign_here__civicrm_1_contact_1_fieldset_fie',
      ),
      'create_your_campaign_here__title_of_your_campaign' => array(
        'form_key' => 'title_of_your_campaign',
        'name' => 'Title of your campaign',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 9995,
        'machine_name' => 'create_your_campaign_here__title_of_your_campaign',
        'page_num' => 1,
        'parent_machine_name' => 'create_your_campaign_here__civicrm_1_contact_1_fieldset_fie',
      ),
      'create_your_campaign_here__welcome_message' => array(
        'form_key' => 'welcome_message',
        'name' => 'Welcome message',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 9996,
        'machine_name' => 'create_your_campaign_here__welcome_message',
        'page_num' => 1,
        'parent_machine_name' => 'create_your_campaign_here__civicrm_1_contact_1_fieldset_fie',
      ),
      'create_your_campaign_here__civicrm_1_membership_1_membershi' => array(
        'form_key' => 'civicrm_1_membership_1_membership_membership_type_id',
        'name' => 'Membership Type',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'civicrm_live_options' => 1,
          'private' => 0,
          'items' => '',
          'multiple' => NULL,
          'aslist' => NULL,
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'title_display' => 0,
          'description' => '',
          'description_above' => FALSE,
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 9997,
        'machine_name' => 'create_your_campaign_here__civicrm_1_membership_1_membershi',
        'page_num' => 1,
        'parent_machine_name' => 'create_your_campaign_here__civicrm_1_contact_1_fieldset_fie',
      ),
      'create_your_campaign_here__enter_target_amount' => array(
        'form_key' => 'enter_target_amount',
        'name' => 'Enter target amount',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 1,
        'weight' => 2,
        'machine_name' => 'create_your_campaign_here__enter_target_amount',
        'page_num' => 1,
      ),
      'create_your_campaign_here__progress_bar' => array(
        'form_key' => 'progress_bar',
        'name' => 'Progress Bar',
        'type' => 'select',
        'value' => 1,
        'extra' => array(
          'description' => 'If this option is checked, a "thermometer" showing progress toward your goal will be included on the page.',
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'items' => '1|Progress Bar
',
          'multiple' => 0,
          'custom_keys' => 0,
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 3,
        'machine_name' => 'create_your_campaign_here__progress_bar',
        'page_num' => 1,
      ),
      'create_your_campaign_here__do_you_want_to_pay_later' => array(
        'form_key' => 'do_you_want_to_pay_later',
        'name' => 'Do you want to pay later?',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'items' => '1|Yes
',
          'multiple' => 1,
          'custom_keys' => 0,
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 4,
        'machine_name' => 'create_your_campaign_here__do_you_want_to_pay_later',
        'page_num' => 1,
      ),
      'create_your_campaign_here__donation_button' => array(
        'form_key' => 'donation_button',
        'name' => 'Donation Button',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'description' => 'The text for the contribute or register button.',
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 5,
        'machine_name' => 'create_your_campaign_here__donation_button',
        'page_num' => 1,
      ),
      'create_your_campaign_here__your_message' => array(
        'form_key' => 'your_message',
        'name' => 'Your Message',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'description' => 'Tell people why this campaign is important to you.',
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 6,
        'machine_name' => 'create_your_campaign_here__your_message',
        'page_num' => 1,
      ),
      'create_your_campaign_here__contribution_page_type' => array(
        'form_key' => 'contribution_page_type',
        'name' => 'Contribution page type',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 1,
          'items' => '1|Event one
2|Event two
',
          'multiple' => 0,
          'custom_keys' => 0,
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 1,
        'weight' => 7,
        'machine_name' => 'create_your_campaign_here__contribution_page_type',
        'page_num' => 1,
      ),
      'create_your_campaign_here__contribution_pagebreak' => array(
        'form_key' => 'contribution_pagebreak',
        'name' => 'Payment',
        'type' => 'pagebreak',
        'value' => '',
        'extra' => array(
          'private' => FALSE,
          'next_page_label' => '',
          'prev_page_label' => '',
        ),
        'required' => 0,
        'weight' => 8,
        'machine_name' => 'create_your_campaign_here__contribution_pagebreak',
        'page_num' => 2,
      ),
      'create_your_campaign_here__civicrm_1_contribution_1_contrib' => array(
        'form_key' => 'civicrm_1_contribution_1_contribution_payment_processor_id',
        'name' => 'Payment Processor',
        'type' => 'select',
        'value' => 0,
        'extra' => array(
          'aslist' => 0,
          'items' => '0|Pay Later',
          'multiple' => 1,
          'private' => 0,
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'title_display' => 0,
          'description' => '',
          'description_above' => FALSE,
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 9,
        'machine_name' => 'create_your_campaign_here__civicrm_1_contribution_1_contrib',
        'page_num' => 2,
      ),
    ),
    'conditionals' => array(),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:7:"overlay";i:0;}',
  'webform_civicrm' => array(
    'nid' => 4,
    'data' => array(
      'contact' => array(
        1 => array(
          'contact' => array(
            1 => array(
              'contact_type' => 'individual',
              'contact_sub_type' => array(),
              'webform_label' => 'Contact 1',
            ),
          ),
          'matching_rule' => 'Unsupervised',
          'number_of_other' => 0,
          'number_of_address' => 5,
          'number_of_phone' => 0,
          'number_of_email' => 1,
          'number_of_website' => 0,
          'number_of_im' => 0,
          'address' => array(
            1 => array(
              'location_type_id' => 1,
            ),
            2 => array(
              'location_type_id' => 1,
            ),
            3 => array(
              'location_type_id' => 1,
            ),
            4 => array(
              'location_type_id' => 1,
            ),
            5 => array(
              'location_type_id' => 1,
            ),
          ),
          'email' => array(
            1 => array(
              'location_type_id' => 1,
            ),
          ),
        ),
      ),
      'activity' => array(
        'number_of_activity' => 0,
      ),
      'membership' => array(
        1 => array(
          'number_of_membership' => 1,
          'membership' => array(
            1 => array(
              'num_terms' => 1,
            ),
          ),
        ),
      ),
      'participant_reg_type' => 0,
      'reg_options' => array(
        'event_type' => 'any',
        'show_past_events' => 0,
        'title_display' => 'title',
        'show_remaining' => 0,
        'validate' => 1,
        'block_form' => 0,
        'disable_unregister' => 0,
        'allow_url_load' => 0,
      ),
      'contribution' => array(
        1 => array(
          'contribution' => array(
            1 => array(
              'contribution_page_id' => 1,
              'honor_type_id' => 1,
              'is_test' => 0,
            ),
          ),
        ),
      ),
    ),
    'prefix_known' => '',
    'prefix_unknown' => '',
    'message' => '',
    'confirm_subscription' => 1,
    'block_unknown_users' => 0,
    'create_fieldsets' => 1,
    'new_contact_source' => 'Indy\'s fundraising campaign',
  ),
  'webform_features_author' => 'admin',
  'webform_features_revision_author' => 'admin',
);
return $webforms;
}
