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
        .addMeta(new autoclass.meta().setName("title").setContent("ThreeInARow.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("generator").setContent("manual"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/ThreeInARow.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("3 boxes")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["EXAMINE"])))
        .addChild(new autoclass.Viewpoint().setDescription("Cubes").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(12)])))
        .addChild(new autoclass.Transform().setDEF("first").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(0)]))
          .addChild(new autoclass.Shape().setDEF("ball")
            .setGeometry(new autoclass.Sphere())
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)]))))))
        .addChild(new autoclass.Transform()
          .addChild(new autoclass.Shape().setUSE("ball")))
        .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-2), java.newFloat(0)]))
          .addChild(new autoclass.Shape().setUSE("ball"))))      ;
    X3D0.toFileX3D("../data/ThreeInARow.new.node.x3d");
    X3D0.toFileJSON("../data/ThreeInARow.new.node.x3dj");
    process.exit(0);
