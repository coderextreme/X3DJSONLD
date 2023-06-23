'use strict';
var X3D = require('./x3d.js');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.js');
var SFNode = require('./x3d.js');
var head = require('./x3d.js');
var component = require('./x3d.js');
var SFInt32 = require('./x3d.js');
var MFNode = require('./x3d.js');
var meta = require('./x3d.js');
var Scene = require('./x3d.js');
var WorldInfo = require('./x3d.js');
var MFString = require('./x3d.js');
var Background = require('./x3d.js');
var MFColor = require('./x3d.js');
var HAnimHumanoid = require('./x3d.js');
var HAnimJoint = require('./x3d.js');
var SFVec3f = require('./x3d.js');
var MFInt32 = require('./x3d.js');
var MFFloat = require('./x3d.js');
var HAnimSegment = require('./x3d.js');
var Transform = require('./x3d.js');
var Shape = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var SFColor = require('./x3d.js');
var Sphere = require('./x3d.js');
var SFFloat = require('./x3d.js');
var HAnimSite = require('./x3d.js');
var Coordinate = require('./x3d.js');
var MFVec3f = require('./x3d.js');
var Group = require('./x3d.js');
var IndexedFaceSet = require('./x3d.js');
var IndexedLineSet = require('./x3d.js');
var Viewpoint = require('./x3d.js');
var SFRotation = require('./x3d.js');
var ExternProtoDeclare = require('./x3d.js');
var field = require('./x3d.js');
var ProtoInstance = require('./x3d.js');
var ROUTE = require('./x3d.js');
var Script = require('./x3d.js');
var SFBool = require('./x3d.js');
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
              content : new SFString("BoxMan3.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation scripting via an external prototype (ExternProtoDeclare).")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("James Smith - james@vapourtech.com")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Don Brutzman and Matt Beitler")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("1 March 2001")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("19 October 2001")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("6 January 2023")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/boxman.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("BoxMan3.js")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("Skin mesh is split across multiple shapes within a Group, should that be allowed?")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("What does the original animation script accomplish? It is not hooked up, script source contains errors...")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("BoxManViewInclined.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("BoxManViewFront.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("BoxManViewRight.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("BoxManViewLeft.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("BoxManViewTop.png")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("BoxManAnimationPanel.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.vapourtech.com/team/james/boxman.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Specifications/HAnim2001")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Models")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Nodes")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/content/X3dToVrml97.xslt")}),

            new meta({
              name : new SFString("rights"),
              content : new SFString("(C) 2000 James Smith - james@vapourtech.com")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.vapourtech.com")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("BoxMan HAnim 2.0")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3.x3d")}),

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
              info : new MFString(["(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"]),
              title : new SFString("BoxMan3 - A Seamless VRML Human")}),

            new Background({
              groundColor : new MFColor([0.6,0.6,0.6]),
              skyColor : new MFColor([0.75,0.75,0.75])}),
          /*When converting to VRML97 (which didn't include HAnim), HAnim node prototypes are provided automatically by the X3dToVrml97.xslt translation stylesheet*/

            new HAnimHumanoid({
              name : new SFString("Humanoid"),
              DEF : new SFString("boxman_Humanoid"),
              info : new MFString(["authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=1.0"]),
              version : new SFString("1.0"),
              joints : new MFNode([
                new HAnimJoint({
                  name : new SFString("humanoid_root"),
                  DEF : new SFString("boxman_humanoid_root"),
                  center : new SFVec3f([0,0.9723,-0.0728]),
                  skinCoordIndex : new MFInt32([0,1,2,3,4,5,6,7,8,9,10,11]),
                  skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1,1,1,1]),
                  ulimit : new MFFloat([0,0,0]),
                  llimit : new MFFloat([0,0,0]),
                  children : new MFNode([
                    new HAnimSegment({
                      name : new SFString("sacrum"),
                      DEF : new SFString("boxman_sacrum"),
                      children : new MFNode([
                        new Transform({
                          translation : new SFVec3f([0,0.9723,-0.0728]),
                          children : new MFNode([
                            new Shape({
                              DEF : new SFString("SphereYellow"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,0])}))})),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(0.02)}))})])})])}),

                    new HAnimJoint({
                      name : new SFString("l_hip"),
                      DEF : new SFString("boxman_l_hip"),
                      center : new SFVec3f([0.0956,0.9364,0]),
                      skinCoordIndex : new MFInt32([12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43]),
                      skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("l_thigh"),
                          DEF : new SFString("boxman_l_thigh"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([0.0956,0.9364,0]),
                              children : new MFNode([
                                new Shape({
                                  USE : new SFString("SphereYellow")})])})])}),

                        new HAnimJoint({
                          name : new SFString("l_knee"),
                          DEF : new SFString("boxman_l_knee"),
                          center : new SFVec3f([0.0956,0.5095,-0.0036]),
                          skinCoordIndex : new MFInt32([36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63]),
                          skinCoordWeight : new MFFloat([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l_calf"),
                              DEF : new SFString("boxman_l_calf"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0.0956,0.5095,-0.0036]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("SphereYellow")})])})])}),

                            new HAnimJoint({
                              name : new SFString("l_ankle"),
                              DEF : new SFString("boxman_l_ankle"),
                              center : new SFVec3f([0.0946,0.0762,-0.0261]),
                              skinCoordIndex : new MFInt32([64,65,66,67,68,69,70,71]),
                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_hindfoot"),
                                  DEF : new SFString("boxman_l_hindfoot"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0.0946,0.0762,-0.0261]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("SphereYellow")})])})])}),

                                new HAnimJoint({
                                  name : new SFString("l_midtarsal"),
                                  DEF : new SFString("boxman_l_midtarsal"),
                                  center : new SFVec3f([0.1079,0.0317,0.067]),
                                  skinCoordIndex : new MFInt32([72,73,74,75,76,77,78,79]),
                                  skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_middistal"),
                                      DEF : new SFString("boxman_l_middistal"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.1079,0.0317,0.067]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("SphereYellow")})])}),

                                        new HAnimSite({
                                          name : new SFString("l_middistal_tip"),
                                          DEF : new SFString("boxman_l_middistal_tip"),
                                          translation : new SFVec3f([0.095,0.0005,0.1924]),
                                          children : new MFNode([
                                            new Shape({
                                              DEF : new SFString("SphereRed"),
                                              appearance : new SFNode(
                                                new Appearance({
                                                  material : new SFNode(
                                                    new Material({
                                                      diffuseColor : new SFColor([1,0,0])}))})),
                                              geometry : new SFNode(
                                                new Sphere({
                                                  radius : new SFFloat(0.02)}))})])})])})])})])})])})])}),

                    new HAnimJoint({
                      name : new SFString("r_hip"),
                      DEF : new SFString("boxman_r_hip"),
                      center : new SFVec3f([-0.0956,0.9364,0]),
                      skinCoordIndex : new MFInt32([80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111]),
                      skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("r_thigh"),
                          DEF : new SFString("boxman_r_thigh"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([-0.0956,0.9364,0]),
                              children : new MFNode([
                                new Shape({
                                  USE : new SFString("SphereYellow")})])})])}),

                        new HAnimJoint({
                          name : new SFString("r_knee"),
                          DEF : new SFString("boxman_r_knee"),
                          center : new SFVec3f([-0.0956,0.5095,-0.0036]),
                          skinCoordIndex : new MFInt32([104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131]),
                          skinCoordWeight : new MFFloat([0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("r_calf"),
                              DEF : new SFString("boxman_r_calf"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-0.0956,0.5095,-0.0036]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("SphereYellow")})])})])}),

                            new HAnimJoint({
                              name : new SFString("r_ankle"),
                              DEF : new SFString("boxman_r_ankle"),
                              center : new SFVec3f([-0.0946,0.0762,-0.0261]),
                              skinCoordIndex : new MFInt32([132,133,134,135,136,137,138,139]),
                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("r_hindfoot"),
                                  DEF : new SFString("boxman_r_hindfoot"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-0.0946,0.0762,-0.0261]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("SphereYellow")})])})])}),

                                new HAnimJoint({
                                  name : new SFString("r_midtarsal"),
                                  DEF : new SFString("boxman_r_midtarsal"),
                                  center : new SFVec3f([-0.1079,0.0317,0.067]),
                                  skinCoordIndex : new MFInt32([140,141,142,143,144,145,146,147]),
                                  skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_middistal"),
                                      DEF : new SFString("boxman_r_middistal"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.1079,0.0317,0.067]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("SphereYellow")})])}),

                                        new HAnimSite({
                                          name : new SFString("r_middistal_tip"),
                                          DEF : new SFString("boxman_r_middistal_tip"),
                                          translation : new SFVec3f([-0.095,0.0005,0.1924]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("SphereRed")})])})])})])})])})])})])}),

                    new HAnimJoint({
                      name : new SFString("vl5"),
                      DEF : new SFString("boxman_vl5"),
                      center : new SFVec3f([0,1.0817,-0.0728]),
                      skinCoordIndex : new MFInt32([148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167]),
                      skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("l5"),
                          DEF : new SFString("boxman_l5"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([0,1.0817,-0.0728]),
                              children : new MFNode([
                                new Shape({
                                  USE : new SFString("SphereYellow")})])})])}),

                        new HAnimJoint({
                          name : new SFString("skullbase"),
                          DEF : new SFString("boxman_skullbase"),
                          center : new SFVec3f([0,1.644,0.036]),
                          skinCoordIndex : new MFInt32([168,169,170,171,172,173,174,175]),
                          skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("skull"),
                              DEF : new SFString("boxman_skull"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0,1.644,0.036]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("SphereYellow")})])}),

                                new HAnimSite({
                                  name : new SFString("skull_tip"),
                                  DEF : new SFString("boxman_skull_tip"),
                                  translation : new SFVec3f([-0.0029,1.7771,0.0274]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("SphereYellow")})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("l_shoulder"),
                          DEF : new SFString("boxman_l_shoulder"),
                          center : new SFVec3f([0.1968,1.4642,-0.0265]),
                          skinCoordIndex : new MFInt32([176,177,178,179,180,181,182,183]),
                          skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l_upperarm"),
                              DEF : new SFString("boxman_l_upperarm"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0.1968,1.4642,-0.0265]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("SphereYellow")})])})])}),

                            new HAnimJoint({
                              name : new SFString("l_elbow"),
                              DEF : new SFString("boxman_l_elbow"),
                              center : new SFVec3f([0.1982,1.1622,-0.0557]),
                              skinCoordIndex : new MFInt32([184,185,186,187,188,189,190,191]),
                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_forearm"),
                                  DEF : new SFString("boxman_l_forearm"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0.1982,1.1622,-0.0557]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("SphereYellow")})])})])}),

                                new HAnimJoint({
                                  name : new SFString("l_wrist"),
                                  DEF : new SFString("boxman_l_wrist"),
                                  center : new SFVec3f([0.1972,0.8929,-0.069]),
                                  skinCoordIndex : new MFInt32([192,193,194,195,196,197,198,199]),
                                  skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_hand"),
                                      DEF : new SFString("boxman_l_hand"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([0.1972,0.8929,-0.069]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("SphereYellow")})])}),

                                        new HAnimSite({
                                          name : new SFString("l_hand_tip"),
                                          DEF : new SFString("boxman_l_hand_tip"),
                                          translation : new SFVec3f([0.1912,0.6976,-0.071]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("SphereRed")})])})])})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("r_shoulder"),
                          DEF : new SFString("boxman_r_shoulder"),
                          center : new SFVec3f([-0.1968,1.4642,-0.0265]),
                          skinCoordIndex : new MFInt32([200,201,202,203,204,205,206,207]),
                          skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("r_upperarm"),
                              DEF : new SFString("boxman_r_upperarm"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-0.1968,1.4642,-0.0265]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("SphereYellow")})])})])}),

                            new HAnimJoint({
                              name : new SFString("r_elbow"),
                              DEF : new SFString("boxman_r_elbow"),
                              center : new SFVec3f([-0.1982,1.1622,-0.0557]),
                              skinCoordIndex : new MFInt32([208,209,210,211,212,213,214,215]),
                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("r_forearm"),
                                  DEF : new SFString("boxman_r_forearm"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-0.1982,1.1622,-0.0557]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("SphereYellow")})])})])}),

                                new HAnimJoint({
                                  name : new SFString("r_wrist"),
                                  DEF : new SFString("boxman_r_wrist"),
                                  center : new SFVec3f([-0.1972,0.8929,-0.069]),
                                  skinCoordIndex : new MFInt32([216,217,218,219,220,221,222,223]),
                                  skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_hand"),
                                      DEF : new SFString("boxman_r_hand"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.1972,0.8929,-0.069]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("SphereYellow")})])}),

                                        new HAnimSite({
                                          name : new SFString("r_hand_tip"),
                                          DEF : new SFString("boxman_r_hand_tip"),
                                          translation : new SFVec3f([-0.1912,0.6976,-0.071]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("SphereRed")})])})])})])})])})])})])})])}),
              /*# sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8)*/
              /*top-level joint references*/
              /*top-level segment references*/
              /*top-level site references*/
              skinCoord : new SFNode(
                new Coordinate({
                  DEF : new SFString("SKINCOORD"),
                  point : new MFVec3f([-0.05,1,0.05,0.05,1,0.05,0.03,0.97,-0.1,-0.03,0.97,-0.1,0.03,0.94,-0.075,-0.03,0.94,-0.075,0,0.92,0,0,0.94,0.03,-0.12,1.06,0.05,0.12,1.06,0.05,0.12,1.06,-0.1,-0.12,1.06,-0.1,0.0456,0.9364,0.05,0.1456,0.9364,0.05,0.1456,0.9364,-0.05,0.0456,0.9364,-0.05,0.0456,0.9,0.05,0.1456,0.9,0.05,0.1456,0.9,-0.05,0.0456,0.9,-0.05,0.0456,0.8,0.05,0.1456,0.8,0.05,0.1456,0.8,-0.05,0.0456,0.8,-0.05,0.0456,0.7,0.05,0.1456,0.7,0.05,0.1456,0.7,-0.05,0.0456,0.7,-0.05,0.0456,0.6,0.05,0.1456,0.6,0.05,0.1456,0.6,-0.05,0.0456,0.6,-0.05,0.0456,0.55,0.05,0.1456,0.55,0.05,0.1456,0.55,-0.05,0.0456,0.55,-0.05,0.0456,0.52,0.05,0.1456,0.52,0.05,0.1456,0.52,-0.05,0.0456,0.52,-0.05,0.0456,0.5,0.05,0.1456,0.5,0.05,0.1456,0.5,-0.05,0.0456,0.5,-0.05,0.0454,0.43,0.045,0.1454,0.43,0.045,0.1454,0.43,-0.055,0.0454,0.43,-0.055,0.0452,0.36,0.04,0.1452,0.36,0.04,0.1452,0.36,-0.06,0.0452,0.36,-0.06,0.045,0.29,0.035,0.145,0.29,0.035,0.145,0.29,-0.065,0.045,0.29,-0.065,0.0448,0.21,0.03,0.1448,0.21,0.03,0.1448,0.21,-0.07,0.0448,0.21,-0.07,0.0446,0.1262,0.025,0.1446,0.1262,0.025,0.1446,0.1262,-0.075,0.0446,0.1262,-0.075,0.0446,0.0762,0.025,0.1446,0.0762,0.025,0.1446,0,-0.075,0.0446,0,-0.075,0.0446,0.0562,0.057,0.1446,0.0562,0.057,0.1446,0,0.057,0.0446,0,0.057,0.0446,0.0562,0.087,0.1446,0.0562,0.087,0.1446,0,0.087,0.0446,0,0.087,0.0446,0.0562,0.1924,0.1446,0.0562,0.1924,0.1446,0,0.1924,0.0446,0,0.1924,-0.0456,0.9364,0.05,-0.1456,0.9364,0.05,-0.1456,0.9364,-0.05,-0.0456,0.9364,-0.05,-0.0456,0.9,0.05,-0.1456,0.9,0.05,-0.1456,0.9,-0.05,-0.0456,0.9,-0.05,-0.0456,0.8,0.05,-0.1456,0.8,0.05,-0.1456,0.8,-0.05,-0.0456,0.8,-0.05,-0.0456,0.7,0.05,-0.1456,0.7,0.05,-0.1456,0.7,-0.05,-0.0456,0.7,-0.05,-0.0456,0.6,0.05,-0.1456,0.6,0.05,-0.1456,0.6,-0.05,-0.0456,0.6,-0.05,-0.0456,0.55,0.05,-0.1456,0.55,0.05,-0.1456,0.55,-0.05,-0.0456,0.55,-0.05,-0.0456,0.52,0.05,-0.1456,0.52,0.05,-0.1456,0.52,-0.05,-0.0456,0.52,-0.05,-0.0456,0.5,0.05,-0.1456,0.5,0.05,-0.1456,0.5,-0.05,-0.0456,0.5,-0.05,-0.0454,0.43,0.045,-0.1454,0.43,0.045,-0.1454,0.43,-0.055,-0.0454,0.43,-0.055,-0.0452,0.36,0.04,-0.1452,0.36,0.04,-0.1452,0.36,-0.06,-0.0452,0.36,-0.06,-0.045,0.29,0.035,-0.145,0.29,0.035,-0.145,0.29,-0.065,-0.045,0.29,-0.065,-0.0448,0.21,0.03,-0.1448,0.21,0.03,-0.1448,0.21,-0.07,-0.0448,0.21,-0.07,-0.0446,0.1262,0.025,-0.1446,0.1262,0.025,-0.1446,0.1262,-0.075,-0.0446,0.1262,-0.075,-0.0446,0.0762,0.025,-0.1446,0.0762,0.025,-0.1446,0,-0.075,-0.0446,0,-0.075,-0.0446,0.0562,0.057,-0.1446,0.0562,0.057,-0.1446,0,0.057,-0.0446,0,0.057,-0.0446,0.0562,0.087,-0.1446,0.0562,0.087,-0.1446,0,0.087,-0.0446,0,0.087,-0.0446,0.0562,0.1924,-0.1446,0.0562,0.1924,-0.1446,0,0.1924,-0.0446,0,0.1924,-0.12,1.1,0.05,0.12,1.1,0.05,0.12,1.1,-0.1,-0.12,1.1,-0.1,-0.14,1.42,0.045,0.14,1.42,0.045,0.14,1.42,-0.09,-0.14,1.42,-0.09,-0.24,1.52,0.035,0.24,1.52,0.035,0.24,1.52,-0.09,-0.24,1.52,-0.09,-0.05,1.56,0.03,0.05,1.56,0.03,0.05,1.56,-0.06,-0.05,1.56,-0.06,-0.05,1.6,0.06,0.05,1.6,0.06,0.05,1.62,-0.03,-0.05,1.62,-0.03,-0.07,1.777,0.13,0.07,1.777,0.13,0.07,1.777,-0.03,-0.07,1.777,-0.03,-0.07,1.6,0.13,0.07,1.6,0.13,0.07,1.66,-0.03,-0.07,1.66,-0.03,0.16,1.42,0.015,0.24,1.5,0.015,0.24,1.5,-0.075,0.16,1.42,-0.075,0.17,1.18,-0.025,0.23,1.18,-0.025,0.23,1.18,-0.085,0.17,1.18,-0.085,0.17,1.14,-0.025,0.23,1.14,-0.025,0.23,1.14,-0.085,0.17,1.14,-0.085,0.18,0.91,-0.05,0.22,0.91,-0.05,0.22,0.91,-0.09,0.18,0.91,-0.09,0.18,0.87,-0.02,0.22,0.87,-0.02,0.22,0.87,-0.1,0.18,0.87,-0.1,0.18,0.6976,-0.02,0.22,0.6976,-0.02,0.22,0.6976,-0.1,0.18,0.6976,-0.1,-0.16,1.42,0.015,-0.24,1.5,0.015,-0.24,1.5,-0.075,-0.16,1.42,-0.075,-0.17,1.18,-0.025,-0.23,1.18,-0.025,-0.23,1.18,-0.085,-0.17,1.18,-0.085,-0.17,1.14,-0.025,-0.23,1.14,-0.025,-0.23,1.14,-0.085,-0.17,1.14,-0.085,-0.18,0.91,-0.05,-0.22,0.91,-0.05,-0.22,0.91,-0.09,-0.18,0.91,-0.09,-0.18,0.87,-0.02,-0.22,0.87,-0.02,-0.22,0.87,-0.1,-0.18,0.87,-0.1,-0.18,0.6976,-0.02,-0.22,0.6976,-0.02,-0.22,0.6976,-0.1,-0.18,0.6976,-0.1])})]),
              skin : new SFNode(
                new Group({
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("TrouserSkin"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,1]),
                              transparency : new SFFloat(0.5)}))})),
                      /*# 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40)*/
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              USE : new SFString("SKINCOORD")}))}))}),

                    new Shape({
                      DEF : new SFString("ShoeSkin"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,0]),
                              transparency : new SFFloat(0.5)}))})),
                      /*# 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10)*/
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              USE : new SFString("SKINCOORD")}))}))}),

                    new Shape({
                      DEF : new SFString("ShirtSkin"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,0]),
                              transparency : new SFFloat(0.5)}))})),
                      /*# 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8)*/
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              USE : new SFString("SKINCOORD")}))}))}),

                    new Shape({
                      DEF : new SFString("HeadHandsFleshToneSkin"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,0.75,0.75]),
                              transparency : new SFFloat(0.5)}))})),
                      /*# 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10)*/
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          coordIndex : new MFInt32([172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              USE : new SFString("SKINCOORD")}))}))}),

                    new Shape({
                      DEF : new SFString("SkinLines"),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([0,0,0])}))})),
                      /*Combined set of prior IFS coordIndex values*/
                      geometry : new SFNode(
                        new IndexedLineSet({
                          coordIndex : new MFInt32([0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              USE : new SFString("SKINCOORD")}))}))})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("BoxMan_view"),
                  DEF : new SFString("boxman_BoxMan_view"),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("Inclined_View"),
                      description : new SFString("Inclined View"),
                      orientation : new SFRotation([0,1,0,0.78]),
                      position : new SFVec3f([2,0.9,2])}),

                    new Viewpoint({
                      DEF : new SFString("Front_View"),
                      description : new SFString("Front View"),
                      position : new SFVec3f([0,1,3])}),

                    new Viewpoint({
                      DEF : new SFString("Right_View"),
                      description : new SFString("Right-side View"),
                      orientation : new SFRotation([0,1,0,-1.57]),
                      position : new SFVec3f([-3,1,0])}),

                    new Viewpoint({
                      DEF : new SFString("Left_View"),
                      description : new SFString("Left-side View"),
                      orientation : new SFRotation([0,1,0,1.57]),
                      position : new SFVec3f([3,1,0])}),

                    new Viewpoint({
                      DEF : new SFString("Top_View"),
                      description : new SFString("Top View"),
                      orientation : new SFRotation([1,0,0,-1.57]),
                      position : new SFVec3f([0,3,0])})])})),

                new HAnimJoint({
                  USE : new SFString("boxman_humanoid_root")}),

                new HAnimJoint({
                  USE : new SFString("boxman_skullbase")}),

                new HAnimJoint({
                  USE : new SFString("boxman_vl5")}),

                new HAnimJoint({
                  USE : new SFString("boxman_l_ankle")}),

                new HAnimJoint({
                  USE : new SFString("boxman_r_ankle")}),

                new HAnimJoint({
                  USE : new SFString("boxman_l_elbow")}),

                new HAnimJoint({
                  USE : new SFString("boxman_r_elbow")}),

                new HAnimJoint({
                  USE : new SFString("boxman_l_hip")}),

                new HAnimJoint({
                  USE : new SFString("boxman_r_hip")}),

                new HAnimJoint({
                  USE : new SFString("boxman_l_knee")}),

                new HAnimJoint({
                  USE : new SFString("boxman_r_knee")}),

                new HAnimJoint({
                  USE : new SFString("boxman_l_midtarsal")}),

                new HAnimJoint({
                  USE : new SFString("boxman_r_midtarsal")}),

                new HAnimJoint({
                  USE : new SFString("boxman_l_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("boxman_r_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("boxman_l_wrist")}),

                new HAnimJoint({
                  USE : new SFString("boxman_r_wrist")}),
              segments : new MFNode([
                new HAnimSegment({
                  USE : new SFString("boxman_l5")}),

                new HAnimSegment({
                  USE : new SFString("boxman_sacrum")}),

                new HAnimSegment({
                  USE : new SFString("boxman_skull")}),

                new HAnimSegment({
                  USE : new SFString("boxman_l_calf")}),

                new HAnimSegment({
                  USE : new SFString("boxman_r_calf")}),

                new HAnimSegment({
                  USE : new SFString("boxman_l_forearm")}),

                new HAnimSegment({
                  USE : new SFString("boxman_r_forearm")}),

                new HAnimSegment({
                  USE : new SFString("boxman_l_hand")}),

                new HAnimSegment({
                  USE : new SFString("boxman_r_hand")}),

                new HAnimSegment({
                  USE : new SFString("boxman_l_hindfoot")}),

                new HAnimSegment({
                  USE : new SFString("boxman_r_hindfoot")}),

                new HAnimSegment({
                  USE : new SFString("boxman_l_middistal")}),

                new HAnimSegment({
                  USE : new SFString("boxman_r_middistal")}),

                new HAnimSegment({
                  USE : new SFString("boxman_l_thigh")}),

                new HAnimSegment({
                  USE : new SFString("boxman_r_thigh")}),

                new HAnimSegment({
                  USE : new SFString("boxman_l_upperarm")}),

                new HAnimSegment({
                  USE : new SFString("boxman_r_upperarm")}),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("boxman_skull_tip")})]),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("boxman_l_hand_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("boxman_r_hand_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("boxman_l_middistal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("boxman_r_middistal_tip")}))}),

            new ExternProtoDeclare({
              name : new SFString("LOA1_WalkAnimation"),
              url : new MFString(["LOA1_WalkAnimation.wrl#LOA1_WalkAnimation","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation","http://HAnim.org/Models/HAnim2001/boxman/protos/LOA1WalkAnimation.wrl#LOA1WalkAnimation","LOA1_WalkAnimation.x3d#LOA1_WalkAnimation","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation","http://HAnim.org/Models/HAnim2001/boxman/protos/LOA1WalkAnimation.x3d#LOA1WalkAnimation"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("cycleInterval"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("enabled"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("loop"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("startTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFTIME,
                  name : new SFString("stopTime"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                new field({
                  type : field.TYPE_SFFLOAT,
                  name : new SFString("fraction_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("HumanoidRoot_translation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("HumanoidRoot_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("l_hip_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("l_knee_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("l_ankle_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("l_midtarsal_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("r_hip_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("r_knee_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("r_ankle_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("r_midtarsal_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("vl5_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("skullbase_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("l_shoulder_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("l_elbow_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("l_wrist_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("r_shoulder_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("r_elbow_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("r_wrist_rotation_changed"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                new field({
                  type : field.TYPE_SFBOOL,
                  name : new SFString("isActive"),
                  accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])}),

            new ProtoInstance({
              name : new SFString("LOA1_WalkAnimation"),
              DEF : new SFString("ANIMATOR")}),
          /*Animation ROUTEs*/

            new ROUTE({
              fromField : new SFString("HumanoidRoot_translation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_translation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("HumanoidRoot_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("l_hip_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_hip")}),

            new ROUTE({
              fromField : new SFString("l_knee_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_knee")}),

            new ROUTE({
              fromField : new SFString("l_ankle_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_ankle")}),

            new ROUTE({
              fromField : new SFString("l_midtarsal_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_midtarsal")}),

            new ROUTE({
              fromField : new SFString("r_hip_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_hip")}),

            new ROUTE({
              fromField : new SFString("r_knee_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_knee")}),

            new ROUTE({
              fromField : new SFString("r_ankle_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_ankle")}),

            new ROUTE({
              fromField : new SFString("r_midtarsal_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_midtarsal")}),

            new ROUTE({
              fromField : new SFString("vl5_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_vl5")}),

            new ROUTE({
              fromField : new SFString("skullbase_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_skullbase")}),

            new ROUTE({
              fromField : new SFString("l_shoulder_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_shoulder")}),

            new ROUTE({
              fromField : new SFString("l_elbow_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_elbow")}),

            new ROUTE({
              fromField : new SFString("l_wrist_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_wrist")}),

            new ROUTE({
              fromField : new SFString("r_shoulder_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_shoulder")}),

            new ROUTE({
              fromField : new SFString("r_elbow_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_elbow")}),

            new ROUTE({
              fromField : new SFString("r_wrist_rotation_changed"),
              fromNode : new SFString("ANIMATOR"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_wrist")}),

            new Script({
              DEF : new SFString("ENGINE"),
              directOutput : new SFBool(true),
              url : new MFString(["BoxMan3.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3.js"]),
              field : new MFNode([
                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("update"),
                  accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("humanoid"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  children : new MFNode([
                    new HAnimHumanoid({
                      USE : new SFString("boxman_Humanoid")})])}),

                new field({
                  type : field.TYPE_MFVEC3F,
                  name : new SFString("coordList"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                new field({
                  type : field.TYPE_SFNODE,
                  name : new SFString("joint"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  /*initialization node (if any) goes here*/}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("translation"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("0 0 0")}),

                new field({
                  type : field.TYPE_SFROTATION,
                  name : new SFString("rotation"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("1 0 0 0")}),

                new field({
                  type : field.TYPE_SFVEC3F,
                  name : new SFString("scale"),
                  accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                  value : new SFString("1 1 1")})])}),
          /*Trigger calculation after each animation change*/
          /*<ROUTE fromField='rotation_changed' fromNode='boxman_r_wrist' toField='update' toNode='ENGINE'/>*/])}))});
console.log(X3D0.toXMLNode());
