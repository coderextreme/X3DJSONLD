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
        .addMeta(new autoclass.meta().setName("title").setContent("AllenBox.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("Allen Box"))
        .addMeta(new autoclass.meta().setName("created").setContent("8 July 2025"))
        .addMeta(new autoclass.meta().setName("license").setContent("../license.html")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("AllenBox.x3d"))
        .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["EXAMINE"])).setAvatarSize(java.newArray("float", [java.newFloat(0.15), java.newFloat(1.53), java.newFloat(0.75)])).setSpeed(java.newFloat(0.5)))
        .addChild(new autoclass.Transform().setDEF("Floor").setScale(java.newArray("float", [java.newFloat(1), java.newFloat(0.0125), java.newFloat(1)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-0.0125), java.newFloat(0)]))
          .addChild(new autoclass.Shape()
            .setGeometry(new autoclass.Box())
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material())))))      ;
    X3D0.toFileX3D("../data/AllenBox.new.node.x3d");
    X3D0.toFileJSON("../data/AllenBox.new.node.json");
    process.exit(0);
