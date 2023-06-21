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
              content_ : SFString('HAnim2SpecificationLOA3Invisible.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('24 April 2013')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('13 March 2021')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Matthew T. Beitler, Joe D. Williams, Don Brutzman')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim2SpecificationLOA3Illustrated.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim2SpecificationLOA3Animation.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnimSpecificationExampleChangeLog.txt')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/BonesAllSkeletonFrontViewLOA1.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/BonesAllSkeletonFrontViewLOA2.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/BonesAllSkeletonFrontViewLOA3.png')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('insert MetadataInteger nodes indicating LOA for each Joint and Segment')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.cis.upenn.edu/~badler/anthro/89-71.ps')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Don Brutzman and Joe Williams')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('originals/LOA3ExampleSourceWithDiamondsOriginal.wrl')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('originals/LOA3ExampleSourceWithDiamondsOriginal.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Invisible.x3d')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            Background(
              skyColor_ : MFColor([SFColor(0.3), SFColor(0.3), SFColor(0.3)])),

            NavigationInfo(),

            Group(
              DEF_ : SFString('Original_WorldInfo'),
              children_ : [
                WorldInfo(
                  info_ : MFString([SFString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")]),
                  title_ : SFString('HANIM 200x Default Joint Centers, LOA3'))]),
          /*TODO move viewpoints to be internal to HAnimHumanoid*/
          /*Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.*/

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Front'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(4)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Front Close'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(2)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Front Closer'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1.2), SFDouble(1)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Front Face'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1.63), SFDouble(1)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Right Side'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
              position_ : SFVec3f([SFDouble(2.6), SFDouble(0.8), SFDouble(0)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Right Side Close'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.2)]),
              position_ : SFVec3f([SFDouble(1), SFDouble(0.8), SFDouble(0.5)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Left Side Close'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.2)]),
              position_ : SFVec3f([SFDouble(-1), SFDouble(0.8), SFDouble(0.5)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Left Side'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.5708)]),
              position_ : SFVec3f([SFDouble(-2.6), SFDouble(0.8), SFDouble(0)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Top'),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.5708)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(3.5), SFDouble(0)])),

            HAnimHumanoid(
              name_ : SFString('humanoid'),
              DEF_ : SFString('hanim_humanoid'),
              loa_ : 3,
              version_ : SFString('2.0'),
              /*HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'*/
              /*Only one root HAnimJoint is allowed*/
              /*USE nodes go here for access by inverse kinematics (IK) engines and other tools*/
              /*Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation*/
              /*TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default*/
              /*right between the eyes, stationary position not animating except with body itself*/
              metadata_ : [
                MetadataSet(
                  name_ : SFString('HAnimHumanoid.info'),
                  reference_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid'),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorName'),
                      value_ : MFString([SFString("Matthew T. Beitler Joe D. Williams Don Brutzman")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorEmail'),
                      value_ : MFString([SFString("HAnim@web3D.org")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('copyright'),
                      value_ : MFString([SFString("none")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('creationDate'),
                      value_ : MFString([SFString("12 May 1999")])),
                  value_ : 
                    MetadataFloat(
                      name_ : SFString('height'),
                      value_ : MFFloat([SFFloat(1.7504)])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('humanoidVersion'),
                      value_ : MFString([SFString("2.0")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('usageRestrictions'),
                      value_ : MFString([SFString("none")]))),
              joints_ : [
                HAnimJoint(
                  name_ : SFString('humanoid_root'),
                  DEF_ : SFString('hanim_humanoid_root'),
                  center_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                  children_ : [
                    HAnimSegment(
                      name_ : SFString('sacrum'),
                      DEF_ : SFString('hanim_sacrum')),

                    HAnimJoint(
                      name_ : SFString('sacroiliac'),
                      DEF_ : SFString('hanim_sacroiliac'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('pelvis'),
                          DEF_ : SFString('hanim_pelvis'),
                          children_ : [
                            HAnimSite(
                              name_ : SFString('r_iliocristale_pt'),
                              DEF_ : SFString('hanim_r_iliocristale_pt'),
                              translation_ : SFVec3f([SFDouble(-0.1525), SFDouble(1.0628), SFDouble(0.0035)])),

                            HAnimSite(
                              name_ : SFString('r_trochanterion_pt'),
                              DEF_ : SFString('hanim_r_trochanterion_pt'),
                              translation_ : SFVec3f([SFDouble(-0.1689), SFDouble(0.8419), SFDouble(0.0352)])),

                            HAnimSite(
                              name_ : SFString('l_iliocristale_pt'),
                              DEF_ : SFString('hanim_l_iliocristale_pt'),
                              translation_ : SFVec3f([SFDouble(0.1612), SFDouble(1.0537), SFDouble(0.0008)])),

                            HAnimSite(
                              name_ : SFString('l_trochanterion_pt'),
                              DEF_ : SFString('hanim_l_trochanterion_pt'),
                              translation_ : SFVec3f([SFDouble(0.1677), SFDouble(0.8336), SFDouble(0.0303)])),

                            HAnimSite(
                              name_ : SFString('r_asis_pt'),
                              DEF_ : SFString('hanim_r_asis_pt'),
                              translation_ : SFVec3f([SFDouble(-0.0887), SFDouble(1.0021), SFDouble(0.1112)])),

                            HAnimSite(
                              name_ : SFString('l_asis_pt'),
                              DEF_ : SFString('hanim_l_asis_pt'),
                              translation_ : SFVec3f([SFDouble(0.0925), SFDouble(0.9983), SFDouble(0.1052)])),

                            HAnimSite(
                              name_ : SFString('r_psis_pt'),
                              DEF_ : SFString('hanim_r_psis_pt'),
                              translation_ : SFVec3f([SFDouble(-0.0716), SFDouble(1.019), SFDouble(-0.1138)])),

                            HAnimSite(
                              name_ : SFString('l_psis_pt'),
                              DEF_ : SFString('hanim_l_psis_pt'),
                              translation_ : SFVec3f([SFDouble(0.0774), SFDouble(1.019), SFDouble(-0.1151)])),

                            HAnimSite(
                              name_ : SFString('crotch_pt'),
                              DEF_ : SFString('hanim_crotch_pt'),
                              translation_ : SFVec3f([SFDouble(0.0034), SFDouble(0.8266), SFDouble(0.0257)]))]),

                        HAnimJoint(
                          name_ : SFString('l_hip'),
                          DEF_ : SFString('hanim_l_hip'),
                          center_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('l_thigh'),
                              DEF_ : SFString('hanim_l_thigh'),
                              children_ : [
                                HAnimSite(
                                  name_ : SFString('l_knee_crease_pt'),
                                  DEF_ : SFString('hanim_l_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0993), SFDouble(0.4881), SFDouble(-0.0309)])),

                                HAnimSite(
                                  name_ : SFString('l_femoral_lateral_epicondyle_pt'),
                                  DEF_ : SFString('hanim_l_femoral_lateral_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(0.1598), SFDouble(0.4967), SFDouble(0.0297)])),

                                HAnimSite(
                                  name_ : SFString('l_femoral_medial_epicondyle_pt'),
                                  DEF_ : SFString('hanim_l_femoral_medial_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0398), SFDouble(0.4946), SFDouble(0.0303)]))]),

                            HAnimJoint(
                              name_ : SFString('l_knee'),
                              DEF_ : SFString('hanim_l_knee'),
                              center_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('l_calf'),
                                  DEF_ : SFString('hanim_l_calf')),

                                HAnimJoint(
                                  name_ : SFString('l_talocrural'),
                                  DEF_ : SFString('hanim_l_talocrural'),
                                  center_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l_talus'),
                                      DEF_ : SFString('hanim_l_talus'),
                                      children_ : [
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
                                          name_ : SFString('l_calcaneus_posterior_pt'),
                                          DEF_ : SFString('hanim_l_calcaneus_posterior_pt'),
                                          translation_ : SFVec3f([SFDouble(0.0974), SFDouble(0.0259), SFDouble(-0.1171)]))]),

                                    HAnimJoint(
                                      name_ : SFString('l_tarsometatarsal_2'),
                                      DEF_ : SFString('hanim_l_tarsometatarsal_2'),
                                      center_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l_metatarsal_2'),
                                          DEF_ : SFString('hanim_l_metatarsal_2')),

                                        HAnimJoint(
                                          name_ : SFString('l_metatarsophalangeal_2'),
                                          DEF_ : SFString('hanim_l_metatarsophalangeal_2'),
                                          center_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_tarsal_proximal_phalanx_2'),
                                              DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_2'),
                                              children_ : [
                                                HAnimSite(
                                                  name_ : SFString('l_metatarsal_phalanx_1_pt'),
                                                  DEF_ : SFString('hanim_l_metatarsal_phalanx_1_pt'),
                                                  translation_ : SFVec3f([SFDouble(0.0816), SFDouble(0.0232), SFDouble(0.0106)]))]),

                                            HAnimJoint(
                                              name_ : SFString('l_tarsal_distal_interphalangeal_2'),
                                              DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_2'),
                                              center_ : SFVec3f([SFDouble(0.1086), SFDouble(0), SFDouble(0.0762)]),
                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_tarsal_distal_phalanx_2'),
                                                  DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2'),
                                                  children_ : [
                                                    HAnimSite(
                                                      name_ : SFString('l_forefoot_tip'),
                                                      DEF_ : SFString('hanim_l_forefoot_tip'),
                                                      translation_ : SFVec3f([SFDouble(0.1354), SFDouble(0.0016), SFDouble(0.1476)])),

                                                    HAnimSite(
                                                      name_ : SFString('l_metatarsal_phalanx_5_pt'),
                                                      DEF_ : SFString('hanim_l_metatarsal_phalanx_5_pt'),
                                                      translation_ : SFVec3f([SFDouble(0.1825), SFDouble(0.007), SFDouble(0.0928)])),

                                                    HAnimSite(
                                                      name_ : SFString('l_tarsal_distal_phalanx_2_pt'),
                                                      DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2_pt'),
                                                      translation_ : SFVec3f([SFDouble(0.1195), SFDouble(0.0079), SFDouble(0.1433)]))])])])])])])]),

                        HAnimJoint(
                          name_ : SFString('r_hip'),
                          DEF_ : SFString('hanim_r_hip'),
                          center_ : SFVec3f([SFDouble(-0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('r_thigh'),
                              DEF_ : SFString('hanim_r_thigh'),
                              children_ : [
                                HAnimSite(
                                  name_ : SFString('r_knee_crease_pt'),
                                  DEF_ : SFString('hanim_r_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0825), SFDouble(0.4932), SFDouble(-0.0326)])),

                                HAnimSite(
                                  name_ : SFString('r_femoral_lateral_epicondyle_pt'),
                                  DEF_ : SFString('hanim_r_femoral_lateral_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.1421), SFDouble(0.4992), SFDouble(0.031)])),

                                HAnimSite(
                                  name_ : SFString('r_femoral_medial_epicondyle_pt'),
                                  DEF_ : SFString('hanim_r_femoral_medial_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0221), SFDouble(0.5014), SFDouble(0.0289)]))]),

                            HAnimJoint(
                              name_ : SFString('r_knee'),
                              DEF_ : SFString('hanim_r_knee'),
                              center_ : SFVec3f([SFDouble(-0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('r_calf'),
                                  DEF_ : SFString('hanim_r_calf')),

                                HAnimJoint(
                                  name_ : SFString('r_talocrural'),
                                  DEF_ : SFString('hanim_r_talocrural'),
                                  center_ : SFVec3f([SFDouble(-0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_talus'),
                                      DEF_ : SFString('hanim_r_talus'),
                                      children_ : [
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
                                          name_ : SFString('r_calcaneus_posterior_pt'),
                                          DEF_ : SFString('hanim_r_calcaneus_posterior_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0692), SFDouble(0.0297), SFDouble(-0.1221)]))]),

                                    HAnimJoint(
                                      name_ : SFString('r_tarsometatarsal_2'),
                                      DEF_ : SFString('hanim_r_tarsometatarsal_2'),
                                      center_ : SFVec3f([SFDouble(-0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_metatarsal_2'),
                                          DEF_ : SFString('hanim_r_metatarsal_2')),

                                        HAnimJoint(
                                          name_ : SFString('r_metatarsophalangeal_2'),
                                          DEF_ : SFString('hanim_r_metatarsophalangeal_2'),
                                          center_ : SFVec3f([SFDouble(-0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_tarsal_proximal_phalanx_2'),
                                              DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_2'),
                                              children_ : [
                                                HAnimSite(
                                                  name_ : SFString('r_metatarsal_phalanx_1_pt'),
                                                  DEF_ : SFString('hanim_r_metatarsal_phalanx_1_pt'),
                                                  translation_ : SFVec3f([SFDouble(-0.0521), SFDouble(0.026), SFDouble(0.0127)]))]),

                                            HAnimJoint(
                                              name_ : SFString('r_tarsal_distal_interphalangeal_2'),
                                              DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_2'),
                                              center_ : SFVec3f([SFDouble(-0.1086), SFDouble(0), SFDouble(0.0762)]),
                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_tarsal_distal_phalanx_2'),
                                                  DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2'),
                                                  children_ : [
                                                    HAnimSite(
                                                      name_ : SFString('r_forefoot_tip'),
                                                      DEF_ : SFString('hanim_r_forefoot_tip'),
                                                      translation_ : SFVec3f([SFDouble(-0.1043), SFDouble(0.0227), SFDouble(0.145)])),

                                                    HAnimSite(
                                                      name_ : SFString('r_metatarsal_phalanx_5_pt'),
                                                      DEF_ : SFString('hanim_r_metatarsal_phalanx_5_pt'),
                                                      translation_ : SFVec3f([SFDouble(-0.1523), SFDouble(0.0166), SFDouble(0.0895)])),

                                                    HAnimSite(
                                                      name_ : SFString('r_tarsal_distal_phalanx_2_pt'),
                                                      DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2_pt'),
                                                      translation_ : SFVec3f([SFDouble(-0.0883), SFDouble(0.0134), SFDouble(0.1383)]))])])])])])])])]),

                    HAnimJoint(
                      name_ : SFString('vl5'),
                      DEF_ : SFString('hanim_vl5'),
                      center_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('l5'),
                          DEF_ : SFString('hanim_l5'),
                          children_ : [
                            HAnimSite(
                              name_ : SFString('waist_preferred_posterior_pt'),
                              DEF_ : SFString('hanim_waist_preferred_posterior_pt'),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.0915), SFDouble(-0.1091)])),

                            HAnimSite(
                              name_ : SFString('navel_pt'),
                              DEF_ : SFString('hanim_navel_pt'),
                              translation_ : SFVec3f([SFDouble(0.0069), SFDouble(1.0966), SFDouble(0.1017)]))]),

                        HAnimJoint(
                          name_ : SFString('vl4'),
                          DEF_ : SFString('hanim_vl4'),
                          center_ : SFVec3f([SFDouble(0.0035), SFDouble(1.0925), SFDouble(-0.0787)]),
                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('l4'),
                              DEF_ : SFString('hanim_l4')),

                            HAnimJoint(
                              name_ : SFString('vl3'),
                              DEF_ : SFString('hanim_vl3'),
                              center_ : SFVec3f([SFDouble(0.0041), SFDouble(1.1276), SFDouble(-0.0796)]),
                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('l3'),
                                  DEF_ : SFString('hanim_l3')),

                                HAnimJoint(
                                  name_ : SFString('vl2'),
                                  DEF_ : SFString('hanim_vl2'),
                                  center_ : SFVec3f([SFDouble(0.0045), SFDouble(1.1546), SFDouble(-0.08)]),
                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l2'),
                                      DEF_ : SFString('hanim_l2'),
                                      children_ : [
                                        HAnimSite(
                                          name_ : SFString('r_rib10_pt'),
                                          DEF_ : SFString('hanim_r_rib10_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0711), SFDouble(1.1941), SFDouble(0.1016)])),

                                        HAnimSite(
                                          name_ : SFString('l_rib10_pt'),
                                          DEF_ : SFString('hanim_l_rib10_pt'),
                                          translation_ : SFVec3f([SFDouble(0.0871), SFDouble(1.1925), SFDouble(0.0992)])),

                                        HAnimSite(
                                          name_ : SFString('rib10_midspine_pt'),
                                          DEF_ : SFString('hanim_rib10_midspine_pt'),
                                          translation_ : SFVec3f([SFDouble(0.0049), SFDouble(1.1908), SFDouble(-0.1113)]))]),

                                    HAnimJoint(
                                      name_ : SFString('vl1'),
                                      DEF_ : SFString('hanim_vl1'),
                                      center_ : SFVec3f([SFDouble(0.0048), SFDouble(1.1912), SFDouble(-0.0805)]),
                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l1'),
                                          DEF_ : SFString('hanim_l1')),

                                        HAnimJoint(
                                          name_ : SFString('vt12'),
                                          DEF_ : SFString('hanim_vt12'),
                                          center_ : SFVec3f([SFDouble(0.0051), SFDouble(1.2278), SFDouble(-0.0808)]),
                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('t12'),
                                              DEF_ : SFString('hanim_t12')),

                                            HAnimJoint(
                                              name_ : SFString('vt11'),
                                              DEF_ : SFString('hanim_vt11'),
                                              center_ : SFVec3f([SFDouble(0.0053), SFDouble(1.2679), SFDouble(-0.081)]),
                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('t11'),
                                                  DEF_ : SFString('hanim_t11')),

                                                HAnimJoint(
                                                  name_ : SFString('vt10'),
                                                  DEF_ : SFString('hanim_vt10'),
                                                  center_ : SFVec3f([SFDouble(0.0056), SFDouble(1.2848), SFDouble(-0.0822)]),
                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('t10'),
                                                      DEF_ : SFString('hanim_t10'),
                                                      children_ : [
                                                        HAnimSite(
                                                          name_ : SFString('substernale_pt'),
                                                          DEF_ : SFString('hanim_substernale_pt'),
                                                          translation_ : SFVec3f([SFDouble(0.0085), SFDouble(1.2995), SFDouble(0.1147)]))]),

                                                    HAnimJoint(
                                                      name_ : SFString('vt9'),
                                                      DEF_ : SFString('hanim_vt9'),
                                                      center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3126), SFDouble(-0.0838)]),
                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('t9'),
                                                          DEF_ : SFString('hanim_t9'),
                                                          children_ : [
                                                            HAnimSite(
                                                              name_ : SFString('r_thelion_pt'),
                                                              DEF_ : SFString('hanim_r_thelion_pt'),
                                                              translation_ : SFVec3f([SFDouble(-0.0736), SFDouble(1.3385), SFDouble(0.1217)])),

                                                            HAnimSite(
                                                              name_ : SFString('l_thelion_pt'),
                                                              DEF_ : SFString('hanim_l_thelion_pt'),
                                                              translation_ : SFVec3f([SFDouble(0.0918), SFDouble(1.3382), SFDouble(0.1192)]))]),

                                                        HAnimJoint(
                                                          name_ : SFString('vt8'),
                                                          DEF_ : SFString('hanim_vt8'),
                                                          center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3382), SFDouble(-0.0845)]),
                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('t8'),
                                                              DEF_ : SFString('hanim_t8')),

                                                            HAnimJoint(
                                                              name_ : SFString('vt7'),
                                                              DEF_ : SFString('hanim_vt7'),
                                                              center_ : SFVec3f([SFDouble(0.0058), SFDouble(1.3625), SFDouble(-0.0833)]),
                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('t7'),
                                                                  DEF_ : SFString('hanim_t7')),

                                                                HAnimJoint(
                                                                  name_ : SFString('vt6'),
                                                                  DEF_ : SFString('hanim_vt6'),
                                                                  center_ : SFVec3f([SFDouble(0.0059), SFDouble(1.3866), SFDouble(-0.08)]),
                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('t6'),
                                                                      DEF_ : SFString('hanim_t6')),

                                                                    HAnimJoint(
                                                                      name_ : SFString('vt5'),
                                                                      DEF_ : SFString('hanim_vt5'),
                                                                      center_ : SFVec3f([SFDouble(0.006), SFDouble(1.4102), SFDouble(-0.0745)]),
                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                      children_ : [
                                                                        HAnimSegment(
                                                                          name_ : SFString('t5'),
                                                                          DEF_ : SFString('hanim_t5')),

                                                                        HAnimJoint(
                                                                          name_ : SFString('vt4'),
                                                                          DEF_ : SFString('hanim_vt4'),
                                                                          center_ : SFVec3f([SFDouble(0.0061), SFDouble(1.432), SFDouble(-0.0675)]),
                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                          children_ : [
                                                                            HAnimSegment(
                                                                              name_ : SFString('t4'),
                                                                              DEF_ : SFString('hanim_t4')),

                                                                            HAnimJoint(
                                                                              name_ : SFString('vt3'),
                                                                              DEF_ : SFString('hanim_vt3'),
                                                                              center_ : SFVec3f([SFDouble(0.0062), SFDouble(1.4583), SFDouble(-0.057)]),
                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                              children_ : [
                                                                                HAnimSegment(
                                                                                  name_ : SFString('t3'),
                                                                                  DEF_ : SFString('hanim_t3')),

                                                                                HAnimJoint(
                                                                                  name_ : SFString('vt2'),
                                                                                  DEF_ : SFString('hanim_vt2'),
                                                                                  center_ : SFVec3f([SFDouble(0.0063), SFDouble(1.4761), SFDouble(-0.0484)]),
                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                  children_ : [
                                                                                    HAnimSegment(
                                                                                      name_ : SFString('t2'),
                                                                                      DEF_ : SFString('hanim_t2')),

                                                                                    HAnimJoint(
                                                                                      name_ : SFString('vt1'),
                                                                                      DEF_ : SFString('hanim_vt1'),
                                                                                      center_ : SFVec3f([SFDouble(0.0065), SFDouble(1.4951), SFDouble(-0.0387)]),
                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                      children_ : [
                                                                                        HAnimSegment(
                                                                                          name_ : SFString('t1'),
                                                                                          DEF_ : SFString('hanim_t1'),
                                                                                          children_ : [
                                                                                            HAnimSite(
                                                                                              name_ : SFString('suprasternale_pt'),
                                                                                              DEF_ : SFString('hanim_suprasternale_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0.0084), SFDouble(1.4714), SFDouble(0.0551)])),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('cervicale_pt'),
                                                                                              DEF_ : SFString('hanim_cervicale_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0.0064), SFDouble(1.52), SFDouble(-0.0815)]))]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('vc7'),
                                                                                          DEF_ : SFString('hanim_vc7'),
                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5132), SFDouble(-0.0301)]),
                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('c7'),
                                                                                              DEF_ : SFString('hanim_c7'),
                                                                                              children_ : [
                                                                                                HAnimSite(
                                                                                                  name_ : SFString('r_neck_base_pt'),
                                                                                                  DEF_ : SFString('hanim_r_neck_base_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.0419), SFDouble(1.5149), SFDouble(-0.022)])),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('l_neck_base_pt'),
                                                                                                  DEF_ : SFString('hanim_l_neck_base_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.0646), SFDouble(1.5141), SFDouble(-0.038)]))]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('vc6'),
                                                                                              DEF_ : SFString('hanim_vc6'),
                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('c6'),
                                                                                                  DEF_ : SFString('hanim_c6')),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('vc5'),
                                                                                                  DEF_ : SFString('hanim_vc5'),
                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.552), SFDouble(-0.0082)]),
                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('c5'),
                                                                                                      DEF_ : SFString('hanim_c5')),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('vc4'),
                                                                                                      DEF_ : SFString('hanim_vc4'),
                                                                                                      center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5662), SFDouble(-0.0084)]),
                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('c4'),
                                                                                                          DEF_ : SFString('hanim_c4')),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('vc3'),
                                                                                                          DEF_ : SFString('hanim_vc3'),
                                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.58), SFDouble(-0.0103)]),
                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('c3'),
                                                                                                              DEF_ : SFString('hanim_c3')),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('vc2'),
                                                                                                              DEF_ : SFString('hanim_vc2'),
                                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5928), SFDouble(-0.0103)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('c2'),
                                                                                                                  DEF_ : SFString('hanim_c2')),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('vc1'),
                                                                                                                  DEF_ : SFString('hanim_vc1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.6144), SFDouble(-0.0034)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('c1'),
                                                                                                                      DEF_ : SFString('hanim_c1')),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('skullbase'),
                                                                                                                      DEF_ : SFString('hanim_skullbase'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('skull'),
                                                                                                                          DEF_ : SFString('hanim_skull'),
                                                                                                                          children_ : [
                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('skull_vertex_tip'),
                                                                                                                              DEF_ : SFString('hanim_skull_vertex_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.005), SFDouble(1.7504), SFDouble(0.0055)]),
                                                                                                                              /*TODO move skull_tip x to zero, check others for symmetry*/),

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
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0039), SFDouble(1.5972), SFDouble(-0.0796)]))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyeball_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_eyeball'),
                                                                                                                              DEF_ : SFString('hanim_l_eyeball'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_eyeball_site_view'),
                                                                                                                                  DEF_ : SFString('hanim_l_eyeball_site_view'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.034), SFDouble(1.64), SFDouble(0.05)]),
                                                                                                                                  children_ : [
                                                                                                                                    Viewpoint(
                                                                                                                                      DEF_ : SFString('hanim_l_eyeball_site_viewpoint'),
                                                                                                                                      description_ : SFString('l_eyeball_site_viewpoint looking forward'),
                                                                                                                                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.141593)]),
                                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))])])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyelid_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_eyelid'),
                                                                                                                              DEF_ : SFString('hanim_l_eyelid'))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyebrow_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0336), SFDouble(1.635), SFDouble(0.0506)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_eyebrow'),
                                                                                                                              DEF_ : SFString('hanim_l_eyebrow'))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyeball_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_eyeball'),
                                                                                                                              DEF_ : SFString('hanim_r_eyeball'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_eyeball_site_view'),
                                                                                                                                  DEF_ : SFString('hanim_r_eyeball_site_view'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.034), SFDouble(1.64), SFDouble(0.05)]),
                                                                                                                                  children_ : [
                                                                                                                                    Viewpoint(
                                                                                                                                      DEF_ : SFString('hanim_r_eyeball_site_viewpoint'),
                                                                                                                                      description_ : SFString('r_eyeball_site_viewpoint looking forward'),
                                                                                                                                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.141593)]),
                                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))])])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyelid_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_eyelid'),
                                                                                                                              DEF_ : SFString('hanim_r_eyelid'))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyebrow_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.635), SFDouble(0.0506)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_eyebrow'),
                                                                                                                              DEF_ : SFString('hanim_r_eyebrow'))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('temporomandibular'),
                                                                                                                          DEF_ : SFString('hanim_temporomandibular'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.63), SFDouble(0.015)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          /*Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint*/
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('jaw'),
                                                                                                                              DEF_ : SFString('hanim_jaw'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('temporomandibular_l_site_pt'),
                                                                                                                                  DEF_ : SFString('hanim_temporomandibular_l_site_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.045), SFDouble(1.63), SFDouble(0)])),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('temporomandibular_r_site_pt'),
                                                                                                                                  DEF_ : SFString('hanim_temporomandibular_r_site_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.045), SFDouble(1.63), SFDouble(0)]))])])])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('l_sternoclavicular'),
                                                                                          DEF_ : SFString('hanim_l_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('l_clavicle'),
                                                                                              DEF_ : SFString('hanim_l_clavicle'),
                                                                                              children_ : [
                                                                                                HAnimSite(
                                                                                                  name_ : SFString('l_clavicle_pt'),
                                                                                                  DEF_ : SFString('hanim_l_clavicle_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.0271), SFDouble(1.4943), SFDouble(0.0394)])),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('l_acromion_pt'),
                                                                                                  DEF_ : SFString('hanim_l_acromion_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.2032), SFDouble(1.476), SFDouble(-0.049)])),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('l_axilla_proximal_pt'),
                                                                                                  DEF_ : SFString('hanim_l_axilla_proximal_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.1777), SFDouble(1.4065), SFDouble(-0.0075)])),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('l_axilla_distal_pt'),
                                                                                                  DEF_ : SFString('hanim_l_axilla_distal_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.1706), SFDouble(1.4072), SFDouble(-0.0875)]))]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('l_acromioclavicular'),
                                                                                              DEF_ : SFString('hanim_l_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('l_scapula'),
                                                                                                  DEF_ : SFString('hanim_l_scapula')),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('l_shoulder'),
                                                                                                  DEF_ : SFString('hanim_l_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('l_upperarm'),
                                                                                                      DEF_ : SFString('hanim_l_upperarm'),
                                                                                                      children_ : [
                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_humeral_lateral_epicondyle_pt'),
                                                                                                          DEF_ : SFString('hanim_l_humeral_lateral_epicondyle_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.228), SFDouble(1.1482), SFDouble(-0.11)]))]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('l_elbow'),
                                                                                                      DEF_ : SFString('hanim_l_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('l_forearm'),
                                                                                                          DEF_ : SFString('hanim_l_forearm'),
                                                                                                          children_ : [
                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_radial_styloid_pt'),
                                                                                                              DEF_ : SFString('hanim_l_radial_styloid_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.1901), SFDouble(0.8645), SFDouble(-0.0415)])),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_olecranon_pt'),
                                                                                                              DEF_ : SFString('hanim_l_olecranon_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.1962), SFDouble(1.1375), SFDouble(-0.1123)])),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_humeral_medial_epicondyle_pt'),
                                                                                                              DEF_ : SFString('hanim_l_humeral_medial_epicondyle_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.1735), SFDouble(1.1272), SFDouble(-0.1113)])),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_radiale_pt'),
                                                                                                              DEF_ : SFString('hanim_l_radiale_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.2182), SFDouble(1.1212), SFDouble(-0.1167)]))]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('l_radiocarpal'),
                                                                                                          DEF_ : SFString('hanim_l_radiocarpal'),
                                                                                                          center_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('l_carpal'),
                                                                                                              DEF_ : SFString('hanim_l_carpal'),
                                                                                                              children_ : [
                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_metacarpal_phalanx_2_pt'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_phalanx_2_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2009), SFDouble(0.8139), SFDouble(-0.0237)])),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_ulnar_styloid_pt'),
                                                                                                                  DEF_ : SFString('hanim_l_ulnar_styloid_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2142), SFDouble(0.8529), SFDouble(-0.0648)])),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_metacarpal_phalanx_5_pt'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_phalanx_5_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.1929), SFDouble(0.786), SFDouble(-0.1122)])),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_hand_front_view'),
                                                                                                                  DEF_ : SFString('hanim_l_hand_front_view'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.3), SFDouble(0.75), SFDouble(0.45)]),
                                                                                                                  children_ : [
                                                                                                                    Viewpoint(
                                                                                                                      DEF_ : SFString('hanim_l_hand_front_viewpoint'),
                                                                                                                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.7), SFDouble(0)]),
                                                                                                                      description_ : SFString('left hand front'),
                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_carpometacarpal_1'),
                                                                                                              DEF_ : SFString('hanim_l_carpometacarpal_1'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_metacarpal_1'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_1')),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_metacarpophalangeal_1'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpophalangeal_1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_carpal_proximal_phalanx_1'),
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_phalanx_1')),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpal_interphalangeal_1'),
                                                                                                                      DEF_ : SFString('hanim_l_carpal_interphalangeal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_carpal_distal_phalanx_1'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_distal_phalanx_1'),
                                                                                                                          children_ : [
                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_1_tip'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_1_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1982), SFDouble(0.8061), SFDouble(0.0759)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_carpometacarpal_2'),
                                                                                                              DEF_ : SFString('hanim_l_carpometacarpal_2'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_metacarpal_2'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_2')),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_metacarpophalangeal_2'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpophalangeal_2'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_carpal_proximal_phalanx_2'),
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_phalanx_2')),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpal_proximal_interphalangeal_2'),
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_carpal_middle_phalanx_2'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_middle_phalanx_2')),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_distal_interphalangeal_2'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_2'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_2'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_2_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_2_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2089), SFDouble(0.6858), SFDouble(-0.0245)])),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_dactylion_pt'),
                                                                                                                                  DEF_ : SFString('hanim_l_dactylion_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2056), SFDouble(0.6743), SFDouble(-0.0482)]))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_carpometacarpal_3'),
                                                                                                              DEF_ : SFString('hanim_l_carpometacarpal_3'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_metacarpal_3'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_3')),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_metacarpophalangeal_3'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpophalangeal_3'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_carpal_proximal_phalanx_3'),
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_phalanx_3')),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpal_proximal_interphalangeal_3'),
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_carpal_middle_phalanx_3'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_middle_phalanx_3')),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_distal_interphalangeal_3'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_3'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_3'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_3_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_3_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.208), SFDouble(0.6731), SFDouble(-0.0491)]))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_carpometacarpal_4'),
                                                                                                              DEF_ : SFString('hanim_l_carpometacarpal_4'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_metacarpal_4'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_4')),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_metacarpophalangeal_4'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpophalangeal_4'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_carpal_proximal_phalanx_4'),
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_phalanx_4')),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpal_proximal_interphalangeal_4'),
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_carpal_middle_phalanx_4'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_middle_phalanx_4')),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_distal_interphalangeal_4'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_4'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_4'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_4_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_4_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2035), SFDouble(0.675), SFDouble(-0.0756)]))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_carpometacarpal_5'),
                                                                                                              DEF_ : SFString('hanim_l_carpometacarpal_5'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_metacarpal_5'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_5')),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_metacarpophalangeal_5'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpophalangeal_5'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_carpal_proximal_phalanx_5'),
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_phalanx_5')),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_carpal_proximal_interphalangeal_5'),
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_carpal_middle_phalanx_5'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_middle_phalanx_5')),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_distal_interphalangeal_5'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_5'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_5'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_5_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_5_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2014), SFDouble(0.7009), SFDouble(-0.1012)]))])])])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('r_sternoclavicular'),
                                                                                          DEF_ : SFString('hanim_r_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(-0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('r_clavicle'),
                                                                                              DEF_ : SFString('hanim_r_clavicle'),
                                                                                              children_ : [
                                                                                                HAnimSite(
                                                                                                  name_ : SFString('r_clavicle_pt'),
                                                                                                  DEF_ : SFString('hanim_r_clavicle_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.0115), SFDouble(1.4943), SFDouble(0.04)])),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('r_acromion_pt'),
                                                                                                  DEF_ : SFString('hanim_r_acromion_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.1905), SFDouble(1.4791), SFDouble(-0.0431)])),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('r_axilla_proximal_pt'),
                                                                                                  DEF_ : SFString('hanim_r_axilla_proximal_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.1626), SFDouble(1.4072), SFDouble(-0.0031)])),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('r_axilla_distal_pt'),
                                                                                                  DEF_ : SFString('hanim_r_axilla_distal_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.1603), SFDouble(1.4098), SFDouble(-0.0826)]))]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('r_acromioclavicular'),
                                                                                              DEF_ : SFString('hanim_r_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(-0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('r_scapula'),
                                                                                                  DEF_ : SFString('hanim_r_scapula')),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('r_shoulder'),
                                                                                                  DEF_ : SFString('hanim_r_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('r_upperarm'),
                                                                                                      DEF_ : SFString('hanim_r_upperarm'),
                                                                                                      children_ : [
                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_humeral_lateral_epicondyle_pt'),
                                                                                                          DEF_ : SFString('hanim_r_humeral_lateral_epicondyle_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.2224), SFDouble(1.1517), SFDouble(-0.1033)]))]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('r_elbow'),
                                                                                                      DEF_ : SFString('hanim_r_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('r_forearm'),
                                                                                                          DEF_ : SFString('hanim_r_forearm'),
                                                                                                          children_ : [
                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_radial_styloid_pt'),
                                                                                                              DEF_ : SFString('hanim_r_radial_styloid_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.1884), SFDouble(0.8676), SFDouble(-0.036)])),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_olecranon_pt'),
                                                                                                              DEF_ : SFString('hanim_r_olecranon_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.1405), SFDouble(-0.1065)])),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_humeral_medial_epicondyle_pt'),
                                                                                                              DEF_ : SFString('hanim_r_humeral_medial_epicondyle_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.168), SFDouble(1.1298), SFDouble(-0.1062)])),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_radiale_pt'),
                                                                                                              DEF_ : SFString('hanim_r_radiale_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.213), SFDouble(1.1305), SFDouble(-0.1091)]))]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('r_radiocarpal'),
                                                                                                          DEF_ : SFString('hanim_r_radiocarpal'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('r_carpal'),
                                                                                                              DEF_ : SFString('hanim_r_carpal'),
                                                                                                              children_ : [
                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_metacarpal_phalanx_2_pt'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_phalanx_2_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1977), SFDouble(0.8169), SFDouble(-0.0177)])),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_ulnar_styloid_pt'),
                                                                                                                  DEF_ : SFString('hanim_r_ulnar_styloid_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2117), SFDouble(0.8562), SFDouble(-0.0584)])),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_metacarpal_phalanx_5_pt'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_phalanx_5_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1929), SFDouble(0.789), SFDouble(-0.1064)])),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_hand_front_view'),
                                                                                                                  DEF_ : SFString('hanim_r_hand_front_view'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.3), SFDouble(0.75), SFDouble(0.45)]),
                                                                                                                  children_ : [
                                                                                                                    Viewpoint(
                                                                                                                      DEF_ : SFString('hanim_r_hand_front_viewpoint'),
                                                                                                                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.7), SFDouble(0)]),
                                                                                                                      description_ : SFString('right hand front'),
                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_carpometacarpal_1'),
                                                                                                              DEF_ : SFString('hanim_r_carpometacarpal_1'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_metacarpal_1'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_1')),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_metacarpophalangeal_1'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpophalangeal_1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_carpal_proximal_phalanx_1'),
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_1')),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpal_interphalangeal_1'),
                                                                                                                      DEF_ : SFString('hanim_r_carpal_interphalangeal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_carpal_distal_phalanx_1'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_distal_phalanx_1'),
                                                                                                                          children_ : [
                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_1_tip'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_1_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1869), SFDouble(0.809), SFDouble(0.082)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_carpometacarpal_2'),
                                                                                                              DEF_ : SFString('hanim_r_carpometacarpal_2'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_metacarpal_2'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_2')),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_metacarpophalangeal_2'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpophalangeal_2'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_carpal_proximal_phalanx_2'),
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_2')),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpal_proximal_interphalangeal_2'),
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_carpal_middle_phalanx_2'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_middle_phalanx_2')),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_distal_interphalangeal_2'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_2'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_2'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_2_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_2_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.198), SFDouble(0.6883), SFDouble(-0.018)])),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_dactylion_pt'),
                                                                                                                                  DEF_ : SFString('hanim_r_dactylion_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1941), SFDouble(0.6772), SFDouble(-0.0423)]))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_carpometacarpal_3'),
                                                                                                              DEF_ : SFString('hanim_r_carpometacarpal_3'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_metacarpal_3'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_3')),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_metacarpophalangeal_3'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpophalangeal_3'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_carpal_proximal_phalanx_3'),
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_3')),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpal_proximal_interphalangeal_3'),
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_carpal_middle_phalanx_3'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_middle_phalanx_3')),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_distal_interphalangeal_3'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_3'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_3'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_3_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_3_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1969), SFDouble(0.6758), SFDouble(-0.0427)]))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_carpometacarpal_4'),
                                                                                                              DEF_ : SFString('hanim_r_carpometacarpal_4'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_metacarpal_4'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_4')),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_metacarpophalangeal_4'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpophalangeal_4'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_carpal_proximal_phalanx_4'),
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_4')),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpal_proximal_interphalangeal_4'),
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_carpal_middle_phalanx_4'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_middle_phalanx_4')),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_distal_interphalangeal_4'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_4'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_4'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_4_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_4_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1934), SFDouble(0.6778), SFDouble(-0.0693)]))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_carpometacarpal_5'),
                                                                                                              DEF_ : SFString('hanim_r_carpometacarpal_5'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_metacarpal_5'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_5')),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_metacarpophalangeal_5'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpophalangeal_5'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_carpal_proximal_phalanx_5'),
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_5')),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_carpal_proximal_interphalangeal_5'),
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_carpal_middle_phalanx_5'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_middle_phalanx_5')),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_distal_interphalangeal_5'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_5'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_5'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_5_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_5_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1938), SFDouble(0.7035), SFDouble(-0.0949)]))])])])])])])])])])])])])])])])])])])])])])])])])])])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('l_inclined_view'),
                  DEF_ : SFString('hanim_l_inclined_view'),
                  rotation_ : SFRotation([SFDouble(-0.113), SFDouble(0.993), SFDouble(0.0347), SFDouble(0.671)]),
                  translation_ : SFVec3f([SFDouble(1.62), SFDouble(1.05), SFDouble(2.06)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_l_inclined_viewpoint'),
                      description_ : SFString('left inclined'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))])],
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('r_inclined_view'),
                  DEF_ : SFString('hanim_r_inclined_view'),
                  rotation_ : SFRotation([SFDouble(-0.113), SFDouble(-0.993), SFDouble(0.0347), SFDouble(0.671)]),
                  translation_ : SFVec3f([SFDouble(-1.62), SFDouble(1.05), SFDouble(2.06)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_r_inclined_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)]),
                      description_ : SFString('right inclined'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('front_view'),
                  DEF_ : SFString('hanim_front_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.85), SFDouble(2.58)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_front_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)]),
                      description_ : SFString('front'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('back_view'),
                  DEF_ : SFString('hanim_back_view'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.14)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.85), SFDouble(-2.58)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_back_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)]),
                      description_ : SFString('back'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('l_side_view'),
                  DEF_ : SFString('hanim_l_side_view'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
                  translation_ : SFVec3f([SFDouble(2.6), SFDouble(0.854), SFDouble(0)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_l_side_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)]),
                      description_ : SFString('left side'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('Top_view'),
                  DEF_ : SFString('hanim_Top_view'),
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(3.5), SFDouble(0)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_Top_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)]),
                      description_ : SFString('Top'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('front_close_view'),
                  DEF_ : SFString('hanim_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.854), SFDouble(1.575)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_front_close_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1.575)]),
                      description_ : SFString('front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('side_close_view'),
                  DEF_ : SFString('hanim_side_close_view'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
                  translation_ : SFVec3f([SFDouble(1.56), SFDouble(0.854), SFDouble(0)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_side_close_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(1.6), SFDouble(0), SFDouble(0)]),
                      description_ : SFString('side close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('head_front_close_view'),
                  DEF_ : SFString('hanim_head_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(1)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_head_front_close_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)]),
                      description_ : SFString('head front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('chest_front_close_view'),
                  DEF_ : SFString('hanim_chest_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.2), SFDouble(1)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_chest_front_close_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)]),
                      description_ : SFString('chest front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('pelvis_front_close_view'),
                  DEF_ : SFString('hanim_pelvis_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(1)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_pelvis_front_close_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)]),
                      description_ : SFString('pelvis front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('knees_front_close_view'),
                  DEF_ : SFString('hanim_knees_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(1)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_knees_front_close_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(0)]),
                      description_ : SFString('knees front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('feet_front_close_view'),
                  DEF_ : SFString('hanim_feet_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_feet_front_close_viewpoint'),
                      description_ : SFString('feet front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('eye_level_view'),
                  DEF_ : SFString('hanim_eye_level_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.6332), SFDouble(0.0502)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_eye_level_viewpoint'),
                      description_ : SFString('eye level looking forward'),
                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.141593)]),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_eyeball_site_view')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_eyeball_site_view')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_hand_front_view')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_hand_front_view')),

                HAnimJoint(
                  USE_ : SFString('hanim_humanoid_root')),

                HAnimJoint(
                  USE_ : SFString('hanim_sacroiliac')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl5')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl4')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl3')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl2')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl1')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt12')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt11')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt10')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt9')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt8')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt7')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt6')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt5')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt4')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt3')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt2')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt1')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc7')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc6')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc5')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc4')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc3')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc2')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc1')),

                HAnimJoint(
                  USE_ : SFString('hanim_skullbase')),

                HAnimJoint(
                  USE_ : SFString('hanim_temporomandibular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_acromioclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_acromioclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_elbow')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_elbow')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_eyeball_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_eyeball_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_eyebrow_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_eyebrow_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_eyelid_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_eyelid_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_hip')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_hip')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_5')),

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
                  USE_ : SFString('hanim_l_sternoclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_sternoclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_talocrural')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_talocrural')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_2')),
              segments_ : [
                HAnimSegment(
                  USE_ : SFString('hanim_pelvis')),

                HAnimSegment(
                  USE_ : SFString('hanim_skull')),

                HAnimSegment(
                  USE_ : SFString('hanim_jaw')),

                HAnimSegment(
                  USE_ : SFString('hanim_c1')),

                HAnimSegment(
                  USE_ : SFString('hanim_c2')),

                HAnimSegment(
                  USE_ : SFString('hanim_c3')),

                HAnimSegment(
                  USE_ : SFString('hanim_c4')),

                HAnimSegment(
                  USE_ : SFString('hanim_c5')),

                HAnimSegment(
                  USE_ : SFString('hanim_c6')),

                HAnimSegment(
                  USE_ : SFString('hanim_c7')),

                HAnimSegment(
                  USE_ : SFString('hanim_t1')),

                HAnimSegment(
                  USE_ : SFString('hanim_t2')),

                HAnimSegment(
                  USE_ : SFString('hanim_t3')),

                HAnimSegment(
                  USE_ : SFString('hanim_t4')),

                HAnimSegment(
                  USE_ : SFString('hanim_t5')),

                HAnimSegment(
                  USE_ : SFString('hanim_t6')),

                HAnimSegment(
                  USE_ : SFString('hanim_t7')),

                HAnimSegment(
                  USE_ : SFString('hanim_t8')),

                HAnimSegment(
                  USE_ : SFString('hanim_t9')),

                HAnimSegment(
                  USE_ : SFString('hanim_t10')),

                HAnimSegment(
                  USE_ : SFString('hanim_t11')),

                HAnimSegment(
                  USE_ : SFString('hanim_t12')),

                HAnimSegment(
                  USE_ : SFString('hanim_l1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l5')),

                HAnimSegment(
                  USE_ : SFString('hanim_sacrum')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_calf')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_calf')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_clavicle')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_clavicle')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_eyeball')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_eyeball')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_eyebrow')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_eyebrow')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_eyelid')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_eyelid')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_forearm')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_forearm')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metatarsal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_scapula')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_scapula')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_talus')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_talus')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_distal_phalanx_2')),

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
                  USE_ : SFString('hanim_crotch_pt'))],
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_skull_vertex_tip')),
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
                  USE_ : SFString('hanim_suprasternale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_cervicale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_substernale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_rib10_midspine_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_waist_preferred_posterior_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_navel_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_acromion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_acromion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_asis_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_asis_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_axilla_distal_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_axilla_distal_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_axilla_proximal_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_axilla_proximal_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_calcaneus_posterior_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_calcaneus_posterior_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_1_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_1_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_2_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_2_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_3_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_3_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_4_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_4_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_5_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_5_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_clavicle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_clavicle_pt')),
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
                  USE_ : SFString('hanim_l_forefoot_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_forefoot_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_gonion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_gonion_pt')),
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
                  USE_ : SFString('hanim_r_iliocristale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_iliocristale_pt')),
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
                  USE_ : SFString('hanim_r_neck_base_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_neck_base_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_olecranon_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_olecranon_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_psis_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_psis_pt')),
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
                  USE_ : SFString('hanim_r_rib10_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_rib10_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_temporomandibular_l_site_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_temporomandibular_r_site_pt')),
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
                  USE_ : SFString('hanim_r_thelion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_thelion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tragion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tragion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_trochanterion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_trochanterion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_ulnar_styloid_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_ulnar_styloid_pt')))]));
void main() { exit(0); }
