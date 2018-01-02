load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Interchange").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("template.json"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/template.json"))
        .addMeta(new metaObject().setName("description").setContent("Template for an Indexed Face Set"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("created").setContent("4 April 2017")))
      .setScene(new SceneObject()
        .addChild(new GroupObject()
          .addChild(new ShapeObject()
            .setGeometry(new IndexedFaceSetObject().setCreaseAngle(1.57).setDEF("IndexedFaceSet").setCoordIndex(Java.to([0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1], Java.type("int[]"))).setNormalIndex(Java.to([0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1], Java.type("int[]"))).setNormalPerVertex(false).setColorIndex(Java.to([0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1], Java.type("int[]")))
              .setCoord(new CoordinateObject().setPoint(Java.to([0,0,1,0,1,1,1,1,1,1,0,1], Java.type("float[]"))))
              .setNormal(new NormalObject().setVector(Java.to([1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1], Java.type("float[]"))))
              .setColor(new ColorObject().setColor(Java.to([0,1,0], Java.type("float[]"))))))))      ;
    X3D0.toFileX3D("../data/ifscube.new.x3d");
