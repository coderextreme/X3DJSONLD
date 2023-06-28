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
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var SpotLight = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var PointLight = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var HAnimJoint = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
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
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var HAnimDisplacer = require('./x3d.mjs');
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
              content : new SFString("WinterAndSpringTest.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("May through September 2023")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("2 June 2023")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              info : new MFString(["X3D Humanoid LOA3 skeleton plus others","Lots points"]),
              title : new SFString("X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations")}),

            new NavigationInfo({
              DEF : new SFString("Start_NavigationInfo"),
              headlight : new SFBool(false)}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,1,0]),
              description : new SFString("Male"),
              position : new SFVec3f([0,1,-2])}),

            new Background({
              DEF : new SFString("gray_Background")}),

            new Background({
              DEF : new SFString("dark_gray_Background")}),

            new Background({
              DEF : new SFString("black_Background")}),

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
              DEF : new SFString("Scene_IFrontView"),
              centerOfRotation : new SFVec3f([0,0.8,0]),
              description : new SFString("Scene_Front View"),
              position : new SFVec3f([0,0.8,2.58])}),

            new Viewpoint({
              DEF : new SFString("Scene_OldMan_ISideView"),
              centerOfRotation : new SFVec3f([0,0.8,0]),
              description : new SFString("Scene_Side View"),
              orientation : new SFRotation([0,1,0,1.5708]),
              position : new SFVec3f([-2.6,1.5,1])}),

            new Viewpoint({
              DEF : new SFString("Scene_ISideView"),
              centerOfRotation : new SFVec3f([0,0.8,0]),
              description : new SFString("Scene_Side View"),
              orientation : new SFRotation([0,1,0,1.5708]),
              position : new SFVec3f([-5,1.5,1])}),

            new Viewpoint({
              DEF : new SFString("Scene_Full_ISideView"),
              centerOfRotation : new SFVec3f([0,0.8,0]),
              description : new SFString("Scene_Side View"),
              orientation : new SFRotation([0,1,0,1.5708]),
              position : new SFVec3f([-10,1.5,1])}),

            new Viewpoint({
              DEF : new SFString("Scene_OneBush_ISideView"),
              centerOfRotation : new SFVec3f([0,0.8,0]),
              description : new SFString("Scene_Side View"),
              orientation : new SFRotation([0,1,0,1.5708]),
              position : new SFVec3f([-20,1.5,1])}),

            new Viewpoint({
              DEF : new SFString("Scene_TwoBush_ISideView"),
              centerOfRotation : new SFVec3f([0,0.8,0]),
              description : new SFString("Scene_Side View"),
              orientation : new SFRotation([0,1,0,1.5708]),
              position : new SFVec3f([-10,1.5,1])}),

            new Viewpoint({
              DEF : new SFString("Scene_BackView"),
              centerOfRotation : new SFVec3f([0,1.5,0]),
              description : new SFString("Scene_Back View"),
              orientation : new SFRotation([0,1,0,3.14]),
              position : new SFVec3f([0,1.5,-5])}),

            new Viewpoint({
              DEF : new SFString("Scene_OldMan_BackView"),
              centerOfRotation : new SFVec3f([0,1.5,0]),
              description : new SFString("Scene_Back View"),
              orientation : new SFRotation([0,1,0,3.14]),
              position : new SFVec3f([0,1.5,-2.5])}),

            new Viewpoint({
              DEF : new SFString("Scene_Full_BackView"),
              centerOfRotation : new SFVec3f([0,1.5,0]),
              description : new SFString("Scene_Back View"),
              orientation : new SFRotation([0,1,15,3.14]),
              position : new SFVec3f([0,1.5,-20])}),

            new Viewpoint({
              DEF : new SFString("Scene_TopView"),
              centerOfRotation : new SFVec3f([0,1.5,0]),
              description : new SFString("Scene_Top View"),
              orientation : new SFRotation([1,0,0,-1.5708]),
              position : new SFVec3f([0,3.5,0])}),

            new Group({
              DEF : new SFString("OldMan_Humanoid"),
              children : new MFNode([
                new HAnimHumanoid({
                  name : new SFString("Walk"),
                  DEF : new SFString("OldMan"),
                  loa : new SFInt32(3),
                  version : new SFString("2.0"),
                  metadata : new MFNode([
                    new MetadataSet({
                      name : new SFString("warnings"),
                      reference : new SFString("HAnim"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("SymmetricalLeftRight"),
                          reference : new SFString("correction options: ignore, warn, average, left, right, largest, smallest"),
                          value : new MFString(["ignore"])}))}),
                  joints : new MFNode([
                    new HAnimJoint({
                      name : new SFString("humanoid_root"),
                      DEF : new SFString("OldMan_humanoid_root"),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0]),
                      /*TODO center='x 0.9155 z'*/
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("sacrum"),
                          DEF : new SFString("OldMan_sacrum"),
                          children : new MFNode([
                            new HAnimSite({
                              name : new SFString("RootBack_view"),
                              DEF : new SFString("OldMan_RootBack_view"),
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
                                              color : new MFColor([1,0,0,0,0.6,0,0,0,1])}))}))}),

                                    new Shape({
                                      DEF : new SFString("OldMan_Shape"),
                                      appearance : new SFNode(
                                        new Appearance({
                                          DEF : new SFString("OldMan_skin_Appearance"),
                                          material : new SFNode(
                                            new Material({
                                              DEF : new SFString("OldMan_skin_Material"),
                                              diffuseColor : new SFColor([0.3,0.3,0.6]),
                                              emissiveColor : new SFColor([0.3,0.3,0.6])})),
                                          texture : new SFNode(
                                            new ImageTexture({
                                              DEF : new SFString("OldManSkinImageTexture"),
                                              url : new MFString(["OldManBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"])})),
                                          textureTransform : new SFNode(
                                            new TextureTransform({
                                              DEF : new SFString("KickTextureTransform")}))})),
                                      geometry : new SFNode(
                                        new IndexedFaceSet({
                                          DEF : new SFString("OldMan_skin_IndexedFaceSet")}))})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("sacroiliac"),
                          DEF : new SFString("OldMan_sacroiliac"),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          /*TODO center='x 0.952 z'*/
                          /*High hip*/
                          children : new MFNode([
                            new HAnimJoint({
                              name : new SFString("l_hip"),
                              DEF : new SFString("OldMan_l_hip"),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              /*TODO center='x 0.879 z' Low hip*/
                              children : new MFNode([
                                new HAnimJoint({
                                  name : new SFString("l_knee"),
                                  DEF : new SFString("OldMan_l_knee"),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  /*center='x 0.461 z'*/
                                  children : new MFNode([
                                    new HAnimJoint({
                                      name : new SFString("l_talocrural"),
                                      DEF : new SFString("OldMan_l_talocrural"),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      /*Ankle*/
                                      children : new MFNode([
                                        new HAnimJoint({
                                          name : new SFString("l_tarsometatarsal_2"),
                                          DEF : new SFString("Joe_l_tarsometatarsal_2"),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              name : new SFString("l_metatarsophalangeal_2"),
                                              DEF : new SFString("Joe_l_metatarsophalangeal_2"),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("l_tarsal_distal_interphalangeal_2"),
                                                  DEF : new SFString("Joe_l_tarsal_distal_interphalangeal_2"),
                                                  center : new SFVec3f([0.115,0.02,0.122]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0])})])})])})])})])}),

                                new HAnimJoint({
                                  name : new SFString("l_hip"),
                                  DEF : new SFString("OldMan_r_hip"),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  /*Low hip*/
                                  children : new MFNode([
                                    new HAnimJoint({
                                      name : new SFString("l_knee"),
                                      DEF : new SFString("OldMan_r_knee"),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0])}),

                                    new HAnimJoint({
                                      name : new SFString("l_talocrural"),
                                      DEF : new SFString("OldMan_r_talocrural"),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      /*Ankle*/
                                      children : new MFNode([
                                        new HAnimJoint({
                                          name : new SFString("r_tarsometatarsal_2"),
                                          DEF : new SFString("Joe_r_tarsometatarsal_2"),
                                          center : new SFVec3f([-0.1,0.015,-0.01]),
                                          skinCoordIndex : new MFInt32([374,375,376]),
                                          skinCoordWeight : new MFFloat([1,1,1]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              name : new SFString("r_metatarsophalangeal_2"),
                                              DEF : new SFString("Joe_r_metatarsophalangeal_2"),
                                              center : new SFVec3f([-0.115,0.037,0.09]),
                                              skinCoordIndex : new MFInt32([377,378,379,380]),
                                              skinCoordWeight : new MFFloat([1,1,1,1]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("r_tarsal_distal_interphalangeal_2"),
                                                  DEF : new SFString("Joe_r_tarsal_distal_interphalangeal_2"),
                                                  center : new SFVec3f([-0.1,0.01,0.14]),
                                                  skinCoordIndex : new MFInt32([381,382,383,384,385,386,387,388,389]),
                                                  skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0])})])})])})])})])})])}),

                            new HAnimJoint({
                              name : new SFString("vl5"),
                              DEF : new SFString("OldMan_vl5"),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              /*Abdomen*/
                              children : new MFNode([
                                new HAnimJoint({
                                  name : new SFString("vl4"),
                                  DEF : new SFString("MeshName_vl4"),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimJoint({
                                      name : new SFString("vl3"),
                                      DEF : new SFString("OldMan_vl3"),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      /*center='x 1.098 z'*/
                                      /*Low=' ist='*/
                                      children : new MFNode([
                                        new HAnimJoint({
                                          name : new SFString("vl2"),
                                          DEF : new SFString("MeshName_vl2"),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              name : new SFString("vl1"),
                                              DEF : new SFString("OldMan_vl1"),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              /*center='x 1.171 z'*/
                                              /*High waist*/
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  name : new SFString("vt12"),
                                                  DEF : new SFString("MeshName_vt12"),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimJoint({
                                                      name : new SFString("vt11"),
                                                      DEF : new SFString("OldMan_vt11"),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      /*Ribcage='*/
                                                      children : new MFNode([
                                                        new HAnimJoint({
                                                          name : new SFString("vt10"),
                                                          DEF : new SFString("MeshName_vt10"),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimJoint({
                                                              name : new SFString("vt9"),
                                                              DEF : new SFString("MeshName_vt9"),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimJoint({
                                                                  name : new SFString("vt8"),
                                                                  DEF : new SFString("MeshName_vt8"),
                                                                  ulimit : new MFFloat([0,0,0]),
                                                                  llimit : new MFFloat([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimJoint({
                                                                      name : new SFString("vt7"),
                                                                      DEF : new SFString("OldMan_vt7"),
                                                                      ulimit : new MFFloat([0,0,0]),
                                                                      llimit : new MFFloat([0,0,0]),
                                                                      /*Sternum='*/
                                                                      children : new MFNode([
                                                                        new HAnimJoint({
                                                                          name : new SFString("vt6"),
                                                                          DEF : new SFString("MeshName_vt6"),
                                                                          ulimit : new MFFloat([0,0,0]),
                                                                          llimit : new MFFloat([0,0,0]),
                                                                          children : new MFNode([
                                                                            new HAnimJoint({
                                                                              name : new SFString("vt5"),
                                                                              DEF : new SFString("MeshName_vt5"),
                                                                              ulimit : new MFFloat([0,0,0]),
                                                                              llimit : new MFFloat([0,0,0]),
                                                                              children : new MFNode([
                                                                                new HAnimJoint({
                                                                                  name : new SFString("vt4"),
                                                                                  DEF : new SFString("OldMan_vt4"),
                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                  /*Chest*/
                                                                                  children : new MFNode([
                                                                                    new HAnimJoint({
                                                                                      name : new SFString("vt3"),
                                                                                      DEF : new SFString("MeshName_vt3"),
                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                      children : new MFNode([
                                                                                        new HAnimJoint({
                                                                                          name : new SFString("vt2"),
                                                                                          DEF : new SFString("OldMan_vt2"),
                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                          /*High Chest*/
                                                                                          children : new MFNode([
                                                                                            new HAnimJoint({
                                                                                              name : new SFString("vt1"),
                                                                                              DEF : new SFString("MeshName_vt1"),
                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("vc7"),
                                                                                                  DEF : new SFString("OldMan_vc7"),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  /*Low neck*/
                                                                                                  children : new MFNode([
                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("vc6"),
                                                                                                      DEF : new SFString("MeshName_vc6"),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("vc5"),
                                                                                                          DEF : new SFString("MeshName_vc5"),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("vc4"),
                                                                                                              DEF : new SFString("OldMan_vc4"),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              /*Mid=' ck='*/
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("vc3"),
                                                                                                                  DEF : new SFString("MeshName_vc3"),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("vc2"),
                                                                                                                      DEF : new SFString("MeshName_vc2"),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("vc1"),
                                                                                                                          DEF : new SFString("OldMan_vc1"),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          /*High=' ck='*/
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("skullbase"),
                                                                                                                              DEF : new SFString("OldMan_skullbase"),
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
                                                                                                                                  DEF : new SFString("OldMan_l_eyelid_joint"),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("l_eyeball_joint"),
                                                                                                                                  DEF : new SFString("OldMan_l_eyeball_joint"),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("l_eyebrow_joint"),
                                                                                                                                  DEF : new SFString("OldMan_l_eyebrow_joint"),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("r_eyelid_joint"),
                                                                                                                                  DEF : new SFString("OldMan_r_eyelid_joint"),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("r_eyeball_joint"),
                                                                                                                                  DEF : new SFString("OldMan_r_eyeball_joint"),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("r_eyebrow_joint"),
                                                                                                                                  DEF : new SFString("OldMan_r_eyebrow_joint"),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("temporomandibular"),
                                                                                                                                  DEF : new SFString("OldMan_temporomandibular"),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])})])}),

                                                                                                new HAnimJoint({
                                                                                                  DEF : new SFString("OldMan_l_acromioclavicular"),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("l_acromioclavicular"),
                                                                                                      DEF : new SFString("OldMan_l_sternoclavicular"),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("l_shoulder"),
                                                                                                          DEF : new SFString("OldMan_l_shoulder"),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_elbow"),
                                                                                                              DEF : new SFString("OldMan_l_elbow"),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_radiocarpal"),
                                                                                                                  DEF : new SFString("OldMan_l_radiocarpal"),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_carpometacarpal_1"),
                                                                                                                      DEF : new SFString("OldMan_l_carpometacarpal_1"),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_metacarpophalangeal_1"),
                                                                                                                          DEF : new SFString("OldMan_l_metacarpophalangeal_1"),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_interphalangeal_1"),
                                                                                                                              DEF : new SFString("OldMan_l_carpal_interphalangeal_1"),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpometacarpal_2"),
                                                                                                                          DEF : new SFString("OldMan_l_carpometacarpal_2"),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_metacarpophalangeal_2"),
                                                                                                                              DEF : new SFString("OldMan_l_metacarpophalangeal_2"),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("l_carpal_proximal_interphalangeal_2"),
                                                                                                                                  DEF : new SFString("OldMan_l_carpal_proximal_interphalangeal_2"),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimJoint({
                                                                                                                                      name : new SFString("l_carpal_distal_interphalangeal_2"),
                                                                                                                                      DEF : new SFString("OldMan_l_carpal_distal_interphalangeal_2"),
                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                      llimit : new MFFloat([0,0,0])})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpometacarpal_3"),
                                                                                                                              DEF : new SFString("OldMan_l_carpometacarpal_3"),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("l_metacarpophalangeal_3"),
                                                                                                                                  DEF : new SFString("OldMan_l_metacarpophalangeal_3"),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimJoint({
                                                                                                                                      name : new SFString("l_carpal_proximal_interphalangeal_3"),
                                                                                                                                      DEF : new SFString("OldMan_l_carpal_proximal_interphalangeal_3"),
                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimJoint({
                                                                                                                                          name : new SFString("l_carpal_distal_interphalangeal_3"),
                                                                                                                                          DEF : new SFString("OldMan_l_carpal_distal_interphalangeal_3"),
                                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                                          llimit : new MFFloat([0,0,0])})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("l_carpometacarpal_4"),
                                                                                                                                  DEF : new SFString("OldMan_l_carpometacarpal_4"),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimJoint({
                                                                                                                                      name : new SFString("l_metacarpophalangeal_4"),
                                                                                                                                      DEF : new SFString("OldMan_l_metacarpophalangeal_4"),
                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimJoint({
                                                                                                                                          name : new SFString("l_carpal_proximal_interphalangeal_4"),
                                                                                                                                          DEF : new SFString("OldMan_l_carpal_proximal_interphalangeal_4"),
                                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new HAnimJoint({
                                                                                                                                              name : new SFString("l_carpal_distal_interphalangeal_4"),
                                                                                                                                              DEF : new SFString("OldMan_l_carpal_distal_interphalangeal_4"),
                                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                                              llimit : new MFFloat([0,0,0])})])})])}),

                                                                                                                                    new HAnimJoint({
                                                                                                                                      name : new SFString("l_carpometacarpal_5"),
                                                                                                                                      DEF : new SFString("OldMan_l_carpometacarpal_5"),
                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimJoint({
                                                                                                                                          name : new SFString("l_metacarpophalangeal_5"),
                                                                                                                                          DEF : new SFString("OldMan_l_metacarpophalangeal_5"),
                                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new HAnimJoint({
                                                                                                                                              name : new SFString("l_carpal_proximal_interphalangeal_5"),
                                                                                                                                              DEF : new SFString("OldMan_l_carpal_proximal_interphalangeal_5"),
                                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                                              children : new MFNode([
                                                                                                                                                new HAnimJoint({
                                                                                                                                                  name : new SFString("l_carpal_distal_interphalangeal_5"),
                                                                                                                                                  DEF : new SFString("OldMan_l_carpal_distal_interphalangeal_5"),
                                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                                  llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_sternoclavicular"),
                                                                                                                      DEF : new SFString("OldMan_r_sternoclavicular"),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_acromioclavicular"),
                                                                                                                          DEF : new SFString("OldMan_r_acromioclavicular"),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_shoulder"),
                                                                                                                              DEF : new SFString("OldMan_r_shoulder"),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("r_elbow"),
                                                                                                                                  DEF : new SFString("OldMan_r_elbow"),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimJoint({
                                                                                                                                      name : new SFString("r_radiocarpal"),
                                                                                                                                      DEF : new SFString("OldMan_r_radiocarpal"),
                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimJoint({
                                                                                                                                          name : new SFString("r_carpometacarpal_1"),
                                                                                                                                          DEF : new SFString("OldMan_r_carpometacarpal_1"),
                                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new HAnimJoint({
                                                                                                                                              name : new SFString("r_metacarpophalangeal_1"),
                                                                                                                                              DEF : new SFString("OldMan_r_metacarpophalangeal_1"),
                                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                                              children : new MFNode([
                                                                                                                                                new HAnimJoint({
                                                                                                                                                  name : new SFString("r_carpal_interphalangeal_1"),
                                                                                                                                                  DEF : new SFString("OldMan_r_carpal_interphalangeal_1"),
                                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                                  llimit : new MFFloat([0,0,0])})])}),

                                                                                                                                            new HAnimJoint({
                                                                                                                                              name : new SFString("r_carpometacarpal_2"),
                                                                                                                                              DEF : new SFString("OldMan_r_carpometacarpal_2"),
                                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                                              children : new MFNode([
                                                                                                                                                new HAnimJoint({
                                                                                                                                                  name : new SFString("r_metacarpophalangeal_2"),
                                                                                                                                                  DEF : new SFString("OldMan_r_metacarpophalangeal_2"),
                                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                                  children : new MFNode([
                                                                                                                                                    new HAnimJoint({
                                                                                                                                                      name : new SFString("r_carpal_proximal_interphalangeal_2"),
                                                                                                                                                      DEF : new SFString("OldMan_r_carpal_proximal_interphalangeal_2"),
                                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                                                      children : new MFNode([
                                                                                                                                                        new HAnimJoint({
                                                                                                                                                          name : new SFString("r_carpal_distal_interphalangeal_2"),
                                                                                                                                                          DEF : new SFString("OldMan_r_carpal_distal_interphalangeal_2"),
                                                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                                                          llimit : new MFFloat([0,0,0])})])})])}),

                                                                                                                                                new HAnimJoint({
                                                                                                                                                  name : new SFString("r_carpometacarpal_3"),
                                                                                                                                                  DEF : new SFString("OldMan_r_carpometacarpal_3"),
                                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                                  children : new MFNode([
                                                                                                                                                    new HAnimJoint({
                                                                                                                                                      name : new SFString("r_metacarpophalangeal_3"),
                                                                                                                                                      DEF : new SFString("OldMan_r_metacarpophalangeal_3"),
                                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                                                      children : new MFNode([
                                                                                                                                                        new HAnimJoint({
                                                                                                                                                          name : new SFString("r_carpal_proximal_interphalangeal_3"),
                                                                                                                                                          DEF : new SFString("OldMan_r_carpal_proximal_interphalangeal_3"),
                                                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                                                          children : new MFNode([
                                                                                                                                                            new HAnimJoint({
                                                                                                                                                              name : new SFString("r_carpal_distal_interphalangeal_3"),
                                                                                                                                                              DEF : new SFString("OldMan_r_carpal_distal_interphalangeal_3"),
                                                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                                                              llimit : new MFFloat([0,0,0])})])})])}),

                                                                                                                                                    new HAnimJoint({
                                                                                                                                                      name : new SFString("r_carpometacarpal_4"),
                                                                                                                                                      DEF : new SFString("OldMan_r_carpometacarpal_4"),
                                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                                                      children : new MFNode([
                                                                                                                                                        new HAnimJoint({
                                                                                                                                                          name : new SFString("r_metacarpophalangeal_4"),
                                                                                                                                                          DEF : new SFString("OldMan_r_metacarpophalangeal_4"),
                                                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                                                          children : new MFNode([
                                                                                                                                                            new HAnimJoint({
                                                                                                                                                              name : new SFString("r_carpal_proximal_interphalangeal_4"),
                                                                                                                                                              DEF : new SFString("OldMan_r_carpal_proximal_interphalangeal_4"),
                                                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                                                              children : new MFNode([
                                                                                                                                                                new HAnimJoint({
                                                                                                                                                                  name : new SFString("r_carpal_distal_interphalangeal_4"),
                                                                                                                                                                  DEF : new SFString("OldMan_r_carpal_distal_interphalangeal_4"),
                                                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                                                  llimit : new MFFloat([0,0,0])})])})])}),

                                                                                                                                                        new HAnimJoint({
                                                                                                                                                          name : new SFString("r_carpometacarpal_5"),
                                                                                                                                                          DEF : new SFString("OldMan_r_carpometacarpal_5"),
                                                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                                                          children : new MFNode([
                                                                                                                                                            new HAnimJoint({
                                                                                                                                                              name : new SFString("r_metacarpophalangeal_5"),
                                                                                                                                                              DEF : new SFString("OldMan_r_metacarpophalangeal_5"),
                                                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                                                              children : new MFNode([
                                                                                                                                                                new HAnimJoint({
                                                                                                                                                                  name : new SFString("r_carpal_proximal_interphalangeal_5"),
                                                                                                                                                                  DEF : new SFString("OldMan_r_carpal_proximal_interphalangeal_5"),
                                                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                    new HAnimJoint({
                                                                                                                                                                      name : new SFString("r_carpal_distal_interphalangeal_5"),
                                                                                                                                                                      DEF : new SFString("OldMan_r_carpal_distal_interphalangeal_5"),
                                                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                                                      llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])}))});
console.log(X3D0.toXMLNode());
