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
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addMeta((new autoclass.meta()).setName("title").setContent("LOA1_WalkAnimation.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Humanoid animation prototype reusable by any Humanoid."))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Cindy Ballreich cindy@ballreich.net 3Name3D"))
        .addMeta((new autoclass.meta()).setName("rights").setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."))
        .addMeta((new autoclass.meta()).setName("translator").setContent("Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("translated").setContent("1 October 2001"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("23 May 2020"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Specifications/HAnim2001"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Models"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("http://HAnim.org/Nodes"))
        .addMeta((new autoclass.meta()).setName("subject").setContent("Nancy Walk Animation HAnim 2001"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.WorldInfo()).setTitle("LOA1_WalkAnimation.x3d"))
        .addChild((new autoclass.ProtoDeclare()).setName("LOA1_WalkAnimation")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("cycleInterval").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("true"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("loop").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("true"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("startTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("stopTime").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("-1"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("fraction_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("isActive").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("HumanoidRoot_translation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("HumanoidRoot_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("lower_body_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("l_hip_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("l_knee_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("l_ankle_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("l_midtarsal_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("r_hip_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("r_knee_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("r_ankle_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("r_midtarsal_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("vl5_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("skullbase_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("l_shoulder_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("l_elbow_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("l_wrist_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("r_shoulder_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("r_elbow_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("r_wrist_rotation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY)))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Group())
              .addChild((new autoclass.TimeSensor()).setDEF("TIMER")
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("cycleInterval").setProtoField("cycleInterval"))
                  .addConnect((new autoclass.connect()).setNodeField("enabled").setProtoField("enabled"))
                  .addConnect((new autoclass.connect()).setNodeField("loop").setProtoField("loop"))
                  .addConnect((new autoclass.connect()).setNodeField("startTime").setProtoField("startTime"))
                  .addConnect((new autoclass.connect()).setNodeField("stopTime").setProtoField("stopTime"))
                  .addConnect((new autoclass.connect()).setNodeField("fraction_changed").setProtoField("fraction_changed"))
                  .addConnect((new autoclass.connect()).setNodeField("isActive").setProtoField("isActive"))))
              .addChild((new autoclass.PositionInterpolator()).setDEF("HUMANOIDROOT_POSITION_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.04167), java.newFloat(0.125), java.newFloat(0.1667), java.newFloat(0.2083), java.newFloat(0.25), java.newFloat(0.2917), java.newFloat(0.375), java.newFloat(0.4583), java.newFloat(0.5), java.newFloat(0.5417), java.newFloat(0.5833), java.newFloat(0.625), java.newFloat(0.7083), java.newFloat(0.75), java.newFloat(0.7917), java.newFloat(0.875), java.newFloat(0.9167), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(-0.00928), java.newFloat(0), java.newFloat(0), java.newFloat(-0.003858), java.newFloat(0), java.newFloat(0), java.newFloat(-0.008847), java.newFloat(0), java.newFloat(0), java.newFloat(-0.01486), java.newFloat(0), java.newFloat(0), java.newFloat(-0.02641), java.newFloat(0), java.newFloat(0), java.newFloat(-0.03934), java.newFloat(0), java.newFloat(0), java.newFloat(-0.0502), java.newFloat(0), java.newFloat(0), java.newFloat(-0.07469), java.newFloat(0), java.newFloat(0), java.newFloat(-0.02732), java.newFloat(0), java.newFloat(0), java.newFloat(-0.01608), java.newFloat(0), java.newFloat(0), java.newFloat(-0.01129), java.newFloat(0), java.newFloat(0), java.newFloat(-0.005819), java.newFloat(0), java.newFloat(0), java.newFloat(-0.002004), java.newFloat(0), java.newFloat(0), java.newFloat(-0.002579), java.newFloat(0), java.newFloat(0), java.newFloat(-0.0143), java.newFloat(0), java.newFloat(0), java.newFloat(-0.03799), java.newFloat(0), java.newFloat(0), java.newFloat(-0.05648), java.newFloat(0), java.newFloat(0), java.newFloat(-0.045), java.newFloat(0), java.newFloat(0), java.newFloat(-0.00928), java.newFloat(0)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("HumanoidRoot_translation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("HUMANOIDROOT_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("HumanoidRoot_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("SACROILIAC_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-1), java.newFloat(0.1056), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0.09018), java.newFloat(0), java.newFloat(0), java.newFloat(-1), java.newFloat(0.1056)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("lower_body_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("L_HIP_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.25), java.newFloat(0.375), java.newFloat(0.5), java.newFloat(0.6667), java.newFloat(0.7917), java.newFloat(0.9167), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(-0.873), java.newFloat(0.06094), java.newFloat(0.484), java.newFloat(0.2865), java.newFloat(0.9963), java.newFloat(-0.01057), java.newFloat(0.08481), java.newFloat(0.2488), java.newFloat(0.9965), java.newFloat(0.01591), java.newFloat(-0.08222), java.newFloat(0.3836), java.newFloat(-0.7018), java.newFloat(-0.03223), java.newFloat(-0.7117), java.newFloat(0.1289), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0.5518), java.newFloat(-0.9964), java.newFloat(0.02231), java.newFloat(0.0817), java.newFloat(0.5351), java.newFloat(-0.9809), java.newFloat(0.04912), java.newFloat(0.1881), java.newFloat(0.5204), java.newFloat(-0.873), java.newFloat(0.06094), java.newFloat(0.484), java.newFloat(0.2865)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_hip_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("L_KNEE_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.2083), java.newFloat(0.375), java.newFloat(0.5), java.newFloat(0.6667), java.newFloat(0.7917), java.newFloat(0.9167), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.3226), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.1556), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.08678), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.8751), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.131), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.09961), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.3942), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.3226)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_knee_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("L_ANKLE_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.125), java.newFloat(0.2083), java.newFloat(0.375), java.newFloat(0.6667), java.newFloat(0.9167), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0.06714), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0.2152), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0.3184), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0.4717), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0.2912), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.1222), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0.06714)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_ankle_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("L_MIDTARSAL_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.2), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_midtarsal_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("R_HIP_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.125), java.newFloat(0.2083), java.newFloat(0.2917), java.newFloat(0.375), java.newFloat(0.5), java.newFloat(0.6667), java.newFloat(0.7917), java.newFloat(0.9167), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(-0.5831), java.newFloat(0.03511), java.newFloat(0.8116), java.newFloat(0.1481), java.newFloat(-0.995), java.newFloat(0.02296), java.newFloat(0.09674), java.newFloat(0.4683), java.newFloat(-1), java.newFloat(0.00192), java.newFloat(0.007964), java.newFloat(0.4732), java.newFloat(-0.998), java.newFloat(-0.0158), java.newFloat(-0.06102), java.newFloat(0.5079), java.newFloat(-0.9911), java.newFloat(-0.03541), java.newFloat(-0.1286), java.newFloat(0.5419), java.newFloat(-0.9131), java.newFloat(-0.06243), java.newFloat(-0.403), java.newFloat(0.3361), java.newFloat(-0.4306), java.newFloat(-0.07962), java.newFloat(-0.899), java.newFloat(0.07038), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.2571), java.newFloat(0.9891), java.newFloat(-0.02805), java.newFloat(0.1444), java.newFloat(0.3879), java.newFloat(-0.5831), java.newFloat(0.03511), java.newFloat(0.8116), java.newFloat(0.1481)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_hip_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("R_KNEE_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.125), java.newFloat(0.2083), java.newFloat(0.2917), java.newFloat(0.375), java.newFloat(0.5), java.newFloat(0.6667), java.newFloat(0.7917), java.newFloat(0.9167), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.8573), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.8926), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.5351), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.1756), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.1194), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.3153), java.newFloat(1), java.newFloat(-1.176e-8), java.newFloat(-4.971e-9), java.newFloat(0.09354), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.08558), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.2475), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.8573)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_knee_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("R_ANKLE_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.125), java.newFloat(0.2083), java.newFloat(0.375), java.newFloat(0.4583), java.newFloat(0.5), java.newFloat(0.6667), java.newFloat(0.75), java.newFloat(0.7917), java.newFloat(0.9167), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0.3533), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0.1072), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.2612), java.newFloat(1), java.newFloat(-1.641e-7), java.newFloat(1.827e-8), java.newFloat(0.1268), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0.01793), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0.05824), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0.2398), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0.35), java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(0.3322), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_ankle_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("R_MIDTARSAL_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.2), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-0.2)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_midtarsal_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("VL5_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.2083), java.newFloat(0.375), java.newFloat(0.75), java.newFloat(0.8333), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0.0826), java.newFloat(-0.01972), java.newFloat(-0.5974), java.newFloat(0.8017), java.newFloat(0.08231), java.newFloat(0.009296), java.newFloat(-0.9648), java.newFloat(0.2627), java.newFloat(0.1734), java.newFloat(-0.01238), java.newFloat(0.9549), java.newFloat(-0.2968), java.newFloat(0.08732), java.newFloat(-0.008125), java.newFloat(0.9691), java.newFloat(-0.2463), java.newFloat(0.158), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0.0826)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("vl5_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("SKULLBASE_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.375), java.newFloat(0.4167), java.newFloat(0.5), java.newFloat(0.5833), java.newFloat(0.6667), java.newFloat(0.75), java.newFloat(0.8333), java.newFloat(0.9167), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(0.08642), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0.1825), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0.1505), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0.1053), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0.04391), java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(0.03119), java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(0.07936), java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(0.1616), java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(0.155), java.newFloat(0), java.newFloat(-1), java.newFloat(0), java.newFloat(0.08642)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("skullbase_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("L_SHOULDER_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.375), java.newFloat(0.9167), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.1189), java.newFloat(-1), java.newFloat(-5.928e-7), java.newFloat(1.525e-7), java.newFloat(0.1861), java.newFloat(1), java.newFloat(-2.038e-7), java.newFloat(-1.257e-7), java.newFloat(0.3357), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0.1189)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_shoulder_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("L_ELBOW_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.375), java.newFloat(0.9167), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(-1), java.newFloat(-1.58298e-7), java.newFloat(8.15967e-8), java.newFloat(0.0659878), java.newFloat(-1), java.newFloat(-3.28826e-8), java.newFloat(-2.31665e-8), java.newFloat(0.488383), java.newFloat(-1), java.newFloat(0.00000306462), java.newFloat(-0.00000311947), java.newFloat(0.0177536), java.newFloat(-1), java.newFloat(-1.58298e-7), java.newFloat(8.15967e-8), java.newFloat(0.0659878)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_elbow_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("L_WRIST_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.375), java.newFloat(0.9167), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0.00000151276), java.newFloat(-1), java.newFloat(0.0000017724), java.newFloat(0.461076), java.newFloat(-0.330195), java.newFloat(-0.927451), java.newFloat(0.175516), java.newFloat(0.538852), java.newFloat(0.0327774), java.newFloat(-0.999314), java.newFloat(-0.0172185), java.newFloat(0.492033), java.newFloat(0.00000151276), java.newFloat(-1), java.newFloat(0.0000017724), java.newFloat(0.461076)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("l_wrist_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("R_SHOULDER_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.375), java.newFloat(0.9167), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(-1), java.newFloat(-7.689e-7), java.newFloat(-1.48e-7), java.newFloat(0.09346), java.newFloat(1), java.newFloat(5.004e-8), java.newFloat(2.254e-8), java.newFloat(0.3197), java.newFloat(-1), java.newFloat(-1.104e-7), java.newFloat(5.267e-10), java.newFloat(0.1564), java.newFloat(-1), java.newFloat(-7.689e-7), java.newFloat(-1.48e-7), java.newFloat(0.09346)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_shoulder_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("R_ELBOW_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.375), java.newFloat(0.9167), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(-1), java.newFloat(-4.45619e-8), java.newFloat(2.70318e-8), java.newFloat(0.411508), java.newFloat(-1), java.newFloat(8.16742e-7), java.newFloat(-1.09556e-7), java.newFloat(0.0925011), java.newFloat(-1), java.newFloat(-2.47628e-8), java.newFloat(-7.02862e-9), java.newFloat(0.572568), java.newFloat(-1), java.newFloat(-4.45619e-8), java.newFloat(2.70318e-8), java.newFloat(0.411508)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_elbow_rotation_changed"))))
              .addChild((new autoclass.OrientationInterpolator()).setDEF("R_WRIST_ANIMATOR").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.375), java.newFloat(0.9167), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(-0.8129), java.newFloat(0.4759), java.newFloat(-0.3357), java.newFloat(0.1346), java.newFloat(0.1533), java.newFloat(-0.9878), java.newFloat(0.02582), java.newFloat(0.3902), java.newFloat(-0.5701), java.newFloat(0.7604), java.newFloat(-0.311), java.newFloat(0.366), java.newFloat(-0.8129), java.newFloat(0.4759), java.newFloat(-0.3357), java.newFloat(0.1346)]))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("value_changed").setProtoField("r_wrist_rotation_changed")))))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("HUMANOIDROOT_POSITION_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("HUMANOIDROOT_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("SACROILIAC_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_HIP_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_KNEE_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_ANKLE_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_MIDTARSAL_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_HIP_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_KNEE_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_ANKLE_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_MIDTARSAL_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("VL5_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("SKULLBASE_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_SHOULDER_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_ELBOW_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("L_WRIST_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_SHOULDER_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_ELBOW_ANIMATOR"))
            .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("R_WRIST_ANIMATOR"))))
        .addComments((new autoclass.CommentsBlock("======================================")))
        .addComments((new autoclass.CommentsBlock("Point to example use in case someone inspects this file")))
        .addChild((new autoclass.Anchor()).setDescription("InterchangableActorsViaDynamicRouting").setParameter(java.newArray("java.lang.String", ["target=_blank"])).setUrl(java.newArray("java.lang.String", ["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]))
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["LOA1_WalkAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]))
              .setFontStyle((new autoclass.FontStyle()).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSize(java.newFloat(0.8))))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(0.2)])))))))      ;
    X3D0.toFileX3D("../data/LOA1_WalkAnimation.new.x3d");