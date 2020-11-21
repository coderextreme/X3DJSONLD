load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(1))
        .addMeta(new meta().setName("title").setContent("JohnBoy.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d"))
        .addMeta(new meta().setName("description").setContent("An attempt at a standard LOA-4 skeleton"))
        .addMeta(new meta().setName("generator").setContent("h.pl"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("12 June 2020"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setSpeed(1.5))
        .addChild(new Viewpoint().setCenterOfRotation(Java.to([0,1,0], Java.type("float[]"))).setDescription("JohnBoy").setPosition(Java.to([0,1,3], Java.type("float[]")))))      ;
    X3D0.toFileX3D("../data/skeleton.new.x3d");
