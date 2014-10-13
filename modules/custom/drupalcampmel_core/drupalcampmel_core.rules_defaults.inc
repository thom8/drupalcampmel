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
  $items['rules_signup_create_notify_user'] = entity_import('rules_config', '{ "rules_signup_create_notify_user" : {
      "LABEL" : "Signup: Create and notify user",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional", "entityform" ],
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
        { "entity_query" : {
            "USING" : {
              "type" : "user",
              "property" : "mail",
              "value" : [ "entityform:field-email-address" ],
              "limit" : "1"
            },
            "PROVIDE" : { "entity_fetched" : { "user_load" : "Loaded user" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is_empty" : { "data" : [ "user-load" ] } },
              "DO" : [
                { "entity_create" : {
                    "USING" : {
                      "type" : "user",
                      "param_field_first_name" : [ "entityform:field-first-name" ],
                      "param_field_last_name" : [ "entityform:field-last-name" ],
                      "param_name" : [ "entityform:field-email-address" ],
                      "param_mail" : [ "entityform:field-email-address" ]
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
  return $items;
}
