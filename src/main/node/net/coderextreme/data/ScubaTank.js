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
        .addMeta(new autoclass.meta().setName("title").setContent("ScubaTank.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Scuba gear used by Nancy Diving example."))
        .addMeta(new autoclass.meta().setName("creator").setContent("Etsuko Lippi"))
        .addMeta(new autoclass.meta().setName("created").setContent("24 January 2001"))
        .addMeta(new autoclass.meta().setName("modified").setContent("23 May 2020"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new autoclass.meta().setName("license").setContent("../license.html")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("ScubaTank.x3d"))
        .addChild(new autoclass.Transform().setDEF("ScubaTank")
          .addChild(new autoclass.Transform()
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDEF("tank").setAmbientIntensity(java.newFloat(0.3)).setDiffuseColor(java.newArray("float", [java.newFloat(0.3), java.newFloat(0.3), java.newFloat(0.5)])).setShininess(java.newFloat(0.1)).setSpecularColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.7), java.newFloat(0.8)]))))
              .setGeometry(new autoclass.Cylinder().setHeight(java.newFloat(0.7)).setRadius(java.newFloat(0.1)))))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.35), java.newFloat(0)]))
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setUSE("tank")))
              .setGeometry(new autoclass.Sphere().setRadius(java.newFloat(0.098)))))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-0.35), java.newFloat(0)]))
            .addChild(new autoclass.Shape().setDEF("tankBottom")
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setDEF("black").setAmbientIntensity(java.newFloat(0.3)).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))))
              .setGeometry(new autoclass.Cylinder().setHeight(java.newFloat(0.06)).setRadius(java.newFloat(0.115)))))
          .addChild(new autoclass.Group().setDEF("tankNozzle")
            .addChild(new autoclass.Transform()
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.45), java.newFloat(0)]))
                .addChild(new autoclass.Shape().setDEF("pressure")
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setDEF("pressureColor").setAmbientIntensity(java.newFloat(0.4)).setDiffuseColor(java.newArray("float", [java.newFloat(0.91), java.newFloat(0.91), java.newFloat(0.91)])).setShininess(java.newFloat(0.16)).setSpecularColor(java.newArray("float", [java.newFloat(0.91), java.newFloat(0.9), java.newFloat(0.91)]))))
                  .setGeometry(new autoclass.Cylinder().setHeight(java.newFloat(0.1)).setRadius(java.newFloat(0.015)))))
              .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(0)]))
                .addChild(new autoclass.Shape().setDEF("pressureTop")
                  .setAppearance(new autoclass.Appearance()
                    .setMaterial(new autoclass.Material().setUSE("black")))
                  .setGeometry(new autoclass.Cylinder().setHeight(java.newFloat(0.02)).setRadius(java.newFloat(0.025)))))
              .addChild(new autoclass.Transform().setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57)])).setTranslation(java.newArray("float", [java.newFloat(-0.028), java.newFloat(0.462), java.newFloat(0)]))
                .addChild(new autoclass.Transform()
                  .addChild(new autoclass.Shape().setDEF("connectorToRegulator")
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setUSE("pressureColor")))
                    .setGeometry(new autoclass.Cylinder().setHeight(java.newFloat(0.03)).setRadius(java.newFloat(0.01)))))
                .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.02), java.newFloat(0)]))
                  .addChild(new autoclass.Shape().setDEF("connectorToRegulatorTop")
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material().setUSE("black")))
                    .setGeometry(new autoclass.Cylinder().setHeight(java.newFloat(0.02)).setRadius(java.newFloat(0.02))))))))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(0.2), java.newFloat(0)]))
            .addChild(new autoclass.Shape().setDEF("tankHoldBelt")
              .setAppearance(new autoclass.Appearance()
                .setMaterial(new autoclass.Material().setUSE("black")))
              .setGeometry(new autoclass.Cylinder().setHeight(java.newFloat(0.1)).setRadius(java.newFloat(0.115))))))
        .addChild(new autoclass.Background().setSkyColor(java.newArray("float", [java.newFloat(0.6), java.newFloat(0.6), java.newFloat(0.6)]))))      ;
    X3D0.toFileX3D("../data/ScubaTank.new.node.x3d");
    X3D0.toFileJSON("../data/ScubaTank.new.node.json");
    process.exit(0);
