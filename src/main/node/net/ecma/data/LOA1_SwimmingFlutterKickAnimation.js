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
var Viewpoint = require('./x3d.js');
var SFVec3f = require('./x3d.js');
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
              content : new SFString("LOA1_SwimmingFlutterKickAnimation.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Humanoid animation prototype reusable by any Humanoid.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Etsuko Lippi")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("13 December 2001")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("23 May 2020")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("not yet tested, need to compare with NancyDivingExample interpolators")}),

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
              content : new SFString("Swimming flutter kick Animation HAnim 2001")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("LOA1_SwimmingFlutterKickAnimation.x3d")}),

            new ProtoDeclare({
              name : new SFString("LOA1_DivingAnimation"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("cycleInterval"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("7")}),

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
                          key : new MFFloat([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]),
                          keyValue : new MFVec3f([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("HumanoidRoot_translation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("HUMANOIDROOT_ANIMATOR"),
                          key : new MFFloat([0,1]),
                          keyValue : new MFRotation([0,0,1,0,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("HumanoidRoot_rotation_changed")})])}))}),
                      /*no SACROILIAC_ANIMATOR*/

                        new OrientationInterpolator({
                          DEF : new SFString("L_HIP_ANIMATOR"),
                          key : new MFFloat([0,0.25,0.375,0.6667,0.7917,0.9167,1]),
                          keyValue : new MFRotation([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_hip_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_KNEE_ANIMATOR"),
                          key : new MFFloat([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]),
                          keyValue : new MFRotation([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_knee_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_ANKLE_ANIMATOR"),
                          key : new MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]),
                          keyValue : new MFRotation([1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001,1,0,0,0.6509,1,0,0,0.6001]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_ankle_rotation_changed")})])}))}),
                      /*no L_MIDTARSAL_ANIMATOR*/

                        new OrientationInterpolator({
                          DEF : new SFString("R_HIP_ANIMATOR"),
                          key : new MFFloat([0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1]),
                          keyValue : new MFRotation([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_hip_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_KNEE_ANIMATOR"),
                          key : new MFFloat([0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1]),
                          keyValue : new MFRotation([1,0,0,0.8573,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.8573]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_knee_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_ANKLE_ANIMATOR"),
                          key : new MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]),
                          keyValue : new MFRotation([1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8001,1,0,0,0.8509,1,0,0,0.86001]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_ankle_rotation_changed")})])}))}),
                      /*no L_MIDTARSAL_ANIMATOR*/

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
                          key : new MFFloat([0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1]),
                          keyValue : new MFRotation([-1,0,0,1,-1,0,0,1,-1,0,0,0.999,-1,0,0,0.99,-1,0,0,0.99,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,0.9,-1,0,0,1]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("skullbase_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_SHOULDER_ANIMATOR"),
                          key : new MFFloat([0,0.25,0.375,0.6667,0.7917,0.9167,1]),
                          keyValue : new MFRotation([0,0,1,0.1,0,0,1,0.2,0,0,1,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2]),
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
                          key : new MFFloat([0,0.32,0.64,0.88,1]),
                          keyValue : new MFRotation([0,0,1,0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0,0,1,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_wrist_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_SHOULDER_ANIMATOR"),
                          key : new MFFloat([0,0.45,0.64,0.76,0.88,1]),
                          keyValue : new MFRotation([0,0,1,0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0]),
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
                      toNode : new SFString("SKULLBASE_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("VL5_ANIMATOR")}),

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

            new Viewpoint({
              description : new SFString("LOA1_SwimmingFlutterKickAnimation scene"),
              position : new SFVec3f([0,0,12])}),

            new Anchor({
              description : new SFString("Nancy Diving"),
              parameter : new MFString(["target=_blank"]),
              url : new MFString(["NancyDiving.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d","NancyDiving.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl"]),
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["LOA1_SwimmingFlutterKickAnimation.x3d","defines a prototype","for animating a humanoid.","","Click text to see example."]),
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
