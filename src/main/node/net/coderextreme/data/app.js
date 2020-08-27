var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
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
        .addMeta((new autoclass.meta()).setName("John W").setContent("Carlson, I"))
        .addMeta((new autoclass.meta()).setName("John A").setContent("Carlson, II"))
        .addMeta((new autoclass.meta()).setName("John R").setContent("Carlson, III")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.Group()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)])).setVisible(true)
          .addChild((new autoclass.Shape()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)])).setVisible(true)
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))
            .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(2), java.newFloat(2), java.newFloat(2)])).setSolid(true))))
        .addChild((new autoclass.Transform()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)])).setRotation(java.newArray("float", [java.newFloat(7), java.newFloat(8), java.newFloat(9), java.newFloat(3.14)])).setScale(java.newArray("float", [java.newFloat(4), java.newFloat(5), java.newFloat(6)])).setTranslation(java.newArray("float", [java.newFloat(1), java.newFloat(2), java.newFloat(3)])).setVisible(true)))      ;
    X3D0.toFileX3D("../data/app.new.x3d");
