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
        .addComponent(new autoclass.component().setName("HAnim").setLevel(1))
        .addMeta(new autoclass.meta().setName("title").setContent("HAnimModelsHandsFeet.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0"))
        .addMeta(new autoclass.meta().setName("creator").setContent("Kwan Hee YOO and Don Brutzman"))
        .addMeta(new autoclass.meta().setName("created").setContent("8 February 2015"))
        .addMeta(new autoclass.meta().setName("modified").setContent("Mon, 15 Sep 2025 05:20:09 GMT"))
        .addMeta(new autoclass.meta().setName("warning").setContent("not yet to scale"))
        .addMeta(new autoclass.meta().setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
        .addMeta(new autoclass.meta().setName("TODO").setContent("how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs?"))
        .addMeta(new autoclass.meta().setName("Image").setContent("HAnimModelsHandsFeet.png"))
        .addMeta(new autoclass.meta().setName("Image").setContent("HAnimModelsHandsFeetWithFour1mGrids.png"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0"))
        .addMeta(new autoclass.meta().setName("reference").setContent("https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/hanim.html"))
        .addMeta(new autoclass.meta().setName("subject").setContent("X3D HAnim humanoid animation"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("HAnimModelsHandsFeet.x3d"))
        .addChild(new autoclass.Viewpoint().setDescription("Hands and feet 10m"))
        .addChild(new autoclass.Viewpoint().setDescription("Hands and feet 1.7m").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1.7)])))
        .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(-1), java.newFloat(1), java.newFloat(0)]))
          .addChild(new autoclass.Inline().setUrl(java.newArray("java.lang.String", ["HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl"])))
          .addChild(new autoclass.Transform().setDEF("GridXY_20x20Fixed_AdjustScale").setScale(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.1)]))
            .addChild(new autoclass.Inline().setDEF("GridXY_20x20Fixed").setUrl(java.newArray("java.lang.String", ["../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"])))))
        .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0)]))
          .addChild(new autoclass.Inline().setUrl(java.newArray("java.lang.String", ["HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl"])))
          .addChild(new autoclass.Transform().setUSE("GridXY_20x20Fixed_AdjustScale")))
        .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(0)]))
          .addChild(new autoclass.Inline().setUrl(java.newArray("java.lang.String", ["HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl"])))
          .addChild(new autoclass.Transform().setUSE("GridXY_20x20Fixed_AdjustScale")))
        .addChild(new autoclass.Transform().setTranslation(java.newArray("float", [java.newFloat(1), java.newFloat(-1), java.newFloat(0)]))
          .addChild(new autoclass.Inline().setUrl(java.newArray("java.lang.String", ["HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl"])))
          .addChild(new autoclass.Transform().setUSE("GridXY_20x20Fixed_AdjustScale"))))      ;
    X3D0.toFileX3D("../data/HAnimModelsHandsFeet.new.node.x3d");
    X3D0.toFileJSON("../data/HAnimModelsHandsFeet.new.node.x3dj");
    process.exit(0);
