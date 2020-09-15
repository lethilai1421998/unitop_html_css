$(document).ready(function () {
  $("#icon-menu-responsive").click(function () {
    // click xong và hiển thị menu respon mnenu bằng việc xổ xuống dưới
    $("#site").toggleClass("open-respon-menu");
    $("#icon-menu-responsive").toggleClass('fas fa-align-justify fas fa-times');
  });

  // hiệu ứng slideToggle
  $(window).resize(function () {
    // nếu màn hìn có độ rộng 768px thì respon-menu nó phải ấn đi
    //alert("OK");
    if ($(document).width() >= 768) {
      $("#site").removeClass("open-respon-menu");
      $("#icon-menu-responsive").removeClass('fas fa-times').addClass('fas fa-align-justify');
    }



    return false;
  });
});