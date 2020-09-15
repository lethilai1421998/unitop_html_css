$(document).ready(function () {

    $('a#change_color').click(function () {
        $("h2").css("color", 'red');
        return false;
    });
});