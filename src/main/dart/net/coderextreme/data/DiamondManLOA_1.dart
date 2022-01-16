// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('H-Anim'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('DiamondManLOA_1.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Matthew T. Beitler')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Joel S. Pawloski')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('12 November 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('23 December 2021')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/BonesAllSkeletonFrontViewLOA1.png')),

            meta(
              name_ : SFString('motto'),
              content_ : SFString('(a) \"Diamonds are a gir\' best friend.\" (b) \"Gosh, it sure is chilly in here.\"')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('Still needs comments on CAESAR feature points inserted')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://ece.uwaterloo.ca/~HAnim')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.cis.upenn.edu/~badler/anthro/89-71.pdf')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.cis.upenn.edu/~badler/anthro/89-71.ps')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.cis.upenn.edu/~beitler')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('humanoid_landmark_locations.gif')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

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
              info_ : MFString([SFString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")]),
              title_ : SFString('HANIM 1.1 Default Joint Centers, LOA1')),

            NavigationInfo(
              speed_ : 1.5),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
              description_ : SFString('Diamond Man, LOA 1'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(3)])),

            HAnimHumanoid(
              name_ : SFString('humanoid'),
              DEF_ : SFString('hanim_humanoid'),
              version_ : SFString('1.0'),
              /*original HAnimHumanoid info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"humanoidVersion=JointCenters 1.1 LOA1\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"'*/
              metadata_ : [
                MetadataSet(
                  name_ : SFString('HAnimHumanoid.info'),
                  reference_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid'),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorEmail'),
                      value_ : MFString([SFString("beitler@graphics.cis.upenn.edu beitler@acm.org")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorName'),
                      value_ : MFString([SFString("Matthew T. Beitler")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('copyright'),
                      value_ : MFString([SFString("Copyright 1999 Matthew T. Beitler")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('humanoidVersion'),
                      value_ : MFString([SFString("JointCenters 1.1 LOA1")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('usageRestrictions'),
                      value_ : MFString([SFString("PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.")]))),
              joints_ : [
                HAnimJoint(
                  name_ : SFString('HumanoidRoot'),
                  DEF_ : SFString('hanim_HumanoidRoot'),
                  center_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  children_ : [
                    HAnimJoint(
                      name_ : SFString('sacroiliac'),
                      DEF_ : SFString('hanim_sacroiliac'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('pelvis'),
                          DEF_ : SFString('hanim_pelvis'),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                              children_ : [
                                Shape(
                                  DEF_ : SFString('DiamondShape'),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      coord_ : 
                                        Coordinate(
                                          DEF_ : SFString('points'),
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])]))),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)]))))])]),

                        HAnimJoint(
                          name_ : SFString('l_hip'),
                          DEF_ : SFString('hanim_l_hip'),
                          center_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('l_thigh'),
                              DEF_ : SFString('hanim_l_thigh'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('DiamondShape'))]),

                                HAnimSite(
                                  name_ : SFString('l_knee_crease_pt'),
                                  DEF_ : SFString('hanim_l_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0993), SFDouble(0.4881), SFDouble(-0.0309)])),

                                HAnimSite(
                                  name_ : SFString('l_femoral_lateral_epicn_pt'),
                                  DEF_ : SFString('hanim_l_femoral_lateral_epicn_pt'),
                                  translation_ : SFVec3f([SFDouble(0.1598), SFDouble(0.4967), SFDouble(0.0297)])),

                                HAnimSite(
                                  name_ : SFString('l_femoral_medial_epicn_pt'),
                                  DEF_ : SFString('hanim_l_femoral_medial_epicn_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0398), SFDouble(0.4946), SFDouble(0.0303)]))]),

                            HAnimJoint(
                              name_ : SFString('l_knee'),
                              DEF_ : SFString('hanim_l_knee'),
                              center_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('l_calf'),
                                  DEF_ : SFString('hanim_l_calf'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('DiamondShape'))])]),

                                HAnimJoint(
                                  name_ : SFString('l_ankle'),
                                  DEF_ : SFString('hanim_l_ankle'),
                                  center_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l_hindfoot'),
                                      DEF_ : SFString('hanim_l_hindfoot'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('DiamondShape'))]),

                                        HAnimSite(
                                          name_ : SFString('l_lateral_malleolus_pt'),
                                          DEF_ : SFString('hanim_l_lateral_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(0.1308), SFDouble(0.0597), SFDouble(-0.1032)])),

                                        HAnimSite(
                                          name_ : SFString('l_medial_malleolus_pt'),
                                          DEF_ : SFString('hanim_l_medial_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0716), SFDouble(-0.0881)])),

                                        HAnimSite(
                                          name_ : SFString('l_sphyrion_pt'),
                                          DEF_ : SFString('hanim_l_sphyrion_pt'),
                                          translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0575), SFDouble(-0.0943)])),

                                        HAnimSite(
                                          name_ : SFString('l_calcaneous_post_pt'),
                                          DEF_ : SFString('hanim_l_calcaneous_post_pt'),
                                          translation_ : SFVec3f([SFDouble(0.0974), SFDouble(0.0259), SFDouble(-0.1171)]))]),

                                    HAnimJoint(
                                      name_ : SFString('l_midtarsal'),
                                      DEF_ : SFString('hanim_l_midtarsal'),
                                      center_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l_middistal'),
                                          DEF_ : SFString('hanim_l_middistal'),
                                          children_ : [
                                            HAnimSite(
                                              name_ : SFString('l_middistal_tip'),
                                              DEF_ : SFString('hanim_l_middistal_tip'),
                                              translation_ : SFVec3f([SFDouble(0.1354), SFDouble(0.0016), SFDouble(0.1476)])),

                                            HAnimSite(
                                              name_ : SFString('l_metatarsal_pha5_pt'),
                                              DEF_ : SFString('hanim_l_metatarsal_pha5_pt'),
                                              translation_ : SFVec3f([SFDouble(0.1825), SFDouble(0.007), SFDouble(0.0928)])),

                                            HAnimSite(
                                              name_ : SFString('l_metatarsal_pha1_pt'),
                                              DEF_ : SFString('hanim_l_metatarsal_pha1_pt'),
                                              translation_ : SFVec3f([SFDouble(0.0816), SFDouble(0.0232), SFDouble(0.0106)])),

                                            HAnimSite(
                                              name_ : SFString('l_digit2_pt'),
                                              DEF_ : SFString('hanim_l_digit2_pt'),
                                              translation_ : SFVec3f([SFDouble(0.1195), SFDouble(0.0079), SFDouble(0.1433)]))])])])])]),

                        HAnimJoint(
                          name_ : SFString('r_hip'),
                          DEF_ : SFString('hanim_r_hip'),
                          center_ : SFVec3f([SFDouble(-0.095), SFDouble(0.9171), SFDouble(0.0029)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('r_thigh'),
                              DEF_ : SFString('hanim_r_thigh'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.095), SFDouble(0.9171), SFDouble(0.0029)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('DiamondShape'))]),

                                HAnimSite(
                                  name_ : SFString('r_knee_crease_pt'),
                                  DEF_ : SFString('hanim_r_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0825), SFDouble(0.4932), SFDouble(-0.0326)])),

                                HAnimSite(
                                  name_ : SFString('r_femoral_lateral_epicn_pt'),
                                  DEF_ : SFString('hanim_r_femoral_lateral_epicn_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.1421), SFDouble(0.4992), SFDouble(0.031)])),

                                HAnimSite(
                                  name_ : SFString('r_femoral_medial_epicn_pt'),
                                  DEF_ : SFString('hanim_r_femoral_medial_epicn_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0221), SFDouble(0.5014), SFDouble(0.0289)]))]),

                            HAnimJoint(
                              name_ : SFString('r_knee'),
                              DEF_ : SFString('hanim_r_knee'),
                              center_ : SFVec3f([SFDouble(-0.0867), SFDouble(0.4913), SFDouble(0.0318)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('r_calf'),
                                  DEF_ : SFString('hanim_r_calf'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.0867), SFDouble(0.4913), SFDouble(0.0318)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('DiamondShape'))])]),

                                HAnimJoint(
                                  name_ : SFString('r_ankle'),
                                  DEF_ : SFString('hanim_r_ankle'),
                                  center_ : SFVec3f([SFDouble(-0.0801), SFDouble(0.0712), SFDouble(-0.0766)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_hindfoot'),
                                      DEF_ : SFString('hanim_r_hindfoot'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.0801), SFDouble(0.0712), SFDouble(-0.0766)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('DiamondShape'))]),

                                        HAnimSite(
                                          name_ : SFString('r_lateral_malleolus_pt'),
                                          DEF_ : SFString('hanim_r_lateral_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.1006), SFDouble(0.0658), SFDouble(-0.1075)])),

                                        HAnimSite(
                                          name_ : SFString('r_medial_malleolus_pt'),
                                          DEF_ : SFString('hanim_r_medial_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0591), SFDouble(0.076), SFDouble(-0.0928)])),

                                        HAnimSite(
                                          name_ : SFString('r_sphyrion_pt'),
                                          DEF_ : SFString('hanim_r_sphyrion_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0603), SFDouble(0.061), SFDouble(-0.1002)])),

                                        HAnimSite(
                                          name_ : SFString('r_calcaneous_post_pt'),
                                          DEF_ : SFString('hanim_r_calcaneous_post_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0692), SFDouble(0.0297), SFDouble(-0.1221)]))]),

                                    HAnimJoint(
                                      name_ : SFString('r_midtarsal'),
                                      DEF_ : SFString('hanim_r_midtarsal'),
                                      center_ : SFVec3f([SFDouble(-0.0801), SFDouble(0), SFDouble(0.0368)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_middistal'),
                                          DEF_ : SFString('hanim_r_middistal'),
                                          children_ : [
                                            HAnimSite(
                                              name_ : SFString('r_middistal_tip'),
                                              DEF_ : SFString('hanim_r_middistal_tip'),
                                              translation_ : SFVec3f([SFDouble(-0.1043), SFDouble(-0.0227), SFDouble(0.145)])),

                                            HAnimSite(
                                              name_ : SFString('r_metatarsal_pha5_pt'),
                                              DEF_ : SFString('hanim_r_metatarsal_pha5_pt'),
                                              translation_ : SFVec3f([SFDouble(-0.1523), SFDouble(0.0166), SFDouble(0.0895)])),

                                            HAnimSite(
                                              name_ : SFString('r_metatarsal_pha1_pt'),
                                              DEF_ : SFString('hanim_r_metatarsal_pha1_pt'),
                                              translation_ : SFVec3f([SFDouble(-0.0521), SFDouble(0.026), SFDouble(0.0127)])),

                                            HAnimSite(
                                              name_ : SFString('r_digit2_pt'),
                                              DEF_ : SFString('hanim_r_digit2_pt'),
                                              translation_ : SFVec3f([SFDouble(-0.0883), SFDouble(0.0134), SFDouble(0.1383)]))])])])])])]),

                    HAnimJoint(
                      name_ : SFString('vl1'),
                      DEF_ : SFString('hanim_vl1'),
                      center_ : SFVec3f([SFDouble(-0.00405), SFDouble(1.07), SFDouble(-0.0275)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('l1'),
                          DEF_ : SFString('hanim_l1')),

                        HAnimJoint(
                          name_ : SFString('l_shoulder'),
                          DEF_ : SFString('hanim_l_shoulder'),
                          center_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('l_upperarm'),
                              DEF_ : SFString('hanim_l_upperarm'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('DiamondShape'))]),

                                Transform(
                                  DEF_ : SFString('l_upperarm_adjust'),
                                  center_ : SFVec3f([SFDouble(0.182), SFDouble(1.22), SFDouble(-0.047)]),
                                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(0.119)]),
                                  translation_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)])),

                                HAnimSite(
                                  name_ : SFString('l_humeral_lateral_epicn_pt'),
                                  DEF_ : SFString('hanim_l_humeral_lateral_epicn_pt'),
                                  translation_ : SFVec3f([SFDouble(0.228), SFDouble(1.1482), SFDouble(-0.11)]))]),

                            HAnimJoint(
                              name_ : SFString('l_elbow'),
                              DEF_ : SFString('hanim_l_elbow'),
                              center_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('l_forearm'),
                                  DEF_ : SFString('hanim_l_forearm'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('DiamondShape'))]),

                                    Transform(
                                      DEF_ : SFString('l_forearm_adjust'),
                                      center_ : SFVec3f([SFDouble(0.198), SFDouble(0.961), SFDouble(-0.0405)]),
                                      rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.1)]),
                                      translation_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)])),

                                    HAnimSite(
                                      name_ : SFString('l_radial_styloid_pt'),
                                      DEF_ : SFString('hanim_l_radial_styloid_pt'),
                                      translation_ : SFVec3f([SFDouble(0.1901), SFDouble(0.8645), SFDouble(-0.0415)])),

                                    HAnimSite(
                                      name_ : SFString('l_olecranon_pt'),
                                      DEF_ : SFString('hanim_l_olecranon_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.1962), SFDouble(1.1375), SFDouble(-0.1123)])),

                                    HAnimSite(
                                      name_ : SFString('l_humeral_medial_epicn_pt'),
                                      DEF_ : SFString('hanim_l_humeral_medial_epicn_pt'),
                                      translation_ : SFVec3f([SFDouble(0.1735), SFDouble(1.1272), SFDouble(-0.1113)])),

                                    HAnimSite(
                                      name_ : SFString('l_radiale_pt'),
                                      DEF_ : SFString('hanim_l_radiale_pt'),
                                      translation_ : SFVec3f([SFDouble(0.2182), SFDouble(1.1212), SFDouble(-0.1167)]))]),

                                HAnimJoint(
                                  name_ : SFString('l_wrist'),
                                  DEF_ : SFString('hanim_l_wrist'),
                                  center_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l_hand'),
                                      DEF_ : SFString('hanim_l_hand'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('DiamondShape'))]),

                                        Transform(
                                          DEF_ : SFString('l_hand_adjust'),
                                          center_ : SFVec3f([SFDouble(0.213), SFDouble(0.811), SFDouble(-0.0338)]),
                                          rotation_ : SFRotation([SFDouble(-0.06361), SFDouble(-0.9967), SFDouble(0.04988), SFDouble(1.333)]),
                                          translation_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)])),

                                        HAnimSite(
                                          name_ : SFString('l_hand_tip'),
                                          DEF_ : SFString('hanim_l_hand_tip'),
                                          translation_ : SFVec3f([SFDouble(0.208), SFDouble(0.6731), SFDouble(-0.0491)])),

                                        HAnimSite(
                                          name_ : SFString('l_metacarpal_pha2_pt'),
                                          DEF_ : SFString('hanim_l_metacarpal_pha2_pt'),
                                          translation_ : SFVec3f([SFDouble(0.2009), SFDouble(0.8139), SFDouble(-0.0237)])),

                                        HAnimSite(
                                          name_ : SFString('l_dactylion_pt'),
                                          DEF_ : SFString('hanim_l_dactylion_pt'),
                                          translation_ : SFVec3f([SFDouble(0.2056), SFDouble(0.6743), SFDouble(-0.0482)])),

                                        HAnimSite(
                                          name_ : SFString('l_ulnar_styloid_pt'),
                                          DEF_ : SFString('hanim_l_ulnar_styloid_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.2142), SFDouble(0.8529), SFDouble(-0.0648)])),

                                        HAnimSite(
                                          name_ : SFString('l_metacarpal_pha5_pt'),
                                          DEF_ : SFString('hanim_l_metacarpal_pha5_pt'),
                                          translation_ : SFVec3f([SFDouble(0.1929), SFDouble(0.786), SFDouble(-0.1122)]))])])])]),

                        HAnimJoint(
                          name_ : SFString('r_shoulder'),
                          DEF_ : SFString('hanim_r_shoulder'),
                          center_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('r_upperarm'),
                              DEF_ : SFString('hanim_r_upperarm'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('DiamondShape'))]),

                                Transform(
                                  DEF_ : SFString('r_upperarm_adjust'),
                                  center_ : SFVec3f([SFDouble(-0.182), SFDouble(1.22), SFDouble(-0.047)]),
                                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(0.0836)]),
                                  translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)])),

                                HAnimSite(
                                  name_ : SFString('r_humeral_lateral_epicn_pt'),
                                  DEF_ : SFString('hanim_r_humeral_lateral_epicn_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.2224), SFDouble(1.1517), SFDouble(-0.1033)]))]),

                            HAnimJoint(
                              name_ : SFString('r_elbow'),
                              DEF_ : SFString('hanim_r_elbow'),
                              center_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('r_forearm'),
                                  DEF_ : SFString('hanim_r_forearm'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('DiamondShape'))]),

                                    Transform(
                                      DEF_ : SFString('r_forearm_adjust'),
                                      center_ : SFVec3f([SFDouble(-0.198), SFDouble(0.961), SFDouble(-0.0397)]),
                                      rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.1254)]),
                                      translation_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)])),

                                    HAnimSite(
                                      name_ : SFString('r_radial_styloid_pt'),
                                      DEF_ : SFString('hanim_r_radial_styloid_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.1884), SFDouble(0.8676), SFDouble(-0.036)])),

                                    HAnimSite(
                                      name_ : SFString('r_olecranon_pt'),
                                      DEF_ : SFString('hanim_r_olecranon_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.1405), SFDouble(-0.1065)])),

                                    HAnimSite(
                                      name_ : SFString('r_humeral_medial_epicn_pt'),
                                      DEF_ : SFString('hanim_r_humeral_medial_epicn_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.168), SFDouble(1.1298), SFDouble(-0.1062)])),

                                    HAnimSite(
                                      name_ : SFString('r_radiale_pt'),
                                      DEF_ : SFString('hanim_r_radiale_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.213), SFDouble(1.1305), SFDouble(-0.1091)]))]),

                                HAnimJoint(
                                  name_ : SFString('r_wrist'),
                                  DEF_ : SFString('hanim_r_wrist'),
                                  center_ : SFVec3f([SFDouble(-0.1959), SFDouble(0.8694), SFDouble(-0.0521)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_hand'),
                                      DEF_ : SFString('hanim_r_hand'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.1959), SFDouble(0.8694), SFDouble(-0.0521)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('DiamondShape'))]),

                                        Transform(
                                          DEF_ : SFString('r_hand_adjust'),
                                          center_ : SFVec3f([SFDouble(-0.217), SFDouble(0.811), SFDouble(-0.0338)]),
                                          rotation_ : SFRotation([SFDouble(-0.09024), SFDouble(0.994), SFDouble(-0.0624), SFDouble(1.216)])),

                                        HAnimSite(
                                          name_ : SFString('r_hand_tip'),
                                          DEF_ : SFString('hanim_r_hand_tip'),
                                          translation_ : SFVec3f([SFDouble(-0.1969), SFDouble(0.6758), SFDouble(-0.0427)])),

                                        HAnimSite(
                                          name_ : SFString('r_metacarpal_pha2_pt'),
                                          DEF_ : SFString('hanim_r_metacarpal_pha2_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.1977), SFDouble(0.8169), SFDouble(-0.0177)])),

                                        HAnimSite(
                                          name_ : SFString('r_dactylion_pt'),
                                          DEF_ : SFString('hanim_r_dactylion_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.1941), SFDouble(0.6772), SFDouble(-0.0423)])),

                                        HAnimSite(
                                          name_ : SFString('r_ulnar_styloid_pt'),
                                          DEF_ : SFString('hanim_r_ulnar_styloid_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.2117), SFDouble(0.8562), SFDouble(-0.0584)])),

                                        HAnimSite(
                                          name_ : SFString('r_metacarpal_pha5_pt'),
                                          DEF_ : SFString('hanim_r_metacarpal_pha5_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.1929), SFDouble(0.789), SFDouble(-0.1064)]))])])])]),

                        HAnimJoint(
                          name_ : SFString('vc4'),
                          DEF_ : SFString('hanim_vc4'),
                          center_ : SFVec3f([SFDouble(0), SFDouble(1.43), SFDouble(-0.0458)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('c4'),
                              DEF_ : SFString('hanim_c4'))])]),

                    HAnimJoint(
                      name_ : SFString('vl5'),
                      DEF_ : SFString('hanim_vl5'),
                      center_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimJoint(
                          name_ : SFString('skullbase'),
                          DEF_ : SFString('hanim_skullbase'),
                          center_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('skull'),
                              DEF_ : SFString('hanim_skull'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('DiamondShape'))]),

                                HAnimSite(
                                  name_ : SFString('skull_tip'),
                                  DEF_ : SFString('hanim_skull_tip'),
                                  translation_ : SFVec3f([SFDouble(0.005), SFDouble(1.7504), SFDouble(0.0055)])),

                                HAnimSite(
                                  name_ : SFString('sellion_pt'),
                                  DEF_ : SFString('hanim_sellion_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0058), SFDouble(1.6316), SFDouble(0.0852)])),

                                HAnimSite(
                                  name_ : SFString('r_infraorbitale_pt'),
                                  DEF_ : SFString('hanim_r_infraorbitale_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0237), SFDouble(1.6171), SFDouble(0.0752)])),

                                HAnimSite(
                                  name_ : SFString('l_infraorbitale_pt'),
                                  DEF_ : SFString('hanim_l_infraorbitale_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0341), SFDouble(1.6171), SFDouble(0.0752)])),

                                HAnimSite(
                                  name_ : SFString('supramenton_pt'),
                                  DEF_ : SFString('hanim_supramenton_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0061), SFDouble(1.541), SFDouble(0.0805)])),

                                HAnimSite(
                                  name_ : SFString('r_tragion_pt'),
                                  DEF_ : SFString('hanim_r_tragion_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0646), SFDouble(1.6347), SFDouble(0.0302)])),

                                HAnimSite(
                                  name_ : SFString('r_gonion_pt'),
                                  DEF_ : SFString('hanim_r_gonion_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.052), SFDouble(1.5529), SFDouble(0.0347)])),

                                HAnimSite(
                                  name_ : SFString('l_tragion_pt'),
                                  DEF_ : SFString('hanim_l_tragion_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0739), SFDouble(1.6348), SFDouble(0.0282)])),

                                HAnimSite(
                                  name_ : SFString('l_gonion_pt'),
                                  DEF_ : SFString('hanim_l_gonion_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0631), SFDouble(1.553), SFDouble(0.033)])),

                                HAnimSite(
                                  name_ : SFString('nuchale_pt'),
                                  DEF_ : SFString('hanim_nuchale_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0039), SFDouble(1.5972), SFDouble(-0.0796)]))])])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('DiamondManLOA_1_view'),
                  DEF_ : SFString('hanim_DiamondManLOA_1_view'),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('InclinedView'),
                      description_ : SFString('Inclined View'),
                      orientation_ : SFRotation([SFDouble(-0.113), SFDouble(0.993), SFDouble(0.0347), SFDouble(0.671)]),
                      position_ : SFVec3f([SFDouble(1.62), SFDouble(1.05), SFDouble(2.06)])),

                    Viewpoint(
                      DEF_ : SFString('FrontView'),
                      description_ : SFString('Front View'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0.854), SFDouble(2.57665)])),

                    Viewpoint(
                      DEF_ : SFString('SideView'),
                      description_ : SFString('Side View'),
                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57079)]),
                      position_ : SFVec3f([SFDouble(2.5929), SFDouble(0.854), SFDouble(0)])),

                    Viewpoint(
                      DEF_ : SFString('TopView'),
                      description_ : SFString('Top View'),
                      orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57079)]),
                      position_ : SFVec3f([SFDouble(0), SFDouble(3.4495), SFDouble(0)]))])],

                HAnimJoint(
                  USE_ : SFString('hanim_HumanoidRoot')),

                HAnimJoint(
                  USE_ : SFString('hanim_sacroiliac')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl1')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc4')),

                HAnimJoint(
                  USE_ : SFString('hanim_skullbase')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_ankle')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_ankle')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_elbow')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_elbow')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_hip')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_hip')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midtarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midtarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_wrist')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_wrist')),
              segments_ : [
                HAnimSegment(
                  USE_ : SFString('hanim_pelvis')),

                HAnimSegment(
                  USE_ : SFString('hanim_l1')),

                HAnimSegment(
                  USE_ : SFString('hanim_c4')),

                HAnimSegment(
                  USE_ : SFString('hanim_skull')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_calf')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_calf')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_forearm')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_forearm')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_hand')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_hand')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_hindfoot')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_hindfoot')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_middistal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_middistal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_thigh')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_thigh')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_upperarm')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_upperarm')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_skull_tip'))],
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_sellion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_supramenton_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_nuchale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_calcaneous_post_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_calcaneous_post_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_dactylion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_dactylion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_digit2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_digit2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_femoral_lateral_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_femoral_lateral_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_femoral_medial_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_femoral_medial_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_gonion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_gonion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_hand_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_hand_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_humeral_lateral_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_humeral_lateral_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_humeral_medial_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_humeral_medial_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_infraorbitale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_infraorbitale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_knee_crease_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_knee_crease_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_lateral_malleolus_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_lateral_malleolus_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_medial_malleolus_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_medial_malleolus_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metacarpal_pha2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metacarpal_pha2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metacarpal_pha5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metacarpal_pha5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metatarsal_pha1_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metatarsal_pha1_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metatarsal_pha5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metatarsal_pha5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_middistal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_middistal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_olecranon_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_olecranon_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_radial_styloid_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_radial_styloid_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_radiale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_radiale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_sphyrion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_sphyrion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tragion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tragion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_ulnar_styloid_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_ulnar_styloid_pt')))]));
void main() { exit(0); }
