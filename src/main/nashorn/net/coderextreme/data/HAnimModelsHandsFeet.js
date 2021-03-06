load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("HAnimModelsHandsFeet.x3d"))
        .addMeta(new meta().setName("description").setContent("Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0"))
        .addMeta(new meta().setName("creator").setContent("YOO Kwan Hee and Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("8 February 2015"))
        .addMeta(new meta().setName("modified").setContent("8 March 2021"))
        .addMeta(new meta().setName("warning").setContent("not yet to scale"))
        .addMeta(new meta().setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
        .addMeta(new meta().setName("TODO").setContent("how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs?"))
        .addMeta(new meta().setName("Image").setContent("HAnimModelsHandsFeet.png"))
        .addMeta(new meta().setName("Image").setContent("HAnimModelsHandsFeetWithFour1mGrids.png"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"))
        .addMeta(new meta().setName("subject").setContent("X3D HAnim humanoid animation"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HAnimModelsHandsFeet.x3d"))
        .addChild(new Viewpoint().setDescription("Hands and feet 10m"))
        .addChild(new Viewpoint().setDescription("Hands and feet 1.7m").setPosition(Java.to([0,0,1.7], Java.type("float[]"))))
        .addChild(new Transform().setTranslation(Java.to([-1,1,0], Java.type("float[]")))
          .addChild(new Inline().setUrl(Java.to(["HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl"], Java.type("java.lang.String[]"))))
          .addComments(new CommentsBlock("Grid overlay authoring hint: first adjust grid scale to convenient large size, then adjust overall scale for your scene model"))
          .addChild(new Transform().setDEF("GridXY_20x20Fixed_AdjustScale").setScale(Java.to([0.1,0.1,0.1], Java.type("float[]")))
            .addChild(new Inline().setDEF("GridXY_20x20Fixed").setUrl(Java.to(["GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","GridXY_20x20Fixed.wrl","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"], Java.type("java.lang.String[]"))))))
        .addChild(new Transform().setTranslation(Java.to([1,1,0], Java.type("float[]")))
          .addChild(new Inline().setUrl(Java.to(["HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl"], Java.type("java.lang.String[]"))))
          .addChild(new Transform().setUSE("GridXY_20x20Fixed_AdjustScale")))
        .addChild(new Transform().setTranslation(Java.to([-1,-1,0], Java.type("float[]")))
          .addComments(new CommentsBlock("rotation='0 0 1 3.141593'"))
          .addChild(new Inline().setUrl(Java.to(["HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl"], Java.type("java.lang.String[]"))))
          .addChild(new Transform().setUSE("GridXY_20x20Fixed_AdjustScale")))
        .addChild(new Transform().setTranslation(Java.to([1,-1,0], Java.type("float[]")))
          .addComments(new CommentsBlock("rotation='0 0 1 3.141593'"))
          .addChild(new Inline().setUrl(Java.to(["HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl"], Java.type("java.lang.String[]"))))
          .addChild(new Transform().setUSE("GridXY_20x20Fixed_AdjustScale"))))      ;
    X3D0.toFileX3D("../data/HAnimModelsHandsFeet.new.x3d");
