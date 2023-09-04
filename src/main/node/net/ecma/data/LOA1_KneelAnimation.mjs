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
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("LOA1_KneelAnimation.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Humanoid animation prototype reusable by any Humanoid.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Tom Miller")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Curt Blais")}),

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
              content : new SFString("http://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl")}),

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
              content : new SFString("Nancy kneel Animation HAnim 2001")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("LOA1_KneelAnimation"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("cycleInterval"),
                      value : new SFString("2")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("enabled"),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("loop")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("startTime")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      name : new SFString("stopTime"),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("fraction_changed")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("isActive")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("HumanoidRoot_translation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("HumanoidRoot_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("lower_body_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("l_hip_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("l_knee_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("l_ankle_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("l_midtarsal_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("r_hip_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("r_knee_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("r_ankle_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("r_midtarsal_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("vl5_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("skullbase_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("l_shoulder_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("l_elbow_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("l_wrist_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("r_shoulder_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("r_elbow_rotation_changed")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      name : new SFString("r_wrist_rotation_changed")})])})),
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
                                  nodeField : new SFString("isActive"),
                                  protoField : new SFString("isActive")}),

                                new connect({
                                  nodeField : new SFString("fraction_changed"),
                                  protoField : new SFString("fraction_changed")})])}))}),

                        new PositionInterpolator({
                          DEF : new SFString("HUMANOIDROOT_POSITION_ANIMATOR"),
                          key : new MFFloat([0,0.3125,0.625,1]),
                          keyValue : new MFVec3f([0,0,0,0,-0.049999,0,0,-0.195,0,0,-0.439997,0]),
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
                          DEF : new SFString("L_HIP_ANIMATOR"),
                          key : new MFFloat([0,0.3125,0.625,1]),
                          keyValue : new MFRotation([1,0,0,0,-1,0,0,0.619393,-1,0,0,1.069302,-1,0,0,1.937315]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_hip_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_KNEE_ANIMATOR"),
                          key : new MFFloat([0,0.3125,0.625,1]),
                          keyValue : new MFRotation([1,0,0,0,1,0,0,0.615228,1,0,0,0.984524,1,0,0,2.076941]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_knee_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_ANKLE_ANIMATOR"),
                          key : new MFFloat([0,0.3125,0.625,1]),
                          keyValue : new MFRotation([1,0,0,0,-1,0,0,0.017453,-1,0,0,0.069812,1,0,0,0.261799]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_ankle_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_HIP_ANIMATOR"),
                          key : new MFFloat([0,0.3125,1]),
                          keyValue : new MFRotation([1,0,0,0,1,0,0,0.523598,-1,0,0,0.157079]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_hip_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_KNEE_ANIMATOR"),
                          key : new MFFloat([0,0.3125,0.625,1]),
                          keyValue : new MFRotation([1,0,0,0,1,0,0,0.349065,1,0,0,1.023397,0.999934,0.008043,0.008185,1.727938]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_knee_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_ANKLE_ANIMATOR"),
                          key : new MFFloat([0,0.3125,0.625,1]),
                          keyValue : new MFRotation([1,0,0,0,-0.991692,-0.072372,0.106338,0.205053,-0.981083,-0.103267,0.163741,0.272231,-1,0,0,0.349065]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_ankle_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("VL5_ANIMATOR"),
                          key : new MFFloat([0,1]),
                          keyValue : new MFRotation([1,0,0,0,1,0,0,0.174533]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("vl5_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_SHOULDER_ANIMATOR"),
                          key : new MFFloat([0,0.3125,0.625,1]),
                          keyValue : new MFRotation([1,0,0,0,-1,0,0,0.279252,-1,0,0,0.506145,-1,0,0,0.191986]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_shoulder_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_ELBOW_ANIMATOR"),
                          key : new MFFloat([0,0.3125,0.625,1]),
                          keyValue : new MFRotation([1,0,0,0,-1,0,0,0.052359,-1,0,0,0.296706,-1,0,0,1.431169]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_elbow_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_SHOULDER_ANIMATOR"),
                          key : new MFFloat([0,0.3125,0.625,1]),
                          keyValue : new MFRotation([1,0,0,0,-1,0,0,0.104719,-1,0,0,0.157079,1,0,0,0.314159]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_shoulder_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_ELBOW_ANIMATOR"),
                          key : new MFFloat([0,0.3125,0.625,1]),
                          keyValue : new MFRotation([1,0,0,0,-1,0,0,0.837757,-1,0,0,1.239183,-1,0,0,1.500983]),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_elbow_rotation_changed")})])}))})])}),

                    new ROUTE({
                      fromNode : new SFString("TIMER"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("HUMANOIDROOT_POSITION_ANIMATOR"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("TIMER"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("HUMANOIDROOT_ANIMATOR"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("TIMER"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("L_HIP_ANIMATOR"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("TIMER"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("L_KNEE_ANIMATOR"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("TIMER"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("L_ANKLE_ANIMATOR"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("TIMER"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("R_HIP_ANIMATOR"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("TIMER"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("R_KNEE_ANIMATOR"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("TIMER"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("R_ANKLE_ANIMATOR"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("TIMER"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("VL5_ANIMATOR"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("TIMER"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("L_SHOULDER_ANIMATOR"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("TIMER"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("L_ELBOW_ANIMATOR"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("TIMER"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("R_SHOULDER_ANIMATOR"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("TIMER"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("R_ELBOW_ANIMATOR"),
                      toField : new SFString("set_fraction")})])}))}),

            new WorldInfo({
              title : new SFString("LOA1_KneelAnimation.x3d")}),

            new Anchor({
              description : new SFString("InterchangableActorsViaDynamicRouting"),
              url : new MFString(["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"]),
              parameter : new MFString(["target=_blank"]),
              children : new MFNode([
                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,1,0.2])}))})),
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(["LOA1_KneelAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."]),
                      fontStyle : new SFNode(
                        new FontStyle({
                          size : new SFFloat(0.8),
                          justify : new MFString(["MIDDLE","MIDDLE"])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
