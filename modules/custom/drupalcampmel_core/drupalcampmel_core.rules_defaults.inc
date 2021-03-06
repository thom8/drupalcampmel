<?php
/**
 * @file
 * drupalcampmel_core.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function drupalcampmel_core_default_rules_configuration() {
  $items = array();
  $items['rules_contact_new_submission'] = entity_import('rules_config', '{ "rules_contact_new_submission" : {
      "LABEL" : "Contact: New submission",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "contact" : "contact" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "drupalmelbourne@gmail.com",
            "subject" : "Contact form submission",
            "message" : [ "entityform:field-body" ],
            "from" : "[entityform:field-first-name] [entityform:field-last-name] \\u003C[entityform:field-email-address]\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_signup_create_notify_user'] = entity_import('rules_config', '{ "rules_signup_create_notify_user" : {
      "LABEL" : "Signup: Create and notify user",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "USES VARIABLES" : { "entityform_submission" : { "label" : "Entityform Submission", "type" : "entityform" } },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform-submission" ],
            "type" : "entityform",
            "bundle" : { "value" : { "register_interest" : "register_interest" } }
          }
        }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "user",
              "property" : "mail",
              "value" : [ "entityform-submission:field-email-address" ],
              "limit" : "1"
            },
            "PROVIDE" : { "entity_fetched" : { "user_existing" : "Existing user" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is_empty" : { "data" : [ "user-existing" ] } },
              "DO" : [
                { "entity_create" : {
                    "USING" : {
                      "type" : "user",
                      "param_field_first_name" : [ "entityform-submission:field-first-name" ],
                      "param_field_last_name" : [ "entityform-submission:field-last-name" ],
                      "param_name" : [ "entityform-submission:field-email-address" ],
                      "param_mail" : [ "entityform-submission:field-email-address" ]
                    },
                    "PROVIDE" : { "entity_created" : { "user" : "User" } }
                  }
                },
                { "data_set" : { "data" : [ "user:status" ], "value" : "1" } },
                { "entity_save" : { "data" : [ "user" ], "immediate" : 1 } },
                { "user_send_account_email" : { "account" : [ "user" ], "email_type" : "register_no_approval_required" } }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_signup_create_notify_user_trigger'] = entity_import('rules_config', '{ "rules_signup_create_notify_user_trigger" : {
      "LABEL" : "Signup: Create and notify user",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "entityform" ],
            "type" : "entityform",
            "bundle" : { "value" : { "register_interest" : "register_interest" } }
          }
        }
      ],
      "DO" : [
        { "component_rules_signup_create_notify_user" : { "entityform_submission" : [ "entityform" ] } }
      ]
    }
  }');
  return $items;
}
