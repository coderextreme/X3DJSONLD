load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
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
        .addMeta(new meta().setName("description").setContent("12 extrusions to test prototype expander"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/x3d/qq3.x3d")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("Process")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setScale(Java.to([0.5,0.5,0.5], Java.type("double[]")))
                .addChild(new Shape().setDEF("ShapeLeftDown")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to([0.7,1,0], Java.type("double[]")))))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(Java.to([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0], Java.type("double[]"))).setSpine(Java.to([-2.5,0,0,-1.5,0,0], Java.type("double[]"))))))
              .addChild(new Transform().setScale(Java.to([0.5,0.5,0.5], Java.type("double[]")))
                .addChild(new Shape().setDEF("ShapeUpRight")
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(Java.to([0,0.7,1], Java.type("double[]")))))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(Java.to([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0], Java.type("double[]"))).setSpine(Java.to([1.5,0,0,2.5,0,0], Java.type("double[]"))))))
              .addChild(new Transform().setScale(Java.to([0.5,0.5,0.5], Java.type("double[]")))
                .addChild(new Shape().setUSE("ShapeUpRight")))
              .addChild(new Transform().setScale(Java.to([0.5,0.5,0.5], Java.type("double[]")))
                .addChild(new Shape().setUSE("ShapeLeftDown"))))))
        .addChild(new Viewpoint().setDescription("Process pipes").setPosition(Java.to([0,5,12], Java.type("double[]"))).setOrientation(Java.to([1,0,0,-0.4], Java.type("double[]"))))
        .addChild(new Transform().setTranslation(Java.to([0,-2.5,0], Java.type("double[]")))
          .addChild(ProtoInstance0 = new ProtoInstance().setName("Process")))
        .addChild(new Transform()
          .addChild(ProtoInstance1 = new ProtoInstance().setName("Process")))
        .addChild(new Transform().setTranslation(Java.to([0,2.5,0], Java.type("double[]")))
          .addChild(ProtoInstance2 = new ProtoInstance().setName("Process"))))      ;
    X3D0.toFileJSON("../data/qq3.new.graal.json");