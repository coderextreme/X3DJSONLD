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
var SFBool = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var SpotLight = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var PointLight = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var HAnimJoint = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var HAnimSegment = require('./x3d.mjs');
var HAnimSite = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var HAnimDisplacer = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var ScalarInterpolator = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("JoeSkinTexcoordDisplacerKick.x3d")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("Joe No Reservations 20200709 spec root and vc7 hier 20161206 ... 20121221 ... 20040109 x3d/hanim")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("This Joe model is a V1 LOA3 Humanoid with textured skin composed mainly of V1 Site locations.")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("15 January 2004")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("12 January 2017")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("27 January 2023")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Joe D Williams")}),

            new meta({
              name : new SFString("translators"),
              content : new SFString("Roy Walmsley and Don Brutzman")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("Transcoding from .vrml to .x3dv by Joe using BS studio circa 2012")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("translated from .x3dv to .xml for web3d archive")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("Record information relating a certain skin coordinate to a V1 Annex A Site name and location is now found in comment at end of this scene where each # number name string appears in the order of coordinate points in the skin mesh user code. Best organized to provide author data naming important HAnim humanoid skeletonspace to skinspace relations using structured MetadataSet containing MetadataString nodes")}),

            new meta({
              name : new SFString("info"),
              content : new SFString("modified to correct root and vc7 hierarchies")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeSkinTexcoordDisplacerKick.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("BS studio translation from .x3dv by Joe using BS Contact")}),

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
              info : new MFString(["X3D Humanoid V1 LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"]),
              title : new SFString("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe")}),

            new NavigationInfo({
              DEF : new SFString("Start_NavigationInfo"),
              headlight : new SFBool(false),
              speed : new SFFloat(2.5)}),

            new Background({
              DEF : new SFString("blue_Background")}),

            new SpotLight({
              DEF : new SFString("light1"),
              ambientIntensity : new SFFloat(0.7),
              beamWidth : new SFFloat(1.5),
              color : new SFColor([0.8,0.8,1]),
              cutOffAngle : new SFFloat(0.6),
              direction : new SFVec3f([0,0,0]),
              location : new SFVec3f([0,3,3]),
              radius : new SFFloat(10)}),

            new PointLight({
              DEF : new SFString("light2"),
              ambientIntensity : new SFFloat(0.7),
              color : new SFColor([0.8,0.8,1]),
              location : new SFVec3f([0,10,-7])}),
          /*External from the Humanoid viewpoints*/

            new Viewpoint({
              DEF : new SFString("Scene_InclinedView"),
              centerOfRotation : new SFVec3f([0,0.85,0]),
              description : new SFString("Scene_Inclined View"),
              orientation : new SFRotation([-0.113,0.993,0.0347,0.671]),
              position : new SFVec3f([1.62,1.05,3.06])}),

            new Viewpoint({
              DEF : new SFString("Scene_FrontView"),
              centerOfRotation : new SFVec3f([0,0.8,0]),
              description : new SFString("Scene Front View"),
              position : new SFVec3f([0,0.8,2.58])}),

            new Viewpoint({
              DEF : new SFString("Scene_SideView"),
              centerOfRotation : new SFVec3f([0,0.8,0]),
              description : new SFString("Scene Side View"),
              orientation : new SFRotation([0,1,0,1.5708]),
              position : new SFVec3f([2.6,0.5,0])}),

            new Viewpoint({
              DEF : new SFString("Scene_BackView"),
              centerOfRotation : new SFVec3f([0,1.5,0]),
              description : new SFString("Scene Back View"),
              orientation : new SFRotation([0,1,0,3.14]),
              position : new SFVec3f([0,2.5,-3])}),

            new Viewpoint({
              DEF : new SFString("Scene_TopView"),
              centerOfRotation : new SFVec3f([0,1.5,0]),
              description : new SFString("Scene Top View"),
              orientation : new SFRotation([1,0,0,-1.5708]),
              position : new SFVec3f([0,3.5,0])}),

            new Group({
              DEF : new SFString("Joe_Humanoid"),
              children : new MFNode([
                new HAnimHumanoid({
                  name : new SFString("Human"),
                  DEF : new SFString("Joe_Human"),
                  version : new SFString("2.0"),
                  joints : new MFNode([
                    new HAnimJoint({
                      name : new SFString("HumanoidRoot"),
                      DEF : new SFString("Joe_HumanoidRoot"),
                      center : new SFVec3f([0,0.875,0]),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0]),
                      metadata : new MFNode([
                        new MetadataSet({
                          name : new SFString("warnings"),
                          reference : new SFString("HAnim"),
                          /*TODO experimental*/
                          value : new SFNode(
                            new MetadataString({
                              name : new SFString("SymmetricalLeftRight"),
                              reference : new SFString("correction options: ignore, warn, average, left, right, largest, smallest"),
                              value : new MFString(["ignore"])}))}),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("sacrum"),
                          DEF : new SFString("Joe_sacrum"),
                          children : new MFNode([
                            new HAnimSite({
                              name : new SFString("RootFront_view"),
                              DEF : new SFString("Joe_RootFront_view"),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("hanimcordsys"),
                                  scale : new SFVec3f([0.175,0.175,0.175]),
                                  children : new MFNode([
                                    new Viewpoint({
                                      DEF : new SFString("ViewBodyRootAxes"),
                                      description : new SFString("Joe_HAnim Root HAnimSite Coordinate Axes View")}),

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
                                              color : new MFColor([1,0,0,0,0.6,0,0,0,1])}))}))})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("sacroiliac"),
                          DEF : new SFString("Joe_sacroiliac"),
                          center : new SFVec3f([0,0.92,0]),
                          skinCoordIndex : new MFInt32([17,19,20,21,22,23,26,27,73,82,89,91,93]),
                          skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimJoint({
                              name : new SFString("l_hip"),
                              DEF : new SFString("Joe_l_hip"),
                              center : new SFVec3f([0.1,0.92,0]),
                              skinCoordIndex : new MFInt32([89,90,94,95,96,97]),
                              skinCoordWeight : new MFFloat([0.65,1,1,1,1,1]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimJoint({
                                  name : new SFString("l_knee"),
                                  DEF : new SFString("Joe_l_knee"),
                                  center : new SFVec3f([0.115,0.466,0]),
                                  skinCoordIndex : new MFInt32([334,335,336,337,338,339,340,341]),
                                  skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimJoint({
                                      name : new SFString("l_ankle"),
                                      DEF : new SFString("Joe_l_ankle"),
                                      center : new SFVec3f([0.115,0.069,0]),
                                      skinCoordIndex : new MFInt32([342,343,344,345]),
                                      skinCoordWeight : new MFFloat([1,1,1,1]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimJoint({
                                          name : new SFString("l_subtalar"),
                                          DEF : new SFString("Joe_l_subtalar"),
                                          center : new SFVec3f([0.115,0.031,0.03]),
                                          skinCoordIndex : new MFInt32([346,347,348,71]),
                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              name : new SFString("l_midtarsal"),
                                              DEF : new SFString("Joe_l_midtarsal"),
                                              center : new SFVec3f([0.115,0.037,0.09]),
                                              skinCoordIndex : new MFInt32([349,350,351,352]),
                                              skinCoordWeight : new MFFloat([1,1,1,1]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsal"),
                                                  DEF : new SFString("Joe_l_metatarsal"),
                                                  center : new SFVec3f([0.115,0.02,0.122]),
                                                  skinCoordIndex : new MFInt32([353,354,355,356,357,358,359,360,361]),
                                                  skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0])})])})])})])})])})])}),

                            new HAnimJoint({
                              name : new SFString("r_hip"),
                              DEF : new SFString("Joe_r_hip"),
                              center : new SFVec3f([-0.1,0.92,0]),
                              skinCoordIndex : new MFInt32([91,92,98,99,100,101,362,363]),
                              skinCoordWeight : new MFFloat([0.65,1,0.8,1,1,1,0.4,0.8]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimJoint({
                                  name : new SFString("r_knee"),
                                  DEF : new SFString("Joe_r_knee"),
                                  center : new SFVec3f([-0.05,0.466,0]),
                                  skinCoordIndex : new MFInt32([362,363,364,365,366,367,368,369,98]),
                                  skinCoordWeight : new MFFloat([0.6,0.2,1,1,1,1,1,1,0.2]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimJoint({
                                      name : new SFString("r_ankle"),
                                      DEF : new SFString("Joe_r_ankle"),
                                      center : new SFVec3f([-0.115,0.069,0]),
                                      skinCoordIndex : new MFInt32([370,371,372,373]),
                                      skinCoordWeight : new MFFloat([1,1,1,1]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimJoint({
                                          name : new SFString("r_subtalar"),
                                          DEF : new SFString("Joe_r_subtalar"),
                                          center : new SFVec3f([-0.1,0.015,-0.01]),
                                          skinCoordIndex : new MFInt32([374,375,376]),
                                          skinCoordWeight : new MFFloat([1,1,1]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              name : new SFString("r_midtarsal"),
                                              DEF : new SFString("Joe_r_midtarsal"),
                                              center : new SFVec3f([-0.115,0.037,0.09]),
                                              skinCoordIndex : new MFInt32([377,378,379,380]),
                                              skinCoordWeight : new MFFloat([1,1,1,1]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsal"),
                                                  DEF : new SFString("Joe_r_metatarsal"),
                                                  center : new SFVec3f([-0.1,0.01,0.14]),
                                                  skinCoordIndex : new MFInt32([381,382,383,384,385,386,387,388,389]),
                                                  skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0])})])})])})])})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("vl5"),
                          DEF : new SFString("Joe_vl5"),
                          center : new SFVec3f([0,1.045,-0.095]),
                          skinCoordIndex : new MFInt32([28,76]),
                          skinCoordWeight : new MFFloat([1,1]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimJoint({
                              name : new SFString("vl4"),
                              DEF : new SFString("Joe_vl4"),
                              center : new SFVec3f([0,1.068,-0.085]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimJoint({
                                  name : new SFString("vl3"),
                                  DEF : new SFString("Joe_vl3"),
                                  center : new SFVec3f([0,1.092,-0.0725]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimJoint({
                                      name : new SFString("vl2"),
                                      DEF : new SFString("Joe_vl2"),
                                      center : new SFVec3f([0,1.12,-0.065]),
                                      skinCoordIndex : new MFInt32([16,18,25,83,84,85,86,87,88]),
                                      skinCoordWeight : new MFFloat([1,1,1,1,1,1,0.7,1,0.8]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimJoint({
                                          name : new SFString("vl1"),
                                          DEF : new SFString("Joe_vl1"),
                                          center : new SFVec3f([0,1.1459,-0.0625]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              name : new SFString("vt12"),
                                              DEF : new SFString("Joe_vt12"),
                                              center : new SFVec3f([0,1.179,-0.068]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("vt11"),
                                                  DEF : new SFString("Joe_vt11"),
                                                  center : new SFVec3f([0,1.2679,-0.081]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimJoint({
                                                      name : new SFString("vt10"),
                                                      DEF : new SFString("Joe_vt10"),
                                                      center : new SFVec3f([0,1.242,-0.09]),
                                                      skinCoordIndex : new MFInt32([15]),
                                                      skinCoordWeight : new MFFloat([1]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimJoint({
                                                          name : new SFString("vt9"),
                                                          DEF : new SFString("Joe_vt9"),
                                                          center : new SFVec3f([0,1.268,-0.1]),
                                                          skinCoordIndex : new MFInt32([13,14]),
                                                          skinCoordWeight : new MFFloat([1,1]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimJoint({
                                                              name : new SFString("vt8"),
                                                              DEF : new SFString("Joe_vt8"),
                                                              center : new SFVec3f([0,1.294,-0.11]),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimJoint({
                                                                  name : new SFString("vt7"),
                                                                  DEF : new SFString("Joe_vt7"),
                                                                  center : new SFVec3f([0,1.323,-0.1155]),
                                                                  ulimit : new MFFloat([0,0,0]),
                                                                  llimit : new MFFloat([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimJoint({
                                                                      name : new SFString("vt6"),
                                                                      DEF : new SFString("Joe_vt6"),
                                                                      center : new SFVec3f([0,1.352,-0.12]),
                                                                      ulimit : new MFFloat([0,0,0]),
                                                                      llimit : new MFFloat([0,0,0]),
                                                                      children : new MFNode([
                                                                        new HAnimJoint({
                                                                          name : new SFString("vt5"),
                                                                          DEF : new SFString("Joe_vt5"),
                                                                          center : new SFVec3f([0,1.381,-0.1235]),
                                                                          ulimit : new MFFloat([0,0,0]),
                                                                          llimit : new MFFloat([0,0,0]),
                                                                          children : new MFNode([
                                                                            new HAnimJoint({
                                                                              name : new SFString("vt4"),
                                                                              DEF : new SFString("Joe_vt4"),
                                                                              center : new SFVec3f([0,1.41,-0.1235]),
                                                                              skinCoordIndex : new MFInt32([81]),
                                                                              skinCoordWeight : new MFFloat([1]),
                                                                              ulimit : new MFFloat([0,0,0]),
                                                                              llimit : new MFFloat([0,0,0]),
                                                                              children : new MFNode([
                                                                                new HAnimJoint({
                                                                                  name : new SFString("vt3"),
                                                                                  DEF : new SFString("Joe_vt3"),
                                                                                  center : new SFVec3f([0,1.438,-0.12]),
                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                  children : new MFNode([
                                                                                    new HAnimJoint({
                                                                                      name : new SFString("vt2"),
                                                                                      DEF : new SFString("Joe_vt2"),
                                                                                      center : new SFVec3f([0,1.468,-0.105]),
                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                      children : new MFNode([
                                                                                        new HAnimJoint({
                                                                                          name : new SFString("vt1"),
                                                                                          DEF : new SFString("Joe_vt1"),
                                                                                          center : new SFVec3f([0,1.497,-0.09]),
                                                                                          skinCoordIndex : new MFInt32([11,24]),
                                                                                          skinCoordWeight : new MFFloat([1,1]),
                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                          children : new MFNode([
                                                                                            new HAnimJoint({
                                                                                              name : new SFString("vc7"),
                                                                                              DEF : new SFString("Joe_vc7"),
                                                                                              center : new SFVec3f([0,1.525,-0.072]),
                                                                                              skinCoordIndex : new MFInt32([74,75]),
                                                                                              skinCoordWeight : new MFFloat([1,1]),
                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("vc6"),
                                                                                                  DEF : new SFString("Joe_vc6"),
                                                                                                  center : new SFVec3f([0,1.54,-0.05]),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("vc5"),
                                                                                                      DEF : new SFString("Joe_vc5"),
                                                                                                      center : new SFVec3f([0,1.552,-0.035]),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("vc4"),
                                                                                                          DEF : new SFString("Joe_vc4"),
                                                                                                          center : new SFVec3f([0,1.5675,-0.0256]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("vc3"),
                                                                                                              DEF : new SFString("Joe_vc3"),
                                                                                                              center : new SFVec3f([0,1.58225,-0.0185]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("vc2"),
                                                                                                                  DEF : new SFString("Joe_vc2"),
                                                                                                                  center : new SFVec3f([0,1.595,-0.0175]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("vc1"),
                                                                                                                      DEF : new SFString("Joe_vc1"),
                                                                                                                      center : new SFVec3f([0,1.61,-0.015]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("skullbase"),
                                                                                                                          DEF : new SFString("Joe_skullbase"),
                                                                                                                          center : new SFVec3f([0,1.63,-0.01]),
                                                                                                                          skinCoordIndex : new MFInt32([0,1,2,3,4,5,6,7,8,9]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          displacers : new SFNode(
                                                                                                                            new HAnimDisplacer({
                                                                                                                              name : new SFString("skull_tip_raiser_action"),
                                                                                                                              DEF : new SFString("Joe_skull_tip_raiser_action"),
                                                                                                                              coordIndex : new MFInt32([0,1,2,3,4,5,6,7,8,9]),
                                                                                                                              displacements : new MFVec3f([0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15])})),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_eyelid_joint"),
                                                                                                                              DEF : new SFString("Joe_l_eyelid_joint"),
                                                                                                                              center : new SFVec3f([0.034,1.659,0.06]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_eyeball_joint"),
                                                                                                                              DEF : new SFString("Joe_l_eyeball_joint"),
                                                                                                                              center : new SFVec3f([0.034,1.659,0.06]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_eyebrow_joint"),
                                                                                                                              DEF : new SFString("Joe_l_eyebrow_joint"),
                                                                                                                              center : new SFVec3f([0.034,1.659,0.06]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_eyelid_joint"),
                                                                                                                              DEF : new SFString("Joe_r_eyelid_joint"),
                                                                                                                              center : new SFVec3f([-0.034,1.659,0.06]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_eyeball_joint"),
                                                                                                                              DEF : new SFString("Joe_r_eyeball_joint"),
                                                                                                                              center : new SFVec3f([-0.034,1.659,0.06]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_eyebrow_joint"),
                                                                                                                              DEF : new SFString("Joe_r_eyebrow_joint"),
                                                                                                                              center : new SFVec3f([-0.034,1.659,0.06]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("temporomandibular"),
                                                                                                                              DEF : new SFString("Joe_temporomandibular"),
                                                                                                                              center : new SFVec3f([0.034,1.659,0.06]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("l_sternoclavicular"),
                                                                                              DEF : new SFString("Joe_l_sternoclavicular"),
                                                                                              center : new SFVec3f([0.082,1.4488,-0.0353]),
                                                                                              skinCoordIndex : new MFInt32([12]),
                                                                                              skinCoordWeight : new MFFloat([1]),
                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("l_acromioclavicular"),
                                                                                                  DEF : new SFString("Joe_l_acromioclavicular"),
                                                                                                  center : new SFVec3f([0.0962,1.4269,-0.0424]),
                                                                                                  skinCoordIndex : new MFInt32([79]),
                                                                                                  skinCoordWeight : new MFFloat([1]),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("l_shoulder"),
                                                                                                      DEF : new SFString("Joe_l_shoulder"),
                                                                                                      center : new SFVec3f([0.2,1.44,-0.04]),
                                                                                                      skinCoordIndex : new MFInt32([41,42,44,80,102,103,104,105]),
                                                                                                      skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("l_elbow"),
                                                                                                          DEF : new SFString("Joe_l_elbow"),
                                                                                                          center : new SFVec3f([0.2,1.1388,-0.04]),
                                                                                                          skinCoordIndex : new MFInt32([45,46,47,109,110,111,112,113,115,116,117,118]),
                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_wrist"),
                                                                                                              DEF : new SFString("Joe_l_wrist"),
                                                                                                              center : new SFVec3f([0.2,0.87,-0.04]),
                                                                                                              skinCoordIndex : new MFInt32([119,120,121,122,123,124,125,126]),
                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_thumb1"),
                                                                                                                  DEF : new SFString("Joe_l_thumb1"),
                                                                                                                  center : new SFVec3f([0.1924,0.8472,-0.0534]),
                                                                                                                  skinCoordIndex : new MFInt32([127,128]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_thumb2"),
                                                                                                                      DEF : new SFString("Joe_l_thumb2"),
                                                                                                                      center : new SFVec3f([0.1951,0.8226,0.0246]),
                                                                                                                      skinCoordIndex : new MFInt32([138,139,140,141,142,143]),
                                                                                                                      skinCoordWeight : new MFFloat([0.5,0.5,0.5,1,1,1]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_thumb3"),
                                                                                                                          DEF : new SFString("Joe_l_thumb3"),
                                                                                                                          center : new SFVec3f([0.1955,0.8159,0.0464]),
                                                                                                                          skinCoordIndex : new MFInt32([144,145,146,147,148,149,150,151,152]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_index0"),
                                                                                                                  DEF : new SFString("Joe_l_index0"),
                                                                                                                  center : new SFVec3f([0.1983,0.8024,-0.028]),
                                                                                                                  skinCoordIndex : new MFInt32([129,130]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_index1"),
                                                                                                                      DEF : new SFString("Joe_l_index1"),
                                                                                                                      center : new SFVec3f([0.1983,0.7815,-0.028]),
                                                                                                                      skinCoordIndex : new MFInt32([138,139,140,153,154,155,163]),
                                                                                                                      skinCoordWeight : new MFFloat([0.5,0.5,0.5,1,1,1,0.5]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_index2"),
                                                                                                                          DEF : new SFString("Joe_l_index2"),
                                                                                                                          center : new SFVec3f([0.2017,0.7363,-0.0248]),
                                                                                                                          skinCoordIndex : new MFInt32([166,167,168,169]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_index3"),
                                                                                                                              DEF : new SFString("Joe_l_index3"),
                                                                                                                              center : new SFVec3f([0.2028,0.7139,-0.0236]),
                                                                                                                              skinCoordIndex : new MFInt32([170,171,172,173,174,175,176,177,178]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_middle0"),
                                                                                                                  DEF : new SFString("Joe_l_middle0"),
                                                                                                                  center : new SFVec3f([0.1987,0.8029,-0.053]),
                                                                                                                  skinCoordIndex : new MFInt32([131,132]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_middle1"),
                                                                                                                      DEF : new SFString("Joe_l_middle1"),
                                                                                                                      center : new SFVec3f([0.1987,0.7818,-0.053]),
                                                                                                                      skinCoordIndex : new MFInt32([156,157,163,164]),
                                                                                                                      skinCoordWeight : new MFFloat([1,1,0.5,0.5]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_middle2"),
                                                                                                                          DEF : new SFString("Joe_l_middle2"),
                                                                                                                          center : new SFVec3f([0.2013,0.7273,-0.0503]),
                                                                                                                          skinCoordIndex : new MFInt32([179,180,181,182]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_middle3"),
                                                                                                                              DEF : new SFString("Joe_l_middle3"),
                                                                                                                              center : new SFVec3f([0.2026,0.7011,-0.0494]),
                                                                                                                              skinCoordIndex : new MFInt32([183,184,185,186,187,188,189,190,191]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_ring0"),
                                                                                                                  DEF : new SFString("Joe_l_ring0"),
                                                                                                                  center : new SFVec3f([0.1956,0.8019,-0.0794]),
                                                                                                                  skinCoordIndex : new MFInt32([133,134]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_ring1"),
                                                                                                                      DEF : new SFString("Joe_l_ring1"),
                                                                                                                      center : new SFVec3f([0.1956,0.7815,-0.0794]),
                                                                                                                      skinCoordIndex : new MFInt32([158,159,164,165]),
                                                                                                                      skinCoordWeight : new MFFloat([1,1,0.5,0.5]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_ring2"),
                                                                                                                          DEF : new SFString("Joe_l_ring2"),
                                                                                                                          center : new SFVec3f([0.1973,0.7287,-0.0777]),
                                                                                                                          skinCoordIndex : new MFInt32([192,193,194,195]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_ring3"),
                                                                                                                              DEF : new SFString("Joe_l_ring3"),
                                                                                                                              center : new SFVec3f([0.1983,0.7045,-0.0767]),
                                                                                                                              skinCoordIndex : new MFInt32([196,197,198,199,200,201,202,203,204]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_pinky0"),
                                                                                                                  DEF : new SFString("Joe_l_pinky0"),
                                                                                                                  center : new SFVec3f([0.1925,0.8066,-0.1036]),
                                                                                                                  skinCoordIndex : new MFInt32([135,136,137,165]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1,1,0.5]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_pinky1"),
                                                                                                                      DEF : new SFString("Joe_l_pinky1"),
                                                                                                                      center : new SFVec3f([0.1925,0.7866,-0.1036]),
                                                                                                                      skinCoordIndex : new MFInt32([160,161,162]),
                                                                                                                      skinCoordWeight : new MFFloat([1,1,1]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_pinky2"),
                                                                                                                          DEF : new SFString("Joe_l_pinky2"),
                                                                                                                          center : new SFVec3f([0.1938,0.7452,-0.1024]),
                                                                                                                          skinCoordIndex : new MFInt32([205,206,207,208]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_pinky3"),
                                                                                                                              DEF : new SFString("Joe_l_pinky3"),
                                                                                                                              center : new SFVec3f([0.1948,0.7277,-0.1017]),
                                                                                                                              skinCoordIndex : new MFInt32([209,210,211,212,213,214,215,216,217]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("r_sternoclavicular"),
                                                                                              DEF : new SFString("Joe_r_sternoclavicular"),
                                                                                              center : new SFVec3f([-0.03,1.46,0]),
                                                                                              skinCoordIndex : new MFInt32([10]),
                                                                                              skinCoordWeight : new MFFloat([1]),
                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("r_acromioclavicular"),
                                                                                                  DEF : new SFString("Joe_r_acromioclavicular"),
                                                                                                  center : new SFVec3f([-0.09,1.41,-0.11]),
                                                                                                  skinCoordIndex : new MFInt32([77,29]),
                                                                                                  skinCoordWeight : new MFFloat([1,0.9]),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("r_shoulder"),
                                                                                                      DEF : new SFString("Joe_r_shoulder"),
                                                                                                      center : new SFVec3f([-0.2,1.44,-0.04]),
                                                                                                      skinCoordIndex : new MFInt32([29,30,32,78,218,219,220,221,86,88]),
                                                                                                      skinCoordWeight : new MFFloat([0.1,1,1,1,1,1,1,1,0.3,0.2]),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("r_elbow"),
                                                                                                          DEF : new SFString("Joe_r_elbow"),
                                                                                                          center : new SFVec3f([-0.2,1.1388,-0.04]),
                                                                                                          skinCoordIndex : new MFInt32([33,34,35,225,226,227,228,229,231,232,233,234]),
                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1,1,1,1]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_wrist"),
                                                                                                              DEF : new SFString("Joe_r_wrist"),
                                                                                                              center : new SFVec3f([-0.2,0.89,-0.04]),
                                                                                                              skinCoordIndex : new MFInt32([235,236,237,238,239,240,241,242]),
                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_thumb1"),
                                                                                                                  DEF : new SFString("Joe_r_thumb1"),
                                                                                                                  center : new SFVec3f([-0.2,0.85,0]),
                                                                                                                  skinCoordIndex : new MFInt32([243,244]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_thumb2"),
                                                                                                                      DEF : new SFString("Joe_r_thumb2"),
                                                                                                                      center : new SFVec3f([-0.2,0.82,0.03]),
                                                                                                                      skinCoordIndex : new MFInt32([254,255,256,257,258,259]),
                                                                                                                      skinCoordWeight : new MFFloat([0.5,0.5,0.5,1,1,1]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_thumb3"),
                                                                                                                          DEF : new SFString("Joe_r_thumb3"),
                                                                                                                          center : new SFVec3f([-0.2,0.8,0.05]),
                                                                                                                          skinCoordIndex : new MFInt32([260,261,262,263,264,265,266,267,268]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_index0"),
                                                                                                                  DEF : new SFString("Joe_r_index0"),
                                                                                                                  center : new SFVec3f([-0.2,0.84,-0.015]),
                                                                                                                  skinCoordIndex : new MFInt32([245,246]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_index1"),
                                                                                                                      DEF : new SFString("Joe_r_index1"),
                                                                                                                      center : new SFVec3f([-0.2,0.793,-0.015]),
                                                                                                                      skinCoordIndex : new MFInt32([254,255,256,269,270,271,279]),
                                                                                                                      skinCoordWeight : new MFFloat([0.5,0.5,0.5,1,1,1,0.5]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_index2"),
                                                                                                                          DEF : new SFString("Joe_r_index2"),
                                                                                                                          center : new SFVec3f([-0.2,0.745,-0.015]),
                                                                                                                          skinCoordIndex : new MFInt32([282,283,284,285]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_index3"),
                                                                                                                              DEF : new SFString("Joe_r_index3"),
                                                                                                                              center : new SFVec3f([-0.2,0.72,-0.015]),
                                                                                                                              skinCoordIndex : new MFInt32([286,287,288,289,290,291,292,293,294]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_middle0"),
                                                                                                                  DEF : new SFString("Joe_r_middle0"),
                                                                                                                  center : new SFVec3f([-0.2,0.835,-0.04]),
                                                                                                                  skinCoordIndex : new MFInt32([247,248]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_middle1"),
                                                                                                                      DEF : new SFString("Joe_r_middle1"),
                                                                                                                      center : new SFVec3f([-0.2,0.788,-0.04]),
                                                                                                                      skinCoordIndex : new MFInt32([272,273,279,280]),
                                                                                                                      skinCoordWeight : new MFFloat([1,1,0.5,0.5]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_middle2"),
                                                                                                                          DEF : new SFString("Joe_r_middle2"),
                                                                                                                          center : new SFVec3f([-0.2,0.74,-0.04]),
                                                                                                                          skinCoordIndex : new MFInt32([295,296,297,298]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_middle3"),
                                                                                                                              DEF : new SFString("Joe_r_middle3"),
                                                                                                                              center : new SFVec3f([-0.2,0.7142,-0.04]),
                                                                                                                              skinCoordIndex : new MFInt32([299,300,301,302,303,304,305,306,307]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_ring0"),
                                                                                                                  DEF : new SFString("Joe_r_ring0"),
                                                                                                                  center : new SFVec3f([-0.2,0.835,-0.065]),
                                                                                                                  skinCoordIndex : new MFInt32([249,250]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_ring1"),
                                                                                                                      DEF : new SFString("Joe_r_ring1"),
                                                                                                                      center : new SFVec3f([-0.2,0.793,-0.065]),
                                                                                                                      skinCoordIndex : new MFInt32([274,275,280,281]),
                                                                                                                      skinCoordWeight : new MFFloat([1,1,0.5,0.5]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_ring2"),
                                                                                                                          DEF : new SFString("Joe_r_ring2"),
                                                                                                                          center : new SFVec3f([-0.2,0.74,-0.065]),
                                                                                                                          skinCoordIndex : new MFInt32([308,309,310,311]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_ring3"),
                                                                                                                              DEF : new SFString("Joe_r_ring3"),
                                                                                                                              center : new SFVec3f([-0.2,0.7177,-0.065]),
                                                                                                                              skinCoordIndex : new MFInt32([312,313,314,315,316,317,318,319,320]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_pinky0"),
                                                                                                                  DEF : new SFString("Joe_r_pinky0"),
                                                                                                                  center : new SFVec3f([-0.2,0.84,-0.085]),
                                                                                                                  skinCoordIndex : new MFInt32([251,252,253,281]),
                                                                                                                  skinCoordWeight : new MFFloat([1,1,1,0.5]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_pinky1"),
                                                                                                                      DEF : new SFString("Joe_r_pinky1"),
                                                                                                                      center : new SFVec3f([-0.2,0.79,-0.085]),
                                                                                                                      skinCoordIndex : new MFInt32([276,277,278]),
                                                                                                                      skinCoordWeight : new MFFloat([1,1,1]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_pinky2"),
                                                                                                                          DEF : new SFString("Joe_r_pinky2"),
                                                                                                                          center : new SFVec3f([-0.2,0.755,-0.085]),
                                                                                                                          skinCoordIndex : new MFInt32([321,322,323,324]),
                                                                                                                          skinCoordWeight : new MFFloat([1,1,1,1]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_pinky3"),
                                                                                                                              DEF : new SFString("Joe_r_pinky3"),
                                                                                                                              center : new SFVec3f([-0.2,0.735,-0.09]),
                                                                                                                              skinCoordIndex : new MFInt32([325,326,327,328,329,330,331,332,333]),
                                                                                                                              skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])}),
                  skin : new SFNode(
                    new Shape({
                      DEF : new SFString("Joe_Shape"),
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("Joe_skin_Appearance"),
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("Joe_skin_Material"),
                              diffuseColor : new SFColor([0.3,0.3,0.6]),
                              emissiveColor : new SFColor([0.3,0.3,0.6])})),
                          texture : new SFNode(
                            new ImageTexture({
                              DEF : new SFString("JoeSkinImageTexture"),
                              url : new MFString(["JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/JoeBodyTexture29.png"])})),
                          textureTransform : new SFNode(
                            new TextureTransform({
                              DEF : new SFString("KickTextureTransform")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("Joe_skin_IndexedFaceSet"),
                          coordIndex : new MFInt32([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]),
                          creaseAngle : new SFFloat(3.14),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("Joe_SkinCoord"),
                              point : new MFVec3f([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.255,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168])})),
                          texCoord : new SFNode(
                            new TextureCoordinate({
                              point : new MFVec2f([0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5,0.5,0,0,0.5,0,0,0.5,0.5])}))}))})]),
                  skinCoord : new SFNode(
                    new Coordinate({
                      USE : new SFString("Joe_SkinCoord")})),

                    new HAnimJoint({
                      USE : new SFString("Joe_HumanoidRoot")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_sacroiliac")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vl5")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vl4")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vl3")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vl2")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vl1")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vt12")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vt11")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vt10")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vt9")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vt8")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vt7")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vt6")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vt5")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vt4")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vt3")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vt2")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vt1")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vc7")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vc6")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vc5")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vc4")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vc3")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vc2")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_vc1")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_skullbase")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_temporomandibular")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_acromioclavicular")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_acromioclavicular")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_ankle")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_ankle")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_elbow")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_elbow")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_eyeball_joint")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_eyeball_joint")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_eyebrow_joint")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_eyebrow_joint")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_eyelid_joint")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_eyelid_joint")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_hip")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_hip")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_index0")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_index0")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_index1")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_index1")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_index2")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_index2")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_index3")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_index3")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_knee")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_knee")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_metatarsal")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_metatarsal")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_middle0")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_middle0")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_middle1")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_middle1")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_middle2")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_middle2")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_middle3")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_middle3")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_midtarsal")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_midtarsal")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_pinky0")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_pinky0")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_pinky1")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_pinky1")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_pinky2")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_pinky2")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_pinky3")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_pinky3")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_ring0")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_ring0")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_ring1")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_ring1")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_ring2")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_ring2")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_ring3")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_ring3")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_shoulder")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_shoulder")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_sternoclavicular")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_sternoclavicular")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_subtalar")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_subtalar")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_thumb1")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_thumb1")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_thumb2")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_thumb2")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_thumb3")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_thumb3")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_l_wrist")}),

                    new HAnimJoint({
                      USE : new SFString("Joe_r_wrist")}),
                  segments : new MFNode([
                    new HAnimSegment({
                      USE : new SFString("Joe_sacrum")}),
                  viewpoints : new SFNode(
                    new HAnimSite({
                      USE : new SFString("Joe_RootFront_view")})])})])}),

            new Group({
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("KickTimer"),
                  cycleInterval : new SFTime(3.73),
                  loop : new SFBool(true)}),
              /*Interpolators*/

                new OrientationInterpolator({
                  DEF : new SFString("HumanoidRoot_RotationInterpolator"),
                  key : new MFFloat([0,0.1,0.4,0.6,1]),
                  keyValue : new MFRotation([1,0,0,0.5,1,0,0,0.5,-1,0,0,0.1,-1,0,0,0.5,-1,0,0,0.5])}),

                new PositionInterpolator({
                  DEF : new SFString("HumanoidRoot_TranslationInterpolator"),
                  key : new MFFloat([0,0.2,0.6,1]),
                  keyValue : new MFVec3f([1,0.3,-1,0.4,-0.04,-0.4,-0.18,0.1,0,-0.2,0.15,0.15])}),

                new OrientationInterpolator({
                  DEF : new SFString("sacroiliac_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.1,0.3,0.45,1]),
                  keyValue : new MFRotation([-1,0,0,1.5,-1,0,0,1,0,0,1,0,1,0,0,0.5,1,0,0,1])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.2,0.35,0.5,1]),
                  keyValue : new MFRotation([1,0,0,1,0,0,1,0,0,0,1,0.2,1,0,1,0.5,1,0,0,1.4])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.25,1]),
                  keyValue : new MFRotation([-1,0,0,1,0,0,1,0,1,0,0,1])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_subtalar_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_midtarsal_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_metatarsal_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([1,0,0,1,1,0,0,1,-1,0,0,1,-1,0,0,1,-1,0,0,1])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([1,0,0,0.1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,1.5])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([-1,0,0,1,0,0,1,0,1,0,0,1,1,0,0,1,1,0,0,0.5])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_subtalar_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_midtarsal_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_metatarsal_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vl5_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vl4_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vl3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vl2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vl1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vt12_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vt11_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vt10_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vt9_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vt8_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vt7_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vt6_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vt5_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vt4_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vt3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vt2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vt1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vc7_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vc6_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vc5_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vc4_RotationInterpolator"),
                  key : new MFFloat([0,0.3,0.4,1]),
                  keyValue : new MFRotation([1,0,1,0.25,-1,0,-1,0.35,1,0,0,0.75,1,0,1,0.5])}),

                new OrientationInterpolator({
                  DEF : new SFString("vc3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vc2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("vc1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("skullbase_RotationInterpolator"),
                  key : new MFFloat([0,0.2,0.75,1]),
                  keyValue : new MFRotation([0,-1,0,0.5,0,0,1,0,0,0,1,0,0,1,0,0.35])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_eyelid_joint_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_eyeball_joint_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_eyebrow_joint_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_eyelid_joint_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_eyeball_joint_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_eyebrow_joint_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("temporomandibular_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_sternoclavicular_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_acromioclavicular_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.4,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.5,-1,0,1,1.75])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.4,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,1,0,1.3,0,-0.5,1,1.3,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_thumb1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_thumb2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_thumb3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_index0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_index1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_index2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_index3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_middle0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_middle1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_middle2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_middle3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_ring0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_ring1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_ring2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_ring3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_pinky0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_pinky1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_pinky2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("l_pinky3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_sternoclavicular_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_acromioclavicular_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,-1,2.5,0,0,-1,1.5,0,0,-1,1.75])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([-1,0,0,3,-1,0,0,0.75,-1,-1,0,0.5])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.7,1]),
                  keyValue : new MFRotation([0,1,0,0.3,0,0,1,0,0,0,-1,1,0,-1,0,0.3])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_thumb1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_thumb2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_thumb3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_index0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_index1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_index2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_index3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_middle0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_middle1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_middle2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_middle3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_ring0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_ring1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_ring2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_ring3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_pinky0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_pinky1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_pinky2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("r_pinky3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,1.5,0,0,1,0])})])}),
          /*TimeSensor to Interpolators*/

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("HumanoidRoot_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("HumanoidRoot_TranslationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("sacroiliac_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_subtalar_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_midtarsal_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_metatarsal_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_hip_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_knee_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_ankle_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_subtalar_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_midtarsal_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_metatarsal_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vl5_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vl4_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vl3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vl2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vl1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vt12_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vt11_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vt10_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vt9_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vt8_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vt7_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vt6_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vt5_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vt4_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vt3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vt2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vt1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vc7_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vc6_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vc5_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vc4_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vc3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vc2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("vc1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("skullbase_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_eyelid_joint_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_eyeball_joint_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_eyebrow_joint_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_eyelid_joint_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_eyeball_joint_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_eyebrow_joint_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("temporomandibular_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_sternoclavicular_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_acromioclavicular_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_thumb1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_thumb2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_thumb3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_index0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_index1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_index2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_index3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_middle0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_middle1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_middle2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_middle3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_ring0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_ring1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_ring2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_ring3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_pinky0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_pinky1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_pinky2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("l_pinky3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_sternoclavicular_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_acromioclavicular_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_shoulder_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_elbow_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_wrist_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_thumb1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_thumb2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_thumb3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_index0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_index1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_index2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_index3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_middle0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_middle1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_middle2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_middle3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_ring0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_ring1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_ring2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_ring3_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_pinky0_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_pinky1_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_pinky2_RotationInterpolator")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("KickTimer"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("r_pinky3_RotationInterpolator")}),
          /*Routes from Interpolators to Joe_ model Joints*/

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("HumanoidRoot_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_HumanoidRoot")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("HumanoidRoot_TranslationInterpolator"),
              toField : new SFString("set_translation"),
              toNode : new SFString("Joe_HumanoidRoot")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("sacroiliac_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_sacroiliac")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_subtalar_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_subtalar")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_midtarsal_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_midtarsal")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_metatarsal_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_metatarsal")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_hip_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_hip")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_knee_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_knee")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_ankle_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_ankle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_subtalar_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_subtalar")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_midtarsal_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_midtarsal")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_metatarsal_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_metatarsal")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vl5_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vl5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vl4_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vl4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vl3_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vl3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vl2_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vl2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vl1_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vl1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vt12_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vt12")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vt11_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vt11")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vt10_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vt10")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vt9_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vt9")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vt8_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vt8")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vt7_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vt7")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vt6_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vt6")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vt5_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vt5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vt4_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vt4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vt3_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vt3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vt2_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vt2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vt1_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vt1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vc7_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vc7")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vc6_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vc6")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vc5_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vc5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vc4_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vc4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vc3_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vc3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vc2_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vc2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("vc1_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_vc1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("skullbase_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_skullbase")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_eyelid_joint_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_eyelid_joint")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_eyeball_joint_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_eyeball_joint")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_eyebrow_joint_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_eyebrow_joint")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_eyelid_joint_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_eyelid_joint")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_eyeball_joint_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_eyeball_joint")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_eyebrow_joint_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_eyebrow_joint")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("temporomandibular_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_temporomandibular")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_sternoclavicular_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_sternoclavicular")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_acromioclavicular_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_acromioclavicular")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_thumb1_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_thumb1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_thumb2_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_thumb2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_thumb3_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_thumb3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_index0_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_index0")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_index1_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_index1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_index2_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_index2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_index3_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_index3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_middle0_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_middle0")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_middle1_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_middle1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_middle2_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_middle2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_middle3_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_middle3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_ring0_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_ring0")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_ring1_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_ring1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_ring2_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_ring2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_ring3_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_ring3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_pinky0_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_pinky0")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_pinky1_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_pinky1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_pinky2_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_pinky2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("l_pinky3_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_l_pinky3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_sternoclavicular_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_sternoclavicular")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_acromioclavicular_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_acromioclavicular")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_shoulder_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_shoulder")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_elbow_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_elbow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_wrist_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_wrist")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_thumb1_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_thumb1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_thumb2_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_thumb2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_thumb3_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_thumb3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_index0_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_index0")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_index1_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_index1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_index2_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_index2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_index3_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_index3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_middle0_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_middle0")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_middle1_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_middle1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_middle2_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_middle2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_middle3_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_middle3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_ring0_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_ring0")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_ring1_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_ring1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_ring2_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_ring2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_ring3_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_ring3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_pinky0_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_pinky0")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_pinky1_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_pinky1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_pinky2_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_pinky2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("r_pinky3_RotationInterpolator"),
              toField : new SFString("set_rotation"),
              toNode : new SFString("Joe_r_pinky3")}),

            new Group({
              DEF : new SFString("DisplacersAnimationGroup"),
              /*TimeSensor DEF='skull_tipInterpolatorTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor*/
              children : new MFNode([
                new ScalarInterpolator({
                  DEF : new SFString("skull_tipInterpolator"),
                  key : new MFFloat([0,0.1,0.2,0.35,0.6,0.7,0.85,0.88,0.94,0.97,1]),
                  keyValue : new MFFloat([0,0,0,0,0.2,0.4,1,0,1,0.4,0])}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("skull_tipInterpolator")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("skull_tipInterpolator"),
                  toField : new SFString("weight"),
                  toNode : new SFString("Joe_skull_tip_raiser_action")})])}),

            new Group({
              DEF : new SFString("SkinTextureTransformAnimationGroup"),
              children : new MFNode([
                new ScalarInterpolator({
                  DEF : new SFString("SkinTextureTransformInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.7,0.8,1]),
                  keyValue : new MFFloat([0,0,0,0,0,1,2,0])}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("SkinTextureTransformInterpolator")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("SkinTextureTransformInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("KickTextureTransform")})])}),

            new Group({
              children : new MFNode([
                new Transform({
                  DEF : new SFString("SBall"),
                  rotation : new SFRotation([0.7,0,0.7,0.1]),
                  scale : new SFVec3f([0.23,0.23,0.23]),
                  translation : new SFVec3f([-0.916,0.37,-0.92]),
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("ball_Shape"),
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("ball_Appearance"),
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("ball_Material"),
                              diffuseColor : new SFColor([0.3,0.3,1]),
                              emissiveColor : new SFColor([0.3,0.3,0.33])})),
                          texture : new SFNode(
                            new ImageTexture({
                              USE : new SFString("JoeSkinImageTexture")}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          DEF : new SFString("ball_IndexedFaceSet"),
                          coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("Ball_Coordinates"),
                              point : new MFVec3f([0,0.4675,0,0,0.4049,-0.2338,-0.1169,0.4049,-0.2024,-0.2024,0.4049,-0.1169,-0.2338,0.4049,0,-0.2024,0.4049,0.1169,-0.1169,0.4049,0.2024,0,0.4049,0.2338,0.1169,0.4049,0.2024,0.2024,0.4049,0.1169,0.2338,0.4049,0,0.2024,0.4049,-0.1169,0.1169,0.4049,-0.2024,0,0.2338,-0.4049,-0.2024,0.2338,-0.3506,-0.3506,0.2338,-0.2024,-0.4049,0.2338,0,-0.3506,0.2338,0.2024,-0.2024,0.2338,0.3506,0,0.2338,0.4049,0.2024,0.2338,0.3506,0.3506,0.2338,0.2024,0.4049,0.2338,0,0.3506,0.2338,-0.2024,0.2024,0.2338,-0.3506,0,0,-0.4675,-0.2338,0,-0.4049,-0.4049,0,-0.2338,-0.4675,0,0,-0.4049,0,0.2338,-0.2338,0,0.4049,0,0,0.4675,0.2338,0,0.4049,0.4049,0,0.2338,0.4675,0,0,0.4049,0,-0.2338,0.2338,0,-0.4049,0,-0.2338,-0.4049,-0.2024,-0.2338,-0.3506,-0.3506,-0.2338,-0.2024,-0.4049,-0.2338,0,-0.3506,-0.2338,0.2024,-0.2024,-0.2338,0.3506,0,-0.2338,0.4049,0.2024,-0.2338,0.3506,0.3506,-0.2338,0.2024,0.4049,-0.2338,0,0.3506,-0.2338,-0.2024,0.2024,-0.2338,-0.3506,0,-0.4049,-0.2338,-0.1169,-0.4049,-0.2024,-0.2024,-0.4049,-0.1169,-0.2338,-0.4049,0,-0.2024,-0.4049,0.1169,-0.1169,-0.4049,0.2024,0,-0.4049,0.2338,0.1169,-0.4049,0.2024,0.2024,-0.4049,0.1169,0.2338,-0.4049,0,0.2024,-0.4049,-0.1169,0.1169,-0.4049,-0.2024,0,-0.4675,0])}))}))}),

                    new Viewpoint({
                      DEF : new SFString("ballView_1"),
                      description : new SFString("Ball View")})])}),
              /*Ball Animation interpolators*/

                new PositionInterpolator({
                  DEF : new SFString("ball_TranslationInterpolator"),
                  key : new MFFloat([0,0.4,0.409,1]),
                  keyValue : new MFVec3f([-1,0.4,-1,0,0.07,0,0.05,0.06,0.05,2,4,10])}),

                new OrientationInterpolator({
                  DEF : new SFString("ball_RotationInterpolator"),
                  key : new MFFloat([0,0.4,0.41,0.71,1]),
                  keyValue : new MFRotation([1,0,1,0.25,-1,0,-1,1.35,-1,1,-1,3.35,-1,0.2,-1,3,-1,0.2,-1,3])}),
              /*Ball Animation Routes*/

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("ball_TranslationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("ball_TranslationInterpolator"),
                  toField : new SFString("set_translation"),
                  toNode : new SFString("SBall")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("ball_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("ball_RotationInterpolator"),
                  toField : new SFString("set_rotation"),
                  toNode : new SFString("SBall")})])}),

            new Group({
              children : new MFNode([
                new Transform({
                  scale : new SFVec3f([0.2,0.2,0.2]),
                  children : new MFNode([
                    new Shape({
                      USE : new SFString("AxisLinesShape")})])}),

                new Transform({
                  DEF : new SFString("Circle0"),
                  scale : new SFVec3f([1.175,1,1.175]),
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("circle_Shape"),
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("circle0_Appearance"),
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("circle0_Material"),
                              ambientIntensity : new SFFloat(0.9),
                              diffuseColor : new SFColor([0.9,0,0.7]),
                              emissiveColor : new SFColor([0.425,0.486,1])}))})),
                      geometry : new SFNode(
                        new IndexedLineSet({
                          DEF : new SFString("Orbit1"),
                          coordIndex : new MFInt32([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              DEF : new SFString("circle_Coordinates"),
                              point : new MFVec3f([1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0])}))}))})])}),

                new Transform({
                  DEF : new SFString("Circle1"),
                  scale : new SFVec3f([0.5,1,0.5]),
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("circle1_Shape"),
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("circle1_Appearance"),
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("circle1_Material"),
                              diffuseColor : new SFColor([0.9,0,0.7]),
                              emissiveColor : new SFColor([0.424956,0.483976,1])}))})),
                      geometry : new SFNode(
                        new IndexedLineSet({
                          USE : new SFString("Orbit1")}))})])}),

                new Transform({
                  DEF : new SFString("Circle2"),
                  scale : new SFVec3f([0.25,1,0.25]),
                  children : new MFNode([
                    new Shape({
                      DEF : new SFString("circle2_Shape"),
                      appearance : new SFNode(
                        new Appearance({
                          DEF : new SFString("circle2_Appearance"),
                          material : new SFNode(
                            new Material({
                              DEF : new SFString("circle2_Material"),
                              diffuseColor : new SFColor([0.9,0,0.7]),
                              emissiveColor : new SFColor([0.424956,0.483976,1])}))})),
                      geometry : new SFNode(
                        new IndexedLineSet({
                          USE : new SFString("Orbit1")}))})])})])})])}))});
console.log(X3D0.toXMLNode());
