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
var TimeSensor = require('./x3d.js');
var SFTime = require('./x3d.js');
var SFBool = require('./x3d.js');
var PositionInterpolator = require('./x3d.js');
var OrientationInterpolator = require('./x3d.js');
var MFRotation = require('./x3d.js');
var Color = require('./x3d.js');
var ProximitySensor = require('./x3d.js');
var TouchSensor = require('./x3d.js');
var Text = require('./x3d.js');
var FontStyle = require('./x3d.js');
var ROUTE = require('./x3d.js');
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
              content : new SFString("BoxMan3AnimationPanel.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("A Seamless VRML Human, demonstrating the HAnim 2001 Specification, animation panel shows multiple behaviors.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Joe Williams and James Smith - james@vapourtech.com")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Joe Williams and Don Brutzman")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString(".x3d to .x3d translation used BS Contact Geo 8.203")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("1 March 2001")}),

            new meta({
              name : new SFString("revision"),
              content : new SFString("12 January 2017")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("14 January 2017")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("6 January 2023")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("BoxManAnimationPanelInclined.png")}),

            new meta({
              name : new SFString("MovingImage"),
              content : new SFString("BoxManAnimationPanel.mp4")}),

            new meta({
              name : new SFString("MovingImage"),
              content : new SFString("https://www.youtube.com/watch?v=8tI83Rtg_DU")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://twitter.com/Web3DConsortium/status/820638047523913728")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://twitter.com/Web3DConsortium/status/820642726009978881")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/boxman.wrl")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("InstantReality Forum Issue: InstantReality is ignoring the Viewpoint nodes in the topmost HAnimSite. http://forum.instantreality.org")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("BoxMan3.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://HAnim.org/Models/HAnim2001/boxman")}),

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
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/BoxMan3AnimationPanel.x3d")}),

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
              /*Coordinate DEF='SKINCOORD2' containerField='skinCoord' point='-0.05 1 0.05 0.05 1 0.05 0.03 0.97 -0.1 -0.03 0.97 -0.1 0.03 0.94 -0.075 -0.03 0.94 -0.075 0 0.92 0 0 0.94 0.03 -0.12 1.06 0.05 0.12 1.06 0.05 0.12 1.06 -0.1 -0.12 1.06 -0.1 0.0456 0.9364 0.05 0.1456 0.9364 0.05 0.1456 0.9364 -0.05 0.0456 0.9364 -0.05 0.0456 0.9 0.05 0.1456 0.9 0.05 0.1456 0.9 -0.05 0.0456 0.9 -0.05 0.0456 0.8 0.05 0.1456 0.8 0.05 0.1456 0.8 -0.05 0.0456 0.8 -0.05 0.0456 0.7 0.05 0.1456 0.7 0.05 0.1456 0.7 -0.05 0.0456 0.7 -0.05 0.0456 0.6 0.05 0.1456 0.6 0.05 0.1456 0.6 -0.05 0.0456 0.6 -0.05 0.0456 0.55 0.05 0.1456 0.55 0.05 0.1456 0.55 -0.05 0.0456 0.55 -0.05 0.0456 0.52 0.05 0.1456 0.52 0.05 0.1456 0.52 -0.05 0.0456 0.52 -0.05 0.0456 0.5 0.05 0.1456 0.5 0.05 0.1456 0.5 -0.05 0.0456 0.5 -0.05 0.0454 0.43 0.045 0.1454 0.43 0.045 0.1454 0.43 -0.055 0.0454 0.43 -0.055 0.0452 0.36 0.04 0.1452 0.36 0.04 0.1452 0.36 -0.06 0.0452 0.36 -0.06 0.045 0.29 0.035 0.145 0.29 0.035 0.145 0.29 -0.065 0.045 0.29 -0.065 0.0448 0.21 0.03 0.1448 0.21 0.03 0.1448 0.21 -0.07 0.0448 0.21 -0.07 0.0446 0.1262 0.025 0.1446 0.1262 0.025 0.1446 0.1262 -0.075 0.0446 0.1262 -0.075 0.0446 0.0702038 0.02464698 0.1446 0.0702038 0.02464698 0.1446 0.006264479 -0.08360368 0.0446 0.006264479 -0.08360368 0.0446 0.046587 0.05407905 0.1446 0.046587 0.05407905 0.1446 -0.009224742 0.0474844 0.0446 -0.009224742 0.0474844 0.0446 0.04306673 0.0838718 0.1446 0.04306673 0.0838718 0.1446 -0.01274502 0.07727715 0.0446 -0.01274502 0.07727715 0.0446 0.03069882 0.1885436 0.1446 0.03069882 0.1885436 0.1446 -0.02511293 0.181949 0.0446 -0.02511293 0.181949 -0.0456 0.9861611 0.004881433 -0.1456 0.9861611 0.004881433 -0.1456 0.8866388 -0.004881474 -0.0456 0.8866388 -0.004881474 -0.0456 0.9826074 0.04110757 -0.1456 0.9826074 0.04110757 -0.1456 0.8830851 0.03134466 -0.0456 0.8830851 0.03134466 -0.0456 0.9728445 0.1406298 -0.1456 0.9728445 0.1406298 -0.1456 0.8733222 0.1308669 -0.0456 0.8733222 0.1308669 -0.0456 0.9630816 0.2401521 -0.1456 0.9630816 0.2401521 -0.1456 0.8635593 0.2303892 -0.0456 0.8635593 0.2303892 -0.0456 0.9533187 0.3396744 -0.1456 0.9533187 0.3396744 -0.1456 0.8537964 0.3299115 -0.0456 0.8537964 0.3299115 -0.0456 0.9484373 0.3894355 -0.1456 0.9484373 0.3894355 -0.1456 0.848915 0.3796726 -0.0456 0.848915 0.3796726 -0.0456 0.94468 0.4147483 -0.1456 0.94468 0.4147483 -0.1456 0.8450468 0.4134411 -0.0456 0.8450468 0.4134411 -0.0456 0.9444185 0.4346749 -0.1456 0.9444185 0.4346749 -0.1456 0.8447853 0.4333678 -0.0456 0.8447853 0.4333678 -0.0454 0.9452982 0.5003315 -0.1454 0.9452982 0.5003315 -0.1454 0.8455541 0.5074801 -0.0454 0.8455541 0.5074801 -0.0452 0.945315 0.5705098 -0.1452 0.945315 0.5705098 -0.1452 0.8455709 0.5776584 -0.0452 0.8455709 0.5776584 -0.045 0.9453319 0.6406881 -0.145 0.9453319 0.6406881 -0.145 0.8455877 0.6478368 -0.045 0.8455877 0.6478368 -0.0448 0.9460636 0.7208409 -0.1448 0.9460636 0.7208409 -0.1448 0.8463194 0.7279896 -0.0448 0.8463194 0.7279896 -0.0446 0.947067 0.8047839 -0.1446 0.947067 0.8047839 -0.1446 0.8473228 0.8119326 -0.0446 0.8473228 0.8119326 -0.0446 0.9507178 0.8606621 -0.1446 0.9507178 0.8606621 -0.1446 0.847315 0.9321763 -0.0446 0.847315 0.9321763 -0.0446 0.9817629 0.8821145 -0.1446 0.9817629 0.8821145 -0.1446 0.9791749 0.9382548 -0.0446 0.9791749 0.9382548 -0.0446 1.011731 0.883496 -0.1446 1.011731 0.883496 -0.1446 1.009143 0.9396363 -0.0446 1.009143 0.9396363 -0.0446 1.117019 0.8883496 -0.1446 1.117019 0.8883496 -0.1446 1.114431 0.94449 -0.0446 1.114431 0.94449 -0.12 1.1 0.05 0.12 1.1 0.05 0.12 1.1 -0.1 -0.12 1.1 -0.1 -0.14 1.42 0.045 0.14 1.42 0.045 0.14 1.42 -0.09 -0.14 1.42 -0.09 -0.24 1.52 0.035 0.24 1.52 0.035 0.24 1.52 -0.09 -0.24 1.52 -0.09 -0.05 1.56 0.03 0.05 1.56 0.03 0.05 1.56 -0.06 -0.05 1.56 -0.06 -0.05 1.6 0.06 0.05 1.6 0.06 0.05 1.62 -0.03 -0.05 1.62 -0.03 -0.07 1.781247 0.1236818 0.07 1.781247 0.1236818 0.07 1.77377 -0.03614335 -0.07 1.77377 -0.03614335 -0.07 1.604441 0.1319535 0.07 1.604441 0.1319535 0.07 1.656898 -0.03067561 -0.07 1.656898 -0.03067561 0.2016854 1.406894 0.015 0.2023709 1.520029 0.015 0.2023709 1.520029 -0.075 0.2016854 1.406894 -0.075 0.3774735 1.243191 -0.025 0.4201562 1.28536 -0.025 0.4201562 1.28536 -0.085 0.3774735 1.243191 -0.085 0.4055858 1.214736 -0.025 0.4482685 1.256904 -0.025 0.4482685 1.256904 -0.085 0.4055858 1.214736 -0.085 0.5743457 1.058147 -0.05 0.6028008 1.086259 -0.05 0.6028008 1.086259 -0.09 0.5743457 1.058147 -0.09 0.6024581 1.029692 -0.02 0.6309132 1.057804 -0.02 0.6309132 1.057804 -0.1 0.6024581 1.029692 -0.1 0.7236224 0.9070502 -0.02 0.7520775 0.9351625 -0.02 0.7520775 0.9351625 -0.1 0.7236224 0.9070502 -0.1 -0.2016854 1.406894 0.015 -0.2023709 1.520029 0.015 -0.2023709 1.520029 -0.075 -0.2016854 1.406894 -0.075 -0.3774735 1.243191 -0.025 -0.4201562 1.28536 -0.025 -0.4201562 1.28536 -0.085 -0.3774735 1.243191 -0.085 -0.4055858 1.214736 -0.025 -0.4482685 1.256904 -0.025 -0.4482685 1.256904 -0.085 -0.4055858 1.214736 -0.085 -0.5743457 1.058147 -0.05 -0.6028008 1.086259 -0.05 -0.6028008 1.086259 -0.09 -0.5743457 1.058147 -0.09 -0.6024581 1.029692 -0.02 -0.6309132 1.057804 -0.02 -0.6309132 1.057804 -0.1 -0.6024581 1.029692 -0.1 -0.7236224 0.9070502 -0.02 -0.7520775 0.9351625 -0.02 -0.7520775 0.9351625 -0.1 -0.7236224 0.9070502 -0.1'/*/
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
                      DEF : new SFString("Best_View"),
                      description : new SFString("Right-side View"),
                      orientation : new SFRotation([0,1,0,-1.57]),
                      position : new SFVec3f([-3,1,0])}),

                    new Viewpoint({
                      DEF : new SFString("Side_View"),
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
                  USE : new SFString("boxman_r_ankle")}),

                new HAnimJoint({
                  USE : new SFString("boxman_l_ankle")}),

                new HAnimJoint({
                  USE : new SFString("boxman_r_elbow")}),

                new HAnimJoint({
                  USE : new SFString("boxman_l_elbow")}),

                new HAnimJoint({
                  USE : new SFString("boxman_r_hip")}),

                new HAnimJoint({
                  USE : new SFString("boxman_l_hip")}),

                new HAnimJoint({
                  USE : new SFString("boxman_r_knee")}),

                new HAnimJoint({
                  USE : new SFString("boxman_l_knee")}),

                new HAnimJoint({
                  USE : new SFString("boxman_r_midtarsal")}),

                new HAnimJoint({
                  USE : new SFString("boxman_l_midtarsal")}),

                new HAnimJoint({
                  USE : new SFString("boxman_r_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("boxman_l_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("boxman_r_wrist")}),

                new HAnimJoint({
                  USE : new SFString("boxman_l_wrist")}),
              segments : new MFNode([
                new HAnimSegment({
                  USE : new SFString("boxman_sacrum")}),

                new HAnimSegment({
                  USE : new SFString("boxman_l5")}),

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

            new Group({
              DEF : new SFString("StopAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("StopTimer"),
                  cycleInterval : new SFTime(5.73),
                  loop : new SFBool(true)}),

                new PositionInterpolator({
                  DEF : new SFString("Stop_humanoid_root_TranslationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFVec3f([0,0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_humanoid_root_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_sacroiliac_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_subtalar_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_midtarsal_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_metatarsal_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_subtalar_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_midtarsal_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_metatarsal_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vl5_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vl4_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vl3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vl2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vl1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt12_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt11_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt10_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt9_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt8_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt7_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt6_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt5_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt4_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc7_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc6_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc5_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc4_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_skullbase_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_eyeball_joint_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_eyeball_joint_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_sternoclavicular_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_acromioclavicular_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_thumb1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_thumb2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_thumb3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_index0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_index1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_index2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_index3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_middle0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_middle1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_middle2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_middle3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_ring0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_ring1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_ring2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_ring3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_pinky0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_pinky1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_pinky2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_pinky3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_sternoclavicular_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_acromioclavicular_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_thumb1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_thumb2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_thumb3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_index0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_index1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_index2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_index3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_middle0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_middle1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_middle2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_middle3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_ring0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_ring1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_ring2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_ring3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_pinky0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_pinky1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_pinky2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_pinky3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])})])}),

            new Group({
              DEF : new SFString("StandAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("StandTimer"),
                  cycleInterval : new SFTime(5.73),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,-1,0.25,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_head_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_neck_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_eyeball_RotationInterpolator"),
                  key : new MFFloat([0,0.4,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_eyeball_RotationInterpolator"),
                  key : new MFFloat([0,0.4,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_lower_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_upper_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_whole_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Stand_whole_body_TranslationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFVec3f([0,0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_index1_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_index2_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_index3_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0])})])}),

            new Group({
              DEF : new SFString("PitchesAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("PitchTimer"),
                  cycleInterval : new SFTime(5.73),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_head_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_neck_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.55,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_lower_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_upper_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_whole_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Pitches_whole_body_TranslationInterpolator"),
                  key : new MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]),
                  keyValue : new MFVec3f([0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_r_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0])})])}),

            new Group({
              DEF : new SFString("YawsAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("YawTimer"),
                  cycleInterval : new SFTime(5.73),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_head_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_neck_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_upper_body_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_lower_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_whole_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Yaws_whole_body_TranslationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFVec3f([0,0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_r_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])})])}),

            new Group({
              DEF : new SFString("RollsAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("RollTimer"),
                  cycleInterval : new SFTime(5.73),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_head_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_neck_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_lower_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_upper_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_whole_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Rolls_whole_body_TranslationInterpolator"),
                  key : new MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]),
                  keyValue : new MFVec3f([0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_r_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])})])}),

            new Group({
              DEF : new SFString("WalkAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("WalkTimer"),
                  cycleInterval : new SFTime(1.73),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]),
                  keyValue : new MFRotation([1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]),
                  keyValue : new MFRotation([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.125,0.2083,0.375,0.6667,0.9167,1]),
                  keyValue : new MFRotation([-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]),
                  keyValue : new MFRotation([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]),
                  keyValue : new MFRotation([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_lower_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_head_RotationInterpolator"),
                  key : new MFFloat([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]),
                  keyValue : new MFRotation([0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_neck_RotationInterpolator"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_upper_body_RotationInterpolator"),
                  key : new MFFloat([0,0.2083,0.375,0.75,0.8333,1]),
                  keyValue : new MFRotation([0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_whole_body_RotationInterpolator"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Walk_whole_body_TranslationInterpolator"),
                  key : new MFFloat([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]),
                  keyValue : new MFVec3f([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0])})])}),

            new Group({
              DEF : new SFString("RunAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("RunTimer"),
                  cycleInterval : new SFTime(0.9),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_hip_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2182,0.4909,0.7455,1]),
                  keyValue : new MFRotation([-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_knee_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2182,0.4909,0.7455,1]),
                  keyValue : new MFRotation([1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_ankle_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.22,0.3,0.4,1]),
                  keyValue : new MFRotation([1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_hip_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_knee_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_ankle_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.4,0.71,0.8,0.82,1]),
                  keyValue : new MFRotation([1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_shoulder_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2182,0.4909,0.7455,1]),
                  keyValue : new MFRotation([0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_elbow_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2182,0.4909,0.7455,1]),
                  keyValue : new MFRotation([-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_wrist_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_shoulder_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_elbow_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_wrist_RotationInterpolator_Run"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_lower_body_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2182,0.4909,0.7455,1]),
                  keyValue : new MFRotation([0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_head_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_neck_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_upper_body_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7636,1]),
                  keyValue : new MFRotation([0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_whole_body_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06])}),

                new PositionInterpolator({
                  DEF : new SFString("Run_whole_body_TranslationInterpolator_Run"),
                  key : new MFFloat([0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]),
                  keyValue : new MFVec3f([0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0])})])}),

            new Group({
              DEF : new SFString("JumpAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("JumpTimer"),
                  cycleInterval : new SFTime(3.73),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.2,0.25,0.3,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.48,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_lower_body_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.48,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.64,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.64,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.48,0.52,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.58,0.72,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_head_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.48,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_neck_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.48,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_upper_body_RotationInterpolator"),
                  key : new MFFloat([0,0.22,0.28,0.34,0.71,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_whole_body_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.48,0.64,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Jump_whole_body_TranslationInterpolator"),
                  key : new MFFloat([0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]),
                  keyValue : new MFVec3f([0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])})])}),

            new Group({
              DEF : new SFString("KickAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("KickTimer"),
                  cycleInterval : new SFTime(3.73),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_shoulder_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_ForeArm_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_wrist_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_shoulder_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_ForeArm_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_wrist_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_hip_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.3,0.5,0.6,0.9,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_knee_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_hip_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.3,0.5,0.6,0.9,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_knee_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_ankle_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_lower_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_upper_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_whole_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Kick_whole_body_TranslationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFVec3f([0,0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_neck_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.55,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0])})])}),

            new Group({
              DEF : new SFString("Interface"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("CoordinateSystemFloor"),
                  scale : new SFVec3f([0.1,0.1,0.1]),
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("AxisLinesShape"),
                      /*RGB lines showing XYZ axes*/
                      geometry : new SFNode(
                        new IndexedLineSet({
                          colorIndex : new MFInt32([0,1,2]),
                          colorPerVertex : new SFBool(false),
                          coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([0,0,0,1,0,0,0,1,0,0,0,1])})),
                          color : new SFNode(
                            new Color({
                              color : new MFColor([1,0,0,0,0.6,0,0,0,1])}))}))})])}),

                new ProximitySensor({
                  DEF : new SFString("HudProx"),
                  size : new SFVec3f([50,50,50])}),

                new Transform({
                  DEF : new SFString("HudXform"),
                  rotation : new SFRotation([0,1,0,0.78]),
                  translation : new SFVec3f([2,1,2]),
                  children : new MFNode([
                    new Transform({
                      scale : new SFVec3f([0.02,0.02,0.02]),
                      translation : new SFVec3f([-0.4,-0.01,-0.75]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Stand_Text"),
                          translation : new SFVec3f([0,-0.9,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Stand_Touch")}),

                            new Shape({
                              DEF : new SFString("StandText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("text_color"),
                                      ambientIntensity : new SFFloat(1),
                                      diffuseColor : new SFColor([0.819,0.521,0.169]),
                                      emissiveColor : new SFColor([0.819,0.521,0.169]),
                                      specularColor : new SFColor([0.819,0.521,0.169])}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Stand"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Stand_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("Clear"),
                                      ambientIntensity : new SFFloat(1),
                                      diffuseColor : new SFColor([0,0.5,0]),
                                      emissiveColor : new SFColor([0,0.5,0]),
                                      transparency : new SFFloat(0.8)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  DEF : new SFString("Backing"),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.2,-0.25,-0.01,3,-0.25,-0.01,3,1,-0.01,-0.2,1,-0.01])}))}))})])}),

                        new Transform({
                          DEF : new SFString("Pitch_Text"),
                          translation : new SFVec3f([0,-2.4,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Pitch_Touch")}),

                            new Shape({
                              DEF : new SFString("PitchText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Pitch"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Pitch_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("Yaw_Text"),
                          translation : new SFVec3f([0,-3.8,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Yaw_Touch")}),

                            new Shape({
                              DEF : new SFString("YawText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Yaw"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Yaw_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("Roll_Text"),
                          translation : new SFVec3f([0,-5.2,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Roll_Touch")}),

                            new Shape({
                              DEF : new SFString("RollText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Roll"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Roll_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("Walk_Text"),
                          translation : new SFVec3f([0,-6.6,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Walk_Touch")}),

                            new Shape({
                              DEF : new SFString("WalkText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Walk"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Walk_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("Run_Text"),
                          translation : new SFVec3f([0,-8,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Run_Touch")}),

                            new Shape({
                              DEF : new SFString("RunText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Run"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Run_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("Jump_Text"),
                          translation : new SFVec3f([0,-9.4,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Jump_Touch")}),

                            new Shape({
                              DEF : new SFString("JumpText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Jump"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Jump_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("Kick_Text"),
                          translation : new SFVec3f([0,-10.8,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Kick_Touch")}),

                            new Shape({
                              DEF : new SFString("KickText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Kick"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Kick_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("Stop_Text"),
                          translation : new SFVec3f([0,0.4,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Stop_Touch")}),

                            new Shape({
                              DEF : new SFString("StopText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Default"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"])}))}))}),

                            new Shape({
                              DEF : new SFString("Stop_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("SceneLabel"),
                          translation : new SFVec3f([1.3,3,0]),
                          children : new MFNode([
                            new Shape({
                              DEF : new SFString("SceneLabelText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["BoxMan3","Animation"]),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      family : new MFString(["SANS"]),
                                      justify : new MFString(["MIDDLE","MIDDLE"])}))}))})])})])})])})])}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_humanoid_root_TranslationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_humanoid_root_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_sacroiliac_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_subtalar_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_midtarsal_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_metatarsal_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_subtalar_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_midtarsal_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_metatarsal_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vl5_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vl4_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vl3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vl2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vl1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vt12_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vt11_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vt10_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vt9_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vt8_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vt7_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vt6_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vt5_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vt4_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vt3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vt2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vt1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vc7_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vc6_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vc5_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vc4_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vc3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vc2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_vc1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_skullbase_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_eyeball_joint_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_eyeball_joint_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_sternoclavicular_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_acromioclavicular_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_thumb1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_thumb2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_thumb3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_index0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_index1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_index2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_index3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_middle0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_middle1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_middle2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_middle3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_ring0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_ring1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_ring2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_ring3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_pinky0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_pinky1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_pinky2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_l_pinky3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_sternoclavicular_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_acromioclavicular_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_thumb1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_thumb2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_thumb3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_index0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_index1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_index2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_index3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_middle0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_middle1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_middle2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_middle3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_ring0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_ring1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_ring2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_ring3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_pinky0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_pinky1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_pinky2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StopTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stop_r_pinky3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_humanoid_root_TranslationInterpolator"),
              toField : new SFString("set_translation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_humanoid_root_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_l_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_l_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_l_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_l_midtarsal_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_midtarsal")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_r_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_r_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_r_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_r_midtarsal_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_midtarsal")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_vl5_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_vl5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_skullbase_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_skullbase")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_l_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_l_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_l_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_r_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_r_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stop_r_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_wrist")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_r_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_r_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_r_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_l_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_l_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_l_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_lower_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_r_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_r_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_r_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_l_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_l_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_l_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_head_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_neck_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_l_eyeball_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_r_eyeball_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_upper_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_whole_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_whole_body_TranslationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_l_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_l_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_r_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_r_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_r_metatarsal_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_sacroiliac_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_vl5_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_vc6_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_l_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_r_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_r_index1_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_r_index2_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("StandTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Stand_r_index3_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_r_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_r_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_r_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_l_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_l_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_l_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_r_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_r_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_r_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_l_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_l_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_l_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_head_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_skullbase")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_whole_body_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_whole_body_TranslationInterpolator"),
              toField : new SFString("set_translation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Stand_vl5_YawInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_vl5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_r_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_r_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_r_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_l_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_l_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_l_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_lower_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_r_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_r_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_r_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_l_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_l_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_l_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_head_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_neck_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_upper_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_whole_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitches_whole_body_TranslationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitch_l_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitch_l_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitch_r_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitch_r_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitch_r_metatarsal_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitch_sacroiliac_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitch_vl5_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitch_vc6_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitch_l_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("PitchTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Pitch_r_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitches_r_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitches_r_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitches_r_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitches_l_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitches_l_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitches_l_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitches_r_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitches_r_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitches_r_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitches_l_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitches_l_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitches_l_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitches_head_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_skullbase")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitches_whole_body_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitches_whole_body_TranslationInterpolator"),
              toField : new SFString("set_translation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Pitch_vl5_YawInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_vl5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_r_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_r_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_r_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_l_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_l_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_l_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_lower_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_r_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_r_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_r_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_l_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_l_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_l_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_head_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_neck_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_upper_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_whole_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaws_whole_body_TranslationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaw_l_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaw_l_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaw_r_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaw_r_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaw_r_metatarsal_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaw_sacroiliac_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaw_vl5_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaw_vc6_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaw_l_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("YawTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Yaw_r_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaws_r_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaws_r_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaws_r_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaws_l_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaws_l_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaws_l_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaws_r_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaws_r_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaws_r_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaws_l_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaws_l_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaws_l_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaws_head_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_skullbase")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaws_whole_body_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaws_whole_body_TranslationInterpolator"),
              toField : new SFString("set_translation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Yaw_vl5_YawInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_vl5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_r_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_r_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_r_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_l_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_l_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_l_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_lower_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_r_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_r_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_r_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_l_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_l_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_l_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_head_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_neck_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_upper_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_whole_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Rolls_whole_body_TranslationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Roll_l_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Roll_l_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Roll_r_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Roll_r_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Roll_r_metatarsal_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Roll_sacroiliac_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Roll_vl5_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Roll_vc6_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Roll_l_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RollTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Roll_r_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Rolls_r_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Rolls_r_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Rolls_r_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Rolls_l_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Rolls_l_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Rolls_l_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Rolls_r_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Rolls_r_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Rolls_r_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Rolls_l_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Rolls_l_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Rolls_l_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Rolls_head_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_skullbase")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Rolls_whole_body_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Rolls_whole_body_TranslationInterpolator"),
              toField : new SFString("set_translation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Roll_vl5_YawInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_vl5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_r_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_r_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_r_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_l_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_l_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_l_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_lower_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_r_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_r_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_r_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_l_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_l_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_l_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_head_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_neck_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_upper_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_whole_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_whole_body_TranslationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_l_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_l_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_r_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_r_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_r_metatarsal_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_sacroiliac_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_vl5_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_vc6_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_l_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("WalkTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Walk_r_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_r_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_r_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_r_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_l_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_l_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_l_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_r_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_r_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_r_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_l_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_l_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_l_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_head_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_skullbase")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_whole_body_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_whole_body_TranslationInterpolator"),
              toField : new SFString("set_translation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Walk_vl5_YawInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_vl5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_r_ankle_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_r_knee_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_r_hip_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_l_ankle_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_l_knee_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_l_hip_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_lower_body_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_r_wrist_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_r_elbow_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_r_shoulder_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_l_wrist_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_l_elbow_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_l_shoulder_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_head_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_neck_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_upper_body_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_whole_body_RotationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_whole_body_TranslationInterpolator_Run")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_l_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_l_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_r_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_r_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_r_metatarsal_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_sacroiliac_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_vl5_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_vc6_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_l_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("RunTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Run_r_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_r_ankle_RotationInterpolator_Run"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_r_knee_RotationInterpolator_Run"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_r_hip_RotationInterpolator_Run"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_l_ankle_RotationInterpolator_Run"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_l_knee_RotationInterpolator_Run"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_l_hip_RotationInterpolator_Run"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_r_wrist_RotationInterpolator_Run"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_r_elbow_RotationInterpolator_Run"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_r_shoulder_RotationInterpolator_Run"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_l_wrist_RotationInterpolator_Run"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_l_elbow_RotationInterpolator_Run"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_l_shoulder_RotationInterpolator_Run"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_head_RotationInterpolator_Run"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_skullbase")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_whole_body_RotationInterpolator_Run"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_whole_body_TranslationInterpolator_Run"),
              toField : new SFString("set_translation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Run_vl5_YawInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_vl5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_r_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_r_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_r_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_l_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_l_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_l_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_lower_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_r_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_r_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_r_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_l_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_l_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_l_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_head_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_neck_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_upper_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_whole_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_whole_body_TranslationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_l_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_l_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_r_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_r_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_r_metatarsal_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_sacroiliac_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_vl5_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_vc6_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_l_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("JumpTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Jump_r_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_r_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_r_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_r_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_l_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_l_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_l_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_r_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_r_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_r_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_l_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_l_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_l_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_head_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_skullbase")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_whole_body_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_whole_body_TranslationInterpolator"),
              toField : new SFString("set_translation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Jump_vl5_YawInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_vl5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_l_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_l_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_l_shoulder_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_l_ForeArm_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_l_wrist_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_l_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_r_sternoclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_r_acromioclavicular_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_r_shoulder_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_r_ForeArm_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_r_wrist_RollInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_r_thumb1_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_r_hip_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_r_knee_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_l_hip_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_l_knee_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_r_ankle_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_r_metatarsal_PitchInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_sacroiliac_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_vl5_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_vc6_YawInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_lower_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_upper_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_whole_body_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_whole_body_TranslationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Kick_neck_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Kick_l_shoulder_RollInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Kick_l_ForeArm_PitchInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Kick_l_wrist_RollInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Kick_r_shoulder_RollInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Kick_r_ForeArm_PitchInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Kick_r_wrist_RollInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Kick_r_hip_PitchInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Kick_r_knee_PitchInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Kick_r_ankle_PitchInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_r_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Kick_l_hip_PitchInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Kick_l_knee_PitchInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Kick_r_ankle_PitchInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_l_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Kick_vl5_YawInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_vl5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Kick_whole_body_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Kick_whole_body_TranslationInterpolator"),
              toField : new SFString("set_translation"),
              toNode : new SFString("boxman_humanoid_root")}),

            new ROUTE({
              fromField : new SFString("position_changed"),
              fromNode : new SFString("HudProx"),
              toField : new SFString("set_translation"),
              toNode : new SFString("HudXform")}),

            new ROUTE({
              fromField : new SFString("orientation_changed"),
              fromNode : new SFString("HudProx"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("HudXform")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stand_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("PitchTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stand_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("YawTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stand_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RollTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stand_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("WalkTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stand_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RunTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stand_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("JumpTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stand_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("KickTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stand_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StopTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stand_Touch"),
              toField : new SFString("set_startTime"),
              toNode : new SFString("StandTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Pitch_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StandTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Pitch_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("YawTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Pitch_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RollTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Pitch_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("WalkTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Pitch_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RunTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Pitch_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("JumpTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Pitch_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("KickTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Pitch_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StopTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Pitch_Touch"),
              toField : new SFString("set_startTime"),
              toNode : new SFString("PitchTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Yaw_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StandTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Yaw_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("PitchTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Yaw_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RollTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Yaw_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("WalkTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Yaw_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RunTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Yaw_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("JumpTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Yaw_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("KickTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Yaw_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StopTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Yaw_Touch"),
              toField : new SFString("set_startTime"),
              toNode : new SFString("YawTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Walk_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StandTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Walk_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("PitchTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Walk_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("YawTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Walk_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RollTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Walk_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RunTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Walk_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("JumpTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Walk_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("KickTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Walk_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StopTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Walk_Touch"),
              toField : new SFString("set_startTime"),
              toNode : new SFString("WalkTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Roll_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StandTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Roll_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("PitchTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Roll_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("YawTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Roll_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("WalkTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Roll_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RunTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Roll_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("JumpTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Roll_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("KickTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Roll_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StopTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Roll_Touch"),
              toField : new SFString("set_startTime"),
              toNode : new SFString("RollTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Run_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StandTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Run_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("PitchTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Run_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("YawTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Run_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RollTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Run_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("WalkTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Run_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("JumpTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Run_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("KickTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Run_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StopTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Run_Touch"),
              toField : new SFString("set_startTime"),
              toNode : new SFString("RunTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Jump_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StandTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Jump_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("PitchTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Jump_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("YawTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Jump_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RollTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Jump_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("WalkTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Jump_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RunTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Jump_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("KickTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Jump_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StopTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Jump_Touch"),
              toField : new SFString("set_startTime"),
              toNode : new SFString("JumpTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Kick_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StandTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Kick_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("PitchTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Kick_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("YawTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Kick_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RollTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Kick_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("WalkTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Kick_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RunTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Kick_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("JumpTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Kick_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StopTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Kick_Touch"),
              toField : new SFString("set_startTime"),
              toNode : new SFString("KickTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stop_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("StandTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stop_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("PitchTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stop_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("YawTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stop_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RollTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stop_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("WalkTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stop_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("RunTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stop_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("JumpTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stop_Touch"),
              toField : new SFString("set_stopTime"),
              toNode : new SFString("KickTimer")}),

            new ROUTE({
              fromField : new SFString("touchTime"),
              fromNode : new SFString("Stop_Touch"),
              toField : new SFString("set_startTime"),
              toNode : new SFString("StopTimer")})])}))});
console.log(X3D0.toXMLNode());
