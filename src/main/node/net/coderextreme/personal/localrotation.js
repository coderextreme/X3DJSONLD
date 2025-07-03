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
        .addMeta(new autoclass.meta().setName("title").setContent("localrotation.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("generator").setContent("manual"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/localrotation.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("chained boxes")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("localrotation.x3d"))
        .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["ANY","EXAMINE","FLY","LOOKAT"])))
        .addChild(new autoclass.Viewpoint().setDescription("Tour Views").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(20)])))
        .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(-4), java.newFloat(0), java.newFloat(0)]))
          .addChild(new autoclass.Shape()
            .setGeometry(new autoclass.Box()))
          .addChild(new autoclass.Transform().setDEF("TransformTargetParent").setTranslation(java.newArray("float", [java.newFloat(4), java.newFloat(0), java.newFloat(0)]))
            .addChild(new autoclass.Shape()
              .setGeometry(new autoclass.Box()))
            .addChild(new autoclass.Transform().setDEF("TransformTargetChild").setTranslation(java.newArray("float", [java.newFloat(4), java.newFloat(0), java.newFloat(0)]))
              .addChild(new autoclass.Shape()
                .setGeometry(new autoclass.Box())))))
        .addChild(new autoclass.ProximitySensor().setDEF("ActivateSensor").setSize(java.newArray("float", [java.newFloat(1000000), java.newFloat(1000000), java.newFloat(1000000)])))
        .addChild(new autoclass.TimeSensor().setDEF("Clock"))
        .addChild(new autoclass.ROUTE().setFromNode("ActivateSensor").setFromField("enterTime").setToNode("Clock").setToField("set_startTime"))
        .addChild(new autoclass.OrientationInterpolator().setDEF("Rotater").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57)])))
        .addChild(new autoclass.ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("Rotater").setToField("set_fraction"))
        .addChild(new autoclass.ROUTE().setFromNode("Rotater").setFromField("value_changed").setToNode("TransformTargetParent").setToField("set_rotation"))
        .addChild(new autoclass.ROUTE().setFromNode("Rotater").setFromField("value_changed").setToNode("TransformTargetChild").setToField("set_rotation")))      ;
    X3D0.toFileX3D("../personal/localrotation.new.node.x3d");
    X3D0.toFileJSON("../personal/localrotation.new.node.json");
    process.exit(0);
