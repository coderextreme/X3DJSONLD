load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("ExtrusionHeart.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Simple extrusion of a Valentine heart."))
        .addMeta(new metaObject().setName("creator").setContent("Class participants in course Introduction to VRML/X3D."))
        .addMeta(new metaObject().setName("created").setContent("14 February 2001"))
        .addMeta(new metaObject().setName("modified").setContent("27 November 2015"))
        .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setDescription("Extrusion Heart").setOrientation(Java.to([1,0,0,1.57], Java.type("float[]"))).setPosition(Java.to([0,-4,0], Java.type("float[]"))))
        .addChild(new TransformObject().setTranslation(Java.to([0,-0.5,0], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setGeometry(new ExtrusionObject().setCreaseAngle(3.14159).setCrossSection(Java.to([0,0.8,0.2,1,0.7,0.95,1,0.5,0.8,0,0.5,-0.3,0,-0.7,-0.5,-0.3,-0.8,0,-1,0.5,-0.7,0.95,-0.2,1,0,0.8], Java.type("float[]"))).setScale(Java.to([0.01,0.01,0.8,0.8,1,1,0.8,0.8,0.01,0.01], Java.type("float[]"))).setSolid(false).setSpine(Java.to([0,0,0,0,0.1,0,0,0.5,0,0,0.9,0,0,1,0], Java.type("float[]"))))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0.8,0.3,0.3], Java.type("float[]"))))))))      ;
    X3D0.toFileX3D("../data/ExtrusionHeart.new.x3d");
