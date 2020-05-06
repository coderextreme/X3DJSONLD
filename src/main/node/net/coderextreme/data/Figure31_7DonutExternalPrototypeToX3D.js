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
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  (new autoclass.X3D()).setVersion("3.1").setProfile("Full")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("test\\\\Figure31.7DonutExternalPrototypeToX3D.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("*enter description here, short-sentence summaries preferred*"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("*enter name of original author here*"))
        .addMeta((new autoclass.meta()).setName("translator").setContent("*if manually translating VRML-to-X3D, enter name of person translating here*"))
        .addMeta((new autoclass.meta()).setName("created").setContent("*enter date of initial version here*"))
        .addMeta((new autoclass.meta()).setName("translated").setContent("03 December 2011"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("03 December 2011"))
        .addMeta((new autoclass.meta()).setName("version").setContent("*enter version here*"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("*enter reference citation or relative/online url here*"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("*enter additional url/bibliographic reference information here*"))
        .addMeta((new autoclass.meta()).setName("requires").setContent("*enter reference resource here if required to support function, delivery, or coherence of content*"))
        .addMeta((new autoclass.meta()).setName("rights").setContent("*enter copyright information here* Example:  Copyright (c) Web3D Consortium Inc. 2006"))
        .addMeta((new autoclass.meta()).setName("drawing").setContent("*enter drawing filename/url here*"))
        .addMeta((new autoclass.meta()).setName("image").setContent("*enter image filename/url here*"))
        .addMeta((new autoclass.meta()).setName("MovingImage").setContent("*enter movie filename/url here*"))
        .addMeta((new autoclass.meta()).setName("photo").setContent("*enter photo filename/url here*"))
        .addMeta((new autoclass.meta()).setName("subject").setContent("*enter subject keywords here*"))
        .addMeta((new autoclass.meta()).setName("accessRights").setContent("*enter permission statements or url here*"))
        .addMeta((new autoclass.meta()).setName("warning").setContent("*insert any known warnings, bugs or errors here*"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("http://*enter online url address for this file here*/test\\\\Figure31.7DonutExternalPrototypeToX3D.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.NavigationInfo()).setType(java.newArray("java.lang.String", ["EXAMINE","ANY"])))
        .addChild((new autoclass.ExternProtoDeclare()).setName("Donut").setUrl(java.newArray("java.lang.String", ["Figure31.6DonutPrototype.wrl#Donut","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.6DonutPrototype.wrl#Donut","Figure31.6DonutPrototype.x3d#Donut","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.6DonutPrototype.x3d#Donut"]))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("crossSectionRadius").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("set_spineRadius").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("set_crossSectionRadius").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFINT32).setName("spineResolution").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFINT32).setName("crossSectionResolution").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("spineRadius").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)))
        .addChild((new autoclass.ExternProtoDeclare()).setName("LightOak").setUrl(java.newArray("java.lang.String", ["Figure31.4WoodAppearancePrototypesLibrary.wrl#LightOak","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.4WoodAppearancePrototypesLibrary.wrl#LightOak","Figure31.4WoodAppearancePrototypesLibrary.x3d#LightOak","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.4WoodAppearancePrototypesLibrary.x3d#LightOak"]))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setName("textureTransform").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)))
        .addChild((new autoclass.Viewpoint()).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(7), java.newFloat(12)])).setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.52)])).setDescription("Click to pick a size"))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setGeometry(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("LightOak"))
            .setGeometry(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("Donut"))))
        .addChild((new autoclass.TimeSensor()).setDEF("Clock").setLoop(true).setCycleInterval(10))
        .addChild((new autoclass.ScalarInterpolator()).setDEF("DonutThickness").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.4), java.newFloat(0.5), java.newFloat(0.9), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0.75), java.newFloat(1.25), java.newFloat(1.25), java.newFloat(0.75), java.newFloat(0.75)])))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-2), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["../Chapter17-Textures/icing.jpg","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter17-Textures/icing.jpg"]))))
            .setGeometry(ProtoInstance2 = (new autoclass.ProtoInstance()).setName("Donut").setDEF("SpecialtyOfTheHouse")))
          .addChild((new autoclass.TouchSensor()).setDEF("StopSizeChanges")))
        .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("DonutThickness").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("DonutThickness").setFromField("value_changed").setToNode("SpecialtyOfTheHouse").setToField("set_crossSectionRadius"))
        .addChild((new autoclass.ROUTE()).setFromNode("StopSizeChanges").setFromField("touchTime").setToNode("Clock").setToField("stopTime")))      ;
ProtoInstance0
              .addFieldValue((new autoclass.fieldValue()).setName("textureTransform")
                .addChild((new autoclass.TextureTransform()).setCenter(java.newArray("float", [java.newFloat(0), java.newFloat(5)])).setRotation(java.newFloat(0.758)).setScale(java.newArray("float", [java.newFloat(2), java.newFloat(0.5)])).setTranslation(java.newArray("float", [java.newFloat(0.5), java.newFloat(0)]))));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("crossSectionRadius").setValue("1"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("spineRadius").setValue("2"));
ProtoInstance2
              .addFieldValue((new autoclass.fieldValue()).setName("crossSectionRadius").setValue("0.5"));
ProtoInstance2
              .addFieldValue((new autoclass.fieldValue()).setName("spineRadius").setValue("2"));
    X3D0.toFileX3D("../data/Figure31_7DonutExternalPrototypeToX3D.new.x3d");
