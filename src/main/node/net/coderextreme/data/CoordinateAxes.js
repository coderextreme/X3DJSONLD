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
        .addMeta((new autoclass.meta()).setName("title").setContent("CoordinateAxes.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman, Byounghyun Yoo"))
        .addMeta((new autoclass.meta()).setName("created").setContent("14 July 2000"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
        .addMeta((new autoclass.meta()).setName("description").setContent("X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame."))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("CoordinateAxes.x3d"))
        .addChild((new autoclass.Collision()).setDEF("DoNotCollideWithVisualizationWidget")
          .addChild((new autoclass.Group())
            .addChild((new autoclass.Group()).setDEF("ArrowGreen")
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance()).setDEF("Green")
                  .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.6), java.newFloat(0.1)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.05), java.newFloat(0.2), java.newFloat(0.05)]))))
                .setGeometry((new autoclass.Cylinder()).setDEF("ArrowCylinder").setTop(false).setRadius(java.newFloat(0.025))))
              .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance()).setUSE("Green"))
                  .setGeometry((new autoclass.Cone()).setDEF("ArrowCone").setHeight(java.newFloat(0.1)).setBottomRadius(java.newFloat(0.05))))))
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(1.08), java.newFloat(0)]))
              .addChild((new autoclass.Billboard())
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance()).setDEF("LABEL_APPEARANCE")
                    .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0.3)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.33), java.newFloat(0.33), java.newFloat(0.1)]))))
                  .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["Y"]))
                    .setFontStyle((new autoclass.FontStyle()).setDEF("LABEL_FONT").setFamily(java.newArray("java.lang.String", ["SANS"])).setSize(java.newFloat(0.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"]))))))))
          .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(-1.57079)]))
            .addChild((new autoclass.Group())
              .addChild((new autoclass.Group()).setDEF("ArrowRed")
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance()).setDEF("Red")
                    .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.7), java.newFloat(0.1), java.newFloat(0.1)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.33), java.newFloat(0), java.newFloat(0)]))))
                  .setGeometry((new autoclass.Cylinder()).setUSE("ArrowCylinder")))
                .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance()).setUSE("Red"))
                    .setGeometry((new autoclass.Cone()).setUSE("ArrowCone")))))
              .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0.072), java.newFloat(1.1), java.newFloat(0)])).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.57079)]))
                .addChild((new autoclass.Billboard())
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance()).setUSE("LABEL_APPEARANCE"))
                    .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["X"]))
                      .setFontStyle((new autoclass.FontStyle()).setUSE("LABEL_FONT"))))))))
          .addChild((new autoclass.Transform()).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57079)]))
            .addChild((new autoclass.Group())
              .addChild((new autoclass.Group()).setDEF("ArrowBlue")
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance()).setDEF("Blue")
                    .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.3), java.newFloat(0.3), java.newFloat(1)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.33)]))))
                  .setGeometry((new autoclass.Cylinder()).setUSE("ArrowCylinder")))
                .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance()).setUSE("Blue"))
                    .setGeometry((new autoclass.Cone()).setUSE("ArrowCone")))))
              .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(1.1), java.newFloat(0.072)])).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57079)]))
                .addChild((new autoclass.Billboard())
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance()).setUSE("LABEL_APPEARANCE"))
                    .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["Z"]))
                      .setFontStyle((new autoclass.FontStyle()).setUSE("LABEL_FONT"))))))))))      ;
    X3D0.toFileX3D("../data/CoordinateAxes.new.node.x3d");
    process.exit(0);
