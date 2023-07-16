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
              content_ : SFString('LOA1_JumpAnimation.x3d')),

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
              content_ : SFString('Scott Tufts')),

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
              content_ : SFString('http://www.HAnim.org')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Models')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Nodes')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('InterchangableActorsViaDynamicRouting Nancy jump Animation HAnim 2001')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_JumpAnimation.x3d')),

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
              title_ : SFString('LOA1_JumpAnimation.x3d')),

            ProtoDeclare(
              name_ : SFString('LOA1_JumpAnimation'),
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
                          key_ : MFFloat([SFFloat(0), SFFloat(0.04), SFFloat(0.08), SFFloat(0.12), SFFloat(0.16), SFFloat(0.2), SFFloat(0.24), SFFloat(0.28), SFFloat(0.32), SFFloat(0.36), SFFloat(0.4), SFFloat(0.44), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.8), SFFloat(0.84), SFFloat(0.88), SFFloat(0.92), SFFloat(0.96), SFFloat(1)]),
                          keyValue_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-0.01264,-0.01289]),SFVec3f([0,-0.04712,-0.03738]),SFVec3f([-0.0003345,-0.1049,-0.05353]),SFVec3f([-0.0005712,-0.1892,-0.06561]),SFVec3f([-0.0008233,-0.286,-0.06276]),SFVec3f([-0.0009591,-0.3795,-0.05148]),SFVec3f([-0.00106,-0.4484,-0.03656]),SFVec3f([-0.00106,-0.4484,-0.03656]),SFVec3f([-0.001122,-0.3269,-0.1499]),SFVec3f([-0.0008616,-0.13,-0.06358]),SFVec3f([-0.0005128,-0.03123,-0.05488]),SFVec3f([0.0004779,0.053,0.02732]),SFVec3f([0.0001728,0.4148,0.006873]),SFVec3f([0,0.03045,0.02148]),SFVec3f([0,-0.01299,-0.01057]),SFVec3f([0,-0.06932,-0.01064]),SFVec3f([0.0001365,-0.1037,-0.005059]),SFVec3f([0.0001279,-0.07198,-0.007596]),SFVec3f([0.000141,-0.01626,-0.004935]),SFVec3f([0,0,0])]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('HumanoidRoot_translation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('HUMANOIDROOT_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3273), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3273), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('HumanoidRoot_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('SACROILIAC_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.76), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1892), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1892), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('lower_body_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_HIP_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.36), SFFloat(0.4), SFFloat(0.44), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.349), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.349), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.615), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.9136), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3614), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.7869), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3918), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5433), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_hip_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_KNEE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.047), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.047), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.566), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5913), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.9235), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_knee_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_ANKLE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.36), SFFloat(0.4), SFFloat(0.44), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.84), SFFloat(0.88), SFFloat(0.92), SFFloat(0.96), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.625), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.625), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3364), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2742), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.05078), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2833), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6667), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2833), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2108), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.375), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3146), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1174), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
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
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.36), SFFloat(0.4), SFFloat(0.44), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.433), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.433), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(4.647), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.8943), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3698), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4963), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3829), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5169), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_hip_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_KNEE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.005), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.005), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.9507), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.5845), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.9054), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_knee_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_ANKLE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.36), SFFloat(0.4), SFFloat(0.44), SFFloat(0.48), SFFloat(0.64), SFFloat(0.76), SFFloat(0.84), SFFloat(0.88), SFFloat(0.92), SFFloat(0.96), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.6735), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.6735), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3527), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3038), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.07964), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3001), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.6509), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3001), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.2087), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3756), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3279), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1193), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
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
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.48), SFFloat(0.76), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5989), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.5989), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3216), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.06503), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('skullbase_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_SHOULDER_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(-0.9987), SFRotation(0.02554), SFRotation(0.04498), SFRotation(1.57), SFRotation(-0.9987), SFRotation(0.02554), SFRotation(0.04498), SFRotation(1.57), SFRotation(1), SFRotation(0.0004113), SFRotation(0.003055), SFRotation(4.114), SFRotation(-0.8413), SFRotation(0.3238), SFRotation(0.4329), SFRotation(1.453), SFRotation(-0.877), SFRotation(0.4198), SFRotation(0.2337), SFRotation(0.6009), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
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
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.0672928), SFRotation(0.989475), SFRotation(-0.128107), SFRotation(4.15574), SFRotation(0.0672928), SFRotation(0.989475), SFRotation(-0.128107), SFRotation(4.15574), SFRotation(0.00364942), SFRotation(0.999901), SFRotation(0.0135896), SFRotation(4.5822), SFRotation(0), SFRotation(-1), SFRotation(0), SFRotation(0.655922), SFRotation(-0.00050618), SFRotation(-0.999999), SFRotation(0.0012782), SFRotation(1.28397), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_wrist_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_SHOULDER_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.28), SFFloat(0.32), SFFloat(0.64), SFFloat(0.76), SFFloat(0.88), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0), SFRotation(0.9992), SFRotation(0.02042), SFRotation(0.03558), SFRotation(4.688), SFRotation(0.9992), SFRotation(0.02042), SFRotation(0.03558), SFRotation(4.688), SFRotation(0.9989), SFRotation(-0.04623), SFRotation(0.005159), SFRotation(4.079), SFRotation(-0.8687), SFRotation(-0.2525), SFRotation(-0.4261), SFRotation(1.501), SFRotation(-0.941), SFRotation(-0.2893), SFRotation(-0.1754), SFRotation(0.4788), SFRotation(0), SFRotation(0), SFRotation(1), SFRotation(0)]),
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

            Anchor(
              description_ : SFString('see InterchangableActorsViaDynamicRouting scene'),
              parameter_ : MFString([SFString("target=_blank")]),
              url_ : MFString([SFString("InterchangableActorsViaDynamicRouting.x3d"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d"), SFString("InterchangableActorsViaDynamicRouting.wrl"), SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl")]),
              children_ : [
                Shape(
                  geometry_ : 
                    Text(
                      string_ : MFString([SFString("LOA1_JumpAnimation.x3d"), SFString("defines a prototype"), SFString("for animating a humanoid."), SFString(""), SFString("Click this text to see"), SFString("InterchangableActorsViaDynamicRouting example.")]),
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
