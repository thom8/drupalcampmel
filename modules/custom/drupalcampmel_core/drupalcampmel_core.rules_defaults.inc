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
  return $items;
}
