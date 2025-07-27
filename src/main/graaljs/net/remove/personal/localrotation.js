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
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("localrotation.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/localrotation.x3d"))
        .addMeta(new meta().setName("description").setContent("chained boxes")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("localrotation.x3d"))
        .addChild(new NavigationInfo().setType(Java.to(["ANY","EXAMINE","FLY","LOOKAT"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setDescription("Tour Views").setPosition(Java.to(doubleToFloat([0,0,20]), Java.type("float[]"))))
        .addChild(new Transform().setTranslation(Java.to(doubleToFloat([-4,0,0]), Java.type("float[]")))
          .addChild(new Shape()
            .setGeometry(new Box()))
          .addChild(new Transform().setDEF("TransformTargetParent").setTranslation(Java.to(doubleToFloat([4,0,0]), Java.type("float[]")))
            .addChild(new Shape()
              .setGeometry(new Box()))
            .addChild(new Transform().setDEF("TransformTargetChild").setTranslation(Java.to(doubleToFloat([4,0,0]), Java.type("float[]")))
              .addChild(new Shape()
                .setGeometry(new Box())))))
        .addChild(new ProximitySensor().setDEF("ActivateSensor").setSize(Java.to(doubleToFloat([1000000,1000000,1000000]), Java.type("float[]"))))
        .addChild(new TimeSensor().setDEF("Clock"))
        .addChild(new ROUTE().setFromNode("ActivateSensor").setFromField("enterTime").setToNode("Clock").setToField("set_startTime"))
        .addChild(new OrientationInterpolator().setDEF("Rotater").setKey(Java.to(doubleToFloat([0,1]), Java.type("float[]"))).setKeyValue(Java.to(doubleToFloat([0,0,1,0,0,0,1,1.57]), Java.type("float[]"))))
        .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("Rotater").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Rotater").setFromField("value_changed").setToNode("TransformTargetParent").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Rotater").setFromField("value_changed").setToNode("TransformTargetChild").setToField("set_rotation")))      ;
    X3D0.toFileX3D("../personal/localrotation.new.graal.x3d");
    X3D0.toFileJSON("../personal/localrotation.new.graal.json");
