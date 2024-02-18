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
      var X3D0 =  new X3D().setProfile("Interchange").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ifscube.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/src/main/data/ifscube.x3d"))
        .addMeta(new meta().setName("description").setContent("Template for an Indexed Face Set"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("4 April 2017")))
      .setScene(new Scene()
        .addChild(new Group()
          .addChild(new Shape()
            .setGeometry(new IndexedFaceSet().setCreaseAngle(1.57).setDEF("IndexedFaceSet").setCoordIndex(Java.to([0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1], Java.type("int[]"))).setNormalIndex(Java.to([0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1], Java.type("int[]"))).setNormalPerVertex(false).setColorIndex(Java.to([0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1], Java.type("int[]")))
              .setCoord(new Coordinate().setPoint(Java.to([doubleToFloat(0),doubleToFloat(0),doubleToFloat(1),doubleToFloat(0),doubleToFloat(1),doubleToFloat(1),doubleToFloat(1),doubleToFloat(1),doubleToFloat(1),doubleToFloat(1),doubleToFloat(0),doubleToFloat(1)], Java.type("float[]"))))
              .setNormal(new Normal().setVector(Java.to([doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(-1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0),doubleToFloat(1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0),doubleToFloat(-1),doubleToFloat(0),doubleToFloat(-1),doubleToFloat(0),doubleToFloat(0),doubleToFloat(0),doubleToFloat(1)], Java.type("float[]"))))
              .setColor(new Color().setColor(Java.to([doubleToFloat(0),doubleToFloat(1),doubleToFloat(0)], Java.type("float[]"))))))))      ;
    X3D0.toFileX3D("../data/ifscube.new.graal.x3d");
    X3D0.toFileJSON("../data/ifscube.new.graal.json");
