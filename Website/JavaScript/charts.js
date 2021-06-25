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

});

//-------------------------------------------------------------------------------------------------------------------//

am4core.ready(function() {

    // Themes begin
    am4core.useTheme(am4themes_animated);
    // Themes end
    
    // Create chart instance
    var chart = am4core.create("chartdiv1", am4charts.XYChart);
    chart.scrollbarX = new am4core.Scrollbar();
    
    // Add data
    chart.data = [{
        "country": "2014",
        "visits": 5846
    }, {
        "country": "2015",
        "visits": 5845
    }, {
        "country": "2016",
        "visits": 5845
    }, {
        "country": "2017",
        "visits": 5847
    }, {
        "country": "2018",
        "visits": 5849
    }, {
        "country": "2019",
        "visits": 5849
    }];
    
    // Create axes
    var categoryAxis = chart.xAxes.push(new am4charts.CategoryAxis());
    categoryAxis.dataFields.category = "country";
    categoryAxis.renderer.grid.template.location = 0;
    categoryAxis.renderer.minGridDistance = 30;
    categoryAxis.renderer.labels.template.horizontalCenter = "right";
    categoryAxis.renderer.labels.template.verticalCenter = "middle";
    categoryAxis.renderer.labels.template.rotation = 270;
    categoryAxis.tooltip.disabled = true;
    categoryAxis.renderer.minHeight = 110;
    
    var valueAxis = chart.yAxes.push(new am4charts.ValueAxis());
    valueAxis.renderer.minWidth = 50;
    
    // Create series
    var series = chart.series.push(new am4charts.ColumnSeries());
    series.sequencedInterpolation = true;
    series.dataFields.valueY = "visits";
    series.dataFields.categoryX = "country";
    series.tooltipText = "[{categoryX}: bold]{valueY}[/]";
    series.columns.template.strokeWidth = 0;
    
    series.tooltip.pointerOrientation = "vertical";
    
    series.columns.template.column.cornerRadiusTopLeft = 10;
    series.columns.template.column.cornerRadiusTopRight = 10;
    series.columns.template.column.fillOpacity = 0.8;
    
    // on hover, make corner radiuses bigger
    var hoverState = series.columns.template.column.states.create("hover");
    hoverState.properties.cornerRadiusTopLeft = 0;
    hoverState.properties.cornerRadiusTopRight = 0;
    hoverState.properties.fillOpacity = 1;
    
    series.columns.template.adapter.add("fill", function(fill, target) {
        return chart.colors.getIndex(target.dataItem.index);
    });
    
    // Cursor
    chart.cursor = new am4charts.XYCursor();
    
    }); // end am4core.ready()