// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('LOA1_KneelAnimation.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Humanoid animation prototype reusable by any Humanoid.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Tom Miller')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Curt Blais')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('1 December 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('23 May 2020')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.HAnim.org')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Models')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Nodes')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('Nancy kneel Animation HAnim 2001')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('LOA1_KneelAnimation.x3d')),

            ProtoDeclare(
              name_ : SFString('LOA1_KneelAnimation'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('cycleInterval'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('2')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('enabled'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('true')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('loop'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('false')),

                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('startTime'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('0')),

                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('stopTime'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('-1')),

                    field(
                      type_ : SFString("SFFloat"),
                      name_ : SFString('fraction_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('isActive'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('HumanoidRoot_translation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('HumanoidRoot_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('lower_body_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_hip_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_knee_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_ankle_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_midtarsal_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_hip_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_knee_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_ankle_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_midtarsal_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('vl5_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('skullbase_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_shoulder_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_elbow_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('l_wrist_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_shoulder_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_elbow_rotation_changed'),
                      accessType_ : SFString("outputOnly")),

                    field(
                      type_ : SFString("SFRotation"),
                      name_ : SFString('r_wrist_rotation_changed'),
                      accessType_ : SFString("outputOnly"))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Group(
                      children_ : [
                        TimeSensor(
                          DEF_ : SFString('TIMER'),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('cycleInterval'),
                                  protoField_ : SFString('cycleInterval')),

                                connect(
                                  nodeField_ : SFString('enabled'),
                                  protoField_ : SFString('enabled')),

                                connect(
                                  nodeField_ : SFString('loop'),
                                  protoField_ : SFString('loop')),

                                connect(
                                  nodeField_ : SFString('startTime'),
                                  protoField_ : SFString('startTime')),

                                connect(
                                  nodeField_ : SFString('stopTime'),
                                  protoField_ : SFString('stopTime')),

                                connect(
                                  nodeField_ : SFString('fraction_changed'),
                                  protoField_ : SFString('fraction_changed')),

                                connect(
                                  nodeField_ : SFString('isActive'),
                                  protoField_ : SFString('isActive'))])),

                        PositionInterpolator(
                          DEF_ : SFString('HUMANOIDROOT_POSITION_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.3125), SFFloat(0.625), SFFloat(1)]),
                          keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-0.049999,0]),SFVec3f([0,-0.195,0]),SFVec3f([0,-0.439997,0])]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('HumanoidRoot_translation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('HUMANOIDROOT_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('HumanoidRoot_rotation_changed'))])),
                      /*no SACROILIAC_ANIMATOR*/

                        OrientationInterpolator(
                          DEF_ : SFString('L_HIP_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.3125), SFFloat(0.625), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.619393), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.069302), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.937315)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_hip_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_KNEE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.3125), SFFloat(0.625), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.615228), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.984524), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.076941)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_knee_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_ANKLE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.3125), SFFloat(0.625), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.017453), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.069812), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.261799)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_ankle_rotation_changed'))])),
                      /*no L_MIDTARSAL_ANIMATOR*/

                        OrientationInterpolator(
                          DEF_ : SFString('R_HIP_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.3125), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.523598), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.157079)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_hip_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_KNEE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.3125), SFFloat(0.625), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.349065), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.023397), SFRotation(0.999934), SFRotation(0.008043), SFRotation(0.008185), SFRotation(1.727938)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_knee_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_ANKLE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.3125), SFFloat(0.625), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-0.991692), SFRotation(-0.072372), SFRotation(0.106338), SFRotation(0.205053), SFRotation(-0.981083), SFRotation(-0.103267), SFRotation(0.163741), SFRotation(0.272231), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.349065)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_ankle_rotation_changed'))])),
                      /*no R_MIDTARSAL_ANIMATOR*/

                        OrientationInterpolator(
                          DEF_ : SFString('VL5_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.174533)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('vl5_rotation_changed'))])),
                      /*no SKULLBASE_ANIMATOR*/

                        OrientationInterpolator(
                          DEF_ : SFString('L_SHOULDER_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.3125), SFFloat(0.625), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.279252), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.506145), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.191986)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_shoulder_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_ELBOW_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.3125), SFFloat(0.625), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.052359), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.296706), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.431169)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_elbow_rotation_changed'))])),
                      /*no L_WRIST_ANIMATOR*/

                        OrientationInterpolator(
                          DEF_ : SFString('R_SHOULDER_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.3125), SFFloat(0.625), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.104719), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.157079), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.314159)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_shoulder_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_ELBOW_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.3125), SFFloat(0.625), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.837757), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.239183), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1.500983)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_elbow_rotation_changed'))])),
                      /*no R_WRIST_ANIMATOR*/]),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('HUMANOIDROOT_POSITION_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('HUMANOIDROOT_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('L_HIP_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('L_KNEE_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('L_ANKLE_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('R_HIP_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('R_KNEE_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('R_ANKLE_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('VL5_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('L_SHOULDER_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('L_ELBOW_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('R_SHOULDER_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('R_ELBOW_ANIMATOR'))])),

            Anchor(
              description_ : SFString('InterchangableActorsViaDynamicRouting'),
              parameter_ : MFString([SFString("target=_blank")]),
              url_ : MFString([SFString("InterchangableActorsViaDynamicRouting.x3d"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d"), SFString("InterchangableActorsViaDynamicRouting.wrl"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl")]),
              children_ : [
                Shape(
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("LOA1_KneelAnimation.x3d"), SFString("defines a prototype"), SFString("for animating a humanoid."), SFString(""), SFString("Click this text to see"), SFString("InterchangableActorsViaDynamicRouting example.")]),
                      fontStyle_ : 
                        FontStyle(
                          justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]),
                          size_ : 0.8)),
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0.2)]))))])]));
void main() { exit(0); }
