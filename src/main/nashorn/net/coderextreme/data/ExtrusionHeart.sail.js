load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setContent("ExtrusionHeart.x3d").setName("title"))
        .addMeta(new metaObject().setContent("Simple extrusion of a Valentine heart.").setName("description"))
        .addMeta(new metaObject().setContent("Class participants in course Introduction to VRML/X3D.").setName("creator"))
        .addMeta(new metaObject().setContent("14 February 2001").setName("created"))
        .addMeta(new metaObject().setContent("27 November 2015").setName("modified"))
        .addMeta(new metaObject().setContent("http://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d").setName("identifier"))
        .addMeta(new metaObject().setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta(new metaObject().setContent("../license.html").setName("license")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setDescription("Extrusion Heart").setOrientation(Java.to([1,0,0,1.57], Java.type("float[]"))).setPosition(Java.to([0,-4,0], Java.type("float[]"))))
        .addChild(new TransformObject().setTranslation(Java.to([0,-0.5,0], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setGeometry(new ExtrusionObject().setCreaseAngle(3.14159).setCrossSection(Java.to([0,0.8,0.2,1,0.7,0.95,1,0.5,0.8,0,0.5,-0.3,0,-0.7,-0.5,-0.3,-0.8,0,-1,0.5,-0.7,0.95,-0.2,1,0,0.8], Java.type("float[]"))).setScale(Java.to([0.01,0.01,0.8,0.8,1,1,0.8,0.8,0.01,0.01], Java.type("float[]"))).setSolid(false).setSpine(Java.to([0,0,0,0,0.1,0,0,0.5,0,0,0.9,0,0,1,0], Java.type("float[]"))))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.8,0.3,0.3], Java.type("float[]"))))))))      ;
    X3D0.toFileX3D("../data/ExtrusionHeart.new.x3d");
