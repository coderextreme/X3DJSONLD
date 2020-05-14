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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead((new autoclass.head())
        .addComponent((new autoclass.component()).setName("H-Anim").setLevel(1))
        .addMeta((new autoclass.meta()).setName("title").setContent("HAnimModelsHandsFeet.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Left and right hands and feet, using high-fidelity definitions for H-Anim version 2.2"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("YOO Kwan Hee and Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("created").setContent("8 February 2015"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
        .addMeta((new autoclass.meta()).setName("warning").setContent("not yet to scale"))
        .addMeta((new autoclass.meta()).setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
        .addMeta((new autoclass.meta()).setName("Image").setContent("HAnimModelsHandsFeet.png"))
        .addMeta((new autoclass.meta()).setName("Image").setContent("HAnimModelsHandsFeetWithFour1mGrids.png"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-h-anim"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/files/specifications/19774/V1.0"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html"))
        .addMeta((new autoclass.meta()).setName("subject").setContent("X3D H-Anim humanoid animation"))
        .addMeta((new autoclass.meta()).setName("warning").setContent("scene, DOCTYPE and Schema under development."))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelsHandsFeet.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("HAnimModelsHandsFeet.x3d"))
        .addChild((new autoclass.Viewpoint()).setDescription("Hands and feet 10m"))
        .addChild((new autoclass.Viewpoint()).setDescription("Hands and feet 1.7m").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1.7)])))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-1), java.newFloat(1), java.newFloat(0)])).setDisplayBBox(false)
          .addChild((new autoclass.Inline()).setUrl(java.newArray("java.lang.String", ["HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.wrl"])).setDisplayBBox(false))
          .addComments((new autoclass.CommentsBlock("Grid overlay authoring hint: first adjust grid scale to convenient large size, then adjust overall scale for your scene model")))
          .addChild((new autoclass.Transform()).setDEF("GridXY_20x20Fixed_AdjustScale").setScale(java.newArray("float", [java.newFloat(0.1), java.newFloat(0.1), java.newFloat(0.1)])).setDisplayBBox(false)
            .addChild((new autoclass.Inline()).setDEF("GridXY_20x20Fixed").setUrl(java.newArray("java.lang.String", ["GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","GridXY_20x20Fixed.wrl","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"])).setDisplayBBox(false))))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0)])).setDisplayBBox(false)
          .addChild((new autoclass.Inline()).setUrl(java.newArray("java.lang.String", ["HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.wrl"])).setDisplayBBox(false))
          .addChild((new autoclass.Transform()).setUSE("GridXY_20x20Fixed_AdjustScale")))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(0)])).setDisplayBBox(false)
          .addComments((new autoclass.CommentsBlock("rotation='0 0 1 3.141593'")))
          .addChild((new autoclass.Inline()).setUrl(java.newArray("java.lang.String", ["HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.wrl"])).setDisplayBBox(false))
          .addChild((new autoclass.Transform()).setUSE("GridXY_20x20Fixed_AdjustScale")))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(1), java.newFloat(-1), java.newFloat(0)])).setDisplayBBox(false)
          .addComments((new autoclass.CommentsBlock("rotation='0 0 1 3.141593'")))
          .addChild((new autoclass.Inline()).setUrl(java.newArray("java.lang.String", ["HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.wrl"])).setDisplayBBox(false))
          .addChild((new autoclass.Transform()).setUSE("GridXY_20x20Fixed_AdjustScale"))))      ;
    X3D0.toFileX3D("../data/HAnimModelsHandsFeet.new.x3d");
