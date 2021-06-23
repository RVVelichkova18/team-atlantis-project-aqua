am4core.ready(function() {

    // Themes begin
    am4core.useTheme(am4themes_animated);
    // Themes end

    var capacity = 100;
    var value = 74;
    var circleSize = 0.8;

    var component = am4core.create("chartdiv", am4core.Container)
    component.width = am4core.percent(100);
    component.height = am4core.percent(100);

    var chartContainer = component.createChild(am4core.Container);
    chartContainer.x = am4core.percent(50)
    chartContainer.y = am4core.percent(50)

    var circle = chartContainer.createChild(am4core.Circle);
    circle.fill = am4core.color("#dadada");

    var circleMask = chartContainer.createChild(am4core.Circle);

    var waves = chartContainer.createChild(am4core.WavedRectangle);
    waves.fill = am4core.color("#34a4eb");
    waves.mask = circleMask;
    waves.horizontalCenter = "middle";
    waves.waveHeight = 10;
    waves.waveLength = 30;
    waves.y = 500;
    circleMask.y = -500;

    component.events.on("maxsizechanged", function() {
        var smallerSize = Math.min(component.pixelWidth, component.pixelHeight);
        var radius = smallerSize * circleSize / 2;

        circle.radius = radius;
        circleMask.radius = radius;
        waves.height = smallerSize;
        waves.width = Math.max(component.pixelWidth, component.pixelHeight);

        //capacityLabel.y = radius;

        var labelRadius = radius + 20

        capacityLabel.path = am4core.path.moveTo({ x: -labelRadius, y: 0 }) + am4core.path.arcToPoint({ x: labelRadius, y: 0 }, labelRadius, labelRadius);
        capacityLabel.locationOnPath = 0.5;

        setValue(value);
    })


    function setValue(value) {
        var y = -circle.radius - waves.waveHeight + (1 - value / capacity) * circle.pixelRadius * 2;
        waves.animate([{ property: "y", to: y }, { property: "waveHeight", to: 10, from: 15 }, { property: "x", from: -50, to: 0 }], 5000, am4core.ease.elasticOut);
        circleMask.animate([{ property: "y", to: -y }, { property: "x", from: 50, to: 0 }], 5000, am4core.ease.elasticOut);
    }


    var label = chartContainer.createChild(am4core.Label)
    var formattedValue = component.numberFormatter.format(value, "#.#a");
    formattedValue = formattedValue.toUpperCase();

    label.text = formattedValue + " %";
    label.fill = am4core.color("#fff");
    label.fontSize = 30;
    label.horizontalCenter = "middle";


    var capacityLabel = chartContainer.createChild(am4core.Label)

    var formattedCapacity = component.numberFormatter.format(capacity, "#.#a").toUpperCase();;

    capacityLabel.text = "Капацитет " + formattedCapacity + " %";
    capacityLabel.fill = am4core.color("#fff");
    capacityLabel.fontSize = 20;
    capacityLabel.textAlign = "middle";
    capacityLabel.padding(0, 0, 0, 0);

}); // end am4core.ready()