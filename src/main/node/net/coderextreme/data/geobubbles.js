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
        .addComponent((new autoclass.component()).setName("Geospatial").setLevel(1))
        .addMeta((new autoclass.meta()).setName("title").setContent("geobubbles.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/geobubbles.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("geo bubbles")))
      .setScene((new autoclass.Scene())
        .addComments((new autoclass.CommentsBlock("Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/")))
        .addComments((new autoclass.CommentsBlock("PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/")))
        .addChild((new autoclass.GeoViewpoint()).setDEF("Tour").setPosition(java.newArray("double", [0,0,4])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setDescription("Tour Views"))
        .addChild((new autoclass.Background()).setBackUrl(java.newArray("java.lang.String", ["../resources/images/BK.png","https://coderextreme.net/X3DJSONLD/images/BK.png"])).setBottomUrl(java.newArray("java.lang.String", ["../resources/images/BT.png","https://coderextreme.net/X3DJSONLD/images/BT.png"])).setFrontUrl(java.newArray("java.lang.String", ["../resources/images/FR.png","https://coderextreme.net/X3DJSONLD/images/FR.png"])).setLeftUrl(java.newArray("java.lang.String", ["../resources/images/LF.png","https://coderextreme.net/X3DJSONLD/images/LF.png"])).setRightUrl(java.newArray("java.lang.String", ["../resources/images/RT.png","https://coderextreme.net/X3DJSONLD/images/RT.png"])).setTopUrl(java.newArray("java.lang.String", ["../resources/images/TP.png","https://coderextreme.net/X3DJSONLD/images/TP.png"])).setSkyColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setTransparency(java.newFloat(0)))
        .addChild((new autoclass.Transform()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild((new autoclass.Shape()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
            .setGeometry((new autoclass.Sphere()))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.7)])).setSpecularColor(java.newArray("float", [java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.5)]))))))
        .addChild((new autoclass.TimeSensor()).setDEF("TourTime").setCycleInterval(5).setLoop(true))
        .addChild((new autoclass.GeoPositionInterpolator()).setDEF("TourPosition").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("double", [0.0015708,0,4,0,0.0015708,4])))
        .addChild((new autoclass.ROUTE()).setFromNode("TourTime").setFromField("cycleTime").setToNode("RandomTourTime").setToField("set_cycle"))
        .addChild((new autoclass.ROUTE()).setFromNode("RandomTourTime").setFromField("position").setToNode("TourPosition").setToField("keyValue"))
        .addChild((new autoclass.ROUTE()).setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("TourPosition").setFromField("geovalue_changed").setToNode("Tour").setToField("set_position")))      ;
    X3D0.toFileX3D("../data/geobubbles.new.x3d");
