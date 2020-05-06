load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  new X3DObject().setVersion("3.1").setProfile("Full")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("test\\\\Figure31.7DonutExternalPrototypeToX3D.x3d"))
        .addMeta(new metaObject().setName("description").setContent("*enter description here, short-sentence summaries preferred*"))
        .addMeta(new metaObject().setName("creator").setContent("*enter name of original author here*"))
        .addMeta(new metaObject().setName("translator").setContent("*if manually translating VRML-to-X3D, enter name of person translating here*"))
        .addMeta(new metaObject().setName("created").setContent("*enter date of initial version here*"))
        .addMeta(new metaObject().setName("translated").setContent("03 December 2011"))
        .addMeta(new metaObject().setName("modified").setContent("03 December 2011"))
        .addMeta(new metaObject().setName("version").setContent("*enter version here*"))
        .addMeta(new metaObject().setName("reference").setContent("*enter reference citation or relative/online url here*"))
        .addMeta(new metaObject().setName("reference").setContent("*enter additional url/bibliographic reference information here*"))
        .addMeta(new metaObject().setName("requires").setContent("*enter reference resource here if required to support function, delivery, or coherence of content*"))
        .addMeta(new metaObject().setName("rights").setContent("*enter copyright information here* Example:  Copyright (c) Web3D Consortium Inc. 2006"))
        .addMeta(new metaObject().setName("drawing").setContent("*enter drawing filename/url here*"))
        .addMeta(new metaObject().setName("image").setContent("*enter image filename/url here*"))
        .addMeta(new metaObject().setName("MovingImage").setContent("*enter movie filename/url here*"))
        .addMeta(new metaObject().setName("photo").setContent("*enter photo filename/url here*"))
        .addMeta(new metaObject().setName("subject").setContent("*enter subject keywords here*"))
        .addMeta(new metaObject().setName("accessRights").setContent("*enter permission statements or url here*"))
        .addMeta(new metaObject().setName("warning").setContent("*insert any known warnings, bugs or errors here*"))
        .addMeta(new metaObject().setName("identifier").setContent("http://*enter online url address for this file here*/test\\\\Figure31.7DonutExternalPrototypeToX3D.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(Java.to(["EXAMINE","ANY"], Java.type("java.lang.String[]"))))
        .addChild(new ExternProtoDeclareObject().setName("Donut").setUrl(Java.to(["Figure31.6DonutPrototype.wrl#Donut","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.6DonutPrototype.wrl#Donut","Figure31.6DonutPrototype.x3d#Donut","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.6DonutPrototype.x3d#Donut"], Java.type("java.lang.String[]")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("crossSectionRadius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_spineRadius").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("set_crossSectionRadius").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("spineResolution").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFINT32).setName("crossSectionResolution").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("spineRadius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)))
        .addChild(new ExternProtoDeclareObject().setName("LightOak").setUrl(Java.to(["Figure31.4WoodAppearancePrototypesLibrary.wrl#LightOak","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.4WoodAppearancePrototypesLibrary.wrl#LightOak","Figure31.4WoodAppearancePrototypesLibrary.x3d#LightOak","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.4WoodAppearancePrototypesLibrary.x3d#LightOak"], Java.type("java.lang.String[]")))
          .addField(new fieldObject().setType(fieldObject.TYPE_SFNODE).setName("textureTransform").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addChild(new ViewpointObject().setPosition(Java.to([0,7,12], Java.type("float[]"))).setOrientation(Java.to([1,0,0,-0.52], Java.type("float[]"))).setDescription("Click to pick a size"))
        .addChild(new TransformObject().setTranslation(Java.to([0,2,0], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance0 = new ProtoInstanceObject().setName("LightOak"))
            .setGeometry(ProtoInstance1 = new ProtoInstanceObject().setName("Donut"))))
        .addChild(new TimeSensorObject().setDEF("Clock").setLoop(true).setCycleInterval(10))
        .addChild(new ScalarInterpolatorObject().setDEF("DonutThickness").setKey(Java.to([0,0.4,0.5,0.9,1], Java.type("float[]"))).setKeyValue(Java.to([0.75,1.25,1.25,0.75,0.75], Java.type("float[]"))))
        .addChild(new TransformObject().setTranslation(Java.to([0,-2,0], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setTexture(new ImageTextureObject().setUrl(Java.to(["../Chapter17-Textures/icing.jpg","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter17-Textures/icing.jpg"], Java.type("java.lang.String[]")))))
            .setGeometry(ProtoInstance2 = new ProtoInstanceObject().setName("Donut").setDEF("SpecialtyOfTheHouse")))
          .addChild(new TouchSensorObject().setDEF("StopSizeChanges")))
        .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("DonutThickness").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("DonutThickness").setFromField("value_changed").setToNode("SpecialtyOfTheHouse").setToField("set_crossSectionRadius"))
        .addChild(new ROUTEObject().setFromNode("StopSizeChanges").setFromField("touchTime").setToNode("Clock").setToField("stopTime")))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("textureTransform")
                .addChild(new TextureTransformObject().setCenter(Java.to([0,5], Java.type("float[]"))).setRotation(0.758).setScale(Java.to([2,0.5], Java.type("float[]"))).setTranslation(Java.to([0.5,0], Java.type("float[]")))));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("crossSectionRadius").setValue("1"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("spineRadius").setValue("2"));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("crossSectionRadius").setValue("0.5"));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("spineRadius").setValue("2"));
    X3D0.toFileX3D("../data/Figure31_7DonutExternalPrototypeToX3D.new.x3d");
