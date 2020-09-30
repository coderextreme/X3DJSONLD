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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addComponent((new autoclass.component()).setName("Scripting").setLevel(1))
        .addMeta((new autoclass.meta()).setName("title").setContent("MyBounce.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("description").setContent("3 prismatic spheres"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/SFVec3f.x3d")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.NavigationInfo()))
        .addChild((new autoclass.Transform()).setDEF("transform").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild((new autoclass.Shape()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))))
            .setGeometry((new autoclass.Sphere()))))
        .addChild((new autoclass.TimeSensor()).setDEF("TourTime").setCycleInterval(0.15).setLoop(true))
        .addChild((new autoclass.ROUTE()).setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce2").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("Bounce2").setFromField("translation_changed").setToNode("transform").setToField("set_translation")))      ;
    X3D0.toFileX3D("../data/MyBounce.new.x3d");
