load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ExtrusionHeart.x3d"))
        .addMeta(new meta().setName("description").setContent("Simple extrusion of a Valentine heart."))
        .addMeta(new meta().setName("creator").setContent("Class participants in course Introduction to VRML/X3D."))
        .addMeta(new meta().setName("created").setContent("14 February 2001"))
        .addMeta(new meta().setName("modified").setContent("27 November 2015"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDescription("Extrusion Heart").setPosition(Java.to([0,-4,0], Java.type("double[]"))).setOrientation(Java.to([1,0,0,1.57], Java.type("double[]"))))
        .addChild(new Transform().setTranslation(Java.to([0,-0.5,0], Java.type("double[]")))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(Java.to([0.8,0.3,0.3], Java.type("double[]")))))
            .setGeometry(new Extrusion().setSolid(false).setCreaseAngle(3.14159).setCrossSection(Java.to([0,0.8,0.2,1,0.7,0.95,1,0.5,0.8,0,0.5,-0.3,0,-0.7,-0.5,-0.3,-0.8,0,-1,0.5,-0.7,0.95,-0.2,1,0,0.8], Java.type("double[]"))).setScale(Java.to([0.01,0.01,0.8,0.8,1,1,0.8,0.8,0.01,0.01], Java.type("double[]"))).setSpine(Java.to([0,0,0,0,0.1,0,0,0.5,0,0,0.9,0,0,1,0], Java.type("double[]")))))))      ;
    X3D0.toFileJSON("../data/ExtrusionHeart.new.graal.json");
