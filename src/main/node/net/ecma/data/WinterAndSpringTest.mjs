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
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var SpotLight = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var PointLight = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var HAnimJoint = require('./x3d.mjs');
var HAnimSegment = require('./x3d.mjs');
var HAnimSite = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
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
              content : new SFString("1 May 2023")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 15 Sep 2025 05:21:02 GMT")}),

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
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations"),
              info : new MFString(["X3D Humanoid LOA3 skeleton plus others","Lots points"])}),

            new NavigationInfo({
              DEF : new SFString("Start_NavigationInfo")}),

            new Viewpoint({
              description : new SFString("Male"),
              position : new SFVec3f([0,1,-2]),
              centerOfRotation : new SFVec3f([0,1,0])}),

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
              color : new SFColor([0.8,0.8,1]),
              ambientIntensity : new SFFloat(0.7),
              location : new SFVec3f([0,3,3]),
              direction : new SFVec3f([0,0,0]),
              radius : new SFFloat(10),
              beamWidth : new SFFloat(1.5),
              cutOffAngle : new SFFloat(0.6)}),

            new PointLight({
              DEF : new SFString("light2"),
              color : new SFColor([0.8,0.8,1]),
              ambientIntensity : new SFFloat(0.7),
              location : new SFVec3f([0,10,-7])}),

            new Viewpoint({
              DEF : new SFString("Scene_InclinedView"),
              description : new SFString("Scene_Inclined View"),
              position : new SFVec3f([1.62,1.05,3.06]),
              orientation : new SFRotation([-0.113,0.993,0.0347,0.671]),
              centerOfRotation : new SFVec3f([0,0.85,0])}),

            new Viewpoint({
              DEF : new SFString("Scene_IFrontView"),
              description : new SFString("Scene_Front View"),
              position : new SFVec3f([0,0.8,2.58]),
              centerOfRotation : new SFVec3f([0,0.8,0])}),

            new Viewpoint({
              DEF : new SFString("Scene_OldMan_ISideView"),
              description : new SFString("Scene_Side View"),
              position : new SFVec3f([-2.6,1.5,1]),
              orientation : new SFRotation([0,1,0,1.5708]),
              centerOfRotation : new SFVec3f([0,0.8,0])}),

            new Viewpoint({
              DEF : new SFString("Scene_ISideView"),
              description : new SFString("Scene_Side View"),
              position : new SFVec3f([-5,1.5,1]),
              orientation : new SFRotation([0,1,0,1.5708]),
              centerOfRotation : new SFVec3f([0,0.8,0])}),

            new Viewpoint({
              DEF : new SFString("Scene_Full_ISideView"),
              description : new SFString("Scene_Side View"),
              position : new SFVec3f([-10,1.5,1]),
              orientation : new SFRotation([0,1,0,1.5708]),
              centerOfRotation : new SFVec3f([0,0.8,0])}),

            new Viewpoint({
              DEF : new SFString("Scene_OneBush_ISideView"),
              description : new SFString("Scene_Side View"),
              position : new SFVec3f([-20,1.5,1]),
              orientation : new SFRotation([0,1,0,1.5708]),
              centerOfRotation : new SFVec3f([0,0.8,0])}),

            new Viewpoint({
              DEF : new SFString("Scene_TwoBush_ISideView"),
              description : new SFString("Scene_Side View"),
              position : new SFVec3f([-10,1.5,1]),
              orientation : new SFRotation([0,1,0,1.5708]),
              centerOfRotation : new SFVec3f([0,0.8,0])}),

            new Viewpoint({
              DEF : new SFString("Scene_BackView"),
              description : new SFString("Scene_Back View"),
              position : new SFVec3f([0,1.5,-5]),
              orientation : new SFRotation([0,1,0,3.14]),
              centerOfRotation : new SFVec3f([0,1.5,0])}),

            new Viewpoint({
              DEF : new SFString("Scene_OldMan_BackView"),
              description : new SFString("Scene_Back View"),
              position : new SFVec3f([0,1.5,-2.5]),
              orientation : new SFRotation([0,1,0,3.14]),
              centerOfRotation : new SFVec3f([0,1.5,0])}),

            new Viewpoint({
              DEF : new SFString("Scene_Full_BackView"),
              description : new SFString("Scene_Back View"),
              position : new SFVec3f([0,1.5,-20]),
              orientation : new SFRotation([0,1,15,3.14]),
              centerOfRotation : new SFVec3f([0,1.5,0])}),

            new Viewpoint({
              DEF : new SFString("Scene_TopView"),
              description : new SFString("Scene_Top View"),
              position : new SFVec3f([0,3.5,0]),
              orientation : new SFRotation([1,0,0,-1.5708]),
              centerOfRotation : new SFVec3f([0,1.5,0])}),

            new Group({
              DEF : new SFString("OldMan_Humanoid"),
              children : new MFNode([
                new HAnimHumanoid({
                  DEF : new SFString("OldMan"),
                  name : new SFString("Walk"),
                  loa : new SFInt32(3),
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
                      DEF : new SFString("OldMan_humanoid_root"),
                      name : new SFString("humanoid_root"),
                      children : new MFNode([
                        new HAnimSegment({
                          DEF : new SFString("OldMan_sacrum"),
                          name : new SFString("sacrum"),
                          children : new MFNode([
                            new HAnimSite({
                              DEF : new SFString("OldMan_RootBack_view"),
                              name : new SFString("RootBack_view"),
                              children : new MFNode([
                                new Transform({
                                  DEF : new SFString("hanimcordsys"),
                                  scale : new SFVec3f([0.175,0.175,0.175]),
                                  children : new MFNode([
                                    new Viewpoint({
                                      DEF : new SFString("ViewBodyRootAxes"),
                                      description : new SFString("Joe_HAnim Root HAnimSite Coordinate Axes View")}),
                                  child : new SFNode(
                                    new Shape({
                                      DEF : new SFString("AxisLinesShape"),
                                      geometry : new SFNode(
                                        new IndexedLineSet({
                                          colorPerVertex : new SFBool(false),
                                          colorIndex : new MFInt32([0,1,2]),
                                          coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1]),
                                          color : new SFNode(
                                            new Color({
                                              color : new MFColor([1,0,0,0,0.6,0,0,0,1])})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0,0,1,0,0,0,1,0,0,0,1])}))}))})]),
                                  child : new SFNode(
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
                                          DEF : new SFString("OldMan_skin_IndexedFaceSet")}))}))})])})])}),

                        new HAnimJoint({
                          DEF : new SFString("OldMan_sacroiliac"),
                          name : new SFString("sacroiliac"),
                          children : new MFNode([
                            new HAnimJoint({
                              DEF : new SFString("OldMan_l_hip"),
                              name : new SFString("l_hip"),
                              children : new MFNode([
                                new HAnimJoint({
                                  DEF : new SFString("OldMan_l_knee"),
                                  name : new SFString("l_knee"),
                                  children : new MFNode([
                                    new HAnimJoint({
                                      DEF : new SFString("OldMan_l_talocrural"),
                                      name : new SFString("l_talocrural"),
                                      children : new MFNode([
                                        new HAnimJoint({
                                          DEF : new SFString("Joe_l_tarsometatarsal_2"),
                                          name : new SFString("l_tarsometatarsal_2"),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              DEF : new SFString("Joe_l_metatarsophalangeal_2"),
                                              name : new SFString("l_metatarsophalangeal_2"),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  DEF : new SFString("Joe_l_tarsal_distal_interphalangeal_2"),
                                                  name : new SFString("l_tarsal_distal_interphalangeal_2"),
                                                  center : new SFVec3f([0.115,0.02,0.122])})])})])})])})])}),

                                new HAnimJoint({
                                  DEF : new SFString("OldMan_r_hip"),
                                  name : new SFString("l_hip"),
                                  children : new MFNode([
                                    new HAnimJoint({
                                      DEF : new SFString("OldMan_r_knee"),
                                      name : new SFString("l_knee")}),

                                    new HAnimJoint({
                                      DEF : new SFString("OldMan_r_talocrural"),
                                      name : new SFString("l_talocrural"),
                                      children : new MFNode([
                                        new HAnimJoint({
                                          DEF : new SFString("Joe_r_tarsometatarsal_2"),
                                          name : new SFString("r_tarsometatarsal_2"),
                                          center : new SFVec3f([-0.1,0.015,-0.01]),
                                          skinCoordIndex : new MFInt32([374,375,376]),
                                          skinCoordWeight : new MFFloat([1,1,1]),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              DEF : new SFString("Joe_r_metatarsophalangeal_2"),
                                              name : new SFString("r_metatarsophalangeal_2"),
                                              center : new SFVec3f([-0.115,0.037,0.09]),
                                              skinCoordIndex : new MFInt32([377,378,379,380]),
                                              skinCoordWeight : new MFFloat([1,1,1,1]),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  DEF : new SFString("Joe_r_tarsal_distal_interphalangeal_2"),
                                                  name : new SFString("r_tarsal_distal_interphalangeal_2"),
                                                  center : new SFVec3f([-0.1,0.01,0.14]),
                                                  skinCoordIndex : new MFInt32([381,382,383,384,385,386,387,388,389]),
                                                  skinCoordWeight : new MFFloat([1,1,1,1,1,1,1,1,1])})])})])})])})])})])}),

                            new HAnimJoint({
                              DEF : new SFString("OldMan_vl5"),
                              name : new SFString("vl5"),
                              children : new MFNode([
                                new HAnimJoint({
                                  DEF : new SFString("MeshName_vl4"),
                                  name : new SFString("vl4"),
                                  children : new MFNode([
                                    new HAnimJoint({
                                      DEF : new SFString("OldMan_vl3"),
                                      name : new SFString("vl3"),
                                      children : new MFNode([
                                        new HAnimJoint({
                                          DEF : new SFString("MeshName_vl2"),
                                          name : new SFString("vl2"),
                                          children : new MFNode([
                                            new HAnimJoint({
                                              DEF : new SFString("OldMan_vl1"),
                                              name : new SFString("vl1"),
                                              children : new MFNode([
                                                new HAnimJoint({
                                                  DEF : new SFString("MeshName_vt12"),
                                                  name : new SFString("vt12"),
                                                  children : new MFNode([
                                                    new HAnimJoint({
                                                      DEF : new SFString("OldMan_vt11"),
                                                      name : new SFString("vt11"),
                                                      children : new MFNode([
                                                        new HAnimJoint({
                                                          DEF : new SFString("MeshName_vt10"),
                                                          name : new SFString("vt10"),
                                                          children : new MFNode([
                                                            new HAnimJoint({
                                                              DEF : new SFString("MeshName_vt9"),
                                                              name : new SFString("vt9"),
                                                              children : new MFNode([
                                                                new HAnimJoint({
                                                                  DEF : new SFString("MeshName_vt8"),
                                                                  name : new SFString("vt8"),
                                                                  children : new MFNode([
                                                                    new HAnimJoint({
                                                                      DEF : new SFString("OldMan_vt7"),
                                                                      name : new SFString("vt7"),
                                                                      children : new MFNode([
                                                                        new HAnimJoint({
                                                                          DEF : new SFString("MeshName_vt6"),
                                                                          name : new SFString("vt6"),
                                                                          children : new MFNode([
                                                                            new HAnimJoint({
                                                                              DEF : new SFString("MeshName_vt5"),
                                                                              name : new SFString("vt5"),
                                                                              children : new MFNode([
                                                                                new HAnimJoint({
                                                                                  DEF : new SFString("OldMan_vt4"),
                                                                                  name : new SFString("vt4"),
                                                                                  children : new MFNode([
                                                                                    new HAnimJoint({
                                                                                      DEF : new SFString("MeshName_vt3"),
                                                                                      name : new SFString("vt3"),
                                                                                      children : new MFNode([
                                                                                        new HAnimJoint({
                                                                                          DEF : new SFString("OldMan_vt2"),
                                                                                          name : new SFString("vt2"),
                                                                                          children : new MFNode([
                                                                                            new HAnimJoint({
                                                                                              DEF : new SFString("MeshName_vt1"),
                                                                                              name : new SFString("vt1"),
                                                                                              children : new MFNode([
                                                                                                new HAnimJoint({
                                                                                                  DEF : new SFString("OldMan_vc7"),
                                                                                                  name : new SFString("vc7"),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimJoint({
                                                                                                      DEF : new SFString("MeshName_vc6"),
                                                                                                      name : new SFString("vc6"),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimJoint({
                                                                                                          DEF : new SFString("MeshName_vc5"),
                                                                                                          name : new SFString("vc5"),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimJoint({
                                                                                                              DEF : new SFString("OldMan_vc4"),
                                                                                                              name : new SFString("vc4"),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  DEF : new SFString("MeshName_vc3"),
                                                                                                                  name : new SFString("vc3"),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      DEF : new SFString("MeshName_vc2"),
                                                                                                                      name : new SFString("vc2"),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("OldMan_vc1"),
                                                                                                                          name : new SFString("vc1"),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              DEF : new SFString("OldMan_skullbase"),
                                                                                                                              name : new SFString("skullbase"),
                                                                                                                              displacers : new SFNode(
                                                                                                                                new HAnimDisplacer({
                                                                                                                                  DEF : new SFString("Joe_skull_tip_raiser_action"),
                                                                                                                                  name : new SFString("skull_tip_raiser_action"),
                                                                                                                                  coordIndex : new MFInt32([0,1,2,3,4,5,6,7,8,9]),
                                                                                                                                  displacements : new MFVec3f([0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15])})),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimJoint({
                                                                                                                                  DEF : new SFString("OldMan_l_eyelid_joint"),
                                                                                                                                  name : new SFString("l_eyelid_joint")}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  DEF : new SFString("OldMan_l_eyeball_joint"),
                                                                                                                                  name : new SFString("l_eyeball_joint")}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  DEF : new SFString("OldMan_l_eyebrow_joint"),
                                                                                                                                  name : new SFString("l_eyebrow_joint")}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  DEF : new SFString("OldMan_r_eyelid_joint"),
                                                                                                                                  name : new SFString("r_eyelid_joint")}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  DEF : new SFString("OldMan_r_eyeball_joint"),
                                                                                                                                  name : new SFString("r_eyeball_joint")}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  DEF : new SFString("OldMan_r_eyebrow_joint"),
                                                                                                                                  name : new SFString("r_eyebrow_joint")}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  DEF : new SFString("OldMan_temporomandibular"),
                                                                                                                                  name : new SFString("temporomandibular")})])})])})])})])})])})])})])})])}),

                                                                                                new HAnimJoint({
                                                                                                  DEF : new SFString("OldMan_l_acromioclavicular"),
                                                                                                  name : new SFString("l_acromioclavicular"),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimJoint({
                                                                                                      DEF : new SFString("OldMan_l_sternoclavicular"),
                                                                                                      name : new SFString("l_sternoclavicular"),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimJoint({
                                                                                                          DEF : new SFString("OldMan_l_shoulder"),
                                                                                                          name : new SFString("l_shoulder"),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimJoint({
                                                                                                              DEF : new SFString("OldMan_l_elbow"),
                                                                                                              name : new SFString("l_elbow"),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimJoint({
                                                                                                                  DEF : new SFString("OldMan_l_radiocarpal"),
                                                                                                                  name : new SFString("l_radiocarpal"),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimJoint({
                                                                                                                      DEF : new SFString("OldMan_l_carpometacarpal_1"),
                                                                                                                      name : new SFString("l_carpometacarpal_1"),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("OldMan_l_metacarpophalangeal_1"),
                                                                                                                          name : new SFString("l_metacarpophalangeal_1"),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              DEF : new SFString("OldMan_l_carpal_interphalangeal_1"),
                                                                                                                              name : new SFString("l_carpal_interphalangeal_1")})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("OldMan_l_carpometacarpal_2"),
                                                                                                                          name : new SFString("l_carpometacarpal_2"),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              DEF : new SFString("OldMan_l_metacarpophalangeal_2"),
                                                                                                                              name : new SFString("l_metacarpophalangeal_2"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimJoint({
                                                                                                                                  DEF : new SFString("OldMan_l_carpal_proximal_interphalangeal_2"),
                                                                                                                                  name : new SFString("l_carpal_proximal_interphalangeal_2"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimJoint({
                                                                                                                                      DEF : new SFString("OldMan_l_carpal_distal_interphalangeal_2"),
                                                                                                                                      name : new SFString("l_carpal_distal_interphalangeal_2")})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              DEF : new SFString("OldMan_l_carpometacarpal_3"),
                                                                                                                              name : new SFString("l_carpometacarpal_3"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimJoint({
                                                                                                                                  DEF : new SFString("OldMan_l_metacarpophalangeal_3"),
                                                                                                                                  name : new SFString("l_metacarpophalangeal_3"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimJoint({
                                                                                                                                      DEF : new SFString("OldMan_l_carpal_proximal_interphalangeal_3"),
                                                                                                                                      name : new SFString("l_carpal_proximal_interphalangeal_3"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimJoint({
                                                                                                                                          DEF : new SFString("OldMan_l_carpal_distal_interphalangeal_3"),
                                                                                                                                          name : new SFString("l_carpal_distal_interphalangeal_3")})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  DEF : new SFString("OldMan_l_carpometacarpal_4"),
                                                                                                                                  name : new SFString("l_carpometacarpal_4"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimJoint({
                                                                                                                                      DEF : new SFString("OldMan_l_metacarpophalangeal_4"),
                                                                                                                                      name : new SFString("l_metacarpophalangeal_4"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimJoint({
                                                                                                                                          DEF : new SFString("OldMan_l_carpal_proximal_interphalangeal_4"),
                                                                                                                                          name : new SFString("l_carpal_proximal_interphalangeal_4"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new HAnimJoint({
                                                                                                                                              DEF : new SFString("OldMan_l_carpal_distal_interphalangeal_4"),
                                                                                                                                              name : new SFString("l_carpal_distal_interphalangeal_4")})])})])}),

                                                                                                                                    new HAnimJoint({
                                                                                                                                      DEF : new SFString("OldMan_l_carpometacarpal_5"),
                                                                                                                                      name : new SFString("l_carpometacarpal_5"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimJoint({
                                                                                                                                          DEF : new SFString("OldMan_l_metacarpophalangeal_5"),
                                                                                                                                          name : new SFString("l_metacarpophalangeal_5"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new HAnimJoint({
                                                                                                                                              DEF : new SFString("OldMan_l_carpal_proximal_interphalangeal_5"),
                                                                                                                                              name : new SFString("l_carpal_proximal_interphalangeal_5"),
                                                                                                                                              children : new MFNode([
                                                                                                                                                new HAnimJoint({
                                                                                                                                                  DEF : new SFString("OldMan_l_carpal_distal_interphalangeal_5"),
                                                                                                                                                  name : new SFString("l_carpal_distal_interphalangeal_5")})])})])})])})])})])})])})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      DEF : new SFString("OldMan_r_sternoclavicular"),
                                                                                                                      name : new SFString("r_sternoclavicular"),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("OldMan_r_acromioclavicular"),
                                                                                                                          name : new SFString("r_acromioclavicular"),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimJoint({
                                                                                                                              DEF : new SFString("OldMan_r_shoulder"),
                                                                                                                              name : new SFString("r_shoulder"),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimJoint({
                                                                                                                                  DEF : new SFString("OldMan_r_elbow"),
                                                                                                                                  name : new SFString("r_elbow"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimJoint({
                                                                                                                                      DEF : new SFString("OldMan_r_radiocarpal"),
                                                                                                                                      name : new SFString("r_radiocarpal"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimJoint({
                                                                                                                                          DEF : new SFString("OldMan_r_carpometacarpal_1"),
                                                                                                                                          name : new SFString("r_carpometacarpal_1"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new HAnimJoint({
                                                                                                                                              DEF : new SFString("OldMan_r_metacarpophalangeal_1"),
                                                                                                                                              name : new SFString("r_metacarpophalangeal_1"),
                                                                                                                                              children : new MFNode([
                                                                                                                                                new HAnimJoint({
                                                                                                                                                  DEF : new SFString("OldMan_r_carpal_interphalangeal_1"),
                                                                                                                                                  name : new SFString("r_carpal_interphalangeal_1")})])}),

                                                                                                                                            new HAnimJoint({
                                                                                                                                              DEF : new SFString("OldMan_r_carpometacarpal_2"),
                                                                                                                                              name : new SFString("r_carpometacarpal_2"),
                                                                                                                                              children : new MFNode([
                                                                                                                                                new HAnimJoint({
                                                                                                                                                  DEF : new SFString("OldMan_r_metacarpophalangeal_2"),
                                                                                                                                                  name : new SFString("r_metacarpophalangeal_2"),
                                                                                                                                                  children : new MFNode([
                                                                                                                                                    new HAnimJoint({
                                                                                                                                                      DEF : new SFString("OldMan_r_carpal_proximal_interphalangeal_2"),
                                                                                                                                                      name : new SFString("r_carpal_proximal_interphalangeal_2"),
                                                                                                                                                      children : new MFNode([
                                                                                                                                                        new HAnimJoint({
                                                                                                                                                          DEF : new SFString("OldMan_r_carpal_distal_interphalangeal_2"),
                                                                                                                                                          name : new SFString("r_carpal_distal_interphalangeal_2")})])})])}),

                                                                                                                                                new HAnimJoint({
                                                                                                                                                  DEF : new SFString("OldMan_r_carpometacarpal_3"),
                                                                                                                                                  name : new SFString("r_carpometacarpal_3"),
                                                                                                                                                  children : new MFNode([
                                                                                                                                                    new HAnimJoint({
                                                                                                                                                      DEF : new SFString("OldMan_r_metacarpophalangeal_3"),
                                                                                                                                                      name : new SFString("r_metacarpophalangeal_3"),
                                                                                                                                                      children : new MFNode([
                                                                                                                                                        new HAnimJoint({
                                                                                                                                                          DEF : new SFString("OldMan_r_carpal_proximal_interphalangeal_3"),
                                                                                                                                                          name : new SFString("r_carpal_proximal_interphalangeal_3"),
                                                                                                                                                          children : new MFNode([
                                                                                                                                                            new HAnimJoint({
                                                                                                                                                              DEF : new SFString("OldMan_r_carpal_distal_interphalangeal_3"),
                                                                                                                                                              name : new SFString("r_carpal_distal_interphalangeal_3")})])})])}),

                                                                                                                                                    new HAnimJoint({
                                                                                                                                                      DEF : new SFString("OldMan_r_carpometacarpal_4"),
                                                                                                                                                      name : new SFString("r_carpometacarpal_4"),
                                                                                                                                                      children : new MFNode([
                                                                                                                                                        new HAnimJoint({
                                                                                                                                                          DEF : new SFString("OldMan_r_metacarpophalangeal_4"),
                                                                                                                                                          name : new SFString("r_metacarpophalangeal_4"),
                                                                                                                                                          children : new MFNode([
                                                                                                                                                            new HAnimJoint({
                                                                                                                                                              DEF : new SFString("OldMan_r_carpal_proximal_interphalangeal_4"),
                                                                                                                                                              name : new SFString("r_carpal_proximal_interphalangeal_4"),
                                                                                                                                                              children : new MFNode([
                                                                                                                                                                new HAnimJoint({
                                                                                                                                                                  DEF : new SFString("OldMan_r_carpal_distal_interphalangeal_4"),
                                                                                                                                                                  name : new SFString("r_carpal_distal_interphalangeal_4")})])})])}),

                                                                                                                                                        new HAnimJoint({
                                                                                                                                                          DEF : new SFString("OldMan_r_carpometacarpal_5"),
                                                                                                                                                          name : new SFString("r_carpometacarpal_5"),
                                                                                                                                                          children : new MFNode([
                                                                                                                                                            new HAnimJoint({
                                                                                                                                                              DEF : new SFString("OldMan_r_metacarpophalangeal_5"),
                                                                                                                                                              name : new SFString("r_metacarpophalangeal_5"),
                                                                                                                                                              children : new MFNode([
                                                                                                                                                                new HAnimJoint({
                                                                                                                                                                  DEF : new SFString("OldMan_r_carpal_proximal_interphalangeal_5"),
                                                                                                                                                                  name : new SFString("r_carpal_proximal_interphalangeal_5"),
                                                                                                                                                                  children : new MFNode([
                                                                                                                                                                    new HAnimJoint({
                                                                                                                                                                      DEF : new SFString("OldMan_r_carpal_distal_interphalangeal_5"),
                                                                                                                                                                      name : new SFString("r_carpal_distal_interphalangeal_5")})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])}))});
console.log(X3D0.toXMLNode());
