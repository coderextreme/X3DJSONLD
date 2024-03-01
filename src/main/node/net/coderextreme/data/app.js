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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("app.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Carlson, I"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Carlson, II"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Carlson, III")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))
            .setGeometry((new autoclass.Box()))))
        .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(7), java.newFloat(8), java.newFloat(9), java.newFloat(3.14)])).setScale(java.newArray("float", [java.newFloat(4), java.newFloat(5), java.newFloat(6)])).setTranslation(java.newArray("float", [java.newFloat(1), java.newFloat(2), java.newFloat(3)]))))      ;
    X3D0.toFileX3D("../data/app.new.node.x3d");
    X3D0.toFileJSON("../data/app.new.node.json");
    process.exit(0);
