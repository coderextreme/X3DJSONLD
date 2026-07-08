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
        .addMeta(new meta().setName("title").setContent("ThreeInARow.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/ThreeInARow.x3d"))
        .addMeta(new meta().setName("description").setContent("3 boxes")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE"], Java.type("java.lang.String[]"))))
        .addChild(new Viewpoint().setDescription("Cubes").setPosition(Java.to(doubleToFloat([0,0,12]), Java.type("float[]"))))
        .addChild(new Transform().setDEF("first").setTranslation(Java.to(doubleToFloat([0,2,0]), Java.type("float[]")))
          .addChild(new Shape().setDEF("ball")
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,1]), Java.type("float[]")))))))
        .addChild(new Transform()
          .addChild(new Shape().setUSE("ball")))
        .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,-2,0]), Java.type("float[]")))
          .addChild(new Shape().setUSE("ball"))))      ;
    X3D0.toFileX3D("../data/ThreeInARow.new.graal.x3d");
    X3D0.toFileJSON("../data/ThreeInARow.new.graal.x3dj");
