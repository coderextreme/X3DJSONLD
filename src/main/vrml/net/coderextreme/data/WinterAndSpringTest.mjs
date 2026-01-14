const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "WinterAndSpringTest.x3d");
scene.addMetaData("description", "3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections.");
scene.addMetaData("creator", "Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman");
scene.addMetaData("created", "1 May 2023");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:21:02 GMT");
scene.addMetaData("reference", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d");
scene.addMetaData("reference", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d");
scene.addMetaData("reference", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d");
await browser .loadComponents (scene);
let WorldInfo13 = browser.currentScene.createNode("WorldInfo");
WorldInfo13.title = "X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations";
WorldInfo13.info = new X3D.MFString([new X3D.SFString("X3D Humanoid LOA3 skeleton plus others"), new X3D.SFString("Lots points")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo13;

let NavigationInfo14 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo14.DEF = "Start_NavigationInfo";
browser.currentScene.children[1] = NavigationInfo14;

let Viewpoint15 = browser.currentScene.createNode("Viewpoint");
Viewpoint15.description = "Male";
Viewpoint15.position = new X3D.SFVec3f([0,1,-2]);
Viewpoint15.centerOfRotation = new X3D.SFVec3f([0,1,0]);
browser.currentScene.children[2] = Viewpoint15;

let Background16 = browser.currentScene.createNode("Background");
Background16.DEF = "gray_Background";
browser.currentScene.children[3] = Background16;

let Background17 = browser.currentScene.createNode("Background");
Background17.DEF = "dark_gray_Background";
browser.currentScene.children[4] = Background17;

let Background18 = browser.currentScene.createNode("Background");
Background18.DEF = "black_Background";
browser.currentScene.children[5] = Background18;

let Background19 = browser.currentScene.createNode("Background");
Background19.DEF = "blue_Background";
browser.currentScene.children[6] = Background19;

let SpotLight20 = browser.currentScene.createNode("SpotLight");
SpotLight20.DEF = "light1";
SpotLight20.color = new X3D.SFColor([0.8,0.8,1]);
SpotLight20.ambientIntensity = 0.7;
SpotLight20.location = new X3D.SFVec3f([0,3,3]);
SpotLight20.direction = new X3D.SFVec3f([0,0,0]);
SpotLight20.radius = 10;
SpotLight20.beamWidth = 1.5;
SpotLight20.cutOffAngle = 0.6;
browser.currentScene.children[7] = SpotLight20;

let PointLight21 = browser.currentScene.createNode("PointLight");
PointLight21.DEF = "light2";
PointLight21.color = new X3D.SFColor([0.8,0.8,1]);
PointLight21.ambientIntensity = 0.7;
PointLight21.location = new X3D.SFVec3f([0,10,-7]);
browser.currentScene.children[8] = PointLight21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.DEF = "Scene_InclinedView";
Viewpoint22.description = "Scene_Inclined View";
Viewpoint22.position = new X3D.SFVec3f([1.62,1.05,3.06]);
Viewpoint22.orientation = new X3D.SFRotation([-0.113,0.993,0.0347,0.671]);
Viewpoint22.centerOfRotation = new X3D.SFVec3f([0,0.85,0]);
browser.currentScene.children[9] = Viewpoint22;

let Viewpoint23 = browser.currentScene.createNode("Viewpoint");
Viewpoint23.DEF = "Scene_IFrontView";
Viewpoint23.description = "Scene_Front View";
Viewpoint23.position = new X3D.SFVec3f([0,0.8,2.58]);
Viewpoint23.centerOfRotation = new X3D.SFVec3f([0,0.8,0]);
browser.currentScene.children[10] = Viewpoint23;

let Viewpoint24 = browser.currentScene.createNode("Viewpoint");
Viewpoint24.DEF = "Scene_OldMan_ISideView";
Viewpoint24.description = "Scene_Side View";
Viewpoint24.position = new X3D.SFVec3f([-2.6,1.5,1]);
Viewpoint24.orientation = new X3D.SFRotation([0,1,0,1.5708]);
Viewpoint24.centerOfRotation = new X3D.SFVec3f([0,0.8,0]);
browser.currentScene.children[11] = Viewpoint24;

let Viewpoint25 = browser.currentScene.createNode("Viewpoint");
Viewpoint25.DEF = "Scene_ISideView";
Viewpoint25.description = "Scene_Side View";
Viewpoint25.position = new X3D.SFVec3f([-5,1.5,1]);
Viewpoint25.orientation = new X3D.SFRotation([0,1,0,1.5708]);
Viewpoint25.centerOfRotation = new X3D.SFVec3f([0,0.8,0]);
browser.currentScene.children[12] = Viewpoint25;

let Viewpoint26 = browser.currentScene.createNode("Viewpoint");
Viewpoint26.DEF = "Scene_Full_ISideView";
Viewpoint26.description = "Scene_Side View";
Viewpoint26.position = new X3D.SFVec3f([-10,1.5,1]);
Viewpoint26.orientation = new X3D.SFRotation([0,1,0,1.5708]);
Viewpoint26.centerOfRotation = new X3D.SFVec3f([0,0.8,0]);
browser.currentScene.children[13] = Viewpoint26;

let Viewpoint27 = browser.currentScene.createNode("Viewpoint");
Viewpoint27.DEF = "Scene_OneBush_ISideView";
Viewpoint27.description = "Scene_Side View";
Viewpoint27.position = new X3D.SFVec3f([-20,1.5,1]);
Viewpoint27.orientation = new X3D.SFRotation([0,1,0,1.5708]);
Viewpoint27.centerOfRotation = new X3D.SFVec3f([0,0.8,0]);
browser.currentScene.children[14] = Viewpoint27;

let Viewpoint28 = browser.currentScene.createNode("Viewpoint");
Viewpoint28.DEF = "Scene_TwoBush_ISideView";
Viewpoint28.description = "Scene_Side View";
Viewpoint28.position = new X3D.SFVec3f([-10,1.5,1]);
Viewpoint28.orientation = new X3D.SFRotation([0,1,0,1.5708]);
Viewpoint28.centerOfRotation = new X3D.SFVec3f([0,0.8,0]);
browser.currentScene.children[15] = Viewpoint28;

let Viewpoint29 = browser.currentScene.createNode("Viewpoint");
Viewpoint29.DEF = "Scene_BackView";
Viewpoint29.description = "Scene_Back View";
Viewpoint29.position = new X3D.SFVec3f([0,1.5,-5]);
Viewpoint29.orientation = new X3D.SFRotation([0,1,0,3.14]);
Viewpoint29.centerOfRotation = new X3D.SFVec3f([0,1.5,0]);
browser.currentScene.children[16] = Viewpoint29;

let Viewpoint30 = browser.currentScene.createNode("Viewpoint");
Viewpoint30.DEF = "Scene_OldMan_BackView";
Viewpoint30.description = "Scene_Back View";
Viewpoint30.position = new X3D.SFVec3f([0,1.5,-2.5]);
Viewpoint30.orientation = new X3D.SFRotation([0,1,0,3.14]);
Viewpoint30.centerOfRotation = new X3D.SFVec3f([0,1.5,0]);
browser.currentScene.children[17] = Viewpoint30;

let Viewpoint31 = browser.currentScene.createNode("Viewpoint");
Viewpoint31.DEF = "Scene_Full_BackView";
Viewpoint31.description = "Scene_Back View";
Viewpoint31.position = new X3D.SFVec3f([0,1.5,-20]);
Viewpoint31.orientation = new X3D.SFRotation([0,1,15,3.14]);
Viewpoint31.centerOfRotation = new X3D.SFVec3f([0,1.5,0]);
browser.currentScene.children[18] = Viewpoint31;

let Viewpoint32 = browser.currentScene.createNode("Viewpoint");
Viewpoint32.DEF = "Scene_TopView";
Viewpoint32.description = "Scene_Top View";
Viewpoint32.position = new X3D.SFVec3f([0,3.5,0]);
Viewpoint32.orientation = new X3D.SFRotation([1,0,0,-1.5708]);
Viewpoint32.centerOfRotation = new X3D.SFVec3f([0,1.5,0]);
browser.currentScene.children[19] = Viewpoint32;

let Group33 = browser.currentScene.createNode("Group");
Group33.DEF = "OldMan_Humanoid";
let HAnimHumanoid34 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid34.DEF = "OldMan";
HAnimHumanoid34.name = "Walk";
HAnimHumanoid34.loa = 3;
let MetadataSet35 = browser.currentScene.createNode("MetadataSet");
MetadataSet35.name = "warnings";
MetadataSet35.reference = "HAnim";
let MetadataString36 = browser.currentScene.createNode("MetadataString");
MetadataString36.name = "SymmetricalLeftRight";
MetadataString36.reference = "correction options: ignore, warn, average, left, right, largest, smallest";
MetadataString36.value = new X3D.MFString([new X3D.SFString("ignore")]);
MetadataSet35.value = new X3D.MFNode();

MetadataSet35XXX.value[0] = MetadataString36;

HAnimHumanoid34.metadata = new X3D.SFNode();

HAnimHumanoid34XXX.metadata[0] = MetadataSet35;

let HAnimJoint37 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint37.DEF = "OldMan_humanoid_root";
HAnimJoint37.name = "humanoid_root";
let HAnimSegment38 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment38.DEF = "OldMan_sacrum";
HAnimSegment38.name = "sacrum";
let HAnimSite39 = browser.currentScene.createNode("HAnimSite");
HAnimSite39.DEF = "OldMan_RootBack_view";
HAnimSite39.name = "RootBack_view";
let Transform40 = browser.currentScene.createNode("Transform");
Transform40.DEF = "hanimcordsys";
Transform40.scale = new X3D.SFVec3f([0.175,0.175,0.175]);
let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.DEF = "ViewBodyRootAxes";
Viewpoint41.description = "Joe_HAnim Root HAnimSite Coordinate Axes View";
Transform40YYY.children = new X3D.MFNode();

Transform40ZZZ.children[0] = Viewpoint41;

let Shape42 = browser.currentScene.createNode("Shape");
Shape42.DEF = "AxisLinesShape";
let IndexedLineSet43 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet43.colorPerVertex = False;
IndexedLineSet43.colorIndex = new X3D.MFInt32([0,1,2]);
IndexedLineSet43.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Color44 = browser.currentScene.createNode("Color");
Color44.color = new X3D.MFColor([1,0,0,0,0.6,0,0,0,1]);
color = Color44;

let Coordinate45 = browser.currentScene.createNode("Coordinate");
Coordinate45.point = new X3D.MFVec3f([0,0,0,1,0,0,0,1,0,0,0,1]);
coord = Coordinate45;

geometry = IndexedLineSet43;

Transform40ZZZ.child[1] = Shape42;

let Shape46 = browser.currentScene.createNode("Shape");
Shape46.DEF = "OldMan_Shape";
let Appearance47 = browser.currentScene.createNode("Appearance");
Appearance47.DEF = "OldMan_skin_Appearance";
let Material48 = browser.currentScene.createNode("Material");
Material48.DEF = "OldMan_skin_Material";
Material48.diffuseColor = new X3D.SFColor([0.3,0.3,0.6]);
Material48.emissiveColor = new X3D.SFColor([0.3,0.3,0.6]);
material = Material48;

let ImageTexture49 = browser.currentScene.createNode("ImageTexture");
ImageTexture49.DEF = "OldManSkinImageTexture";
ImageTexture49.url = new X3D.MFString([new X3D.SFString("OldManBodyTexture29.png"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png")]);
texture = ImageTexture49;

let TextureTransform50 = browser.currentScene.createNode("TextureTransform");
TextureTransform50.DEF = "KickTextureTransform";
textureTransform = TextureTransform50;

appearance = Appearance47;

let IndexedFaceSet51 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet51.DEF = "OldMan_skin_IndexedFaceSet";
geometry = IndexedFaceSet51;

Transform40ZZZ.child[2] = Shape46;

HAnimSite39YYY.children = new X3D.MFNode();

HAnimSite39ZZZ.children[0] = Transform40;

HAnimSegment38YYY.children = new X3D.MFNode();

HAnimSegment38ZZZ.children[0] = HAnimSite39;

HAnimJoint37YYY.children = new X3D.MFNode();

HAnimJoint37ZZZ.children[0] = HAnimSegment38;

let HAnimJoint52 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint52.DEF = "OldMan_sacroiliac";
HAnimJoint52.name = "sacroiliac";
let HAnimJoint53 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint53.DEF = "OldMan_l_hip";
HAnimJoint53.name = "l_hip";
let HAnimJoint54 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint54.DEF = "OldMan_l_knee";
HAnimJoint54.name = "l_knee";
let HAnimJoint55 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint55.DEF = "OldMan_l_talocrural";
HAnimJoint55.name = "l_talocrural";
let HAnimJoint56 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint56.DEF = "Joe_l_tarsometatarsal_2";
HAnimJoint56.name = "l_tarsometatarsal_2";
let HAnimJoint57 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint57.DEF = "Joe_l_metatarsophalangeal_2";
HAnimJoint57.name = "l_metatarsophalangeal_2";
let HAnimJoint58 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint58.DEF = "Joe_l_tarsal_distal_interphalangeal_2";
HAnimJoint58.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint58.center = new X3D.SFVec3f([0.115,0.02,0.122]);
HAnimJoint57YYY.children = new X3D.MFNode();

HAnimJoint57ZZZ.children[0] = HAnimJoint58;

HAnimJoint56YYY.children = new X3D.MFNode();

HAnimJoint56ZZZ.children[0] = HAnimJoint57;

HAnimJoint55YYY.children = new X3D.MFNode();

HAnimJoint55ZZZ.children[0] = HAnimJoint56;

HAnimJoint54YYY.children = new X3D.MFNode();

HAnimJoint54ZZZ.children[0] = HAnimJoint55;

HAnimJoint53YYY.children = new X3D.MFNode();

HAnimJoint53ZZZ.children[0] = HAnimJoint54;

let HAnimJoint59 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint59.DEF = "OldMan_r_hip";
HAnimJoint59.name = "l_hip";
let HAnimJoint60 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint60.DEF = "OldMan_r_knee";
HAnimJoint60.name = "l_knee";
HAnimJoint59YYY.children = new X3D.MFNode();

HAnimJoint59ZZZ.children[0] = HAnimJoint60;

let HAnimJoint61 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint61.DEF = "OldMan_r_talocrural";
HAnimJoint61.name = "l_talocrural";
let HAnimJoint62 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint62.DEF = "Joe_r_tarsometatarsal_2";
HAnimJoint62.name = "r_tarsometatarsal_2";
HAnimJoint62.center = new X3D.SFVec3f([-0.1,0.015,-0.01]);
HAnimJoint62.skinCoordIndex = new X3D.MFInt32([374,375,376]);
HAnimJoint62.skinCoordWeight = new X3D.MFFloat([1,1,1]);
let HAnimJoint63 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint63.DEF = "Joe_r_metatarsophalangeal_2";
HAnimJoint63.name = "r_metatarsophalangeal_2";
HAnimJoint63.center = new X3D.SFVec3f([-0.115,0.037,0.09]);
HAnimJoint63.skinCoordIndex = new X3D.MFInt32([377,378,379,380]);
HAnimJoint63.skinCoordWeight = new X3D.MFFloat([1,1,1,1]);
let HAnimJoint64 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint64.DEF = "Joe_r_tarsal_distal_interphalangeal_2";
HAnimJoint64.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint64.center = new X3D.SFVec3f([-0.1,0.01,0.14]);
HAnimJoint64.skinCoordIndex = new X3D.MFInt32([381,382,383,384,385,386,387,388,389]);
HAnimJoint64.skinCoordWeight = new X3D.MFFloat([1,1,1,1,1,1,1,1,1]);
HAnimJoint63YYY.children = new X3D.MFNode();

HAnimJoint63ZZZ.children[0] = HAnimJoint64;

HAnimJoint62YYY.children = new X3D.MFNode();

HAnimJoint62ZZZ.children[0] = HAnimJoint63;

HAnimJoint61YYY.children = new X3D.MFNode();

HAnimJoint61ZZZ.children[0] = HAnimJoint62;

HAnimJoint59ZZZ.children[1] = HAnimJoint61;

HAnimJoint53ZZZ.children[1] = HAnimJoint59;

HAnimJoint52YYY.children = new X3D.MFNode();

HAnimJoint52ZZZ.children[0] = HAnimJoint53;

let HAnimJoint65 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint65.DEF = "OldMan_vl5";
HAnimJoint65.name = "vl5";
let HAnimJoint66 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint66.DEF = "MeshName_vl4";
HAnimJoint66.name = "vl4";
let HAnimJoint67 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint67.DEF = "OldMan_vl3";
HAnimJoint67.name = "vl3";
let HAnimJoint68 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint68.DEF = "MeshName_vl2";
HAnimJoint68.name = "vl2";
let HAnimJoint69 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint69.DEF = "OldMan_vl1";
HAnimJoint69.name = "vl1";
let HAnimJoint70 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint70.DEF = "MeshName_vt12";
HAnimJoint70.name = "vt12";
let HAnimJoint71 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint71.DEF = "OldMan_vt11";
HAnimJoint71.name = "vt11";
let HAnimJoint72 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint72.DEF = "MeshName_vt10";
HAnimJoint72.name = "vt10";
let HAnimJoint73 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint73.DEF = "MeshName_vt9";
HAnimJoint73.name = "vt9";
let HAnimJoint74 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint74.DEF = "MeshName_vt8";
HAnimJoint74.name = "vt8";
let HAnimJoint75 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint75.DEF = "OldMan_vt7";
HAnimJoint75.name = "vt7";
let HAnimJoint76 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint76.DEF = "MeshName_vt6";
HAnimJoint76.name = "vt6";
let HAnimJoint77 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint77.DEF = "MeshName_vt5";
HAnimJoint77.name = "vt5";
let HAnimJoint78 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint78.DEF = "OldMan_vt4";
HAnimJoint78.name = "vt4";
let HAnimJoint79 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint79.DEF = "MeshName_vt3";
HAnimJoint79.name = "vt3";
let HAnimJoint80 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint80.DEF = "OldMan_vt2";
HAnimJoint80.name = "vt2";
let HAnimJoint81 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint81.DEF = "MeshName_vt1";
HAnimJoint81.name = "vt1";
let HAnimJoint82 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint82.DEF = "OldMan_vc7";
HAnimJoint82.name = "vc7";
let HAnimJoint83 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint83.DEF = "MeshName_vc6";
HAnimJoint83.name = "vc6";
let HAnimJoint84 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint84.DEF = "MeshName_vc5";
HAnimJoint84.name = "vc5";
let HAnimJoint85 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint85.DEF = "OldMan_vc4";
HAnimJoint85.name = "vc4";
let HAnimJoint86 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint86.DEF = "MeshName_vc3";
HAnimJoint86.name = "vc3";
let HAnimJoint87 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint87.DEF = "MeshName_vc2";
HAnimJoint87.name = "vc2";
let HAnimJoint88 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint88.DEF = "OldMan_vc1";
HAnimJoint88.name = "vc1";
let HAnimJoint89 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint89.DEF = "OldMan_skullbase";
HAnimJoint89.name = "skullbase";
let HAnimDisplacer90 = browser.currentScene.createNode("HAnimDisplacer");
HAnimDisplacer90.DEF = "Joe_skull_tip_raiser_action";
HAnimDisplacer90.name = "skull_tip_raiser_action";
HAnimDisplacer90.coordIndex = new X3D.MFInt32([0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer90.displacements = new X3D.MFVec3f([0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15]);
HAnimJoint89YYY.displacers = new X3D.MFNode();

HAnimJoint89ZZZ.displacers[0] = HAnimDisplacer90;

let HAnimJoint91 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint91.DEF = "OldMan_l_eyelid_joint";
HAnimJoint91.name = "l_eyelid_joint";
HAnimJoint89ZZZ.children[1] = HAnimJoint91;

let HAnimJoint92 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint92.DEF = "OldMan_l_eyeball_joint";
HAnimJoint92.name = "l_eyeball_joint";
HAnimJoint89ZZZ.children[2] = HAnimJoint92;

let HAnimJoint93 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint93.DEF = "OldMan_l_eyebrow_joint";
HAnimJoint93.name = "l_eyebrow_joint";
HAnimJoint89ZZZ.children[3] = HAnimJoint93;

let HAnimJoint94 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint94.DEF = "OldMan_r_eyelid_joint";
HAnimJoint94.name = "r_eyelid_joint";
HAnimJoint89ZZZ.children[4] = HAnimJoint94;

let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.DEF = "OldMan_r_eyeball_joint";
HAnimJoint95.name = "r_eyeball_joint";
HAnimJoint89ZZZ.children[5] = HAnimJoint95;

let HAnimJoint96 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint96.DEF = "OldMan_r_eyebrow_joint";
HAnimJoint96.name = "r_eyebrow_joint";
HAnimJoint89ZZZ.children[6] = HAnimJoint96;

let HAnimJoint97 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint97.DEF = "OldMan_temporomandibular";
HAnimJoint97.name = "temporomandibular";
HAnimJoint89ZZZ.children[7] = HAnimJoint97;

HAnimJoint88YYY.children = new X3D.MFNode();

HAnimJoint88ZZZ.children[0] = HAnimJoint89;

HAnimJoint87YYY.children = new X3D.MFNode();

HAnimJoint87ZZZ.children[0] = HAnimJoint88;

HAnimJoint86YYY.children = new X3D.MFNode();

HAnimJoint86ZZZ.children[0] = HAnimJoint87;

HAnimJoint85YYY.children = new X3D.MFNode();

HAnimJoint85ZZZ.children[0] = HAnimJoint86;

HAnimJoint84YYY.children = new X3D.MFNode();

HAnimJoint84ZZZ.children[0] = HAnimJoint85;

HAnimJoint83YYY.children = new X3D.MFNode();

HAnimJoint83ZZZ.children[0] = HAnimJoint84;

HAnimJoint82YYY.children = new X3D.MFNode();

HAnimJoint82ZZZ.children[0] = HAnimJoint83;

HAnimJoint81YYY.children = new X3D.MFNode();

HAnimJoint81ZZZ.children[0] = HAnimJoint82;

let HAnimJoint98 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint98.DEF = "OldMan_l_acromioclavicular";
HAnimJoint98.name = "l_acromioclavicular";
let HAnimJoint99 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint99.DEF = "OldMan_l_sternoclavicular";
HAnimJoint99.name = "l_sternoclavicular";
let HAnimJoint100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint100.DEF = "OldMan_l_shoulder";
HAnimJoint100.name = "l_shoulder";
let HAnimJoint101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint101.DEF = "OldMan_l_elbow";
HAnimJoint101.name = "l_elbow";
let HAnimJoint102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint102.DEF = "OldMan_l_radiocarpal";
HAnimJoint102.name = "l_radiocarpal";
let HAnimJoint103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint103.DEF = "OldMan_l_carpometacarpal_1";
HAnimJoint103.name = "l_carpometacarpal_1";
let HAnimJoint104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint104.DEF = "OldMan_l_metacarpophalangeal_1";
HAnimJoint104.name = "l_metacarpophalangeal_1";
let HAnimJoint105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint105.DEF = "OldMan_l_carpal_interphalangeal_1";
HAnimJoint105.name = "l_carpal_interphalangeal_1";
HAnimJoint104YYY.children = new X3D.MFNode();

HAnimJoint104ZZZ.children[0] = HAnimJoint105;

HAnimJoint103YYY.children = new X3D.MFNode();

HAnimJoint103ZZZ.children[0] = HAnimJoint104;

let HAnimJoint106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint106.DEF = "OldMan_l_carpometacarpal_2";
HAnimJoint106.name = "l_carpometacarpal_2";
let HAnimJoint107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint107.DEF = "OldMan_l_metacarpophalangeal_2";
HAnimJoint107.name = "l_metacarpophalangeal_2";
let HAnimJoint108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint108.DEF = "OldMan_l_carpal_proximal_interphalangeal_2";
HAnimJoint108.name = "l_carpal_proximal_interphalangeal_2";
let HAnimJoint109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint109.DEF = "OldMan_l_carpal_distal_interphalangeal_2";
HAnimJoint109.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint108YYY.children = new X3D.MFNode();

HAnimJoint108ZZZ.children[0] = HAnimJoint109;

HAnimJoint107YYY.children = new X3D.MFNode();

HAnimJoint107ZZZ.children[0] = HAnimJoint108;

HAnimJoint106YYY.children = new X3D.MFNode();

HAnimJoint106ZZZ.children[0] = HAnimJoint107;

let HAnimJoint110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint110.DEF = "OldMan_l_carpometacarpal_3";
HAnimJoint110.name = "l_carpometacarpal_3";
let HAnimJoint111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint111.DEF = "OldMan_l_metacarpophalangeal_3";
HAnimJoint111.name = "l_metacarpophalangeal_3";
let HAnimJoint112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint112.DEF = "OldMan_l_carpal_proximal_interphalangeal_3";
HAnimJoint112.name = "l_carpal_proximal_interphalangeal_3";
let HAnimJoint113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint113.DEF = "OldMan_l_carpal_distal_interphalangeal_3";
HAnimJoint113.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint112YYY.children = new X3D.MFNode();

HAnimJoint112ZZZ.children[0] = HAnimJoint113;

HAnimJoint111YYY.children = new X3D.MFNode();

HAnimJoint111ZZZ.children[0] = HAnimJoint112;

HAnimJoint110YYY.children = new X3D.MFNode();

HAnimJoint110ZZZ.children[0] = HAnimJoint111;

let HAnimJoint114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint114.DEF = "OldMan_l_carpometacarpal_4";
HAnimJoint114.name = "l_carpometacarpal_4";
let HAnimJoint115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint115.DEF = "OldMan_l_metacarpophalangeal_4";
HAnimJoint115.name = "l_metacarpophalangeal_4";
let HAnimJoint116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint116.DEF = "OldMan_l_carpal_proximal_interphalangeal_4";
HAnimJoint116.name = "l_carpal_proximal_interphalangeal_4";
let HAnimJoint117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint117.DEF = "OldMan_l_carpal_distal_interphalangeal_4";
HAnimJoint117.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint116YYY.children = new X3D.MFNode();

HAnimJoint116ZZZ.children[0] = HAnimJoint117;

HAnimJoint115YYY.children = new X3D.MFNode();

HAnimJoint115ZZZ.children[0] = HAnimJoint116;

HAnimJoint114YYY.children = new X3D.MFNode();

HAnimJoint114ZZZ.children[0] = HAnimJoint115;

let HAnimJoint118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint118.DEF = "OldMan_l_carpometacarpal_5";
HAnimJoint118.name = "l_carpometacarpal_5";
let HAnimJoint119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint119.DEF = "OldMan_l_metacarpophalangeal_5";
HAnimJoint119.name = "l_metacarpophalangeal_5";
let HAnimJoint120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint120.DEF = "OldMan_l_carpal_proximal_interphalangeal_5";
HAnimJoint120.name = "l_carpal_proximal_interphalangeal_5";
let HAnimJoint121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint121.DEF = "OldMan_l_carpal_distal_interphalangeal_5";
HAnimJoint121.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint120YYY.children = new X3D.MFNode();

HAnimJoint120ZZZ.children[0] = HAnimJoint121;

HAnimJoint119YYY.children = new X3D.MFNode();

HAnimJoint119ZZZ.children[0] = HAnimJoint120;

HAnimJoint118YYY.children = new X3D.MFNode();

HAnimJoint118ZZZ.children[0] = HAnimJoint119;

HAnimJoint114ZZZ.children[1] = HAnimJoint118;

HAnimJoint110ZZZ.children[1] = HAnimJoint114;

HAnimJoint106ZZZ.children[1] = HAnimJoint110;

HAnimJoint103ZZZ.children[1] = HAnimJoint106;

HAnimJoint102YYY.children = new X3D.MFNode();

HAnimJoint102ZZZ.children[0] = HAnimJoint103;

let HAnimJoint122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint122.DEF = "OldMan_r_sternoclavicular";
HAnimJoint122.name = "r_sternoclavicular";
let HAnimJoint123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint123.DEF = "OldMan_r_acromioclavicular";
HAnimJoint123.name = "r_acromioclavicular";
let HAnimJoint124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint124.DEF = "OldMan_r_shoulder";
HAnimJoint124.name = "r_shoulder";
let HAnimJoint125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint125.DEF = "OldMan_r_elbow";
HAnimJoint125.name = "r_elbow";
let HAnimJoint126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint126.DEF = "OldMan_r_radiocarpal";
HAnimJoint126.name = "r_radiocarpal";
let HAnimJoint127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint127.DEF = "OldMan_r_carpometacarpal_1";
HAnimJoint127.name = "r_carpometacarpal_1";
let HAnimJoint128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint128.DEF = "OldMan_r_metacarpophalangeal_1";
HAnimJoint128.name = "r_metacarpophalangeal_1";
let HAnimJoint129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint129.DEF = "OldMan_r_carpal_interphalangeal_1";
HAnimJoint129.name = "r_carpal_interphalangeal_1";
HAnimJoint128YYY.children = new X3D.MFNode();

HAnimJoint128ZZZ.children[0] = HAnimJoint129;

HAnimJoint127YYY.children = new X3D.MFNode();

HAnimJoint127ZZZ.children[0] = HAnimJoint128;

let HAnimJoint130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint130.DEF = "OldMan_r_carpometacarpal_2";
HAnimJoint130.name = "r_carpometacarpal_2";
let HAnimJoint131 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint131.DEF = "OldMan_r_metacarpophalangeal_2";
HAnimJoint131.name = "r_metacarpophalangeal_2";
let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.DEF = "OldMan_r_carpal_proximal_interphalangeal_2";
HAnimJoint132.name = "r_carpal_proximal_interphalangeal_2";
let HAnimJoint133 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint133.DEF = "OldMan_r_carpal_distal_interphalangeal_2";
HAnimJoint133.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint132YYY.children = new X3D.MFNode();

HAnimJoint132ZZZ.children[0] = HAnimJoint133;

HAnimJoint131YYY.children = new X3D.MFNode();

HAnimJoint131ZZZ.children[0] = HAnimJoint132;

HAnimJoint130YYY.children = new X3D.MFNode();

HAnimJoint130ZZZ.children[0] = HAnimJoint131;

let HAnimJoint134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint134.DEF = "OldMan_r_carpometacarpal_3";
HAnimJoint134.name = "r_carpometacarpal_3";
let HAnimJoint135 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint135.DEF = "OldMan_r_metacarpophalangeal_3";
HAnimJoint135.name = "r_metacarpophalangeal_3";
let HAnimJoint136 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint136.DEF = "OldMan_r_carpal_proximal_interphalangeal_3";
HAnimJoint136.name = "r_carpal_proximal_interphalangeal_3";
let HAnimJoint137 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint137.DEF = "OldMan_r_carpal_distal_interphalangeal_3";
HAnimJoint137.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint136YYY.children = new X3D.MFNode();

HAnimJoint136ZZZ.children[0] = HAnimJoint137;

HAnimJoint135YYY.children = new X3D.MFNode();

HAnimJoint135ZZZ.children[0] = HAnimJoint136;

HAnimJoint134YYY.children = new X3D.MFNode();

HAnimJoint134ZZZ.children[0] = HAnimJoint135;

let HAnimJoint138 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint138.DEF = "OldMan_r_carpometacarpal_4";
HAnimJoint138.name = "r_carpometacarpal_4";
let HAnimJoint139 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint139.DEF = "OldMan_r_metacarpophalangeal_4";
HAnimJoint139.name = "r_metacarpophalangeal_4";
let HAnimJoint140 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint140.DEF = "OldMan_r_carpal_proximal_interphalangeal_4";
HAnimJoint140.name = "r_carpal_proximal_interphalangeal_4";
let HAnimJoint141 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint141.DEF = "OldMan_r_carpal_distal_interphalangeal_4";
HAnimJoint141.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint140YYY.children = new X3D.MFNode();

HAnimJoint140ZZZ.children[0] = HAnimJoint141;

HAnimJoint139YYY.children = new X3D.MFNode();

HAnimJoint139ZZZ.children[0] = HAnimJoint140;

HAnimJoint138YYY.children = new X3D.MFNode();

HAnimJoint138ZZZ.children[0] = HAnimJoint139;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.DEF = "OldMan_r_carpometacarpal_5";
HAnimJoint142.name = "r_carpometacarpal_5";
let HAnimJoint143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint143.DEF = "OldMan_r_metacarpophalangeal_5";
HAnimJoint143.name = "r_metacarpophalangeal_5";
let HAnimJoint144 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint144.DEF = "OldMan_r_carpal_proximal_interphalangeal_5";
HAnimJoint144.name = "r_carpal_proximal_interphalangeal_5";
let HAnimJoint145 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint145.DEF = "OldMan_r_carpal_distal_interphalangeal_5";
HAnimJoint145.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint144YYY.children = new X3D.MFNode();

HAnimJoint144ZZZ.children[0] = HAnimJoint145;

HAnimJoint143YYY.children = new X3D.MFNode();

HAnimJoint143ZZZ.children[0] = HAnimJoint144;

HAnimJoint142YYY.children = new X3D.MFNode();

HAnimJoint142ZZZ.children[0] = HAnimJoint143;

HAnimJoint138ZZZ.children[1] = HAnimJoint142;

HAnimJoint134ZZZ.children[1] = HAnimJoint138;

HAnimJoint130ZZZ.children[1] = HAnimJoint134;

HAnimJoint127ZZZ.children[1] = HAnimJoint130;

HAnimJoint126YYY.children = new X3D.MFNode();

HAnimJoint126ZZZ.children[0] = HAnimJoint127;

HAnimJoint125YYY.children = new X3D.MFNode();

HAnimJoint125ZZZ.children[0] = HAnimJoint126;

HAnimJoint124YYY.children = new X3D.MFNode();

HAnimJoint124ZZZ.children[0] = HAnimJoint125;

HAnimJoint123YYY.children = new X3D.MFNode();

HAnimJoint123ZZZ.children[0] = HAnimJoint124;

HAnimJoint122YYY.children = new X3D.MFNode();

HAnimJoint122ZZZ.children[0] = HAnimJoint123;

HAnimJoint102ZZZ.children[1] = HAnimJoint122;

HAnimJoint101YYY.children = new X3D.MFNode();

HAnimJoint101ZZZ.children[0] = HAnimJoint102;

HAnimJoint100YYY.children = new X3D.MFNode();

HAnimJoint100ZZZ.children[0] = HAnimJoint101;

HAnimJoint99YYY.children = new X3D.MFNode();

HAnimJoint99ZZZ.children[0] = HAnimJoint100;

HAnimJoint98YYY.children = new X3D.MFNode();

HAnimJoint98ZZZ.children[0] = HAnimJoint99;

HAnimJoint81ZZZ.children[1] = HAnimJoint98;

HAnimJoint80YYY.children = new X3D.MFNode();

HAnimJoint80ZZZ.children[0] = HAnimJoint81;

HAnimJoint79YYY.children = new X3D.MFNode();

HAnimJoint79ZZZ.children[0] = HAnimJoint80;

HAnimJoint78YYY.children = new X3D.MFNode();

HAnimJoint78ZZZ.children[0] = HAnimJoint79;

HAnimJoint77YYY.children = new X3D.MFNode();

HAnimJoint77ZZZ.children[0] = HAnimJoint78;

HAnimJoint76YYY.children = new X3D.MFNode();

HAnimJoint76ZZZ.children[0] = HAnimJoint77;

HAnimJoint75YYY.children = new X3D.MFNode();

HAnimJoint75ZZZ.children[0] = HAnimJoint76;

HAnimJoint74YYY.children = new X3D.MFNode();

HAnimJoint74ZZZ.children[0] = HAnimJoint75;

HAnimJoint73YYY.children = new X3D.MFNode();

HAnimJoint73ZZZ.children[0] = HAnimJoint74;

HAnimJoint72YYY.children = new X3D.MFNode();

HAnimJoint72ZZZ.children[0] = HAnimJoint73;

HAnimJoint71YYY.children = new X3D.MFNode();

HAnimJoint71ZZZ.children[0] = HAnimJoint72;

HAnimJoint70YYY.children = new X3D.MFNode();

HAnimJoint70ZZZ.children[0] = HAnimJoint71;

HAnimJoint69YYY.children = new X3D.MFNode();

HAnimJoint69ZZZ.children[0] = HAnimJoint70;

HAnimJoint68YYY.children = new X3D.MFNode();

HAnimJoint68ZZZ.children[0] = HAnimJoint69;

HAnimJoint67YYY.children = new X3D.MFNode();

HAnimJoint67ZZZ.children[0] = HAnimJoint68;

HAnimJoint66YYY.children = new X3D.MFNode();

HAnimJoint66ZZZ.children[0] = HAnimJoint67;

HAnimJoint65YYY.children = new X3D.MFNode();

HAnimJoint65ZZZ.children[0] = HAnimJoint66;

HAnimJoint52ZZZ.children[1] = HAnimJoint65;

HAnimJoint37ZZZ.children[1] = HAnimJoint52;

joints[1] = HAnimJoint37;

Group33YYY.children = new X3D.MFNode();

Group33ZZZ.children[0] = HAnimHumanoid34;

browser.currentScene.children[20] = Group33;

}
main ();
