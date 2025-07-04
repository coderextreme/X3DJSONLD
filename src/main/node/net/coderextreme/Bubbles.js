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
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange").setVersion("4.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("Bubbles.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Bubble animation used by Nancy Diving example."))
        .addMeta(new autoclass.meta().setName("creator").setContent("Etsuko Lippi"))
        .addMeta(new autoclass.meta().setName("created").setContent("24 January 2001"))
        .addMeta(new autoclass.meta().setName("modified").setContent("23 May 2020"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new autoclass.meta().setName("license").setContent("../license.html")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("Bubbles.x3d"))
        .addChild(new autoclass.Transform().setDEF("Bubbles")
          .addChild(new autoclass.Group().setDEF("Bubble")
            .addChild(new autoclass.TimeSensor().setDEF("BubbleClock").setCycleInterval(6).setLoop(true))
            .addChild(new autoclass.PositionInterpolator().setDEF("BubblePath1").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(0.8), java.newFloat(0.9), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.75), java.newFloat(0.75), java.newFloat(0.75), java.newFloat(0.86), java.newFloat(0.86), java.newFloat(0.86), java.newFloat(0.99), java.newFloat(0.998), java.newFloat(0.9876), java.newFloat(1.272), java.newFloat(1.9044), java.newFloat(0.9509)])))
            .addChild(new autoclass.PositionInterpolator().setDEF("BubblePath2").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.3), java.newFloat(0.64), java.newFloat(0.85), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.2), java.newFloat(0.4), java.newFloat(0.25), java.newFloat(0.3), java.newFloat(0.5), java.newFloat(0.46), java.newFloat(0.75), java.newFloat(0.5), java.newFloat(0.575), java.newFloat(0.038483478), java.newFloat(1.989), java.newFloat(1.098373)])))
            .addChild(new autoclass.PositionInterpolator().setDEF("BubblePath3").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.1), java.newFloat(0.45), java.newFloat(0.7), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.01), java.newFloat(0.25), java.newFloat(0.35), java.newFloat(0.0045), java.newFloat(0.55), java.newFloat(0.6), java.newFloat(0.0055), java.newFloat(0.66), java.newFloat(0.665), java.newFloat(0.00655), java.newFloat(1.555), java.newFloat(1.09043), java.newFloat(0.005734)])))
            .addChild(new autoclass.PositionInterpolator().setDEF("BubblePath4").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(0.6), java.newFloat(0.8), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.005), java.newFloat(0.6), java.newFloat(0.6), java.newFloat(0.006), java.newFloat(0.75), java.newFloat(0.75), java.newFloat(0.0075), java.newFloat(1.948594), java.newFloat(1.3983), java.newFloat(0.009009349)])))
            .addChild(new autoclass.PositionInterpolator().setDEF("BubblePath5").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.25), java.newFloat(0.35), java.newFloat(0.65), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.5), java.newFloat(0.5), java.newFloat(0.005), java.newFloat(0.6), java.newFloat(0.6), java.newFloat(0.006), java.newFloat(0.75), java.newFloat(0.75), java.newFloat(0.0075), java.newFloat(1.84444), java.newFloat(1.22222), java.newFloat(0.1)])))
            .addChild(new autoclass.PositionInterpolator().setDEF("BubblePath6").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.15), java.newFloat(0.22235), java.newFloat(0.55565), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.235), java.newFloat(0.3455), java.newFloat(0.0055), java.newFloat(0.356), java.newFloat(0.676), java.newFloat(0.00456), java.newFloat(0.5675), java.newFloat(0.75), java.newFloat(0.0074565), java.newFloat(1.098), java.newFloat(1.0343), java.newFloat(0.14)])))
            .addChild(new autoclass.PositionInterpolator().setDEF("BubblePath7").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.2425), java.newFloat(0.4535), java.newFloat(0.6775), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.12345), java.newFloat(0.2225), java.newFloat(0.00335), java.newFloat(0.786), java.newFloat(0.456), java.newFloat(0.00666), java.newFloat(0.74555), java.newFloat(0.7335), java.newFloat(0.00234575), java.newFloat(0.08787), java.newFloat(1.022), java.newFloat(0.12)])))
            .addChild(new autoclass.PositionInterpolator().setDEF("BubblePath8").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.1125), java.newFloat(0.5535), java.newFloat(0.97865), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.1235), java.newFloat(0.05), java.newFloat(0.00125), java.newFloat(0.5666), java.newFloat(0.4346), java.newFloat(0.005556), java.newFloat(0.8975), java.newFloat(0.34575), java.newFloat(0.0098775), java.newFloat(1.8787), java.newFloat(1.686), java.newFloat(0.86)])))
            .addChild(new autoclass.PositionInterpolator().setDEF("BubblePath9").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.0025), java.newFloat(0.035), java.newFloat(0.65), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.522), java.newFloat(0.5445), java.newFloat(0.0057), java.newFloat(0.6543), java.newFloat(0.226), java.newFloat(0.0055), java.newFloat(0.45575), java.newFloat(0.4375), java.newFloat(0.0067), java.newFloat(1.8787), java.newFloat(2), java.newFloat(0.1545)])))
            .addChild(new autoclass.PositionInterpolator().setDEF("BubblePath10").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.00025), java.newFloat(0.035), java.newFloat(0.6895), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0.8765), java.newFloat(0.445), java.newFloat(0.00335), java.newFloat(0.3336), java.newFloat(0.4446), java.newFloat(0.005556), java.newFloat(0.765), java.newFloat(0.75), java.newFloat(0.0075), java.newFloat(1), java.newFloat(1), java.newFloat(0.1)])))
            .addChild(new autoclass.Transform()
              .addChild(new autoclass.Transform().setDEF("bubble1")
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setTransparency(java.newFloat(0.8))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.025)))))
              .addChild(new autoclass.Transform().setDEF("bubble2")
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setTransparency(java.newFloat(0.8))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.055)))))
              .addChild(new autoclass.Transform().setDEF("bubble3")
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setTransparency(java.newFloat(0.8))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.065)))))
              .addChild(new autoclass.Transform().setDEF("bubble4")
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setTransparency(java.newFloat(0.8))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.015)))))
              .addChild(new autoclass.Transform().setDEF("bubble5")
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setTransparency(java.newFloat(0.8))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.075)))))
              .addChild(new autoclass.Transform().setDEF("bubble6")
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setTransparency(java.newFloat(0.8))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.005)))))
              .addChild(new autoclass.Transform().setDEF("bubble7")
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setTransparency(java.newFloat(0.8))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.035)))))
              .addChild(new autoclass.Transform().setDEF("bubble8")
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setTransparency(java.newFloat(0.8))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.05)))))
              .addChild(new autoclass.Transform().setDEF("bubble9")
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setTransparency(java.newFloat(0.8))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.045)))))
              .addChild(new autoclass.Transform().setDEF("bubble10")
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])).setTransparency(java.newFloat(0.8))))
                  .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.035)))))
              .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath1"))
              .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath2"))
              .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath3"))
              .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath4"))
              .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath5"))
              .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath6"))
              .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath7"))
              .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath8"))
              .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath9"))
              .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath10"))
              .addChild(new autoclass.ROUTE().setFromField("value_changed").setFromNode("BubblePath1").setToField("set_translation").setToNode("bubble1"))
              .addChild(new autoclass.ROUTE().setFromField("value_changed").setFromNode("BubblePath2").setToField("set_translation").setToNode("bubble2"))
              .addChild(new autoclass.ROUTE().setFromField("value_changed").setFromNode("BubblePath3").setToField("set_translation").setToNode("bubble3"))
              .addChild(new autoclass.ROUTE().setFromField("value_changed").setFromNode("BubblePath4").setToField("set_translation").setToNode("bubble4"))
              .addChild(new autoclass.ROUTE().setFromField("value_changed").setFromNode("BubblePath5").setToField("set_translation").setToNode("bubble5"))
              .addChild(new autoclass.ROUTE().setFromField("value_changed").setFromNode("BubblePath6").setToField("set_translation").setToNode("bubble6"))
              .addChild(new autoclass.ROUTE().setFromField("value_changed").setFromNode("BubblePath7").setToField("set_translation").setToNode("bubble7"))
              .addChild(new autoclass.ROUTE().setFromField("value_changed").setFromNode("BubblePath8").setToField("set_translation").setToNode("bubble8"))
              .addChild(new autoclass.ROUTE().setFromField("value_changed").setFromNode("BubblePath9").setToField("set_translation").setToNode("bubble9"))
              .addChild(new autoclass.ROUTE().setFromField("value_changed").setFromNode("BubblePath10").setToField("set_translation").setToNode("bubble10")))))
        .addChild(new autoclass.Background().setSkyColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0.6)]))))      ;
    X3D0.toFileX3D(".././Bubbles.new.node.x3d");
    X3D0.toFileJSON(".././Bubbles.new.node.json");
    process.exit(0);
