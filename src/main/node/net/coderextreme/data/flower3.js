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
        .addMeta((new autoclass.meta()).setName("title").setContent("flower3.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("a flower")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.NavigationInfo()))
        .addChild((new autoclass.DirectionalLight()).setDirection(java.newArray("float", [java.newFloat(0), java.newFloat(-0.8), java.newFloat(-0.2)])).setIntensity(java.newFloat(0.5)))
        .addChild((new autoclass.Background()).setSkyColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setTransparency(java.newFloat(0)))
        .addChild((new autoclass.Viewpoint()).setDescription("One mathematical orbital").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(50)])))
        .addChild((new autoclass.Transform()).setDEF("OrbitTransform").setTranslation(java.newArray("float", [java.newFloat(8), java.newFloat(0), java.newFloat(0)])).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild((new autoclass.Shape()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setSpecularColor(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)]))))
            .setGeometry((new autoclass.IndexedFaceSet()).setConvex(false).setDEF("Orbit")
              .setCoord((new autoclass.Coordinate()).setDEF("OrbitCoordinates")))))
        .addChild((new autoclass.TimeSensor()).setDEF("Clock").setCycleInterval(16).setLoop(true))
        .addChild((new autoclass.ROUTE()).setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("coordIndex"))
        .addChild((new autoclass.ROUTE()).setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
        .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction")))      ;
    X3D0.toFileX3D("../data/flower3.new.x3d");
