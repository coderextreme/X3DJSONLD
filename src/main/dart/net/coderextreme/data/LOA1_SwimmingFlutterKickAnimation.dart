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
              content_ : SFString('LOA1_SwimmingFlutterKickAnimation.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Humanoid animation prototype reusable by any Humanoid.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Etsuko Lippi')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('13 December 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('23 May 2020')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('not yet tested, need to compare with NancyDivingExample interpolators')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.HAnim.org')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://HAnim.org/Models')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://HAnim.org/Nodes')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('Swimming flutter kick Animation HAnim 2001')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_SwimmingFlutterKickAnimation.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('LOA1_SwimmingFlutterKickAnimation.x3d')),

            ProtoDeclare(
              name_ : SFString('LOA1_DivingAnimation'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('cycleInterval'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('7')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('enabled'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('true')),

                    field(
                      type_ : SFString("SFBool"),
                      name_ : SFString('loop'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('true')),

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
                          loop_ : true,
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
                          key_ : MFFloat([SFFloat(0), SFFloat(0.04167), SFFloat(0.125), SFFloat(0.1667), SFFloat(0.2083), SFFloat(0.25), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.4583), SFFloat(0.5), SFFloat(0.5417), SFFloat(0.5833), SFFloat(0.625), SFFloat(0.7083), SFFloat(0.75), SFFloat(0.7917), SFFloat(0.875), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFVec3f([SFVec3f([0,-0.00928,0]),SFVec3f([0,-0.003858,0]),SFVec3f([0,-0.008847,0]),SFVec3f([0,-0.01486,0]),SFVec3f([0,-0.02641,0]),SFVec3f([0,-0.03934,0]),SFVec3f([0,-0.0502,0]),SFVec3f([0,-0.07469,0]),SFVec3f([0,-0.02732,0]),SFVec3f([0,-0.01608,0]),SFVec3f([0,-0.01129,0]),SFVec3f([0,-0.005819,0]),SFVec3f([0,-0.002004,0]),SFVec3f([0,-0.002579,0]),SFVec3f([0,-0.0143,0]),SFVec3f([0,-0.03799,0]),SFVec3f([0,-0.05648,0]),SFVec3f([0,-0.045,0]),SFVec3f([0,-0.00928,0])]),
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
                      /*no SACROILIAC_ANIMATOR*/

                        OrientationInterpolator(
                          DEF_ : SFString('L_HIP_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.375), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(-0.873), SFRotation(0.06094), SFRotation(0.484), SFRotation(0.2865), SFRotation(0.9963), SFRotation(-0.01057), SFRotation(0.08481), SFRotation(0.2488), SFRotation(0.9965), SFRotation(0.01591), SFRotation(-0.08222), SFRotation(0.3836), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5518), SFRotation(-0.9964), SFRotation(0.02231), SFRotation(0.0817), SFRotation(0.5351), SFRotation(-0.9809), SFRotation(0.04912), SFRotation(0.1881), SFRotation(0.5204), SFRotation(-0.873), SFRotation(0.06094), SFRotation(0.484), SFRotation(0.2865)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_hip_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_KNEE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3226), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1556), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08678), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8751), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.131), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.09961), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3942), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3226)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_knee_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_ANKLE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.4583), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.75), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6001)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_ankle_rotation_changed'))])),
                      /*no L_MIDTARSAL_ANIMATOR*/

                        OrientationInterpolator(
                          DEF_ : SFString('R_HIP_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.2917), SFFloat(0.5), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(-0.5831), SFRotation(0.03511), SFRotation(0.8116), SFRotation(0.1481), SFRotation(-0.995), SFRotation(0.02296), SFRotation(0.09674), SFRotation(0.4683), SFRotation(-1), SFRotation(0.00192), SFRotation(0.007964), SFRotation(0.4732), SFRotation(-0.998), SFRotation(-0.0158), SFRotation(-0.06102), SFRotation(0.5079), SFRotation(-0.9131), SFRotation(-0.06243), SFRotation(-0.403), SFRotation(0.3361), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2571), SFRotation(0.9891), SFRotation(-0.02805), SFRotation(0.1444), SFRotation(0.3879), SFRotation(-0.5831), SFRotation(0.03511), SFRotation(0.8116), SFRotation(0.1481)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_hip_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_KNEE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8573), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5351), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1756), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1194), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3153), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.09354), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08558), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8573)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_knee_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_ANKLE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.4583), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.75), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.86001)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_ankle_rotation_changed'))])),
                      /*no L_MIDTARSAL_ANIMATOR*/

                        OrientationInterpolator(
                          DEF_ : SFString('VL5_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.75), SFFloat(0.8333), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0826), SFRotation(-0.01972), SFRotation(-0.5974), SFRotation(0.8017), SFRotation(0.08231), SFRotation(0.009296), SFRotation(-0.9648), SFRotation(0.2627), SFRotation(0.1734), SFRotation(-0.01238), SFRotation(0.9549), SFRotation(-0.2968), SFRotation(0.08732), SFRotation(-0.008125), SFRotation(0.9691), SFRotation(-0.2463), SFRotation(0.158), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0826)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('vl5_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('SKULLBASE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.3), SFFloat(0.32), SFFloat(0.4), SFFloat(0.45), SFFloat(0.6), SFFloat(0.65), SFFloat(0.7), SFFloat(0.75), SFFloat(0.85), SFFloat(0.9), SFFloat(0.95), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.999), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.99), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.99), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(1)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('skullbase_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_SHOULDER_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.375), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.1), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.2), SFRotation(0.86), SFRotation(0.25), SFRotation(0.42), SFRotation(0.5), SFRotation(0.86), SFRotation(0.25), SFRotation(0.42), SFRotation(0.8), SFRotation(0.86), SFRotation(0.25), SFRotation(0.42), SFRotation(0.4), SFRotation(0.86), SFRotation(0.25), SFRotation(0.42), SFRotation(0.2)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_shoulder_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_ELBOW_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1229), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1229), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5976), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3917), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_elbow_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_WRIST_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.32), SFFloat(0.64), SFFloat(0.88), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.067), SFRotation(0.98), SFRotation(-0.128), SFRotation(4.15), SFRotation(0.067), SFRotation(0.98), SFRotation(-0.128), SFRotation(4.15), SFRotation(0.067), SFRotation(0.98), SFRotation(-0.128), SFRotation(4.15), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_wrist_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_SHOULDER_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.45), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.9992), SFRotation(0.02042), SFRotation(0.03558), SFRotation(7.2), SFRotation(0.9989), SFRotation(-0.04623), SFRotation(0.005159), SFRotation(4.079), SFRotation(-0.8687), SFRotation(-0.2525), SFRotation(-0.4261), SFRotation(1.501), SFRotation(-0.941), SFRotation(-0.2893), SFRotation(-0.1754), SFRotation(0.4788), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_shoulder_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_ELBOW_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.04151), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.04151), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5855), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5852), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_elbow_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_WRIST_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.0585279), SFRotation(0.983903), SFRotation(-0.168849), SFRotation(1.85956), SFRotation(-0.0585279), SFRotation(0.983903), SFRotation(-0.168849), SFRotation(1.85956), SFRotation(-0.00222418), SFRotation(0.99801), SFRotation(-0.0630095), SFRotation(1.46072), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.497349), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_wrist_rotation_changed'))]))]),

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
                      toNode_ : SFString('SKULLBASE_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('VL5_ANIMATOR')),

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
                      toNode_ : SFString('L_WRIST_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('R_SHOULDER_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('R_ELBOW_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('R_WRIST_ANIMATOR'))])),

            Viewpoint(
              description_ : SFString('LOA1_SwimmingFlutterKickAnimation scene'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(12)])),

            Anchor(
              description_ : SFString('Nancy Diving'),
              parameter_ : MFString([SFString("target=_blank")]),
              url_ : MFString([SFString("NancyDiving.x3d"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d"), SFString("NancyDiving.wrl"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl")]),
              children_ : [
                Shape(
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("LOA1_SwimmingFlutterKickAnimation.x3d"), SFString("defines a prototype"), SFString("for animating a humanoid."), SFString(""), SFString("Click text to see example.")]),
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
