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
import { WorldInfo } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { HAnimHumanoid } from './x3d.mjs';
import { MetadataSet } from './x3d.mjs';
import { MetadataString } from './x3d.mjs';
import { HAnimJoint } from './x3d.mjs';
import { HAnimSegment } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { IndexedFaceSet } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { Coordinate } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { HAnimSite } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("H-Anim"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("DiamondManLOA_1.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Matthew T. Beitler")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Joel S. Pawloski")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("12 November 2001")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("13 March 2021")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/BonesAllSkeletonFrontViewLOA1.png")}),

            new meta({
              name : new SFString("motto"),
              content : new SFString("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\"")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("Still needs comments on CAESAR feature points inserted")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://ece.uwaterloo.ca/~HAnim")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.cis.upenn.edu/~badler/anthro/89-71.ps")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.cis.upenn.edu/~beitler")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("humanoid_landmark_locations.gif")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString(["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]),
              title : new SFString("HANIM 1.1 Default Joint Centers, LOA1")}),

            new NavigationInfo({
              speed : new SFFloat(1.5)}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,1,0]),
              description : new SFString("Diamond Man, LOA 1"),
              position : new SFVec3f([0,1,3])}),

            new HAnimHumanoid({
              name : new SFString("humanoid"),
              DEF : new SFString("hanim_humanoid"),
              version : new SFString("1.0"),
              /*HAnimHumanoid original info='\"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org\" \"authorName=Matthew T. Beitler\" \"copyright=Copyright 1999 Matthew T. Beitler\" \"humanoidVersion=JointCenters 1.1 LOA1\" \"usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.\"'*/
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("HAnimHumanoid.info"),
                  reference : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("authorEmail"),
                      value : new MFString(["beitler@graphics.cis.upenn.edu beitler@acm.org"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("authorName"),
                      value : new MFString(["Matthew T. Beitler"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("copyright"),
                      value : new MFString(["Copyright 1999 Matthew T. Beitler"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("humanoidVersion"),
                      value : new MFString(["JointCenters 1.1 LOA1"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("usageRestrictions"),
                      value : new MFString(["PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."])}))}),
              joints : new MFNode([
                new HAnimJoint({
                  name : new SFString("HumanoidRoot"),
                  DEF : new SFString("hanim_HumanoidRoot"),
                  center : new SFVec3f([0,0.824,0.0277]),
                  ulimit : new SFVec3f([0,0,0]),
                  llimit : new SFVec3f([0,0,0]),
                  stiffness : new SFVec3f([0,0,0]),
                  children : new MFNode([
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
                            new Transform({
                              translation : new SFVec3f([0,0.9149,0.0016]),
                              children : new MFNode([
                                new Shape({
                                  DEF : new SFString("DiamondShape"),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("points"),
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,0])}))}))})])})])}),

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
                                new Transform({
                                  translation : new SFVec3f([0.0961,0.9124,-0.0001]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("DiamondShape")})])}),

                                new HAnimSite({
                                  name : new SFString("l_knee_crease_pt"),
                                  DEF : new SFString("hanim_l_knee_crease_pt"),
                                  translation : new SFVec3f([0.0993,0.4881,-0.0309])}),

                                new HAnimSite({
                                  name : new SFString("l_femoral_lateral_epicn_pt"),
                                  DEF : new SFString("hanim_l_femoral_lateral_epicn_pt"),
                                  translation : new SFVec3f([0.1598,0.4967,0.0297])}),

                                new HAnimSite({
                                  name : new SFString("l_femoral_medial_epicn_pt"),
                                  DEF : new SFString("hanim_l_femoral_medial_epicn_pt"),
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
                                  DEF : new SFString("hanim_l_calf"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0.104,0.4867,0.0308]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("DiamondShape")})])})])}),

                                new HAnimJoint({
                                  name : new SFString("l_ankle"),
                                  DEF : new SFString("hanim_l_ankle"),
                                  center : new SFVec3f([0.1101,0.0656,-0.0736]),
                                  ulimit : new SFVec3f([0,0,0]),
                                  llimit : new SFVec3f([0,0,0]),
                                  stiffness : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_hindfoot"),
                                      DEF : new SFString("hanim_l_hindfoot"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("DiamondShape")})])}),

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
                                          name : new SFString("l_calcaneous_post_pt"),
                                          DEF : new SFString("hanim_l_calcaneous_post_pt"),
                                          translation : new SFVec3f([0.0974,0.0259,-0.1171])})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_midtarsal"),
                                      DEF : new SFString("hanim_l_midtarsal"),
                                      center : new SFVec3f([0.1086,0.0001,0.0368]),
                                      ulimit : new SFVec3f([0,0,0]),
                                      llimit : new SFVec3f([0,0,0]),
                                      stiffness : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_middistal"),
                                          DEF : new SFString("hanim_l_middistal"),
                                          children : new MFNode([
                                            new HAnimSite({
                                              name : new SFString("l_middistal_tip"),
                                              DEF : new SFString("hanim_l_middistal_tip"),
                                              translation : new SFVec3f([0.1354,0.0016,0.1476])}),

                                            new HAnimSite({
                                              name : new SFString("l_metatarsal_pha5_pt"),
                                              DEF : new SFString("hanim_l_metatarsal_pha5_pt"),
                                              translation : new SFVec3f([0.1825,0.007,0.0928])}),

                                            new HAnimSite({
                                              name : new SFString("l_metatarsal_pha1_pt"),
                                              DEF : new SFString("hanim_l_metatarsal_pha1_pt"),
                                              translation : new SFVec3f([0.0816,0.0232,0.0106])}),

                                            new HAnimSite({
                                              name : new SFString("l_digit2_pt"),
                                              DEF : new SFString("hanim_l_digit2_pt"),
                                              translation : new SFVec3f([0.1195,0.0079,0.1433])})])})])})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("r_hip"),
                          DEF : new SFString("hanim_r_hip"),
                          center : new SFVec3f([-0.095,0.9171,0.0029]),
                          ulimit : new SFVec3f([0,0,0]),
                          llimit : new SFVec3f([0,0,0]),
                          stiffness : new SFVec3f([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("r_thigh"),
                              DEF : new SFString("hanim_r_thigh"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-0.095,0.9171,0.0029]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("DiamondShape")})])}),

                                new HAnimSite({
                                  name : new SFString("r_knee_crease_pt"),
                                  DEF : new SFString("hanim_r_knee_crease_pt"),
                                  translation : new SFVec3f([-0.0825,0.4932,-0.0326])}),

                                new HAnimSite({
                                  name : new SFString("r_femoral_lateral_epicn_pt"),
                                  DEF : new SFString("hanim_r_femoral_lateral_epicn_pt"),
                                  translation : new SFVec3f([-0.1421,0.4992,0.031])}),

                                new HAnimSite({
                                  name : new SFString("r_femoral_medial_epicn_pt"),
                                  DEF : new SFString("hanim_r_femoral_medial_epicn_pt"),
                                  translation : new SFVec3f([-0.0221,0.5014,0.0289])})])}),

                            new HAnimJoint({
                              name : new SFString("r_knee"),
                              DEF : new SFString("hanim_r_knee"),
                              center : new SFVec3f([-0.0867,0.4913,0.0318]),
                              ulimit : new SFVec3f([0,0,0]),
                              llimit : new SFVec3f([0,0,0]),
                              stiffness : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("r_calf"),
                                  DEF : new SFString("hanim_r_calf"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-0.0867,0.4913,0.0318]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("DiamondShape")})])})])}),

                                new HAnimJoint({
                                  name : new SFString("r_ankle"),
                                  DEF : new SFString("hanim_r_ankle"),
                                  center : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                  ulimit : new SFVec3f([0,0,0]),
                                  llimit : new SFVec3f([0,0,0]),
                                  stiffness : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_hindfoot"),
                                      DEF : new SFString("hanim_r_hindfoot"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("DiamondShape")})])}),

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
                                          name : new SFString("r_calcaneous_post_pt"),
                                          DEF : new SFString("hanim_r_calcaneous_post_pt"),
                                          translation : new SFVec3f([-0.0692,0.0297,-0.1221])})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_midtarsal"),
                                      DEF : new SFString("hanim_r_midtarsal"),
                                      center : new SFVec3f([-0.0801,0,0.0368]),
                                      ulimit : new SFVec3f([0,0,0]),
                                      llimit : new SFVec3f([0,0,0]),
                                      stiffness : new SFVec3f([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("r_middistal"),
                                          DEF : new SFString("hanim_r_middistal"),
                                          children : new MFNode([
                                            new HAnimSite({
                                              name : new SFString("r_middistal_tip"),
                                              DEF : new SFString("hanim_r_middistal_tip"),
                                              translation : new SFVec3f([-0.1043,-0.0227,0.145])}),

                                            new HAnimSite({
                                              name : new SFString("r_metatarsal_pha5_pt"),
                                              DEF : new SFString("hanim_r_metatarsal_pha5_pt"),
                                              translation : new SFVec3f([-0.1523,0.0166,0.0895])}),

                                            new HAnimSite({
                                              name : new SFString("r_metatarsal_pha1_pt"),
                                              DEF : new SFString("hanim_r_metatarsal_pha1_pt"),
                                              translation : new SFVec3f([-0.0521,0.026,0.0127])}),

                                            new HAnimSite({
                                              name : new SFString("r_digit2_pt"),
                                              DEF : new SFString("hanim_r_digit2_pt"),
                                              translation : new SFVec3f([-0.0883,0.0134,0.1383])})])})])})])})])})])})])}),

                    new HAnimJoint({
                      name : new SFString("vl1"),
                      DEF : new SFString("hanim_vl1"),
                      center : new SFVec3f([-0.00405,1.07,-0.0275]),
                      ulimit : new SFVec3f([0,0,0]),
                      llimit : new SFVec3f([0,0,0]),
                      stiffness : new SFVec3f([0,0,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("l1"),
                          DEF : new SFString("hanim_l1")}),

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
                                new Transform({
                                  translation : new SFVec3f([0.2029,1.4376,-0.0387]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("DiamondShape")})])}),

                                new Transform({
                                  DEF : new SFString("l_upperarm_adjust"),
                                  center : new SFVec3f([0.182,1.22,-0.047]),
                                  rotation : new SFRotation([1,0,0,0.119]),
                                  translation : new SFVec3f([0.2029,1.4376,-0.0387])}),

                                new HAnimSite({
                                  name : new SFString("l_humeral_lateral_epicn_pt"),
                                  DEF : new SFString("hanim_l_humeral_lateral_epicn_pt"),
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
                                    new Transform({
                                      translation : new SFVec3f([0.2014,1.1357,-0.0682]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("DiamondShape")})])}),

                                    new Transform({
                                      DEF : new SFString("l_forearm_adjust"),
                                      center : new SFVec3f([0.198,0.961,-0.0405]),
                                      rotation : new SFRotation([-1,0,0,0.1]),
                                      translation : new SFVec3f([0.2014,1.1357,-0.0682])}),

                                    new HAnimSite({
                                      name : new SFString("l_radial_styloid_pt"),
                                      DEF : new SFString("hanim_l_radial_styloid_pt"),
                                      translation : new SFVec3f([0.1901,0.8645,-0.0415])}),

                                    new HAnimSite({
                                      name : new SFString("l_olecranon_pt"),
                                      DEF : new SFString("hanim_l_olecranon_pt"),
                                      translation : new SFVec3f([-0.1962,1.1375,-0.1123])}),

                                    new HAnimSite({
                                      name : new SFString("l_humeral_medial_epicn_pt"),
                                      DEF : new SFString("hanim_l_humeral_medial_epicn_pt"),
                                      translation : new SFVec3f([0.1735,1.1272,-0.1113])}),

                                    new HAnimSite({
                                      name : new SFString("l_radiale_pt"),
                                      DEF : new SFString("hanim_l_radiale_pt"),
                                      translation : new SFVec3f([0.2182,1.1212,-0.1167])})])}),

                                new HAnimJoint({
                                  name : new SFString("l_wrist"),
                                  DEF : new SFString("hanim_l_wrist"),
                                  center : new SFVec3f([0.1984,0.8663,-0.0583]),
                                  ulimit : new SFVec3f([0,0,0]),
                                  llimit : new SFVec3f([0,0,0]),
                                  stiffness : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_hand"),
                                      DEF : new SFString("hanim_l_hand"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.1984,0.8663,-0.0583]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("DiamondShape")})])}),

                                        new Transform({
                                          DEF : new SFString("l_hand_adjust"),
                                          center : new SFVec3f([0.213,0.811,-0.0338]),
                                          rotation : new SFRotation([-0.06361,-0.9967,0.04988,1.333]),
                                          translation : new SFVec3f([0.1984,0.8663,-0.0583])}),

                                        new HAnimSite({
                                          name : new SFString("l_hand_tip"),
                                          DEF : new SFString("hanim_l_hand_tip"),
                                          translation : new SFVec3f([0.208,0.6731,-0.0491])}),

                                        new HAnimSite({
                                          name : new SFString("l_metacarpal_pha2_pt"),
                                          DEF : new SFString("hanim_l_metacarpal_pha2_pt"),
                                          translation : new SFVec3f([0.2009,0.8139,-0.0237])}),

                                        new HAnimSite({
                                          name : new SFString("l_dactylion_pt"),
                                          DEF : new SFString("hanim_l_dactylion_pt"),
                                          translation : new SFVec3f([0.2056,0.6743,-0.0482])}),

                                        new HAnimSite({
                                          name : new SFString("l_ulnar_styloid_pt"),
                                          DEF : new SFString("hanim_l_ulnar_styloid_pt"),
                                          translation : new SFVec3f([-0.2142,0.8529,-0.0648])}),

                                        new HAnimSite({
                                          name : new SFString("l_metacarpal_pha5_pt"),
                                          DEF : new SFString("hanim_l_metacarpal_pha5_pt"),
                                          translation : new SFVec3f([0.1929,0.786,-0.1122])})])})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("r_shoulder"),
                          DEF : new SFString("hanim_r_shoulder"),
                          center : new SFVec3f([-0.1907,1.4407,-0.0325]),
                          ulimit : new SFVec3f([0,0,0]),
                          llimit : new SFVec3f([0,0,0]),
                          stiffness : new SFVec3f([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("r_upperarm"),
                              DEF : new SFString("hanim_r_upperarm"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-0.1907,1.4407,-0.0325]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("DiamondShape")})])}),

                                new Transform({
                                  DEF : new SFString("r_upperarm_adjust"),
                                  center : new SFVec3f([-0.182,1.22,-0.047]),
                                  rotation : new SFRotation([1,0,0,0.0836]),
                                  translation : new SFVec3f([-0.1907,1.4407,-0.0325])}),

                                new HAnimSite({
                                  name : new SFString("r_humeral_lateral_epicn_pt"),
                                  DEF : new SFString("hanim_r_humeral_lateral_epicn_pt"),
                                  translation : new SFVec3f([-0.2224,1.1517,-0.1033])})])}),

                            new HAnimJoint({
                              name : new SFString("r_elbow"),
                              DEF : new SFString("hanim_r_elbow"),
                              center : new SFVec3f([-0.1949,1.1388,-0.062]),
                              ulimit : new SFVec3f([0,0,0]),
                              llimit : new SFVec3f([0,0,0]),
                              stiffness : new SFVec3f([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("r_forearm"),
                                  DEF : new SFString("hanim_r_forearm"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-0.1949,1.1388,-0.062]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("DiamondShape")})])}),

                                    new Transform({
                                      DEF : new SFString("r_forearm_adjust"),
                                      center : new SFVec3f([-0.198,0.961,-0.0397]),
                                      rotation : new SFRotation([-1,0,0,0.1254]),
                                      translation : new SFVec3f([-0.1949,1.1388,-0.062])}),

                                    new HAnimSite({
                                      name : new SFString("r_radial_styloid_pt"),
                                      DEF : new SFString("hanim_r_radial_styloid_pt"),
                                      translation : new SFVec3f([-0.1884,0.8676,-0.036])}),

                                    new HAnimSite({
                                      name : new SFString("r_olecranon_pt"),
                                      DEF : new SFString("hanim_r_olecranon_pt"),
                                      translation : new SFVec3f([-0.1907,1.1405,-0.1065])}),

                                    new HAnimSite({
                                      name : new SFString("r_humeral_medial_epicn_pt"),
                                      DEF : new SFString("hanim_r_humeral_medial_epicn_pt"),
                                      translation : new SFVec3f([-0.168,1.1298,-0.1062])}),

                                    new HAnimSite({
                                      name : new SFString("r_radiale_pt"),
                                      DEF : new SFString("hanim_r_radiale_pt"),
                                      translation : new SFVec3f([-0.213,1.1305,-0.1091])})])}),

                                new HAnimJoint({
                                  name : new SFString("r_wrist"),
                                  DEF : new SFString("hanim_r_wrist"),
                                  center : new SFVec3f([-0.1959,0.8694,-0.0521]),
                                  ulimit : new SFVec3f([0,0,0]),
                                  llimit : new SFVec3f([0,0,0]),
                                  stiffness : new SFVec3f([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_hand"),
                                      DEF : new SFString("hanim_r_hand"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.1959,0.8694,-0.0521]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("DiamondShape")})])}),

                                        new Transform({
                                          DEF : new SFString("r_hand_adjust"),
                                          center : new SFVec3f([-0.217,0.811,-0.0338]),
                                          rotation : new SFRotation([-0.09024,0.994,-0.0624,1.216])}),

                                        new HAnimSite({
                                          name : new SFString("r_hand_tip"),
                                          DEF : new SFString("hanim_r_hand_tip"),
                                          translation : new SFVec3f([-0.1969,0.6758,-0.0427])}),

                                        new HAnimSite({
                                          name : new SFString("r_metacarpal_pha2_pt"),
                                          DEF : new SFString("hanim_r_metacarpal_pha2_pt"),
                                          translation : new SFVec3f([-0.1977,0.8169,-0.0177])}),

                                        new HAnimSite({
                                          name : new SFString("r_dactylion_pt"),
                                          DEF : new SFString("hanim_r_dactylion_pt"),
                                          translation : new SFVec3f([-0.1941,0.6772,-0.0423])}),

                                        new HAnimSite({
                                          name : new SFString("r_ulnar_styloid_pt"),
                                          DEF : new SFString("hanim_r_ulnar_styloid_pt"),
                                          translation : new SFVec3f([-0.2117,0.8562,-0.0584])}),

                                        new HAnimSite({
                                          name : new SFString("r_metacarpal_pha5_pt"),
                                          DEF : new SFString("hanim_r_metacarpal_pha5_pt"),
                                          translation : new SFVec3f([-0.1929,0.789,-0.1064])})])})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("vc4"),
                          DEF : new SFString("hanim_vc4"),
                          center : new SFVec3f([0,1.43,-0.0458]),
                          ulimit : new SFVec3f([0,0,0]),
                          llimit : new SFVec3f([0,0,0]),
                          stiffness : new SFVec3f([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("c4"),
                              DEF : new SFString("hanim_c4")})])})])}),

                    new HAnimJoint({
                      name : new SFString("vl5"),
                      DEF : new SFString("hanim_vl5"),
                      center : new SFVec3f([0.0028,1.0568,-0.0776]),
                      ulimit : new SFVec3f([0,0,0]),
                      llimit : new SFVec3f([0,0,0]),
                      stiffness : new SFVec3f([0,0,0]),
                      children : new MFNode([
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
                                new Transform({
                                  translation : new SFVec3f([0.0044,1.6209,0.0236]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("DiamondShape")})])}),

                                new HAnimSite({
                                  name : new SFString("skull_tip"),
                                  DEF : new SFString("hanim_skull_tip"),
                                  translation : new SFVec3f([0.005,1.7504,0.0055])}),

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
                                  translation : new SFVec3f([0.0039,1.5972,-0.0796])})])})])})])})])}),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("DiamondManLOA_1_view"),
                  DEF : new SFString("hanim_DiamondManLOA_1_view"),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("InclinedView"),
                      description : new SFString("Inclined View"),
                      orientation : new SFRotation([-0.113,0.993,0.0347,0.671]),
                      position : new SFVec3f([1.62,1.05,2.06])}),

                    new Viewpoint({
                      DEF : new SFString("FrontView"),
                      description : new SFString("Front View"),
                      position : new SFVec3f([0,0.854,2.57665])}),

                    new Viewpoint({
                      DEF : new SFString("SideView"),
                      description : new SFString("Side View"),
                      orientation : new SFRotation([0,1,0,1.57079]),
                      position : new SFVec3f([2.5929,0.854,0])}),

                    new Viewpoint({
                      DEF : new SFString("TopView"),
                      description : new SFString("Top View"),
                      orientation : new SFRotation([1,0,0,-1.57079]),
                      position : new SFVec3f([0,3.4495,0])})])})]),

                new HAnimJoint({
                  USE : new SFString("hanim_HumanoidRoot")}),

                new HAnimJoint({
                  USE : new SFString("hanim_sacroiliac")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_skullbase")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_ankle")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_ankle")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_elbow")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_elbow")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_hip")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_hip")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_knee")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_knee")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_midtarsal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_midtarsal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_wrist")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_wrist")}),
              segments : new MFNode([
                new HAnimSegment({
                  USE : new SFString("hanim_pelvis")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_skull")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_calf")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_calf")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_forearm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_forearm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_hand")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_hand")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_hindfoot")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_hindfoot")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_middistal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_middistal")}),

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
                  USE : new SFString("hanim_skull_tip")})]),
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
                  USE : new SFString("hanim_l_calcaneous_post_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_calcaneous_post_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_dactylion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_dactylion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_digit2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_digit2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_femoral_lateral_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_femoral_lateral_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_femoral_medial_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_femoral_medial_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_gonion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_gonion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_hand_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_hand_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_humeral_lateral_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_humeral_lateral_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_humeral_medial_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_humeral_medial_epicn_pt")})),
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
                  USE : new SFString("hanim_l_metacarpal_pha2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metacarpal_pha2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metacarpal_pha5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metacarpal_pha5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metatarsal_pha1_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metatarsal_pha1_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metatarsal_pha5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metatarsal_pha5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_middistal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_middistal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_olecranon_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_olecranon_pt")})),
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
                  USE : new SFString("hanim_l_sphyrion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_sphyrion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_tragion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_tragion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_ulnar_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_ulnar_styloid_pt")}))})])}))});
console.log(X3D0.toXMLNode());
