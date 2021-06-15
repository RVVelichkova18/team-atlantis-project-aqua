let map = L.map('mapid', { minZoom: 10 }).setView([42.492985475830444, 27.465648651123047], 12);

L.tileLayer('https://tiles.stadiamaps.com/tiles/outdoors/{z}/{x}/{y}{r}.png', {
    attribution: '&copy; <a href="http://osm.org/copyright">OpenStreetMap</a> contributors'
}).addTo(map);