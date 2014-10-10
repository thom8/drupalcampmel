(function($) {
  Drupal.behaviors.drupalCampMelTheme = {
    attach: function(context) {
      $(window).resize(function() {
        if ($('body.front').size() > 0) {
          $('.main-container').css('margin-top', $(document).width() * (873 / 1280));
          $('#block-blockify-blockify-logo').css('margin-top', -$('#logo img').height() / 1.35);
        }
        else {
          $('.main-container').css('margin-top', $(document).width() * (873 / 1280) - $(document).width() * (873 / 1280) / 4.25);
          $('#block-blockify-blockify-logo').css('margin-top', -$('#logo img').height() / 1.35);
          $('body').css('background-position', '0 -' + $(document).width() * (873 / 1280) / 4.25 + 'px');
        }
      });
      setTimeout(function() { $(window).trigger('resize'); }, 10);
    }
  }
})(jQuery);
