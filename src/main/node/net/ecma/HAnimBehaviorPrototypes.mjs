'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var component = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HAnimBehaviorPrototypes.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Prototypes for HAnimBehavior node, which collects OrientationInterpolators for aggregate animation of an HAnim humanoid model, and HAnimBodyBehaviorChooser, which selects one body and enables/disables multiple aggregated behaviors.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman, Jeff Weekley, MV4205 Advanced X3D Authoring class, and Keith Victor")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("2 May 2006")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("4 July 2020")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("Web3D2007BlendedBehaviorsChangeableBodies.pdf")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/files/specifications/19774/V1.0")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-X3DAbstractSpecification_Revision1_to_Part1/Part01/components/hanim.html")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("InterchangableActorsViaDynamicRoutingPrototypes.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("ApaydinThesis.pdf")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("X3D HAnim humanoid animation behaviors")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("under development. should joint translations be exposed? upgrade to HAnim v2.2")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypes.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("HAnimBehaviorPrototypes.x3d")}),

            new ProtoDeclare({
              name : new SFString("HAnimBehavior"),
              appinfo : new SFString("The HAnimBehavior node models a single humanoid behavior either for an entire body or simply parts of a body. It collects a TimeSensor clock with a single PositionInterpolator and multiple OrientationInterpolator nodes to provide a single humanoid behavior."),
              documentation : new SFString("https://www.web3d.org/files/specifications/19774/V1.0/"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  /*supported Level of Articulation (LOA)*/
                  /*shared common input for single TimeSensor animating all interpolators, since different Behaviors may have different cycleInterval durations*/
                  /*TODO: add other X3D 3.0 TimeSensor fields (pause etc.)*/
                  /*Not supported: animated translation of individual joints*/
                  /*pass in key/keyValue array pairs for single PositionInterpolator*/
                  /*pass in key/keyValue array pairs and expose named output for each OrientationInterpolator, joint by joint*/
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("supportedLOA"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Supported Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3."),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("is this behavior enabled?"),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("cycleInterval"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("how long do these interpolators take to execute?"),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("loop"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("whether or not this behavior loops (e.g. walking) or is single shot (e.g. shake hands)."),
                      value : new SFString("false")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("startTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("when time now >= startTime isActive becomes true and TimeSensor becomes active"),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("stopTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("when stopTime becomes <= time now isActive becomes false and TimeSensor becomes inactive"),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("pauseTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("when time now >= pauseTime isPaused becomes true and TimeSensor becomes paused"),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("resumeTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("when resumeTime becomes <= time now isPaused becomes false and TimeSensor becomes inactive"),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("cycleTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("cycleTime sends a time outputOnly at startTime and also at the beginning of each new cycle")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isActive"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("isActive true/false events are sent when TimeSensor starts/stops running")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isPaused"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("isPaused true/false events are sent when TimeSensor is paused/resumed")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("elapsedTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("current elapsed time since TimeSensor activated/running cumulative in seconds and not counting any paused time")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("time"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("continuously sends the absolute time (since January 1 1970)")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("fraction_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("fraction_changed continuously sends value in range [0 1] showing time progress in the current cycle.")}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("HumanoidRoot_translation_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFVEC3F,
                      name : new SFString("HumanoidRoot_translation_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("HumanoidRoot_translation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("HumanoidRoot_rotation_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("HumanoidRoot_rotation_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("HumanoidRoot_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("c1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("c1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("c1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("c2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("c2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("c2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("c3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("c3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("c3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("c4_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("c4_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("c4_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("c5_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("c5_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("c5_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("c6_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("c6_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("c6_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("c7_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("c7_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("c7_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("jaw_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("jaw_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("jaw_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l4_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l4_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l4_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l5_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l5_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l5_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_acromioclavicular_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_acromioclavicular_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_acromioclavicular_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_ankle_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_ankle_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_ankle_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_calf_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_calf_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_calf_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_clavicle_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_clavicle_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_clavicle_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_elbow_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_elbow_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_elbow_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_eyeball_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_eyeball_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_eyeball_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_eyeball_joint_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_eyeball_joint_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_eyeball_joint_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_eyebrow_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_eyebrow_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_eyebrow_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_eyebrow_joint_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_eyebrow_joint_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_eyebrow_joint_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_eyelid_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_eyelid_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_eyelid_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_eyelid_joint_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_eyelid_joint_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_eyelid_joint_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_forearm_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_forearm_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_forearm_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_forefoot_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_forefoot_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_forefoot_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_hand_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_hand_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_hand_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_hindfoot_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_hindfoot_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_hindfoot_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_hip_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_hip_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_hip_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_index0_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_index0_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_index0_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_index1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_index1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_index1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_index2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_index2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_index2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_index3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_index3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_index3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_index_distal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_index_distal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_index_distal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_index_metacarpal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_index_metacarpal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_index_metacarpal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_index_middle_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_index_middle_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_index_middle_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_index_proximal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_index_proximal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_index_proximal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_knee_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_knee_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_knee_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_metatarsal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_metatarsal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_metatarsal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_middistal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_middistal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_middistal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_middle0_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_middle0_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_middle0_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_middle1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_middle1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_middle1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_middle2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_middle2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_middle2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_middle3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_middle3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_middle3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_middle_distal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_middle_distal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_middle_distal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_middle_metacarpal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_middle_metacarpal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_middle_metacarpal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_middle_middle_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_middle_middle_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_middle_middle_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_middle_proximal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_middle_proximal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_middle_proximal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_midproximal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_midproximal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_midproximal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_midtarsal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_midtarsal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_midtarsal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_pinky0_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_pinky0_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_pinky0_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_pinky1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_pinky1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_pinky1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_pinky2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_pinky2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_pinky2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_pinky3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_pinky3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_pinky3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_pinky_distal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_pinky_distal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_pinky_distal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_pinky_metacarpal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_pinky_metacarpal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_pinky_metacarpal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_pinky_middle_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_pinky_middle_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_pinky_middle_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_pinky_proximal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_pinky_proximal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_pinky_proximal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_ring0_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_ring0_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_ring0_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_ring1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_ring1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_ring1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_ring2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_ring2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_ring2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_ring3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_ring3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_ring3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_ring_distal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_ring_distal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_ring_distal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_ring_metacarpal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_ring_metacarpal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_ring_metacarpal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_ring_middle_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_ring_middle_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_ring_middle_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_ring_proximal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_ring_proximal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_ring_proximal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_scapula_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_scapula_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_scapula_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_shoulder_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_shoulder_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_shoulder_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_sternoclavicular_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_sternoclavicular_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_sternoclavicular_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_subtalar_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_subtalar_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_subtalar_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_thigh_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_thigh_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_thigh_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_thumb1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_thumb1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_thumb1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_thumb2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_thumb2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_thumb2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_thumb3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_thumb3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_thumb3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_thumb_distal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_thumb_distal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_thumb_distal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_thumb_metacarpal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_thumb_metacarpal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_thumb_metacarpal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_thumb_proximal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_thumb_proximal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_thumb_proximal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_upperarm_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_upperarm_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_upperarm_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("l_wrist_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("l_wrist_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_wrist_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("pelvis_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("pelvis_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("pelvis_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_acromioclavicular_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_acromioclavicular_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_acromioclavicular_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_ankle_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_ankle_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_ankle_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_calf_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_calf_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_calf_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_clavicle_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_clavicle_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_clavicle_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_elbow_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_elbow_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_elbow_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_eyeball_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_eyeball_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_eyeball_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_eyeball_joint_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_eyeball_joint_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_eyeball_joint_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_eyebrow_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_eyebrow_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_eyebrow_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_eyebrow_joint_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_eyebrow_joint_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_eyebrow_joint_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_eyelid_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_eyelid_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_eyelid_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_eyelid_joint_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_eyelid_joint_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_eyelid_joint_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_forearm_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_forearm_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_forearm_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_forefoot_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_forefoot_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_forefoot_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_hand_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_hand_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_hand_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_hindfoot_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_hindfoot_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_hindfoot_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_hip_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_hip_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_hip_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_index0_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_index0_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_index0_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_index1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_index1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_index1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_index2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_index2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_index2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_index3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_index3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_index3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_index_distal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_index_distal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_index_distal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_index_metacarpal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_index_metacarpal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_index_metacarpal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_index_middle_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_index_middle_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_index_middle_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_index_proximal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_index_proximal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_index_proximal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_knee_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_knee_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_knee_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_metatarsal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_metatarsal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_metatarsal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_middistal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_middistal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_middistal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_middle0_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_middle0_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_middle0_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_middle1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_middle1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_middle1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_middle2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_middle2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_middle2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_middle3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_middle3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_middle3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_middle_distal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_middle_distal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_middle_distal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_middle_metacarpal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_middle_metacarpal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_middle_metacarpal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_middle_middle_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_middle_middle_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_middle_middle_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_middle_proximal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_middle_proximal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_middle_proximal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_midproximal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_midproximal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_midproximal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_midtarsal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_midtarsal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_midtarsal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_pinky0_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_pinky0_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_pinky0_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_pinky1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_pinky1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_pinky1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_pinky2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_pinky2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_pinky2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_pinky3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_pinky3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_pinky3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_pinky_distal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_pinky_distal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_pinky_distal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_pinky_metacarpal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_pinky_metacarpal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_pinky_metacarpal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_pinky_middle_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_pinky_middle_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_pinky_middle_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_pinky_proximal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_pinky_proximal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_pinky_proximal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_ring0_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_ring0_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_ring0_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_ring1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_ring1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_ring1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_ring2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_ring2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_ring2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_ring3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_ring3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_ring3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_ring_distal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_ring_distal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_ring_distal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_ring_metacarpal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_ring_metacarpal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_ring_metacarpal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_ring_middle_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_ring_middle_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_ring_middle_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_ring_proximal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_ring_proximal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_ring_proximal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_scapula_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_scapula_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_scapula_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_shoulder_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_shoulder_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_shoulder_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_sternoclavicular_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_sternoclavicular_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_sternoclavicular_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_subtalar_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_subtalar_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_subtalar_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_thigh_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_thigh_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_thigh_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_thumb1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_thumb1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_thumb1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_thumb2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_thumb2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_thumb2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_thumb3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_thumb3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_thumb3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_thumb_distal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_thumb_distal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_thumb_distal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_thumb_metacarpal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_thumb_metacarpal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_thumb_metacarpal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_thumb_proximal_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_thumb_proximal_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_thumb_proximal_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_upperarm_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_upperarm_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_upperarm_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("r_wrist_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("r_wrist_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_wrist_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("sacroiliac_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("sacroiliac_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("sacroiliac_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("sacrum_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("sacrum_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("sacrum_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("skull_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("skull_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("skull_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("skullbase_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("skullbase_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("skullbase_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("t10_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("t10_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("t10_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("t11_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("t11_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("t11_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("t12_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("t12_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("t12_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("t1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("t1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("t1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("t2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("t2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("t2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("t3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("t3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("t3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("t4_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("t4_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("t4_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("t5_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("t5_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("t5_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("t6_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("t6_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("t6_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("t7_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("t7_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("t7_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("t8_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("t8_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("t8_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("t9_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("t9_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("t9_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("temporomandibular_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("temporomandibular_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("temporomandibular_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vc1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vc1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vc1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vc2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vc2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vc2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vc3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vc3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vc3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vc4_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vc4_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vc4_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vc5_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vc5_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vc5_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vc6_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vc6_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vc6_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vc7_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vc7_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vc7_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vl1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vl1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vl1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vl2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vl2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vl2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vl3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vl3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vl3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vl4_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vl4_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vl4_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vl5_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vl5_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vl5_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vt10_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vt10_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vt10_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vt11_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vt11_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vt11_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vt12_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vt12_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vt12_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vt1_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vt1_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vt1_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vt2_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vt2_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vt2_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vt3_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vt3_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vt3_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vt4_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vt4_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vt4_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vt5_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vt5_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vt5_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vt6_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vt6_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vt6_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vt7_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vt7_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vt7_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vt8_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vt8_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vt8_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("vt9_key"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_MFROTATION,
                      name : new SFString("vt9_keyValue"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      /*no default value*/}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vt9_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  /*design alternative: move TimeSensor out of the prototype, instead expose set_fraction globally to all interpolators*/
                  children : new MFNode([
                    new TimeSensor({
                      DEF : new SFString("BehaviorClock"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("enabled"),
                              protoField : new SFString("enabled")}),

                            new connect({
                              nodeField : new SFString("cycleInterval"),
                              protoField : new SFString("cycleInterval")}),

                            new connect({
                              nodeField : new SFString("loop"),
                              protoField : new SFString("loop")}),

                            new connect({
                              nodeField : new SFString("startTime"),
                              protoField : new SFString("startTime")}),

                            new connect({
                              nodeField : new SFString("stopTime"),
                              protoField : new SFString("stopTime")}),

                            new connect({
                              nodeField : new SFString("pauseTime"),
                              protoField : new SFString("pauseTime")}),

                            new connect({
                              nodeField : new SFString("resumeTime"),
                              protoField : new SFString("resumeTime")}),

                            new connect({
                              nodeField : new SFString("cycleTime"),
                              protoField : new SFString("cycleTime")}),

                            new connect({
                              nodeField : new SFString("isActive"),
                              protoField : new SFString("isActive")}),

                            new connect({
                              nodeField : new SFString("isPaused"),
                              protoField : new SFString("isPaused")}),

                            new connect({
                              nodeField : new SFString("elapsedTime"),
                              protoField : new SFString("elapsedTime")}),

                            new connect({
                              nodeField : new SFString("time"),
                              protoField : new SFString("time")}),

                            new connect({
                              nodeField : new SFString("fraction_changed"),
                              protoField : new SFString("fraction_changed")})])}))}),
                  /*note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless*/

                    new Switch({
                      DEF : new SFString("SupportedLoaHolder1"),
                      whichChoice : new SFInt32(-1),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("whichChoice"),
                              protoField : new SFString("supportedLOA")})])}))}),

                    new PositionInterpolator({
                      DEF : new SFString("HumanoidRootPI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("HumanoidRoot_translation_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("HumanoidRoot_translation_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("HumanoidRoot_translation_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("HumanoidRootPI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("HumanoidRootOI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("HumanoidRoot_rotation_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("HumanoidRoot_rotation_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("HumanoidRoot_rotation_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("HumanoidRootOI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("c1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("c1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("c1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("c1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("c1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("c2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("c2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("c2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("c2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("c2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("c3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("c3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("c3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("c3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("c3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("c4_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("c4_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("c4_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("c4_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("c4_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("c5_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("c5_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("c5_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("c5_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("c5_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("c6_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("c6_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("c6_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("c6_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("c6_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("c7_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("c7_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("c7_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("c7_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("c7_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("jaw_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("jaw_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("jaw_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("jaw_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("jaw_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l4_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l4_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l4_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l4_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l4_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l5_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l5_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l5_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l5_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l5_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_acromioclavicular_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_acromioclavicular_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_acromioclavicular_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_acromioclavicular_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_acromioclavicular_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_ankle_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_ankle_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_ankle_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_ankle_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_ankle_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_calf_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_calf_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_calf_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_calf_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_calf_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_clavicle_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_clavicle_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_clavicle_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_clavicle_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_clavicle_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_elbow_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_elbow_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_elbow_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_elbow_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_elbow_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_eyeball_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_eyeball_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_eyeball_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_eyeball_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_eyeball_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_eyeball_joint_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_eyeball_joint_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_eyeball_joint_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_eyeball_joint_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_eyeball_joint_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_eyebrow_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_eyebrow_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_eyebrow_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_eyebrow_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_eyebrow_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_eyebrow_joint_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_eyebrow_joint_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_eyebrow_joint_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_eyebrow_joint_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_eyebrow_joint_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_eyelid_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_eyelid_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_eyelid_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_eyelid_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_eyelid_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_eyelid_joint_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_eyelid_joint_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_eyelid_joint_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_eyelid_joint_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_eyelid_joint_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_forearm_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_forearm_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_forearm_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_forearm_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_forearm_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_forefoot_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_forefoot_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_forefoot_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_forefoot_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_forefoot_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_hand_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_hand_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_hand_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_hand_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_hand_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_hindfoot_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_hindfoot_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_hindfoot_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_hindfoot_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_hindfoot_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_hip_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_hip_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_hip_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_hip_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_hip_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_index0_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_index0_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_index0_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_index0_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_index0_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_index1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_index1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_index1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_index1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_index1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_index2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_index2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_index2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_index2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_index2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_index3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_index3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_index3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_index3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_index3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_index_distal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_index_distal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_index_distal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_index_distal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_index_distal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_index_metacarpal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_index_metacarpal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_index_metacarpal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_index_metacarpal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_index_metacarpal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_index_middle_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_index_middle_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_index_middle_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_index_middle_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_index_middle_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_index_proximal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_index_proximal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_index_proximal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_index_proximal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_index_proximal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_knee_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_knee_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_knee_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_knee_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_knee_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_metatarsal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_metatarsal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_metatarsal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_metatarsal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_metatarsal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_middistal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_middistal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_middistal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_middistal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_middistal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_middle0_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_middle0_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_middle0_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_middle0_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_middle0_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_middle1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_middle1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_middle1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_middle1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_middle1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_middle2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_middle2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_middle2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_middle2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_middle2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_middle3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_middle3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_middle3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_middle3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_middle3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_middle_distal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_middle_distal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_middle_distal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_middle_distal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_middle_distal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_middle_metacarpal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_middle_metacarpal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_middle_metacarpal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_middle_metacarpal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_middle_metacarpal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_middle_middle_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_middle_middle_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_middle_middle_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_middle_middle_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_middle_middle_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_middle_proximal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_middle_proximal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_middle_proximal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_middle_proximal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_middle_proximal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_midproximal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_midproximal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_midproximal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_midproximal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_midproximal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_midtarsal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_midtarsal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_midtarsal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_midtarsal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_midtarsal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_pinky0_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_pinky0_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_pinky0_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_pinky0_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_pinky0_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_pinky1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_pinky1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_pinky1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_pinky1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_pinky1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_pinky2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_pinky2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_pinky2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_pinky2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_pinky2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_pinky3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_pinky3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_pinky3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_pinky3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_pinky3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_pinky_distal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_pinky_distal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_pinky_distal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_pinky_distal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_pinky_distal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_pinky_metacarpal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_pinky_metacarpal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_pinky_metacarpal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_pinky_metacarpal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_pinky_metacarpal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_pinky_middle_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_pinky_middle_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_pinky_middle_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_pinky_middle_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_pinky_middle_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_pinky_proximal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_pinky_proximal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_pinky_proximal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_pinky_proximal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_pinky_proximal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_ring0_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_ring0_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_ring0_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_ring0_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_ring0_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_ring1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_ring1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_ring1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_ring1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_ring1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_ring2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_ring2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_ring2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_ring2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_ring2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_ring3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_ring3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_ring3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_ring3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_ring3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_ring_distal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_ring_distal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_ring_distal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_ring_distal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_ring_distal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_ring_metacarpal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_ring_metacarpal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_ring_metacarpal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_ring_metacarpal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_ring_metacarpal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_ring_middle_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_ring_middle_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_ring_middle_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_ring_middle_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_ring_middle_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_ring_proximal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_ring_proximal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_ring_proximal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_ring_proximal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_ring_proximal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_scapula_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_scapula_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_scapula_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_scapula_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_scapula_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_shoulder_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_shoulder_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_shoulder_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_shoulder_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_shoulder_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_sternoclavicular_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_sternoclavicular_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_sternoclavicular_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_sternoclavicular_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_sternoclavicular_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_subtalar_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_subtalar_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_subtalar_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_subtalar_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_subtalar_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_thigh_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_thigh_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_thigh_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_thigh_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_thigh_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_thumb1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_thumb1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_thumb1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_thumb1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_thumb1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_thumb2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_thumb2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_thumb2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_thumb2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_thumb2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_thumb3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_thumb3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_thumb3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_thumb3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_thumb3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_thumb_distal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_thumb_distal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_thumb_distal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_thumb_distal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_thumb_distal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_thumb_metacarpal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_thumb_metacarpal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_thumb_metacarpal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_thumb_metacarpal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_thumb_metacarpal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_thumb_proximal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_thumb_proximal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_thumb_proximal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_thumb_proximal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_thumb_proximal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_upperarm_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_upperarm_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_upperarm_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_upperarm_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_upperarm_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("l_wrist_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("l_wrist_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("l_wrist_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("l_wrist_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("l_wrist_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("pelvis_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("pelvis_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("pelvis_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("pelvis_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("pelvis_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_acromioclavicular_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_acromioclavicular_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_acromioclavicular_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_acromioclavicular_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_acromioclavicular_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_ankle_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_ankle_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_ankle_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_ankle_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_ankle_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_calf_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_calf_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_calf_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_calf_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_calf_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_clavicle_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_clavicle_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_clavicle_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_clavicle_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_clavicle_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_elbow_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_elbow_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_elbow_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_elbow_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_elbow_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_eyeball_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_eyeball_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_eyeball_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_eyeball_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_eyeball_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_eyeball_joint_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_eyeball_joint_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_eyeball_joint_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_eyeball_joint_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_eyeball_joint_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_eyebrow_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_eyebrow_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_eyebrow_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_eyebrow_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_eyebrow_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_eyebrow_joint_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_eyebrow_joint_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_eyebrow_joint_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_eyebrow_joint_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_eyebrow_joint_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_eyelid_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_eyelid_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_eyelid_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_eyelid_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_eyelid_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_eyelid_joint_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_eyelid_joint_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_eyelid_joint_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_eyelid_joint_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_eyelid_joint_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_forearm_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_forearm_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_forearm_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_forearm_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_forearm_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_forefoot_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_forefoot_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_forefoot_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_forefoot_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_forefoot_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_hand_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_hand_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_hand_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_hand_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_hand_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_hindfoot_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_hindfoot_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_hindfoot_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_hindfoot_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_hindfoot_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_hip_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_hip_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_hip_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_hip_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_hip_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_index0_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_index0_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_index0_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_index0_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_index0_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_index1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_index1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_index1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_index1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_index1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_index2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_index2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_index2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_index2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_index2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_index3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_index3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_index3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_index3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_index3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_index_distal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_index_distal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_index_distal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_index_distal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_index_distal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_index_metacarpal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_index_metacarpal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_index_metacarpal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_index_metacarpal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_index_metacarpal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_index_middle_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_index_middle_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_index_middle_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_index_middle_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_index_middle_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_index_proximal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_index_proximal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_index_proximal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_index_proximal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_index_proximal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_knee_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_knee_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_knee_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_knee_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_knee_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_metatarsal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_metatarsal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_metatarsal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_metatarsal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_metatarsal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_middistal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_middistal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_middistal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_middistal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_middistal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_middle0_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_middle0_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_middle0_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_middle0_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_middle0_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_middle1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_middle1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_middle1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_middle1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_middle1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_middle2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_middle2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_middle2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_middle2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_middle2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_middle3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_middle3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_middle3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_middle3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_middle3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_middle_distal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_middle_distal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_middle_distal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_middle_distal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_middle_distal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_middle_metacarpal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_middle_metacarpal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_middle_metacarpal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_middle_metacarpal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_middle_metacarpal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_middle_middle_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_middle_middle_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_middle_middle_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_middle_middle_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_middle_middle_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_middle_proximal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_middle_proximal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_middle_proximal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_middle_proximal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_middle_proximal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_midproximal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_midproximal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_midproximal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_midproximal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_midproximal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_midtarsal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_midtarsal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_midtarsal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_midtarsal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_midtarsal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_pinky0_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_pinky0_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_pinky0_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_pinky0_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_pinky0_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_pinky1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_pinky1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_pinky1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_pinky1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_pinky1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_pinky2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_pinky2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_pinky2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_pinky2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_pinky2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_pinky3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_pinky3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_pinky3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_pinky3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_pinky3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_pinky_distal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_pinky_distal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_pinky_distal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_pinky_distal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_pinky_distal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_pinky_metacarpal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_pinky_metacarpal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_pinky_metacarpal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_pinky_metacarpal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_pinky_metacarpal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_pinky_middle_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_pinky_middle_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_pinky_middle_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_pinky_middle_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_pinky_middle_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_pinky_proximal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_pinky_proximal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_pinky_proximal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_pinky_proximal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_pinky_proximal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_ring0_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_ring0_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_ring0_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_ring0_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_ring0_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_ring1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_ring1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_ring1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_ring1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_ring1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_ring2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_ring2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_ring2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_ring2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_ring2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_ring3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_ring3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_ring3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_ring3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_ring3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_ring_distal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_ring_distal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_ring_distal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_ring_distal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_ring_distal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_ring_metacarpal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_ring_metacarpal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_ring_metacarpal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_ring_metacarpal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_ring_metacarpal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_ring_middle_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_ring_middle_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_ring_middle_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_ring_middle_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_ring_middle_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_ring_proximal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_ring_proximal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_ring_proximal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_ring_proximal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_ring_proximal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_scapula_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_scapula_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_scapula_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_scapula_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_scapula_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_shoulder_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_shoulder_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_shoulder_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_shoulder_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_shoulder_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_sternoclavicular_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_sternoclavicular_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_sternoclavicular_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_sternoclavicular_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_sternoclavicular_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_subtalar_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_subtalar_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_subtalar_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_subtalar_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_subtalar_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_thigh_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_thigh_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_thigh_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_thigh_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_thigh_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_thumb1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_thumb1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_thumb1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_thumb1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_thumb1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_thumb2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_thumb2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_thumb2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_thumb2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_thumb2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_thumb3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_thumb3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_thumb3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_thumb3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_thumb3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_thumb_distal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_thumb_distal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_thumb_distal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_thumb_distal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_thumb_distal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_thumb_metacarpal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_thumb_metacarpal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_thumb_metacarpal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_thumb_metacarpal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_thumb_metacarpal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_thumb_proximal_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_thumb_proximal_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_thumb_proximal_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_thumb_proximal_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_thumb_proximal_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_upperarm_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_upperarm_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_upperarm_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_upperarm_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_upperarm_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("r_wrist_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("r_wrist_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("r_wrist_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("r_wrist_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("r_wrist_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("sacroiliac_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("sacroiliac_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("sacroiliac_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("sacroiliac_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("sacroiliac_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("sacrum_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("sacrum_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("sacrum_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("sacrum_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("sacrum_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("skull_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("skull_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("skull_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("skull_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("skull_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("skullbase_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("skullbase_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("skullbase_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("skullbase_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("skullbase_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("t1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("t1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("t1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("t1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("t1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("t2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("t2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("t2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("t2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("t2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("t3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("t3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("t3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("t3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("t3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("t4_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("t4_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("t4_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("t4_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("t4_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("t5_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("t5_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("t5_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("t5_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("t5_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("t6_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("t6_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("t6_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("t6_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("t6_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("t7_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("t7_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("t7_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("t7_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("t7_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("t8_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("t8_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("t8_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("t8_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("t8_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("t9_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("t9_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("t9_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("t9_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("t9_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("t10_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("t10_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("t10_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("t10_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("t10_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("t11_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("t11_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("t11_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("t11_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("t11_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("t12_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("t12_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("t12_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("t12_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("t12_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("temporomandibular_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("temporomandibular_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("temporomandibular_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("temporomandibular_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("temporomandibular_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vc1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vc1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vc1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vc1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vc1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vc2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vc2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vc2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vc2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vc2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vc3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vc3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vc3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vc3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vc3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vc4_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vc4_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vc4_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vc4_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vc4_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vc5_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vc5_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vc5_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vc5_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vc5_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vc6_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vc6_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vc6_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vc6_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vc6_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vc7_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vc7_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vc7_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vc7_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vc7_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vl1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vl1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vl1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vl1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vl1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vl2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vl2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vl2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vl2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vl2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vl3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vl3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vl3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vl3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vl3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vl4_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vl4_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vl4_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vl4_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vl4_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vl5_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vl5_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vl5_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vl5_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vl5_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vt1_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vt1_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vt1_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vt1_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vt1_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vt2_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vt2_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vt2_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vt2_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vt2_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vt3_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vt3_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vt3_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vt3_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vt3_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vt4_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vt4_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vt4_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vt4_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vt4_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vt5_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vt5_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vt5_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vt5_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vt5_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vt6_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vt6_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vt6_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vt6_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vt6_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vt7_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vt7_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vt7_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vt7_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vt7_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vt8_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vt8_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vt8_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vt8_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vt8_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vt9_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vt9_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vt9_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vt9_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vt9_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vt10_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vt10_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vt10_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vt10_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vt10_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vt11_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vt11_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vt11_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vt11_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vt11_OI")}),

                    new OrientationInterpolator({
                      DEF : new SFString("vt12_OI"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("key"),
                              protoField : new SFString("vt12_key")}),

                            new connect({
                              nodeField : new SFString("keyValue"),
                              protoField : new SFString("vt12_keyValue")}),

                            new connect({
                              nodeField : new SFString("value_changed"),
                              protoField : new SFString("vt12_changed")})])}))}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("BehaviorClock"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("vt12_OI")})])}))}),

            new ProtoDeclare({
              name : new SFString("HAnimBodyBehaviorChooser"),
              appinfo : new SFString("The HAnimBodyBehaviorChooser node allows an author to select one of several HAnimHumanoid bodies and simultaneously apply multiple HAnimBehavior animations to the active body. Individual behaviors may be enabled or disabled at any time."),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  /*TODO: supported Level of Articulation (LOA) might be adapted to more efficiently setup/teardown pertinent ROUTEs*/
                  /*accessType=\"inputOutput\" avoided to maintain backwards compatilibility with VRML97 scripting constraints*/
                  /*shared common TimeSensor inputs for all BehaviorAnimation nodes, connected via ROUTEs*/
                  /*TODO: consider named accessors, e.g. enableBehaviorByName and disableBehaviorByName*/
                  /*TODO: consider addBody, removeBody, addBehavior, removeBehavior*/
                  /*TODO: consider startBehaviorByIndex, stopBehaviorByIndex, startBehaviorByName, stopBehaviorByName*/
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("supportedLOA"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Level of Articulation (LOA) support needed by authored HAnimBehavior set of OrientationInterpolator values. Legal values 0 1 2 3."),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("HumanoidArray"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("[HAnimHumanoid] nodes only"),
                      /*default NULL*/}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("whichBody"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("whichBody is selected default is initial member of HumanoidArray"),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("set_whichBody"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                      appinfo : new SFString("whichBody is selected default is none")}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("whichBody_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("whichBody is selected default is none")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("hAnimBehaviorNodes"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("[HAnimBehavior] nodes only some or all of which may be enabled. Warning: do not animate a single joint with more than one interpolator at a given time."),
                      /*default NULL*/}),

                    new field({
                      type : field.TYPE_MFBOOL,
                      name : new SFString("enabledBehaviorsArray"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("indicate which HAnimBehavior nodes are activated, empty indicates all enabled true"),
                      /*no default values*/}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("enableBehavior"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                      appinfo : new SFString("enable corresponding behavior identified by index number")}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("disableBehavior"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                      appinfo : new SFString("disable corresponding behavior identified by index number")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("startTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("stopTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Switch({
                      DEF : new SFString("BodySwitch"),
                      whichChoice : new SFInt32(-1),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("whichChoice"),
                              protoField : new SFString("whichBody")}),

                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("HumanoidArray")})])}))}),
                  /*note that other nodes following the first node in the ProtoBody are not rendered but remain active nevertheless*/

                    new Group({
                      DEF : new SFString("BehaviorArrayHolder"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("hAnimBehaviorNodes")})])}))}),

                    new TimeSensor({
                      DEF : new SFString("TimeSensorHolderStartStopTimes"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("startTime"),
                              protoField : new SFString("startTime")}),

                            new connect({
                              nodeField : new SFString("stopTime"),
                              protoField : new SFString("stopTime")})])}))}),

                    new Switch({
                      DEF : new SFString("SupportedLoaHolder2"),
                      whichChoice : new SFInt32(-1),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("whichChoice"),
                              protoField : new SFString("supportedLOA")})])}))}),

                    new Script({
                      DEF : new SFString("BehaviorSelectionScript"),
                      directOutput : new SFBool(true),
                      url : new MFString(["HAnimBehaviorPrototypesScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimBehaviorPrototypesScript.js"]),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_MFNODE,
                          name : new SFString("HumanoidArray"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("[HAnimHumanoid] nodes only")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("whichBody"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("whichBody is selected default is none")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("set_whichBody"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          appinfo : new SFString("whichBody is selected default is none")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("whichBody_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          appinfo : new SFString("whichBody is selected default is none")}),

                        new field({
                          type : field.TYPE_MFNODE,
                          name : new SFString("hAnimBehaviorNodes"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("[HAnimBehavior] nodes only"),
                          /*TODO: might consider accessType=\"inputOutput\" if VRML97 compatibility not needed*/}),

                        new field({
                          type : field.TYPE_MFBOOL,
                          name : new SFString("enabledBehaviorsArray"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("enableBehavior"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          appinfo : new SFString("enable corresponding behavior")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("disableBehavior"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          appinfo : new SFString("enable corresponding behavior")}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("timeSensorNode"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new TimeSensor({
                              USE : new SFString("TimeSensorHolderStartStopTimes")})])}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("previousBodyIndex"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("remember prior body index to avoid unnecessary ROUTE teardown and creation"),
                          value : new SFString("-1")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("traceEnabled"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("true")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("HumanoidArray"),
                              protoField : new SFString("HumanoidArray")}),

                            new connect({
                              nodeField : new SFString("whichBody"),
                              protoField : new SFString("whichBody")}),

                            new connect({
                              nodeField : new SFString("set_whichBody"),
                              protoField : new SFString("set_whichBody")}),

                            new connect({
                              nodeField : new SFString("whichBody_changed"),
                              protoField : new SFString("whichBody_changed")}),

                            new connect({
                              nodeField : new SFString("hAnimBehaviorNodes"),
                              protoField : new SFString("hAnimBehaviorNodes")}),

                            new connect({
                              nodeField : new SFString("enabledBehaviorsArray"),
                              protoField : new SFString("enabledBehaviorsArray")}),

                            new connect({
                              nodeField : new SFString("enableBehavior"),
                              protoField : new SFString("enableBehavior")}),

                            new connect({
                              nodeField : new SFString("disableBehavior"),
                              protoField : new SFString("disableBehavior")})])})])})])}))}),
          /*TODO: Goal is to have 3 different ways to present a body: local creation, Inline with IMPORT/EXPORT, or external prototype.*/

            new ProtoInstance({
              name : new SFString("HAnimBehavior"),
              DEF : new SFString("BehaviorTest1"),
              /*only one PositionInterpolator key/keyValue definition for entire humanoid - optional*/
              /*must have paired overrides of each key/keyValue array being defined*/
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("HumanoidRoot_translation_key"),
                  value : new SFString("0 0.25 0.5 0.75 1")}),

                new fieldValue({
                  name : new SFString("HumanoidRoot_translation_keyValue"),
                  value : new SFString("0 0 0 0 0 10 0 0 20 0 0 30 0 0 40 0 0 50")}),

                new fieldValue({
                  name : new SFString("r_ankle_key"),
                  value : new SFString("0 0.5 1")}),

                new fieldValue({
                  name : new SFString("r_ankle_keyValue"),
                  value : new SFString("0 1 0 0 0 1 0 0.2 0 1 0 0.4")})])}),

            new ProtoInstance({
              name : new SFString("HAnimBodyBehaviorChooser"),
              DEF : new SFString("ChooserTest"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("HumanoidArray"),
                  children : new MFNode([
                    new HAnimHumanoid({
                      name : new SFString("DiamondManLOA-1"),
                      DEF : new SFString("hanim_DiamondManLOA-1"),
                      version : new SFString("2.0")})])}),

                new fieldValue({
                  name : new SFString("whichBody"),
                  value : new SFString("0")}),

                new fieldValue({
                  name : new SFString("hAnimBehaviorNodes"),
                  children : new MFNode([
                    new ProtoInstance({
                      USE : new SFString("BehaviorTest1")})])}),

                new fieldValue({
                  name : new SFString("enabledBehaviorsArray"),
                  value : new SFString("true")})])})])}))});
console.log(X3D0.toXMLNode());
