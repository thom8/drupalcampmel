@blackbox
Feature: Anonymous



  Scenario: Anonymous homepage
    Given I am on the homepage
    Then I should see "DrupalCampMelbourne"
    And I should see "Register interest"

  Scenario: Contact us
    Given I am on the homepage
    Then I should see "Contact us"

  Scenario: Contact us - submit
    Given I am at "/contact"
    And I fill in "field_first_name[und][0][value]" with "Test"
    And I fill in "field_last_name[und][0][value]" with "User"
    And I fill in "field_email_address[und][0][email]" with "drupalmelbourne@gamil.com"
    And I fill in "field_body[und][0][value]" with "Test message from Behat, please ignore."
    And I press "Submit"
    Then I should see "Your submission has been saved."
