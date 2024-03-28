var java = require('java');
var util = require('util');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addComponent(new autoclass.component().setName("HAnim").setLevel(1))
        .addMeta(new autoclass.meta().setName("title").setContent("JohnJoint.x3d"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("An attempt at a standard LOA-4 skeleton"))
        .addMeta(new autoclass.meta().setName("generator").setContent("h6.pl"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("created").setContent("12 January 2023"))
        .addMeta(new autoclass.meta().setName("license").setContent("../license.html")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.Transform()
          .addComments((new autoclass.CommentsBlock("DEF for markerfor XYZ axes")))
          .addChild(new autoclass.Shape().setDEF("AxisLinesShape")
            .addComments((new autoclass.CommentsBlock("RGB lines showing XYZ axes")))
            .setGeometry(new autoclass.IndexedLineSet().setColorIndex(java.newArray("int", [0,1,2])).setColorPerVertex(false).setCoordIndex(java.newArray("int", [0,1,-1,0,2,-1,0,3,-1]))
              .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.1)])))
              .setColor(new autoclass.Color().setColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.6), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1)]))))))
        .addChild(new autoclass.Group()
          .addComments((new autoclass.CommentsBlock("DEFS for markers of skeleton joints, segments, and sites")))
          .addChild(new autoclass.Transform()
            .addComments((new autoclass.CommentsBlock("<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>")))
            .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2.1), java.newFloat(0)]))
              .addChild(new autoclass.Shape().setDEF("HAnimJointShape")
                .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.02)))
                .setAppearance(new autoclass.Appearance()
                  .setMaterial(new autoclass.Material().setDEF("HAnimJointMaterial").setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.8)])).setTransparency(java.newFloat(0.3))))))
            .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2.05), java.newFloat(0)]))
              .addChild(new autoclass.Shape().setDEF("HAnimSegmentLine")
                .setGeometry(new autoclass.LineSet().setVertexCount(java.newArray("int", [2]))
                  .setColor(new autoclass.ColorRGBA().setDEF("HAnimSegmentLineColorRGBA").setColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(0.1)])))
                  .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(-0.05), java.newFloat(0), java.newFloat(0), java.newFloat(0.05), java.newFloat(0), java.newFloat(0)]))))))
            .addComments((new autoclass.CommentsBlock("<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>")))))
        .addChild(new autoclass.NavigationInfo().setSpeed(java.newFloat(1.5)))
        .addChild(new autoclass.Viewpoint().setDescription("default")))      ;
    X3D0.toFileX3D("../data/JohnJoint.new.node.x3d");
    X3D0.toFileJSON("../data/JohnJoint.new.node.json");
    process.exit(0);
