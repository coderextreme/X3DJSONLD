'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var component = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var HAnimJoint = require('./x3d.mjs');
var HAnimSegment = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var HAnimSite = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
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
              content : new SFString("DiamondManLOA1.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers, also includes HAnimSite feaature points. LOA-1 is typical low-end real-time 3D hierarchy.")}),

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
              content : new SFString("Mon, 15 Sep 2025 05:18:46 GMT")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/BonesAllSkeletonFrontViewLOA1.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("humanoid_landmark_locations.gif")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif")}),

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
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("HANIM 1.1 Default Joint Centers, LOA1"),
              info : new MFString(["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"])}),

            new NavigationInfo({
              speed : new SFFloat(1.5)}),

            new Viewpoint({
              description : new SFString("Diamond Man, LOA 1"),
              position : new SFVec3f([0,1,3]),
              centerOfRotation : new SFVec3f([0,1,0])}),

            new HAnimHumanoid({
              DEF : new SFString("hanim_humanoid"),
              name : new SFString("humanoid"),
              loa : new SFInt32(1),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("HAnimHumanoid.info"),
                  reference : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("authorEmail")})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("authorName")})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("copyright")})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("humanoidVersion")})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("usageRestrictions")}))}),
              joints : new MFNode([
                new HAnimJoint({
                  DEF : new SFString("hanim_humanoid_root"),
                  name : new SFString("humanoid_root"),
                  center : new SFVec3f([0,0.824,0.0277]),
                  children : new MFNode([
                    new HAnimJoint({
                      DEF : new SFString("hanim_sacroiliac"),
                      name : new SFString("sacroiliac"),
                      center : new SFVec3f([0,0.9149,0.0016]),
                      children : new MFNode([
                        new HAnimSegment({
                          DEF : new SFString("hanim_pelvis"),
                          name : new SFString("pelvis"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([0,0.9149,0.0016]),
                              child : new SFNode(
                                new Shape({
                                  DEF : new SFString("DiamondShape"),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,1,0])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      creaseAngle : new SFFloat(0.5),
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          DEF : new SFString("points"),
                                          point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))}))})])}),

                        new HAnimJoint({
                          DEF : new SFString("hanim_l_hip"),
                          name : new SFString("l_hip"),
                          center : new SFVec3f([0.0961,0.9124,-0.0001]),
                          children : new MFNode([
                            new HAnimSegment({
                              DEF : new SFString("hanim_l_thigh"),
                              name : new SFString("l_thigh"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0.0961,0.9124,-0.0001]),
                                  child : new SFNode(
                                    new Shape({
                                      USE : new SFString("DiamondShape")}))}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_l_knee_crease_pt"),
                                  name : new SFString("l_knee_crease_pt"),
                                  translation : new SFVec3f([0.0993,0.4881,-0.0309])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_l_femoral_lateral_epicondyle_pt"),
                                  name : new SFString("l_femoral_lateral_epicondyle_pt"),
                                  translation : new SFVec3f([0.1598,0.4967,0.0297])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_l_femoral_medial_epicondyle_pt"),
                                  name : new SFString("l_femoral_medial_epicondyle_pt"),
                                  translation : new SFVec3f([0.0398,0.4946,0.0303])})])}),

                            new HAnimJoint({
                              DEF : new SFString("hanim_l_knee"),
                              name : new SFString("l_knee"),
                              center : new SFVec3f([0.104,0.4867,0.0308]),
                              children : new MFNode([
                                new HAnimSegment({
                                  DEF : new SFString("hanim_l_calf"),
                                  name : new SFString("l_calf"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0.104,0.4867,0.0308]),
                                      child : new SFNode(
                                        new Shape({
                                          USE : new SFString("DiamondShape")}))})])}),

                                new HAnimJoint({
                                  DEF : new SFString("hanim_l_talocrural"),
                                  name : new SFString("l_talocrural"),
                                  center : new SFVec3f([0.1101,0.0656,-0.0736]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      DEF : new SFString("hanim_l_talus"),
                                      name : new SFString("l_talus"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                          child : new SFNode(
                                            new Shape({
                                              USE : new SFString("DiamondShape")}))}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_l_lateral_malleolus_pt"),
                                          name : new SFString("l_lateral_malleolus_pt"),
                                          translation : new SFVec3f([0.1308,0.0597,-0.1032])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_l_medial_malleolus_pt"),
                                          name : new SFString("l_medial_malleolus_pt"),
                                          translation : new SFVec3f([0.089,0.0716,-0.0881])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_l_sphyrion_pt"),
                                          name : new SFString("l_sphyrion_pt"),
                                          translation : new SFVec3f([0.089,0.0575,-0.0943])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_l_calcaneus_posterior_pt"),
                                          name : new SFString("l_calcaneus_posterior_pt"),
                                          translation : new SFVec3f([0.0974,0.0259,-0.1171])})])}),

                                    new HAnimJoint({
                                      DEF : new SFString("hanim_l_metatarsophalangeal_2"),
                                      name : new SFString("l_metatarsophalangeal_2"),
                                      center : new SFVec3f([0.1086,0.0001,0.0368]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          DEF : new SFString("hanim_l_tarsal_proximal_phalanx_2"),
                                          name : new SFString("l_tarsal_proximal_phalanx_2"),
                                          children : new MFNode([
                                            new HAnimSite({
                                              DEF : new SFString("hanim_l_middistal_tip"),
                                              name : new SFString("l_middistal_tip"),
                                              translation : new SFVec3f([0.1354,0.0016,0.1476])}),

                                            new HAnimSite({
                                              DEF : new SFString("hanim_l_metatarsal_phalanx_5_pt"),
                                              name : new SFString("l_metatarsal_phalanx_5_pt"),
                                              translation : new SFVec3f([0.1825,0.007,0.0928])}),

                                            new HAnimSite({
                                              DEF : new SFString("hanim_l_metatarsal_phalanx_1_pt"),
                                              name : new SFString("l_metatarsal_phalanx_1_pt"),
                                              translation : new SFVec3f([0.0816,0.0232,0.0106])}),

                                            new HAnimSite({
                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_2_pt"),
                                              name : new SFString("l_tarsal_distal_phalanx_2_pt"),
                                              translation : new SFVec3f([0.1195,0.0079,0.1433])})])})])})])})])})])}),

                        new HAnimJoint({
                          DEF : new SFString("hanim_r_hip"),
                          name : new SFString("r_hip"),
                          center : new SFVec3f([-0.095,0.9171,0.0029]),
                          children : new MFNode([
                            new HAnimSegment({
                              DEF : new SFString("hanim_r_thigh"),
                              name : new SFString("r_thigh"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-0.095,0.9171,0.0029]),
                                  child : new SFNode(
                                    new Shape({
                                      USE : new SFString("DiamondShape")}))}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_r_knee_crease_pt"),
                                  name : new SFString("r_knee_crease_pt"),
                                  translation : new SFVec3f([-0.0825,0.4932,-0.0326])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_r_femoral_lateral_epicondyle_pt"),
                                  name : new SFString("r_femoral_lateral_epicondyle_pt"),
                                  translation : new SFVec3f([-0.1421,0.4992,0.031])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_r_femoral_medial_epicondyle_pt"),
                                  name : new SFString("r_femoral_medial_epicondyle_pt"),
                                  translation : new SFVec3f([-0.0221,0.5014,0.0289])})])}),

                            new HAnimJoint({
                              DEF : new SFString("hanim_r_knee"),
                              name : new SFString("r_knee"),
                              center : new SFVec3f([-0.0867,0.4913,0.0318]),
                              children : new MFNode([
                                new HAnimSegment({
                                  DEF : new SFString("hanim_r_calf"),
                                  name : new SFString("r_calf"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-0.0867,0.4913,0.0318]),
                                      child : new SFNode(
                                        new Shape({
                                          USE : new SFString("DiamondShape")}))})])}),

                                new HAnimJoint({
                                  DEF : new SFString("hanim_r_talocrural"),
                                  name : new SFString("r_talocrural"),
                                  center : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      DEF : new SFString("hanim_r_talus"),
                                      name : new SFString("r_talus"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                          child : new SFNode(
                                            new Shape({
                                              USE : new SFString("DiamondShape")}))}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_r_lateral_malleolus_pt"),
                                          name : new SFString("r_lateral_malleolus_pt"),
                                          translation : new SFVec3f([-0.1006,0.0658,-0.1075])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_r_medial_malleolus_pt"),
                                          name : new SFString("r_medial_malleolus_pt"),
                                          translation : new SFVec3f([-0.0591,0.076,-0.0928])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_r_sphyrion_pt"),
                                          name : new SFString("r_sphyrion_pt"),
                                          translation : new SFVec3f([-0.0603,0.061,-0.1002])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_r_calcaneus_posterior_pt"),
                                          name : new SFString("r_calcaneus_posterior_pt"),
                                          translation : new SFVec3f([-0.0692,0.0297,-0.1221])})])}),

                                    new HAnimJoint({
                                      DEF : new SFString("hanim_r_metatarsophalangeal_2"),
                                      name : new SFString("r_metatarsophalangeal_2"),
                                      center : new SFVec3f([-0.0801,0,0.0368]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          DEF : new SFString("hanim_r_tarsal_proximal_phalanx_2"),
                                          name : new SFString("r_tarsal_proximal_phalanx_2"),
                                          children : new MFNode([
                                            new HAnimSite({
                                              DEF : new SFString("hanim_r_middistal_tip"),
                                              name : new SFString("r_middistal_tip"),
                                              translation : new SFVec3f([-0.1043,-0.0227,0.145])}),

                                            new HAnimSite({
                                              DEF : new SFString("hanim_r_metatarsal_phalanx_5_pt"),
                                              name : new SFString("r_metatarsal_phalanx_5_pt"),
                                              translation : new SFVec3f([-0.1523,0.0166,0.0895])}),

                                            new HAnimSite({
                                              DEF : new SFString("hanim_r_metatarsal_phalanx_1_pt"),
                                              name : new SFString("r_metatarsal_phalanx_1_pt"),
                                              translation : new SFVec3f([-0.0521,0.026,0.0127])}),

                                            new HAnimSite({
                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_2_pt"),
                                              name : new SFString("r_tarsal_distal_phalanx_2_pt"),
                                              translation : new SFVec3f([-0.0883,0.0134,0.1383])})])})])})])})])})])})])}),

                    new HAnimJoint({
                      DEF : new SFString("hanim_vl1"),
                      name : new SFString("vl1"),
                      center : new SFVec3f([-0.00405,1.07,-0.0275]),
                      children : new MFNode([
                        new HAnimSegment({
                          DEF : new SFString("hanim_l1"),
                          name : new SFString("l1")}),

                        new HAnimJoint({
                          DEF : new SFString("hanim_l_shoulder"),
                          name : new SFString("l_shoulder"),
                          center : new SFVec3f([0.2029,1.4376,-0.0387]),
                          children : new MFNode([
                            new HAnimSegment({
                              DEF : new SFString("hanim_l_upperarm"),
                              name : new SFString("l_upperarm"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0.2029,1.4376,-0.0387]),
                                  child : new SFNode(
                                    new Shape({
                                      USE : new SFString("DiamondShape")}))}),

                                new Transform({
                                  DEF : new SFString("l_upperarm_adjust"),
                                  translation : new SFVec3f([0.2029,1.4376,-0.0387]),
                                  rotation : new SFRotation([1,0,0,0.119]),
                                  center : new SFVec3f([0.182,1.22,-0.047])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_l_humeral_lateral_epicondyle_pt"),
                                  name : new SFString("l_humeral_lateral_epicondyle_pt"),
                                  translation : new SFVec3f([0.228,1.1482,-0.11])})])}),

                            new HAnimJoint({
                              DEF : new SFString("hanim_l_elbow"),
                              name : new SFString("l_elbow"),
                              center : new SFVec3f([0.2014,1.1357,-0.0682]),
                              children : new MFNode([
                                new HAnimSegment({
                                  DEF : new SFString("hanim_l_forearm"),
                                  name : new SFString("l_forearm"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0.2014,1.1357,-0.0682]),
                                      child : new SFNode(
                                        new Shape({
                                          USE : new SFString("DiamondShape")}))}),

                                    new Transform({
                                      DEF : new SFString("l_forearm_adjust"),
                                      translation : new SFVec3f([0.2014,1.1357,-0.0682]),
                                      rotation : new SFRotation([-1,0,0,0.1]),
                                      center : new SFVec3f([0.198,0.961,-0.0405])}),

                                    new HAnimSite({
                                      DEF : new SFString("hanim_l_radial_styloid_pt"),
                                      name : new SFString("l_radial_styloid_pt"),
                                      translation : new SFVec3f([0.1901,0.8645,-0.0415])}),

                                    new HAnimSite({
                                      DEF : new SFString("hanim_l_olecranon_pt"),
                                      name : new SFString("l_olecranon_pt"),
                                      translation : new SFVec3f([-0.1962,1.1375,-0.1123])}),

                                    new HAnimSite({
                                      DEF : new SFString("hanim_l_humeral_medial_epicondyle_pt"),
                                      name : new SFString("l_humeral_medial_epicondyle_pt"),
                                      translation : new SFVec3f([0.1735,1.1272,-0.1113])}),

                                    new HAnimSite({
                                      DEF : new SFString("hanim_l_radiale_pt"),
                                      name : new SFString("l_radiale_pt"),
                                      translation : new SFVec3f([0.2182,1.1212,-0.1167])})])}),

                                new HAnimJoint({
                                  DEF : new SFString("hanim_l_radiocarpal"),
                                  name : new SFString("l_radiocarpal"),
                                  center : new SFVec3f([0.1984,0.8663,-0.0583]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      DEF : new SFString("hanim_l_carpal"),
                                      name : new SFString("l_carpal"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.1984,0.8663,-0.0583]),
                                          child : new SFNode(
                                            new Shape({
                                              USE : new SFString("DiamondShape")}))}),

                                        new Transform({
                                          DEF : new SFString("l_hand_adjust"),
                                          translation : new SFVec3f([0.1984,0.8663,-0.0583]),
                                          rotation : new SFRotation([-0.06361,-0.9967,0.04988,1.333]),
                                          center : new SFVec3f([0.213,0.811,-0.0338])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_l_hand_tip"),
                                          name : new SFString("l_hand_tip"),
                                          translation : new SFVec3f([0.208,0.6731,-0.0491])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_l_metacarpal_phalanx_2_pt"),
                                          name : new SFString("l_metacarpal_phalanx_2_pt"),
                                          translation : new SFVec3f([0.2009,0.8139,-0.0237])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_l_dactylion_pt"),
                                          name : new SFString("l_dactylion_pt"),
                                          translation : new SFVec3f([0.2056,0.6743,-0.0482])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_l_ulnar_styloid_pt"),
                                          name : new SFString("l_ulnar_styloid_pt"),
                                          translation : new SFVec3f([-0.2142,0.8529,-0.0648])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_l_metacarpal_phalanx_5_pt"),
                                          name : new SFString("l_metacarpal_phalanx_5_pt"),
                                          translation : new SFVec3f([0.1929,0.786,-0.1122])})])})])})])})])}),

                        new HAnimJoint({
                          DEF : new SFString("hanim_r_shoulder"),
                          name : new SFString("r_shoulder"),
                          center : new SFVec3f([-0.1907,1.4407,-0.0325]),
                          children : new MFNode([
                            new HAnimSegment({
                              DEF : new SFString("hanim_r_upperarm"),
                              name : new SFString("r_upperarm"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-0.1907,1.4407,-0.0325]),
                                  child : new SFNode(
                                    new Shape({
                                      USE : new SFString("DiamondShape")}))}),

                                new Transform({
                                  DEF : new SFString("r_upperarm_adjust"),
                                  translation : new SFVec3f([-0.1907,1.4407,-0.0325]),
                                  rotation : new SFRotation([1,0,0,0.0836]),
                                  center : new SFVec3f([-0.182,1.22,-0.047])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_r_humeral_lateral_epicondyle_pt"),
                                  name : new SFString("r_humeral_lateral_epicondyle_pt"),
                                  translation : new SFVec3f([-0.2224,1.1517,-0.1033])})])}),

                            new HAnimJoint({
                              DEF : new SFString("hanim_r_elbow"),
                              name : new SFString("r_elbow"),
                              center : new SFVec3f([-0.1949,1.1388,-0.062]),
                              children : new MFNode([
                                new HAnimSegment({
                                  DEF : new SFString("hanim_r_forearm"),
                                  name : new SFString("r_forearm"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-0.1949,1.1388,-0.062]),
                                      child : new SFNode(
                                        new Shape({
                                          USE : new SFString("DiamondShape")}))}),

                                    new Transform({
                                      DEF : new SFString("r_forearm_adjust"),
                                      translation : new SFVec3f([-0.1949,1.1388,-0.062]),
                                      rotation : new SFRotation([-1,0,0,0.1254]),
                                      center : new SFVec3f([-0.198,0.961,-0.0397])}),

                                    new HAnimSite({
                                      DEF : new SFString("hanim_r_radial_styloid_pt"),
                                      name : new SFString("r_radial_styloid_pt"),
                                      translation : new SFVec3f([-0.1884,0.8676,-0.036])}),

                                    new HAnimSite({
                                      DEF : new SFString("hanim_r_olecranon_pt"),
                                      name : new SFString("r_olecranon_pt"),
                                      translation : new SFVec3f([-0.1907,1.1405,-0.1065])}),

                                    new HAnimSite({
                                      DEF : new SFString("hanim_r_humeral_medial_epicondyle_pt"),
                                      name : new SFString("r_humeral_medial_epicondyle_pt"),
                                      translation : new SFVec3f([-0.168,1.1298,-0.1062])}),

                                    new HAnimSite({
                                      DEF : new SFString("hanim_r_radiale_pt"),
                                      name : new SFString("r_radiale_pt"),
                                      translation : new SFVec3f([-0.213,1.1305,-0.1091])})])}),

                                new HAnimJoint({
                                  DEF : new SFString("hanim_r_radiocarpal"),
                                  name : new SFString("r_radiocarpal"),
                                  center : new SFVec3f([-0.1959,0.8694,-0.0521]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      DEF : new SFString("hanim_r_carpal"),
                                      name : new SFString("r_carpal"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.1959,0.8694,-0.0521]),
                                          child : new SFNode(
                                            new Shape({
                                              USE : new SFString("DiamondShape")}))}),

                                        new Transform({
                                          DEF : new SFString("r_hand_adjust"),
                                          rotation : new SFRotation([-0.09024,0.994,-0.0624,1.216]),
                                          center : new SFVec3f([-0.217,0.811,-0.0338])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_r_hand_tip"),
                                          name : new SFString("r_hand_tip"),
                                          translation : new SFVec3f([-0.1969,0.6758,-0.0427])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_r_metacarpal_phalanx_2_pt"),
                                          name : new SFString("r_metacarpal_phalanx_2_pt"),
                                          translation : new SFVec3f([-0.1977,0.8169,-0.0177])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_r_dactylion_pt"),
                                          name : new SFString("r_dactylion_pt"),
                                          translation : new SFVec3f([-0.1941,0.6772,-0.0423])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_r_ulnar_styloid_pt"),
                                          name : new SFString("r_ulnar_styloid_pt"),
                                          translation : new SFVec3f([-0.2117,0.8562,-0.0584])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_r_metacarpal_phalanx_5_pt"),
                                          name : new SFString("r_metacarpal_phalanx_5_pt"),
                                          translation : new SFVec3f([-0.1929,0.789,-0.1064])})])})])})])})])}),

                        new HAnimJoint({
                          DEF : new SFString("hanim_vc4"),
                          name : new SFString("vc4"),
                          center : new SFVec3f([0,1.43,-0.0458]),
                          children : new MFNode([
                            new HAnimSegment({
                              DEF : new SFString("hanim_c4"),
                              name : new SFString("c4")})])})])}),

                    new HAnimJoint({
                      DEF : new SFString("hanim_vl5"),
                      name : new SFString("vl5"),
                      center : new SFVec3f([0.0028,1.0568,-0.0776]),
                      children : new MFNode([
                        new HAnimJoint({
                          DEF : new SFString("hanim_skullbase"),
                          name : new SFString("skullbase"),
                          center : new SFVec3f([0.0044,1.6209,0.0236]),
                          children : new MFNode([
                            new HAnimSegment({
                              DEF : new SFString("hanim_skull"),
                              name : new SFString("skull"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0.0044,1.6209,0.0236]),
                                  child : new SFNode(
                                    new Shape({
                                      USE : new SFString("DiamondShape")}))}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_skull_vertex_tip"),
                                  name : new SFString("skull_vertex_tip"),
                                  translation : new SFVec3f([0.005,1.7504,0.0055])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_sellion_pt"),
                                  name : new SFString("sellion_pt"),
                                  translation : new SFVec3f([0.0058,1.6316,0.0852])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_r_infraorbitale_pt"),
                                  name : new SFString("r_infraorbitale_pt"),
                                  translation : new SFVec3f([-0.0237,1.6171,0.0752])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_l_infraorbitale_pt"),
                                  name : new SFString("l_infraorbitale_pt"),
                                  translation : new SFVec3f([0.0341,1.6171,0.0752])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_supramenton_pt"),
                                  name : new SFString("supramenton_pt"),
                                  translation : new SFVec3f([0.0061,1.541,0.0805])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_r_tragion_pt"),
                                  name : new SFString("r_tragion_pt"),
                                  translation : new SFVec3f([-0.0646,1.6347,0.0302])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_r_gonion_pt"),
                                  name : new SFString("r_gonion_pt"),
                                  translation : new SFVec3f([-0.052,1.5529,0.0347])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_l_tragion_pt"),
                                  name : new SFString("l_tragion_pt"),
                                  translation : new SFVec3f([0.0739,1.6348,0.0282])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_l_gonion_pt"),
                                  name : new SFString("l_gonion_pt"),
                                  translation : new SFVec3f([0.0631,1.553,0.033])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_nuchale_pt"),
                                  name : new SFString("nuchale_pt"),
                                  translation : new SFVec3f([0.0039,1.5972,-0.0796])})])})])})])})])}),

                new HAnimJoint({
                  USE : new SFString("hanim_humanoid_root")}),

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
                  USE : new SFString("hanim_l_talocrural")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_talocrural")}),
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
                  USE : new SFString("hanim_l_carpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_forearm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_forearm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_talus")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_talus")}),

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
                  USE : new SFString("hanim_skull_vertex_tip")})]),
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
                  USE : new SFString("hanim_l_calcaneus_posterior_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_calcaneus_posterior_pt")})),
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
                  USE : new SFString("hanim_l_tarsal_distal_phalanx_2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_tarsal_distal_phalanx_2_pt")})),
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
                  USE : new SFString("hanim_r_ulnar_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_DiamondManLOA1_view"),
                  name : new SFString("DiamondManLOA1_view"),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("InclinedView"),
                      description : new SFString("Inclined View"),
                      position : new SFVec3f([1.62,1.05,2.06]),
                      orientation : new SFRotation([-0.113,0.993,0.0347,0.671])}),

                    new Viewpoint({
                      DEF : new SFString("FrontView"),
                      description : new SFString("Front View"),
                      position : new SFVec3f([0,0.854,2.57665])}),

                    new Viewpoint({
                      DEF : new SFString("SideView"),
                      description : new SFString("Side View"),
                      position : new SFVec3f([2.5929,0.854,0]),
                      orientation : new SFRotation([0,1,0,1.57079])}),

                    new Viewpoint({
                      DEF : new SFString("TopView"),
                      description : new SFString("Top View"),
                      position : new SFVec3f([0,3.4495,0]),
                      orientation : new SFRotation([1,0,0,-1.57079])})])}))})])}))});
console.log(X3D0.toXMLNode());
