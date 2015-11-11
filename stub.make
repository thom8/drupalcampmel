core = 7.x
api = 2



; Drupal core

projects[drupal][type] = core
projects[drupal][version] = 7.41



; Install profile

projects[drupalcampmel][type] = profile
projects[drupalcampmel][download][type] = git
projects[drupalcampmel][download][url] = https://github.com/drupalmel/drupalcampmel.git
; Uncomment the following line when working with Vagrant.
;projects[drupalcampmel][download][url] = file:///drupal
projects[drupalcampmel][download][branch] = 2015.x
