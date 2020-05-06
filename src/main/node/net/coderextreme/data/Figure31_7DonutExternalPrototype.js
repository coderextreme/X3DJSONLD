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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setContent("Figure31_7DonutExternalPrototype.x3d").setName("title"))
        .addMeta((new autoclass.meta()).setContent("Figure 31.7, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland").setName("creator"))
        .addMeta((new autoclass.meta()).setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig07.htm").setName("reference"))
        .addMeta((new autoclass.meta()).setContent("Don Brutzman").setName("translator"))
        .addMeta((new autoclass.meta()).setContent("22 November 2000").setName("created"))
        .addMeta((new autoclass.meta()).setContent("20 October 2019").setName("modified"))
        .addMeta((new autoclass.meta()).setContent("A donut shape built using prototypes: the Donut geometry node and the LightOak appearance node. Also see Figures 30.5 and 31.6 for comparison.").setName("description"))
        .addMeta((new autoclass.meta()).setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_7DonutExternalPrototype.x3d").setName("identifier"))
        .addMeta((new autoclass.meta()).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta((new autoclass.meta()).setContent("../../license.html").setName("license")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("Figure31_7DonutExternalPrototype.x3d"))
        .addChild((new autoclass.ExternProtoDeclare()).setName("Donut").setUrl(java.newArray("java.lang.String", ["Figure31_6DonutPrototype.wrl#Donut","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_6DonutPrototype.wrl#Donut","Figure31_6DonutPrototype.x3d#Donut","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_6DonutPrototype.x3d#Donut"]))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("crossSectionRadius"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("spineRadius"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFINT32).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("crossSectionResolution"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFINT32).setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setName("spineResolution"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("set_crossSectionRadius"))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY).setName("set_spineRadius")))
        .addChild((new autoclass.ExternProtoDeclare()).setName("LightOak").setUrl(java.newArray("java.lang.String", ["Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak","Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak"]))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFNODE).setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setName("textureTransform")))
        .addChild((new autoclass.Viewpoint()).setDescription("Click to pick a size").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.52)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(7), java.newFloat(12)])))
        .addComments((new autoclass.CommentsBlock(" Donut instances from prototypes ")))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setGeometry(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("Donut"))
            .setAppearance(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("LightOak"))))
        .addComments((new autoclass.CommentsBlock(" Hmmm, what size donut do you really want? ")))
        .addChild((new autoclass.TimeSensor()).setDEF("Clock").setCycleInterval(10).setLoop(true))
        .addChild((new autoclass.ScalarInterpolator()).setDEF("DonutThickness").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.4), java.newFloat(0.5), java.newFloat(0.9), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0.75), java.newFloat(1.25), java.newFloat(1.25), java.newFloat(0.75), java.newFloat(0.75)])))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-2), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setGeometry(ProtoInstance2 = (new autoclass.ProtoInstance()).setDEF("SpecialtyOfTheHouse").setName("Donut"))
            .setAppearance((new autoclass.Appearance())
              .setTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["../Chapter17Textures/icing.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter17Textures/icing.jpg"])))))
          .addChild((new autoclass.TouchSensor()).setDEF("StopSizeChanges").setDescription("touch to stop size changes")))
        .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("DonutThickness"))
        .addChild((new autoclass.ROUTE()).setFromField("value_changed").setFromNode("DonutThickness").setToField("set_crossSectionRadius").setToNode("SpecialtyOfTheHouse"))
        .addChild((new autoclass.ROUTE()).setFromField("touchTime").setFromNode("StopSizeChanges").setToField("stopTime").setToNode("Clock")))      ;
ProtoInstance0
              .addFieldValue((new autoclass.fieldValue()).setName("crossSectionRadius").setValue("1"));
ProtoInstance0
              .addFieldValue((new autoclass.fieldValue()).setName("spineRadius").setValue("2"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("textureTransform")
                .addChild((new autoclass.TextureTransform()).setCenter(java.newArray("float", [java.newFloat(0), java.newFloat(5)])).setRotation(java.newFloat(0.758)).setScale(java.newArray("float", [java.newFloat(2), java.newFloat(0.5)])).setTranslation(java.newArray("float", [java.newFloat(0.5), java.newFloat(0)]))));
ProtoInstance2
              .addFieldValue((new autoclass.fieldValue()).setName("crossSectionRadius").setValue("0.5"));
ProtoInstance2
              .addFieldValue((new autoclass.fieldValue()).setName("spineRadius").setValue("2"));
    X3D0.toFileX3D("../data/Figure31_7DonutExternalPrototype.new.x3d");
