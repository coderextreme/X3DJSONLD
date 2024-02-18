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
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ExtrusionHeart.x3d"))
        .addMeta(new meta().setName("description").setContent("Simple extrusion of a Valentine heart."))
        .addMeta(new meta().setName("creator").setContent("Class participants in course Introduction to VRML/X3D."))
        .addMeta(new meta().setName("created").setContent("14 February 2001"))
        .addMeta(new meta().setName("modified").setContent("27 November 2015"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDescription("Extrusion Heart").setOrientation(Java.to([doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(1.57)], Java.type("float[]"))).setPosition(Java.to([doubleToFloat(0),doubleToFloat(-4),doubleToFloat(0)], Java.type("float[]"))))
        .addChild(new Transform().setTranslation(Java.to([doubleToFloat(0),doubleToFloat(-0.5),doubleToFloat(0)], Java.type("float[]")))
          .addChild(new Shape()
            .setGeometry(new Extrusion().setCreaseAngle(3.14159).setCrossSection(Java.to([doubleToFloat(0),doubleToFloat(0.8),doubleToFloat(0.2),doubleToFloat(1),doubleToFloat(0.7),doubleToFloat(0.95),doubleToFloat(1),doubleToFloat(0.5),doubleToFloat(0.8),doubleToFloat(0),doubleToFloat(0.5),doubleToFloat(-0.3),doubleToFloat(0),doubleToFloat(-0.7),doubleToFloat(-0.5),doubleToFloat(-0.3),doubleToFloat(-0.8),doubleToFloat(0),doubleToFloat(-1),doubleToFloat(0.5),doubleToFloat(-0.7),doubleToFloat(0.95),doubleToFloat(-0.2),doubleToFloat(1),doubleToFloat(0),doubleToFloat(0.8)], Java.type("float[]"))).setScale(Java.to([doubleToFloat(0.01),doubleToFloat(0.01),doubleToFloat(0.8),doubleToFloat(0.8),doubleToFloat(1),doubleToFloat(1),doubleToFloat(0.8),doubleToFloat(0.8),doubleToFloat(0.01),doubleToFloat(0.01)], Java.type("float[]"))).setSolid(false).setSpine(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0.1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0.5),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0.9),doubleToFloat(0),doubleToFloat(0),doubleToFloat(1),doubleToFloat(0)], Java.type("float[]"))))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([doubleToFloat(0.8),doubleToFloat(0.3),doubleToFloat(0.3)], Java.type("float[]"))))))))      ;
    X3D0.toFileX3D("../data/ExtrusionHeart.new.graal.x3d");
    X3D0.toFileJSON("../data/ExtrusionHeart.new.graal.json");
