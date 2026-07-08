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
        .addMeta(new meta().setName("converter").setContent("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"))
        .addMeta(new meta().setName("converted").setContent("Mon, 31 Jul 2023 03:48:04 GMT")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setHeadlight(false))
        .addChild(new Group()
          .addChild(new Group().setDEF("ARROW")
            .addChild(new Shape()
              .setAppearance(new Appearance().setDEF("ARROW_APPEARANCE")
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.3,0.3,1]), Java.type("float[]"))).setEmissiveColor(Java.to(doubleToFloat([0.3,0.3,0.33]), Java.type("float[]")))))
              .setGeometry(new Cylinder().setTop(false).setBottom(false).setRadius(0.025)))
            .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,1,0]), Java.type("float[]")))
              .addChild(new Shape().setDEF("ARROW_POINTER")
                .setAppearance(new Appearance().setUSE("ARROW_APPEARANCE"))
                .setGeometry(new Cone().setHeight(0.1).setBottomRadius(0.05))))
            .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,-1,0]), Java.type("float[]"))).setRotation(Java.to(doubleToFloat([1,0,0,3.1416]), Java.type("float[]")))
              .addChild(new Shape().setUSE("ARROW_POINTER"))))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,1.08,0]), Java.type("float[]")))
            .addChild(new Billboard()
              .addChild(new Shape()
                .setAppearance(new Appearance().setDEF("LABEL_APPEARANCE")
                  .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,0.3]), Java.type("float[]"))).setEmissiveColor(Java.to(doubleToFloat([0.33,0.33,0.1]), Java.type("float[]")))))
                .setGeometry(new Text().setString(Java.to(["Y"], Java.type("java.lang.String[]")))
                  .setFontStyle(new FontStyle().setDEF("LABEL_FONT").setFamily(Java.to(["SANS"], Java.type("java.lang.String[]"))).setSize(0.2).setJustify(Java.to(["MIDDLE"], Java.type("java.lang.String[]")))))))))
        .addChild(new Transform().setRotation(Java.to(doubleToFloat([0,0,1,-1.5708]), Java.type("float[]")))
          .addChild(new Group()
            .addChild(new Group().setUSE("ARROW"))
            .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0.072,1.1,0]), Java.type("float[]"))).setRotation(Java.to(doubleToFloat([0,0,1,1.5708]), Java.type("float[]")))
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setAppearance(new Appearance().setUSE("LABEL_APPEARANCE"))
                  .setGeometry(new Text().setString(Java.to(["X"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setUSE("LABEL_FONT"))))))))
        .addChild(new Transform().setRotation(Java.to(doubleToFloat([1,0,0,1.5708]), Java.type("float[]")))
          .addChild(new Group()
            .addChild(new Group().setUSE("ARROW"))
            .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,1.1,0.072]), Java.type("float[]"))).setRotation(Java.to(doubleToFloat([1,0,0,-1.5708]), Java.type("float[]")))
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setAppearance(new Appearance().setUSE("LABEL_APPEARANCE"))
                  .setGeometry(new Text().setString(Java.to(["Z"], Java.type("java.lang.String[]")))
                    .setFontStyle(new FontStyle().setUSE("LABEL_FONT")))))))))      ;
    X3D0.toFileX3D("../data/JointCoordinateAxes.new.graal.x3d");
    X3D0.toFileJSON("../data/JointCoordinateAxes.new.graal.x3dj");
