/**
 * @file
 */

(function ($) {
  Drupal.behaviors.guideposts_article = {
    attach: function (context, settings) {
      $(document).ready(function () {
        $('.field-name-field-hp-banner >  .field-items ').slick({
            slidesToShow: 1,
            slidesToScroll: 1,
            dots: true,
            autoplay: true,
            autoplaySpeed: 5000
          });

        $('.slick-project-photo-gallery-for').each(function (key, item) {

            var sliderIdName = 'slider' + key;
            var sliderNavIdName = 'sliderNav' + key;

            this.id = sliderIdName;
            $('.slick-project-photo-gallery-nav')[key].id = sliderNavIdName;

            var sliderId = '#' + sliderIdName;
            var sliderNavId = '#' + sliderNavIdName;

            $(sliderId).slick({
                slidesToShow: 1,
                slidesToScroll: 1,
                arrows: false,
                fade: true,
                asNavFor: sliderNavId
            });

            $(sliderNavId).slick({
                slidesToShow: 3,
                slidesToScroll: 1,
                asNavFor: sliderId,
                dots: false,
                arrows: true,
                focusOnSelect: true
            });
        });

        $('.slick-project-list-for').each(function (key, item) {

            var sliderIdName = 'slider' + key;
            var sliderNavIdName = 'sliderNav' + key;

            this.id = sliderIdName;
            $('.slick-project-list-nav')[key].id = sliderNavIdName;

            var sliderId = '#' + sliderIdName;
            var sliderNavId = '#' + sliderNavIdName;

            $(sliderId).slick({
                slidesToShow: 1,
                slidesToScroll: 1,
                arrows: false,
                fade: true,
                asNavFor: sliderNavId
              });

            $(sliderNavId).slick({
                slidesToShow: 3,
                slidesToScroll: 1,
                asNavFor: sliderId,
                dots: false,
                arrows: true,
                focusOnSelect: true
              });
        });

            $('.fancybox-media').fancybox({
              openEffect  : 'none',
              closeEffect : 'none',
              helpers : {
                media : {}
              },
              width    : 300,
              height    : 150,
              fitToView    : true,
              autoSize    : true,
            });

      });
    }
  }
})(jQuery);
