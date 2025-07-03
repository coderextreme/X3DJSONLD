load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("IFS.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d"))
        .addMeta(new meta().setName("description").setContent("An attempt at a standard LOA-4 skeleton"))
        .addMeta(new meta().setName("generator").setContent("h2.pl"))
        .addMeta(new meta().setName("modified").setContent("18 Jan 2023"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("9 November 2020"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Group()
          .addComments(new CommentsBlock("DEFS for markers of skeleton joints, segments, and sites"))
          .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,2.1,0]), Java.type("float[]")))
            .addChild(new Shape().setDEF("HAnimSiteShape")
              .setGeometry(new IndexedFaceSet().setDEF("DiamondIFS").setCreaseAngle(0.5).setSolid(false).setCoordIndex(Java.to([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1], Java.type("int[]")))
                .setColor(new ColorRGBA().setDEF("HAnimSiteColorRGBA").setColor(Java.to(doubleToFloat([1,1,0,1,1,1,0,0.1]), Java.type("float[]"))))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]), Java.type("float[]")))))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([1,1,0]), Java.type("float[]"))).setTransparency(0.3))))))
        .addChild(new NavigationInfo().setSpeed(1.5))
        .addChild(new Viewpoint().setDescription("default")))      ;
    X3D0.toFileX3D(".././IFS.new.graal.x3d");
    X3D0.toFileJSON(".././IFS.new.graal.json");
