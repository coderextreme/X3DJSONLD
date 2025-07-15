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
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("JohnJoint.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d"))
        .addMeta(new meta().setName("description").setContent("An attempt at a standard LOA-4 skeleton"))
        .addMeta(new meta().setName("generator").setContent("h6.pl"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("12 January 2023"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Transform()
          .addComments(new CommentsBlock("DEF for markerfor XYZ axes"))
          .addChild(new Shape().setDEF("AxisLinesShape")
            .addComments(new CommentsBlock("RGB lines showing XYZ axes"))
            .setGeometry(new IndexedLineSet().setColorIndex(Java.to([0,1,2], Java.type("int[]"))).setColorPerVertex(false).setCoordIndex(Java.to([0,1,-1,0,2,-1,0,3,-1], Java.type("int[]")))
              .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]), Java.type("float[]"))))
              .setColor(new Color().setColor(Java.to(doubleToFloat([1,0,0,0,0.6,0,0,0,1]), Java.type("float[]")))))))
        .addChild(new Group()
          .addComments(new CommentsBlock("DEFS for markers of skeleton joints, segments, and sites"))
          .addChild(new Transform()
            .addComments(new CommentsBlock("<Transform translation='0 2 0'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>"))
            .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,2.1,0]), Java.type("float[]")))
              .addChild(new Shape().setDEF("HAnimJointShape")
                .setGeometry(new Sphere().setRadius(0.02))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDEF("HAnimJointMaterial").setDiffuseColor(Java.to(doubleToFloat([0,0,0.8]), Java.type("float[]"))).setTransparency(0.3)))))
            .addChild(new Transform().setTranslation(Java.to(doubleToFloat([0,2.05,0]), Java.type("float[]")))
              .addChild(new Shape().setDEF("HAnimSegmentLine")
                .setGeometry(new LineSet().setVertexCount(Java.to([2], Java.type("int[]")))
                  .setColor(new ColorRGBA().setDEF("HAnimSegmentLineColorRGBA").setColor(Java.to(doubleToFloat([1,1,0,1,1,1,0,0.1]), Java.type("float[]"))))
                  .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([-0.05,0,0,0.05,0,0]), Java.type("float[]")))))))
            .addComments(new CommentsBlock("<Transform translation='0 2.1 0'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>"))))
        .addChild(new NavigationInfo().setSpeed(1.5))
        .addChild(new Viewpoint().setDescription("default")))      ;
    X3D0.toFileX3D("../data/JohnJoint.new.graal.x3d");
    X3D0.toFileJSON("../data/JohnJoint.new.graal.json");
