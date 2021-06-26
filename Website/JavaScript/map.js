const info1 = document.querySelector('.info1');
const info2 = document.querySelector('.info2');
const info3 = document.querySelector('.info3');
const info4 = document.querySelector('.info4');
const info5 = document.querySelector('.info5');
const info6 = document.querySelector('.info6');
const info7 = document.querySelector('.info7');
const exitButton = document.querySelector('.exit-button');
const exitButton1 = document.querySelector('.exit-button1');
const exitButton2 = document.querySelector('.exit-button2');
const exitButton3 = document.querySelector('.exit-button3');
const exitButton4 = document.querySelector('.exit-button4');
const exitButton5 = document.querySelector('.exit-button5');
const exitButton6 = document.querySelector('.exit-button6');

//initialize map
let map = L.map('mapid', { minZoom: 9 }).setView([42.48526384858916, 27.453460693359375], 11);

L.tileLayer('https://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png', {
    attribution: '&copy; <a href="http://osm.org/copyright">OpenStreetMap</a> contributors'
}).addTo(map);

let leafletIcon = L.icon ({
    iconUrl: 'https://cdn.discordapp.com/attachments/851885485696876574/856223408814293012/map-pointer-icon-12.png',
    iconSize: [40,40],
    iconAnchor: [20,35],
});

//add markers
let marker1 = L.marker([42.49944053092116, 27.40264892578125], { icon: leafletIcon }).addTo(map);

let marker2 = L.marker([42.41053006572743, 27.377243041992188], { icon: leafletIcon }).addTo(map);

let marker3 = L.marker([42.583295608141725, 27.470626831054688], { icon: leafletIcon }).addTo(map);

let marker4 = L.marker([42.53195880664412, 27.479896545410156], { icon: leafletIcon }).addTo(map);

let marker5 = L.marker([42.44407629523289, 27.46680736541748], { icon: leafletIcon }).addTo(map);

let marker6 = L.marker([42.43345051374198, 27.470455169677734], { icon: leafletIcon }).addTo(map);

let marker7 = L.marker([42.59972457318483, 27.636966705322262], { icon: leafletIcon }).addTo(map);

//add marker onclick functions
marker1.on('click', function(e){
    info1.style.display = 'block';
    exitButton.style.display = 'block';
});

marker2.on('click', function(e){
    info2.style.display = 'block';
    exitButton1.style.display = 'block';
});

marker3.on('click', function(e){
    info3.style.display = 'block';
    exitButton2.style.display = 'block';
});

marker4.on('click', function(e){
    info4.style.display = 'block';
    exitButton3.style.display = 'block';
});

marker5.on('click', function(e){
    info5.style.display = 'block';
    exitButton4.style.display = 'block';
});

marker6.on('click', function(e){
    info6.style.display = 'block';
    exitButton5.style.display = 'block';
});

marker7.on('click', function(e){
    info7.style.display = 'block';
    exitButton6.style.display = 'block';
});
//exit button
exitButton.addEventListener('click', () =>{
    exitButton.style.display = 'none';
    info1.style.display = 'none';
})

exitButton1.addEventListener('click', () =>{
    exitButton1.style.display = 'none';
    info2.style.display = 'none';
})

exitButton2.addEventListener('click', () =>{
    exitButton2.style.display = 'none';
    info3.style.display = 'none';
})

exitButton3.addEventListener('click', () =>{
    exitButton3.style.display = 'none';
    info4.style.display = 'none';
})

exitButton4.addEventListener('click', () =>{
    exitButton4.style.display = 'none';
    info5.style.display = 'none';
})

exitButton5.addEventListener('click', () =>{
    exitButton5.style.display = 'none';
    info6.style.display = 'none';
})


exitButton6.addEventListener('click', () =>{
    exitButton6.style.display = 'none';
    info7.style.display = 'none';
})


