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
const card6 = document.querySelector('.card6');
const front6 = document.querySelector('.front6');
const back6 = document.querySelector('.back6');
const card7 = document.querySelector('.card7');
const front7 = document.querySelector('.front7');
const back7 = document.querySelector('.back7');
const card8 = document.querySelector('.card8');
const front8 = document.querySelector('.front8');
const back8 = document.querySelector('.back8');
const card9 = document.querySelector('.card9');
const front9 = document.querySelector('.front9');
const back9 = document.querySelector('.back9');
const card10 = document.querySelector('.card10');
const front10 = document.querySelector('.front10');
const back10 = document.querySelector('.back10');

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

front1.addEventListener('click', () => {
    card1.style.transform = 'rotateY(180deg)';
})

back1.addEventListener('click', () => {
    card1.style.transform = 'rotateY(0deg)';
})

front2.addEventListener('click', () => {
    card2.style.transform = 'rotateY(180deg)';
})

back2.addEventListener('click', () => {
    card2.style.transform = 'rotateY(0deg)';
})

front3.addEventListener('click', () => {
    card3.style.transform = 'rotateY(180deg)';
})

back3.addEventListener('click', () => {
    card3.style.transform = 'rotateY(0deg)';
})

front4.addEventListener('click', () => {
    card4.style.transform = 'rotateY(180deg)';
})

back4.addEventListener('click', () => {
    card4.style.transform = 'rotateY(0deg)';
})

front5.addEventListener('click', () => {
    card5.style.transform = 'rotateY(180deg)';
})

back5.addEventListener('click', () => {
    card5.style.transform = 'rotateY(0deg)';
})

front6.addEventListener('click', () => {
    card6.style.transform = 'rotateY(180deg)';
})

back6.addEventListener('click', () => {
    card6.style.transform = 'rotateY(0deg)';
})

front7.addEventListener('click', () => {
    card7.style.transform = 'rotateY(180deg)';
})

back7.addEventListener('click', () => {
    card7.style.transform = 'rotateY(0deg)';
})

front8.addEventListener('click', () => {
    card8.style.transform = 'rotateY(180deg)';
})

back8.addEventListener('click', () => {
    card8.style.transform = 'rotateY(0deg)';
})

front9.addEventListener('click', () => {
    card9.style.transform = 'rotateY(180deg)';
})

back9.addEventListener('click', () => {
    card9.style.transform = 'rotateY(0deg)';
})

front10.addEventListener('click', () => {
    card10.style.transform = 'rotateY(180deg)';
})

back10.addEventListener('click', () => {
    card10.style.transform = 'rotateY(0deg)';
})