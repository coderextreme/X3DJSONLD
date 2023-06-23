'use strict';
var X3D = require('./x3d.js');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.js');
var SFNode = require('./x3d.js');
var head = require('./x3d.js');
var MFNode = require('./x3d.js');
var meta = require('./x3d.js');
var Scene = require('./x3d.js');
var WorldInfo = require('./x3d.js');
var ProtoDeclare = require('./x3d.js');
var ProtoInterface = require('./x3d.js');
var field = require('./x3d.js');
var ProtoBody = require('./x3d.js');
var Group = require('./x3d.js');
var TimeSensor = require('./x3d.js');
var SFBool = require('./x3d.js');
var IS = require('./x3d.js');
var connect = require('./x3d.js');
var PositionInterpolator = require('./x3d.js');
var MFFloat = require('./x3d.js');
var MFVec3f = require('./x3d.js');
var OrientationInterpolator = require('./x3d.js');
var MFRotation = require('./x3d.js');
var ROUTE = require('./x3d.js');
var Anchor = require('./x3d.js');
var MFString = require('./x3d.js');
var Shape = require('./x3d.js');
var Text = require('./x3d.js');
var FontStyle = require('./x3d.js');
var SFFloat = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var SFColor = require('./x3d.js');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("LOA1_JumpAnimation.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Humanoid animation prototype reusable by any Humanoid.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Cindy Ballreich cindy@ballreich.net 3Name3D")}),

            new meta({
              name : new SFString("rights"),
              content : new SFString("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Scott Tufts")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("1 December 2001")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("23 May 2020")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.HAnim.org")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Models")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Nodes")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("InterchangableActorsViaDynamicRouting Nancy jump Animation HAnim 2001")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_JumpAnimation.x3d")}),

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
              title : new SFString("LOA1_JumpAnimation.x3d")}),

            new ProtoDeclare({
              name : new SFString("LOA1_JumpAnimation"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("cycleInterval"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("2")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("loop"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("startTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("stopTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("fraction_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isActive"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("HumanoidRoot_translation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("HumanoidRoot_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("lower_body_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_hip_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_knee_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_ankle_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_midtarsal_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_hip_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_knee_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_ankle_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_midtarsal_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("vl5_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("skullbase_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_shoulder_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_elbow_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("l_wrist_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_shoulder_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_elbow_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("r_wrist_rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new TimeSensor({
                          DEF : new SFString("TIMER"),
                          loop : new SFBool(true),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("cycleInterval"),
                                  protoField : new SFString("cycleInterval")}),

                                new connect({
                                  nodeField : new SFString("enabled"),
                                  protoField : new SFString("enabled")}),

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
                                  nodeField : new SFString("fraction_changed"),
                                  protoField : new SFString("fraction_changed")}),

                                new connect({
                                  nodeField : new SFString("isActive"),
                                  protoField : new SFString("isActive")})])}))}),

                        new PositionInterpolator({
                          DEF : new SFString("HUMANOIDROOT_POSITION_ANIMATOR"),
                          key : new MFFloat([0,0.04,0.08,0.12,0.16,0.2,0.24,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.8,0.84,0.88,0.92,0.96,1]),
                          keyValue : new MFVec3f([0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.3269,-0.1499,-0.0008616,-0.13,-0.06358,-0.0005128,-0.03123,-0.05488,0.0004779,0.053,0.02732,0.0001728,0.4148,0.006873,0,0.03045,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("HumanoidRoot_translation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("HUMANOIDROOT_ANIMATOR"),
                          key : new MFFloat([0,0.28,0.32,0.48,0.64,0.76,1]),
                          keyValue : new MFRotation([0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("HumanoidRoot_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("SACROILIAC_ANIMATOR"),
                          key : new MFFloat([0,0.28,0.32,0.48,0.76,1]),
                          keyValue : new MFRotation([0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("lower_body_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_HIP_ANIMATOR"),
                          key : new MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]),
                          keyValue : new MFRotation([0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_hip_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_KNEE_ANIMATOR"),
                          key : new MFFloat([0,0.28,0.32,0.48,0.64,0.76,0.88,1]),
                          keyValue : new MFRotation([0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_knee_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_ANKLE_ANIMATOR"),
                          key : new MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]),
                          keyValue : new MFRotation([0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_ankle_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_MIDTARSAL_ANIMATOR"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFRotation([1,0,0,0,1,0,0,-0.2,1,0,0,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_midtarsal_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_HIP_ANIMATOR"),
                          key : new MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]),
                          keyValue : new MFRotation([0,0,1,0,1,0,0,4.433,1,0,0,4.433,1,0,0,4.647,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_hip_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_KNEE_ANIMATOR"),
                          key : new MFFloat([0,0.28,0.32,0.48,0.64,0.76,0.88,1]),
                          keyValue : new MFRotation([0,0,1,0,1,0,0,2.005,1,0,0,2.005,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_knee_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_ANKLE_ANIMATOR"),
                          key : new MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]),
                          keyValue : new MFRotation([0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,0.3001,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_ankle_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_MIDTARSAL_ANIMATOR"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFRotation([1,0,0,-0.2,1,0,0,0,1,0,0,-0.2]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_midtarsal_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("VL5_ANIMATOR"),
                          key : new MFFloat([0,0.2083,0.375,0.75,0.8333,1]),
                          keyValue : new MFRotation([0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("vl5_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("SKULLBASE_ANIMATOR"),
                          key : new MFFloat([0,0.28,0.32,0.48,0.76,1]),
                          keyValue : new MFRotation([0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("skullbase_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_SHOULDER_ANIMATOR"),
                          key : new MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]),
                          keyValue : new MFRotation([0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_shoulder_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_ELBOW_ANIMATOR"),
                          key : new MFFloat([0,0.28,0.32,0.64,0.76,1]),
                          keyValue : new MFRotation([0,0,1,0,-1,0,0,0.1229,-1,0,0,0.1229,-1,0,0,0.5976,-1,0,0,0.3917,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_elbow_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_WRIST_ANIMATOR"),
                          key : new MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]),
                          keyValue : new MFRotation([0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_wrist_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_SHOULDER_ANIMATOR"),
                          key : new MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]),
                          keyValue : new MFRotation([0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_shoulder_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_ELBOW_ANIMATOR"),
                          key : new MFFloat([0,0.28,0.32,0.64,0.76,1]),
                          keyValue : new MFRotation([0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_elbow_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_WRIST_ANIMATOR"),
                          key : new MFFloat([0,0.28,0.32,0.64,0.76,1]),
                          keyValue : new MFRotation([0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_wrist_rotation_changed")})])}))})])}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("HUMANOIDROOT_POSITION_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("HUMANOIDROOT_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("SACROILIAC_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("L_HIP_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("L_KNEE_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("L_ANKLE_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("L_MIDTARSAL_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("R_HIP_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("R_KNEE_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("R_ANKLE_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("R_MIDTARSAL_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("VL5_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("SKULLBASE_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("L_SHOULDER_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("L_ELBOW_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("L_WRIST_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("R_SHOULDER_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("R_ELBOW_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("R_WRIST_ANIMATOR")})])}))}),

            new Anchor({
              description : new SFString("see InterchangableActorsViaDynamicRouting scene"),
              parameter : new MFString(["target=_blank"]),
              url : new MFString(["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]),
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["LOA1_JumpAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          justify : new MFString(["MIDDLE","MIDDLE"]),
                          size : new SFFloat(0.8)}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,1,0.2])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
