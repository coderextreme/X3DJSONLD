'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoInterface } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { PositionInterpolator } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { OrientationInterpolator } from './x3d.mjs';
import { MFRotation } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { Anchor } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
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
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("LOA1_KneelAnimation.x3d")}),

            new ProtoDeclare({
              name : new SFString("LOA1_KneelAnimation"),
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
                      value : new SFString("false")}),

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
                          key : new MFFloat(new MFFloat([0,0.3125,0.625,1])),
                          keyValue : new MFVec3f(new MFVec3f([0,0,0,0,-0.049999,0,0,-0.195,0,0,-0.439997,0])),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("HumanoidRoot_translation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("HUMANOIDROOT_ANIMATOR"),
                          key : new MFFloat(new MFFloat([0,1])),
                          keyValue : new MFRotation(new MFRotation([0,1,0,0,0,1,0,0])),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("HumanoidRoot_rotation_changed")})])}))}),
                      /*no SACROILIAC_ANIMATOR*/

                        new OrientationInterpolator({
                          DEF : new SFString("L_HIP_ANIMATOR"),
                          key : new MFFloat(new MFFloat([0,0.3125,0.625,1])),
                          keyValue : new MFRotation(new MFRotation([1,0,0,0,-1,0,0,0.619393,-1,0,0,1.069302,-1,0,0,1.937315])),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_hip_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_KNEE_ANIMATOR"),
                          key : new MFFloat(new MFFloat([0,0.3125,0.625,1])),
                          keyValue : new MFRotation(new MFRotation([1,0,0,0,1,0,0,0.615228,1,0,0,0.984524,1,0,0,2.076941])),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_knee_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_ANKLE_ANIMATOR"),
                          key : new MFFloat(new MFFloat([0,0.3125,0.625,1])),
                          keyValue : new MFRotation(new MFRotation([1,0,0,0,-1,0,0,0.017453,-1,0,0,0.069812,1,0,0,0.261799])),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_ankle_rotation_changed")})])}))}),
                      /*no L_MIDTARSAL_ANIMATOR*/

                        new OrientationInterpolator({
                          DEF : new SFString("R_HIP_ANIMATOR"),
                          key : new MFFloat(new MFFloat([0,0.3125,1])),
                          keyValue : new MFRotation(new MFRotation([1,0,0,0,1,0,0,0.523598,-1,0,0,0.157079])),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_hip_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_KNEE_ANIMATOR"),
                          key : new MFFloat(new MFFloat([0,0.3125,0.625,1])),
                          keyValue : new MFRotation(new MFRotation([1,0,0,0,1,0,0,0.349065,1,0,0,1.023397,0.999934,0.008043,0.008185,1.727938])),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_knee_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_ANKLE_ANIMATOR"),
                          key : new MFFloat(new MFFloat([0,0.3125,0.625,1])),
                          keyValue : new MFRotation(new MFRotation([1,0,0,0,-0.991692,-0.072372,0.106338,0.205053,-0.981083,-0.103267,0.163741,0.272231,-1,0,0,0.349065])),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_ankle_rotation_changed")})])}))}),
                      /*no R_MIDTARSAL_ANIMATOR*/

                        new OrientationInterpolator({
                          DEF : new SFString("VL5_ANIMATOR"),
                          key : new MFFloat(new MFFloat([0,1])),
                          keyValue : new MFRotation(new MFRotation([1,0,0,0,1,0,0,0.174533])),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("vl5_rotation_changed")})])}))}),
                      /*no SKULLBASE_ANIMATOR*/

                        new OrientationInterpolator({
                          DEF : new SFString("L_SHOULDER_ANIMATOR"),
                          key : new MFFloat(new MFFloat([0,0.3125,0.625,1])),
                          keyValue : new MFRotation(new MFRotation([1,0,0,0,-1,0,0,0.279252,-1,0,0,0.506145,-1,0,0,0.191986])),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_shoulder_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("L_ELBOW_ANIMATOR"),
                          key : new MFFloat(new MFFloat([0,0.3125,0.625,1])),
                          keyValue : new MFRotation(new MFRotation([1,0,0,0,-1,0,0,0.052359,-1,0,0,0.296706,-1,0,0,1.431169])),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("l_elbow_rotation_changed")})])}))}),
                      /*no L_WRIST_ANIMATOR*/

                        new OrientationInterpolator({
                          DEF : new SFString("R_SHOULDER_ANIMATOR"),
                          key : new MFFloat(new MFFloat([0,0.3125,0.625,1])),
                          keyValue : new MFRotation(new MFRotation([1,0,0,0,-1,0,0,0.104719,-1,0,0,0.157079,1,0,0,0.314159])),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_shoulder_rotation_changed")})])}))}),

                        new OrientationInterpolator({
                          DEF : new SFString("R_ELBOW_ANIMATOR"),
                          key : new MFFloat(new MFFloat([0,0.3125,0.625,1])),
                          keyValue : new MFRotation(new MFRotation([1,0,0,0,-1,0,0,0.837757,-1,0,0,1.239183,-1,0,0,1.500983])),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("value_changed"),
                                  protoField : new SFString("r_elbow_rotation_changed")})])}))}),
                      /*no R_WRIST_ANIMATOR*/])}),

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
                      toNode : new SFString("VL5_ANIMATOR")}),

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
                      toNode : new SFString("R_SHOULDER_ANIMATOR")}),

                    new ROUTE({
                      fromField : new SFString("fraction_changed"),
                      fromNode : new SFString("TIMER"),
                      toField : new SFString("set_fraction"),
                      toNode : new SFString("R_ELBOW_ANIMATOR")})])}))}),

            new Anchor({
              description : new SFString("InterchangableActorsViaDynamicRouting"),
              parameter : new MFString(new MFString(["target=_blank"])),
              url : new MFString(new MFString(["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"])),
              children : new MFNode([
                new Shape({
                  geometry : new SFNode(
                    new Text({
                      string : new MFString(new MFString(["LOA1_KneelAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."])),
                      fontStyle : new SFNode(
                        new FontStyle({
                          justify : new MFString(new MFString(["MIDDLE","MIDDLE"])),
                          size : new SFFloat(0.8)}))})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor(new SFColor([1,1,0.2]))}))}))})])})])}))});
console.log(X3D0.toXMLNode());
