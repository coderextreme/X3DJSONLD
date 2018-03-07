load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setContent("qq3.x3d").setName("title"))
        .addMeta(new metaObject().setContent("John Carlson").setName("creator"))
        .addMeta(new metaObject().setContent("John Carlson").setName("translator"))
        .addMeta(new metaObject().setContent("11 Jan 2015").setName("created"))
        .addMeta(new metaObject().setContent("05 May 2017").setName("modified"))
        .addMeta(new metaObject().setContent("12 extrusions to test prototype expander").setName("description"))
        .addMeta(new metaObject().setContent("https://coderextreme.net/x3d/qq3.x3d").setName("identifier"))
        .addMeta(new metaObject().setContent("manual").setName("generator")))
      .setScene(new SceneObject()
        .addChild(new ProtoDeclareObject().setName("Process")
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addComments(new CommentsBlock(' left '))
              .addChild(new TransformObject().setScale(Java.to([0.5,0.5,0.5], Java.type("float[]")))
                .addChild(new ShapeObject().setDEF("ShapeLeftDown")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.7,1,0], Java.type("float[]")))))
                  .setGeometry(new ExtrusionObject().setSpine(Java.to([-2.5,0,0,-1.5,0,0], Java.type("float[]"))).setCreaseAngle(0.785).setCrossSection(Java.to([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0], Java.type("float[]"))))))
              .addComments(new CommentsBlock(' right '))
              .addChild(new TransformObject().setScale(Java.to([0.5,0.5,0.5], Java.type("float[]")))
                .addChild(new ShapeObject().setDEF("ShapeUpRight")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0,0.7,1], Java.type("float[]")))))
                  .setGeometry(new ExtrusionObject().setSpine(Java.to([1.5,0,0,2.5,0,0], Java.type("float[]"))).setCreaseAngle(0.785).setCrossSection(Java.to([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0], Java.type("float[]"))))))
              .addComments(new CommentsBlock(' up '))
              .addChild(new TransformObject().setScale(Java.to([0.5,0.5,0.5], Java.type("float[]")))
                .addChild(new ShapeObject().setUSE("ShapeUpRight")))
              .addComments(new CommentsBlock(' down '))
              .addChild(new TransformObject().setScale(Java.to([0.5,0.5,0.5], Java.type("float[]")))
                .addChild(new ShapeObject().setUSE("ShapeLeftDown"))))))
        .addChild(new ViewpointObject().setDescription("Process pipes").setOrientation(Java.to([1,0,0,-0.4], Java.type("float[]"))).setPosition(Java.to([0,5,12], Java.type("float[]"))))
        .addChild(new TransformObject().setTranslation(Java.to([0,-2.5,0], Java.type("float[]")))
          .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("Process")))
        .addChild(new TransformObject().setTranslation(Java.to([0,0,0], Java.type("float[]")))
          .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("Process")))
        .addChild(new TransformObject().setTranslation(Java.to([0,2.5,0], Java.type("float[]")))
          .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("Process"))))      ;
    X3D0.toFileX3D("../data/qq3.new.x3d");
