load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Interchange").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ifscube.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/src/main/data/ifscube.x3d"))
        .addMeta(new meta().setName("description").setContent("Template for an Indexed Face Set"))
        .addMeta(new meta().setName("creator").setContent("John Carlson")))
      .setScene(new Scene()
        .addChild(new Group()
          .addChild(new Shape()
            .setGeometry(new IndexedFaceSet().setDEF("IndexedFaceSet").setCreaseAngle(1.57).setNormalPerVertex(false).setColorIndex(Java.to([0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1], Java.type("int[]"))).setNormalIndex(Java.to([0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1], Java.type("int[]"))).setCoordIndex(Java.to([0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1], Java.type("int[]")))
              .setColor(new Color().setColor(Java.to([0,1,0], Java.type("double[]"))))
              .setNormal(new Normal().setVector(Java.to([1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1], Java.type("double[]"))))
              .setCoord(new Coordinate().setPoint(Java.to([0,0,1,0,1,1,1,1,1,1,0,1], Java.type("double[]"))))))))      ;
    X3D0.toFileJSON("../data/ifscube.new.graal.json");