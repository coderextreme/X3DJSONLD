load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
ConfigurationProperties.setDeleteIntermediateFiles(false);
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
      var X3D0 =  new X3D().setProfile("Interchange").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("WinterAndSpringDedicationAllTitleBox.x3d"))
        .addMeta(new meta().setName("description").setContent("Credits for scene dedications."))
        .addMeta(new meta().setName("creator").setContent("Carol McDonald"))
        .addMeta(new meta().setName("translator").setContent("Joe Williams and Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("26 June 2023"))
        .addMeta(new meta().setName("modified").setContent("Mon, 15 Sep 2025 05:21:02 GMT"))
        .addMeta(new meta().setName("reference").setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/Flower.Set.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringDedicationAllTitleBox.x3d")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("WinterAndSpringDedicationAllTitleBox.x3d"))
        .addChild(new Viewpoint().setDEF("WSDedicationAllTitleView").setDescription("Look at Dedication title").setPosition(Java.to(doubleToFloat([10,11,-5]), Java.type("float[]"))).setOrientation(Java.to(doubleToFloat([-0.15,0,0,0.2]), Java.type("float[]"))))
        .addChild(new Transform().setDEF("WSDedicationAllTitle").setTranslation(Java.to(doubleToFloat([10,10,-10]), Java.type("float[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material())
              .setTexture(new ImageTexture().setUrl(Java.to(["images/WSDedicationAll.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WSDedicationAll.png"], Java.type("java.lang.String[]")))))
            .setGeometry(new Box().setSize(Java.to(doubleToFloat([4,3,0.25]), Java.type("float[]")))))))      ;
    X3D0.toFileX3D("../data/WinterSpringDedicationAllTitleBox.new.graal.x3d");
    X3D0.toFileJSON("../data/WinterSpringDedicationAllTitleBox.new.graal.x3dj");
