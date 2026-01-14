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
              content_ : SFString('HAnimSpecificationLOA3Invisible.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnimSpecificationLOA3Illustrated.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnimSpecificationLOA3Animation.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnimSpecificationExampleChangeLog.txt')),

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
              name_ : SFString('created'),
              content_ : SFString('24 April 2013')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Tue, 09 Sep 2025 19:39:08 GMT')),

            meta(
              name_ : SFString('error'),
              content_ : SFString('Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Matthew T. Beitler, Joe D. Williams, Don Brutzman')),

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
              name_ : SFString('translator'),
              content_ : SFString('Don Brutzman and Joe Williams')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit'))]),
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
                  title_ : SFString('HANIM 200x Default Joint Centers, LOA3'),
                  info_ : MFString([SFString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")]))]),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Front'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(4)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Front Close'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(2)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Front Closer'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1.2), SFDouble(1)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Front Face'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1.63), SFDouble(1)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Right Side'),
              position_ : SFVec3f([SFDouble(2.6), SFDouble(0.8), SFDouble(0)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Right Side Close'),
              position_ : SFVec3f([SFDouble(1), SFDouble(0.8), SFDouble(0.5)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.2)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Left Side Close'),
              position_ : SFVec3f([SFDouble(-1), SFDouble(0.8), SFDouble(0.5)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.2)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Left Side'),
              position_ : SFVec3f([SFDouble(-2.6), SFDouble(0.8), SFDouble(0)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.5708)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Top'),
              position_ : SFVec3f([SFDouble(0), SFDouble(3.5), SFDouble(0)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.5708)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            HAnimHumanoid(
              DEF_ : SFString('hanim_humanoid'),
              name_ : SFString('humanoid'),
              info_ : MFString([SFString("authorName=Matthew T. Beitler Joe D. Williams Don Brutzman"), SFString("authorEmail=HAnim@web3D.org"), SFString("copyright=none"), SFString("creationDate=12 May 1999"), SFString("usageRestrictions=none"), SFString("humanoidVersion=2.0"), SFString("height=1.7504")]),
              version_ : SFString('1.0'),
              joints_ : [
                HAnimJoint(
                  DEF_ : SFString('hanim_humanoid_root'),
                  name_ : SFString('humanoid_root'),
                  center_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                  children_ : [
                    HAnimSegment(
                      DEF_ : SFString('hanim_sacrum'),
                      name_ : SFString('sacrum')),

                    HAnimJoint(
                      DEF_ : SFString('hanim_sacroiliac'),
                      name_ : SFString('sacroiliac'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('hanim_pelvis'),
                          name_ : SFString('pelvis'),
                          children_ : [
                            HAnimSite(
                              DEF_ : SFString('hanim_r_iliocristale_pt'),
                              name_ : SFString('r_iliocristale_pt'),
                              translation_ : SFVec3f([SFDouble(-0.1525), SFDouble(1.0628), SFDouble(0.0035)])),

                            HAnimSite(
                              DEF_ : SFString('hanim_r_trochanterion_pt'),
                              name_ : SFString('r_trochanterion_pt'),
                              translation_ : SFVec3f([SFDouble(-0.1689), SFDouble(0.8419), SFDouble(0.0352)])),

                            HAnimSite(
                              DEF_ : SFString('hanim_l_iliocristale_pt'),
                              name_ : SFString('l_iliocristale_pt'),
                              translation_ : SFVec3f([SFDouble(0.1612), SFDouble(1.0537), SFDouble(0.0008)])),

                            HAnimSite(
                              DEF_ : SFString('hanim_l_trochanterion_pt'),
                              name_ : SFString('l_trochanterion_pt'),
                              translation_ : SFVec3f([SFDouble(0.1677), SFDouble(0.8336), SFDouble(0.0303)])),

                            HAnimSite(
                              DEF_ : SFString('hanim_r_asis_pt'),
                              name_ : SFString('r_asis_pt'),
                              translation_ : SFVec3f([SFDouble(-0.0887), SFDouble(1.0021), SFDouble(0.1112)])),

                            HAnimSite(
                              DEF_ : SFString('hanim_l_asis_pt'),
                              name_ : SFString('l_asis_pt'),
                              translation_ : SFVec3f([SFDouble(0.0925), SFDouble(0.9983), SFDouble(0.1052)])),

                            HAnimSite(
                              DEF_ : SFString('hanim_r_psis_pt'),
                              name_ : SFString('r_psis_pt'),
                              translation_ : SFVec3f([SFDouble(-0.0716), SFDouble(1.019), SFDouble(-0.1138)])),

                            HAnimSite(
                              DEF_ : SFString('hanim_l_psis_pt'),
                              name_ : SFString('l_psis_pt'),
                              translation_ : SFVec3f([SFDouble(0.0774), SFDouble(1.019), SFDouble(-0.1151)])),

                            HAnimSite(
                              DEF_ : SFString('hanim_crotch_pt'),
                              name_ : SFString('crotch_pt'),
                              translation_ : SFVec3f([SFDouble(0.0034), SFDouble(0.8266), SFDouble(0.0257)]))]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_l_hip'),
                          name_ : SFString('l_hip'),
                          center_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_l_thigh'),
                              name_ : SFString('l_thigh'),
                              children_ : [
                                HAnimSite(
                                  DEF_ : SFString('hanim_l_knee_crease_pt'),
                                  name_ : SFString('l_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0993), SFDouble(0.4881), SFDouble(-0.0309)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_l_femoral_lateral_epicn_pt'),
                                  name_ : SFString('l_femoral_lateral_epicn_pt'),
                                  translation_ : SFVec3f([SFDouble(0.1598), SFDouble(0.4967), SFDouble(0.0297)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_l_femoral_medial_epicn_pt'),
                                  name_ : SFString('l_femoral_medial_epicn_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0398), SFDouble(0.4946), SFDouble(0.0303)]))]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_l_knee'),
                              name_ : SFString('l_knee'),
                              center_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_l_calf'),
                                  name_ : SFString('l_calf')),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_l_ankle'),
                                  name_ : SFString('l_ankle'),
                                  center_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_l_hindfoot'),
                                      name_ : SFString('l_hindfoot'),
                                      children_ : [
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
                                          DEF_ : SFString('hanim_l_calcaneous_post_pt'),
                                          name_ : SFString('l_calcaneous_post_pt'),
                                          translation_ : SFVec3f([SFDouble(0.0974), SFDouble(0.0259), SFDouble(-0.1171)]))]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_l_subtalar'),
                                      name_ : SFString('l_subtalar'),
                                      center_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_l_midproximal'),
                                          name_ : SFString('l_midproximal')),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_l_midtarsal'),
                                          name_ : SFString('l_midtarsal'),
                                          center_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_l_middistal'),
                                              name_ : SFString('l_middistal'),
                                              children_ : [
                                                HAnimSite(
                                                  DEF_ : SFString('hanim_l_metatarsal_pha1_pt'),
                                                  name_ : SFString('l_metatarsal_pha1_pt'),
                                                  translation_ : SFVec3f([SFDouble(0.0816), SFDouble(0.0232), SFDouble(0.0106)]))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_l_metatarsal'),
                                              name_ : SFString('l_metatarsal'),
                                              center_ : SFVec3f([SFDouble(0.1086), SFDouble(0), SFDouble(0.0762)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_l_forefoot'),
                                                  name_ : SFString('l_forefoot'),
                                                  children_ : [
                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_l_forefoot_tip'),
                                                      name_ : SFString('l_forefoot_tip'),
                                                      translation_ : SFVec3f([SFDouble(0.1354), SFDouble(0.0016), SFDouble(0.1476)])),

                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_l_metatarsal_pha5_pt'),
                                                      name_ : SFString('l_metatarsal_pha5_pt'),
                                                      translation_ : SFVec3f([SFDouble(0.1825), SFDouble(0.007), SFDouble(0.0928)])),

                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_l_digit2_pt'),
                                                      name_ : SFString('l_digit2_pt'),
                                                      translation_ : SFVec3f([SFDouble(0.1195), SFDouble(0.0079), SFDouble(0.1433)]))])])])])])])]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_r_hip'),
                          name_ : SFString('r_hip'),
                          center_ : SFVec3f([SFDouble(-0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_r_thigh'),
                              name_ : SFString('r_thigh'),
                              children_ : [
                                HAnimSite(
                                  DEF_ : SFString('hanim_r_knee_crease_pt'),
                                  name_ : SFString('r_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0825), SFDouble(0.4932), SFDouble(-0.0326)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_r_femoral_lateral_epicn_pt'),
                                  name_ : SFString('r_femoral_lateral_epicn_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.1421), SFDouble(0.4992), SFDouble(0.031)])),

                                HAnimSite(
                                  DEF_ : SFString('hanim_r_femoral_medial_epicn_pt'),
                                  name_ : SFString('r_femoral_medial_epicn_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0221), SFDouble(0.5014), SFDouble(0.0289)]))]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_r_knee'),
                              name_ : SFString('r_knee'),
                              center_ : SFVec3f([SFDouble(-0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_r_calf'),
                                  name_ : SFString('r_calf')),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_r_ankle'),
                                  name_ : SFString('r_ankle'),
                                  center_ : SFVec3f([SFDouble(-0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_r_hindfoot'),
                                      name_ : SFString('r_hindfoot'),
                                      children_ : [
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
                                          DEF_ : SFString('hanim_r_calcaneous_post_pt'),
                                          name_ : SFString('r_calcaneous_post_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0692), SFDouble(0.0297), SFDouble(-0.1221)]))]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_r_subtalar'),
                                      name_ : SFString('r_subtalar'),
                                      center_ : SFVec3f([SFDouble(-0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_r_midproximal'),
                                          name_ : SFString('r_midproximal')),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_r_midtarsal'),
                                          name_ : SFString('r_midtarsal'),
                                          center_ : SFVec3f([SFDouble(-0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_r_middistal'),
                                              name_ : SFString('r_middistal'),
                                              children_ : [
                                                HAnimSite(
                                                  DEF_ : SFString('hanim_r_metatarsal_pha1_pt'),
                                                  name_ : SFString('r_metatarsal_pha1_pt'),
                                                  translation_ : SFVec3f([SFDouble(-0.0521), SFDouble(0.026), SFDouble(0.0127)]))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_r_metatarsal'),
                                              name_ : SFString('r_metatarsal'),
                                              center_ : SFVec3f([SFDouble(-0.1086), SFDouble(0), SFDouble(0.0762)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_r_forefoot'),
                                                  name_ : SFString('r_forefoot'),
                                                  children_ : [
                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_r_forefoot_tip'),
                                                      name_ : SFString('r_forefoot_tip'),
                                                      translation_ : SFVec3f([SFDouble(-0.1043), SFDouble(0.0227), SFDouble(0.145)])),

                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_r_metatarsal_pha5_pt'),
                                                      name_ : SFString('r_metatarsal_pha5_pt'),
                                                      translation_ : SFVec3f([SFDouble(-0.1523), SFDouble(0.0166), SFDouble(0.0895)])),

                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_r_digit2_pt'),
                                                      name_ : SFString('r_digit2_pt'),
                                                      translation_ : SFVec3f([SFDouble(-0.0883), SFDouble(0.0134), SFDouble(0.1383)]))])])])])])])])]),

                    HAnimJoint(
                      DEF_ : SFString('hanim_vl5'),
                      name_ : SFString('vl5'),
                      center_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('hanim_l5'),
                          name_ : SFString('l5'),
                          children_ : [
                            HAnimSite(
                              DEF_ : SFString('hanim_waist_preferred_post_pt'),
                              name_ : SFString('waist_preferred_post_pt'),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.0915), SFDouble(-0.1091)])),

                            HAnimSite(
                              DEF_ : SFString('hanim_navel_pt'),
                              name_ : SFString('navel_pt'),
                              translation_ : SFVec3f([SFDouble(0.0069), SFDouble(1.0966), SFDouble(0.1017)]))]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_vl4'),
                          name_ : SFString('vl4'),
                          center_ : SFVec3f([SFDouble(0.0035), SFDouble(1.0925), SFDouble(-0.0787)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_l4'),
                              name_ : SFString('l4')),

                            HAnimJoint(
                              DEF_ : SFString('hanim_vl3'),
                              name_ : SFString('vl3'),
                              center_ : SFVec3f([SFDouble(0.0041), SFDouble(1.1276), SFDouble(-0.0796)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_l3'),
                                  name_ : SFString('l3')),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_vl2'),
                                  name_ : SFString('vl2'),
                                  center_ : SFVec3f([SFDouble(0.0045), SFDouble(1.1546), SFDouble(-0.08)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_l2'),
                                      name_ : SFString('l2'),
                                      children_ : [
                                        HAnimSite(
                                          DEF_ : SFString('hanim_r_rib10_pt'),
                                          name_ : SFString('r_rib10_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0711), SFDouble(1.1941), SFDouble(0.1016)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_l_rib10_pt'),
                                          name_ : SFString('l_rib10_pt'),
                                          translation_ : SFVec3f([SFDouble(0.0871), SFDouble(1.1925), SFDouble(0.0992)])),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_rib10_midspine_pt'),
                                          name_ : SFString('rib10_midspine_pt'),
                                          translation_ : SFVec3f([SFDouble(0.0049), SFDouble(1.1908), SFDouble(-0.1113)]))]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_vl1'),
                                      name_ : SFString('vl1'),
                                      center_ : SFVec3f([SFDouble(0.0048), SFDouble(1.1912), SFDouble(-0.0805)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_l1'),
                                          name_ : SFString('l1')),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_vt12'),
                                          name_ : SFString('vt12'),
                                          center_ : SFVec3f([SFDouble(0.0051), SFDouble(1.2278), SFDouble(-0.0808)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_t12'),
                                              name_ : SFString('t12')),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_vt11'),
                                              name_ : SFString('vt11'),
                                              center_ : SFVec3f([SFDouble(0.0053), SFDouble(1.2679), SFDouble(-0.081)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_t11'),
                                                  name_ : SFString('t11')),

                                                HAnimJoint(
                                                  DEF_ : SFString('hanim_vt10'),
                                                  name_ : SFString('vt10'),
                                                  center_ : SFVec3f([SFDouble(0.0056), SFDouble(1.2848), SFDouble(-0.0822)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('hanim_t10'),
                                                      name_ : SFString('t10'),
                                                      children_ : [
                                                        HAnimSite(
                                                          DEF_ : SFString('hanim_substernale_pt'),
                                                          name_ : SFString('substernale_pt'),
                                                          translation_ : SFVec3f([SFDouble(0.0085), SFDouble(1.2995), SFDouble(0.1147)]))]),

                                                    HAnimJoint(
                                                      DEF_ : SFString('hanim_vt9'),
                                                      name_ : SFString('vt9'),
                                                      center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3126), SFDouble(-0.0838)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          DEF_ : SFString('hanim_t9'),
                                                          name_ : SFString('t9'),
                                                          children_ : [
                                                            HAnimSite(
                                                              DEF_ : SFString('hanim_r_thelion_pt'),
                                                              name_ : SFString('r_thelion_pt'),
                                                              translation_ : SFVec3f([SFDouble(-0.0736), SFDouble(1.3385), SFDouble(0.1217)])),

                                                            HAnimSite(
                                                              DEF_ : SFString('hanim_l_thelion_pt'),
                                                              name_ : SFString('l_thelion_pt'),
                                                              translation_ : SFVec3f([SFDouble(0.0918), SFDouble(1.3382), SFDouble(0.1192)]))]),

                                                        HAnimJoint(
                                                          DEF_ : SFString('hanim_vt8'),
                                                          name_ : SFString('vt8'),
                                                          center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3382), SFDouble(-0.0845)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              DEF_ : SFString('hanim_t8'),
                                                              name_ : SFString('t8')),

                                                            HAnimJoint(
                                                              DEF_ : SFString('hanim_vt7'),
                                                              name_ : SFString('vt7'),
                                                              center_ : SFVec3f([SFDouble(0.0058), SFDouble(1.3625), SFDouble(-0.0833)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  DEF_ : SFString('hanim_t7'),
                                                                  name_ : SFString('t7')),

                                                                HAnimJoint(
                                                                  DEF_ : SFString('hanim_vt6'),
                                                                  name_ : SFString('vt6'),
                                                                  center_ : SFVec3f([SFDouble(0.0059), SFDouble(1.3866), SFDouble(-0.08)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      DEF_ : SFString('hanim_t6'),
                                                                      name_ : SFString('t6')),

                                                                    HAnimJoint(
                                                                      DEF_ : SFString('hanim_vt5'),
                                                                      name_ : SFString('vt5'),
                                                                      center_ : SFVec3f([SFDouble(0.006), SFDouble(1.4102), SFDouble(-0.0745)]),
                                                                      children_ : [
                                                                        HAnimSegment(
                                                                          DEF_ : SFString('hanim_t5'),
                                                                          name_ : SFString('t5')),

                                                                        HAnimJoint(
                                                                          DEF_ : SFString('hanim_vt4'),
                                                                          name_ : SFString('vt4'),
                                                                          center_ : SFVec3f([SFDouble(0.0061), SFDouble(1.432), SFDouble(-0.0675)]),
                                                                          children_ : [
                                                                            HAnimSegment(
                                                                              DEF_ : SFString('hanim_t4'),
                                                                              name_ : SFString('t4')),

                                                                            HAnimJoint(
                                                                              DEF_ : SFString('hanim_vt3'),
                                                                              name_ : SFString('vt3'),
                                                                              center_ : SFVec3f([SFDouble(0.0062), SFDouble(1.4583), SFDouble(-0.057)]),
                                                                              children_ : [
                                                                                HAnimSegment(
                                                                                  DEF_ : SFString('hanim_t3'),
                                                                                  name_ : SFString('t3')),

                                                                                HAnimJoint(
                                                                                  DEF_ : SFString('hanim_vt2'),
                                                                                  name_ : SFString('vt2'),
                                                                                  center_ : SFVec3f([SFDouble(0.0063), SFDouble(1.4761), SFDouble(-0.0484)]),
                                                                                  children_ : [
                                                                                    HAnimSegment(
                                                                                      DEF_ : SFString('hanim_t2'),
                                                                                      name_ : SFString('t2')),

                                                                                    HAnimJoint(
                                                                                      DEF_ : SFString('hanim_vt1'),
                                                                                      name_ : SFString('vt1'),
                                                                                      center_ : SFVec3f([SFDouble(0.0065), SFDouble(1.4951), SFDouble(-0.0387)]),
                                                                                      children_ : [
                                                                                        HAnimSegment(
                                                                                          DEF_ : SFString('hanim_t1'),
                                                                                          name_ : SFString('t1'),
                                                                                          children_ : [
                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_suprasternale_pt'),
                                                                                              name_ : SFString('suprasternale_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0.0084), SFDouble(1.4714), SFDouble(0.0551)])),

                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_cervicale_pt'),
                                                                                              name_ : SFString('cervicale_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0.0064), SFDouble(1.52), SFDouble(-0.0815)]))]),

                                                                                        HAnimJoint(
                                                                                          DEF_ : SFString('hanim_vc7'),
                                                                                          name_ : SFString('vc7'),
                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5132), SFDouble(-0.0301)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              DEF_ : SFString('hanim_c7'),
                                                                                              name_ : SFString('c7'),
                                                                                              children_ : [
                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_r_neck_base_pt'),
                                                                                                  name_ : SFString('r_neck_base_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.0419), SFDouble(1.5149), SFDouble(-0.022)])),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_l_neck_base_pt'),
                                                                                                  name_ : SFString('l_neck_base_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.0646), SFDouble(1.5141), SFDouble(-0.038)]))]),

                                                                                            HAnimJoint(
                                                                                              DEF_ : SFString('hanim_vc6'),
                                                                                              name_ : SFString('vc6'),
                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  DEF_ : SFString('hanim_c6'),
                                                                                                  name_ : SFString('c6')),

                                                                                                HAnimJoint(
                                                                                                  DEF_ : SFString('hanim_vc5'),
                                                                                                  name_ : SFString('vc5'),
                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.552), SFDouble(-0.0082)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      DEF_ : SFString('hanim_c5'),
                                                                                                      name_ : SFString('c5')),

                                                                                                    HAnimJoint(
                                                                                                      DEF_ : SFString('hanim_vc4'),
                                                                                                      name_ : SFString('vc4'),
                                                                                                      center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5662), SFDouble(-0.0084)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          DEF_ : SFString('hanim_c4'),
                                                                                                          name_ : SFString('c4')),

                                                                                                        HAnimJoint(
                                                                                                          DEF_ : SFString('hanim_vc3'),
                                                                                                          name_ : SFString('vc3'),
                                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.58), SFDouble(-0.0103)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              DEF_ : SFString('hanim_c3'),
                                                                                                              name_ : SFString('c3')),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_vc2'),
                                                                                                              name_ : SFString('vc2'),
                                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5928), SFDouble(-0.0103)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_c2'),
                                                                                                                  name_ : SFString('c2')),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_vc1'),
                                                                                                                  name_ : SFString('vc1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.6144), SFDouble(-0.0034)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_c1'),
                                                                                                                      name_ : SFString('c1')),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_skullbase'),
                                                                                                                      name_ : SFString('skullbase'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_skull'),
                                                                                                                          name_ : SFString('skull'),
                                                                                                                          children_ : [
                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_skull_tip'),
                                                                                                                              name_ : SFString('skull_tip'),
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
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0039), SFDouble(1.5972), SFDouble(-0.0796)]))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_eyeball_joint'),
                                                                                                                          name_ : SFString('l_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_eyeball'),
                                                                                                                              name_ : SFString('l_eyeball'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_eyeball_site_view'),
                                                                                                                                  name_ : SFString('l_eyeball_site_view'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.034), SFDouble(1.64), SFDouble(0.05)]),
                                                                                                                                  children_ : [
                                                                                                                                    Viewpoint(
                                                                                                                                      DEF_ : SFString('hanim_l_eyeball_site_viewpoint'),
                                                                                                                                      description_ : SFString('l_eyeball_site_viewpoint looking forward'),
                                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.141593)]))])])]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_eyelid_joint'),
                                                                                                                          name_ : SFString('l_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_eyelid'),
                                                                                                                              name_ : SFString('l_eyelid'))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_eyebrow_joint'),
                                                                                                                          name_ : SFString('l_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0336), SFDouble(1.635), SFDouble(0.0506)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_eyebrow'),
                                                                                                                              name_ : SFString('l_eyebrow'))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_eyeball_joint'),
                                                                                                                          name_ : SFString('r_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_eyeball'),
                                                                                                                              name_ : SFString('r_eyeball'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_eyeball_site_view'),
                                                                                                                                  name_ : SFString('r_eyeball_site_view'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.034), SFDouble(1.64), SFDouble(0.05)]),
                                                                                                                                  children_ : [
                                                                                                                                    Viewpoint(
                                                                                                                                      DEF_ : SFString('hanim_r_eyeball_site_viewpoint'),
                                                                                                                                      description_ : SFString('r_eyeball_site_viewpoint looking forward'),
                                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.141593)]))])])]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_eyelid_joint'),
                                                                                                                          name_ : SFString('r_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_eyelid'),
                                                                                                                              name_ : SFString('r_eyelid'))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_eyebrow_joint'),
                                                                                                                          name_ : SFString('r_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.635), SFDouble(0.0506)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_eyebrow'),
                                                                                                                              name_ : SFString('r_eyebrow'))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_temporomandibular'),
                                                                                                                          name_ : SFString('temporomandibular'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.63), SFDouble(0.015)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_jaw'),
                                                                                                                              name_ : SFString('jaw'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_temporomandibular_l_site_pt'),
                                                                                                                                  name_ : SFString('temporomandibular_l_site_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.045), SFDouble(1.63), SFDouble(0)])),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_temporomandibular_r_site_pt'),
                                                                                                                                  name_ : SFString('temporomandibular_r_site_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.045), SFDouble(1.63), SFDouble(0)]))])])])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          DEF_ : SFString('hanim_l_sternoclavicular'),
                                                                                          name_ : SFString('l_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              DEF_ : SFString('hanim_l_clavicle'),
                                                                                              name_ : SFString('l_clavicle'),
                                                                                              children_ : [
                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_l_clavicale_pt'),
                                                                                                  name_ : SFString('l_clavicale_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.0271), SFDouble(1.4943), SFDouble(0.0394)])),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_l_acromion_pt'),
                                                                                                  name_ : SFString('l_acromion_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.2032), SFDouble(1.476), SFDouble(-0.049)])),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_l_axilla_ant_pt'),
                                                                                                  name_ : SFString('l_axilla_ant_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.1777), SFDouble(1.4065), SFDouble(-0.0075)])),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_l_axilla_post_pt'),
                                                                                                  name_ : SFString('l_axilla_post_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.1706), SFDouble(1.4072), SFDouble(-0.0875)]))]),

                                                                                            HAnimJoint(
                                                                                              DEF_ : SFString('hanim_l_acromioclavicular'),
                                                                                              name_ : SFString('l_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  DEF_ : SFString('hanim_l_scapula'),
                                                                                                  name_ : SFString('l_scapula')),

                                                                                                HAnimJoint(
                                                                                                  DEF_ : SFString('hanim_l_shoulder'),
                                                                                                  name_ : SFString('l_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      DEF_ : SFString('hanim_l_upperarm'),
                                                                                                      name_ : SFString('l_upperarm'),
                                                                                                      children_ : [
                                                                                                        HAnimSite(
                                                                                                          DEF_ : SFString('hanim_l_humeral_lateral_epicn_pt'),
                                                                                                          name_ : SFString('l_humeral_lateral_epicn_pt'),
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
                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_l_radial_styloid_pt'),
                                                                                                              name_ : SFString('l_radial_styloid_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.1901), SFDouble(0.8645), SFDouble(-0.0415)])),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_l_olecranon_pt'),
                                                                                                              name_ : SFString('l_olecranon_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.1962), SFDouble(1.1375), SFDouble(-0.1123)])),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_l_humeral_medial_epicn_pt'),
                                                                                                              name_ : SFString('l_humeral_medial_epicn_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.1735), SFDouble(1.1272), SFDouble(-0.1113)])),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_l_radiale_pt'),
                                                                                                              name_ : SFString('l_radiale_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.2182), SFDouble(1.1212), SFDouble(-0.1167)]))]),

                                                                                                        HAnimJoint(
                                                                                                          DEF_ : SFString('hanim_l_wrist'),
                                                                                                          name_ : SFString('l_wrist'),
                                                                                                          center_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              DEF_ : SFString('hanim_l_hand'),
                                                                                                              name_ : SFString('l_hand'),
                                                                                                              children_ : [
                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_pha2_pt'),
                                                                                                                  name_ : SFString('l_metacarpal_pha2_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2009), SFDouble(0.8139), SFDouble(-0.0237)])),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_l_ulnar_styloid_pt'),
                                                                                                                  name_ : SFString('l_ulnar_styloid_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2142), SFDouble(0.8529), SFDouble(-0.0648)])),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_pha5_pt'),
                                                                                                                  name_ : SFString('l_metacarpal_pha5_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.1929), SFDouble(0.786), SFDouble(-0.1122)])),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_l_hand_front_view'),
                                                                                                                  name_ : SFString('l_hand_front_view'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.3), SFDouble(0.75), SFDouble(0.45)]),
                                                                                                                  children_ : [
                                                                                                                    Viewpoint(
                                                                                                                      DEF_ : SFString('hanim_l_hand_front_viewpoint'),
                                                                                                                      description_ : SFString('left hand front'),
                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.7), SFDouble(0)]))])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_l_thumb1'),
                                                                                                              name_ : SFString('l_thumb1'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_l_thumb_metacarpal'),
                                                                                                                  name_ : SFString('l_thumb_metacarpal')),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_l_thumb2'),
                                                                                                                  name_ : SFString('l_thumb2'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_l_thumb_proximal'),
                                                                                                                      name_ : SFString('l_thumb_proximal')),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_l_thumb3'),
                                                                                                                      name_ : SFString('l_thumb3'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_l_thumb_distal'),
                                                                                                                          name_ : SFString('l_thumb_distal'),
                                                                                                                          children_ : [
                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_l_thumb_distal_tip'),
                                                                                                                              name_ : SFString('l_thumb_distal_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1982), SFDouble(0.8061), SFDouble(0.0759)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_l_index0'),
                                                                                                              name_ : SFString('l_index0'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_l_index_metacarpal'),
                                                                                                                  name_ : SFString('l_index_metacarpal')),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_l_index1'),
                                                                                                                  name_ : SFString('l_index1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_l_index_proximal'),
                                                                                                                      name_ : SFString('l_index_proximal')),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_l_index2'),
                                                                                                                      name_ : SFString('l_index2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_l_index_middle'),
                                                                                                                          name_ : SFString('l_index_middle')),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_index3'),
                                                                                                                          name_ : SFString('l_index3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_index_distal'),
                                                                                                                              name_ : SFString('l_index_distal'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_index_distal_tip'),
                                                                                                                                  name_ : SFString('l_index_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2089), SFDouble(0.6858), SFDouble(-0.0245)])),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_dactylion_pt'),
                                                                                                                                  name_ : SFString('l_dactylion_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2056), SFDouble(0.6743), SFDouble(-0.0482)]))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_l_middle0'),
                                                                                                              name_ : SFString('l_middle0'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_l_middle_metacarpal'),
                                                                                                                  name_ : SFString('l_middle_metacarpal')),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_l_middle1'),
                                                                                                                  name_ : SFString('l_middle1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_l_middle_proximal'),
                                                                                                                      name_ : SFString('l_middle_proximal')),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_l_middle2'),
                                                                                                                      name_ : SFString('l_middle2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_l_middle_middle'),
                                                                                                                          name_ : SFString('l_middle_middle')),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_middle3'),
                                                                                                                          name_ : SFString('l_middle3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_middle_distal'),
                                                                                                                              name_ : SFString('l_middle_distal'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_middle_distal_tip'),
                                                                                                                                  name_ : SFString('l_middle_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.208), SFDouble(0.6731), SFDouble(-0.0491)]))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_l_ring0'),
                                                                                                              name_ : SFString('l_ring0'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_l_ring_metacarpal'),
                                                                                                                  name_ : SFString('l_ring_metacarpal')),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_l_ring1'),
                                                                                                                  name_ : SFString('l_ring1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_l_ring_proximal'),
                                                                                                                      name_ : SFString('l_ring_proximal')),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_l_ring2'),
                                                                                                                      name_ : SFString('l_ring2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_l_ring_middle'),
                                                                                                                          name_ : SFString('l_ring_middle')),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_ring3'),
                                                                                                                          name_ : SFString('l_ring3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_ring_distal'),
                                                                                                                              name_ : SFString('l_ring_distal'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_ring_distal_tip'),
                                                                                                                                  name_ : SFString('l_ring_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2035), SFDouble(0.675), SFDouble(-0.0756)]))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_l_pinky0'),
                                                                                                              name_ : SFString('l_pinky0'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_l_pinky_metacarpal'),
                                                                                                                  name_ : SFString('l_pinky_metacarpal')),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_l_pinky1'),
                                                                                                                  name_ : SFString('l_pinky1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_l_pinky_proximal'),
                                                                                                                      name_ : SFString('l_pinky_proximal')),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_l_pinky2'),
                                                                                                                      name_ : SFString('l_pinky2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_l_pinky_middle'),
                                                                                                                          name_ : SFString('l_pinky_middle')),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_pinky3'),
                                                                                                                          name_ : SFString('l_pinky3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_pinky_distal'),
                                                                                                                              name_ : SFString('l_pinky_distal'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_pinky_distal_tip'),
                                                                                                                                  name_ : SFString('l_pinky_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2014), SFDouble(0.7009), SFDouble(-0.1012)]))])])])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          DEF_ : SFString('hanim_r_sternoclavicular'),
                                                                                          name_ : SFString('r_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(-0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              DEF_ : SFString('hanim_r_clavicle'),
                                                                                              name_ : SFString('r_clavicle'),
                                                                                              children_ : [
                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_r_clavicale_pt'),
                                                                                                  name_ : SFString('r_clavicale_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.0115), SFDouble(1.4943), SFDouble(0.04)])),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_r_acromion_pt'),
                                                                                                  name_ : SFString('r_acromion_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.1905), SFDouble(1.4791), SFDouble(-0.0431)])),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_r_axilla_ant_pt'),
                                                                                                  name_ : SFString('r_axilla_ant_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.1626), SFDouble(1.4072), SFDouble(-0.0031)])),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_r_axilla_post_pt'),
                                                                                                  name_ : SFString('r_axilla_post_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.1603), SFDouble(1.4098), SFDouble(-0.0826)]))]),

                                                                                            HAnimJoint(
                                                                                              DEF_ : SFString('hanim_r_acromioclavicular'),
                                                                                              name_ : SFString('r_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(-0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  DEF_ : SFString('hanim_r_scapula'),
                                                                                                  name_ : SFString('r_scapula')),

                                                                                                HAnimJoint(
                                                                                                  DEF_ : SFString('hanim_r_shoulder'),
                                                                                                  name_ : SFString('r_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      DEF_ : SFString('hanim_r_upperarm'),
                                                                                                      name_ : SFString('r_upperarm'),
                                                                                                      children_ : [
                                                                                                        HAnimSite(
                                                                                                          DEF_ : SFString('hanim_r_humeral_lateral_epicn_pt'),
                                                                                                          name_ : SFString('r_humeral_lateral_epicn_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.2224), SFDouble(1.1517), SFDouble(-0.1033)]))]),

                                                                                                    HAnimJoint(
                                                                                                      DEF_ : SFString('hanim_r_elbow'),
                                                                                                      name_ : SFString('r_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          DEF_ : SFString('hanim_r_forearm'),
                                                                                                          name_ : SFString('r_forearm'),
                                                                                                          children_ : [
                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_r_radial_styloid_pt'),
                                                                                                              name_ : SFString('r_radial_styloid_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.1884), SFDouble(0.8676), SFDouble(-0.036)])),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_r_olecranon_pt'),
                                                                                                              name_ : SFString('r_olecranon_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.1405), SFDouble(-0.1065)])),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_r_humeral_medial_epicn_pt'),
                                                                                                              name_ : SFString('r_humeral_medial_epicn_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.168), SFDouble(1.1298), SFDouble(-0.1062)])),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_r_radiale_pt'),
                                                                                                              name_ : SFString('r_radiale_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.213), SFDouble(1.1305), SFDouble(-0.1091)]))]),

                                                                                                        HAnimJoint(
                                                                                                          DEF_ : SFString('hanim_r_wrist'),
                                                                                                          name_ : SFString('r_wrist'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              DEF_ : SFString('hanim_r_hand'),
                                                                                                              name_ : SFString('r_hand'),
                                                                                                              children_ : [
                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_pha2_pt'),
                                                                                                                  name_ : SFString('r_metacarpal_pha2_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1977), SFDouble(0.8169), SFDouble(-0.0177)])),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_r_ulnar_styloid_pt'),
                                                                                                                  name_ : SFString('r_ulnar_styloid_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2117), SFDouble(0.8562), SFDouble(-0.0584)])),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_pha5_pt'),
                                                                                                                  name_ : SFString('r_metacarpal_pha5_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1929), SFDouble(0.789), SFDouble(-0.1064)])),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_r_hand_front_view'),
                                                                                                                  name_ : SFString('r_hand_front_view'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.3), SFDouble(0.75), SFDouble(0.45)]),
                                                                                                                  children_ : [
                                                                                                                    Viewpoint(
                                                                                                                      DEF_ : SFString('hanim_r_hand_front_viewpoint'),
                                                                                                                      description_ : SFString('right hand front'),
                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.7), SFDouble(0)]))])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_r_thumb1'),
                                                                                                              name_ : SFString('r_thumb1'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_r_thumb_metacarpal'),
                                                                                                                  name_ : SFString('r_thumb_metacarpal')),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_r_thumb2'),
                                                                                                                  name_ : SFString('r_thumb2'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_r_thumb_proximal'),
                                                                                                                      name_ : SFString('r_thumb_proximal')),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_r_thumb3'),
                                                                                                                      name_ : SFString('r_thumb3'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_r_thumb_distal'),
                                                                                                                          name_ : SFString('r_thumb_distal'),
                                                                                                                          children_ : [
                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_r_thumb_distal_tip'),
                                                                                                                              name_ : SFString('r_thumb_distal_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1869), SFDouble(0.809), SFDouble(0.082)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_r_index0'),
                                                                                                              name_ : SFString('r_index0'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_r_index_metacarpal'),
                                                                                                                  name_ : SFString('r_index_metacarpal')),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_r_index1'),
                                                                                                                  name_ : SFString('r_index1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_r_index_proximal'),
                                                                                                                      name_ : SFString('r_index_proximal')),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_r_index2'),
                                                                                                                      name_ : SFString('r_index2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_r_index_middle'),
                                                                                                                          name_ : SFString('r_index_middle')),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_index3'),
                                                                                                                          name_ : SFString('r_index3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_index_distal'),
                                                                                                                              name_ : SFString('r_index_distal'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_index_distal_tip'),
                                                                                                                                  name_ : SFString('r_index_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.198), SFDouble(0.6883), SFDouble(-0.018)])),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_dactylion_pt'),
                                                                                                                                  name_ : SFString('r_dactylion_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1941), SFDouble(0.6772), SFDouble(-0.0423)]))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_r_middle0'),
                                                                                                              name_ : SFString('r_middle0'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_r_middle_metacarpal'),
                                                                                                                  name_ : SFString('r_middle_metacarpal')),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_r_middle1'),
                                                                                                                  name_ : SFString('r_middle1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_r_middle_proximal'),
                                                                                                                      name_ : SFString('r_middle_proximal')),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_r_middle2'),
                                                                                                                      name_ : SFString('r_middle2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_r_middle_middle'),
                                                                                                                          name_ : SFString('r_middle_middle')),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_middle3'),
                                                                                                                          name_ : SFString('r_middle3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_middle_distal'),
                                                                                                                              name_ : SFString('r_middle_distal'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_middle_distal_tip'),
                                                                                                                                  name_ : SFString('r_middle_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1969), SFDouble(0.6758), SFDouble(-0.0427)]))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_r_ring0'),
                                                                                                              name_ : SFString('r_ring0'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_r_ring_metacarpal'),
                                                                                                                  name_ : SFString('r_ring_metacarpal')),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_r_ring1'),
                                                                                                                  name_ : SFString('r_ring1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_r_ring_proximal'),
                                                                                                                      name_ : SFString('r_ring_proximal')),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_r_ring2'),
                                                                                                                      name_ : SFString('r_ring2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_r_ring_middle'),
                                                                                                                          name_ : SFString('r_ring_middle')),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_ring3'),
                                                                                                                          name_ : SFString('r_ring3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_ring_distal'),
                                                                                                                              name_ : SFString('r_ring_distal'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_ring_distal_tip'),
                                                                                                                                  name_ : SFString('r_ring_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1934), SFDouble(0.6778), SFDouble(-0.0693)]))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_r_pinky0'),
                                                                                                              name_ : SFString('r_pinky0'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_r_pinky_metacarpal'),
                                                                                                                  name_ : SFString('r_pinky_metacarpal')),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_r_pinky1'),
                                                                                                                  name_ : SFString('r_pinky1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_r_pinky_proximal'),
                                                                                                                      name_ : SFString('r_pinky_proximal')),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_r_pinky2'),
                                                                                                                      name_ : SFString('r_pinky2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_r_pinky_middle'),
                                                                                                                          name_ : SFString('r_pinky_middle')),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_pinky3'),
                                                                                                                          name_ : SFString('r_pinky3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_pinky_distal'),
                                                                                                                              name_ : SFString('r_pinky_distal'),
                                                                                                                              children_ : [
                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_pinky_distal_tip'),
                                                                                                                                  name_ : SFString('r_pinky_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1938), SFDouble(0.7035), SFDouble(-0.0949)]))])])])])])])])])])])])])])])])])])])])])])])])])])])])]),

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
                  USE_ : SFString('hanim_l_ankle')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_ankle')),

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
                  USE_ : SFString('hanim_l_index0')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_index0')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_index1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_index1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_index2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_index2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_index3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_index3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_middle0')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_middle0')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_middle1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_middle1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_middle2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_middle2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_middle3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_middle3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midtarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midtarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_pinky0')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_pinky0')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_pinky1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_pinky1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_pinky2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_pinky2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_pinky3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_pinky3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_ring0')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_ring0')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_ring1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_ring1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_ring2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_ring2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_ring3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_ring3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_sternoclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_sternoclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_subtalar')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_subtalar')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_thumb1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_thumb1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_thumb2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_thumb2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_thumb3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_thumb3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_wrist')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_wrist')),
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
                  USE_ : SFString('hanim_l_forefoot')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_forefoot')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_hand')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_hand')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_hindfoot')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_hindfoot')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_index_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_index_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_index_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_index_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_index_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_index_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_index_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_index_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_middistal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_middistal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_middle_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_middle_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_middle_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_middle_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_middle_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_middle_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_middle_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_middle_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_midproximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_midproximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_pinky_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_pinky_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_pinky_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_pinky_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_pinky_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_pinky_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_pinky_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_pinky_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_ring_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_ring_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_ring_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_ring_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_ring_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_ring_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_ring_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_ring_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_scapula')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_scapula')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_thigh')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_thigh')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_thumb_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_thumb_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_thumb_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_thumb_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_thumb_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_thumb_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_upperarm')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_upperarm')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_crotch_pt'))],
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_skull_tip')),
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
                  USE_ : SFString('hanim_waist_preferred_post_pt')),
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
                  USE_ : SFString('hanim_l_axilla_ant_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_axilla_ant_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_axilla_post_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_axilla_post_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_calcaneous_post_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_calcaneous_post_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_clavicale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_clavicale_pt')),
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
                  USE_ : SFString('hanim_r_iliocristale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_iliocristale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_index_distal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_index_distal_tip')),
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
                  USE_ : SFString('hanim_l_middle_distal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_middle_distal_tip')),
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
                  USE_ : SFString('hanim_l_pinky_distal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_pinky_distal_tip')),
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
                  USE_ : SFString('hanim_l_ring_distal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_ring_distal_tip')),
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
                  USE_ : SFString('hanim_r_thelion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_thelion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_thumb_distal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_thumb_distal_tip')),
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
                  USE_ : SFString('hanim_r_ulnar_styloid_pt')),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_l_inclined_view'),
                  name_ : SFString('l_inclined_view'),
                  translation_ : SFVec3f([SFDouble(1.62), SFDouble(1.05), SFDouble(2.06)]),
                  rotation_ : SFRotation([SFDouble(-0.113), SFDouble(0.993), SFDouble(0.0347), SFDouble(0.671)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_l_inclined_viewpoint'),
                      description_ : SFString('left inclined'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_r_inclined_view'),
                  name_ : SFString('r_inclined_view'),
                  translation_ : SFVec3f([SFDouble(-1.62), SFDouble(1.05), SFDouble(2.06)]),
                  rotation_ : SFRotation([SFDouble(-0.113), SFDouble(-0.993), SFDouble(0.0347), SFDouble(0.671)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_r_inclined_viewpoint'),
                      description_ : SFString('right inclined'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_front_view'),
                  name_ : SFString('front_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.85), SFDouble(2.58)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_front_viewpoint'),
                      description_ : SFString('front'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_back_view'),
                  name_ : SFString('back_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.85), SFDouble(-2.58)]),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.14)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_back_viewpoint'),
                      description_ : SFString('back'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_l_side_view'),
                  name_ : SFString('l_side_view'),
                  translation_ : SFVec3f([SFDouble(2.6), SFDouble(0.854), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_l_side_viewpoint'),
                      description_ : SFString('left side'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_Top_view'),
                  name_ : SFString('Top_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(3.5), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_Top_viewpoint'),
                      description_ : SFString('Top'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_front_close_view'),
                  name_ : SFString('front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.854), SFDouble(1.575)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_front_close_viewpoint'),
                      description_ : SFString('front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1.575)]))]),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_side_close_view'),
                  name_ : SFString('side_close_view'),
                  translation_ : SFVec3f([SFDouble(1.56), SFDouble(0.854), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_side_close_viewpoint'),
                      description_ : SFString('side close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(1.6), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_head_front_close_view'),
                  name_ : SFString('head_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(1)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_head_front_close_viewpoint'),
                      description_ : SFString('head front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)]))]),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_chest_front_close_view'),
                  name_ : SFString('chest_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.2), SFDouble(1)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_chest_front_close_viewpoint'),
                      description_ : SFString('chest front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)]))]),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_pelvis_front_close_view'),
                  name_ : SFString('pelvis_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(1)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_pelvis_front_close_viewpoint'),
                      description_ : SFString('pelvis front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)]))]),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_knees_front_close_view'),
                  name_ : SFString('knees_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(1)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_knees_front_close_viewpoint'),
                      description_ : SFString('knees front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_feet_front_close_view'),
                  name_ : SFString('feet_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_feet_front_close_viewpoint'),
                      description_ : SFString('feet front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]))]),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_eye_level_view'),
                  name_ : SFString('eye_level_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.6332), SFDouble(0.0502)]),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('hanim_eye_level_viewpoint'),
                      description_ : SFString('eye level looking forward'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.141593)]))]),
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
                  USE_ : SFString('hanim_r_hand_front_view')))]));
void main() { exit(0); }
