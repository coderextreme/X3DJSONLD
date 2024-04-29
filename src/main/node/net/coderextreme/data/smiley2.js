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
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange")
      .setHead(new autoclass.head())
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.Transform().setScale(java.newArray("float", [java.newFloat(10), java.newFloat(10), java.newFloat(1)])).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(3.14)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.8), java.newFloat(0.5)])))
              .setTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["./face2.jpg"]))))
            .setGeometry(new autoclass.Sphere()))))      ;
    X3D0.toFileX3D("../data/smiley2.new.node.x3d");
    X3D0.toFileJSON("../data/smiley2.new.node.json");
    process.exit(0);
