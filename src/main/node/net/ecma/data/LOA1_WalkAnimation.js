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
              content : new SFString("LOA1_WalkAnimation.x3d")}),

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
              content : new SFString("Don Brutzman")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("1 October 2001")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("23 May 2020")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Specifications/HAnim2001")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Models")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Nodes")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("Nancy Walk Animation HAnim 2001")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d")}),

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
              title : new SFString("LOA1_WalkAnimation.x3d")}),

            new ProtoDeclare({
              name : new SFString("LOA1_WalkAnimation"),
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
                          keyValue : new MFRotation([0,1,0,0,0,1,0,0]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("HumanoidRoot_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("SACROILIAC_ANIMATOR"),
                          key : new MFFloat([0,0.5,1]),
                          keyValue : new MFRotation([0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("lower_body_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_HIP_ANIMATOR"),
                          key : new MFFloat([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]),
                          keyValue : new MFRotation([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865]),
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
                          key : new MFFloat([0,0.125,0.2083,0.375,0.6667,0.9167,1]),
                          keyValue : new MFRotation([-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714]),
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
                          key : new MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]),
                          keyValue : new MFRotation([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_hip_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_KNEE_ANIMATOR"),
                          key : new MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]),
                          keyValue : new MFRotation([1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,-1.176e-8,-4.971e-9,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_knee_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_ANKLE_ANIMATOR"),
                          key : new MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]),
                          keyValue : new MFRotation([0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,-1.641e-7,1.827e-8,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0]),
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
                          key : new MFFloat([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]),
                          keyValue : new MFRotation([0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("skullbase_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_SHOULDER_ANIMATOR"),
                          key : new MFFloat([0,0.375,0.9167,1]),
                          keyValue : new MFRotation([1,0,0,0.1189,-1,-5.928e-7,1.525e-7,0.1861,1,-2.038e-7,-1.257e-7,0.3357,1,0,0,0.1189]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_shoulder_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_ELBOW_ANIMATOR"),
                          key : new MFFloat([0,0.375,0.9167,1]),
                          keyValue : new MFRotation([-1,-1.58298e-7,8.15967e-8,0.0659878,-1,-3.28826e-8,-2.31665e-8,0.488383,-1,0.00000306462,-0.00000311947,0.0177536,-1,-1.58298e-7,8.15967e-8,0.0659878]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_elbow_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_WRIST_ANIMATOR"),
                          key : new MFFloat([0,0.375,0.9167,1]),
                          keyValue : new MFRotation([0.00000151276,-1,0.0000017724,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0.00000151276,-1,0.0000017724,0.461076]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_wrist_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_SHOULDER_ANIMATOR"),
                          key : new MFFloat([0,0.375,0.9167,1]),
                          keyValue : new MFRotation([-1,-7.689e-7,-1.48e-7,0.09346,1,5.004e-8,2.254e-8,0.3197,-1,-1.104e-7,5.267e-10,0.1564,-1,-7.689e-7,-1.48e-7,0.09346]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_shoulder_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_ELBOW_ANIMATOR"),
                          key : new MFFloat([0,0.375,0.9167,1]),
                          keyValue : new MFRotation([-1,-4.45619e-8,2.70318e-8,0.411508,-1,8.16742e-7,-1.09556e-7,0.0925011,-1,-2.47628e-8,-7.02862e-9,0.572568,-1,-4.45619e-8,2.70318e-8,0.411508]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_elbow_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_WRIST_ANIMATOR"),
                          key : new MFFloat([0,0.375,0.9167,1]),
                          keyValue : new MFRotation([-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]),
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
          /*======================================*/
          /*Point to example use in case someone inspects this file*/

            new Anchor({
              description : new SFString("InterchangableActorsViaDynamicRouting"),
              parameter : new MFString(["target=_blank"]),
              url : new MFString(["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]),
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["LOA1_WalkAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]),
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