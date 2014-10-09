(function($) {
  Drupal.behaviors.drupalCampMelTheme = {
    attach: function(context) {
      $(window).resize(function() {
        $('.main-container').css('margin-top', $(document).width() * (873 / 1280));
        $('.pane-page-logo').css('margin-top', -$('#logo img').height() / 1.35);
      });
      setTimeout(function() { $(window).trigger('resize'); }, 10);
    }
  }
})(jQuery);
