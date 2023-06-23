var java = require('java');
var util = require('util');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("Figure31_9SpinGroupPrototype.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm"))
        .addMeta((new autoclass.meta()).setName("translator").setContent("Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("created").setContent("24 October 2000"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
        .addMeta((new autoclass.meta()).setName("description").setContent("The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup."))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("Figure31_9SpinGroupPrototype.x3d"))
        .addChild((new autoclass.ProtoDeclare()).setName("SpinGroup")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("children").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)
              .addComments((new autoclass.CommentsBlock("NULL node initialization"))))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("cycleInterval").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("loop").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("false"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("startTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("stopTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform()).setDEF("SpinGroupTransform")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children"))))
            .addComments((new autoclass.CommentsBlock("following nodes will not be rendered, only the first node of a ProtoBody is drawn")))
            .addChild((new autoclass.TimeSensor()).setDEF("SpinGroupClock")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("cycleInterval").setProtoField("cycleInterval"))
                .addConnect((new autoclass.connect()).setNodeField("loop").setProtoField("loop"))
                .addConnect((new autoclass.connect()).setNodeField("startTime").setProtoField("startTime"))
                .addConnect((new autoclass.connect()).setNodeField("stopTime").setProtoField("stopTime"))))
            .addChild((new autoclass.OrientationInterpolator()).setDEF("Spinner").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(3.14), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(6.28)])))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("SpinGroupClock").setToField("set_fraction").setToNode("Spinner"))
            .addChild((new autoclass.ROUTE()).setFromField("value_changed").setFromNode("Spinner").setToField("set_rotation").setToNode("SpinGroupTransform"))))
        .addComments((new autoclass.CommentsBlock("Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare).")))
        .addChild((new autoclass.Viewpoint()).setDescription("Click on blue crossbar to activate second SpinGroup").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.52)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(18), java.newFloat(30)])))
        .addComments((new autoclass.CommentsBlock("Create an instance, meaning actual nodes that render")))
        .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("SpinGroup"))
        .addChild((new autoclass.ROUTE()).setFromField("touchTime").setFromNode("ActivateSecondSpinGroup").setToField("startTime").setToNode("SecondSpinGroup")))      ;
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("cycleInterval").setValue("8"));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("loop").setValue("true"));
ProtoInstance0
          .addFieldValue((new autoclass.fieldValue()).setName("children")
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(25), java.newFloat(2), java.newFloat(2)])))
              .setAppearance((new autoclass.Appearance()).setDEF("Green")
                .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0.3)])))))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(2), java.newFloat(25), java.newFloat(2)])))
              .setAppearance((new autoclass.Appearance()).setUSE("Green")))
            .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("SpinGroup").setDEF("SecondSpinGroup")
              .addComments((new autoclass.CommentsBlock("stopTime > startTime ensures that initial state is stopped")))));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("cycleInterval").setValue("4"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("loop").setValue("true"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("stopTime").setValue("1"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("children")
                .addChild((new autoclass.TouchSensor()).setDEF("ActivateSecondSpinGroup").setDescription("Activate second SpinGroup by clicking blue bar"))
                .addChild((new autoclass.Shape())
                  .setGeometry((new autoclass.Box()).setSize(java.newArray("float", [java.newFloat(2), java.newFloat(2.05), java.newFloat(25)])))
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0.3), java.newFloat(1)]))))));
    X3D0.toFileX3D("../data/Figure31_9SpinGroupPrototype.new.x3d");
    process.exit(0);
