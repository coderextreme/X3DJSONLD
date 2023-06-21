'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { component } from './x3d.mjs';
import { SFInt32 } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { HAnimHumanoid } from './x3d.mjs';
import { MetadataSet } from './x3d.mjs';
import { MetadataString } from './x3d.mjs';
import { MetadataFloat } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { HAnimJoint } from './x3d.mjs';
import { HAnimSegment } from './x3d.mjs';
import { HAnimSite } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HAnim2SpecificationLOA3Invisible.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("24 April 2013")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("13 March 2021")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Matthew T. Beitler, Joe D. Williams, Don Brutzman")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnim2SpecificationLOA3Illustrated.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnim2SpecificationLOA3Animation.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnimSpecificationExampleChangeLog.txt")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/BonesAllSkeletonFrontViewLOA1.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/BonesAllSkeletonFrontViewLOA2.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/BonesAllSkeletonFrontViewLOA3.png")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("insert MetadataInteger nodes indicating LOA for each Joint and Segment")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.cis.upenn.edu/~badler/anthro/89-71.ps")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Don Brutzman and Joe Williams")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Invisible.x3d")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Background({
              skyColor : new MFColor([0.3,0.3,0.3])}),

            new NavigationInfo({}),

            new Group({
              DEF : new SFString("Original_WorldInfo"),
              children : new MFNode([
                new WorldInfo({
                  info : new MFString([" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]),
                  title : new SFString("HANIM 200x Default Joint Centers, LOA3")})])}),
          /*TODO move viewpoints to be internal to HAnimHumanoid*/
          /*Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.*/

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Front"),
              position : new SFVec3f([0,0.4,4])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Front Close"),
              position : new SFVec3f([0,0.8,2])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Front Closer"),
              position : new SFVec3f([0,1.2,1])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,1.5,0.0016]),
              description : new SFString("Humanoid LOA 3 Front Face"),
              position : new SFVec3f([0,1.63,1])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Right Side"),
              orientation : new SFRotation([0,1,0,1.5708]),
              position : new SFVec3f([2.6,0.8,0])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Right Side Close"),
              orientation : new SFRotation([0,1,0,1.2]),
              position : new SFVec3f([1,0.8,0.5])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Left Side Close"),
              orientation : new SFRotation([0,1,0,-1.2]),
              position : new SFVec3f([-1,0.8,0.5])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Left Side"),
              orientation : new SFRotation([0,1,0,-1.5708]),
              position : new SFVec3f([-2.6,0.8,0])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Top"),
              orientation : new SFRotation([1,0,0,-1.5708]),
              position : new SFVec3f([0,3.5,0])}),

            new HAnimHumanoid({
              name : new SFString("humanoid"),
              DEF : new SFString("hanim_humanoid"),
              loa : new SFInt32(3),
              version : new SFString("2.0"),
              /*HAnimHumanoid original info='\"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman\" \"authorEmail=HAnim@web3D.org\" \"copyright=none\" \"creationDate=12 May 1999\" \"usageRestrictions=none\" \"humanoidVersion=2.0\" \"height=1.7504\"'*/
              /*Only one root HAnimJoint is allowed*/
              /*USE nodes go here for access by inverse kinematics (IK) engines and other tools*/
              /*Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation*/
              /*TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default*/
              /*right between the eyes, stationary position not animating except with body itself*/
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("HAnimHumanoid.info"),
                  reference : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("authorName"),
                      value : new MFString(["Matthew T. Beitler Joe D. Williams Don Brutzman"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("authorEmail"),
                      value : new MFString(["HAnim@web3D.org"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("copyright"),
                      value : new MFString(["none"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("creationDate"),
                      value : new MFString(["12 May 1999"])})),
                  value : new SFNode(
                    new MetadataFloat({
                      name : new SFString("height"),
                      value : new MFFloat([1.7504])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("humanoidVersion"),
                      value : new MFString(["2.0"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("usageRestrictions"),
                      value : new MFString(["none"])}))}),
              joints : new MFNode([
                new HAnimJoint({
                  name : new SFString("humanoid_root"),
                  DEF : new SFString("hanim_humanoid_root"),
                  center : new SFVec3f([0,0.824,0.0277]),
                  ulimit : new SFVec3f([0,0,0]),
                  llimit : new SFVec3f([0,0,0]),
                  stiffness : new SFVec3f([0,0,0]),
                  children : new MFNode([
                    new HAnimSegment({
                      name : new SFString("sacrum"),
                      DEF : new SFString("hanim_sacrum")}),

                    new HAnimJoint({
                      name : new SFString("sacroiliac"),
                      DEF : new SFString("hanim_sacroiliac"),
                      center : new SFVec3f([0,0.9149,0.0016]),
                      ulimit : new SFVec3f([0,0,0]),
                      llimit : new SFVec3f([0,0,0]),
                      stiffness : new SFVec3f([0,0,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("pelvis"),
                          DEF : new SFString("hanim_pelvis"),
                          children : new MFNode([
                            new HAnimSite({
                              name : new SFString("r_iliocristale_pt"),
                              DEF : new SFString("hanim_r_iliocristale_pt"),
                              translation : new SFVec3f([-0.1525,1.0628,0.0035])}),

                            new HAnimSite({
                              name : new SFString("r_trochanterion_pt"),
                              DEF : new SFString("hanim_r_trochanterion_pt"),
                              translation : new SFVec3f([-0.1689,0.8419,0.0352])}),

                            new HAnimSite({
                              name : new SFString("l_iliocristale_pt"),
                              DEF : new SFString("hanim_l_iliocristale_pt"),
                              translation : new SFVec3f([0.1612,1.0537,0.0008])}),

                            new HAnimSite({
                              name : new SFString("l_trochanterion_pt"),
                              DEF : new SFString("hanim_l_trochanterion_pt"),
                              translation : new SFVec3f([0.1677,0.8336,0.0303])}),

                            new HAnimSite({
                              name : new SFString("r_asis_pt"),
                              DEF : new SFString("hanim_r_asis_pt"),
                              translation : new SFVec3f([-0.0887,1.0021,0.1112])}),

                            new HAnimSite({
                              name : new SFString("l_asis_pt"),
                              DEF : new SFString("hanim_l_asis_pt"),
                              translation : new SFVec3f([0.0925,0.9983,0.1052])}),

                            new HAnimSite({
                              name : new SFString("r_psis_pt"),
                              DEF : new SFString("hanim_r_psis_pt"),
                              translation : new SFVec3f([-0.0716,1.019,-0.1138])}),

                            new HAnimSite({
                              name : new SFString("l_psis_pt"),
                              DEF : new SFString("hanim_l_psis_pt"),
                              translation : new SFVec3f([0.0774,1.019,-0.1151])}),

                            new HAnimSite({
                              name : new SFString("crotch_pt"),
                              DEF : new SFString("hanim_crotch_pt"),
                              translation : new SFVec3f([0.0034,0.8266,0.0257])})])}),

                        new HAnimJoint({
                          name : new SFString("l_hip"),
                          DEF : new SFString("hanim_l_hip"),
                          center : new SFVec3f([0.0961,0.9124,-0.0001]),
                          ulimit : new SFVec3f([0,0,0]),
                          llimit : new SFVec3f([0,0,0]),
                          stiffness : new SFVec3f([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l_thigh"),
                              DEF : new SFString("hanim_l_thigh"),
                              children : new MFNode([
                                new HAnimSite({
                                  name : new SFString("l_knee_crease_pt"),
                                  DEF : new SFString("hanim_l_knee_crease_pt"),
                                  translation : new SFVec3f([0.0993,0.4881,-0.0309])}),

                                new HAnimSite({
                                  name : new SFString("l_femoral_lateral_epicondyle_pt"),
                                  DEF : new SFString("hanim_l_femoral_lateral_epicondyle_pt"),
                                  translation : new SFVec3f([0.1598,0.4967,0.0297])}),

                                new HAnimSite({
                                  name : new SFString("l_femoral_medial_epicondyle_pt"),
                                  DEF : new SFString("hanim_l_femoral_medial_epicondyle_pt"),
                                  translation : new SFVec3f([0.0398,0.4946,0.0303])})])}),

                            new HAnimJoint({
                              name : new SFString("l_knee"),
                              DEF : new SFString("hanim_l_knee"),
                              center : new SFVec3f([0.104,0.4867,0.0308]),
                              ulimit : new SFVec3f([0,0,0]),
                              llimit : new SFVec3f([0,0,0]),
                              stiffness : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_calf"),
                                  DEF : new SFString("hanim_l_calf")}),

                                new HAnimJoint({
                                  name : new SFString("l_talocrural"),
                                  DEF : new SFString("hanim_l_talocrural"),
                                  center : new SFVec3f([0.1101,0.0656,-0.0736]),
                                  ulimit : new SFVec3f([0,0,0]),
                                  llimit : new SFVec3f([0,0,0]),
                                  stiffness : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_talus"),
                                      DEF : new SFString("hanim_l_talus"),
                                      children : new MFNode([
                                        new HAnimSite({
                                          name : new SFString("l_lateral_malleolus_pt"),
                                          DEF : new SFString("hanim_l_lateral_malleolus_pt"),
                                          translation : new SFVec3f([0.1308,0.0597,-0.1032])}),

                                        new HAnimSite({
                                          name : new SFString("l_medial_malleolus_pt"),
                                          DEF : new SFString("hanim_l_medial_malleolus_pt"),
                                          translation : new SFVec3f([0.089,0.0716,-0.0881])}),

                                        new HAnimSite({
                                          name : new SFString("l_sphyrion_pt"),
                                          DEF : new SFString("hanim_l_sphyrion_pt"),
                                          translation : new SFVec3f([0.089,0.0575,-0.0943])}),

                                        new HAnimSite({
                                          name : new SFString("l_calcaneus_posterior_pt"),
                                          DEF : new SFString("hanim_l_calcaneus_posterior_pt"),
                                          translation : new SFVec3f([0.0974,0.0259,-0.1171])})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_tarsometatarsal_2"),
                                      DEF : new SFString("hanim_l_tarsometatarsal_2"),
                                      center : new SFVec3f([0.1086,0.0001,-0.0368]),
                                      ulimit : new SFVec3f([0,0,0]),
                                      llimit : new SFVec3f([0,0,0]),
                                      stiffness : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_metatarsal_2"),
                                          DEF : new SFString("hanim_l_metatarsal_2")}),

                                        new HAnimJoint({
                                          name : new SFString("l_metatarsophalangeal_2"),
                                          DEF : new SFString("hanim_l_metatarsophalangeal_2"),
                                          center : new SFVec3f([0.1086,0.0001,0.0368]),
                                          ulimit : new SFVec3f([0,0,0]),
                                          llimit : new SFVec3f([0,0,0]),
                                          stiffness : new SFVec3f([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_tarsal_proximal_phalanx_2"),
                                              DEF : new SFString("hanim_l_tarsal_proximal_phalanx_2"),
                                              children : new MFNode([
                                                new HAnimSite({
                                                  name : new SFString("l_metatarsal_phalanx_1_pt"),
                                                  DEF : new SFString("hanim_l_metatarsal_phalanx_1_pt"),
                                                  translation : new SFVec3f([0.0816,0.0232,0.0106])})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsal_distal_interphalangeal_2"),
                                              DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_2"),
                                              center : new SFVec3f([0.1086,0,0.0762]),
                                              ulimit : new SFVec3f([0,0,0]),
                                              llimit : new SFVec3f([0,0,0]),
                                              stiffness : new SFVec3f([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_tarsal_distal_phalanx_2"),
                                                  DEF : new SFString("hanim_l_tarsal_distal_phalanx_2"),
                                                  children : new MFNode([
                                                    new HAnimSite({
                                                      name : new SFString("l_forefoot_tip"),
                                                      DEF : new SFString("hanim_l_forefoot_tip"),
                                                      translation : new SFVec3f([0.1354,0.0016,0.1476])}),

                                                    new HAnimSite({
                                                      name : new SFString("l_metatarsal_phalanx_5_pt"),
                                                      DEF : new SFString("hanim_l_metatarsal_phalanx_5_pt"),
                                                      translation : new SFVec3f([0.1825,0.007,0.0928])}),

                                                    new HAnimSite({
                                                      name : new SFString("l_tarsal_distal_phalanx_2_pt"),
                                                      DEF : new SFString("hanim_l_tarsal_distal_phalanx_2_pt"),
                                                      translation : new SFVec3f([0.1195,0.0079,0.1433])})])})])})])})])})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("r_hip"),
                          DEF : new SFString("hanim_r_hip"),
                          center : new SFVec3f([-0.0961,0.9124,-0.0001]),
                          ulimit : new SFVec3f([0,0,0]),
                          llimit : new SFVec3f([0,0,0]),
                          stiffness : new SFVec3f([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("r_thigh"),
                              DEF : new SFString("hanim_r_thigh"),
                              children : new MFNode([
                                new HAnimSite({
                                  name : new SFString("r_knee_crease_pt"),
                                  DEF : new SFString("hanim_r_knee_crease_pt"),
                                  translation : new SFVec3f([-0.0825,0.4932,-0.0326])}),

                                new HAnimSite({
                                  name : new SFString("r_femoral_lateral_epicondyle_pt"),
                                  DEF : new SFString("hanim_r_femoral_lateral_epicondyle_pt"),
                                  translation : new SFVec3f([-0.1421,0.4992,0.031])}),

                                new HAnimSite({
                                  name : new SFString("r_femoral_medial_epicondyle_pt"),
                                  DEF : new SFString("hanim_r_femoral_medial_epicondyle_pt"),
                                  translation : new SFVec3f([-0.0221,0.5014,0.0289])})])}),

                            new HAnimJoint({
                              name : new SFString("r_knee"),
                              DEF : new SFString("hanim_r_knee"),
                              center : new SFVec3f([-0.104,0.4867,0.0308]),
                              ulimit : new SFVec3f([0,0,0]),
                              llimit : new SFVec3f([0,0,0]),
                              stiffness : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("r_calf"),
                                  DEF : new SFString("hanim_r_calf")}),

                                new HAnimJoint({
                                  name : new SFString("r_talocrural"),
                                  DEF : new SFString("hanim_r_talocrural"),
                                  center : new SFVec3f([-0.1101,0.0656,-0.0736]),
                                  ulimit : new SFVec3f([0,0,0]),
                                  llimit : new SFVec3f([0,0,0]),
                                  stiffness : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_talus"),
                                      DEF : new SFString("hanim_r_talus"),
                                      children : new MFNode([
                                        new HAnimSite({
                                          name : new SFString("r_lateral_malleolus_pt"),
                                          DEF : new SFString("hanim_r_lateral_malleolus_pt"),
                                          translation : new SFVec3f([-0.1006,0.0658,-0.1075])}),

                                        new HAnimSite({
                                          name : new SFString("r_medial_malleolus_pt"),
                                          DEF : new SFString("hanim_r_medial_malleolus_pt"),
                                          translation : new SFVec3f([-0.0591,0.076,-0.0928])}),

                                        new HAnimSite({
                                          name : new SFString("r_sphyrion_pt"),
                                          DEF : new SFString("hanim_r_sphyrion_pt"),
                                          translation : new SFVec3f([-0.0603,0.061,-0.1002])}),

                                        new HAnimSite({
                                          name : new SFString("r_calcaneus_posterior_pt"),
                                          DEF : new SFString("hanim_r_calcaneus_posterior_pt"),
                                          translation : new SFVec3f([-0.0692,0.0297,-0.1221])})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_tarsometatarsal_2"),
                                      DEF : new SFString("hanim_r_tarsometatarsal_2"),
                                      center : new SFVec3f([-0.1086,0.0001,-0.0368]),
                                      ulimit : new SFVec3f([0,0,0]),
                                      llimit : new SFVec3f([0,0,0]),
                                      stiffness : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("r_metatarsal_2"),
                                          DEF : new SFString("hanim_r_metatarsal_2")}),

                                        new HAnimJoint({
                                          name : new SFString("r_metatarsophalangeal_2"),
                                          DEF : new SFString("hanim_r_metatarsophalangeal_2"),
                                          center : new SFVec3f([-0.1086,0.0001,0.0368]),
                                          ulimit : new SFVec3f([0,0,0]),
                                          llimit : new SFVec3f([0,0,0]),
                                          stiffness : new SFVec3f([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_tarsal_proximal_phalanx_2"),
                                              DEF : new SFString("hanim_r_tarsal_proximal_phalanx_2"),
                                              children : new MFNode([
                                                new HAnimSite({
                                                  name : new SFString("r_metatarsal_phalanx_1_pt"),
                                                  DEF : new SFString("hanim_r_metatarsal_phalanx_1_pt"),
                                                  translation : new SFVec3f([-0.0521,0.026,0.0127])})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_tarsal_distal_interphalangeal_2"),
                                              DEF : new SFString("hanim_r_tarsal_distal_interphalangeal_2"),
                                              center : new SFVec3f([-0.1086,0,0.0762]),
                                              ulimit : new SFVec3f([0,0,0]),
                                              llimit : new SFVec3f([0,0,0]),
                                              stiffness : new SFVec3f([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("r_tarsal_distal_phalanx_2"),
                                                  DEF : new SFString("hanim_r_tarsal_distal_phalanx_2"),
                                                  children : new MFNode([
                                                    new HAnimSite({
                                                      name : new SFString("r_forefoot_tip"),
                                                      DEF : new SFString("hanim_r_forefoot_tip"),
                                                      translation : new SFVec3f([-0.1043,0.0227,0.145])}),

                                                    new HAnimSite({
                                                      name : new SFString("r_metatarsal_phalanx_5_pt"),
                                                      DEF : new SFString("hanim_r_metatarsal_phalanx_5_pt"),
                                                      translation : new SFVec3f([-0.1523,0.0166,0.0895])}),

                                                    new HAnimSite({
                                                      name : new SFString("r_tarsal_distal_phalanx_2_pt"),
                                                      DEF : new SFString("hanim_r_tarsal_distal_phalanx_2_pt"),
                                                      translation : new SFVec3f([-0.0883,0.0134,0.1383])})])})])})])})])})])})])})])})])}),

                    new HAnimJoint({
                      name : new SFString("vl5"),
                      DEF : new SFString("hanim_vl5"),
                      center : new SFVec3f([0.0028,1.0568,-0.0776]),
                      ulimit : new SFVec3f([0,0,0]),
                      llimit : new SFVec3f([0,0,0]),
                      stiffness : new SFVec3f([0,0,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("l5"),
                          DEF : new SFString("hanim_l5"),
                          children : new MFNode([
                            new HAnimSite({
                              name : new SFString("waist_preferred_posterior_pt"),
                              DEF : new SFString("hanim_waist_preferred_posterior_pt"),
                              translation : new SFVec3f([0,1.0915,-0.1091])}),

                            new HAnimSite({
                              name : new SFString("navel_pt"),
                              DEF : new SFString("hanim_navel_pt"),
                              translation : new SFVec3f([0.0069,1.0966,0.1017])})])}),

                        new HAnimJoint({
                          name : new SFString("vl4"),
                          DEF : new SFString("hanim_vl4"),
                          center : new SFVec3f([0.0035,1.0925,-0.0787]),
                          ulimit : new SFVec3f([0,0,0]),
                          llimit : new SFVec3f([0,0,0]),
                          stiffness : new SFVec3f([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l4"),
                              DEF : new SFString("hanim_l4")}),

                            new HAnimJoint({
                              name : new SFString("vl3"),
                              DEF : new SFString("hanim_vl3"),
                              center : new SFVec3f([0.0041,1.1276,-0.0796]),
                              ulimit : new SFVec3f([0,0,0]),
                              llimit : new SFVec3f([0,0,0]),
                              stiffness : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l3"),
                                  DEF : new SFString("hanim_l3")}),

                                new HAnimJoint({
                                  name : new SFString("vl2"),
                                  DEF : new SFString("hanim_vl2"),
                                  center : new SFVec3f([0.0045,1.1546,-0.08]),
                                  ulimit : new SFVec3f([0,0,0]),
                                  llimit : new SFVec3f([0,0,0]),
                                  stiffness : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l2"),
                                      DEF : new SFString("hanim_l2"),
                                      children : new MFNode([
                                        new HAnimSite({
                                          name : new SFString("r_rib10_pt"),
                                          DEF : new SFString("hanim_r_rib10_pt"),
                                          translation : new SFVec3f([-0.0711,1.1941,0.1016])}),

                                        new HAnimSite({
                                          name : new SFString("l_rib10_pt"),
                                          DEF : new SFString("hanim_l_rib10_pt"),
                                          translation : new SFVec3f([0.0871,1.1925,0.0992])}),

                                        new HAnimSite({
                                          name : new SFString("rib10_midspine_pt"),
                                          DEF : new SFString("hanim_rib10_midspine_pt"),
                                          translation : new SFVec3f([0.0049,1.1908,-0.1113])})])}),

                                    new HAnimJoint({
                                      name : new SFString("vl1"),
                                      DEF : new SFString("hanim_vl1"),
                                      center : new SFVec3f([0.0048,1.1912,-0.0805]),
                                      ulimit : new SFVec3f([0,0,0]),
                                      llimit : new SFVec3f([0,0,0]),
                                      stiffness : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l1"),
                                          DEF : new SFString("hanim_l1")}),

                                        new HAnimJoint({
                                          name : new SFString("vt12"),
                                          DEF : new SFString("hanim_vt12"),
                                          center : new SFVec3f([0.0051,1.2278,-0.0808]),
                                          ulimit : new SFVec3f([0,0,0]),
                                          llimit : new SFVec3f([0,0,0]),
                                          stiffness : new SFVec3f([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("t12"),
                                              DEF : new SFString("hanim_t12")}),

                                            new HAnimJoint({
                                              name : new SFString("vt11"),
                                              DEF : new SFString("hanim_vt11"),
                                              center : new SFVec3f([0.0053,1.2679,-0.081]),
                                              ulimit : new SFVec3f([0,0,0]),
                                              llimit : new SFVec3f([0,0,0]),
                                              stiffness : new SFVec3f([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("t11"),
                                                  DEF : new SFString("hanim_t11")}),

                                                new HAnimJoint({
                                                  name : new SFString("vt10"),
                                                  DEF : new SFString("hanim_vt10"),
                                                  center : new SFVec3f([0.0056,1.2848,-0.0822]),
                                                  ulimit : new SFVec3f([0,0,0]),
                                                  llimit : new SFVec3f([0,0,0]),
                                                  stiffness : new SFVec3f([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("t10"),
                                                      DEF : new SFString("hanim_t10"),
                                                      children : new MFNode([
                                                        new HAnimSite({
                                                          name : new SFString("substernale_pt"),
                                                          DEF : new SFString("hanim_substernale_pt"),
                                                          translation : new SFVec3f([0.0085,1.2995,0.1147])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("vt9"),
                                                      DEF : new SFString("hanim_vt9"),
                                                      center : new SFVec3f([0.0057,1.3126,-0.0838]),
                                                      ulimit : new SFVec3f([0,0,0]),
                                                      llimit : new SFVec3f([0,0,0]),
                                                      stiffness : new SFVec3f([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("t9"),
                                                          DEF : new SFString("hanim_t9"),
                                                          children : new MFNode([
                                                            new HAnimSite({
                                                              name : new SFString("r_thelion_pt"),
                                                              DEF : new SFString("hanim_r_thelion_pt"),
                                                              translation : new SFVec3f([-0.0736,1.3385,0.1217])}),

                                                            new HAnimSite({
                                                              name : new SFString("l_thelion_pt"),
                                                              DEF : new SFString("hanim_l_thelion_pt"),
                                                              translation : new SFVec3f([0.0918,1.3382,0.1192])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("vt8"),
                                                          DEF : new SFString("hanim_vt8"),
                                                          center : new SFVec3f([0.0057,1.3382,-0.0845]),
                                                          ulimit : new SFVec3f([0,0,0]),
                                                          llimit : new SFVec3f([0,0,0]),
                                                          stiffness : new SFVec3f([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("t8"),
                                                              DEF : new SFString("hanim_t8")}),

                                                            new HAnimJoint({
                                                              name : new SFString("vt7"),
                                                              DEF : new SFString("hanim_vt7"),
                                                              center : new SFVec3f([0.0058,1.3625,-0.0833]),
                                                              ulimit : new SFVec3f([0,0,0]),
                                                              llimit : new SFVec3f([0,0,0]),
                                                              stiffness : new SFVec3f([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("t7"),
                                                                  DEF : new SFString("hanim_t7")}),

                                                                new HAnimJoint({
                                                                  name : new SFString("vt6"),
                                                                  DEF : new SFString("hanim_vt6"),
                                                                  center : new SFVec3f([0.0059,1.3866,-0.08]),
                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                  llimit : new SFVec3f([0,0,0]),
                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      name : new SFString("t6"),
                                                                      DEF : new SFString("hanim_t6")}),

                                                                    new HAnimJoint({
                                                                      name : new SFString("vt5"),
                                                                      DEF : new SFString("hanim_vt5"),
                                                                      center : new SFVec3f([0.006,1.4102,-0.0745]),
                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                      llimit : new SFVec3f([0,0,0]),
                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                      children : new MFNode([
                                                                        new HAnimSegment({
                                                                          name : new SFString("t5"),
                                                                          DEF : new SFString("hanim_t5")}),

                                                                        new HAnimJoint({
                                                                          name : new SFString("vt4"),
                                                                          DEF : new SFString("hanim_vt4"),
                                                                          center : new SFVec3f([0.0061,1.432,-0.0675]),
                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                          llimit : new SFVec3f([0,0,0]),
                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                          children : new MFNode([
                                                                            new HAnimSegment({
                                                                              name : new SFString("t4"),
                                                                              DEF : new SFString("hanim_t4")}),

                                                                            new HAnimJoint({
                                                                              name : new SFString("vt3"),
                                                                              DEF : new SFString("hanim_vt3"),
                                                                              center : new SFVec3f([0.0062,1.4583,-0.057]),
                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                              llimit : new SFVec3f([0,0,0]),
                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                              children : new MFNode([
                                                                                new HAnimSegment({
                                                                                  name : new SFString("t3"),
                                                                                  DEF : new SFString("hanim_t3")}),

                                                                                new HAnimJoint({
                                                                                  name : new SFString("vt2"),
                                                                                  DEF : new SFString("hanim_vt2"),
                                                                                  center : new SFVec3f([0.0063,1.4761,-0.0484]),
                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                  children : new MFNode([
                                                                                    new HAnimSegment({
                                                                                      name : new SFString("t2"),
                                                                                      DEF : new SFString("hanim_t2")}),

                                                                                    new HAnimJoint({
                                                                                      name : new SFString("vt1"),
                                                                                      DEF : new SFString("hanim_vt1"),
                                                                                      center : new SFVec3f([0.0065,1.4951,-0.0387]),
                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                      children : new MFNode([
                                                                                        new HAnimSegment({
                                                                                          name : new SFString("t1"),
                                                                                          DEF : new SFString("hanim_t1"),
                                                                                          children : new MFNode([
                                                                                            new HAnimSite({
                                                                                              name : new SFString("suprasternale_pt"),
                                                                                              DEF : new SFString("hanim_suprasternale_pt"),
                                                                                              translation : new SFVec3f([0.0084,1.4714,0.0551])}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("cervicale_pt"),
                                                                                              DEF : new SFString("hanim_cervicale_pt"),
                                                                                              translation : new SFVec3f([0.0064,1.52,-0.0815])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("vc7"),
                                                                                          DEF : new SFString("hanim_vc7"),
                                                                                          center : new SFVec3f([0.0066,1.5132,-0.0301]),
                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("c7"),
                                                                                              DEF : new SFString("hanim_c7"),
                                                                                              children : new MFNode([
                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_neck_base_pt"),
                                                                                                  DEF : new SFString("hanim_r_neck_base_pt"),
                                                                                                  translation : new SFVec3f([-0.0419,1.5149,-0.022])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_neck_base_pt"),
                                                                                                  DEF : new SFString("hanim_l_neck_base_pt"),
                                                                                                  translation : new SFVec3f([0.0646,1.5141,-0.038])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("vc6"),
                                                                                              DEF : new SFString("hanim_vc6"),
                                                                                              center : new SFVec3f([0.0066,1.5357,-0.0143]),
                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("c6"),
                                                                                                  DEF : new SFString("hanim_c6")}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("vc5"),
                                                                                                  DEF : new SFString("hanim_vc5"),
                                                                                                  center : new SFVec3f([0.0066,1.552,-0.0082]),
                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("c5"),
                                                                                                      DEF : new SFString("hanim_c5")}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("vc4"),
                                                                                                      DEF : new SFString("hanim_vc4"),
                                                                                                      center : new SFVec3f([0.0066,1.5662,-0.0084]),
                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("c4"),
                                                                                                          DEF : new SFString("hanim_c4")}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("vc3"),
                                                                                                          DEF : new SFString("hanim_vc3"),
                                                                                                          center : new SFVec3f([0.0066,1.58,-0.0103]),
                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("c3"),
                                                                                                              DEF : new SFString("hanim_c3")}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("vc2"),
                                                                                                              DEF : new SFString("hanim_vc2"),
                                                                                                              center : new SFVec3f([0.0066,1.5928,-0.0103]),
                                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("c2"),
                                                                                                                  DEF : new SFString("hanim_c2")}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("vc1"),
                                                                                                                  DEF : new SFString("hanim_vc1"),
                                                                                                                  center : new SFVec3f([0.0066,1.6144,-0.0034]),
                                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("c1"),
                                                                                                                      DEF : new SFString("hanim_c1")}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("skullbase"),
                                                                                                                      DEF : new SFString("hanim_skullbase"),
                                                                                                                      center : new SFVec3f([0.0044,1.6209,0.0236]),
                                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("skull"),
                                                                                                                          DEF : new SFString("hanim_skull"),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("skull_vertex_tip"),
                                                                                                                              DEF : new SFString("hanim_skull_vertex_tip"),
                                                                                                                              translation : new SFVec3f([0.005,1.7504,0.0055]),
                                                                                                                              /*TODO move skull_tip x to zero, check others for symmetry*/}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("sellion_pt"),
                                                                                                                              DEF : new SFString("hanim_sellion_pt"),
                                                                                                                              translation : new SFVec3f([0.0058,1.6316,0.0852])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_infraorbitale_pt"),
                                                                                                                              DEF : new SFString("hanim_r_infraorbitale_pt"),
                                                                                                                              translation : new SFVec3f([-0.0237,1.6171,0.0752])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_infraorbitale_pt"),
                                                                                                                              DEF : new SFString("hanim_l_infraorbitale_pt"),
                                                                                                                              translation : new SFVec3f([0.0341,1.6171,0.0752])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("supramenton_pt"),
                                                                                                                              DEF : new SFString("hanim_supramenton_pt"),
                                                                                                                              translation : new SFVec3f([0.0061,1.541,0.0805])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_tragion_pt"),
                                                                                                                              DEF : new SFString("hanim_r_tragion_pt"),
                                                                                                                              translation : new SFVec3f([-0.0646,1.6347,0.0302])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_gonion_pt"),
                                                                                                                              DEF : new SFString("hanim_r_gonion_pt"),
                                                                                                                              translation : new SFVec3f([-0.052,1.5529,0.0347])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_tragion_pt"),
                                                                                                                              DEF : new SFString("hanim_l_tragion_pt"),
                                                                                                                              translation : new SFVec3f([0.0739,1.6348,0.0282])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_gonion_pt"),
                                                                                                                              DEF : new SFString("hanim_l_gonion_pt"),
                                                                                                                              translation : new SFVec3f([0.0631,1.553,0.033])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("nuchale_pt"),
                                                                                                                              DEF : new SFString("hanim_nuchale_pt"),
                                                                                                                              translation : new SFVec3f([0.0039,1.5972,-0.0796])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyeball_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyeball_joint"),
                                                                                                                          center : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_eyeball"),
                                                                                                                              DEF : new SFString("hanim_l_eyeball"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_eyeball_site_view"),
                                                                                                                                  DEF : new SFString("hanim_l_eyeball_site_view"),
                                                                                                                                  translation : new SFVec3f([0.034,1.64,0.05]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Viewpoint({
                                                                                                                                      DEF : new SFString("hanim_l_eyeball_site_viewpoint"),
                                                                                                                                      description : new SFString("l_eyeball_site_viewpoint looking forward"),
                                                                                                                                      orientation : new SFRotation([0,1,0,3.141593]),
                                                                                                                                      position : new SFVec3f([0,0,0])})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyelid_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyelid_joint"),
                                                                                                                          center : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_eyelid"),
                                                                                                                              DEF : new SFString("hanim_l_eyelid")})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyebrow_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyebrow_joint"),
                                                                                                                          center : new SFVec3f([0.0336,1.635,0.0506]),
                                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_eyebrow"),
                                                                                                                              DEF : new SFString("hanim_l_eyebrow")})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyeball_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyeball_joint"),
                                                                                                                          center : new SFVec3f([-0.0336,1.6332,0.0502]),
                                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_eyeball"),
                                                                                                                              DEF : new SFString("hanim_r_eyeball"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_eyeball_site_view"),
                                                                                                                                  DEF : new SFString("hanim_r_eyeball_site_view"),
                                                                                                                                  translation : new SFVec3f([-0.034,1.64,0.05]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Viewpoint({
                                                                                                                                      DEF : new SFString("hanim_r_eyeball_site_viewpoint"),
                                                                                                                                      description : new SFString("r_eyeball_site_viewpoint looking forward"),
                                                                                                                                      orientation : new SFRotation([0,1,0,3.141593]),
                                                                                                                                      position : new SFVec3f([0,0,0])})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyelid_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyelid_joint"),
                                                                                                                          center : new SFVec3f([-0.0336,1.6332,0.0502]),
                                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_eyelid"),
                                                                                                                              DEF : new SFString("hanim_r_eyelid")})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyebrow_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyebrow_joint"),
                                                                                                                          center : new SFVec3f([-0.0336,1.635,0.0506]),
                                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_eyebrow"),
                                                                                                                              DEF : new SFString("hanim_r_eyebrow")})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("temporomandibular"),
                                                                                                                          DEF : new SFString("hanim_temporomandibular"),
                                                                                                                          center : new SFVec3f([0,1.63,0.015]),
                                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                                          /*Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint*/
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("jaw"),
                                                                                                                              DEF : new SFString("hanim_jaw"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("temporomandibular_l_site_pt"),
                                                                                                                                  DEF : new SFString("hanim_temporomandibular_l_site_pt"),
                                                                                                                                  translation : new SFVec3f([0.045,1.63,0])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("temporomandibular_r_site_pt"),
                                                                                                                                  DEF : new SFString("hanim_temporomandibular_r_site_pt"),
                                                                                                                                  translation : new SFVec3f([-0.045,1.63,0])})])})])})])})])})])})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("l_sternoclavicular"),
                                                                                          DEF : new SFString("hanim_l_sternoclavicular"),
                                                                                          center : new SFVec3f([0.082,1.4488,-0.0353]),
                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("l_clavicle"),
                                                                                              DEF : new SFString("hanim_l_clavicle"),
                                                                                              children : new MFNode([
                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_clavicle_pt"),
                                                                                                  DEF : new SFString("hanim_l_clavicle_pt"),
                                                                                                  translation : new SFVec3f([0.0271,1.4943,0.0394])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_acromion_pt"),
                                                                                                  DEF : new SFString("hanim_l_acromion_pt"),
                                                                                                  translation : new SFVec3f([0.2032,1.476,-0.049])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_axilla_proximal_pt"),
                                                                                                  DEF : new SFString("hanim_l_axilla_proximal_pt"),
                                                                                                  translation : new SFVec3f([0.1777,1.4065,-0.0075])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_axilla_distal_pt"),
                                                                                                  DEF : new SFString("hanim_l_axilla_distal_pt"),
                                                                                                  translation : new SFVec3f([0.1706,1.4072,-0.0875])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("l_acromioclavicular"),
                                                                                              DEF : new SFString("hanim_l_acromioclavicular"),
                                                                                              center : new SFVec3f([0.0962,1.4269,-0.0424]),
                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("l_scapula"),
                                                                                                  DEF : new SFString("hanim_l_scapula")}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("l_shoulder"),
                                                                                                  DEF : new SFString("hanim_l_shoulder"),
                                                                                                  center : new SFVec3f([0.2029,1.4376,-0.0387]),
                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("l_upperarm"),
                                                                                                      DEF : new SFString("hanim_l_upperarm"),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_humeral_lateral_epicondyle_pt"),
                                                                                                          DEF : new SFString("hanim_l_humeral_lateral_epicondyle_pt"),
                                                                                                          translation : new SFVec3f([0.228,1.1482,-0.11])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("l_elbow"),
                                                                                                      DEF : new SFString("hanim_l_elbow"),
                                                                                                      center : new SFVec3f([0.2014,1.1357,-0.0682]),
                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("l_forearm"),
                                                                                                          DEF : new SFString("hanim_l_forearm"),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_radial_styloid_pt"),
                                                                                                              DEF : new SFString("hanim_l_radial_styloid_pt"),
                                                                                                              translation : new SFVec3f([0.1901,0.8645,-0.0415])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_olecranon_pt"),
                                                                                                              DEF : new SFString("hanim_l_olecranon_pt"),
                                                                                                              translation : new SFVec3f([0.1962,1.1375,-0.1123])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_humeral_medial_epicondyle_pt"),
                                                                                                              DEF : new SFString("hanim_l_humeral_medial_epicondyle_pt"),
                                                                                                              translation : new SFVec3f([0.1735,1.1272,-0.1113])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_radiale_pt"),
                                                                                                              DEF : new SFString("hanim_l_radiale_pt"),
                                                                                                              translation : new SFVec3f([0.2182,1.1212,-0.1167])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("l_radiocarpal"),
                                                                                                          DEF : new SFString("hanim_l_radiocarpal"),
                                                                                                          center : new SFVec3f([0.1984,0.8663,-0.0583]),
                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("l_carpal"),
                                                                                                              DEF : new SFString("hanim_l_carpal"),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_metacarpal_phalanx_2_pt"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_phalanx_2_pt"),
                                                                                                                  translation : new SFVec3f([0.2009,0.8139,-0.0237])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_ulnar_styloid_pt"),
                                                                                                                  DEF : new SFString("hanim_l_ulnar_styloid_pt"),
                                                                                                                  translation : new SFVec3f([0.2142,0.8529,-0.0648])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_metacarpal_phalanx_5_pt"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_phalanx_5_pt"),
                                                                                                                  translation : new SFVec3f([0.1929,0.786,-0.1122])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_hand_front_view"),
                                                                                                                  DEF : new SFString("hanim_l_hand_front_view"),
                                                                                                                  translation : new SFVec3f([0.3,0.75,0.45]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Viewpoint({
                                                                                                                      DEF : new SFString("hanim_l_hand_front_viewpoint"),
                                                                                                                      centerOfRotation : new SFVec3f([0,0.7,0]),
                                                                                                                      description : new SFString("left hand front"),
                                                                                                                      position : new SFVec3f([0,0,0])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_carpometacarpal_1"),
                                                                                                              DEF : new SFString("hanim_l_carpometacarpal_1"),
                                                                                                              center : new SFVec3f([0.1924,0.8472,-0.0534]),
                                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_metacarpal_1"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_1")}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_metacarpophalangeal_1"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpophalangeal_1"),
                                                                                                                  center : new SFVec3f([0.1951,0.8226,0.0246]),
                                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_carpal_proximal_phalanx_1"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_1")}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_carpal_interphalangeal_1"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_interphalangeal_1"),
                                                                                                                      center : new SFVec3f([0.1955,0.8159,0.0464]),
                                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_distal_phalanx_1"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_distal_phalanx_1"),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_carpal_distal_phalanx_1_tip"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_1_tip"),
                                                                                                                              translation : new SFVec3f([0.1982,0.8061,0.0759])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_carpometacarpal_2"),
                                                                                                              DEF : new SFString("hanim_l_carpometacarpal_2"),
                                                                                                              center : new SFVec3f([0.1983,0.8024,-0.028]),
                                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_metacarpal_2"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_2")}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_metacarpophalangeal_2"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpophalangeal_2"),
                                                                                                                  center : new SFVec3f([0.1983,0.7815,-0.028]),
                                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_carpal_proximal_phalanx_2"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_2")}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_carpal_proximal_interphalangeal_2"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_2"),
                                                                                                                      center : new SFVec3f([0.2017,0.7363,-0.0248]),
                                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_middle_phalanx_2"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_middle_phalanx_2")}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_distal_interphalangeal_2"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_distal_interphalangeal_2"),
                                                                                                                          center : new SFVec3f([0.2028,0.7139,-0.0236]),
                                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_distal_phalanx_2"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_2"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_carpal_distal_phalanx_2_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_distal_phalanx_2_tip"),
                                                                                                                                  translation : new SFVec3f([0.2089,0.6858,-0.0245])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_dactylion_pt"),
                                                                                                                                  DEF : new SFString("hanim_l_dactylion_pt"),
                                                                                                                                  translation : new SFVec3f([0.2056,0.6743,-0.0482])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_carpometacarpal_3"),
                                                                                                              DEF : new SFString("hanim_l_carpometacarpal_3"),
                                                                                                              center : new SFVec3f([0.1987,0.8029,-0.053]),
                                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_metacarpal_3"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_3")}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_metacarpophalangeal_3"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpophalangeal_3"),
                                                                                                                  center : new SFVec3f([0.1987,0.7818,-0.053]),
                                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_carpal_proximal_phalanx_3"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_3")}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_carpal_proximal_interphalangeal_3"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_3"),
                                                                                                                      center : new SFVec3f([0.2013,0.7273,-0.0503]),
                                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_middle_phalanx_3"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_middle_phalanx_3")}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_distal_interphalangeal_3"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_distal_interphalangeal_3"),
                                                                                                                          center : new SFVec3f([0.2026,0.7011,-0.0494]),
                                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_distal_phalanx_3"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_3"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_carpal_distal_phalanx_3_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_distal_phalanx_3_tip"),
                                                                                                                                  translation : new SFVec3f([0.208,0.6731,-0.0491])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_carpometacarpal_4"),
                                                                                                              DEF : new SFString("hanim_l_carpometacarpal_4"),
                                                                                                              center : new SFVec3f([0.1956,0.8019,-0.0794]),
                                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_metacarpal_4"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_4")}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_metacarpophalangeal_4"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpophalangeal_4"),
                                                                                                                  center : new SFVec3f([0.1956,0.7815,-0.0794]),
                                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_carpal_proximal_phalanx_4"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_4")}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_carpal_proximal_interphalangeal_4"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_4"),
                                                                                                                      center : new SFVec3f([0.1973,0.7287,-0.0777]),
                                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_middle_phalanx_4"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_middle_phalanx_4")}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_distal_interphalangeal_4"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_distal_interphalangeal_4"),
                                                                                                                          center : new SFVec3f([0.1983,0.7045,-0.0767]),
                                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_distal_phalanx_4"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_4"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_carpal_distal_phalanx_4_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_distal_phalanx_4_tip"),
                                                                                                                                  translation : new SFVec3f([0.2035,0.675,-0.0756])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_carpometacarpal_5"),
                                                                                                              DEF : new SFString("hanim_l_carpometacarpal_5"),
                                                                                                              center : new SFVec3f([0.1925,0.8066,-0.1036]),
                                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_metacarpal_5"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_5")}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_metacarpophalangeal_5"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpophalangeal_5"),
                                                                                                                  center : new SFVec3f([0.1925,0.7866,-0.1036]),
                                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_carpal_proximal_phalanx_5"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_phalanx_5")}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_carpal_proximal_interphalangeal_5"),
                                                                                                                      DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_5"),
                                                                                                                      center : new SFVec3f([0.1938,0.7452,-0.1024]),
                                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_middle_phalanx_5"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_middle_phalanx_5")}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_distal_interphalangeal_5"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_distal_interphalangeal_5"),
                                                                                                                          center : new SFVec3f([0.1948,0.7277,-0.1017]),
                                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_distal_phalanx_5"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_5"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_carpal_distal_phalanx_5_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_distal_phalanx_5_tip"),
                                                                                                                                  translation : new SFVec3f([0.2014,0.7009,-0.1012])})])})])})])})])})])})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("r_sternoclavicular"),
                                                                                          DEF : new SFString("hanim_r_sternoclavicular"),
                                                                                          center : new SFVec3f([-0.082,1.4488,-0.0353]),
                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("r_clavicle"),
                                                                                              DEF : new SFString("hanim_r_clavicle"),
                                                                                              children : new MFNode([
                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_clavicle_pt"),
                                                                                                  DEF : new SFString("hanim_r_clavicle_pt"),
                                                                                                  translation : new SFVec3f([-0.0115,1.4943,0.04])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_acromion_pt"),
                                                                                                  DEF : new SFString("hanim_r_acromion_pt"),
                                                                                                  translation : new SFVec3f([-0.1905,1.4791,-0.0431])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_axilla_proximal_pt"),
                                                                                                  DEF : new SFString("hanim_r_axilla_proximal_pt"),
                                                                                                  translation : new SFVec3f([-0.1626,1.4072,-0.0031])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_axilla_distal_pt"),
                                                                                                  DEF : new SFString("hanim_r_axilla_distal_pt"),
                                                                                                  translation : new SFVec3f([-0.1603,1.4098,-0.0826])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("r_acromioclavicular"),
                                                                                              DEF : new SFString("hanim_r_acromioclavicular"),
                                                                                              center : new SFVec3f([-0.0962,1.4269,-0.0424]),
                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("r_scapula"),
                                                                                                  DEF : new SFString("hanim_r_scapula")}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("r_shoulder"),
                                                                                                  DEF : new SFString("hanim_r_shoulder"),
                                                                                                  center : new SFVec3f([-0.2029,1.4376,-0.0387]),
                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("r_upperarm"),
                                                                                                      DEF : new SFString("hanim_r_upperarm"),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_humeral_lateral_epicondyle_pt"),
                                                                                                          DEF : new SFString("hanim_r_humeral_lateral_epicondyle_pt"),
                                                                                                          translation : new SFVec3f([-0.2224,1.1517,-0.1033])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("r_elbow"),
                                                                                                      DEF : new SFString("hanim_r_elbow"),
                                                                                                      center : new SFVec3f([-0.2014,1.1357,-0.0682]),
                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("r_forearm"),
                                                                                                          DEF : new SFString("hanim_r_forearm"),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_radial_styloid_pt"),
                                                                                                              DEF : new SFString("hanim_r_radial_styloid_pt"),
                                                                                                              translation : new SFVec3f([-0.1884,0.8676,-0.036])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_olecranon_pt"),
                                                                                                              DEF : new SFString("hanim_r_olecranon_pt"),
                                                                                                              translation : new SFVec3f([-0.1907,1.1405,-0.1065])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_humeral_medial_epicondyle_pt"),
                                                                                                              DEF : new SFString("hanim_r_humeral_medial_epicondyle_pt"),
                                                                                                              translation : new SFVec3f([-0.168,1.1298,-0.1062])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_radiale_pt"),
                                                                                                              DEF : new SFString("hanim_r_radiale_pt"),
                                                                                                              translation : new SFVec3f([-0.213,1.1305,-0.1091])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("r_radiocarpal"),
                                                                                                          DEF : new SFString("hanim_r_radiocarpal"),
                                                                                                          center : new SFVec3f([-0.1984,0.8663,-0.0583]),
                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("r_carpal"),
                                                                                                              DEF : new SFString("hanim_r_carpal"),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_metacarpal_phalanx_2_pt"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_phalanx_2_pt"),
                                                                                                                  translation : new SFVec3f([-0.1977,0.8169,-0.0177])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_ulnar_styloid_pt"),
                                                                                                                  DEF : new SFString("hanim_r_ulnar_styloid_pt"),
                                                                                                                  translation : new SFVec3f([-0.2117,0.8562,-0.0584])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_metacarpal_phalanx_5_pt"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_phalanx_5_pt"),
                                                                                                                  translation : new SFVec3f([-0.1929,0.789,-0.1064])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_hand_front_view"),
                                                                                                                  DEF : new SFString("hanim_r_hand_front_view"),
                                                                                                                  translation : new SFVec3f([-0.3,0.75,0.45]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Viewpoint({
                                                                                                                      DEF : new SFString("hanim_r_hand_front_viewpoint"),
                                                                                                                      centerOfRotation : new SFVec3f([0,0.7,0]),
                                                                                                                      description : new SFString("right hand front"),
                                                                                                                      position : new SFVec3f([0,0,0])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_carpometacarpal_1"),
                                                                                                              DEF : new SFString("hanim_r_carpometacarpal_1"),
                                                                                                              center : new SFVec3f([-0.1924,0.8472,-0.0534]),
                                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_metacarpal_1"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_1")}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_metacarpophalangeal_1"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpophalangeal_1"),
                                                                                                                  center : new SFVec3f([-0.1951,0.8226,0.0246]),
                                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_carpal_proximal_phalanx_1"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_phalanx_1")}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_carpal_interphalangeal_1"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_interphalangeal_1"),
                                                                                                                      center : new SFVec3f([-0.1955,0.8159,0.0464]),
                                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_distal_phalanx_1"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_distal_phalanx_1"),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_carpal_distal_phalanx_1_tip"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx_1_tip"),
                                                                                                                              translation : new SFVec3f([-0.1869,0.809,0.082])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_carpometacarpal_2"),
                                                                                                              DEF : new SFString("hanim_r_carpometacarpal_2"),
                                                                                                              center : new SFVec3f([-0.1983,0.8024,-0.028]),
                                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_metacarpal_2"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_2")}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_metacarpophalangeal_2"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpophalangeal_2"),
                                                                                                                  center : new SFVec3f([-0.1983,0.7815,-0.028]),
                                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_carpal_proximal_phalanx_2"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_phalanx_2")}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_carpal_proximal_interphalangeal_2"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_2"),
                                                                                                                      center : new SFVec3f([-0.2017,0.7363,-0.0248]),
                                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_middle_phalanx_2"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_middle_phalanx_2")}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_distal_interphalangeal_2"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_distal_interphalangeal_2"),
                                                                                                                          center : new SFVec3f([-0.2028,0.7139,-0.0236]),
                                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_distal_phalanx_2"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx_2"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_carpal_distal_phalanx_2_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_distal_phalanx_2_tip"),
                                                                                                                                  translation : new SFVec3f([-0.198,0.6883,-0.018])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_dactylion_pt"),
                                                                                                                                  DEF : new SFString("hanim_r_dactylion_pt"),
                                                                                                                                  translation : new SFVec3f([-0.1941,0.6772,-0.0423])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_carpometacarpal_3"),
                                                                                                              DEF : new SFString("hanim_r_carpometacarpal_3"),
                                                                                                              center : new SFVec3f([-0.1987,0.8029,-0.053]),
                                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_metacarpal_3"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_3")}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_metacarpophalangeal_3"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpophalangeal_3"),
                                                                                                                  center : new SFVec3f([-0.1987,0.7818,-0.053]),
                                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_carpal_proximal_phalanx_3"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_phalanx_3")}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_carpal_proximal_interphalangeal_3"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_3"),
                                                                                                                      center : new SFVec3f([-0.2013,0.7273,-0.0503]),
                                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_middle_phalanx_3"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_middle_phalanx_3")}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_distal_interphalangeal_3"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_distal_interphalangeal_3"),
                                                                                                                          center : new SFVec3f([-0.2026,0.7011,-0.0494]),
                                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_distal_phalanx_3"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx_3"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_carpal_distal_phalanx_3_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_distal_phalanx_3_tip"),
                                                                                                                                  translation : new SFVec3f([-0.1969,0.6758,-0.0427])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_carpometacarpal_4"),
                                                                                                              DEF : new SFString("hanim_r_carpometacarpal_4"),
                                                                                                              center : new SFVec3f([-0.1956,0.8019,-0.0794]),
                                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_metacarpal_4"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_4")}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_metacarpophalangeal_4"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpophalangeal_4"),
                                                                                                                  center : new SFVec3f([-0.1956,0.7815,-0.0794]),
                                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_carpal_proximal_phalanx_4"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_phalanx_4")}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_carpal_proximal_interphalangeal_4"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_4"),
                                                                                                                      center : new SFVec3f([-0.1973,0.7287,-0.0777]),
                                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_middle_phalanx_4"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_middle_phalanx_4")}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_distal_interphalangeal_4"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_distal_interphalangeal_4"),
                                                                                                                          center : new SFVec3f([-0.1983,0.7045,-0.0767]),
                                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_distal_phalanx_4"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx_4"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_carpal_distal_phalanx_4_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_distal_phalanx_4_tip"),
                                                                                                                                  translation : new SFVec3f([-0.1934,0.6778,-0.0693])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_carpometacarpal_5"),
                                                                                                              DEF : new SFString("hanim_r_carpometacarpal_5"),
                                                                                                              center : new SFVec3f([-0.1925,0.8066,-0.1036]),
                                                                                                              ulimit : new SFVec3f([0,0,0]),
                                                                                                              llimit : new SFVec3f([0,0,0]),
                                                                                                              stiffness : new SFVec3f([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_metacarpal_5"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_5")}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_metacarpophalangeal_5"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpophalangeal_5"),
                                                                                                                  center : new SFVec3f([-0.1925,0.7866,-0.1036]),
                                                                                                                  ulimit : new SFVec3f([0,0,0]),
                                                                                                                  llimit : new SFVec3f([0,0,0]),
                                                                                                                  stiffness : new SFVec3f([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_carpal_proximal_phalanx_5"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_phalanx_5")}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_carpal_proximal_interphalangeal_5"),
                                                                                                                      DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_5"),
                                                                                                                      center : new SFVec3f([-0.1938,0.7452,-0.1024]),
                                                                                                                      ulimit : new SFVec3f([0,0,0]),
                                                                                                                      llimit : new SFVec3f([0,0,0]),
                                                                                                                      stiffness : new SFVec3f([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_middle_phalanx_5"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_middle_phalanx_5")}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_distal_interphalangeal_5"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_distal_interphalangeal_5"),
                                                                                                                          center : new SFVec3f([-0.1948,0.7277,-0.1017]),
                                                                                                                          ulimit : new SFVec3f([0,0,0]),
                                                                                                                          llimit : new SFVec3f([0,0,0]),
                                                                                                                          stiffness : new SFVec3f([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_distal_phalanx_5"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx_5"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_carpal_distal_phalanx_5_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_distal_phalanx_5_tip"),
                                                                                                                                  translation : new SFVec3f([-0.1938,0.7035,-0.0949])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])}),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("l_inclined_view"),
                  DEF : new SFString("hanim_l_inclined_view"),
                  rotation : new SFRotation([-0.113,0.993,0.0347,0.671]),
                  translation : new SFVec3f([1.62,1.05,2.06]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_l_inclined_viewpoint"),
                      description : new SFString("left inclined"),
                      position : new SFVec3f([0,0,0])})])})]),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("r_inclined_view"),
                  DEF : new SFString("hanim_r_inclined_view"),
                  rotation : new SFRotation([-0.113,-0.993,0.0347,0.671]),
                  translation : new SFVec3f([-1.62,1.05,2.06]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_r_inclined_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.9,0]),
                      description : new SFString("right inclined"),
                      position : new SFVec3f([0,0,0])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("front_view"),
                  DEF : new SFString("hanim_front_view"),
                  translation : new SFVec3f([0,0.85,2.58]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_front_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.9,0]),
                      description : new SFString("front"),
                      position : new SFVec3f([0,0,0])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("back_view"),
                  DEF : new SFString("hanim_back_view"),
                  rotation : new SFRotation([0,1,0,3.14]),
                  translation : new SFVec3f([0,0.85,-2.58]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_back_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.9,0]),
                      description : new SFString("back"),
                      position : new SFVec3f([0,0,0])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("l_side_view"),
                  DEF : new SFString("hanim_l_side_view"),
                  rotation : new SFRotation([0,1,0,1.5708]),
                  translation : new SFVec3f([2.6,0.854,0]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_l_side_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.9,0]),
                      description : new SFString("left side"),
                      position : new SFVec3f([0,0,0])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("Top_view"),
                  DEF : new SFString("hanim_Top_view"),
                  rotation : new SFRotation([1,0,0,-1.57]),
                  translation : new SFVec3f([0,3.5,0]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_Top_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.9,0]),
                      description : new SFString("Top"),
                      position : new SFVec3f([0,0,0])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("front_close_view"),
                  DEF : new SFString("hanim_front_close_view"),
                  translation : new SFVec3f([0,0.854,1.575]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_front_close_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0,1.575]),
                      description : new SFString("front close"),
                      position : new SFVec3f([0,0,0])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("side_close_view"),
                  DEF : new SFString("hanim_side_close_view"),
                  rotation : new SFRotation([0,1,0,1.5708]),
                  translation : new SFVec3f([1.56,0.854,0]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_side_close_viewpoint"),
                      centerOfRotation : new SFVec3f([1.6,0,0]),
                      description : new SFString("side close"),
                      position : new SFVec3f([0,0,0])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("head_front_close_view"),
                  DEF : new SFString("hanim_head_front_close_view"),
                  translation : new SFVec3f([0,1.5,1]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_head_front_close_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0,1]),
                      description : new SFString("head front close"),
                      position : new SFVec3f([0,0,0])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("chest_front_close_view"),
                  DEF : new SFString("hanim_chest_front_close_view"),
                  translation : new SFVec3f([0,1.2,1]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_chest_front_close_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0,1]),
                      description : new SFString("chest front close"),
                      position : new SFVec3f([0,0,0])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("pelvis_front_close_view"),
                  DEF : new SFString("hanim_pelvis_front_close_view"),
                  translation : new SFVec3f([0,0.8,1]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_pelvis_front_close_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0,1]),
                      description : new SFString("pelvis front close"),
                      position : new SFVec3f([0,0,0])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("knees_front_close_view"),
                  DEF : new SFString("hanim_knees_front_close_view"),
                  translation : new SFVec3f([0,0.4,1]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_knees_front_close_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.4,0]),
                      description : new SFString("knees front close"),
                      position : new SFVec3f([0,0,0])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("feet_front_close_view"),
                  DEF : new SFString("hanim_feet_front_close_view"),
                  translation : new SFVec3f([0,0,1]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_feet_front_close_viewpoint"),
                      description : new SFString("feet front close"),
                      position : new SFVec3f([0,0,0])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("eye_level_view"),
                  DEF : new SFString("hanim_eye_level_view"),
                  translation : new SFVec3f([0,1.6332,0.0502]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_eye_level_viewpoint"),
                      description : new SFString("eye level looking forward"),
                      orientation : new SFRotation([0,1,0,3.141593]),
                      position : new SFVec3f([0,0,0])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_eyeball_site_view")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_eyeball_site_view")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_hand_front_view")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_hand_front_view")})),

                new HAnimJoint({
                  USE : new SFString("hanim_humanoid_root")}),

                new HAnimJoint({
                  USE : new SFString("hanim_sacroiliac")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt12")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt11")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt10")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt9")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt8")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt7")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt6")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc7")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc6")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_skullbase")}),

                new HAnimJoint({
                  USE : new SFString("hanim_temporomandibular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_acromioclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_acromioclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_distal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_distal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_distal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_distal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_interphalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_interphalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_proximal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_proximal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_proximal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_proximal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpometacarpal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpometacarpal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpometacarpal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpometacarpal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpometacarpal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_elbow")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_elbow")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_eyeball_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_eyeball_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_eyebrow_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_eyebrow_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_eyelid_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_eyelid_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_hip")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_hip")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_knee")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_knee")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metacarpophalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metacarpophalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metacarpophalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metacarpophalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metacarpophalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metatarsophalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_radiocarpal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_radiocarpal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_sternoclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_sternoclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_talocrural")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_talocrural")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_distal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_distal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsometatarsal_2")}),
              segments : new MFNode([
                new HAnimSegment({
                  USE : new SFString("hanim_pelvis")}),

                new HAnimSegment({
                  USE : new SFString("hanim_skull")}),

                new HAnimSegment({
                  USE : new SFString("hanim_jaw")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c6")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c7")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t6")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t7")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t8")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t9")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t10")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t11")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t12")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_sacrum")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_calf")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_calf")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_middle_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_middle_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_middle_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_middle_phalanx_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_proximal_phalanx_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_proximal_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_proximal_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_proximal_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_proximal_phalanx_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_clavicle")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_clavicle")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_eyeball")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_eyeball")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_eyebrow")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_eyebrow")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_eyelid")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_eyelid")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_forearm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_forearm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metacarpal_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metacarpal_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metacarpal_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metacarpal_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metacarpal_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metatarsal_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metatarsal_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_scapula")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_scapula")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_talus")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_talus")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_distal_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_tarsal_distal_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_proximal_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_tarsal_proximal_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_thigh")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_thigh")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_upperarm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_upperarm")}),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_crotch_pt")})]),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_skull_vertex_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_sellion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_supramenton_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_nuchale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_suprasternale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_cervicale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_substernale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_rib10_midspine_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_waist_preferred_posterior_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_navel_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_acromion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_acromion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_asis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_asis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_axilla_distal_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_axilla_distal_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_axilla_proximal_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_axilla_proximal_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_calcaneus_posterior_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_calcaneus_posterior_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_1_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_1_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_2_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_2_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_3_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_3_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_4_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_4_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_5_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_5_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_clavicle_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_clavicle_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_dactylion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_dactylion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_femoral_lateral_epicondyle_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_femoral_lateral_epicondyle_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_femoral_medial_epicondyle_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_femoral_medial_epicondyle_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_forefoot_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_forefoot_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_gonion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_gonion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_humeral_lateral_epicondyle_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_humeral_lateral_epicondyle_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_humeral_medial_epicondyle_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_humeral_medial_epicondyle_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_iliocristale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_iliocristale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_infraorbitale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_infraorbitale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_knee_crease_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_knee_crease_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_lateral_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_lateral_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_medial_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_medial_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metacarpal_phalanx_2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metacarpal_phalanx_2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metacarpal_phalanx_5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metacarpal_phalanx_5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metatarsal_phalanx_1_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metatarsal_phalanx_1_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metatarsal_phalanx_5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metatarsal_phalanx_5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_neck_base_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_neck_base_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_olecranon_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_olecranon_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_psis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_psis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_radial_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_radial_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_radiale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_radiale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_rib10_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_rib10_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_temporomandibular_l_site_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_temporomandibular_r_site_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_sphyrion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_sphyrion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_tarsal_distal_phalanx_2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_tarsal_distal_phalanx_2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_thelion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_thelion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_tragion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_tragion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_trochanterion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_trochanterion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_ulnar_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_ulnar_styloid_pt")}))})])}))});
console.log(X3D0.toXMLNode());
