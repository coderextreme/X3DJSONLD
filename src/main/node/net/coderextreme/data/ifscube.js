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
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("ifscube.x3d"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/src/main/data/ifscube.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Template for an Indexed Face Set"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("created").setContent("4 April 2017")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.IndexedFaceSet()).setCreaseAngle(java.newFloat(1.57)).setDEF("IndexedFaceSet").setCoordIndex(java.newArray("int", [0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1])).setNormalIndex(java.newArray("int", [0,-1,0,-1,1,-1,2,-1,3,-1,4,-1,5,-1])).setNormalPerVertex(false).setColorIndex(java.newArray("int", [0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1]))
              .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(1), java.newFloat(0), java.newFloat(1)])))
              .setNormal((new autoclass.Normal()).setVector(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1)])))
              .setColor((new autoclass.Color()).setColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)])))))))      ;
    X3D0.toFileX3D("../data/ifscube.new.node.x3d");
    process.exit(0);
