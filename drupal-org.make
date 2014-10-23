core = 7.x
api = 2



; Modules

projects[bean][type] = module
projects[bean][subdir] = contrib
projects[bean][version] = 1.8

projects[blockify][type] = module
projects[blockify][subdir] = contrib
projects[blockify][version] = 1.2

projects[breakpoints][type] = module
projects[breakpoints][subdir] = contrib
projects[breakpoints][version] = 1.3

projects[coder][type] = module
projects[coder][subdir] = contrib
projects[coder][version] = 2.2

projects[coffee][type] = module
projects[coffee][subdir] = contrib
projects[coffee][version] = 2.2

projects[context][type] = module
projects[context][subdir] = contrib
projects[context][version] = 3.3

projects[context_condition_theme][type] = module
projects[context_condition_theme][subdir] = contrib
projects[context_condition_theme][version] = 1.0

projects[context_module][type] = module
projects[context_module][subdir] = contrib
projects[context_module][download][type] = git
projects[context_module][download][revision] = b7a05aa1299d9286b77f66c539826de9bebde2fb
; Prevent rederict loop - https://drupal.org/node/2076565#comment-7804715
projects[context_module][patch][] = https://drupal.org/files/redirect_loop-2076565-1.patch

projects[context_server_vars][type] = module
projects[context_server_vars][subdir] = contrib
projects[context_server_vars][download][type] = git
projects[context_server_vars][download][revision] = 1d61d973ddb7513de9c3d82b33c8e24c24e907f2

projects[context_variable][type] = module
projects[context_variable][subdir] = contrib
projects[context_variable][download][type] = git
projects[context_variable][download][revision] = cd9b3b9b64acd5ac3a1c6c180eadff34294c3f11

projects[ctools][type] = module
projects[ctools][subdir] = contrib
projects[ctools][version] = 1.4

projects[devel][type] = module
projects[devel][subdir] = contrib
projects[devel][version] = 1.5

projects[diff][type] = module
projects[diff][subdir] = contrib
projects[diff][version] = 3.2

projects[dindent][type] = module
projects[dindent][subdir] = contrib
projects[dindent][version] = 1.2

projects[ds][type] = module
projects[ds][subdir] = contrib
projects[ds][version] = 2.6

projects[email][type] = module
projects[email][subdir] = contrib
projects[email][version] = 1.3

projects[entity][type] = module
projects[entity][subdir] = contrib
projects[entity][version] = 1.5

projects[entityform][type] = module
projects[entityform][subdir] = contrib
projects[entityform][version] = 2.0-beta4

projects[entityform_block][type] = module
projects[entityform_block][subdir] = contrib
projects[entityform_block][version] = 1.1

projects[environment_indicator][type] = module
projects[environment_indicator][subdir] = contrib
projects[environment_indicator][version] = 2.5

projects[escape_admin][type] = module
projects[escape_admin][subdir] = contrib
projects[escape_admin][version] = 1.1

projects[features][type] = module
projects[features][subdir] = contrib
projects[features][version] = 2.2
; Cleaner info format - https://drupal.org/comment/8270327#comment-8270327
projects[features][patch][] = https://drupal.org/files/issues/cleaner_info-2155793-1.patch

projects[filefield_paths][type] = module
projects[filefield_paths][subdir] = contrib
projects[filefield_paths][version] = 1.0-beta4

projects[fontawesome][type] = module
projects[fontawesome][subdir] = contrib
projects[fontawesome][download][type] = git
projects[fontawesome][download][revision] = 2821d8b3b5c9aea7a7dd6cd2fa330a38beed797d
;Support FA 4.2.0 - https://www.drupal.org/node/2312935#comment-9273529
projects[fontawesome][patch][] = https://www.drupal.org/files/issues/fontawesome_7.x_2.x-2312935-17.patch


projects[google_analytics][type] = module
projects[google_analytics][subdir] = contrib
projects[google_analytics][download][type] = git
projects[google_analytics][download][revision] = d5c42e145e218cf54397b70bb275484a35d8d5dc
; Allow empty Web Property ID variable - http://drupal.org/node/1964052#comment-7269728
projects[google_analytics][patch][] = http://drupal.org/files/variable_empty_id-1964052-1.patch

projects[htmlmail][type] = module
projects[htmlmail][subdir] = contrib
projects[htmlmail][version] = 2.65
; Fix issue with undefined function 'mailsystem_html_to_text()' - https://www.drupal.org/node/1692966#comment-6251940
projects[htmlmail][patch][] = https://www.drupal.org/files/1692966-htmlmail-mailsystem-html-to-text.patch

projects[jquery_update][type] = module
projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = 2.4

projects[libraries][type] = module
projects[libraries][subdir] = contrib
projects[libraries][version] = 2.2

projects[mailchimp][type] = module
projects[mailchimp][subdir] = contrib
projects[mailchimp][version] = 3.1
; Errors when adding a Mailchimp Subscribe field - https://www.drupal.org/node/2262321#comment-9067843
projects[mailchimp][patch][] = https://www.drupal.org/files/issues/intgroups_check-2262321-16.patch
; Add variable support - https://www.drupal.org/node/2355283#comment-9241663
projects[mailchimp][patch][] = https://www.drupal.org/files/issues/add_variable_support-2355283-1.patch

projects[mailsystem][type] = module
projects[mailsystem][subdir] = contrib
projects[mailsystem][version] = 2.34

projects[module_filter][type] = module
projects[module_filter][subdir] = contrib
projects[module_filter][version] = 2.0-alpha2

projects[navbar][type] = module
projects[navbar][subdir] = contrib
projects[navbar][version] = 1.4

projects[navbar_region][type] = module
projects[navbar_region][subdir] = contrib
projects[navbar_region][download][type] = git
projects[navbar_region][download][revision] = 9e260b98e8e261ad9c963c93fc4e963a41feb1f5

projects[node_limit][type] = module
projects[node_limit][subdir] = contrib
projects[node_limit][version] = 1.0-alpha5

projects[panels][type] = module
projects[panels][subdir] = contrib
projects[panels][version] = 3.4

projects[pathauto][type] = module
projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.2

projects[picture][type] = module
projects[picture][subdir] = contrib
projects[picture][version] = 2.7

projects[prepro][type] = module
projects[prepro][subdir] = contrib
projects[prepro][version] = 1.4

projects[realname][type] = module
projects[realname][subdir] = contrib
projects[realname][version] = 1.2

projects[reroute_email][type] = module
projects[reroute_email][subdir] = contrib
projects[reroute_email][download][type] = git
projects[reroute_email][download][revision] = f2e3878ec1ecba067d7206a4ba98482e6c9d836f
; Variable integration - http://drupal.org/node/1964070#comment-7294928
projects[reroute_email][patch][] = http://drupal.org/files/reroute_email-add-variable-module-integration-1964070-2.patch

projects[rules][type] = module
projects[rules][subdir] = contrib
projects[rules][version] = 2.7

projects[rules_conditional][type] = module
projects[rules_conditional][subdir] = contrib
projects[rules_conditional][version] = 1.0-beta2

projects[sassy][type] = module
projects[sassy][subdir] = contrib
projects[sassy][version] = 2.13
; Fix squish-text mixin - http://drupal.org/node/1539310#comment-7284702
projects[sassy][patch][] = http://drupal.org/files/squish_text-1539310-5.patch

projects[site_verify][type] = module
projects[site_verify][subdir] = contrib
projects[site_verify][version] = 1.1

projects[smtp][type] = module
projects[smtp][subdir] = contrib
projects[smtp][version] = 1.0

projects[speedy][type] = module
projects[speedy][subdir] = contrib
projects[speedy][version] = 1.12

projects[strongarm][type] = module
projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

projects[token][type] = module
projects[token][subdir] = contrib
projects[token][version] = 1.5

projects[url][type] = module
projects[url][subdir] = contrib
projects[url][version] = 1.0

projects[variable][type] = module
projects[variable][subdir] = contrib
projects[variable][version] = 2.5

projects[views][type] = module
projects[views][subdir] = contrib
projects[views][version] = 3.8

projects[views_slideshow][type] = module
projects[views_slideshow][subdir] = contrib
projects[views_slideshow][version] = 3.1

projects[xmlsitemap][type] = module
projects[xmlsitemap][subdir] = contrib
projects[xmlsitemap][version] = 2.0
; Variable module integration - http://drupal.org/node/1989862#comment-7389678
projects[xmlsitemap][patch][] = http://drupal.org/files/variable_integration-1989862-1.patch



; Themes

projects[bootstrap][type] = theme
projects[bootstrap][subdir] = contrib
projects[bootstrap][version] = 3.0



; Libraries

libraries[backbone][download][type] = get
libraries[backbone][download][url] = https://github.com/jashkenas/backbone/archive/1.1.2.zip

libraries[bootstrap][download][type] = get
libraries[bootstrap][download][url] = https://github.com/twbs/bootstrap/archive/v3.0.2.zip
libraries[bootstrap][directory_name] = bootstrap
libraries[bootstrap][destination] = themes/contrib/bootstrap
libraries[bootstrap][overwrite] = TRUE

libraries[dindent][download][type] = get
libraries[dindent][download][url] = https://raw.githubusercontent.com/Decipher/dindent/master/src/Parser.php

libraries[fontawesome][download][type] = get
libraries[fontawesome][download][url] = https://github.com/FortAwesome/Font-Awesome/archive/v4.2.0.zip

libraries[jquery.cycle][download][type] = git
libraries[jquery.cycle][download][url] = https://github.com/malsup/cycle.git
libraries[jquery.cycle][download][revision] = db79722719a8a5a8b93fb5d5970d7296ff6bd8bc

libraries[mailchimp][download][type] = get
libraries[mailchimp][download][url] = https://bitbucket.org/mailchimp/mailchimp-api-php/get/2.0.5.zip

libraries[modernizr][download][type] = get
libraries[modernizr][download][url] = https://github.com/Modernizr/Modernizr/archive/v2.7.1.zip

libraries[phpsass][download][type] = git
libraries[phpsass][download][url] = https://github.com/Decipher/phpsass.git
libraries[phpsass][download][revision] = eee7cdb42a387db67cec5b4495f56173c50e41c5

libraries[profiler][download][type] = git
libraries[profiler][download][url] = http://git.drupal.org/project/profiler.git
libraries[profiler][download][revision] = 6655a1b490be896c53dceba9a2b887f39461bd08
; Added support for Devel generate - https://drupal.org/node/1420344#comment-5890366
libraries[profiler][patch][] = https://drupal.org/files/devel_generate-1420344-8.patch

libraries[underscore][download][type] = get
libraries[underscore][download][url] = https://github.com/jashkenas/underscore/archive/1.6.0.zip
