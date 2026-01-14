// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('HAnim'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('DiamondManLOA1.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers, also includes HAnimSite feaature points. LOA-1 is typical low-end real-time 3D hierarchy.')),

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
              content_ : SFString('Mon, 15 Sep 2025 05:18:46 GMT')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/BonesAllSkeletonFrontViewLOA1.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('humanoid_landmark_locations.gif')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif')),

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
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('HANIM 1.1 Default Joint Centers, LOA1'),
              info_ : MFString([SFString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")])),

            NavigationInfo(
              speed_ : 1.5),

            Viewpoint(
              description_ : SFString('Diamond Man, LOA 1'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(3)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)])),

            HAnimHumanoid(
              DEF_ : SFString('hanim_humanoid'),
              name_ : SFString('humanoid'),
              loa_ : 1,
              metadata_ : [
                MetadataSet(
                  name_ : SFString('HAnimHumanoid.info'),
                  reference_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid'),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorEmail')),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorName')),
                  value_ : 
                    MetadataString(
                      name_ : SFString('copyright')),
                  value_ : 
                    MetadataString(
                      name_ : SFString('humanoidVersion')),
                  value_ : 
                    MetadataString(
                      name_ : SFString('usageRestrictions'))),
              joints_ : [
                HAnimJoint(
                  DEF_ : SFString('hanim_humanoid_root'),
                  name_ : SFString('humanoid_root'),
                  center_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                  children_ : [
                    HAnimJoint(
                      DEF_ : SFString('hanim_sacroiliac'),
                      name_ : SFString('sacroiliac'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('hanim_pelvis'),
                          name_ : SFString('pelvis'),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                              child_ : 
                                Shape(
                                  DEF_ : SFString('DiamondShape'),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      creaseAngle_ : 0.5,
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          DEF_ : SFString('points'),
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))))]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_l_hip'),
                          name_ : SFString('l_hip'),
                          center_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_l_thigh'),
                              name_ : SFString('l_thigh'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('DiamondShape'))),

                                HAnimSite(
                                  DEF_ : SFString('hanim_l_knee_crease_pt'),
                                  name_ : SFString('l_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0993), SFDouble(0.4881), SFDouble(-0.0309)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_l_femoral_lateral_epicondyle_pt'),
                                  name_ : SFString('l_femoral_lateral_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(0.1598), SFDouble(0.4967), SFDouble(0.0297)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_l_femoral_medial_epicondyle_pt'),
                                  name_ : SFString('l_femoral_medial_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0398), SFDouble(0.4946), SFDouble(0.0303)]))]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_l_knee'),
                              name_ : SFString('l_knee'),
                              center_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_l_calf'),
                                  name_ : SFString('l_calf'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('DiamondShape')))]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_l_talocrural'),
                                  name_ : SFString('l_talocrural'),
                                  center_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_l_talus'),
                                      name_ : SFString('l_talus'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('DiamondShape'))),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_l_lateral_malleolus_pt'),
                                          name_ : SFString('l_lateral_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(0.1308), SFDouble(0.0597), SFDouble(-0.1032)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_l_medial_malleolus_pt'),
                                          name_ : SFString('l_medial_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0716), SFDouble(-0.0881)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_l_sphyrion_pt'),
                                          name_ : SFString('l_sphyrion_pt'),
                                          translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0575), SFDouble(-0.0943)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_l_calcaneus_posterior_pt'),
                                          name_ : SFString('l_calcaneus_posterior_pt'),
                                          translation_ : SFVec3f([SFDouble(0.0974), SFDouble(0.0259), SFDouble(-0.1171)]))]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_l_metatarsophalangeal_2'),
                                      name_ : SFString('l_metatarsophalangeal_2'),
                                      center_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_2'),
                                          name_ : SFString('l_tarsal_proximal_phalanx_2'),
                                          children_ : [
                                            HAnimSite(
                                              DEF_ : SFString('hanim_l_middistal_tip'),
                                              name_ : SFString('l_middistal_tip'),
                                              translation_ : SFVec3f([SFDouble(0.1354), SFDouble(0.0016), SFDouble(0.1476)])),

                                            HAnimSite(
                                              DEF_ : SFString('hanim_l_metatarsal_phalanx_5_pt'),
                                              name_ : SFString('l_metatarsal_phalanx_5_pt'),
                                              translation_ : SFVec3f([SFDouble(0.1825), SFDouble(0.007), SFDouble(0.0928)])),

                                            HAnimSite(
                                              DEF_ : SFString('hanim_l_metatarsal_phalanx_1_pt'),
                                              name_ : SFString('l_metatarsal_phalanx_1_pt'),
                                              translation_ : SFVec3f([SFDouble(0.0816), SFDouble(0.0232), SFDouble(0.0106)])),

                                            HAnimSite(
                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2_pt'),
                                              name_ : SFString('l_tarsal_distal_phalanx_2_pt'),
                                              translation_ : SFVec3f([SFDouble(0.1195), SFDouble(0.0079), SFDouble(0.1433)]))])])])])]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_r_hip'),
                          name_ : SFString('r_hip'),
                          center_ : SFVec3f([SFDouble(-0.095), SFDouble(0.9171), SFDouble(0.0029)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_r_thigh'),
                              name_ : SFString('r_thigh'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.095), SFDouble(0.9171), SFDouble(0.0029)]),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('DiamondShape'))),

                                HAnimSite(
                                  DEF_ : SFString('hanim_r_knee_crease_pt'),
                                  name_ : SFString('r_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0825), SFDouble(0.4932), SFDouble(-0.0326)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_r_femoral_lateral_epicondyle_pt'),
                                  name_ : SFString('r_femoral_lateral_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.1421), SFDouble(0.4992), SFDouble(0.031)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_r_femoral_medial_epicondyle_pt'),
                                  name_ : SFString('r_femoral_medial_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0221), SFDouble(0.5014), SFDouble(0.0289)]))]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_r_knee'),
                              name_ : SFString('r_knee'),
                              center_ : SFVec3f([SFDouble(-0.0867), SFDouble(0.4913), SFDouble(0.0318)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_r_calf'),
                                  name_ : SFString('r_calf'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.0867), SFDouble(0.4913), SFDouble(0.0318)]),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('DiamondShape')))]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_r_talocrural'),
                                  name_ : SFString('r_talocrural'),
                                  center_ : SFVec3f([SFDouble(-0.0801), SFDouble(0.0712), SFDouble(-0.0766)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_r_talus'),
                                      name_ : SFString('r_talus'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.0801), SFDouble(0.0712), SFDouble(-0.0766)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('DiamondShape'))),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_r_lateral_malleolus_pt'),
                                          name_ : SFString('r_lateral_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.1006), SFDouble(0.0658), SFDouble(-0.1075)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_r_medial_malleolus_pt'),
                                          name_ : SFString('r_medial_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0591), SFDouble(0.076), SFDouble(-0.0928)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_r_sphyrion_pt'),
                                          name_ : SFString('r_sphyrion_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0603), SFDouble(0.061), SFDouble(-0.1002)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_r_calcaneus_posterior_pt'),
                                          name_ : SFString('r_calcaneus_posterior_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0692), SFDouble(0.0297), SFDouble(-0.1221)]))]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_r_metatarsophalangeal_2'),
                                      name_ : SFString('r_metatarsophalangeal_2'),
                                      center_ : SFVec3f([SFDouble(-0.0801), SFDouble(0), SFDouble(0.0368)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_2'),
                                          name_ : SFString('r_tarsal_proximal_phalanx_2'),
                                          children_ : [
                                            HAnimSite(
                                              DEF_ : SFString('hanim_r_middistal_tip'),
                                              name_ : SFString('r_middistal_tip'),
                                              translation_ : SFVec3f([SFDouble(-0.1043), SFDouble(-0.0227), SFDouble(0.145)])),

                                            HAnimSite(
                                              DEF_ : SFString('hanim_r_metatarsal_phalanx_5_pt'),
                                              name_ : SFString('r_metatarsal_phalanx_5_pt'),
                                              translation_ : SFVec3f([SFDouble(-0.1523), SFDouble(0.0166), SFDouble(0.0895)])),

                                            HAnimSite(
                                              DEF_ : SFString('hanim_r_metatarsal_phalanx_1_pt'),
                                              name_ : SFString('r_metatarsal_phalanx_1_pt'),
                                              translation_ : SFVec3f([SFDouble(-0.0521), SFDouble(0.026), SFDouble(0.0127)])),

                                            HAnimSite(
                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2_pt'),
                                              name_ : SFString('r_tarsal_distal_phalanx_2_pt'),
                                              translation_ : SFVec3f([SFDouble(-0.0883), SFDouble(0.0134), SFDouble(0.1383)]))])])])])])]),

                    HAnimJoint(
                      DEF_ : SFString('hanim_vl1'),
                      name_ : SFString('vl1'),
                      center_ : SFVec3f([SFDouble(-0.00405), SFDouble(1.07), SFDouble(-0.0275)]),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('hanim_l1'),
                          name_ : SFString('l1')),

                        HAnimJoint(
                          DEF_ : SFString('hanim_l_shoulder'),
                          name_ : SFString('l_shoulder'),
                          center_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_l_upperarm'),
                              name_ : SFString('l_upperarm'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('DiamondShape'))),

                                Transform(
                                  DEF_ : SFString('l_upperarm_adjust'),
                                  translation_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(0.119)]),
                                  center_ : SFVec3f([SFDouble(0.182), SFDouble(1.22), SFDouble(-0.047)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_l_humeral_lateral_epicondyle_pt'),
                                  name_ : SFString('l_humeral_lateral_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(0.228), SFDouble(1.1482), SFDouble(-0.11)]))]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_l_elbow'),
                              name_ : SFString('l_elbow'),
                              center_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_l_forearm'),
                                  name_ : SFString('l_forearm'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('DiamondShape'))),

                                    Transform(
                                      DEF_ : SFString('l_forearm_adjust'),
                                      translation_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                      rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.1)]),
                                      center_ : SFVec3f([SFDouble(0.198), SFDouble(0.961), SFDouble(-0.0405)])),

                                    HAnimSite(
                                      DEF_ : SFString('hanim_l_radial_styloid_pt'),
                                      name_ : SFString('l_radial_styloid_pt'),
                                      translation_ : SFVec3f([SFDouble(0.1901), SFDouble(0.8645), SFDouble(-0.0415)])),

                                    HAnimSite(
                                      DEF_ : SFString('hanim_l_olecranon_pt'),
                                      name_ : SFString('l_olecranon_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.1962), SFDouble(1.1375), SFDouble(-0.1123)])),

                                    HAnimSite(
                                      DEF_ : SFString('hanim_l_humeral_medial_epicondyle_pt'),
                                      name_ : SFString('l_humeral_medial_epicondyle_pt'),
                                      translation_ : SFVec3f([SFDouble(0.1735), SFDouble(1.1272), SFDouble(-0.1113)])),

                                    HAnimSite(
                                      DEF_ : SFString('hanim_l_radiale_pt'),
                                      name_ : SFString('l_radiale_pt'),
                                      translation_ : SFVec3f([SFDouble(0.2182), SFDouble(1.1212), SFDouble(-0.1167)]))]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_l_radiocarpal'),
                                  name_ : SFString('l_radiocarpal'),
                                  center_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_l_carpal'),
                                      name_ : SFString('l_carpal'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('DiamondShape'))),

                                        Transform(
                                          DEF_ : SFString('l_hand_adjust'),
                                          translation_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                          rotation_ : SFRotation([SFDouble(-0.06361), SFDouble(-0.9967), SFDouble(0.04988), SFDouble(1.333)]),
                                          center_ : SFVec3f([SFDouble(0.213), SFDouble(0.811), SFDouble(-0.0338)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_l_hand_tip'),
                                          name_ : SFString('l_hand_tip'),
                                          translation_ : SFVec3f([SFDouble(0.208), SFDouble(0.6731), SFDouble(-0.0491)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_l_metacarpal_phalanx_2_pt'),
                                          name_ : SFString('l_metacarpal_phalanx_2_pt'),
                                          translation_ : SFVec3f([SFDouble(0.2009), SFDouble(0.8139), SFDouble(-0.0237)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_l_dactylion_pt'),
                                          name_ : SFString('l_dactylion_pt'),
                                          translation_ : SFVec3f([SFDouble(0.2056), SFDouble(0.6743), SFDouble(-0.0482)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_l_ulnar_styloid_pt'),
                                          name_ : SFString('l_ulnar_styloid_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.2142), SFDouble(0.8529), SFDouble(-0.0648)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_l_metacarpal_phalanx_5_pt'),
                                          name_ : SFString('l_metacarpal_phalanx_5_pt'),
                                          translation_ : SFVec3f([SFDouble(0.1929), SFDouble(0.786), SFDouble(-0.1122)]))])])])]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_r_shoulder'),
                          name_ : SFString('r_shoulder'),
                          center_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_r_upperarm'),
                              name_ : SFString('r_upperarm'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)]),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('DiamondShape'))),

                                Transform(
                                  DEF_ : SFString('r_upperarm_adjust'),
                                  translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)]),
                                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(0.0836)]),
                                  center_ : SFVec3f([SFDouble(-0.182), SFDouble(1.22), SFDouble(-0.047)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_r_humeral_lateral_epicondyle_pt'),
                                  name_ : SFString('r_humeral_lateral_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.2224), SFDouble(1.1517), SFDouble(-0.1033)]))]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_r_elbow'),
                              name_ : SFString('r_elbow'),
                              center_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_r_forearm'),
                                  name_ : SFString('r_forearm'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)]),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('DiamondShape'))),

                                    Transform(
                                      DEF_ : SFString('r_forearm_adjust'),
                                      translation_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)]),
                                      rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.1254)]),
                                      center_ : SFVec3f([SFDouble(-0.198), SFDouble(0.961), SFDouble(-0.0397)])),

                                    HAnimSite(
                                      DEF_ : SFString('hanim_r_radial_styloid_pt'),
                                      name_ : SFString('r_radial_styloid_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.1884), SFDouble(0.8676), SFDouble(-0.036)])),

                                    HAnimSite(
                                      DEF_ : SFString('hanim_r_olecranon_pt'),
                                      name_ : SFString('r_olecranon_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.1405), SFDouble(-0.1065)])),

                                    HAnimSite(
                                      DEF_ : SFString('hanim_r_humeral_medial_epicondyle_pt'),
                                      name_ : SFString('r_humeral_medial_epicondyle_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.168), SFDouble(1.1298), SFDouble(-0.1062)])),

                                    HAnimSite(
                                      DEF_ : SFString('hanim_r_radiale_pt'),
                                      name_ : SFString('r_radiale_pt'),
                                      translation_ : SFVec3f([SFDouble(-0.213), SFDouble(1.1305), SFDouble(-0.1091)]))]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_r_radiocarpal'),
                                  name_ : SFString('r_radiocarpal'),
                                  center_ : SFVec3f([SFDouble(-0.1959), SFDouble(0.8694), SFDouble(-0.0521)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_r_carpal'),
                                      name_ : SFString('r_carpal'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.1959), SFDouble(0.8694), SFDouble(-0.0521)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('DiamondShape'))),

                                        Transform(
                                          DEF_ : SFString('r_hand_adjust'),
                                          rotation_ : SFRotation([SFDouble(-0.09024), SFDouble(0.994), SFDouble(-0.0624), SFDouble(1.216)]),
                                          center_ : SFVec3f([SFDouble(-0.217), SFDouble(0.811), SFDouble(-0.0338)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_r_hand_tip'),
                                          name_ : SFString('r_hand_tip'),
                                          translation_ : SFVec3f([SFDouble(-0.1969), SFDouble(0.6758), SFDouble(-0.0427)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_r_metacarpal_phalanx_2_pt'),
                                          name_ : SFString('r_metacarpal_phalanx_2_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.1977), SFDouble(0.8169), SFDouble(-0.0177)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_r_dactylion_pt'),
                                          name_ : SFString('r_dactylion_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.1941), SFDouble(0.6772), SFDouble(-0.0423)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_r_ulnar_styloid_pt'),
                                          name_ : SFString('r_ulnar_styloid_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.2117), SFDouble(0.8562), SFDouble(-0.0584)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_r_metacarpal_phalanx_5_pt'),
                                          name_ : SFString('r_metacarpal_phalanx_5_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.1929), SFDouble(0.789), SFDouble(-0.1064)]))])])])]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_vc4'),
                          name_ : SFString('vc4'),
                          center_ : SFVec3f([SFDouble(0), SFDouble(1.43), SFDouble(-0.0458)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_c4'),
                              name_ : SFString('c4'))])]),

                    HAnimJoint(
                      DEF_ : SFString('hanim_vl5'),
                      name_ : SFString('vl5'),
                      center_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                      children_ : [
                        HAnimJoint(
                          DEF_ : SFString('hanim_skullbase'),
                          name_ : SFString('skullbase'),
                          center_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_skull'),
                              name_ : SFString('skull'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('DiamondShape'))),

                                HAnimSite(
                                  DEF_ : SFString('hanim_skull_vertex_tip'),
                                  name_ : SFString('skull_vertex_tip'),
                                  translation_ : SFVec3f([SFDouble(0.005), SFDouble(1.7504), SFDouble(0.0055)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_sellion_pt'),
                                  name_ : SFString('sellion_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0058), SFDouble(1.6316), SFDouble(0.0852)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_r_infraorbitale_pt'),
                                  name_ : SFString('r_infraorbitale_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0237), SFDouble(1.6171), SFDouble(0.0752)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_l_infraorbitale_pt'),
                                  name_ : SFString('l_infraorbitale_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0341), SFDouble(1.6171), SFDouble(0.0752)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_supramenton_pt'),
                                  name_ : SFString('supramenton_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0061), SFDouble(1.541), SFDouble(0.0805)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_r_tragion_pt'),
                                  name_ : SFString('r_tragion_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0646), SFDouble(1.6347), SFDouble(0.0302)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_r_gonion_pt'),
                                  name_ : SFString('r_gonion_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.052), SFDouble(1.5529), SFDouble(0.0347)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_l_tragion_pt'),
                                  name_ : SFString('l_tragion_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0739), SFDouble(1.6348), SFDouble(0.0282)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_l_gonion_pt'),
                                  name_ : SFString('l_gonion_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0631), SFDouble(1.553), SFDouble(0.033)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_nuchale_pt'),
                                  name_ : SFString('nuchale_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0039), SFDouble(1.5972), SFDouble(-0.0796)]))])])])]),

                HAnimJoint(
                  USE_ : SFString('hanim_humanoid_root')),

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
                  USE_ : SFString('hanim_l_metatarsophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_radiocarpal')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_radiocarpal')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_talocrural')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_talocrural')),
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
                  USE_ : SFString('hanim_l_carpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_forearm')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_forearm')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_talus')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_talus')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_proximal_phalanx_2')),

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
                  USE_ : SFString('hanim_skull_vertex_tip'))],
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
                  USE_ : SFString('hanim_l_calcaneus_posterior_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_calcaneus_posterior_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_dactylion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_dactylion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_femoral_lateral_epicondyle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_femoral_lateral_epicondyle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_femoral_medial_epicondyle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_femoral_medial_epicondyle_pt')),
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
                  USE_ : SFString('hanim_l_humeral_lateral_epicondyle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_humeral_lateral_epicondyle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_humeral_medial_epicondyle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_humeral_medial_epicondyle_pt')),
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
                  USE_ : SFString('hanim_l_metacarpal_phalanx_2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metacarpal_phalanx_2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metacarpal_phalanx_5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metacarpal_phalanx_5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metatarsal_phalanx_1_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metatarsal_phalanx_1_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metatarsal_phalanx_5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metatarsal_phalanx_5_pt')),
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
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tarsal_distal_phalanx_2_pt')),
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
                  USE_ : SFString('hanim_r_ulnar_styloid_pt')),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_DiamondManLOA1_view'),
                  name_ : SFString('DiamondManLOA1_view'),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('InclinedView'),
                      description_ : SFString('Inclined View'),
                      position_ : SFVec3f([SFDouble(1.62), SFDouble(1.05), SFDouble(2.06)]),
                      orientation_ : SFRotation([SFDouble(-0.113), SFDouble(0.993), SFDouble(0.0347), SFDouble(0.671)])),

                    Viewpoint(
                      DEF_ : SFString('FrontView'),
                      description_ : SFString('Front View'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0.854), SFDouble(2.57665)])),

                    Viewpoint(
                      DEF_ : SFString('SideView'),
                      description_ : SFString('Side View'),
                      position_ : SFVec3f([SFDouble(2.5929), SFDouble(0.854), SFDouble(0)]),
                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57079)])),

                    Viewpoint(
                      DEF_ : SFString('TopView'),
                      description_ : SFString('Top View'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(3.4495), SFDouble(0)]),
                      orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57079)]))]))]));
void main() { exit(0); }
