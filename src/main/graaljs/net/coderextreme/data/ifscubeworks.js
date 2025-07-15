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
      var X3D0 =  new X3D().setProfile("Interchange").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ifscubeworks.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d"))
        .addMeta(new meta().setName("description").setContent("Template for an Indexed Face Set"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("4 April 2017"))
        .addMeta(new meta().setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("ifscubeworks.x3d"))
        .addChild(new Group()
          .addChild(new Shape()
            .setGeometry(new IndexedFaceSet().setDEF("IndexedFaceSet").setCoordIndex(Java.to([0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1], Java.type("int[]"))).setNormalIndex(Java.to([0,0,1,2,3,4,5], Java.type("int[]"))).setNormalPerVertex(false).setColorIndex(Java.to([0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1], Java.type("int[]")))
              .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([0,0,1,0,1,1,1,1,1,1,0,1]), Java.type("float[]"))))
              .setNormal(new Normal().setVector(Java.to(doubleToFloat([1,0,0,-1,0,0,0,1,0,0,0,-1,0,-1,0,0,0,1]), Java.type("float[]"))))
              .setColor(new Color().setColor(Java.to(doubleToFloat([0,1,0]), Java.type("float[]"))))))))      ;
    X3D0.toFileX3D("../data/ifscubeworks.new.graal.x3d");
    X3D0.toFileJSON("../data/ifscubeworks.new.graal.json");
