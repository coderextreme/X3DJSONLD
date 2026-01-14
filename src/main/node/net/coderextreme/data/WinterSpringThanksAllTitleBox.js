import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Interchange").setVersion("4.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("WinterAndSpringThanksAllTitleBox.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Credits for scene."))
        .addMeta(new autoclass.meta().setName("creator").setContent("Carol McDonald"))
        .addMeta(new autoclass.meta().setName("translator").setContent("Joe Williams and Don Brutzman"))
        .addMeta(new autoclass.meta().setName("created").setContent("26 June 2023"))
        .addMeta(new autoclass.meta().setName("modified").setContent("Mon, 15 Sep 2025 05:21:02 GMT"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/Flower.Set.x3d"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringThanksAllTitleBox.x3d")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("WinterAndSpringThanksAllTitleBox.x3d"))
        .addChild(new autoclass.Viewpoint().setDEF("WSThanksAllView").setDescription("Look at Thanks title").setPosition(java.newArray("float", [java.newFloat(10), java.newFloat(11), java.newFloat(-10)])).setOrientation(java.newArray("float", [java.newFloat(-0.15), java.newFloat(0), java.newFloat(0), java.newFloat(0.2)])))
        .addChild(new autoclass.Transform().setDEF("WSThanksAllTitle").setTranslation(java.newArray("float", [java.newFloat(10), java.newFloat(10), java.newFloat(-15)]))
          .addChild(new autoclass.Shape()
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material())
              .setTexture(new autoclass.ImageTexture().setUrl(java.newArray("java.lang.String", ["images/WSThanksR2trimmed.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WSThanksR2trimmed.png"]))))
            .setGeometry(new autoclass.Box().setSize(java.newArray("float", [java.newFloat(4), java.newFloat(3), java.newFloat(0.25)]))))))      ;
    X3D0.toFileX3D("../data/WinterSpringThanksAllTitleBox.new.node.x3d");
    X3D0.toFileJSON("../data/WinterSpringThanksAllTitleBox.new.node.x3dj");
    process.exit(0);
