function myFunction3() {
    document.getElementById("myDropdown3").classList.toggle("showww");
}

// Close the dropdown if the user clicks outside of it
window.onclick = function(event) {
  if (!event.target.matches('.dropbtn3')) {

    var dropdowns = document.getElementsByClassName("dropdown-content3");
    var i;
    for (i = 0; i < dropdowns.length; i++) {
      var openDropdown = dropdowns[i];
      if (openDropdown.classList.contains('showww')) {
        openDropdown.classList.remove('showww');
      }
    }
  }
}