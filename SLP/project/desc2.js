function myFunction2() {
    document.getElementById("myDropdown2").classList.toggle("showw");
}

// Close the dropdown if the user clicks outside of it
window.onclick = function(event) {
  if (!event.target.matches('.dropbtn2')) {

    var dropdowns = document.getElementsByClassName("dropdown-content2");
    var i;
    for (i = 0; i < dropdowns.length; i++) {
      var openDropdown = dropdowns[i];
      if (openDropdown.classList.contains('showw')) {
        openDropdown.classList.remove('showw');
      }
    }
  }
}