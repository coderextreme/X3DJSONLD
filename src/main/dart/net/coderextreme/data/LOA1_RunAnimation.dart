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
              content_ : SFString('LOA1_RunAnimation.x3d')),

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
              content_ : SFString('Ozan APAYDIN')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('30 October 2001')),

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
              content_ : SFString('Nancy Run Animation HAnim 2001')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_RunAnimation.x3d')),

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
              title_ : SFString('LOA1_RunAnimation.x3d')),

            ProtoDeclare(
              name_ : SFString('LOA1_RunAnimation'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFTime"),
                      name_ : SFString('cycleInterval'),
                      accessType_ : SFString("inputOutput"),
                      value_ : SFString('1')),

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
                          key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.2909), SFFloat(0.3091), SFFloat(0.7091), SFFloat(0.8), SFFloat(0.8182), SFFloat(1)]),
                          keyValue_ : MFVec3f([SFVec3f([0,-0.0351,0]),SFVec3f([0,-0.0351,0]),SFVec3f([0,-0.04087,0]),SFVec3f([0,-0.04886,0]),SFVec3f([0,-0.04051,0]),SFVec3f([0,-0.03666,0]),SFVec3f([0,-0.03666,0]),SFVec3f([0,-0.0351,0])]),
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
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0.9969), SFRotation(-0.05444), SFRotation(0.05596), SFRotation(0.07687), SFRotation(0.9969), SFRotation(-0.05444), SFRotation(0.05596), SFRotation(0.07687)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('lower_body_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_HIP_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(-0.9986), SFRotation(0.03354), SFRotation(0.04001), SFRotation(1.212), SFRotation(-0.9889), SFRotation(0.1328), SFRotation(0.06696), SFRotation(0.4025), SFRotation(0.9894), SFRotation(0.1453), SFRotation(0.009351), SFRotation(0.4114), SFRotation(-0.9963), SFRotation(0.07032), SFRotation(0.05003), SFRotation(0.7035), SFRotation(-0.9986), SFRotation(0.03354), SFRotation(0.04001), SFRotation(1.212)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_hip_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_KNEE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.108), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.4265), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7052), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(2.179), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.108)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_knee_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_ANKLE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.3091), SFFloat(0.4909), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.03543), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.1037), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4328), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.1929), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.03543)]),
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
                          key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0.9999), SFRotation(0.00293), SFRotation(-0.00989), SFRotation(0.402), SFRotation(-1), SFRotation(0.004977), SFRotation(-0.00497), SFRotation(0.5943), SFRotation(-1), SFRotation(0.003265), SFRotation(-0.001752), SFRotation(1.178), SFRotation(-0.9999), SFRotation(0.00815), SFRotation(-0.01093), SFRotation(0.3031), SFRotation(0.9999), SFRotation(0.00293), SFRotation(-0.00989), SFRotation(0.402)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_hip_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_KNEE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.03636), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7004), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.011), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.892), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(1.188), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.3964), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.7004)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_knee_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_ANKLE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.4909), SFFloat(0.7091), SFFloat(0.8), SFFloat(0.8182), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2323), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.07843), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.09676), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3274), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.3278), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.2323)]),
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
                          key_ : MFFloat([SFFloat(0), SFFloat(0.2545), SFFloat(0.4909), SFFloat(0.7636), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0.7651), SFRotation(0.6382), SFRotation(0.08586), SFRotation(0.2712), SFRotation(0.9999), SFRotation(0.002845), SFRotation(-0.01547), SFRotation(0.3756), SFRotation(0.7459), SFRotation(-0.6505), SFRotation(-0.1432), SFRotation(0.2416), SFRotation(0.9984), SFRotation(0.05536), SFRotation(-0.01154), SFRotation(0.3488), SFRotation(0.7651), SFRotation(0.6382), SFRotation(0.08586), SFRotation(0.2712)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('vl5_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('SKULLBASE_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.4909), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0.6517), SFRotation(-0.7559), SFRotation(0.06211), SFRotation(0.2508), SFRotation(0.6467), SFRotation(0.7527), SFRotation(-0.1238), SFRotation(0.2344), SFRotation(0.6517), SFRotation(-0.7559), SFRotation(0.06211), SFRotation(0.2508)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('skullbase_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_SHOULDER_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0.9907), SFRotation(-0.07264), SFRotation(0.115), SFRotation(1.135), SFRotation(0.9291), SFRotation(-0.1222), SFRotation(0.349), SFRotation(0.1695), SFRotation(-0.9892), SFRotation(0.1364), SFRotation(-0.05394), SFRotation(0.5112), SFRotation(0.9942), SFRotation(-0.0002052), SFRotation(0.1073), SFRotation(0.4975), SFRotation(0.9907), SFRotation(-0.07264), SFRotation(0.115), SFRotation(1.135)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_shoulder_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_ELBOW_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0.9985), SFRotation(0.03887), SFRotation(0.03802), SFRotation(4.689), SFRotation(-0.965), SFRotation(-0.1889), SFRotation(-0.1821), SFRotation(1.415), SFRotation(0.9758), SFRotation(0.1563), SFRotation(0.1529), SFRotation(4.666), SFRotation(-0.9956), SFRotation(-0.0936), SFRotation(0.009826), SFRotation(1.126), SFRotation(0.9985), SFRotation(0.03887), SFRotation(0.03802), SFRotation(4.689)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_elbow_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('L_WRIST_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(-0.0240995), SFRotation(-0.999682), SFRotation(0.00741506), SFRotation(0.120409), SFRotation(-0.0240995), SFRotation(-0.999682), SFRotation(0.00741506), SFRotation(0.120409)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('l_wrist_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_SHOULDER_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.6979), SFRotation(0.9094), SFRotation(0.2062), SFRotation(-0.3613), SFRotation(0.4157), SFRotation(0.9637), SFRotation(0.1537), SFRotation(-0.2185), SFRotation(1.353), SFRotation(0.4864), SFRotation(0.08841), SFRotation(-0.8693), SFRotation(0.1716), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.6979)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_shoulder_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_ELBOW_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(0.2182), SFFloat(0.4909), SFFloat(0.7455), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(0.9353), SFRotation(-0.2978), SFRotation(-0.191), SFRotation(4.222), SFRotation(-0.9362), SFRotation(0.2924), SFRotation(-0.1952), SFRotation(1.05), SFRotation(0.9941), SFRotation(-0.09719), SFRotation(-0.04725), SFRotation(4.512), SFRotation(-0.9594), SFRotation(0.2653), SFRotation(0.09579), SFRotation(1.525), SFRotation(0.9353), SFRotation(-0.2978), SFRotation(-0.191), SFRotation(4.222)]),
                          IS_ : 
                            IS(
                              connect_ : [
                                connect(
                                  nodeField_ : SFString('value_changed'),
                                  protoField_ : SFString('r_elbow_rotation_changed'))])),

                        OrientationInterpolator(
                          DEF_ : SFString('R_WRIST_ANIMATOR'),
                          key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                          keyValue_ : MFRotation([SFRotation(-0.917742), SFRotation(-0.237244), SFRotation(-0.318536), SFRotation(0.214273), SFRotation(-0.917742), SFRotation(-0.237244), SFRotation(-0.318536), SFRotation(0.214273)]),
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
                      string_ : MFString([SFString("LOA1_RunAnimation.x3d"), SFString("defines a prototype"), SFString("for animating a humanoid."), SFString(""), SFString("Click this text to see"), SFString("InterchangableActorsViaDynamicRouting example.")]),
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
