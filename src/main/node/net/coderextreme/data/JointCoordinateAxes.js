import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("converter").setContent("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"))
        .addMeta(new autoclass.meta().setName("converted").setContent("Mon, 31 Jul 2023 03:48:04 GMT")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.NavigationInfo().setHeadlight(false))
        .addChild(new autoclass.Group()
          .addChild(new autoclass.Group().setDEF("ARROW")
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance().setDEF("ARROW_APPEARANCE")
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0.3), java.newFloat(0.3), java.newFloat(1)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.3), java.newFloat(0.3), java.newFloat(0.33)]))))
              .setGeometry(new autoclass.Cylinder().setTop(false).setBottom(false).setRadius(java.newFloat(0.025))))
            .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
              .addChild(new autoclass.Shape().setDEF("ARROW_POINTER")
                .setAppearance(new autoclass.Appearance().setUSE("ARROW_APPEARANCE"))
                .setGeometry(new autoclass.Cone().setHeight(java.newFloat(0.1)).setBottomRadius(java.newFloat(0.05)))))
            .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-1), java.newFloat(0)])).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(3.1416)]))
              .addChild(new autoclass.Shape().setUSE("ARROW_POINTER"))))
          .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(1.08), java.newFloat(0)]))
            .addChild(new autoclass.Billboard()
              .addChild(new autoclass.Shape()
                .setAppearance(new autoclass.Appearance().setDEF("LABEL_APPEARANCE")
                  .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0.3)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.33), java.newFloat(0.33), java.newFloat(0.1)]))))
                .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["Y"]))
                  .setFontStyle(new autoclass.FontStyle().setDEF("LABEL_FONT").setFamily(java.newArray("java.lang.String", ["SANS"])).setSize(java.newFloat(0.2)).setJustify(java.newArray("java.lang.String", ["MIDDLE"]))))))))
        .addChild(new autoclass.Transform().setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(-1.5708)]))
          .addChild(new autoclass.Group()
            .addChild(new autoclass.Group().setUSE("ARROW"))
            .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0.072), java.newFloat(1.1), java.newFloat(0)])).setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(1.5708)]))
              .addChild(new autoclass.Billboard()
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance().setUSE("LABEL_APPEARANCE"))
                  .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["X"]))
                    .setFontStyle(new autoclass.FontStyle().setUSE("LABEL_FONT"))))))))
        .addChild(new autoclass.Transform().setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.5708)]))
          .addChild(new autoclass.Group()
            .addChild(new autoclass.Group().setUSE("ARROW"))
            .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(1.1), java.newFloat(0.072)])).setRotation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.5708)]))
              .addChild(new autoclass.Billboard()
                .addChild(new autoclass.Shape()
                  .setAppearance(new autoclass.Appearance().setUSE("LABEL_APPEARANCE"))
                  .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["Z"]))
                    .setFontStyle(new autoclass.FontStyle().setUSE("LABEL_FONT")))))))))      ;
    X3D0.toFileX3D("../data/JointCoordinateAxes.new.node.x3d");
    X3D0.toFileJSON("../data/JointCoordinateAxes.new.node.json");
    process.exit(0);
