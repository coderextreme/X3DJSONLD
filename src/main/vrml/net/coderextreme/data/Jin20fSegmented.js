const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "JinScaledV2L1LOA4MinimumSkeleton20f.x3d");
await browser .loadComponents (scene);
//https://www.web3d.org/documents/specifications/19774/V2.0/index.html
//0 0 0 at floor between feet, default I pose (relaxed attention) model gaze toward +Z, +x to model left, +y up, right-hand rule.
let WorldInfo5 = browser.currentScene.createNode("WorldInfo");
WorldInfo5.title = "20f Jin v2 loa4 Level 1, Joints, Segments, Sites";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo5;

let Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "ContainerScene000";
let Shape7 = browser.currentScene.createNode("Shape");
Shape7.DEF = "AxisLinesShape";
//Red +X, Green +Y, Blue +Z
let IndexedLineSet8 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet8.colorIndex = new X3D.MFInt32([0,1,2]);
IndexedLineSet8.colorPerVertex = False;
IndexedLineSet8.coordIndex = new X3D.MFInt32([0,1,-1,0,2,-1,0,3,-1]);
let Color9 = browser.currentScene.createNode("Color");
Color9.color = new X3D.MFColor([1,0,0,0,0.6,0,0,0,1]);
color = Color9;

let Coordinate10 = browser.currentScene.createNode("Coordinate");
Coordinate10.point = new X3D.MFVec3f([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
coord = Coordinate10;

geometry = IndexedLineSet8;

Transform6YYY.child = new X3D.undefined();

Transform6ZZZ.child[0] = Shape7;

browser.currentScene.children[1] = Transform6;

let HAnimHumanoid11 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid11.name = "JinLOA4S";
HAnimHumanoid11.DEF = "hanim_JinLOA4S";
HAnimHumanoid11.loa = 4;
HAnimHumanoid11.version = "2.0";
let HAnimJoint12 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint12.name = "humanoid_root";
HAnimJoint12.DEF = "hanim_humanoid_root";
HAnimJoint12.center = new X3D.SFVec3f([0,0.77,0]);
HAnimJoint12.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint12.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment13 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment13.name = "sacrum";
HAnimSegment13.DEF = "hanim_sacrum";
let Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "Humanoid000";
let Shape15 = browser.currentScene.createNode("Shape");
Shape15.USE = "AxisLinesShape";
Transform14YYY.child = new X3D.undefined();

Transform14ZZZ.child[0] = Shape15;

HAnimSegment13YYY.children = new X3D.MFNode();

HAnimSegment13ZZZ.children[0] = Transform14;

HAnimJoint12YYY.children = new X3D.MFNode();

HAnimJoint12ZZZ.children[0] = HAnimSegment13;

let HAnimJoint16 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint16.name = "sacroiliac";
HAnimJoint16.DEF = "hanim_sacroiliac";
HAnimJoint16.center = new X3D.SFVec3f([0,0.826,0.02]);
HAnimJoint16.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint16.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment17 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment17.name = "pelvis";
HAnimSegment17.DEF = "hanim_pelvis";
let HAnimSite18 = browser.currentScene.createNode("HAnimSite");
HAnimSite18.name = "l_iliocristale";
HAnimSite18.DEF = "hanim_l_iliocristale_pt";
HAnimSite18.translation = new X3D.SFVec3f([0.13,0.92,0.0035]);
let TouchSensor19 = browser.currentScene.createNode("TouchSensor");
TouchSensor19.description = "HAnimSite 33 hanim_l_iliocristale_pt";
HAnimSite18YYY.children = new X3D.MFNode();

HAnimSite18ZZZ.children[0] = TouchSensor19;

let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material22;

appearance = Appearance21;

let IndexedFaceSet23 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet23.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet23.creaseAngle = 0.5;
IndexedFaceSet23.solid = False;
let ColorRGBA24 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA24.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA24;

let Coordinate25 = browser.currentScene.createNode("Coordinate");
Coordinate25.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate25;

geometry = IndexedFaceSet23;

HAnimSite18ZZZ.children[1] = Shape20;

let Billboard26 = browser.currentScene.createNode("Billboard");
Billboard26.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape27 = browser.currentScene.createNode("Shape");
let Text28 = browser.currentScene.createNode("Text");
Text28.string = new X3D.MFString([new X3D.SFString("33")]);
let FontStyle29 = browser.currentScene.createNode("FontStyle");
FontStyle29.size = 0.035;
fontStyle = FontStyle29;

geometry = Text28;

Billboard26YYY.children = new X3D.MFNode();

Billboard26ZZZ.children[0] = Shape27;

HAnimSite18ZZZ.children[2] = Billboard26;

HAnimSegment17YYY.children = new X3D.MFNode();

HAnimSegment17ZZZ.children[0] = HAnimSite18;

let HAnimSite30 = browser.currentScene.createNode("HAnimSite");
HAnimSite30.name = "r_iliocristale";
HAnimSite30.DEF = "hanim_r_iliocristale_pt";
HAnimSite30.translation = new X3D.SFVec3f([-0.13,0.92,0.0035]);
let TouchSensor31 = browser.currentScene.createNode("TouchSensor");
TouchSensor31.description = "HAnimSite 36 hanim_r_iliocristale_pt";
HAnimSite30YYY.children = new X3D.MFNode();

HAnimSite30ZZZ.children[0] = TouchSensor31;

let Shape32 = browser.currentScene.createNode("Shape");
let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material34;

appearance = Appearance33;

let IndexedFaceSet35 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet35.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet35.creaseAngle = 0.5;
IndexedFaceSet35.solid = False;
let ColorRGBA36 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA36.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA36;

let Coordinate37 = browser.currentScene.createNode("Coordinate");
Coordinate37.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate37;

geometry = IndexedFaceSet35;

HAnimSite30ZZZ.children[1] = Shape32;

let Billboard38 = browser.currentScene.createNode("Billboard");
Billboard38.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape39 = browser.currentScene.createNode("Shape");
let Text40 = browser.currentScene.createNode("Text");
Text40.string = new X3D.MFString([new X3D.SFString("36")]);
let FontStyle41 = browser.currentScene.createNode("FontStyle");
FontStyle41.size = 0.035;
fontStyle = FontStyle41;

geometry = Text40;

Billboard38YYY.children = new X3D.MFNode();

Billboard38ZZZ.children[0] = Shape39;

HAnimSite30ZZZ.children[2] = Billboard38;

HAnimSegment17ZZZ.children[1] = HAnimSite30;

let HAnimSite42 = browser.currentScene.createNode("HAnimSite");
HAnimSite42.name = "l_trochanterion";
HAnimSite42.DEF = "hanim_l_trochanterion_pt";
HAnimSite42.translation = new X3D.SFVec3f([0.14,0.8,0.0035]);
let TouchSensor43 = browser.currentScene.createNode("TouchSensor");
TouchSensor43.description = "HAnimSite 42 hanim_l_trochanterion_pt";
HAnimSite42YYY.children = new X3D.MFNode();

HAnimSite42ZZZ.children[0] = TouchSensor43;

let Shape44 = browser.currentScene.createNode("Shape");
let Appearance45 = browser.currentScene.createNode("Appearance");
let Material46 = browser.currentScene.createNode("Material");
Material46.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material46;

appearance = Appearance45;

let IndexedFaceSet47 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet47.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet47.creaseAngle = 0.5;
IndexedFaceSet47.solid = False;
let ColorRGBA48 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA48.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA48;

let Coordinate49 = browser.currentScene.createNode("Coordinate");
Coordinate49.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate49;

geometry = IndexedFaceSet47;

HAnimSite42ZZZ.children[1] = Shape44;

let Billboard50 = browser.currentScene.createNode("Billboard");
Billboard50.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape51 = browser.currentScene.createNode("Shape");
let Text52 = browser.currentScene.createNode("Text");
Text52.string = new X3D.MFString([new X3D.SFString("42")]);
let FontStyle53 = browser.currentScene.createNode("FontStyle");
FontStyle53.size = 0.035;
fontStyle = FontStyle53;

geometry = Text52;

Billboard50YYY.children = new X3D.MFNode();

Billboard50ZZZ.children[0] = Shape51;

HAnimSite42ZZZ.children[2] = Billboard50;

HAnimSegment17ZZZ.children[2] = HAnimSite42;

let HAnimSite54 = browser.currentScene.createNode("HAnimSite");
HAnimSite54.name = "r_trochanterion";
HAnimSite54.DEF = "hanim_r_trochanterion_pt";
HAnimSite54.translation = new X3D.SFVec3f([-0.14,0.8,0.0035]);
let TouchSensor55 = browser.currentScene.createNode("TouchSensor");
TouchSensor55.description = "HAnimSite 46 hanim_r_trochanterion_pt";
HAnimSite54YYY.children = new X3D.MFNode();

HAnimSite54ZZZ.children[0] = TouchSensor55;

let Shape56 = browser.currentScene.createNode("Shape");
let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Material58.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material58;

appearance = Appearance57;

let IndexedFaceSet59 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet59.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet59.creaseAngle = 0.5;
IndexedFaceSet59.solid = False;
let ColorRGBA60 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA60.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA60;

let Coordinate61 = browser.currentScene.createNode("Coordinate");
Coordinate61.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate61;

geometry = IndexedFaceSet59;

HAnimSite54ZZZ.children[1] = Shape56;

let Billboard62 = browser.currentScene.createNode("Billboard");
Billboard62.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape63 = browser.currentScene.createNode("Shape");
let Text64 = browser.currentScene.createNode("Text");
Text64.string = new X3D.MFString([new X3D.SFString("46")]);
let FontStyle65 = browser.currentScene.createNode("FontStyle");
FontStyle65.size = 0.035;
fontStyle = FontStyle65;

geometry = Text64;

Billboard62YYY.children = new X3D.MFNode();

Billboard62ZZZ.children[0] = Shape63;

HAnimSite54ZZZ.children[2] = Billboard62;

HAnimSegment17ZZZ.children[3] = HAnimSite54;

let HAnimSite66 = browser.currentScene.createNode("HAnimSite");
HAnimSite66.name = "l_asis";
HAnimSite66.DEF = "hanim_l_asis_pt";
HAnimSite66.translation = new X3D.SFVec3f([0.1,0.86,0.0035]);
let TouchSensor67 = browser.currentScene.createNode("TouchSensor");
TouchSensor67.description = "HAnimSite 32 hanim_l_asis_pt";
HAnimSite66YYY.children = new X3D.MFNode();

HAnimSite66ZZZ.children[0] = TouchSensor67;

let Shape68 = browser.currentScene.createNode("Shape");
let Appearance69 = browser.currentScene.createNode("Appearance");
let Material70 = browser.currentScene.createNode("Material");
Material70.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material70;

appearance = Appearance69;

let IndexedFaceSet71 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet71.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet71.creaseAngle = 0.5;
IndexedFaceSet71.solid = False;
let ColorRGBA72 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA72.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA72;

let Coordinate73 = browser.currentScene.createNode("Coordinate");
Coordinate73.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate73;

geometry = IndexedFaceSet71;

HAnimSite66ZZZ.children[1] = Shape68;

let Billboard74 = browser.currentScene.createNode("Billboard");
Billboard74.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape75 = browser.currentScene.createNode("Shape");
let Text76 = browser.currentScene.createNode("Text");
Text76.string = new X3D.MFString([new X3D.SFString("32")]);
let FontStyle77 = browser.currentScene.createNode("FontStyle");
FontStyle77.size = 0.035;
fontStyle = FontStyle77;

geometry = Text76;

Billboard74YYY.children = new X3D.MFNode();

Billboard74ZZZ.children[0] = Shape75;

HAnimSite66ZZZ.children[2] = Billboard74;

HAnimSegment17ZZZ.children[4] = HAnimSite66;

let HAnimSite78 = browser.currentScene.createNode("HAnimSite");
HAnimSite78.name = "r_asis";
HAnimSite78.DEF = "hanim_r_asis_pt";
HAnimSite78.translation = new X3D.SFVec3f([-0.1,0.86,0.0035]);
let TouchSensor79 = browser.currentScene.createNode("TouchSensor");
TouchSensor79.description = "HAnimSite 35 hanim_r_asis_pt";
HAnimSite78YYY.children = new X3D.MFNode();

HAnimSite78ZZZ.children[0] = TouchSensor79;

let Shape80 = browser.currentScene.createNode("Shape");
let Appearance81 = browser.currentScene.createNode("Appearance");
let Material82 = browser.currentScene.createNode("Material");
Material82.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material82;

appearance = Appearance81;

let IndexedFaceSet83 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet83.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet83.creaseAngle = 0.5;
IndexedFaceSet83.solid = False;
let ColorRGBA84 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA84.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA84;

let Coordinate85 = browser.currentScene.createNode("Coordinate");
Coordinate85.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate85;

geometry = IndexedFaceSet83;

HAnimSite78ZZZ.children[1] = Shape80;

let Billboard86 = browser.currentScene.createNode("Billboard");
Billboard86.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape87 = browser.currentScene.createNode("Shape");
let Text88 = browser.currentScene.createNode("Text");
Text88.string = new X3D.MFString([new X3D.SFString("35")]);
let FontStyle89 = browser.currentScene.createNode("FontStyle");
FontStyle89.size = 0.035;
fontStyle = FontStyle89;

geometry = Text88;

Billboard86YYY.children = new X3D.MFNode();

Billboard86ZZZ.children[0] = Shape87;

HAnimSite78ZZZ.children[2] = Billboard86;

HAnimSegment17ZZZ.children[5] = HAnimSite78;

let HAnimSite90 = browser.currentScene.createNode("HAnimSite");
HAnimSite90.name = "l_psis";
HAnimSite90.DEF = "hanim_l_psis_pt";
HAnimSite90.translation = new X3D.SFVec3f([0.05,0.84,-0.11]);
let TouchSensor91 = browser.currentScene.createNode("TouchSensor");
TouchSensor91.description = "HAnimSite 34 hanim_l_psis_pt";
HAnimSite90YYY.children = new X3D.MFNode();

HAnimSite90ZZZ.children[0] = TouchSensor91;

let Shape92 = browser.currentScene.createNode("Shape");
let Appearance93 = browser.currentScene.createNode("Appearance");
let Material94 = browser.currentScene.createNode("Material");
Material94.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material94;

appearance = Appearance93;

let IndexedFaceSet95 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet95.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet95.creaseAngle = 0.5;
IndexedFaceSet95.solid = False;
let ColorRGBA96 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA96.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA96;

let Coordinate97 = browser.currentScene.createNode("Coordinate");
Coordinate97.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate97;

geometry = IndexedFaceSet95;

HAnimSite90ZZZ.children[1] = Shape92;

let Billboard98 = browser.currentScene.createNode("Billboard");
Billboard98.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape99 = browser.currentScene.createNode("Shape");
let Text100 = browser.currentScene.createNode("Text");
Text100.string = new X3D.MFString([new X3D.SFString("34")]);
let FontStyle101 = browser.currentScene.createNode("FontStyle");
FontStyle101.size = 0.035;
fontStyle = FontStyle101;

geometry = Text100;

Billboard98YYY.children = new X3D.MFNode();

Billboard98ZZZ.children[0] = Shape99;

HAnimSite90ZZZ.children[2] = Billboard98;

HAnimSegment17ZZZ.children[6] = HAnimSite90;

let HAnimSite102 = browser.currentScene.createNode("HAnimSite");
HAnimSite102.name = "r_psis";
HAnimSite102.DEF = "hanim_r_psis_pt";
HAnimSite102.translation = new X3D.SFVec3f([-0.05,0.84,-0.11]);
let TouchSensor103 = browser.currentScene.createNode("TouchSensor");
TouchSensor103.description = "HAnimSite 37 hanim_r_psis_pt";
HAnimSite102YYY.children = new X3D.MFNode();

HAnimSite102ZZZ.children[0] = TouchSensor103;

let Shape104 = browser.currentScene.createNode("Shape");
let Appearance105 = browser.currentScene.createNode("Appearance");
let Material106 = browser.currentScene.createNode("Material");
Material106.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material106;

appearance = Appearance105;

let IndexedFaceSet107 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet107.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet107.creaseAngle = 0.5;
IndexedFaceSet107.solid = False;
let ColorRGBA108 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA108.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA108;

let Coordinate109 = browser.currentScene.createNode("Coordinate");
Coordinate109.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate109;

geometry = IndexedFaceSet107;

HAnimSite102ZZZ.children[1] = Shape104;

let Billboard110 = browser.currentScene.createNode("Billboard");
Billboard110.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape111 = browser.currentScene.createNode("Shape");
let Text112 = browser.currentScene.createNode("Text");
Text112.string = new X3D.MFString([new X3D.SFString("37")]);
let FontStyle113 = browser.currentScene.createNode("FontStyle");
FontStyle113.size = 0.035;
fontStyle = FontStyle113;

geometry = Text112;

Billboard110YYY.children = new X3D.MFNode();

Billboard110ZZZ.children[0] = Shape111;

HAnimSite102ZZZ.children[2] = Billboard110;

HAnimSegment17ZZZ.children[7] = HAnimSite102;

let HAnimSite114 = browser.currentScene.createNode("HAnimSite");
HAnimSite114.name = "crotch";
HAnimSite114.DEF = "hanim_crotch_pt";
HAnimSite114.translation = new X3D.SFVec3f([0,0.703,0]);
let TouchSensor115 = browser.currentScene.createNode("TouchSensor");
TouchSensor115.description = "HAnimSite 38 hanim_crotch_pt";
HAnimSite114YYY.children = new X3D.MFNode();

HAnimSite114ZZZ.children[0] = TouchSensor115;

let Shape116 = browser.currentScene.createNode("Shape");
let Appearance117 = browser.currentScene.createNode("Appearance");
let Material118 = browser.currentScene.createNode("Material");
Material118.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material118;

appearance = Appearance117;

let IndexedFaceSet119 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet119.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet119.creaseAngle = 0.5;
IndexedFaceSet119.solid = False;
let ColorRGBA120 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA120.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA120;

let Coordinate121 = browser.currentScene.createNode("Coordinate");
Coordinate121.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate121;

geometry = IndexedFaceSet119;

HAnimSite114ZZZ.children[1] = Shape116;

let Billboard122 = browser.currentScene.createNode("Billboard");
Billboard122.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape123 = browser.currentScene.createNode("Shape");
let Text124 = browser.currentScene.createNode("Text");
Text124.string = new X3D.MFString([new X3D.SFString("38")]);
let FontStyle125 = browser.currentScene.createNode("FontStyle");
FontStyle125.size = 0.035;
fontStyle = FontStyle125;

geometry = Text124;

Billboard122YYY.children = new X3D.MFNode();

Billboard122ZZZ.children[0] = Shape123;

HAnimSite114ZZZ.children[2] = Billboard122;

HAnimSegment17ZZZ.children[8] = HAnimSite114;

let HAnimSite126 = browser.currentScene.createNode("HAnimSite");
HAnimSite126.name = "buttocks_standing_wall_contact_point";
HAnimSite126.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimSite126.translation = new X3D.SFVec3f([0,0.8,-0.15]);
let TouchSensor127 = browser.currentScene.createNode("TouchSensor");
TouchSensor127.description = "HAnimSite 93 hanim_buttocks_standing_wall_contact_point_pt";
HAnimSite126YYY.children = new X3D.MFNode();

HAnimSite126ZZZ.children[0] = TouchSensor127;

let Shape128 = browser.currentScene.createNode("Shape");
let Appearance129 = browser.currentScene.createNode("Appearance");
let Material130 = browser.currentScene.createNode("Material");
Material130.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material130;

appearance = Appearance129;

let IndexedFaceSet131 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet131.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet131.creaseAngle = 0.5;
IndexedFaceSet131.solid = False;
let ColorRGBA132 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA132.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA132;

let Coordinate133 = browser.currentScene.createNode("Coordinate");
Coordinate133.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate133;

geometry = IndexedFaceSet131;

HAnimSite126ZZZ.children[1] = Shape128;

let Billboard134 = browser.currentScene.createNode("Billboard");
Billboard134.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape135 = browser.currentScene.createNode("Shape");
let Text136 = browser.currentScene.createNode("Text");
Text136.string = new X3D.MFString([new X3D.SFString("93")]);
let FontStyle137 = browser.currentScene.createNode("FontStyle");
FontStyle137.size = 0.035;
fontStyle = FontStyle137;

geometry = Text136;

Billboard134YYY.children = new X3D.MFNode();

Billboard134ZZZ.children[0] = Shape135;

HAnimSite126ZZZ.children[2] = Billboard134;

HAnimSegment17ZZZ.children[9] = HAnimSite126;

let Shape138 = browser.currentScene.createNode("Shape");
let LineSet139 = browser.currentScene.createNode("LineSet");
LineSet139.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA140 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA140.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA140;

let Coordinate141 = browser.currentScene.createNode("Coordinate");
Coordinate141.point = new X3D.MFVec3f([0,0.826,0.02,0,0.77,0]);
coord = Coordinate141;

geometry = LineSet139;

HAnimSegment17ZZZ.children[10] = Shape138;

HAnimJoint16YYY.children = new X3D.MFNode();

HAnimJoint16ZZZ.children[0] = HAnimSegment17;

let HAnimJoint142 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint142.name = "l_hip";
HAnimJoint142.DEF = "hanim_l_hip";
HAnimJoint142.center = new X3D.SFVec3f([0.095,0.8266,-0.0183]);
HAnimJoint142.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint142.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment143 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment143.name = "l_thigh";
HAnimSegment143.DEF = "hanim_l_thigh";
let HAnimSite144 = browser.currentScene.createNode("HAnimSite");
HAnimSite144.name = "l_knee_crease";
HAnimSite144.DEF = "hanim_l_knee_crease_pt";
HAnimSite144.translation = new X3D.SFVec3f([0.09,0.41,-0.056]);
let TouchSensor145 = browser.currentScene.createNode("TouchSensor");
TouchSensor145.description = "HAnimSite 90 hanim_l_knee_crease_pt";
HAnimSite144YYY.children = new X3D.MFNode();

HAnimSite144ZZZ.children[0] = TouchSensor145;

let Shape146 = browser.currentScene.createNode("Shape");
let Appearance147 = browser.currentScene.createNode("Appearance");
let Material148 = browser.currentScene.createNode("Material");
Material148.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material148;

appearance = Appearance147;

let IndexedFaceSet149 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet149.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet149.creaseAngle = 0.5;
IndexedFaceSet149.solid = False;
let ColorRGBA150 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA150.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA150;

let Coordinate151 = browser.currentScene.createNode("Coordinate");
Coordinate151.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate151;

geometry = IndexedFaceSet149;

HAnimSite144ZZZ.children[1] = Shape146;

let Billboard152 = browser.currentScene.createNode("Billboard");
Billboard152.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape153 = browser.currentScene.createNode("Shape");
let Text154 = browser.currentScene.createNode("Text");
Text154.string = new X3D.MFString([new X3D.SFString("90")]);
let FontStyle155 = browser.currentScene.createNode("FontStyle");
FontStyle155.size = 0.035;
fontStyle = FontStyle155;

geometry = Text154;

Billboard152YYY.children = new X3D.MFNode();

Billboard152ZZZ.children[0] = Shape153;

HAnimSite144ZZZ.children[2] = Billboard152;

HAnimSegment143YYY.children = new X3D.MFNode();

HAnimSegment143ZZZ.children[0] = HAnimSite144;

let HAnimSite156 = browser.currentScene.createNode("HAnimSite");
HAnimSite156.name = "l_femoral_medial_epicondyle";
HAnimSite156.DEF = "hanim_l_femoral_medial_epicondyle_pt";
HAnimSite156.translation = new X3D.SFVec3f([0.039,0.41,-0.01]);
let TouchSensor157 = browser.currentScene.createNode("TouchSensor");
TouchSensor157.description = "HAnimSite 40 hanim_l_femoral_medial_epicondyle_pt";
HAnimSite156YYY.children = new X3D.MFNode();

HAnimSite156ZZZ.children[0] = TouchSensor157;

let Shape158 = browser.currentScene.createNode("Shape");
let Appearance159 = browser.currentScene.createNode("Appearance");
let Material160 = browser.currentScene.createNode("Material");
Material160.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material160;

appearance = Appearance159;

let IndexedFaceSet161 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet161.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet161.creaseAngle = 0.5;
IndexedFaceSet161.solid = False;
let ColorRGBA162 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA162.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA162;

let Coordinate163 = browser.currentScene.createNode("Coordinate");
Coordinate163.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate163;

geometry = IndexedFaceSet161;

HAnimSite156ZZZ.children[1] = Shape158;

let Billboard164 = browser.currentScene.createNode("Billboard");
Billboard164.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape165 = browser.currentScene.createNode("Shape");
let Text166 = browser.currentScene.createNode("Text");
Text166.string = new X3D.MFString([new X3D.SFString("40")]);
let FontStyle167 = browser.currentScene.createNode("FontStyle");
FontStyle167.size = 0.035;
fontStyle = FontStyle167;

geometry = Text166;

Billboard164YYY.children = new X3D.MFNode();

Billboard164ZZZ.children[0] = Shape165;

HAnimSite156ZZZ.children[2] = Billboard164;

HAnimSegment143ZZZ.children[1] = HAnimSite156;

let HAnimSite168 = browser.currentScene.createNode("HAnimSite");
HAnimSite168.name = "l_femoral_lateral_epicondyle";
HAnimSite168.DEF = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite168.translation = new X3D.SFVec3f([0.127,0.41,-0.01]);
let TouchSensor169 = browser.currentScene.createNode("TouchSensor");
TouchSensor169.description = "HAnimSite 39 hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite168YYY.children = new X3D.MFNode();

HAnimSite168ZZZ.children[0] = TouchSensor169;

let Shape170 = browser.currentScene.createNode("Shape");
let Appearance171 = browser.currentScene.createNode("Appearance");
let Material172 = browser.currentScene.createNode("Material");
Material172.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material172;

appearance = Appearance171;

let IndexedFaceSet173 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet173.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet173.creaseAngle = 0.5;
IndexedFaceSet173.solid = False;
let ColorRGBA174 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA174.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA174;

let Coordinate175 = browser.currentScene.createNode("Coordinate");
Coordinate175.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate175;

geometry = IndexedFaceSet173;

HAnimSite168ZZZ.children[1] = Shape170;

let Billboard176 = browser.currentScene.createNode("Billboard");
Billboard176.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape177 = browser.currentScene.createNode("Shape");
let Text178 = browser.currentScene.createNode("Text");
Text178.string = new X3D.MFString([new X3D.SFString("39")]);
let FontStyle179 = browser.currentScene.createNode("FontStyle");
FontStyle179.size = 0.035;
fontStyle = FontStyle179;

geometry = Text178;

Billboard176YYY.children = new X3D.MFNode();

Billboard176ZZZ.children[0] = Shape177;

HAnimSite168ZZZ.children[2] = Billboard176;

HAnimSegment143ZZZ.children[2] = HAnimSite168;

let HAnimSite180 = browser.currentScene.createNode("HAnimSite");
HAnimSite180.name = "l_suprapatella";
HAnimSite180.DEF = "hanim_l_suprapatella_pt";
HAnimSite180.translation = new X3D.SFVec3f([0.085,0.41,0.042]);
let TouchSensor181 = browser.currentScene.createNode("TouchSensor");
TouchSensor181.description = "HAnimSite 41 hanim_l_suprapatella_pt";
HAnimSite180YYY.children = new X3D.MFNode();

HAnimSite180ZZZ.children[0] = TouchSensor181;

let Shape182 = browser.currentScene.createNode("Shape");
let Appearance183 = browser.currentScene.createNode("Appearance");
let Material184 = browser.currentScene.createNode("Material");
Material184.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material184;

appearance = Appearance183;

let IndexedFaceSet185 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet185.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet185.creaseAngle = 0.5;
IndexedFaceSet185.solid = False;
let ColorRGBA186 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA186.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA186;

let Coordinate187 = browser.currentScene.createNode("Coordinate");
Coordinate187.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate187;

geometry = IndexedFaceSet185;

HAnimSite180ZZZ.children[1] = Shape182;

let Billboard188 = browser.currentScene.createNode("Billboard");
Billboard188.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape189 = browser.currentScene.createNode("Shape");
let Text190 = browser.currentScene.createNode("Text");
Text190.string = new X3D.MFString([new X3D.SFString("41")]);
let FontStyle191 = browser.currentScene.createNode("FontStyle");
FontStyle191.size = 0.035;
fontStyle = FontStyle191;

geometry = Text190;

Billboard188YYY.children = new X3D.MFNode();

Billboard188ZZZ.children[0] = Shape189;

HAnimSite180ZZZ.children[2] = Billboard188;

HAnimSegment143ZZZ.children[3] = HAnimSite180;

let Shape192 = browser.currentScene.createNode("Shape");
let LineSet193 = browser.currentScene.createNode("LineSet");
LineSet193.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA194 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA194.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA194;

let Coordinate195 = browser.currentScene.createNode("Coordinate");
Coordinate195.point = new X3D.MFVec3f([0.095,0.8266,-0.0183,0,0.826,0.02]);
coord = Coordinate195;

geometry = LineSet193;

HAnimSegment143ZZZ.children[4] = Shape192;

HAnimJoint142YYY.children = new X3D.MFNode();

HAnimJoint142ZZZ.children[0] = HAnimSegment143;

let HAnimJoint196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint196.name = "l_knee";
HAnimJoint196.DEF = "hanim_l_knee";
HAnimJoint196.center = new X3D.SFVec3f([0.0926,0.4088,-0.01944]);
HAnimJoint196.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint196.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment197 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment197.name = "l_calf";
HAnimSegment197.DEF = "hanim_l_calf";
let HAnimSite198 = browser.currentScene.createNode("HAnimSite");
HAnimSite198.name = "l_tibiale";
HAnimSite198.DEF = "hanim_l_tibiale_pt";
HAnimSite198.translation = new X3D.SFVec3f([0.09,0.31,0.038]);
let TouchSensor199 = browser.currentScene.createNode("TouchSensor");
TouchSensor199.description = "HAnimSite 47 hanim_l_tibiale_pt";
HAnimSite198YYY.children = new X3D.MFNode();

HAnimSite198ZZZ.children[0] = TouchSensor199;

let Shape200 = browser.currentScene.createNode("Shape");
let Appearance201 = browser.currentScene.createNode("Appearance");
let Material202 = browser.currentScene.createNode("Material");
Material202.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material202;

appearance = Appearance201;

let IndexedFaceSet203 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet203.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet203.creaseAngle = 0.5;
IndexedFaceSet203.solid = False;
let ColorRGBA204 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA204.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA204;

let Coordinate205 = browser.currentScene.createNode("Coordinate");
Coordinate205.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate205;

geometry = IndexedFaceSet203;

HAnimSite198ZZZ.children[1] = Shape200;

let Billboard206 = browser.currentScene.createNode("Billboard");
Billboard206.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape207 = browser.currentScene.createNode("Shape");
let Text208 = browser.currentScene.createNode("Text");
Text208.string = new X3D.MFString([new X3D.SFString("47")]);
let FontStyle209 = browser.currentScene.createNode("FontStyle");
FontStyle209.size = 0.035;
fontStyle = FontStyle209;

geometry = Text208;

Billboard206YYY.children = new X3D.MFNode();

Billboard206ZZZ.children[0] = Shape207;

HAnimSite198ZZZ.children[2] = Billboard206;

HAnimSegment197YYY.children = new X3D.MFNode();

HAnimSegment197ZZZ.children[0] = HAnimSite198;

let HAnimSite210 = browser.currentScene.createNode("HAnimSite");
HAnimSite210.name = "l_medial_malleolus";
HAnimSite210.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite210.translation = new X3D.SFVec3f([0.061,0.095,-0.02]);
let TouchSensor211 = browser.currentScene.createNode("TouchSensor");
TouchSensor211.description = "HAnimSite 48 hanim_l_medial_malleolus_pt";
HAnimSite210YYY.children = new X3D.MFNode();

HAnimSite210ZZZ.children[0] = TouchSensor211;

let Shape212 = browser.currentScene.createNode("Shape");
let Appearance213 = browser.currentScene.createNode("Appearance");
let Material214 = browser.currentScene.createNode("Material");
Material214.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material214;

appearance = Appearance213;

let IndexedFaceSet215 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet215.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet215.creaseAngle = 0.5;
IndexedFaceSet215.solid = False;
let ColorRGBA216 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA216.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA216;

let Coordinate217 = browser.currentScene.createNode("Coordinate");
Coordinate217.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate217;

geometry = IndexedFaceSet215;

HAnimSite210ZZZ.children[1] = Shape212;

let Billboard218 = browser.currentScene.createNode("Billboard");
Billboard218.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape219 = browser.currentScene.createNode("Shape");
let Text220 = browser.currentScene.createNode("Text");
Text220.string = new X3D.MFString([new X3D.SFString("48")]);
let FontStyle221 = browser.currentScene.createNode("FontStyle");
FontStyle221.size = 0.035;
fontStyle = FontStyle221;

geometry = Text220;

Billboard218YYY.children = new X3D.MFNode();

Billboard218ZZZ.children[0] = Shape219;

HAnimSite210ZZZ.children[2] = Billboard218;

HAnimSegment197ZZZ.children[1] = HAnimSite210;

let HAnimSite222 = browser.currentScene.createNode("HAnimSite");
HAnimSite222.name = "l_lateral_malleolus";
HAnimSite222.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite222.translation = new X3D.SFVec3f([0.12,0.095,-0.02]);
let TouchSensor223 = browser.currentScene.createNode("TouchSensor");
TouchSensor223.description = "HAnimSite 49 hanim_l_lateral_malleolus_pt";
HAnimSite222YYY.children = new X3D.MFNode();

HAnimSite222ZZZ.children[0] = TouchSensor223;

let Shape224 = browser.currentScene.createNode("Shape");
let Appearance225 = browser.currentScene.createNode("Appearance");
let Material226 = browser.currentScene.createNode("Material");
Material226.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material226;

appearance = Appearance225;

let IndexedFaceSet227 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet227.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet227.creaseAngle = 0.5;
IndexedFaceSet227.solid = False;
let ColorRGBA228 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA228.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA228;

let Coordinate229 = browser.currentScene.createNode("Coordinate");
Coordinate229.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate229;

geometry = IndexedFaceSet227;

HAnimSite222ZZZ.children[1] = Shape224;

let Billboard230 = browser.currentScene.createNode("Billboard");
Billboard230.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape231 = browser.currentScene.createNode("Shape");
let Text232 = browser.currentScene.createNode("Text");
Text232.string = new X3D.MFString([new X3D.SFString("49")]);
let FontStyle233 = browser.currentScene.createNode("FontStyle");
FontStyle233.size = 0.035;
fontStyle = FontStyle233;

geometry = Text232;

Billboard230YYY.children = new X3D.MFNode();

Billboard230ZZZ.children[0] = Shape231;

HAnimSite222ZZZ.children[2] = Billboard230;

HAnimSegment197ZZZ.children[2] = HAnimSite222;

let Shape234 = browser.currentScene.createNode("Shape");
let LineSet235 = browser.currentScene.createNode("LineSet");
LineSet235.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA236 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA236.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA236;

let Coordinate237 = browser.currentScene.createNode("Coordinate");
Coordinate237.point = new X3D.MFVec3f([0.0926,0.4088,-0.01944,0.095,0.8266,-0.0183]);
coord = Coordinate237;

geometry = LineSet235;

HAnimSegment197ZZZ.children[3] = Shape234;

HAnimJoint196YYY.children = new X3D.MFNode();

HAnimJoint196ZZZ.children[0] = HAnimSegment197;

let HAnimJoint238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint238.name = "l_talocrural";
HAnimJoint238.DEF = "hanim_l_talocrural";
HAnimJoint238.center = new X3D.SFVec3f([0.0888,0.09545,-0.01045]);
HAnimJoint238.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint238.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment239 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment239.name = "l_talus";
HAnimSegment239.DEF = "hanim_l_talus";
let HAnimSite240 = browser.currentScene.createNode("HAnimSite");
HAnimSite240.name = "l_sphyrion";
HAnimSite240.DEF = "hanim_l_sphyrion_pt";
HAnimSite240.translation = new X3D.SFVec3f([0.054,0.065,-0.02]);
let TouchSensor241 = browser.currentScene.createNode("TouchSensor");
TouchSensor241.description = "HAnimSite 50 hanim_l_sphyrion_pt";
HAnimSite240YYY.children = new X3D.MFNode();

HAnimSite240ZZZ.children[0] = TouchSensor241;

let Shape242 = browser.currentScene.createNode("Shape");
let Appearance243 = browser.currentScene.createNode("Appearance");
let Material244 = browser.currentScene.createNode("Material");
Material244.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material244;

appearance = Appearance243;

let IndexedFaceSet245 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet245.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet245.creaseAngle = 0.5;
IndexedFaceSet245.solid = False;
let ColorRGBA246 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA246.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA246;

let Coordinate247 = browser.currentScene.createNode("Coordinate");
Coordinate247.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate247;

geometry = IndexedFaceSet245;

HAnimSite240ZZZ.children[1] = Shape242;

let Billboard248 = browser.currentScene.createNode("Billboard");
Billboard248.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape249 = browser.currentScene.createNode("Shape");
let Text250 = browser.currentScene.createNode("Text");
Text250.string = new X3D.MFString([new X3D.SFString("50")]);
let FontStyle251 = browser.currentScene.createNode("FontStyle");
FontStyle251.size = 0.035;
fontStyle = FontStyle251;

geometry = Text250;

Billboard248YYY.children = new X3D.MFNode();

Billboard248ZZZ.children[0] = Shape249;

HAnimSite240ZZZ.children[2] = Billboard248;

HAnimSegment239YYY.children = new X3D.MFNode();

HAnimSegment239ZZZ.children[0] = HAnimSite240;

let HAnimSite252 = browser.currentScene.createNode("HAnimSite");
HAnimSite252.name = "l_calcaneus_posterior";
HAnimSite252.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite252.translation = new X3D.SFVec3f([0.09,0.03,-0.06]);
let TouchSensor253 = browser.currentScene.createNode("TouchSensor");
TouchSensor253.description = "HAnimSite 58 hanim_l_calcaneus_posterior_pt";
HAnimSite252YYY.children = new X3D.MFNode();

HAnimSite252ZZZ.children[0] = TouchSensor253;

let Shape254 = browser.currentScene.createNode("Shape");
let Appearance255 = browser.currentScene.createNode("Appearance");
let Material256 = browser.currentScene.createNode("Material");
Material256.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material256;

appearance = Appearance255;

let IndexedFaceSet257 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet257.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet257.creaseAngle = 0.5;
IndexedFaceSet257.solid = False;
let ColorRGBA258 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA258.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA258;

let Coordinate259 = browser.currentScene.createNode("Coordinate");
Coordinate259.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate259;

geometry = IndexedFaceSet257;

HAnimSite252ZZZ.children[1] = Shape254;

let Billboard260 = browser.currentScene.createNode("Billboard");
Billboard260.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape261 = browser.currentScene.createNode("Shape");
let Text262 = browser.currentScene.createNode("Text");
Text262.string = new X3D.MFString([new X3D.SFString("58")]);
let FontStyle263 = browser.currentScene.createNode("FontStyle");
FontStyle263.size = 0.035;
fontStyle = FontStyle263;

geometry = Text262;

Billboard260YYY.children = new X3D.MFNode();

Billboard260ZZZ.children[0] = Shape261;

HAnimSite252ZZZ.children[2] = Billboard260;

HAnimSegment239ZZZ.children[1] = HAnimSite252;

let Shape264 = browser.currentScene.createNode("Shape");
let LineSet265 = browser.currentScene.createNode("LineSet");
LineSet265.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA266 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA266.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA266;

let Coordinate267 = browser.currentScene.createNode("Coordinate");
Coordinate267.point = new X3D.MFVec3f([0.0888,0.09545,-0.01045,0.0926,0.4088,-0.01944]);
coord = Coordinate267;

geometry = LineSet265;

HAnimSegment239ZZZ.children[2] = Shape264;

HAnimJoint238YYY.children = new X3D.MFNode();

HAnimJoint238ZZZ.children[0] = HAnimSegment239;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.name = "l_talocalcaneonavicular";
HAnimJoint268.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint268.center = new X3D.SFVec3f([0.0783,0.0369,0.0049]);
HAnimJoint268.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint268.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment269 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment269.name = "l_navicular";
HAnimSegment269.DEF = "hanim_l_navicular";
let Shape270 = browser.currentScene.createNode("Shape");
let LineSet271 = browser.currentScene.createNode("LineSet");
LineSet271.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA272 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA272.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA272;

let Coordinate273 = browser.currentScene.createNode("Coordinate");
Coordinate273.point = new X3D.MFVec3f([0.0783,0.0369,0.0049,0.0888,0.09545,-0.01045]);
coord = Coordinate273;

geometry = LineSet271;

HAnimSegment269YYY.children = new X3D.MFNode();

HAnimSegment269ZZZ.children[0] = Shape270;

HAnimJoint268YYY.children = new X3D.MFNode();

HAnimJoint268ZZZ.children[0] = HAnimSegment269;

let HAnimJoint274 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint274.name = "l_cuneonavicular_1";
HAnimJoint274.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint274.center = new X3D.SFVec3f([0.0674,0.0321,0.0184]);
HAnimJoint274.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint274.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment275 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment275.name = "l_cuneiform_1";
HAnimSegment275.DEF = "hanim_l_cuneiform_1";
let Shape276 = browser.currentScene.createNode("Shape");
let LineSet277 = browser.currentScene.createNode("LineSet");
LineSet277.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA278 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA278.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA278;

let Coordinate279 = browser.currentScene.createNode("Coordinate");
Coordinate279.point = new X3D.MFVec3f([0.0674,0.0321,0.0184,0.0783,0.0369,0.0049]);
coord = Coordinate279;

geometry = LineSet277;

HAnimSegment275YYY.children = new X3D.MFNode();

HAnimSegment275ZZZ.children[0] = Shape276;

HAnimJoint274YYY.children = new X3D.MFNode();

HAnimJoint274ZZZ.children[0] = HAnimSegment275;

let HAnimJoint280 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint280.name = "l_tarsometatarsal_1";
HAnimJoint280.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint280.center = new X3D.SFVec3f([0.0646,0.02324,0.0442]);
HAnimJoint280.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint280.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment281 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment281.name = "l_metatarsal_1";
HAnimSegment281.DEF = "hanim_l_metatarsal_1";
let Shape282 = browser.currentScene.createNode("Shape");
let LineSet283 = browser.currentScene.createNode("LineSet");
LineSet283.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA284 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA284.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA284;

let Coordinate285 = browser.currentScene.createNode("Coordinate");
Coordinate285.point = new X3D.MFVec3f([0.0646,0.02324,0.0442,0.0674,0.0321,0.0184]);
coord = Coordinate285;

geometry = LineSet283;

HAnimSegment281YYY.children = new X3D.MFNode();

HAnimSegment281ZZZ.children[0] = Shape282;

HAnimJoint280YYY.children = new X3D.MFNode();

HAnimJoint280ZZZ.children[0] = HAnimSegment281;

let HAnimJoint286 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint286.name = "l_metatarsophalangeal_1";
HAnimJoint286.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint286.center = new X3D.SFVec3f([0.0621,0.01442,0.0936]);
HAnimJoint286.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint286.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment287 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment287.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment287.DEF = "hanim_l_tarsal_proximal_phalanx_1";
let HAnimSite288 = browser.currentScene.createNode("HAnimSite");
HAnimSite288.name = "l_metatarsal_phalanx_1";
HAnimSite288.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite288.translation = new X3D.SFVec3f([0.062,0.012,0.1]);
let TouchSensor289 = browser.currentScene.createNode("TouchSensor");
TouchSensor289.description = "HAnimSite 55 hanim_l_metatarsal_phalanx_1_pt";
HAnimSite288YYY.children = new X3D.MFNode();

HAnimSite288ZZZ.children[0] = TouchSensor289;

let Shape290 = browser.currentScene.createNode("Shape");
let Appearance291 = browser.currentScene.createNode("Appearance");
let Material292 = browser.currentScene.createNode("Material");
Material292.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material292;

appearance = Appearance291;

let IndexedFaceSet293 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet293.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet293.creaseAngle = 0.5;
IndexedFaceSet293.solid = False;
let ColorRGBA294 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA294.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA294;

let Coordinate295 = browser.currentScene.createNode("Coordinate");
Coordinate295.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate295;

geometry = IndexedFaceSet293;

HAnimSite288ZZZ.children[1] = Shape290;

let Billboard296 = browser.currentScene.createNode("Billboard");
Billboard296.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape297 = browser.currentScene.createNode("Shape");
let Text298 = browser.currentScene.createNode("Text");
Text298.string = new X3D.MFString([new X3D.SFString("55")]);
let FontStyle299 = browser.currentScene.createNode("FontStyle");
FontStyle299.size = 0.035;
fontStyle = FontStyle299;

geometry = Text298;

Billboard296YYY.children = new X3D.MFNode();

Billboard296ZZZ.children[0] = Shape297;

HAnimSite288ZZZ.children[2] = Billboard296;

HAnimSegment287YYY.children = new X3D.MFNode();

HAnimSegment287ZZZ.children[0] = HAnimSite288;

let Shape300 = browser.currentScene.createNode("Shape");
let LineSet301 = browser.currentScene.createNode("LineSet");
LineSet301.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA302 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA302.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA302;

let Coordinate303 = browser.currentScene.createNode("Coordinate");
Coordinate303.point = new X3D.MFVec3f([0.0621,0.01442,0.0936,0.0646,0.02324,0.0442]);
coord = Coordinate303;

geometry = LineSet301;

HAnimSegment287ZZZ.children[1] = Shape300;

HAnimJoint286YYY.children = new X3D.MFNode();

HAnimJoint286ZZZ.children[0] = HAnimSegment287;

let HAnimJoint304 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint304.name = "l_tarsal_interphalangeal_1";
HAnimJoint304.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint304.center = new X3D.SFVec3f([0.062,0.012,0.115]);
HAnimJoint304.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint304.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment305 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment305.name = "l_tarsal_distal_phalanx_1";
HAnimSegment305.DEF = "hanim_l_tarsal_distal_phalanx_1";
let HAnimSite306 = browser.currentScene.createNode("HAnimSite");
HAnimSite306.name = "l_tarsal_distal_phalanx_1";
HAnimSite306.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimSite306.translation = new X3D.SFVec3f([0.062,0.012,0.134]);
let TouchSensor307 = browser.currentScene.createNode("TouchSensor");
TouchSensor307.description = "HAnimSite 111 hanim_l_tarsal_distal_phalanx_1_tip";
HAnimSite306YYY.children = new X3D.MFNode();

HAnimSite306ZZZ.children[0] = TouchSensor307;

let Shape308 = browser.currentScene.createNode("Shape");
let Appearance309 = browser.currentScene.createNode("Appearance");
let Material310 = browser.currentScene.createNode("Material");
Material310.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material310;

appearance = Appearance309;

let IndexedFaceSet311 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet311.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet311.creaseAngle = 0.5;
IndexedFaceSet311.solid = False;
let ColorRGBA312 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA312.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA312;

let Coordinate313 = browser.currentScene.createNode("Coordinate");
Coordinate313.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate313;

geometry = IndexedFaceSet311;

HAnimSite306ZZZ.children[1] = Shape308;

let Billboard314 = browser.currentScene.createNode("Billboard");
Billboard314.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape315 = browser.currentScene.createNode("Shape");
let Text316 = browser.currentScene.createNode("Text");
Text316.string = new X3D.MFString([new X3D.SFString("111")]);
let FontStyle317 = browser.currentScene.createNode("FontStyle");
FontStyle317.size = 0.035;
fontStyle = FontStyle317;

geometry = Text316;

Billboard314YYY.children = new X3D.MFNode();

Billboard314ZZZ.children[0] = Shape315;

HAnimSite306ZZZ.children[2] = Billboard314;

HAnimSegment305YYY.children = new X3D.MFNode();

HAnimSegment305ZZZ.children[0] = HAnimSite306;

let Shape318 = browser.currentScene.createNode("Shape");
let LineSet319 = browser.currentScene.createNode("LineSet");
LineSet319.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA320 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA320.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA320;

let Coordinate321 = browser.currentScene.createNode("Coordinate");
Coordinate321.point = new X3D.MFVec3f([0.062,0.012,0.115,0.0621,0.01442,0.0936]);
coord = Coordinate321;

geometry = LineSet319;

HAnimSegment305ZZZ.children[1] = Shape318;

HAnimJoint304YYY.children = new X3D.MFNode();

HAnimJoint304ZZZ.children[0] = HAnimSegment305;

HAnimJoint286ZZZ.children[1] = HAnimJoint304;

HAnimJoint280ZZZ.children[1] = HAnimJoint286;

HAnimJoint274ZZZ.children[1] = HAnimJoint280;

HAnimJoint268ZZZ.children[1] = HAnimJoint274;

let HAnimJoint322 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint322.name = "l_cuneonavicular_2";
HAnimJoint322.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint322.center = new X3D.SFVec3f([0.0814,0.0335,0.02143]);
HAnimJoint322.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint322.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment323 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment323.name = "l_cuneiform_2";
HAnimSegment323.DEF = "hanim_l_cuneiform_2";
let Shape324 = browser.currentScene.createNode("Shape");
let LineSet325 = browser.currentScene.createNode("LineSet");
LineSet325.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA326 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA326.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA326;

let Coordinate327 = browser.currentScene.createNode("Coordinate");
Coordinate327.point = new X3D.MFVec3f([0.0814,0.0335,0.02143,0.0783,0.0369,0.0049]);
coord = Coordinate327;

geometry = LineSet325;

HAnimSegment323YYY.children = new X3D.MFNode();

HAnimSegment323ZZZ.children[0] = Shape324;

HAnimJoint322YYY.children = new X3D.MFNode();

HAnimJoint322ZZZ.children[0] = HAnimSegment323;

let HAnimJoint328 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint328.name = "l_tarsometatarsal_2";
HAnimJoint328.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint328.center = new X3D.SFVec3f([0.0802,0.0261,0.0411]);
HAnimJoint328.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint328.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment329 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment329.name = "l_metatarsal_2";
HAnimSegment329.DEF = "hanim_l_metatarsal_2";
let Shape330 = browser.currentScene.createNode("Shape");
let LineSet331 = browser.currentScene.createNode("LineSet");
LineSet331.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA332 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA332.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA332;

let Coordinate333 = browser.currentScene.createNode("Coordinate");
Coordinate333.point = new X3D.MFVec3f([0.0802,0.0261,0.0411,0.0814,0.0335,0.02143]);
coord = Coordinate333;

geometry = LineSet331;

HAnimSegment329YYY.children = new X3D.MFNode();

HAnimSegment329ZZZ.children[0] = Shape330;

HAnimJoint328YYY.children = new X3D.MFNode();

HAnimJoint328ZZZ.children[0] = HAnimSegment329;

let HAnimJoint334 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint334.name = "l_metatarsophalangeal_2";
HAnimJoint334.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint334.center = new X3D.SFVec3f([0.0825,0.01497,0.09783]);
HAnimJoint334.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint334.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment335 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment335.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment335.DEF = "hanim_l_tarsal_proximal_phalanx_2";
let Shape336 = browser.currentScene.createNode("Shape");
let LineSet337 = browser.currentScene.createNode("LineSet");
LineSet337.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA338 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA338.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA338;

let Coordinate339 = browser.currentScene.createNode("Coordinate");
Coordinate339.point = new X3D.MFVec3f([0.0825,0.01497,0.09783,0.0802,0.0261,0.0411]);
coord = Coordinate339;

geometry = LineSet337;

HAnimSegment335YYY.children = new X3D.MFNode();

HAnimSegment335ZZZ.children[0] = Shape336;

HAnimJoint334YYY.children = new X3D.MFNode();

HAnimJoint334ZZZ.children[0] = HAnimSegment335;

let HAnimJoint340 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint340.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint340.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint340.center = new X3D.SFVec3f([0.0843,0.01265,0.114]);
HAnimJoint340.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint340.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment341 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment341.name = "l_tarsal_middle_phalanx_2";
HAnimSegment341.DEF = "hanim_l_tarsal_middle_phalanx_2";
let Shape342 = browser.currentScene.createNode("Shape");
let LineSet343 = browser.currentScene.createNode("LineSet");
LineSet343.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA344 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA344.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA344;

let Coordinate345 = browser.currentScene.createNode("Coordinate");
Coordinate345.point = new X3D.MFVec3f([0.0843,0.01265,0.114,0.0825,0.01497,0.09783]);
coord = Coordinate345;

geometry = LineSet343;

HAnimSegment341YYY.children = new X3D.MFNode();

HAnimSegment341ZZZ.children[0] = Shape342;

HAnimJoint340YYY.children = new X3D.MFNode();

HAnimJoint340ZZZ.children[0] = HAnimSegment341;

let HAnimJoint346 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint346.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint346.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint346.center = new X3D.SFVec3f([0.0843,0.00982,0.123435]);
HAnimJoint346.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint346.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment347 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment347.name = "l_tarsal_distal_phalanx_2";
HAnimSegment347.DEF = "hanim_l_tarsal_distal_phalanx_2";
let HAnimSite348 = browser.currentScene.createNode("HAnimSite");
HAnimSite348.name = "l_tarsal_distal_phalanx_2";
HAnimSite348.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite348.translation = new X3D.SFVec3f([0.08,0.016,0.14]);
let TouchSensor349 = browser.currentScene.createNode("TouchSensor");
TouchSensor349.description = "HAnimSite 112 hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite348YYY.children = new X3D.MFNode();

HAnimSite348ZZZ.children[0] = TouchSensor349;

let Shape350 = browser.currentScene.createNode("Shape");
let Appearance351 = browser.currentScene.createNode("Appearance");
let Material352 = browser.currentScene.createNode("Material");
Material352.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material352;

appearance = Appearance351;

let IndexedFaceSet353 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet353.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet353.creaseAngle = 0.5;
IndexedFaceSet353.solid = False;
let ColorRGBA354 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA354.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA354;

let Coordinate355 = browser.currentScene.createNode("Coordinate");
Coordinate355.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate355;

geometry = IndexedFaceSet353;

HAnimSite348ZZZ.children[1] = Shape350;

let Billboard356 = browser.currentScene.createNode("Billboard");
Billboard356.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape357 = browser.currentScene.createNode("Shape");
let Text358 = browser.currentScene.createNode("Text");
Text358.string = new X3D.MFString([new X3D.SFString("112")]);
let FontStyle359 = browser.currentScene.createNode("FontStyle");
FontStyle359.size = 0.035;
fontStyle = FontStyle359;

geometry = Text358;

Billboard356YYY.children = new X3D.MFNode();

Billboard356ZZZ.children[0] = Shape357;

HAnimSite348ZZZ.children[2] = Billboard356;

HAnimSegment347YYY.children = new X3D.MFNode();

HAnimSegment347ZZZ.children[0] = HAnimSite348;

let Shape360 = browser.currentScene.createNode("Shape");
let LineSet361 = browser.currentScene.createNode("LineSet");
LineSet361.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA362 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA362.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA362;

let Coordinate363 = browser.currentScene.createNode("Coordinate");
Coordinate363.point = new X3D.MFVec3f([0.0843,0.00982,0.123435,0.0843,0.01265,0.114]);
coord = Coordinate363;

geometry = LineSet361;

HAnimSegment347ZZZ.children[1] = Shape360;

HAnimJoint346YYY.children = new X3D.MFNode();

HAnimJoint346ZZZ.children[0] = HAnimSegment347;

HAnimJoint340ZZZ.children[1] = HAnimJoint346;

HAnimJoint334ZZZ.children[1] = HAnimJoint340;

HAnimJoint328ZZZ.children[1] = HAnimJoint334;

HAnimJoint322ZZZ.children[1] = HAnimJoint328;

HAnimJoint268ZZZ.children[2] = HAnimJoint322;

let HAnimJoint364 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint364.name = "l_cuneonavicular_3";
HAnimJoint364.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint364.center = new X3D.SFVec3f([0.09297,0.0334,0.01982]);
HAnimJoint364.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint364.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment365 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment365.name = "l_cuneiform_3";
HAnimSegment365.DEF = "hanim_l_cuneiform_3";
let Shape366 = browser.currentScene.createNode("Shape");
let LineSet367 = browser.currentScene.createNode("LineSet");
LineSet367.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA368 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA368.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA368;

let Coordinate369 = browser.currentScene.createNode("Coordinate");
Coordinate369.point = new X3D.MFVec3f([0.09297,0.0334,0.01982,0.0783,0.0369,0.0049]);
coord = Coordinate369;

geometry = LineSet367;

HAnimSegment365YYY.children = new X3D.MFNode();

HAnimSegment365ZZZ.children[0] = Shape366;

HAnimJoint364YYY.children = new X3D.MFNode();

HAnimJoint364ZZZ.children[0] = HAnimSegment365;

let HAnimJoint370 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint370.name = "l_tarsometatarsal_3";
HAnimJoint370.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint370.center = new X3D.SFVec3f([0.09459,0.0261,0.0394]);
HAnimJoint370.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint370.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment371 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment371.name = "l_metatarsal_3";
HAnimSegment371.DEF = "hanim_l_metatarsal_3";
let Shape372 = browser.currentScene.createNode("Shape");
let LineSet373 = browser.currentScene.createNode("LineSet");
LineSet373.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA374 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA374.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA374;

let Coordinate375 = browser.currentScene.createNode("Coordinate");
Coordinate375.point = new X3D.MFVec3f([0.09459,0.0261,0.0394,0.09297,0.0334,0.01982]);
coord = Coordinate375;

geometry = LineSet373;

HAnimSegment371YYY.children = new X3D.MFNode();

HAnimSegment371ZZZ.children[0] = Shape372;

HAnimJoint370YYY.children = new X3D.MFNode();

HAnimJoint370ZZZ.children[0] = HAnimSegment371;

let HAnimJoint376 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint376.name = "l_metatarsophalangeal_3";
HAnimJoint376.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint376.center = new X3D.SFVec3f([0.0965,0.01505,0.0954]);
HAnimJoint376.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint376.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment377 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment377.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment377.DEF = "hanim_l_tarsal_proximal_phalanx_3";
let Shape378 = browser.currentScene.createNode("Shape");
let LineSet379 = browser.currentScene.createNode("LineSet");
LineSet379.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA380 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA380.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA380;

let Coordinate381 = browser.currentScene.createNode("Coordinate");
Coordinate381.point = new X3D.MFVec3f([0.0965,0.01505,0.0954,0.09459,0.0261,0.0394]);
coord = Coordinate381;

geometry = LineSet379;

HAnimSegment377YYY.children = new X3D.MFNode();

HAnimSegment377ZZZ.children[0] = Shape378;

HAnimJoint376YYY.children = new X3D.MFNode();

HAnimJoint376ZZZ.children[0] = HAnimSegment377;

let HAnimJoint382 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint382.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint382.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint382.center = new X3D.SFVec3f([0.09886,0.01192,0.11047]);
HAnimJoint382.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint382.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment383 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment383.name = "l_tarsal_middle_phalanx_3";
HAnimSegment383.DEF = "hanim_l_tarsal_middle_phalanx_3";
let Shape384 = browser.currentScene.createNode("Shape");
let LineSet385 = browser.currentScene.createNode("LineSet");
LineSet385.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA386 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA386.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA386;

let Coordinate387 = browser.currentScene.createNode("Coordinate");
Coordinate387.point = new X3D.MFVec3f([0.09886,0.01192,0.11047,0.0965,0.01505,0.0954]);
coord = Coordinate387;

geometry = LineSet385;

HAnimSegment383YYY.children = new X3D.MFNode();

HAnimSegment383ZZZ.children[0] = Shape384;

HAnimJoint382YYY.children = new X3D.MFNode();

HAnimJoint382ZZZ.children[0] = HAnimSegment383;

let HAnimJoint388 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint388.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint388.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint388.center = new X3D.SFVec3f([0.1004,0.00983,0.1197]);
HAnimJoint388.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint388.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment389 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment389.name = "l_tarsal_distal_phalanx_3";
HAnimSegment389.DEF = "hanim_l_tarsal_distal_phalanx_3";
let HAnimSite390 = browser.currentScene.createNode("HAnimSite");
HAnimSite390.name = "l_tarsal_distal_phalanx_3";
HAnimSite390.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimSite390.translation = new X3D.SFVec3f([0.1,0.016,0.14]);
let TouchSensor391 = browser.currentScene.createNode("TouchSensor");
TouchSensor391.description = "HAnimSite 113 hanim_l_tarsal_distal_phalanx_3_tip";
HAnimSite390YYY.children = new X3D.MFNode();

HAnimSite390ZZZ.children[0] = TouchSensor391;

let Shape392 = browser.currentScene.createNode("Shape");
let Appearance393 = browser.currentScene.createNode("Appearance");
let Material394 = browser.currentScene.createNode("Material");
Material394.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material394;

appearance = Appearance393;

let IndexedFaceSet395 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet395.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet395.creaseAngle = 0.5;
IndexedFaceSet395.solid = False;
let ColorRGBA396 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA396.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA396;

let Coordinate397 = browser.currentScene.createNode("Coordinate");
Coordinate397.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate397;

geometry = IndexedFaceSet395;

HAnimSite390ZZZ.children[1] = Shape392;

let Billboard398 = browser.currentScene.createNode("Billboard");
Billboard398.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape399 = browser.currentScene.createNode("Shape");
let Text400 = browser.currentScene.createNode("Text");
Text400.string = new X3D.MFString([new X3D.SFString("113")]);
let FontStyle401 = browser.currentScene.createNode("FontStyle");
FontStyle401.size = 0.035;
fontStyle = FontStyle401;

geometry = Text400;

Billboard398YYY.children = new X3D.MFNode();

Billboard398ZZZ.children[0] = Shape399;

HAnimSite390ZZZ.children[2] = Billboard398;

HAnimSegment389YYY.children = new X3D.MFNode();

HAnimSegment389ZZZ.children[0] = HAnimSite390;

let Shape402 = browser.currentScene.createNode("Shape");
let LineSet403 = browser.currentScene.createNode("LineSet");
LineSet403.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA404 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA404.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA404;

let Coordinate405 = browser.currentScene.createNode("Coordinate");
Coordinate405.point = new X3D.MFVec3f([0.1004,0.00983,0.1197,0.09886,0.01192,0.11047]);
coord = Coordinate405;

geometry = LineSet403;

HAnimSegment389ZZZ.children[1] = Shape402;

HAnimJoint388YYY.children = new X3D.MFNode();

HAnimJoint388ZZZ.children[0] = HAnimSegment389;

HAnimJoint382ZZZ.children[1] = HAnimJoint388;

HAnimJoint376ZZZ.children[1] = HAnimJoint382;

HAnimJoint370ZZZ.children[1] = HAnimJoint376;

HAnimJoint364ZZZ.children[1] = HAnimJoint370;

HAnimJoint268ZZZ.children[3] = HAnimJoint364;

HAnimJoint238ZZZ.children[1] = HAnimJoint268;

let HAnimJoint406 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint406.name = "l_calcaneocuboid";
HAnimJoint406.DEF = "hanim_l_calcaneocuboid";
HAnimJoint406.center = new X3D.SFVec3f([0.0891,0.05798,-0.0259]);
HAnimJoint406.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint406.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment407 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment407.name = "l_calcaneus";
HAnimSegment407.DEF = "hanim_l_calcaneus";
let Shape408 = browser.currentScene.createNode("Shape");
let LineSet409 = browser.currentScene.createNode("LineSet");
LineSet409.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA410 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA410.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA410;

let Coordinate411 = browser.currentScene.createNode("Coordinate");
Coordinate411.point = new X3D.MFVec3f([0.0891,0.05798,-0.0259,0.0888,0.09545,-0.01045]);
coord = Coordinate411;

geometry = LineSet409;

HAnimSegment407YYY.children = new X3D.MFNode();

HAnimSegment407ZZZ.children[0] = Shape408;

HAnimJoint406YYY.children = new X3D.MFNode();

HAnimJoint406ZZZ.children[0] = HAnimSegment407;

let HAnimJoint412 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint412.name = "l_transversetarsal";
HAnimJoint412.DEF = "hanim_l_transversetarsal";
HAnimJoint412.center = new X3D.SFVec3f([0.11063,0.03528,0.0021]);
HAnimJoint412.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint412.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment413 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment413.name = "l_cuboid";
HAnimSegment413.DEF = "hanim_l_cuboid";
let Shape414 = browser.currentScene.createNode("Shape");
let LineSet415 = browser.currentScene.createNode("LineSet");
LineSet415.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA416 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA416.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA416;

let Coordinate417 = browser.currentScene.createNode("Coordinate");
Coordinate417.point = new X3D.MFVec3f([0.11063,0.03528,0.0021,0.0891,0.05798,-0.0259]);
coord = Coordinate417;

geometry = LineSet415;

HAnimSegment413YYY.children = new X3D.MFNode();

HAnimSegment413ZZZ.children[0] = Shape414;

HAnimJoint412YYY.children = new X3D.MFNode();

HAnimJoint412ZZZ.children[0] = HAnimSegment413;

let HAnimJoint418 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint418.name = "l_tarsometatarsal_4";
HAnimJoint418.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint418.center = new X3D.SFVec3f([0.10649,0.02454,0.03843]);
HAnimJoint418.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint418.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment419 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment419.name = "l_metatarsal_4";
HAnimSegment419.DEF = "hanim_l_metatarsal_4";
let Shape420 = browser.currentScene.createNode("Shape");
let LineSet421 = browser.currentScene.createNode("LineSet");
LineSet421.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA422 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA422.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA422;

let Coordinate423 = browser.currentScene.createNode("Coordinate");
Coordinate423.point = new X3D.MFVec3f([0.10649,0.02454,0.03843,0.11063,0.03528,0.0021]);
coord = Coordinate423;

geometry = LineSet421;

HAnimSegment419YYY.children = new X3D.MFNode();

HAnimSegment419ZZZ.children[0] = Shape420;

HAnimJoint418YYY.children = new X3D.MFNode();

HAnimJoint418ZZZ.children[0] = HAnimSegment419;

let HAnimJoint424 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint424.name = "l_metatarsophalangeal_4";
HAnimJoint424.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint424.center = new X3D.SFVec3f([0.109867,0.01435,0.09117]);
HAnimJoint424.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint424.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment425 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment425.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment425.DEF = "hanim_l_tarsal_proximal_phalanx_4";
let Shape426 = browser.currentScene.createNode("Shape");
let LineSet427 = browser.currentScene.createNode("LineSet");
LineSet427.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA428 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA428.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA428;

let Coordinate429 = browser.currentScene.createNode("Coordinate");
Coordinate429.point = new X3D.MFVec3f([0.109867,0.01435,0.09117,0.10649,0.02454,0.03843]);
coord = Coordinate429;

geometry = LineSet427;

HAnimSegment425YYY.children = new X3D.MFNode();

HAnimSegment425ZZZ.children[0] = Shape426;

HAnimJoint424YYY.children = new X3D.MFNode();

HAnimJoint424ZZZ.children[0] = HAnimSegment425;

let HAnimJoint430 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint430.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint430.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint430.center = new X3D.SFVec3f([0.11416,0.01224,0.10631]);
HAnimJoint430.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint430.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment431 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment431.name = "l_tarsal_middle_phalanx_4";
HAnimSegment431.DEF = "hanim_l_tarsal_middle_phalanx_4";
let Shape432 = browser.currentScene.createNode("Shape");
let LineSet433 = browser.currentScene.createNode("LineSet");
LineSet433.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA434 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA434.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA434;

let Coordinate435 = browser.currentScene.createNode("Coordinate");
Coordinate435.point = new X3D.MFVec3f([0.11416,0.01224,0.10631,0.109867,0.01435,0.09117]);
coord = Coordinate435;

geometry = LineSet433;

HAnimSegment431YYY.children = new X3D.MFNode();

HAnimSegment431ZZZ.children[0] = Shape432;

HAnimJoint430YYY.children = new X3D.MFNode();

HAnimJoint430ZZZ.children[0] = HAnimSegment431;

let HAnimJoint436 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint436.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint436.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint436.center = new X3D.SFVec3f([0.11567,0.00936,0.11369]);
HAnimJoint436.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint436.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment437 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment437.name = "l_tarsal_distal_phalanx_4";
HAnimSegment437.DEF = "hanim_l_tarsal_distal_phalanx_4";
let HAnimSite438 = browser.currentScene.createNode("HAnimSite");
HAnimSite438.name = "l_tarsal_distal_phalanx_4";
HAnimSite438.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimSite438.translation = new X3D.SFVec3f([0.115,0.016,0.13]);
let TouchSensor439 = browser.currentScene.createNode("TouchSensor");
TouchSensor439.description = "HAnimSite 114 hanim_l_tarsal_distal_phalanx_4_tip";
HAnimSite438YYY.children = new X3D.MFNode();

HAnimSite438ZZZ.children[0] = TouchSensor439;

let Shape440 = browser.currentScene.createNode("Shape");
let Appearance441 = browser.currentScene.createNode("Appearance");
let Material442 = browser.currentScene.createNode("Material");
Material442.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material442;

appearance = Appearance441;

let IndexedFaceSet443 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet443.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet443.creaseAngle = 0.5;
IndexedFaceSet443.solid = False;
let ColorRGBA444 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA444.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA444;

let Coordinate445 = browser.currentScene.createNode("Coordinate");
Coordinate445.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate445;

geometry = IndexedFaceSet443;

HAnimSite438ZZZ.children[1] = Shape440;

let Billboard446 = browser.currentScene.createNode("Billboard");
Billboard446.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape447 = browser.currentScene.createNode("Shape");
let Text448 = browser.currentScene.createNode("Text");
Text448.string = new X3D.MFString([new X3D.SFString("114")]);
let FontStyle449 = browser.currentScene.createNode("FontStyle");
FontStyle449.size = 0.035;
fontStyle = FontStyle449;

geometry = Text448;

Billboard446YYY.children = new X3D.MFNode();

Billboard446ZZZ.children[0] = Shape447;

HAnimSite438ZZZ.children[2] = Billboard446;

HAnimSegment437YYY.children = new X3D.MFNode();

HAnimSegment437ZZZ.children[0] = HAnimSite438;

let Shape450 = browser.currentScene.createNode("Shape");
let LineSet451 = browser.currentScene.createNode("LineSet");
LineSet451.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA452 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA452.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA452;

let Coordinate453 = browser.currentScene.createNode("Coordinate");
Coordinate453.point = new X3D.MFVec3f([0.11567,0.00936,0.11369,0.11416,0.01224,0.10631]);
coord = Coordinate453;

geometry = LineSet451;

HAnimSegment437ZZZ.children[1] = Shape450;

HAnimJoint436YYY.children = new X3D.MFNode();

HAnimJoint436ZZZ.children[0] = HAnimSegment437;

HAnimJoint430ZZZ.children[1] = HAnimJoint436;

HAnimJoint424ZZZ.children[1] = HAnimJoint430;

HAnimJoint418ZZZ.children[1] = HAnimJoint424;

HAnimJoint412ZZZ.children[1] = HAnimJoint418;

let HAnimJoint454 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint454.name = "l_tarsometatarsal_5";
HAnimJoint454.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint454.center = new X3D.SFVec3f([0.1208,0.02094,0.03474]);
HAnimJoint454.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint454.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment455 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment455.name = "l_metatarsal_5";
HAnimSegment455.DEF = "hanim_l_metatarsal_5";
let Shape456 = browser.currentScene.createNode("Shape");
let LineSet457 = browser.currentScene.createNode("LineSet");
LineSet457.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA458 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA458.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA458;

let Coordinate459 = browser.currentScene.createNode("Coordinate");
Coordinate459.point = new X3D.MFVec3f([0.1208,0.02094,0.03474,0.11063,0.03528,0.0021]);
coord = Coordinate459;

geometry = LineSet457;

HAnimSegment455YYY.children = new X3D.MFNode();

HAnimSegment455ZZZ.children[0] = Shape456;

HAnimJoint454YYY.children = new X3D.MFNode();

HAnimJoint454ZZZ.children[0] = HAnimSegment455;

let HAnimJoint460 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint460.name = "l_metatarsophalangeal_5";
HAnimJoint460.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint460.center = new X3D.SFVec3f([0.124065,0.01367,0.08656]);
HAnimJoint460.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint460.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment461 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment461.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment461.DEF = "hanim_l_tarsal_proximal_phalanx_5";
let Shape462 = browser.currentScene.createNode("Shape");
let LineSet463 = browser.currentScene.createNode("LineSet");
LineSet463.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA464 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA464.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA464;

let Coordinate465 = browser.currentScene.createNode("Coordinate");
Coordinate465.point = new X3D.MFVec3f([0.124065,0.01367,0.08656,0.1208,0.02094,0.03474]);
coord = Coordinate465;

geometry = LineSet463;

HAnimSegment461YYY.children = new X3D.MFNode();

HAnimSegment461ZZZ.children[0] = Shape462;

HAnimJoint460YYY.children = new X3D.MFNode();

HAnimJoint460ZZZ.children[0] = HAnimSegment461;

let HAnimJoint466 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint466.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint466.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint466.center = new X3D.SFVec3f([0.12638,0.01086,0.09414]);
HAnimJoint466.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint466.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment467 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment467.name = "l_tarsal_middle_phalanx_5";
HAnimSegment467.DEF = "hanim_l_tarsal_middle_phalanx_5";
let HAnimSite468 = browser.currentScene.createNode("HAnimSite");
HAnimSite468.name = "l_metatarsal_phalanx_5";
HAnimSite468.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite468.translation = new X3D.SFVec3f([0.12,0.02,0.04]);
let TouchSensor469 = browser.currentScene.createNode("TouchSensor");
TouchSensor469.description = "HAnimSite 56 hanim_l_metatarsal_phalanx_5_pt";
HAnimSite468YYY.children = new X3D.MFNode();

HAnimSite468ZZZ.children[0] = TouchSensor469;

let Shape470 = browser.currentScene.createNode("Shape");
let Appearance471 = browser.currentScene.createNode("Appearance");
let Material472 = browser.currentScene.createNode("Material");
Material472.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material472;

appearance = Appearance471;

let IndexedFaceSet473 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet473.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet473.creaseAngle = 0.5;
IndexedFaceSet473.solid = False;
let ColorRGBA474 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA474.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA474;

let Coordinate475 = browser.currentScene.createNode("Coordinate");
Coordinate475.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate475;

geometry = IndexedFaceSet473;

HAnimSite468ZZZ.children[1] = Shape470;

let Billboard476 = browser.currentScene.createNode("Billboard");
Billboard476.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape477 = browser.currentScene.createNode("Shape");
let Text478 = browser.currentScene.createNode("Text");
Text478.string = new X3D.MFString([new X3D.SFString("56")]);
let FontStyle479 = browser.currentScene.createNode("FontStyle");
FontStyle479.size = 0.035;
fontStyle = FontStyle479;

geometry = Text478;

Billboard476YYY.children = new X3D.MFNode();

Billboard476ZZZ.children[0] = Shape477;

HAnimSite468ZZZ.children[2] = Billboard476;

HAnimSegment467YYY.children = new X3D.MFNode();

HAnimSegment467ZZZ.children[0] = HAnimSite468;

let Shape480 = browser.currentScene.createNode("Shape");
let LineSet481 = browser.currentScene.createNode("LineSet");
LineSet481.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA482 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA482.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA482;

let Coordinate483 = browser.currentScene.createNode("Coordinate");
Coordinate483.point = new X3D.MFVec3f([0.12638,0.01086,0.09414,0.124065,0.01367,0.08656]);
coord = Coordinate483;

geometry = LineSet481;

HAnimSegment467ZZZ.children[1] = Shape480;

HAnimJoint466YYY.children = new X3D.MFNode();

HAnimJoint466ZZZ.children[0] = HAnimSegment467;

let HAnimJoint484 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint484.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint484.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint484.center = new X3D.SFVec3f([0.12728,0.00856,0.10188]);
HAnimJoint484.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint484.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment485 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment485.name = "l_tarsal_distal_phalanx_5";
HAnimSegment485.DEF = "hanim_l_tarsal_distal_phalanx_5";
let HAnimSite486 = browser.currentScene.createNode("HAnimSite");
HAnimSite486.name = "l_tarsal_distal_phalanx_5";
HAnimSite486.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimSite486.translation = new X3D.SFVec3f([0.125,0.016,0.115]);
let TouchSensor487 = browser.currentScene.createNode("TouchSensor");
TouchSensor487.description = "HAnimSite 115 hanim_l_tarsal_distal_phalanx_5_tip";
HAnimSite486YYY.children = new X3D.MFNode();

HAnimSite486ZZZ.children[0] = TouchSensor487;

let Shape488 = browser.currentScene.createNode("Shape");
let Appearance489 = browser.currentScene.createNode("Appearance");
let Material490 = browser.currentScene.createNode("Material");
Material490.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material490;

appearance = Appearance489;

let IndexedFaceSet491 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet491.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet491.creaseAngle = 0.5;
IndexedFaceSet491.solid = False;
let ColorRGBA492 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA492.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA492;

let Coordinate493 = browser.currentScene.createNode("Coordinate");
Coordinate493.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate493;

geometry = IndexedFaceSet491;

HAnimSite486ZZZ.children[1] = Shape488;

let Billboard494 = browser.currentScene.createNode("Billboard");
Billboard494.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape495 = browser.currentScene.createNode("Shape");
let Text496 = browser.currentScene.createNode("Text");
Text496.string = new X3D.MFString([new X3D.SFString("115")]);
let FontStyle497 = browser.currentScene.createNode("FontStyle");
FontStyle497.size = 0.035;
fontStyle = FontStyle497;

geometry = Text496;

Billboard494YYY.children = new X3D.MFNode();

Billboard494ZZZ.children[0] = Shape495;

HAnimSite486ZZZ.children[2] = Billboard494;

HAnimSegment485YYY.children = new X3D.MFNode();

HAnimSegment485ZZZ.children[0] = HAnimSite486;

let Shape498 = browser.currentScene.createNode("Shape");
let LineSet499 = browser.currentScene.createNode("LineSet");
LineSet499.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA500 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA500.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA500;

let Coordinate501 = browser.currentScene.createNode("Coordinate");
Coordinate501.point = new X3D.MFVec3f([0.12728,0.00856,0.10188,0.12638,0.01086,0.09414]);
coord = Coordinate501;

geometry = LineSet499;

HAnimSegment485ZZZ.children[1] = Shape498;

HAnimJoint484YYY.children = new X3D.MFNode();

HAnimJoint484ZZZ.children[0] = HAnimSegment485;

HAnimJoint466ZZZ.children[1] = HAnimJoint484;

HAnimJoint460ZZZ.children[1] = HAnimJoint466;

HAnimJoint454ZZZ.children[1] = HAnimJoint460;

HAnimJoint412ZZZ.children[2] = HAnimJoint454;

HAnimJoint406ZZZ.children[1] = HAnimJoint412;

HAnimJoint238ZZZ.children[2] = HAnimJoint406;

HAnimJoint196ZZZ.children[1] = HAnimJoint238;

HAnimJoint142ZZZ.children[1] = HAnimJoint196;

HAnimJoint16ZZZ.children[1] = HAnimJoint142;

let HAnimJoint502 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint502.name = "r_hip";
HAnimJoint502.DEF = "hanim_r_hip";
HAnimJoint502.center = new X3D.SFVec3f([-0.09466,0.82665,-0.01835]);
HAnimJoint502.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint502.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment503 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment503.name = "r_thigh";
HAnimSegment503.DEF = "hanim_r_thigh";
let HAnimSite504 = browser.currentScene.createNode("HAnimSite");
HAnimSite504.name = "r_knee_crease";
HAnimSite504.DEF = "hanim_r_knee_crease_pt";
HAnimSite504.translation = new X3D.SFVec3f([-0.09,0.41,-0.056]);
let TouchSensor505 = browser.currentScene.createNode("TouchSensor");
TouchSensor505.description = "HAnimSite 91 hanim_r_knee_crease_pt";
HAnimSite504YYY.children = new X3D.MFNode();

HAnimSite504ZZZ.children[0] = TouchSensor505;

let Shape506 = browser.currentScene.createNode("Shape");
let Appearance507 = browser.currentScene.createNode("Appearance");
let Material508 = browser.currentScene.createNode("Material");
Material508.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material508;

appearance = Appearance507;

let IndexedFaceSet509 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet509.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet509.creaseAngle = 0.5;
IndexedFaceSet509.solid = False;
let ColorRGBA510 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA510.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA510;

let Coordinate511 = browser.currentScene.createNode("Coordinate");
Coordinate511.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate511;

geometry = IndexedFaceSet509;

HAnimSite504ZZZ.children[1] = Shape506;

let Billboard512 = browser.currentScene.createNode("Billboard");
Billboard512.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape513 = browser.currentScene.createNode("Shape");
let Text514 = browser.currentScene.createNode("Text");
Text514.string = new X3D.MFString([new X3D.SFString("91")]);
let FontStyle515 = browser.currentScene.createNode("FontStyle");
FontStyle515.size = 0.035;
fontStyle = FontStyle515;

geometry = Text514;

Billboard512YYY.children = new X3D.MFNode();

Billboard512ZZZ.children[0] = Shape513;

HAnimSite504ZZZ.children[2] = Billboard512;

HAnimSegment503YYY.children = new X3D.MFNode();

HAnimSegment503ZZZ.children[0] = HAnimSite504;

let HAnimSite516 = browser.currentScene.createNode("HAnimSite");
HAnimSite516.name = "r_femoral_medial_epicondyle";
HAnimSite516.DEF = "hanim_r_femoral_medial_epicondyle_pt";
HAnimSite516.translation = new X3D.SFVec3f([-0.039,0.41,-0.01]);
let TouchSensor517 = browser.currentScene.createNode("TouchSensor");
TouchSensor517.description = "HAnimSite 44 hanim_r_femoral_medial_epicondyle_pt";
HAnimSite516YYY.children = new X3D.MFNode();

HAnimSite516ZZZ.children[0] = TouchSensor517;

let Shape518 = browser.currentScene.createNode("Shape");
let Appearance519 = browser.currentScene.createNode("Appearance");
let Material520 = browser.currentScene.createNode("Material");
Material520.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material520;

appearance = Appearance519;

let IndexedFaceSet521 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet521.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet521.creaseAngle = 0.5;
IndexedFaceSet521.solid = False;
let ColorRGBA522 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA522.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA522;

let Coordinate523 = browser.currentScene.createNode("Coordinate");
Coordinate523.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate523;

geometry = IndexedFaceSet521;

HAnimSite516ZZZ.children[1] = Shape518;

let Billboard524 = browser.currentScene.createNode("Billboard");
Billboard524.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape525 = browser.currentScene.createNode("Shape");
let Text526 = browser.currentScene.createNode("Text");
Text526.string = new X3D.MFString([new X3D.SFString("44")]);
let FontStyle527 = browser.currentScene.createNode("FontStyle");
FontStyle527.size = 0.035;
fontStyle = FontStyle527;

geometry = Text526;

Billboard524YYY.children = new X3D.MFNode();

Billboard524ZZZ.children[0] = Shape525;

HAnimSite516ZZZ.children[2] = Billboard524;

HAnimSegment503ZZZ.children[1] = HAnimSite516;

let HAnimSite528 = browser.currentScene.createNode("HAnimSite");
HAnimSite528.name = "r_femoral_lateral_epicondyle";
HAnimSite528.DEF = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite528.translation = new X3D.SFVec3f([-0.127,0.41,-0.01]);
let TouchSensor529 = browser.currentScene.createNode("TouchSensor");
TouchSensor529.description = "HAnimSite 43 hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite528YYY.children = new X3D.MFNode();

HAnimSite528ZZZ.children[0] = TouchSensor529;

let Shape530 = browser.currentScene.createNode("Shape");
let Appearance531 = browser.currentScene.createNode("Appearance");
let Material532 = browser.currentScene.createNode("Material");
Material532.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material532;

appearance = Appearance531;

let IndexedFaceSet533 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet533.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet533.creaseAngle = 0.5;
IndexedFaceSet533.solid = False;
let ColorRGBA534 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA534.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA534;

let Coordinate535 = browser.currentScene.createNode("Coordinate");
Coordinate535.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate535;

geometry = IndexedFaceSet533;

HAnimSite528ZZZ.children[1] = Shape530;

let Billboard536 = browser.currentScene.createNode("Billboard");
Billboard536.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape537 = browser.currentScene.createNode("Shape");
let Text538 = browser.currentScene.createNode("Text");
Text538.string = new X3D.MFString([new X3D.SFString("43")]);
let FontStyle539 = browser.currentScene.createNode("FontStyle");
FontStyle539.size = 0.035;
fontStyle = FontStyle539;

geometry = Text538;

Billboard536YYY.children = new X3D.MFNode();

Billboard536ZZZ.children[0] = Shape537;

HAnimSite528ZZZ.children[2] = Billboard536;

HAnimSegment503ZZZ.children[2] = HAnimSite528;

let HAnimSite540 = browser.currentScene.createNode("HAnimSite");
HAnimSite540.name = "r_suprapatella";
HAnimSite540.DEF = "hanim_r_suprapatella_pt";
HAnimSite540.translation = new X3D.SFVec3f([-0.085,0.41,0.042]);
let TouchSensor541 = browser.currentScene.createNode("TouchSensor");
TouchSensor541.description = "HAnimSite 45 hanim_r_suprapatella_pt";
HAnimSite540YYY.children = new X3D.MFNode();

HAnimSite540ZZZ.children[0] = TouchSensor541;

let Shape542 = browser.currentScene.createNode("Shape");
let Appearance543 = browser.currentScene.createNode("Appearance");
let Material544 = browser.currentScene.createNode("Material");
Material544.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material544;

appearance = Appearance543;

let IndexedFaceSet545 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet545.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet545.creaseAngle = 0.5;
IndexedFaceSet545.solid = False;
let ColorRGBA546 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA546.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA546;

let Coordinate547 = browser.currentScene.createNode("Coordinate");
Coordinate547.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate547;

geometry = IndexedFaceSet545;

HAnimSite540ZZZ.children[1] = Shape542;

let Billboard548 = browser.currentScene.createNode("Billboard");
Billboard548.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape549 = browser.currentScene.createNode("Shape");
let Text550 = browser.currentScene.createNode("Text");
Text550.string = new X3D.MFString([new X3D.SFString("45")]);
let FontStyle551 = browser.currentScene.createNode("FontStyle");
FontStyle551.size = 0.035;
fontStyle = FontStyle551;

geometry = Text550;

Billboard548YYY.children = new X3D.MFNode();

Billboard548ZZZ.children[0] = Shape549;

HAnimSite540ZZZ.children[2] = Billboard548;

HAnimSegment503ZZZ.children[3] = HAnimSite540;

let Shape552 = browser.currentScene.createNode("Shape");
let LineSet553 = browser.currentScene.createNode("LineSet");
LineSet553.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA554 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA554.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA554;

let Coordinate555 = browser.currentScene.createNode("Coordinate");
Coordinate555.point = new X3D.MFVec3f([-0.09466,0.82665,-0.01835,0,0.826,0.02]);
coord = Coordinate555;

geometry = LineSet553;

HAnimSegment503ZZZ.children[4] = Shape552;

HAnimJoint502YYY.children = new X3D.MFNode();

HAnimJoint502ZZZ.children[0] = HAnimSegment503;

let HAnimJoint556 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint556.name = "r_knee";
HAnimJoint556.DEF = "hanim_r_knee";
HAnimJoint556.center = new X3D.SFVec3f([-0.0926,0.408825,-0.01944]);
HAnimJoint556.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint556.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment557 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment557.name = "r_calf";
HAnimSegment557.DEF = "hanim_r_calf";
let HAnimSite558 = browser.currentScene.createNode("HAnimSite");
HAnimSite558.name = "r_tibiale";
HAnimSite558.DEF = "hanim_r_tibiale_pt";
HAnimSite558.translation = new X3D.SFVec3f([-0.09,0.31,0.038]);
let TouchSensor559 = browser.currentScene.createNode("TouchSensor");
TouchSensor559.description = "HAnimSite 51 hanim_r_tibiale_pt";
HAnimSite558YYY.children = new X3D.MFNode();

HAnimSite558ZZZ.children[0] = TouchSensor559;

let Shape560 = browser.currentScene.createNode("Shape");
let Appearance561 = browser.currentScene.createNode("Appearance");
let Material562 = browser.currentScene.createNode("Material");
Material562.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material562;

appearance = Appearance561;

let IndexedFaceSet563 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet563.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet563.creaseAngle = 0.5;
IndexedFaceSet563.solid = False;
let ColorRGBA564 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA564.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA564;

let Coordinate565 = browser.currentScene.createNode("Coordinate");
Coordinate565.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate565;

geometry = IndexedFaceSet563;

HAnimSite558ZZZ.children[1] = Shape560;

let Billboard566 = browser.currentScene.createNode("Billboard");
Billboard566.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape567 = browser.currentScene.createNode("Shape");
let Text568 = browser.currentScene.createNode("Text");
Text568.string = new X3D.MFString([new X3D.SFString("51")]);
let FontStyle569 = browser.currentScene.createNode("FontStyle");
FontStyle569.size = 0.035;
fontStyle = FontStyle569;

geometry = Text568;

Billboard566YYY.children = new X3D.MFNode();

Billboard566ZZZ.children[0] = Shape567;

HAnimSite558ZZZ.children[2] = Billboard566;

HAnimSegment557YYY.children = new X3D.MFNode();

HAnimSegment557ZZZ.children[0] = HAnimSite558;

let HAnimSite570 = browser.currentScene.createNode("HAnimSite");
HAnimSite570.name = "r_medial_malleolus";
HAnimSite570.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite570.translation = new X3D.SFVec3f([-0.061,0.095,-0.02]);
let TouchSensor571 = browser.currentScene.createNode("TouchSensor");
TouchSensor571.description = "HAnimSite 52 hanim_r_medial_malleolus_pt";
HAnimSite570YYY.children = new X3D.MFNode();

HAnimSite570ZZZ.children[0] = TouchSensor571;

let Shape572 = browser.currentScene.createNode("Shape");
let Appearance573 = browser.currentScene.createNode("Appearance");
let Material574 = browser.currentScene.createNode("Material");
Material574.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material574;

appearance = Appearance573;

let IndexedFaceSet575 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet575.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet575.creaseAngle = 0.5;
IndexedFaceSet575.solid = False;
let ColorRGBA576 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA576.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA576;

let Coordinate577 = browser.currentScene.createNode("Coordinate");
Coordinate577.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate577;

geometry = IndexedFaceSet575;

HAnimSite570ZZZ.children[1] = Shape572;

let Billboard578 = browser.currentScene.createNode("Billboard");
Billboard578.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape579 = browser.currentScene.createNode("Shape");
let Text580 = browser.currentScene.createNode("Text");
Text580.string = new X3D.MFString([new X3D.SFString("52")]);
let FontStyle581 = browser.currentScene.createNode("FontStyle");
FontStyle581.size = 0.035;
fontStyle = FontStyle581;

geometry = Text580;

Billboard578YYY.children = new X3D.MFNode();

Billboard578ZZZ.children[0] = Shape579;

HAnimSite570ZZZ.children[2] = Billboard578;

HAnimSegment557ZZZ.children[1] = HAnimSite570;

let HAnimSite582 = browser.currentScene.createNode("HAnimSite");
HAnimSite582.name = "r_lateral_malleolus";
HAnimSite582.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite582.translation = new X3D.SFVec3f([-0.12,0.095,-0.02]);
let TouchSensor583 = browser.currentScene.createNode("TouchSensor");
TouchSensor583.description = "HAnimSite 53 hanim_r_lateral_malleolus_pt";
HAnimSite582YYY.children = new X3D.MFNode();

HAnimSite582ZZZ.children[0] = TouchSensor583;

let Shape584 = browser.currentScene.createNode("Shape");
let Appearance585 = browser.currentScene.createNode("Appearance");
let Material586 = browser.currentScene.createNode("Material");
Material586.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material586;

appearance = Appearance585;

let IndexedFaceSet587 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet587.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet587.creaseAngle = 0.5;
IndexedFaceSet587.solid = False;
let ColorRGBA588 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA588.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA588;

let Coordinate589 = browser.currentScene.createNode("Coordinate");
Coordinate589.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate589;

geometry = IndexedFaceSet587;

HAnimSite582ZZZ.children[1] = Shape584;

let Billboard590 = browser.currentScene.createNode("Billboard");
Billboard590.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape591 = browser.currentScene.createNode("Shape");
let Text592 = browser.currentScene.createNode("Text");
Text592.string = new X3D.MFString([new X3D.SFString("53")]);
let FontStyle593 = browser.currentScene.createNode("FontStyle");
FontStyle593.size = 0.035;
fontStyle = FontStyle593;

geometry = Text592;

Billboard590YYY.children = new X3D.MFNode();

Billboard590ZZZ.children[0] = Shape591;

HAnimSite582ZZZ.children[2] = Billboard590;

HAnimSegment557ZZZ.children[2] = HAnimSite582;

let Shape594 = browser.currentScene.createNode("Shape");
let LineSet595 = browser.currentScene.createNode("LineSet");
LineSet595.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA596 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA596.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA596;

let Coordinate597 = browser.currentScene.createNode("Coordinate");
Coordinate597.point = new X3D.MFVec3f([-0.0926,0.408825,-0.01944,-0.09466,0.82665,-0.01835]);
coord = Coordinate597;

geometry = LineSet595;

HAnimSegment557ZZZ.children[3] = Shape594;

HAnimJoint556YYY.children = new X3D.MFNode();

HAnimJoint556ZZZ.children[0] = HAnimSegment557;

let HAnimJoint598 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint598.name = "r_talocrural";
HAnimJoint598.DEF = "hanim_r_talocrural";
HAnimJoint598.center = new X3D.SFVec3f([-0.08845,0.09544,-0.01045]);
HAnimJoint598.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint598.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment599 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment599.name = "r_talus";
HAnimSegment599.DEF = "hanim_r_talus";
let HAnimSite600 = browser.currentScene.createNode("HAnimSite");
HAnimSite600.name = "r_sphyrion";
HAnimSite600.DEF = "hanim_r_sphyrion_pt";
HAnimSite600.translation = new X3D.SFVec3f([-0.054,0.065,-0.02]);
let TouchSensor601 = browser.currentScene.createNode("TouchSensor");
TouchSensor601.description = "HAnimSite 54 hanim_r_sphyrion_pt";
HAnimSite600YYY.children = new X3D.MFNode();

HAnimSite600ZZZ.children[0] = TouchSensor601;

let Shape602 = browser.currentScene.createNode("Shape");
let Appearance603 = browser.currentScene.createNode("Appearance");
let Material604 = browser.currentScene.createNode("Material");
Material604.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material604;

appearance = Appearance603;

let IndexedFaceSet605 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet605.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet605.creaseAngle = 0.5;
IndexedFaceSet605.solid = False;
let ColorRGBA606 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA606.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA606;

let Coordinate607 = browser.currentScene.createNode("Coordinate");
Coordinate607.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate607;

geometry = IndexedFaceSet605;

HAnimSite600ZZZ.children[1] = Shape602;

let Billboard608 = browser.currentScene.createNode("Billboard");
Billboard608.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape609 = browser.currentScene.createNode("Shape");
let Text610 = browser.currentScene.createNode("Text");
Text610.string = new X3D.MFString([new X3D.SFString("54")]);
let FontStyle611 = browser.currentScene.createNode("FontStyle");
FontStyle611.size = 0.035;
fontStyle = FontStyle611;

geometry = Text610;

Billboard608YYY.children = new X3D.MFNode();

Billboard608ZZZ.children[0] = Shape609;

HAnimSite600ZZZ.children[2] = Billboard608;

HAnimSegment599YYY.children = new X3D.MFNode();

HAnimSegment599ZZZ.children[0] = HAnimSite600;

let HAnimSite612 = browser.currentScene.createNode("HAnimSite");
HAnimSite612.name = "r_calcaneus_posterior";
HAnimSite612.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite612.translation = new X3D.SFVec3f([-0.09,0.03,-0.06]);
let TouchSensor613 = browser.currentScene.createNode("TouchSensor");
TouchSensor613.description = "HAnimSite 62 hanim_r_calcaneus_posterior_pt";
HAnimSite612YYY.children = new X3D.MFNode();

HAnimSite612ZZZ.children[0] = TouchSensor613;

let Shape614 = browser.currentScene.createNode("Shape");
let Appearance615 = browser.currentScene.createNode("Appearance");
let Material616 = browser.currentScene.createNode("Material");
Material616.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material616;

appearance = Appearance615;

let IndexedFaceSet617 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet617.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet617.creaseAngle = 0.5;
IndexedFaceSet617.solid = False;
let ColorRGBA618 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA618.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA618;

let Coordinate619 = browser.currentScene.createNode("Coordinate");
Coordinate619.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate619;

geometry = IndexedFaceSet617;

HAnimSite612ZZZ.children[1] = Shape614;

let Billboard620 = browser.currentScene.createNode("Billboard");
Billboard620.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape621 = browser.currentScene.createNode("Shape");
let Text622 = browser.currentScene.createNode("Text");
Text622.string = new X3D.MFString([new X3D.SFString("62")]);
let FontStyle623 = browser.currentScene.createNode("FontStyle");
FontStyle623.size = 0.035;
fontStyle = FontStyle623;

geometry = Text622;

Billboard620YYY.children = new X3D.MFNode();

Billboard620ZZZ.children[0] = Shape621;

HAnimSite612ZZZ.children[2] = Billboard620;

HAnimSegment599ZZZ.children[1] = HAnimSite612;

let Shape624 = browser.currentScene.createNode("Shape");
let LineSet625 = browser.currentScene.createNode("LineSet");
LineSet625.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA626 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA626.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA626;

let Coordinate627 = browser.currentScene.createNode("Coordinate");
Coordinate627.point = new X3D.MFVec3f([-0.08845,0.09544,-0.01045,-0.0926,0.408825,-0.01944]);
coord = Coordinate627;

geometry = LineSet625;

HAnimSegment599ZZZ.children[2] = Shape624;

HAnimJoint598YYY.children = new X3D.MFNode();

HAnimJoint598ZZZ.children[0] = HAnimSegment599;

let HAnimJoint628 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint628.name = "r_talocalcaneonavicular";
HAnimJoint628.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint628.center = new X3D.SFVec3f([-0.07794,0.0369,0.00486]);
HAnimJoint628.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint628.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment629 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment629.name = "r_navicular";
HAnimSegment629.DEF = "hanim_r_navicular";
let Shape630 = browser.currentScene.createNode("Shape");
let LineSet631 = browser.currentScene.createNode("LineSet");
LineSet631.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA632 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA632.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA632;

let Coordinate633 = browser.currentScene.createNode("Coordinate");
Coordinate633.point = new X3D.MFVec3f([-0.07794,0.0369,0.00486,-0.08845,0.09544,-0.01045]);
coord = Coordinate633;

geometry = LineSet631;

HAnimSegment629YYY.children = new X3D.MFNode();

HAnimSegment629ZZZ.children[0] = Shape630;

HAnimJoint628YYY.children = new X3D.MFNode();

HAnimJoint628ZZZ.children[0] = HAnimSegment629;

let HAnimJoint634 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint634.name = "r_cuneonavicular_1";
HAnimJoint634.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint634.center = new X3D.SFVec3f([-0.06698,0.032107,0.01839]);
HAnimJoint634.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint634.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment635 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment635.name = "r_cuneiform_1";
HAnimSegment635.DEF = "hanim_r_cuneiform_1";
let Shape636 = browser.currentScene.createNode("Shape");
let LineSet637 = browser.currentScene.createNode("LineSet");
LineSet637.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA638 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA638.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA638;

let Coordinate639 = browser.currentScene.createNode("Coordinate");
Coordinate639.point = new X3D.MFVec3f([-0.06698,0.032107,0.01839,-0.07794,0.0369,0.00486]);
coord = Coordinate639;

geometry = LineSet637;

HAnimSegment635YYY.children = new X3D.MFNode();

HAnimSegment635ZZZ.children[0] = Shape636;

HAnimJoint634YYY.children = new X3D.MFNode();

HAnimJoint634ZZZ.children[0] = HAnimSegment635;

let HAnimJoint640 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint640.name = "r_tarsometatarsal_1";
HAnimJoint640.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint640.center = new X3D.SFVec3f([-0.064,0.02324,0.04419]);
HAnimJoint640.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint640.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment641 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment641.name = "r_metatarsal_1";
HAnimSegment641.DEF = "hanim_r_metatarsal_1";
let Shape642 = browser.currentScene.createNode("Shape");
let LineSet643 = browser.currentScene.createNode("LineSet");
LineSet643.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA644 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA644.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA644;

let Coordinate645 = browser.currentScene.createNode("Coordinate");
Coordinate645.point = new X3D.MFVec3f([-0.064,0.02324,0.04419,-0.06698,0.032107,0.01839]);
coord = Coordinate645;

geometry = LineSet643;

HAnimSegment641YYY.children = new X3D.MFNode();

HAnimSegment641ZZZ.children[0] = Shape642;

HAnimJoint640YYY.children = new X3D.MFNode();

HAnimJoint640ZZZ.children[0] = HAnimSegment641;

let HAnimJoint646 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint646.name = "r_metatarsophalangeal_1";
HAnimJoint646.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint646.center = new X3D.SFVec3f([-0.06176,0.014425,0.09362]);
HAnimJoint646.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint646.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment647 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment647.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment647.DEF = "hanim_r_tarsal_proximal_phalanx_1";
let HAnimSite648 = browser.currentScene.createNode("HAnimSite");
HAnimSite648.name = "r_metatarsal_phalanx_1";
HAnimSite648.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite648.translation = new X3D.SFVec3f([-0.062,0.012,0.1]);
let TouchSensor649 = browser.currentScene.createNode("TouchSensor");
TouchSensor649.description = "HAnimSite 59 hanim_r_metatarsal_phalanx_1_pt";
HAnimSite648YYY.children = new X3D.MFNode();

HAnimSite648ZZZ.children[0] = TouchSensor649;

let Shape650 = browser.currentScene.createNode("Shape");
let Appearance651 = browser.currentScene.createNode("Appearance");
let Material652 = browser.currentScene.createNode("Material");
Material652.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material652;

appearance = Appearance651;

let IndexedFaceSet653 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet653.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet653.creaseAngle = 0.5;
IndexedFaceSet653.solid = False;
let ColorRGBA654 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA654.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA654;

let Coordinate655 = browser.currentScene.createNode("Coordinate");
Coordinate655.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate655;

geometry = IndexedFaceSet653;

HAnimSite648ZZZ.children[1] = Shape650;

let Billboard656 = browser.currentScene.createNode("Billboard");
Billboard656.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape657 = browser.currentScene.createNode("Shape");
let Text658 = browser.currentScene.createNode("Text");
Text658.string = new X3D.MFString([new X3D.SFString("59")]);
let FontStyle659 = browser.currentScene.createNode("FontStyle");
FontStyle659.size = 0.035;
fontStyle = FontStyle659;

geometry = Text658;

Billboard656YYY.children = new X3D.MFNode();

Billboard656ZZZ.children[0] = Shape657;

HAnimSite648ZZZ.children[2] = Billboard656;

HAnimSegment647YYY.children = new X3D.MFNode();

HAnimSegment647ZZZ.children[0] = HAnimSite648;

let Shape660 = browser.currentScene.createNode("Shape");
let LineSet661 = browser.currentScene.createNode("LineSet");
LineSet661.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA662 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA662.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA662;

let Coordinate663 = browser.currentScene.createNode("Coordinate");
Coordinate663.point = new X3D.MFVec3f([-0.06176,0.014425,0.09362,-0.064,0.02324,0.04419]);
coord = Coordinate663;

geometry = LineSet661;

HAnimSegment647ZZZ.children[1] = Shape660;

HAnimJoint646YYY.children = new X3D.MFNode();

HAnimJoint646ZZZ.children[0] = HAnimSegment647;

let HAnimJoint664 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint664.name = "r_tarsal_interphalangeal_1";
HAnimJoint664.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint664.center = new X3D.SFVec3f([-0.06174,0.0121,0.1153]);
HAnimJoint664.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint664.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment665 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment665.name = "r_tarsal_distal_phalanx_1";
HAnimSegment665.DEF = "hanim_r_tarsal_distal_phalanx_1";
let HAnimSite666 = browser.currentScene.createNode("HAnimSite");
HAnimSite666.name = "r_tarsal_distal_phalanx_1";
HAnimSite666.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimSite666.translation = new X3D.SFVec3f([-0.06,0.012,0.14]);
let TouchSensor667 = browser.currentScene.createNode("TouchSensor");
TouchSensor667.description = "HAnimSite 116 hanim_r_tarsal_distal_phalanx_1_tip";
HAnimSite666YYY.children = new X3D.MFNode();

HAnimSite666ZZZ.children[0] = TouchSensor667;

let Shape668 = browser.currentScene.createNode("Shape");
let Appearance669 = browser.currentScene.createNode("Appearance");
let Material670 = browser.currentScene.createNode("Material");
Material670.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material670;

appearance = Appearance669;

let IndexedFaceSet671 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet671.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet671.creaseAngle = 0.5;
IndexedFaceSet671.solid = False;
let ColorRGBA672 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA672.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA672;

let Coordinate673 = browser.currentScene.createNode("Coordinate");
Coordinate673.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate673;

geometry = IndexedFaceSet671;

HAnimSite666ZZZ.children[1] = Shape668;

let Billboard674 = browser.currentScene.createNode("Billboard");
Billboard674.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape675 = browser.currentScene.createNode("Shape");
let Text676 = browser.currentScene.createNode("Text");
Text676.string = new X3D.MFString([new X3D.SFString("116")]);
let FontStyle677 = browser.currentScene.createNode("FontStyle");
FontStyle677.size = 0.035;
fontStyle = FontStyle677;

geometry = Text676;

Billboard674YYY.children = new X3D.MFNode();

Billboard674ZZZ.children[0] = Shape675;

HAnimSite666ZZZ.children[2] = Billboard674;

HAnimSegment665YYY.children = new X3D.MFNode();

HAnimSegment665ZZZ.children[0] = HAnimSite666;

let Shape678 = browser.currentScene.createNode("Shape");
let LineSet679 = browser.currentScene.createNode("LineSet");
LineSet679.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA680 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA680.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA680;

let Coordinate681 = browser.currentScene.createNode("Coordinate");
Coordinate681.point = new X3D.MFVec3f([-0.06174,0.0121,0.1153,-0.06176,0.014425,0.09362]);
coord = Coordinate681;

geometry = LineSet679;

HAnimSegment665ZZZ.children[1] = Shape678;

HAnimJoint664YYY.children = new X3D.MFNode();

HAnimJoint664ZZZ.children[0] = HAnimSegment665;

HAnimJoint646ZZZ.children[1] = HAnimJoint664;

HAnimJoint640ZZZ.children[1] = HAnimJoint646;

HAnimJoint634ZZZ.children[1] = HAnimJoint640;

HAnimJoint628ZZZ.children[1] = HAnimJoint634;

let HAnimJoint682 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint682.name = "r_cuneonavicular_2";
HAnimJoint682.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint682.center = new X3D.SFVec3f([-0.081,0.0335,0.02142]);
HAnimJoint682.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint682.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment683 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment683.name = "r_cuneiform_2";
HAnimSegment683.DEF = "hanim_r_cuneiform_2";
let Shape684 = browser.currentScene.createNode("Shape");
let LineSet685 = browser.currentScene.createNode("LineSet");
LineSet685.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA686 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA686.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA686;

let Coordinate687 = browser.currentScene.createNode("Coordinate");
Coordinate687.point = new X3D.MFVec3f([-0.081,0.0335,0.02142,-0.07794,0.0369,0.00486]);
coord = Coordinate687;

geometry = LineSet685;

HAnimSegment683YYY.children = new X3D.MFNode();

HAnimSegment683ZZZ.children[0] = Shape684;

HAnimJoint682YYY.children = new X3D.MFNode();

HAnimJoint682ZZZ.children[0] = HAnimSegment683;

let HAnimJoint688 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint688.name = "r_tarsometatarsal_2";
HAnimJoint688.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint688.center = new X3D.SFVec3f([-0.07983,0.0261,0.04106]);
HAnimJoint688.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint688.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment689 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment689.name = "r_metatarsal_2";
HAnimSegment689.DEF = "hanim_r_metatarsal_2";
let Shape690 = browser.currentScene.createNode("Shape");
let LineSet691 = browser.currentScene.createNode("LineSet");
LineSet691.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA692 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA692.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA692;

let Coordinate693 = browser.currentScene.createNode("Coordinate");
Coordinate693.point = new X3D.MFVec3f([-0.07983,0.0261,0.04106,-0.081,0.0335,0.02142]);
coord = Coordinate693;

geometry = LineSet691;

HAnimSegment689YYY.children = new X3D.MFNode();

HAnimSegment689ZZZ.children[0] = Shape690;

HAnimJoint688YYY.children = new X3D.MFNode();

HAnimJoint688ZZZ.children[0] = HAnimSegment689;

let HAnimJoint694 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint694.name = "r_metatarsophalangeal_2";
HAnimJoint694.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint694.center = new X3D.SFVec3f([-0.0821,0.01497,0.09783]);
HAnimJoint694.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint694.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment695 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment695.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment695.DEF = "hanim_r_tarsal_proximal_phalanx_2";
let Shape696 = browser.currentScene.createNode("Shape");
let LineSet697 = browser.currentScene.createNode("LineSet");
LineSet697.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA698 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA698.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA698;

let Coordinate699 = browser.currentScene.createNode("Coordinate");
Coordinate699.point = new X3D.MFVec3f([-0.0821,0.01497,0.09783,-0.07983,0.0261,0.04106]);
coord = Coordinate699;

geometry = LineSet697;

HAnimSegment695YYY.children = new X3D.MFNode();

HAnimSegment695ZZZ.children[0] = Shape696;

HAnimJoint694YYY.children = new X3D.MFNode();

HAnimJoint694ZZZ.children[0] = HAnimSegment695;

let HAnimJoint700 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint700.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint700.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint700.center = new X3D.SFVec3f([-0.0839,0.012647,0.114]);
HAnimJoint700.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint700.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment701 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment701.name = "r_tarsal_middle_phalanx_2";
HAnimSegment701.DEF = "hanim_r_tarsal_middle_phalanx_2";
let Shape702 = browser.currentScene.createNode("Shape");
let LineSet703 = browser.currentScene.createNode("LineSet");
LineSet703.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA704 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA704.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA704;

let Coordinate705 = browser.currentScene.createNode("Coordinate");
Coordinate705.point = new X3D.MFVec3f([-0.0839,0.012647,0.114,-0.0821,0.01497,0.09783]);
coord = Coordinate705;

geometry = LineSet703;

HAnimSegment701YYY.children = new X3D.MFNode();

HAnimSegment701ZZZ.children[0] = Shape702;

HAnimJoint700YYY.children = new X3D.MFNode();

HAnimJoint700ZZZ.children[0] = HAnimSegment701;

let HAnimJoint706 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint706.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint706.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint706.center = new X3D.SFVec3f([-0.0839,0.009825,0.123435]);
HAnimJoint706.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint706.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment707 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment707.name = "r_tarsal_distal_phalanx_2";
HAnimSegment707.DEF = "hanim_r_tarsal_distal_phalanx_2";
let HAnimSite708 = browser.currentScene.createNode("HAnimSite");
HAnimSite708.name = "r_tarsal_distal_phalanx_2";
HAnimSite708.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite708.translation = new X3D.SFVec3f([-0.08,0.016,0.14]);
let TouchSensor709 = browser.currentScene.createNode("TouchSensor");
TouchSensor709.description = "HAnimSite 117 hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite708YYY.children = new X3D.MFNode();

HAnimSite708ZZZ.children[0] = TouchSensor709;

let Shape710 = browser.currentScene.createNode("Shape");
let Appearance711 = browser.currentScene.createNode("Appearance");
let Material712 = browser.currentScene.createNode("Material");
Material712.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material712;

appearance = Appearance711;

let IndexedFaceSet713 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet713.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet713.creaseAngle = 0.5;
IndexedFaceSet713.solid = False;
let ColorRGBA714 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA714.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA714;

let Coordinate715 = browser.currentScene.createNode("Coordinate");
Coordinate715.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate715;

geometry = IndexedFaceSet713;

HAnimSite708ZZZ.children[1] = Shape710;

let Billboard716 = browser.currentScene.createNode("Billboard");
Billboard716.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape717 = browser.currentScene.createNode("Shape");
let Text718 = browser.currentScene.createNode("Text");
Text718.string = new X3D.MFString([new X3D.SFString("117")]);
let FontStyle719 = browser.currentScene.createNode("FontStyle");
FontStyle719.size = 0.035;
fontStyle = FontStyle719;

geometry = Text718;

Billboard716YYY.children = new X3D.MFNode();

Billboard716ZZZ.children[0] = Shape717;

HAnimSite708ZZZ.children[2] = Billboard716;

HAnimSegment707YYY.children = new X3D.MFNode();

HAnimSegment707ZZZ.children[0] = HAnimSite708;

let Shape720 = browser.currentScene.createNode("Shape");
let LineSet721 = browser.currentScene.createNode("LineSet");
LineSet721.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA722 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA722.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA722;

let Coordinate723 = browser.currentScene.createNode("Coordinate");
Coordinate723.point = new X3D.MFVec3f([-0.0839,0.009825,0.123435,-0.0839,0.012647,0.114]);
coord = Coordinate723;

geometry = LineSet721;

HAnimSegment707ZZZ.children[1] = Shape720;

HAnimJoint706YYY.children = new X3D.MFNode();

HAnimJoint706ZZZ.children[0] = HAnimSegment707;

HAnimJoint700ZZZ.children[1] = HAnimJoint706;

HAnimJoint694ZZZ.children[1] = HAnimJoint700;

HAnimJoint688ZZZ.children[1] = HAnimJoint694;

HAnimJoint682ZZZ.children[1] = HAnimJoint688;

HAnimJoint628ZZZ.children[2] = HAnimJoint682;

let HAnimJoint724 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint724.name = "r_cuneonavicular_3";
HAnimJoint724.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint724.center = new X3D.SFVec3f([-0.09261,0.03339,0.01982]);
HAnimJoint724.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint724.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment725 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment725.name = "r_cuneiform_3";
HAnimSegment725.DEF = "hanim_r_cuneiform_3";
let Shape726 = browser.currentScene.createNode("Shape");
let LineSet727 = browser.currentScene.createNode("LineSet");
LineSet727.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA728 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA728.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA728;

let Coordinate729 = browser.currentScene.createNode("Coordinate");
Coordinate729.point = new X3D.MFVec3f([-0.09261,0.03339,0.01982,-0.07794,0.0369,0.00486]);
coord = Coordinate729;

geometry = LineSet727;

HAnimSegment725YYY.children = new X3D.MFNode();

HAnimSegment725ZZZ.children[0] = Shape726;

HAnimJoint724YYY.children = new X3D.MFNode();

HAnimJoint724ZZZ.children[0] = HAnimSegment725;

let HAnimJoint730 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint730.name = "r_tarsometatarsal_3";
HAnimJoint730.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint730.center = new X3D.SFVec3f([-0.09423,0.0261,0.0394]);
HAnimJoint730.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint730.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment731 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment731.name = "r_metatarsal_3";
HAnimSegment731.DEF = "hanim_r_metatarsal_3";
let Shape732 = browser.currentScene.createNode("Shape");
let LineSet733 = browser.currentScene.createNode("LineSet");
LineSet733.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA734 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA734.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA734;

let Coordinate735 = browser.currentScene.createNode("Coordinate");
Coordinate735.point = new X3D.MFVec3f([-0.09423,0.0261,0.0394,-0.09261,0.03339,0.01982]);
coord = Coordinate735;

geometry = LineSet733;

HAnimSegment731YYY.children = new X3D.MFNode();

HAnimSegment731ZZZ.children[0] = Shape732;

HAnimJoint730YYY.children = new X3D.MFNode();

HAnimJoint730ZZZ.children[0] = HAnimSegment731;

let HAnimJoint736 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint736.name = "r_metatarsophalangeal_3";
HAnimJoint736.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint736.center = new X3D.SFVec3f([-0.0961,0.01505,0.09542]);
HAnimJoint736.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint736.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment737 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment737.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment737.DEF = "hanim_r_tarsal_proximal_phalanx_3";
let Shape738 = browser.currentScene.createNode("Shape");
let LineSet739 = browser.currentScene.createNode("LineSet");
LineSet739.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA740 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA740.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA740;

let Coordinate741 = browser.currentScene.createNode("Coordinate");
Coordinate741.point = new X3D.MFVec3f([-0.0961,0.01505,0.09542,-0.09423,0.0261,0.0394]);
coord = Coordinate741;

geometry = LineSet739;

HAnimSegment737YYY.children = new X3D.MFNode();

HAnimSegment737ZZZ.children[0] = Shape738;

HAnimJoint736YYY.children = new X3D.MFNode();

HAnimJoint736ZZZ.children[0] = HAnimSegment737;

let HAnimJoint742 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint742.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint742.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint742.center = new X3D.SFVec3f([-0.0985,0.01192,0.11047]);
HAnimJoint742.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint742.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment743 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment743.name = "r_tarsal_middle_phalanx_3";
HAnimSegment743.DEF = "hanim_r_tarsal_middle_phalanx_3";
let Shape744 = browser.currentScene.createNode("Shape");
let LineSet745 = browser.currentScene.createNode("LineSet");
LineSet745.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA746 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA746.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA746;

let Coordinate747 = browser.currentScene.createNode("Coordinate");
Coordinate747.point = new X3D.MFVec3f([-0.0985,0.01192,0.11047,-0.0961,0.01505,0.09542]);
coord = Coordinate747;

geometry = LineSet745;

HAnimSegment743YYY.children = new X3D.MFNode();

HAnimSegment743ZZZ.children[0] = Shape744;

HAnimJoint742YYY.children = new X3D.MFNode();

HAnimJoint742ZZZ.children[0] = HAnimSegment743;

let HAnimJoint748 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint748.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint748.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint748.center = new X3D.SFVec3f([-0.100035,0.00982,0.1197]);
HAnimJoint748.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint748.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment749 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment749.name = "r_tarsal_distal_phalanx_3";
HAnimSegment749.DEF = "hanim_r_tarsal_distal_phalanx_3";
let HAnimSite750 = browser.currentScene.createNode("HAnimSite");
HAnimSite750.name = "r_tarsal_distal_phalanx_3";
HAnimSite750.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimSite750.translation = new X3D.SFVec3f([-0.1,0.016,0.14]);
let TouchSensor751 = browser.currentScene.createNode("TouchSensor");
TouchSensor751.description = "HAnimSite 118 hanim_r_tarsal_distal_phalanx_3_tip";
HAnimSite750YYY.children = new X3D.MFNode();

HAnimSite750ZZZ.children[0] = TouchSensor751;

let Shape752 = browser.currentScene.createNode("Shape");
let Appearance753 = browser.currentScene.createNode("Appearance");
let Material754 = browser.currentScene.createNode("Material");
Material754.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material754;

appearance = Appearance753;

let IndexedFaceSet755 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet755.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet755.creaseAngle = 0.5;
IndexedFaceSet755.solid = False;
let ColorRGBA756 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA756.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA756;

let Coordinate757 = browser.currentScene.createNode("Coordinate");
Coordinate757.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate757;

geometry = IndexedFaceSet755;

HAnimSite750ZZZ.children[1] = Shape752;

let Billboard758 = browser.currentScene.createNode("Billboard");
Billboard758.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape759 = browser.currentScene.createNode("Shape");
let Text760 = browser.currentScene.createNode("Text");
Text760.string = new X3D.MFString([new X3D.SFString("118")]);
let FontStyle761 = browser.currentScene.createNode("FontStyle");
FontStyle761.size = 0.035;
fontStyle = FontStyle761;

geometry = Text760;

Billboard758YYY.children = new X3D.MFNode();

Billboard758ZZZ.children[0] = Shape759;

HAnimSite750ZZZ.children[2] = Billboard758;

HAnimSegment749YYY.children = new X3D.MFNode();

HAnimSegment749ZZZ.children[0] = HAnimSite750;

let Shape762 = browser.currentScene.createNode("Shape");
let LineSet763 = browser.currentScene.createNode("LineSet");
LineSet763.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA764 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA764.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA764;

let Coordinate765 = browser.currentScene.createNode("Coordinate");
Coordinate765.point = new X3D.MFVec3f([-0.100035,0.00982,0.1197,-0.0985,0.01192,0.11047]);
coord = Coordinate765;

geometry = LineSet763;

HAnimSegment749ZZZ.children[1] = Shape762;

HAnimJoint748YYY.children = new X3D.MFNode();

HAnimJoint748ZZZ.children[0] = HAnimSegment749;

HAnimJoint742ZZZ.children[1] = HAnimJoint748;

HAnimJoint736ZZZ.children[1] = HAnimJoint742;

HAnimJoint730ZZZ.children[1] = HAnimJoint736;

HAnimJoint724ZZZ.children[1] = HAnimJoint730;

HAnimJoint628ZZZ.children[3] = HAnimJoint724;

HAnimJoint598ZZZ.children[1] = HAnimJoint628;

let HAnimJoint766 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint766.name = "r_calcaneocuboid";
HAnimJoint766.DEF = "hanim_r_calcaneocuboid";
HAnimJoint766.center = new X3D.SFVec3f([-0.088717,0.05798,-0.025965]);
HAnimJoint766.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint766.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment767 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment767.name = "r_calcaneus";
HAnimSegment767.DEF = "hanim_r_calcaneus";
let Shape768 = browser.currentScene.createNode("Shape");
let LineSet769 = browser.currentScene.createNode("LineSet");
LineSet769.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA770 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA770.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA770;

let Coordinate771 = browser.currentScene.createNode("Coordinate");
Coordinate771.point = new X3D.MFVec3f([-0.088717,0.05798,-0.025965,-0.08845,0.09544,-0.01045]);
coord = Coordinate771;

geometry = LineSet769;

HAnimSegment767YYY.children = new X3D.MFNode();

HAnimSegment767ZZZ.children[0] = Shape768;

HAnimJoint766YYY.children = new X3D.MFNode();

HAnimJoint766ZZZ.children[0] = HAnimSegment767;

let HAnimJoint772 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint772.name = "r_transversetarsal";
HAnimJoint772.DEF = "hanim_r_transversetarsal";
HAnimJoint772.center = new X3D.SFVec3f([-0.11027,0.03528,0.0021]);
HAnimJoint772.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint772.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment773 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment773.name = "r_cuboid";
HAnimSegment773.DEF = "hanim_r_cuboid";
let Shape774 = browser.currentScene.createNode("Shape");
let LineSet775 = browser.currentScene.createNode("LineSet");
LineSet775.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA776 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA776.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA776;

let Coordinate777 = browser.currentScene.createNode("Coordinate");
Coordinate777.point = new X3D.MFVec3f([-0.11027,0.03528,0.0021,-0.088717,0.05798,-0.025965]);
coord = Coordinate777;

geometry = LineSet775;

HAnimSegment773YYY.children = new X3D.MFNode();

HAnimSegment773ZZZ.children[0] = Shape774;

HAnimJoint772YYY.children = new X3D.MFNode();

HAnimJoint772ZZZ.children[0] = HAnimSegment773;

let HAnimJoint778 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint778.name = "r_tarsometatarsal_4";
HAnimJoint778.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint778.center = new X3D.SFVec3f([-0.10613,0.02454,0.03843]);
HAnimJoint778.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint778.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment779 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment779.name = "r_metatarsal_4";
HAnimSegment779.DEF = "hanim_r_metatarsal_4";
let Shape780 = browser.currentScene.createNode("Shape");
let LineSet781 = browser.currentScene.createNode("LineSet");
LineSet781.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA782 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA782.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA782;

let Coordinate783 = browser.currentScene.createNode("Coordinate");
Coordinate783.point = new X3D.MFVec3f([-0.10613,0.02454,0.03843,-0.11027,0.03528,0.0021]);
coord = Coordinate783;

geometry = LineSet781;

HAnimSegment779YYY.children = new X3D.MFNode();

HAnimSegment779ZZZ.children[0] = Shape780;

HAnimJoint778YYY.children = new X3D.MFNode();

HAnimJoint778ZZZ.children[0] = HAnimSegment779;

let HAnimJoint784 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint784.name = "r_metatarsophalangeal_4";
HAnimJoint784.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint784.center = new X3D.SFVec3f([-0.1095,0.01435,0.09117]);
HAnimJoint784.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint784.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment785 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment785.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment785.DEF = "hanim_r_tarsal_proximal_phalanx_4";
let Shape786 = browser.currentScene.createNode("Shape");
let LineSet787 = browser.currentScene.createNode("LineSet");
LineSet787.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA788 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA788.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA788;

let Coordinate789 = browser.currentScene.createNode("Coordinate");
Coordinate789.point = new X3D.MFVec3f([-0.1095,0.01435,0.09117,-0.10613,0.02454,0.03843]);
coord = Coordinate789;

geometry = LineSet787;

HAnimSegment785YYY.children = new X3D.MFNode();

HAnimSegment785ZZZ.children[0] = Shape786;

HAnimJoint784YYY.children = new X3D.MFNode();

HAnimJoint784ZZZ.children[0] = HAnimSegment785;

let HAnimJoint790 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint790.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint790.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint790.center = new X3D.SFVec3f([-0.11378,0.01224,0.1063]);
HAnimJoint790.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint790.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment791 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment791.name = "r_tarsal_middle_phalanx_4";
HAnimSegment791.DEF = "hanim_r_tarsal_middle_phalanx_4";
let Shape792 = browser.currentScene.createNode("Shape");
let LineSet793 = browser.currentScene.createNode("LineSet");
LineSet793.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA794 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA794.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA794;

let Coordinate795 = browser.currentScene.createNode("Coordinate");
Coordinate795.point = new X3D.MFVec3f([-0.11378,0.01224,0.1063,-0.1095,0.01435,0.09117]);
coord = Coordinate795;

geometry = LineSet793;

HAnimSegment791YYY.children = new X3D.MFNode();

HAnimSegment791ZZZ.children[0] = Shape792;

HAnimJoint790YYY.children = new X3D.MFNode();

HAnimJoint790ZZZ.children[0] = HAnimSegment791;

let HAnimJoint796 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint796.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint796.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint796.center = new X3D.SFVec3f([-0.1153,0.00937,0.11369]);
HAnimJoint796.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint796.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment797 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment797.name = "r_tarsal_distal_phalanx_4";
HAnimSegment797.DEF = "hanim_r_tarsal_distal_phalanx_4";
let HAnimSite798 = browser.currentScene.createNode("HAnimSite");
HAnimSite798.name = "r_tarsal_distal_phalanx_4";
HAnimSite798.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimSite798.translation = new X3D.SFVec3f([-0.115,0.016,0.13]);
let TouchSensor799 = browser.currentScene.createNode("TouchSensor");
TouchSensor799.description = "HAnimSite 119 hanim_r_tarsal_distal_phalanx_4_tip";
HAnimSite798YYY.children = new X3D.MFNode();

HAnimSite798ZZZ.children[0] = TouchSensor799;

let Shape800 = browser.currentScene.createNode("Shape");
let Appearance801 = browser.currentScene.createNode("Appearance");
let Material802 = browser.currentScene.createNode("Material");
Material802.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material802;

appearance = Appearance801;

let IndexedFaceSet803 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet803.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet803.creaseAngle = 0.5;
IndexedFaceSet803.solid = False;
let ColorRGBA804 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA804.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA804;

let Coordinate805 = browser.currentScene.createNode("Coordinate");
Coordinate805.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate805;

geometry = IndexedFaceSet803;

HAnimSite798ZZZ.children[1] = Shape800;

let Billboard806 = browser.currentScene.createNode("Billboard");
Billboard806.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape807 = browser.currentScene.createNode("Shape");
let Text808 = browser.currentScene.createNode("Text");
Text808.string = new X3D.MFString([new X3D.SFString("119")]);
let FontStyle809 = browser.currentScene.createNode("FontStyle");
FontStyle809.size = 0.035;
fontStyle = FontStyle809;

geometry = Text808;

Billboard806YYY.children = new X3D.MFNode();

Billboard806ZZZ.children[0] = Shape807;

HAnimSite798ZZZ.children[2] = Billboard806;

HAnimSegment797YYY.children = new X3D.MFNode();

HAnimSegment797ZZZ.children[0] = HAnimSite798;

let Shape810 = browser.currentScene.createNode("Shape");
let LineSet811 = browser.currentScene.createNode("LineSet");
LineSet811.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA812 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA812.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA812;

let Coordinate813 = browser.currentScene.createNode("Coordinate");
Coordinate813.point = new X3D.MFVec3f([-0.1153,0.00937,0.11369,-0.11378,0.01224,0.1063]);
coord = Coordinate813;

geometry = LineSet811;

HAnimSegment797ZZZ.children[1] = Shape810;

HAnimJoint796YYY.children = new X3D.MFNode();

HAnimJoint796ZZZ.children[0] = HAnimSegment797;

HAnimJoint790ZZZ.children[1] = HAnimJoint796;

HAnimJoint784ZZZ.children[1] = HAnimJoint790;

HAnimJoint778ZZZ.children[1] = HAnimJoint784;

HAnimJoint772ZZZ.children[1] = HAnimJoint778;

let HAnimJoint814 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint814.name = "r_tarsometatarsal_5";
HAnimJoint814.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint814.center = new X3D.SFVec3f([-0.12044,0.020945,0.03474]);
HAnimJoint814.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint814.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment815 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment815.name = "r_metatarsal_5";
HAnimSegment815.DEF = "hanim_r_metatarsal_5";
let Shape816 = browser.currentScene.createNode("Shape");
let LineSet817 = browser.currentScene.createNode("LineSet");
LineSet817.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA818 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA818.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA818;

let Coordinate819 = browser.currentScene.createNode("Coordinate");
Coordinate819.point = new X3D.MFVec3f([-0.12044,0.020945,0.03474,-0.11027,0.03528,0.0021]);
coord = Coordinate819;

geometry = LineSet817;

HAnimSegment815YYY.children = new X3D.MFNode();

HAnimSegment815ZZZ.children[0] = Shape816;

HAnimJoint814YYY.children = new X3D.MFNode();

HAnimJoint814ZZZ.children[0] = HAnimSegment815;

let HAnimJoint820 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint820.name = "r_metatarsophalangeal_5";
HAnimJoint820.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint820.center = new X3D.SFVec3f([-0.12368,0.01367,0.08656]);
HAnimJoint820.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint820.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment821.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment821.DEF = "hanim_r_tarsal_proximal_phalanx_5";
let Shape822 = browser.currentScene.createNode("Shape");
let LineSet823 = browser.currentScene.createNode("LineSet");
LineSet823.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA824 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA824.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA824;

let Coordinate825 = browser.currentScene.createNode("Coordinate");
Coordinate825.point = new X3D.MFVec3f([-0.12368,0.01367,0.08656,-0.12044,0.020945,0.03474]);
coord = Coordinate825;

geometry = LineSet823;

HAnimSegment821YYY.children = new X3D.MFNode();

HAnimSegment821ZZZ.children[0] = Shape822;

HAnimJoint820YYY.children = new X3D.MFNode();

HAnimJoint820ZZZ.children[0] = HAnimSegment821;

let HAnimJoint826 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint826.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint826.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint826.center = new X3D.SFVec3f([-0.126,0.01086,0.09414]);
HAnimJoint826.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint826.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment827.name = "r_tarsal_middle_phalanx_5";
HAnimSegment827.DEF = "hanim_r_tarsal_middle_phalanx_5";
let HAnimSite828 = browser.currentScene.createNode("HAnimSite");
HAnimSite828.name = "r_metatarsal_phalanx_5";
HAnimSite828.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite828.translation = new X3D.SFVec3f([-0.12,0.02,0.04]);
let TouchSensor829 = browser.currentScene.createNode("TouchSensor");
TouchSensor829.description = "HAnimSite 60 hanim_r_metatarsal_phalanx_5_pt";
HAnimSite828YYY.children = new X3D.MFNode();

HAnimSite828ZZZ.children[0] = TouchSensor829;

let Shape830 = browser.currentScene.createNode("Shape");
let Appearance831 = browser.currentScene.createNode("Appearance");
let Material832 = browser.currentScene.createNode("Material");
Material832.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material832;

appearance = Appearance831;

let IndexedFaceSet833 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet833.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet833.creaseAngle = 0.5;
IndexedFaceSet833.solid = False;
let ColorRGBA834 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA834.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA834;

let Coordinate835 = browser.currentScene.createNode("Coordinate");
Coordinate835.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate835;

geometry = IndexedFaceSet833;

HAnimSite828ZZZ.children[1] = Shape830;

let Billboard836 = browser.currentScene.createNode("Billboard");
Billboard836.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape837 = browser.currentScene.createNode("Shape");
let Text838 = browser.currentScene.createNode("Text");
Text838.string = new X3D.MFString([new X3D.SFString("60")]);
let FontStyle839 = browser.currentScene.createNode("FontStyle");
FontStyle839.size = 0.035;
fontStyle = FontStyle839;

geometry = Text838;

Billboard836YYY.children = new X3D.MFNode();

Billboard836ZZZ.children[0] = Shape837;

HAnimSite828ZZZ.children[2] = Billboard836;

HAnimSegment827YYY.children = new X3D.MFNode();

HAnimSegment827ZZZ.children[0] = HAnimSite828;

let Shape840 = browser.currentScene.createNode("Shape");
let LineSet841 = browser.currentScene.createNode("LineSet");
LineSet841.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA842 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA842.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA842;

let Coordinate843 = browser.currentScene.createNode("Coordinate");
Coordinate843.point = new X3D.MFVec3f([-0.126,0.01086,0.09414,-0.12368,0.01367,0.08656]);
coord = Coordinate843;

geometry = LineSet841;

HAnimSegment827ZZZ.children[1] = Shape840;

HAnimJoint826YYY.children = new X3D.MFNode();

HAnimJoint826ZZZ.children[0] = HAnimSegment827;

let HAnimJoint844 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint844.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint844.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint844.center = new X3D.SFVec3f([-0.1269,0.00856,0.10188]);
HAnimJoint844.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint844.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment845 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment845.name = "r_tarsal_distal_phalanx_5";
HAnimSegment845.DEF = "hanim_r_tarsal_distal_phalanx_5";
let HAnimSite846 = browser.currentScene.createNode("HAnimSite");
HAnimSite846.name = "r_tarsal_distal_phalanx_5";
HAnimSite846.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimSite846.translation = new X3D.SFVec3f([-0.125,0.016,0.115]);
let TouchSensor847 = browser.currentScene.createNode("TouchSensor");
TouchSensor847.description = "HAnimSite 120 hanim_r_tarsal_distal_phalanx_5_tip";
HAnimSite846YYY.children = new X3D.MFNode();

HAnimSite846ZZZ.children[0] = TouchSensor847;

let Shape848 = browser.currentScene.createNode("Shape");
let Appearance849 = browser.currentScene.createNode("Appearance");
let Material850 = browser.currentScene.createNode("Material");
Material850.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material850;

appearance = Appearance849;

let IndexedFaceSet851 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet851.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet851.creaseAngle = 0.5;
IndexedFaceSet851.solid = False;
let ColorRGBA852 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA852.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA852;

let Coordinate853 = browser.currentScene.createNode("Coordinate");
Coordinate853.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate853;

geometry = IndexedFaceSet851;

HAnimSite846ZZZ.children[1] = Shape848;

let Billboard854 = browser.currentScene.createNode("Billboard");
Billboard854.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape855 = browser.currentScene.createNode("Shape");
let Text856 = browser.currentScene.createNode("Text");
Text856.string = new X3D.MFString([new X3D.SFString("120")]);
let FontStyle857 = browser.currentScene.createNode("FontStyle");
FontStyle857.size = 0.035;
fontStyle = FontStyle857;

geometry = Text856;

Billboard854YYY.children = new X3D.MFNode();

Billboard854ZZZ.children[0] = Shape855;

HAnimSite846ZZZ.children[2] = Billboard854;

HAnimSegment845YYY.children = new X3D.MFNode();

HAnimSegment845ZZZ.children[0] = HAnimSite846;

let Shape858 = browser.currentScene.createNode("Shape");
let LineSet859 = browser.currentScene.createNode("LineSet");
LineSet859.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA860 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA860.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA860;

let Coordinate861 = browser.currentScene.createNode("Coordinate");
Coordinate861.point = new X3D.MFVec3f([-0.1269,0.00856,0.10188,-0.126,0.01086,0.09414]);
coord = Coordinate861;

geometry = LineSet859;

HAnimSegment845ZZZ.children[1] = Shape858;

HAnimJoint844YYY.children = new X3D.MFNode();

HAnimJoint844ZZZ.children[0] = HAnimSegment845;

HAnimJoint826ZZZ.children[1] = HAnimJoint844;

HAnimJoint820ZZZ.children[1] = HAnimJoint826;

HAnimJoint814ZZZ.children[1] = HAnimJoint820;

HAnimJoint772ZZZ.children[2] = HAnimJoint814;

HAnimJoint766ZZZ.children[1] = HAnimJoint772;

HAnimJoint598ZZZ.children[2] = HAnimJoint766;

HAnimJoint556ZZZ.children[1] = HAnimJoint598;

HAnimJoint502ZZZ.children[1] = HAnimJoint556;

HAnimJoint16ZZZ.children[2] = HAnimJoint502;

HAnimJoint12ZZZ.children[1] = HAnimJoint16;

let HAnimJoint862 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint862.name = "vl5";
HAnimJoint862.DEF = "hanim_vl5";
HAnimJoint862.center = new X3D.SFVec3f([0,0.9254,-0.01376]);
HAnimJoint862.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint862.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment863 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment863.name = "l5";
HAnimSegment863.DEF = "hanim_l5";
let HAnimSite864 = browser.currentScene.createNode("HAnimSite");
HAnimSite864.name = "spine_1_middle_back";
HAnimSite864.DEF = "hanim_spine_1_middle_back_pt";
HAnimSite864.translation = new X3D.SFVec3f([0,1,-0.1]);
let TouchSensor865 = browser.currentScene.createNode("TouchSensor");
TouchSensor865.description = "HAnimSite 24 hanim_spine_1_middle_back_pt";
HAnimSite864YYY.children = new X3D.MFNode();

HAnimSite864ZZZ.children[0] = TouchSensor865;

let Shape866 = browser.currentScene.createNode("Shape");
let Appearance867 = browser.currentScene.createNode("Appearance");
let Material868 = browser.currentScene.createNode("Material");
Material868.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material868;

appearance = Appearance867;

let IndexedFaceSet869 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet869.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet869.creaseAngle = 0.5;
IndexedFaceSet869.solid = False;
let ColorRGBA870 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA870.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA870;

let Coordinate871 = browser.currentScene.createNode("Coordinate");
Coordinate871.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate871;

geometry = IndexedFaceSet869;

HAnimSite864ZZZ.children[1] = Shape866;

let Billboard872 = browser.currentScene.createNode("Billboard");
Billboard872.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape873 = browser.currentScene.createNode("Shape");
let Text874 = browser.currentScene.createNode("Text");
Text874.string = new X3D.MFString([new X3D.SFString("24")]);
let FontStyle875 = browser.currentScene.createNode("FontStyle");
FontStyle875.size = 0.035;
fontStyle = FontStyle875;

geometry = Text874;

Billboard872YYY.children = new X3D.MFNode();

Billboard872ZZZ.children[0] = Shape873;

HAnimSite864ZZZ.children[2] = Billboard872;

HAnimSegment863YYY.children = new X3D.MFNode();

HAnimSegment863ZZZ.children[0] = HAnimSite864;

let HAnimSite876 = browser.currentScene.createNode("HAnimSite");
HAnimSite876.name = "spine_2_lower_back";
HAnimSite876.DEF = "hanim_spine_2_lower_back_pt";
HAnimSite876.translation = new X3D.SFVec3f([0,0.95,-0.1]);
let TouchSensor877 = browser.currentScene.createNode("TouchSensor");
TouchSensor877.description = "HAnimSite 25 hanim_spine_2_lower_back_pt";
HAnimSite876YYY.children = new X3D.MFNode();

HAnimSite876ZZZ.children[0] = TouchSensor877;

let Shape878 = browser.currentScene.createNode("Shape");
let Appearance879 = browser.currentScene.createNode("Appearance");
let Material880 = browser.currentScene.createNode("Material");
Material880.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material880;

appearance = Appearance879;

let IndexedFaceSet881 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet881.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet881.creaseAngle = 0.5;
IndexedFaceSet881.solid = False;
let ColorRGBA882 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA882.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA882;

let Coordinate883 = browser.currentScene.createNode("Coordinate");
Coordinate883.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate883;

geometry = IndexedFaceSet881;

HAnimSite876ZZZ.children[1] = Shape878;

let Billboard884 = browser.currentScene.createNode("Billboard");
Billboard884.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape885 = browser.currentScene.createNode("Shape");
let Text886 = browser.currentScene.createNode("Text");
Text886.string = new X3D.MFString([new X3D.SFString("25")]);
let FontStyle887 = browser.currentScene.createNode("FontStyle");
FontStyle887.size = 0.035;
fontStyle = FontStyle887;

geometry = Text886;

Billboard884YYY.children = new X3D.MFNode();

Billboard884ZZZ.children[0] = Shape885;

HAnimSite876ZZZ.children[2] = Billboard884;

HAnimSegment863ZZZ.children[1] = HAnimSite876;

let HAnimSite888 = browser.currentScene.createNode("HAnimSite");
HAnimSite888.name = "waist_preferred_anterior";
HAnimSite888.DEF = "hanim_waist_preferred_anterior_pt";
HAnimSite888.translation = new X3D.SFVec3f([0,0.9,0.1]);
let TouchSensor889 = browser.currentScene.createNode("TouchSensor");
TouchSensor889.description = "HAnimSite 26 hanim_waist_preferred_anterior_pt";
HAnimSite888YYY.children = new X3D.MFNode();

HAnimSite888ZZZ.children[0] = TouchSensor889;

let Shape890 = browser.currentScene.createNode("Shape");
let Appearance891 = browser.currentScene.createNode("Appearance");
let Material892 = browser.currentScene.createNode("Material");
Material892.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material892;

appearance = Appearance891;

let IndexedFaceSet893 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet893.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet893.creaseAngle = 0.5;
IndexedFaceSet893.solid = False;
let ColorRGBA894 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA894.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA894;

let Coordinate895 = browser.currentScene.createNode("Coordinate");
Coordinate895.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate895;

geometry = IndexedFaceSet893;

HAnimSite888ZZZ.children[1] = Shape890;

let Billboard896 = browser.currentScene.createNode("Billboard");
Billboard896.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape897 = browser.currentScene.createNode("Shape");
let Text898 = browser.currentScene.createNode("Text");
Text898.string = new X3D.MFString([new X3D.SFString("26")]);
let FontStyle899 = browser.currentScene.createNode("FontStyle");
FontStyle899.size = 0.035;
fontStyle = FontStyle899;

geometry = Text898;

Billboard896YYY.children = new X3D.MFNode();

Billboard896ZZZ.children[0] = Shape897;

HAnimSite888ZZZ.children[2] = Billboard896;

HAnimSegment863ZZZ.children[2] = HAnimSite888;

let HAnimSite900 = browser.currentScene.createNode("HAnimSite");
HAnimSite900.name = "waist_preferred_posterior";
HAnimSite900.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite900.translation = new X3D.SFVec3f([0,0.9,-0.1]);
let TouchSensor901 = browser.currentScene.createNode("TouchSensor");
TouchSensor901.description = "HAnimSite 27 hanim_waist_preferred_posterior_pt";
HAnimSite900YYY.children = new X3D.MFNode();

HAnimSite900ZZZ.children[0] = TouchSensor901;

let Shape902 = browser.currentScene.createNode("Shape");
let Appearance903 = browser.currentScene.createNode("Appearance");
let Material904 = browser.currentScene.createNode("Material");
Material904.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material904;

appearance = Appearance903;

let IndexedFaceSet905 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet905.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet905.creaseAngle = 0.5;
IndexedFaceSet905.solid = False;
let ColorRGBA906 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA906.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA906;

let Coordinate907 = browser.currentScene.createNode("Coordinate");
Coordinate907.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate907;

geometry = IndexedFaceSet905;

HAnimSite900ZZZ.children[1] = Shape902;

let Billboard908 = browser.currentScene.createNode("Billboard");
Billboard908.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape909 = browser.currentScene.createNode("Shape");
let Text910 = browser.currentScene.createNode("Text");
Text910.string = new X3D.MFString([new X3D.SFString("27")]);
let FontStyle911 = browser.currentScene.createNode("FontStyle");
FontStyle911.size = 0.035;
fontStyle = FontStyle911;

geometry = Text910;

Billboard908YYY.children = new X3D.MFNode();

Billboard908ZZZ.children[0] = Shape909;

HAnimSite900ZZZ.children[2] = Billboard908;

HAnimSegment863ZZZ.children[3] = HAnimSite900;

let HAnimSite912 = browser.currentScene.createNode("HAnimSite");
HAnimSite912.name = "navel";
HAnimSite912.DEF = "hanim_navel_pt";
HAnimSite912.translation = new X3D.SFVec3f([0,0.9,-0.1]);
let TouchSensor913 = browser.currentScene.createNode("TouchSensor");
TouchSensor913.description = "HAnimSite 84 hanim_navel_pt";
HAnimSite912YYY.children = new X3D.MFNode();

HAnimSite912ZZZ.children[0] = TouchSensor913;

let Shape914 = browser.currentScene.createNode("Shape");
let Appearance915 = browser.currentScene.createNode("Appearance");
let Material916 = browser.currentScene.createNode("Material");
Material916.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material916;

appearance = Appearance915;

let IndexedFaceSet917 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet917.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet917.creaseAngle = 0.5;
IndexedFaceSet917.solid = False;
let ColorRGBA918 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA918.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA918;

let Coordinate919 = browser.currentScene.createNode("Coordinate");
Coordinate919.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate919;

geometry = IndexedFaceSet917;

HAnimSite912ZZZ.children[1] = Shape914;

let Billboard920 = browser.currentScene.createNode("Billboard");
Billboard920.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape921 = browser.currentScene.createNode("Shape");
let Text922 = browser.currentScene.createNode("Text");
Text922.string = new X3D.MFString([new X3D.SFString("84")]);
let FontStyle923 = browser.currentScene.createNode("FontStyle");
FontStyle923.size = 0.035;
fontStyle = FontStyle923;

geometry = Text922;

Billboard920YYY.children = new X3D.MFNode();

Billboard920ZZZ.children[0] = Shape921;

HAnimSite912ZZZ.children[2] = Billboard920;

HAnimSegment863ZZZ.children[4] = HAnimSite912;

let Shape924 = browser.currentScene.createNode("Shape");
let LineSet925 = browser.currentScene.createNode("LineSet");
LineSet925.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA926 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA926.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA926;

let Coordinate927 = browser.currentScene.createNode("Coordinate");
Coordinate927.point = new X3D.MFVec3f([0,0.9254,-0.01376,0,0.77,0]);
coord = Coordinate927;

geometry = LineSet925;

HAnimSegment863ZZZ.children[5] = Shape924;

HAnimJoint862YYY.children = new X3D.MFNode();

HAnimJoint862ZZZ.children[0] = HAnimSegment863;

let HAnimJoint928 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint928.name = "vl4";
HAnimJoint928.DEF = "hanim_vl4";
HAnimJoint928.center = new X3D.SFVec3f([0,0.9497,-0.01376]);
HAnimJoint928.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint928.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment929 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment929.name = "l4";
HAnimSegment929.DEF = "hanim_l4";
let Shape930 = browser.currentScene.createNode("Shape");
let LineSet931 = browser.currentScene.createNode("LineSet");
LineSet931.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA932 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA932.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA932;

let Coordinate933 = browser.currentScene.createNode("Coordinate");
Coordinate933.point = new X3D.MFVec3f([0,0.9497,-0.01376,0,0.9254,-0.01376]);
coord = Coordinate933;

geometry = LineSet931;

HAnimSegment929YYY.children = new X3D.MFNode();

HAnimSegment929ZZZ.children[0] = Shape930;

HAnimJoint928YYY.children = new X3D.MFNode();

HAnimJoint928ZZZ.children[0] = HAnimSegment929;

let HAnimJoint934 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint934.name = "vl3";
HAnimJoint934.DEF = "hanim_vl3";
HAnimJoint934.center = new X3D.SFVec3f([0,0.9659,-0.01376]);
HAnimJoint934.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint934.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment935 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment935.name = "l3";
HAnimSegment935.DEF = "hanim_l3";
let Shape936 = browser.currentScene.createNode("Shape");
let LineSet937 = browser.currentScene.createNode("LineSet");
LineSet937.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA938 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA938.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA938;

let Coordinate939 = browser.currentScene.createNode("Coordinate");
Coordinate939.point = new X3D.MFVec3f([0,0.9659,-0.01376,0,0.9497,-0.01376]);
coord = Coordinate939;

geometry = LineSet937;

HAnimSegment935YYY.children = new X3D.MFNode();

HAnimSegment935ZZZ.children[0] = Shape936;

HAnimJoint934YYY.children = new X3D.MFNode();

HAnimJoint934ZZZ.children[0] = HAnimSegment935;

let HAnimJoint940 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint940.name = "vl2";
HAnimJoint940.DEF = "hanim_vl2";
HAnimJoint940.center = new X3D.SFVec3f([0,0.98235,-0.01376]);
HAnimJoint940.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint940.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment941 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment941.name = "l2";
HAnimSegment941.DEF = "hanim_l2";
let HAnimSite942 = browser.currentScene.createNode("HAnimSite");
HAnimSite942.name = "l_rib10";
HAnimSite942.DEF = "hanim_l_rib10_pt";
HAnimSite942.translation = new X3D.SFVec3f([0.09,1,0.04]);
let TouchSensor943 = browser.currentScene.createNode("TouchSensor");
TouchSensor943.description = "HAnimSite 28 hanim_l_rib10_pt";
HAnimSite942YYY.children = new X3D.MFNode();

HAnimSite942ZZZ.children[0] = TouchSensor943;

let Shape944 = browser.currentScene.createNode("Shape");
let Appearance945 = browser.currentScene.createNode("Appearance");
let Material946 = browser.currentScene.createNode("Material");
Material946.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material946;

appearance = Appearance945;

let IndexedFaceSet947 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet947.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet947.creaseAngle = 0.5;
IndexedFaceSet947.solid = False;
let ColorRGBA948 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA948.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA948;

let Coordinate949 = browser.currentScene.createNode("Coordinate");
Coordinate949.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate949;

geometry = IndexedFaceSet947;

HAnimSite942ZZZ.children[1] = Shape944;

let Billboard950 = browser.currentScene.createNode("Billboard");
Billboard950.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape951 = browser.currentScene.createNode("Shape");
let Text952 = browser.currentScene.createNode("Text");
Text952.string = new X3D.MFString([new X3D.SFString("28")]);
let FontStyle953 = browser.currentScene.createNode("FontStyle");
FontStyle953.size = 0.035;
fontStyle = FontStyle953;

geometry = Text952;

Billboard950YYY.children = new X3D.MFNode();

Billboard950ZZZ.children[0] = Shape951;

HAnimSite942ZZZ.children[2] = Billboard950;

HAnimSegment941YYY.children = new X3D.MFNode();

HAnimSegment941ZZZ.children[0] = HAnimSite942;

let HAnimSite954 = browser.currentScene.createNode("HAnimSite");
HAnimSite954.name = "r_rib10";
HAnimSite954.DEF = "hanim_r_rib10_pt";
HAnimSite954.translation = new X3D.SFVec3f([-0.09,1,0.04]);
let TouchSensor955 = browser.currentScene.createNode("TouchSensor");
TouchSensor955.description = "HAnimSite 30 hanim_r_rib10_pt";
HAnimSite954YYY.children = new X3D.MFNode();

HAnimSite954ZZZ.children[0] = TouchSensor955;

let Shape956 = browser.currentScene.createNode("Shape");
let Appearance957 = browser.currentScene.createNode("Appearance");
let Material958 = browser.currentScene.createNode("Material");
Material958.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material958;

appearance = Appearance957;

let IndexedFaceSet959 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet959.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet959.creaseAngle = 0.5;
IndexedFaceSet959.solid = False;
let ColorRGBA960 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA960.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA960;

let Coordinate961 = browser.currentScene.createNode("Coordinate");
Coordinate961.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate961;

geometry = IndexedFaceSet959;

HAnimSite954ZZZ.children[1] = Shape956;

let Billboard962 = browser.currentScene.createNode("Billboard");
Billboard962.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape963 = browser.currentScene.createNode("Shape");
let Text964 = browser.currentScene.createNode("Text");
Text964.string = new X3D.MFString([new X3D.SFString("30")]);
let FontStyle965 = browser.currentScene.createNode("FontStyle");
FontStyle965.size = 0.035;
fontStyle = FontStyle965;

geometry = Text964;

Billboard962YYY.children = new X3D.MFNode();

Billboard962ZZZ.children[0] = Shape963;

HAnimSite954ZZZ.children[2] = Billboard962;

HAnimSegment941ZZZ.children[1] = HAnimSite954;

let Shape966 = browser.currentScene.createNode("Shape");
let LineSet967 = browser.currentScene.createNode("LineSet");
LineSet967.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA968 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA968.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA968;

let Coordinate969 = browser.currentScene.createNode("Coordinate");
Coordinate969.point = new X3D.MFVec3f([0,0.98235,-0.01376,0,0.9659,-0.01376]);
coord = Coordinate969;

geometry = LineSet967;

HAnimSegment941ZZZ.children[2] = Shape966;

HAnimJoint940YYY.children = new X3D.MFNode();

HAnimJoint940ZZZ.children[0] = HAnimSegment941;

let HAnimJoint970 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint970.name = "vl1";
HAnimJoint970.DEF = "hanim_vl1";
HAnimJoint970.center = new X3D.SFVec3f([0,0.99967,-0.01376]);
HAnimJoint970.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint970.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment971 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment971.name = "l1";
HAnimSegment971.DEF = "hanim_l1";
let Shape972 = browser.currentScene.createNode("Shape");
let LineSet973 = browser.currentScene.createNode("LineSet");
LineSet973.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA974 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA974.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA974;

let Coordinate975 = browser.currentScene.createNode("Coordinate");
Coordinate975.point = new X3D.MFVec3f([0,0.99967,-0.01376,0,0.98235,-0.01376]);
coord = Coordinate975;

geometry = LineSet973;

HAnimSegment971YYY.children = new X3D.MFNode();

HAnimSegment971ZZZ.children[0] = Shape972;

HAnimJoint970YYY.children = new X3D.MFNode();

HAnimJoint970ZZZ.children[0] = HAnimSegment971;

let HAnimJoint976 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint976.name = "vt12";
HAnimJoint976.DEF = "hanim_vt12";
HAnimJoint976.center = new X3D.SFVec3f([0,1.0231,-0.01376]);
HAnimJoint976.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint976.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment977 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment977.name = "t12";
HAnimSegment977.DEF = "hanim_t12";
let Shape978 = browser.currentScene.createNode("Shape");
let LineSet979 = browser.currentScene.createNode("LineSet");
LineSet979.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA980 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA980.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA980;

let Coordinate981 = browser.currentScene.createNode("Coordinate");
Coordinate981.point = new X3D.MFVec3f([0,1.0231,-0.01376,0,0.99967,-0.01376]);
coord = Coordinate981;

geometry = LineSet979;

HAnimSegment977YYY.children = new X3D.MFNode();

HAnimSegment977ZZZ.children[0] = Shape978;

HAnimJoint976YYY.children = new X3D.MFNode();

HAnimJoint976ZZZ.children[0] = HAnimSegment977;

let HAnimJoint982 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint982.name = "vt11";
HAnimJoint982.DEF = "hanim_vt11";
HAnimJoint982.center = new X3D.SFVec3f([0,1.0467,-0.01376]);
HAnimJoint982.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint982.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment983 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment983.name = "t11";
HAnimSegment983.DEF = "hanim_t11";
let Shape984 = browser.currentScene.createNode("Shape");
let LineSet985 = browser.currentScene.createNode("LineSet");
LineSet985.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA986 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA986.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA986;

let Coordinate987 = browser.currentScene.createNode("Coordinate");
Coordinate987.point = new X3D.MFVec3f([0,1.0467,-0.01376,0,1.0231,-0.01376]);
coord = Coordinate987;

geometry = LineSet985;

HAnimSegment983YYY.children = new X3D.MFNode();

HAnimSegment983ZZZ.children[0] = Shape984;

HAnimJoint982YYY.children = new X3D.MFNode();

HAnimJoint982ZZZ.children[0] = HAnimSegment983;

let HAnimJoint988 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint988.name = "vt10";
HAnimJoint988.DEF = "hanim_vt10";
HAnimJoint988.center = new X3D.SFVec3f([0,1.0638,-0.01378]);
HAnimJoint988.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint988.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment989 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment989.name = "t10";
HAnimSegment989.DEF = "hanim_t10";
let HAnimSite990 = browser.currentScene.createNode("HAnimSite");
HAnimSite990.name = "substernale";
HAnimSite990.DEF = "hanim_substernale_pt";
HAnimSite990.translation = new X3D.SFVec3f([0,1.08,0.076]);
let TouchSensor991 = browser.currentScene.createNode("TouchSensor");
TouchSensor991.description = "HAnimSite 13 hanim_substernale_pt";
HAnimSite990YYY.children = new X3D.MFNode();

HAnimSite990ZZZ.children[0] = TouchSensor991;

let Shape992 = browser.currentScene.createNode("Shape");
let Appearance993 = browser.currentScene.createNode("Appearance");
let Material994 = browser.currentScene.createNode("Material");
Material994.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material994;

appearance = Appearance993;

let IndexedFaceSet995 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet995.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet995.creaseAngle = 0.5;
IndexedFaceSet995.solid = False;
let ColorRGBA996 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA996.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA996;

let Coordinate997 = browser.currentScene.createNode("Coordinate");
Coordinate997.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate997;

geometry = IndexedFaceSet995;

HAnimSite990ZZZ.children[1] = Shape992;

let Billboard998 = browser.currentScene.createNode("Billboard");
Billboard998.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape999 = browser.currentScene.createNode("Shape");
let Text1000 = browser.currentScene.createNode("Text");
Text1000.string = new X3D.MFString([new X3D.SFString("13")]);
let FontStyle1001 = browser.currentScene.createNode("FontStyle");
FontStyle1001.size = 0.035;
fontStyle = FontStyle1001;

geometry = Text1000;

Billboard998YYY.children = new X3D.MFNode();

Billboard998ZZZ.children[0] = Shape999;

HAnimSite990ZZZ.children[2] = Billboard998;

HAnimSegment989YYY.children = new X3D.MFNode();

HAnimSegment989ZZZ.children[0] = HAnimSite990;

let HAnimSite1002 = browser.currentScene.createNode("HAnimSite");
HAnimSite1002.name = "mesosternale";
HAnimSite1002.DEF = "hanim_mesosternale_pt";
HAnimSite1002.translation = new X3D.SFVec3f([0,1.15,0.076]);
let TouchSensor1003 = browser.currentScene.createNode("TouchSensor");
TouchSensor1003.description = "HAnimSite 88 hanim_mesosternale_pt";
HAnimSite1002YYY.children = new X3D.MFNode();

HAnimSite1002ZZZ.children[0] = TouchSensor1003;

let Shape1004 = browser.currentScene.createNode("Shape");
let Appearance1005 = browser.currentScene.createNode("Appearance");
let Material1006 = browser.currentScene.createNode("Material");
Material1006.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1006;

appearance = Appearance1005;

let IndexedFaceSet1007 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1007.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1007.creaseAngle = 0.5;
IndexedFaceSet1007.solid = False;
let ColorRGBA1008 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1008.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1008;

let Coordinate1009 = browser.currentScene.createNode("Coordinate");
Coordinate1009.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1009;

geometry = IndexedFaceSet1007;

HAnimSite1002ZZZ.children[1] = Shape1004;

let Billboard1010 = browser.currentScene.createNode("Billboard");
Billboard1010.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1011 = browser.currentScene.createNode("Shape");
let Text1012 = browser.currentScene.createNode("Text");
Text1012.string = new X3D.MFString([new X3D.SFString("88")]);
let FontStyle1013 = browser.currentScene.createNode("FontStyle");
FontStyle1013.size = 0.035;
fontStyle = FontStyle1013;

geometry = Text1012;

Billboard1010YYY.children = new X3D.MFNode();

Billboard1010ZZZ.children[0] = Shape1011;

HAnimSite1002ZZZ.children[2] = Billboard1010;

HAnimSegment989ZZZ.children[1] = HAnimSite1002;

let Shape1014 = browser.currentScene.createNode("Shape");
let LineSet1015 = browser.currentScene.createNode("LineSet");
LineSet1015.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1016 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1016.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1016;

let Coordinate1017 = browser.currentScene.createNode("Coordinate");
Coordinate1017.point = new X3D.MFVec3f([0,1.0638,-0.01378,0,1.0467,-0.01376]);
coord = Coordinate1017;

geometry = LineSet1015;

HAnimSegment989ZZZ.children[2] = Shape1014;

HAnimJoint988YYY.children = new X3D.MFNode();

HAnimJoint988ZZZ.children[0] = HAnimSegment989;

let HAnimJoint1018 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1018.name = "vt9";
HAnimJoint1018.DEF = "hanim_vt9";
HAnimJoint1018.center = new X3D.SFVec3f([0,1.0784,-0.01376]);
HAnimJoint1018.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1018.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1019 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1019.name = "t9";
HAnimSegment1019.DEF = "hanim_t9";
let HAnimSite1020 = browser.currentScene.createNode("HAnimSite");
HAnimSite1020.name = "l_thelion";
HAnimSite1020.DEF = "hanim_l_thelion_pt";
HAnimSite1020.translation = new X3D.SFVec3f([0.07,1.12,0.09]);
let TouchSensor1021 = browser.currentScene.createNode("TouchSensor");
TouchSensor1021.description = "HAnimSite 29 hanim_l_thelion_pt";
HAnimSite1020YYY.children = new X3D.MFNode();

HAnimSite1020ZZZ.children[0] = TouchSensor1021;

let Shape1022 = browser.currentScene.createNode("Shape");
let Appearance1023 = browser.currentScene.createNode("Appearance");
let Material1024 = browser.currentScene.createNode("Material");
Material1024.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1024;

appearance = Appearance1023;

let IndexedFaceSet1025 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1025.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1025.creaseAngle = 0.5;
IndexedFaceSet1025.solid = False;
let ColorRGBA1026 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1026.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1026;

let Coordinate1027 = browser.currentScene.createNode("Coordinate");
Coordinate1027.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1027;

geometry = IndexedFaceSet1025;

HAnimSite1020ZZZ.children[1] = Shape1022;

let Billboard1028 = browser.currentScene.createNode("Billboard");
Billboard1028.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1029 = browser.currentScene.createNode("Shape");
let Text1030 = browser.currentScene.createNode("Text");
Text1030.string = new X3D.MFString([new X3D.SFString("29")]);
let FontStyle1031 = browser.currentScene.createNode("FontStyle");
FontStyle1031.size = 0.035;
fontStyle = FontStyle1031;

geometry = Text1030;

Billboard1028YYY.children = new X3D.MFNode();

Billboard1028ZZZ.children[0] = Shape1029;

HAnimSite1020ZZZ.children[2] = Billboard1028;

HAnimSegment1019YYY.children = new X3D.MFNode();

HAnimSegment1019ZZZ.children[0] = HAnimSite1020;

let HAnimSite1032 = browser.currentScene.createNode("HAnimSite");
HAnimSite1032.name = "r_thelion";
HAnimSite1032.DEF = "hanim_r_thelion_pt";
HAnimSite1032.translation = new X3D.SFVec3f([-0.07,1.12,0.09]);
let TouchSensor1033 = browser.currentScene.createNode("TouchSensor");
TouchSensor1033.description = "HAnimSite 31 hanim_r_thelion_pt";
HAnimSite1032YYY.children = new X3D.MFNode();

HAnimSite1032ZZZ.children[0] = TouchSensor1033;

let Shape1034 = browser.currentScene.createNode("Shape");
let Appearance1035 = browser.currentScene.createNode("Appearance");
let Material1036 = browser.currentScene.createNode("Material");
Material1036.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1036;

appearance = Appearance1035;

let IndexedFaceSet1037 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1037.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1037.creaseAngle = 0.5;
IndexedFaceSet1037.solid = False;
let ColorRGBA1038 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1038.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1038;

let Coordinate1039 = browser.currentScene.createNode("Coordinate");
Coordinate1039.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1039;

geometry = IndexedFaceSet1037;

HAnimSite1032ZZZ.children[1] = Shape1034;

let Billboard1040 = browser.currentScene.createNode("Billboard");
Billboard1040.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1041 = browser.currentScene.createNode("Shape");
let Text1042 = browser.currentScene.createNode("Text");
Text1042.string = new X3D.MFString([new X3D.SFString("31")]);
let FontStyle1043 = browser.currentScene.createNode("FontStyle");
FontStyle1043.size = 0.035;
fontStyle = FontStyle1043;

geometry = Text1042;

Billboard1040YYY.children = new X3D.MFNode();

Billboard1040ZZZ.children[0] = Shape1041;

HAnimSite1032ZZZ.children[2] = Billboard1040;

HAnimSegment1019ZZZ.children[1] = HAnimSite1032;

let HAnimSite1044 = browser.currentScene.createNode("HAnimSite");
HAnimSite1044.name = "rear_center_midsagittal_plane";
HAnimSite1044.DEF = "hanim_rear_center_midsagittal_plane_pt";
HAnimSite1044.translation = new X3D.SFVec3f([0,1.1,-0.1]);
let TouchSensor1045 = browser.currentScene.createNode("TouchSensor");
TouchSensor1045.description = "HAnimSite 92 hanim_rear_center_midsagittal_plane_pt";
HAnimSite1044YYY.children = new X3D.MFNode();

HAnimSite1044ZZZ.children[0] = TouchSensor1045;

let Shape1046 = browser.currentScene.createNode("Shape");
let Appearance1047 = browser.currentScene.createNode("Appearance");
let Material1048 = browser.currentScene.createNode("Material");
Material1048.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1048;

appearance = Appearance1047;

let IndexedFaceSet1049 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1049.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1049.creaseAngle = 0.5;
IndexedFaceSet1049.solid = False;
let ColorRGBA1050 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1050.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1050;

let Coordinate1051 = browser.currentScene.createNode("Coordinate");
Coordinate1051.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1051;

geometry = IndexedFaceSet1049;

HAnimSite1044ZZZ.children[1] = Shape1046;

let Billboard1052 = browser.currentScene.createNode("Billboard");
Billboard1052.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1053 = browser.currentScene.createNode("Shape");
let Text1054 = browser.currentScene.createNode("Text");
Text1054.string = new X3D.MFString([new X3D.SFString("92")]);
let FontStyle1055 = browser.currentScene.createNode("FontStyle");
FontStyle1055.size = 0.035;
fontStyle = FontStyle1055;

geometry = Text1054;

Billboard1052YYY.children = new X3D.MFNode();

Billboard1052ZZZ.children[0] = Shape1053;

HAnimSite1044ZZZ.children[2] = Billboard1052;

HAnimSegment1019ZZZ.children[2] = HAnimSite1044;

let HAnimSite1056 = browser.currentScene.createNode("HAnimSite");
HAnimSite1056.name = "l_chest_midsagittal_plane";
HAnimSite1056.DEF = "hanim_l_chest_midsagittal_plane_pt";
HAnimSite1056.translation = new X3D.SFVec3f([0.13,1.12,0]);
let TouchSensor1057 = browser.currentScene.createNode("TouchSensor");
TouchSensor1057.description = "HAnimSite 94 hanim_l_chest_midsagittal_plane_pt";
HAnimSite1056YYY.children = new X3D.MFNode();

HAnimSite1056ZZZ.children[0] = TouchSensor1057;

let Shape1058 = browser.currentScene.createNode("Shape");
let Appearance1059 = browser.currentScene.createNode("Appearance");
let Material1060 = browser.currentScene.createNode("Material");
Material1060.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1060;

appearance = Appearance1059;

let IndexedFaceSet1061 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1061.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1061.creaseAngle = 0.5;
IndexedFaceSet1061.solid = False;
let ColorRGBA1062 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1062.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1062;

let Coordinate1063 = browser.currentScene.createNode("Coordinate");
Coordinate1063.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1063;

geometry = IndexedFaceSet1061;

HAnimSite1056ZZZ.children[1] = Shape1058;

let Billboard1064 = browser.currentScene.createNode("Billboard");
Billboard1064.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1065 = browser.currentScene.createNode("Shape");
let Text1066 = browser.currentScene.createNode("Text");
Text1066.string = new X3D.MFString([new X3D.SFString("94")]);
let FontStyle1067 = browser.currentScene.createNode("FontStyle");
FontStyle1067.size = 0.035;
fontStyle = FontStyle1067;

geometry = Text1066;

Billboard1064YYY.children = new X3D.MFNode();

Billboard1064ZZZ.children[0] = Shape1065;

HAnimSite1056ZZZ.children[2] = Billboard1064;

HAnimSegment1019ZZZ.children[3] = HAnimSite1056;

let HAnimSite1068 = browser.currentScene.createNode("HAnimSite");
HAnimSite1068.name = "r_chest_midsagittal_plane";
HAnimSite1068.DEF = "hanim_r_chest_midsagittal_plane_pt";
HAnimSite1068.translation = new X3D.SFVec3f([-0.13,1.12,0]);
let TouchSensor1069 = browser.currentScene.createNode("TouchSensor");
TouchSensor1069.description = "HAnimSite 95 hanim_r_chest_midsagittal_plane_pt";
HAnimSite1068YYY.children = new X3D.MFNode();

HAnimSite1068ZZZ.children[0] = TouchSensor1069;

let Shape1070 = browser.currentScene.createNode("Shape");
let Appearance1071 = browser.currentScene.createNode("Appearance");
let Material1072 = browser.currentScene.createNode("Material");
Material1072.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1072;

appearance = Appearance1071;

let IndexedFaceSet1073 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1073.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1073.creaseAngle = 0.5;
IndexedFaceSet1073.solid = False;
let ColorRGBA1074 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1074.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1074;

let Coordinate1075 = browser.currentScene.createNode("Coordinate");
Coordinate1075.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1075;

geometry = IndexedFaceSet1073;

HAnimSite1068ZZZ.children[1] = Shape1070;

let Billboard1076 = browser.currentScene.createNode("Billboard");
Billboard1076.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1077 = browser.currentScene.createNode("Shape");
let Text1078 = browser.currentScene.createNode("Text");
Text1078.string = new X3D.MFString([new X3D.SFString("95")]);
let FontStyle1079 = browser.currentScene.createNode("FontStyle");
FontStyle1079.size = 0.035;
fontStyle = FontStyle1079;

geometry = Text1078;

Billboard1076YYY.children = new X3D.MFNode();

Billboard1076ZZZ.children[0] = Shape1077;

HAnimSite1068ZZZ.children[2] = Billboard1076;

HAnimSegment1019ZZZ.children[4] = HAnimSite1068;

let Shape1080 = browser.currentScene.createNode("Shape");
let LineSet1081 = browser.currentScene.createNode("LineSet");
LineSet1081.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1082 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1082.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1082;

let Coordinate1083 = browser.currentScene.createNode("Coordinate");
Coordinate1083.point = new X3D.MFVec3f([0,1.0784,-0.01376,0,1.0638,-0.01378]);
coord = Coordinate1083;

geometry = LineSet1081;

HAnimSegment1019ZZZ.children[5] = Shape1080;

HAnimJoint1018YYY.children = new X3D.MFNode();

HAnimJoint1018ZZZ.children[0] = HAnimSegment1019;

let HAnimJoint1084 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1084.name = "vt8";
HAnimJoint1084.DEF = "hanim_vt8";
HAnimJoint1084.center = new X3D.SFVec3f([0,1.093,-0.01376]);
HAnimJoint1084.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1084.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1085 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1085.name = "t8";
HAnimSegment1085.DEF = "hanim_t8";
let Shape1086 = browser.currentScene.createNode("Shape");
let LineSet1087 = browser.currentScene.createNode("LineSet");
LineSet1087.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1088 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1088.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1088;

let Coordinate1089 = browser.currentScene.createNode("Coordinate");
Coordinate1089.point = new X3D.MFVec3f([0,1.093,-0.01376,0,1.0784,-0.01376]);
coord = Coordinate1089;

geometry = LineSet1087;

HAnimSegment1085YYY.children = new X3D.MFNode();

HAnimSegment1085ZZZ.children[0] = Shape1086;

HAnimJoint1084YYY.children = new X3D.MFNode();

HAnimJoint1084ZZZ.children[0] = HAnimSegment1085;

let HAnimJoint1090 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1090.name = "vt7";
HAnimJoint1090.DEF = "hanim_vt7";
HAnimJoint1090.center = new X3D.SFVec3f([0,1.1088,-0.01376]);
HAnimJoint1090.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1090.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1091 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1091.name = "t7";
HAnimSegment1091.DEF = "hanim_t7";
let Shape1092 = browser.currentScene.createNode("Shape");
let LineSet1093 = browser.currentScene.createNode("LineSet");
LineSet1093.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1094 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1094.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1094;

let Coordinate1095 = browser.currentScene.createNode("Coordinate");
Coordinate1095.point = new X3D.MFVec3f([0,1.1088,-0.01376,0,1.093,-0.01376]);
coord = Coordinate1095;

geometry = LineSet1093;

HAnimSegment1091YYY.children = new X3D.MFNode();

HAnimSegment1091ZZZ.children[0] = Shape1092;

HAnimJoint1090YYY.children = new X3D.MFNode();

HAnimJoint1090ZZZ.children[0] = HAnimSegment1091;

let HAnimJoint1096 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1096.name = "vt6";
HAnimJoint1096.DEF = "hanim_vt6";
HAnimJoint1096.center = new X3D.SFVec3f([0,1.1216,-0.01376]);
HAnimJoint1096.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1096.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1097 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1097.name = "t6";
HAnimSegment1097.DEF = "hanim_t6";
let Shape1098 = browser.currentScene.createNode("Shape");
let LineSet1099 = browser.currentScene.createNode("LineSet");
LineSet1099.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1100 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1100.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1100;

let Coordinate1101 = browser.currentScene.createNode("Coordinate");
Coordinate1101.point = new X3D.MFVec3f([0,1.1216,-0.01376,0,1.1088,-0.01376]);
coord = Coordinate1101;

geometry = LineSet1099;

HAnimSegment1097YYY.children = new X3D.MFNode();

HAnimSegment1097ZZZ.children[0] = Shape1098;

HAnimJoint1096YYY.children = new X3D.MFNode();

HAnimJoint1096ZZZ.children[0] = HAnimSegment1097;

let HAnimJoint1102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1102.name = "vt5";
HAnimJoint1102.DEF = "hanim_vt5";
HAnimJoint1102.center = new X3D.SFVec3f([0,1.137,-0.01376]);
HAnimJoint1102.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1102.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1103 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1103.name = "t5";
HAnimSegment1103.DEF = "hanim_t5";
let Shape1104 = browser.currentScene.createNode("Shape");
let LineSet1105 = browser.currentScene.createNode("LineSet");
LineSet1105.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1106 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1106.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1106;

let Coordinate1107 = browser.currentScene.createNode("Coordinate");
Coordinate1107.point = new X3D.MFVec3f([0,1.137,-0.01376,0,1.1216,-0.01376]);
coord = Coordinate1107;

geometry = LineSet1105;

HAnimSegment1103YYY.children = new X3D.MFNode();

HAnimSegment1103ZZZ.children[0] = Shape1104;

HAnimJoint1102YYY.children = new X3D.MFNode();

HAnimJoint1102ZZZ.children[0] = HAnimSegment1103;

let HAnimJoint1108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1108.name = "vt4";
HAnimJoint1108.DEF = "hanim_vt4";
HAnimJoint1108.center = new X3D.SFVec3f([0,1.1524,-0.01376]);
HAnimJoint1108.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1108.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1109 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1109.name = "t4";
HAnimSegment1109.DEF = "hanim_t4";
let Shape1110 = browser.currentScene.createNode("Shape");
let LineSet1111 = browser.currentScene.createNode("LineSet");
LineSet1111.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1112 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1112.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1112;

let Coordinate1113 = browser.currentScene.createNode("Coordinate");
Coordinate1113.point = new X3D.MFVec3f([0,1.1524,-0.01376,0,1.137,-0.01376]);
coord = Coordinate1113;

geometry = LineSet1111;

HAnimSegment1109YYY.children = new X3D.MFNode();

HAnimSegment1109ZZZ.children[0] = Shape1110;

HAnimJoint1108YYY.children = new X3D.MFNode();

HAnimJoint1108ZZZ.children[0] = HAnimSegment1109;

let HAnimJoint1114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1114.name = "vt3";
HAnimJoint1114.DEF = "hanim_vt3";
HAnimJoint1114.center = new X3D.SFVec3f([0,1.1709,-0.01376]);
HAnimJoint1114.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1114.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1115 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1115.name = "t3";
HAnimSegment1115.DEF = "hanim_t3";
let Shape1116 = browser.currentScene.createNode("Shape");
let LineSet1117 = browser.currentScene.createNode("LineSet");
LineSet1117.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1118 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1118.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1118;

let Coordinate1119 = browser.currentScene.createNode("Coordinate");
Coordinate1119.point = new X3D.MFVec3f([0,1.1709,-0.01376,0,1.1524,-0.01376]);
coord = Coordinate1119;

geometry = LineSet1117;

HAnimSegment1115YYY.children = new X3D.MFNode();

HAnimSegment1115ZZZ.children[0] = Shape1116;

HAnimJoint1114YYY.children = new X3D.MFNode();

HAnimJoint1114ZZZ.children[0] = HAnimSegment1115;

let HAnimJoint1120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1120.name = "vt2";
HAnimJoint1120.DEF = "hanim_vt2";
HAnimJoint1120.center = new X3D.SFVec3f([0,1.1956,-0.01378]);
HAnimJoint1120.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1120.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1121 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1121.name = "t2";
HAnimSegment1121.DEF = "hanim_t2";
let Shape1122 = browser.currentScene.createNode("Shape");
let LineSet1123 = browser.currentScene.createNode("LineSet");
LineSet1123.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1124 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1124.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1124;

let Coordinate1125 = browser.currentScene.createNode("Coordinate");
Coordinate1125.point = new X3D.MFVec3f([0,1.1956,-0.01378,0,1.1709,-0.01376]);
coord = Coordinate1125;

geometry = LineSet1123;

HAnimSegment1121YYY.children = new X3D.MFNode();

HAnimSegment1121ZZZ.children[0] = Shape1122;

HAnimJoint1120YYY.children = new X3D.MFNode();

HAnimJoint1120ZZZ.children[0] = HAnimSegment1121;

let HAnimJoint1126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1126.name = "vt1";
HAnimJoint1126.DEF = "hanim_vt1";
HAnimJoint1126.center = new X3D.SFVec3f([0,1.22,-0.0138]);
HAnimJoint1126.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1126.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1127 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1127.name = "t1";
HAnimSegment1127.DEF = "hanim_t1";
let HAnimSite1128 = browser.currentScene.createNode("HAnimSite");
HAnimSite1128.name = "suprasternale";
HAnimSite1128.DEF = "hanim_suprasternale_pt";
HAnimSite1128.translation = new X3D.SFVec3f([0,1.22,0.08]);
let TouchSensor1129 = browser.currentScene.createNode("TouchSensor");
TouchSensor1129.description = "HAnimSite 12 hanim_suprasternale_pt";
HAnimSite1128YYY.children = new X3D.MFNode();

HAnimSite1128ZZZ.children[0] = TouchSensor1129;

let Shape1130 = browser.currentScene.createNode("Shape");
let Appearance1131 = browser.currentScene.createNode("Appearance");
let Material1132 = browser.currentScene.createNode("Material");
Material1132.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1132;

appearance = Appearance1131;

let IndexedFaceSet1133 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1133.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1133.creaseAngle = 0.5;
IndexedFaceSet1133.solid = False;
let ColorRGBA1134 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1134.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1134;

let Coordinate1135 = browser.currentScene.createNode("Coordinate");
Coordinate1135.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1135;

geometry = IndexedFaceSet1133;

HAnimSite1128ZZZ.children[1] = Shape1130;

let Billboard1136 = browser.currentScene.createNode("Billboard");
Billboard1136.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1137 = browser.currentScene.createNode("Shape");
let Text1138 = browser.currentScene.createNode("Text");
Text1138.string = new X3D.MFString([new X3D.SFString("12")]);
let FontStyle1139 = browser.currentScene.createNode("FontStyle");
FontStyle1139.size = 0.035;
fontStyle = FontStyle1139;

geometry = Text1138;

Billboard1136YYY.children = new X3D.MFNode();

Billboard1136ZZZ.children[0] = Shape1137;

HAnimSite1128ZZZ.children[2] = Billboard1136;

HAnimSegment1127YYY.children = new X3D.MFNode();

HAnimSegment1127ZZZ.children[0] = HAnimSite1128;

let HAnimSite1140 = browser.currentScene.createNode("HAnimSite");
HAnimSite1140.name = "cervicale";
HAnimSite1140.DEF = "hanim_cervicale_pt";
HAnimSite1140.translation = new X3D.SFVec3f([0,1.22,-0.08]);
let TouchSensor1141 = browser.currentScene.createNode("TouchSensor");
TouchSensor1141.description = "HAnimSite 10 hanim_cervicale_pt";
HAnimSite1140YYY.children = new X3D.MFNode();

HAnimSite1140ZZZ.children[0] = TouchSensor1141;

let Shape1142 = browser.currentScene.createNode("Shape");
let Appearance1143 = browser.currentScene.createNode("Appearance");
let Material1144 = browser.currentScene.createNode("Material");
Material1144.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1144;

appearance = Appearance1143;

let IndexedFaceSet1145 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1145.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1145.creaseAngle = 0.5;
IndexedFaceSet1145.solid = False;
let ColorRGBA1146 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1146.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1146;

let Coordinate1147 = browser.currentScene.createNode("Coordinate");
Coordinate1147.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1147;

geometry = IndexedFaceSet1145;

HAnimSite1140ZZZ.children[1] = Shape1142;

let Billboard1148 = browser.currentScene.createNode("Billboard");
Billboard1148.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1149 = browser.currentScene.createNode("Shape");
let Text1150 = browser.currentScene.createNode("Text");
Text1150.string = new X3D.MFString([new X3D.SFString("10")]);
let FontStyle1151 = browser.currentScene.createNode("FontStyle");
FontStyle1151.size = 0.035;
fontStyle = FontStyle1151;

geometry = Text1150;

Billboard1148YYY.children = new X3D.MFNode();

Billboard1148ZZZ.children[0] = Shape1149;

HAnimSite1140ZZZ.children[2] = Billboard1148;

HAnimSegment1127ZZZ.children[1] = HAnimSite1140;

let Shape1152 = browser.currentScene.createNode("Shape");
let LineSet1153 = browser.currentScene.createNode("LineSet");
LineSet1153.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1154 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1154.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1154;

let Coordinate1155 = browser.currentScene.createNode("Coordinate");
Coordinate1155.point = new X3D.MFVec3f([0,1.22,-0.0138,0,1.1956,-0.01378]);
coord = Coordinate1155;

geometry = LineSet1153;

HAnimSegment1127ZZZ.children[2] = Shape1152;

HAnimJoint1126YYY.children = new X3D.MFNode();

HAnimJoint1126ZZZ.children[0] = HAnimSegment1127;

let HAnimJoint1156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1156.name = "vc7";
HAnimJoint1156.DEF = "hanim_vc7";
HAnimJoint1156.center = new X3D.SFVec3f([0,1.2453,-0.01506]);
HAnimJoint1156.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1156.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1157 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1157.name = "c7";
HAnimSegment1157.DEF = "hanim_c7";
let HAnimSite1158 = browser.currentScene.createNode("HAnimSite");
HAnimSite1158.name = "l_neck_base";
HAnimSite1158.DEF = "hanim_l_neck_base_pt";
HAnimSite1158.translation = new X3D.SFVec3f([0.06,1.26,0]);
let TouchSensor1159 = browser.currentScene.createNode("TouchSensor");
TouchSensor1159.description = "HAnimSite 82 hanim_l_neck_base_pt";
HAnimSite1158YYY.children = new X3D.MFNode();

HAnimSite1158ZZZ.children[0] = TouchSensor1159;

let Shape1160 = browser.currentScene.createNode("Shape");
let Appearance1161 = browser.currentScene.createNode("Appearance");
let Material1162 = browser.currentScene.createNode("Material");
Material1162.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1162;

appearance = Appearance1161;

let IndexedFaceSet1163 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1163.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1163.creaseAngle = 0.5;
IndexedFaceSet1163.solid = False;
let ColorRGBA1164 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1164.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1164;

let Coordinate1165 = browser.currentScene.createNode("Coordinate");
Coordinate1165.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1165;

geometry = IndexedFaceSet1163;

HAnimSite1158ZZZ.children[1] = Shape1160;

let Billboard1166 = browser.currentScene.createNode("Billboard");
Billboard1166.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1167 = browser.currentScene.createNode("Shape");
let Text1168 = browser.currentScene.createNode("Text");
Text1168.string = new X3D.MFString([new X3D.SFString("82")]);
let FontStyle1169 = browser.currentScene.createNode("FontStyle");
FontStyle1169.size = 0.035;
fontStyle = FontStyle1169;

geometry = Text1168;

Billboard1166YYY.children = new X3D.MFNode();

Billboard1166ZZZ.children[0] = Shape1167;

HAnimSite1158ZZZ.children[2] = Billboard1166;

HAnimSegment1157YYY.children = new X3D.MFNode();

HAnimSegment1157ZZZ.children[0] = HAnimSite1158;

let HAnimSite1170 = browser.currentScene.createNode("HAnimSite");
HAnimSite1170.name = "r_neck_base";
HAnimSite1170.DEF = "hanim_r_neck_base_pt";
HAnimSite1170.translation = new X3D.SFVec3f([-0.06,1.26,0]);
let TouchSensor1171 = browser.currentScene.createNode("TouchSensor");
TouchSensor1171.description = "HAnimSite 83 hanim_r_neck_base_pt";
HAnimSite1170YYY.children = new X3D.MFNode();

HAnimSite1170ZZZ.children[0] = TouchSensor1171;

let Shape1172 = browser.currentScene.createNode("Shape");
let Appearance1173 = browser.currentScene.createNode("Appearance");
let Material1174 = browser.currentScene.createNode("Material");
Material1174.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1174;

appearance = Appearance1173;

let IndexedFaceSet1175 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1175.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1175.creaseAngle = 0.5;
IndexedFaceSet1175.solid = False;
let ColorRGBA1176 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1176.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1176;

let Coordinate1177 = browser.currentScene.createNode("Coordinate");
Coordinate1177.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1177;

geometry = IndexedFaceSet1175;

HAnimSite1170ZZZ.children[1] = Shape1172;

let Billboard1178 = browser.currentScene.createNode("Billboard");
Billboard1178.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1179 = browser.currentScene.createNode("Shape");
let Text1180 = browser.currentScene.createNode("Text");
Text1180.string = new X3D.MFString([new X3D.SFString("83")]);
let FontStyle1181 = browser.currentScene.createNode("FontStyle");
FontStyle1181.size = 0.035;
fontStyle = FontStyle1181;

geometry = Text1180;

Billboard1178YYY.children = new X3D.MFNode();

Billboard1178ZZZ.children[0] = Shape1179;

HAnimSite1170ZZZ.children[2] = Billboard1178;

HAnimSegment1157ZZZ.children[1] = HAnimSite1170;

let Shape1182 = browser.currentScene.createNode("Shape");
let LineSet1183 = browser.currentScene.createNode("LineSet");
LineSet1183.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1184 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1184.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1184;

let Coordinate1185 = browser.currentScene.createNode("Coordinate");
Coordinate1185.point = new X3D.MFVec3f([0,1.2453,-0.01506,0,1.22,-0.0138]);
coord = Coordinate1185;

geometry = LineSet1183;

HAnimSegment1157ZZZ.children[2] = Shape1182;

HAnimJoint1156YYY.children = new X3D.MFNode();

HAnimJoint1156ZZZ.children[0] = HAnimSegment1157;

let HAnimJoint1186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1186.name = "vc6";
HAnimJoint1186.DEF = "hanim_vc6";
HAnimJoint1186.center = new X3D.SFVec3f([0,1.2575,-0.01506]);
HAnimJoint1186.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1186.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1187 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1187.name = "c6";
HAnimSegment1187.DEF = "hanim_c6";
let Shape1188 = browser.currentScene.createNode("Shape");
let LineSet1189 = browser.currentScene.createNode("LineSet");
LineSet1189.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1190 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1190.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1190;

let Coordinate1191 = browser.currentScene.createNode("Coordinate");
Coordinate1191.point = new X3D.MFVec3f([0,1.2575,-0.01506,0,1.2453,-0.01506]);
coord = Coordinate1191;

geometry = LineSet1189;

HAnimSegment1187YYY.children = new X3D.MFNode();

HAnimSegment1187ZZZ.children[0] = Shape1188;

HAnimJoint1186YYY.children = new X3D.MFNode();

HAnimJoint1186ZZZ.children[0] = HAnimSegment1187;

let HAnimJoint1192 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1192.name = "vc5";
HAnimJoint1192.DEF = "hanim_vc5";
HAnimJoint1192.center = new X3D.SFVec3f([0,1.2699,-0.01506]);
HAnimJoint1192.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1192.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1193 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1193.name = "c5";
HAnimSegment1193.DEF = "hanim_c5";
let Shape1194 = browser.currentScene.createNode("Shape");
let LineSet1195 = browser.currentScene.createNode("LineSet");
LineSet1195.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1196 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1196.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1196;

let Coordinate1197 = browser.currentScene.createNode("Coordinate");
Coordinate1197.point = new X3D.MFVec3f([0,1.2699,-0.01506,0,1.2575,-0.01506]);
coord = Coordinate1197;

geometry = LineSet1195;

HAnimSegment1193YYY.children = new X3D.MFNode();

HAnimSegment1193ZZZ.children[0] = Shape1194;

HAnimJoint1192YYY.children = new X3D.MFNode();

HAnimJoint1192ZZZ.children[0] = HAnimSegment1193;

let HAnimJoint1198 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1198.name = "vc4";
HAnimJoint1198.DEF = "hanim_vc4";
HAnimJoint1198.center = new X3D.SFVec3f([0,1.28227,-0.01506]);
HAnimJoint1198.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1198.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1199 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1199.name = "c4";
HAnimSegment1199.DEF = "hanim_c4";
let Shape1200 = browser.currentScene.createNode("Shape");
let LineSet1201 = browser.currentScene.createNode("LineSet");
LineSet1201.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1202 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1202.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1202;

let Coordinate1203 = browser.currentScene.createNode("Coordinate");
Coordinate1203.point = new X3D.MFVec3f([0,1.28227,-0.01506,0,1.2699,-0.01506]);
coord = Coordinate1203;

geometry = LineSet1201;

HAnimSegment1199YYY.children = new X3D.MFNode();

HAnimSegment1199ZZZ.children[0] = Shape1200;

HAnimJoint1198YYY.children = new X3D.MFNode();

HAnimJoint1198ZZZ.children[0] = HAnimSegment1199;

let HAnimJoint1204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1204.name = "vc3";
HAnimJoint1204.DEF = "hanim_vc3";
HAnimJoint1204.center = new X3D.SFVec3f([0,1.2951,-0.01506]);
HAnimJoint1204.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1204.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1205 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1205.name = "c3";
HAnimSegment1205.DEF = "hanim_c3";
let Shape1206 = browser.currentScene.createNode("Shape");
let LineSet1207 = browser.currentScene.createNode("LineSet");
LineSet1207.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1208 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1208.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1208;

let Coordinate1209 = browser.currentScene.createNode("Coordinate");
Coordinate1209.point = new X3D.MFVec3f([0,1.2951,-0.01506,0,1.28227,-0.01506]);
coord = Coordinate1209;

geometry = LineSet1207;

HAnimSegment1205YYY.children = new X3D.MFNode();

HAnimSegment1205ZZZ.children[0] = Shape1206;

HAnimJoint1204YYY.children = new X3D.MFNode();

HAnimJoint1204ZZZ.children[0] = HAnimSegment1205;

let HAnimJoint1210 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1210.name = "vc2";
HAnimJoint1210.DEF = "hanim_vc2";
HAnimJoint1210.center = new X3D.SFVec3f([0,1.307,-0.015]);
HAnimJoint1210.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1210.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1211 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1211.name = "c2";
HAnimSegment1211.DEF = "hanim_c2";
let HAnimSite1212 = browser.currentScene.createNode("HAnimSite");
HAnimSite1212.name = "adams_apple";
HAnimSite1212.DEF = "hanim_adams_apple_pt";
HAnimSite1212.translation = new X3D.SFVec3f([0,1.29,0.04]);
let TouchSensor1213 = browser.currentScene.createNode("TouchSensor");
TouchSensor1213.description = "HAnimSite 11 hanim_adams_apple_pt";
HAnimSite1212YYY.children = new X3D.MFNode();

HAnimSite1212ZZZ.children[0] = TouchSensor1213;

let Shape1214 = browser.currentScene.createNode("Shape");
let Appearance1215 = browser.currentScene.createNode("Appearance");
let Material1216 = browser.currentScene.createNode("Material");
Material1216.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1216;

appearance = Appearance1215;

let IndexedFaceSet1217 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1217.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1217.creaseAngle = 0.5;
IndexedFaceSet1217.solid = False;
let ColorRGBA1218 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1218.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1218;

let Coordinate1219 = browser.currentScene.createNode("Coordinate");
Coordinate1219.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1219;

geometry = IndexedFaceSet1217;

HAnimSite1212ZZZ.children[1] = Shape1214;

let Billboard1220 = browser.currentScene.createNode("Billboard");
Billboard1220.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1221 = browser.currentScene.createNode("Shape");
let Text1222 = browser.currentScene.createNode("Text");
Text1222.string = new X3D.MFString([new X3D.SFString("11")]);
let FontStyle1223 = browser.currentScene.createNode("FontStyle");
FontStyle1223.size = 0.035;
fontStyle = FontStyle1223;

geometry = Text1222;

Billboard1220YYY.children = new X3D.MFNode();

Billboard1220ZZZ.children[0] = Shape1221;

HAnimSite1212ZZZ.children[2] = Billboard1220;

HAnimSegment1211YYY.children = new X3D.MFNode();

HAnimSegment1211ZZZ.children[0] = HAnimSite1212;

let Shape1224 = browser.currentScene.createNode("Shape");
let LineSet1225 = browser.currentScene.createNode("LineSet");
LineSet1225.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1226 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1226.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1226;

let Coordinate1227 = browser.currentScene.createNode("Coordinate");
Coordinate1227.point = new X3D.MFVec3f([0,1.307,-0.015,0,1.2951,-0.01506]);
coord = Coordinate1227;

geometry = LineSet1225;

HAnimSegment1211ZZZ.children[1] = Shape1224;

HAnimJoint1210YYY.children = new X3D.MFNode();

HAnimJoint1210ZZZ.children[0] = HAnimSegment1211;

let HAnimJoint1228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1228.name = "vc1";
HAnimJoint1228.DEF = "hanim_vc1";
HAnimJoint1228.center = new X3D.SFVec3f([0,1.3185,-0.0151]);
HAnimJoint1228.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1228.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1229 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1229.name = "c1";
HAnimSegment1229.DEF = "hanim_c1";
let Shape1230 = browser.currentScene.createNode("Shape");
let LineSet1231 = browser.currentScene.createNode("LineSet");
LineSet1231.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1232 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1232.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1232;

let Coordinate1233 = browser.currentScene.createNode("Coordinate");
Coordinate1233.point = new X3D.MFVec3f([0,1.3185,-0.0151,0,1.307,-0.015]);
coord = Coordinate1233;

geometry = LineSet1231;

HAnimSegment1229YYY.children = new X3D.MFNode();

HAnimSegment1229ZZZ.children[0] = Shape1230;

HAnimJoint1228YYY.children = new X3D.MFNode();

HAnimJoint1228ZZZ.children[0] = HAnimSegment1229;

let HAnimJoint1234 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1234.name = "skullbase";
HAnimJoint1234.DEF = "hanim_skullbase";
HAnimJoint1234.center = new X3D.SFVec3f([0,1.3126,-0.0154]);
HAnimJoint1234.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1234.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1235 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1235.name = "skull";
HAnimSegment1235.DEF = "hanim_skull";
let HAnimSite1236 = browser.currentScene.createNode("HAnimSite");
HAnimSite1236.name = "skull_vertex";
HAnimSite1236.DEF = "hanim_skull_vertex_pt";
HAnimSite1236.translation = new X3D.SFVec3f([0,1.612,-0.03]);
let TouchSensor1237 = browser.currentScene.createNode("TouchSensor");
TouchSensor1237.description = "HAnimSite 0 hanim_skull_vertex_pt";
HAnimSite1236YYY.children = new X3D.MFNode();

HAnimSite1236ZZZ.children[0] = TouchSensor1237;

let Shape1238 = browser.currentScene.createNode("Shape");
let Appearance1239 = browser.currentScene.createNode("Appearance");
let Material1240 = browser.currentScene.createNode("Material");
Material1240.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1240;

appearance = Appearance1239;

let IndexedFaceSet1241 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1241.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1241.creaseAngle = 0.5;
IndexedFaceSet1241.solid = False;
let ColorRGBA1242 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1242.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1242;

let Coordinate1243 = browser.currentScene.createNode("Coordinate");
Coordinate1243.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1243;

geometry = IndexedFaceSet1241;

HAnimSite1236ZZZ.children[1] = Shape1238;

let Billboard1244 = browser.currentScene.createNode("Billboard");
Billboard1244.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1245 = browser.currentScene.createNode("Shape");
let Text1246 = browser.currentScene.createNode("Text");
Text1246.string = new X3D.MFString([new X3D.SFString("0")]);
let FontStyle1247 = browser.currentScene.createNode("FontStyle");
FontStyle1247.size = 0.035;
fontStyle = FontStyle1247;

geometry = Text1246;

Billboard1244YYY.children = new X3D.MFNode();

Billboard1244ZZZ.children[0] = Shape1245;

HAnimSite1236ZZZ.children[2] = Billboard1244;

HAnimSegment1235YYY.children = new X3D.MFNode();

HAnimSegment1235ZZZ.children[0] = HAnimSite1236;

let HAnimSite1248 = browser.currentScene.createNode("HAnimSite");
HAnimSite1248.name = "glabella";
HAnimSite1248.DEF = "hanim_glabella_pt";
HAnimSite1248.translation = new X3D.SFVec3f([0,1.454,0.128]);
let TouchSensor1249 = browser.currentScene.createNode("TouchSensor");
TouchSensor1249.description = "HAnimSite 1 hanim_glabella_pt";
HAnimSite1248YYY.children = new X3D.MFNode();

HAnimSite1248ZZZ.children[0] = TouchSensor1249;

let Shape1250 = browser.currentScene.createNode("Shape");
let Appearance1251 = browser.currentScene.createNode("Appearance");
let Material1252 = browser.currentScene.createNode("Material");
Material1252.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1252;

appearance = Appearance1251;

let IndexedFaceSet1253 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1253.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1253.creaseAngle = 0.5;
IndexedFaceSet1253.solid = False;
let ColorRGBA1254 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1254.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1254;

let Coordinate1255 = browser.currentScene.createNode("Coordinate");
Coordinate1255.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1255;

geometry = IndexedFaceSet1253;

HAnimSite1248ZZZ.children[1] = Shape1250;

let Billboard1256 = browser.currentScene.createNode("Billboard");
Billboard1256.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1257 = browser.currentScene.createNode("Shape");
let Text1258 = browser.currentScene.createNode("Text");
Text1258.string = new X3D.MFString([new X3D.SFString("1")]);
let FontStyle1259 = browser.currentScene.createNode("FontStyle");
FontStyle1259.size = 0.035;
fontStyle = FontStyle1259;

geometry = Text1258;

Billboard1256YYY.children = new X3D.MFNode();

Billboard1256ZZZ.children[0] = Shape1257;

HAnimSite1248ZZZ.children[2] = Billboard1256;

HAnimSegment1235ZZZ.children[1] = HAnimSite1248;

let HAnimSite1260 = browser.currentScene.createNode("HAnimSite");
HAnimSite1260.name = "sellion";
HAnimSite1260.DEF = "hanim_sellion_pt";
HAnimSite1260.translation = new X3D.SFVec3f([0,1.4,0.12]);
let TouchSensor1261 = browser.currentScene.createNode("TouchSensor");
TouchSensor1261.description = "HAnimSite 2 hanim_sellion_pt";
HAnimSite1260YYY.children = new X3D.MFNode();

HAnimSite1260ZZZ.children[0] = TouchSensor1261;

let Shape1262 = browser.currentScene.createNode("Shape");
let Appearance1263 = browser.currentScene.createNode("Appearance");
let Material1264 = browser.currentScene.createNode("Material");
Material1264.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1264;

appearance = Appearance1263;

let IndexedFaceSet1265 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1265.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1265.creaseAngle = 0.5;
IndexedFaceSet1265.solid = False;
let ColorRGBA1266 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1266.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1266;

let Coordinate1267 = browser.currentScene.createNode("Coordinate");
Coordinate1267.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1267;

geometry = IndexedFaceSet1265;

HAnimSite1260ZZZ.children[1] = Shape1262;

let Billboard1268 = browser.currentScene.createNode("Billboard");
Billboard1268.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1269 = browser.currentScene.createNode("Shape");
let Text1270 = browser.currentScene.createNode("Text");
Text1270.string = new X3D.MFString([new X3D.SFString("2")]);
let FontStyle1271 = browser.currentScene.createNode("FontStyle");
FontStyle1271.size = 0.035;
fontStyle = FontStyle1271;

geometry = Text1270;

Billboard1268YYY.children = new X3D.MFNode();

Billboard1268ZZZ.children[0] = Shape1269;

HAnimSite1260ZZZ.children[2] = Billboard1268;

HAnimSegment1235ZZZ.children[2] = HAnimSite1260;

let HAnimSite1272 = browser.currentScene.createNode("HAnimSite");
HAnimSite1272.name = "l_infraorbitale";
HAnimSite1272.DEF = "hanim_l_infraorbitale_pt";
HAnimSite1272.translation = new X3D.SFVec3f([0.039,1.38,0.09]);
let TouchSensor1273 = browser.currentScene.createNode("TouchSensor");
TouchSensor1273.description = "HAnimSite 3 hanim_l_infraorbitale_pt";
HAnimSite1272YYY.children = new X3D.MFNode();

HAnimSite1272ZZZ.children[0] = TouchSensor1273;

let Shape1274 = browser.currentScene.createNode("Shape");
let Appearance1275 = browser.currentScene.createNode("Appearance");
let Material1276 = browser.currentScene.createNode("Material");
Material1276.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1276;

appearance = Appearance1275;

let IndexedFaceSet1277 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1277.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1277.creaseAngle = 0.5;
IndexedFaceSet1277.solid = False;
let ColorRGBA1278 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1278.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1278;

let Coordinate1279 = browser.currentScene.createNode("Coordinate");
Coordinate1279.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1279;

geometry = IndexedFaceSet1277;

HAnimSite1272ZZZ.children[1] = Shape1274;

let Billboard1280 = browser.currentScene.createNode("Billboard");
Billboard1280.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1281 = browser.currentScene.createNode("Shape");
let Text1282 = browser.currentScene.createNode("Text");
Text1282.string = new X3D.MFString([new X3D.SFString("3")]);
let FontStyle1283 = browser.currentScene.createNode("FontStyle");
FontStyle1283.size = 0.035;
fontStyle = FontStyle1283;

geometry = Text1282;

Billboard1280YYY.children = new X3D.MFNode();

Billboard1280ZZZ.children[0] = Shape1281;

HAnimSite1272ZZZ.children[2] = Billboard1280;

HAnimSegment1235ZZZ.children[3] = HAnimSite1272;

let HAnimSite1284 = browser.currentScene.createNode("HAnimSite");
HAnimSite1284.name = "l_tragion";
HAnimSite1284.DEF = "hanim_l_tragion_pt";
HAnimSite1284.translation = new X3D.SFVec3f([0.1,1.38,0.0282]);
let TouchSensor1285 = browser.currentScene.createNode("TouchSensor");
TouchSensor1285.description = "HAnimSite 4 hanim_l_tragion_pt";
HAnimSite1284YYY.children = new X3D.MFNode();

HAnimSite1284ZZZ.children[0] = TouchSensor1285;

let Shape1286 = browser.currentScene.createNode("Shape");
let Appearance1287 = browser.currentScene.createNode("Appearance");
let Material1288 = browser.currentScene.createNode("Material");
Material1288.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1288;

appearance = Appearance1287;

let IndexedFaceSet1289 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1289.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1289.creaseAngle = 0.5;
IndexedFaceSet1289.solid = False;
let ColorRGBA1290 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1290.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1290;

let Coordinate1291 = browser.currentScene.createNode("Coordinate");
Coordinate1291.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1291;

geometry = IndexedFaceSet1289;

HAnimSite1284ZZZ.children[1] = Shape1286;

let Billboard1292 = browser.currentScene.createNode("Billboard");
Billboard1292.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1293 = browser.currentScene.createNode("Shape");
let Text1294 = browser.currentScene.createNode("Text");
Text1294.string = new X3D.MFString([new X3D.SFString("4")]);
let FontStyle1295 = browser.currentScene.createNode("FontStyle");
FontStyle1295.size = 0.035;
fontStyle = FontStyle1295;

geometry = Text1294;

Billboard1292YYY.children = new X3D.MFNode();

Billboard1292ZZZ.children[0] = Shape1293;

HAnimSite1284ZZZ.children[2] = Billboard1292;

HAnimSegment1235ZZZ.children[4] = HAnimSite1284;

let HAnimSite1296 = browser.currentScene.createNode("HAnimSite");
HAnimSite1296.name = "r_infraorbitale";
HAnimSite1296.DEF = "hanim_r_infraorbitale_pt";
HAnimSite1296.translation = new X3D.SFVec3f([-0.039,1.38,0.09]);
let TouchSensor1297 = browser.currentScene.createNode("TouchSensor");
TouchSensor1297.description = "HAnimSite 6 hanim_r_infraorbitale_pt";
HAnimSite1296YYY.children = new X3D.MFNode();

HAnimSite1296ZZZ.children[0] = TouchSensor1297;

let Shape1298 = browser.currentScene.createNode("Shape");
let Appearance1299 = browser.currentScene.createNode("Appearance");
let Material1300 = browser.currentScene.createNode("Material");
Material1300.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1300;

appearance = Appearance1299;

let IndexedFaceSet1301 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1301.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1301.creaseAngle = 0.5;
IndexedFaceSet1301.solid = False;
let ColorRGBA1302 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1302.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1302;

let Coordinate1303 = browser.currentScene.createNode("Coordinate");
Coordinate1303.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1303;

geometry = IndexedFaceSet1301;

HAnimSite1296ZZZ.children[1] = Shape1298;

let Billboard1304 = browser.currentScene.createNode("Billboard");
Billboard1304.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1305 = browser.currentScene.createNode("Shape");
let Text1306 = browser.currentScene.createNode("Text");
Text1306.string = new X3D.MFString([new X3D.SFString("6")]);
let FontStyle1307 = browser.currentScene.createNode("FontStyle");
FontStyle1307.size = 0.035;
fontStyle = FontStyle1307;

geometry = Text1306;

Billboard1304YYY.children = new X3D.MFNode();

Billboard1304ZZZ.children[0] = Shape1305;

HAnimSite1296ZZZ.children[2] = Billboard1304;

HAnimSegment1235ZZZ.children[5] = HAnimSite1296;

let HAnimSite1308 = browser.currentScene.createNode("HAnimSite");
HAnimSite1308.name = "r_tragion";
HAnimSite1308.DEF = "hanim_r_tragion_pt";
HAnimSite1308.translation = new X3D.SFVec3f([-0.1,1.38,0.0282]);
let TouchSensor1309 = browser.currentScene.createNode("TouchSensor");
TouchSensor1309.description = "HAnimSite 7 hanim_r_tragion_pt";
HAnimSite1308YYY.children = new X3D.MFNode();

HAnimSite1308ZZZ.children[0] = TouchSensor1309;

let Shape1310 = browser.currentScene.createNode("Shape");
let Appearance1311 = browser.currentScene.createNode("Appearance");
let Material1312 = browser.currentScene.createNode("Material");
Material1312.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1312;

appearance = Appearance1311;

let IndexedFaceSet1313 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1313.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1313.creaseAngle = 0.5;
IndexedFaceSet1313.solid = False;
let ColorRGBA1314 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1314.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1314;

let Coordinate1315 = browser.currentScene.createNode("Coordinate");
Coordinate1315.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1315;

geometry = IndexedFaceSet1313;

HAnimSite1308ZZZ.children[1] = Shape1310;

let Billboard1316 = browser.currentScene.createNode("Billboard");
Billboard1316.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1317 = browser.currentScene.createNode("Shape");
let Text1318 = browser.currentScene.createNode("Text");
Text1318.string = new X3D.MFString([new X3D.SFString("7")]);
let FontStyle1319 = browser.currentScene.createNode("FontStyle");
FontStyle1319.size = 0.035;
fontStyle = FontStyle1319;

geometry = Text1318;

Billboard1316YYY.children = new X3D.MFNode();

Billboard1316ZZZ.children[0] = Shape1317;

HAnimSite1308ZZZ.children[2] = Billboard1316;

HAnimSegment1235ZZZ.children[6] = HAnimSite1308;

let HAnimSite1320 = browser.currentScene.createNode("HAnimSite");
HAnimSite1320.name = "nuchale";
HAnimSite1320.DEF = "hanim_nuchale_pt";
HAnimSite1320.translation = new X3D.SFVec3f([0.0039,1.35,-0.16]);
let TouchSensor1321 = browser.currentScene.createNode("TouchSensor");
TouchSensor1321.description = "HAnimSite 81 hanim_nuchale_pt";
HAnimSite1320YYY.children = new X3D.MFNode();

HAnimSite1320ZZZ.children[0] = TouchSensor1321;

let Shape1322 = browser.currentScene.createNode("Shape");
let Appearance1323 = browser.currentScene.createNode("Appearance");
let Material1324 = browser.currentScene.createNode("Material");
Material1324.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1324;

appearance = Appearance1323;

let IndexedFaceSet1325 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1325.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1325.creaseAngle = 0.5;
IndexedFaceSet1325.solid = False;
let ColorRGBA1326 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1326.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1326;

let Coordinate1327 = browser.currentScene.createNode("Coordinate");
Coordinate1327.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1327;

geometry = IndexedFaceSet1325;

HAnimSite1320ZZZ.children[1] = Shape1322;

let Billboard1328 = browser.currentScene.createNode("Billboard");
Billboard1328.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1329 = browser.currentScene.createNode("Shape");
let Text1330 = browser.currentScene.createNode("Text");
Text1330.string = new X3D.MFString([new X3D.SFString("81")]);
let FontStyle1331 = browser.currentScene.createNode("FontStyle");
FontStyle1331.size = 0.035;
fontStyle = FontStyle1331;

geometry = Text1330;

Billboard1328YYY.children = new X3D.MFNode();

Billboard1328ZZZ.children[0] = Shape1329;

HAnimSite1320ZZZ.children[2] = Billboard1328;

HAnimSegment1235ZZZ.children[7] = HAnimSite1320;

let HAnimSite1332 = browser.currentScene.createNode("HAnimSite");
HAnimSite1332.name = "opisthocranion";
HAnimSite1332.DEF = "hanim_opisthocranion_pt";
HAnimSite1332.translation = new X3D.SFVec3f([0.0039,1.4588,-0.18]);
let TouchSensor1333 = browser.currentScene.createNode("TouchSensor");
TouchSensor1333.description = "HAnimSite 89 hanim_opisthocranion_pt";
HAnimSite1332YYY.children = new X3D.MFNode();

HAnimSite1332ZZZ.children[0] = TouchSensor1333;

let Shape1334 = browser.currentScene.createNode("Shape");
let Appearance1335 = browser.currentScene.createNode("Appearance");
let Material1336 = browser.currentScene.createNode("Material");
Material1336.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1336;

appearance = Appearance1335;

let IndexedFaceSet1337 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1337.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1337.creaseAngle = 0.5;
IndexedFaceSet1337.solid = False;
let ColorRGBA1338 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1338.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1338;

let Coordinate1339 = browser.currentScene.createNode("Coordinate");
Coordinate1339.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1339;

geometry = IndexedFaceSet1337;

HAnimSite1332ZZZ.children[1] = Shape1334;

let Billboard1340 = browser.currentScene.createNode("Billboard");
Billboard1340.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1341 = browser.currentScene.createNode("Shape");
let Text1342 = browser.currentScene.createNode("Text");
Text1342.string = new X3D.MFString([new X3D.SFString("89")]);
let FontStyle1343 = browser.currentScene.createNode("FontStyle");
FontStyle1343.size = 0.035;
fontStyle = FontStyle1343;

geometry = Text1342;

Billboard1340YYY.children = new X3D.MFNode();

Billboard1340ZZZ.children[0] = Shape1341;

HAnimSite1332ZZZ.children[2] = Billboard1340;

HAnimSegment1235ZZZ.children[8] = HAnimSite1332;

let HAnimSite1344 = browser.currentScene.createNode("HAnimSite");
HAnimSite1344.name = "l_ectocanthus";
HAnimSite1344.DEF = "hanim_l_ectocanthus_pt";
HAnimSite1344.translation = new X3D.SFVec3f([0.086,1.399,0.074]);
let TouchSensor1345 = browser.currentScene.createNode("TouchSensor");
TouchSensor1345.description = "HAnimSite 85 hanim_l_ectocanthus_pt";
HAnimSite1344YYY.children = new X3D.MFNode();

HAnimSite1344ZZZ.children[0] = TouchSensor1345;

let Shape1346 = browser.currentScene.createNode("Shape");
let Appearance1347 = browser.currentScene.createNode("Appearance");
let Material1348 = browser.currentScene.createNode("Material");
Material1348.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1348;

appearance = Appearance1347;

let IndexedFaceSet1349 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1349.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1349.creaseAngle = 0.5;
IndexedFaceSet1349.solid = False;
let ColorRGBA1350 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1350.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1350;

let Coordinate1351 = browser.currentScene.createNode("Coordinate");
Coordinate1351.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1351;

geometry = IndexedFaceSet1349;

HAnimSite1344ZZZ.children[1] = Shape1346;

let Billboard1352 = browser.currentScene.createNode("Billboard");
Billboard1352.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1353 = browser.currentScene.createNode("Shape");
let Text1354 = browser.currentScene.createNode("Text");
Text1354.string = new X3D.MFString([new X3D.SFString("85")]);
let FontStyle1355 = browser.currentScene.createNode("FontStyle");
FontStyle1355.size = 0.035;
fontStyle = FontStyle1355;

geometry = Text1354;

Billboard1352YYY.children = new X3D.MFNode();

Billboard1352ZZZ.children[0] = Shape1353;

HAnimSite1344ZZZ.children[2] = Billboard1352;

HAnimSegment1235ZZZ.children[9] = HAnimSite1344;

let HAnimSite1356 = browser.currentScene.createNode("HAnimSite");
HAnimSite1356.name = "r_ectocanthus";
HAnimSite1356.DEF = "hanim_r_ectocanthus_pt";
HAnimSite1356.translation = new X3D.SFVec3f([-0.086,1.399,0.074]);
let TouchSensor1357 = browser.currentScene.createNode("TouchSensor");
TouchSensor1357.description = "HAnimSite 86 hanim_r_ectocanthus_pt";
HAnimSite1356YYY.children = new X3D.MFNode();

HAnimSite1356ZZZ.children[0] = TouchSensor1357;

let Shape1358 = browser.currentScene.createNode("Shape");
let Appearance1359 = browser.currentScene.createNode("Appearance");
let Material1360 = browser.currentScene.createNode("Material");
Material1360.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1360;

appearance = Appearance1359;

let IndexedFaceSet1361 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1361.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1361.creaseAngle = 0.5;
IndexedFaceSet1361.solid = False;
let ColorRGBA1362 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1362.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1362;

let Coordinate1363 = browser.currentScene.createNode("Coordinate");
Coordinate1363.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1363;

geometry = IndexedFaceSet1361;

HAnimSite1356ZZZ.children[1] = Shape1358;

let Billboard1364 = browser.currentScene.createNode("Billboard");
Billboard1364.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1365 = browser.currentScene.createNode("Shape");
let Text1366 = browser.currentScene.createNode("Text");
Text1366.string = new X3D.MFString([new X3D.SFString("86")]);
let FontStyle1367 = browser.currentScene.createNode("FontStyle");
FontStyle1367.size = 0.035;
fontStyle = FontStyle1367;

geometry = Text1366;

Billboard1364YYY.children = new X3D.MFNode();

Billboard1364ZZZ.children[0] = Shape1365;

HAnimSite1356ZZZ.children[2] = Billboard1364;

HAnimSegment1235ZZZ.children[10] = HAnimSite1356;

let Shape1368 = browser.currentScene.createNode("Shape");
let LineSet1369 = browser.currentScene.createNode("LineSet");
LineSet1369.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1370 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1370.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1370;

let Coordinate1371 = browser.currentScene.createNode("Coordinate");
Coordinate1371.point = new X3D.MFVec3f([0,1.3126,-0.0154,0,1.3185,-0.0151]);
coord = Coordinate1371;

geometry = LineSet1369;

HAnimSegment1235ZZZ.children[11] = Shape1368;

HAnimJoint1234YYY.children = new X3D.MFNode();

HAnimJoint1234ZZZ.children[0] = HAnimSegment1235;

let HAnimJoint1372 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1372.name = "l_eyelid_joint";
HAnimJoint1372.DEF = "hanim_l_eyelid_joint";
HAnimJoint1372.center = new X3D.SFVec3f([0.0505,1.42425,0.03294]);
HAnimJoint1372.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1372.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1373 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1373.name = "l_eyelid";
HAnimSegment1373.DEF = "hanim_l_eyelid";
let HAnimSite1374 = browser.currentScene.createNode("HAnimSite");
HAnimSite1374.name = "l_eyelid_tip";
HAnimSite1374.DEF = "hanim_l_eyelid_tip";
HAnimSite1374.translation = new X3D.SFVec3f([0,2.64,0]);
let TouchSensor1375 = browser.currentScene.createNode("TouchSensor");
TouchSensor1375.description = "HAnimSite l_eyelid_tip hanim_l_eyelid_tip";
HAnimSite1374YYY.children = new X3D.MFNode();

HAnimSite1374ZZZ.children[0] = TouchSensor1375;

let Shape1376 = browser.currentScene.createNode("Shape");
let Appearance1377 = browser.currentScene.createNode("Appearance");
let Material1378 = browser.currentScene.createNode("Material");
Material1378.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1378;

appearance = Appearance1377;

let IndexedFaceSet1379 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1379.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1379.creaseAngle = 0.5;
IndexedFaceSet1379.solid = False;
let ColorRGBA1380 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1380.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1380;

let Coordinate1381 = browser.currentScene.createNode("Coordinate");
Coordinate1381.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1381;

geometry = IndexedFaceSet1379;

HAnimSite1374ZZZ.children[1] = Shape1376;

let Billboard1382 = browser.currentScene.createNode("Billboard");
Billboard1382.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1383 = browser.currentScene.createNode("Shape");
let Text1384 = browser.currentScene.createNode("Text");
Text1384.string = new X3D.MFString([new X3D.SFString("l_eyelid_tip")]);
let FontStyle1385 = browser.currentScene.createNode("FontStyle");
FontStyle1385.size = 0.035;
fontStyle = FontStyle1385;

geometry = Text1384;

Billboard1382YYY.children = new X3D.MFNode();

Billboard1382ZZZ.children[0] = Shape1383;

HAnimSite1374ZZZ.children[2] = Billboard1382;

HAnimSegment1373YYY.children = new X3D.MFNode();

HAnimSegment1373ZZZ.children[0] = HAnimSite1374;

let Shape1386 = browser.currentScene.createNode("Shape");
let LineSet1387 = browser.currentScene.createNode("LineSet");
LineSet1387.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1388 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1388.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1388;

let Coordinate1389 = browser.currentScene.createNode("Coordinate");
Coordinate1389.point = new X3D.MFVec3f([0.0505,1.42425,0.03294,0,1.3126,-0.0154]);
coord = Coordinate1389;

geometry = LineSet1387;

HAnimSegment1373ZZZ.children[1] = Shape1386;

HAnimJoint1372YYY.children = new X3D.MFNode();

HAnimJoint1372ZZZ.children[0] = HAnimSegment1373;

HAnimJoint1234ZZZ.children[1] = HAnimJoint1372;

let HAnimJoint1390 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1390.name = "r_eyelid_joint";
HAnimJoint1390.DEF = "hanim_r_eyelid_joint";
HAnimJoint1390.center = new X3D.SFVec3f([-0.0505,1.42425,0.03294]);
HAnimJoint1390.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1390.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1391 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1391.name = "r_eyelid";
HAnimSegment1391.DEF = "hanim_r_eyelid";
let HAnimSite1392 = browser.currentScene.createNode("HAnimSite");
HAnimSite1392.name = "r_eyelid_tip";
HAnimSite1392.DEF = "hanim_r_eyelid_tip";
HAnimSite1392.translation = new X3D.SFVec3f([0,2.68,0]);
let TouchSensor1393 = browser.currentScene.createNode("TouchSensor");
TouchSensor1393.description = "HAnimSite r_eyelid_tip hanim_r_eyelid_tip";
HAnimSite1392YYY.children = new X3D.MFNode();

HAnimSite1392ZZZ.children[0] = TouchSensor1393;

let Shape1394 = browser.currentScene.createNode("Shape");
let Appearance1395 = browser.currentScene.createNode("Appearance");
let Material1396 = browser.currentScene.createNode("Material");
Material1396.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1396;

appearance = Appearance1395;

let IndexedFaceSet1397 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1397.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1397.creaseAngle = 0.5;
IndexedFaceSet1397.solid = False;
let ColorRGBA1398 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1398.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1398;

let Coordinate1399 = browser.currentScene.createNode("Coordinate");
Coordinate1399.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1399;

geometry = IndexedFaceSet1397;

HAnimSite1392ZZZ.children[1] = Shape1394;

let Billboard1400 = browser.currentScene.createNode("Billboard");
Billboard1400.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1401 = browser.currentScene.createNode("Shape");
let Text1402 = browser.currentScene.createNode("Text");
Text1402.string = new X3D.MFString([new X3D.SFString("r_eyelid_tip")]);
let FontStyle1403 = browser.currentScene.createNode("FontStyle");
FontStyle1403.size = 0.035;
fontStyle = FontStyle1403;

geometry = Text1402;

Billboard1400YYY.children = new X3D.MFNode();

Billboard1400ZZZ.children[0] = Shape1401;

HAnimSite1392ZZZ.children[2] = Billboard1400;

HAnimSegment1391YYY.children = new X3D.MFNode();

HAnimSegment1391ZZZ.children[0] = HAnimSite1392;

let Shape1404 = browser.currentScene.createNode("Shape");
let LineSet1405 = browser.currentScene.createNode("LineSet");
LineSet1405.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1406 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1406.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1406;

let Coordinate1407 = browser.currentScene.createNode("Coordinate");
Coordinate1407.point = new X3D.MFVec3f([-0.0505,1.42425,0.03294,0,1.3126,-0.0154]);
coord = Coordinate1407;

geometry = LineSet1405;

HAnimSegment1391ZZZ.children[1] = Shape1404;

HAnimJoint1390YYY.children = new X3D.MFNode();

HAnimJoint1390ZZZ.children[0] = HAnimSegment1391;

HAnimJoint1234ZZZ.children[2] = HAnimJoint1390;

let HAnimJoint1408 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1408.name = "l_eyeball_joint";
HAnimJoint1408.DEF = "hanim_l_eyeball_joint";
HAnimJoint1408.center = new X3D.SFVec3f([0.048127,1.4049,0.08305]);
HAnimJoint1408.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1408.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1409 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1409.name = "l_eyeball";
HAnimSegment1409.DEF = "hanim_l_eyeball";
let HAnimSite1410 = browser.currentScene.createNode("HAnimSite");
HAnimSite1410.name = "l_eyeball_tip";
HAnimSite1410.DEF = "hanim_l_eyeball_tip";
HAnimSite1410.translation = new X3D.SFVec3f([0,2.72,0]);
let TouchSensor1411 = browser.currentScene.createNode("TouchSensor");
TouchSensor1411.description = "HAnimSite l_eyeball_tip hanim_l_eyeball_tip";
HAnimSite1410YYY.children = new X3D.MFNode();

HAnimSite1410ZZZ.children[0] = TouchSensor1411;

let Shape1412 = browser.currentScene.createNode("Shape");
let Appearance1413 = browser.currentScene.createNode("Appearance");
let Material1414 = browser.currentScene.createNode("Material");
Material1414.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1414;

appearance = Appearance1413;

let IndexedFaceSet1415 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1415.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1415.creaseAngle = 0.5;
IndexedFaceSet1415.solid = False;
let ColorRGBA1416 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1416.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1416;

let Coordinate1417 = browser.currentScene.createNode("Coordinate");
Coordinate1417.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1417;

geometry = IndexedFaceSet1415;

HAnimSite1410ZZZ.children[1] = Shape1412;

let Billboard1418 = browser.currentScene.createNode("Billboard");
Billboard1418.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1419 = browser.currentScene.createNode("Shape");
let Text1420 = browser.currentScene.createNode("Text");
Text1420.string = new X3D.MFString([new X3D.SFString("l_eyeball_tip")]);
let FontStyle1421 = browser.currentScene.createNode("FontStyle");
FontStyle1421.size = 0.035;
fontStyle = FontStyle1421;

geometry = Text1420;

Billboard1418YYY.children = new X3D.MFNode();

Billboard1418ZZZ.children[0] = Shape1419;

HAnimSite1410ZZZ.children[2] = Billboard1418;

HAnimSegment1409YYY.children = new X3D.MFNode();

HAnimSegment1409ZZZ.children[0] = HAnimSite1410;

let Shape1422 = browser.currentScene.createNode("Shape");
let LineSet1423 = browser.currentScene.createNode("LineSet");
LineSet1423.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1424 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1424.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1424;

let Coordinate1425 = browser.currentScene.createNode("Coordinate");
Coordinate1425.point = new X3D.MFVec3f([0.048127,1.4049,0.08305,0,1.3126,-0.0154]);
coord = Coordinate1425;

geometry = LineSet1423;

HAnimSegment1409ZZZ.children[1] = Shape1422;

HAnimJoint1408YYY.children = new X3D.MFNode();

HAnimJoint1408ZZZ.children[0] = HAnimSegment1409;

HAnimJoint1234ZZZ.children[3] = HAnimJoint1408;

let HAnimJoint1426 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1426.name = "r_eyeball_joint";
HAnimJoint1426.DEF = "hanim_r_eyeball_joint";
HAnimJoint1426.center = new X3D.SFVec3f([-0.04813,1.4049,0.08305]);
HAnimJoint1426.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1426.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1427 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1427.name = "r_eyeball";
HAnimSegment1427.DEF = "hanim_r_eyeball";
let HAnimSite1428 = browser.currentScene.createNode("HAnimSite");
HAnimSite1428.name = "r_eyeball_tip";
HAnimSite1428.DEF = "hanim_r_eyeball_tip";
HAnimSite1428.translation = new X3D.SFVec3f([0,2.76,0]);
let TouchSensor1429 = browser.currentScene.createNode("TouchSensor");
TouchSensor1429.description = "HAnimSite r_eyeball_tip hanim_r_eyeball_tip";
HAnimSite1428YYY.children = new X3D.MFNode();

HAnimSite1428ZZZ.children[0] = TouchSensor1429;

let Shape1430 = browser.currentScene.createNode("Shape");
let Appearance1431 = browser.currentScene.createNode("Appearance");
let Material1432 = browser.currentScene.createNode("Material");
Material1432.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1432;

appearance = Appearance1431;

let IndexedFaceSet1433 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1433.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1433.creaseAngle = 0.5;
IndexedFaceSet1433.solid = False;
let ColorRGBA1434 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1434.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1434;

let Coordinate1435 = browser.currentScene.createNode("Coordinate");
Coordinate1435.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1435;

geometry = IndexedFaceSet1433;

HAnimSite1428ZZZ.children[1] = Shape1430;

let Billboard1436 = browser.currentScene.createNode("Billboard");
Billboard1436.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1437 = browser.currentScene.createNode("Shape");
let Text1438 = browser.currentScene.createNode("Text");
Text1438.string = new X3D.MFString([new X3D.SFString("r_eyeball_tip")]);
let FontStyle1439 = browser.currentScene.createNode("FontStyle");
FontStyle1439.size = 0.035;
fontStyle = FontStyle1439;

geometry = Text1438;

Billboard1436YYY.children = new X3D.MFNode();

Billboard1436ZZZ.children[0] = Shape1437;

HAnimSite1428ZZZ.children[2] = Billboard1436;

HAnimSegment1427YYY.children = new X3D.MFNode();

HAnimSegment1427ZZZ.children[0] = HAnimSite1428;

let Shape1440 = browser.currentScene.createNode("Shape");
let LineSet1441 = browser.currentScene.createNode("LineSet");
LineSet1441.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1442 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1442.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1442;

let Coordinate1443 = browser.currentScene.createNode("Coordinate");
Coordinate1443.point = new X3D.MFVec3f([-0.04813,1.4049,0.08305,0,1.3126,-0.0154]);
coord = Coordinate1443;

geometry = LineSet1441;

HAnimSegment1427ZZZ.children[1] = Shape1440;

HAnimJoint1426YYY.children = new X3D.MFNode();

HAnimJoint1426ZZZ.children[0] = HAnimSegment1427;

HAnimJoint1234ZZZ.children[4] = HAnimJoint1426;

let HAnimJoint1444 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1444.name = "l_eyebrow_joint";
HAnimJoint1444.DEF = "hanim_l_eyebrow_joint";
HAnimJoint1444.center = new X3D.SFVec3f([0.02175,1.4139,0.1069]);
HAnimJoint1444.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1444.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1445 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1445.name = "l_eyebrow";
HAnimSegment1445.DEF = "hanim_l_eyebrow";
let HAnimSite1446 = browser.currentScene.createNode("HAnimSite");
HAnimSite1446.name = "l_eyebrow_tip";
HAnimSite1446.DEF = "hanim_l_eyebrow_tip";
HAnimSite1446.translation = new X3D.SFVec3f([0,2.8,0]);
let TouchSensor1447 = browser.currentScene.createNode("TouchSensor");
TouchSensor1447.description = "HAnimSite l_eyebrow_tip hanim_l_eyebrow_tip";
HAnimSite1446YYY.children = new X3D.MFNode();

HAnimSite1446ZZZ.children[0] = TouchSensor1447;

let Shape1448 = browser.currentScene.createNode("Shape");
let Appearance1449 = browser.currentScene.createNode("Appearance");
let Material1450 = browser.currentScene.createNode("Material");
Material1450.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1450;

appearance = Appearance1449;

let IndexedFaceSet1451 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1451.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1451.creaseAngle = 0.5;
IndexedFaceSet1451.solid = False;
let ColorRGBA1452 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1452.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1452;

let Coordinate1453 = browser.currentScene.createNode("Coordinate");
Coordinate1453.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1453;

geometry = IndexedFaceSet1451;

HAnimSite1446ZZZ.children[1] = Shape1448;

let Billboard1454 = browser.currentScene.createNode("Billboard");
Billboard1454.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1455 = browser.currentScene.createNode("Shape");
let Text1456 = browser.currentScene.createNode("Text");
Text1456.string = new X3D.MFString([new X3D.SFString("l_eyebrow_tip")]);
let FontStyle1457 = browser.currentScene.createNode("FontStyle");
FontStyle1457.size = 0.035;
fontStyle = FontStyle1457;

geometry = Text1456;

Billboard1454YYY.children = new X3D.MFNode();

Billboard1454ZZZ.children[0] = Shape1455;

HAnimSite1446ZZZ.children[2] = Billboard1454;

HAnimSegment1445YYY.children = new X3D.MFNode();

HAnimSegment1445ZZZ.children[0] = HAnimSite1446;

let Shape1458 = browser.currentScene.createNode("Shape");
let LineSet1459 = browser.currentScene.createNode("LineSet");
LineSet1459.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1460 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1460.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1460;

let Coordinate1461 = browser.currentScene.createNode("Coordinate");
Coordinate1461.point = new X3D.MFVec3f([0.02175,1.4139,0.1069,0,1.3126,-0.0154]);
coord = Coordinate1461;

geometry = LineSet1459;

HAnimSegment1445ZZZ.children[1] = Shape1458;

HAnimJoint1444YYY.children = new X3D.MFNode();

HAnimJoint1444ZZZ.children[0] = HAnimSegment1445;

HAnimJoint1234ZZZ.children[5] = HAnimJoint1444;

let HAnimJoint1462 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1462.name = "r_eyebrow_joint";
HAnimJoint1462.DEF = "hanim_r_eyebrow_joint";
HAnimJoint1462.center = new X3D.SFVec3f([-0.02175,1.4139,0.10694]);
HAnimJoint1462.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1462.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1463 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1463.name = "r_eyebrow";
HAnimSegment1463.DEF = "hanim_r_eyebrow";
let HAnimSite1464 = browser.currentScene.createNode("HAnimSite");
HAnimSite1464.name = "r_eyebrow_tip";
HAnimSite1464.DEF = "hanim_r_eyebrow_tip";
HAnimSite1464.translation = new X3D.SFVec3f([0,2.84,0]);
let TouchSensor1465 = browser.currentScene.createNode("TouchSensor");
TouchSensor1465.description = "HAnimSite r_eyebrow_tip hanim_r_eyebrow_tip";
HAnimSite1464YYY.children = new X3D.MFNode();

HAnimSite1464ZZZ.children[0] = TouchSensor1465;

let Shape1466 = browser.currentScene.createNode("Shape");
let Appearance1467 = browser.currentScene.createNode("Appearance");
let Material1468 = browser.currentScene.createNode("Material");
Material1468.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1468;

appearance = Appearance1467;

let IndexedFaceSet1469 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1469.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1469.creaseAngle = 0.5;
IndexedFaceSet1469.solid = False;
let ColorRGBA1470 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1470.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1470;

let Coordinate1471 = browser.currentScene.createNode("Coordinate");
Coordinate1471.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1471;

geometry = IndexedFaceSet1469;

HAnimSite1464ZZZ.children[1] = Shape1466;

let Billboard1472 = browser.currentScene.createNode("Billboard");
Billboard1472.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1473 = browser.currentScene.createNode("Shape");
let Text1474 = browser.currentScene.createNode("Text");
Text1474.string = new X3D.MFString([new X3D.SFString("r_eyebrow_tip")]);
let FontStyle1475 = browser.currentScene.createNode("FontStyle");
FontStyle1475.size = 0.035;
fontStyle = FontStyle1475;

geometry = Text1474;

Billboard1472YYY.children = new X3D.MFNode();

Billboard1472ZZZ.children[0] = Shape1473;

HAnimSite1464ZZZ.children[2] = Billboard1472;

HAnimSegment1463YYY.children = new X3D.MFNode();

HAnimSegment1463ZZZ.children[0] = HAnimSite1464;

let Shape1476 = browser.currentScene.createNode("Shape");
let LineSet1477 = browser.currentScene.createNode("LineSet");
LineSet1477.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1478 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1478.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1478;

let Coordinate1479 = browser.currentScene.createNode("Coordinate");
Coordinate1479.point = new X3D.MFVec3f([-0.02175,1.4139,0.10694,0,1.3126,-0.0154]);
coord = Coordinate1479;

geometry = LineSet1477;

HAnimSegment1463ZZZ.children[1] = Shape1476;

HAnimJoint1462YYY.children = new X3D.MFNode();

HAnimJoint1462ZZZ.children[0] = HAnimSegment1463;

HAnimJoint1234ZZZ.children[6] = HAnimJoint1462;

let HAnimJoint1480 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1480.name = "temporomandibular";
HAnimJoint1480.DEF = "hanim_temporomandibular";
HAnimJoint1480.center = new X3D.SFVec3f([0,1.3128,0.01538]);
HAnimJoint1480.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1480.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1481 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1481.name = "jaw";
HAnimSegment1481.DEF = "hanim_jaw";
let HAnimSite1482 = browser.currentScene.createNode("HAnimSite");
HAnimSite1482.name = "l_gonion";
HAnimSite1482.DEF = "hanim_l_gonion_pt";
HAnimSite1482.translation = new X3D.SFVec3f([0.068,1.346,0.033]);
let TouchSensor1483 = browser.currentScene.createNode("TouchSensor");
TouchSensor1483.description = "HAnimSite 5 hanim_l_gonion_pt";
HAnimSite1482YYY.children = new X3D.MFNode();

HAnimSite1482ZZZ.children[0] = TouchSensor1483;

let Shape1484 = browser.currentScene.createNode("Shape");
let Appearance1485 = browser.currentScene.createNode("Appearance");
let Material1486 = browser.currentScene.createNode("Material");
Material1486.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1486;

appearance = Appearance1485;

let IndexedFaceSet1487 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1487.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1487.creaseAngle = 0.5;
IndexedFaceSet1487.solid = False;
let ColorRGBA1488 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1488.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1488;

let Coordinate1489 = browser.currentScene.createNode("Coordinate");
Coordinate1489.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1489;

geometry = IndexedFaceSet1487;

HAnimSite1482ZZZ.children[1] = Shape1484;

let Billboard1490 = browser.currentScene.createNode("Billboard");
Billboard1490.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1491 = browser.currentScene.createNode("Shape");
let Text1492 = browser.currentScene.createNode("Text");
Text1492.string = new X3D.MFString([new X3D.SFString("5")]);
let FontStyle1493 = browser.currentScene.createNode("FontStyle");
FontStyle1493.size = 0.035;
fontStyle = FontStyle1493;

geometry = Text1492;

Billboard1490YYY.children = new X3D.MFNode();

Billboard1490ZZZ.children[0] = Shape1491;

HAnimSite1482ZZZ.children[2] = Billboard1490;

HAnimSegment1481YYY.children = new X3D.MFNode();

HAnimSegment1481ZZZ.children[0] = HAnimSite1482;

let HAnimSite1494 = browser.currentScene.createNode("HAnimSite");
HAnimSite1494.name = "r_gonion";
HAnimSite1494.DEF = "hanim_r_gonion_pt";
HAnimSite1494.translation = new X3D.SFVec3f([-0.068,1.346,0.033]);
let TouchSensor1495 = browser.currentScene.createNode("TouchSensor");
TouchSensor1495.description = "HAnimSite 8 hanim_r_gonion_pt";
HAnimSite1494YYY.children = new X3D.MFNode();

HAnimSite1494ZZZ.children[0] = TouchSensor1495;

let Shape1496 = browser.currentScene.createNode("Shape");
let Appearance1497 = browser.currentScene.createNode("Appearance");
let Material1498 = browser.currentScene.createNode("Material");
Material1498.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1498;

appearance = Appearance1497;

let IndexedFaceSet1499 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1499.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1499.creaseAngle = 0.5;
IndexedFaceSet1499.solid = False;
let ColorRGBA1500 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1500.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1500;

let Coordinate1501 = browser.currentScene.createNode("Coordinate");
Coordinate1501.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1501;

geometry = IndexedFaceSet1499;

HAnimSite1494ZZZ.children[1] = Shape1496;

let Billboard1502 = browser.currentScene.createNode("Billboard");
Billboard1502.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1503 = browser.currentScene.createNode("Shape");
let Text1504 = browser.currentScene.createNode("Text");
Text1504.string = new X3D.MFString([new X3D.SFString("8")]);
let FontStyle1505 = browser.currentScene.createNode("FontStyle");
FontStyle1505.size = 0.035;
fontStyle = FontStyle1505;

geometry = Text1504;

Billboard1502YYY.children = new X3D.MFNode();

Billboard1502ZZZ.children[0] = Shape1503;

HAnimSite1494ZZZ.children[2] = Billboard1502;

HAnimSegment1481ZZZ.children[1] = HAnimSite1494;

let HAnimSite1506 = browser.currentScene.createNode("HAnimSite");
HAnimSite1506.name = "supramenton";
HAnimSite1506.DEF = "hanim_supramenton_pt";
HAnimSite1506.translation = new X3D.SFVec3f([0,1.32,0.086]);
let TouchSensor1507 = browser.currentScene.createNode("TouchSensor");
TouchSensor1507.description = "HAnimSite 9 hanim_supramenton_pt";
HAnimSite1506YYY.children = new X3D.MFNode();

HAnimSite1506ZZZ.children[0] = TouchSensor1507;

let Shape1508 = browser.currentScene.createNode("Shape");
let Appearance1509 = browser.currentScene.createNode("Appearance");
let Material1510 = browser.currentScene.createNode("Material");
Material1510.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1510;

appearance = Appearance1509;

let IndexedFaceSet1511 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1511.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1511.creaseAngle = 0.5;
IndexedFaceSet1511.solid = False;
let ColorRGBA1512 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1512.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1512;

let Coordinate1513 = browser.currentScene.createNode("Coordinate");
Coordinate1513.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1513;

geometry = IndexedFaceSet1511;

HAnimSite1506ZZZ.children[1] = Shape1508;

let Billboard1514 = browser.currentScene.createNode("Billboard");
Billboard1514.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1515 = browser.currentScene.createNode("Shape");
let Text1516 = browser.currentScene.createNode("Text");
Text1516.string = new X3D.MFString([new X3D.SFString("9")]);
let FontStyle1517 = browser.currentScene.createNode("FontStyle");
FontStyle1517.size = 0.035;
fontStyle = FontStyle1517;

geometry = Text1516;

Billboard1514YYY.children = new X3D.MFNode();

Billboard1514ZZZ.children[0] = Shape1515;

HAnimSite1506ZZZ.children[2] = Billboard1514;

HAnimSegment1481ZZZ.children[2] = HAnimSite1506;

let HAnimSite1518 = browser.currentScene.createNode("HAnimSite");
HAnimSite1518.name = "menton";
HAnimSite1518.DEF = "hanim_menton_pt";
HAnimSite1518.translation = new X3D.SFVec3f([0,1.3,0.08]);
let TouchSensor1519 = browser.currentScene.createNode("TouchSensor");
TouchSensor1519.description = "HAnimSite 87 hanim_menton_pt";
HAnimSite1518YYY.children = new X3D.MFNode();

HAnimSite1518ZZZ.children[0] = TouchSensor1519;

let Shape1520 = browser.currentScene.createNode("Shape");
let Appearance1521 = browser.currentScene.createNode("Appearance");
let Material1522 = browser.currentScene.createNode("Material");
Material1522.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1522;

appearance = Appearance1521;

let IndexedFaceSet1523 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1523.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1523.creaseAngle = 0.5;
IndexedFaceSet1523.solid = False;
let ColorRGBA1524 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1524.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1524;

let Coordinate1525 = browser.currentScene.createNode("Coordinate");
Coordinate1525.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1525;

geometry = IndexedFaceSet1523;

HAnimSite1518ZZZ.children[1] = Shape1520;

let Billboard1526 = browser.currentScene.createNode("Billboard");
Billboard1526.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1527 = browser.currentScene.createNode("Shape");
let Text1528 = browser.currentScene.createNode("Text");
Text1528.string = new X3D.MFString([new X3D.SFString("87")]);
let FontStyle1529 = browser.currentScene.createNode("FontStyle");
FontStyle1529.size = 0.035;
fontStyle = FontStyle1529;

geometry = Text1528;

Billboard1526YYY.children = new X3D.MFNode();

Billboard1526ZZZ.children[0] = Shape1527;

HAnimSite1518ZZZ.children[2] = Billboard1526;

HAnimSegment1481ZZZ.children[3] = HAnimSite1518;

let Shape1530 = browser.currentScene.createNode("Shape");
let LineSet1531 = browser.currentScene.createNode("LineSet");
LineSet1531.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1532 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1532.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1532;

let Coordinate1533 = browser.currentScene.createNode("Coordinate");
Coordinate1533.point = new X3D.MFVec3f([0,1.3128,0.01538,0,1.3126,-0.0154]);
coord = Coordinate1533;

geometry = LineSet1531;

HAnimSegment1481ZZZ.children[4] = Shape1530;

HAnimJoint1480YYY.children = new X3D.MFNode();

HAnimJoint1480ZZZ.children[0] = HAnimSegment1481;

HAnimJoint1234ZZZ.children[7] = HAnimJoint1480;

HAnimJoint1228ZZZ.children[1] = HAnimJoint1234;

HAnimJoint1210ZZZ.children[1] = HAnimJoint1228;

HAnimJoint1204ZZZ.children[1] = HAnimJoint1210;

HAnimJoint1198ZZZ.children[1] = HAnimJoint1204;

HAnimJoint1192ZZZ.children[1] = HAnimJoint1198;

HAnimJoint1186ZZZ.children[1] = HAnimJoint1192;

HAnimJoint1156ZZZ.children[1] = HAnimJoint1186;

HAnimJoint1126ZZZ.children[1] = HAnimJoint1156;

let HAnimJoint1534 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1534.name = "l_sternoclavicular";
HAnimJoint1534.DEF = "hanim_l_sternoclavicular";
HAnimJoint1534.center = new X3D.SFVec3f([0.03847,1.2087,-0.01378]);
HAnimJoint1534.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1534.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1535 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1535.name = "l_clavicle";
HAnimSegment1535.DEF = "hanim_l_clavicle";
let HAnimSite1536 = browser.currentScene.createNode("HAnimSite");
HAnimSite1536.name = "l_clavicale";
HAnimSite1536.DEF = "hanim_l_clavicale_pt";
HAnimSite1536.translation = new X3D.SFVec3f([0.03,1.2,0.04]);
let TouchSensor1537 = browser.currentScene.createNode("TouchSensor");
TouchSensor1537.description = "HAnimSite l_clavicale hanim_l_clavicale_pt";
HAnimSite1536YYY.children = new X3D.MFNode();

HAnimSite1536ZZZ.children[0] = TouchSensor1537;

let Shape1538 = browser.currentScene.createNode("Shape");
let Appearance1539 = browser.currentScene.createNode("Appearance");
let Material1540 = browser.currentScene.createNode("Material");
Material1540.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1540;

appearance = Appearance1539;

let IndexedFaceSet1541 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1541.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1541.creaseAngle = 0.5;
IndexedFaceSet1541.solid = False;
let ColorRGBA1542 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1542.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1542;

let Coordinate1543 = browser.currentScene.createNode("Coordinate");
Coordinate1543.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1543;

geometry = IndexedFaceSet1541;

HAnimSite1536ZZZ.children[1] = Shape1538;

let Billboard1544 = browser.currentScene.createNode("Billboard");
Billboard1544.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1545 = browser.currentScene.createNode("Shape");
let Text1546 = browser.currentScene.createNode("Text");
Text1546.string = new X3D.MFString([new X3D.SFString("l_clavicale")]);
let FontStyle1547 = browser.currentScene.createNode("FontStyle");
FontStyle1547.size = 0.035;
fontStyle = FontStyle1547;

geometry = Text1546;

Billboard1544YYY.children = new X3D.MFNode();

Billboard1544ZZZ.children[0] = Shape1545;

HAnimSite1536ZZZ.children[2] = Billboard1544;

HAnimSegment1535YYY.children = new X3D.MFNode();

HAnimSegment1535ZZZ.children[0] = HAnimSite1536;

let Shape1548 = browser.currentScene.createNode("Shape");
let LineSet1549 = browser.currentScene.createNode("LineSet");
LineSet1549.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1550 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1550.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1550;

let Coordinate1551 = browser.currentScene.createNode("Coordinate");
Coordinate1551.point = new X3D.MFVec3f([0.03847,1.2087,-0.01378,0,1.22,-0.0138]);
coord = Coordinate1551;

geometry = LineSet1549;

HAnimSegment1535ZZZ.children[1] = Shape1548;

HAnimJoint1534YYY.children = new X3D.MFNode();

HAnimJoint1534ZZZ.children[0] = HAnimSegment1535;

let HAnimJoint1552 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1552.name = "l_acromioclavicular";
HAnimJoint1552.DEF = "hanim_l_acromioclavicular";
HAnimJoint1552.center = new X3D.SFVec3f([0.12294,1.191825,-0.0129]);
HAnimJoint1552.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1552.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1553 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1553.name = "l_scapula";
HAnimSegment1553.DEF = "hanim_l_scapula";
let HAnimSite1554 = browser.currentScene.createNode("HAnimSite");
HAnimSite1554.name = "l_acromion";
HAnimSite1554.DEF = "hanim_l_acromion_pt";
HAnimSite1554.translation = new X3D.SFVec3f([0.15,1.222,-0.02]);
let TouchSensor1555 = browser.currentScene.createNode("TouchSensor");
TouchSensor1555.description = "HAnimSite 15 hanim_l_acromion_pt";
HAnimSite1554YYY.children = new X3D.MFNode();

HAnimSite1554ZZZ.children[0] = TouchSensor1555;

let Shape1556 = browser.currentScene.createNode("Shape");
let Appearance1557 = browser.currentScene.createNode("Appearance");
let Material1558 = browser.currentScene.createNode("Material");
Material1558.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1558;

appearance = Appearance1557;

let IndexedFaceSet1559 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1559.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1559.creaseAngle = 0.5;
IndexedFaceSet1559.solid = False;
let ColorRGBA1560 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1560.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1560;

let Coordinate1561 = browser.currentScene.createNode("Coordinate");
Coordinate1561.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1561;

geometry = IndexedFaceSet1559;

HAnimSite1554ZZZ.children[1] = Shape1556;

let Billboard1562 = browser.currentScene.createNode("Billboard");
Billboard1562.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1563 = browser.currentScene.createNode("Shape");
let Text1564 = browser.currentScene.createNode("Text");
Text1564.string = new X3D.MFString([new X3D.SFString("15")]);
let FontStyle1565 = browser.currentScene.createNode("FontStyle");
FontStyle1565.size = 0.035;
fontStyle = FontStyle1565;

geometry = Text1564;

Billboard1562YYY.children = new X3D.MFNode();

Billboard1562ZZZ.children[0] = Shape1563;

HAnimSite1554ZZZ.children[2] = Billboard1562;

HAnimSegment1553YYY.children = new X3D.MFNode();

HAnimSegment1553ZZZ.children[0] = HAnimSite1554;

let HAnimSite1566 = browser.currentScene.createNode("HAnimSite");
HAnimSite1566.name = "l_axilla_proximal";
HAnimSite1566.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite1566.translation = new X3D.SFVec3f([0.15,1.16,0.04]);
let TouchSensor1567 = browser.currentScene.createNode("TouchSensor");
TouchSensor1567.description = "HAnimSite 16 hanim_l_axilla_proximal_pt";
HAnimSite1566YYY.children = new X3D.MFNode();

HAnimSite1566ZZZ.children[0] = TouchSensor1567;

let Shape1568 = browser.currentScene.createNode("Shape");
let Appearance1569 = browser.currentScene.createNode("Appearance");
let Material1570 = browser.currentScene.createNode("Material");
Material1570.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1570;

appearance = Appearance1569;

let IndexedFaceSet1571 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1571.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1571.creaseAngle = 0.5;
IndexedFaceSet1571.solid = False;
let ColorRGBA1572 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1572.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1572;

let Coordinate1573 = browser.currentScene.createNode("Coordinate");
Coordinate1573.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1573;

geometry = IndexedFaceSet1571;

HAnimSite1566ZZZ.children[1] = Shape1568;

let Billboard1574 = browser.currentScene.createNode("Billboard");
Billboard1574.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1575 = browser.currentScene.createNode("Shape");
let Text1576 = browser.currentScene.createNode("Text");
Text1576.string = new X3D.MFString([new X3D.SFString("16")]);
let FontStyle1577 = browser.currentScene.createNode("FontStyle");
FontStyle1577.size = 0.035;
fontStyle = FontStyle1577;

geometry = Text1576;

Billboard1574YYY.children = new X3D.MFNode();

Billboard1574ZZZ.children[0] = Shape1575;

HAnimSite1566ZZZ.children[2] = Billboard1574;

HAnimSegment1553ZZZ.children[1] = HAnimSite1566;

let HAnimSite1578 = browser.currentScene.createNode("HAnimSite");
HAnimSite1578.name = "l_axilla_distal";
HAnimSite1578.DEF = "hanim_l_axilla_distal_pt";
HAnimSite1578.translation = new X3D.SFVec3f([0.17,1.14,0]);
let TouchSensor1579 = browser.currentScene.createNode("TouchSensor");
TouchSensor1579.description = "HAnimSite 17 hanim_l_axilla_distal_pt";
HAnimSite1578YYY.children = new X3D.MFNode();

HAnimSite1578ZZZ.children[0] = TouchSensor1579;

let Shape1580 = browser.currentScene.createNode("Shape");
let Appearance1581 = browser.currentScene.createNode("Appearance");
let Material1582 = browser.currentScene.createNode("Material");
Material1582.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1582;

appearance = Appearance1581;

let IndexedFaceSet1583 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1583.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1583.creaseAngle = 0.5;
IndexedFaceSet1583.solid = False;
let ColorRGBA1584 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1584.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1584;

let Coordinate1585 = browser.currentScene.createNode("Coordinate");
Coordinate1585.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1585;

geometry = IndexedFaceSet1583;

HAnimSite1578ZZZ.children[1] = Shape1580;

let Billboard1586 = browser.currentScene.createNode("Billboard");
Billboard1586.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1587 = browser.currentScene.createNode("Shape");
let Text1588 = browser.currentScene.createNode("Text");
Text1588.string = new X3D.MFString([new X3D.SFString("17")]);
let FontStyle1589 = browser.currentScene.createNode("FontStyle");
FontStyle1589.size = 0.035;
fontStyle = FontStyle1589;

geometry = Text1588;

Billboard1586YYY.children = new X3D.MFNode();

Billboard1586ZZZ.children[0] = Shape1587;

HAnimSite1578ZZZ.children[2] = Billboard1586;

HAnimSegment1553ZZZ.children[2] = HAnimSite1578;

let HAnimSite1590 = browser.currentScene.createNode("HAnimSite");
HAnimSite1590.name = "l_axilla_posterior_folds";
HAnimSite1590.DEF = "hanim_l_axilla_posterior_folds_pt";
HAnimSite1590.translation = new X3D.SFVec3f([0.15,1.145,-0.04]);
let TouchSensor1591 = browser.currentScene.createNode("TouchSensor");
TouchSensor1591.description = "HAnimSite 18 hanim_l_axilla_posterior_folds_pt";
HAnimSite1590YYY.children = new X3D.MFNode();

HAnimSite1590ZZZ.children[0] = TouchSensor1591;

let Shape1592 = browser.currentScene.createNode("Shape");
let Appearance1593 = browser.currentScene.createNode("Appearance");
let Material1594 = browser.currentScene.createNode("Material");
Material1594.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1594;

appearance = Appearance1593;

let IndexedFaceSet1595 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1595.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1595.creaseAngle = 0.5;
IndexedFaceSet1595.solid = False;
let ColorRGBA1596 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1596.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1596;

let Coordinate1597 = browser.currentScene.createNode("Coordinate");
Coordinate1597.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1597;

geometry = IndexedFaceSet1595;

HAnimSite1590ZZZ.children[1] = Shape1592;

let Billboard1598 = browser.currentScene.createNode("Billboard");
Billboard1598.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1599 = browser.currentScene.createNode("Shape");
let Text1600 = browser.currentScene.createNode("Text");
Text1600.string = new X3D.MFString([new X3D.SFString("18")]);
let FontStyle1601 = browser.currentScene.createNode("FontStyle");
FontStyle1601.size = 0.035;
fontStyle = FontStyle1601;

geometry = Text1600;

Billboard1598YYY.children = new X3D.MFNode();

Billboard1598ZZZ.children[0] = Shape1599;

HAnimSite1590ZZZ.children[2] = Billboard1598;

HAnimSegment1553ZZZ.children[3] = HAnimSite1590;

let Shape1602 = browser.currentScene.createNode("Shape");
let LineSet1603 = browser.currentScene.createNode("LineSet");
LineSet1603.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1604 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1604.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1604;

let Coordinate1605 = browser.currentScene.createNode("Coordinate");
Coordinate1605.point = new X3D.MFVec3f([0.12294,1.191825,-0.0129,0.03847,1.2087,-0.01378]);
coord = Coordinate1605;

geometry = LineSet1603;

HAnimSegment1553ZZZ.children[4] = Shape1602;

HAnimJoint1552YYY.children = new X3D.MFNode();

HAnimJoint1552ZZZ.children[0] = HAnimSegment1553;

let HAnimJoint1606 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1606.name = "l_shoulder";
HAnimJoint1606.DEF = "hanim_l_shoulder";
HAnimJoint1606.center = new X3D.SFVec3f([0.16506,1.17855,-0.00327]);
HAnimJoint1606.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1606.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1607 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1607.name = "l_upperarm";
HAnimSegment1607.DEF = "hanim_l_upperarm";
let HAnimSite1608 = browser.currentScene.createNode("HAnimSite");
HAnimSite1608.name = "l_humeral_lateral_epicondyle";
HAnimSite1608.DEF = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite1608.translation = new X3D.SFVec3f([0.2,0.95,-0.03]);
let TouchSensor1609 = browser.currentScene.createNode("TouchSensor");
TouchSensor1609.description = "HAnimSite 63 hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite1608YYY.children = new X3D.MFNode();

HAnimSite1608ZZZ.children[0] = TouchSensor1609;

let Shape1610 = browser.currentScene.createNode("Shape");
let Appearance1611 = browser.currentScene.createNode("Appearance");
let Material1612 = browser.currentScene.createNode("Material");
Material1612.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1612;

appearance = Appearance1611;

let IndexedFaceSet1613 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1613.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1613.creaseAngle = 0.5;
IndexedFaceSet1613.solid = False;
let ColorRGBA1614 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1614.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1614;

let Coordinate1615 = browser.currentScene.createNode("Coordinate");
Coordinate1615.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1615;

geometry = IndexedFaceSet1613;

HAnimSite1608ZZZ.children[1] = Shape1610;

let Billboard1616 = browser.currentScene.createNode("Billboard");
Billboard1616.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1617 = browser.currentScene.createNode("Shape");
let Text1618 = browser.currentScene.createNode("Text");
Text1618.string = new X3D.MFString([new X3D.SFString("63")]);
let FontStyle1619 = browser.currentScene.createNode("FontStyle");
FontStyle1619.size = 0.035;
fontStyle = FontStyle1619;

geometry = Text1618;

Billboard1616YYY.children = new X3D.MFNode();

Billboard1616ZZZ.children[0] = Shape1617;

HAnimSite1608ZZZ.children[2] = Billboard1616;

HAnimSegment1607YYY.children = new X3D.MFNode();

HAnimSegment1607ZZZ.children[0] = HAnimSite1608;

let HAnimSite1620 = browser.currentScene.createNode("HAnimSite");
HAnimSite1620.name = "l_humeral_medial_epicondyle";
HAnimSite1620.DEF = "hanim_l_humeral_medial_epicondyle_pt";
HAnimSite1620.translation = new X3D.SFVec3f([0.18,0.93,-0.03]);
let TouchSensor1621 = browser.currentScene.createNode("TouchSensor");
TouchSensor1621.description = "HAnimSite 64 hanim_l_humeral_medial_epicondyle_pt";
HAnimSite1620YYY.children = new X3D.MFNode();

HAnimSite1620ZZZ.children[0] = TouchSensor1621;

let Shape1622 = browser.currentScene.createNode("Shape");
let Appearance1623 = browser.currentScene.createNode("Appearance");
let Material1624 = browser.currentScene.createNode("Material");
Material1624.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1624;

appearance = Appearance1623;

let IndexedFaceSet1625 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1625.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1625.creaseAngle = 0.5;
IndexedFaceSet1625.solid = False;
let ColorRGBA1626 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1626.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1626;

let Coordinate1627 = browser.currentScene.createNode("Coordinate");
Coordinate1627.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1627;

geometry = IndexedFaceSet1625;

HAnimSite1620ZZZ.children[1] = Shape1622;

let Billboard1628 = browser.currentScene.createNode("Billboard");
Billboard1628.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1629 = browser.currentScene.createNode("Shape");
let Text1630 = browser.currentScene.createNode("Text");
Text1630.string = new X3D.MFString([new X3D.SFString("64")]);
let FontStyle1631 = browser.currentScene.createNode("FontStyle");
FontStyle1631.size = 0.035;
fontStyle = FontStyle1631;

geometry = Text1630;

Billboard1628YYY.children = new X3D.MFNode();

Billboard1628ZZZ.children[0] = Shape1629;

HAnimSite1620ZZZ.children[2] = Billboard1628;

HAnimSegment1607ZZZ.children[1] = HAnimSite1620;

let HAnimSite1632 = browser.currentScene.createNode("HAnimSite");
HAnimSite1632.name = "l_radiale";
HAnimSite1632.DEF = "hanim_l_radiale_pt";
HAnimSite1632.translation = new X3D.SFVec3f([0.2,0.91,-0.03]);
let TouchSensor1633 = browser.currentScene.createNode("TouchSensor");
TouchSensor1633.description = "HAnimSite 69 hanim_l_radiale_pt";
HAnimSite1632YYY.children = new X3D.MFNode();

HAnimSite1632ZZZ.children[0] = TouchSensor1633;

let Shape1634 = browser.currentScene.createNode("Shape");
let Appearance1635 = browser.currentScene.createNode("Appearance");
let Material1636 = browser.currentScene.createNode("Material");
Material1636.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1636;

appearance = Appearance1635;

let IndexedFaceSet1637 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1637.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1637.creaseAngle = 0.5;
IndexedFaceSet1637.solid = False;
let ColorRGBA1638 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1638.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1638;

let Coordinate1639 = browser.currentScene.createNode("Coordinate");
Coordinate1639.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1639;

geometry = IndexedFaceSet1637;

HAnimSite1632ZZZ.children[1] = Shape1634;

let Billboard1640 = browser.currentScene.createNode("Billboard");
Billboard1640.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1641 = browser.currentScene.createNode("Shape");
let Text1642 = browser.currentScene.createNode("Text");
Text1642.string = new X3D.MFString([new X3D.SFString("69")]);
let FontStyle1643 = browser.currentScene.createNode("FontStyle");
FontStyle1643.size = 0.035;
fontStyle = FontStyle1643;

geometry = Text1642;

Billboard1640YYY.children = new X3D.MFNode();

Billboard1640ZZZ.children[0] = Shape1641;

HAnimSite1632ZZZ.children[2] = Billboard1640;

HAnimSegment1607ZZZ.children[2] = HAnimSite1632;

let HAnimSite1644 = browser.currentScene.createNode("HAnimSite");
HAnimSite1644.name = "l_bideltoid";
HAnimSite1644.DEF = "hanim_l_bideltoid_pt";
HAnimSite1644.translation = new X3D.SFVec3f([0.225,1.185,0]);
let TouchSensor1645 = browser.currentScene.createNode("TouchSensor");
TouchSensor1645.description = "HAnimSite 96 hanim_l_bideltoid_pt";
HAnimSite1644YYY.children = new X3D.MFNode();

HAnimSite1644ZZZ.children[0] = TouchSensor1645;

let Shape1646 = browser.currentScene.createNode("Shape");
let Appearance1647 = browser.currentScene.createNode("Appearance");
let Material1648 = browser.currentScene.createNode("Material");
Material1648.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1648;

appearance = Appearance1647;

let IndexedFaceSet1649 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1649.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1649.creaseAngle = 0.5;
IndexedFaceSet1649.solid = False;
let ColorRGBA1650 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1650.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1650;

let Coordinate1651 = browser.currentScene.createNode("Coordinate");
Coordinate1651.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1651;

geometry = IndexedFaceSet1649;

HAnimSite1644ZZZ.children[1] = Shape1646;

let Billboard1652 = browser.currentScene.createNode("Billboard");
Billboard1652.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1653 = browser.currentScene.createNode("Shape");
let Text1654 = browser.currentScene.createNode("Text");
Text1654.string = new X3D.MFString([new X3D.SFString("96")]);
let FontStyle1655 = browser.currentScene.createNode("FontStyle");
FontStyle1655.size = 0.035;
fontStyle = FontStyle1655;

geometry = Text1654;

Billboard1652YYY.children = new X3D.MFNode();

Billboard1652ZZZ.children[0] = Shape1653;

HAnimSite1644ZZZ.children[2] = Billboard1652;

HAnimSegment1607ZZZ.children[3] = HAnimSite1644;

let Shape1656 = browser.currentScene.createNode("Shape");
let LineSet1657 = browser.currentScene.createNode("LineSet");
LineSet1657.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1658 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1658.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1658;

let Coordinate1659 = browser.currentScene.createNode("Coordinate");
Coordinate1659.point = new X3D.MFVec3f([0.16506,1.17855,-0.00327,0.12294,1.191825,-0.0129]);
coord = Coordinate1659;

geometry = LineSet1657;

HAnimSegment1607ZZZ.children[4] = Shape1656;

HAnimJoint1606YYY.children = new X3D.MFNode();

HAnimJoint1606ZZZ.children[0] = HAnimSegment1607;

let HAnimJoint1660 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1660.name = "l_elbow";
HAnimJoint1660.DEF = "hanim_l_elbow";
HAnimJoint1660.center = new X3D.SFVec3f([0.18209,0.9288,-0.00563]);
HAnimJoint1660.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1660.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1661 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1661.name = "l_forearm";
HAnimSegment1661.DEF = "hanim_l_forearm";
let HAnimSite1662 = browser.currentScene.createNode("HAnimSite");
HAnimSite1662.name = "l_radial_styloid";
HAnimSite1662.DEF = "hanim_l_radial_styloid_pt";
HAnimSite1662.translation = new X3D.SFVec3f([0.18,0.725,0.025]);
let TouchSensor1663 = browser.currentScene.createNode("TouchSensor");
TouchSensor1663.description = "HAnimSite 71 hanim_l_radial_styloid_pt";
HAnimSite1662YYY.children = new X3D.MFNode();

HAnimSite1662ZZZ.children[0] = TouchSensor1663;

let Shape1664 = browser.currentScene.createNode("Shape");
let Appearance1665 = browser.currentScene.createNode("Appearance");
let Material1666 = browser.currentScene.createNode("Material");
Material1666.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1666;

appearance = Appearance1665;

let IndexedFaceSet1667 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1667.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1667.creaseAngle = 0.5;
IndexedFaceSet1667.solid = False;
let ColorRGBA1668 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1668.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1668;

let Coordinate1669 = browser.currentScene.createNode("Coordinate");
Coordinate1669.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1669;

geometry = IndexedFaceSet1667;

HAnimSite1662ZZZ.children[1] = Shape1664;

let Billboard1670 = browser.currentScene.createNode("Billboard");
Billboard1670.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1671 = browser.currentScene.createNode("Shape");
let Text1672 = browser.currentScene.createNode("Text");
Text1672.string = new X3D.MFString([new X3D.SFString("71")]);
let FontStyle1673 = browser.currentScene.createNode("FontStyle");
FontStyle1673.size = 0.035;
fontStyle = FontStyle1673;

geometry = Text1672;

Billboard1670YYY.children = new X3D.MFNode();

Billboard1670ZZZ.children[0] = Shape1671;

HAnimSite1662ZZZ.children[2] = Billboard1670;

HAnimSegment1661YYY.children = new X3D.MFNode();

HAnimSegment1661ZZZ.children[0] = HAnimSite1662;

let HAnimSite1674 = browser.currentScene.createNode("HAnimSite");
HAnimSite1674.name = "l_olecranon";
HAnimSite1674.DEF = "hanim_l_olecranon_pt";
HAnimSite1674.translation = new X3D.SFVec3f([0.2,0.92,-0.03]);
let TouchSensor1675 = browser.currentScene.createNode("TouchSensor");
TouchSensor1675.description = "HAnimSite 65 hanim_l_olecranon_pt";
HAnimSite1674YYY.children = new X3D.MFNode();

HAnimSite1674ZZZ.children[0] = TouchSensor1675;

let Shape1676 = browser.currentScene.createNode("Shape");
let Appearance1677 = browser.currentScene.createNode("Appearance");
let Material1678 = browser.currentScene.createNode("Material");
Material1678.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1678;

appearance = Appearance1677;

let IndexedFaceSet1679 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1679.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1679.creaseAngle = 0.5;
IndexedFaceSet1679.solid = False;
let ColorRGBA1680 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1680.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1680;

let Coordinate1681 = browser.currentScene.createNode("Coordinate");
Coordinate1681.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1681;

geometry = IndexedFaceSet1679;

HAnimSite1674ZZZ.children[1] = Shape1676;

let Billboard1682 = browser.currentScene.createNode("Billboard");
Billboard1682.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1683 = browser.currentScene.createNode("Shape");
let Text1684 = browser.currentScene.createNode("Text");
Text1684.string = new X3D.MFString([new X3D.SFString("65")]);
let FontStyle1685 = browser.currentScene.createNode("FontStyle");
FontStyle1685.size = 0.035;
fontStyle = FontStyle1685;

geometry = Text1684;

Billboard1682YYY.children = new X3D.MFNode();

Billboard1682ZZZ.children[0] = Shape1683;

HAnimSite1674ZZZ.children[2] = Billboard1682;

HAnimSegment1661ZZZ.children[1] = HAnimSite1674;

let Shape1686 = browser.currentScene.createNode("Shape");
let LineSet1687 = browser.currentScene.createNode("LineSet");
LineSet1687.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1688 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1688.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1688;

let Coordinate1689 = browser.currentScene.createNode("Coordinate");
Coordinate1689.point = new X3D.MFVec3f([0.18209,0.9288,-0.00563,0.16506,1.17855,-0.00327]);
coord = Coordinate1689;

geometry = LineSet1687;

HAnimSegment1661ZZZ.children[2] = Shape1686;

HAnimJoint1660YYY.children = new X3D.MFNode();

HAnimJoint1660ZZZ.children[0] = HAnimSegment1661;

let HAnimJoint1690 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1690.name = "l_radiocarpal";
HAnimJoint1690.DEF = "hanim_l_radiocarpal";
HAnimJoint1690.center = new X3D.SFVec3f([0.1819,0.72427,-0.005]);
HAnimJoint1690.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1690.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1691 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1691.name = "l_carpal";
HAnimSegment1691.DEF = "hanim_l_carpal";
let HAnimSite1692 = browser.currentScene.createNode("HAnimSite");
HAnimSite1692.name = "l_ulnar_styloid";
HAnimSite1692.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1692.translation = new X3D.SFVec3f([0.2,0.725,0]);
let TouchSensor1693 = browser.currentScene.createNode("TouchSensor");
TouchSensor1693.description = "HAnimSite 70 hanim_l_ulnar_styloid_pt";
HAnimSite1692YYY.children = new X3D.MFNode();

HAnimSite1692ZZZ.children[0] = TouchSensor1693;

let Shape1694 = browser.currentScene.createNode("Shape");
let Appearance1695 = browser.currentScene.createNode("Appearance");
let Material1696 = browser.currentScene.createNode("Material");
Material1696.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1696;

appearance = Appearance1695;

let IndexedFaceSet1697 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1697.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1697.creaseAngle = 0.5;
IndexedFaceSet1697.solid = False;
let ColorRGBA1698 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1698.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1698;

let Coordinate1699 = browser.currentScene.createNode("Coordinate");
Coordinate1699.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1699;

geometry = IndexedFaceSet1697;

HAnimSite1692ZZZ.children[1] = Shape1694;

let Billboard1700 = browser.currentScene.createNode("Billboard");
Billboard1700.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1701 = browser.currentScene.createNode("Shape");
let Text1702 = browser.currentScene.createNode("Text");
Text1702.string = new X3D.MFString([new X3D.SFString("70")]);
let FontStyle1703 = browser.currentScene.createNode("FontStyle");
FontStyle1703.size = 0.035;
fontStyle = FontStyle1703;

geometry = Text1702;

Billboard1700YYY.children = new X3D.MFNode();

Billboard1700ZZZ.children[0] = Shape1701;

HAnimSite1692ZZZ.children[2] = Billboard1700;

HAnimSegment1691YYY.children = new X3D.MFNode();

HAnimSegment1691ZZZ.children[0] = HAnimSite1692;

let Shape1704 = browser.currentScene.createNode("Shape");
let LineSet1705 = browser.currentScene.createNode("LineSet");
LineSet1705.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1706 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1706.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1706;

let Coordinate1707 = browser.currentScene.createNode("Coordinate");
Coordinate1707.point = new X3D.MFVec3f([0.1819,0.72427,-0.005,0.18209,0.9288,-0.00563]);
coord = Coordinate1707;

geometry = LineSet1705;

HAnimSegment1691ZZZ.children[1] = Shape1704;

HAnimJoint1690YYY.children = new X3D.MFNode();

HAnimJoint1690ZZZ.children[0] = HAnimSegment1691;

let HAnimJoint1708 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1708.name = "l_midcarpal_1";
HAnimJoint1708.DEF = "hanim_l_midcarpal_1";
HAnimJoint1708.center = new X3D.SFVec3f([0.1813,0.706,0.0193]);
HAnimJoint1708.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1708.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1709 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1709.name = "l_trapezium";
HAnimSegment1709.DEF = "hanim_l_trapezium";
let Shape1710 = browser.currentScene.createNode("Shape");
let LineSet1711 = browser.currentScene.createNode("LineSet");
LineSet1711.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1712 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1712.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1712;

let Coordinate1713 = browser.currentScene.createNode("Coordinate");
Coordinate1713.point = new X3D.MFVec3f([0.1813,0.706,0.0193,0.1819,0.72427,-0.005]);
coord = Coordinate1713;

geometry = LineSet1711;

HAnimSegment1709YYY.children = new X3D.MFNode();

HAnimSegment1709ZZZ.children[0] = Shape1710;

HAnimJoint1708YYY.children = new X3D.MFNode();

HAnimJoint1708ZZZ.children[0] = HAnimSegment1709;

let HAnimJoint1714 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1714.name = "l_carpometacarpal_1";
HAnimJoint1714.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1714.center = new X3D.SFVec3f([0.1805,0.69255,0.026]);
HAnimJoint1714.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1714.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1715 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1715.name = "l_metacarpal_1";
HAnimSegment1715.DEF = "hanim_l_metacarpal_1";
let HAnimSite1716 = browser.currentScene.createNode("HAnimSite");
HAnimSite1716.name = "l_metacarpal_phalanx_2";
HAnimSite1716.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1716.translation = new X3D.SFVec3f([0.2,0.665,0.012]);
let TouchSensor1717 = browser.currentScene.createNode("TouchSensor");
TouchSensor1717.description = "HAnimSite 75 hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1716YYY.children = new X3D.MFNode();

HAnimSite1716ZZZ.children[0] = TouchSensor1717;

let Shape1718 = browser.currentScene.createNode("Shape");
let Appearance1719 = browser.currentScene.createNode("Appearance");
let Material1720 = browser.currentScene.createNode("Material");
Material1720.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1720;

appearance = Appearance1719;

let IndexedFaceSet1721 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1721.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1721.creaseAngle = 0.5;
IndexedFaceSet1721.solid = False;
let ColorRGBA1722 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1722.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1722;

let Coordinate1723 = browser.currentScene.createNode("Coordinate");
Coordinate1723.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1723;

geometry = IndexedFaceSet1721;

HAnimSite1716ZZZ.children[1] = Shape1718;

let Billboard1724 = browser.currentScene.createNode("Billboard");
Billboard1724.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1725 = browser.currentScene.createNode("Shape");
let Text1726 = browser.currentScene.createNode("Text");
Text1726.string = new X3D.MFString([new X3D.SFString("75")]);
let FontStyle1727 = browser.currentScene.createNode("FontStyle");
FontStyle1727.size = 0.035;
fontStyle = FontStyle1727;

geometry = Text1726;

Billboard1724YYY.children = new X3D.MFNode();

Billboard1724ZZZ.children[0] = Shape1725;

HAnimSite1716ZZZ.children[2] = Billboard1724;

HAnimSegment1715YYY.children = new X3D.MFNode();

HAnimSegment1715ZZZ.children[0] = HAnimSite1716;

let Shape1728 = browser.currentScene.createNode("Shape");
let LineSet1729 = browser.currentScene.createNode("LineSet");
LineSet1729.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1730 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1730.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1730;

let Coordinate1731 = browser.currentScene.createNode("Coordinate");
Coordinate1731.point = new X3D.MFVec3f([0.1805,0.69255,0.026,0.1813,0.706,0.0193]);
coord = Coordinate1731;

geometry = LineSet1729;

HAnimSegment1715ZZZ.children[1] = Shape1728;

HAnimJoint1714YYY.children = new X3D.MFNode();

HAnimJoint1714ZZZ.children[0] = HAnimSegment1715;

let HAnimJoint1732 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1732.name = "l_metacarpophalangeal_1";
HAnimJoint1732.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1732.center = new X3D.SFVec3f([0.181,0.6727,0.03577]);
HAnimJoint1732.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1732.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1733 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1733.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1733.DEF = "hanim_l_carpal_proximal_phalanx_1";
let Shape1734 = browser.currentScene.createNode("Shape");
let LineSet1735 = browser.currentScene.createNode("LineSet");
LineSet1735.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1736 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1736.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1736;

let Coordinate1737 = browser.currentScene.createNode("Coordinate");
Coordinate1737.point = new X3D.MFVec3f([0.181,0.6727,0.03577,0.1805,0.69255,0.026]);
coord = Coordinate1737;

geometry = LineSet1735;

HAnimSegment1733YYY.children = new X3D.MFNode();

HAnimSegment1733ZZZ.children[0] = Shape1734;

HAnimJoint1732YYY.children = new X3D.MFNode();

HAnimJoint1732ZZZ.children[0] = HAnimSegment1733;

let HAnimJoint1738 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1738.name = "l_carpal_interphalangeal_1";
HAnimJoint1738.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1738.center = new X3D.SFVec3f([0.1826,0.654,0.04966]);
HAnimJoint1738.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1738.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1739 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1739.name = "l_carpal_distal_phalanx_1";
HAnimSegment1739.DEF = "hanim_l_carpal_distal_phalanx_1";
let HAnimSite1740 = browser.currentScene.createNode("HAnimSite");
HAnimSite1740.name = "l_carpal_distal_phalanx_1";
HAnimSite1740.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite1740.translation = new X3D.SFVec3f([0.18,0.64,0.06]);
let TouchSensor1741 = browser.currentScene.createNode("TouchSensor");
TouchSensor1741.description = "HAnimSite 101 hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite1740YYY.children = new X3D.MFNode();

HAnimSite1740ZZZ.children[0] = TouchSensor1741;

let Shape1742 = browser.currentScene.createNode("Shape");
let Appearance1743 = browser.currentScene.createNode("Appearance");
let Material1744 = browser.currentScene.createNode("Material");
Material1744.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1744;

appearance = Appearance1743;

let IndexedFaceSet1745 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1745.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1745.creaseAngle = 0.5;
IndexedFaceSet1745.solid = False;
let ColorRGBA1746 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1746.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1746;

let Coordinate1747 = browser.currentScene.createNode("Coordinate");
Coordinate1747.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1747;

geometry = IndexedFaceSet1745;

HAnimSite1740ZZZ.children[1] = Shape1742;

let Billboard1748 = browser.currentScene.createNode("Billboard");
Billboard1748.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1749 = browser.currentScene.createNode("Shape");
let Text1750 = browser.currentScene.createNode("Text");
Text1750.string = new X3D.MFString([new X3D.SFString("101")]);
let FontStyle1751 = browser.currentScene.createNode("FontStyle");
FontStyle1751.size = 0.035;
fontStyle = FontStyle1751;

geometry = Text1750;

Billboard1748YYY.children = new X3D.MFNode();

Billboard1748ZZZ.children[0] = Shape1749;

HAnimSite1740ZZZ.children[2] = Billboard1748;

HAnimSegment1739YYY.children = new X3D.MFNode();

HAnimSegment1739ZZZ.children[0] = HAnimSite1740;

let Shape1752 = browser.currentScene.createNode("Shape");
let LineSet1753 = browser.currentScene.createNode("LineSet");
LineSet1753.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1754 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1754.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1754;

let Coordinate1755 = browser.currentScene.createNode("Coordinate");
Coordinate1755.point = new X3D.MFVec3f([0.1826,0.654,0.04966,0.181,0.6727,0.03577]);
coord = Coordinate1755;

geometry = LineSet1753;

HAnimSegment1739ZZZ.children[1] = Shape1752;

HAnimJoint1738YYY.children = new X3D.MFNode();

HAnimJoint1738ZZZ.children[0] = HAnimSegment1739;

HAnimJoint1732ZZZ.children[1] = HAnimJoint1738;

HAnimJoint1714ZZZ.children[1] = HAnimJoint1732;

HAnimJoint1708ZZZ.children[1] = HAnimJoint1714;

HAnimJoint1690ZZZ.children[1] = HAnimJoint1708;

let HAnimJoint1756 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1756.name = "l_midcarpal_2";
HAnimJoint1756.DEF = "hanim_l_midcarpal_2";
HAnimJoint1756.center = new X3D.SFVec3f([0.18128,0.70695,0.00842]);
HAnimJoint1756.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1756.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1757 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1757.name = "l_trapezoid";
HAnimSegment1757.DEF = "hanim_l_trapezoid";
let Shape1758 = browser.currentScene.createNode("Shape");
let LineSet1759 = browser.currentScene.createNode("LineSet");
LineSet1759.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1760 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1760.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1760;

let Coordinate1761 = browser.currentScene.createNode("Coordinate");
Coordinate1761.point = new X3D.MFVec3f([0.18128,0.70695,0.00842,0.1819,0.72427,-0.005]);
coord = Coordinate1761;

geometry = LineSet1759;

HAnimSegment1757YYY.children = new X3D.MFNode();

HAnimSegment1757ZZZ.children[0] = Shape1758;

HAnimJoint1756YYY.children = new X3D.MFNode();

HAnimJoint1756ZZZ.children[0] = HAnimSegment1757;

let HAnimJoint1762 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1762.name = "l_carpometacarpal_2";
HAnimJoint1762.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1762.center = new X3D.SFVec3f([0.18128,0.6876,0.0098]);
HAnimJoint1762.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1762.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1763 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1763.name = "l_metacarpal_2";
HAnimSegment1763.DEF = "hanim_l_metacarpal_2";
let Shape1764 = browser.currentScene.createNode("Shape");
let LineSet1765 = browser.currentScene.createNode("LineSet");
LineSet1765.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1766 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1766.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1766;

let Coordinate1767 = browser.currentScene.createNode("Coordinate");
Coordinate1767.point = new X3D.MFVec3f([0.18128,0.6876,0.0098,0.18128,0.70695,0.00842]);
coord = Coordinate1767;

geometry = LineSet1765;

HAnimSegment1763YYY.children = new X3D.MFNode();

HAnimSegment1763ZZZ.children[0] = Shape1764;

HAnimJoint1762YYY.children = new X3D.MFNode();

HAnimJoint1762ZZZ.children[0] = HAnimSegment1763;

let HAnimJoint1768 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1768.name = "l_metacarpophalangeal_2";
HAnimJoint1768.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1768.center = new X3D.SFVec3f([0.1837,0.6372,0.01507]);
HAnimJoint1768.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1768.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1769.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1769.DEF = "hanim_l_carpal_proximal_phalanx_2";
let Shape1770 = browser.currentScene.createNode("Shape");
let LineSet1771 = browser.currentScene.createNode("LineSet");
LineSet1771.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1772 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1772.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1772;

let Coordinate1773 = browser.currentScene.createNode("Coordinate");
Coordinate1773.point = new X3D.MFVec3f([0.1837,0.6372,0.01507,0.18128,0.6876,0.0098]);
coord = Coordinate1773;

geometry = LineSet1771;

HAnimSegment1769YYY.children = new X3D.MFNode();

HAnimSegment1769ZZZ.children[0] = Shape1770;

HAnimJoint1768YYY.children = new X3D.MFNode();

HAnimJoint1768ZZZ.children[0] = HAnimSegment1769;

let HAnimJoint1774 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1774.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1774.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1774.center = new X3D.SFVec3f([0.18171,0.6068,0.01418]);
HAnimJoint1774.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1774.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1775 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1775.name = "l_carpal_middle_phalanx_2";
HAnimSegment1775.DEF = "hanim_l_carpal_middle_phalanx_2";
let Shape1776 = browser.currentScene.createNode("Shape");
let LineSet1777 = browser.currentScene.createNode("LineSet");
LineSet1777.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1778 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1778.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1778;

let Coordinate1779 = browser.currentScene.createNode("Coordinate");
Coordinate1779.point = new X3D.MFVec3f([0.18171,0.6068,0.01418,0.1837,0.6372,0.01507]);
coord = Coordinate1779;

geometry = LineSet1777;

HAnimSegment1775YYY.children = new X3D.MFNode();

HAnimSegment1775ZZZ.children[0] = Shape1776;

HAnimJoint1774YYY.children = new X3D.MFNode();

HAnimJoint1774ZZZ.children[0] = HAnimSegment1775;

let HAnimJoint1780 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1780.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1780.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1780.center = new X3D.SFVec3f([0.18067,0.5816,0.01338]);
HAnimJoint1780.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1780.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1781 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1781.name = "l_carpal_distal_phalanx_2";
HAnimSegment1781.DEF = "hanim_l_carpal_distal_phalanx_2";
let HAnimSite1782 = browser.currentScene.createNode("HAnimSite");
HAnimSite1782.name = "l_dactylion";
HAnimSite1782.DEF = "hanim_l_dactylion_pt";
HAnimSite1782.translation = new X3D.SFVec3f([0.17,0.558,0.017]);
let TouchSensor1783 = browser.currentScene.createNode("TouchSensor");
TouchSensor1783.description = "HAnimSite 57 hanim_l_dactylion_pt";
HAnimSite1782YYY.children = new X3D.MFNode();

HAnimSite1782ZZZ.children[0] = TouchSensor1783;

let Shape1784 = browser.currentScene.createNode("Shape");
let Appearance1785 = browser.currentScene.createNode("Appearance");
let Material1786 = browser.currentScene.createNode("Material");
Material1786.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1786;

appearance = Appearance1785;

let IndexedFaceSet1787 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1787.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1787.creaseAngle = 0.5;
IndexedFaceSet1787.solid = False;
let ColorRGBA1788 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1788.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1788;

let Coordinate1789 = browser.currentScene.createNode("Coordinate");
Coordinate1789.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1789;

geometry = IndexedFaceSet1787;

HAnimSite1782ZZZ.children[1] = Shape1784;

let Billboard1790 = browser.currentScene.createNode("Billboard");
Billboard1790.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1791 = browser.currentScene.createNode("Shape");
let Text1792 = browser.currentScene.createNode("Text");
Text1792.string = new X3D.MFString([new X3D.SFString("57")]);
let FontStyle1793 = browser.currentScene.createNode("FontStyle");
FontStyle1793.size = 0.035;
fontStyle = FontStyle1793;

geometry = Text1792;

Billboard1790YYY.children = new X3D.MFNode();

Billboard1790ZZZ.children[0] = Shape1791;

HAnimSite1782ZZZ.children[2] = Billboard1790;

HAnimSegment1781YYY.children = new X3D.MFNode();

HAnimSegment1781ZZZ.children[0] = HAnimSite1782;

let HAnimSite1794 = browser.currentScene.createNode("HAnimSite");
HAnimSite1794.name = "l_carpal_distal_phalanx_2";
HAnimSite1794.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite1794.translation = new X3D.SFVec3f([0.172,0.558,0.017]);
let TouchSensor1795 = browser.currentScene.createNode("TouchSensor");
TouchSensor1795.description = "HAnimSite 102 hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite1794YYY.children = new X3D.MFNode();

HAnimSite1794ZZZ.children[0] = TouchSensor1795;

let Shape1796 = browser.currentScene.createNode("Shape");
let Appearance1797 = browser.currentScene.createNode("Appearance");
let Material1798 = browser.currentScene.createNode("Material");
Material1798.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1798;

appearance = Appearance1797;

let IndexedFaceSet1799 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1799.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1799.creaseAngle = 0.5;
IndexedFaceSet1799.solid = False;
let ColorRGBA1800 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1800.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1800;

let Coordinate1801 = browser.currentScene.createNode("Coordinate");
Coordinate1801.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1801;

geometry = IndexedFaceSet1799;

HAnimSite1794ZZZ.children[1] = Shape1796;

let Billboard1802 = browser.currentScene.createNode("Billboard");
Billboard1802.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1803 = browser.currentScene.createNode("Shape");
let Text1804 = browser.currentScene.createNode("Text");
Text1804.string = new X3D.MFString([new X3D.SFString("102")]);
let FontStyle1805 = browser.currentScene.createNode("FontStyle");
FontStyle1805.size = 0.035;
fontStyle = FontStyle1805;

geometry = Text1804;

Billboard1802YYY.children = new X3D.MFNode();

Billboard1802ZZZ.children[0] = Shape1803;

HAnimSite1794ZZZ.children[2] = Billboard1802;

HAnimSegment1781ZZZ.children[1] = HAnimSite1794;

let Shape1806 = browser.currentScene.createNode("Shape");
let LineSet1807 = browser.currentScene.createNode("LineSet");
LineSet1807.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1808 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1808.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1808;

let Coordinate1809 = browser.currentScene.createNode("Coordinate");
Coordinate1809.point = new X3D.MFVec3f([0.18067,0.5816,0.01338,0.18171,0.6068,0.01418]);
coord = Coordinate1809;

geometry = LineSet1807;

HAnimSegment1781ZZZ.children[2] = Shape1806;

HAnimJoint1780YYY.children = new X3D.MFNode();

HAnimJoint1780ZZZ.children[0] = HAnimSegment1781;

HAnimJoint1774ZZZ.children[1] = HAnimJoint1780;

HAnimJoint1768ZZZ.children[1] = HAnimJoint1774;

HAnimJoint1762ZZZ.children[1] = HAnimJoint1768;

HAnimJoint1756ZZZ.children[1] = HAnimJoint1762;

HAnimJoint1690ZZZ.children[2] = HAnimJoint1756;

let HAnimJoint1810 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1810.name = "l_midcarpal_3";
HAnimJoint1810.DEF = "hanim_l_midcarpal_3";
HAnimJoint1810.center = new X3D.SFVec3f([0.18108,0.708525,-0.0048]);
HAnimJoint1810.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1810.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1811.name = "l_capitate";
HAnimSegment1811.DEF = "hanim_l_capitate";
let Shape1812 = browser.currentScene.createNode("Shape");
let LineSet1813 = browser.currentScene.createNode("LineSet");
LineSet1813.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1814 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1814.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1814;

let Coordinate1815 = browser.currentScene.createNode("Coordinate");
Coordinate1815.point = new X3D.MFVec3f([0.18108,0.708525,-0.0048,0.1819,0.72427,-0.005]);
coord = Coordinate1815;

geometry = LineSet1813;

HAnimSegment1811YYY.children = new X3D.MFNode();

HAnimSegment1811ZZZ.children[0] = Shape1812;

HAnimJoint1810YYY.children = new X3D.MFNode();

HAnimJoint1810ZZZ.children[0] = HAnimSegment1811;

let HAnimJoint1816 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1816.name = "l_carpometacarpal_3";
HAnimJoint1816.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1816.center = new X3D.SFVec3f([0.18108,0.6858,-0.00625]);
HAnimJoint1816.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1816.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1817.name = "l_metacarpal_3";
HAnimSegment1817.DEF = "hanim_l_metacarpal_3";
let HAnimSite1818 = browser.currentScene.createNode("HAnimSite");
HAnimSite1818.name = "l_metacarpal_phalanx_3";
HAnimSite1818.DEF = "hanim_l_metacarpal_phalanx_3_pt";
HAnimSite1818.translation = new X3D.SFVec3f([0.2,0.665,-0.039]);
let TouchSensor1819 = browser.currentScene.createNode("TouchSensor");
TouchSensor1819.description = "HAnimSite 76 hanim_l_metacarpal_phalanx_3_pt";
HAnimSite1818YYY.children = new X3D.MFNode();

HAnimSite1818ZZZ.children[0] = TouchSensor1819;

let Shape1820 = browser.currentScene.createNode("Shape");
let Appearance1821 = browser.currentScene.createNode("Appearance");
let Material1822 = browser.currentScene.createNode("Material");
Material1822.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1822;

appearance = Appearance1821;

let IndexedFaceSet1823 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1823.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1823.creaseAngle = 0.5;
IndexedFaceSet1823.solid = False;
let ColorRGBA1824 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1824.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1824;

let Coordinate1825 = browser.currentScene.createNode("Coordinate");
Coordinate1825.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1825;

geometry = IndexedFaceSet1823;

HAnimSite1818ZZZ.children[1] = Shape1820;

let Billboard1826 = browser.currentScene.createNode("Billboard");
Billboard1826.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1827 = browser.currentScene.createNode("Shape");
let Text1828 = browser.currentScene.createNode("Text");
Text1828.string = new X3D.MFString([new X3D.SFString("76")]);
let FontStyle1829 = browser.currentScene.createNode("FontStyle");
FontStyle1829.size = 0.035;
fontStyle = FontStyle1829;

geometry = Text1828;

Billboard1826YYY.children = new X3D.MFNode();

Billboard1826ZZZ.children[0] = Shape1827;

HAnimSite1818ZZZ.children[2] = Billboard1826;

HAnimSegment1817YYY.children = new X3D.MFNode();

HAnimSegment1817ZZZ.children[0] = HAnimSite1818;

let Shape1830 = browser.currentScene.createNode("Shape");
let LineSet1831 = browser.currentScene.createNode("LineSet");
LineSet1831.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1832 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1832.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1832;

let Coordinate1833 = browser.currentScene.createNode("Coordinate");
Coordinate1833.point = new X3D.MFVec3f([0.18108,0.6858,-0.00625,0.18108,0.708525,-0.0048]);
coord = Coordinate1833;

geometry = LineSet1831;

HAnimSegment1817ZZZ.children[1] = Shape1830;

HAnimJoint1816YYY.children = new X3D.MFNode();

HAnimJoint1816ZZZ.children[0] = HAnimSegment1817;

let HAnimJoint1834 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1834.name = "l_metacarpophalangeal_3";
HAnimJoint1834.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1834.center = new X3D.SFVec3f([0.18369,0.6349,-0.0039]);
HAnimJoint1834.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1834.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1835.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1835.DEF = "hanim_l_carpal_proximal_phalanx_3";
let Shape1836 = browser.currentScene.createNode("Shape");
let LineSet1837 = browser.currentScene.createNode("LineSet");
LineSet1837.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1838 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1838.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1838;

let Coordinate1839 = browser.currentScene.createNode("Coordinate");
Coordinate1839.point = new X3D.MFVec3f([0.18369,0.6349,-0.0039,0.18108,0.6858,-0.00625]);
coord = Coordinate1839;

geometry = LineSet1837;

HAnimSegment1835YYY.children = new X3D.MFNode();

HAnimSegment1835ZZZ.children[0] = Shape1836;

HAnimJoint1834YYY.children = new X3D.MFNode();

HAnimJoint1834ZZZ.children[0] = HAnimSegment1835;

let HAnimJoint1840 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1840.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1840.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1840.center = new X3D.SFVec3f([0.18171,0.6032,-0.0035]);
HAnimJoint1840.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1840.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1841 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1841.name = "l_carpal_middle_phalanx_3";
HAnimSegment1841.DEF = "hanim_l_carpal_middle_phalanx_3";
let Shape1842 = browser.currentScene.createNode("Shape");
let LineSet1843 = browser.currentScene.createNode("LineSet");
LineSet1843.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1844 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1844.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1844;

let Coordinate1845 = browser.currentScene.createNode("Coordinate");
Coordinate1845.point = new X3D.MFVec3f([0.18171,0.6032,-0.0035,0.18369,0.6349,-0.0039]);
coord = Coordinate1845;

geometry = LineSet1843;

HAnimSegment1841YYY.children = new X3D.MFNode();

HAnimSegment1841ZZZ.children[0] = Shape1842;

HAnimJoint1840YYY.children = new X3D.MFNode();

HAnimJoint1840ZZZ.children[0] = HAnimSegment1841;

let HAnimJoint1846 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1846.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1846.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1846.center = new X3D.SFVec3f([0.1807,0.5753,-0.0037]);
HAnimJoint1846.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1846.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1847 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1847.name = "l_carpal_distal_phalanx_3";
HAnimSegment1847.DEF = "hanim_l_carpal_distal_phalanx_3";
let HAnimSite1848 = browser.currentScene.createNode("HAnimSite");
HAnimSite1848.name = "l_carpal_distal_phalanx_3";
HAnimSite1848.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite1848.translation = new X3D.SFVec3f([0.172,0.555,-0.006]);
let TouchSensor1849 = browser.currentScene.createNode("TouchSensor");
TouchSensor1849.description = "HAnimSite 103 hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite1848YYY.children = new X3D.MFNode();

HAnimSite1848ZZZ.children[0] = TouchSensor1849;

let Shape1850 = browser.currentScene.createNode("Shape");
let Appearance1851 = browser.currentScene.createNode("Appearance");
let Material1852 = browser.currentScene.createNode("Material");
Material1852.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1852;

appearance = Appearance1851;

let IndexedFaceSet1853 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1853.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1853.creaseAngle = 0.5;
IndexedFaceSet1853.solid = False;
let ColorRGBA1854 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1854.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1854;

let Coordinate1855 = browser.currentScene.createNode("Coordinate");
Coordinate1855.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1855;

geometry = IndexedFaceSet1853;

HAnimSite1848ZZZ.children[1] = Shape1850;

let Billboard1856 = browser.currentScene.createNode("Billboard");
Billboard1856.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1857 = browser.currentScene.createNode("Shape");
let Text1858 = browser.currentScene.createNode("Text");
Text1858.string = new X3D.MFString([new X3D.SFString("103")]);
let FontStyle1859 = browser.currentScene.createNode("FontStyle");
FontStyle1859.size = 0.035;
fontStyle = FontStyle1859;

geometry = Text1858;

Billboard1856YYY.children = new X3D.MFNode();

Billboard1856ZZZ.children[0] = Shape1857;

HAnimSite1848ZZZ.children[2] = Billboard1856;

HAnimSegment1847YYY.children = new X3D.MFNode();

HAnimSegment1847ZZZ.children[0] = HAnimSite1848;

let Shape1860 = browser.currentScene.createNode("Shape");
let LineSet1861 = browser.currentScene.createNode("LineSet");
LineSet1861.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1862 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1862.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1862;

let Coordinate1863 = browser.currentScene.createNode("Coordinate");
Coordinate1863.point = new X3D.MFVec3f([0.1807,0.5753,-0.0037,0.18171,0.6032,-0.0035]);
coord = Coordinate1863;

geometry = LineSet1861;

HAnimSegment1847ZZZ.children[1] = Shape1860;

HAnimJoint1846YYY.children = new X3D.MFNode();

HAnimJoint1846ZZZ.children[0] = HAnimSegment1847;

HAnimJoint1840ZZZ.children[1] = HAnimJoint1846;

HAnimJoint1834ZZZ.children[1] = HAnimJoint1840;

HAnimJoint1816ZZZ.children[1] = HAnimJoint1834;

HAnimJoint1810ZZZ.children[1] = HAnimJoint1816;

HAnimJoint1690ZZZ.children[3] = HAnimJoint1810;

let HAnimJoint1864 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1864.name = "l_midcarpal_4_5";
HAnimJoint1864.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint1864.center = new X3D.SFVec3f([0.18108,0.70582,-0.02574]);
HAnimJoint1864.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1864.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1865 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1865.name = "l_hamate";
HAnimSegment1865.DEF = "hanim_l_hamate";
let Shape1866 = browser.currentScene.createNode("Shape");
let LineSet1867 = browser.currentScene.createNode("LineSet");
LineSet1867.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1868 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1868.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1868;

let Coordinate1869 = browser.currentScene.createNode("Coordinate");
Coordinate1869.point = new X3D.MFVec3f([0.18108,0.70582,-0.02574,0.1819,0.72427,-0.005]);
coord = Coordinate1869;

geometry = LineSet1867;

HAnimSegment1865YYY.children = new X3D.MFNode();

HAnimSegment1865ZZZ.children[0] = Shape1866;

HAnimJoint1864YYY.children = new X3D.MFNode();

HAnimJoint1864ZZZ.children[0] = HAnimSegment1865;

let HAnimJoint1870 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1870.name = "l_carpometacarpal_4";
HAnimJoint1870.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1870.center = new X3D.SFVec3f([0.1811,0.68625,-0.0199]);
HAnimJoint1870.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1870.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1871 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1871.name = "l_metacarpal_4";
HAnimSegment1871.DEF = "hanim_l_metacarpal_4";
let Shape1872 = browser.currentScene.createNode("Shape");
let LineSet1873 = browser.currentScene.createNode("LineSet");
LineSet1873.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1874 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1874.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1874;

let Coordinate1875 = browser.currentScene.createNode("Coordinate");
Coordinate1875.point = new X3D.MFVec3f([0.1811,0.68625,-0.0199,0.18108,0.70582,-0.02574]);
coord = Coordinate1875;

geometry = LineSet1873;

HAnimSegment1871YYY.children = new X3D.MFNode();

HAnimSegment1871ZZZ.children[0] = Shape1872;

HAnimJoint1870YYY.children = new X3D.MFNode();

HAnimJoint1870ZZZ.children[0] = HAnimSegment1871;

let HAnimJoint1876 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1876.name = "l_metacarpophalangeal_4";
HAnimJoint1876.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1876.center = new X3D.SFVec3f([0.18369,0.63405,-0.02144]);
HAnimJoint1876.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1876.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1877 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1877.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1877.DEF = "hanim_l_carpal_proximal_phalanx_4";
let Shape1878 = browser.currentScene.createNode("Shape");
let LineSet1879 = browser.currentScene.createNode("LineSet");
LineSet1879.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1880 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1880.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1880;

let Coordinate1881 = browser.currentScene.createNode("Coordinate");
Coordinate1881.point = new X3D.MFVec3f([0.18369,0.63405,-0.02144,0.1811,0.68625,-0.0199]);
coord = Coordinate1881;

geometry = LineSet1879;

HAnimSegment1877YYY.children = new X3D.MFNode();

HAnimSegment1877ZZZ.children[0] = Shape1878;

HAnimJoint1876YYY.children = new X3D.MFNode();

HAnimJoint1876ZZZ.children[0] = HAnimSegment1877;

let HAnimJoint1882 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1882.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1882.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1882.center = new X3D.SFVec3f([0.1817,0.6066,-0.02064]);
HAnimJoint1882.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1882.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1883 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1883.name = "l_carpal_middle_phalanx_4";
HAnimSegment1883.DEF = "hanim_l_carpal_middle_phalanx_4";
let Shape1884 = browser.currentScene.createNode("Shape");
let LineSet1885 = browser.currentScene.createNode("LineSet");
LineSet1885.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1886 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1886.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1886;

let Coordinate1887 = browser.currentScene.createNode("Coordinate");
Coordinate1887.point = new X3D.MFVec3f([0.1817,0.6066,-0.02064,0.18369,0.63405,-0.02144]);
coord = Coordinate1887;

geometry = LineSet1885;

HAnimSegment1883YYY.children = new X3D.MFNode();

HAnimSegment1883ZZZ.children[0] = Shape1884;

HAnimJoint1882YYY.children = new X3D.MFNode();

HAnimJoint1882ZZZ.children[0] = HAnimSegment1883;

let HAnimJoint1888 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1888.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1888.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1888.center = new X3D.SFVec3f([0.18067,0.580725,-0.01977]);
HAnimJoint1888.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1888.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1889 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1889.name = "l_carpal_distal_phalanx_4";
HAnimSegment1889.DEF = "hanim_l_carpal_distal_phalanx_4";
let HAnimSite1890 = browser.currentScene.createNode("HAnimSite");
HAnimSite1890.name = "l_carpal_distal_phalanx_4";
HAnimSite1890.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite1890.translation = new X3D.SFVec3f([0.172,0.559,-0.024]);
let TouchSensor1891 = browser.currentScene.createNode("TouchSensor");
TouchSensor1891.description = "HAnimSite 104 hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite1890YYY.children = new X3D.MFNode();

HAnimSite1890ZZZ.children[0] = TouchSensor1891;

let Shape1892 = browser.currentScene.createNode("Shape");
let Appearance1893 = browser.currentScene.createNode("Appearance");
let Material1894 = browser.currentScene.createNode("Material");
Material1894.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1894;

appearance = Appearance1893;

let IndexedFaceSet1895 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1895.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1895.creaseAngle = 0.5;
IndexedFaceSet1895.solid = False;
let ColorRGBA1896 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1896.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1896;

let Coordinate1897 = browser.currentScene.createNode("Coordinate");
Coordinate1897.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1897;

geometry = IndexedFaceSet1895;

HAnimSite1890ZZZ.children[1] = Shape1892;

let Billboard1898 = browser.currentScene.createNode("Billboard");
Billboard1898.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1899 = browser.currentScene.createNode("Shape");
let Text1900 = browser.currentScene.createNode("Text");
Text1900.string = new X3D.MFString([new X3D.SFString("104")]);
let FontStyle1901 = browser.currentScene.createNode("FontStyle");
FontStyle1901.size = 0.035;
fontStyle = FontStyle1901;

geometry = Text1900;

Billboard1898YYY.children = new X3D.MFNode();

Billboard1898ZZZ.children[0] = Shape1899;

HAnimSite1890ZZZ.children[2] = Billboard1898;

HAnimSegment1889YYY.children = new X3D.MFNode();

HAnimSegment1889ZZZ.children[0] = HAnimSite1890;

let Shape1902 = browser.currentScene.createNode("Shape");
let LineSet1903 = browser.currentScene.createNode("LineSet");
LineSet1903.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1904 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1904.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1904;

let Coordinate1905 = browser.currentScene.createNode("Coordinate");
Coordinate1905.point = new X3D.MFVec3f([0.18067,0.580725,-0.01977,0.1817,0.6066,-0.02064]);
coord = Coordinate1905;

geometry = LineSet1903;

HAnimSegment1889ZZZ.children[1] = Shape1902;

HAnimJoint1888YYY.children = new X3D.MFNode();

HAnimJoint1888ZZZ.children[0] = HAnimSegment1889;

HAnimJoint1882ZZZ.children[1] = HAnimJoint1888;

HAnimJoint1876ZZZ.children[1] = HAnimJoint1882;

HAnimJoint1870ZZZ.children[1] = HAnimJoint1876;

HAnimJoint1864ZZZ.children[1] = HAnimJoint1870;

HAnimJoint1690ZZZ.children[4] = HAnimJoint1864;

let HAnimJoint1906 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1906.name = "l_carpometacarpal_5";
HAnimJoint1906.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1906.center = new X3D.SFVec3f([0.18164,0.68827,-0.03278]);
HAnimJoint1906.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1906.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1907 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1907.name = "l_metacarpal_5";
HAnimSegment1907.DEF = "hanim_l_metacarpal_5";
let HAnimSite1908 = browser.currentScene.createNode("HAnimSite");
HAnimSite1908.name = "l_metacarpal_phalanx_5";
HAnimSite1908.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1908.translation = new X3D.SFVec3f([0.2,0.665,-0.036]);
let TouchSensor1909 = browser.currentScene.createNode("TouchSensor");
TouchSensor1909.description = "HAnimSite 77 hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1908YYY.children = new X3D.MFNode();

HAnimSite1908ZZZ.children[0] = TouchSensor1909;

let Shape1910 = browser.currentScene.createNode("Shape");
let Appearance1911 = browser.currentScene.createNode("Appearance");
let Material1912 = browser.currentScene.createNode("Material");
Material1912.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1912;

appearance = Appearance1911;

let IndexedFaceSet1913 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1913.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1913.creaseAngle = 0.5;
IndexedFaceSet1913.solid = False;
let ColorRGBA1914 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1914.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1914;

let Coordinate1915 = browser.currentScene.createNode("Coordinate");
Coordinate1915.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1915;

geometry = IndexedFaceSet1913;

HAnimSite1908ZZZ.children[1] = Shape1910;

let Billboard1916 = browser.currentScene.createNode("Billboard");
Billboard1916.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1917 = browser.currentScene.createNode("Shape");
let Text1918 = browser.currentScene.createNode("Text");
Text1918.string = new X3D.MFString([new X3D.SFString("77")]);
let FontStyle1919 = browser.currentScene.createNode("FontStyle");
FontStyle1919.size = 0.035;
fontStyle = FontStyle1919;

geometry = Text1918;

Billboard1916YYY.children = new X3D.MFNode();

Billboard1916ZZZ.children[0] = Shape1917;

HAnimSite1908ZZZ.children[2] = Billboard1916;

HAnimSegment1907YYY.children = new X3D.MFNode();

HAnimSegment1907ZZZ.children[0] = HAnimSite1908;

let Shape1920 = browser.currentScene.createNode("Shape");
let LineSet1921 = browser.currentScene.createNode("LineSet");
LineSet1921.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1922 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1922.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1922;

let Coordinate1923 = browser.currentScene.createNode("Coordinate");
Coordinate1923.point = new X3D.MFVec3f([0.18164,0.68827,-0.03278,0.1819,0.72427,-0.005]);
coord = Coordinate1923;

geometry = LineSet1921;

HAnimSegment1907ZZZ.children[1] = Shape1920;

HAnimJoint1906YYY.children = new X3D.MFNode();

HAnimJoint1906ZZZ.children[0] = HAnimSegment1907;

let HAnimJoint1924 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1924.name = "l_metacarpophalangeal_5";
HAnimJoint1924.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1924.center = new X3D.SFVec3f([0.1833,0.6381,-0.037]);
HAnimJoint1924.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1924.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1925 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1925.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1925.DEF = "hanim_l_carpal_proximal_phalanx_5";
let Shape1926 = browser.currentScene.createNode("Shape");
let LineSet1927 = browser.currentScene.createNode("LineSet");
LineSet1927.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1928 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1928.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1928;

let Coordinate1929 = browser.currentScene.createNode("Coordinate");
Coordinate1929.point = new X3D.MFVec3f([0.1833,0.6381,-0.037,0.18164,0.68827,-0.03278]);
coord = Coordinate1929;

geometry = LineSet1927;

HAnimSegment1925YYY.children = new X3D.MFNode();

HAnimSegment1925ZZZ.children[0] = Shape1926;

HAnimJoint1924YYY.children = new X3D.MFNode();

HAnimJoint1924ZZZ.children[0] = HAnimSegment1925;

let HAnimJoint1930 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1930.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1930.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1930.center = new X3D.SFVec3f([0.18166,0.621,-0.03715]);
HAnimJoint1930.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1930.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1931 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1931.name = "l_carpal_middle_phalanx_5";
HAnimSegment1931.DEF = "hanim_l_carpal_middle_phalanx_5";
let Shape1932 = browser.currentScene.createNode("Shape");
let LineSet1933 = browser.currentScene.createNode("LineSet");
LineSet1933.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1934 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1934.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1934;

let Coordinate1935 = browser.currentScene.createNode("Coordinate");
Coordinate1935.point = new X3D.MFVec3f([0.18166,0.621,-0.03715,0.1833,0.6381,-0.037]);
coord = Coordinate1935;

geometry = LineSet1933;

HAnimSegment1931YYY.children = new X3D.MFNode();

HAnimSegment1931ZZZ.children[0] = Shape1932;

HAnimJoint1930YYY.children = new X3D.MFNode();

HAnimJoint1930ZZZ.children[0] = HAnimSegment1931;

let HAnimJoint1936 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1936.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1936.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1936.center = new X3D.SFVec3f([0.1808,0.6023,-0.0369]);
HAnimJoint1936.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1936.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1937 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1937.name = "l_carpal_distal_phalanx_5";
HAnimSegment1937.DEF = "hanim_l_carpal_distal_phalanx_5";
let HAnimSite1938 = browser.currentScene.createNode("HAnimSite");
HAnimSite1938.name = "l_carpal_distal_phalanx_5";
HAnimSite1938.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite1938.translation = new X3D.SFVec3f([0.172,0.58,-0.039]);
let TouchSensor1939 = browser.currentScene.createNode("TouchSensor");
TouchSensor1939.description = "HAnimSite 105 hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite1938YYY.children = new X3D.MFNode();

HAnimSite1938ZZZ.children[0] = TouchSensor1939;

let Shape1940 = browser.currentScene.createNode("Shape");
let Appearance1941 = browser.currentScene.createNode("Appearance");
let Material1942 = browser.currentScene.createNode("Material");
Material1942.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1942;

appearance = Appearance1941;

let IndexedFaceSet1943 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1943.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1943.creaseAngle = 0.5;
IndexedFaceSet1943.solid = False;
let ColorRGBA1944 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1944.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1944;

let Coordinate1945 = browser.currentScene.createNode("Coordinate");
Coordinate1945.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1945;

geometry = IndexedFaceSet1943;

HAnimSite1938ZZZ.children[1] = Shape1940;

let Billboard1946 = browser.currentScene.createNode("Billboard");
Billboard1946.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1947 = browser.currentScene.createNode("Shape");
let Text1948 = browser.currentScene.createNode("Text");
Text1948.string = new X3D.MFString([new X3D.SFString("105")]);
let FontStyle1949 = browser.currentScene.createNode("FontStyle");
FontStyle1949.size = 0.035;
fontStyle = FontStyle1949;

geometry = Text1948;

Billboard1946YYY.children = new X3D.MFNode();

Billboard1946ZZZ.children[0] = Shape1947;

HAnimSite1938ZZZ.children[2] = Billboard1946;

HAnimSegment1937YYY.children = new X3D.MFNode();

HAnimSegment1937ZZZ.children[0] = HAnimSite1938;

let Shape1950 = browser.currentScene.createNode("Shape");
let LineSet1951 = browser.currentScene.createNode("LineSet");
LineSet1951.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1952 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1952.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1952;

let Coordinate1953 = browser.currentScene.createNode("Coordinate");
Coordinate1953.point = new X3D.MFVec3f([0.1808,0.6023,-0.0369,0.18166,0.621,-0.03715]);
coord = Coordinate1953;

geometry = LineSet1951;

HAnimSegment1937ZZZ.children[1] = Shape1950;

HAnimJoint1936YYY.children = new X3D.MFNode();

HAnimJoint1936ZZZ.children[0] = HAnimSegment1937;

HAnimJoint1930ZZZ.children[1] = HAnimJoint1936;

HAnimJoint1924ZZZ.children[1] = HAnimJoint1930;

HAnimJoint1906ZZZ.children[1] = HAnimJoint1924;

HAnimJoint1690ZZZ.children[5] = HAnimJoint1906;

HAnimJoint1660ZZZ.children[1] = HAnimJoint1690;

HAnimJoint1606ZZZ.children[1] = HAnimJoint1660;

HAnimJoint1552ZZZ.children[1] = HAnimJoint1606;

HAnimJoint1534ZZZ.children[1] = HAnimJoint1552;

HAnimJoint1126ZZZ.children[2] = HAnimJoint1534;

let HAnimJoint1954 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1954.name = "r_sternoclavicular";
HAnimJoint1954.DEF = "hanim_r_sternoclavicular";
HAnimJoint1954.center = new X3D.SFVec3f([-0.03847,1.2087,-0.0138]);
HAnimJoint1954.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1954.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1955 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1955.name = "r_clavicle";
HAnimSegment1955.DEF = "hanim_r_clavicle";
let HAnimSite1956 = browser.currentScene.createNode("HAnimSite");
HAnimSite1956.name = "r_clavicale";
HAnimSite1956.DEF = "hanim_r_clavicale_pt";
HAnimSite1956.translation = new X3D.SFVec3f([-0.03,1.2,0.04]);
let TouchSensor1957 = browser.currentScene.createNode("TouchSensor");
TouchSensor1957.description = "HAnimSite r_clavicale hanim_r_clavicale_pt";
HAnimSite1956YYY.children = new X3D.MFNode();

HAnimSite1956ZZZ.children[0] = TouchSensor1957;

let Shape1958 = browser.currentScene.createNode("Shape");
let Appearance1959 = browser.currentScene.createNode("Appearance");
let Material1960 = browser.currentScene.createNode("Material");
Material1960.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1960;

appearance = Appearance1959;

let IndexedFaceSet1961 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1961.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1961.creaseAngle = 0.5;
IndexedFaceSet1961.solid = False;
let ColorRGBA1962 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1962.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1962;

let Coordinate1963 = browser.currentScene.createNode("Coordinate");
Coordinate1963.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1963;

geometry = IndexedFaceSet1961;

HAnimSite1956ZZZ.children[1] = Shape1958;

let Billboard1964 = browser.currentScene.createNode("Billboard");
Billboard1964.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1965 = browser.currentScene.createNode("Shape");
let Text1966 = browser.currentScene.createNode("Text");
Text1966.string = new X3D.MFString([new X3D.SFString("r_clavicale")]);
let FontStyle1967 = browser.currentScene.createNode("FontStyle");
FontStyle1967.size = 0.035;
fontStyle = FontStyle1967;

geometry = Text1966;

Billboard1964YYY.children = new X3D.MFNode();

Billboard1964ZZZ.children[0] = Shape1965;

HAnimSite1956ZZZ.children[2] = Billboard1964;

HAnimSegment1955YYY.children = new X3D.MFNode();

HAnimSegment1955ZZZ.children[0] = HAnimSite1956;

let Shape1968 = browser.currentScene.createNode("Shape");
let LineSet1969 = browser.currentScene.createNode("LineSet");
LineSet1969.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA1970 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1970.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA1970;

let Coordinate1971 = browser.currentScene.createNode("Coordinate");
Coordinate1971.point = new X3D.MFVec3f([-0.03847,1.2087,-0.0138,0,1.22,-0.0138]);
coord = Coordinate1971;

geometry = LineSet1969;

HAnimSegment1955ZZZ.children[1] = Shape1968;

HAnimJoint1954YYY.children = new X3D.MFNode();

HAnimJoint1954ZZZ.children[0] = HAnimSegment1955;

let HAnimJoint1972 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1972.name = "r_acromioclavicular";
HAnimJoint1972.DEF = "hanim_r_acromioclavicular";
HAnimJoint1972.center = new X3D.SFVec3f([-0.1229,1.19182,-0.0129]);
HAnimJoint1972.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint1972.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment1973 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1973.name = "r_scapula";
HAnimSegment1973.DEF = "hanim_r_scapula";
let HAnimSite1974 = browser.currentScene.createNode("HAnimSite");
HAnimSite1974.name = "r_acromion";
HAnimSite1974.DEF = "hanim_r_acromion_pt";
HAnimSite1974.translation = new X3D.SFVec3f([-0.15,1.222,-0.02]);
let TouchSensor1975 = browser.currentScene.createNode("TouchSensor");
TouchSensor1975.description = "HAnimSite 20 hanim_r_acromion_pt";
HAnimSite1974YYY.children = new X3D.MFNode();

HAnimSite1974ZZZ.children[0] = TouchSensor1975;

let Shape1976 = browser.currentScene.createNode("Shape");
let Appearance1977 = browser.currentScene.createNode("Appearance");
let Material1978 = browser.currentScene.createNode("Material");
Material1978.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1978;

appearance = Appearance1977;

let IndexedFaceSet1979 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1979.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1979.creaseAngle = 0.5;
IndexedFaceSet1979.solid = False;
let ColorRGBA1980 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1980.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1980;

let Coordinate1981 = browser.currentScene.createNode("Coordinate");
Coordinate1981.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1981;

geometry = IndexedFaceSet1979;

HAnimSite1974ZZZ.children[1] = Shape1976;

let Billboard1982 = browser.currentScene.createNode("Billboard");
Billboard1982.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1983 = browser.currentScene.createNode("Shape");
let Text1984 = browser.currentScene.createNode("Text");
Text1984.string = new X3D.MFString([new X3D.SFString("20")]);
let FontStyle1985 = browser.currentScene.createNode("FontStyle");
FontStyle1985.size = 0.035;
fontStyle = FontStyle1985;

geometry = Text1984;

Billboard1982YYY.children = new X3D.MFNode();

Billboard1982ZZZ.children[0] = Shape1983;

HAnimSite1974ZZZ.children[2] = Billboard1982;

HAnimSegment1973YYY.children = new X3D.MFNode();

HAnimSegment1973ZZZ.children[0] = HAnimSite1974;

let HAnimSite1986 = browser.currentScene.createNode("HAnimSite");
HAnimSite1986.name = "r_axilla_proximal";
HAnimSite1986.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite1986.translation = new X3D.SFVec3f([-0.15,1.16,0.04]);
let TouchSensor1987 = browser.currentScene.createNode("TouchSensor");
TouchSensor1987.description = "HAnimSite 21 hanim_r_axilla_proximal_pt";
HAnimSite1986YYY.children = new X3D.MFNode();

HAnimSite1986ZZZ.children[0] = TouchSensor1987;

let Shape1988 = browser.currentScene.createNode("Shape");
let Appearance1989 = browser.currentScene.createNode("Appearance");
let Material1990 = browser.currentScene.createNode("Material");
Material1990.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material1990;

appearance = Appearance1989;

let IndexedFaceSet1991 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1991.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1991.creaseAngle = 0.5;
IndexedFaceSet1991.solid = False;
let ColorRGBA1992 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1992.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA1992;

let Coordinate1993 = browser.currentScene.createNode("Coordinate");
Coordinate1993.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate1993;

geometry = IndexedFaceSet1991;

HAnimSite1986ZZZ.children[1] = Shape1988;

let Billboard1994 = browser.currentScene.createNode("Billboard");
Billboard1994.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape1995 = browser.currentScene.createNode("Shape");
let Text1996 = browser.currentScene.createNode("Text");
Text1996.string = new X3D.MFString([new X3D.SFString("21")]);
let FontStyle1997 = browser.currentScene.createNode("FontStyle");
FontStyle1997.size = 0.035;
fontStyle = FontStyle1997;

geometry = Text1996;

Billboard1994YYY.children = new X3D.MFNode();

Billboard1994ZZZ.children[0] = Shape1995;

HAnimSite1986ZZZ.children[2] = Billboard1994;

HAnimSegment1973ZZZ.children[1] = HAnimSite1986;

let HAnimSite1998 = browser.currentScene.createNode("HAnimSite");
HAnimSite1998.name = "r_axilla_distal";
HAnimSite1998.DEF = "hanim_r_axilla_distal_pt";
HAnimSite1998.translation = new X3D.SFVec3f([-0.17,1.14,0]);
let TouchSensor1999 = browser.currentScene.createNode("TouchSensor");
TouchSensor1999.description = "HAnimSite 22 hanim_r_axilla_distal_pt";
HAnimSite1998YYY.children = new X3D.MFNode();

HAnimSite1998ZZZ.children[0] = TouchSensor1999;

let Shape2000 = browser.currentScene.createNode("Shape");
let Appearance2001 = browser.currentScene.createNode("Appearance");
let Material2002 = browser.currentScene.createNode("Material");
Material2002.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2002;

appearance = Appearance2001;

let IndexedFaceSet2003 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2003.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2003.creaseAngle = 0.5;
IndexedFaceSet2003.solid = False;
let ColorRGBA2004 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2004.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2004;

let Coordinate2005 = browser.currentScene.createNode("Coordinate");
Coordinate2005.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2005;

geometry = IndexedFaceSet2003;

HAnimSite1998ZZZ.children[1] = Shape2000;

let Billboard2006 = browser.currentScene.createNode("Billboard");
Billboard2006.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2007 = browser.currentScene.createNode("Shape");
let Text2008 = browser.currentScene.createNode("Text");
Text2008.string = new X3D.MFString([new X3D.SFString("22")]);
let FontStyle2009 = browser.currentScene.createNode("FontStyle");
FontStyle2009.size = 0.035;
fontStyle = FontStyle2009;

geometry = Text2008;

Billboard2006YYY.children = new X3D.MFNode();

Billboard2006ZZZ.children[0] = Shape2007;

HAnimSite1998ZZZ.children[2] = Billboard2006;

HAnimSegment1973ZZZ.children[2] = HAnimSite1998;

let HAnimSite2010 = browser.currentScene.createNode("HAnimSite");
HAnimSite2010.name = "r_axilla_posterior_folds";
HAnimSite2010.DEF = "hanim_r_axilla_posterior_folds_pt";
HAnimSite2010.translation = new X3D.SFVec3f([-0.15,1.145,-0.04]);
let TouchSensor2011 = browser.currentScene.createNode("TouchSensor");
TouchSensor2011.description = "HAnimSite 23 hanim_r_axilla_posterior_folds_pt";
HAnimSite2010YYY.children = new X3D.MFNode();

HAnimSite2010ZZZ.children[0] = TouchSensor2011;

let Shape2012 = browser.currentScene.createNode("Shape");
let Appearance2013 = browser.currentScene.createNode("Appearance");
let Material2014 = browser.currentScene.createNode("Material");
Material2014.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2014;

appearance = Appearance2013;

let IndexedFaceSet2015 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2015.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2015.creaseAngle = 0.5;
IndexedFaceSet2015.solid = False;
let ColorRGBA2016 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2016.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2016;

let Coordinate2017 = browser.currentScene.createNode("Coordinate");
Coordinate2017.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2017;

geometry = IndexedFaceSet2015;

HAnimSite2010ZZZ.children[1] = Shape2012;

let Billboard2018 = browser.currentScene.createNode("Billboard");
Billboard2018.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2019 = browser.currentScene.createNode("Shape");
let Text2020 = browser.currentScene.createNode("Text");
Text2020.string = new X3D.MFString([new X3D.SFString("23")]);
let FontStyle2021 = browser.currentScene.createNode("FontStyle");
FontStyle2021.size = 0.035;
fontStyle = FontStyle2021;

geometry = Text2020;

Billboard2018YYY.children = new X3D.MFNode();

Billboard2018ZZZ.children[0] = Shape2019;

HAnimSite2010ZZZ.children[2] = Billboard2018;

HAnimSegment1973ZZZ.children[3] = HAnimSite2010;

let Shape2022 = browser.currentScene.createNode("Shape");
let LineSet2023 = browser.currentScene.createNode("LineSet");
LineSet2023.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2024 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2024.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2024;

let Coordinate2025 = browser.currentScene.createNode("Coordinate");
Coordinate2025.point = new X3D.MFVec3f([-0.1229,1.19182,-0.0129,-0.03847,1.2087,-0.0138]);
coord = Coordinate2025;

geometry = LineSet2023;

HAnimSegment1973ZZZ.children[4] = Shape2022;

HAnimJoint1972YYY.children = new X3D.MFNode();

HAnimJoint1972ZZZ.children[0] = HAnimSegment1973;

let HAnimJoint2026 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2026.name = "r_shoulder";
HAnimJoint2026.DEF = "hanim_r_shoulder";
HAnimJoint2026.center = new X3D.SFVec3f([-0.1647,1.17855,-0.00327]);
HAnimJoint2026.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2026.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2027 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2027.name = "r_upperarm";
HAnimSegment2027.DEF = "hanim_r_upperarm";
let HAnimSite2028 = browser.currentScene.createNode("HAnimSite");
HAnimSite2028.name = "r_humeral_lateral_epicondyle";
HAnimSite2028.DEF = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite2028.translation = new X3D.SFVec3f([-0.2,0.95,-0.03]);
let TouchSensor2029 = browser.currentScene.createNode("TouchSensor");
TouchSensor2029.description = "HAnimSite 66 hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite2028YYY.children = new X3D.MFNode();

HAnimSite2028ZZZ.children[0] = TouchSensor2029;

let Shape2030 = browser.currentScene.createNode("Shape");
let Appearance2031 = browser.currentScene.createNode("Appearance");
let Material2032 = browser.currentScene.createNode("Material");
Material2032.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2032;

appearance = Appearance2031;

let IndexedFaceSet2033 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2033.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2033.creaseAngle = 0.5;
IndexedFaceSet2033.solid = False;
let ColorRGBA2034 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2034.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2034;

let Coordinate2035 = browser.currentScene.createNode("Coordinate");
Coordinate2035.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2035;

geometry = IndexedFaceSet2033;

HAnimSite2028ZZZ.children[1] = Shape2030;

let Billboard2036 = browser.currentScene.createNode("Billboard");
Billboard2036.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2037 = browser.currentScene.createNode("Shape");
let Text2038 = browser.currentScene.createNode("Text");
Text2038.string = new X3D.MFString([new X3D.SFString("66")]);
let FontStyle2039 = browser.currentScene.createNode("FontStyle");
FontStyle2039.size = 0.035;
fontStyle = FontStyle2039;

geometry = Text2038;

Billboard2036YYY.children = new X3D.MFNode();

Billboard2036ZZZ.children[0] = Shape2037;

HAnimSite2028ZZZ.children[2] = Billboard2036;

HAnimSegment2027YYY.children = new X3D.MFNode();

HAnimSegment2027ZZZ.children[0] = HAnimSite2028;

let HAnimSite2040 = browser.currentScene.createNode("HAnimSite");
HAnimSite2040.name = "r_humeral_medial_epicondyle";
HAnimSite2040.DEF = "hanim_r_humeral_medial_epicondyle_pt";
HAnimSite2040.translation = new X3D.SFVec3f([-0.18,0.93,-0.03]);
let TouchSensor2041 = browser.currentScene.createNode("TouchSensor");
TouchSensor2041.description = "HAnimSite 67 hanim_r_humeral_medial_epicondyle_pt";
HAnimSite2040YYY.children = new X3D.MFNode();

HAnimSite2040ZZZ.children[0] = TouchSensor2041;

let Shape2042 = browser.currentScene.createNode("Shape");
let Appearance2043 = browser.currentScene.createNode("Appearance");
let Material2044 = browser.currentScene.createNode("Material");
Material2044.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2044;

appearance = Appearance2043;

let IndexedFaceSet2045 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2045.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2045.creaseAngle = 0.5;
IndexedFaceSet2045.solid = False;
let ColorRGBA2046 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2046.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2046;

let Coordinate2047 = browser.currentScene.createNode("Coordinate");
Coordinate2047.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2047;

geometry = IndexedFaceSet2045;

HAnimSite2040ZZZ.children[1] = Shape2042;

let Billboard2048 = browser.currentScene.createNode("Billboard");
Billboard2048.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2049 = browser.currentScene.createNode("Shape");
let Text2050 = browser.currentScene.createNode("Text");
Text2050.string = new X3D.MFString([new X3D.SFString("67")]);
let FontStyle2051 = browser.currentScene.createNode("FontStyle");
FontStyle2051.size = 0.035;
fontStyle = FontStyle2051;

geometry = Text2050;

Billboard2048YYY.children = new X3D.MFNode();

Billboard2048ZZZ.children[0] = Shape2049;

HAnimSite2040ZZZ.children[2] = Billboard2048;

HAnimSegment2027ZZZ.children[1] = HAnimSite2040;

let HAnimSite2052 = browser.currentScene.createNode("HAnimSite");
HAnimSite2052.name = "r_radiale";
HAnimSite2052.DEF = "hanim_r_radiale_pt";
HAnimSite2052.translation = new X3D.SFVec3f([-0.2,0.91,-0.03]);
let TouchSensor2053 = browser.currentScene.createNode("TouchSensor");
TouchSensor2053.description = "HAnimSite 72 hanim_r_radiale_pt";
HAnimSite2052YYY.children = new X3D.MFNode();

HAnimSite2052ZZZ.children[0] = TouchSensor2053;

let Shape2054 = browser.currentScene.createNode("Shape");
let Appearance2055 = browser.currentScene.createNode("Appearance");
let Material2056 = browser.currentScene.createNode("Material");
Material2056.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2056;

appearance = Appearance2055;

let IndexedFaceSet2057 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2057.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2057.creaseAngle = 0.5;
IndexedFaceSet2057.solid = False;
let ColorRGBA2058 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2058.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2058;

let Coordinate2059 = browser.currentScene.createNode("Coordinate");
Coordinate2059.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2059;

geometry = IndexedFaceSet2057;

HAnimSite2052ZZZ.children[1] = Shape2054;

let Billboard2060 = browser.currentScene.createNode("Billboard");
Billboard2060.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2061 = browser.currentScene.createNode("Shape");
let Text2062 = browser.currentScene.createNode("Text");
Text2062.string = new X3D.MFString([new X3D.SFString("72")]);
let FontStyle2063 = browser.currentScene.createNode("FontStyle");
FontStyle2063.size = 0.035;
fontStyle = FontStyle2063;

geometry = Text2062;

Billboard2060YYY.children = new X3D.MFNode();

Billboard2060ZZZ.children[0] = Shape2061;

HAnimSite2052ZZZ.children[2] = Billboard2060;

HAnimSegment2027ZZZ.children[2] = HAnimSite2052;

let HAnimSite2064 = browser.currentScene.createNode("HAnimSite");
HAnimSite2064.name = "r_bideltoid";
HAnimSite2064.DEF = "hanim_r_bideltoid_pt";
HAnimSite2064.translation = new X3D.SFVec3f([-0.225,1.185,0]);
let TouchSensor2065 = browser.currentScene.createNode("TouchSensor");
TouchSensor2065.description = "HAnimSite 97 hanim_r_bideltoid_pt";
HAnimSite2064YYY.children = new X3D.MFNode();

HAnimSite2064ZZZ.children[0] = TouchSensor2065;

let Shape2066 = browser.currentScene.createNode("Shape");
let Appearance2067 = browser.currentScene.createNode("Appearance");
let Material2068 = browser.currentScene.createNode("Material");
Material2068.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2068;

appearance = Appearance2067;

let IndexedFaceSet2069 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2069.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2069.creaseAngle = 0.5;
IndexedFaceSet2069.solid = False;
let ColorRGBA2070 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2070.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2070;

let Coordinate2071 = browser.currentScene.createNode("Coordinate");
Coordinate2071.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2071;

geometry = IndexedFaceSet2069;

HAnimSite2064ZZZ.children[1] = Shape2066;

let Billboard2072 = browser.currentScene.createNode("Billboard");
Billboard2072.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2073 = browser.currentScene.createNode("Shape");
let Text2074 = browser.currentScene.createNode("Text");
Text2074.string = new X3D.MFString([new X3D.SFString("97")]);
let FontStyle2075 = browser.currentScene.createNode("FontStyle");
FontStyle2075.size = 0.035;
fontStyle = FontStyle2075;

geometry = Text2074;

Billboard2072YYY.children = new X3D.MFNode();

Billboard2072ZZZ.children[0] = Shape2073;

HAnimSite2064ZZZ.children[2] = Billboard2072;

HAnimSegment2027ZZZ.children[3] = HAnimSite2064;

let Shape2076 = browser.currentScene.createNode("Shape");
let LineSet2077 = browser.currentScene.createNode("LineSet");
LineSet2077.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2078 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2078.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2078;

let Coordinate2079 = browser.currentScene.createNode("Coordinate");
Coordinate2079.point = new X3D.MFVec3f([-0.1647,1.17855,-0.00327,-0.1229,1.19182,-0.0129]);
coord = Coordinate2079;

geometry = LineSet2077;

HAnimSegment2027ZZZ.children[4] = Shape2076;

HAnimJoint2026YYY.children = new X3D.MFNode();

HAnimJoint2026ZZZ.children[0] = HAnimSegment2027;

let HAnimJoint2080 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2080.name = "r_elbow";
HAnimJoint2080.DEF = "hanim_r_elbow";
HAnimJoint2080.center = new X3D.SFVec3f([-0.1817,0.9288,-0.00564]);
HAnimJoint2080.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2080.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2081 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2081.name = "r_forearm";
HAnimSegment2081.DEF = "hanim_r_forearm";
let HAnimSite2082 = browser.currentScene.createNode("HAnimSite");
HAnimSite2082.name = "r_radial_styloid";
HAnimSite2082.DEF = "hanim_r_radial_styloid_pt";
HAnimSite2082.translation = new X3D.SFVec3f([-0.18,0.725,0.025]);
let TouchSensor2083 = browser.currentScene.createNode("TouchSensor");
TouchSensor2083.description = "HAnimSite 74 hanim_r_radial_styloid_pt";
HAnimSite2082YYY.children = new X3D.MFNode();

HAnimSite2082ZZZ.children[0] = TouchSensor2083;

let Shape2084 = browser.currentScene.createNode("Shape");
let Appearance2085 = browser.currentScene.createNode("Appearance");
let Material2086 = browser.currentScene.createNode("Material");
Material2086.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2086;

appearance = Appearance2085;

let IndexedFaceSet2087 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2087.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2087.creaseAngle = 0.5;
IndexedFaceSet2087.solid = False;
let ColorRGBA2088 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2088.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2088;

let Coordinate2089 = browser.currentScene.createNode("Coordinate");
Coordinate2089.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2089;

geometry = IndexedFaceSet2087;

HAnimSite2082ZZZ.children[1] = Shape2084;

let Billboard2090 = browser.currentScene.createNode("Billboard");
Billboard2090.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2091 = browser.currentScene.createNode("Shape");
let Text2092 = browser.currentScene.createNode("Text");
Text2092.string = new X3D.MFString([new X3D.SFString("74")]);
let FontStyle2093 = browser.currentScene.createNode("FontStyle");
FontStyle2093.size = 0.035;
fontStyle = FontStyle2093;

geometry = Text2092;

Billboard2090YYY.children = new X3D.MFNode();

Billboard2090ZZZ.children[0] = Shape2091;

HAnimSite2082ZZZ.children[2] = Billboard2090;

HAnimSegment2081YYY.children = new X3D.MFNode();

HAnimSegment2081ZZZ.children[0] = HAnimSite2082;

let HAnimSite2094 = browser.currentScene.createNode("HAnimSite");
HAnimSite2094.name = "r_olecranon";
HAnimSite2094.DEF = "hanim_r_olecranon_pt";
HAnimSite2094.translation = new X3D.SFVec3f([-0.2,0.92,-0.03]);
let TouchSensor2095 = browser.currentScene.createNode("TouchSensor");
TouchSensor2095.description = "HAnimSite 68 hanim_r_olecranon_pt";
HAnimSite2094YYY.children = new X3D.MFNode();

HAnimSite2094ZZZ.children[0] = TouchSensor2095;

let Shape2096 = browser.currentScene.createNode("Shape");
let Appearance2097 = browser.currentScene.createNode("Appearance");
let Material2098 = browser.currentScene.createNode("Material");
Material2098.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2098;

appearance = Appearance2097;

let IndexedFaceSet2099 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2099.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2099.creaseAngle = 0.5;
IndexedFaceSet2099.solid = False;
let ColorRGBA2100 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2100.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2100;

let Coordinate2101 = browser.currentScene.createNode("Coordinate");
Coordinate2101.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2101;

geometry = IndexedFaceSet2099;

HAnimSite2094ZZZ.children[1] = Shape2096;

let Billboard2102 = browser.currentScene.createNode("Billboard");
Billboard2102.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2103 = browser.currentScene.createNode("Shape");
let Text2104 = browser.currentScene.createNode("Text");
Text2104.string = new X3D.MFString([new X3D.SFString("68")]);
let FontStyle2105 = browser.currentScene.createNode("FontStyle");
FontStyle2105.size = 0.035;
fontStyle = FontStyle2105;

geometry = Text2104;

Billboard2102YYY.children = new X3D.MFNode();

Billboard2102ZZZ.children[0] = Shape2103;

HAnimSite2094ZZZ.children[2] = Billboard2102;

HAnimSegment2081ZZZ.children[1] = HAnimSite2094;

let Shape2106 = browser.currentScene.createNode("Shape");
let LineSet2107 = browser.currentScene.createNode("LineSet");
LineSet2107.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2108 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2108.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2108;

let Coordinate2109 = browser.currentScene.createNode("Coordinate");
Coordinate2109.point = new X3D.MFVec3f([-0.1817,0.9288,-0.00564,-0.1647,1.17855,-0.00327]);
coord = Coordinate2109;

geometry = LineSet2107;

HAnimSegment2081ZZZ.children[2] = Shape2106;

HAnimJoint2080YYY.children = new X3D.MFNode();

HAnimJoint2080ZZZ.children[0] = HAnimSegment2081;

let HAnimJoint2110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2110.name = "r_radiocarpal";
HAnimJoint2110.DEF = "hanim_r_radiocarpal";
HAnimJoint2110.center = new X3D.SFVec3f([-0.1816,0.7242,-0.005]);
HAnimJoint2110.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2110.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2111 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2111.name = "r_carpal";
HAnimSegment2111.DEF = "hanim_r_carpal";
let HAnimSite2112 = browser.currentScene.createNode("HAnimSite");
HAnimSite2112.name = "r_ulnar_styloid";
HAnimSite2112.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite2112.translation = new X3D.SFVec3f([-0.2,0.725,0]);
let TouchSensor2113 = browser.currentScene.createNode("TouchSensor");
TouchSensor2113.description = "HAnimSite 73 hanim_r_ulnar_styloid_pt";
HAnimSite2112YYY.children = new X3D.MFNode();

HAnimSite2112ZZZ.children[0] = TouchSensor2113;

let Shape2114 = browser.currentScene.createNode("Shape");
let Appearance2115 = browser.currentScene.createNode("Appearance");
let Material2116 = browser.currentScene.createNode("Material");
Material2116.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2116;

appearance = Appearance2115;

let IndexedFaceSet2117 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2117.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2117.creaseAngle = 0.5;
IndexedFaceSet2117.solid = False;
let ColorRGBA2118 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2118.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2118;

let Coordinate2119 = browser.currentScene.createNode("Coordinate");
Coordinate2119.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2119;

geometry = IndexedFaceSet2117;

HAnimSite2112ZZZ.children[1] = Shape2114;

let Billboard2120 = browser.currentScene.createNode("Billboard");
Billboard2120.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2121 = browser.currentScene.createNode("Shape");
let Text2122 = browser.currentScene.createNode("Text");
Text2122.string = new X3D.MFString([new X3D.SFString("73")]);
let FontStyle2123 = browser.currentScene.createNode("FontStyle");
FontStyle2123.size = 0.035;
fontStyle = FontStyle2123;

geometry = Text2122;

Billboard2120YYY.children = new X3D.MFNode();

Billboard2120ZZZ.children[0] = Shape2121;

HAnimSite2112ZZZ.children[2] = Billboard2120;

HAnimSegment2111YYY.children = new X3D.MFNode();

HAnimSegment2111ZZZ.children[0] = HAnimSite2112;

let Shape2124 = browser.currentScene.createNode("Shape");
let LineSet2125 = browser.currentScene.createNode("LineSet");
LineSet2125.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2126 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2126.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2126;

let Coordinate2127 = browser.currentScene.createNode("Coordinate");
Coordinate2127.point = new X3D.MFVec3f([-0.1816,0.7242,-0.005,-0.1817,0.9288,-0.00564]);
coord = Coordinate2127;

geometry = LineSet2125;

HAnimSegment2111ZZZ.children[1] = Shape2124;

HAnimJoint2110YYY.children = new X3D.MFNode();

HAnimJoint2110ZZZ.children[0] = HAnimSegment2111;

let HAnimJoint2128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2128.name = "r_midcarpal_1";
HAnimJoint2128.DEF = "hanim_r_midcarpal_1";
HAnimJoint2128.center = new X3D.SFVec3f([-0.18097,0.70605,0.0193]);
HAnimJoint2128.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2128.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2129 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2129.name = "r_trapezium";
HAnimSegment2129.DEF = "hanim_r_trapezium";
let Shape2130 = browser.currentScene.createNode("Shape");
let LineSet2131 = browser.currentScene.createNode("LineSet");
LineSet2131.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2132 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2132.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2132;

let Coordinate2133 = browser.currentScene.createNode("Coordinate");
Coordinate2133.point = new X3D.MFVec3f([-0.18097,0.70605,0.0193,-0.1816,0.7242,-0.005]);
coord = Coordinate2133;

geometry = LineSet2131;

HAnimSegment2129YYY.children = new X3D.MFNode();

HAnimSegment2129ZZZ.children[0] = Shape2130;

HAnimJoint2128YYY.children = new X3D.MFNode();

HAnimJoint2128ZZZ.children[0] = HAnimSegment2129;

let HAnimJoint2134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2134.name = "r_carpometacarpal_1";
HAnimJoint2134.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint2134.center = new X3D.SFVec3f([-0.18,0.69255,0.02598]);
HAnimJoint2134.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2134.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2135.name = "r_metacarpal_1";
HAnimSegment2135.DEF = "hanim_r_metacarpal_1";
let HAnimSite2136 = browser.currentScene.createNode("HAnimSite");
HAnimSite2136.name = "r_metacarpal_phalanx_2";
HAnimSite2136.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite2136.translation = new X3D.SFVec3f([-0.2,0.665,0.012]);
let TouchSensor2137 = browser.currentScene.createNode("TouchSensor");
TouchSensor2137.description = "HAnimSite 78 hanim_r_metacarpal_phalanx_2_pt";
HAnimSite2136YYY.children = new X3D.MFNode();

HAnimSite2136ZZZ.children[0] = TouchSensor2137;

let Shape2138 = browser.currentScene.createNode("Shape");
let Appearance2139 = browser.currentScene.createNode("Appearance");
let Material2140 = browser.currentScene.createNode("Material");
Material2140.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2140;

appearance = Appearance2139;

let IndexedFaceSet2141 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2141.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2141.creaseAngle = 0.5;
IndexedFaceSet2141.solid = False;
let ColorRGBA2142 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2142.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2142;

let Coordinate2143 = browser.currentScene.createNode("Coordinate");
Coordinate2143.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2143;

geometry = IndexedFaceSet2141;

HAnimSite2136ZZZ.children[1] = Shape2138;

let Billboard2144 = browser.currentScene.createNode("Billboard");
Billboard2144.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2145 = browser.currentScene.createNode("Shape");
let Text2146 = browser.currentScene.createNode("Text");
Text2146.string = new X3D.MFString([new X3D.SFString("78")]);
let FontStyle2147 = browser.currentScene.createNode("FontStyle");
FontStyle2147.size = 0.035;
fontStyle = FontStyle2147;

geometry = Text2146;

Billboard2144YYY.children = new X3D.MFNode();

Billboard2144ZZZ.children[0] = Shape2145;

HAnimSite2136ZZZ.children[2] = Billboard2144;

HAnimSegment2135YYY.children = new X3D.MFNode();

HAnimSegment2135ZZZ.children[0] = HAnimSite2136;

let Shape2148 = browser.currentScene.createNode("Shape");
let LineSet2149 = browser.currentScene.createNode("LineSet");
LineSet2149.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2150 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2150.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2150;

let Coordinate2151 = browser.currentScene.createNode("Coordinate");
Coordinate2151.point = new X3D.MFVec3f([-0.18,0.69255,0.02598,-0.18097,0.70605,0.0193]);
coord = Coordinate2151;

geometry = LineSet2149;

HAnimSegment2135ZZZ.children[1] = Shape2148;

HAnimJoint2134YYY.children = new X3D.MFNode();

HAnimJoint2134ZZZ.children[0] = HAnimSegment2135;

let HAnimJoint2152 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2152.name = "r_metacarpophalangeal_1";
HAnimJoint2152.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint2152.center = new X3D.SFVec3f([-0.18065,0.67275,0.03577]);
HAnimJoint2152.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2152.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2153 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2153.name = "r_carpal_proximal_phalanx_1";
HAnimSegment2153.DEF = "hanim_r_carpal_proximal_phalanx_1";
let Shape2154 = browser.currentScene.createNode("Shape");
let LineSet2155 = browser.currentScene.createNode("LineSet");
LineSet2155.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2156 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2156.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2156;

let Coordinate2157 = browser.currentScene.createNode("Coordinate");
Coordinate2157.point = new X3D.MFVec3f([-0.18065,0.67275,0.03577,-0.18,0.69255,0.02598]);
coord = Coordinate2157;

geometry = LineSet2155;

HAnimSegment2153YYY.children = new X3D.MFNode();

HAnimSegment2153ZZZ.children[0] = Shape2154;

HAnimJoint2152YYY.children = new X3D.MFNode();

HAnimJoint2152ZZZ.children[0] = HAnimSegment2153;

let HAnimJoint2158 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2158.name = "r_carpal_interphalangeal_1";
HAnimJoint2158.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint2158.center = new X3D.SFVec3f([-0.18227,0.654,0.0496]);
HAnimJoint2158.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2158.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2159 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2159.name = "r_carpal_distal_phalanx_1";
HAnimSegment2159.DEF = "hanim_r_carpal_distal_phalanx_1";
let HAnimSite2160 = browser.currentScene.createNode("HAnimSite");
HAnimSite2160.name = "r_carpal_distal_phalanx_1";
HAnimSite2160.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite2160.translation = new X3D.SFVec3f([-0.18,0.64,0.06]);
let TouchSensor2161 = browser.currentScene.createNode("TouchSensor");
TouchSensor2161.description = "HAnimSite 106 hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite2160YYY.children = new X3D.MFNode();

HAnimSite2160ZZZ.children[0] = TouchSensor2161;

let Shape2162 = browser.currentScene.createNode("Shape");
let Appearance2163 = browser.currentScene.createNode("Appearance");
let Material2164 = browser.currentScene.createNode("Material");
Material2164.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2164;

appearance = Appearance2163;

let IndexedFaceSet2165 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2165.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2165.creaseAngle = 0.5;
IndexedFaceSet2165.solid = False;
let ColorRGBA2166 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2166.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2166;

let Coordinate2167 = browser.currentScene.createNode("Coordinate");
Coordinate2167.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2167;

geometry = IndexedFaceSet2165;

HAnimSite2160ZZZ.children[1] = Shape2162;

let Billboard2168 = browser.currentScene.createNode("Billboard");
Billboard2168.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2169 = browser.currentScene.createNode("Shape");
let Text2170 = browser.currentScene.createNode("Text");
Text2170.string = new X3D.MFString([new X3D.SFString("106")]);
let FontStyle2171 = browser.currentScene.createNode("FontStyle");
FontStyle2171.size = 0.035;
fontStyle = FontStyle2171;

geometry = Text2170;

Billboard2168YYY.children = new X3D.MFNode();

Billboard2168ZZZ.children[0] = Shape2169;

HAnimSite2160ZZZ.children[2] = Billboard2168;

HAnimSegment2159YYY.children = new X3D.MFNode();

HAnimSegment2159ZZZ.children[0] = HAnimSite2160;

let Shape2172 = browser.currentScene.createNode("Shape");
let LineSet2173 = browser.currentScene.createNode("LineSet");
LineSet2173.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2174 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2174.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2174;

let Coordinate2175 = browser.currentScene.createNode("Coordinate");
Coordinate2175.point = new X3D.MFVec3f([-0.18227,0.654,0.0496,-0.18065,0.67275,0.03577]);
coord = Coordinate2175;

geometry = LineSet2173;

HAnimSegment2159ZZZ.children[1] = Shape2172;

HAnimJoint2158YYY.children = new X3D.MFNode();

HAnimJoint2158ZZZ.children[0] = HAnimSegment2159;

HAnimJoint2152ZZZ.children[1] = HAnimJoint2158;

HAnimJoint2134ZZZ.children[1] = HAnimJoint2152;

HAnimJoint2128ZZZ.children[1] = HAnimJoint2134;

HAnimJoint2110ZZZ.children[1] = HAnimJoint2128;

let HAnimJoint2176 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2176.name = "r_midcarpal_2";
HAnimJoint2176.DEF = "hanim_r_midcarpal_2";
HAnimJoint2176.center = new X3D.SFVec3f([-0.18097,0.70695,0.0084]);
HAnimJoint2176.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2176.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2177 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2177.name = "r_trapezoid";
HAnimSegment2177.DEF = "hanim_r_trapezoid";
let Shape2178 = browser.currentScene.createNode("Shape");
let LineSet2179 = browser.currentScene.createNode("LineSet");
LineSet2179.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2180 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2180.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2180;

let Coordinate2181 = browser.currentScene.createNode("Coordinate");
Coordinate2181.point = new X3D.MFVec3f([-0.18097,0.70695,0.0084,-0.1816,0.7242,-0.005]);
coord = Coordinate2181;

geometry = LineSet2179;

HAnimSegment2177YYY.children = new X3D.MFNode();

HAnimSegment2177ZZZ.children[0] = Shape2178;

HAnimJoint2176YYY.children = new X3D.MFNode();

HAnimJoint2176ZZZ.children[0] = HAnimSegment2177;

let HAnimJoint2182 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2182.name = "r_carpometacarpal_2";
HAnimJoint2182.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint2182.center = new X3D.SFVec3f([-0.1809,0.6876,0.0097]);
HAnimJoint2182.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2182.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2183 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2183.name = "r_metacarpal_2";
HAnimSegment2183.DEF = "hanim_r_metacarpal_2";
let Shape2184 = browser.currentScene.createNode("Shape");
let LineSet2185 = browser.currentScene.createNode("LineSet");
LineSet2185.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2186 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2186.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2186;

let Coordinate2187 = browser.currentScene.createNode("Coordinate");
Coordinate2187.point = new X3D.MFVec3f([-0.1809,0.6876,0.0097,-0.18097,0.70695,0.0084]);
coord = Coordinate2187;

geometry = LineSet2185;

HAnimSegment2183YYY.children = new X3D.MFNode();

HAnimSegment2183ZZZ.children[0] = Shape2184;

HAnimJoint2182YYY.children = new X3D.MFNode();

HAnimJoint2182ZZZ.children[0] = HAnimSegment2183;

let HAnimJoint2188 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2188.name = "r_metacarpophalangeal_2";
HAnimJoint2188.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint2188.center = new X3D.SFVec3f([-0.18335,0.6372,0.01507]);
HAnimJoint2188.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2188.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2189 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2189.name = "r_carpal_proximal_phalanx_2";
HAnimSegment2189.DEF = "hanim_r_carpal_proximal_phalanx_2";
let Shape2190 = browser.currentScene.createNode("Shape");
let LineSet2191 = browser.currentScene.createNode("LineSet");
LineSet2191.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2192 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2192.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2192;

let Coordinate2193 = browser.currentScene.createNode("Coordinate");
Coordinate2193.point = new X3D.MFVec3f([-0.18335,0.6372,0.01507,-0.1809,0.6876,0.0097]);
coord = Coordinate2193;

geometry = LineSet2191;

HAnimSegment2189YYY.children = new X3D.MFNode();

HAnimSegment2189ZZZ.children[0] = Shape2190;

HAnimJoint2188YYY.children = new X3D.MFNode();

HAnimJoint2188ZZZ.children[0] = HAnimSegment2189;

let HAnimJoint2194 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2194.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint2194.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint2194.center = new X3D.SFVec3f([-0.1813,0.6068,0.01418]);
HAnimJoint2194.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2194.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2195 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2195.name = "r_carpal_middle_phalanx_2";
HAnimSegment2195.DEF = "hanim_r_carpal_middle_phalanx_2";
let Shape2196 = browser.currentScene.createNode("Shape");
let LineSet2197 = browser.currentScene.createNode("LineSet");
LineSet2197.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2198 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2198.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2198;

let Coordinate2199 = browser.currentScene.createNode("Coordinate");
Coordinate2199.point = new X3D.MFVec3f([-0.1813,0.6068,0.01418,-0.18335,0.6372,0.01507]);
coord = Coordinate2199;

geometry = LineSet2197;

HAnimSegment2195YYY.children = new X3D.MFNode();

HAnimSegment2195ZZZ.children[0] = Shape2196;

HAnimJoint2194YYY.children = new X3D.MFNode();

HAnimJoint2194ZZZ.children[0] = HAnimSegment2195;

let HAnimJoint2200 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2200.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint2200.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint2200.center = new X3D.SFVec3f([-0.1803,0.5816,0.01338]);
HAnimJoint2200.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2200.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2201 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2201.name = "r_carpal_distal_phalanx_2";
HAnimSegment2201.DEF = "hanim_r_carpal_distal_phalanx_2";
let HAnimSite2202 = browser.currentScene.createNode("HAnimSite");
HAnimSite2202.name = "r_dactylion";
HAnimSite2202.DEF = "hanim_r_dactylion_pt";
HAnimSite2202.translation = new X3D.SFVec3f([-0.17,0.558,0.017]);
let TouchSensor2203 = browser.currentScene.createNode("TouchSensor");
TouchSensor2203.description = "HAnimSite 61 hanim_r_dactylion_pt";
HAnimSite2202YYY.children = new X3D.MFNode();

HAnimSite2202ZZZ.children[0] = TouchSensor2203;

let Shape2204 = browser.currentScene.createNode("Shape");
let Appearance2205 = browser.currentScene.createNode("Appearance");
let Material2206 = browser.currentScene.createNode("Material");
Material2206.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2206;

appearance = Appearance2205;

let IndexedFaceSet2207 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2207.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2207.creaseAngle = 0.5;
IndexedFaceSet2207.solid = False;
let ColorRGBA2208 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2208.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2208;

let Coordinate2209 = browser.currentScene.createNode("Coordinate");
Coordinate2209.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2209;

geometry = IndexedFaceSet2207;

HAnimSite2202ZZZ.children[1] = Shape2204;

let Billboard2210 = browser.currentScene.createNode("Billboard");
Billboard2210.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2211 = browser.currentScene.createNode("Shape");
let Text2212 = browser.currentScene.createNode("Text");
Text2212.string = new X3D.MFString([new X3D.SFString("61")]);
let FontStyle2213 = browser.currentScene.createNode("FontStyle");
FontStyle2213.size = 0.035;
fontStyle = FontStyle2213;

geometry = Text2212;

Billboard2210YYY.children = new X3D.MFNode();

Billboard2210ZZZ.children[0] = Shape2211;

HAnimSite2202ZZZ.children[2] = Billboard2210;

HAnimSegment2201YYY.children = new X3D.MFNode();

HAnimSegment2201ZZZ.children[0] = HAnimSite2202;

let HAnimSite2214 = browser.currentScene.createNode("HAnimSite");
HAnimSite2214.name = "r_carpal_distal_phalanx_2";
HAnimSite2214.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite2214.translation = new X3D.SFVec3f([-0.172,0.558,0.017]);
let TouchSensor2215 = browser.currentScene.createNode("TouchSensor");
TouchSensor2215.description = "HAnimSite 107 hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite2214YYY.children = new X3D.MFNode();

HAnimSite2214ZZZ.children[0] = TouchSensor2215;

let Shape2216 = browser.currentScene.createNode("Shape");
let Appearance2217 = browser.currentScene.createNode("Appearance");
let Material2218 = browser.currentScene.createNode("Material");
Material2218.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2218;

appearance = Appearance2217;

let IndexedFaceSet2219 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2219.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2219.creaseAngle = 0.5;
IndexedFaceSet2219.solid = False;
let ColorRGBA2220 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2220.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2220;

let Coordinate2221 = browser.currentScene.createNode("Coordinate");
Coordinate2221.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2221;

geometry = IndexedFaceSet2219;

HAnimSite2214ZZZ.children[1] = Shape2216;

let Billboard2222 = browser.currentScene.createNode("Billboard");
Billboard2222.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2223 = browser.currentScene.createNode("Shape");
let Text2224 = browser.currentScene.createNode("Text");
Text2224.string = new X3D.MFString([new X3D.SFString("107")]);
let FontStyle2225 = browser.currentScene.createNode("FontStyle");
FontStyle2225.size = 0.035;
fontStyle = FontStyle2225;

geometry = Text2224;

Billboard2222YYY.children = new X3D.MFNode();

Billboard2222ZZZ.children[0] = Shape2223;

HAnimSite2214ZZZ.children[2] = Billboard2222;

HAnimSegment2201ZZZ.children[1] = HAnimSite2214;

let Shape2226 = browser.currentScene.createNode("Shape");
let LineSet2227 = browser.currentScene.createNode("LineSet");
LineSet2227.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2228 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2228.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2228;

let Coordinate2229 = browser.currentScene.createNode("Coordinate");
Coordinate2229.point = new X3D.MFVec3f([-0.1803,0.5816,0.01338,-0.1813,0.6068,0.01418]);
coord = Coordinate2229;

geometry = LineSet2227;

HAnimSegment2201ZZZ.children[2] = Shape2226;

HAnimJoint2200YYY.children = new X3D.MFNode();

HAnimJoint2200ZZZ.children[0] = HAnimSegment2201;

HAnimJoint2194ZZZ.children[1] = HAnimJoint2200;

HAnimJoint2188ZZZ.children[1] = HAnimJoint2194;

HAnimJoint2182ZZZ.children[1] = HAnimJoint2188;

HAnimJoint2176ZZZ.children[1] = HAnimJoint2182;

HAnimJoint2110ZZZ.children[2] = HAnimJoint2176;

let HAnimJoint2230 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2230.name = "r_midcarpal_3";
HAnimJoint2230.DEF = "hanim_r_midcarpal_3";
HAnimJoint2230.center = new X3D.SFVec3f([-0.18072,0.708525,-0.004797]);
HAnimJoint2230.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2230.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2231 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2231.name = "r_capitate";
HAnimSegment2231.DEF = "hanim_r_capitate";
let Shape2232 = browser.currentScene.createNode("Shape");
let LineSet2233 = browser.currentScene.createNode("LineSet");
LineSet2233.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2234 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2234.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2234;

let Coordinate2235 = browser.currentScene.createNode("Coordinate");
Coordinate2235.point = new X3D.MFVec3f([-0.18072,0.708525,-0.004797,-0.1816,0.7242,-0.005]);
coord = Coordinate2235;

geometry = LineSet2233;

HAnimSegment2231YYY.children = new X3D.MFNode();

HAnimSegment2231ZZZ.children[0] = Shape2232;

HAnimJoint2230YYY.children = new X3D.MFNode();

HAnimJoint2230ZZZ.children[0] = HAnimSegment2231;

let HAnimJoint2236 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2236.name = "r_carpometacarpal_3";
HAnimJoint2236.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint2236.center = new X3D.SFVec3f([-0.18072,0.6858,-0.00625]);
HAnimJoint2236.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2236.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2237 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2237.name = "r_metacarpal_3";
HAnimSegment2237.DEF = "hanim_r_metacarpal_3";
let HAnimSite2238 = browser.currentScene.createNode("HAnimSite");
HAnimSite2238.name = "r_metacarpal_phalanx_3";
HAnimSite2238.DEF = "hanim_r_metacarpal_phalanx_3_pt";
HAnimSite2238.translation = new X3D.SFVec3f([-0.2,0.665,0.016]);
let TouchSensor2239 = browser.currentScene.createNode("TouchSensor");
TouchSensor2239.description = "HAnimSite 79 hanim_r_metacarpal_phalanx_3_pt";
HAnimSite2238YYY.children = new X3D.MFNode();

HAnimSite2238ZZZ.children[0] = TouchSensor2239;

let Shape2240 = browser.currentScene.createNode("Shape");
let Appearance2241 = browser.currentScene.createNode("Appearance");
let Material2242 = browser.currentScene.createNode("Material");
Material2242.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2242;

appearance = Appearance2241;

let IndexedFaceSet2243 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2243.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2243.creaseAngle = 0.5;
IndexedFaceSet2243.solid = False;
let ColorRGBA2244 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2244.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2244;

let Coordinate2245 = browser.currentScene.createNode("Coordinate");
Coordinate2245.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2245;

geometry = IndexedFaceSet2243;

HAnimSite2238ZZZ.children[1] = Shape2240;

let Billboard2246 = browser.currentScene.createNode("Billboard");
Billboard2246.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2247 = browser.currentScene.createNode("Shape");
let Text2248 = browser.currentScene.createNode("Text");
Text2248.string = new X3D.MFString([new X3D.SFString("79")]);
let FontStyle2249 = browser.currentScene.createNode("FontStyle");
FontStyle2249.size = 0.035;
fontStyle = FontStyle2249;

geometry = Text2248;

Billboard2246YYY.children = new X3D.MFNode();

Billboard2246ZZZ.children[0] = Shape2247;

HAnimSite2238ZZZ.children[2] = Billboard2246;

HAnimSegment2237YYY.children = new X3D.MFNode();

HAnimSegment2237ZZZ.children[0] = HAnimSite2238;

let Shape2250 = browser.currentScene.createNode("Shape");
let LineSet2251 = browser.currentScene.createNode("LineSet");
LineSet2251.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2252 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2252.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2252;

let Coordinate2253 = browser.currentScene.createNode("Coordinate");
Coordinate2253.point = new X3D.MFVec3f([-0.18072,0.6858,-0.00625,-0.18072,0.708525,-0.004797]);
coord = Coordinate2253;

geometry = LineSet2251;

HAnimSegment2237ZZZ.children[1] = Shape2250;

HAnimJoint2236YYY.children = new X3D.MFNode();

HAnimJoint2236ZZZ.children[0] = HAnimSegment2237;

let HAnimJoint2254 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2254.name = "r_metacarpophalangeal_3";
HAnimJoint2254.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint2254.center = new X3D.SFVec3f([-0.1833,0.63495,-0.0039]);
HAnimJoint2254.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2254.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2255 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2255.name = "r_carpal_proximal_phalanx_3";
HAnimSegment2255.DEF = "hanim_r_carpal_proximal_phalanx_3";
let Shape2256 = browser.currentScene.createNode("Shape");
let LineSet2257 = browser.currentScene.createNode("LineSet");
LineSet2257.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2258 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2258.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2258;

let Coordinate2259 = browser.currentScene.createNode("Coordinate");
Coordinate2259.point = new X3D.MFVec3f([-0.1833,0.63495,-0.0039,-0.18072,0.6858,-0.00625]);
coord = Coordinate2259;

geometry = LineSet2257;

HAnimSegment2255YYY.children = new X3D.MFNode();

HAnimSegment2255ZZZ.children[0] = Shape2256;

HAnimJoint2254YYY.children = new X3D.MFNode();

HAnimJoint2254ZZZ.children[0] = HAnimSegment2255;

let HAnimJoint2260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2260.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint2260.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint2260.center = new X3D.SFVec3f([-0.1813,0.6032,-0.0035]);
HAnimJoint2260.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2260.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2261 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2261.name = "r_carpal_middle_phalanx_3";
HAnimSegment2261.DEF = "hanim_r_carpal_middle_phalanx_3";
let Shape2262 = browser.currentScene.createNode("Shape");
let LineSet2263 = browser.currentScene.createNode("LineSet");
LineSet2263.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2264 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2264.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2264;

let Coordinate2265 = browser.currentScene.createNode("Coordinate");
Coordinate2265.point = new X3D.MFVec3f([-0.1813,0.6032,-0.0035,-0.1833,0.63495,-0.0039]);
coord = Coordinate2265;

geometry = LineSet2263;

HAnimSegment2261YYY.children = new X3D.MFNode();

HAnimSegment2261ZZZ.children[0] = Shape2262;

HAnimJoint2260YYY.children = new X3D.MFNode();

HAnimJoint2260ZZZ.children[0] = HAnimSegment2261;

let HAnimJoint2266 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2266.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint2266.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint2266.center = new X3D.SFVec3f([-0.18029,0.5753,-0.00375]);
HAnimJoint2266.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2266.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2267 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2267.name = "r_carpal_distal_phalanx_3";
HAnimSegment2267.DEF = "hanim_r_carpal_distal_phalanx_3";
let HAnimSite2268 = browser.currentScene.createNode("HAnimSite");
HAnimSite2268.name = "r_carpal_distal_phalanx_3";
HAnimSite2268.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite2268.translation = new X3D.SFVec3f([-0.17,0.555,-0.006]);
let TouchSensor2269 = browser.currentScene.createNode("TouchSensor");
TouchSensor2269.description = "HAnimSite 108 hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite2268YYY.children = new X3D.MFNode();

HAnimSite2268ZZZ.children[0] = TouchSensor2269;

let Shape2270 = browser.currentScene.createNode("Shape");
let Appearance2271 = browser.currentScene.createNode("Appearance");
let Material2272 = browser.currentScene.createNode("Material");
Material2272.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2272;

appearance = Appearance2271;

let IndexedFaceSet2273 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2273.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2273.creaseAngle = 0.5;
IndexedFaceSet2273.solid = False;
let ColorRGBA2274 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2274.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2274;

let Coordinate2275 = browser.currentScene.createNode("Coordinate");
Coordinate2275.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2275;

geometry = IndexedFaceSet2273;

HAnimSite2268ZZZ.children[1] = Shape2270;

let Billboard2276 = browser.currentScene.createNode("Billboard");
Billboard2276.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2277 = browser.currentScene.createNode("Shape");
let Text2278 = browser.currentScene.createNode("Text");
Text2278.string = new X3D.MFString([new X3D.SFString("108")]);
let FontStyle2279 = browser.currentScene.createNode("FontStyle");
FontStyle2279.size = 0.035;
fontStyle = FontStyle2279;

geometry = Text2278;

Billboard2276YYY.children = new X3D.MFNode();

Billboard2276ZZZ.children[0] = Shape2277;

HAnimSite2268ZZZ.children[2] = Billboard2276;

HAnimSegment2267YYY.children = new X3D.MFNode();

HAnimSegment2267ZZZ.children[0] = HAnimSite2268;

let Shape2280 = browser.currentScene.createNode("Shape");
let LineSet2281 = browser.currentScene.createNode("LineSet");
LineSet2281.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2282 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2282.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2282;

let Coordinate2283 = browser.currentScene.createNode("Coordinate");
Coordinate2283.point = new X3D.MFVec3f([-0.18029,0.5753,-0.00375,-0.1813,0.6032,-0.0035]);
coord = Coordinate2283;

geometry = LineSet2281;

HAnimSegment2267ZZZ.children[1] = Shape2280;

HAnimJoint2266YYY.children = new X3D.MFNode();

HAnimJoint2266ZZZ.children[0] = HAnimSegment2267;

HAnimJoint2260ZZZ.children[1] = HAnimJoint2266;

HAnimJoint2254ZZZ.children[1] = HAnimJoint2260;

HAnimJoint2236ZZZ.children[1] = HAnimJoint2254;

HAnimJoint2230ZZZ.children[1] = HAnimJoint2236;

HAnimJoint2110ZZZ.children[3] = HAnimJoint2230;

let HAnimJoint2284 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2284.name = "r_midcarpal_4_5";
HAnimJoint2284.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint2284.center = new X3D.SFVec3f([-0.18072,0.70583,-0.02574]);
HAnimJoint2284.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2284.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2285 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2285.name = "r_hamate";
HAnimSegment2285.DEF = "hanim_r_hamate";
let Shape2286 = browser.currentScene.createNode("Shape");
let LineSet2287 = browser.currentScene.createNode("LineSet");
LineSet2287.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2288 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2288.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2288;

let Coordinate2289 = browser.currentScene.createNode("Coordinate");
Coordinate2289.point = new X3D.MFVec3f([-0.18072,0.70583,-0.02574,-0.1816,0.7242,-0.005]);
coord = Coordinate2289;

geometry = LineSet2287;

HAnimSegment2285YYY.children = new X3D.MFNode();

HAnimSegment2285ZZZ.children[0] = Shape2286;

HAnimJoint2284YYY.children = new X3D.MFNode();

HAnimJoint2284ZZZ.children[0] = HAnimSegment2285;

let HAnimJoint2290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2290.name = "r_carpometacarpal_4";
HAnimJoint2290.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint2290.center = new X3D.SFVec3f([-0.18072,0.68625,-0.01992]);
HAnimJoint2290.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2290.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2291.name = "r_metacarpal_4";
HAnimSegment2291.DEF = "hanim_r_metacarpal_4";
let Shape2292 = browser.currentScene.createNode("Shape");
let LineSet2293 = browser.currentScene.createNode("LineSet");
LineSet2293.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2294 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2294.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2294;

let Coordinate2295 = browser.currentScene.createNode("Coordinate");
Coordinate2295.point = new X3D.MFVec3f([-0.18072,0.68625,-0.01992,-0.18072,0.70583,-0.02574]);
coord = Coordinate2295;

geometry = LineSet2293;

HAnimSegment2291YYY.children = new X3D.MFNode();

HAnimSegment2291ZZZ.children[0] = Shape2292;

HAnimJoint2290YYY.children = new X3D.MFNode();

HAnimJoint2290ZZZ.children[0] = HAnimSegment2291;

let HAnimJoint2296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2296.name = "r_metacarpophalangeal_4";
HAnimJoint2296.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint2296.center = new X3D.SFVec3f([-0.1833,0.63405,-0.02144]);
HAnimJoint2296.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2296.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2297.name = "r_carpal_proximal_phalanx_4";
HAnimSegment2297.DEF = "hanim_r_carpal_proximal_phalanx_4";
let Shape2298 = browser.currentScene.createNode("Shape");
let LineSet2299 = browser.currentScene.createNode("LineSet");
LineSet2299.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2300 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2300.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2300;

let Coordinate2301 = browser.currentScene.createNode("Coordinate");
Coordinate2301.point = new X3D.MFVec3f([-0.1833,0.63405,-0.02144,-0.18072,0.68625,-0.01992]);
coord = Coordinate2301;

geometry = LineSet2299;

HAnimSegment2297YYY.children = new X3D.MFNode();

HAnimSegment2297ZZZ.children[0] = Shape2298;

HAnimJoint2296YYY.children = new X3D.MFNode();

HAnimJoint2296ZZZ.children[0] = HAnimSegment2297;

let HAnimJoint2302 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2302.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint2302.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint2302.center = new X3D.SFVec3f([-0.1813,0.6066,-0.02064]);
HAnimJoint2302.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2302.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2303 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2303.name = "r_carpal_middle_phalanx_4";
HAnimSegment2303.DEF = "hanim_r_carpal_middle_phalanx_4";
let Shape2304 = browser.currentScene.createNode("Shape");
let LineSet2305 = browser.currentScene.createNode("LineSet");
LineSet2305.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2306 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2306.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2306;

let Coordinate2307 = browser.currentScene.createNode("Coordinate");
Coordinate2307.point = new X3D.MFVec3f([-0.1813,0.6066,-0.02064,-0.1833,0.63405,-0.02144]);
coord = Coordinate2307;

geometry = LineSet2305;

HAnimSegment2303YYY.children = new X3D.MFNode();

HAnimSegment2303ZZZ.children[0] = Shape2304;

HAnimJoint2302YYY.children = new X3D.MFNode();

HAnimJoint2302ZZZ.children[0] = HAnimSegment2303;

let HAnimJoint2308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2308.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint2308.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint2308.center = new X3D.SFVec3f([-0.18029,0.5807,-0.01978]);
HAnimJoint2308.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2308.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2309 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2309.name = "r_carpal_distal_phalanx_4";
HAnimSegment2309.DEF = "hanim_r_carpal_distal_phalanx_4";
let HAnimSite2310 = browser.currentScene.createNode("HAnimSite");
HAnimSite2310.name = "r_carpal_distal_phalanx_4";
HAnimSite2310.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite2310.translation = new X3D.SFVec3f([-0.172,0.559,-0.024]);
let TouchSensor2311 = browser.currentScene.createNode("TouchSensor");
TouchSensor2311.description = "HAnimSite 109 hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite2310YYY.children = new X3D.MFNode();

HAnimSite2310ZZZ.children[0] = TouchSensor2311;

let Shape2312 = browser.currentScene.createNode("Shape");
let Appearance2313 = browser.currentScene.createNode("Appearance");
let Material2314 = browser.currentScene.createNode("Material");
Material2314.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2314;

appearance = Appearance2313;

let IndexedFaceSet2315 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2315.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2315.creaseAngle = 0.5;
IndexedFaceSet2315.solid = False;
let ColorRGBA2316 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2316.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2316;

let Coordinate2317 = browser.currentScene.createNode("Coordinate");
Coordinate2317.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2317;

geometry = IndexedFaceSet2315;

HAnimSite2310ZZZ.children[1] = Shape2312;

let Billboard2318 = browser.currentScene.createNode("Billboard");
Billboard2318.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2319 = browser.currentScene.createNode("Shape");
let Text2320 = browser.currentScene.createNode("Text");
Text2320.string = new X3D.MFString([new X3D.SFString("109")]);
let FontStyle2321 = browser.currentScene.createNode("FontStyle");
FontStyle2321.size = 0.035;
fontStyle = FontStyle2321;

geometry = Text2320;

Billboard2318YYY.children = new X3D.MFNode();

Billboard2318ZZZ.children[0] = Shape2319;

HAnimSite2310ZZZ.children[2] = Billboard2318;

HAnimSegment2309YYY.children = new X3D.MFNode();

HAnimSegment2309ZZZ.children[0] = HAnimSite2310;

let Shape2322 = browser.currentScene.createNode("Shape");
let LineSet2323 = browser.currentScene.createNode("LineSet");
LineSet2323.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2324 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2324.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2324;

let Coordinate2325 = browser.currentScene.createNode("Coordinate");
Coordinate2325.point = new X3D.MFVec3f([-0.18029,0.5807,-0.01978,-0.1813,0.6066,-0.02064]);
coord = Coordinate2325;

geometry = LineSet2323;

HAnimSegment2309ZZZ.children[1] = Shape2322;

HAnimJoint2308YYY.children = new X3D.MFNode();

HAnimJoint2308ZZZ.children[0] = HAnimSegment2309;

HAnimJoint2302ZZZ.children[1] = HAnimJoint2308;

HAnimJoint2296ZZZ.children[1] = HAnimJoint2302;

HAnimJoint2290ZZZ.children[1] = HAnimJoint2296;

HAnimJoint2284ZZZ.children[1] = HAnimJoint2290;

HAnimJoint2110ZZZ.children[4] = HAnimJoint2284;

let HAnimJoint2326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2326.name = "r_carpometacarpal_5";
HAnimJoint2326.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint2326.center = new X3D.SFVec3f([-0.18126,0.68827,-0.03278]);
HAnimJoint2326.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2326.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2327 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2327.name = "r_metacarpal_5";
HAnimSegment2327.DEF = "hanim_r_metacarpal_5";
let HAnimSite2328 = browser.currentScene.createNode("HAnimSite");
HAnimSite2328.name = "r_metacarpal_phalanx_5";
HAnimSite2328.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite2328.translation = new X3D.SFVec3f([-0.2,0.665,-0.036]);
let TouchSensor2329 = browser.currentScene.createNode("TouchSensor");
TouchSensor2329.description = "HAnimSite 80 hanim_r_metacarpal_phalanx_5_pt";
HAnimSite2328YYY.children = new X3D.MFNode();

HAnimSite2328ZZZ.children[0] = TouchSensor2329;

let Shape2330 = browser.currentScene.createNode("Shape");
let Appearance2331 = browser.currentScene.createNode("Appearance");
let Material2332 = browser.currentScene.createNode("Material");
Material2332.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2332;

appearance = Appearance2331;

let IndexedFaceSet2333 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2333.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2333.creaseAngle = 0.5;
IndexedFaceSet2333.solid = False;
let ColorRGBA2334 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2334.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2334;

let Coordinate2335 = browser.currentScene.createNode("Coordinate");
Coordinate2335.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2335;

geometry = IndexedFaceSet2333;

HAnimSite2328ZZZ.children[1] = Shape2330;

let Billboard2336 = browser.currentScene.createNode("Billboard");
Billboard2336.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2337 = browser.currentScene.createNode("Shape");
let Text2338 = browser.currentScene.createNode("Text");
Text2338.string = new X3D.MFString([new X3D.SFString("80")]);
let FontStyle2339 = browser.currentScene.createNode("FontStyle");
FontStyle2339.size = 0.035;
fontStyle = FontStyle2339;

geometry = Text2338;

Billboard2336YYY.children = new X3D.MFNode();

Billboard2336ZZZ.children[0] = Shape2337;

HAnimSite2328ZZZ.children[2] = Billboard2336;

HAnimSegment2327YYY.children = new X3D.MFNode();

HAnimSegment2327ZZZ.children[0] = HAnimSite2328;

let Shape2340 = browser.currentScene.createNode("Shape");
let LineSet2341 = browser.currentScene.createNode("LineSet");
LineSet2341.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2342 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2342.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2342;

let Coordinate2343 = browser.currentScene.createNode("Coordinate");
Coordinate2343.point = new X3D.MFVec3f([-0.18126,0.68827,-0.03278,-0.1816,0.7242,-0.005]);
coord = Coordinate2343;

geometry = LineSet2341;

HAnimSegment2327ZZZ.children[1] = Shape2340;

HAnimJoint2326YYY.children = new X3D.MFNode();

HAnimJoint2326ZZZ.children[0] = HAnimSegment2327;

let HAnimJoint2344 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2344.name = "r_metacarpophalangeal_5";
HAnimJoint2344.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint2344.center = new X3D.SFVec3f([-0.18297,0.6381,-0.0371]);
HAnimJoint2344.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2344.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2345 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2345.name = "r_carpal_proximal_phalanx_5";
HAnimSegment2345.DEF = "hanim_r_carpal_proximal_phalanx_5";
let Shape2346 = browser.currentScene.createNode("Shape");
let LineSet2347 = browser.currentScene.createNode("LineSet");
LineSet2347.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2348 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2348.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2348;

let Coordinate2349 = browser.currentScene.createNode("Coordinate");
Coordinate2349.point = new X3D.MFVec3f([-0.18297,0.6381,-0.0371,-0.18126,0.68827,-0.03278]);
coord = Coordinate2349;

geometry = LineSet2347;

HAnimSegment2345YYY.children = new X3D.MFNode();

HAnimSegment2345ZZZ.children[0] = Shape2346;

HAnimJoint2344YYY.children = new X3D.MFNode();

HAnimJoint2344ZZZ.children[0] = HAnimSegment2345;

let HAnimJoint2350 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2350.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint2350.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint2350.center = new X3D.SFVec3f([-0.1813,0.621,-0.03715]);
HAnimJoint2350.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2350.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2351 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2351.name = "r_carpal_middle_phalanx_5";
HAnimSegment2351.DEF = "hanim_r_carpal_middle_phalanx_5";
let Shape2352 = browser.currentScene.createNode("Shape");
let LineSet2353 = browser.currentScene.createNode("LineSet");
LineSet2353.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2354 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2354.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2354;

let Coordinate2355 = browser.currentScene.createNode("Coordinate");
Coordinate2355.point = new X3D.MFVec3f([-0.1813,0.621,-0.03715,-0.18297,0.6381,-0.0371]);
coord = Coordinate2355;

geometry = LineSet2353;

HAnimSegment2351YYY.children = new X3D.MFNode();

HAnimSegment2351ZZZ.children[0] = Shape2352;

HAnimJoint2350YYY.children = new X3D.MFNode();

HAnimJoint2350ZZZ.children[0] = HAnimSegment2351;

let HAnimJoint2356 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint2356.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint2356.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint2356.center = new X3D.SFVec3f([-0.18045,0.602325,-0.03697]);
HAnimJoint2356.ulimit = new X3D.MFFloat([0,0,0]);
HAnimJoint2356.llimit = new X3D.MFFloat([0,0,0]);
let HAnimSegment2357 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment2357.name = "r_carpal_distal_phalanx_5";
HAnimSegment2357.DEF = "hanim_r_carpal_distal_phalanx_5";
let HAnimSite2358 = browser.currentScene.createNode("HAnimSite");
HAnimSite2358.name = "r_carpal_distal_phalanx_5";
HAnimSite2358.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite2358.translation = new X3D.SFVec3f([-0.172,0.58,-0.039]);
let TouchSensor2359 = browser.currentScene.createNode("TouchSensor");
TouchSensor2359.description = "HAnimSite 110 hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite2358YYY.children = new X3D.MFNode();

HAnimSite2358ZZZ.children[0] = TouchSensor2359;

let Shape2360 = browser.currentScene.createNode("Shape");
let Appearance2361 = browser.currentScene.createNode("Appearance");
let Material2362 = browser.currentScene.createNode("Material");
Material2362.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material2362;

appearance = Appearance2361;

let IndexedFaceSet2363 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet2363.coordIndex = new X3D.MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2363.creaseAngle = 0.5;
IndexedFaceSet2363.solid = False;
let ColorRGBA2364 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2364.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
color = ColorRGBA2364;

let Coordinate2365 = browser.currentScene.createNode("Coordinate");
Coordinate2365.point = new X3D.MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
coord = Coordinate2365;

geometry = IndexedFaceSet2363;

HAnimSite2358ZZZ.children[1] = Shape2360;

let Billboard2366 = browser.currentScene.createNode("Billboard");
Billboard2366.axisOfRotation = new X3D.SFVec3f([0,0,0]);
let Shape2367 = browser.currentScene.createNode("Shape");
let Text2368 = browser.currentScene.createNode("Text");
Text2368.string = new X3D.MFString([new X3D.SFString("110")]);
let FontStyle2369 = browser.currentScene.createNode("FontStyle");
FontStyle2369.size = 0.035;
fontStyle = FontStyle2369;

geometry = Text2368;

Billboard2366YYY.children = new X3D.MFNode();

Billboard2366ZZZ.children[0] = Shape2367;

HAnimSite2358ZZZ.children[2] = Billboard2366;

HAnimSegment2357YYY.children = new X3D.MFNode();

HAnimSegment2357ZZZ.children[0] = HAnimSite2358;

let Shape2370 = browser.currentScene.createNode("Shape");
let LineSet2371 = browser.currentScene.createNode("LineSet");
LineSet2371.vertexCount = new X3D.MFInt32([2]);
let ColorRGBA2372 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA2372.color = new X3D.MFColorRGBA([1,1,0,1,1,1,0,1]);
color = ColorRGBA2372;

let Coordinate2373 = browser.currentScene.createNode("Coordinate");
Coordinate2373.point = new X3D.MFVec3f([-0.18045,0.602325,-0.03697,-0.1813,0.621,-0.03715]);
coord = Coordinate2373;

geometry = LineSet2371;

HAnimSegment2357ZZZ.children[1] = Shape2370;

HAnimJoint2356YYY.children = new X3D.MFNode();

HAnimJoint2356ZZZ.children[0] = HAnimSegment2357;

HAnimJoint2350ZZZ.children[1] = HAnimJoint2356;

HAnimJoint2344ZZZ.children[1] = HAnimJoint2350;

HAnimJoint2326ZZZ.children[1] = HAnimJoint2344;

HAnimJoint2110ZZZ.children[5] = HAnimJoint2326;

HAnimJoint2080ZZZ.children[1] = HAnimJoint2110;

HAnimJoint2026ZZZ.children[1] = HAnimJoint2080;

HAnimJoint1972ZZZ.children[1] = HAnimJoint2026;

HAnimJoint1954ZZZ.children[1] = HAnimJoint1972;

HAnimJoint1126ZZZ.children[3] = HAnimJoint1954;

HAnimJoint1120ZZZ.children[1] = HAnimJoint1126;

HAnimJoint1114ZZZ.children[1] = HAnimJoint1120;

HAnimJoint1108ZZZ.children[1] = HAnimJoint1114;

HAnimJoint1102ZZZ.children[1] = HAnimJoint1108;

HAnimJoint1096ZZZ.children[1] = HAnimJoint1102;

HAnimJoint1090ZZZ.children[1] = HAnimJoint1096;

HAnimJoint1084ZZZ.children[1] = HAnimJoint1090;

HAnimJoint1018ZZZ.children[1] = HAnimJoint1084;

HAnimJoint988ZZZ.children[1] = HAnimJoint1018;

HAnimJoint982ZZZ.children[1] = HAnimJoint988;

HAnimJoint976ZZZ.children[1] = HAnimJoint982;

HAnimJoint970ZZZ.children[1] = HAnimJoint976;

HAnimJoint940ZZZ.children[1] = HAnimJoint970;

HAnimJoint934ZZZ.children[1] = HAnimJoint940;

HAnimJoint928ZZZ.children[1] = HAnimJoint934;

HAnimJoint862ZZZ.children[1] = HAnimJoint928;

HAnimJoint12ZZZ.children[2] = HAnimJoint862;

HAnimHumanoid11.joints = new X3D.MFNode();

HAnimHumanoid11XXX.joints[0] = HAnimJoint12;

browser.currentScene.children[2] = HAnimHumanoid11;

let NavigationInfo2374 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2374.headlight = False;
browser.currentScene.children[3] = NavigationInfo2374;

let Background2375 = browser.currentScene.createNode("Background");
Background2375.DEF = "Background1";
Background2375.groundColor = new X3D.MFColor([0.5,0.5,0.5]);
Background2375.skyColor = new X3D.MFColor([0.4,0.4,0.4]);
browser.currentScene.children[4] = Background2375;

let DirectionalLight2376 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight2376.global = True;
browser.currentScene.children[5] = DirectionalLight2376;

let Viewpoint2377 = browser.currentScene.createNode("Viewpoint");
Viewpoint2377.centerOfRotation = new X3D.SFVec3f([0,1,0]);
Viewpoint2377.description = "JinLOA4";
Viewpoint2377.position = new X3D.SFVec3f([0,1,3]);
browser.currentScene.children[6] = Viewpoint2377;

let Transform2378 = browser.currentScene.createNode("Transform");
Transform2378.DEF = "Landmark000";
//Another Parent Scene 0 0 0 landmark
let Shape2379 = browser.currentScene.createNode("Shape");
Shape2379.DEF = "HAnim000Landmark";
let Appearance2380 = browser.currentScene.createNode("Appearance");
let Material2381 = browser.currentScene.createNode("Material");
Material2381.diffuseColor = new X3D.SFColor([0,1,0]);
Material2381.emissiveColor = new X3D.SFColor([0,1,0]);
material = Material2381;

appearance = Appearance2380;

let Sphere2382 = browser.currentScene.createNode("Sphere");
Sphere2382.radius = 0.01;
geometry = Sphere2382;

Transform2378YYY.child = new X3D.undefined();

Transform2378ZZZ.child[0] = Shape2379;

browser.currentScene.children[7] = Transform2378;

}
main ();
