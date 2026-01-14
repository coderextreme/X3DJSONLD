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
              content_ : SFString('LOA1_WalkAnimation.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Humanoid animation prototype reusable by any Humanoid.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Cindy Ballreich cindy@ballreich.net 3Name3D')),

            meta(
              name_ : SFString('rights'),
              content_ : SFString('1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved.')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Don Brutzman')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('1 October 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('23 May 2020')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://HAnim.org/Specifications/HAnim2001')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://HAnim.org/Models')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://HAnim.org/Nodes')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('Nancy Walk Animation HAnim 2001')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d')),

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
              title_ : SFString('LOA1_WalkAnimation.x3d')),

            ProtoDeclare(
              name_ : SFString('LOA1_WalkAnimation'),
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
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('HumanoidRoot_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('SACROILIAC_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.1056), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0.09018), SFRotation(0), SFRotation(0), SFRotation(-1), SFRotation(0.1056)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('lower_body_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_HIP_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.25), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(-0.873), SFRotation(0.06094), SFRotation(0.484), SFRotation(0.2865), SFRotation(0.9963), SFRotation(-0.01057), SFRotation(0.08481), SFRotation(0.2488), SFRotation(0.9965), SFRotation(0.01591), SFRotation(-0.08222), SFRotation(0.3836), SFRotation(-0.7018), SFRotation(-0.03223), SFRotation(-0.7117), SFRotation(0.1289), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5518), SFRotation(-0.9964), SFRotation(0.02231), SFRotation(0.0817), SFRotation(0.5351), SFRotation(-0.9809), SFRotation(0.04912), SFRotation(0.1881), SFRotation(0.5204), SFRotation(-0.873), SFRotation(0.06094), SFRotation(0.484), SFRotation(0.2865)]),
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
                          key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.6667), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.06714), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2152), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3184), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4717), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2912), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1222), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.06714)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_ankle_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_MIDTARSAL_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_midtarsal_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_HIP_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(-0.5831), SFRotation(0.03511), SFRotation(0.8116), SFRotation(0.1481), SFRotation(-0.995), SFRotation(0.02296), SFRotation(0.09674), SFRotation(0.4683), SFRotation(-1), SFRotation(0.00192), SFRotation(0.007964), SFRotation(0.4732), SFRotation(-0.998), SFRotation(-0.0158), SFRotation(-0.06102), SFRotation(0.5079), SFRotation(-0.9911), SFRotation(-0.03541), SFRotation(-0.1286), SFRotation(0.5419), SFRotation(-0.9131), SFRotation(-0.06243), SFRotation(-0.403), SFRotation(0.3361), SFRotation(-0.4306), SFRotation(-0.07962), SFRotation(-0.899), SFRotation(0.07038), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2571), SFRotation(0.9891), SFRotation(-0.02805), SFRotation(0.1444), SFRotation(0.3879), SFRotation(-0.5831), SFRotation(0.03511), SFRotation(0.8116), SFRotation(0.1481)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_hip_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_KNEE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.2917), SFFloat(0.375), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8573), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8926), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5351), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1756), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1194), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3153), SFRotation(1), SFRotation(-1.176e-8), SFRotation(-4.971e-9), SFRotation(0.09354), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.08558), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2475), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.8573)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_knee_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_ANKLE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.125), SFFloat(0.2083), SFFloat(0.375), SFFloat(0.4583), SFFloat(0.5), SFFloat(0.6667), SFFloat(0.75), SFFloat(0.7917), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3533), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1072), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2612), SFRotation(1), SFRotation(-1.641e-7), SFRotation(1.827e-8), SFRotation(0.1268), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.01793), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.05824), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2398), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.35), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3322), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_ankle_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_MIDTARSAL_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.5), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.2), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(-0.2)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_midtarsal_rotation_changed'))])),

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
                          key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.4167), SFFloat(0.5), SFFloat(0.5833), SFFloat(0.6667), SFFloat(0.75), SFFloat(0.8333), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.08642), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.1825), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.1505), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.1053), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.04391), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.03119), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.07936), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.1616), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.155), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.08642)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('skullbase_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_SHOULDER_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1189), SFRotation(-1), SFRotation(-5.928e-7), SFRotation(1.525e-7), SFRotation(0.1861), SFRotation(1), SFRotation(-2.038e-7), SFRotation(-1.257e-7), SFRotation(0.3357), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1189)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_shoulder_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_ELBOW_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(-1), SFRotation(-1.58298e-7), SFRotation(8.15967e-8), SFRotation(0.0659878), SFRotation(-1), SFRotation(-3.28826e-8), SFRotation(-2.31665e-8), SFRotation(0.488383), SFRotation(-1), SFRotation(0.00000306462), SFRotation(-0.00000311947), SFRotation(0.0177536), SFRotation(-1), SFRotation(-1.58298e-7), SFRotation(8.15967e-8), SFRotation(0.0659878)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_elbow_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_WRIST_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0.00000151276), SFRotation(-1), SFRotation(0.0000017724), SFRotation(0.461076), SFRotation(-0.330195), SFRotation(-0.927451), SFRotation(0.175516), SFRotation(0.538852), SFRotation(0.0327774), SFRotation(-0.999314), SFRotation(-0.0172185), SFRotation(0.492033), SFRotation(0.00000151276), SFRotation(-1), SFRotation(0.0000017724), SFRotation(0.461076)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_wrist_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_SHOULDER_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(-1), SFRotation(-7.689e-7), SFRotation(-1.48e-7), SFRotation(0.09346), SFRotation(1), SFRotation(5.004e-8), SFRotation(2.254e-8), SFRotation(0.3197), SFRotation(-1), SFRotation(-1.104e-7), SFRotation(5.267e-10), SFRotation(0.1564), SFRotation(-1), SFRotation(-7.689e-7), SFRotation(-1.48e-7), SFRotation(0.09346)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_shoulder_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_ELBOW_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(-1), SFRotation(-4.45619e-8), SFRotation(2.70318e-8), SFRotation(0.411508), SFRotation(-1), SFRotation(8.16742e-7), SFRotation(-1.09556e-7), SFRotation(0.0925011), SFRotation(-1), SFRotation(-2.47628e-8), SFRotation(-7.02862e-9), SFRotation(0.572568), SFRotation(-1), SFRotation(-4.45619e-8), SFRotation(2.70318e-8), SFRotation(0.411508)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_elbow_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_WRIST_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.375), SFFloat(0.9167), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(-0.8129), SFRotation(0.4759), SFRotation(-0.3357), SFRotation(0.1346), SFRotation(0.1533), SFRotation(-0.9878), SFRotation(0.02582), SFRotation(0.3902), SFRotation(-0.5701), SFRotation(0.7604), SFRotation(-0.311), SFRotation(0.366), SFRotation(-0.8129), SFRotation(0.4759), SFRotation(-0.3357), SFRotation(0.1346)]),
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
                      toNode_ : SFString('SACROILIAC_ANIMATOR')),

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
                      toNode_ : SFString('L_MIDTARSAL_ANIMATOR')),

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
                      toNode_ : SFString('R_MIDTARSAL_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('VL5_ANIMATOR')),

                    ROUTE(
                      fromField_ : SFString('fraction_changed'),
                      fromNode_ : SFString('TIMER'),
                      toField_ : SFString('set_fraction'),
                      toNode_ : SFString('SKULLBASE_ANIMATOR')),

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
          /*======================================*/
          /*Point to example use in case someone inspects this file*/

            Anchor(
              description_ : SFString('InterchangableActorsViaDynamicRouting'),
              parameter_ : MFString([SFString("target=_blank")]),
              url_ : MFString([SFString("InterchangableActorsViaDynamicRouting.x3d"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d"), SFString("InterchangableActorsViaDynamicRouting.wrl"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl")]),
              children_ : [
                Shape(
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("LOA1_WalkAnimation.x3d"), SFString("defines a prototype"), SFString("for animating a humanoid."), SFString(""), SFString("Click this text to see"), SFString("InterchangableActorsViaDynamicRouting example.")]),
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
