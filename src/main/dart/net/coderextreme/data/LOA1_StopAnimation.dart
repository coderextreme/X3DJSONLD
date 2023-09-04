// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('LOA1_StopAnimation.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Humanoid animation prototype reusable by any Humanoid.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Cindy Ballreich cindy@ballreich.net 3Name3D, Joe Williams, Don Brutzman')),

            meta(
              name_ : SFString('rights'),
              content_ : SFString('1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Ozan APAYDIN')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('1 December 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('23 May 2020')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl')),

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
              content_ : SFString('Nancy Stand Animation HAnim 2001')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_StopAnimation.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('LOA1_StopAnimation'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFTime"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('cycleInterval'),
                      value_ : SFString('0.00999999977648258')),

                    field(
                      type_ : SFString("SFBool"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('enabled'),
                      value_ : SFString('true')),

                    field(
                      type_ : SFString("SFBool"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('loop'),
                      value_ : SFString('true')),

                    field(
                      type_ : SFString("SFTime"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('startTime')),

                    field(
                      type_ : SFString("SFTime"),
                      accessType_ : SFString("inputOutput"),
                      name_ : SFString('stopTime'),
                      value_ : SFString('-1')),

                    field(
                      type_ : SFString("SFFloat"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('fraction_changed')),

                    field(
                      type_ : SFString("SFBool"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('isActive')),

                    field(
                      type_ : SFString("SFVec3f"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('HumanoidRoot_translation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('HumanoidRoot_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('lower_body_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('l_hip_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('l_knee_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('l_ankle_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('l_midtarsal_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('r_hip_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('r_knee_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('r_ankle_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('r_midtarsal_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('vl5_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('skullbase_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('l_shoulder_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('l_elbow_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('l_wrist_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('r_shoulder_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('r_elbow_rotation_changed')),

                    field(
                      type_ : SFString("SFRotation"),
                      accessType_ : SFString("outputOnly"),
                      name_ : SFString('r_wrist_rotation_changed'))]),
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
                                  nodeField_ : SFString('enabled'),
                                  protoField_ : SFString('enabled')),

                                connect(
                                  nodeField_ : SFString('cycleInterval'),
                                  protoField_ : SFString('cycleInterval')),

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
                                  nodeField_ : SFString('isActive'),
                                  protoField_ : SFString('isActive')),

                                connect(
                                  nodeField_ : SFString('fraction_changed'),
                                  protoField_ : SFString('fraction_changed'))])),

                        PositionInterpolator(
                          DEF_ : SFString('HUMANOIDROOT_POSITION_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0])]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('HumanoidRoot_translation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('HUMANOIDROOT_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('HumanoidRoot_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('SACROILIAC_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('lower_body_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_HIP_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_hip_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_KNEE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_knee_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_ANKLE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_ankle_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_MIDTARSAL_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_midtarsal_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_HIP_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_hip_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_KNEE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_knee_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_ANKLE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_ankle_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_MIDTARSAL_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_midtarsal_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('VL5_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('vl5_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('SKULLBASE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('skullbase_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_SHOULDER_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_shoulder_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_ELBOW_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_elbow_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_WRIST_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_wrist_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_SHOULDER_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_shoulder_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_ELBOW_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_elbow_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_WRIST_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_wrist_rotation_changed'))]))]),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('HUMANOIDROOT_POSITION_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('HUMANOIDROOT_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('SACROILIAC_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('L_HIP_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('L_KNEE_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('L_ANKLE_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('L_MIDTARSAL_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('R_HIP_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('R_KNEE_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('R_ANKLE_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('R_MIDTARSAL_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('VL5_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('SKULLBASE_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('L_SHOULDER_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('L_ELBOW_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('L_WRIST_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('R_SHOULDER_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('R_ELBOW_ANIMATOR'),
                      toField_ : SFString('set_fraction')),

                    ROUTE(
                      fromNode_ : SFString('TIMER'),
                      fromField_ : SFString('fraction_changed'),
                      toNode_ : SFString('R_WRIST_ANIMATOR'),
                      toField_ : SFString('set_fraction'))])),

            WorldInfo(
              title_ : SFString('LOA1_StopAnimation.x3d')),

            Anchor(
              description_ : SFString('InterchangableActorsViaDynamicRouting'),
              url_ : MFString([SFString("InterchangableActorsViaDynamicRouting.x3d"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d"), SFString("InterchangableActorsViaDynamicRouting.wrl"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl")]),
              parameter_ : MFString([SFString("target=_blank")]),
              children_ : [
                Shape(
                  appearance_ : 
                    Appearance(
                      material_ : 
                        Material(
                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0.2)]))),
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("LOA1_StopAnimation.x3d"), SFString("defines a prototype"), SFString("for animating a humanoid."), SFString(""), SFString("Click this text to see"), SFString("InterchangableActorsViaDynamicRouting example.")]),
                      fontStyle_ : 
                        FontStyle(
                          size_ : 0.8,
                          justify_ : MFString([SFString("MIDDLE"), SFString("MIDDLE")]))))])]));
void main() { exit(0); }
