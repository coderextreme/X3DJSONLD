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
        .addMeta(new meta().setName("title").setContent("AllenBox.x3d"))
        .addMeta(new meta().setName("creator").setContent("Allen Box"))
        .addMeta(new meta().setName("created").setContent("8 July 2025"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("AllenBox.x3d"))
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE"], Java.type("java.lang.String[]"))).setAvatarSize(Java.to(doubleToFloat([0.15,1.53,0.75]), Java.type("float[]"))).setSpeed(0.5))
        .addChild(new Transform().setDEF("Floor").setScale(Java.to(doubleToFloat([1,0.0125,1]), Java.type("float[]"))).setTranslation(Java.to(doubleToFloat([0,-0.0125,0]), Java.type("float[]")))
          .addChild(new Shape()
            .setGeometry(new Box())
            .setAppearance(new Appearance()
              .setMaterial(new Material())))))      ;
    X3D0.toFileX3D("../data/AllenBox.new.graal.x3d");
    X3D0.toFileJSON("../data/AllenBox.new.graal.json");
