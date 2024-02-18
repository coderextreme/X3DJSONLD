load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array([d])[0];
}
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("app.x3d"))
        .addMeta(new meta().setName("creator").setContent("Carlson, I"))
        .addMeta(new meta().setName("creator").setContent("Carlson, II"))
        .addMeta(new meta().setName("creator").setContent("Carlson, III")))
      .setScene(new Scene()
        .addChild(new Group()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([doubleToFloat(1),doubleToFloat(0),doubleToFloat(0)], Java.type("float[]")))))
            .setGeometry(new Box())))
        .addChild(new Transform().setRotation(Java.to([doubleToFloat(7),doubleToFloat(8),doubleToFloat(9),doubleToFloat(3.14)], Java.type("float[]"))).setScale(Java.to([doubleToFloat(4),doubleToFloat(5),doubleToFloat(6)], Java.type("float[]"))).setTranslation(Java.to([doubleToFloat(1),doubleToFloat(2),doubleToFloat(3)], Java.type("float[]")))))      ;
    X3D0.toFileX3D("../personal/app.new.graal.x3d");
    X3D0.toFileJSON("../personal/app.new.graal.json");
