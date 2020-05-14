load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("Figure31_7DonutExternalPrototype.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Figure 31.7, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig07.htm"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("22 November 2000"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("description").setContent("A donut shape built using prototypes: the Donut geometry node and the LightOak appearance node. Also see Figures 30.5 and 31.6 for comparison."))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_7DonutExternalPrototype.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("Figure31_7DonutExternalPrototype.x3d"))
        .addChild(new ExternProtoDeclareObject().setName("Donut").setUrl(Java.to(["Figure31_6DonutPrototype.wrl#Donut","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_6DonutPrototype.wrl#Donut","Figure31_6DonutPrototype.x3d#Donut","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_6DonutPrototype.x3d#Donut"], Java.type("java.lang.String[]")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("crossSectionRadius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("spineRadius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("crossSectionResolution").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("spineResolution").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_crossSectionRadius").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_spineRadius").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)))
        .addChild(new ExternProtoDeclareObject().setName("LightOak").setUrl(Java.to(["Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak","Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak"], Java.type("java.lang.String[]")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("textureTransform").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addChild(new ViewpointObject().setDescription("Click to pick a size").setOrientation(Java.to([1,0,0,-0.52], Java.type("float[]"))).setPosition(Java.to([0,7,12], Java.type("float[]"))))
        .addComments(new CommentsBlock("Donut instances from prototypes"))
        .addChild(new TransformObject().setTranslation(Java.to([0,2,0], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance0 = new ProtoInstanceObject().setName("Donut"))
            .setAppearance(ProtoInstance1 = new ProtoInstanceObject().setName("LightOak"))))
        .addComments(new CommentsBlock("Hmmm, what size donut do you really want?"))
        .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(10).setLoop(true))
        .addChild(new ScalarInterpolatorObject().setDEF("DonutThickness").setKey(Java.to([0,0.4,0.5,0.9,1], Java.type("float[]"))).setKeyValue(Java.to([0.75,1.25,1.25,0.75,0.75], Java.type("float[]"))))
        .addChild(new TransformObject().setTranslation(Java.to([0,-2,0], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance2 = new ProtoInstanceObject().setName("Donut").setDEF("SpecialtyOfTheHouse"))
            .setAppearance(new AppearanceObject()
              .setTexture(new ImageTextureObject().setUrl(Java.to(["../Chapter17Textures/icing.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter17Textures/icing.jpg"], Java.type("java.lang.String[]"))))))
          .addChild(new TouchSensorObject().setDEF("StopSizeChanges").setDescription("touch to stop size changes")))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("DonutThickness"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("DonutThickness").setToField("set_crossSectionRadius").setToNode("SpecialtyOfTheHouse"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("StopSizeChanges").setToField("stopTime").setToNode("Clock")))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("crossSectionRadius").setValue("1"));
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("spineRadius").setValue("2"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("textureTransform")
                .addChild(new TextureTransformObject().setCenter(Java.to([0,5], Java.type("float[]"))).setRotation(0.758).setScale(Java.to([2,0.5], Java.type("float[]"))).setTranslation(Java.to([0.5,0], Java.type("float[]")))));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("crossSectionRadius").setValue("0.5"));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("spineRadius").setValue("2"));
    X3D0.toFileX3D("../data/Figure31_7DonutExternalPrototype.new.x3d");
