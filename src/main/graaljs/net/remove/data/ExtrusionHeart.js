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
        .addMeta(new meta().setName("title").setContent("ExtrusionHeart.x3d"))
        .addMeta(new meta().setName("description").setContent("Simple extrusion of a Valentine heart."))
        .addMeta(new meta().setName("creator").setContent("Class participants in course Introduction to VRML/X3D."))
        .addMeta(new meta().setName("created").setContent("14 February 2001"))
        .addMeta(new meta().setName("modified").setContent("27 November 2015"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDescription("Extrusion Heart").setOrientation(Java.to(doubleToFloat([1,0,0,1.57]), Java.type("float[]"))).setPosition(Java.to(doubleToFloat([0,-4,0]), Java.type("float[]"))))
        .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,-0.5,0]), Java.type("float[]")))
          .addChild(new Shape()
            .setGeometry(new Extrusion().setCreaseAngle(3.14159).setCrossSection(Java.to(doubleToFloat([0,0.8,0.2,1,0.7,0.95,1,0.5,0.8,0,0.5,-0.3,0,-0.7,-0.5,-0.3,-0.8,0,-1,0.5,-0.7,0.95,-0.2,1,0,0.8]), Java.type("float[]"))).setScale(Java.to(doubleToFloat([0.01,0.01,0.8,0.8,1,1,0.8,0.8,0.01,0.01]), Java.type("float[]"))).setSolid(false).setSpine(Java.to(doubleToFloat([0,0,0,0,0.1,0,0,0.5,0,0,0.9,0,0,1,0]), Java.type("float[]"))))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.8,0.3,0.3]), Java.type("float[]"))))))))      ;
    X3D0.toFileX3D("../data/ExtrusionHeart.new.graal.x3d");
    X3D0.toFileJSON("../data/ExtrusionHeart.new.graal.json");
