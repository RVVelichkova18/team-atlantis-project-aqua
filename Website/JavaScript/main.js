
const card1 = document.querySelector('.card1');
const front1 = document.querySelector('.front1');
const back1 = document.querySelector('.back1');
const card2 = document.querySelector('.card2');
const front2 = document.querySelector('.front2');
const back2 = document.querySelector('.back2');
const card3 = document.querySelector('.card3');
const front3 = document.querySelector('.front3');
const back3 = document.querySelector('.back3');
const card4 = document.querySelector('.card4');
const front4 = document.querySelector('.front4');
const back4 = document.querySelector('.back4');
const card5 = document.querySelector('.card5');
const front5 = document.querySelector('.front5');
const back5 = document.querySelector('.back5');

function navSlide() {
    const burger = document.querySelector(".burger");
    const nav = document.querySelector(".nav-links");
    const navLinks = document.querySelectorAll(".nav-links li");

    burger.addEventListener("click", () => {
        //Toggle Nav
        nav.classList.toggle("nav-active");

        //Animate Links
        navLinks.forEach((link, index) => {
            if (link.style.animation) {
                link.style.animation = ""
            } else {
                link.style.animation = `navLinkFade 0.5s ease forwards ${index / 7 + 0.5}s`;
            }
        });
        //Burger Animation
        burger.classList.toggle("toggle");
    });

}

navSlide();

front1.addEventListener('click', () =>{
    card1.style.transform = 'rotateY(180deg)';
})

back1.addEventListener('click', () => {
    card1.style.transform = 'rotateY(0deg)';
})

front2.addEventListener('click', () =>{
    card2.style.transform = 'rotateY(180deg)';
})

back2.addEventListener('click', () => {
    card2.style.transform = 'rotateY(0deg)';
})

front3.addEventListener('click', () =>{
    card3.style.transform = 'rotateY(180deg)';
})

back3.addEventListener('click', () => {
    card3.style.transform = 'rotateY(0deg)';
})

front4.addEventListener('click', () =>{
    card4.style.transform = 'rotateY(180deg)';
})

back4.addEventListener('click', () => {
    card4.style.transform = 'rotateY(0deg)';
})

front5.addEventListener('click', () =>{
    card5.style.transform = 'rotateY(180deg)';
})

back5.addEventListener('click', () => {
    card5.style.transform = 'rotateY(0deg)';
})