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
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("qq3.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("translator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("11 Jan 2015"))
        .addMeta(new meta().setName("modified").setContent("05 May 2017"))
        .addMeta(new meta().setName("description").setContent("12 extrusions"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/x3d/qq3.x3d"))
        .addMeta(new meta().setName("generator").setContent("manual")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("Process")
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addComments(new CommentsBlock("left"))
              .addChild(new Transform().setScale(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]")))
                .addChild(new Shape().setDEF("ShapeLeftDown")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0.7,1,0]), Java.type("float[]")))))
                  .setGeometry(new Extrusion().setSpine(Java.to(doubleToFloat([-2.5,0,0,-2,0,0,-1.5,0,0]), Java.type("float[]"))).setCreaseAngle(0.785).setCrossSection(Java.to(doubleToFloat([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]), Java.type("float[]"))))))
              .addComments(new CommentsBlock("right"))
              .addChild(new Transform().setScale(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]")))
                .addChild(new Shape().setDEF("ShapeUpRight")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0.7,1]), Java.type("float[]")))))
                  .setGeometry(new Extrusion().setSpine(Java.to(doubleToFloat([1.5,0,0,2,0,0,2.5,0,0]), Java.type("float[]"))).setCreaseAngle(0.785).setCrossSection(Java.to(doubleToFloat([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0]), Java.type("float[]"))))))
              .addComments(new CommentsBlock("up"))
              .addChild(new Transform().setScale(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]")))
                .addChild(new Shape().setUSE("ShapeUpRight")))
              .addComments(new CommentsBlock("down"))
              .addChild(new Transform().setScale(Java.to(doubleToFloat([0.5,0.5,0.5]), Java.type("float[]")))
                .addChild(new Shape().setUSE("ShapeLeftDown"))))))
        .addChild(new Viewpoint().setDescription("Process pipes").setOrientation(Java.to(doubleToFloat([1,0,0,-0.4]), Java.type("float[]"))).setPosition(Java.to(doubleToFloat([0,5,12]), Java.type("float[]"))))
        .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,-2.5,0]), Java.type("float[]")))
          .addChild(ProtoInstance0 = new ProtoInstance().setName("Process")))
        .addChild(new Transform()
          .addChild(ProtoInstance1 = new ProtoInstance().setName("Process")))
        .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,2.5,0]), Java.type("float[]")))
          .addChild(ProtoInstance2 = new ProtoInstance().setName("Process"))))      ;
    X3D0.toFileX3D("../data/qq3.new.graal.x3d");
    X3D0.toFileJSON("../data/qq3.new.graal.json");
