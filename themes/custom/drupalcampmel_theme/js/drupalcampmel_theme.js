(function($) {
  Drupal.behaviors.drupalCampMelTheme = {
    attach: function(context) {
      $(window).resize(function() {
        $('.main-container').css('margin-top', $(document).width() * (873 / 1280));
      }).trigger('resize');
    }
  }
})(jQuery);
