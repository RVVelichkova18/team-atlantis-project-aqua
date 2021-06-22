let bird1 = document.getElementById("bird1");
let bird2 = document.getElementById("bird2");
let water = document.getElementById("water");
let rocks = document.getElementById("rocks");
let forest = document.getElementById("forest");
window.addEventListener('scroll', function() {
    var value = window.scrollY;
    forest.style.top = value * 0.5 + 'px';
    bird1.style.left = value * 0.5 + 'px';
    bird2.style.left = -value * 0.5 + 'px';
    rocks.style.top = -value * 0.1 + 'px';
    heading.style.top = value * 0.6 + 'px';

})