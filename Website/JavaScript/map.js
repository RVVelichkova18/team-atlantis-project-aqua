const info1 = document.querySelector('.info1');
const exitButton = document.querySelector('.exit-button');

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

//exit button
exitButton.addEventListener('click', () =>{
    exitButton.style.display = 'none';
    info1.style.display = 'none';
})
