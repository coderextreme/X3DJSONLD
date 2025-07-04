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
ConfigurationProperties.setStripDefaultAttributes(true);
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("LOA1_StopAnimation.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Humanoid animation prototype reusable by any Humanoid."))
        .addMeta(new autoclass.meta().setName("creator").setContent("Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman"))
        .addMeta(new autoclass.meta().setName("rights").setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."))
        .addMeta(new autoclass.meta().setName("translator").setContent("Ozan APAYDIN"))
        .addMeta(new autoclass.meta().setName("created").setContent("1 December 2001"))
        .addMeta(new autoclass.meta().setName("modified").setContent("23 May 2020"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://www.HAnim.org"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://HAnim.org/Models"))
        .addMeta(new autoclass.meta().setName("reference").setContent("http://HAnim.org/Nodes"))
        .addMeta(new autoclass.meta().setName("subject").setContent("Nancy Stand Animation HAnim 2001"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StopAnimation.x3d"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new autoclass.meta().setName("license").setContent("../license.html")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("LOA1_StopAnimation.x3d"))
        .addChild(new autoclass.ProtoDeclare().setName("LOA1_StopAnimation")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("cycleInterval").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.009999999776482582"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("true"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("loop").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("true"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("startTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFTIME).setName("stopTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("-1"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("fraction_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("isActive").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("HumanoidRoot_translation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("HumanoidRoot_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("lower_body_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("l_hip_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("l_knee_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("l_ankle_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("l_midtarsal_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("r_hip_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("r_knee_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("r_ankle_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("r_midtarsal_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("vl5_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("skullbase_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("l_shoulder_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("l_elbow_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("l_wrist_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("r_shoulder_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("r_elbow_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFROTATION).setName("r_wrist_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY)))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.TimeSensor().setDEF("TIMER")
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("cycleInterval").setProtoField("cycleInterval"))
                  .addConnect(new autoclass.connect().setNodeField("enabled").setProtoField("enabled"))
                  .addConnect(new autoclass.connect().setNodeField("loop").setProtoField("loop"))
                  .addConnect(new autoclass.connect().setNodeField("startTime").setProtoField("startTime"))
                  .addConnect(new autoclass.connect().setNodeField("stopTime").setProtoField("stopTime"))
                  .addConnect(new autoclass.connect().setNodeField("fraction_changed").setProtoField("fraction_changed"))
                  .addConnect(new autoclass.connect().setNodeField("isActive").setProtoField("isActive"))))
              .addChild(new autoclass.PositionInterpolator().setDEF("HUMANOIDROOT_POSITION_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("HumanoidRoot_translation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("HUMANOIDROOT_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("HumanoidRoot_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("SACROILIAC_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("lower_body_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("L_HIP_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("l_hip_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("L_KNEE_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("l_knee_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("L_ANKLE_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("l_ankle_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("L_MIDTARSAL_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("l_midtarsal_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("R_HIP_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("r_hip_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("R_KNEE_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("r_knee_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("R_ANKLE_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("r_ankle_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("R_MIDTARSAL_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("r_midtarsal_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("VL5_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("vl5_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("SKULLBASE_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("skullbase_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("L_SHOULDER_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("l_shoulder_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("L_ELBOW_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("l_elbow_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("L_WRIST_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("l_wrist_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("R_SHOULDER_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("r_shoulder_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("R_ELBOW_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("r_elbow_rotation_changed"))))
              .addChild(new autoclass.OrientationInterpolator().setDEF("R_WRIST_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("value_changed").setProtoField("r_wrist_rotation_changed")))))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("HUMANOIDROOT_POSITION_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("HUMANOIDROOT_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("SACROILIAC_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_HIP_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_KNEE_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_ANKLE_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_MIDTARSAL_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_HIP_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_KNEE_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_ANKLE_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_MIDTARSAL_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("VL5_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("SKULLBASE_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_SHOULDER_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_ELBOW_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_WRIST_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_SHOULDER_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_ELBOW_ANIMATOR"))
            .addChild(new autoclass.ROUTE().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_WRIST_ANIMATOR"))))
        .addComments((new autoclass.CommentsBlock("======================================")))
        .addComments((new autoclass.CommentsBlock("Point to example use in case someone inspects this file")))
        .addChild(new autoclass.Anchor().setDescription("InterchangableActorsViaDynamicRouting").setParameter(java.newArray("java.lang.String", ["target=_blank"])).setUrl(java.newArray("java.lang.String", ["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]))
          .addChild(new autoclass.Shape()
            .setGeometry(new autoclass.Text().setString(java.newArray("java.lang.String", ["LOA1_StopAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]))
              .setFontStyle(new autoclass.FontStyle().setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSize(java.newFloat(0.8))))
            .setAppearance(new autoclass.Appearance()
              .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0.2)])))))))      ;
    X3D0.toFileX3D("../data/LOA1_StopAnimation.new.node.x3d");
    X3D0.toFileJSON("../data/LOA1_StopAnimation.new.node.json");
    process.exit(0);
