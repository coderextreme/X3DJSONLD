load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
ConfigurationProperties.setDeleteIntermediateFiles(false);
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
      var X3D0 =  new X3D().setProfile("Interactive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("TestCycleTimeStart.x3d"))
        .addMeta(new meta().setName("creator").setContent("Andreas"))
        .addMeta(new meta().setName("creator").setContent("Joe D. Williams"))
        .addMeta(new meta().setName("description").setContent("Test design patterns for animation control."))
        .addMeta(new meta().setName("created").setContent("10 September 2023"))
        .addMeta(new meta().setName("modified").setContent("Mon, 15 Sep 2025 05:20:59 GMT"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/cycletimeIndex.html"))
        .addMeta(new meta().setName("reference").setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/cycleTimeStart.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TestCycleTimeStart.x3d")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("TestCycleTimeStart.x3d"))
        .addChild(new Viewpoint().setDescription("hello in there"))
        .addChild(new TimeSensor().setDEF("REDTIME1").setLoop(true).setStopTime(1757913659.298))
        .addChild(new TimeSensor().setDEF("GREENTIME2").setCycleInterval(5).setStartTime(1757913659.298))
        .addChild(new TimeSensor().setDEF("BLUETIME3").setCycleInterval(10))
        .addChild(new BooleanFilter().setDEF("GREENFILTER"))
        .addChild(new TimeTrigger().setDEF("BLUETRIGGER"))
        .addChild(new Transform().setDEF("REDBALL").setTranslation(Java.to(doubleToFloat([1.615999,0,0]), Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,0,0]), Java.type("float[]")))))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setDEF("GREENBALL")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,1,0]), Java.type("float[]")))))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setDEF("BLUEBALL")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,1]), Java.type("float[]")))))
            .setGeometry(new Sphere())))
        .addChild(new PositionInterpolator().setDEF("REDINTERP1").setKey(Java.to(doubleToFloat([0,0.25,0.5,0.75,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([0,0,0,2,0,0,0,0,0,-2,0,0,0,0,0]), Java.type("float[]"))))
        .addChild(new PositionInterpolator().setDEF("GREENINTERP2").setKey(Java.to(doubleToFloat([0,0.25,0.5,0.75,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([0,0,0,0,2,0,0,0,0,0,-2,0,0,0,0]), Java.type("float[]"))))
        .addChild(new PositionInterpolator().setDEF("BLUEINTERP3").setKey(Java.to(doubleToFloat([0,0.25,0.5,0.75,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([0,0,0,0,-2,0,0,0,0,0,2,0,0,0,0]), Java.type("float[]"))))
        .addChild(new ROUTE().setFromNode("REDTIME1").setFromField("cycleTime").setToNode("REDTIME1").setToField("set_stopTime"))
        .addChild(new ROUTE().setFromNode("REDTIME1").setFromField("stopTime_changed").setToNode("GREENTIME2").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("GREENTIME2").setFromField("isActive").setToNode("GREENFILTER").setToField("set_boolean"))
        .addChild(new ROUTE().setFromNode("GREENFILTER").setFromField("inputFalse").setToNode("BLUETRIGGER").setToField("set_boolean"))
        .addChild(new ROUTE().setFromNode("BLUETRIGGER").setFromField("triggerTime").setToNode("BLUETIME3").setToField("set_startTime"))
        .addChild(new ROUTE().setFromNode("REDTIME1").setFromField("fraction_changed").setToNode("REDINTERP1").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("REDINTERP1").setFromField("value_changed").setToNode("REDBALL").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("GREENTIME2").setFromField("fraction_changed").setToNode("GREENINTERP2").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("GREENINTERP2").setFromField("value_changed").setToNode("GREENBALL").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("BLUETIME3").setFromField("fraction_changed").setToNode("BLUEINTERP3").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("BLUEINTERP3").setFromField("value_changed").setToNode("BLUEBALL").setToField("set_translation")))      ;
    X3D0.toFileX3D("../data/TestCycleTimeStart.new.graal.x3d");
    X3D0.toFileJSON("../data/TestCycleTimeStart.new.graal.x3dj");
