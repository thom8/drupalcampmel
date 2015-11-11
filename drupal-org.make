core = 7.x
api = 2



; Defaults

defaults[projects][subdir] = contrib
defaults[projects][type] = module



; Modules

projects[addressfield][version] = 1.1

projects[bean][version] = 1.9

projects[blockify][version] = 1.2

projects[breakpoints][version] = 1.3

projects[coder][version] = 2.2

projects[coffee][version] = 2.2

projects[commerce][version] = 1.11

projects[commerce_features][version] = 1.0

projects[commerce_paypal][version] = 2.3

projects[commerce_stock][version] = 2.1

projects[context][version] = 3.6

projects[context_condition_theme][version] = 1.0

projects[context_module][download][revision] = b7a05aa
; Prevent rederict loop - https://drupal.org/node/2076565#comment-7804715
projects[context_module][patch][] = https://drupal.org/files/redirect_loop-2076565-1.patch

projects[context_server_vars][download][revision] = 1d61d97

projects[context_variable][download][revision] = b6e3219

projects[ctools][version] = 1.9

projects[devel][version] = 1.5

projects[diff][version] = 3.2

projects[dindent][version] = 1.2

projects[ds][version] = 2.11

projects[email][version] = 1.3

projects[entity][version] = 1.6

projects[entityform][version] = 2.0-rc1

projects[entityform_block][version] = 1.3

projects[environment_indicator][version] = 2.5

projects[escape_admin][version] = 1.2

projects[features][version] = 2.6
; Cleaner info format - https://drupal.org/comment/8270327#comment-8270327
projects[features][patch][] = https://drupal.org/files/issues/cleaner_info-2155793-1.patch

projects[fences][version] = 1.2

projects[field_permissions][version] = 1.0-beta2

projects[filefield_paths][version] = 1.0-rc1

projects[flag][version] = 3.6

projects[fontawesome][download][revision] = 2821d8b
; Support FA 4.2.0 - https://www.drupal.org/node/2312935#comment-9273529
projects[fontawesome][patch][] = https://www.drupal.org/files/issues/fontawesome_7.x_2.x-2312935-17.patch

projects[formblock][version] = 1.0-alpha1

projects[google_analytics][download][revision] = d5c42e1
; Allow empty Web Property ID variable - http://drupal.org/node/1964052#comment-7269728
projects[google_analytics][patch][] = http://drupal.org/files/variable_empty_id-1964052-1.patch

projects[htmlmail][version] = 2.65
; Fix issue with undefined function 'mailsystem_html_to_text()' - https://www.drupal.org/node/1692966#comment-6251940
projects[htmlmail][patch][] = https://www.drupal.org/files/1692966-htmlmail-mailsystem-html-to-text.patch

projects[jquery_update][version] = 2.7

projects[libraries][version] = 2.2

projects[mailchimp][version] = 3.4
; Errors when adding a Mailchimp Subscribe field - https://www.drupal.org/node/2262321#comment-9067843
projects[mailchimp][patch][] = https://www.drupal.org/files/issues/intgroups_check-2262321-16.patch

projects[mailcontrol][version] = 1.0

projects[mailsystem][version] = 2.34

projects[module_filter][version] = 2.0

projects[navbar][version] = 1.6

projects[navbar_region][download][revision] = 9e260b9

projects[node_limit][version] = 1.0-alpha5

projects[panels][version] = 3.5

projects[panels_extra_styles][version] = 1.1

projects[pathauto][version] = 1.3

projects[persistent_update][version] = 1.0

projects[picture][version] = 2.12

projects[prepro][version] = 1.4

projects[prlp][version] = 1.1

projects[realname][version] = 1.2

projects[reroute_email][version] = 1.2

projects[rules][version] = 2.9

projects[rules_conditional][version] = 1.0-beta2

projects[sassy][version] = 2.13
; Fix squish-text mixin - http://drupal.org/node/1539310#comment-7284702
projects[sassy][patch][] = http://drupal.org/files/squish_text-1539310-5.patch

projects[semantic_panels][version] = 1.2

projects[site_verify][version] = 1.1

projects[smtp][version] = 1.2

projects[speedy][version] = 1.12

projects[strongarm][version] = 2.0

projects[token][version] = 1.6

projects[url][version] = 1.0

projects[variable][version] = 2.5

projects[views][version] = 3.11

projects[views_matrix][download][revision] = 888fff4

projects[views_slideshow][version] = 3.1

projects[xmlsitemap][version] = 2.2
; Variable module integration - http://drupal.org/node/1989862#comment-7389678
projects[xmlsitemap][patch][] = http://drupal.org/files/variable_integration-1989862-1.patch



; Modules - Deprecated

projects[panels_bootstrap_layout_builder][download][revision] = f39d5f5

projects[panels_bootstrap_styles][download][revision] = e570c4c



; Themes

projects[bootstrap][type] = theme
projects[bootstrap][version] = 3.1-beta3



; Libraries

libraries[backbone][download][type] = get
libraries[backbone][download][url] = https://github.com/jashkenas/backbone/archive/1.1.2.zip

libraries[bootstrap][download][type] = get
libraries[bootstrap][download][url] = https://github.com/twbs/bootstrap/archive/v3.2.0.zip
libraries[bootstrap][directory_name] = bootstrap
libraries[bootstrap][destination] = themes/contrib/bootstrap
libraries[bootstrap][overwrite] = TRUE

libraries[dindent][download][type] = get
libraries[dindent][download][url] = https://raw.githubusercontent.com/Decipher/dindent/master/src/Parser.php

libraries[fontawesome][download][type] = get
libraries[fontawesome][download][url] = https://github.com/FortAwesome/Font-Awesome/archive/v4.2.0.zip

libraries[jquery.cycle][download][type] = git
libraries[jquery.cycle][download][url] = https://github.com/malsup/cycle.git
libraries[jquery.cycle][download][revision] = db79722

libraries[mailchimp][download][type] = get
libraries[mailchimp][download][url] = https://bitbucket.org/mailchimp/mailchimp-api-php/get/2.0.5.zip

libraries[modernizr][download][type] = get
libraries[modernizr][download][url] = https://github.com/Modernizr/Modernizr/archive/v2.7.1.zip

libraries[phpsass][download][type] = git
libraries[phpsass][download][url] = https://github.com/Decipher/phpsass.git
libraries[phpsass][download][revision] = eee7cdb

libraries[profiler][download][type] = git
libraries[profiler][download][url] = http://git.drupal.org/project/profiler.git
libraries[profiler][download][revision] = 6655a1b
; Added support for Devel generate - https://drupal.org/node/1420344#comment-5890366
libraries[profiler][patch][] = https://drupal.org/files/devel_generate-1420344-8.patch

libraries[underscore][download][type] = get
libraries[underscore][download][url] = https://github.com/jashkenas/underscore/archive/1.6.0.zip
