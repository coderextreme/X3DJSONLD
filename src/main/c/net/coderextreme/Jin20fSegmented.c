#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "JinScaledV2L1LOA4MinimumSkeleton20f.x3d";
head1.meta[1] = meta3;

head = head1;

//https://www.web3d.org/documents/specifications/19774/V2.0/index.html
//0 0 0 at floor between feet, default I pose (relaxed attention) model gaze toward +Z, +x to model left, +y up, right-hand rule.
WorldInfo WorldInfo5 = createNode("WorldInfo");
WorldInfo5.title = "20f Jin v2 loa4 Level 1, Joints, Segments, Sites";
children = new MFNode();

children[0] = WorldInfo5;

Transform Transform6 = createNode("Transform");
Transform6.DEF = "ContainerScene000";
Shape Shape7 = createNode("Shape");
Shape7.DEF = "AxisLinesShape";
//Red +X, Green +Y, Blue +Z
IndexedLineSet IndexedLineSet8 = createNode("IndexedLineSet");
IndexedLineSet8.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet8.colorPerVertex = False;
IndexedLineSet8.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Color Color9 = createNode("Color");
Color9.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet8.color = Color9;

Coordinate Coordinate10 = createNode("Coordinate");
Coordinate10.point = new MFVec3f(new float[0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
IndexedLineSet8.coord = Coordinate10;

Shape7.geometry = IndexedLineSet8;

Transform6.child = new undefined();

Transform6.child[0] = Shape7;

children[1] = Transform6;

HAnimHumanoid HAnimHumanoid11 = createNode("HAnimHumanoid");
HAnimHumanoid11.name = "JinLOA4S";
HAnimHumanoid11.DEF = "hanim_JinLOA4S";
HAnimHumanoid11.loa = 4;
HAnimHumanoid11.version = "2.0";
HAnimJoint HAnimJoint12 = createNode("HAnimJoint");
HAnimJoint12.name = "humanoid_root";
HAnimJoint12.DEF = "hanim_humanoid_root";
HAnimJoint12.center = new SFVec3f(new float[0,0.77,0]);
HAnimJoint12.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint12.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment13 = createNode("HAnimSegment");
HAnimSegment13.name = "sacrum";
HAnimSegment13.DEF = "hanim_sacrum";
Transform Transform14 = createNode("Transform");
Transform14.DEF = "Humanoid000";
Shape Shape15 = createNode("Shape");
Shape15.USE = "AxisLinesShape";
Transform14.child = new undefined();

Transform14.child[0] = Shape15;

HAnimSegment13.children = new MFNode();

HAnimSegment13.children[0] = Transform14;

HAnimJoint12.children = new MFNode();

HAnimJoint12.children[0] = HAnimSegment13;

HAnimJoint HAnimJoint16 = createNode("HAnimJoint");
HAnimJoint16.name = "sacroiliac";
HAnimJoint16.DEF = "hanim_sacroiliac";
HAnimJoint16.center = new SFVec3f(new float[0,0.826,0.02]);
HAnimJoint16.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint16.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment17 = createNode("HAnimSegment");
HAnimSegment17.name = "pelvis";
HAnimSegment17.DEF = "hanim_pelvis";
HAnimSite HAnimSite18 = createNode("HAnimSite");
HAnimSite18.name = "l_iliocristale";
HAnimSite18.DEF = "hanim_l_iliocristale_pt";
HAnimSite18.translation = new SFVec3f(new float[0.13,0.92,0.0035]);
TouchSensor TouchSensor19 = createNode("TouchSensor");
TouchSensor19.description = "HAnimSite 33 hanim_l_iliocristale_pt";
HAnimSite18.children = new MFNode();

HAnimSite18.children[0] = TouchSensor19;

Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[1,1,1]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

IndexedFaceSet IndexedFaceSet23 = createNode("IndexedFaceSet");
IndexedFaceSet23.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet23.creaseAngle = 0.5;
IndexedFaceSet23.solid = False;
ColorRGBA ColorRGBA24 = createNode("ColorRGBA");
ColorRGBA24.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet23.color = ColorRGBA24;

Coordinate Coordinate25 = createNode("Coordinate");
Coordinate25.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet23.coord = Coordinate25;

Shape20.geometry = IndexedFaceSet23;

HAnimSite18.children[1] = Shape20;

Billboard Billboard26 = createNode("Billboard");
Billboard26.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape27 = createNode("Shape");
Text Text28 = createNode("Text");
Text28.string = new MFString(new java.lang.String["33"]);
FontStyle FontStyle29 = createNode("FontStyle");
FontStyle29.size = 0.035;
Text28.fontStyle = FontStyle29;

Shape27.geometry = Text28;

Billboard26.children = new MFNode();

Billboard26.children[0] = Shape27;

HAnimSite18.children[2] = Billboard26;

HAnimSegment17.children = new MFNode();

HAnimSegment17.children[0] = HAnimSite18;

HAnimSite HAnimSite30 = createNode("HAnimSite");
HAnimSite30.name = "r_iliocristale";
HAnimSite30.DEF = "hanim_r_iliocristale_pt";
HAnimSite30.translation = new SFVec3f(new float[-0.13,0.92,0.0035]);
TouchSensor TouchSensor31 = createNode("TouchSensor");
TouchSensor31.description = "HAnimSite 36 hanim_r_iliocristale_pt";
HAnimSite30.children = new MFNode();

HAnimSite30.children[0] = TouchSensor31;

Shape Shape32 = createNode("Shape");
Appearance Appearance33 = createNode("Appearance");
Material Material34 = createNode("Material");
Material34.diffuseColor = new SFColor(new float[1,1,1]);
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

IndexedFaceSet IndexedFaceSet35 = createNode("IndexedFaceSet");
IndexedFaceSet35.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet35.creaseAngle = 0.5;
IndexedFaceSet35.solid = False;
ColorRGBA ColorRGBA36 = createNode("ColorRGBA");
ColorRGBA36.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet35.color = ColorRGBA36;

Coordinate Coordinate37 = createNode("Coordinate");
Coordinate37.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet35.coord = Coordinate37;

Shape32.geometry = IndexedFaceSet35;

HAnimSite30.children[1] = Shape32;

Billboard Billboard38 = createNode("Billboard");
Billboard38.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape39 = createNode("Shape");
Text Text40 = createNode("Text");
Text40.string = new MFString(new java.lang.String["36"]);
FontStyle FontStyle41 = createNode("FontStyle");
FontStyle41.size = 0.035;
Text40.fontStyle = FontStyle41;

Shape39.geometry = Text40;

Billboard38.children = new MFNode();

Billboard38.children[0] = Shape39;

HAnimSite30.children[2] = Billboard38;

HAnimSegment17.children[1] = HAnimSite30;

HAnimSite HAnimSite42 = createNode("HAnimSite");
HAnimSite42.name = "l_trochanterion";
HAnimSite42.DEF = "hanim_l_trochanterion_pt";
HAnimSite42.translation = new SFVec3f(new float[0.14,0.8,0.0035]);
TouchSensor TouchSensor43 = createNode("TouchSensor");
TouchSensor43.description = "HAnimSite 42 hanim_l_trochanterion_pt";
HAnimSite42.children = new MFNode();

HAnimSite42.children[0] = TouchSensor43;

Shape Shape44 = createNode("Shape");
Appearance Appearance45 = createNode("Appearance");
Material Material46 = createNode("Material");
Material46.diffuseColor = new SFColor(new float[1,1,1]);
Appearance45.material = Material46;

Shape44.appearance = Appearance45;

IndexedFaceSet IndexedFaceSet47 = createNode("IndexedFaceSet");
IndexedFaceSet47.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet47.creaseAngle = 0.5;
IndexedFaceSet47.solid = False;
ColorRGBA ColorRGBA48 = createNode("ColorRGBA");
ColorRGBA48.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet47.color = ColorRGBA48;

Coordinate Coordinate49 = createNode("Coordinate");
Coordinate49.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet47.coord = Coordinate49;

Shape44.geometry = IndexedFaceSet47;

HAnimSite42.children[1] = Shape44;

Billboard Billboard50 = createNode("Billboard");
Billboard50.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape51 = createNode("Shape");
Text Text52 = createNode("Text");
Text52.string = new MFString(new java.lang.String["42"]);
FontStyle FontStyle53 = createNode("FontStyle");
FontStyle53.size = 0.035;
Text52.fontStyle = FontStyle53;

Shape51.geometry = Text52;

Billboard50.children = new MFNode();

Billboard50.children[0] = Shape51;

HAnimSite42.children[2] = Billboard50;

HAnimSegment17.children[2] = HAnimSite42;

HAnimSite HAnimSite54 = createNode("HAnimSite");
HAnimSite54.name = "r_trochanterion";
HAnimSite54.DEF = "hanim_r_trochanterion_pt";
HAnimSite54.translation = new SFVec3f(new float[-0.14,0.8,0.0035]);
TouchSensor TouchSensor55 = createNode("TouchSensor");
TouchSensor55.description = "HAnimSite 46 hanim_r_trochanterion_pt";
HAnimSite54.children = new MFNode();

HAnimSite54.children[0] = TouchSensor55;

Shape Shape56 = createNode("Shape");
Appearance Appearance57 = createNode("Appearance");
Material Material58 = createNode("Material");
Material58.diffuseColor = new SFColor(new float[1,1,1]);
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

IndexedFaceSet IndexedFaceSet59 = createNode("IndexedFaceSet");
IndexedFaceSet59.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet59.creaseAngle = 0.5;
IndexedFaceSet59.solid = False;
ColorRGBA ColorRGBA60 = createNode("ColorRGBA");
ColorRGBA60.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet59.color = ColorRGBA60;

Coordinate Coordinate61 = createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet59.coord = Coordinate61;

Shape56.geometry = IndexedFaceSet59;

HAnimSite54.children[1] = Shape56;

Billboard Billboard62 = createNode("Billboard");
Billboard62.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape63 = createNode("Shape");
Text Text64 = createNode("Text");
Text64.string = new MFString(new java.lang.String["46"]);
FontStyle FontStyle65 = createNode("FontStyle");
FontStyle65.size = 0.035;
Text64.fontStyle = FontStyle65;

Shape63.geometry = Text64;

Billboard62.children = new MFNode();

Billboard62.children[0] = Shape63;

HAnimSite54.children[2] = Billboard62;

HAnimSegment17.children[3] = HAnimSite54;

HAnimSite HAnimSite66 = createNode("HAnimSite");
HAnimSite66.name = "l_asis";
HAnimSite66.DEF = "hanim_l_asis_pt";
HAnimSite66.translation = new SFVec3f(new float[0.1,0.86,0.0035]);
TouchSensor TouchSensor67 = createNode("TouchSensor");
TouchSensor67.description = "HAnimSite 32 hanim_l_asis_pt";
HAnimSite66.children = new MFNode();

HAnimSite66.children[0] = TouchSensor67;

Shape Shape68 = createNode("Shape");
Appearance Appearance69 = createNode("Appearance");
Material Material70 = createNode("Material");
Material70.diffuseColor = new SFColor(new float[1,1,1]);
Appearance69.material = Material70;

Shape68.appearance = Appearance69;

IndexedFaceSet IndexedFaceSet71 = createNode("IndexedFaceSet");
IndexedFaceSet71.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet71.creaseAngle = 0.5;
IndexedFaceSet71.solid = False;
ColorRGBA ColorRGBA72 = createNode("ColorRGBA");
ColorRGBA72.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet71.color = ColorRGBA72;

Coordinate Coordinate73 = createNode("Coordinate");
Coordinate73.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet71.coord = Coordinate73;

Shape68.geometry = IndexedFaceSet71;

HAnimSite66.children[1] = Shape68;

Billboard Billboard74 = createNode("Billboard");
Billboard74.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape75 = createNode("Shape");
Text Text76 = createNode("Text");
Text76.string = new MFString(new java.lang.String["32"]);
FontStyle FontStyle77 = createNode("FontStyle");
FontStyle77.size = 0.035;
Text76.fontStyle = FontStyle77;

Shape75.geometry = Text76;

Billboard74.children = new MFNode();

Billboard74.children[0] = Shape75;

HAnimSite66.children[2] = Billboard74;

HAnimSegment17.children[4] = HAnimSite66;

HAnimSite HAnimSite78 = createNode("HAnimSite");
HAnimSite78.name = "r_asis";
HAnimSite78.DEF = "hanim_r_asis_pt";
HAnimSite78.translation = new SFVec3f(new float[-0.1,0.86,0.0035]);
TouchSensor TouchSensor79 = createNode("TouchSensor");
TouchSensor79.description = "HAnimSite 35 hanim_r_asis_pt";
HAnimSite78.children = new MFNode();

HAnimSite78.children[0] = TouchSensor79;

Shape Shape80 = createNode("Shape");
Appearance Appearance81 = createNode("Appearance");
Material Material82 = createNode("Material");
Material82.diffuseColor = new SFColor(new float[1,1,1]);
Appearance81.material = Material82;

Shape80.appearance = Appearance81;

IndexedFaceSet IndexedFaceSet83 = createNode("IndexedFaceSet");
IndexedFaceSet83.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet83.creaseAngle = 0.5;
IndexedFaceSet83.solid = False;
ColorRGBA ColorRGBA84 = createNode("ColorRGBA");
ColorRGBA84.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet83.color = ColorRGBA84;

Coordinate Coordinate85 = createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet83.coord = Coordinate85;

Shape80.geometry = IndexedFaceSet83;

HAnimSite78.children[1] = Shape80;

Billboard Billboard86 = createNode("Billboard");
Billboard86.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape87 = createNode("Shape");
Text Text88 = createNode("Text");
Text88.string = new MFString(new java.lang.String["35"]);
FontStyle FontStyle89 = createNode("FontStyle");
FontStyle89.size = 0.035;
Text88.fontStyle = FontStyle89;

Shape87.geometry = Text88;

Billboard86.children = new MFNode();

Billboard86.children[0] = Shape87;

HAnimSite78.children[2] = Billboard86;

HAnimSegment17.children[5] = HAnimSite78;

HAnimSite HAnimSite90 = createNode("HAnimSite");
HAnimSite90.name = "l_psis";
HAnimSite90.DEF = "hanim_l_psis_pt";
HAnimSite90.translation = new SFVec3f(new float[0.05,0.84,-0.11]);
TouchSensor TouchSensor91 = createNode("TouchSensor");
TouchSensor91.description = "HAnimSite 34 hanim_l_psis_pt";
HAnimSite90.children = new MFNode();

HAnimSite90.children[0] = TouchSensor91;

Shape Shape92 = createNode("Shape");
Appearance Appearance93 = createNode("Appearance");
Material Material94 = createNode("Material");
Material94.diffuseColor = new SFColor(new float[1,1,1]);
Appearance93.material = Material94;

Shape92.appearance = Appearance93;

IndexedFaceSet IndexedFaceSet95 = createNode("IndexedFaceSet");
IndexedFaceSet95.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet95.creaseAngle = 0.5;
IndexedFaceSet95.solid = False;
ColorRGBA ColorRGBA96 = createNode("ColorRGBA");
ColorRGBA96.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet95.color = ColorRGBA96;

Coordinate Coordinate97 = createNode("Coordinate");
Coordinate97.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet95.coord = Coordinate97;

Shape92.geometry = IndexedFaceSet95;

HAnimSite90.children[1] = Shape92;

Billboard Billboard98 = createNode("Billboard");
Billboard98.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape99 = createNode("Shape");
Text Text100 = createNode("Text");
Text100.string = new MFString(new java.lang.String["34"]);
FontStyle FontStyle101 = createNode("FontStyle");
FontStyle101.size = 0.035;
Text100.fontStyle = FontStyle101;

Shape99.geometry = Text100;

Billboard98.children = new MFNode();

Billboard98.children[0] = Shape99;

HAnimSite90.children[2] = Billboard98;

HAnimSegment17.children[6] = HAnimSite90;

HAnimSite HAnimSite102 = createNode("HAnimSite");
HAnimSite102.name = "r_psis";
HAnimSite102.DEF = "hanim_r_psis_pt";
HAnimSite102.translation = new SFVec3f(new float[-0.05,0.84,-0.11]);
TouchSensor TouchSensor103 = createNode("TouchSensor");
TouchSensor103.description = "HAnimSite 37 hanim_r_psis_pt";
HAnimSite102.children = new MFNode();

HAnimSite102.children[0] = TouchSensor103;

Shape Shape104 = createNode("Shape");
Appearance Appearance105 = createNode("Appearance");
Material Material106 = createNode("Material");
Material106.diffuseColor = new SFColor(new float[1,1,1]);
Appearance105.material = Material106;

Shape104.appearance = Appearance105;

IndexedFaceSet IndexedFaceSet107 = createNode("IndexedFaceSet");
IndexedFaceSet107.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet107.creaseAngle = 0.5;
IndexedFaceSet107.solid = False;
ColorRGBA ColorRGBA108 = createNode("ColorRGBA");
ColorRGBA108.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet107.color = ColorRGBA108;

Coordinate Coordinate109 = createNode("Coordinate");
Coordinate109.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet107.coord = Coordinate109;

Shape104.geometry = IndexedFaceSet107;

HAnimSite102.children[1] = Shape104;

Billboard Billboard110 = createNode("Billboard");
Billboard110.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape111 = createNode("Shape");
Text Text112 = createNode("Text");
Text112.string = new MFString(new java.lang.String["37"]);
FontStyle FontStyle113 = createNode("FontStyle");
FontStyle113.size = 0.035;
Text112.fontStyle = FontStyle113;

Shape111.geometry = Text112;

Billboard110.children = new MFNode();

Billboard110.children[0] = Shape111;

HAnimSite102.children[2] = Billboard110;

HAnimSegment17.children[7] = HAnimSite102;

HAnimSite HAnimSite114 = createNode("HAnimSite");
HAnimSite114.name = "crotch";
HAnimSite114.DEF = "hanim_crotch_pt";
HAnimSite114.translation = new SFVec3f(new float[0,0.703,0]);
TouchSensor TouchSensor115 = createNode("TouchSensor");
TouchSensor115.description = "HAnimSite 38 hanim_crotch_pt";
HAnimSite114.children = new MFNode();

HAnimSite114.children[0] = TouchSensor115;

Shape Shape116 = createNode("Shape");
Appearance Appearance117 = createNode("Appearance");
Material Material118 = createNode("Material");
Material118.diffuseColor = new SFColor(new float[1,1,1]);
Appearance117.material = Material118;

Shape116.appearance = Appearance117;

IndexedFaceSet IndexedFaceSet119 = createNode("IndexedFaceSet");
IndexedFaceSet119.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet119.creaseAngle = 0.5;
IndexedFaceSet119.solid = False;
ColorRGBA ColorRGBA120 = createNode("ColorRGBA");
ColorRGBA120.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet119.color = ColorRGBA120;

Coordinate Coordinate121 = createNode("Coordinate");
Coordinate121.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet119.coord = Coordinate121;

Shape116.geometry = IndexedFaceSet119;

HAnimSite114.children[1] = Shape116;

Billboard Billboard122 = createNode("Billboard");
Billboard122.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape123 = createNode("Shape");
Text Text124 = createNode("Text");
Text124.string = new MFString(new java.lang.String["38"]);
FontStyle FontStyle125 = createNode("FontStyle");
FontStyle125.size = 0.035;
Text124.fontStyle = FontStyle125;

Shape123.geometry = Text124;

Billboard122.children = new MFNode();

Billboard122.children[0] = Shape123;

HAnimSite114.children[2] = Billboard122;

HAnimSegment17.children[8] = HAnimSite114;

HAnimSite HAnimSite126 = createNode("HAnimSite");
HAnimSite126.name = "buttocks_standing_wall_contact_point";
HAnimSite126.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimSite126.translation = new SFVec3f(new float[0,0.8,-0.15]);
TouchSensor TouchSensor127 = createNode("TouchSensor");
TouchSensor127.description = "HAnimSite 93 hanim_buttocks_standing_wall_contact_point_pt";
HAnimSite126.children = new MFNode();

HAnimSite126.children[0] = TouchSensor127;

Shape Shape128 = createNode("Shape");
Appearance Appearance129 = createNode("Appearance");
Material Material130 = createNode("Material");
Material130.diffuseColor = new SFColor(new float[1,1,1]);
Appearance129.material = Material130;

Shape128.appearance = Appearance129;

IndexedFaceSet IndexedFaceSet131 = createNode("IndexedFaceSet");
IndexedFaceSet131.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet131.creaseAngle = 0.5;
IndexedFaceSet131.solid = False;
ColorRGBA ColorRGBA132 = createNode("ColorRGBA");
ColorRGBA132.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet131.color = ColorRGBA132;

Coordinate Coordinate133 = createNode("Coordinate");
Coordinate133.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet131.coord = Coordinate133;

Shape128.geometry = IndexedFaceSet131;

HAnimSite126.children[1] = Shape128;

Billboard Billboard134 = createNode("Billboard");
Billboard134.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape135 = createNode("Shape");
Text Text136 = createNode("Text");
Text136.string = new MFString(new java.lang.String["93"]);
FontStyle FontStyle137 = createNode("FontStyle");
FontStyle137.size = 0.035;
Text136.fontStyle = FontStyle137;

Shape135.geometry = Text136;

Billboard134.children = new MFNode();

Billboard134.children[0] = Shape135;

HAnimSite126.children[2] = Billboard134;

HAnimSegment17.children[9] = HAnimSite126;

Shape Shape138 = createNode("Shape");
LineSet LineSet139 = createNode("LineSet");
LineSet139.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA140 = createNode("ColorRGBA");
ColorRGBA140.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet139.color = ColorRGBA140;

Coordinate Coordinate141 = createNode("Coordinate");
Coordinate141.point = new MFVec3f(new float[0,0.826,0.02,0,0.77,0]);
LineSet139.coord = Coordinate141;

Shape138.geometry = LineSet139;

HAnimSegment17.children[10] = Shape138;

HAnimJoint16.children = new MFNode();

HAnimJoint16.children[0] = HAnimSegment17;

HAnimJoint HAnimJoint142 = createNode("HAnimJoint");
HAnimJoint142.name = "l_hip";
HAnimJoint142.DEF = "hanim_l_hip";
HAnimJoint142.center = new SFVec3f(new float[0.095,0.8266,-0.0183]);
HAnimJoint142.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint142.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment143 = createNode("HAnimSegment");
HAnimSegment143.name = "l_thigh";
HAnimSegment143.DEF = "hanim_l_thigh";
HAnimSite HAnimSite144 = createNode("HAnimSite");
HAnimSite144.name = "l_knee_crease";
HAnimSite144.DEF = "hanim_l_knee_crease_pt";
HAnimSite144.translation = new SFVec3f(new float[0.09,0.41,-0.056]);
TouchSensor TouchSensor145 = createNode("TouchSensor");
TouchSensor145.description = "HAnimSite 90 hanim_l_knee_crease_pt";
HAnimSite144.children = new MFNode();

HAnimSite144.children[0] = TouchSensor145;

Shape Shape146 = createNode("Shape");
Appearance Appearance147 = createNode("Appearance");
Material Material148 = createNode("Material");
Material148.diffuseColor = new SFColor(new float[1,1,1]);
Appearance147.material = Material148;

Shape146.appearance = Appearance147;

IndexedFaceSet IndexedFaceSet149 = createNode("IndexedFaceSet");
IndexedFaceSet149.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet149.creaseAngle = 0.5;
IndexedFaceSet149.solid = False;
ColorRGBA ColorRGBA150 = createNode("ColorRGBA");
ColorRGBA150.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet149.color = ColorRGBA150;

Coordinate Coordinate151 = createNode("Coordinate");
Coordinate151.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet149.coord = Coordinate151;

Shape146.geometry = IndexedFaceSet149;

HAnimSite144.children[1] = Shape146;

Billboard Billboard152 = createNode("Billboard");
Billboard152.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape153 = createNode("Shape");
Text Text154 = createNode("Text");
Text154.string = new MFString(new java.lang.String["90"]);
FontStyle FontStyle155 = createNode("FontStyle");
FontStyle155.size = 0.035;
Text154.fontStyle = FontStyle155;

Shape153.geometry = Text154;

Billboard152.children = new MFNode();

Billboard152.children[0] = Shape153;

HAnimSite144.children[2] = Billboard152;

HAnimSegment143.children = new MFNode();

HAnimSegment143.children[0] = HAnimSite144;

HAnimSite HAnimSite156 = createNode("HAnimSite");
HAnimSite156.name = "l_femoral_medial_epicondyle";
HAnimSite156.DEF = "hanim_l_femoral_medial_epicondyle_pt";
HAnimSite156.translation = new SFVec3f(new float[0.039,0.41,-0.01]);
TouchSensor TouchSensor157 = createNode("TouchSensor");
TouchSensor157.description = "HAnimSite 40 hanim_l_femoral_medial_epicondyle_pt";
HAnimSite156.children = new MFNode();

HAnimSite156.children[0] = TouchSensor157;

Shape Shape158 = createNode("Shape");
Appearance Appearance159 = createNode("Appearance");
Material Material160 = createNode("Material");
Material160.diffuseColor = new SFColor(new float[1,1,1]);
Appearance159.material = Material160;

Shape158.appearance = Appearance159;

IndexedFaceSet IndexedFaceSet161 = createNode("IndexedFaceSet");
IndexedFaceSet161.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet161.creaseAngle = 0.5;
IndexedFaceSet161.solid = False;
ColorRGBA ColorRGBA162 = createNode("ColorRGBA");
ColorRGBA162.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet161.color = ColorRGBA162;

Coordinate Coordinate163 = createNode("Coordinate");
Coordinate163.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet161.coord = Coordinate163;

Shape158.geometry = IndexedFaceSet161;

HAnimSite156.children[1] = Shape158;

Billboard Billboard164 = createNode("Billboard");
Billboard164.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape165 = createNode("Shape");
Text Text166 = createNode("Text");
Text166.string = new MFString(new java.lang.String["40"]);
FontStyle FontStyle167 = createNode("FontStyle");
FontStyle167.size = 0.035;
Text166.fontStyle = FontStyle167;

Shape165.geometry = Text166;

Billboard164.children = new MFNode();

Billboard164.children[0] = Shape165;

HAnimSite156.children[2] = Billboard164;

HAnimSegment143.children[1] = HAnimSite156;

HAnimSite HAnimSite168 = createNode("HAnimSite");
HAnimSite168.name = "l_femoral_lateral_epicondyle";
HAnimSite168.DEF = "hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite168.translation = new SFVec3f(new float[0.127,0.41,-0.01]);
TouchSensor TouchSensor169 = createNode("TouchSensor");
TouchSensor169.description = "HAnimSite 39 hanim_l_femoral_lateral_epicondyle_pt";
HAnimSite168.children = new MFNode();

HAnimSite168.children[0] = TouchSensor169;

Shape Shape170 = createNode("Shape");
Appearance Appearance171 = createNode("Appearance");
Material Material172 = createNode("Material");
Material172.diffuseColor = new SFColor(new float[1,1,1]);
Appearance171.material = Material172;

Shape170.appearance = Appearance171;

IndexedFaceSet IndexedFaceSet173 = createNode("IndexedFaceSet");
IndexedFaceSet173.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet173.creaseAngle = 0.5;
IndexedFaceSet173.solid = False;
ColorRGBA ColorRGBA174 = createNode("ColorRGBA");
ColorRGBA174.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet173.color = ColorRGBA174;

Coordinate Coordinate175 = createNode("Coordinate");
Coordinate175.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet173.coord = Coordinate175;

Shape170.geometry = IndexedFaceSet173;

HAnimSite168.children[1] = Shape170;

Billboard Billboard176 = createNode("Billboard");
Billboard176.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape177 = createNode("Shape");
Text Text178 = createNode("Text");
Text178.string = new MFString(new java.lang.String["39"]);
FontStyle FontStyle179 = createNode("FontStyle");
FontStyle179.size = 0.035;
Text178.fontStyle = FontStyle179;

Shape177.geometry = Text178;

Billboard176.children = new MFNode();

Billboard176.children[0] = Shape177;

HAnimSite168.children[2] = Billboard176;

HAnimSegment143.children[2] = HAnimSite168;

HAnimSite HAnimSite180 = createNode("HAnimSite");
HAnimSite180.name = "l_suprapatella";
HAnimSite180.DEF = "hanim_l_suprapatella_pt";
HAnimSite180.translation = new SFVec3f(new float[0.085,0.41,0.042]);
TouchSensor TouchSensor181 = createNode("TouchSensor");
TouchSensor181.description = "HAnimSite 41 hanim_l_suprapatella_pt";
HAnimSite180.children = new MFNode();

HAnimSite180.children[0] = TouchSensor181;

Shape Shape182 = createNode("Shape");
Appearance Appearance183 = createNode("Appearance");
Material Material184 = createNode("Material");
Material184.diffuseColor = new SFColor(new float[1,1,1]);
Appearance183.material = Material184;

Shape182.appearance = Appearance183;

IndexedFaceSet IndexedFaceSet185 = createNode("IndexedFaceSet");
IndexedFaceSet185.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet185.creaseAngle = 0.5;
IndexedFaceSet185.solid = False;
ColorRGBA ColorRGBA186 = createNode("ColorRGBA");
ColorRGBA186.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet185.color = ColorRGBA186;

Coordinate Coordinate187 = createNode("Coordinate");
Coordinate187.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet185.coord = Coordinate187;

Shape182.geometry = IndexedFaceSet185;

HAnimSite180.children[1] = Shape182;

Billboard Billboard188 = createNode("Billboard");
Billboard188.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape189 = createNode("Shape");
Text Text190 = createNode("Text");
Text190.string = new MFString(new java.lang.String["41"]);
FontStyle FontStyle191 = createNode("FontStyle");
FontStyle191.size = 0.035;
Text190.fontStyle = FontStyle191;

Shape189.geometry = Text190;

Billboard188.children = new MFNode();

Billboard188.children[0] = Shape189;

HAnimSite180.children[2] = Billboard188;

HAnimSegment143.children[3] = HAnimSite180;

Shape Shape192 = createNode("Shape");
LineSet LineSet193 = createNode("LineSet");
LineSet193.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA194 = createNode("ColorRGBA");
ColorRGBA194.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet193.color = ColorRGBA194;

Coordinate Coordinate195 = createNode("Coordinate");
Coordinate195.point = new MFVec3f(new float[0.095,0.8266,-0.0183,0,0.826,0.02]);
LineSet193.coord = Coordinate195;

Shape192.geometry = LineSet193;

HAnimSegment143.children[4] = Shape192;

HAnimJoint142.children = new MFNode();

HAnimJoint142.children[0] = HAnimSegment143;

HAnimJoint HAnimJoint196 = createNode("HAnimJoint");
HAnimJoint196.name = "l_knee";
HAnimJoint196.DEF = "hanim_l_knee";
HAnimJoint196.center = new SFVec3f(new float[0.0926,0.4088,-0.01944]);
HAnimJoint196.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint196.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment197 = createNode("HAnimSegment");
HAnimSegment197.name = "l_calf";
HAnimSegment197.DEF = "hanim_l_calf";
HAnimSite HAnimSite198 = createNode("HAnimSite");
HAnimSite198.name = "l_tibiale";
HAnimSite198.DEF = "hanim_l_tibiale_pt";
HAnimSite198.translation = new SFVec3f(new float[0.09,0.31,0.038]);
TouchSensor TouchSensor199 = createNode("TouchSensor");
TouchSensor199.description = "HAnimSite 47 hanim_l_tibiale_pt";
HAnimSite198.children = new MFNode();

HAnimSite198.children[0] = TouchSensor199;

Shape Shape200 = createNode("Shape");
Appearance Appearance201 = createNode("Appearance");
Material Material202 = createNode("Material");
Material202.diffuseColor = new SFColor(new float[1,1,1]);
Appearance201.material = Material202;

Shape200.appearance = Appearance201;

IndexedFaceSet IndexedFaceSet203 = createNode("IndexedFaceSet");
IndexedFaceSet203.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet203.creaseAngle = 0.5;
IndexedFaceSet203.solid = False;
ColorRGBA ColorRGBA204 = createNode("ColorRGBA");
ColorRGBA204.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet203.color = ColorRGBA204;

Coordinate Coordinate205 = createNode("Coordinate");
Coordinate205.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet203.coord = Coordinate205;

Shape200.geometry = IndexedFaceSet203;

HAnimSite198.children[1] = Shape200;

Billboard Billboard206 = createNode("Billboard");
Billboard206.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape207 = createNode("Shape");
Text Text208 = createNode("Text");
Text208.string = new MFString(new java.lang.String["47"]);
FontStyle FontStyle209 = createNode("FontStyle");
FontStyle209.size = 0.035;
Text208.fontStyle = FontStyle209;

Shape207.geometry = Text208;

Billboard206.children = new MFNode();

Billboard206.children[0] = Shape207;

HAnimSite198.children[2] = Billboard206;

HAnimSegment197.children = new MFNode();

HAnimSegment197.children[0] = HAnimSite198;

HAnimSite HAnimSite210 = createNode("HAnimSite");
HAnimSite210.name = "l_medial_malleolus";
HAnimSite210.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite210.translation = new SFVec3f(new float[0.061,0.095,-0.02]);
TouchSensor TouchSensor211 = createNode("TouchSensor");
TouchSensor211.description = "HAnimSite 48 hanim_l_medial_malleolus_pt";
HAnimSite210.children = new MFNode();

HAnimSite210.children[0] = TouchSensor211;

Shape Shape212 = createNode("Shape");
Appearance Appearance213 = createNode("Appearance");
Material Material214 = createNode("Material");
Material214.diffuseColor = new SFColor(new float[1,1,1]);
Appearance213.material = Material214;

Shape212.appearance = Appearance213;

IndexedFaceSet IndexedFaceSet215 = createNode("IndexedFaceSet");
IndexedFaceSet215.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet215.creaseAngle = 0.5;
IndexedFaceSet215.solid = False;
ColorRGBA ColorRGBA216 = createNode("ColorRGBA");
ColorRGBA216.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet215.color = ColorRGBA216;

Coordinate Coordinate217 = createNode("Coordinate");
Coordinate217.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet215.coord = Coordinate217;

Shape212.geometry = IndexedFaceSet215;

HAnimSite210.children[1] = Shape212;

Billboard Billboard218 = createNode("Billboard");
Billboard218.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape219 = createNode("Shape");
Text Text220 = createNode("Text");
Text220.string = new MFString(new java.lang.String["48"]);
FontStyle FontStyle221 = createNode("FontStyle");
FontStyle221.size = 0.035;
Text220.fontStyle = FontStyle221;

Shape219.geometry = Text220;

Billboard218.children = new MFNode();

Billboard218.children[0] = Shape219;

HAnimSite210.children[2] = Billboard218;

HAnimSegment197.children[1] = HAnimSite210;

HAnimSite HAnimSite222 = createNode("HAnimSite");
HAnimSite222.name = "l_lateral_malleolus";
HAnimSite222.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite222.translation = new SFVec3f(new float[0.12,0.095,-0.02]);
TouchSensor TouchSensor223 = createNode("TouchSensor");
TouchSensor223.description = "HAnimSite 49 hanim_l_lateral_malleolus_pt";
HAnimSite222.children = new MFNode();

HAnimSite222.children[0] = TouchSensor223;

Shape Shape224 = createNode("Shape");
Appearance Appearance225 = createNode("Appearance");
Material Material226 = createNode("Material");
Material226.diffuseColor = new SFColor(new float[1,1,1]);
Appearance225.material = Material226;

Shape224.appearance = Appearance225;

IndexedFaceSet IndexedFaceSet227 = createNode("IndexedFaceSet");
IndexedFaceSet227.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet227.creaseAngle = 0.5;
IndexedFaceSet227.solid = False;
ColorRGBA ColorRGBA228 = createNode("ColorRGBA");
ColorRGBA228.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet227.color = ColorRGBA228;

Coordinate Coordinate229 = createNode("Coordinate");
Coordinate229.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet227.coord = Coordinate229;

Shape224.geometry = IndexedFaceSet227;

HAnimSite222.children[1] = Shape224;

Billboard Billboard230 = createNode("Billboard");
Billboard230.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape231 = createNode("Shape");
Text Text232 = createNode("Text");
Text232.string = new MFString(new java.lang.String["49"]);
FontStyle FontStyle233 = createNode("FontStyle");
FontStyle233.size = 0.035;
Text232.fontStyle = FontStyle233;

Shape231.geometry = Text232;

Billboard230.children = new MFNode();

Billboard230.children[0] = Shape231;

HAnimSite222.children[2] = Billboard230;

HAnimSegment197.children[2] = HAnimSite222;

Shape Shape234 = createNode("Shape");
LineSet LineSet235 = createNode("LineSet");
LineSet235.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA236 = createNode("ColorRGBA");
ColorRGBA236.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet235.color = ColorRGBA236;

Coordinate Coordinate237 = createNode("Coordinate");
Coordinate237.point = new MFVec3f(new float[0.0926,0.4088,-0.01944,0.095,0.8266,-0.0183]);
LineSet235.coord = Coordinate237;

Shape234.geometry = LineSet235;

HAnimSegment197.children[3] = Shape234;

HAnimJoint196.children = new MFNode();

HAnimJoint196.children[0] = HAnimSegment197;

HAnimJoint HAnimJoint238 = createNode("HAnimJoint");
HAnimJoint238.name = "l_talocrural";
HAnimJoint238.DEF = "hanim_l_talocrural";
HAnimJoint238.center = new SFVec3f(new float[0.0888,0.09545,-0.01045]);
HAnimJoint238.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint238.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment239 = createNode("HAnimSegment");
HAnimSegment239.name = "l_talus";
HAnimSegment239.DEF = "hanim_l_talus";
HAnimSite HAnimSite240 = createNode("HAnimSite");
HAnimSite240.name = "l_sphyrion";
HAnimSite240.DEF = "hanim_l_sphyrion_pt";
HAnimSite240.translation = new SFVec3f(new float[0.054,0.065,-0.02]);
TouchSensor TouchSensor241 = createNode("TouchSensor");
TouchSensor241.description = "HAnimSite 50 hanim_l_sphyrion_pt";
HAnimSite240.children = new MFNode();

HAnimSite240.children[0] = TouchSensor241;

Shape Shape242 = createNode("Shape");
Appearance Appearance243 = createNode("Appearance");
Material Material244 = createNode("Material");
Material244.diffuseColor = new SFColor(new float[1,1,1]);
Appearance243.material = Material244;

Shape242.appearance = Appearance243;

IndexedFaceSet IndexedFaceSet245 = createNode("IndexedFaceSet");
IndexedFaceSet245.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet245.creaseAngle = 0.5;
IndexedFaceSet245.solid = False;
ColorRGBA ColorRGBA246 = createNode("ColorRGBA");
ColorRGBA246.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet245.color = ColorRGBA246;

Coordinate Coordinate247 = createNode("Coordinate");
Coordinate247.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet245.coord = Coordinate247;

Shape242.geometry = IndexedFaceSet245;

HAnimSite240.children[1] = Shape242;

Billboard Billboard248 = createNode("Billboard");
Billboard248.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape249 = createNode("Shape");
Text Text250 = createNode("Text");
Text250.string = new MFString(new java.lang.String["50"]);
FontStyle FontStyle251 = createNode("FontStyle");
FontStyle251.size = 0.035;
Text250.fontStyle = FontStyle251;

Shape249.geometry = Text250;

Billboard248.children = new MFNode();

Billboard248.children[0] = Shape249;

HAnimSite240.children[2] = Billboard248;

HAnimSegment239.children = new MFNode();

HAnimSegment239.children[0] = HAnimSite240;

HAnimSite HAnimSite252 = createNode("HAnimSite");
HAnimSite252.name = "l_calcaneus_posterior";
HAnimSite252.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite252.translation = new SFVec3f(new float[0.09,0.03,-0.06]);
TouchSensor TouchSensor253 = createNode("TouchSensor");
TouchSensor253.description = "HAnimSite 58 hanim_l_calcaneus_posterior_pt";
HAnimSite252.children = new MFNode();

HAnimSite252.children[0] = TouchSensor253;

Shape Shape254 = createNode("Shape");
Appearance Appearance255 = createNode("Appearance");
Material Material256 = createNode("Material");
Material256.diffuseColor = new SFColor(new float[1,1,1]);
Appearance255.material = Material256;

Shape254.appearance = Appearance255;

IndexedFaceSet IndexedFaceSet257 = createNode("IndexedFaceSet");
IndexedFaceSet257.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet257.creaseAngle = 0.5;
IndexedFaceSet257.solid = False;
ColorRGBA ColorRGBA258 = createNode("ColorRGBA");
ColorRGBA258.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet257.color = ColorRGBA258;

Coordinate Coordinate259 = createNode("Coordinate");
Coordinate259.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet257.coord = Coordinate259;

Shape254.geometry = IndexedFaceSet257;

HAnimSite252.children[1] = Shape254;

Billboard Billboard260 = createNode("Billboard");
Billboard260.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape261 = createNode("Shape");
Text Text262 = createNode("Text");
Text262.string = new MFString(new java.lang.String["58"]);
FontStyle FontStyle263 = createNode("FontStyle");
FontStyle263.size = 0.035;
Text262.fontStyle = FontStyle263;

Shape261.geometry = Text262;

Billboard260.children = new MFNode();

Billboard260.children[0] = Shape261;

HAnimSite252.children[2] = Billboard260;

HAnimSegment239.children[1] = HAnimSite252;

Shape Shape264 = createNode("Shape");
LineSet LineSet265 = createNode("LineSet");
LineSet265.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA266 = createNode("ColorRGBA");
ColorRGBA266.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet265.color = ColorRGBA266;

Coordinate Coordinate267 = createNode("Coordinate");
Coordinate267.point = new MFVec3f(new float[0.0888,0.09545,-0.01045,0.0926,0.4088,-0.01944]);
LineSet265.coord = Coordinate267;

Shape264.geometry = LineSet265;

HAnimSegment239.children[2] = Shape264;

HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

HAnimJoint HAnimJoint268 = createNode("HAnimJoint");
HAnimJoint268.name = "l_talocalcaneonavicular";
HAnimJoint268.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint268.center = new SFVec3f(new float[0.0783,0.0369,0.0049]);
HAnimJoint268.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint268.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment269 = createNode("HAnimSegment");
HAnimSegment269.name = "l_navicular";
HAnimSegment269.DEF = "hanim_l_navicular";
Shape Shape270 = createNode("Shape");
LineSet LineSet271 = createNode("LineSet");
LineSet271.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA272 = createNode("ColorRGBA");
ColorRGBA272.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet271.color = ColorRGBA272;

Coordinate Coordinate273 = createNode("Coordinate");
Coordinate273.point = new MFVec3f(new float[0.0783,0.0369,0.0049,0.0888,0.09545,-0.01045]);
LineSet271.coord = Coordinate273;

Shape270.geometry = LineSet271;

HAnimSegment269.children = new MFNode();

HAnimSegment269.children[0] = Shape270;

HAnimJoint268.children = new MFNode();

HAnimJoint268.children[0] = HAnimSegment269;

HAnimJoint HAnimJoint274 = createNode("HAnimJoint");
HAnimJoint274.name = "l_cuneonavicular_1";
HAnimJoint274.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint274.center = new SFVec3f(new float[0.0674,0.0321,0.0184]);
HAnimJoint274.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint274.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment275 = createNode("HAnimSegment");
HAnimSegment275.name = "l_cuneiform_1";
HAnimSegment275.DEF = "hanim_l_cuneiform_1";
Shape Shape276 = createNode("Shape");
LineSet LineSet277 = createNode("LineSet");
LineSet277.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA278 = createNode("ColorRGBA");
ColorRGBA278.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet277.color = ColorRGBA278;

Coordinate Coordinate279 = createNode("Coordinate");
Coordinate279.point = new MFVec3f(new float[0.0674,0.0321,0.0184,0.0783,0.0369,0.0049]);
LineSet277.coord = Coordinate279;

Shape276.geometry = LineSet277;

HAnimSegment275.children = new MFNode();

HAnimSegment275.children[0] = Shape276;

HAnimJoint274.children = new MFNode();

HAnimJoint274.children[0] = HAnimSegment275;

HAnimJoint HAnimJoint280 = createNode("HAnimJoint");
HAnimJoint280.name = "l_tarsometatarsal_1";
HAnimJoint280.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint280.center = new SFVec3f(new float[0.0646,0.02324,0.0442]);
HAnimJoint280.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint280.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment281 = createNode("HAnimSegment");
HAnimSegment281.name = "l_metatarsal_1";
HAnimSegment281.DEF = "hanim_l_metatarsal_1";
Shape Shape282 = createNode("Shape");
LineSet LineSet283 = createNode("LineSet");
LineSet283.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA284 = createNode("ColorRGBA");
ColorRGBA284.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet283.color = ColorRGBA284;

Coordinate Coordinate285 = createNode("Coordinate");
Coordinate285.point = new MFVec3f(new float[0.0646,0.02324,0.0442,0.0674,0.0321,0.0184]);
LineSet283.coord = Coordinate285;

Shape282.geometry = LineSet283;

HAnimSegment281.children = new MFNode();

HAnimSegment281.children[0] = Shape282;

HAnimJoint280.children = new MFNode();

HAnimJoint280.children[0] = HAnimSegment281;

HAnimJoint HAnimJoint286 = createNode("HAnimJoint");
HAnimJoint286.name = "l_metatarsophalangeal_1";
HAnimJoint286.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint286.center = new SFVec3f(new float[0.0621,0.01442,0.0936]);
HAnimJoint286.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint286.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment287 = createNode("HAnimSegment");
HAnimSegment287.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment287.DEF = "hanim_l_tarsal_proximal_phalanx_1";
HAnimSite HAnimSite288 = createNode("HAnimSite");
HAnimSite288.name = "l_metatarsal_phalanx_1";
HAnimSite288.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite288.translation = new SFVec3f(new float[0.062,0.012,0.1]);
TouchSensor TouchSensor289 = createNode("TouchSensor");
TouchSensor289.description = "HAnimSite 55 hanim_l_metatarsal_phalanx_1_pt";
HAnimSite288.children = new MFNode();

HAnimSite288.children[0] = TouchSensor289;

Shape Shape290 = createNode("Shape");
Appearance Appearance291 = createNode("Appearance");
Material Material292 = createNode("Material");
Material292.diffuseColor = new SFColor(new float[1,1,1]);
Appearance291.material = Material292;

Shape290.appearance = Appearance291;

IndexedFaceSet IndexedFaceSet293 = createNode("IndexedFaceSet");
IndexedFaceSet293.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet293.creaseAngle = 0.5;
IndexedFaceSet293.solid = False;
ColorRGBA ColorRGBA294 = createNode("ColorRGBA");
ColorRGBA294.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet293.color = ColorRGBA294;

Coordinate Coordinate295 = createNode("Coordinate");
Coordinate295.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet293.coord = Coordinate295;

Shape290.geometry = IndexedFaceSet293;

HAnimSite288.children[1] = Shape290;

Billboard Billboard296 = createNode("Billboard");
Billboard296.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape297 = createNode("Shape");
Text Text298 = createNode("Text");
Text298.string = new MFString(new java.lang.String["55"]);
FontStyle FontStyle299 = createNode("FontStyle");
FontStyle299.size = 0.035;
Text298.fontStyle = FontStyle299;

Shape297.geometry = Text298;

Billboard296.children = new MFNode();

Billboard296.children[0] = Shape297;

HAnimSite288.children[2] = Billboard296;

HAnimSegment287.children = new MFNode();

HAnimSegment287.children[0] = HAnimSite288;

Shape Shape300 = createNode("Shape");
LineSet LineSet301 = createNode("LineSet");
LineSet301.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA302 = createNode("ColorRGBA");
ColorRGBA302.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet301.color = ColorRGBA302;

Coordinate Coordinate303 = createNode("Coordinate");
Coordinate303.point = new MFVec3f(new float[0.0621,0.01442,0.0936,0.0646,0.02324,0.0442]);
LineSet301.coord = Coordinate303;

Shape300.geometry = LineSet301;

HAnimSegment287.children[1] = Shape300;

HAnimJoint286.children = new MFNode();

HAnimJoint286.children[0] = HAnimSegment287;

HAnimJoint HAnimJoint304 = createNode("HAnimJoint");
HAnimJoint304.name = "l_tarsal_interphalangeal_1";
HAnimJoint304.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint304.center = new SFVec3f(new float[0.062,0.012,0.115]);
HAnimJoint304.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint304.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment305 = createNode("HAnimSegment");
HAnimSegment305.name = "l_tarsal_distal_phalanx_1";
HAnimSegment305.DEF = "hanim_l_tarsal_distal_phalanx_1";
HAnimSite HAnimSite306 = createNode("HAnimSite");
HAnimSite306.name = "l_tarsal_distal_phalanx_1";
HAnimSite306.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimSite306.translation = new SFVec3f(new float[0.062,0.012,0.134]);
TouchSensor TouchSensor307 = createNode("TouchSensor");
TouchSensor307.description = "HAnimSite 111 hanim_l_tarsal_distal_phalanx_1_tip";
HAnimSite306.children = new MFNode();

HAnimSite306.children[0] = TouchSensor307;

Shape Shape308 = createNode("Shape");
Appearance Appearance309 = createNode("Appearance");
Material Material310 = createNode("Material");
Material310.diffuseColor = new SFColor(new float[1,1,1]);
Appearance309.material = Material310;

Shape308.appearance = Appearance309;

IndexedFaceSet IndexedFaceSet311 = createNode("IndexedFaceSet");
IndexedFaceSet311.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet311.creaseAngle = 0.5;
IndexedFaceSet311.solid = False;
ColorRGBA ColorRGBA312 = createNode("ColorRGBA");
ColorRGBA312.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet311.color = ColorRGBA312;

Coordinate Coordinate313 = createNode("Coordinate");
Coordinate313.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet311.coord = Coordinate313;

Shape308.geometry = IndexedFaceSet311;

HAnimSite306.children[1] = Shape308;

Billboard Billboard314 = createNode("Billboard");
Billboard314.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape315 = createNode("Shape");
Text Text316 = createNode("Text");
Text316.string = new MFString(new java.lang.String["111"]);
FontStyle FontStyle317 = createNode("FontStyle");
FontStyle317.size = 0.035;
Text316.fontStyle = FontStyle317;

Shape315.geometry = Text316;

Billboard314.children = new MFNode();

Billboard314.children[0] = Shape315;

HAnimSite306.children[2] = Billboard314;

HAnimSegment305.children = new MFNode();

HAnimSegment305.children[0] = HAnimSite306;

Shape Shape318 = createNode("Shape");
LineSet LineSet319 = createNode("LineSet");
LineSet319.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA320 = createNode("ColorRGBA");
ColorRGBA320.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet319.color = ColorRGBA320;

Coordinate Coordinate321 = createNode("Coordinate");
Coordinate321.point = new MFVec3f(new float[0.062,0.012,0.115,0.0621,0.01442,0.0936]);
LineSet319.coord = Coordinate321;

Shape318.geometry = LineSet319;

HAnimSegment305.children[1] = Shape318;

HAnimJoint304.children = new MFNode();

HAnimJoint304.children[0] = HAnimSegment305;

HAnimJoint286.children[1] = HAnimJoint304;

HAnimJoint280.children[1] = HAnimJoint286;

HAnimJoint274.children[1] = HAnimJoint280;

HAnimJoint268.children[1] = HAnimJoint274;

HAnimJoint HAnimJoint322 = createNode("HAnimJoint");
HAnimJoint322.name = "l_cuneonavicular_2";
HAnimJoint322.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint322.center = new SFVec3f(new float[0.0814,0.0335,0.02143]);
HAnimJoint322.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint322.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment323 = createNode("HAnimSegment");
HAnimSegment323.name = "l_cuneiform_2";
HAnimSegment323.DEF = "hanim_l_cuneiform_2";
Shape Shape324 = createNode("Shape");
LineSet LineSet325 = createNode("LineSet");
LineSet325.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA326 = createNode("ColorRGBA");
ColorRGBA326.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet325.color = ColorRGBA326;

Coordinate Coordinate327 = createNode("Coordinate");
Coordinate327.point = new MFVec3f(new float[0.0814,0.0335,0.02143,0.0783,0.0369,0.0049]);
LineSet325.coord = Coordinate327;

Shape324.geometry = LineSet325;

HAnimSegment323.children = new MFNode();

HAnimSegment323.children[0] = Shape324;

HAnimJoint322.children = new MFNode();

HAnimJoint322.children[0] = HAnimSegment323;

HAnimJoint HAnimJoint328 = createNode("HAnimJoint");
HAnimJoint328.name = "l_tarsometatarsal_2";
HAnimJoint328.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint328.center = new SFVec3f(new float[0.0802,0.0261,0.0411]);
HAnimJoint328.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint328.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment329 = createNode("HAnimSegment");
HAnimSegment329.name = "l_metatarsal_2";
HAnimSegment329.DEF = "hanim_l_metatarsal_2";
Shape Shape330 = createNode("Shape");
LineSet LineSet331 = createNode("LineSet");
LineSet331.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA332 = createNode("ColorRGBA");
ColorRGBA332.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet331.color = ColorRGBA332;

Coordinate Coordinate333 = createNode("Coordinate");
Coordinate333.point = new MFVec3f(new float[0.0802,0.0261,0.0411,0.0814,0.0335,0.02143]);
LineSet331.coord = Coordinate333;

Shape330.geometry = LineSet331;

HAnimSegment329.children = new MFNode();

HAnimSegment329.children[0] = Shape330;

HAnimJoint328.children = new MFNode();

HAnimJoint328.children[0] = HAnimSegment329;

HAnimJoint HAnimJoint334 = createNode("HAnimJoint");
HAnimJoint334.name = "l_metatarsophalangeal_2";
HAnimJoint334.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint334.center = new SFVec3f(new float[0.0825,0.01497,0.09783]);
HAnimJoint334.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint334.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment335 = createNode("HAnimSegment");
HAnimSegment335.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment335.DEF = "hanim_l_tarsal_proximal_phalanx_2";
Shape Shape336 = createNode("Shape");
LineSet LineSet337 = createNode("LineSet");
LineSet337.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA338 = createNode("ColorRGBA");
ColorRGBA338.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet337.color = ColorRGBA338;

Coordinate Coordinate339 = createNode("Coordinate");
Coordinate339.point = new MFVec3f(new float[0.0825,0.01497,0.09783,0.0802,0.0261,0.0411]);
LineSet337.coord = Coordinate339;

Shape336.geometry = LineSet337;

HAnimSegment335.children = new MFNode();

HAnimSegment335.children[0] = Shape336;

HAnimJoint334.children = new MFNode();

HAnimJoint334.children[0] = HAnimSegment335;

HAnimJoint HAnimJoint340 = createNode("HAnimJoint");
HAnimJoint340.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint340.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint340.center = new SFVec3f(new float[0.0843,0.01265,0.114]);
HAnimJoint340.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint340.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment341 = createNode("HAnimSegment");
HAnimSegment341.name = "l_tarsal_middle_phalanx_2";
HAnimSegment341.DEF = "hanim_l_tarsal_middle_phalanx_2";
Shape Shape342 = createNode("Shape");
LineSet LineSet343 = createNode("LineSet");
LineSet343.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA344 = createNode("ColorRGBA");
ColorRGBA344.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet343.color = ColorRGBA344;

Coordinate Coordinate345 = createNode("Coordinate");
Coordinate345.point = new MFVec3f(new float[0.0843,0.01265,0.114,0.0825,0.01497,0.09783]);
LineSet343.coord = Coordinate345;

Shape342.geometry = LineSet343;

HAnimSegment341.children = new MFNode();

HAnimSegment341.children[0] = Shape342;

HAnimJoint340.children = new MFNode();

HAnimJoint340.children[0] = HAnimSegment341;

HAnimJoint HAnimJoint346 = createNode("HAnimJoint");
HAnimJoint346.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint346.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint346.center = new SFVec3f(new float[0.0843,0.00982,0.123435]);
HAnimJoint346.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint346.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment347 = createNode("HAnimSegment");
HAnimSegment347.name = "l_tarsal_distal_phalanx_2";
HAnimSegment347.DEF = "hanim_l_tarsal_distal_phalanx_2";
HAnimSite HAnimSite348 = createNode("HAnimSite");
HAnimSite348.name = "l_tarsal_distal_phalanx_2";
HAnimSite348.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite348.translation = new SFVec3f(new float[0.08,0.016,0.14]);
TouchSensor TouchSensor349 = createNode("TouchSensor");
TouchSensor349.description = "HAnimSite 112 hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite348.children = new MFNode();

HAnimSite348.children[0] = TouchSensor349;

Shape Shape350 = createNode("Shape");
Appearance Appearance351 = createNode("Appearance");
Material Material352 = createNode("Material");
Material352.diffuseColor = new SFColor(new float[1,1,1]);
Appearance351.material = Material352;

Shape350.appearance = Appearance351;

IndexedFaceSet IndexedFaceSet353 = createNode("IndexedFaceSet");
IndexedFaceSet353.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet353.creaseAngle = 0.5;
IndexedFaceSet353.solid = False;
ColorRGBA ColorRGBA354 = createNode("ColorRGBA");
ColorRGBA354.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet353.color = ColorRGBA354;

Coordinate Coordinate355 = createNode("Coordinate");
Coordinate355.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet353.coord = Coordinate355;

Shape350.geometry = IndexedFaceSet353;

HAnimSite348.children[1] = Shape350;

Billboard Billboard356 = createNode("Billboard");
Billboard356.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape357 = createNode("Shape");
Text Text358 = createNode("Text");
Text358.string = new MFString(new java.lang.String["112"]);
FontStyle FontStyle359 = createNode("FontStyle");
FontStyle359.size = 0.035;
Text358.fontStyle = FontStyle359;

Shape357.geometry = Text358;

Billboard356.children = new MFNode();

Billboard356.children[0] = Shape357;

HAnimSite348.children[2] = Billboard356;

HAnimSegment347.children = new MFNode();

HAnimSegment347.children[0] = HAnimSite348;

Shape Shape360 = createNode("Shape");
LineSet LineSet361 = createNode("LineSet");
LineSet361.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA362 = createNode("ColorRGBA");
ColorRGBA362.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet361.color = ColorRGBA362;

Coordinate Coordinate363 = createNode("Coordinate");
Coordinate363.point = new MFVec3f(new float[0.0843,0.00982,0.123435,0.0843,0.01265,0.114]);
LineSet361.coord = Coordinate363;

Shape360.geometry = LineSet361;

HAnimSegment347.children[1] = Shape360;

HAnimJoint346.children = new MFNode();

HAnimJoint346.children[0] = HAnimSegment347;

HAnimJoint340.children[1] = HAnimJoint346;

HAnimJoint334.children[1] = HAnimJoint340;

HAnimJoint328.children[1] = HAnimJoint334;

HAnimJoint322.children[1] = HAnimJoint328;

HAnimJoint268.children[2] = HAnimJoint322;

HAnimJoint HAnimJoint364 = createNode("HAnimJoint");
HAnimJoint364.name = "l_cuneonavicular_3";
HAnimJoint364.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint364.center = new SFVec3f(new float[0.09297,0.0334,0.01982]);
HAnimJoint364.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint364.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment365 = createNode("HAnimSegment");
HAnimSegment365.name = "l_cuneiform_3";
HAnimSegment365.DEF = "hanim_l_cuneiform_3";
Shape Shape366 = createNode("Shape");
LineSet LineSet367 = createNode("LineSet");
LineSet367.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA368 = createNode("ColorRGBA");
ColorRGBA368.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet367.color = ColorRGBA368;

Coordinate Coordinate369 = createNode("Coordinate");
Coordinate369.point = new MFVec3f(new float[0.09297,0.0334,0.01982,0.0783,0.0369,0.0049]);
LineSet367.coord = Coordinate369;

Shape366.geometry = LineSet367;

HAnimSegment365.children = new MFNode();

HAnimSegment365.children[0] = Shape366;

HAnimJoint364.children = new MFNode();

HAnimJoint364.children[0] = HAnimSegment365;

HAnimJoint HAnimJoint370 = createNode("HAnimJoint");
HAnimJoint370.name = "l_tarsometatarsal_3";
HAnimJoint370.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint370.center = new SFVec3f(new float[0.09459,0.0261,0.0394]);
HAnimJoint370.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint370.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment371 = createNode("HAnimSegment");
HAnimSegment371.name = "l_metatarsal_3";
HAnimSegment371.DEF = "hanim_l_metatarsal_3";
Shape Shape372 = createNode("Shape");
LineSet LineSet373 = createNode("LineSet");
LineSet373.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA374 = createNode("ColorRGBA");
ColorRGBA374.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet373.color = ColorRGBA374;

Coordinate Coordinate375 = createNode("Coordinate");
Coordinate375.point = new MFVec3f(new float[0.09459,0.0261,0.0394,0.09297,0.0334,0.01982]);
LineSet373.coord = Coordinate375;

Shape372.geometry = LineSet373;

HAnimSegment371.children = new MFNode();

HAnimSegment371.children[0] = Shape372;

HAnimJoint370.children = new MFNode();

HAnimJoint370.children[0] = HAnimSegment371;

HAnimJoint HAnimJoint376 = createNode("HAnimJoint");
HAnimJoint376.name = "l_metatarsophalangeal_3";
HAnimJoint376.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint376.center = new SFVec3f(new float[0.0965,0.01505,0.0954]);
HAnimJoint376.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint376.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment377 = createNode("HAnimSegment");
HAnimSegment377.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment377.DEF = "hanim_l_tarsal_proximal_phalanx_3";
Shape Shape378 = createNode("Shape");
LineSet LineSet379 = createNode("LineSet");
LineSet379.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA380 = createNode("ColorRGBA");
ColorRGBA380.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet379.color = ColorRGBA380;

Coordinate Coordinate381 = createNode("Coordinate");
Coordinate381.point = new MFVec3f(new float[0.0965,0.01505,0.0954,0.09459,0.0261,0.0394]);
LineSet379.coord = Coordinate381;

Shape378.geometry = LineSet379;

HAnimSegment377.children = new MFNode();

HAnimSegment377.children[0] = Shape378;

HAnimJoint376.children = new MFNode();

HAnimJoint376.children[0] = HAnimSegment377;

HAnimJoint HAnimJoint382 = createNode("HAnimJoint");
HAnimJoint382.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint382.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint382.center = new SFVec3f(new float[0.09886,0.01192,0.11047]);
HAnimJoint382.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint382.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment383 = createNode("HAnimSegment");
HAnimSegment383.name = "l_tarsal_middle_phalanx_3";
HAnimSegment383.DEF = "hanim_l_tarsal_middle_phalanx_3";
Shape Shape384 = createNode("Shape");
LineSet LineSet385 = createNode("LineSet");
LineSet385.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA386 = createNode("ColorRGBA");
ColorRGBA386.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet385.color = ColorRGBA386;

Coordinate Coordinate387 = createNode("Coordinate");
Coordinate387.point = new MFVec3f(new float[0.09886,0.01192,0.11047,0.0965,0.01505,0.0954]);
LineSet385.coord = Coordinate387;

Shape384.geometry = LineSet385;

HAnimSegment383.children = new MFNode();

HAnimSegment383.children[0] = Shape384;

HAnimJoint382.children = new MFNode();

HAnimJoint382.children[0] = HAnimSegment383;

HAnimJoint HAnimJoint388 = createNode("HAnimJoint");
HAnimJoint388.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint388.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint388.center = new SFVec3f(new float[0.1004,0.00983,0.1197]);
HAnimJoint388.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint388.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment389 = createNode("HAnimSegment");
HAnimSegment389.name = "l_tarsal_distal_phalanx_3";
HAnimSegment389.DEF = "hanim_l_tarsal_distal_phalanx_3";
HAnimSite HAnimSite390 = createNode("HAnimSite");
HAnimSite390.name = "l_tarsal_distal_phalanx_3";
HAnimSite390.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimSite390.translation = new SFVec3f(new float[0.1,0.016,0.14]);
TouchSensor TouchSensor391 = createNode("TouchSensor");
TouchSensor391.description = "HAnimSite 113 hanim_l_tarsal_distal_phalanx_3_tip";
HAnimSite390.children = new MFNode();

HAnimSite390.children[0] = TouchSensor391;

Shape Shape392 = createNode("Shape");
Appearance Appearance393 = createNode("Appearance");
Material Material394 = createNode("Material");
Material394.diffuseColor = new SFColor(new float[1,1,1]);
Appearance393.material = Material394;

Shape392.appearance = Appearance393;

IndexedFaceSet IndexedFaceSet395 = createNode("IndexedFaceSet");
IndexedFaceSet395.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet395.creaseAngle = 0.5;
IndexedFaceSet395.solid = False;
ColorRGBA ColorRGBA396 = createNode("ColorRGBA");
ColorRGBA396.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet395.color = ColorRGBA396;

Coordinate Coordinate397 = createNode("Coordinate");
Coordinate397.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet395.coord = Coordinate397;

Shape392.geometry = IndexedFaceSet395;

HAnimSite390.children[1] = Shape392;

Billboard Billboard398 = createNode("Billboard");
Billboard398.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape399 = createNode("Shape");
Text Text400 = createNode("Text");
Text400.string = new MFString(new java.lang.String["113"]);
FontStyle FontStyle401 = createNode("FontStyle");
FontStyle401.size = 0.035;
Text400.fontStyle = FontStyle401;

Shape399.geometry = Text400;

Billboard398.children = new MFNode();

Billboard398.children[0] = Shape399;

HAnimSite390.children[2] = Billboard398;

HAnimSegment389.children = new MFNode();

HAnimSegment389.children[0] = HAnimSite390;

Shape Shape402 = createNode("Shape");
LineSet LineSet403 = createNode("LineSet");
LineSet403.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA404 = createNode("ColorRGBA");
ColorRGBA404.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet403.color = ColorRGBA404;

Coordinate Coordinate405 = createNode("Coordinate");
Coordinate405.point = new MFVec3f(new float[0.1004,0.00983,0.1197,0.09886,0.01192,0.11047]);
LineSet403.coord = Coordinate405;

Shape402.geometry = LineSet403;

HAnimSegment389.children[1] = Shape402;

HAnimJoint388.children = new MFNode();

HAnimJoint388.children[0] = HAnimSegment389;

HAnimJoint382.children[1] = HAnimJoint388;

HAnimJoint376.children[1] = HAnimJoint382;

HAnimJoint370.children[1] = HAnimJoint376;

HAnimJoint364.children[1] = HAnimJoint370;

HAnimJoint268.children[3] = HAnimJoint364;

HAnimJoint238.children[1] = HAnimJoint268;

HAnimJoint HAnimJoint406 = createNode("HAnimJoint");
HAnimJoint406.name = "l_calcaneocuboid";
HAnimJoint406.DEF = "hanim_l_calcaneocuboid";
HAnimJoint406.center = new SFVec3f(new float[0.0891,0.05798,-0.0259]);
HAnimJoint406.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint406.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment407 = createNode("HAnimSegment");
HAnimSegment407.name = "l_calcaneus";
HAnimSegment407.DEF = "hanim_l_calcaneus";
Shape Shape408 = createNode("Shape");
LineSet LineSet409 = createNode("LineSet");
LineSet409.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA410 = createNode("ColorRGBA");
ColorRGBA410.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet409.color = ColorRGBA410;

Coordinate Coordinate411 = createNode("Coordinate");
Coordinate411.point = new MFVec3f(new float[0.0891,0.05798,-0.0259,0.0888,0.09545,-0.01045]);
LineSet409.coord = Coordinate411;

Shape408.geometry = LineSet409;

HAnimSegment407.children = new MFNode();

HAnimSegment407.children[0] = Shape408;

HAnimJoint406.children = new MFNode();

HAnimJoint406.children[0] = HAnimSegment407;

HAnimJoint HAnimJoint412 = createNode("HAnimJoint");
HAnimJoint412.name = "l_transversetarsal";
HAnimJoint412.DEF = "hanim_l_transversetarsal";
HAnimJoint412.center = new SFVec3f(new float[0.11063,0.03528,0.0021]);
HAnimJoint412.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint412.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment413 = createNode("HAnimSegment");
HAnimSegment413.name = "l_cuboid";
HAnimSegment413.DEF = "hanim_l_cuboid";
Shape Shape414 = createNode("Shape");
LineSet LineSet415 = createNode("LineSet");
LineSet415.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA416 = createNode("ColorRGBA");
ColorRGBA416.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet415.color = ColorRGBA416;

Coordinate Coordinate417 = createNode("Coordinate");
Coordinate417.point = new MFVec3f(new float[0.11063,0.03528,0.0021,0.0891,0.05798,-0.0259]);
LineSet415.coord = Coordinate417;

Shape414.geometry = LineSet415;

HAnimSegment413.children = new MFNode();

HAnimSegment413.children[0] = Shape414;

HAnimJoint412.children = new MFNode();

HAnimJoint412.children[0] = HAnimSegment413;

HAnimJoint HAnimJoint418 = createNode("HAnimJoint");
HAnimJoint418.name = "l_tarsometatarsal_4";
HAnimJoint418.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint418.center = new SFVec3f(new float[0.10649,0.02454,0.03843]);
HAnimJoint418.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint418.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment419 = createNode("HAnimSegment");
HAnimSegment419.name = "l_metatarsal_4";
HAnimSegment419.DEF = "hanim_l_metatarsal_4";
Shape Shape420 = createNode("Shape");
LineSet LineSet421 = createNode("LineSet");
LineSet421.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA422 = createNode("ColorRGBA");
ColorRGBA422.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet421.color = ColorRGBA422;

Coordinate Coordinate423 = createNode("Coordinate");
Coordinate423.point = new MFVec3f(new float[0.10649,0.02454,0.03843,0.11063,0.03528,0.0021]);
LineSet421.coord = Coordinate423;

Shape420.geometry = LineSet421;

HAnimSegment419.children = new MFNode();

HAnimSegment419.children[0] = Shape420;

HAnimJoint418.children = new MFNode();

HAnimJoint418.children[0] = HAnimSegment419;

HAnimJoint HAnimJoint424 = createNode("HAnimJoint");
HAnimJoint424.name = "l_metatarsophalangeal_4";
HAnimJoint424.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint424.center = new SFVec3f(new float[0.109867,0.01435,0.09117]);
HAnimJoint424.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint424.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment425 = createNode("HAnimSegment");
HAnimSegment425.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment425.DEF = "hanim_l_tarsal_proximal_phalanx_4";
Shape Shape426 = createNode("Shape");
LineSet LineSet427 = createNode("LineSet");
LineSet427.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA428 = createNode("ColorRGBA");
ColorRGBA428.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet427.color = ColorRGBA428;

Coordinate Coordinate429 = createNode("Coordinate");
Coordinate429.point = new MFVec3f(new float[0.109867,0.01435,0.09117,0.10649,0.02454,0.03843]);
LineSet427.coord = Coordinate429;

Shape426.geometry = LineSet427;

HAnimSegment425.children = new MFNode();

HAnimSegment425.children[0] = Shape426;

HAnimJoint424.children = new MFNode();

HAnimJoint424.children[0] = HAnimSegment425;

HAnimJoint HAnimJoint430 = createNode("HAnimJoint");
HAnimJoint430.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint430.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint430.center = new SFVec3f(new float[0.11416,0.01224,0.10631]);
HAnimJoint430.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint430.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment431 = createNode("HAnimSegment");
HAnimSegment431.name = "l_tarsal_middle_phalanx_4";
HAnimSegment431.DEF = "hanim_l_tarsal_middle_phalanx_4";
Shape Shape432 = createNode("Shape");
LineSet LineSet433 = createNode("LineSet");
LineSet433.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA434 = createNode("ColorRGBA");
ColorRGBA434.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet433.color = ColorRGBA434;

Coordinate Coordinate435 = createNode("Coordinate");
Coordinate435.point = new MFVec3f(new float[0.11416,0.01224,0.10631,0.109867,0.01435,0.09117]);
LineSet433.coord = Coordinate435;

Shape432.geometry = LineSet433;

HAnimSegment431.children = new MFNode();

HAnimSegment431.children[0] = Shape432;

HAnimJoint430.children = new MFNode();

HAnimJoint430.children[0] = HAnimSegment431;

HAnimJoint HAnimJoint436 = createNode("HAnimJoint");
HAnimJoint436.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint436.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint436.center = new SFVec3f(new float[0.11567,0.00936,0.11369]);
HAnimJoint436.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint436.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment437 = createNode("HAnimSegment");
HAnimSegment437.name = "l_tarsal_distal_phalanx_4";
HAnimSegment437.DEF = "hanim_l_tarsal_distal_phalanx_4";
HAnimSite HAnimSite438 = createNode("HAnimSite");
HAnimSite438.name = "l_tarsal_distal_phalanx_4";
HAnimSite438.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimSite438.translation = new SFVec3f(new float[0.115,0.016,0.13]);
TouchSensor TouchSensor439 = createNode("TouchSensor");
TouchSensor439.description = "HAnimSite 114 hanim_l_tarsal_distal_phalanx_4_tip";
HAnimSite438.children = new MFNode();

HAnimSite438.children[0] = TouchSensor439;

Shape Shape440 = createNode("Shape");
Appearance Appearance441 = createNode("Appearance");
Material Material442 = createNode("Material");
Material442.diffuseColor = new SFColor(new float[1,1,1]);
Appearance441.material = Material442;

Shape440.appearance = Appearance441;

IndexedFaceSet IndexedFaceSet443 = createNode("IndexedFaceSet");
IndexedFaceSet443.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet443.creaseAngle = 0.5;
IndexedFaceSet443.solid = False;
ColorRGBA ColorRGBA444 = createNode("ColorRGBA");
ColorRGBA444.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet443.color = ColorRGBA444;

Coordinate Coordinate445 = createNode("Coordinate");
Coordinate445.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet443.coord = Coordinate445;

Shape440.geometry = IndexedFaceSet443;

HAnimSite438.children[1] = Shape440;

Billboard Billboard446 = createNode("Billboard");
Billboard446.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape447 = createNode("Shape");
Text Text448 = createNode("Text");
Text448.string = new MFString(new java.lang.String["114"]);
FontStyle FontStyle449 = createNode("FontStyle");
FontStyle449.size = 0.035;
Text448.fontStyle = FontStyle449;

Shape447.geometry = Text448;

Billboard446.children = new MFNode();

Billboard446.children[0] = Shape447;

HAnimSite438.children[2] = Billboard446;

HAnimSegment437.children = new MFNode();

HAnimSegment437.children[0] = HAnimSite438;

Shape Shape450 = createNode("Shape");
LineSet LineSet451 = createNode("LineSet");
LineSet451.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA452 = createNode("ColorRGBA");
ColorRGBA452.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet451.color = ColorRGBA452;

Coordinate Coordinate453 = createNode("Coordinate");
Coordinate453.point = new MFVec3f(new float[0.11567,0.00936,0.11369,0.11416,0.01224,0.10631]);
LineSet451.coord = Coordinate453;

Shape450.geometry = LineSet451;

HAnimSegment437.children[1] = Shape450;

HAnimJoint436.children = new MFNode();

HAnimJoint436.children[0] = HAnimSegment437;

HAnimJoint430.children[1] = HAnimJoint436;

HAnimJoint424.children[1] = HAnimJoint430;

HAnimJoint418.children[1] = HAnimJoint424;

HAnimJoint412.children[1] = HAnimJoint418;

HAnimJoint HAnimJoint454 = createNode("HAnimJoint");
HAnimJoint454.name = "l_tarsometatarsal_5";
HAnimJoint454.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint454.center = new SFVec3f(new float[0.1208,0.02094,0.03474]);
HAnimJoint454.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint454.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment455 = createNode("HAnimSegment");
HAnimSegment455.name = "l_metatarsal_5";
HAnimSegment455.DEF = "hanim_l_metatarsal_5";
Shape Shape456 = createNode("Shape");
LineSet LineSet457 = createNode("LineSet");
LineSet457.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA458 = createNode("ColorRGBA");
ColorRGBA458.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet457.color = ColorRGBA458;

Coordinate Coordinate459 = createNode("Coordinate");
Coordinate459.point = new MFVec3f(new float[0.1208,0.02094,0.03474,0.11063,0.03528,0.0021]);
LineSet457.coord = Coordinate459;

Shape456.geometry = LineSet457;

HAnimSegment455.children = new MFNode();

HAnimSegment455.children[0] = Shape456;

HAnimJoint454.children = new MFNode();

HAnimJoint454.children[0] = HAnimSegment455;

HAnimJoint HAnimJoint460 = createNode("HAnimJoint");
HAnimJoint460.name = "l_metatarsophalangeal_5";
HAnimJoint460.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint460.center = new SFVec3f(new float[0.124065,0.01367,0.08656]);
HAnimJoint460.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint460.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment461 = createNode("HAnimSegment");
HAnimSegment461.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment461.DEF = "hanim_l_tarsal_proximal_phalanx_5";
Shape Shape462 = createNode("Shape");
LineSet LineSet463 = createNode("LineSet");
LineSet463.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA464 = createNode("ColorRGBA");
ColorRGBA464.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet463.color = ColorRGBA464;

Coordinate Coordinate465 = createNode("Coordinate");
Coordinate465.point = new MFVec3f(new float[0.124065,0.01367,0.08656,0.1208,0.02094,0.03474]);
LineSet463.coord = Coordinate465;

Shape462.geometry = LineSet463;

HAnimSegment461.children = new MFNode();

HAnimSegment461.children[0] = Shape462;

HAnimJoint460.children = new MFNode();

HAnimJoint460.children[0] = HAnimSegment461;

HAnimJoint HAnimJoint466 = createNode("HAnimJoint");
HAnimJoint466.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint466.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint466.center = new SFVec3f(new float[0.12638,0.01086,0.09414]);
HAnimJoint466.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint466.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment467 = createNode("HAnimSegment");
HAnimSegment467.name = "l_tarsal_middle_phalanx_5";
HAnimSegment467.DEF = "hanim_l_tarsal_middle_phalanx_5";
HAnimSite HAnimSite468 = createNode("HAnimSite");
HAnimSite468.name = "l_metatarsal_phalanx_5";
HAnimSite468.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite468.translation = new SFVec3f(new float[0.12,0.02,0.04]);
TouchSensor TouchSensor469 = createNode("TouchSensor");
TouchSensor469.description = "HAnimSite 56 hanim_l_metatarsal_phalanx_5_pt";
HAnimSite468.children = new MFNode();

HAnimSite468.children[0] = TouchSensor469;

Shape Shape470 = createNode("Shape");
Appearance Appearance471 = createNode("Appearance");
Material Material472 = createNode("Material");
Material472.diffuseColor = new SFColor(new float[1,1,1]);
Appearance471.material = Material472;

Shape470.appearance = Appearance471;

IndexedFaceSet IndexedFaceSet473 = createNode("IndexedFaceSet");
IndexedFaceSet473.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet473.creaseAngle = 0.5;
IndexedFaceSet473.solid = False;
ColorRGBA ColorRGBA474 = createNode("ColorRGBA");
ColorRGBA474.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet473.color = ColorRGBA474;

Coordinate Coordinate475 = createNode("Coordinate");
Coordinate475.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet473.coord = Coordinate475;

Shape470.geometry = IndexedFaceSet473;

HAnimSite468.children[1] = Shape470;

Billboard Billboard476 = createNode("Billboard");
Billboard476.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape477 = createNode("Shape");
Text Text478 = createNode("Text");
Text478.string = new MFString(new java.lang.String["56"]);
FontStyle FontStyle479 = createNode("FontStyle");
FontStyle479.size = 0.035;
Text478.fontStyle = FontStyle479;

Shape477.geometry = Text478;

Billboard476.children = new MFNode();

Billboard476.children[0] = Shape477;

HAnimSite468.children[2] = Billboard476;

HAnimSegment467.children = new MFNode();

HAnimSegment467.children[0] = HAnimSite468;

Shape Shape480 = createNode("Shape");
LineSet LineSet481 = createNode("LineSet");
LineSet481.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA482 = createNode("ColorRGBA");
ColorRGBA482.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet481.color = ColorRGBA482;

Coordinate Coordinate483 = createNode("Coordinate");
Coordinate483.point = new MFVec3f(new float[0.12638,0.01086,0.09414,0.124065,0.01367,0.08656]);
LineSet481.coord = Coordinate483;

Shape480.geometry = LineSet481;

HAnimSegment467.children[1] = Shape480;

HAnimJoint466.children = new MFNode();

HAnimJoint466.children[0] = HAnimSegment467;

HAnimJoint HAnimJoint484 = createNode("HAnimJoint");
HAnimJoint484.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint484.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint484.center = new SFVec3f(new float[0.12728,0.00856,0.10188]);
HAnimJoint484.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint484.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment485 = createNode("HAnimSegment");
HAnimSegment485.name = "l_tarsal_distal_phalanx_5";
HAnimSegment485.DEF = "hanim_l_tarsal_distal_phalanx_5";
HAnimSite HAnimSite486 = createNode("HAnimSite");
HAnimSite486.name = "l_tarsal_distal_phalanx_5";
HAnimSite486.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimSite486.translation = new SFVec3f(new float[0.125,0.016,0.115]);
TouchSensor TouchSensor487 = createNode("TouchSensor");
TouchSensor487.description = "HAnimSite 115 hanim_l_tarsal_distal_phalanx_5_tip";
HAnimSite486.children = new MFNode();

HAnimSite486.children[0] = TouchSensor487;

Shape Shape488 = createNode("Shape");
Appearance Appearance489 = createNode("Appearance");
Material Material490 = createNode("Material");
Material490.diffuseColor = new SFColor(new float[1,1,1]);
Appearance489.material = Material490;

Shape488.appearance = Appearance489;

IndexedFaceSet IndexedFaceSet491 = createNode("IndexedFaceSet");
IndexedFaceSet491.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet491.creaseAngle = 0.5;
IndexedFaceSet491.solid = False;
ColorRGBA ColorRGBA492 = createNode("ColorRGBA");
ColorRGBA492.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet491.color = ColorRGBA492;

Coordinate Coordinate493 = createNode("Coordinate");
Coordinate493.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet491.coord = Coordinate493;

Shape488.geometry = IndexedFaceSet491;

HAnimSite486.children[1] = Shape488;

Billboard Billboard494 = createNode("Billboard");
Billboard494.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape495 = createNode("Shape");
Text Text496 = createNode("Text");
Text496.string = new MFString(new java.lang.String["115"]);
FontStyle FontStyle497 = createNode("FontStyle");
FontStyle497.size = 0.035;
Text496.fontStyle = FontStyle497;

Shape495.geometry = Text496;

Billboard494.children = new MFNode();

Billboard494.children[0] = Shape495;

HAnimSite486.children[2] = Billboard494;

HAnimSegment485.children = new MFNode();

HAnimSegment485.children[0] = HAnimSite486;

Shape Shape498 = createNode("Shape");
LineSet LineSet499 = createNode("LineSet");
LineSet499.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA500 = createNode("ColorRGBA");
ColorRGBA500.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet499.color = ColorRGBA500;

Coordinate Coordinate501 = createNode("Coordinate");
Coordinate501.point = new MFVec3f(new float[0.12728,0.00856,0.10188,0.12638,0.01086,0.09414]);
LineSet499.coord = Coordinate501;

Shape498.geometry = LineSet499;

HAnimSegment485.children[1] = Shape498;

HAnimJoint484.children = new MFNode();

HAnimJoint484.children[0] = HAnimSegment485;

HAnimJoint466.children[1] = HAnimJoint484;

HAnimJoint460.children[1] = HAnimJoint466;

HAnimJoint454.children[1] = HAnimJoint460;

HAnimJoint412.children[2] = HAnimJoint454;

HAnimJoint406.children[1] = HAnimJoint412;

HAnimJoint238.children[2] = HAnimJoint406;

HAnimJoint196.children[1] = HAnimJoint238;

HAnimJoint142.children[1] = HAnimJoint196;

HAnimJoint16.children[1] = HAnimJoint142;

HAnimJoint HAnimJoint502 = createNode("HAnimJoint");
HAnimJoint502.name = "r_hip";
HAnimJoint502.DEF = "hanim_r_hip";
HAnimJoint502.center = new SFVec3f(new float[-0.09466,0.82665,-0.01835]);
HAnimJoint502.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint502.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment503 = createNode("HAnimSegment");
HAnimSegment503.name = "r_thigh";
HAnimSegment503.DEF = "hanim_r_thigh";
HAnimSite HAnimSite504 = createNode("HAnimSite");
HAnimSite504.name = "r_knee_crease";
HAnimSite504.DEF = "hanim_r_knee_crease_pt";
HAnimSite504.translation = new SFVec3f(new float[-0.09,0.41,-0.056]);
TouchSensor TouchSensor505 = createNode("TouchSensor");
TouchSensor505.description = "HAnimSite 91 hanim_r_knee_crease_pt";
HAnimSite504.children = new MFNode();

HAnimSite504.children[0] = TouchSensor505;

Shape Shape506 = createNode("Shape");
Appearance Appearance507 = createNode("Appearance");
Material Material508 = createNode("Material");
Material508.diffuseColor = new SFColor(new float[1,1,1]);
Appearance507.material = Material508;

Shape506.appearance = Appearance507;

IndexedFaceSet IndexedFaceSet509 = createNode("IndexedFaceSet");
IndexedFaceSet509.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet509.creaseAngle = 0.5;
IndexedFaceSet509.solid = False;
ColorRGBA ColorRGBA510 = createNode("ColorRGBA");
ColorRGBA510.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet509.color = ColorRGBA510;

Coordinate Coordinate511 = createNode("Coordinate");
Coordinate511.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet509.coord = Coordinate511;

Shape506.geometry = IndexedFaceSet509;

HAnimSite504.children[1] = Shape506;

Billboard Billboard512 = createNode("Billboard");
Billboard512.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape513 = createNode("Shape");
Text Text514 = createNode("Text");
Text514.string = new MFString(new java.lang.String["91"]);
FontStyle FontStyle515 = createNode("FontStyle");
FontStyle515.size = 0.035;
Text514.fontStyle = FontStyle515;

Shape513.geometry = Text514;

Billboard512.children = new MFNode();

Billboard512.children[0] = Shape513;

HAnimSite504.children[2] = Billboard512;

HAnimSegment503.children = new MFNode();

HAnimSegment503.children[0] = HAnimSite504;

HAnimSite HAnimSite516 = createNode("HAnimSite");
HAnimSite516.name = "r_femoral_medial_epicondyle";
HAnimSite516.DEF = "hanim_r_femoral_medial_epicondyle_pt";
HAnimSite516.translation = new SFVec3f(new float[-0.039,0.41,-0.01]);
TouchSensor TouchSensor517 = createNode("TouchSensor");
TouchSensor517.description = "HAnimSite 44 hanim_r_femoral_medial_epicondyle_pt";
HAnimSite516.children = new MFNode();

HAnimSite516.children[0] = TouchSensor517;

Shape Shape518 = createNode("Shape");
Appearance Appearance519 = createNode("Appearance");
Material Material520 = createNode("Material");
Material520.diffuseColor = new SFColor(new float[1,1,1]);
Appearance519.material = Material520;

Shape518.appearance = Appearance519;

IndexedFaceSet IndexedFaceSet521 = createNode("IndexedFaceSet");
IndexedFaceSet521.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet521.creaseAngle = 0.5;
IndexedFaceSet521.solid = False;
ColorRGBA ColorRGBA522 = createNode("ColorRGBA");
ColorRGBA522.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet521.color = ColorRGBA522;

Coordinate Coordinate523 = createNode("Coordinate");
Coordinate523.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet521.coord = Coordinate523;

Shape518.geometry = IndexedFaceSet521;

HAnimSite516.children[1] = Shape518;

Billboard Billboard524 = createNode("Billboard");
Billboard524.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape525 = createNode("Shape");
Text Text526 = createNode("Text");
Text526.string = new MFString(new java.lang.String["44"]);
FontStyle FontStyle527 = createNode("FontStyle");
FontStyle527.size = 0.035;
Text526.fontStyle = FontStyle527;

Shape525.geometry = Text526;

Billboard524.children = new MFNode();

Billboard524.children[0] = Shape525;

HAnimSite516.children[2] = Billboard524;

HAnimSegment503.children[1] = HAnimSite516;

HAnimSite HAnimSite528 = createNode("HAnimSite");
HAnimSite528.name = "r_femoral_lateral_epicondyle";
HAnimSite528.DEF = "hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite528.translation = new SFVec3f(new float[-0.127,0.41,-0.01]);
TouchSensor TouchSensor529 = createNode("TouchSensor");
TouchSensor529.description = "HAnimSite 43 hanim_r_femoral_lateral_epicondyle_pt";
HAnimSite528.children = new MFNode();

HAnimSite528.children[0] = TouchSensor529;

Shape Shape530 = createNode("Shape");
Appearance Appearance531 = createNode("Appearance");
Material Material532 = createNode("Material");
Material532.diffuseColor = new SFColor(new float[1,1,1]);
Appearance531.material = Material532;

Shape530.appearance = Appearance531;

IndexedFaceSet IndexedFaceSet533 = createNode("IndexedFaceSet");
IndexedFaceSet533.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet533.creaseAngle = 0.5;
IndexedFaceSet533.solid = False;
ColorRGBA ColorRGBA534 = createNode("ColorRGBA");
ColorRGBA534.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet533.color = ColorRGBA534;

Coordinate Coordinate535 = createNode("Coordinate");
Coordinate535.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet533.coord = Coordinate535;

Shape530.geometry = IndexedFaceSet533;

HAnimSite528.children[1] = Shape530;

Billboard Billboard536 = createNode("Billboard");
Billboard536.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape537 = createNode("Shape");
Text Text538 = createNode("Text");
Text538.string = new MFString(new java.lang.String["43"]);
FontStyle FontStyle539 = createNode("FontStyle");
FontStyle539.size = 0.035;
Text538.fontStyle = FontStyle539;

Shape537.geometry = Text538;

Billboard536.children = new MFNode();

Billboard536.children[0] = Shape537;

HAnimSite528.children[2] = Billboard536;

HAnimSegment503.children[2] = HAnimSite528;

HAnimSite HAnimSite540 = createNode("HAnimSite");
HAnimSite540.name = "r_suprapatella";
HAnimSite540.DEF = "hanim_r_suprapatella_pt";
HAnimSite540.translation = new SFVec3f(new float[-0.085,0.41,0.042]);
TouchSensor TouchSensor541 = createNode("TouchSensor");
TouchSensor541.description = "HAnimSite 45 hanim_r_suprapatella_pt";
HAnimSite540.children = new MFNode();

HAnimSite540.children[0] = TouchSensor541;

Shape Shape542 = createNode("Shape");
Appearance Appearance543 = createNode("Appearance");
Material Material544 = createNode("Material");
Material544.diffuseColor = new SFColor(new float[1,1,1]);
Appearance543.material = Material544;

Shape542.appearance = Appearance543;

IndexedFaceSet IndexedFaceSet545 = createNode("IndexedFaceSet");
IndexedFaceSet545.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet545.creaseAngle = 0.5;
IndexedFaceSet545.solid = False;
ColorRGBA ColorRGBA546 = createNode("ColorRGBA");
ColorRGBA546.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet545.color = ColorRGBA546;

Coordinate Coordinate547 = createNode("Coordinate");
Coordinate547.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet545.coord = Coordinate547;

Shape542.geometry = IndexedFaceSet545;

HAnimSite540.children[1] = Shape542;

Billboard Billboard548 = createNode("Billboard");
Billboard548.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape549 = createNode("Shape");
Text Text550 = createNode("Text");
Text550.string = new MFString(new java.lang.String["45"]);
FontStyle FontStyle551 = createNode("FontStyle");
FontStyle551.size = 0.035;
Text550.fontStyle = FontStyle551;

Shape549.geometry = Text550;

Billboard548.children = new MFNode();

Billboard548.children[0] = Shape549;

HAnimSite540.children[2] = Billboard548;

HAnimSegment503.children[3] = HAnimSite540;

Shape Shape552 = createNode("Shape");
LineSet LineSet553 = createNode("LineSet");
LineSet553.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA554 = createNode("ColorRGBA");
ColorRGBA554.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet553.color = ColorRGBA554;

Coordinate Coordinate555 = createNode("Coordinate");
Coordinate555.point = new MFVec3f(new float[-0.09466,0.82665,-0.01835,0,0.826,0.02]);
LineSet553.coord = Coordinate555;

Shape552.geometry = LineSet553;

HAnimSegment503.children[4] = Shape552;

HAnimJoint502.children = new MFNode();

HAnimJoint502.children[0] = HAnimSegment503;

HAnimJoint HAnimJoint556 = createNode("HAnimJoint");
HAnimJoint556.name = "r_knee";
HAnimJoint556.DEF = "hanim_r_knee";
HAnimJoint556.center = new SFVec3f(new float[-0.0926,0.408825,-0.01944]);
HAnimJoint556.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint556.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment557 = createNode("HAnimSegment");
HAnimSegment557.name = "r_calf";
HAnimSegment557.DEF = "hanim_r_calf";
HAnimSite HAnimSite558 = createNode("HAnimSite");
HAnimSite558.name = "r_tibiale";
HAnimSite558.DEF = "hanim_r_tibiale_pt";
HAnimSite558.translation = new SFVec3f(new float[-0.09,0.31,0.038]);
TouchSensor TouchSensor559 = createNode("TouchSensor");
TouchSensor559.description = "HAnimSite 51 hanim_r_tibiale_pt";
HAnimSite558.children = new MFNode();

HAnimSite558.children[0] = TouchSensor559;

Shape Shape560 = createNode("Shape");
Appearance Appearance561 = createNode("Appearance");
Material Material562 = createNode("Material");
Material562.diffuseColor = new SFColor(new float[1,1,1]);
Appearance561.material = Material562;

Shape560.appearance = Appearance561;

IndexedFaceSet IndexedFaceSet563 = createNode("IndexedFaceSet");
IndexedFaceSet563.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet563.creaseAngle = 0.5;
IndexedFaceSet563.solid = False;
ColorRGBA ColorRGBA564 = createNode("ColorRGBA");
ColorRGBA564.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet563.color = ColorRGBA564;

Coordinate Coordinate565 = createNode("Coordinate");
Coordinate565.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet563.coord = Coordinate565;

Shape560.geometry = IndexedFaceSet563;

HAnimSite558.children[1] = Shape560;

Billboard Billboard566 = createNode("Billboard");
Billboard566.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape567 = createNode("Shape");
Text Text568 = createNode("Text");
Text568.string = new MFString(new java.lang.String["51"]);
FontStyle FontStyle569 = createNode("FontStyle");
FontStyle569.size = 0.035;
Text568.fontStyle = FontStyle569;

Shape567.geometry = Text568;

Billboard566.children = new MFNode();

Billboard566.children[0] = Shape567;

HAnimSite558.children[2] = Billboard566;

HAnimSegment557.children = new MFNode();

HAnimSegment557.children[0] = HAnimSite558;

HAnimSite HAnimSite570 = createNode("HAnimSite");
HAnimSite570.name = "r_medial_malleolus";
HAnimSite570.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite570.translation = new SFVec3f(new float[-0.061,0.095,-0.02]);
TouchSensor TouchSensor571 = createNode("TouchSensor");
TouchSensor571.description = "HAnimSite 52 hanim_r_medial_malleolus_pt";
HAnimSite570.children = new MFNode();

HAnimSite570.children[0] = TouchSensor571;

Shape Shape572 = createNode("Shape");
Appearance Appearance573 = createNode("Appearance");
Material Material574 = createNode("Material");
Material574.diffuseColor = new SFColor(new float[1,1,1]);
Appearance573.material = Material574;

Shape572.appearance = Appearance573;

IndexedFaceSet IndexedFaceSet575 = createNode("IndexedFaceSet");
IndexedFaceSet575.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet575.creaseAngle = 0.5;
IndexedFaceSet575.solid = False;
ColorRGBA ColorRGBA576 = createNode("ColorRGBA");
ColorRGBA576.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet575.color = ColorRGBA576;

Coordinate Coordinate577 = createNode("Coordinate");
Coordinate577.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet575.coord = Coordinate577;

Shape572.geometry = IndexedFaceSet575;

HAnimSite570.children[1] = Shape572;

Billboard Billboard578 = createNode("Billboard");
Billboard578.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape579 = createNode("Shape");
Text Text580 = createNode("Text");
Text580.string = new MFString(new java.lang.String["52"]);
FontStyle FontStyle581 = createNode("FontStyle");
FontStyle581.size = 0.035;
Text580.fontStyle = FontStyle581;

Shape579.geometry = Text580;

Billboard578.children = new MFNode();

Billboard578.children[0] = Shape579;

HAnimSite570.children[2] = Billboard578;

HAnimSegment557.children[1] = HAnimSite570;

HAnimSite HAnimSite582 = createNode("HAnimSite");
HAnimSite582.name = "r_lateral_malleolus";
HAnimSite582.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite582.translation = new SFVec3f(new float[-0.12,0.095,-0.02]);
TouchSensor TouchSensor583 = createNode("TouchSensor");
TouchSensor583.description = "HAnimSite 53 hanim_r_lateral_malleolus_pt";
HAnimSite582.children = new MFNode();

HAnimSite582.children[0] = TouchSensor583;

Shape Shape584 = createNode("Shape");
Appearance Appearance585 = createNode("Appearance");
Material Material586 = createNode("Material");
Material586.diffuseColor = new SFColor(new float[1,1,1]);
Appearance585.material = Material586;

Shape584.appearance = Appearance585;

IndexedFaceSet IndexedFaceSet587 = createNode("IndexedFaceSet");
IndexedFaceSet587.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet587.creaseAngle = 0.5;
IndexedFaceSet587.solid = False;
ColorRGBA ColorRGBA588 = createNode("ColorRGBA");
ColorRGBA588.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet587.color = ColorRGBA588;

Coordinate Coordinate589 = createNode("Coordinate");
Coordinate589.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet587.coord = Coordinate589;

Shape584.geometry = IndexedFaceSet587;

HAnimSite582.children[1] = Shape584;

Billboard Billboard590 = createNode("Billboard");
Billboard590.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape591 = createNode("Shape");
Text Text592 = createNode("Text");
Text592.string = new MFString(new java.lang.String["53"]);
FontStyle FontStyle593 = createNode("FontStyle");
FontStyle593.size = 0.035;
Text592.fontStyle = FontStyle593;

Shape591.geometry = Text592;

Billboard590.children = new MFNode();

Billboard590.children[0] = Shape591;

HAnimSite582.children[2] = Billboard590;

HAnimSegment557.children[2] = HAnimSite582;

Shape Shape594 = createNode("Shape");
LineSet LineSet595 = createNode("LineSet");
LineSet595.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA596 = createNode("ColorRGBA");
ColorRGBA596.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet595.color = ColorRGBA596;

Coordinate Coordinate597 = createNode("Coordinate");
Coordinate597.point = new MFVec3f(new float[-0.0926,0.408825,-0.01944,-0.09466,0.82665,-0.01835]);
LineSet595.coord = Coordinate597;

Shape594.geometry = LineSet595;

HAnimSegment557.children[3] = Shape594;

HAnimJoint556.children = new MFNode();

HAnimJoint556.children[0] = HAnimSegment557;

HAnimJoint HAnimJoint598 = createNode("HAnimJoint");
HAnimJoint598.name = "r_talocrural";
HAnimJoint598.DEF = "hanim_r_talocrural";
HAnimJoint598.center = new SFVec3f(new float[-0.08845,0.09544,-0.01045]);
HAnimJoint598.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint598.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment599 = createNode("HAnimSegment");
HAnimSegment599.name = "r_talus";
HAnimSegment599.DEF = "hanim_r_talus";
HAnimSite HAnimSite600 = createNode("HAnimSite");
HAnimSite600.name = "r_sphyrion";
HAnimSite600.DEF = "hanim_r_sphyrion_pt";
HAnimSite600.translation = new SFVec3f(new float[-0.054,0.065,-0.02]);
TouchSensor TouchSensor601 = createNode("TouchSensor");
TouchSensor601.description = "HAnimSite 54 hanim_r_sphyrion_pt";
HAnimSite600.children = new MFNode();

HAnimSite600.children[0] = TouchSensor601;

Shape Shape602 = createNode("Shape");
Appearance Appearance603 = createNode("Appearance");
Material Material604 = createNode("Material");
Material604.diffuseColor = new SFColor(new float[1,1,1]);
Appearance603.material = Material604;

Shape602.appearance = Appearance603;

IndexedFaceSet IndexedFaceSet605 = createNode("IndexedFaceSet");
IndexedFaceSet605.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet605.creaseAngle = 0.5;
IndexedFaceSet605.solid = False;
ColorRGBA ColorRGBA606 = createNode("ColorRGBA");
ColorRGBA606.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet605.color = ColorRGBA606;

Coordinate Coordinate607 = createNode("Coordinate");
Coordinate607.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet605.coord = Coordinate607;

Shape602.geometry = IndexedFaceSet605;

HAnimSite600.children[1] = Shape602;

Billboard Billboard608 = createNode("Billboard");
Billboard608.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape609 = createNode("Shape");
Text Text610 = createNode("Text");
Text610.string = new MFString(new java.lang.String["54"]);
FontStyle FontStyle611 = createNode("FontStyle");
FontStyle611.size = 0.035;
Text610.fontStyle = FontStyle611;

Shape609.geometry = Text610;

Billboard608.children = new MFNode();

Billboard608.children[0] = Shape609;

HAnimSite600.children[2] = Billboard608;

HAnimSegment599.children = new MFNode();

HAnimSegment599.children[0] = HAnimSite600;

HAnimSite HAnimSite612 = createNode("HAnimSite");
HAnimSite612.name = "r_calcaneus_posterior";
HAnimSite612.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite612.translation = new SFVec3f(new float[-0.09,0.03,-0.06]);
TouchSensor TouchSensor613 = createNode("TouchSensor");
TouchSensor613.description = "HAnimSite 62 hanim_r_calcaneus_posterior_pt";
HAnimSite612.children = new MFNode();

HAnimSite612.children[0] = TouchSensor613;

Shape Shape614 = createNode("Shape");
Appearance Appearance615 = createNode("Appearance");
Material Material616 = createNode("Material");
Material616.diffuseColor = new SFColor(new float[1,1,1]);
Appearance615.material = Material616;

Shape614.appearance = Appearance615;

IndexedFaceSet IndexedFaceSet617 = createNode("IndexedFaceSet");
IndexedFaceSet617.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet617.creaseAngle = 0.5;
IndexedFaceSet617.solid = False;
ColorRGBA ColorRGBA618 = createNode("ColorRGBA");
ColorRGBA618.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet617.color = ColorRGBA618;

Coordinate Coordinate619 = createNode("Coordinate");
Coordinate619.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet617.coord = Coordinate619;

Shape614.geometry = IndexedFaceSet617;

HAnimSite612.children[1] = Shape614;

Billboard Billboard620 = createNode("Billboard");
Billboard620.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape621 = createNode("Shape");
Text Text622 = createNode("Text");
Text622.string = new MFString(new java.lang.String["62"]);
FontStyle FontStyle623 = createNode("FontStyle");
FontStyle623.size = 0.035;
Text622.fontStyle = FontStyle623;

Shape621.geometry = Text622;

Billboard620.children = new MFNode();

Billboard620.children[0] = Shape621;

HAnimSite612.children[2] = Billboard620;

HAnimSegment599.children[1] = HAnimSite612;

Shape Shape624 = createNode("Shape");
LineSet LineSet625 = createNode("LineSet");
LineSet625.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA626 = createNode("ColorRGBA");
ColorRGBA626.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet625.color = ColorRGBA626;

Coordinate Coordinate627 = createNode("Coordinate");
Coordinate627.point = new MFVec3f(new float[-0.08845,0.09544,-0.01045,-0.0926,0.408825,-0.01944]);
LineSet625.coord = Coordinate627;

Shape624.geometry = LineSet625;

HAnimSegment599.children[2] = Shape624;

HAnimJoint598.children = new MFNode();

HAnimJoint598.children[0] = HAnimSegment599;

HAnimJoint HAnimJoint628 = createNode("HAnimJoint");
HAnimJoint628.name = "r_talocalcaneonavicular";
HAnimJoint628.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint628.center = new SFVec3f(new float[-0.07794,0.0369,0.00486]);
HAnimJoint628.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint628.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment629 = createNode("HAnimSegment");
HAnimSegment629.name = "r_navicular";
HAnimSegment629.DEF = "hanim_r_navicular";
Shape Shape630 = createNode("Shape");
LineSet LineSet631 = createNode("LineSet");
LineSet631.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA632 = createNode("ColorRGBA");
ColorRGBA632.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet631.color = ColorRGBA632;

Coordinate Coordinate633 = createNode("Coordinate");
Coordinate633.point = new MFVec3f(new float[-0.07794,0.0369,0.00486,-0.08845,0.09544,-0.01045]);
LineSet631.coord = Coordinate633;

Shape630.geometry = LineSet631;

HAnimSegment629.children = new MFNode();

HAnimSegment629.children[0] = Shape630;

HAnimJoint628.children = new MFNode();

HAnimJoint628.children[0] = HAnimSegment629;

HAnimJoint HAnimJoint634 = createNode("HAnimJoint");
HAnimJoint634.name = "r_cuneonavicular_1";
HAnimJoint634.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint634.center = new SFVec3f(new float[-0.06698,0.032107,0.01839]);
HAnimJoint634.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint634.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment635 = createNode("HAnimSegment");
HAnimSegment635.name = "r_cuneiform_1";
HAnimSegment635.DEF = "hanim_r_cuneiform_1";
Shape Shape636 = createNode("Shape");
LineSet LineSet637 = createNode("LineSet");
LineSet637.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA638 = createNode("ColorRGBA");
ColorRGBA638.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet637.color = ColorRGBA638;

Coordinate Coordinate639 = createNode("Coordinate");
Coordinate639.point = new MFVec3f(new float[-0.06698,0.032107,0.01839,-0.07794,0.0369,0.00486]);
LineSet637.coord = Coordinate639;

Shape636.geometry = LineSet637;

HAnimSegment635.children = new MFNode();

HAnimSegment635.children[0] = Shape636;

HAnimJoint634.children = new MFNode();

HAnimJoint634.children[0] = HAnimSegment635;

HAnimJoint HAnimJoint640 = createNode("HAnimJoint");
HAnimJoint640.name = "r_tarsometatarsal_1";
HAnimJoint640.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint640.center = new SFVec3f(new float[-0.064,0.02324,0.04419]);
HAnimJoint640.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment641 = createNode("HAnimSegment");
HAnimSegment641.name = "r_metatarsal_1";
HAnimSegment641.DEF = "hanim_r_metatarsal_1";
Shape Shape642 = createNode("Shape");
LineSet LineSet643 = createNode("LineSet");
LineSet643.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA644 = createNode("ColorRGBA");
ColorRGBA644.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet643.color = ColorRGBA644;

Coordinate Coordinate645 = createNode("Coordinate");
Coordinate645.point = new MFVec3f(new float[-0.064,0.02324,0.04419,-0.06698,0.032107,0.01839]);
LineSet643.coord = Coordinate645;

Shape642.geometry = LineSet643;

HAnimSegment641.children = new MFNode();

HAnimSegment641.children[0] = Shape642;

HAnimJoint640.children = new MFNode();

HAnimJoint640.children[0] = HAnimSegment641;

HAnimJoint HAnimJoint646 = createNode("HAnimJoint");
HAnimJoint646.name = "r_metatarsophalangeal_1";
HAnimJoint646.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint646.center = new SFVec3f(new float[-0.06176,0.014425,0.09362]);
HAnimJoint646.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint646.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment647 = createNode("HAnimSegment");
HAnimSegment647.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment647.DEF = "hanim_r_tarsal_proximal_phalanx_1";
HAnimSite HAnimSite648 = createNode("HAnimSite");
HAnimSite648.name = "r_metatarsal_phalanx_1";
HAnimSite648.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite648.translation = new SFVec3f(new float[-0.062,0.012,0.1]);
TouchSensor TouchSensor649 = createNode("TouchSensor");
TouchSensor649.description = "HAnimSite 59 hanim_r_metatarsal_phalanx_1_pt";
HAnimSite648.children = new MFNode();

HAnimSite648.children[0] = TouchSensor649;

Shape Shape650 = createNode("Shape");
Appearance Appearance651 = createNode("Appearance");
Material Material652 = createNode("Material");
Material652.diffuseColor = new SFColor(new float[1,1,1]);
Appearance651.material = Material652;

Shape650.appearance = Appearance651;

IndexedFaceSet IndexedFaceSet653 = createNode("IndexedFaceSet");
IndexedFaceSet653.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet653.creaseAngle = 0.5;
IndexedFaceSet653.solid = False;
ColorRGBA ColorRGBA654 = createNode("ColorRGBA");
ColorRGBA654.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet653.color = ColorRGBA654;

Coordinate Coordinate655 = createNode("Coordinate");
Coordinate655.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet653.coord = Coordinate655;

Shape650.geometry = IndexedFaceSet653;

HAnimSite648.children[1] = Shape650;

Billboard Billboard656 = createNode("Billboard");
Billboard656.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape657 = createNode("Shape");
Text Text658 = createNode("Text");
Text658.string = new MFString(new java.lang.String["59"]);
FontStyle FontStyle659 = createNode("FontStyle");
FontStyle659.size = 0.035;
Text658.fontStyle = FontStyle659;

Shape657.geometry = Text658;

Billboard656.children = new MFNode();

Billboard656.children[0] = Shape657;

HAnimSite648.children[2] = Billboard656;

HAnimSegment647.children = new MFNode();

HAnimSegment647.children[0] = HAnimSite648;

Shape Shape660 = createNode("Shape");
LineSet LineSet661 = createNode("LineSet");
LineSet661.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA662 = createNode("ColorRGBA");
ColorRGBA662.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet661.color = ColorRGBA662;

Coordinate Coordinate663 = createNode("Coordinate");
Coordinate663.point = new MFVec3f(new float[-0.06176,0.014425,0.09362,-0.064,0.02324,0.04419]);
LineSet661.coord = Coordinate663;

Shape660.geometry = LineSet661;

HAnimSegment647.children[1] = Shape660;

HAnimJoint646.children = new MFNode();

HAnimJoint646.children[0] = HAnimSegment647;

HAnimJoint HAnimJoint664 = createNode("HAnimJoint");
HAnimJoint664.name = "r_tarsal_interphalangeal_1";
HAnimJoint664.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint664.center = new SFVec3f(new float[-0.06174,0.0121,0.1153]);
HAnimJoint664.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint664.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment665 = createNode("HAnimSegment");
HAnimSegment665.name = "r_tarsal_distal_phalanx_1";
HAnimSegment665.DEF = "hanim_r_tarsal_distal_phalanx_1";
HAnimSite HAnimSite666 = createNode("HAnimSite");
HAnimSite666.name = "r_tarsal_distal_phalanx_1";
HAnimSite666.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimSite666.translation = new SFVec3f(new float[-0.06,0.012,0.14]);
TouchSensor TouchSensor667 = createNode("TouchSensor");
TouchSensor667.description = "HAnimSite 116 hanim_r_tarsal_distal_phalanx_1_tip";
HAnimSite666.children = new MFNode();

HAnimSite666.children[0] = TouchSensor667;

Shape Shape668 = createNode("Shape");
Appearance Appearance669 = createNode("Appearance");
Material Material670 = createNode("Material");
Material670.diffuseColor = new SFColor(new float[1,1,1]);
Appearance669.material = Material670;

Shape668.appearance = Appearance669;

IndexedFaceSet IndexedFaceSet671 = createNode("IndexedFaceSet");
IndexedFaceSet671.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet671.creaseAngle = 0.5;
IndexedFaceSet671.solid = False;
ColorRGBA ColorRGBA672 = createNode("ColorRGBA");
ColorRGBA672.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet671.color = ColorRGBA672;

Coordinate Coordinate673 = createNode("Coordinate");
Coordinate673.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet671.coord = Coordinate673;

Shape668.geometry = IndexedFaceSet671;

HAnimSite666.children[1] = Shape668;

Billboard Billboard674 = createNode("Billboard");
Billboard674.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape675 = createNode("Shape");
Text Text676 = createNode("Text");
Text676.string = new MFString(new java.lang.String["116"]);
FontStyle FontStyle677 = createNode("FontStyle");
FontStyle677.size = 0.035;
Text676.fontStyle = FontStyle677;

Shape675.geometry = Text676;

Billboard674.children = new MFNode();

Billboard674.children[0] = Shape675;

HAnimSite666.children[2] = Billboard674;

HAnimSegment665.children = new MFNode();

HAnimSegment665.children[0] = HAnimSite666;

Shape Shape678 = createNode("Shape");
LineSet LineSet679 = createNode("LineSet");
LineSet679.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA680 = createNode("ColorRGBA");
ColorRGBA680.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet679.color = ColorRGBA680;

Coordinate Coordinate681 = createNode("Coordinate");
Coordinate681.point = new MFVec3f(new float[-0.06174,0.0121,0.1153,-0.06176,0.014425,0.09362]);
LineSet679.coord = Coordinate681;

Shape678.geometry = LineSet679;

HAnimSegment665.children[1] = Shape678;

HAnimJoint664.children = new MFNode();

HAnimJoint664.children[0] = HAnimSegment665;

HAnimJoint646.children[1] = HAnimJoint664;

HAnimJoint640.children[1] = HAnimJoint646;

HAnimJoint634.children[1] = HAnimJoint640;

HAnimJoint628.children[1] = HAnimJoint634;

HAnimJoint HAnimJoint682 = createNode("HAnimJoint");
HAnimJoint682.name = "r_cuneonavicular_2";
HAnimJoint682.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint682.center = new SFVec3f(new float[-0.081,0.0335,0.02142]);
HAnimJoint682.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint682.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment683 = createNode("HAnimSegment");
HAnimSegment683.name = "r_cuneiform_2";
HAnimSegment683.DEF = "hanim_r_cuneiform_2";
Shape Shape684 = createNode("Shape");
LineSet LineSet685 = createNode("LineSet");
LineSet685.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA686 = createNode("ColorRGBA");
ColorRGBA686.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet685.color = ColorRGBA686;

Coordinate Coordinate687 = createNode("Coordinate");
Coordinate687.point = new MFVec3f(new float[-0.081,0.0335,0.02142,-0.07794,0.0369,0.00486]);
LineSet685.coord = Coordinate687;

Shape684.geometry = LineSet685;

HAnimSegment683.children = new MFNode();

HAnimSegment683.children[0] = Shape684;

HAnimJoint682.children = new MFNode();

HAnimJoint682.children[0] = HAnimSegment683;

HAnimJoint HAnimJoint688 = createNode("HAnimJoint");
HAnimJoint688.name = "r_tarsometatarsal_2";
HAnimJoint688.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint688.center = new SFVec3f(new float[-0.07983,0.0261,0.04106]);
HAnimJoint688.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint688.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment689 = createNode("HAnimSegment");
HAnimSegment689.name = "r_metatarsal_2";
HAnimSegment689.DEF = "hanim_r_metatarsal_2";
Shape Shape690 = createNode("Shape");
LineSet LineSet691 = createNode("LineSet");
LineSet691.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA692 = createNode("ColorRGBA");
ColorRGBA692.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet691.color = ColorRGBA692;

Coordinate Coordinate693 = createNode("Coordinate");
Coordinate693.point = new MFVec3f(new float[-0.07983,0.0261,0.04106,-0.081,0.0335,0.02142]);
LineSet691.coord = Coordinate693;

Shape690.geometry = LineSet691;

HAnimSegment689.children = new MFNode();

HAnimSegment689.children[0] = Shape690;

HAnimJoint688.children = new MFNode();

HAnimJoint688.children[0] = HAnimSegment689;

HAnimJoint HAnimJoint694 = createNode("HAnimJoint");
HAnimJoint694.name = "r_metatarsophalangeal_2";
HAnimJoint694.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint694.center = new SFVec3f(new float[-0.0821,0.01497,0.09783]);
HAnimJoint694.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint694.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment695 = createNode("HAnimSegment");
HAnimSegment695.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment695.DEF = "hanim_r_tarsal_proximal_phalanx_2";
Shape Shape696 = createNode("Shape");
LineSet LineSet697 = createNode("LineSet");
LineSet697.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA698 = createNode("ColorRGBA");
ColorRGBA698.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet697.color = ColorRGBA698;

Coordinate Coordinate699 = createNode("Coordinate");
Coordinate699.point = new MFVec3f(new float[-0.0821,0.01497,0.09783,-0.07983,0.0261,0.04106]);
LineSet697.coord = Coordinate699;

Shape696.geometry = LineSet697;

HAnimSegment695.children = new MFNode();

HAnimSegment695.children[0] = Shape696;

HAnimJoint694.children = new MFNode();

HAnimJoint694.children[0] = HAnimSegment695;

HAnimJoint HAnimJoint700 = createNode("HAnimJoint");
HAnimJoint700.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint700.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint700.center = new SFVec3f(new float[-0.0839,0.012647,0.114]);
HAnimJoint700.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint700.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment701 = createNode("HAnimSegment");
HAnimSegment701.name = "r_tarsal_middle_phalanx_2";
HAnimSegment701.DEF = "hanim_r_tarsal_middle_phalanx_2";
Shape Shape702 = createNode("Shape");
LineSet LineSet703 = createNode("LineSet");
LineSet703.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA704 = createNode("ColorRGBA");
ColorRGBA704.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet703.color = ColorRGBA704;

Coordinate Coordinate705 = createNode("Coordinate");
Coordinate705.point = new MFVec3f(new float[-0.0839,0.012647,0.114,-0.0821,0.01497,0.09783]);
LineSet703.coord = Coordinate705;

Shape702.geometry = LineSet703;

HAnimSegment701.children = new MFNode();

HAnimSegment701.children[0] = Shape702;

HAnimJoint700.children = new MFNode();

HAnimJoint700.children[0] = HAnimSegment701;

HAnimJoint HAnimJoint706 = createNode("HAnimJoint");
HAnimJoint706.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint706.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint706.center = new SFVec3f(new float[-0.0839,0.009825,0.123435]);
HAnimJoint706.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint706.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment707 = createNode("HAnimSegment");
HAnimSegment707.name = "r_tarsal_distal_phalanx_2";
HAnimSegment707.DEF = "hanim_r_tarsal_distal_phalanx_2";
HAnimSite HAnimSite708 = createNode("HAnimSite");
HAnimSite708.name = "r_tarsal_distal_phalanx_2";
HAnimSite708.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite708.translation = new SFVec3f(new float[-0.08,0.016,0.14]);
TouchSensor TouchSensor709 = createNode("TouchSensor");
TouchSensor709.description = "HAnimSite 117 hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite708.children = new MFNode();

HAnimSite708.children[0] = TouchSensor709;

Shape Shape710 = createNode("Shape");
Appearance Appearance711 = createNode("Appearance");
Material Material712 = createNode("Material");
Material712.diffuseColor = new SFColor(new float[1,1,1]);
Appearance711.material = Material712;

Shape710.appearance = Appearance711;

IndexedFaceSet IndexedFaceSet713 = createNode("IndexedFaceSet");
IndexedFaceSet713.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet713.creaseAngle = 0.5;
IndexedFaceSet713.solid = False;
ColorRGBA ColorRGBA714 = createNode("ColorRGBA");
ColorRGBA714.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet713.color = ColorRGBA714;

Coordinate Coordinate715 = createNode("Coordinate");
Coordinate715.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet713.coord = Coordinate715;

Shape710.geometry = IndexedFaceSet713;

HAnimSite708.children[1] = Shape710;

Billboard Billboard716 = createNode("Billboard");
Billboard716.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape717 = createNode("Shape");
Text Text718 = createNode("Text");
Text718.string = new MFString(new java.lang.String["117"]);
FontStyle FontStyle719 = createNode("FontStyle");
FontStyle719.size = 0.035;
Text718.fontStyle = FontStyle719;

Shape717.geometry = Text718;

Billboard716.children = new MFNode();

Billboard716.children[0] = Shape717;

HAnimSite708.children[2] = Billboard716;

HAnimSegment707.children = new MFNode();

HAnimSegment707.children[0] = HAnimSite708;

Shape Shape720 = createNode("Shape");
LineSet LineSet721 = createNode("LineSet");
LineSet721.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA722 = createNode("ColorRGBA");
ColorRGBA722.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet721.color = ColorRGBA722;

Coordinate Coordinate723 = createNode("Coordinate");
Coordinate723.point = new MFVec3f(new float[-0.0839,0.009825,0.123435,-0.0839,0.012647,0.114]);
LineSet721.coord = Coordinate723;

Shape720.geometry = LineSet721;

HAnimSegment707.children[1] = Shape720;

HAnimJoint706.children = new MFNode();

HAnimJoint706.children[0] = HAnimSegment707;

HAnimJoint700.children[1] = HAnimJoint706;

HAnimJoint694.children[1] = HAnimJoint700;

HAnimJoint688.children[1] = HAnimJoint694;

HAnimJoint682.children[1] = HAnimJoint688;

HAnimJoint628.children[2] = HAnimJoint682;

HAnimJoint HAnimJoint724 = createNode("HAnimJoint");
HAnimJoint724.name = "r_cuneonavicular_3";
HAnimJoint724.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint724.center = new SFVec3f(new float[-0.09261,0.03339,0.01982]);
HAnimJoint724.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint724.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment725 = createNode("HAnimSegment");
HAnimSegment725.name = "r_cuneiform_3";
HAnimSegment725.DEF = "hanim_r_cuneiform_3";
Shape Shape726 = createNode("Shape");
LineSet LineSet727 = createNode("LineSet");
LineSet727.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA728 = createNode("ColorRGBA");
ColorRGBA728.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet727.color = ColorRGBA728;

Coordinate Coordinate729 = createNode("Coordinate");
Coordinate729.point = new MFVec3f(new float[-0.09261,0.03339,0.01982,-0.07794,0.0369,0.00486]);
LineSet727.coord = Coordinate729;

Shape726.geometry = LineSet727;

HAnimSegment725.children = new MFNode();

HAnimSegment725.children[0] = Shape726;

HAnimJoint724.children = new MFNode();

HAnimJoint724.children[0] = HAnimSegment725;

HAnimJoint HAnimJoint730 = createNode("HAnimJoint");
HAnimJoint730.name = "r_tarsometatarsal_3";
HAnimJoint730.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint730.center = new SFVec3f(new float[-0.09423,0.0261,0.0394]);
HAnimJoint730.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint730.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment731 = createNode("HAnimSegment");
HAnimSegment731.name = "r_metatarsal_3";
HAnimSegment731.DEF = "hanim_r_metatarsal_3";
Shape Shape732 = createNode("Shape");
LineSet LineSet733 = createNode("LineSet");
LineSet733.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA734 = createNode("ColorRGBA");
ColorRGBA734.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet733.color = ColorRGBA734;

Coordinate Coordinate735 = createNode("Coordinate");
Coordinate735.point = new MFVec3f(new float[-0.09423,0.0261,0.0394,-0.09261,0.03339,0.01982]);
LineSet733.coord = Coordinate735;

Shape732.geometry = LineSet733;

HAnimSegment731.children = new MFNode();

HAnimSegment731.children[0] = Shape732;

HAnimJoint730.children = new MFNode();

HAnimJoint730.children[0] = HAnimSegment731;

HAnimJoint HAnimJoint736 = createNode("HAnimJoint");
HAnimJoint736.name = "r_metatarsophalangeal_3";
HAnimJoint736.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint736.center = new SFVec3f(new float[-0.0961,0.01505,0.09542]);
HAnimJoint736.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint736.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment737 = createNode("HAnimSegment");
HAnimSegment737.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment737.DEF = "hanim_r_tarsal_proximal_phalanx_3";
Shape Shape738 = createNode("Shape");
LineSet LineSet739 = createNode("LineSet");
LineSet739.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA740 = createNode("ColorRGBA");
ColorRGBA740.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet739.color = ColorRGBA740;

Coordinate Coordinate741 = createNode("Coordinate");
Coordinate741.point = new MFVec3f(new float[-0.0961,0.01505,0.09542,-0.09423,0.0261,0.0394]);
LineSet739.coord = Coordinate741;

Shape738.geometry = LineSet739;

HAnimSegment737.children = new MFNode();

HAnimSegment737.children[0] = Shape738;

HAnimJoint736.children = new MFNode();

HAnimJoint736.children[0] = HAnimSegment737;

HAnimJoint HAnimJoint742 = createNode("HAnimJoint");
HAnimJoint742.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint742.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint742.center = new SFVec3f(new float[-0.0985,0.01192,0.11047]);
HAnimJoint742.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint742.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment743 = createNode("HAnimSegment");
HAnimSegment743.name = "r_tarsal_middle_phalanx_3";
HAnimSegment743.DEF = "hanim_r_tarsal_middle_phalanx_3";
Shape Shape744 = createNode("Shape");
LineSet LineSet745 = createNode("LineSet");
LineSet745.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA746 = createNode("ColorRGBA");
ColorRGBA746.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet745.color = ColorRGBA746;

Coordinate Coordinate747 = createNode("Coordinate");
Coordinate747.point = new MFVec3f(new float[-0.0985,0.01192,0.11047,-0.0961,0.01505,0.09542]);
LineSet745.coord = Coordinate747;

Shape744.geometry = LineSet745;

HAnimSegment743.children = new MFNode();

HAnimSegment743.children[0] = Shape744;

HAnimJoint742.children = new MFNode();

HAnimJoint742.children[0] = HAnimSegment743;

HAnimJoint HAnimJoint748 = createNode("HAnimJoint");
HAnimJoint748.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint748.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint748.center = new SFVec3f(new float[-0.100035,0.00982,0.1197]);
HAnimJoint748.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint748.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment749 = createNode("HAnimSegment");
HAnimSegment749.name = "r_tarsal_distal_phalanx_3";
HAnimSegment749.DEF = "hanim_r_tarsal_distal_phalanx_3";
HAnimSite HAnimSite750 = createNode("HAnimSite");
HAnimSite750.name = "r_tarsal_distal_phalanx_3";
HAnimSite750.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimSite750.translation = new SFVec3f(new float[-0.1,0.016,0.14]);
TouchSensor TouchSensor751 = createNode("TouchSensor");
TouchSensor751.description = "HAnimSite 118 hanim_r_tarsal_distal_phalanx_3_tip";
HAnimSite750.children = new MFNode();

HAnimSite750.children[0] = TouchSensor751;

Shape Shape752 = createNode("Shape");
Appearance Appearance753 = createNode("Appearance");
Material Material754 = createNode("Material");
Material754.diffuseColor = new SFColor(new float[1,1,1]);
Appearance753.material = Material754;

Shape752.appearance = Appearance753;

IndexedFaceSet IndexedFaceSet755 = createNode("IndexedFaceSet");
IndexedFaceSet755.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet755.creaseAngle = 0.5;
IndexedFaceSet755.solid = False;
ColorRGBA ColorRGBA756 = createNode("ColorRGBA");
ColorRGBA756.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet755.color = ColorRGBA756;

Coordinate Coordinate757 = createNode("Coordinate");
Coordinate757.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet755.coord = Coordinate757;

Shape752.geometry = IndexedFaceSet755;

HAnimSite750.children[1] = Shape752;

Billboard Billboard758 = createNode("Billboard");
Billboard758.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape759 = createNode("Shape");
Text Text760 = createNode("Text");
Text760.string = new MFString(new java.lang.String["118"]);
FontStyle FontStyle761 = createNode("FontStyle");
FontStyle761.size = 0.035;
Text760.fontStyle = FontStyle761;

Shape759.geometry = Text760;

Billboard758.children = new MFNode();

Billboard758.children[0] = Shape759;

HAnimSite750.children[2] = Billboard758;

HAnimSegment749.children = new MFNode();

HAnimSegment749.children[0] = HAnimSite750;

Shape Shape762 = createNode("Shape");
LineSet LineSet763 = createNode("LineSet");
LineSet763.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA764 = createNode("ColorRGBA");
ColorRGBA764.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet763.color = ColorRGBA764;

Coordinate Coordinate765 = createNode("Coordinate");
Coordinate765.point = new MFVec3f(new float[-0.100035,0.00982,0.1197,-0.0985,0.01192,0.11047]);
LineSet763.coord = Coordinate765;

Shape762.geometry = LineSet763;

HAnimSegment749.children[1] = Shape762;

HAnimJoint748.children = new MFNode();

HAnimJoint748.children[0] = HAnimSegment749;

HAnimJoint742.children[1] = HAnimJoint748;

HAnimJoint736.children[1] = HAnimJoint742;

HAnimJoint730.children[1] = HAnimJoint736;

HAnimJoint724.children[1] = HAnimJoint730;

HAnimJoint628.children[3] = HAnimJoint724;

HAnimJoint598.children[1] = HAnimJoint628;

HAnimJoint HAnimJoint766 = createNode("HAnimJoint");
HAnimJoint766.name = "r_calcaneocuboid";
HAnimJoint766.DEF = "hanim_r_calcaneocuboid";
HAnimJoint766.center = new SFVec3f(new float[-0.088717,0.05798,-0.025965]);
HAnimJoint766.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint766.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment767 = createNode("HAnimSegment");
HAnimSegment767.name = "r_calcaneus";
HAnimSegment767.DEF = "hanim_r_calcaneus";
Shape Shape768 = createNode("Shape");
LineSet LineSet769 = createNode("LineSet");
LineSet769.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA770 = createNode("ColorRGBA");
ColorRGBA770.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet769.color = ColorRGBA770;

Coordinate Coordinate771 = createNode("Coordinate");
Coordinate771.point = new MFVec3f(new float[-0.088717,0.05798,-0.025965,-0.08845,0.09544,-0.01045]);
LineSet769.coord = Coordinate771;

Shape768.geometry = LineSet769;

HAnimSegment767.children = new MFNode();

HAnimSegment767.children[0] = Shape768;

HAnimJoint766.children = new MFNode();

HAnimJoint766.children[0] = HAnimSegment767;

HAnimJoint HAnimJoint772 = createNode("HAnimJoint");
HAnimJoint772.name = "r_transversetarsal";
HAnimJoint772.DEF = "hanim_r_transversetarsal";
HAnimJoint772.center = new SFVec3f(new float[-0.11027,0.03528,0.0021]);
HAnimJoint772.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint772.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment773 = createNode("HAnimSegment");
HAnimSegment773.name = "r_cuboid";
HAnimSegment773.DEF = "hanim_r_cuboid";
Shape Shape774 = createNode("Shape");
LineSet LineSet775 = createNode("LineSet");
LineSet775.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA776 = createNode("ColorRGBA");
ColorRGBA776.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet775.color = ColorRGBA776;

Coordinate Coordinate777 = createNode("Coordinate");
Coordinate777.point = new MFVec3f(new float[-0.11027,0.03528,0.0021,-0.088717,0.05798,-0.025965]);
LineSet775.coord = Coordinate777;

Shape774.geometry = LineSet775;

HAnimSegment773.children = new MFNode();

HAnimSegment773.children[0] = Shape774;

HAnimJoint772.children = new MFNode();

HAnimJoint772.children[0] = HAnimSegment773;

HAnimJoint HAnimJoint778 = createNode("HAnimJoint");
HAnimJoint778.name = "r_tarsometatarsal_4";
HAnimJoint778.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint778.center = new SFVec3f(new float[-0.10613,0.02454,0.03843]);
HAnimJoint778.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint778.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment779 = createNode("HAnimSegment");
HAnimSegment779.name = "r_metatarsal_4";
HAnimSegment779.DEF = "hanim_r_metatarsal_4";
Shape Shape780 = createNode("Shape");
LineSet LineSet781 = createNode("LineSet");
LineSet781.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA782 = createNode("ColorRGBA");
ColorRGBA782.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet781.color = ColorRGBA782;

Coordinate Coordinate783 = createNode("Coordinate");
Coordinate783.point = new MFVec3f(new float[-0.10613,0.02454,0.03843,-0.11027,0.03528,0.0021]);
LineSet781.coord = Coordinate783;

Shape780.geometry = LineSet781;

HAnimSegment779.children = new MFNode();

HAnimSegment779.children[0] = Shape780;

HAnimJoint778.children = new MFNode();

HAnimJoint778.children[0] = HAnimSegment779;

HAnimJoint HAnimJoint784 = createNode("HAnimJoint");
HAnimJoint784.name = "r_metatarsophalangeal_4";
HAnimJoint784.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint784.center = new SFVec3f(new float[-0.1095,0.01435,0.09117]);
HAnimJoint784.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint784.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment785 = createNode("HAnimSegment");
HAnimSegment785.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment785.DEF = "hanim_r_tarsal_proximal_phalanx_4";
Shape Shape786 = createNode("Shape");
LineSet LineSet787 = createNode("LineSet");
LineSet787.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA788 = createNode("ColorRGBA");
ColorRGBA788.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet787.color = ColorRGBA788;

Coordinate Coordinate789 = createNode("Coordinate");
Coordinate789.point = new MFVec3f(new float[-0.1095,0.01435,0.09117,-0.10613,0.02454,0.03843]);
LineSet787.coord = Coordinate789;

Shape786.geometry = LineSet787;

HAnimSegment785.children = new MFNode();

HAnimSegment785.children[0] = Shape786;

HAnimJoint784.children = new MFNode();

HAnimJoint784.children[0] = HAnimSegment785;

HAnimJoint HAnimJoint790 = createNode("HAnimJoint");
HAnimJoint790.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint790.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint790.center = new SFVec3f(new float[-0.11378,0.01224,0.1063]);
HAnimJoint790.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint790.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment791 = createNode("HAnimSegment");
HAnimSegment791.name = "r_tarsal_middle_phalanx_4";
HAnimSegment791.DEF = "hanim_r_tarsal_middle_phalanx_4";
Shape Shape792 = createNode("Shape");
LineSet LineSet793 = createNode("LineSet");
LineSet793.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA794 = createNode("ColorRGBA");
ColorRGBA794.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet793.color = ColorRGBA794;

Coordinate Coordinate795 = createNode("Coordinate");
Coordinate795.point = new MFVec3f(new float[-0.11378,0.01224,0.1063,-0.1095,0.01435,0.09117]);
LineSet793.coord = Coordinate795;

Shape792.geometry = LineSet793;

HAnimSegment791.children = new MFNode();

HAnimSegment791.children[0] = Shape792;

HAnimJoint790.children = new MFNode();

HAnimJoint790.children[0] = HAnimSegment791;

HAnimJoint HAnimJoint796 = createNode("HAnimJoint");
HAnimJoint796.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint796.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint796.center = new SFVec3f(new float[-0.1153,0.00937,0.11369]);
HAnimJoint796.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint796.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment797 = createNode("HAnimSegment");
HAnimSegment797.name = "r_tarsal_distal_phalanx_4";
HAnimSegment797.DEF = "hanim_r_tarsal_distal_phalanx_4";
HAnimSite HAnimSite798 = createNode("HAnimSite");
HAnimSite798.name = "r_tarsal_distal_phalanx_4";
HAnimSite798.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimSite798.translation = new SFVec3f(new float[-0.115,0.016,0.13]);
TouchSensor TouchSensor799 = createNode("TouchSensor");
TouchSensor799.description = "HAnimSite 119 hanim_r_tarsal_distal_phalanx_4_tip";
HAnimSite798.children = new MFNode();

HAnimSite798.children[0] = TouchSensor799;

Shape Shape800 = createNode("Shape");
Appearance Appearance801 = createNode("Appearance");
Material Material802 = createNode("Material");
Material802.diffuseColor = new SFColor(new float[1,1,1]);
Appearance801.material = Material802;

Shape800.appearance = Appearance801;

IndexedFaceSet IndexedFaceSet803 = createNode("IndexedFaceSet");
IndexedFaceSet803.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet803.creaseAngle = 0.5;
IndexedFaceSet803.solid = False;
ColorRGBA ColorRGBA804 = createNode("ColorRGBA");
ColorRGBA804.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet803.color = ColorRGBA804;

Coordinate Coordinate805 = createNode("Coordinate");
Coordinate805.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet803.coord = Coordinate805;

Shape800.geometry = IndexedFaceSet803;

HAnimSite798.children[1] = Shape800;

Billboard Billboard806 = createNode("Billboard");
Billboard806.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape807 = createNode("Shape");
Text Text808 = createNode("Text");
Text808.string = new MFString(new java.lang.String["119"]);
FontStyle FontStyle809 = createNode("FontStyle");
FontStyle809.size = 0.035;
Text808.fontStyle = FontStyle809;

Shape807.geometry = Text808;

Billboard806.children = new MFNode();

Billboard806.children[0] = Shape807;

HAnimSite798.children[2] = Billboard806;

HAnimSegment797.children = new MFNode();

HAnimSegment797.children[0] = HAnimSite798;

Shape Shape810 = createNode("Shape");
LineSet LineSet811 = createNode("LineSet");
LineSet811.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA812 = createNode("ColorRGBA");
ColorRGBA812.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet811.color = ColorRGBA812;

Coordinate Coordinate813 = createNode("Coordinate");
Coordinate813.point = new MFVec3f(new float[-0.1153,0.00937,0.11369,-0.11378,0.01224,0.1063]);
LineSet811.coord = Coordinate813;

Shape810.geometry = LineSet811;

HAnimSegment797.children[1] = Shape810;

HAnimJoint796.children = new MFNode();

HAnimJoint796.children[0] = HAnimSegment797;

HAnimJoint790.children[1] = HAnimJoint796;

HAnimJoint784.children[1] = HAnimJoint790;

HAnimJoint778.children[1] = HAnimJoint784;

HAnimJoint772.children[1] = HAnimJoint778;

HAnimJoint HAnimJoint814 = createNode("HAnimJoint");
HAnimJoint814.name = "r_tarsometatarsal_5";
HAnimJoint814.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint814.center = new SFVec3f(new float[-0.12044,0.020945,0.03474]);
HAnimJoint814.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint814.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment815 = createNode("HAnimSegment");
HAnimSegment815.name = "r_metatarsal_5";
HAnimSegment815.DEF = "hanim_r_metatarsal_5";
Shape Shape816 = createNode("Shape");
LineSet LineSet817 = createNode("LineSet");
LineSet817.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA818 = createNode("ColorRGBA");
ColorRGBA818.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet817.color = ColorRGBA818;

Coordinate Coordinate819 = createNode("Coordinate");
Coordinate819.point = new MFVec3f(new float[-0.12044,0.020945,0.03474,-0.11027,0.03528,0.0021]);
LineSet817.coord = Coordinate819;

Shape816.geometry = LineSet817;

HAnimSegment815.children = new MFNode();

HAnimSegment815.children[0] = Shape816;

HAnimJoint814.children = new MFNode();

HAnimJoint814.children[0] = HAnimSegment815;

HAnimJoint HAnimJoint820 = createNode("HAnimJoint");
HAnimJoint820.name = "r_metatarsophalangeal_5";
HAnimJoint820.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint820.center = new SFVec3f(new float[-0.12368,0.01367,0.08656]);
HAnimJoint820.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint820.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment821 = createNode("HAnimSegment");
HAnimSegment821.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment821.DEF = "hanim_r_tarsal_proximal_phalanx_5";
Shape Shape822 = createNode("Shape");
LineSet LineSet823 = createNode("LineSet");
LineSet823.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA824 = createNode("ColorRGBA");
ColorRGBA824.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet823.color = ColorRGBA824;

Coordinate Coordinate825 = createNode("Coordinate");
Coordinate825.point = new MFVec3f(new float[-0.12368,0.01367,0.08656,-0.12044,0.020945,0.03474]);
LineSet823.coord = Coordinate825;

Shape822.geometry = LineSet823;

HAnimSegment821.children = new MFNode();

HAnimSegment821.children[0] = Shape822;

HAnimJoint820.children = new MFNode();

HAnimJoint820.children[0] = HAnimSegment821;

HAnimJoint HAnimJoint826 = createNode("HAnimJoint");
HAnimJoint826.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint826.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint826.center = new SFVec3f(new float[-0.126,0.01086,0.09414]);
HAnimJoint826.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint826.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment827 = createNode("HAnimSegment");
HAnimSegment827.name = "r_tarsal_middle_phalanx_5";
HAnimSegment827.DEF = "hanim_r_tarsal_middle_phalanx_5";
HAnimSite HAnimSite828 = createNode("HAnimSite");
HAnimSite828.name = "r_metatarsal_phalanx_5";
HAnimSite828.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite828.translation = new SFVec3f(new float[-0.12,0.02,0.04]);
TouchSensor TouchSensor829 = createNode("TouchSensor");
TouchSensor829.description = "HAnimSite 60 hanim_r_metatarsal_phalanx_5_pt";
HAnimSite828.children = new MFNode();

HAnimSite828.children[0] = TouchSensor829;

Shape Shape830 = createNode("Shape");
Appearance Appearance831 = createNode("Appearance");
Material Material832 = createNode("Material");
Material832.diffuseColor = new SFColor(new float[1,1,1]);
Appearance831.material = Material832;

Shape830.appearance = Appearance831;

IndexedFaceSet IndexedFaceSet833 = createNode("IndexedFaceSet");
IndexedFaceSet833.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet833.creaseAngle = 0.5;
IndexedFaceSet833.solid = False;
ColorRGBA ColorRGBA834 = createNode("ColorRGBA");
ColorRGBA834.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet833.color = ColorRGBA834;

Coordinate Coordinate835 = createNode("Coordinate");
Coordinate835.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet833.coord = Coordinate835;

Shape830.geometry = IndexedFaceSet833;

HAnimSite828.children[1] = Shape830;

Billboard Billboard836 = createNode("Billboard");
Billboard836.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape837 = createNode("Shape");
Text Text838 = createNode("Text");
Text838.string = new MFString(new java.lang.String["60"]);
FontStyle FontStyle839 = createNode("FontStyle");
FontStyle839.size = 0.035;
Text838.fontStyle = FontStyle839;

Shape837.geometry = Text838;

Billboard836.children = new MFNode();

Billboard836.children[0] = Shape837;

HAnimSite828.children[2] = Billboard836;

HAnimSegment827.children = new MFNode();

HAnimSegment827.children[0] = HAnimSite828;

Shape Shape840 = createNode("Shape");
LineSet LineSet841 = createNode("LineSet");
LineSet841.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA842 = createNode("ColorRGBA");
ColorRGBA842.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet841.color = ColorRGBA842;

Coordinate Coordinate843 = createNode("Coordinate");
Coordinate843.point = new MFVec3f(new float[-0.126,0.01086,0.09414,-0.12368,0.01367,0.08656]);
LineSet841.coord = Coordinate843;

Shape840.geometry = LineSet841;

HAnimSegment827.children[1] = Shape840;

HAnimJoint826.children = new MFNode();

HAnimJoint826.children[0] = HAnimSegment827;

HAnimJoint HAnimJoint844 = createNode("HAnimJoint");
HAnimJoint844.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint844.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint844.center = new SFVec3f(new float[-0.1269,0.00856,0.10188]);
HAnimJoint844.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint844.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment845 = createNode("HAnimSegment");
HAnimSegment845.name = "r_tarsal_distal_phalanx_5";
HAnimSegment845.DEF = "hanim_r_tarsal_distal_phalanx_5";
HAnimSite HAnimSite846 = createNode("HAnimSite");
HAnimSite846.name = "r_tarsal_distal_phalanx_5";
HAnimSite846.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimSite846.translation = new SFVec3f(new float[-0.125,0.016,0.115]);
TouchSensor TouchSensor847 = createNode("TouchSensor");
TouchSensor847.description = "HAnimSite 120 hanim_r_tarsal_distal_phalanx_5_tip";
HAnimSite846.children = new MFNode();

HAnimSite846.children[0] = TouchSensor847;

Shape Shape848 = createNode("Shape");
Appearance Appearance849 = createNode("Appearance");
Material Material850 = createNode("Material");
Material850.diffuseColor = new SFColor(new float[1,1,1]);
Appearance849.material = Material850;

Shape848.appearance = Appearance849;

IndexedFaceSet IndexedFaceSet851 = createNode("IndexedFaceSet");
IndexedFaceSet851.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet851.creaseAngle = 0.5;
IndexedFaceSet851.solid = False;
ColorRGBA ColorRGBA852 = createNode("ColorRGBA");
ColorRGBA852.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet851.color = ColorRGBA852;

Coordinate Coordinate853 = createNode("Coordinate");
Coordinate853.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet851.coord = Coordinate853;

Shape848.geometry = IndexedFaceSet851;

HAnimSite846.children[1] = Shape848;

Billboard Billboard854 = createNode("Billboard");
Billboard854.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape855 = createNode("Shape");
Text Text856 = createNode("Text");
Text856.string = new MFString(new java.lang.String["120"]);
FontStyle FontStyle857 = createNode("FontStyle");
FontStyle857.size = 0.035;
Text856.fontStyle = FontStyle857;

Shape855.geometry = Text856;

Billboard854.children = new MFNode();

Billboard854.children[0] = Shape855;

HAnimSite846.children[2] = Billboard854;

HAnimSegment845.children = new MFNode();

HAnimSegment845.children[0] = HAnimSite846;

Shape Shape858 = createNode("Shape");
LineSet LineSet859 = createNode("LineSet");
LineSet859.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA860 = createNode("ColorRGBA");
ColorRGBA860.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet859.color = ColorRGBA860;

Coordinate Coordinate861 = createNode("Coordinate");
Coordinate861.point = new MFVec3f(new float[-0.1269,0.00856,0.10188,-0.126,0.01086,0.09414]);
LineSet859.coord = Coordinate861;

Shape858.geometry = LineSet859;

HAnimSegment845.children[1] = Shape858;

HAnimJoint844.children = new MFNode();

HAnimJoint844.children[0] = HAnimSegment845;

HAnimJoint826.children[1] = HAnimJoint844;

HAnimJoint820.children[1] = HAnimJoint826;

HAnimJoint814.children[1] = HAnimJoint820;

HAnimJoint772.children[2] = HAnimJoint814;

HAnimJoint766.children[1] = HAnimJoint772;

HAnimJoint598.children[2] = HAnimJoint766;

HAnimJoint556.children[1] = HAnimJoint598;

HAnimJoint502.children[1] = HAnimJoint556;

HAnimJoint16.children[2] = HAnimJoint502;

HAnimJoint12.children[1] = HAnimJoint16;

HAnimJoint HAnimJoint862 = createNode("HAnimJoint");
HAnimJoint862.name = "vl5";
HAnimJoint862.DEF = "hanim_vl5";
HAnimJoint862.center = new SFVec3f(new float[0,0.9254,-0.01376]);
HAnimJoint862.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint862.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment863 = createNode("HAnimSegment");
HAnimSegment863.name = "l5";
HAnimSegment863.DEF = "hanim_l5";
HAnimSite HAnimSite864 = createNode("HAnimSite");
HAnimSite864.name = "spine_1_middle_back";
HAnimSite864.DEF = "hanim_spine_1_middle_back_pt";
HAnimSite864.translation = new SFVec3f(new float[0,1,-0.1]);
TouchSensor TouchSensor865 = createNode("TouchSensor");
TouchSensor865.description = "HAnimSite 24 hanim_spine_1_middle_back_pt";
HAnimSite864.children = new MFNode();

HAnimSite864.children[0] = TouchSensor865;

Shape Shape866 = createNode("Shape");
Appearance Appearance867 = createNode("Appearance");
Material Material868 = createNode("Material");
Material868.diffuseColor = new SFColor(new float[1,1,1]);
Appearance867.material = Material868;

Shape866.appearance = Appearance867;

IndexedFaceSet IndexedFaceSet869 = createNode("IndexedFaceSet");
IndexedFaceSet869.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet869.creaseAngle = 0.5;
IndexedFaceSet869.solid = False;
ColorRGBA ColorRGBA870 = createNode("ColorRGBA");
ColorRGBA870.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet869.color = ColorRGBA870;

Coordinate Coordinate871 = createNode("Coordinate");
Coordinate871.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet869.coord = Coordinate871;

Shape866.geometry = IndexedFaceSet869;

HAnimSite864.children[1] = Shape866;

Billboard Billboard872 = createNode("Billboard");
Billboard872.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape873 = createNode("Shape");
Text Text874 = createNode("Text");
Text874.string = new MFString(new java.lang.String["24"]);
FontStyle FontStyle875 = createNode("FontStyle");
FontStyle875.size = 0.035;
Text874.fontStyle = FontStyle875;

Shape873.geometry = Text874;

Billboard872.children = new MFNode();

Billboard872.children[0] = Shape873;

HAnimSite864.children[2] = Billboard872;

HAnimSegment863.children = new MFNode();

HAnimSegment863.children[0] = HAnimSite864;

HAnimSite HAnimSite876 = createNode("HAnimSite");
HAnimSite876.name = "spine_2_lower_back";
HAnimSite876.DEF = "hanim_spine_2_lower_back_pt";
HAnimSite876.translation = new SFVec3f(new float[0,0.95,-0.1]);
TouchSensor TouchSensor877 = createNode("TouchSensor");
TouchSensor877.description = "HAnimSite 25 hanim_spine_2_lower_back_pt";
HAnimSite876.children = new MFNode();

HAnimSite876.children[0] = TouchSensor877;

Shape Shape878 = createNode("Shape");
Appearance Appearance879 = createNode("Appearance");
Material Material880 = createNode("Material");
Material880.diffuseColor = new SFColor(new float[1,1,1]);
Appearance879.material = Material880;

Shape878.appearance = Appearance879;

IndexedFaceSet IndexedFaceSet881 = createNode("IndexedFaceSet");
IndexedFaceSet881.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet881.creaseAngle = 0.5;
IndexedFaceSet881.solid = False;
ColorRGBA ColorRGBA882 = createNode("ColorRGBA");
ColorRGBA882.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet881.color = ColorRGBA882;

Coordinate Coordinate883 = createNode("Coordinate");
Coordinate883.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet881.coord = Coordinate883;

Shape878.geometry = IndexedFaceSet881;

HAnimSite876.children[1] = Shape878;

Billboard Billboard884 = createNode("Billboard");
Billboard884.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape885 = createNode("Shape");
Text Text886 = createNode("Text");
Text886.string = new MFString(new java.lang.String["25"]);
FontStyle FontStyle887 = createNode("FontStyle");
FontStyle887.size = 0.035;
Text886.fontStyle = FontStyle887;

Shape885.geometry = Text886;

Billboard884.children = new MFNode();

Billboard884.children[0] = Shape885;

HAnimSite876.children[2] = Billboard884;

HAnimSegment863.children[1] = HAnimSite876;

HAnimSite HAnimSite888 = createNode("HAnimSite");
HAnimSite888.name = "waist_preferred_anterior";
HAnimSite888.DEF = "hanim_waist_preferred_anterior_pt";
HAnimSite888.translation = new SFVec3f(new float[0,0.9,0.1]);
TouchSensor TouchSensor889 = createNode("TouchSensor");
TouchSensor889.description = "HAnimSite 26 hanim_waist_preferred_anterior_pt";
HAnimSite888.children = new MFNode();

HAnimSite888.children[0] = TouchSensor889;

Shape Shape890 = createNode("Shape");
Appearance Appearance891 = createNode("Appearance");
Material Material892 = createNode("Material");
Material892.diffuseColor = new SFColor(new float[1,1,1]);
Appearance891.material = Material892;

Shape890.appearance = Appearance891;

IndexedFaceSet IndexedFaceSet893 = createNode("IndexedFaceSet");
IndexedFaceSet893.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet893.creaseAngle = 0.5;
IndexedFaceSet893.solid = False;
ColorRGBA ColorRGBA894 = createNode("ColorRGBA");
ColorRGBA894.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet893.color = ColorRGBA894;

Coordinate Coordinate895 = createNode("Coordinate");
Coordinate895.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet893.coord = Coordinate895;

Shape890.geometry = IndexedFaceSet893;

HAnimSite888.children[1] = Shape890;

Billboard Billboard896 = createNode("Billboard");
Billboard896.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape897 = createNode("Shape");
Text Text898 = createNode("Text");
Text898.string = new MFString(new java.lang.String["26"]);
FontStyle FontStyle899 = createNode("FontStyle");
FontStyle899.size = 0.035;
Text898.fontStyle = FontStyle899;

Shape897.geometry = Text898;

Billboard896.children = new MFNode();

Billboard896.children[0] = Shape897;

HAnimSite888.children[2] = Billboard896;

HAnimSegment863.children[2] = HAnimSite888;

HAnimSite HAnimSite900 = createNode("HAnimSite");
HAnimSite900.name = "waist_preferred_posterior";
HAnimSite900.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite900.translation = new SFVec3f(new float[0,0.9,-0.1]);
TouchSensor TouchSensor901 = createNode("TouchSensor");
TouchSensor901.description = "HAnimSite 27 hanim_waist_preferred_posterior_pt";
HAnimSite900.children = new MFNode();

HAnimSite900.children[0] = TouchSensor901;

Shape Shape902 = createNode("Shape");
Appearance Appearance903 = createNode("Appearance");
Material Material904 = createNode("Material");
Material904.diffuseColor = new SFColor(new float[1,1,1]);
Appearance903.material = Material904;

Shape902.appearance = Appearance903;

IndexedFaceSet IndexedFaceSet905 = createNode("IndexedFaceSet");
IndexedFaceSet905.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet905.creaseAngle = 0.5;
IndexedFaceSet905.solid = False;
ColorRGBA ColorRGBA906 = createNode("ColorRGBA");
ColorRGBA906.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet905.color = ColorRGBA906;

Coordinate Coordinate907 = createNode("Coordinate");
Coordinate907.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet905.coord = Coordinate907;

Shape902.geometry = IndexedFaceSet905;

HAnimSite900.children[1] = Shape902;

Billboard Billboard908 = createNode("Billboard");
Billboard908.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape909 = createNode("Shape");
Text Text910 = createNode("Text");
Text910.string = new MFString(new java.lang.String["27"]);
FontStyle FontStyle911 = createNode("FontStyle");
FontStyle911.size = 0.035;
Text910.fontStyle = FontStyle911;

Shape909.geometry = Text910;

Billboard908.children = new MFNode();

Billboard908.children[0] = Shape909;

HAnimSite900.children[2] = Billboard908;

HAnimSegment863.children[3] = HAnimSite900;

HAnimSite HAnimSite912 = createNode("HAnimSite");
HAnimSite912.name = "navel";
HAnimSite912.DEF = "hanim_navel_pt";
HAnimSite912.translation = new SFVec3f(new float[0,0.9,-0.1]);
TouchSensor TouchSensor913 = createNode("TouchSensor");
TouchSensor913.description = "HAnimSite 84 hanim_navel_pt";
HAnimSite912.children = new MFNode();

HAnimSite912.children[0] = TouchSensor913;

Shape Shape914 = createNode("Shape");
Appearance Appearance915 = createNode("Appearance");
Material Material916 = createNode("Material");
Material916.diffuseColor = new SFColor(new float[1,1,1]);
Appearance915.material = Material916;

Shape914.appearance = Appearance915;

IndexedFaceSet IndexedFaceSet917 = createNode("IndexedFaceSet");
IndexedFaceSet917.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet917.creaseAngle = 0.5;
IndexedFaceSet917.solid = False;
ColorRGBA ColorRGBA918 = createNode("ColorRGBA");
ColorRGBA918.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet917.color = ColorRGBA918;

Coordinate Coordinate919 = createNode("Coordinate");
Coordinate919.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet917.coord = Coordinate919;

Shape914.geometry = IndexedFaceSet917;

HAnimSite912.children[1] = Shape914;

Billboard Billboard920 = createNode("Billboard");
Billboard920.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape921 = createNode("Shape");
Text Text922 = createNode("Text");
Text922.string = new MFString(new java.lang.String["84"]);
FontStyle FontStyle923 = createNode("FontStyle");
FontStyle923.size = 0.035;
Text922.fontStyle = FontStyle923;

Shape921.geometry = Text922;

Billboard920.children = new MFNode();

Billboard920.children[0] = Shape921;

HAnimSite912.children[2] = Billboard920;

HAnimSegment863.children[4] = HAnimSite912;

Shape Shape924 = createNode("Shape");
LineSet LineSet925 = createNode("LineSet");
LineSet925.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA926 = createNode("ColorRGBA");
ColorRGBA926.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet925.color = ColorRGBA926;

Coordinate Coordinate927 = createNode("Coordinate");
Coordinate927.point = new MFVec3f(new float[0,0.9254,-0.01376,0,0.77,0]);
LineSet925.coord = Coordinate927;

Shape924.geometry = LineSet925;

HAnimSegment863.children[5] = Shape924;

HAnimJoint862.children = new MFNode();

HAnimJoint862.children[0] = HAnimSegment863;

HAnimJoint HAnimJoint928 = createNode("HAnimJoint");
HAnimJoint928.name = "vl4";
HAnimJoint928.DEF = "hanim_vl4";
HAnimJoint928.center = new SFVec3f(new float[0,0.9497,-0.01376]);
HAnimJoint928.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint928.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment929 = createNode("HAnimSegment");
HAnimSegment929.name = "l4";
HAnimSegment929.DEF = "hanim_l4";
Shape Shape930 = createNode("Shape");
LineSet LineSet931 = createNode("LineSet");
LineSet931.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA932 = createNode("ColorRGBA");
ColorRGBA932.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet931.color = ColorRGBA932;

Coordinate Coordinate933 = createNode("Coordinate");
Coordinate933.point = new MFVec3f(new float[0,0.9497,-0.01376,0,0.9254,-0.01376]);
LineSet931.coord = Coordinate933;

Shape930.geometry = LineSet931;

HAnimSegment929.children = new MFNode();

HAnimSegment929.children[0] = Shape930;

HAnimJoint928.children = new MFNode();

HAnimJoint928.children[0] = HAnimSegment929;

HAnimJoint HAnimJoint934 = createNode("HAnimJoint");
HAnimJoint934.name = "vl3";
HAnimJoint934.DEF = "hanim_vl3";
HAnimJoint934.center = new SFVec3f(new float[0,0.9659,-0.01376]);
HAnimJoint934.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint934.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment935 = createNode("HAnimSegment");
HAnimSegment935.name = "l3";
HAnimSegment935.DEF = "hanim_l3";
Shape Shape936 = createNode("Shape");
LineSet LineSet937 = createNode("LineSet");
LineSet937.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA938 = createNode("ColorRGBA");
ColorRGBA938.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet937.color = ColorRGBA938;

Coordinate Coordinate939 = createNode("Coordinate");
Coordinate939.point = new MFVec3f(new float[0,0.9659,-0.01376,0,0.9497,-0.01376]);
LineSet937.coord = Coordinate939;

Shape936.geometry = LineSet937;

HAnimSegment935.children = new MFNode();

HAnimSegment935.children[0] = Shape936;

HAnimJoint934.children = new MFNode();

HAnimJoint934.children[0] = HAnimSegment935;

HAnimJoint HAnimJoint940 = createNode("HAnimJoint");
HAnimJoint940.name = "vl2";
HAnimJoint940.DEF = "hanim_vl2";
HAnimJoint940.center = new SFVec3f(new float[0,0.98235,-0.01376]);
HAnimJoint940.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint940.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment941 = createNode("HAnimSegment");
HAnimSegment941.name = "l2";
HAnimSegment941.DEF = "hanim_l2";
HAnimSite HAnimSite942 = createNode("HAnimSite");
HAnimSite942.name = "l_rib10";
HAnimSite942.DEF = "hanim_l_rib10_pt";
HAnimSite942.translation = new SFVec3f(new float[0.09,1,0.04]);
TouchSensor TouchSensor943 = createNode("TouchSensor");
TouchSensor943.description = "HAnimSite 28 hanim_l_rib10_pt";
HAnimSite942.children = new MFNode();

HAnimSite942.children[0] = TouchSensor943;

Shape Shape944 = createNode("Shape");
Appearance Appearance945 = createNode("Appearance");
Material Material946 = createNode("Material");
Material946.diffuseColor = new SFColor(new float[1,1,1]);
Appearance945.material = Material946;

Shape944.appearance = Appearance945;

IndexedFaceSet IndexedFaceSet947 = createNode("IndexedFaceSet");
IndexedFaceSet947.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet947.creaseAngle = 0.5;
IndexedFaceSet947.solid = False;
ColorRGBA ColorRGBA948 = createNode("ColorRGBA");
ColorRGBA948.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet947.color = ColorRGBA948;

Coordinate Coordinate949 = createNode("Coordinate");
Coordinate949.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet947.coord = Coordinate949;

Shape944.geometry = IndexedFaceSet947;

HAnimSite942.children[1] = Shape944;

Billboard Billboard950 = createNode("Billboard");
Billboard950.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape951 = createNode("Shape");
Text Text952 = createNode("Text");
Text952.string = new MFString(new java.lang.String["28"]);
FontStyle FontStyle953 = createNode("FontStyle");
FontStyle953.size = 0.035;
Text952.fontStyle = FontStyle953;

Shape951.geometry = Text952;

Billboard950.children = new MFNode();

Billboard950.children[0] = Shape951;

HAnimSite942.children[2] = Billboard950;

HAnimSegment941.children = new MFNode();

HAnimSegment941.children[0] = HAnimSite942;

HAnimSite HAnimSite954 = createNode("HAnimSite");
HAnimSite954.name = "r_rib10";
HAnimSite954.DEF = "hanim_r_rib10_pt";
HAnimSite954.translation = new SFVec3f(new float[-0.09,1,0.04]);
TouchSensor TouchSensor955 = createNode("TouchSensor");
TouchSensor955.description = "HAnimSite 30 hanim_r_rib10_pt";
HAnimSite954.children = new MFNode();

HAnimSite954.children[0] = TouchSensor955;

Shape Shape956 = createNode("Shape");
Appearance Appearance957 = createNode("Appearance");
Material Material958 = createNode("Material");
Material958.diffuseColor = new SFColor(new float[1,1,1]);
Appearance957.material = Material958;

Shape956.appearance = Appearance957;

IndexedFaceSet IndexedFaceSet959 = createNode("IndexedFaceSet");
IndexedFaceSet959.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet959.creaseAngle = 0.5;
IndexedFaceSet959.solid = False;
ColorRGBA ColorRGBA960 = createNode("ColorRGBA");
ColorRGBA960.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet959.color = ColorRGBA960;

Coordinate Coordinate961 = createNode("Coordinate");
Coordinate961.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet959.coord = Coordinate961;

Shape956.geometry = IndexedFaceSet959;

HAnimSite954.children[1] = Shape956;

Billboard Billboard962 = createNode("Billboard");
Billboard962.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape963 = createNode("Shape");
Text Text964 = createNode("Text");
Text964.string = new MFString(new java.lang.String["30"]);
FontStyle FontStyle965 = createNode("FontStyle");
FontStyle965.size = 0.035;
Text964.fontStyle = FontStyle965;

Shape963.geometry = Text964;

Billboard962.children = new MFNode();

Billboard962.children[0] = Shape963;

HAnimSite954.children[2] = Billboard962;

HAnimSegment941.children[1] = HAnimSite954;

Shape Shape966 = createNode("Shape");
LineSet LineSet967 = createNode("LineSet");
LineSet967.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA968 = createNode("ColorRGBA");
ColorRGBA968.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet967.color = ColorRGBA968;

Coordinate Coordinate969 = createNode("Coordinate");
Coordinate969.point = new MFVec3f(new float[0,0.98235,-0.01376,0,0.9659,-0.01376]);
LineSet967.coord = Coordinate969;

Shape966.geometry = LineSet967;

HAnimSegment941.children[2] = Shape966;

HAnimJoint940.children = new MFNode();

HAnimJoint940.children[0] = HAnimSegment941;

HAnimJoint HAnimJoint970 = createNode("HAnimJoint");
HAnimJoint970.name = "vl1";
HAnimJoint970.DEF = "hanim_vl1";
HAnimJoint970.center = new SFVec3f(new float[0,0.99967,-0.01376]);
HAnimJoint970.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint970.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment971 = createNode("HAnimSegment");
HAnimSegment971.name = "l1";
HAnimSegment971.DEF = "hanim_l1";
Shape Shape972 = createNode("Shape");
LineSet LineSet973 = createNode("LineSet");
LineSet973.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA974 = createNode("ColorRGBA");
ColorRGBA974.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet973.color = ColorRGBA974;

Coordinate Coordinate975 = createNode("Coordinate");
Coordinate975.point = new MFVec3f(new float[0,0.99967,-0.01376,0,0.98235,-0.01376]);
LineSet973.coord = Coordinate975;

Shape972.geometry = LineSet973;

HAnimSegment971.children = new MFNode();

HAnimSegment971.children[0] = Shape972;

HAnimJoint970.children = new MFNode();

HAnimJoint970.children[0] = HAnimSegment971;

HAnimJoint HAnimJoint976 = createNode("HAnimJoint");
HAnimJoint976.name = "vt12";
HAnimJoint976.DEF = "hanim_vt12";
HAnimJoint976.center = new SFVec3f(new float[0,1.0231,-0.01376]);
HAnimJoint976.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint976.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment977 = createNode("HAnimSegment");
HAnimSegment977.name = "t12";
HAnimSegment977.DEF = "hanim_t12";
Shape Shape978 = createNode("Shape");
LineSet LineSet979 = createNode("LineSet");
LineSet979.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA980 = createNode("ColorRGBA");
ColorRGBA980.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet979.color = ColorRGBA980;

Coordinate Coordinate981 = createNode("Coordinate");
Coordinate981.point = new MFVec3f(new float[0,1.0231,-0.01376,0,0.99967,-0.01376]);
LineSet979.coord = Coordinate981;

Shape978.geometry = LineSet979;

HAnimSegment977.children = new MFNode();

HAnimSegment977.children[0] = Shape978;

HAnimJoint976.children = new MFNode();

HAnimJoint976.children[0] = HAnimSegment977;

HAnimJoint HAnimJoint982 = createNode("HAnimJoint");
HAnimJoint982.name = "vt11";
HAnimJoint982.DEF = "hanim_vt11";
HAnimJoint982.center = new SFVec3f(new float[0,1.0467,-0.01376]);
HAnimJoint982.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint982.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment983 = createNode("HAnimSegment");
HAnimSegment983.name = "t11";
HAnimSegment983.DEF = "hanim_t11";
Shape Shape984 = createNode("Shape");
LineSet LineSet985 = createNode("LineSet");
LineSet985.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA986 = createNode("ColorRGBA");
ColorRGBA986.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet985.color = ColorRGBA986;

Coordinate Coordinate987 = createNode("Coordinate");
Coordinate987.point = new MFVec3f(new float[0,1.0467,-0.01376,0,1.0231,-0.01376]);
LineSet985.coord = Coordinate987;

Shape984.geometry = LineSet985;

HAnimSegment983.children = new MFNode();

HAnimSegment983.children[0] = Shape984;

HAnimJoint982.children = new MFNode();

HAnimJoint982.children[0] = HAnimSegment983;

HAnimJoint HAnimJoint988 = createNode("HAnimJoint");
HAnimJoint988.name = "vt10";
HAnimJoint988.DEF = "hanim_vt10";
HAnimJoint988.center = new SFVec3f(new float[0,1.0638,-0.01378]);
HAnimJoint988.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint988.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment989 = createNode("HAnimSegment");
HAnimSegment989.name = "t10";
HAnimSegment989.DEF = "hanim_t10";
HAnimSite HAnimSite990 = createNode("HAnimSite");
HAnimSite990.name = "substernale";
HAnimSite990.DEF = "hanim_substernale_pt";
HAnimSite990.translation = new SFVec3f(new float[0,1.08,0.076]);
TouchSensor TouchSensor991 = createNode("TouchSensor");
TouchSensor991.description = "HAnimSite 13 hanim_substernale_pt";
HAnimSite990.children = new MFNode();

HAnimSite990.children[0] = TouchSensor991;

Shape Shape992 = createNode("Shape");
Appearance Appearance993 = createNode("Appearance");
Material Material994 = createNode("Material");
Material994.diffuseColor = new SFColor(new float[1,1,1]);
Appearance993.material = Material994;

Shape992.appearance = Appearance993;

IndexedFaceSet IndexedFaceSet995 = createNode("IndexedFaceSet");
IndexedFaceSet995.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet995.creaseAngle = 0.5;
IndexedFaceSet995.solid = False;
ColorRGBA ColorRGBA996 = createNode("ColorRGBA");
ColorRGBA996.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet995.color = ColorRGBA996;

Coordinate Coordinate997 = createNode("Coordinate");
Coordinate997.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet995.coord = Coordinate997;

Shape992.geometry = IndexedFaceSet995;

HAnimSite990.children[1] = Shape992;

Billboard Billboard998 = createNode("Billboard");
Billboard998.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape999 = createNode("Shape");
Text Text1000 = createNode("Text");
Text1000.string = new MFString(new java.lang.String["13"]);
FontStyle FontStyle1001 = createNode("FontStyle");
FontStyle1001.size = 0.035;
Text1000.fontStyle = FontStyle1001;

Shape999.geometry = Text1000;

Billboard998.children = new MFNode();

Billboard998.children[0] = Shape999;

HAnimSite990.children[2] = Billboard998;

HAnimSegment989.children = new MFNode();

HAnimSegment989.children[0] = HAnimSite990;

HAnimSite HAnimSite1002 = createNode("HAnimSite");
HAnimSite1002.name = "mesosternale";
HAnimSite1002.DEF = "hanim_mesosternale_pt";
HAnimSite1002.translation = new SFVec3f(new float[0,1.15,0.076]);
TouchSensor TouchSensor1003 = createNode("TouchSensor");
TouchSensor1003.description = "HAnimSite 88 hanim_mesosternale_pt";
HAnimSite1002.children = new MFNode();

HAnimSite1002.children[0] = TouchSensor1003;

Shape Shape1004 = createNode("Shape");
Appearance Appearance1005 = createNode("Appearance");
Material Material1006 = createNode("Material");
Material1006.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1005.material = Material1006;

Shape1004.appearance = Appearance1005;

IndexedFaceSet IndexedFaceSet1007 = createNode("IndexedFaceSet");
IndexedFaceSet1007.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1007.creaseAngle = 0.5;
IndexedFaceSet1007.solid = False;
ColorRGBA ColorRGBA1008 = createNode("ColorRGBA");
ColorRGBA1008.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1007.color = ColorRGBA1008;

Coordinate Coordinate1009 = createNode("Coordinate");
Coordinate1009.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1007.coord = Coordinate1009;

Shape1004.geometry = IndexedFaceSet1007;

HAnimSite1002.children[1] = Shape1004;

Billboard Billboard1010 = createNode("Billboard");
Billboard1010.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1011 = createNode("Shape");
Text Text1012 = createNode("Text");
Text1012.string = new MFString(new java.lang.String["88"]);
FontStyle FontStyle1013 = createNode("FontStyle");
FontStyle1013.size = 0.035;
Text1012.fontStyle = FontStyle1013;

Shape1011.geometry = Text1012;

Billboard1010.children = new MFNode();

Billboard1010.children[0] = Shape1011;

HAnimSite1002.children[2] = Billboard1010;

HAnimSegment989.children[1] = HAnimSite1002;

Shape Shape1014 = createNode("Shape");
LineSet LineSet1015 = createNode("LineSet");
LineSet1015.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1016 = createNode("ColorRGBA");
ColorRGBA1016.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1015.color = ColorRGBA1016;

Coordinate Coordinate1017 = createNode("Coordinate");
Coordinate1017.point = new MFVec3f(new float[0,1.0638,-0.01378,0,1.0467,-0.01376]);
LineSet1015.coord = Coordinate1017;

Shape1014.geometry = LineSet1015;

HAnimSegment989.children[2] = Shape1014;

HAnimJoint988.children = new MFNode();

HAnimJoint988.children[0] = HAnimSegment989;

HAnimJoint HAnimJoint1018 = createNode("HAnimJoint");
HAnimJoint1018.name = "vt9";
HAnimJoint1018.DEF = "hanim_vt9";
HAnimJoint1018.center = new SFVec3f(new float[0,1.0784,-0.01376]);
HAnimJoint1018.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1018.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1019 = createNode("HAnimSegment");
HAnimSegment1019.name = "t9";
HAnimSegment1019.DEF = "hanim_t9";
HAnimSite HAnimSite1020 = createNode("HAnimSite");
HAnimSite1020.name = "l_thelion";
HAnimSite1020.DEF = "hanim_l_thelion_pt";
HAnimSite1020.translation = new SFVec3f(new float[0.07,1.12,0.09]);
TouchSensor TouchSensor1021 = createNode("TouchSensor");
TouchSensor1021.description = "HAnimSite 29 hanim_l_thelion_pt";
HAnimSite1020.children = new MFNode();

HAnimSite1020.children[0] = TouchSensor1021;

Shape Shape1022 = createNode("Shape");
Appearance Appearance1023 = createNode("Appearance");
Material Material1024 = createNode("Material");
Material1024.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1023.material = Material1024;

Shape1022.appearance = Appearance1023;

IndexedFaceSet IndexedFaceSet1025 = createNode("IndexedFaceSet");
IndexedFaceSet1025.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1025.creaseAngle = 0.5;
IndexedFaceSet1025.solid = False;
ColorRGBA ColorRGBA1026 = createNode("ColorRGBA");
ColorRGBA1026.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1025.color = ColorRGBA1026;

Coordinate Coordinate1027 = createNode("Coordinate");
Coordinate1027.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1025.coord = Coordinate1027;

Shape1022.geometry = IndexedFaceSet1025;

HAnimSite1020.children[1] = Shape1022;

Billboard Billboard1028 = createNode("Billboard");
Billboard1028.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1029 = createNode("Shape");
Text Text1030 = createNode("Text");
Text1030.string = new MFString(new java.lang.String["29"]);
FontStyle FontStyle1031 = createNode("FontStyle");
FontStyle1031.size = 0.035;
Text1030.fontStyle = FontStyle1031;

Shape1029.geometry = Text1030;

Billboard1028.children = new MFNode();

Billboard1028.children[0] = Shape1029;

HAnimSite1020.children[2] = Billboard1028;

HAnimSegment1019.children = new MFNode();

HAnimSegment1019.children[0] = HAnimSite1020;

HAnimSite HAnimSite1032 = createNode("HAnimSite");
HAnimSite1032.name = "r_thelion";
HAnimSite1032.DEF = "hanim_r_thelion_pt";
HAnimSite1032.translation = new SFVec3f(new float[-0.07,1.12,0.09]);
TouchSensor TouchSensor1033 = createNode("TouchSensor");
TouchSensor1033.description = "HAnimSite 31 hanim_r_thelion_pt";
HAnimSite1032.children = new MFNode();

HAnimSite1032.children[0] = TouchSensor1033;

Shape Shape1034 = createNode("Shape");
Appearance Appearance1035 = createNode("Appearance");
Material Material1036 = createNode("Material");
Material1036.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1035.material = Material1036;

Shape1034.appearance = Appearance1035;

IndexedFaceSet IndexedFaceSet1037 = createNode("IndexedFaceSet");
IndexedFaceSet1037.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1037.creaseAngle = 0.5;
IndexedFaceSet1037.solid = False;
ColorRGBA ColorRGBA1038 = createNode("ColorRGBA");
ColorRGBA1038.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1037.color = ColorRGBA1038;

Coordinate Coordinate1039 = createNode("Coordinate");
Coordinate1039.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1037.coord = Coordinate1039;

Shape1034.geometry = IndexedFaceSet1037;

HAnimSite1032.children[1] = Shape1034;

Billboard Billboard1040 = createNode("Billboard");
Billboard1040.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1041 = createNode("Shape");
Text Text1042 = createNode("Text");
Text1042.string = new MFString(new java.lang.String["31"]);
FontStyle FontStyle1043 = createNode("FontStyle");
FontStyle1043.size = 0.035;
Text1042.fontStyle = FontStyle1043;

Shape1041.geometry = Text1042;

Billboard1040.children = new MFNode();

Billboard1040.children[0] = Shape1041;

HAnimSite1032.children[2] = Billboard1040;

HAnimSegment1019.children[1] = HAnimSite1032;

HAnimSite HAnimSite1044 = createNode("HAnimSite");
HAnimSite1044.name = "rear_center_midsagittal_plane";
HAnimSite1044.DEF = "hanim_rear_center_midsagittal_plane_pt";
HAnimSite1044.translation = new SFVec3f(new float[0,1.1,-0.1]);
TouchSensor TouchSensor1045 = createNode("TouchSensor");
TouchSensor1045.description = "HAnimSite 92 hanim_rear_center_midsagittal_plane_pt";
HAnimSite1044.children = new MFNode();

HAnimSite1044.children[0] = TouchSensor1045;

Shape Shape1046 = createNode("Shape");
Appearance Appearance1047 = createNode("Appearance");
Material Material1048 = createNode("Material");
Material1048.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1047.material = Material1048;

Shape1046.appearance = Appearance1047;

IndexedFaceSet IndexedFaceSet1049 = createNode("IndexedFaceSet");
IndexedFaceSet1049.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1049.creaseAngle = 0.5;
IndexedFaceSet1049.solid = False;
ColorRGBA ColorRGBA1050 = createNode("ColorRGBA");
ColorRGBA1050.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1049.color = ColorRGBA1050;

Coordinate Coordinate1051 = createNode("Coordinate");
Coordinate1051.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1049.coord = Coordinate1051;

Shape1046.geometry = IndexedFaceSet1049;

HAnimSite1044.children[1] = Shape1046;

Billboard Billboard1052 = createNode("Billboard");
Billboard1052.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1053 = createNode("Shape");
Text Text1054 = createNode("Text");
Text1054.string = new MFString(new java.lang.String["92"]);
FontStyle FontStyle1055 = createNode("FontStyle");
FontStyle1055.size = 0.035;
Text1054.fontStyle = FontStyle1055;

Shape1053.geometry = Text1054;

Billboard1052.children = new MFNode();

Billboard1052.children[0] = Shape1053;

HAnimSite1044.children[2] = Billboard1052;

HAnimSegment1019.children[2] = HAnimSite1044;

HAnimSite HAnimSite1056 = createNode("HAnimSite");
HAnimSite1056.name = "l_chest_midsagittal_plane";
HAnimSite1056.DEF = "hanim_l_chest_midsagittal_plane_pt";
HAnimSite1056.translation = new SFVec3f(new float[0.13,1.12,0]);
TouchSensor TouchSensor1057 = createNode("TouchSensor");
TouchSensor1057.description = "HAnimSite 94 hanim_l_chest_midsagittal_plane_pt";
HAnimSite1056.children = new MFNode();

HAnimSite1056.children[0] = TouchSensor1057;

Shape Shape1058 = createNode("Shape");
Appearance Appearance1059 = createNode("Appearance");
Material Material1060 = createNode("Material");
Material1060.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1059.material = Material1060;

Shape1058.appearance = Appearance1059;

IndexedFaceSet IndexedFaceSet1061 = createNode("IndexedFaceSet");
IndexedFaceSet1061.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1061.creaseAngle = 0.5;
IndexedFaceSet1061.solid = False;
ColorRGBA ColorRGBA1062 = createNode("ColorRGBA");
ColorRGBA1062.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1061.color = ColorRGBA1062;

Coordinate Coordinate1063 = createNode("Coordinate");
Coordinate1063.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1061.coord = Coordinate1063;

Shape1058.geometry = IndexedFaceSet1061;

HAnimSite1056.children[1] = Shape1058;

Billboard Billboard1064 = createNode("Billboard");
Billboard1064.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1065 = createNode("Shape");
Text Text1066 = createNode("Text");
Text1066.string = new MFString(new java.lang.String["94"]);
FontStyle FontStyle1067 = createNode("FontStyle");
FontStyle1067.size = 0.035;
Text1066.fontStyle = FontStyle1067;

Shape1065.geometry = Text1066;

Billboard1064.children = new MFNode();

Billboard1064.children[0] = Shape1065;

HAnimSite1056.children[2] = Billboard1064;

HAnimSegment1019.children[3] = HAnimSite1056;

HAnimSite HAnimSite1068 = createNode("HAnimSite");
HAnimSite1068.name = "r_chest_midsagittal_plane";
HAnimSite1068.DEF = "hanim_r_chest_midsagittal_plane_pt";
HAnimSite1068.translation = new SFVec3f(new float[-0.13,1.12,0]);
TouchSensor TouchSensor1069 = createNode("TouchSensor");
TouchSensor1069.description = "HAnimSite 95 hanim_r_chest_midsagittal_plane_pt";
HAnimSite1068.children = new MFNode();

HAnimSite1068.children[0] = TouchSensor1069;

Shape Shape1070 = createNode("Shape");
Appearance Appearance1071 = createNode("Appearance");
Material Material1072 = createNode("Material");
Material1072.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1071.material = Material1072;

Shape1070.appearance = Appearance1071;

IndexedFaceSet IndexedFaceSet1073 = createNode("IndexedFaceSet");
IndexedFaceSet1073.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1073.creaseAngle = 0.5;
IndexedFaceSet1073.solid = False;
ColorRGBA ColorRGBA1074 = createNode("ColorRGBA");
ColorRGBA1074.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1073.color = ColorRGBA1074;

Coordinate Coordinate1075 = createNode("Coordinate");
Coordinate1075.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1073.coord = Coordinate1075;

Shape1070.geometry = IndexedFaceSet1073;

HAnimSite1068.children[1] = Shape1070;

Billboard Billboard1076 = createNode("Billboard");
Billboard1076.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1077 = createNode("Shape");
Text Text1078 = createNode("Text");
Text1078.string = new MFString(new java.lang.String["95"]);
FontStyle FontStyle1079 = createNode("FontStyle");
FontStyle1079.size = 0.035;
Text1078.fontStyle = FontStyle1079;

Shape1077.geometry = Text1078;

Billboard1076.children = new MFNode();

Billboard1076.children[0] = Shape1077;

HAnimSite1068.children[2] = Billboard1076;

HAnimSegment1019.children[4] = HAnimSite1068;

Shape Shape1080 = createNode("Shape");
LineSet LineSet1081 = createNode("LineSet");
LineSet1081.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1082 = createNode("ColorRGBA");
ColorRGBA1082.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1081.color = ColorRGBA1082;

Coordinate Coordinate1083 = createNode("Coordinate");
Coordinate1083.point = new MFVec3f(new float[0,1.0784,-0.01376,0,1.0638,-0.01378]);
LineSet1081.coord = Coordinate1083;

Shape1080.geometry = LineSet1081;

HAnimSegment1019.children[5] = Shape1080;

HAnimJoint1018.children = new MFNode();

HAnimJoint1018.children[0] = HAnimSegment1019;

HAnimJoint HAnimJoint1084 = createNode("HAnimJoint");
HAnimJoint1084.name = "vt8";
HAnimJoint1084.DEF = "hanim_vt8";
HAnimJoint1084.center = new SFVec3f(new float[0,1.093,-0.01376]);
HAnimJoint1084.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1084.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1085 = createNode("HAnimSegment");
HAnimSegment1085.name = "t8";
HAnimSegment1085.DEF = "hanim_t8";
Shape Shape1086 = createNode("Shape");
LineSet LineSet1087 = createNode("LineSet");
LineSet1087.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1088 = createNode("ColorRGBA");
ColorRGBA1088.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1087.color = ColorRGBA1088;

Coordinate Coordinate1089 = createNode("Coordinate");
Coordinate1089.point = new MFVec3f(new float[0,1.093,-0.01376,0,1.0784,-0.01376]);
LineSet1087.coord = Coordinate1089;

Shape1086.geometry = LineSet1087;

HAnimSegment1085.children = new MFNode();

HAnimSegment1085.children[0] = Shape1086;

HAnimJoint1084.children = new MFNode();

HAnimJoint1084.children[0] = HAnimSegment1085;

HAnimJoint HAnimJoint1090 = createNode("HAnimJoint");
HAnimJoint1090.name = "vt7";
HAnimJoint1090.DEF = "hanim_vt7";
HAnimJoint1090.center = new SFVec3f(new float[0,1.1088,-0.01376]);
HAnimJoint1090.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1090.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1091 = createNode("HAnimSegment");
HAnimSegment1091.name = "t7";
HAnimSegment1091.DEF = "hanim_t7";
Shape Shape1092 = createNode("Shape");
LineSet LineSet1093 = createNode("LineSet");
LineSet1093.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1094 = createNode("ColorRGBA");
ColorRGBA1094.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1093.color = ColorRGBA1094;

Coordinate Coordinate1095 = createNode("Coordinate");
Coordinate1095.point = new MFVec3f(new float[0,1.1088,-0.01376,0,1.093,-0.01376]);
LineSet1093.coord = Coordinate1095;

Shape1092.geometry = LineSet1093;

HAnimSegment1091.children = new MFNode();

HAnimSegment1091.children[0] = Shape1092;

HAnimJoint1090.children = new MFNode();

HAnimJoint1090.children[0] = HAnimSegment1091;

HAnimJoint HAnimJoint1096 = createNode("HAnimJoint");
HAnimJoint1096.name = "vt6";
HAnimJoint1096.DEF = "hanim_vt6";
HAnimJoint1096.center = new SFVec3f(new float[0,1.1216,-0.01376]);
HAnimJoint1096.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1096.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1097 = createNode("HAnimSegment");
HAnimSegment1097.name = "t6";
HAnimSegment1097.DEF = "hanim_t6";
Shape Shape1098 = createNode("Shape");
LineSet LineSet1099 = createNode("LineSet");
LineSet1099.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1100 = createNode("ColorRGBA");
ColorRGBA1100.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1099.color = ColorRGBA1100;

Coordinate Coordinate1101 = createNode("Coordinate");
Coordinate1101.point = new MFVec3f(new float[0,1.1216,-0.01376,0,1.1088,-0.01376]);
LineSet1099.coord = Coordinate1101;

Shape1098.geometry = LineSet1099;

HAnimSegment1097.children = new MFNode();

HAnimSegment1097.children[0] = Shape1098;

HAnimJoint1096.children = new MFNode();

HAnimJoint1096.children[0] = HAnimSegment1097;

HAnimJoint HAnimJoint1102 = createNode("HAnimJoint");
HAnimJoint1102.name = "vt5";
HAnimJoint1102.DEF = "hanim_vt5";
HAnimJoint1102.center = new SFVec3f(new float[0,1.137,-0.01376]);
HAnimJoint1102.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1102.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1103 = createNode("HAnimSegment");
HAnimSegment1103.name = "t5";
HAnimSegment1103.DEF = "hanim_t5";
Shape Shape1104 = createNode("Shape");
LineSet LineSet1105 = createNode("LineSet");
LineSet1105.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1106 = createNode("ColorRGBA");
ColorRGBA1106.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1105.color = ColorRGBA1106;

Coordinate Coordinate1107 = createNode("Coordinate");
Coordinate1107.point = new MFVec3f(new float[0,1.137,-0.01376,0,1.1216,-0.01376]);
LineSet1105.coord = Coordinate1107;

Shape1104.geometry = LineSet1105;

HAnimSegment1103.children = new MFNode();

HAnimSegment1103.children[0] = Shape1104;

HAnimJoint1102.children = new MFNode();

HAnimJoint1102.children[0] = HAnimSegment1103;

HAnimJoint HAnimJoint1108 = createNode("HAnimJoint");
HAnimJoint1108.name = "vt4";
HAnimJoint1108.DEF = "hanim_vt4";
HAnimJoint1108.center = new SFVec3f(new float[0,1.1524,-0.01376]);
HAnimJoint1108.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1108.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1109 = createNode("HAnimSegment");
HAnimSegment1109.name = "t4";
HAnimSegment1109.DEF = "hanim_t4";
Shape Shape1110 = createNode("Shape");
LineSet LineSet1111 = createNode("LineSet");
LineSet1111.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1112 = createNode("ColorRGBA");
ColorRGBA1112.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1111.color = ColorRGBA1112;

Coordinate Coordinate1113 = createNode("Coordinate");
Coordinate1113.point = new MFVec3f(new float[0,1.1524,-0.01376,0,1.137,-0.01376]);
LineSet1111.coord = Coordinate1113;

Shape1110.geometry = LineSet1111;

HAnimSegment1109.children = new MFNode();

HAnimSegment1109.children[0] = Shape1110;

HAnimJoint1108.children = new MFNode();

HAnimJoint1108.children[0] = HAnimSegment1109;

HAnimJoint HAnimJoint1114 = createNode("HAnimJoint");
HAnimJoint1114.name = "vt3";
HAnimJoint1114.DEF = "hanim_vt3";
HAnimJoint1114.center = new SFVec3f(new float[0,1.1709,-0.01376]);
HAnimJoint1114.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1114.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1115 = createNode("HAnimSegment");
HAnimSegment1115.name = "t3";
HAnimSegment1115.DEF = "hanim_t3";
Shape Shape1116 = createNode("Shape");
LineSet LineSet1117 = createNode("LineSet");
LineSet1117.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1118 = createNode("ColorRGBA");
ColorRGBA1118.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1117.color = ColorRGBA1118;

Coordinate Coordinate1119 = createNode("Coordinate");
Coordinate1119.point = new MFVec3f(new float[0,1.1709,-0.01376,0,1.1524,-0.01376]);
LineSet1117.coord = Coordinate1119;

Shape1116.geometry = LineSet1117;

HAnimSegment1115.children = new MFNode();

HAnimSegment1115.children[0] = Shape1116;

HAnimJoint1114.children = new MFNode();

HAnimJoint1114.children[0] = HAnimSegment1115;

HAnimJoint HAnimJoint1120 = createNode("HAnimJoint");
HAnimJoint1120.name = "vt2";
HAnimJoint1120.DEF = "hanim_vt2";
HAnimJoint1120.center = new SFVec3f(new float[0,1.1956,-0.01378]);
HAnimJoint1120.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1120.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1121 = createNode("HAnimSegment");
HAnimSegment1121.name = "t2";
HAnimSegment1121.DEF = "hanim_t2";
Shape Shape1122 = createNode("Shape");
LineSet LineSet1123 = createNode("LineSet");
LineSet1123.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1124 = createNode("ColorRGBA");
ColorRGBA1124.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1123.color = ColorRGBA1124;

Coordinate Coordinate1125 = createNode("Coordinate");
Coordinate1125.point = new MFVec3f(new float[0,1.1956,-0.01378,0,1.1709,-0.01376]);
LineSet1123.coord = Coordinate1125;

Shape1122.geometry = LineSet1123;

HAnimSegment1121.children = new MFNode();

HAnimSegment1121.children[0] = Shape1122;

HAnimJoint1120.children = new MFNode();

HAnimJoint1120.children[0] = HAnimSegment1121;

HAnimJoint HAnimJoint1126 = createNode("HAnimJoint");
HAnimJoint1126.name = "vt1";
HAnimJoint1126.DEF = "hanim_vt1";
HAnimJoint1126.center = new SFVec3f(new float[0,1.22,-0.0138]);
HAnimJoint1126.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1126.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1127 = createNode("HAnimSegment");
HAnimSegment1127.name = "t1";
HAnimSegment1127.DEF = "hanim_t1";
HAnimSite HAnimSite1128 = createNode("HAnimSite");
HAnimSite1128.name = "suprasternale";
HAnimSite1128.DEF = "hanim_suprasternale_pt";
HAnimSite1128.translation = new SFVec3f(new float[0,1.22,0.08]);
TouchSensor TouchSensor1129 = createNode("TouchSensor");
TouchSensor1129.description = "HAnimSite 12 hanim_suprasternale_pt";
HAnimSite1128.children = new MFNode();

HAnimSite1128.children[0] = TouchSensor1129;

Shape Shape1130 = createNode("Shape");
Appearance Appearance1131 = createNode("Appearance");
Material Material1132 = createNode("Material");
Material1132.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1131.material = Material1132;

Shape1130.appearance = Appearance1131;

IndexedFaceSet IndexedFaceSet1133 = createNode("IndexedFaceSet");
IndexedFaceSet1133.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1133.creaseAngle = 0.5;
IndexedFaceSet1133.solid = False;
ColorRGBA ColorRGBA1134 = createNode("ColorRGBA");
ColorRGBA1134.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1133.color = ColorRGBA1134;

Coordinate Coordinate1135 = createNode("Coordinate");
Coordinate1135.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1133.coord = Coordinate1135;

Shape1130.geometry = IndexedFaceSet1133;

HAnimSite1128.children[1] = Shape1130;

Billboard Billboard1136 = createNode("Billboard");
Billboard1136.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1137 = createNode("Shape");
Text Text1138 = createNode("Text");
Text1138.string = new MFString(new java.lang.String["12"]);
FontStyle FontStyle1139 = createNode("FontStyle");
FontStyle1139.size = 0.035;
Text1138.fontStyle = FontStyle1139;

Shape1137.geometry = Text1138;

Billboard1136.children = new MFNode();

Billboard1136.children[0] = Shape1137;

HAnimSite1128.children[2] = Billboard1136;

HAnimSegment1127.children = new MFNode();

HAnimSegment1127.children[0] = HAnimSite1128;

HAnimSite HAnimSite1140 = createNode("HAnimSite");
HAnimSite1140.name = "cervicale";
HAnimSite1140.DEF = "hanim_cervicale_pt";
HAnimSite1140.translation = new SFVec3f(new float[0,1.22,-0.08]);
TouchSensor TouchSensor1141 = createNode("TouchSensor");
TouchSensor1141.description = "HAnimSite 10 hanim_cervicale_pt";
HAnimSite1140.children = new MFNode();

HAnimSite1140.children[0] = TouchSensor1141;

Shape Shape1142 = createNode("Shape");
Appearance Appearance1143 = createNode("Appearance");
Material Material1144 = createNode("Material");
Material1144.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1143.material = Material1144;

Shape1142.appearance = Appearance1143;

IndexedFaceSet IndexedFaceSet1145 = createNode("IndexedFaceSet");
IndexedFaceSet1145.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1145.creaseAngle = 0.5;
IndexedFaceSet1145.solid = False;
ColorRGBA ColorRGBA1146 = createNode("ColorRGBA");
ColorRGBA1146.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1145.color = ColorRGBA1146;

Coordinate Coordinate1147 = createNode("Coordinate");
Coordinate1147.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1145.coord = Coordinate1147;

Shape1142.geometry = IndexedFaceSet1145;

HAnimSite1140.children[1] = Shape1142;

Billboard Billboard1148 = createNode("Billboard");
Billboard1148.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1149 = createNode("Shape");
Text Text1150 = createNode("Text");
Text1150.string = new MFString(new java.lang.String["10"]);
FontStyle FontStyle1151 = createNode("FontStyle");
FontStyle1151.size = 0.035;
Text1150.fontStyle = FontStyle1151;

Shape1149.geometry = Text1150;

Billboard1148.children = new MFNode();

Billboard1148.children[0] = Shape1149;

HAnimSite1140.children[2] = Billboard1148;

HAnimSegment1127.children[1] = HAnimSite1140;

Shape Shape1152 = createNode("Shape");
LineSet LineSet1153 = createNode("LineSet");
LineSet1153.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1154 = createNode("ColorRGBA");
ColorRGBA1154.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1153.color = ColorRGBA1154;

Coordinate Coordinate1155 = createNode("Coordinate");
Coordinate1155.point = new MFVec3f(new float[0,1.22,-0.0138,0,1.1956,-0.01378]);
LineSet1153.coord = Coordinate1155;

Shape1152.geometry = LineSet1153;

HAnimSegment1127.children[2] = Shape1152;

HAnimJoint1126.children = new MFNode();

HAnimJoint1126.children[0] = HAnimSegment1127;

HAnimJoint HAnimJoint1156 = createNode("HAnimJoint");
HAnimJoint1156.name = "vc7";
HAnimJoint1156.DEF = "hanim_vc7";
HAnimJoint1156.center = new SFVec3f(new float[0,1.2453,-0.01506]);
HAnimJoint1156.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1156.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1157 = createNode("HAnimSegment");
HAnimSegment1157.name = "c7";
HAnimSegment1157.DEF = "hanim_c7";
HAnimSite HAnimSite1158 = createNode("HAnimSite");
HAnimSite1158.name = "l_neck_base";
HAnimSite1158.DEF = "hanim_l_neck_base_pt";
HAnimSite1158.translation = new SFVec3f(new float[0.06,1.26,0]);
TouchSensor TouchSensor1159 = createNode("TouchSensor");
TouchSensor1159.description = "HAnimSite 82 hanim_l_neck_base_pt";
HAnimSite1158.children = new MFNode();

HAnimSite1158.children[0] = TouchSensor1159;

Shape Shape1160 = createNode("Shape");
Appearance Appearance1161 = createNode("Appearance");
Material Material1162 = createNode("Material");
Material1162.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1161.material = Material1162;

Shape1160.appearance = Appearance1161;

IndexedFaceSet IndexedFaceSet1163 = createNode("IndexedFaceSet");
IndexedFaceSet1163.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1163.creaseAngle = 0.5;
IndexedFaceSet1163.solid = False;
ColorRGBA ColorRGBA1164 = createNode("ColorRGBA");
ColorRGBA1164.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1163.color = ColorRGBA1164;

Coordinate Coordinate1165 = createNode("Coordinate");
Coordinate1165.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1163.coord = Coordinate1165;

Shape1160.geometry = IndexedFaceSet1163;

HAnimSite1158.children[1] = Shape1160;

Billboard Billboard1166 = createNode("Billboard");
Billboard1166.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1167 = createNode("Shape");
Text Text1168 = createNode("Text");
Text1168.string = new MFString(new java.lang.String["82"]);
FontStyle FontStyle1169 = createNode("FontStyle");
FontStyle1169.size = 0.035;
Text1168.fontStyle = FontStyle1169;

Shape1167.geometry = Text1168;

Billboard1166.children = new MFNode();

Billboard1166.children[0] = Shape1167;

HAnimSite1158.children[2] = Billboard1166;

HAnimSegment1157.children = new MFNode();

HAnimSegment1157.children[0] = HAnimSite1158;

HAnimSite HAnimSite1170 = createNode("HAnimSite");
HAnimSite1170.name = "r_neck_base";
HAnimSite1170.DEF = "hanim_r_neck_base_pt";
HAnimSite1170.translation = new SFVec3f(new float[-0.06,1.26,0]);
TouchSensor TouchSensor1171 = createNode("TouchSensor");
TouchSensor1171.description = "HAnimSite 83 hanim_r_neck_base_pt";
HAnimSite1170.children = new MFNode();

HAnimSite1170.children[0] = TouchSensor1171;

Shape Shape1172 = createNode("Shape");
Appearance Appearance1173 = createNode("Appearance");
Material Material1174 = createNode("Material");
Material1174.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1173.material = Material1174;

Shape1172.appearance = Appearance1173;

IndexedFaceSet IndexedFaceSet1175 = createNode("IndexedFaceSet");
IndexedFaceSet1175.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1175.creaseAngle = 0.5;
IndexedFaceSet1175.solid = False;
ColorRGBA ColorRGBA1176 = createNode("ColorRGBA");
ColorRGBA1176.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1175.color = ColorRGBA1176;

Coordinate Coordinate1177 = createNode("Coordinate");
Coordinate1177.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1175.coord = Coordinate1177;

Shape1172.geometry = IndexedFaceSet1175;

HAnimSite1170.children[1] = Shape1172;

Billboard Billboard1178 = createNode("Billboard");
Billboard1178.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1179 = createNode("Shape");
Text Text1180 = createNode("Text");
Text1180.string = new MFString(new java.lang.String["83"]);
FontStyle FontStyle1181 = createNode("FontStyle");
FontStyle1181.size = 0.035;
Text1180.fontStyle = FontStyle1181;

Shape1179.geometry = Text1180;

Billboard1178.children = new MFNode();

Billboard1178.children[0] = Shape1179;

HAnimSite1170.children[2] = Billboard1178;

HAnimSegment1157.children[1] = HAnimSite1170;

Shape Shape1182 = createNode("Shape");
LineSet LineSet1183 = createNode("LineSet");
LineSet1183.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1184 = createNode("ColorRGBA");
ColorRGBA1184.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1183.color = ColorRGBA1184;

Coordinate Coordinate1185 = createNode("Coordinate");
Coordinate1185.point = new MFVec3f(new float[0,1.2453,-0.01506,0,1.22,-0.0138]);
LineSet1183.coord = Coordinate1185;

Shape1182.geometry = LineSet1183;

HAnimSegment1157.children[2] = Shape1182;

HAnimJoint1156.children = new MFNode();

HAnimJoint1156.children[0] = HAnimSegment1157;

HAnimJoint HAnimJoint1186 = createNode("HAnimJoint");
HAnimJoint1186.name = "vc6";
HAnimJoint1186.DEF = "hanim_vc6";
HAnimJoint1186.center = new SFVec3f(new float[0,1.2575,-0.01506]);
HAnimJoint1186.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1186.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1187 = createNode("HAnimSegment");
HAnimSegment1187.name = "c6";
HAnimSegment1187.DEF = "hanim_c6";
Shape Shape1188 = createNode("Shape");
LineSet LineSet1189 = createNode("LineSet");
LineSet1189.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1190 = createNode("ColorRGBA");
ColorRGBA1190.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1189.color = ColorRGBA1190;

Coordinate Coordinate1191 = createNode("Coordinate");
Coordinate1191.point = new MFVec3f(new float[0,1.2575,-0.01506,0,1.2453,-0.01506]);
LineSet1189.coord = Coordinate1191;

Shape1188.geometry = LineSet1189;

HAnimSegment1187.children = new MFNode();

HAnimSegment1187.children[0] = Shape1188;

HAnimJoint1186.children = new MFNode();

HAnimJoint1186.children[0] = HAnimSegment1187;

HAnimJoint HAnimJoint1192 = createNode("HAnimJoint");
HAnimJoint1192.name = "vc5";
HAnimJoint1192.DEF = "hanim_vc5";
HAnimJoint1192.center = new SFVec3f(new float[0,1.2699,-0.01506]);
HAnimJoint1192.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1192.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1193 = createNode("HAnimSegment");
HAnimSegment1193.name = "c5";
HAnimSegment1193.DEF = "hanim_c5";
Shape Shape1194 = createNode("Shape");
LineSet LineSet1195 = createNode("LineSet");
LineSet1195.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1196 = createNode("ColorRGBA");
ColorRGBA1196.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1195.color = ColorRGBA1196;

Coordinate Coordinate1197 = createNode("Coordinate");
Coordinate1197.point = new MFVec3f(new float[0,1.2699,-0.01506,0,1.2575,-0.01506]);
LineSet1195.coord = Coordinate1197;

Shape1194.geometry = LineSet1195;

HAnimSegment1193.children = new MFNode();

HAnimSegment1193.children[0] = Shape1194;

HAnimJoint1192.children = new MFNode();

HAnimJoint1192.children[0] = HAnimSegment1193;

HAnimJoint HAnimJoint1198 = createNode("HAnimJoint");
HAnimJoint1198.name = "vc4";
HAnimJoint1198.DEF = "hanim_vc4";
HAnimJoint1198.center = new SFVec3f(new float[0,1.28227,-0.01506]);
HAnimJoint1198.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1198.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1199 = createNode("HAnimSegment");
HAnimSegment1199.name = "c4";
HAnimSegment1199.DEF = "hanim_c4";
Shape Shape1200 = createNode("Shape");
LineSet LineSet1201 = createNode("LineSet");
LineSet1201.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1202 = createNode("ColorRGBA");
ColorRGBA1202.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1201.color = ColorRGBA1202;

Coordinate Coordinate1203 = createNode("Coordinate");
Coordinate1203.point = new MFVec3f(new float[0,1.28227,-0.01506,0,1.2699,-0.01506]);
LineSet1201.coord = Coordinate1203;

Shape1200.geometry = LineSet1201;

HAnimSegment1199.children = new MFNode();

HAnimSegment1199.children[0] = Shape1200;

HAnimJoint1198.children = new MFNode();

HAnimJoint1198.children[0] = HAnimSegment1199;

HAnimJoint HAnimJoint1204 = createNode("HAnimJoint");
HAnimJoint1204.name = "vc3";
HAnimJoint1204.DEF = "hanim_vc3";
HAnimJoint1204.center = new SFVec3f(new float[0,1.2951,-0.01506]);
HAnimJoint1204.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1204.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1205 = createNode("HAnimSegment");
HAnimSegment1205.name = "c3";
HAnimSegment1205.DEF = "hanim_c3";
Shape Shape1206 = createNode("Shape");
LineSet LineSet1207 = createNode("LineSet");
LineSet1207.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1208 = createNode("ColorRGBA");
ColorRGBA1208.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1207.color = ColorRGBA1208;

Coordinate Coordinate1209 = createNode("Coordinate");
Coordinate1209.point = new MFVec3f(new float[0,1.2951,-0.01506,0,1.28227,-0.01506]);
LineSet1207.coord = Coordinate1209;

Shape1206.geometry = LineSet1207;

HAnimSegment1205.children = new MFNode();

HAnimSegment1205.children[0] = Shape1206;

HAnimJoint1204.children = new MFNode();

HAnimJoint1204.children[0] = HAnimSegment1205;

HAnimJoint HAnimJoint1210 = createNode("HAnimJoint");
HAnimJoint1210.name = "vc2";
HAnimJoint1210.DEF = "hanim_vc2";
HAnimJoint1210.center = new SFVec3f(new float[0,1.307,-0.015]);
HAnimJoint1210.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1210.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1211 = createNode("HAnimSegment");
HAnimSegment1211.name = "c2";
HAnimSegment1211.DEF = "hanim_c2";
HAnimSite HAnimSite1212 = createNode("HAnimSite");
HAnimSite1212.name = "adams_apple";
HAnimSite1212.DEF = "hanim_adams_apple_pt";
HAnimSite1212.translation = new SFVec3f(new float[0,1.29,0.04]);
TouchSensor TouchSensor1213 = createNode("TouchSensor");
TouchSensor1213.description = "HAnimSite 11 hanim_adams_apple_pt";
HAnimSite1212.children = new MFNode();

HAnimSite1212.children[0] = TouchSensor1213;

Shape Shape1214 = createNode("Shape");
Appearance Appearance1215 = createNode("Appearance");
Material Material1216 = createNode("Material");
Material1216.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1215.material = Material1216;

Shape1214.appearance = Appearance1215;

IndexedFaceSet IndexedFaceSet1217 = createNode("IndexedFaceSet");
IndexedFaceSet1217.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1217.creaseAngle = 0.5;
IndexedFaceSet1217.solid = False;
ColorRGBA ColorRGBA1218 = createNode("ColorRGBA");
ColorRGBA1218.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1217.color = ColorRGBA1218;

Coordinate Coordinate1219 = createNode("Coordinate");
Coordinate1219.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1217.coord = Coordinate1219;

Shape1214.geometry = IndexedFaceSet1217;

HAnimSite1212.children[1] = Shape1214;

Billboard Billboard1220 = createNode("Billboard");
Billboard1220.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1221 = createNode("Shape");
Text Text1222 = createNode("Text");
Text1222.string = new MFString(new java.lang.String["11"]);
FontStyle FontStyle1223 = createNode("FontStyle");
FontStyle1223.size = 0.035;
Text1222.fontStyle = FontStyle1223;

Shape1221.geometry = Text1222;

Billboard1220.children = new MFNode();

Billboard1220.children[0] = Shape1221;

HAnimSite1212.children[2] = Billboard1220;

HAnimSegment1211.children = new MFNode();

HAnimSegment1211.children[0] = HAnimSite1212;

Shape Shape1224 = createNode("Shape");
LineSet LineSet1225 = createNode("LineSet");
LineSet1225.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1226 = createNode("ColorRGBA");
ColorRGBA1226.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1225.color = ColorRGBA1226;

Coordinate Coordinate1227 = createNode("Coordinate");
Coordinate1227.point = new MFVec3f(new float[0,1.307,-0.015,0,1.2951,-0.01506]);
LineSet1225.coord = Coordinate1227;

Shape1224.geometry = LineSet1225;

HAnimSegment1211.children[1] = Shape1224;

HAnimJoint1210.children = new MFNode();

HAnimJoint1210.children[0] = HAnimSegment1211;

HAnimJoint HAnimJoint1228 = createNode("HAnimJoint");
HAnimJoint1228.name = "vc1";
HAnimJoint1228.DEF = "hanim_vc1";
HAnimJoint1228.center = new SFVec3f(new float[0,1.3185,-0.0151]);
HAnimJoint1228.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1228.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1229 = createNode("HAnimSegment");
HAnimSegment1229.name = "c1";
HAnimSegment1229.DEF = "hanim_c1";
Shape Shape1230 = createNode("Shape");
LineSet LineSet1231 = createNode("LineSet");
LineSet1231.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1232 = createNode("ColorRGBA");
ColorRGBA1232.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1231.color = ColorRGBA1232;

Coordinate Coordinate1233 = createNode("Coordinate");
Coordinate1233.point = new MFVec3f(new float[0,1.3185,-0.0151,0,1.307,-0.015]);
LineSet1231.coord = Coordinate1233;

Shape1230.geometry = LineSet1231;

HAnimSegment1229.children = new MFNode();

HAnimSegment1229.children[0] = Shape1230;

HAnimJoint1228.children = new MFNode();

HAnimJoint1228.children[0] = HAnimSegment1229;

HAnimJoint HAnimJoint1234 = createNode("HAnimJoint");
HAnimJoint1234.name = "skullbase";
HAnimJoint1234.DEF = "hanim_skullbase";
HAnimJoint1234.center = new SFVec3f(new float[0,1.3126,-0.0154]);
HAnimJoint1234.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1234.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1235 = createNode("HAnimSegment");
HAnimSegment1235.name = "skull";
HAnimSegment1235.DEF = "hanim_skull";
HAnimSite HAnimSite1236 = createNode("HAnimSite");
HAnimSite1236.name = "skull_vertex";
HAnimSite1236.DEF = "hanim_skull_vertex_pt";
HAnimSite1236.translation = new SFVec3f(new float[0,1.612,-0.03]);
TouchSensor TouchSensor1237 = createNode("TouchSensor");
TouchSensor1237.description = "HAnimSite 0 hanim_skull_vertex_pt";
HAnimSite1236.children = new MFNode();

HAnimSite1236.children[0] = TouchSensor1237;

Shape Shape1238 = createNode("Shape");
Appearance Appearance1239 = createNode("Appearance");
Material Material1240 = createNode("Material");
Material1240.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1239.material = Material1240;

Shape1238.appearance = Appearance1239;

IndexedFaceSet IndexedFaceSet1241 = createNode("IndexedFaceSet");
IndexedFaceSet1241.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1241.creaseAngle = 0.5;
IndexedFaceSet1241.solid = False;
ColorRGBA ColorRGBA1242 = createNode("ColorRGBA");
ColorRGBA1242.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1241.color = ColorRGBA1242;

Coordinate Coordinate1243 = createNode("Coordinate");
Coordinate1243.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1241.coord = Coordinate1243;

Shape1238.geometry = IndexedFaceSet1241;

HAnimSite1236.children[1] = Shape1238;

Billboard Billboard1244 = createNode("Billboard");
Billboard1244.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1245 = createNode("Shape");
Text Text1246 = createNode("Text");
Text1246.string = new MFString(new java.lang.String["0"]);
FontStyle FontStyle1247 = createNode("FontStyle");
FontStyle1247.size = 0.035;
Text1246.fontStyle = FontStyle1247;

Shape1245.geometry = Text1246;

Billboard1244.children = new MFNode();

Billboard1244.children[0] = Shape1245;

HAnimSite1236.children[2] = Billboard1244;

HAnimSegment1235.children = new MFNode();

HAnimSegment1235.children[0] = HAnimSite1236;

HAnimSite HAnimSite1248 = createNode("HAnimSite");
HAnimSite1248.name = "glabella";
HAnimSite1248.DEF = "hanim_glabella_pt";
HAnimSite1248.translation = new SFVec3f(new float[0,1.454,0.128]);
TouchSensor TouchSensor1249 = createNode("TouchSensor");
TouchSensor1249.description = "HAnimSite 1 hanim_glabella_pt";
HAnimSite1248.children = new MFNode();

HAnimSite1248.children[0] = TouchSensor1249;

Shape Shape1250 = createNode("Shape");
Appearance Appearance1251 = createNode("Appearance");
Material Material1252 = createNode("Material");
Material1252.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1251.material = Material1252;

Shape1250.appearance = Appearance1251;

IndexedFaceSet IndexedFaceSet1253 = createNode("IndexedFaceSet");
IndexedFaceSet1253.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1253.creaseAngle = 0.5;
IndexedFaceSet1253.solid = False;
ColorRGBA ColorRGBA1254 = createNode("ColorRGBA");
ColorRGBA1254.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1253.color = ColorRGBA1254;

Coordinate Coordinate1255 = createNode("Coordinate");
Coordinate1255.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1253.coord = Coordinate1255;

Shape1250.geometry = IndexedFaceSet1253;

HAnimSite1248.children[1] = Shape1250;

Billboard Billboard1256 = createNode("Billboard");
Billboard1256.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1257 = createNode("Shape");
Text Text1258 = createNode("Text");
Text1258.string = new MFString(new java.lang.String["1"]);
FontStyle FontStyle1259 = createNode("FontStyle");
FontStyle1259.size = 0.035;
Text1258.fontStyle = FontStyle1259;

Shape1257.geometry = Text1258;

Billboard1256.children = new MFNode();

Billboard1256.children[0] = Shape1257;

HAnimSite1248.children[2] = Billboard1256;

HAnimSegment1235.children[1] = HAnimSite1248;

HAnimSite HAnimSite1260 = createNode("HAnimSite");
HAnimSite1260.name = "sellion";
HAnimSite1260.DEF = "hanim_sellion_pt";
HAnimSite1260.translation = new SFVec3f(new float[0,1.4,0.12]);
TouchSensor TouchSensor1261 = createNode("TouchSensor");
TouchSensor1261.description = "HAnimSite 2 hanim_sellion_pt";
HAnimSite1260.children = new MFNode();

HAnimSite1260.children[0] = TouchSensor1261;

Shape Shape1262 = createNode("Shape");
Appearance Appearance1263 = createNode("Appearance");
Material Material1264 = createNode("Material");
Material1264.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1263.material = Material1264;

Shape1262.appearance = Appearance1263;

IndexedFaceSet IndexedFaceSet1265 = createNode("IndexedFaceSet");
IndexedFaceSet1265.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1265.creaseAngle = 0.5;
IndexedFaceSet1265.solid = False;
ColorRGBA ColorRGBA1266 = createNode("ColorRGBA");
ColorRGBA1266.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1265.color = ColorRGBA1266;

Coordinate Coordinate1267 = createNode("Coordinate");
Coordinate1267.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1265.coord = Coordinate1267;

Shape1262.geometry = IndexedFaceSet1265;

HAnimSite1260.children[1] = Shape1262;

Billboard Billboard1268 = createNode("Billboard");
Billboard1268.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1269 = createNode("Shape");
Text Text1270 = createNode("Text");
Text1270.string = new MFString(new java.lang.String["2"]);
FontStyle FontStyle1271 = createNode("FontStyle");
FontStyle1271.size = 0.035;
Text1270.fontStyle = FontStyle1271;

Shape1269.geometry = Text1270;

Billboard1268.children = new MFNode();

Billboard1268.children[0] = Shape1269;

HAnimSite1260.children[2] = Billboard1268;

HAnimSegment1235.children[2] = HAnimSite1260;

HAnimSite HAnimSite1272 = createNode("HAnimSite");
HAnimSite1272.name = "l_infraorbitale";
HAnimSite1272.DEF = "hanim_l_infraorbitale_pt";
HAnimSite1272.translation = new SFVec3f(new float[0.039,1.38,0.09]);
TouchSensor TouchSensor1273 = createNode("TouchSensor");
TouchSensor1273.description = "HAnimSite 3 hanim_l_infraorbitale_pt";
HAnimSite1272.children = new MFNode();

HAnimSite1272.children[0] = TouchSensor1273;

Shape Shape1274 = createNode("Shape");
Appearance Appearance1275 = createNode("Appearance");
Material Material1276 = createNode("Material");
Material1276.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1275.material = Material1276;

Shape1274.appearance = Appearance1275;

IndexedFaceSet IndexedFaceSet1277 = createNode("IndexedFaceSet");
IndexedFaceSet1277.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1277.creaseAngle = 0.5;
IndexedFaceSet1277.solid = False;
ColorRGBA ColorRGBA1278 = createNode("ColorRGBA");
ColorRGBA1278.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1277.color = ColorRGBA1278;

Coordinate Coordinate1279 = createNode("Coordinate");
Coordinate1279.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1277.coord = Coordinate1279;

Shape1274.geometry = IndexedFaceSet1277;

HAnimSite1272.children[1] = Shape1274;

Billboard Billboard1280 = createNode("Billboard");
Billboard1280.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1281 = createNode("Shape");
Text Text1282 = createNode("Text");
Text1282.string = new MFString(new java.lang.String["3"]);
FontStyle FontStyle1283 = createNode("FontStyle");
FontStyle1283.size = 0.035;
Text1282.fontStyle = FontStyle1283;

Shape1281.geometry = Text1282;

Billboard1280.children = new MFNode();

Billboard1280.children[0] = Shape1281;

HAnimSite1272.children[2] = Billboard1280;

HAnimSegment1235.children[3] = HAnimSite1272;

HAnimSite HAnimSite1284 = createNode("HAnimSite");
HAnimSite1284.name = "l_tragion";
HAnimSite1284.DEF = "hanim_l_tragion_pt";
HAnimSite1284.translation = new SFVec3f(new float[0.1,1.38,0.0282]);
TouchSensor TouchSensor1285 = createNode("TouchSensor");
TouchSensor1285.description = "HAnimSite 4 hanim_l_tragion_pt";
HAnimSite1284.children = new MFNode();

HAnimSite1284.children[0] = TouchSensor1285;

Shape Shape1286 = createNode("Shape");
Appearance Appearance1287 = createNode("Appearance");
Material Material1288 = createNode("Material");
Material1288.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1287.material = Material1288;

Shape1286.appearance = Appearance1287;

IndexedFaceSet IndexedFaceSet1289 = createNode("IndexedFaceSet");
IndexedFaceSet1289.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1289.creaseAngle = 0.5;
IndexedFaceSet1289.solid = False;
ColorRGBA ColorRGBA1290 = createNode("ColorRGBA");
ColorRGBA1290.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1289.color = ColorRGBA1290;

Coordinate Coordinate1291 = createNode("Coordinate");
Coordinate1291.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1289.coord = Coordinate1291;

Shape1286.geometry = IndexedFaceSet1289;

HAnimSite1284.children[1] = Shape1286;

Billboard Billboard1292 = createNode("Billboard");
Billboard1292.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1293 = createNode("Shape");
Text Text1294 = createNode("Text");
Text1294.string = new MFString(new java.lang.String["4"]);
FontStyle FontStyle1295 = createNode("FontStyle");
FontStyle1295.size = 0.035;
Text1294.fontStyle = FontStyle1295;

Shape1293.geometry = Text1294;

Billboard1292.children = new MFNode();

Billboard1292.children[0] = Shape1293;

HAnimSite1284.children[2] = Billboard1292;

HAnimSegment1235.children[4] = HAnimSite1284;

HAnimSite HAnimSite1296 = createNode("HAnimSite");
HAnimSite1296.name = "r_infraorbitale";
HAnimSite1296.DEF = "hanim_r_infraorbitale_pt";
HAnimSite1296.translation = new SFVec3f(new float[-0.039,1.38,0.09]);
TouchSensor TouchSensor1297 = createNode("TouchSensor");
TouchSensor1297.description = "HAnimSite 6 hanim_r_infraorbitale_pt";
HAnimSite1296.children = new MFNode();

HAnimSite1296.children[0] = TouchSensor1297;

Shape Shape1298 = createNode("Shape");
Appearance Appearance1299 = createNode("Appearance");
Material Material1300 = createNode("Material");
Material1300.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1299.material = Material1300;

Shape1298.appearance = Appearance1299;

IndexedFaceSet IndexedFaceSet1301 = createNode("IndexedFaceSet");
IndexedFaceSet1301.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1301.creaseAngle = 0.5;
IndexedFaceSet1301.solid = False;
ColorRGBA ColorRGBA1302 = createNode("ColorRGBA");
ColorRGBA1302.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1301.color = ColorRGBA1302;

Coordinate Coordinate1303 = createNode("Coordinate");
Coordinate1303.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1301.coord = Coordinate1303;

Shape1298.geometry = IndexedFaceSet1301;

HAnimSite1296.children[1] = Shape1298;

Billboard Billboard1304 = createNode("Billboard");
Billboard1304.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1305 = createNode("Shape");
Text Text1306 = createNode("Text");
Text1306.string = new MFString(new java.lang.String["6"]);
FontStyle FontStyle1307 = createNode("FontStyle");
FontStyle1307.size = 0.035;
Text1306.fontStyle = FontStyle1307;

Shape1305.geometry = Text1306;

Billboard1304.children = new MFNode();

Billboard1304.children[0] = Shape1305;

HAnimSite1296.children[2] = Billboard1304;

HAnimSegment1235.children[5] = HAnimSite1296;

HAnimSite HAnimSite1308 = createNode("HAnimSite");
HAnimSite1308.name = "r_tragion";
HAnimSite1308.DEF = "hanim_r_tragion_pt";
HAnimSite1308.translation = new SFVec3f(new float[-0.1,1.38,0.0282]);
TouchSensor TouchSensor1309 = createNode("TouchSensor");
TouchSensor1309.description = "HAnimSite 7 hanim_r_tragion_pt";
HAnimSite1308.children = new MFNode();

HAnimSite1308.children[0] = TouchSensor1309;

Shape Shape1310 = createNode("Shape");
Appearance Appearance1311 = createNode("Appearance");
Material Material1312 = createNode("Material");
Material1312.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1311.material = Material1312;

Shape1310.appearance = Appearance1311;

IndexedFaceSet IndexedFaceSet1313 = createNode("IndexedFaceSet");
IndexedFaceSet1313.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1313.creaseAngle = 0.5;
IndexedFaceSet1313.solid = False;
ColorRGBA ColorRGBA1314 = createNode("ColorRGBA");
ColorRGBA1314.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1313.color = ColorRGBA1314;

Coordinate Coordinate1315 = createNode("Coordinate");
Coordinate1315.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1313.coord = Coordinate1315;

Shape1310.geometry = IndexedFaceSet1313;

HAnimSite1308.children[1] = Shape1310;

Billboard Billboard1316 = createNode("Billboard");
Billboard1316.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1317 = createNode("Shape");
Text Text1318 = createNode("Text");
Text1318.string = new MFString(new java.lang.String["7"]);
FontStyle FontStyle1319 = createNode("FontStyle");
FontStyle1319.size = 0.035;
Text1318.fontStyle = FontStyle1319;

Shape1317.geometry = Text1318;

Billboard1316.children = new MFNode();

Billboard1316.children[0] = Shape1317;

HAnimSite1308.children[2] = Billboard1316;

HAnimSegment1235.children[6] = HAnimSite1308;

HAnimSite HAnimSite1320 = createNode("HAnimSite");
HAnimSite1320.name = "nuchale";
HAnimSite1320.DEF = "hanim_nuchale_pt";
HAnimSite1320.translation = new SFVec3f(new float[0.0039,1.35,-0.16]);
TouchSensor TouchSensor1321 = createNode("TouchSensor");
TouchSensor1321.description = "HAnimSite 81 hanim_nuchale_pt";
HAnimSite1320.children = new MFNode();

HAnimSite1320.children[0] = TouchSensor1321;

Shape Shape1322 = createNode("Shape");
Appearance Appearance1323 = createNode("Appearance");
Material Material1324 = createNode("Material");
Material1324.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1323.material = Material1324;

Shape1322.appearance = Appearance1323;

IndexedFaceSet IndexedFaceSet1325 = createNode("IndexedFaceSet");
IndexedFaceSet1325.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1325.creaseAngle = 0.5;
IndexedFaceSet1325.solid = False;
ColorRGBA ColorRGBA1326 = createNode("ColorRGBA");
ColorRGBA1326.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1325.color = ColorRGBA1326;

Coordinate Coordinate1327 = createNode("Coordinate");
Coordinate1327.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1325.coord = Coordinate1327;

Shape1322.geometry = IndexedFaceSet1325;

HAnimSite1320.children[1] = Shape1322;

Billboard Billboard1328 = createNode("Billboard");
Billboard1328.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1329 = createNode("Shape");
Text Text1330 = createNode("Text");
Text1330.string = new MFString(new java.lang.String["81"]);
FontStyle FontStyle1331 = createNode("FontStyle");
FontStyle1331.size = 0.035;
Text1330.fontStyle = FontStyle1331;

Shape1329.geometry = Text1330;

Billboard1328.children = new MFNode();

Billboard1328.children[0] = Shape1329;

HAnimSite1320.children[2] = Billboard1328;

HAnimSegment1235.children[7] = HAnimSite1320;

HAnimSite HAnimSite1332 = createNode("HAnimSite");
HAnimSite1332.name = "opisthocranion";
HAnimSite1332.DEF = "hanim_opisthocranion_pt";
HAnimSite1332.translation = new SFVec3f(new float[0.0039,1.4588,-0.18]);
TouchSensor TouchSensor1333 = createNode("TouchSensor");
TouchSensor1333.description = "HAnimSite 89 hanim_opisthocranion_pt";
HAnimSite1332.children = new MFNode();

HAnimSite1332.children[0] = TouchSensor1333;

Shape Shape1334 = createNode("Shape");
Appearance Appearance1335 = createNode("Appearance");
Material Material1336 = createNode("Material");
Material1336.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1335.material = Material1336;

Shape1334.appearance = Appearance1335;

IndexedFaceSet IndexedFaceSet1337 = createNode("IndexedFaceSet");
IndexedFaceSet1337.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1337.creaseAngle = 0.5;
IndexedFaceSet1337.solid = False;
ColorRGBA ColorRGBA1338 = createNode("ColorRGBA");
ColorRGBA1338.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1337.color = ColorRGBA1338;

Coordinate Coordinate1339 = createNode("Coordinate");
Coordinate1339.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1337.coord = Coordinate1339;

Shape1334.geometry = IndexedFaceSet1337;

HAnimSite1332.children[1] = Shape1334;

Billboard Billboard1340 = createNode("Billboard");
Billboard1340.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1341 = createNode("Shape");
Text Text1342 = createNode("Text");
Text1342.string = new MFString(new java.lang.String["89"]);
FontStyle FontStyle1343 = createNode("FontStyle");
FontStyle1343.size = 0.035;
Text1342.fontStyle = FontStyle1343;

Shape1341.geometry = Text1342;

Billboard1340.children = new MFNode();

Billboard1340.children[0] = Shape1341;

HAnimSite1332.children[2] = Billboard1340;

HAnimSegment1235.children[8] = HAnimSite1332;

HAnimSite HAnimSite1344 = createNode("HAnimSite");
HAnimSite1344.name = "l_ectocanthus";
HAnimSite1344.DEF = "hanim_l_ectocanthus_pt";
HAnimSite1344.translation = new SFVec3f(new float[0.086,1.399,0.074]);
TouchSensor TouchSensor1345 = createNode("TouchSensor");
TouchSensor1345.description = "HAnimSite 85 hanim_l_ectocanthus_pt";
HAnimSite1344.children = new MFNode();

HAnimSite1344.children[0] = TouchSensor1345;

Shape Shape1346 = createNode("Shape");
Appearance Appearance1347 = createNode("Appearance");
Material Material1348 = createNode("Material");
Material1348.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1347.material = Material1348;

Shape1346.appearance = Appearance1347;

IndexedFaceSet IndexedFaceSet1349 = createNode("IndexedFaceSet");
IndexedFaceSet1349.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1349.creaseAngle = 0.5;
IndexedFaceSet1349.solid = False;
ColorRGBA ColorRGBA1350 = createNode("ColorRGBA");
ColorRGBA1350.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1349.color = ColorRGBA1350;

Coordinate Coordinate1351 = createNode("Coordinate");
Coordinate1351.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1349.coord = Coordinate1351;

Shape1346.geometry = IndexedFaceSet1349;

HAnimSite1344.children[1] = Shape1346;

Billboard Billboard1352 = createNode("Billboard");
Billboard1352.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1353 = createNode("Shape");
Text Text1354 = createNode("Text");
Text1354.string = new MFString(new java.lang.String["85"]);
FontStyle FontStyle1355 = createNode("FontStyle");
FontStyle1355.size = 0.035;
Text1354.fontStyle = FontStyle1355;

Shape1353.geometry = Text1354;

Billboard1352.children = new MFNode();

Billboard1352.children[0] = Shape1353;

HAnimSite1344.children[2] = Billboard1352;

HAnimSegment1235.children[9] = HAnimSite1344;

HAnimSite HAnimSite1356 = createNode("HAnimSite");
HAnimSite1356.name = "r_ectocanthus";
HAnimSite1356.DEF = "hanim_r_ectocanthus_pt";
HAnimSite1356.translation = new SFVec3f(new float[-0.086,1.399,0.074]);
TouchSensor TouchSensor1357 = createNode("TouchSensor");
TouchSensor1357.description = "HAnimSite 86 hanim_r_ectocanthus_pt";
HAnimSite1356.children = new MFNode();

HAnimSite1356.children[0] = TouchSensor1357;

Shape Shape1358 = createNode("Shape");
Appearance Appearance1359 = createNode("Appearance");
Material Material1360 = createNode("Material");
Material1360.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1359.material = Material1360;

Shape1358.appearance = Appearance1359;

IndexedFaceSet IndexedFaceSet1361 = createNode("IndexedFaceSet");
IndexedFaceSet1361.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1361.creaseAngle = 0.5;
IndexedFaceSet1361.solid = False;
ColorRGBA ColorRGBA1362 = createNode("ColorRGBA");
ColorRGBA1362.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1361.color = ColorRGBA1362;

Coordinate Coordinate1363 = createNode("Coordinate");
Coordinate1363.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1361.coord = Coordinate1363;

Shape1358.geometry = IndexedFaceSet1361;

HAnimSite1356.children[1] = Shape1358;

Billboard Billboard1364 = createNode("Billboard");
Billboard1364.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1365 = createNode("Shape");
Text Text1366 = createNode("Text");
Text1366.string = new MFString(new java.lang.String["86"]);
FontStyle FontStyle1367 = createNode("FontStyle");
FontStyle1367.size = 0.035;
Text1366.fontStyle = FontStyle1367;

Shape1365.geometry = Text1366;

Billboard1364.children = new MFNode();

Billboard1364.children[0] = Shape1365;

HAnimSite1356.children[2] = Billboard1364;

HAnimSegment1235.children[10] = HAnimSite1356;

Shape Shape1368 = createNode("Shape");
LineSet LineSet1369 = createNode("LineSet");
LineSet1369.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1370 = createNode("ColorRGBA");
ColorRGBA1370.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1369.color = ColorRGBA1370;

Coordinate Coordinate1371 = createNode("Coordinate");
Coordinate1371.point = new MFVec3f(new float[0,1.3126,-0.0154,0,1.3185,-0.0151]);
LineSet1369.coord = Coordinate1371;

Shape1368.geometry = LineSet1369;

HAnimSegment1235.children[11] = Shape1368;

HAnimJoint1234.children = new MFNode();

HAnimJoint1234.children[0] = HAnimSegment1235;

HAnimJoint HAnimJoint1372 = createNode("HAnimJoint");
HAnimJoint1372.name = "l_eyelid_joint";
HAnimJoint1372.DEF = "hanim_l_eyelid_joint";
HAnimJoint1372.center = new SFVec3f(new float[0.0505,1.42425,0.03294]);
HAnimJoint1372.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1372.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1373 = createNode("HAnimSegment");
HAnimSegment1373.name = "l_eyelid";
HAnimSegment1373.DEF = "hanim_l_eyelid";
HAnimSite HAnimSite1374 = createNode("HAnimSite");
HAnimSite1374.name = "l_eyelid_tip";
HAnimSite1374.DEF = "hanim_l_eyelid_tip";
HAnimSite1374.translation = new SFVec3f(new float[0,2.64,0]);
TouchSensor TouchSensor1375 = createNode("TouchSensor");
TouchSensor1375.description = "HAnimSite l_eyelid_tip hanim_l_eyelid_tip";
HAnimSite1374.children = new MFNode();

HAnimSite1374.children[0] = TouchSensor1375;

Shape Shape1376 = createNode("Shape");
Appearance Appearance1377 = createNode("Appearance");
Material Material1378 = createNode("Material");
Material1378.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1377.material = Material1378;

Shape1376.appearance = Appearance1377;

IndexedFaceSet IndexedFaceSet1379 = createNode("IndexedFaceSet");
IndexedFaceSet1379.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1379.creaseAngle = 0.5;
IndexedFaceSet1379.solid = False;
ColorRGBA ColorRGBA1380 = createNode("ColorRGBA");
ColorRGBA1380.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1379.color = ColorRGBA1380;

Coordinate Coordinate1381 = createNode("Coordinate");
Coordinate1381.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1379.coord = Coordinate1381;

Shape1376.geometry = IndexedFaceSet1379;

HAnimSite1374.children[1] = Shape1376;

Billboard Billboard1382 = createNode("Billboard");
Billboard1382.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1383 = createNode("Shape");
Text Text1384 = createNode("Text");
Text1384.string = new MFString(new java.lang.String["l_eyelid_tip"]);
FontStyle FontStyle1385 = createNode("FontStyle");
FontStyle1385.size = 0.035;
Text1384.fontStyle = FontStyle1385;

Shape1383.geometry = Text1384;

Billboard1382.children = new MFNode();

Billboard1382.children[0] = Shape1383;

HAnimSite1374.children[2] = Billboard1382;

HAnimSegment1373.children = new MFNode();

HAnimSegment1373.children[0] = HAnimSite1374;

Shape Shape1386 = createNode("Shape");
LineSet LineSet1387 = createNode("LineSet");
LineSet1387.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1388 = createNode("ColorRGBA");
ColorRGBA1388.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1387.color = ColorRGBA1388;

Coordinate Coordinate1389 = createNode("Coordinate");
Coordinate1389.point = new MFVec3f(new float[0.0505,1.42425,0.03294,0,1.3126,-0.0154]);
LineSet1387.coord = Coordinate1389;

Shape1386.geometry = LineSet1387;

HAnimSegment1373.children[1] = Shape1386;

HAnimJoint1372.children = new MFNode();

HAnimJoint1372.children[0] = HAnimSegment1373;

HAnimJoint1234.children[1] = HAnimJoint1372;

HAnimJoint HAnimJoint1390 = createNode("HAnimJoint");
HAnimJoint1390.name = "r_eyelid_joint";
HAnimJoint1390.DEF = "hanim_r_eyelid_joint";
HAnimJoint1390.center = new SFVec3f(new float[-0.0505,1.42425,0.03294]);
HAnimJoint1390.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1390.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1391 = createNode("HAnimSegment");
HAnimSegment1391.name = "r_eyelid";
HAnimSegment1391.DEF = "hanim_r_eyelid";
HAnimSite HAnimSite1392 = createNode("HAnimSite");
HAnimSite1392.name = "r_eyelid_tip";
HAnimSite1392.DEF = "hanim_r_eyelid_tip";
HAnimSite1392.translation = new SFVec3f(new float[0,2.68,0]);
TouchSensor TouchSensor1393 = createNode("TouchSensor");
TouchSensor1393.description = "HAnimSite r_eyelid_tip hanim_r_eyelid_tip";
HAnimSite1392.children = new MFNode();

HAnimSite1392.children[0] = TouchSensor1393;

Shape Shape1394 = createNode("Shape");
Appearance Appearance1395 = createNode("Appearance");
Material Material1396 = createNode("Material");
Material1396.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1395.material = Material1396;

Shape1394.appearance = Appearance1395;

IndexedFaceSet IndexedFaceSet1397 = createNode("IndexedFaceSet");
IndexedFaceSet1397.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1397.creaseAngle = 0.5;
IndexedFaceSet1397.solid = False;
ColorRGBA ColorRGBA1398 = createNode("ColorRGBA");
ColorRGBA1398.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1397.color = ColorRGBA1398;

Coordinate Coordinate1399 = createNode("Coordinate");
Coordinate1399.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1397.coord = Coordinate1399;

Shape1394.geometry = IndexedFaceSet1397;

HAnimSite1392.children[1] = Shape1394;

Billboard Billboard1400 = createNode("Billboard");
Billboard1400.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1401 = createNode("Shape");
Text Text1402 = createNode("Text");
Text1402.string = new MFString(new java.lang.String["r_eyelid_tip"]);
FontStyle FontStyle1403 = createNode("FontStyle");
FontStyle1403.size = 0.035;
Text1402.fontStyle = FontStyle1403;

Shape1401.geometry = Text1402;

Billboard1400.children = new MFNode();

Billboard1400.children[0] = Shape1401;

HAnimSite1392.children[2] = Billboard1400;

HAnimSegment1391.children = new MFNode();

HAnimSegment1391.children[0] = HAnimSite1392;

Shape Shape1404 = createNode("Shape");
LineSet LineSet1405 = createNode("LineSet");
LineSet1405.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1406 = createNode("ColorRGBA");
ColorRGBA1406.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1405.color = ColorRGBA1406;

Coordinate Coordinate1407 = createNode("Coordinate");
Coordinate1407.point = new MFVec3f(new float[-0.0505,1.42425,0.03294,0,1.3126,-0.0154]);
LineSet1405.coord = Coordinate1407;

Shape1404.geometry = LineSet1405;

HAnimSegment1391.children[1] = Shape1404;

HAnimJoint1390.children = new MFNode();

HAnimJoint1390.children[0] = HAnimSegment1391;

HAnimJoint1234.children[2] = HAnimJoint1390;

HAnimJoint HAnimJoint1408 = createNode("HAnimJoint");
HAnimJoint1408.name = "l_eyeball_joint";
HAnimJoint1408.DEF = "hanim_l_eyeball_joint";
HAnimJoint1408.center = new SFVec3f(new float[0.048127,1.4049,0.08305]);
HAnimJoint1408.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1408.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1409 = createNode("HAnimSegment");
HAnimSegment1409.name = "l_eyeball";
HAnimSegment1409.DEF = "hanim_l_eyeball";
HAnimSite HAnimSite1410 = createNode("HAnimSite");
HAnimSite1410.name = "l_eyeball_tip";
HAnimSite1410.DEF = "hanim_l_eyeball_tip";
HAnimSite1410.translation = new SFVec3f(new float[0,2.72,0]);
TouchSensor TouchSensor1411 = createNode("TouchSensor");
TouchSensor1411.description = "HAnimSite l_eyeball_tip hanim_l_eyeball_tip";
HAnimSite1410.children = new MFNode();

HAnimSite1410.children[0] = TouchSensor1411;

Shape Shape1412 = createNode("Shape");
Appearance Appearance1413 = createNode("Appearance");
Material Material1414 = createNode("Material");
Material1414.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1413.material = Material1414;

Shape1412.appearance = Appearance1413;

IndexedFaceSet IndexedFaceSet1415 = createNode("IndexedFaceSet");
IndexedFaceSet1415.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1415.creaseAngle = 0.5;
IndexedFaceSet1415.solid = False;
ColorRGBA ColorRGBA1416 = createNode("ColorRGBA");
ColorRGBA1416.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1415.color = ColorRGBA1416;

Coordinate Coordinate1417 = createNode("Coordinate");
Coordinate1417.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1415.coord = Coordinate1417;

Shape1412.geometry = IndexedFaceSet1415;

HAnimSite1410.children[1] = Shape1412;

Billboard Billboard1418 = createNode("Billboard");
Billboard1418.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1419 = createNode("Shape");
Text Text1420 = createNode("Text");
Text1420.string = new MFString(new java.lang.String["l_eyeball_tip"]);
FontStyle FontStyle1421 = createNode("FontStyle");
FontStyle1421.size = 0.035;
Text1420.fontStyle = FontStyle1421;

Shape1419.geometry = Text1420;

Billboard1418.children = new MFNode();

Billboard1418.children[0] = Shape1419;

HAnimSite1410.children[2] = Billboard1418;

HAnimSegment1409.children = new MFNode();

HAnimSegment1409.children[0] = HAnimSite1410;

Shape Shape1422 = createNode("Shape");
LineSet LineSet1423 = createNode("LineSet");
LineSet1423.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1424 = createNode("ColorRGBA");
ColorRGBA1424.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1423.color = ColorRGBA1424;

Coordinate Coordinate1425 = createNode("Coordinate");
Coordinate1425.point = new MFVec3f(new float[0.048127,1.4049,0.08305,0,1.3126,-0.0154]);
LineSet1423.coord = Coordinate1425;

Shape1422.geometry = LineSet1423;

HAnimSegment1409.children[1] = Shape1422;

HAnimJoint1408.children = new MFNode();

HAnimJoint1408.children[0] = HAnimSegment1409;

HAnimJoint1234.children[3] = HAnimJoint1408;

HAnimJoint HAnimJoint1426 = createNode("HAnimJoint");
HAnimJoint1426.name = "r_eyeball_joint";
HAnimJoint1426.DEF = "hanim_r_eyeball_joint";
HAnimJoint1426.center = new SFVec3f(new float[-0.04813,1.4049,0.08305]);
HAnimJoint1426.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1426.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1427 = createNode("HAnimSegment");
HAnimSegment1427.name = "r_eyeball";
HAnimSegment1427.DEF = "hanim_r_eyeball";
HAnimSite HAnimSite1428 = createNode("HAnimSite");
HAnimSite1428.name = "r_eyeball_tip";
HAnimSite1428.DEF = "hanim_r_eyeball_tip";
HAnimSite1428.translation = new SFVec3f(new float[0,2.76,0]);
TouchSensor TouchSensor1429 = createNode("TouchSensor");
TouchSensor1429.description = "HAnimSite r_eyeball_tip hanim_r_eyeball_tip";
HAnimSite1428.children = new MFNode();

HAnimSite1428.children[0] = TouchSensor1429;

Shape Shape1430 = createNode("Shape");
Appearance Appearance1431 = createNode("Appearance");
Material Material1432 = createNode("Material");
Material1432.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1431.material = Material1432;

Shape1430.appearance = Appearance1431;

IndexedFaceSet IndexedFaceSet1433 = createNode("IndexedFaceSet");
IndexedFaceSet1433.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1433.creaseAngle = 0.5;
IndexedFaceSet1433.solid = False;
ColorRGBA ColorRGBA1434 = createNode("ColorRGBA");
ColorRGBA1434.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1433.color = ColorRGBA1434;

Coordinate Coordinate1435 = createNode("Coordinate");
Coordinate1435.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1433.coord = Coordinate1435;

Shape1430.geometry = IndexedFaceSet1433;

HAnimSite1428.children[1] = Shape1430;

Billboard Billboard1436 = createNode("Billboard");
Billboard1436.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1437 = createNode("Shape");
Text Text1438 = createNode("Text");
Text1438.string = new MFString(new java.lang.String["r_eyeball_tip"]);
FontStyle FontStyle1439 = createNode("FontStyle");
FontStyle1439.size = 0.035;
Text1438.fontStyle = FontStyle1439;

Shape1437.geometry = Text1438;

Billboard1436.children = new MFNode();

Billboard1436.children[0] = Shape1437;

HAnimSite1428.children[2] = Billboard1436;

HAnimSegment1427.children = new MFNode();

HAnimSegment1427.children[0] = HAnimSite1428;

Shape Shape1440 = createNode("Shape");
LineSet LineSet1441 = createNode("LineSet");
LineSet1441.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1442 = createNode("ColorRGBA");
ColorRGBA1442.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1441.color = ColorRGBA1442;

Coordinate Coordinate1443 = createNode("Coordinate");
Coordinate1443.point = new MFVec3f(new float[-0.04813,1.4049,0.08305,0,1.3126,-0.0154]);
LineSet1441.coord = Coordinate1443;

Shape1440.geometry = LineSet1441;

HAnimSegment1427.children[1] = Shape1440;

HAnimJoint1426.children = new MFNode();

HAnimJoint1426.children[0] = HAnimSegment1427;

HAnimJoint1234.children[4] = HAnimJoint1426;

HAnimJoint HAnimJoint1444 = createNode("HAnimJoint");
HAnimJoint1444.name = "l_eyebrow_joint";
HAnimJoint1444.DEF = "hanim_l_eyebrow_joint";
HAnimJoint1444.center = new SFVec3f(new float[0.02175,1.4139,0.1069]);
HAnimJoint1444.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1444.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1445 = createNode("HAnimSegment");
HAnimSegment1445.name = "l_eyebrow";
HAnimSegment1445.DEF = "hanim_l_eyebrow";
HAnimSite HAnimSite1446 = createNode("HAnimSite");
HAnimSite1446.name = "l_eyebrow_tip";
HAnimSite1446.DEF = "hanim_l_eyebrow_tip";
HAnimSite1446.translation = new SFVec3f(new float[0,2.8,0]);
TouchSensor TouchSensor1447 = createNode("TouchSensor");
TouchSensor1447.description = "HAnimSite l_eyebrow_tip hanim_l_eyebrow_tip";
HAnimSite1446.children = new MFNode();

HAnimSite1446.children[0] = TouchSensor1447;

Shape Shape1448 = createNode("Shape");
Appearance Appearance1449 = createNode("Appearance");
Material Material1450 = createNode("Material");
Material1450.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1449.material = Material1450;

Shape1448.appearance = Appearance1449;

IndexedFaceSet IndexedFaceSet1451 = createNode("IndexedFaceSet");
IndexedFaceSet1451.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1451.creaseAngle = 0.5;
IndexedFaceSet1451.solid = False;
ColorRGBA ColorRGBA1452 = createNode("ColorRGBA");
ColorRGBA1452.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1451.color = ColorRGBA1452;

Coordinate Coordinate1453 = createNode("Coordinate");
Coordinate1453.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1451.coord = Coordinate1453;

Shape1448.geometry = IndexedFaceSet1451;

HAnimSite1446.children[1] = Shape1448;

Billboard Billboard1454 = createNode("Billboard");
Billboard1454.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1455 = createNode("Shape");
Text Text1456 = createNode("Text");
Text1456.string = new MFString(new java.lang.String["l_eyebrow_tip"]);
FontStyle FontStyle1457 = createNode("FontStyle");
FontStyle1457.size = 0.035;
Text1456.fontStyle = FontStyle1457;

Shape1455.geometry = Text1456;

Billboard1454.children = new MFNode();

Billboard1454.children[0] = Shape1455;

HAnimSite1446.children[2] = Billboard1454;

HAnimSegment1445.children = new MFNode();

HAnimSegment1445.children[0] = HAnimSite1446;

Shape Shape1458 = createNode("Shape");
LineSet LineSet1459 = createNode("LineSet");
LineSet1459.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1460 = createNode("ColorRGBA");
ColorRGBA1460.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1459.color = ColorRGBA1460;

Coordinate Coordinate1461 = createNode("Coordinate");
Coordinate1461.point = new MFVec3f(new float[0.02175,1.4139,0.1069,0,1.3126,-0.0154]);
LineSet1459.coord = Coordinate1461;

Shape1458.geometry = LineSet1459;

HAnimSegment1445.children[1] = Shape1458;

HAnimJoint1444.children = new MFNode();

HAnimJoint1444.children[0] = HAnimSegment1445;

HAnimJoint1234.children[5] = HAnimJoint1444;

HAnimJoint HAnimJoint1462 = createNode("HAnimJoint");
HAnimJoint1462.name = "r_eyebrow_joint";
HAnimJoint1462.DEF = "hanim_r_eyebrow_joint";
HAnimJoint1462.center = new SFVec3f(new float[-0.02175,1.4139,0.10694]);
HAnimJoint1462.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1462.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1463 = createNode("HAnimSegment");
HAnimSegment1463.name = "r_eyebrow";
HAnimSegment1463.DEF = "hanim_r_eyebrow";
HAnimSite HAnimSite1464 = createNode("HAnimSite");
HAnimSite1464.name = "r_eyebrow_tip";
HAnimSite1464.DEF = "hanim_r_eyebrow_tip";
HAnimSite1464.translation = new SFVec3f(new float[0,2.84,0]);
TouchSensor TouchSensor1465 = createNode("TouchSensor");
TouchSensor1465.description = "HAnimSite r_eyebrow_tip hanim_r_eyebrow_tip";
HAnimSite1464.children = new MFNode();

HAnimSite1464.children[0] = TouchSensor1465;

Shape Shape1466 = createNode("Shape");
Appearance Appearance1467 = createNode("Appearance");
Material Material1468 = createNode("Material");
Material1468.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1467.material = Material1468;

Shape1466.appearance = Appearance1467;

IndexedFaceSet IndexedFaceSet1469 = createNode("IndexedFaceSet");
IndexedFaceSet1469.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1469.creaseAngle = 0.5;
IndexedFaceSet1469.solid = False;
ColorRGBA ColorRGBA1470 = createNode("ColorRGBA");
ColorRGBA1470.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1469.color = ColorRGBA1470;

Coordinate Coordinate1471 = createNode("Coordinate");
Coordinate1471.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1469.coord = Coordinate1471;

Shape1466.geometry = IndexedFaceSet1469;

HAnimSite1464.children[1] = Shape1466;

Billboard Billboard1472 = createNode("Billboard");
Billboard1472.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1473 = createNode("Shape");
Text Text1474 = createNode("Text");
Text1474.string = new MFString(new java.lang.String["r_eyebrow_tip"]);
FontStyle FontStyle1475 = createNode("FontStyle");
FontStyle1475.size = 0.035;
Text1474.fontStyle = FontStyle1475;

Shape1473.geometry = Text1474;

Billboard1472.children = new MFNode();

Billboard1472.children[0] = Shape1473;

HAnimSite1464.children[2] = Billboard1472;

HAnimSegment1463.children = new MFNode();

HAnimSegment1463.children[0] = HAnimSite1464;

Shape Shape1476 = createNode("Shape");
LineSet LineSet1477 = createNode("LineSet");
LineSet1477.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1478 = createNode("ColorRGBA");
ColorRGBA1478.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1477.color = ColorRGBA1478;

Coordinate Coordinate1479 = createNode("Coordinate");
Coordinate1479.point = new MFVec3f(new float[-0.02175,1.4139,0.10694,0,1.3126,-0.0154]);
LineSet1477.coord = Coordinate1479;

Shape1476.geometry = LineSet1477;

HAnimSegment1463.children[1] = Shape1476;

HAnimJoint1462.children = new MFNode();

HAnimJoint1462.children[0] = HAnimSegment1463;

HAnimJoint1234.children[6] = HAnimJoint1462;

HAnimJoint HAnimJoint1480 = createNode("HAnimJoint");
HAnimJoint1480.name = "temporomandibular";
HAnimJoint1480.DEF = "hanim_temporomandibular";
HAnimJoint1480.center = new SFVec3f(new float[0,1.3128,0.01538]);
HAnimJoint1480.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1480.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1481 = createNode("HAnimSegment");
HAnimSegment1481.name = "jaw";
HAnimSegment1481.DEF = "hanim_jaw";
HAnimSite HAnimSite1482 = createNode("HAnimSite");
HAnimSite1482.name = "l_gonion";
HAnimSite1482.DEF = "hanim_l_gonion_pt";
HAnimSite1482.translation = new SFVec3f(new float[0.068,1.346,0.033]);
TouchSensor TouchSensor1483 = createNode("TouchSensor");
TouchSensor1483.description = "HAnimSite 5 hanim_l_gonion_pt";
HAnimSite1482.children = new MFNode();

HAnimSite1482.children[0] = TouchSensor1483;

Shape Shape1484 = createNode("Shape");
Appearance Appearance1485 = createNode("Appearance");
Material Material1486 = createNode("Material");
Material1486.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1485.material = Material1486;

Shape1484.appearance = Appearance1485;

IndexedFaceSet IndexedFaceSet1487 = createNode("IndexedFaceSet");
IndexedFaceSet1487.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1487.creaseAngle = 0.5;
IndexedFaceSet1487.solid = False;
ColorRGBA ColorRGBA1488 = createNode("ColorRGBA");
ColorRGBA1488.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1487.color = ColorRGBA1488;

Coordinate Coordinate1489 = createNode("Coordinate");
Coordinate1489.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1487.coord = Coordinate1489;

Shape1484.geometry = IndexedFaceSet1487;

HAnimSite1482.children[1] = Shape1484;

Billboard Billboard1490 = createNode("Billboard");
Billboard1490.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1491 = createNode("Shape");
Text Text1492 = createNode("Text");
Text1492.string = new MFString(new java.lang.String["5"]);
FontStyle FontStyle1493 = createNode("FontStyle");
FontStyle1493.size = 0.035;
Text1492.fontStyle = FontStyle1493;

Shape1491.geometry = Text1492;

Billboard1490.children = new MFNode();

Billboard1490.children[0] = Shape1491;

HAnimSite1482.children[2] = Billboard1490;

HAnimSegment1481.children = new MFNode();

HAnimSegment1481.children[0] = HAnimSite1482;

HAnimSite HAnimSite1494 = createNode("HAnimSite");
HAnimSite1494.name = "r_gonion";
HAnimSite1494.DEF = "hanim_r_gonion_pt";
HAnimSite1494.translation = new SFVec3f(new float[-0.068,1.346,0.033]);
TouchSensor TouchSensor1495 = createNode("TouchSensor");
TouchSensor1495.description = "HAnimSite 8 hanim_r_gonion_pt";
HAnimSite1494.children = new MFNode();

HAnimSite1494.children[0] = TouchSensor1495;

Shape Shape1496 = createNode("Shape");
Appearance Appearance1497 = createNode("Appearance");
Material Material1498 = createNode("Material");
Material1498.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1497.material = Material1498;

Shape1496.appearance = Appearance1497;

IndexedFaceSet IndexedFaceSet1499 = createNode("IndexedFaceSet");
IndexedFaceSet1499.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1499.creaseAngle = 0.5;
IndexedFaceSet1499.solid = False;
ColorRGBA ColorRGBA1500 = createNode("ColorRGBA");
ColorRGBA1500.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1499.color = ColorRGBA1500;

Coordinate Coordinate1501 = createNode("Coordinate");
Coordinate1501.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1499.coord = Coordinate1501;

Shape1496.geometry = IndexedFaceSet1499;

HAnimSite1494.children[1] = Shape1496;

Billboard Billboard1502 = createNode("Billboard");
Billboard1502.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1503 = createNode("Shape");
Text Text1504 = createNode("Text");
Text1504.string = new MFString(new java.lang.String["8"]);
FontStyle FontStyle1505 = createNode("FontStyle");
FontStyle1505.size = 0.035;
Text1504.fontStyle = FontStyle1505;

Shape1503.geometry = Text1504;

Billboard1502.children = new MFNode();

Billboard1502.children[0] = Shape1503;

HAnimSite1494.children[2] = Billboard1502;

HAnimSegment1481.children[1] = HAnimSite1494;

HAnimSite HAnimSite1506 = createNode("HAnimSite");
HAnimSite1506.name = "supramenton";
HAnimSite1506.DEF = "hanim_supramenton_pt";
HAnimSite1506.translation = new SFVec3f(new float[0,1.32,0.086]);
TouchSensor TouchSensor1507 = createNode("TouchSensor");
TouchSensor1507.description = "HAnimSite 9 hanim_supramenton_pt";
HAnimSite1506.children = new MFNode();

HAnimSite1506.children[0] = TouchSensor1507;

Shape Shape1508 = createNode("Shape");
Appearance Appearance1509 = createNode("Appearance");
Material Material1510 = createNode("Material");
Material1510.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1509.material = Material1510;

Shape1508.appearance = Appearance1509;

IndexedFaceSet IndexedFaceSet1511 = createNode("IndexedFaceSet");
IndexedFaceSet1511.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1511.creaseAngle = 0.5;
IndexedFaceSet1511.solid = False;
ColorRGBA ColorRGBA1512 = createNode("ColorRGBA");
ColorRGBA1512.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1511.color = ColorRGBA1512;

Coordinate Coordinate1513 = createNode("Coordinate");
Coordinate1513.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1511.coord = Coordinate1513;

Shape1508.geometry = IndexedFaceSet1511;

HAnimSite1506.children[1] = Shape1508;

Billboard Billboard1514 = createNode("Billboard");
Billboard1514.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1515 = createNode("Shape");
Text Text1516 = createNode("Text");
Text1516.string = new MFString(new java.lang.String["9"]);
FontStyle FontStyle1517 = createNode("FontStyle");
FontStyle1517.size = 0.035;
Text1516.fontStyle = FontStyle1517;

Shape1515.geometry = Text1516;

Billboard1514.children = new MFNode();

Billboard1514.children[0] = Shape1515;

HAnimSite1506.children[2] = Billboard1514;

HAnimSegment1481.children[2] = HAnimSite1506;

HAnimSite HAnimSite1518 = createNode("HAnimSite");
HAnimSite1518.name = "menton";
HAnimSite1518.DEF = "hanim_menton_pt";
HAnimSite1518.translation = new SFVec3f(new float[0,1.3,0.08]);
TouchSensor TouchSensor1519 = createNode("TouchSensor");
TouchSensor1519.description = "HAnimSite 87 hanim_menton_pt";
HAnimSite1518.children = new MFNode();

HAnimSite1518.children[0] = TouchSensor1519;

Shape Shape1520 = createNode("Shape");
Appearance Appearance1521 = createNode("Appearance");
Material Material1522 = createNode("Material");
Material1522.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1521.material = Material1522;

Shape1520.appearance = Appearance1521;

IndexedFaceSet IndexedFaceSet1523 = createNode("IndexedFaceSet");
IndexedFaceSet1523.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1523.creaseAngle = 0.5;
IndexedFaceSet1523.solid = False;
ColorRGBA ColorRGBA1524 = createNode("ColorRGBA");
ColorRGBA1524.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1523.color = ColorRGBA1524;

Coordinate Coordinate1525 = createNode("Coordinate");
Coordinate1525.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1523.coord = Coordinate1525;

Shape1520.geometry = IndexedFaceSet1523;

HAnimSite1518.children[1] = Shape1520;

Billboard Billboard1526 = createNode("Billboard");
Billboard1526.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1527 = createNode("Shape");
Text Text1528 = createNode("Text");
Text1528.string = new MFString(new java.lang.String["87"]);
FontStyle FontStyle1529 = createNode("FontStyle");
FontStyle1529.size = 0.035;
Text1528.fontStyle = FontStyle1529;

Shape1527.geometry = Text1528;

Billboard1526.children = new MFNode();

Billboard1526.children[0] = Shape1527;

HAnimSite1518.children[2] = Billboard1526;

HAnimSegment1481.children[3] = HAnimSite1518;

Shape Shape1530 = createNode("Shape");
LineSet LineSet1531 = createNode("LineSet");
LineSet1531.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1532 = createNode("ColorRGBA");
ColorRGBA1532.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1531.color = ColorRGBA1532;

Coordinate Coordinate1533 = createNode("Coordinate");
Coordinate1533.point = new MFVec3f(new float[0,1.3128,0.01538,0,1.3126,-0.0154]);
LineSet1531.coord = Coordinate1533;

Shape1530.geometry = LineSet1531;

HAnimSegment1481.children[4] = Shape1530;

HAnimJoint1480.children = new MFNode();

HAnimJoint1480.children[0] = HAnimSegment1481;

HAnimJoint1234.children[7] = HAnimJoint1480;

HAnimJoint1228.children[1] = HAnimJoint1234;

HAnimJoint1210.children[1] = HAnimJoint1228;

HAnimJoint1204.children[1] = HAnimJoint1210;

HAnimJoint1198.children[1] = HAnimJoint1204;

HAnimJoint1192.children[1] = HAnimJoint1198;

HAnimJoint1186.children[1] = HAnimJoint1192;

HAnimJoint1156.children[1] = HAnimJoint1186;

HAnimJoint1126.children[1] = HAnimJoint1156;

HAnimJoint HAnimJoint1534 = createNode("HAnimJoint");
HAnimJoint1534.name = "l_sternoclavicular";
HAnimJoint1534.DEF = "hanim_l_sternoclavicular";
HAnimJoint1534.center = new SFVec3f(new float[0.03847,1.2087,-0.01378]);
HAnimJoint1534.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1534.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1535 = createNode("HAnimSegment");
HAnimSegment1535.name = "l_clavicle";
HAnimSegment1535.DEF = "hanim_l_clavicle";
HAnimSite HAnimSite1536 = createNode("HAnimSite");
HAnimSite1536.name = "l_clavicale";
HAnimSite1536.DEF = "hanim_l_clavicale_pt";
HAnimSite1536.translation = new SFVec3f(new float[0.03,1.2,0.04]);
TouchSensor TouchSensor1537 = createNode("TouchSensor");
TouchSensor1537.description = "HAnimSite l_clavicale hanim_l_clavicale_pt";
HAnimSite1536.children = new MFNode();

HAnimSite1536.children[0] = TouchSensor1537;

Shape Shape1538 = createNode("Shape");
Appearance Appearance1539 = createNode("Appearance");
Material Material1540 = createNode("Material");
Material1540.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1539.material = Material1540;

Shape1538.appearance = Appearance1539;

IndexedFaceSet IndexedFaceSet1541 = createNode("IndexedFaceSet");
IndexedFaceSet1541.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1541.creaseAngle = 0.5;
IndexedFaceSet1541.solid = False;
ColorRGBA ColorRGBA1542 = createNode("ColorRGBA");
ColorRGBA1542.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1541.color = ColorRGBA1542;

Coordinate Coordinate1543 = createNode("Coordinate");
Coordinate1543.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1541.coord = Coordinate1543;

Shape1538.geometry = IndexedFaceSet1541;

HAnimSite1536.children[1] = Shape1538;

Billboard Billboard1544 = createNode("Billboard");
Billboard1544.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1545 = createNode("Shape");
Text Text1546 = createNode("Text");
Text1546.string = new MFString(new java.lang.String["l_clavicale"]);
FontStyle FontStyle1547 = createNode("FontStyle");
FontStyle1547.size = 0.035;
Text1546.fontStyle = FontStyle1547;

Shape1545.geometry = Text1546;

Billboard1544.children = new MFNode();

Billboard1544.children[0] = Shape1545;

HAnimSite1536.children[2] = Billboard1544;

HAnimSegment1535.children = new MFNode();

HAnimSegment1535.children[0] = HAnimSite1536;

Shape Shape1548 = createNode("Shape");
LineSet LineSet1549 = createNode("LineSet");
LineSet1549.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1550 = createNode("ColorRGBA");
ColorRGBA1550.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1549.color = ColorRGBA1550;

Coordinate Coordinate1551 = createNode("Coordinate");
Coordinate1551.point = new MFVec3f(new float[0.03847,1.2087,-0.01378,0,1.22,-0.0138]);
LineSet1549.coord = Coordinate1551;

Shape1548.geometry = LineSet1549;

HAnimSegment1535.children[1] = Shape1548;

HAnimJoint1534.children = new MFNode();

HAnimJoint1534.children[0] = HAnimSegment1535;

HAnimJoint HAnimJoint1552 = createNode("HAnimJoint");
HAnimJoint1552.name = "l_acromioclavicular";
HAnimJoint1552.DEF = "hanim_l_acromioclavicular";
HAnimJoint1552.center = new SFVec3f(new float[0.12294,1.191825,-0.0129]);
HAnimJoint1552.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1552.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1553 = createNode("HAnimSegment");
HAnimSegment1553.name = "l_scapula";
HAnimSegment1553.DEF = "hanim_l_scapula";
HAnimSite HAnimSite1554 = createNode("HAnimSite");
HAnimSite1554.name = "l_acromion";
HAnimSite1554.DEF = "hanim_l_acromion_pt";
HAnimSite1554.translation = new SFVec3f(new float[0.15,1.222,-0.02]);
TouchSensor TouchSensor1555 = createNode("TouchSensor");
TouchSensor1555.description = "HAnimSite 15 hanim_l_acromion_pt";
HAnimSite1554.children = new MFNode();

HAnimSite1554.children[0] = TouchSensor1555;

Shape Shape1556 = createNode("Shape");
Appearance Appearance1557 = createNode("Appearance");
Material Material1558 = createNode("Material");
Material1558.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1557.material = Material1558;

Shape1556.appearance = Appearance1557;

IndexedFaceSet IndexedFaceSet1559 = createNode("IndexedFaceSet");
IndexedFaceSet1559.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1559.creaseAngle = 0.5;
IndexedFaceSet1559.solid = False;
ColorRGBA ColorRGBA1560 = createNode("ColorRGBA");
ColorRGBA1560.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1559.color = ColorRGBA1560;

Coordinate Coordinate1561 = createNode("Coordinate");
Coordinate1561.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1559.coord = Coordinate1561;

Shape1556.geometry = IndexedFaceSet1559;

HAnimSite1554.children[1] = Shape1556;

Billboard Billboard1562 = createNode("Billboard");
Billboard1562.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1563 = createNode("Shape");
Text Text1564 = createNode("Text");
Text1564.string = new MFString(new java.lang.String["15"]);
FontStyle FontStyle1565 = createNode("FontStyle");
FontStyle1565.size = 0.035;
Text1564.fontStyle = FontStyle1565;

Shape1563.geometry = Text1564;

Billboard1562.children = new MFNode();

Billboard1562.children[0] = Shape1563;

HAnimSite1554.children[2] = Billboard1562;

HAnimSegment1553.children = new MFNode();

HAnimSegment1553.children[0] = HAnimSite1554;

HAnimSite HAnimSite1566 = createNode("HAnimSite");
HAnimSite1566.name = "l_axilla_proximal";
HAnimSite1566.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite1566.translation = new SFVec3f(new float[0.15,1.16,0.04]);
TouchSensor TouchSensor1567 = createNode("TouchSensor");
TouchSensor1567.description = "HAnimSite 16 hanim_l_axilla_proximal_pt";
HAnimSite1566.children = new MFNode();

HAnimSite1566.children[0] = TouchSensor1567;

Shape Shape1568 = createNode("Shape");
Appearance Appearance1569 = createNode("Appearance");
Material Material1570 = createNode("Material");
Material1570.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1569.material = Material1570;

Shape1568.appearance = Appearance1569;

IndexedFaceSet IndexedFaceSet1571 = createNode("IndexedFaceSet");
IndexedFaceSet1571.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1571.creaseAngle = 0.5;
IndexedFaceSet1571.solid = False;
ColorRGBA ColorRGBA1572 = createNode("ColorRGBA");
ColorRGBA1572.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1571.color = ColorRGBA1572;

Coordinate Coordinate1573 = createNode("Coordinate");
Coordinate1573.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1571.coord = Coordinate1573;

Shape1568.geometry = IndexedFaceSet1571;

HAnimSite1566.children[1] = Shape1568;

Billboard Billboard1574 = createNode("Billboard");
Billboard1574.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1575 = createNode("Shape");
Text Text1576 = createNode("Text");
Text1576.string = new MFString(new java.lang.String["16"]);
FontStyle FontStyle1577 = createNode("FontStyle");
FontStyle1577.size = 0.035;
Text1576.fontStyle = FontStyle1577;

Shape1575.geometry = Text1576;

Billboard1574.children = new MFNode();

Billboard1574.children[0] = Shape1575;

HAnimSite1566.children[2] = Billboard1574;

HAnimSegment1553.children[1] = HAnimSite1566;

HAnimSite HAnimSite1578 = createNode("HAnimSite");
HAnimSite1578.name = "l_axilla_distal";
HAnimSite1578.DEF = "hanim_l_axilla_distal_pt";
HAnimSite1578.translation = new SFVec3f(new float[0.17,1.14,0]);
TouchSensor TouchSensor1579 = createNode("TouchSensor");
TouchSensor1579.description = "HAnimSite 17 hanim_l_axilla_distal_pt";
HAnimSite1578.children = new MFNode();

HAnimSite1578.children[0] = TouchSensor1579;

Shape Shape1580 = createNode("Shape");
Appearance Appearance1581 = createNode("Appearance");
Material Material1582 = createNode("Material");
Material1582.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1581.material = Material1582;

Shape1580.appearance = Appearance1581;

IndexedFaceSet IndexedFaceSet1583 = createNode("IndexedFaceSet");
IndexedFaceSet1583.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1583.creaseAngle = 0.5;
IndexedFaceSet1583.solid = False;
ColorRGBA ColorRGBA1584 = createNode("ColorRGBA");
ColorRGBA1584.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1583.color = ColorRGBA1584;

Coordinate Coordinate1585 = createNode("Coordinate");
Coordinate1585.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1583.coord = Coordinate1585;

Shape1580.geometry = IndexedFaceSet1583;

HAnimSite1578.children[1] = Shape1580;

Billboard Billboard1586 = createNode("Billboard");
Billboard1586.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1587 = createNode("Shape");
Text Text1588 = createNode("Text");
Text1588.string = new MFString(new java.lang.String["17"]);
FontStyle FontStyle1589 = createNode("FontStyle");
FontStyle1589.size = 0.035;
Text1588.fontStyle = FontStyle1589;

Shape1587.geometry = Text1588;

Billboard1586.children = new MFNode();

Billboard1586.children[0] = Shape1587;

HAnimSite1578.children[2] = Billboard1586;

HAnimSegment1553.children[2] = HAnimSite1578;

HAnimSite HAnimSite1590 = createNode("HAnimSite");
HAnimSite1590.name = "l_axilla_posterior_folds";
HAnimSite1590.DEF = "hanim_l_axilla_posterior_folds_pt";
HAnimSite1590.translation = new SFVec3f(new float[0.15,1.145,-0.04]);
TouchSensor TouchSensor1591 = createNode("TouchSensor");
TouchSensor1591.description = "HAnimSite 18 hanim_l_axilla_posterior_folds_pt";
HAnimSite1590.children = new MFNode();

HAnimSite1590.children[0] = TouchSensor1591;

Shape Shape1592 = createNode("Shape");
Appearance Appearance1593 = createNode("Appearance");
Material Material1594 = createNode("Material");
Material1594.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1593.material = Material1594;

Shape1592.appearance = Appearance1593;

IndexedFaceSet IndexedFaceSet1595 = createNode("IndexedFaceSet");
IndexedFaceSet1595.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1595.creaseAngle = 0.5;
IndexedFaceSet1595.solid = False;
ColorRGBA ColorRGBA1596 = createNode("ColorRGBA");
ColorRGBA1596.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1595.color = ColorRGBA1596;

Coordinate Coordinate1597 = createNode("Coordinate");
Coordinate1597.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1595.coord = Coordinate1597;

Shape1592.geometry = IndexedFaceSet1595;

HAnimSite1590.children[1] = Shape1592;

Billboard Billboard1598 = createNode("Billboard");
Billboard1598.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1599 = createNode("Shape");
Text Text1600 = createNode("Text");
Text1600.string = new MFString(new java.lang.String["18"]);
FontStyle FontStyle1601 = createNode("FontStyle");
FontStyle1601.size = 0.035;
Text1600.fontStyle = FontStyle1601;

Shape1599.geometry = Text1600;

Billboard1598.children = new MFNode();

Billboard1598.children[0] = Shape1599;

HAnimSite1590.children[2] = Billboard1598;

HAnimSegment1553.children[3] = HAnimSite1590;

Shape Shape1602 = createNode("Shape");
LineSet LineSet1603 = createNode("LineSet");
LineSet1603.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1604 = createNode("ColorRGBA");
ColorRGBA1604.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1603.color = ColorRGBA1604;

Coordinate Coordinate1605 = createNode("Coordinate");
Coordinate1605.point = new MFVec3f(new float[0.12294,1.191825,-0.0129,0.03847,1.2087,-0.01378]);
LineSet1603.coord = Coordinate1605;

Shape1602.geometry = LineSet1603;

HAnimSegment1553.children[4] = Shape1602;

HAnimJoint1552.children = new MFNode();

HAnimJoint1552.children[0] = HAnimSegment1553;

HAnimJoint HAnimJoint1606 = createNode("HAnimJoint");
HAnimJoint1606.name = "l_shoulder";
HAnimJoint1606.DEF = "hanim_l_shoulder";
HAnimJoint1606.center = new SFVec3f(new float[0.16506,1.17855,-0.00327]);
HAnimJoint1606.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1606.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1607 = createNode("HAnimSegment");
HAnimSegment1607.name = "l_upperarm";
HAnimSegment1607.DEF = "hanim_l_upperarm";
HAnimSite HAnimSite1608 = createNode("HAnimSite");
HAnimSite1608.name = "l_humeral_lateral_epicondyle";
HAnimSite1608.DEF = "hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite1608.translation = new SFVec3f(new float[0.2,0.95,-0.03]);
TouchSensor TouchSensor1609 = createNode("TouchSensor");
TouchSensor1609.description = "HAnimSite 63 hanim_l_humeral_lateral_epicondyle_pt";
HAnimSite1608.children = new MFNode();

HAnimSite1608.children[0] = TouchSensor1609;

Shape Shape1610 = createNode("Shape");
Appearance Appearance1611 = createNode("Appearance");
Material Material1612 = createNode("Material");
Material1612.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1611.material = Material1612;

Shape1610.appearance = Appearance1611;

IndexedFaceSet IndexedFaceSet1613 = createNode("IndexedFaceSet");
IndexedFaceSet1613.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1613.creaseAngle = 0.5;
IndexedFaceSet1613.solid = False;
ColorRGBA ColorRGBA1614 = createNode("ColorRGBA");
ColorRGBA1614.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1613.color = ColorRGBA1614;

Coordinate Coordinate1615 = createNode("Coordinate");
Coordinate1615.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1613.coord = Coordinate1615;

Shape1610.geometry = IndexedFaceSet1613;

HAnimSite1608.children[1] = Shape1610;

Billboard Billboard1616 = createNode("Billboard");
Billboard1616.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1617 = createNode("Shape");
Text Text1618 = createNode("Text");
Text1618.string = new MFString(new java.lang.String["63"]);
FontStyle FontStyle1619 = createNode("FontStyle");
FontStyle1619.size = 0.035;
Text1618.fontStyle = FontStyle1619;

Shape1617.geometry = Text1618;

Billboard1616.children = new MFNode();

Billboard1616.children[0] = Shape1617;

HAnimSite1608.children[2] = Billboard1616;

HAnimSegment1607.children = new MFNode();

HAnimSegment1607.children[0] = HAnimSite1608;

HAnimSite HAnimSite1620 = createNode("HAnimSite");
HAnimSite1620.name = "l_humeral_medial_epicondyle";
HAnimSite1620.DEF = "hanim_l_humeral_medial_epicondyle_pt";
HAnimSite1620.translation = new SFVec3f(new float[0.18,0.93,-0.03]);
TouchSensor TouchSensor1621 = createNode("TouchSensor");
TouchSensor1621.description = "HAnimSite 64 hanim_l_humeral_medial_epicondyle_pt";
HAnimSite1620.children = new MFNode();

HAnimSite1620.children[0] = TouchSensor1621;

Shape Shape1622 = createNode("Shape");
Appearance Appearance1623 = createNode("Appearance");
Material Material1624 = createNode("Material");
Material1624.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1623.material = Material1624;

Shape1622.appearance = Appearance1623;

IndexedFaceSet IndexedFaceSet1625 = createNode("IndexedFaceSet");
IndexedFaceSet1625.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1625.creaseAngle = 0.5;
IndexedFaceSet1625.solid = False;
ColorRGBA ColorRGBA1626 = createNode("ColorRGBA");
ColorRGBA1626.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1625.color = ColorRGBA1626;

Coordinate Coordinate1627 = createNode("Coordinate");
Coordinate1627.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1625.coord = Coordinate1627;

Shape1622.geometry = IndexedFaceSet1625;

HAnimSite1620.children[1] = Shape1622;

Billboard Billboard1628 = createNode("Billboard");
Billboard1628.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1629 = createNode("Shape");
Text Text1630 = createNode("Text");
Text1630.string = new MFString(new java.lang.String["64"]);
FontStyle FontStyle1631 = createNode("FontStyle");
FontStyle1631.size = 0.035;
Text1630.fontStyle = FontStyle1631;

Shape1629.geometry = Text1630;

Billboard1628.children = new MFNode();

Billboard1628.children[0] = Shape1629;

HAnimSite1620.children[2] = Billboard1628;

HAnimSegment1607.children[1] = HAnimSite1620;

HAnimSite HAnimSite1632 = createNode("HAnimSite");
HAnimSite1632.name = "l_radiale";
HAnimSite1632.DEF = "hanim_l_radiale_pt";
HAnimSite1632.translation = new SFVec3f(new float[0.2,0.91,-0.03]);
TouchSensor TouchSensor1633 = createNode("TouchSensor");
TouchSensor1633.description = "HAnimSite 69 hanim_l_radiale_pt";
HAnimSite1632.children = new MFNode();

HAnimSite1632.children[0] = TouchSensor1633;

Shape Shape1634 = createNode("Shape");
Appearance Appearance1635 = createNode("Appearance");
Material Material1636 = createNode("Material");
Material1636.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1635.material = Material1636;

Shape1634.appearance = Appearance1635;

IndexedFaceSet IndexedFaceSet1637 = createNode("IndexedFaceSet");
IndexedFaceSet1637.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1637.creaseAngle = 0.5;
IndexedFaceSet1637.solid = False;
ColorRGBA ColorRGBA1638 = createNode("ColorRGBA");
ColorRGBA1638.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1637.color = ColorRGBA1638;

Coordinate Coordinate1639 = createNode("Coordinate");
Coordinate1639.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1637.coord = Coordinate1639;

Shape1634.geometry = IndexedFaceSet1637;

HAnimSite1632.children[1] = Shape1634;

Billboard Billboard1640 = createNode("Billboard");
Billboard1640.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1641 = createNode("Shape");
Text Text1642 = createNode("Text");
Text1642.string = new MFString(new java.lang.String["69"]);
FontStyle FontStyle1643 = createNode("FontStyle");
FontStyle1643.size = 0.035;
Text1642.fontStyle = FontStyle1643;

Shape1641.geometry = Text1642;

Billboard1640.children = new MFNode();

Billboard1640.children[0] = Shape1641;

HAnimSite1632.children[2] = Billboard1640;

HAnimSegment1607.children[2] = HAnimSite1632;

HAnimSite HAnimSite1644 = createNode("HAnimSite");
HAnimSite1644.name = "l_bideltoid";
HAnimSite1644.DEF = "hanim_l_bideltoid_pt";
HAnimSite1644.translation = new SFVec3f(new float[0.225,1.185,0]);
TouchSensor TouchSensor1645 = createNode("TouchSensor");
TouchSensor1645.description = "HAnimSite 96 hanim_l_bideltoid_pt";
HAnimSite1644.children = new MFNode();

HAnimSite1644.children[0] = TouchSensor1645;

Shape Shape1646 = createNode("Shape");
Appearance Appearance1647 = createNode("Appearance");
Material Material1648 = createNode("Material");
Material1648.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1647.material = Material1648;

Shape1646.appearance = Appearance1647;

IndexedFaceSet IndexedFaceSet1649 = createNode("IndexedFaceSet");
IndexedFaceSet1649.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1649.creaseAngle = 0.5;
IndexedFaceSet1649.solid = False;
ColorRGBA ColorRGBA1650 = createNode("ColorRGBA");
ColorRGBA1650.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1649.color = ColorRGBA1650;

Coordinate Coordinate1651 = createNode("Coordinate");
Coordinate1651.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1649.coord = Coordinate1651;

Shape1646.geometry = IndexedFaceSet1649;

HAnimSite1644.children[1] = Shape1646;

Billboard Billboard1652 = createNode("Billboard");
Billboard1652.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1653 = createNode("Shape");
Text Text1654 = createNode("Text");
Text1654.string = new MFString(new java.lang.String["96"]);
FontStyle FontStyle1655 = createNode("FontStyle");
FontStyle1655.size = 0.035;
Text1654.fontStyle = FontStyle1655;

Shape1653.geometry = Text1654;

Billboard1652.children = new MFNode();

Billboard1652.children[0] = Shape1653;

HAnimSite1644.children[2] = Billboard1652;

HAnimSegment1607.children[3] = HAnimSite1644;

Shape Shape1656 = createNode("Shape");
LineSet LineSet1657 = createNode("LineSet");
LineSet1657.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1658 = createNode("ColorRGBA");
ColorRGBA1658.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1657.color = ColorRGBA1658;

Coordinate Coordinate1659 = createNode("Coordinate");
Coordinate1659.point = new MFVec3f(new float[0.16506,1.17855,-0.00327,0.12294,1.191825,-0.0129]);
LineSet1657.coord = Coordinate1659;

Shape1656.geometry = LineSet1657;

HAnimSegment1607.children[4] = Shape1656;

HAnimJoint1606.children = new MFNode();

HAnimJoint1606.children[0] = HAnimSegment1607;

HAnimJoint HAnimJoint1660 = createNode("HAnimJoint");
HAnimJoint1660.name = "l_elbow";
HAnimJoint1660.DEF = "hanim_l_elbow";
HAnimJoint1660.center = new SFVec3f(new float[0.18209,0.9288,-0.00563]);
HAnimJoint1660.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1660.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1661 = createNode("HAnimSegment");
HAnimSegment1661.name = "l_forearm";
HAnimSegment1661.DEF = "hanim_l_forearm";
HAnimSite HAnimSite1662 = createNode("HAnimSite");
HAnimSite1662.name = "l_radial_styloid";
HAnimSite1662.DEF = "hanim_l_radial_styloid_pt";
HAnimSite1662.translation = new SFVec3f(new float[0.18,0.725,0.025]);
TouchSensor TouchSensor1663 = createNode("TouchSensor");
TouchSensor1663.description = "HAnimSite 71 hanim_l_radial_styloid_pt";
HAnimSite1662.children = new MFNode();

HAnimSite1662.children[0] = TouchSensor1663;

Shape Shape1664 = createNode("Shape");
Appearance Appearance1665 = createNode("Appearance");
Material Material1666 = createNode("Material");
Material1666.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1665.material = Material1666;

Shape1664.appearance = Appearance1665;

IndexedFaceSet IndexedFaceSet1667 = createNode("IndexedFaceSet");
IndexedFaceSet1667.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1667.creaseAngle = 0.5;
IndexedFaceSet1667.solid = False;
ColorRGBA ColorRGBA1668 = createNode("ColorRGBA");
ColorRGBA1668.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1667.color = ColorRGBA1668;

Coordinate Coordinate1669 = createNode("Coordinate");
Coordinate1669.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1667.coord = Coordinate1669;

Shape1664.geometry = IndexedFaceSet1667;

HAnimSite1662.children[1] = Shape1664;

Billboard Billboard1670 = createNode("Billboard");
Billboard1670.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1671 = createNode("Shape");
Text Text1672 = createNode("Text");
Text1672.string = new MFString(new java.lang.String["71"]);
FontStyle FontStyle1673 = createNode("FontStyle");
FontStyle1673.size = 0.035;
Text1672.fontStyle = FontStyle1673;

Shape1671.geometry = Text1672;

Billboard1670.children = new MFNode();

Billboard1670.children[0] = Shape1671;

HAnimSite1662.children[2] = Billboard1670;

HAnimSegment1661.children = new MFNode();

HAnimSegment1661.children[0] = HAnimSite1662;

HAnimSite HAnimSite1674 = createNode("HAnimSite");
HAnimSite1674.name = "l_olecranon";
HAnimSite1674.DEF = "hanim_l_olecranon_pt";
HAnimSite1674.translation = new SFVec3f(new float[0.2,0.92,-0.03]);
TouchSensor TouchSensor1675 = createNode("TouchSensor");
TouchSensor1675.description = "HAnimSite 65 hanim_l_olecranon_pt";
HAnimSite1674.children = new MFNode();

HAnimSite1674.children[0] = TouchSensor1675;

Shape Shape1676 = createNode("Shape");
Appearance Appearance1677 = createNode("Appearance");
Material Material1678 = createNode("Material");
Material1678.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1677.material = Material1678;

Shape1676.appearance = Appearance1677;

IndexedFaceSet IndexedFaceSet1679 = createNode("IndexedFaceSet");
IndexedFaceSet1679.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1679.creaseAngle = 0.5;
IndexedFaceSet1679.solid = False;
ColorRGBA ColorRGBA1680 = createNode("ColorRGBA");
ColorRGBA1680.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1679.color = ColorRGBA1680;

Coordinate Coordinate1681 = createNode("Coordinate");
Coordinate1681.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1679.coord = Coordinate1681;

Shape1676.geometry = IndexedFaceSet1679;

HAnimSite1674.children[1] = Shape1676;

Billboard Billboard1682 = createNode("Billboard");
Billboard1682.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1683 = createNode("Shape");
Text Text1684 = createNode("Text");
Text1684.string = new MFString(new java.lang.String["65"]);
FontStyle FontStyle1685 = createNode("FontStyle");
FontStyle1685.size = 0.035;
Text1684.fontStyle = FontStyle1685;

Shape1683.geometry = Text1684;

Billboard1682.children = new MFNode();

Billboard1682.children[0] = Shape1683;

HAnimSite1674.children[2] = Billboard1682;

HAnimSegment1661.children[1] = HAnimSite1674;

Shape Shape1686 = createNode("Shape");
LineSet LineSet1687 = createNode("LineSet");
LineSet1687.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1688 = createNode("ColorRGBA");
ColorRGBA1688.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1687.color = ColorRGBA1688;

Coordinate Coordinate1689 = createNode("Coordinate");
Coordinate1689.point = new MFVec3f(new float[0.18209,0.9288,-0.00563,0.16506,1.17855,-0.00327]);
LineSet1687.coord = Coordinate1689;

Shape1686.geometry = LineSet1687;

HAnimSegment1661.children[2] = Shape1686;

HAnimJoint1660.children = new MFNode();

HAnimJoint1660.children[0] = HAnimSegment1661;

HAnimJoint HAnimJoint1690 = createNode("HAnimJoint");
HAnimJoint1690.name = "l_radiocarpal";
HAnimJoint1690.DEF = "hanim_l_radiocarpal";
HAnimJoint1690.center = new SFVec3f(new float[0.1819,0.72427,-0.005]);
HAnimJoint1690.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1690.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1691 = createNode("HAnimSegment");
HAnimSegment1691.name = "l_carpal";
HAnimSegment1691.DEF = "hanim_l_carpal";
HAnimSite HAnimSite1692 = createNode("HAnimSite");
HAnimSite1692.name = "l_ulnar_styloid";
HAnimSite1692.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1692.translation = new SFVec3f(new float[0.2,0.725,0]);
TouchSensor TouchSensor1693 = createNode("TouchSensor");
TouchSensor1693.description = "HAnimSite 70 hanim_l_ulnar_styloid_pt";
HAnimSite1692.children = new MFNode();

HAnimSite1692.children[0] = TouchSensor1693;

Shape Shape1694 = createNode("Shape");
Appearance Appearance1695 = createNode("Appearance");
Material Material1696 = createNode("Material");
Material1696.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1695.material = Material1696;

Shape1694.appearance = Appearance1695;

IndexedFaceSet IndexedFaceSet1697 = createNode("IndexedFaceSet");
IndexedFaceSet1697.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1697.creaseAngle = 0.5;
IndexedFaceSet1697.solid = False;
ColorRGBA ColorRGBA1698 = createNode("ColorRGBA");
ColorRGBA1698.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1697.color = ColorRGBA1698;

Coordinate Coordinate1699 = createNode("Coordinate");
Coordinate1699.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1697.coord = Coordinate1699;

Shape1694.geometry = IndexedFaceSet1697;

HAnimSite1692.children[1] = Shape1694;

Billboard Billboard1700 = createNode("Billboard");
Billboard1700.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1701 = createNode("Shape");
Text Text1702 = createNode("Text");
Text1702.string = new MFString(new java.lang.String["70"]);
FontStyle FontStyle1703 = createNode("FontStyle");
FontStyle1703.size = 0.035;
Text1702.fontStyle = FontStyle1703;

Shape1701.geometry = Text1702;

Billboard1700.children = new MFNode();

Billboard1700.children[0] = Shape1701;

HAnimSite1692.children[2] = Billboard1700;

HAnimSegment1691.children = new MFNode();

HAnimSegment1691.children[0] = HAnimSite1692;

Shape Shape1704 = createNode("Shape");
LineSet LineSet1705 = createNode("LineSet");
LineSet1705.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1706 = createNode("ColorRGBA");
ColorRGBA1706.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1705.color = ColorRGBA1706;

Coordinate Coordinate1707 = createNode("Coordinate");
Coordinate1707.point = new MFVec3f(new float[0.1819,0.72427,-0.005,0.18209,0.9288,-0.00563]);
LineSet1705.coord = Coordinate1707;

Shape1704.geometry = LineSet1705;

HAnimSegment1691.children[1] = Shape1704;

HAnimJoint1690.children = new MFNode();

HAnimJoint1690.children[0] = HAnimSegment1691;

HAnimJoint HAnimJoint1708 = createNode("HAnimJoint");
HAnimJoint1708.name = "l_midcarpal_1";
HAnimJoint1708.DEF = "hanim_l_midcarpal_1";
HAnimJoint1708.center = new SFVec3f(new float[0.1813,0.706,0.0193]);
HAnimJoint1708.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1708.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1709 = createNode("HAnimSegment");
HAnimSegment1709.name = "l_trapezium";
HAnimSegment1709.DEF = "hanim_l_trapezium";
Shape Shape1710 = createNode("Shape");
LineSet LineSet1711 = createNode("LineSet");
LineSet1711.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1712 = createNode("ColorRGBA");
ColorRGBA1712.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1711.color = ColorRGBA1712;

Coordinate Coordinate1713 = createNode("Coordinate");
Coordinate1713.point = new MFVec3f(new float[0.1813,0.706,0.0193,0.1819,0.72427,-0.005]);
LineSet1711.coord = Coordinate1713;

Shape1710.geometry = LineSet1711;

HAnimSegment1709.children = new MFNode();

HAnimSegment1709.children[0] = Shape1710;

HAnimJoint1708.children = new MFNode();

HAnimJoint1708.children[0] = HAnimSegment1709;

HAnimJoint HAnimJoint1714 = createNode("HAnimJoint");
HAnimJoint1714.name = "l_carpometacarpal_1";
HAnimJoint1714.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1714.center = new SFVec3f(new float[0.1805,0.69255,0.026]);
HAnimJoint1714.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1714.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1715 = createNode("HAnimSegment");
HAnimSegment1715.name = "l_metacarpal_1";
HAnimSegment1715.DEF = "hanim_l_metacarpal_1";
HAnimSite HAnimSite1716 = createNode("HAnimSite");
HAnimSite1716.name = "l_metacarpal_phalanx_2";
HAnimSite1716.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1716.translation = new SFVec3f(new float[0.2,0.665,0.012]);
TouchSensor TouchSensor1717 = createNode("TouchSensor");
TouchSensor1717.description = "HAnimSite 75 hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1716.children = new MFNode();

HAnimSite1716.children[0] = TouchSensor1717;

Shape Shape1718 = createNode("Shape");
Appearance Appearance1719 = createNode("Appearance");
Material Material1720 = createNode("Material");
Material1720.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1719.material = Material1720;

Shape1718.appearance = Appearance1719;

IndexedFaceSet IndexedFaceSet1721 = createNode("IndexedFaceSet");
IndexedFaceSet1721.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1721.creaseAngle = 0.5;
IndexedFaceSet1721.solid = False;
ColorRGBA ColorRGBA1722 = createNode("ColorRGBA");
ColorRGBA1722.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1721.color = ColorRGBA1722;

Coordinate Coordinate1723 = createNode("Coordinate");
Coordinate1723.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1721.coord = Coordinate1723;

Shape1718.geometry = IndexedFaceSet1721;

HAnimSite1716.children[1] = Shape1718;

Billboard Billboard1724 = createNode("Billboard");
Billboard1724.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1725 = createNode("Shape");
Text Text1726 = createNode("Text");
Text1726.string = new MFString(new java.lang.String["75"]);
FontStyle FontStyle1727 = createNode("FontStyle");
FontStyle1727.size = 0.035;
Text1726.fontStyle = FontStyle1727;

Shape1725.geometry = Text1726;

Billboard1724.children = new MFNode();

Billboard1724.children[0] = Shape1725;

HAnimSite1716.children[2] = Billboard1724;

HAnimSegment1715.children = new MFNode();

HAnimSegment1715.children[0] = HAnimSite1716;

Shape Shape1728 = createNode("Shape");
LineSet LineSet1729 = createNode("LineSet");
LineSet1729.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1730 = createNode("ColorRGBA");
ColorRGBA1730.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1729.color = ColorRGBA1730;

Coordinate Coordinate1731 = createNode("Coordinate");
Coordinate1731.point = new MFVec3f(new float[0.1805,0.69255,0.026,0.1813,0.706,0.0193]);
LineSet1729.coord = Coordinate1731;

Shape1728.geometry = LineSet1729;

HAnimSegment1715.children[1] = Shape1728;

HAnimJoint1714.children = new MFNode();

HAnimJoint1714.children[0] = HAnimSegment1715;

HAnimJoint HAnimJoint1732 = createNode("HAnimJoint");
HAnimJoint1732.name = "l_metacarpophalangeal_1";
HAnimJoint1732.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1732.center = new SFVec3f(new float[0.181,0.6727,0.03577]);
HAnimJoint1732.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1732.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1733 = createNode("HAnimSegment");
HAnimSegment1733.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1733.DEF = "hanim_l_carpal_proximal_phalanx_1";
Shape Shape1734 = createNode("Shape");
LineSet LineSet1735 = createNode("LineSet");
LineSet1735.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1736 = createNode("ColorRGBA");
ColorRGBA1736.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1735.color = ColorRGBA1736;

Coordinate Coordinate1737 = createNode("Coordinate");
Coordinate1737.point = new MFVec3f(new float[0.181,0.6727,0.03577,0.1805,0.69255,0.026]);
LineSet1735.coord = Coordinate1737;

Shape1734.geometry = LineSet1735;

HAnimSegment1733.children = new MFNode();

HAnimSegment1733.children[0] = Shape1734;

HAnimJoint1732.children = new MFNode();

HAnimJoint1732.children[0] = HAnimSegment1733;

HAnimJoint HAnimJoint1738 = createNode("HAnimJoint");
HAnimJoint1738.name = "l_carpal_interphalangeal_1";
HAnimJoint1738.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1738.center = new SFVec3f(new float[0.1826,0.654,0.04966]);
HAnimJoint1738.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1738.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1739 = createNode("HAnimSegment");
HAnimSegment1739.name = "l_carpal_distal_phalanx_1";
HAnimSegment1739.DEF = "hanim_l_carpal_distal_phalanx_1";
HAnimSite HAnimSite1740 = createNode("HAnimSite");
HAnimSite1740.name = "l_carpal_distal_phalanx_1";
HAnimSite1740.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite1740.translation = new SFVec3f(new float[0.18,0.64,0.06]);
TouchSensor TouchSensor1741 = createNode("TouchSensor");
TouchSensor1741.description = "HAnimSite 101 hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite1740.children = new MFNode();

HAnimSite1740.children[0] = TouchSensor1741;

Shape Shape1742 = createNode("Shape");
Appearance Appearance1743 = createNode("Appearance");
Material Material1744 = createNode("Material");
Material1744.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1743.material = Material1744;

Shape1742.appearance = Appearance1743;

IndexedFaceSet IndexedFaceSet1745 = createNode("IndexedFaceSet");
IndexedFaceSet1745.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1745.creaseAngle = 0.5;
IndexedFaceSet1745.solid = False;
ColorRGBA ColorRGBA1746 = createNode("ColorRGBA");
ColorRGBA1746.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1745.color = ColorRGBA1746;

Coordinate Coordinate1747 = createNode("Coordinate");
Coordinate1747.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1745.coord = Coordinate1747;

Shape1742.geometry = IndexedFaceSet1745;

HAnimSite1740.children[1] = Shape1742;

Billboard Billboard1748 = createNode("Billboard");
Billboard1748.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1749 = createNode("Shape");
Text Text1750 = createNode("Text");
Text1750.string = new MFString(new java.lang.String["101"]);
FontStyle FontStyle1751 = createNode("FontStyle");
FontStyle1751.size = 0.035;
Text1750.fontStyle = FontStyle1751;

Shape1749.geometry = Text1750;

Billboard1748.children = new MFNode();

Billboard1748.children[0] = Shape1749;

HAnimSite1740.children[2] = Billboard1748;

HAnimSegment1739.children = new MFNode();

HAnimSegment1739.children[0] = HAnimSite1740;

Shape Shape1752 = createNode("Shape");
LineSet LineSet1753 = createNode("LineSet");
LineSet1753.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1754 = createNode("ColorRGBA");
ColorRGBA1754.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1753.color = ColorRGBA1754;

Coordinate Coordinate1755 = createNode("Coordinate");
Coordinate1755.point = new MFVec3f(new float[0.1826,0.654,0.04966,0.181,0.6727,0.03577]);
LineSet1753.coord = Coordinate1755;

Shape1752.geometry = LineSet1753;

HAnimSegment1739.children[1] = Shape1752;

HAnimJoint1738.children = new MFNode();

HAnimJoint1738.children[0] = HAnimSegment1739;

HAnimJoint1732.children[1] = HAnimJoint1738;

HAnimJoint1714.children[1] = HAnimJoint1732;

HAnimJoint1708.children[1] = HAnimJoint1714;

HAnimJoint1690.children[1] = HAnimJoint1708;

HAnimJoint HAnimJoint1756 = createNode("HAnimJoint");
HAnimJoint1756.name = "l_midcarpal_2";
HAnimJoint1756.DEF = "hanim_l_midcarpal_2";
HAnimJoint1756.center = new SFVec3f(new float[0.18128,0.70695,0.00842]);
HAnimJoint1756.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1756.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1757 = createNode("HAnimSegment");
HAnimSegment1757.name = "l_trapezoid";
HAnimSegment1757.DEF = "hanim_l_trapezoid";
Shape Shape1758 = createNode("Shape");
LineSet LineSet1759 = createNode("LineSet");
LineSet1759.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1760 = createNode("ColorRGBA");
ColorRGBA1760.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1759.color = ColorRGBA1760;

Coordinate Coordinate1761 = createNode("Coordinate");
Coordinate1761.point = new MFVec3f(new float[0.18128,0.70695,0.00842,0.1819,0.72427,-0.005]);
LineSet1759.coord = Coordinate1761;

Shape1758.geometry = LineSet1759;

HAnimSegment1757.children = new MFNode();

HAnimSegment1757.children[0] = Shape1758;

HAnimJoint1756.children = new MFNode();

HAnimJoint1756.children[0] = HAnimSegment1757;

HAnimJoint HAnimJoint1762 = createNode("HAnimJoint");
HAnimJoint1762.name = "l_carpometacarpal_2";
HAnimJoint1762.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1762.center = new SFVec3f(new float[0.18128,0.6876,0.0098]);
HAnimJoint1762.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1762.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1763 = createNode("HAnimSegment");
HAnimSegment1763.name = "l_metacarpal_2";
HAnimSegment1763.DEF = "hanim_l_metacarpal_2";
Shape Shape1764 = createNode("Shape");
LineSet LineSet1765 = createNode("LineSet");
LineSet1765.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1766 = createNode("ColorRGBA");
ColorRGBA1766.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1765.color = ColorRGBA1766;

Coordinate Coordinate1767 = createNode("Coordinate");
Coordinate1767.point = new MFVec3f(new float[0.18128,0.6876,0.0098,0.18128,0.70695,0.00842]);
LineSet1765.coord = Coordinate1767;

Shape1764.geometry = LineSet1765;

HAnimSegment1763.children = new MFNode();

HAnimSegment1763.children[0] = Shape1764;

HAnimJoint1762.children = new MFNode();

HAnimJoint1762.children[0] = HAnimSegment1763;

HAnimJoint HAnimJoint1768 = createNode("HAnimJoint");
HAnimJoint1768.name = "l_metacarpophalangeal_2";
HAnimJoint1768.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1768.center = new SFVec3f(new float[0.1837,0.6372,0.01507]);
HAnimJoint1768.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1768.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1769 = createNode("HAnimSegment");
HAnimSegment1769.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1769.DEF = "hanim_l_carpal_proximal_phalanx_2";
Shape Shape1770 = createNode("Shape");
LineSet LineSet1771 = createNode("LineSet");
LineSet1771.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1772 = createNode("ColorRGBA");
ColorRGBA1772.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1771.color = ColorRGBA1772;

Coordinate Coordinate1773 = createNode("Coordinate");
Coordinate1773.point = new MFVec3f(new float[0.1837,0.6372,0.01507,0.18128,0.6876,0.0098]);
LineSet1771.coord = Coordinate1773;

Shape1770.geometry = LineSet1771;

HAnimSegment1769.children = new MFNode();

HAnimSegment1769.children[0] = Shape1770;

HAnimJoint1768.children = new MFNode();

HAnimJoint1768.children[0] = HAnimSegment1769;

HAnimJoint HAnimJoint1774 = createNode("HAnimJoint");
HAnimJoint1774.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1774.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1774.center = new SFVec3f(new float[0.18171,0.6068,0.01418]);
HAnimJoint1774.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1774.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1775 = createNode("HAnimSegment");
HAnimSegment1775.name = "l_carpal_middle_phalanx_2";
HAnimSegment1775.DEF = "hanim_l_carpal_middle_phalanx_2";
Shape Shape1776 = createNode("Shape");
LineSet LineSet1777 = createNode("LineSet");
LineSet1777.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1778 = createNode("ColorRGBA");
ColorRGBA1778.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1777.color = ColorRGBA1778;

Coordinate Coordinate1779 = createNode("Coordinate");
Coordinate1779.point = new MFVec3f(new float[0.18171,0.6068,0.01418,0.1837,0.6372,0.01507]);
LineSet1777.coord = Coordinate1779;

Shape1776.geometry = LineSet1777;

HAnimSegment1775.children = new MFNode();

HAnimSegment1775.children[0] = Shape1776;

HAnimJoint1774.children = new MFNode();

HAnimJoint1774.children[0] = HAnimSegment1775;

HAnimJoint HAnimJoint1780 = createNode("HAnimJoint");
HAnimJoint1780.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1780.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1780.center = new SFVec3f(new float[0.18067,0.5816,0.01338]);
HAnimJoint1780.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1780.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1781 = createNode("HAnimSegment");
HAnimSegment1781.name = "l_carpal_distal_phalanx_2";
HAnimSegment1781.DEF = "hanim_l_carpal_distal_phalanx_2";
HAnimSite HAnimSite1782 = createNode("HAnimSite");
HAnimSite1782.name = "l_dactylion";
HAnimSite1782.DEF = "hanim_l_dactylion_pt";
HAnimSite1782.translation = new SFVec3f(new float[0.17,0.558,0.017]);
TouchSensor TouchSensor1783 = createNode("TouchSensor");
TouchSensor1783.description = "HAnimSite 57 hanim_l_dactylion_pt";
HAnimSite1782.children = new MFNode();

HAnimSite1782.children[0] = TouchSensor1783;

Shape Shape1784 = createNode("Shape");
Appearance Appearance1785 = createNode("Appearance");
Material Material1786 = createNode("Material");
Material1786.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1785.material = Material1786;

Shape1784.appearance = Appearance1785;

IndexedFaceSet IndexedFaceSet1787 = createNode("IndexedFaceSet");
IndexedFaceSet1787.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1787.creaseAngle = 0.5;
IndexedFaceSet1787.solid = False;
ColorRGBA ColorRGBA1788 = createNode("ColorRGBA");
ColorRGBA1788.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1787.color = ColorRGBA1788;

Coordinate Coordinate1789 = createNode("Coordinate");
Coordinate1789.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1787.coord = Coordinate1789;

Shape1784.geometry = IndexedFaceSet1787;

HAnimSite1782.children[1] = Shape1784;

Billboard Billboard1790 = createNode("Billboard");
Billboard1790.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1791 = createNode("Shape");
Text Text1792 = createNode("Text");
Text1792.string = new MFString(new java.lang.String["57"]);
FontStyle FontStyle1793 = createNode("FontStyle");
FontStyle1793.size = 0.035;
Text1792.fontStyle = FontStyle1793;

Shape1791.geometry = Text1792;

Billboard1790.children = new MFNode();

Billboard1790.children[0] = Shape1791;

HAnimSite1782.children[2] = Billboard1790;

HAnimSegment1781.children = new MFNode();

HAnimSegment1781.children[0] = HAnimSite1782;

HAnimSite HAnimSite1794 = createNode("HAnimSite");
HAnimSite1794.name = "l_carpal_distal_phalanx_2";
HAnimSite1794.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite1794.translation = new SFVec3f(new float[0.172,0.558,0.017]);
TouchSensor TouchSensor1795 = createNode("TouchSensor");
TouchSensor1795.description = "HAnimSite 102 hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite1794.children = new MFNode();

HAnimSite1794.children[0] = TouchSensor1795;

Shape Shape1796 = createNode("Shape");
Appearance Appearance1797 = createNode("Appearance");
Material Material1798 = createNode("Material");
Material1798.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1797.material = Material1798;

Shape1796.appearance = Appearance1797;

IndexedFaceSet IndexedFaceSet1799 = createNode("IndexedFaceSet");
IndexedFaceSet1799.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1799.creaseAngle = 0.5;
IndexedFaceSet1799.solid = False;
ColorRGBA ColorRGBA1800 = createNode("ColorRGBA");
ColorRGBA1800.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1799.color = ColorRGBA1800;

Coordinate Coordinate1801 = createNode("Coordinate");
Coordinate1801.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1799.coord = Coordinate1801;

Shape1796.geometry = IndexedFaceSet1799;

HAnimSite1794.children[1] = Shape1796;

Billboard Billboard1802 = createNode("Billboard");
Billboard1802.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1803 = createNode("Shape");
Text Text1804 = createNode("Text");
Text1804.string = new MFString(new java.lang.String["102"]);
FontStyle FontStyle1805 = createNode("FontStyle");
FontStyle1805.size = 0.035;
Text1804.fontStyle = FontStyle1805;

Shape1803.geometry = Text1804;

Billboard1802.children = new MFNode();

Billboard1802.children[0] = Shape1803;

HAnimSite1794.children[2] = Billboard1802;

HAnimSegment1781.children[1] = HAnimSite1794;

Shape Shape1806 = createNode("Shape");
LineSet LineSet1807 = createNode("LineSet");
LineSet1807.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1808 = createNode("ColorRGBA");
ColorRGBA1808.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1807.color = ColorRGBA1808;

Coordinate Coordinate1809 = createNode("Coordinate");
Coordinate1809.point = new MFVec3f(new float[0.18067,0.5816,0.01338,0.18171,0.6068,0.01418]);
LineSet1807.coord = Coordinate1809;

Shape1806.geometry = LineSet1807;

HAnimSegment1781.children[2] = Shape1806;

HAnimJoint1780.children = new MFNode();

HAnimJoint1780.children[0] = HAnimSegment1781;

HAnimJoint1774.children[1] = HAnimJoint1780;

HAnimJoint1768.children[1] = HAnimJoint1774;

HAnimJoint1762.children[1] = HAnimJoint1768;

HAnimJoint1756.children[1] = HAnimJoint1762;

HAnimJoint1690.children[2] = HAnimJoint1756;

HAnimJoint HAnimJoint1810 = createNode("HAnimJoint");
HAnimJoint1810.name = "l_midcarpal_3";
HAnimJoint1810.DEF = "hanim_l_midcarpal_3";
HAnimJoint1810.center = new SFVec3f(new float[0.18108,0.708525,-0.0048]);
HAnimJoint1810.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1810.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1811 = createNode("HAnimSegment");
HAnimSegment1811.name = "l_capitate";
HAnimSegment1811.DEF = "hanim_l_capitate";
Shape Shape1812 = createNode("Shape");
LineSet LineSet1813 = createNode("LineSet");
LineSet1813.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1814 = createNode("ColorRGBA");
ColorRGBA1814.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1813.color = ColorRGBA1814;

Coordinate Coordinate1815 = createNode("Coordinate");
Coordinate1815.point = new MFVec3f(new float[0.18108,0.708525,-0.0048,0.1819,0.72427,-0.005]);
LineSet1813.coord = Coordinate1815;

Shape1812.geometry = LineSet1813;

HAnimSegment1811.children = new MFNode();

HAnimSegment1811.children[0] = Shape1812;

HAnimJoint1810.children = new MFNode();

HAnimJoint1810.children[0] = HAnimSegment1811;

HAnimJoint HAnimJoint1816 = createNode("HAnimJoint");
HAnimJoint1816.name = "l_carpometacarpal_3";
HAnimJoint1816.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1816.center = new SFVec3f(new float[0.18108,0.6858,-0.00625]);
HAnimJoint1816.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1816.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1817 = createNode("HAnimSegment");
HAnimSegment1817.name = "l_metacarpal_3";
HAnimSegment1817.DEF = "hanim_l_metacarpal_3";
HAnimSite HAnimSite1818 = createNode("HAnimSite");
HAnimSite1818.name = "l_metacarpal_phalanx_3";
HAnimSite1818.DEF = "hanim_l_metacarpal_phalanx_3_pt";
HAnimSite1818.translation = new SFVec3f(new float[0.2,0.665,-0.039]);
TouchSensor TouchSensor1819 = createNode("TouchSensor");
TouchSensor1819.description = "HAnimSite 76 hanim_l_metacarpal_phalanx_3_pt";
HAnimSite1818.children = new MFNode();

HAnimSite1818.children[0] = TouchSensor1819;

Shape Shape1820 = createNode("Shape");
Appearance Appearance1821 = createNode("Appearance");
Material Material1822 = createNode("Material");
Material1822.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1821.material = Material1822;

Shape1820.appearance = Appearance1821;

IndexedFaceSet IndexedFaceSet1823 = createNode("IndexedFaceSet");
IndexedFaceSet1823.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1823.creaseAngle = 0.5;
IndexedFaceSet1823.solid = False;
ColorRGBA ColorRGBA1824 = createNode("ColorRGBA");
ColorRGBA1824.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1823.color = ColorRGBA1824;

Coordinate Coordinate1825 = createNode("Coordinate");
Coordinate1825.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1823.coord = Coordinate1825;

Shape1820.geometry = IndexedFaceSet1823;

HAnimSite1818.children[1] = Shape1820;

Billboard Billboard1826 = createNode("Billboard");
Billboard1826.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1827 = createNode("Shape");
Text Text1828 = createNode("Text");
Text1828.string = new MFString(new java.lang.String["76"]);
FontStyle FontStyle1829 = createNode("FontStyle");
FontStyle1829.size = 0.035;
Text1828.fontStyle = FontStyle1829;

Shape1827.geometry = Text1828;

Billboard1826.children = new MFNode();

Billboard1826.children[0] = Shape1827;

HAnimSite1818.children[2] = Billboard1826;

HAnimSegment1817.children = new MFNode();

HAnimSegment1817.children[0] = HAnimSite1818;

Shape Shape1830 = createNode("Shape");
LineSet LineSet1831 = createNode("LineSet");
LineSet1831.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1832 = createNode("ColorRGBA");
ColorRGBA1832.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1831.color = ColorRGBA1832;

Coordinate Coordinate1833 = createNode("Coordinate");
Coordinate1833.point = new MFVec3f(new float[0.18108,0.6858,-0.00625,0.18108,0.708525,-0.0048]);
LineSet1831.coord = Coordinate1833;

Shape1830.geometry = LineSet1831;

HAnimSegment1817.children[1] = Shape1830;

HAnimJoint1816.children = new MFNode();

HAnimJoint1816.children[0] = HAnimSegment1817;

HAnimJoint HAnimJoint1834 = createNode("HAnimJoint");
HAnimJoint1834.name = "l_metacarpophalangeal_3";
HAnimJoint1834.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1834.center = new SFVec3f(new float[0.18369,0.6349,-0.0039]);
HAnimJoint1834.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1834.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1835 = createNode("HAnimSegment");
HAnimSegment1835.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1835.DEF = "hanim_l_carpal_proximal_phalanx_3";
Shape Shape1836 = createNode("Shape");
LineSet LineSet1837 = createNode("LineSet");
LineSet1837.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1838 = createNode("ColorRGBA");
ColorRGBA1838.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1837.color = ColorRGBA1838;

Coordinate Coordinate1839 = createNode("Coordinate");
Coordinate1839.point = new MFVec3f(new float[0.18369,0.6349,-0.0039,0.18108,0.6858,-0.00625]);
LineSet1837.coord = Coordinate1839;

Shape1836.geometry = LineSet1837;

HAnimSegment1835.children = new MFNode();

HAnimSegment1835.children[0] = Shape1836;

HAnimJoint1834.children = new MFNode();

HAnimJoint1834.children[0] = HAnimSegment1835;

HAnimJoint HAnimJoint1840 = createNode("HAnimJoint");
HAnimJoint1840.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1840.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1840.center = new SFVec3f(new float[0.18171,0.6032,-0.0035]);
HAnimJoint1840.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1840.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1841 = createNode("HAnimSegment");
HAnimSegment1841.name = "l_carpal_middle_phalanx_3";
HAnimSegment1841.DEF = "hanim_l_carpal_middle_phalanx_3";
Shape Shape1842 = createNode("Shape");
LineSet LineSet1843 = createNode("LineSet");
LineSet1843.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1844 = createNode("ColorRGBA");
ColorRGBA1844.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1843.color = ColorRGBA1844;

Coordinate Coordinate1845 = createNode("Coordinate");
Coordinate1845.point = new MFVec3f(new float[0.18171,0.6032,-0.0035,0.18369,0.6349,-0.0039]);
LineSet1843.coord = Coordinate1845;

Shape1842.geometry = LineSet1843;

HAnimSegment1841.children = new MFNode();

HAnimSegment1841.children[0] = Shape1842;

HAnimJoint1840.children = new MFNode();

HAnimJoint1840.children[0] = HAnimSegment1841;

HAnimJoint HAnimJoint1846 = createNode("HAnimJoint");
HAnimJoint1846.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1846.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1846.center = new SFVec3f(new float[0.1807,0.5753,-0.0037]);
HAnimJoint1846.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1846.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1847 = createNode("HAnimSegment");
HAnimSegment1847.name = "l_carpal_distal_phalanx_3";
HAnimSegment1847.DEF = "hanim_l_carpal_distal_phalanx_3";
HAnimSite HAnimSite1848 = createNode("HAnimSite");
HAnimSite1848.name = "l_carpal_distal_phalanx_3";
HAnimSite1848.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite1848.translation = new SFVec3f(new float[0.172,0.555,-0.006]);
TouchSensor TouchSensor1849 = createNode("TouchSensor");
TouchSensor1849.description = "HAnimSite 103 hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite1848.children = new MFNode();

HAnimSite1848.children[0] = TouchSensor1849;

Shape Shape1850 = createNode("Shape");
Appearance Appearance1851 = createNode("Appearance");
Material Material1852 = createNode("Material");
Material1852.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1851.material = Material1852;

Shape1850.appearance = Appearance1851;

IndexedFaceSet IndexedFaceSet1853 = createNode("IndexedFaceSet");
IndexedFaceSet1853.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1853.creaseAngle = 0.5;
IndexedFaceSet1853.solid = False;
ColorRGBA ColorRGBA1854 = createNode("ColorRGBA");
ColorRGBA1854.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1853.color = ColorRGBA1854;

Coordinate Coordinate1855 = createNode("Coordinate");
Coordinate1855.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1853.coord = Coordinate1855;

Shape1850.geometry = IndexedFaceSet1853;

HAnimSite1848.children[1] = Shape1850;

Billboard Billboard1856 = createNode("Billboard");
Billboard1856.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1857 = createNode("Shape");
Text Text1858 = createNode("Text");
Text1858.string = new MFString(new java.lang.String["103"]);
FontStyle FontStyle1859 = createNode("FontStyle");
FontStyle1859.size = 0.035;
Text1858.fontStyle = FontStyle1859;

Shape1857.geometry = Text1858;

Billboard1856.children = new MFNode();

Billboard1856.children[0] = Shape1857;

HAnimSite1848.children[2] = Billboard1856;

HAnimSegment1847.children = new MFNode();

HAnimSegment1847.children[0] = HAnimSite1848;

Shape Shape1860 = createNode("Shape");
LineSet LineSet1861 = createNode("LineSet");
LineSet1861.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1862 = createNode("ColorRGBA");
ColorRGBA1862.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1861.color = ColorRGBA1862;

Coordinate Coordinate1863 = createNode("Coordinate");
Coordinate1863.point = new MFVec3f(new float[0.1807,0.5753,-0.0037,0.18171,0.6032,-0.0035]);
LineSet1861.coord = Coordinate1863;

Shape1860.geometry = LineSet1861;

HAnimSegment1847.children[1] = Shape1860;

HAnimJoint1846.children = new MFNode();

HAnimJoint1846.children[0] = HAnimSegment1847;

HAnimJoint1840.children[1] = HAnimJoint1846;

HAnimJoint1834.children[1] = HAnimJoint1840;

HAnimJoint1816.children[1] = HAnimJoint1834;

HAnimJoint1810.children[1] = HAnimJoint1816;

HAnimJoint1690.children[3] = HAnimJoint1810;

HAnimJoint HAnimJoint1864 = createNode("HAnimJoint");
HAnimJoint1864.name = "l_midcarpal_4_5";
HAnimJoint1864.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint1864.center = new SFVec3f(new float[0.18108,0.70582,-0.02574]);
HAnimJoint1864.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1864.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1865 = createNode("HAnimSegment");
HAnimSegment1865.name = "l_hamate";
HAnimSegment1865.DEF = "hanim_l_hamate";
Shape Shape1866 = createNode("Shape");
LineSet LineSet1867 = createNode("LineSet");
LineSet1867.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1868 = createNode("ColorRGBA");
ColorRGBA1868.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1867.color = ColorRGBA1868;

Coordinate Coordinate1869 = createNode("Coordinate");
Coordinate1869.point = new MFVec3f(new float[0.18108,0.70582,-0.02574,0.1819,0.72427,-0.005]);
LineSet1867.coord = Coordinate1869;

Shape1866.geometry = LineSet1867;

HAnimSegment1865.children = new MFNode();

HAnimSegment1865.children[0] = Shape1866;

HAnimJoint1864.children = new MFNode();

HAnimJoint1864.children[0] = HAnimSegment1865;

HAnimJoint HAnimJoint1870 = createNode("HAnimJoint");
HAnimJoint1870.name = "l_carpometacarpal_4";
HAnimJoint1870.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1870.center = new SFVec3f(new float[0.1811,0.68625,-0.0199]);
HAnimJoint1870.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1870.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1871 = createNode("HAnimSegment");
HAnimSegment1871.name = "l_metacarpal_4";
HAnimSegment1871.DEF = "hanim_l_metacarpal_4";
Shape Shape1872 = createNode("Shape");
LineSet LineSet1873 = createNode("LineSet");
LineSet1873.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1874 = createNode("ColorRGBA");
ColorRGBA1874.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1873.color = ColorRGBA1874;

Coordinate Coordinate1875 = createNode("Coordinate");
Coordinate1875.point = new MFVec3f(new float[0.1811,0.68625,-0.0199,0.18108,0.70582,-0.02574]);
LineSet1873.coord = Coordinate1875;

Shape1872.geometry = LineSet1873;

HAnimSegment1871.children = new MFNode();

HAnimSegment1871.children[0] = Shape1872;

HAnimJoint1870.children = new MFNode();

HAnimJoint1870.children[0] = HAnimSegment1871;

HAnimJoint HAnimJoint1876 = createNode("HAnimJoint");
HAnimJoint1876.name = "l_metacarpophalangeal_4";
HAnimJoint1876.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1876.center = new SFVec3f(new float[0.18369,0.63405,-0.02144]);
HAnimJoint1876.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1876.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1877 = createNode("HAnimSegment");
HAnimSegment1877.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1877.DEF = "hanim_l_carpal_proximal_phalanx_4";
Shape Shape1878 = createNode("Shape");
LineSet LineSet1879 = createNode("LineSet");
LineSet1879.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1880 = createNode("ColorRGBA");
ColorRGBA1880.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1879.color = ColorRGBA1880;

Coordinate Coordinate1881 = createNode("Coordinate");
Coordinate1881.point = new MFVec3f(new float[0.18369,0.63405,-0.02144,0.1811,0.68625,-0.0199]);
LineSet1879.coord = Coordinate1881;

Shape1878.geometry = LineSet1879;

HAnimSegment1877.children = new MFNode();

HAnimSegment1877.children[0] = Shape1878;

HAnimJoint1876.children = new MFNode();

HAnimJoint1876.children[0] = HAnimSegment1877;

HAnimJoint HAnimJoint1882 = createNode("HAnimJoint");
HAnimJoint1882.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1882.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1882.center = new SFVec3f(new float[0.1817,0.6066,-0.02064]);
HAnimJoint1882.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1882.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1883 = createNode("HAnimSegment");
HAnimSegment1883.name = "l_carpal_middle_phalanx_4";
HAnimSegment1883.DEF = "hanim_l_carpal_middle_phalanx_4";
Shape Shape1884 = createNode("Shape");
LineSet LineSet1885 = createNode("LineSet");
LineSet1885.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1886 = createNode("ColorRGBA");
ColorRGBA1886.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1885.color = ColorRGBA1886;

Coordinate Coordinate1887 = createNode("Coordinate");
Coordinate1887.point = new MFVec3f(new float[0.1817,0.6066,-0.02064,0.18369,0.63405,-0.02144]);
LineSet1885.coord = Coordinate1887;

Shape1884.geometry = LineSet1885;

HAnimSegment1883.children = new MFNode();

HAnimSegment1883.children[0] = Shape1884;

HAnimJoint1882.children = new MFNode();

HAnimJoint1882.children[0] = HAnimSegment1883;

HAnimJoint HAnimJoint1888 = createNode("HAnimJoint");
HAnimJoint1888.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1888.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1888.center = new SFVec3f(new float[0.18067,0.580725,-0.01977]);
HAnimJoint1888.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1888.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1889 = createNode("HAnimSegment");
HAnimSegment1889.name = "l_carpal_distal_phalanx_4";
HAnimSegment1889.DEF = "hanim_l_carpal_distal_phalanx_4";
HAnimSite HAnimSite1890 = createNode("HAnimSite");
HAnimSite1890.name = "l_carpal_distal_phalanx_4";
HAnimSite1890.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite1890.translation = new SFVec3f(new float[0.172,0.559,-0.024]);
TouchSensor TouchSensor1891 = createNode("TouchSensor");
TouchSensor1891.description = "HAnimSite 104 hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite1890.children = new MFNode();

HAnimSite1890.children[0] = TouchSensor1891;

Shape Shape1892 = createNode("Shape");
Appearance Appearance1893 = createNode("Appearance");
Material Material1894 = createNode("Material");
Material1894.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1893.material = Material1894;

Shape1892.appearance = Appearance1893;

IndexedFaceSet IndexedFaceSet1895 = createNode("IndexedFaceSet");
IndexedFaceSet1895.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1895.creaseAngle = 0.5;
IndexedFaceSet1895.solid = False;
ColorRGBA ColorRGBA1896 = createNode("ColorRGBA");
ColorRGBA1896.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1895.color = ColorRGBA1896;

Coordinate Coordinate1897 = createNode("Coordinate");
Coordinate1897.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1895.coord = Coordinate1897;

Shape1892.geometry = IndexedFaceSet1895;

HAnimSite1890.children[1] = Shape1892;

Billboard Billboard1898 = createNode("Billboard");
Billboard1898.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1899 = createNode("Shape");
Text Text1900 = createNode("Text");
Text1900.string = new MFString(new java.lang.String["104"]);
FontStyle FontStyle1901 = createNode("FontStyle");
FontStyle1901.size = 0.035;
Text1900.fontStyle = FontStyle1901;

Shape1899.geometry = Text1900;

Billboard1898.children = new MFNode();

Billboard1898.children[0] = Shape1899;

HAnimSite1890.children[2] = Billboard1898;

HAnimSegment1889.children = new MFNode();

HAnimSegment1889.children[0] = HAnimSite1890;

Shape Shape1902 = createNode("Shape");
LineSet LineSet1903 = createNode("LineSet");
LineSet1903.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1904 = createNode("ColorRGBA");
ColorRGBA1904.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1903.color = ColorRGBA1904;

Coordinate Coordinate1905 = createNode("Coordinate");
Coordinate1905.point = new MFVec3f(new float[0.18067,0.580725,-0.01977,0.1817,0.6066,-0.02064]);
LineSet1903.coord = Coordinate1905;

Shape1902.geometry = LineSet1903;

HAnimSegment1889.children[1] = Shape1902;

HAnimJoint1888.children = new MFNode();

HAnimJoint1888.children[0] = HAnimSegment1889;

HAnimJoint1882.children[1] = HAnimJoint1888;

HAnimJoint1876.children[1] = HAnimJoint1882;

HAnimJoint1870.children[1] = HAnimJoint1876;

HAnimJoint1864.children[1] = HAnimJoint1870;

HAnimJoint1690.children[4] = HAnimJoint1864;

HAnimJoint HAnimJoint1906 = createNode("HAnimJoint");
HAnimJoint1906.name = "l_carpometacarpal_5";
HAnimJoint1906.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1906.center = new SFVec3f(new float[0.18164,0.68827,-0.03278]);
HAnimJoint1906.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1906.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1907 = createNode("HAnimSegment");
HAnimSegment1907.name = "l_metacarpal_5";
HAnimSegment1907.DEF = "hanim_l_metacarpal_5";
HAnimSite HAnimSite1908 = createNode("HAnimSite");
HAnimSite1908.name = "l_metacarpal_phalanx_5";
HAnimSite1908.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1908.translation = new SFVec3f(new float[0.2,0.665,-0.036]);
TouchSensor TouchSensor1909 = createNode("TouchSensor");
TouchSensor1909.description = "HAnimSite 77 hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1908.children = new MFNode();

HAnimSite1908.children[0] = TouchSensor1909;

Shape Shape1910 = createNode("Shape");
Appearance Appearance1911 = createNode("Appearance");
Material Material1912 = createNode("Material");
Material1912.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1911.material = Material1912;

Shape1910.appearance = Appearance1911;

IndexedFaceSet IndexedFaceSet1913 = createNode("IndexedFaceSet");
IndexedFaceSet1913.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1913.creaseAngle = 0.5;
IndexedFaceSet1913.solid = False;
ColorRGBA ColorRGBA1914 = createNode("ColorRGBA");
ColorRGBA1914.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1913.color = ColorRGBA1914;

Coordinate Coordinate1915 = createNode("Coordinate");
Coordinate1915.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1913.coord = Coordinate1915;

Shape1910.geometry = IndexedFaceSet1913;

HAnimSite1908.children[1] = Shape1910;

Billboard Billboard1916 = createNode("Billboard");
Billboard1916.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1917 = createNode("Shape");
Text Text1918 = createNode("Text");
Text1918.string = new MFString(new java.lang.String["77"]);
FontStyle FontStyle1919 = createNode("FontStyle");
FontStyle1919.size = 0.035;
Text1918.fontStyle = FontStyle1919;

Shape1917.geometry = Text1918;

Billboard1916.children = new MFNode();

Billboard1916.children[0] = Shape1917;

HAnimSite1908.children[2] = Billboard1916;

HAnimSegment1907.children = new MFNode();

HAnimSegment1907.children[0] = HAnimSite1908;

Shape Shape1920 = createNode("Shape");
LineSet LineSet1921 = createNode("LineSet");
LineSet1921.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1922 = createNode("ColorRGBA");
ColorRGBA1922.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1921.color = ColorRGBA1922;

Coordinate Coordinate1923 = createNode("Coordinate");
Coordinate1923.point = new MFVec3f(new float[0.18164,0.68827,-0.03278,0.1819,0.72427,-0.005]);
LineSet1921.coord = Coordinate1923;

Shape1920.geometry = LineSet1921;

HAnimSegment1907.children[1] = Shape1920;

HAnimJoint1906.children = new MFNode();

HAnimJoint1906.children[0] = HAnimSegment1907;

HAnimJoint HAnimJoint1924 = createNode("HAnimJoint");
HAnimJoint1924.name = "l_metacarpophalangeal_5";
HAnimJoint1924.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1924.center = new SFVec3f(new float[0.1833,0.6381,-0.037]);
HAnimJoint1924.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1924.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1925 = createNode("HAnimSegment");
HAnimSegment1925.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1925.DEF = "hanim_l_carpal_proximal_phalanx_5";
Shape Shape1926 = createNode("Shape");
LineSet LineSet1927 = createNode("LineSet");
LineSet1927.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1928 = createNode("ColorRGBA");
ColorRGBA1928.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1927.color = ColorRGBA1928;

Coordinate Coordinate1929 = createNode("Coordinate");
Coordinate1929.point = new MFVec3f(new float[0.1833,0.6381,-0.037,0.18164,0.68827,-0.03278]);
LineSet1927.coord = Coordinate1929;

Shape1926.geometry = LineSet1927;

HAnimSegment1925.children = new MFNode();

HAnimSegment1925.children[0] = Shape1926;

HAnimJoint1924.children = new MFNode();

HAnimJoint1924.children[0] = HAnimSegment1925;

HAnimJoint HAnimJoint1930 = createNode("HAnimJoint");
HAnimJoint1930.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1930.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1930.center = new SFVec3f(new float[0.18166,0.621,-0.03715]);
HAnimJoint1930.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1930.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1931 = createNode("HAnimSegment");
HAnimSegment1931.name = "l_carpal_middle_phalanx_5";
HAnimSegment1931.DEF = "hanim_l_carpal_middle_phalanx_5";
Shape Shape1932 = createNode("Shape");
LineSet LineSet1933 = createNode("LineSet");
LineSet1933.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1934 = createNode("ColorRGBA");
ColorRGBA1934.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1933.color = ColorRGBA1934;

Coordinate Coordinate1935 = createNode("Coordinate");
Coordinate1935.point = new MFVec3f(new float[0.18166,0.621,-0.03715,0.1833,0.6381,-0.037]);
LineSet1933.coord = Coordinate1935;

Shape1932.geometry = LineSet1933;

HAnimSegment1931.children = new MFNode();

HAnimSegment1931.children[0] = Shape1932;

HAnimJoint1930.children = new MFNode();

HAnimJoint1930.children[0] = HAnimSegment1931;

HAnimJoint HAnimJoint1936 = createNode("HAnimJoint");
HAnimJoint1936.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1936.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1936.center = new SFVec3f(new float[0.1808,0.6023,-0.0369]);
HAnimJoint1936.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1936.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1937 = createNode("HAnimSegment");
HAnimSegment1937.name = "l_carpal_distal_phalanx_5";
HAnimSegment1937.DEF = "hanim_l_carpal_distal_phalanx_5";
HAnimSite HAnimSite1938 = createNode("HAnimSite");
HAnimSite1938.name = "l_carpal_distal_phalanx_5";
HAnimSite1938.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite1938.translation = new SFVec3f(new float[0.172,0.58,-0.039]);
TouchSensor TouchSensor1939 = createNode("TouchSensor");
TouchSensor1939.description = "HAnimSite 105 hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite1938.children = new MFNode();

HAnimSite1938.children[0] = TouchSensor1939;

Shape Shape1940 = createNode("Shape");
Appearance Appearance1941 = createNode("Appearance");
Material Material1942 = createNode("Material");
Material1942.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1941.material = Material1942;

Shape1940.appearance = Appearance1941;

IndexedFaceSet IndexedFaceSet1943 = createNode("IndexedFaceSet");
IndexedFaceSet1943.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1943.creaseAngle = 0.5;
IndexedFaceSet1943.solid = False;
ColorRGBA ColorRGBA1944 = createNode("ColorRGBA");
ColorRGBA1944.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1943.color = ColorRGBA1944;

Coordinate Coordinate1945 = createNode("Coordinate");
Coordinate1945.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1943.coord = Coordinate1945;

Shape1940.geometry = IndexedFaceSet1943;

HAnimSite1938.children[1] = Shape1940;

Billboard Billboard1946 = createNode("Billboard");
Billboard1946.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1947 = createNode("Shape");
Text Text1948 = createNode("Text");
Text1948.string = new MFString(new java.lang.String["105"]);
FontStyle FontStyle1949 = createNode("FontStyle");
FontStyle1949.size = 0.035;
Text1948.fontStyle = FontStyle1949;

Shape1947.geometry = Text1948;

Billboard1946.children = new MFNode();

Billboard1946.children[0] = Shape1947;

HAnimSite1938.children[2] = Billboard1946;

HAnimSegment1937.children = new MFNode();

HAnimSegment1937.children[0] = HAnimSite1938;

Shape Shape1950 = createNode("Shape");
LineSet LineSet1951 = createNode("LineSet");
LineSet1951.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1952 = createNode("ColorRGBA");
ColorRGBA1952.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1951.color = ColorRGBA1952;

Coordinate Coordinate1953 = createNode("Coordinate");
Coordinate1953.point = new MFVec3f(new float[0.1808,0.6023,-0.0369,0.18166,0.621,-0.03715]);
LineSet1951.coord = Coordinate1953;

Shape1950.geometry = LineSet1951;

HAnimSegment1937.children[1] = Shape1950;

HAnimJoint1936.children = new MFNode();

HAnimJoint1936.children[0] = HAnimSegment1937;

HAnimJoint1930.children[1] = HAnimJoint1936;

HAnimJoint1924.children[1] = HAnimJoint1930;

HAnimJoint1906.children[1] = HAnimJoint1924;

HAnimJoint1690.children[5] = HAnimJoint1906;

HAnimJoint1660.children[1] = HAnimJoint1690;

HAnimJoint1606.children[1] = HAnimJoint1660;

HAnimJoint1552.children[1] = HAnimJoint1606;

HAnimJoint1534.children[1] = HAnimJoint1552;

HAnimJoint1126.children[2] = HAnimJoint1534;

HAnimJoint HAnimJoint1954 = createNode("HAnimJoint");
HAnimJoint1954.name = "r_sternoclavicular";
HAnimJoint1954.DEF = "hanim_r_sternoclavicular";
HAnimJoint1954.center = new SFVec3f(new float[-0.03847,1.2087,-0.0138]);
HAnimJoint1954.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1954.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1955 = createNode("HAnimSegment");
HAnimSegment1955.name = "r_clavicle";
HAnimSegment1955.DEF = "hanim_r_clavicle";
HAnimSite HAnimSite1956 = createNode("HAnimSite");
HAnimSite1956.name = "r_clavicale";
HAnimSite1956.DEF = "hanim_r_clavicale_pt";
HAnimSite1956.translation = new SFVec3f(new float[-0.03,1.2,0.04]);
TouchSensor TouchSensor1957 = createNode("TouchSensor");
TouchSensor1957.description = "HAnimSite r_clavicale hanim_r_clavicale_pt";
HAnimSite1956.children = new MFNode();

HAnimSite1956.children[0] = TouchSensor1957;

Shape Shape1958 = createNode("Shape");
Appearance Appearance1959 = createNode("Appearance");
Material Material1960 = createNode("Material");
Material1960.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1959.material = Material1960;

Shape1958.appearance = Appearance1959;

IndexedFaceSet IndexedFaceSet1961 = createNode("IndexedFaceSet");
IndexedFaceSet1961.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1961.creaseAngle = 0.5;
IndexedFaceSet1961.solid = False;
ColorRGBA ColorRGBA1962 = createNode("ColorRGBA");
ColorRGBA1962.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1961.color = ColorRGBA1962;

Coordinate Coordinate1963 = createNode("Coordinate");
Coordinate1963.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1961.coord = Coordinate1963;

Shape1958.geometry = IndexedFaceSet1961;

HAnimSite1956.children[1] = Shape1958;

Billboard Billboard1964 = createNode("Billboard");
Billboard1964.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1965 = createNode("Shape");
Text Text1966 = createNode("Text");
Text1966.string = new MFString(new java.lang.String["r_clavicale"]);
FontStyle FontStyle1967 = createNode("FontStyle");
FontStyle1967.size = 0.035;
Text1966.fontStyle = FontStyle1967;

Shape1965.geometry = Text1966;

Billboard1964.children = new MFNode();

Billboard1964.children[0] = Shape1965;

HAnimSite1956.children[2] = Billboard1964;

HAnimSegment1955.children = new MFNode();

HAnimSegment1955.children[0] = HAnimSite1956;

Shape Shape1968 = createNode("Shape");
LineSet LineSet1969 = createNode("LineSet");
LineSet1969.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1970 = createNode("ColorRGBA");
ColorRGBA1970.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet1969.color = ColorRGBA1970;

Coordinate Coordinate1971 = createNode("Coordinate");
Coordinate1971.point = new MFVec3f(new float[-0.03847,1.2087,-0.0138,0,1.22,-0.0138]);
LineSet1969.coord = Coordinate1971;

Shape1968.geometry = LineSet1969;

HAnimSegment1955.children[1] = Shape1968;

HAnimJoint1954.children = new MFNode();

HAnimJoint1954.children[0] = HAnimSegment1955;

HAnimJoint HAnimJoint1972 = createNode("HAnimJoint");
HAnimJoint1972.name = "r_acromioclavicular";
HAnimJoint1972.DEF = "hanim_r_acromioclavicular";
HAnimJoint1972.center = new SFVec3f(new float[-0.1229,1.19182,-0.0129]);
HAnimJoint1972.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1972.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1973 = createNode("HAnimSegment");
HAnimSegment1973.name = "r_scapula";
HAnimSegment1973.DEF = "hanim_r_scapula";
HAnimSite HAnimSite1974 = createNode("HAnimSite");
HAnimSite1974.name = "r_acromion";
HAnimSite1974.DEF = "hanim_r_acromion_pt";
HAnimSite1974.translation = new SFVec3f(new float[-0.15,1.222,-0.02]);
TouchSensor TouchSensor1975 = createNode("TouchSensor");
TouchSensor1975.description = "HAnimSite 20 hanim_r_acromion_pt";
HAnimSite1974.children = new MFNode();

HAnimSite1974.children[0] = TouchSensor1975;

Shape Shape1976 = createNode("Shape");
Appearance Appearance1977 = createNode("Appearance");
Material Material1978 = createNode("Material");
Material1978.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1977.material = Material1978;

Shape1976.appearance = Appearance1977;

IndexedFaceSet IndexedFaceSet1979 = createNode("IndexedFaceSet");
IndexedFaceSet1979.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1979.creaseAngle = 0.5;
IndexedFaceSet1979.solid = False;
ColorRGBA ColorRGBA1980 = createNode("ColorRGBA");
ColorRGBA1980.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1979.color = ColorRGBA1980;

Coordinate Coordinate1981 = createNode("Coordinate");
Coordinate1981.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1979.coord = Coordinate1981;

Shape1976.geometry = IndexedFaceSet1979;

HAnimSite1974.children[1] = Shape1976;

Billboard Billboard1982 = createNode("Billboard");
Billboard1982.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1983 = createNode("Shape");
Text Text1984 = createNode("Text");
Text1984.string = new MFString(new java.lang.String["20"]);
FontStyle FontStyle1985 = createNode("FontStyle");
FontStyle1985.size = 0.035;
Text1984.fontStyle = FontStyle1985;

Shape1983.geometry = Text1984;

Billboard1982.children = new MFNode();

Billboard1982.children[0] = Shape1983;

HAnimSite1974.children[2] = Billboard1982;

HAnimSegment1973.children = new MFNode();

HAnimSegment1973.children[0] = HAnimSite1974;

HAnimSite HAnimSite1986 = createNode("HAnimSite");
HAnimSite1986.name = "r_axilla_proximal";
HAnimSite1986.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite1986.translation = new SFVec3f(new float[-0.15,1.16,0.04]);
TouchSensor TouchSensor1987 = createNode("TouchSensor");
TouchSensor1987.description = "HAnimSite 21 hanim_r_axilla_proximal_pt";
HAnimSite1986.children = new MFNode();

HAnimSite1986.children[0] = TouchSensor1987;

Shape Shape1988 = createNode("Shape");
Appearance Appearance1989 = createNode("Appearance");
Material Material1990 = createNode("Material");
Material1990.diffuseColor = new SFColor(new float[1,1,1]);
Appearance1989.material = Material1990;

Shape1988.appearance = Appearance1989;

IndexedFaceSet IndexedFaceSet1991 = createNode("IndexedFaceSet");
IndexedFaceSet1991.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet1991.creaseAngle = 0.5;
IndexedFaceSet1991.solid = False;
ColorRGBA ColorRGBA1992 = createNode("ColorRGBA");
ColorRGBA1992.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet1991.color = ColorRGBA1992;

Coordinate Coordinate1993 = createNode("Coordinate");
Coordinate1993.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet1991.coord = Coordinate1993;

Shape1988.geometry = IndexedFaceSet1991;

HAnimSite1986.children[1] = Shape1988;

Billboard Billboard1994 = createNode("Billboard");
Billboard1994.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape1995 = createNode("Shape");
Text Text1996 = createNode("Text");
Text1996.string = new MFString(new java.lang.String["21"]);
FontStyle FontStyle1997 = createNode("FontStyle");
FontStyle1997.size = 0.035;
Text1996.fontStyle = FontStyle1997;

Shape1995.geometry = Text1996;

Billboard1994.children = new MFNode();

Billboard1994.children[0] = Shape1995;

HAnimSite1986.children[2] = Billboard1994;

HAnimSegment1973.children[1] = HAnimSite1986;

HAnimSite HAnimSite1998 = createNode("HAnimSite");
HAnimSite1998.name = "r_axilla_distal";
HAnimSite1998.DEF = "hanim_r_axilla_distal_pt";
HAnimSite1998.translation = new SFVec3f(new float[-0.17,1.14,0]);
TouchSensor TouchSensor1999 = createNode("TouchSensor");
TouchSensor1999.description = "HAnimSite 22 hanim_r_axilla_distal_pt";
HAnimSite1998.children = new MFNode();

HAnimSite1998.children[0] = TouchSensor1999;

Shape Shape2000 = createNode("Shape");
Appearance Appearance2001 = createNode("Appearance");
Material Material2002 = createNode("Material");
Material2002.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2001.material = Material2002;

Shape2000.appearance = Appearance2001;

IndexedFaceSet IndexedFaceSet2003 = createNode("IndexedFaceSet");
IndexedFaceSet2003.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2003.creaseAngle = 0.5;
IndexedFaceSet2003.solid = False;
ColorRGBA ColorRGBA2004 = createNode("ColorRGBA");
ColorRGBA2004.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2003.color = ColorRGBA2004;

Coordinate Coordinate2005 = createNode("Coordinate");
Coordinate2005.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2003.coord = Coordinate2005;

Shape2000.geometry = IndexedFaceSet2003;

HAnimSite1998.children[1] = Shape2000;

Billboard Billboard2006 = createNode("Billboard");
Billboard2006.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2007 = createNode("Shape");
Text Text2008 = createNode("Text");
Text2008.string = new MFString(new java.lang.String["22"]);
FontStyle FontStyle2009 = createNode("FontStyle");
FontStyle2009.size = 0.035;
Text2008.fontStyle = FontStyle2009;

Shape2007.geometry = Text2008;

Billboard2006.children = new MFNode();

Billboard2006.children[0] = Shape2007;

HAnimSite1998.children[2] = Billboard2006;

HAnimSegment1973.children[2] = HAnimSite1998;

HAnimSite HAnimSite2010 = createNode("HAnimSite");
HAnimSite2010.name = "r_axilla_posterior_folds";
HAnimSite2010.DEF = "hanim_r_axilla_posterior_folds_pt";
HAnimSite2010.translation = new SFVec3f(new float[-0.15,1.145,-0.04]);
TouchSensor TouchSensor2011 = createNode("TouchSensor");
TouchSensor2011.description = "HAnimSite 23 hanim_r_axilla_posterior_folds_pt";
HAnimSite2010.children = new MFNode();

HAnimSite2010.children[0] = TouchSensor2011;

Shape Shape2012 = createNode("Shape");
Appearance Appearance2013 = createNode("Appearance");
Material Material2014 = createNode("Material");
Material2014.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2013.material = Material2014;

Shape2012.appearance = Appearance2013;

IndexedFaceSet IndexedFaceSet2015 = createNode("IndexedFaceSet");
IndexedFaceSet2015.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2015.creaseAngle = 0.5;
IndexedFaceSet2015.solid = False;
ColorRGBA ColorRGBA2016 = createNode("ColorRGBA");
ColorRGBA2016.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2015.color = ColorRGBA2016;

Coordinate Coordinate2017 = createNode("Coordinate");
Coordinate2017.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2015.coord = Coordinate2017;

Shape2012.geometry = IndexedFaceSet2015;

HAnimSite2010.children[1] = Shape2012;

Billboard Billboard2018 = createNode("Billboard");
Billboard2018.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2019 = createNode("Shape");
Text Text2020 = createNode("Text");
Text2020.string = new MFString(new java.lang.String["23"]);
FontStyle FontStyle2021 = createNode("FontStyle");
FontStyle2021.size = 0.035;
Text2020.fontStyle = FontStyle2021;

Shape2019.geometry = Text2020;

Billboard2018.children = new MFNode();

Billboard2018.children[0] = Shape2019;

HAnimSite2010.children[2] = Billboard2018;

HAnimSegment1973.children[3] = HAnimSite2010;

Shape Shape2022 = createNode("Shape");
LineSet LineSet2023 = createNode("LineSet");
LineSet2023.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2024 = createNode("ColorRGBA");
ColorRGBA2024.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2023.color = ColorRGBA2024;

Coordinate Coordinate2025 = createNode("Coordinate");
Coordinate2025.point = new MFVec3f(new float[-0.1229,1.19182,-0.0129,-0.03847,1.2087,-0.0138]);
LineSet2023.coord = Coordinate2025;

Shape2022.geometry = LineSet2023;

HAnimSegment1973.children[4] = Shape2022;

HAnimJoint1972.children = new MFNode();

HAnimJoint1972.children[0] = HAnimSegment1973;

HAnimJoint HAnimJoint2026 = createNode("HAnimJoint");
HAnimJoint2026.name = "r_shoulder";
HAnimJoint2026.DEF = "hanim_r_shoulder";
HAnimJoint2026.center = new SFVec3f(new float[-0.1647,1.17855,-0.00327]);
HAnimJoint2026.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2026.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2027 = createNode("HAnimSegment");
HAnimSegment2027.name = "r_upperarm";
HAnimSegment2027.DEF = "hanim_r_upperarm";
HAnimSite HAnimSite2028 = createNode("HAnimSite");
HAnimSite2028.name = "r_humeral_lateral_epicondyle";
HAnimSite2028.DEF = "hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite2028.translation = new SFVec3f(new float[-0.2,0.95,-0.03]);
TouchSensor TouchSensor2029 = createNode("TouchSensor");
TouchSensor2029.description = "HAnimSite 66 hanim_r_humeral_lateral_epicondyle_pt";
HAnimSite2028.children = new MFNode();

HAnimSite2028.children[0] = TouchSensor2029;

Shape Shape2030 = createNode("Shape");
Appearance Appearance2031 = createNode("Appearance");
Material Material2032 = createNode("Material");
Material2032.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2031.material = Material2032;

Shape2030.appearance = Appearance2031;

IndexedFaceSet IndexedFaceSet2033 = createNode("IndexedFaceSet");
IndexedFaceSet2033.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2033.creaseAngle = 0.5;
IndexedFaceSet2033.solid = False;
ColorRGBA ColorRGBA2034 = createNode("ColorRGBA");
ColorRGBA2034.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2033.color = ColorRGBA2034;

Coordinate Coordinate2035 = createNode("Coordinate");
Coordinate2035.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2033.coord = Coordinate2035;

Shape2030.geometry = IndexedFaceSet2033;

HAnimSite2028.children[1] = Shape2030;

Billboard Billboard2036 = createNode("Billboard");
Billboard2036.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2037 = createNode("Shape");
Text Text2038 = createNode("Text");
Text2038.string = new MFString(new java.lang.String["66"]);
FontStyle FontStyle2039 = createNode("FontStyle");
FontStyle2039.size = 0.035;
Text2038.fontStyle = FontStyle2039;

Shape2037.geometry = Text2038;

Billboard2036.children = new MFNode();

Billboard2036.children[0] = Shape2037;

HAnimSite2028.children[2] = Billboard2036;

HAnimSegment2027.children = new MFNode();

HAnimSegment2027.children[0] = HAnimSite2028;

HAnimSite HAnimSite2040 = createNode("HAnimSite");
HAnimSite2040.name = "r_humeral_medial_epicondyle";
HAnimSite2040.DEF = "hanim_r_humeral_medial_epicondyle_pt";
HAnimSite2040.translation = new SFVec3f(new float[-0.18,0.93,-0.03]);
TouchSensor TouchSensor2041 = createNode("TouchSensor");
TouchSensor2041.description = "HAnimSite 67 hanim_r_humeral_medial_epicondyle_pt";
HAnimSite2040.children = new MFNode();

HAnimSite2040.children[0] = TouchSensor2041;

Shape Shape2042 = createNode("Shape");
Appearance Appearance2043 = createNode("Appearance");
Material Material2044 = createNode("Material");
Material2044.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2043.material = Material2044;

Shape2042.appearance = Appearance2043;

IndexedFaceSet IndexedFaceSet2045 = createNode("IndexedFaceSet");
IndexedFaceSet2045.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2045.creaseAngle = 0.5;
IndexedFaceSet2045.solid = False;
ColorRGBA ColorRGBA2046 = createNode("ColorRGBA");
ColorRGBA2046.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2045.color = ColorRGBA2046;

Coordinate Coordinate2047 = createNode("Coordinate");
Coordinate2047.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2045.coord = Coordinate2047;

Shape2042.geometry = IndexedFaceSet2045;

HAnimSite2040.children[1] = Shape2042;

Billboard Billboard2048 = createNode("Billboard");
Billboard2048.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2049 = createNode("Shape");
Text Text2050 = createNode("Text");
Text2050.string = new MFString(new java.lang.String["67"]);
FontStyle FontStyle2051 = createNode("FontStyle");
FontStyle2051.size = 0.035;
Text2050.fontStyle = FontStyle2051;

Shape2049.geometry = Text2050;

Billboard2048.children = new MFNode();

Billboard2048.children[0] = Shape2049;

HAnimSite2040.children[2] = Billboard2048;

HAnimSegment2027.children[1] = HAnimSite2040;

HAnimSite HAnimSite2052 = createNode("HAnimSite");
HAnimSite2052.name = "r_radiale";
HAnimSite2052.DEF = "hanim_r_radiale_pt";
HAnimSite2052.translation = new SFVec3f(new float[-0.2,0.91,-0.03]);
TouchSensor TouchSensor2053 = createNode("TouchSensor");
TouchSensor2053.description = "HAnimSite 72 hanim_r_radiale_pt";
HAnimSite2052.children = new MFNode();

HAnimSite2052.children[0] = TouchSensor2053;

Shape Shape2054 = createNode("Shape");
Appearance Appearance2055 = createNode("Appearance");
Material Material2056 = createNode("Material");
Material2056.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2055.material = Material2056;

Shape2054.appearance = Appearance2055;

IndexedFaceSet IndexedFaceSet2057 = createNode("IndexedFaceSet");
IndexedFaceSet2057.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2057.creaseAngle = 0.5;
IndexedFaceSet2057.solid = False;
ColorRGBA ColorRGBA2058 = createNode("ColorRGBA");
ColorRGBA2058.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2057.color = ColorRGBA2058;

Coordinate Coordinate2059 = createNode("Coordinate");
Coordinate2059.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2057.coord = Coordinate2059;

Shape2054.geometry = IndexedFaceSet2057;

HAnimSite2052.children[1] = Shape2054;

Billboard Billboard2060 = createNode("Billboard");
Billboard2060.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2061 = createNode("Shape");
Text Text2062 = createNode("Text");
Text2062.string = new MFString(new java.lang.String["72"]);
FontStyle FontStyle2063 = createNode("FontStyle");
FontStyle2063.size = 0.035;
Text2062.fontStyle = FontStyle2063;

Shape2061.geometry = Text2062;

Billboard2060.children = new MFNode();

Billboard2060.children[0] = Shape2061;

HAnimSite2052.children[2] = Billboard2060;

HAnimSegment2027.children[2] = HAnimSite2052;

HAnimSite HAnimSite2064 = createNode("HAnimSite");
HAnimSite2064.name = "r_bideltoid";
HAnimSite2064.DEF = "hanim_r_bideltoid_pt";
HAnimSite2064.translation = new SFVec3f(new float[-0.225,1.185,0]);
TouchSensor TouchSensor2065 = createNode("TouchSensor");
TouchSensor2065.description = "HAnimSite 97 hanim_r_bideltoid_pt";
HAnimSite2064.children = new MFNode();

HAnimSite2064.children[0] = TouchSensor2065;

Shape Shape2066 = createNode("Shape");
Appearance Appearance2067 = createNode("Appearance");
Material Material2068 = createNode("Material");
Material2068.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2067.material = Material2068;

Shape2066.appearance = Appearance2067;

IndexedFaceSet IndexedFaceSet2069 = createNode("IndexedFaceSet");
IndexedFaceSet2069.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2069.creaseAngle = 0.5;
IndexedFaceSet2069.solid = False;
ColorRGBA ColorRGBA2070 = createNode("ColorRGBA");
ColorRGBA2070.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2069.color = ColorRGBA2070;

Coordinate Coordinate2071 = createNode("Coordinate");
Coordinate2071.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2069.coord = Coordinate2071;

Shape2066.geometry = IndexedFaceSet2069;

HAnimSite2064.children[1] = Shape2066;

Billboard Billboard2072 = createNode("Billboard");
Billboard2072.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2073 = createNode("Shape");
Text Text2074 = createNode("Text");
Text2074.string = new MFString(new java.lang.String["97"]);
FontStyle FontStyle2075 = createNode("FontStyle");
FontStyle2075.size = 0.035;
Text2074.fontStyle = FontStyle2075;

Shape2073.geometry = Text2074;

Billboard2072.children = new MFNode();

Billboard2072.children[0] = Shape2073;

HAnimSite2064.children[2] = Billboard2072;

HAnimSegment2027.children[3] = HAnimSite2064;

Shape Shape2076 = createNode("Shape");
LineSet LineSet2077 = createNode("LineSet");
LineSet2077.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2078 = createNode("ColorRGBA");
ColorRGBA2078.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2077.color = ColorRGBA2078;

Coordinate Coordinate2079 = createNode("Coordinate");
Coordinate2079.point = new MFVec3f(new float[-0.1647,1.17855,-0.00327,-0.1229,1.19182,-0.0129]);
LineSet2077.coord = Coordinate2079;

Shape2076.geometry = LineSet2077;

HAnimSegment2027.children[4] = Shape2076;

HAnimJoint2026.children = new MFNode();

HAnimJoint2026.children[0] = HAnimSegment2027;

HAnimJoint HAnimJoint2080 = createNode("HAnimJoint");
HAnimJoint2080.name = "r_elbow";
HAnimJoint2080.DEF = "hanim_r_elbow";
HAnimJoint2080.center = new SFVec3f(new float[-0.1817,0.9288,-0.00564]);
HAnimJoint2080.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2080.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2081 = createNode("HAnimSegment");
HAnimSegment2081.name = "r_forearm";
HAnimSegment2081.DEF = "hanim_r_forearm";
HAnimSite HAnimSite2082 = createNode("HAnimSite");
HAnimSite2082.name = "r_radial_styloid";
HAnimSite2082.DEF = "hanim_r_radial_styloid_pt";
HAnimSite2082.translation = new SFVec3f(new float[-0.18,0.725,0.025]);
TouchSensor TouchSensor2083 = createNode("TouchSensor");
TouchSensor2083.description = "HAnimSite 74 hanim_r_radial_styloid_pt";
HAnimSite2082.children = new MFNode();

HAnimSite2082.children[0] = TouchSensor2083;

Shape Shape2084 = createNode("Shape");
Appearance Appearance2085 = createNode("Appearance");
Material Material2086 = createNode("Material");
Material2086.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2085.material = Material2086;

Shape2084.appearance = Appearance2085;

IndexedFaceSet IndexedFaceSet2087 = createNode("IndexedFaceSet");
IndexedFaceSet2087.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2087.creaseAngle = 0.5;
IndexedFaceSet2087.solid = False;
ColorRGBA ColorRGBA2088 = createNode("ColorRGBA");
ColorRGBA2088.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2087.color = ColorRGBA2088;

Coordinate Coordinate2089 = createNode("Coordinate");
Coordinate2089.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2087.coord = Coordinate2089;

Shape2084.geometry = IndexedFaceSet2087;

HAnimSite2082.children[1] = Shape2084;

Billboard Billboard2090 = createNode("Billboard");
Billboard2090.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2091 = createNode("Shape");
Text Text2092 = createNode("Text");
Text2092.string = new MFString(new java.lang.String["74"]);
FontStyle FontStyle2093 = createNode("FontStyle");
FontStyle2093.size = 0.035;
Text2092.fontStyle = FontStyle2093;

Shape2091.geometry = Text2092;

Billboard2090.children = new MFNode();

Billboard2090.children[0] = Shape2091;

HAnimSite2082.children[2] = Billboard2090;

HAnimSegment2081.children = new MFNode();

HAnimSegment2081.children[0] = HAnimSite2082;

HAnimSite HAnimSite2094 = createNode("HAnimSite");
HAnimSite2094.name = "r_olecranon";
HAnimSite2094.DEF = "hanim_r_olecranon_pt";
HAnimSite2094.translation = new SFVec3f(new float[-0.2,0.92,-0.03]);
TouchSensor TouchSensor2095 = createNode("TouchSensor");
TouchSensor2095.description = "HAnimSite 68 hanim_r_olecranon_pt";
HAnimSite2094.children = new MFNode();

HAnimSite2094.children[0] = TouchSensor2095;

Shape Shape2096 = createNode("Shape");
Appearance Appearance2097 = createNode("Appearance");
Material Material2098 = createNode("Material");
Material2098.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2097.material = Material2098;

Shape2096.appearance = Appearance2097;

IndexedFaceSet IndexedFaceSet2099 = createNode("IndexedFaceSet");
IndexedFaceSet2099.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2099.creaseAngle = 0.5;
IndexedFaceSet2099.solid = False;
ColorRGBA ColorRGBA2100 = createNode("ColorRGBA");
ColorRGBA2100.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2099.color = ColorRGBA2100;

Coordinate Coordinate2101 = createNode("Coordinate");
Coordinate2101.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2099.coord = Coordinate2101;

Shape2096.geometry = IndexedFaceSet2099;

HAnimSite2094.children[1] = Shape2096;

Billboard Billboard2102 = createNode("Billboard");
Billboard2102.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2103 = createNode("Shape");
Text Text2104 = createNode("Text");
Text2104.string = new MFString(new java.lang.String["68"]);
FontStyle FontStyle2105 = createNode("FontStyle");
FontStyle2105.size = 0.035;
Text2104.fontStyle = FontStyle2105;

Shape2103.geometry = Text2104;

Billboard2102.children = new MFNode();

Billboard2102.children[0] = Shape2103;

HAnimSite2094.children[2] = Billboard2102;

HAnimSegment2081.children[1] = HAnimSite2094;

Shape Shape2106 = createNode("Shape");
LineSet LineSet2107 = createNode("LineSet");
LineSet2107.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2108 = createNode("ColorRGBA");
ColorRGBA2108.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2107.color = ColorRGBA2108;

Coordinate Coordinate2109 = createNode("Coordinate");
Coordinate2109.point = new MFVec3f(new float[-0.1817,0.9288,-0.00564,-0.1647,1.17855,-0.00327]);
LineSet2107.coord = Coordinate2109;

Shape2106.geometry = LineSet2107;

HAnimSegment2081.children[2] = Shape2106;

HAnimJoint2080.children = new MFNode();

HAnimJoint2080.children[0] = HAnimSegment2081;

HAnimJoint HAnimJoint2110 = createNode("HAnimJoint");
HAnimJoint2110.name = "r_radiocarpal";
HAnimJoint2110.DEF = "hanim_r_radiocarpal";
HAnimJoint2110.center = new SFVec3f(new float[-0.1816,0.7242,-0.005]);
HAnimJoint2110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2110.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2111 = createNode("HAnimSegment");
HAnimSegment2111.name = "r_carpal";
HAnimSegment2111.DEF = "hanim_r_carpal";
HAnimSite HAnimSite2112 = createNode("HAnimSite");
HAnimSite2112.name = "r_ulnar_styloid";
HAnimSite2112.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite2112.translation = new SFVec3f(new float[-0.2,0.725,0]);
TouchSensor TouchSensor2113 = createNode("TouchSensor");
TouchSensor2113.description = "HAnimSite 73 hanim_r_ulnar_styloid_pt";
HAnimSite2112.children = new MFNode();

HAnimSite2112.children[0] = TouchSensor2113;

Shape Shape2114 = createNode("Shape");
Appearance Appearance2115 = createNode("Appearance");
Material Material2116 = createNode("Material");
Material2116.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2115.material = Material2116;

Shape2114.appearance = Appearance2115;

IndexedFaceSet IndexedFaceSet2117 = createNode("IndexedFaceSet");
IndexedFaceSet2117.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2117.creaseAngle = 0.5;
IndexedFaceSet2117.solid = False;
ColorRGBA ColorRGBA2118 = createNode("ColorRGBA");
ColorRGBA2118.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2117.color = ColorRGBA2118;

Coordinate Coordinate2119 = createNode("Coordinate");
Coordinate2119.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2117.coord = Coordinate2119;

Shape2114.geometry = IndexedFaceSet2117;

HAnimSite2112.children[1] = Shape2114;

Billboard Billboard2120 = createNode("Billboard");
Billboard2120.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2121 = createNode("Shape");
Text Text2122 = createNode("Text");
Text2122.string = new MFString(new java.lang.String["73"]);
FontStyle FontStyle2123 = createNode("FontStyle");
FontStyle2123.size = 0.035;
Text2122.fontStyle = FontStyle2123;

Shape2121.geometry = Text2122;

Billboard2120.children = new MFNode();

Billboard2120.children[0] = Shape2121;

HAnimSite2112.children[2] = Billboard2120;

HAnimSegment2111.children = new MFNode();

HAnimSegment2111.children[0] = HAnimSite2112;

Shape Shape2124 = createNode("Shape");
LineSet LineSet2125 = createNode("LineSet");
LineSet2125.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2126 = createNode("ColorRGBA");
ColorRGBA2126.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2125.color = ColorRGBA2126;

Coordinate Coordinate2127 = createNode("Coordinate");
Coordinate2127.point = new MFVec3f(new float[-0.1816,0.7242,-0.005,-0.1817,0.9288,-0.00564]);
LineSet2125.coord = Coordinate2127;

Shape2124.geometry = LineSet2125;

HAnimSegment2111.children[1] = Shape2124;

HAnimJoint2110.children = new MFNode();

HAnimJoint2110.children[0] = HAnimSegment2111;

HAnimJoint HAnimJoint2128 = createNode("HAnimJoint");
HAnimJoint2128.name = "r_midcarpal_1";
HAnimJoint2128.DEF = "hanim_r_midcarpal_1";
HAnimJoint2128.center = new SFVec3f(new float[-0.18097,0.70605,0.0193]);
HAnimJoint2128.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2128.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2129 = createNode("HAnimSegment");
HAnimSegment2129.name = "r_trapezium";
HAnimSegment2129.DEF = "hanim_r_trapezium";
Shape Shape2130 = createNode("Shape");
LineSet LineSet2131 = createNode("LineSet");
LineSet2131.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2132 = createNode("ColorRGBA");
ColorRGBA2132.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2131.color = ColorRGBA2132;

Coordinate Coordinate2133 = createNode("Coordinate");
Coordinate2133.point = new MFVec3f(new float[-0.18097,0.70605,0.0193,-0.1816,0.7242,-0.005]);
LineSet2131.coord = Coordinate2133;

Shape2130.geometry = LineSet2131;

HAnimSegment2129.children = new MFNode();

HAnimSegment2129.children[0] = Shape2130;

HAnimJoint2128.children = new MFNode();

HAnimJoint2128.children[0] = HAnimSegment2129;

HAnimJoint HAnimJoint2134 = createNode("HAnimJoint");
HAnimJoint2134.name = "r_carpometacarpal_1";
HAnimJoint2134.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint2134.center = new SFVec3f(new float[-0.18,0.69255,0.02598]);
HAnimJoint2134.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2134.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2135 = createNode("HAnimSegment");
HAnimSegment2135.name = "r_metacarpal_1";
HAnimSegment2135.DEF = "hanim_r_metacarpal_1";
HAnimSite HAnimSite2136 = createNode("HAnimSite");
HAnimSite2136.name = "r_metacarpal_phalanx_2";
HAnimSite2136.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite2136.translation = new SFVec3f(new float[-0.2,0.665,0.012]);
TouchSensor TouchSensor2137 = createNode("TouchSensor");
TouchSensor2137.description = "HAnimSite 78 hanim_r_metacarpal_phalanx_2_pt";
HAnimSite2136.children = new MFNode();

HAnimSite2136.children[0] = TouchSensor2137;

Shape Shape2138 = createNode("Shape");
Appearance Appearance2139 = createNode("Appearance");
Material Material2140 = createNode("Material");
Material2140.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2139.material = Material2140;

Shape2138.appearance = Appearance2139;

IndexedFaceSet IndexedFaceSet2141 = createNode("IndexedFaceSet");
IndexedFaceSet2141.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2141.creaseAngle = 0.5;
IndexedFaceSet2141.solid = False;
ColorRGBA ColorRGBA2142 = createNode("ColorRGBA");
ColorRGBA2142.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2141.color = ColorRGBA2142;

Coordinate Coordinate2143 = createNode("Coordinate");
Coordinate2143.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2141.coord = Coordinate2143;

Shape2138.geometry = IndexedFaceSet2141;

HAnimSite2136.children[1] = Shape2138;

Billboard Billboard2144 = createNode("Billboard");
Billboard2144.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2145 = createNode("Shape");
Text Text2146 = createNode("Text");
Text2146.string = new MFString(new java.lang.String["78"]);
FontStyle FontStyle2147 = createNode("FontStyle");
FontStyle2147.size = 0.035;
Text2146.fontStyle = FontStyle2147;

Shape2145.geometry = Text2146;

Billboard2144.children = new MFNode();

Billboard2144.children[0] = Shape2145;

HAnimSite2136.children[2] = Billboard2144;

HAnimSegment2135.children = new MFNode();

HAnimSegment2135.children[0] = HAnimSite2136;

Shape Shape2148 = createNode("Shape");
LineSet LineSet2149 = createNode("LineSet");
LineSet2149.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2150 = createNode("ColorRGBA");
ColorRGBA2150.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2149.color = ColorRGBA2150;

Coordinate Coordinate2151 = createNode("Coordinate");
Coordinate2151.point = new MFVec3f(new float[-0.18,0.69255,0.02598,-0.18097,0.70605,0.0193]);
LineSet2149.coord = Coordinate2151;

Shape2148.geometry = LineSet2149;

HAnimSegment2135.children[1] = Shape2148;

HAnimJoint2134.children = new MFNode();

HAnimJoint2134.children[0] = HAnimSegment2135;

HAnimJoint HAnimJoint2152 = createNode("HAnimJoint");
HAnimJoint2152.name = "r_metacarpophalangeal_1";
HAnimJoint2152.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint2152.center = new SFVec3f(new float[-0.18065,0.67275,0.03577]);
HAnimJoint2152.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2152.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2153 = createNode("HAnimSegment");
HAnimSegment2153.name = "r_carpal_proximal_phalanx_1";
HAnimSegment2153.DEF = "hanim_r_carpal_proximal_phalanx_1";
Shape Shape2154 = createNode("Shape");
LineSet LineSet2155 = createNode("LineSet");
LineSet2155.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2156 = createNode("ColorRGBA");
ColorRGBA2156.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2155.color = ColorRGBA2156;

Coordinate Coordinate2157 = createNode("Coordinate");
Coordinate2157.point = new MFVec3f(new float[-0.18065,0.67275,0.03577,-0.18,0.69255,0.02598]);
LineSet2155.coord = Coordinate2157;

Shape2154.geometry = LineSet2155;

HAnimSegment2153.children = new MFNode();

HAnimSegment2153.children[0] = Shape2154;

HAnimJoint2152.children = new MFNode();

HAnimJoint2152.children[0] = HAnimSegment2153;

HAnimJoint HAnimJoint2158 = createNode("HAnimJoint");
HAnimJoint2158.name = "r_carpal_interphalangeal_1";
HAnimJoint2158.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint2158.center = new SFVec3f(new float[-0.18227,0.654,0.0496]);
HAnimJoint2158.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2158.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2159 = createNode("HAnimSegment");
HAnimSegment2159.name = "r_carpal_distal_phalanx_1";
HAnimSegment2159.DEF = "hanim_r_carpal_distal_phalanx_1";
HAnimSite HAnimSite2160 = createNode("HAnimSite");
HAnimSite2160.name = "r_carpal_distal_phalanx_1";
HAnimSite2160.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite2160.translation = new SFVec3f(new float[-0.18,0.64,0.06]);
TouchSensor TouchSensor2161 = createNode("TouchSensor");
TouchSensor2161.description = "HAnimSite 106 hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite2160.children = new MFNode();

HAnimSite2160.children[0] = TouchSensor2161;

Shape Shape2162 = createNode("Shape");
Appearance Appearance2163 = createNode("Appearance");
Material Material2164 = createNode("Material");
Material2164.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2163.material = Material2164;

Shape2162.appearance = Appearance2163;

IndexedFaceSet IndexedFaceSet2165 = createNode("IndexedFaceSet");
IndexedFaceSet2165.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2165.creaseAngle = 0.5;
IndexedFaceSet2165.solid = False;
ColorRGBA ColorRGBA2166 = createNode("ColorRGBA");
ColorRGBA2166.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2165.color = ColorRGBA2166;

Coordinate Coordinate2167 = createNode("Coordinate");
Coordinate2167.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2165.coord = Coordinate2167;

Shape2162.geometry = IndexedFaceSet2165;

HAnimSite2160.children[1] = Shape2162;

Billboard Billboard2168 = createNode("Billboard");
Billboard2168.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2169 = createNode("Shape");
Text Text2170 = createNode("Text");
Text2170.string = new MFString(new java.lang.String["106"]);
FontStyle FontStyle2171 = createNode("FontStyle");
FontStyle2171.size = 0.035;
Text2170.fontStyle = FontStyle2171;

Shape2169.geometry = Text2170;

Billboard2168.children = new MFNode();

Billboard2168.children[0] = Shape2169;

HAnimSite2160.children[2] = Billboard2168;

HAnimSegment2159.children = new MFNode();

HAnimSegment2159.children[0] = HAnimSite2160;

Shape Shape2172 = createNode("Shape");
LineSet LineSet2173 = createNode("LineSet");
LineSet2173.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2174 = createNode("ColorRGBA");
ColorRGBA2174.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2173.color = ColorRGBA2174;

Coordinate Coordinate2175 = createNode("Coordinate");
Coordinate2175.point = new MFVec3f(new float[-0.18227,0.654,0.0496,-0.18065,0.67275,0.03577]);
LineSet2173.coord = Coordinate2175;

Shape2172.geometry = LineSet2173;

HAnimSegment2159.children[1] = Shape2172;

HAnimJoint2158.children = new MFNode();

HAnimJoint2158.children[0] = HAnimSegment2159;

HAnimJoint2152.children[1] = HAnimJoint2158;

HAnimJoint2134.children[1] = HAnimJoint2152;

HAnimJoint2128.children[1] = HAnimJoint2134;

HAnimJoint2110.children[1] = HAnimJoint2128;

HAnimJoint HAnimJoint2176 = createNode("HAnimJoint");
HAnimJoint2176.name = "r_midcarpal_2";
HAnimJoint2176.DEF = "hanim_r_midcarpal_2";
HAnimJoint2176.center = new SFVec3f(new float[-0.18097,0.70695,0.0084]);
HAnimJoint2176.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2176.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2177 = createNode("HAnimSegment");
HAnimSegment2177.name = "r_trapezoid";
HAnimSegment2177.DEF = "hanim_r_trapezoid";
Shape Shape2178 = createNode("Shape");
LineSet LineSet2179 = createNode("LineSet");
LineSet2179.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2180 = createNode("ColorRGBA");
ColorRGBA2180.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2179.color = ColorRGBA2180;

Coordinate Coordinate2181 = createNode("Coordinate");
Coordinate2181.point = new MFVec3f(new float[-0.18097,0.70695,0.0084,-0.1816,0.7242,-0.005]);
LineSet2179.coord = Coordinate2181;

Shape2178.geometry = LineSet2179;

HAnimSegment2177.children = new MFNode();

HAnimSegment2177.children[0] = Shape2178;

HAnimJoint2176.children = new MFNode();

HAnimJoint2176.children[0] = HAnimSegment2177;

HAnimJoint HAnimJoint2182 = createNode("HAnimJoint");
HAnimJoint2182.name = "r_carpometacarpal_2";
HAnimJoint2182.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint2182.center = new SFVec3f(new float[-0.1809,0.6876,0.0097]);
HAnimJoint2182.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2182.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2183 = createNode("HAnimSegment");
HAnimSegment2183.name = "r_metacarpal_2";
HAnimSegment2183.DEF = "hanim_r_metacarpal_2";
Shape Shape2184 = createNode("Shape");
LineSet LineSet2185 = createNode("LineSet");
LineSet2185.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2186 = createNode("ColorRGBA");
ColorRGBA2186.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2185.color = ColorRGBA2186;

Coordinate Coordinate2187 = createNode("Coordinate");
Coordinate2187.point = new MFVec3f(new float[-0.1809,0.6876,0.0097,-0.18097,0.70695,0.0084]);
LineSet2185.coord = Coordinate2187;

Shape2184.geometry = LineSet2185;

HAnimSegment2183.children = new MFNode();

HAnimSegment2183.children[0] = Shape2184;

HAnimJoint2182.children = new MFNode();

HAnimJoint2182.children[0] = HAnimSegment2183;

HAnimJoint HAnimJoint2188 = createNode("HAnimJoint");
HAnimJoint2188.name = "r_metacarpophalangeal_2";
HAnimJoint2188.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint2188.center = new SFVec3f(new float[-0.18335,0.6372,0.01507]);
HAnimJoint2188.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2188.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2189 = createNode("HAnimSegment");
HAnimSegment2189.name = "r_carpal_proximal_phalanx_2";
HAnimSegment2189.DEF = "hanim_r_carpal_proximal_phalanx_2";
Shape Shape2190 = createNode("Shape");
LineSet LineSet2191 = createNode("LineSet");
LineSet2191.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2192 = createNode("ColorRGBA");
ColorRGBA2192.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2191.color = ColorRGBA2192;

Coordinate Coordinate2193 = createNode("Coordinate");
Coordinate2193.point = new MFVec3f(new float[-0.18335,0.6372,0.01507,-0.1809,0.6876,0.0097]);
LineSet2191.coord = Coordinate2193;

Shape2190.geometry = LineSet2191;

HAnimSegment2189.children = new MFNode();

HAnimSegment2189.children[0] = Shape2190;

HAnimJoint2188.children = new MFNode();

HAnimJoint2188.children[0] = HAnimSegment2189;

HAnimJoint HAnimJoint2194 = createNode("HAnimJoint");
HAnimJoint2194.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint2194.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint2194.center = new SFVec3f(new float[-0.1813,0.6068,0.01418]);
HAnimJoint2194.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2194.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2195 = createNode("HAnimSegment");
HAnimSegment2195.name = "r_carpal_middle_phalanx_2";
HAnimSegment2195.DEF = "hanim_r_carpal_middle_phalanx_2";
Shape Shape2196 = createNode("Shape");
LineSet LineSet2197 = createNode("LineSet");
LineSet2197.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2198 = createNode("ColorRGBA");
ColorRGBA2198.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2197.color = ColorRGBA2198;

Coordinate Coordinate2199 = createNode("Coordinate");
Coordinate2199.point = new MFVec3f(new float[-0.1813,0.6068,0.01418,-0.18335,0.6372,0.01507]);
LineSet2197.coord = Coordinate2199;

Shape2196.geometry = LineSet2197;

HAnimSegment2195.children = new MFNode();

HAnimSegment2195.children[0] = Shape2196;

HAnimJoint2194.children = new MFNode();

HAnimJoint2194.children[0] = HAnimSegment2195;

HAnimJoint HAnimJoint2200 = createNode("HAnimJoint");
HAnimJoint2200.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint2200.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint2200.center = new SFVec3f(new float[-0.1803,0.5816,0.01338]);
HAnimJoint2200.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2200.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2201 = createNode("HAnimSegment");
HAnimSegment2201.name = "r_carpal_distal_phalanx_2";
HAnimSegment2201.DEF = "hanim_r_carpal_distal_phalanx_2";
HAnimSite HAnimSite2202 = createNode("HAnimSite");
HAnimSite2202.name = "r_dactylion";
HAnimSite2202.DEF = "hanim_r_dactylion_pt";
HAnimSite2202.translation = new SFVec3f(new float[-0.17,0.558,0.017]);
TouchSensor TouchSensor2203 = createNode("TouchSensor");
TouchSensor2203.description = "HAnimSite 61 hanim_r_dactylion_pt";
HAnimSite2202.children = new MFNode();

HAnimSite2202.children[0] = TouchSensor2203;

Shape Shape2204 = createNode("Shape");
Appearance Appearance2205 = createNode("Appearance");
Material Material2206 = createNode("Material");
Material2206.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2205.material = Material2206;

Shape2204.appearance = Appearance2205;

IndexedFaceSet IndexedFaceSet2207 = createNode("IndexedFaceSet");
IndexedFaceSet2207.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2207.creaseAngle = 0.5;
IndexedFaceSet2207.solid = False;
ColorRGBA ColorRGBA2208 = createNode("ColorRGBA");
ColorRGBA2208.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2207.color = ColorRGBA2208;

Coordinate Coordinate2209 = createNode("Coordinate");
Coordinate2209.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2207.coord = Coordinate2209;

Shape2204.geometry = IndexedFaceSet2207;

HAnimSite2202.children[1] = Shape2204;

Billboard Billboard2210 = createNode("Billboard");
Billboard2210.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2211 = createNode("Shape");
Text Text2212 = createNode("Text");
Text2212.string = new MFString(new java.lang.String["61"]);
FontStyle FontStyle2213 = createNode("FontStyle");
FontStyle2213.size = 0.035;
Text2212.fontStyle = FontStyle2213;

Shape2211.geometry = Text2212;

Billboard2210.children = new MFNode();

Billboard2210.children[0] = Shape2211;

HAnimSite2202.children[2] = Billboard2210;

HAnimSegment2201.children = new MFNode();

HAnimSegment2201.children[0] = HAnimSite2202;

HAnimSite HAnimSite2214 = createNode("HAnimSite");
HAnimSite2214.name = "r_carpal_distal_phalanx_2";
HAnimSite2214.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite2214.translation = new SFVec3f(new float[-0.172,0.558,0.017]);
TouchSensor TouchSensor2215 = createNode("TouchSensor");
TouchSensor2215.description = "HAnimSite 107 hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite2214.children = new MFNode();

HAnimSite2214.children[0] = TouchSensor2215;

Shape Shape2216 = createNode("Shape");
Appearance Appearance2217 = createNode("Appearance");
Material Material2218 = createNode("Material");
Material2218.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2217.material = Material2218;

Shape2216.appearance = Appearance2217;

IndexedFaceSet IndexedFaceSet2219 = createNode("IndexedFaceSet");
IndexedFaceSet2219.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2219.creaseAngle = 0.5;
IndexedFaceSet2219.solid = False;
ColorRGBA ColorRGBA2220 = createNode("ColorRGBA");
ColorRGBA2220.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2219.color = ColorRGBA2220;

Coordinate Coordinate2221 = createNode("Coordinate");
Coordinate2221.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2219.coord = Coordinate2221;

Shape2216.geometry = IndexedFaceSet2219;

HAnimSite2214.children[1] = Shape2216;

Billboard Billboard2222 = createNode("Billboard");
Billboard2222.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2223 = createNode("Shape");
Text Text2224 = createNode("Text");
Text2224.string = new MFString(new java.lang.String["107"]);
FontStyle FontStyle2225 = createNode("FontStyle");
FontStyle2225.size = 0.035;
Text2224.fontStyle = FontStyle2225;

Shape2223.geometry = Text2224;

Billboard2222.children = new MFNode();

Billboard2222.children[0] = Shape2223;

HAnimSite2214.children[2] = Billboard2222;

HAnimSegment2201.children[1] = HAnimSite2214;

Shape Shape2226 = createNode("Shape");
LineSet LineSet2227 = createNode("LineSet");
LineSet2227.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2228 = createNode("ColorRGBA");
ColorRGBA2228.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2227.color = ColorRGBA2228;

Coordinate Coordinate2229 = createNode("Coordinate");
Coordinate2229.point = new MFVec3f(new float[-0.1803,0.5816,0.01338,-0.1813,0.6068,0.01418]);
LineSet2227.coord = Coordinate2229;

Shape2226.geometry = LineSet2227;

HAnimSegment2201.children[2] = Shape2226;

HAnimJoint2200.children = new MFNode();

HAnimJoint2200.children[0] = HAnimSegment2201;

HAnimJoint2194.children[1] = HAnimJoint2200;

HAnimJoint2188.children[1] = HAnimJoint2194;

HAnimJoint2182.children[1] = HAnimJoint2188;

HAnimJoint2176.children[1] = HAnimJoint2182;

HAnimJoint2110.children[2] = HAnimJoint2176;

HAnimJoint HAnimJoint2230 = createNode("HAnimJoint");
HAnimJoint2230.name = "r_midcarpal_3";
HAnimJoint2230.DEF = "hanim_r_midcarpal_3";
HAnimJoint2230.center = new SFVec3f(new float[-0.18072,0.708525,-0.004797]);
HAnimJoint2230.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2230.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2231 = createNode("HAnimSegment");
HAnimSegment2231.name = "r_capitate";
HAnimSegment2231.DEF = "hanim_r_capitate";
Shape Shape2232 = createNode("Shape");
LineSet LineSet2233 = createNode("LineSet");
LineSet2233.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2234 = createNode("ColorRGBA");
ColorRGBA2234.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2233.color = ColorRGBA2234;

Coordinate Coordinate2235 = createNode("Coordinate");
Coordinate2235.point = new MFVec3f(new float[-0.18072,0.708525,-0.004797,-0.1816,0.7242,-0.005]);
LineSet2233.coord = Coordinate2235;

Shape2232.geometry = LineSet2233;

HAnimSegment2231.children = new MFNode();

HAnimSegment2231.children[0] = Shape2232;

HAnimJoint2230.children = new MFNode();

HAnimJoint2230.children[0] = HAnimSegment2231;

HAnimJoint HAnimJoint2236 = createNode("HAnimJoint");
HAnimJoint2236.name = "r_carpometacarpal_3";
HAnimJoint2236.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint2236.center = new SFVec3f(new float[-0.18072,0.6858,-0.00625]);
HAnimJoint2236.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2236.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2237 = createNode("HAnimSegment");
HAnimSegment2237.name = "r_metacarpal_3";
HAnimSegment2237.DEF = "hanim_r_metacarpal_3";
HAnimSite HAnimSite2238 = createNode("HAnimSite");
HAnimSite2238.name = "r_metacarpal_phalanx_3";
HAnimSite2238.DEF = "hanim_r_metacarpal_phalanx_3_pt";
HAnimSite2238.translation = new SFVec3f(new float[-0.2,0.665,0.016]);
TouchSensor TouchSensor2239 = createNode("TouchSensor");
TouchSensor2239.description = "HAnimSite 79 hanim_r_metacarpal_phalanx_3_pt";
HAnimSite2238.children = new MFNode();

HAnimSite2238.children[0] = TouchSensor2239;

Shape Shape2240 = createNode("Shape");
Appearance Appearance2241 = createNode("Appearance");
Material Material2242 = createNode("Material");
Material2242.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2241.material = Material2242;

Shape2240.appearance = Appearance2241;

IndexedFaceSet IndexedFaceSet2243 = createNode("IndexedFaceSet");
IndexedFaceSet2243.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2243.creaseAngle = 0.5;
IndexedFaceSet2243.solid = False;
ColorRGBA ColorRGBA2244 = createNode("ColorRGBA");
ColorRGBA2244.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2243.color = ColorRGBA2244;

Coordinate Coordinate2245 = createNode("Coordinate");
Coordinate2245.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2243.coord = Coordinate2245;

Shape2240.geometry = IndexedFaceSet2243;

HAnimSite2238.children[1] = Shape2240;

Billboard Billboard2246 = createNode("Billboard");
Billboard2246.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2247 = createNode("Shape");
Text Text2248 = createNode("Text");
Text2248.string = new MFString(new java.lang.String["79"]);
FontStyle FontStyle2249 = createNode("FontStyle");
FontStyle2249.size = 0.035;
Text2248.fontStyle = FontStyle2249;

Shape2247.geometry = Text2248;

Billboard2246.children = new MFNode();

Billboard2246.children[0] = Shape2247;

HAnimSite2238.children[2] = Billboard2246;

HAnimSegment2237.children = new MFNode();

HAnimSegment2237.children[0] = HAnimSite2238;

Shape Shape2250 = createNode("Shape");
LineSet LineSet2251 = createNode("LineSet");
LineSet2251.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2252 = createNode("ColorRGBA");
ColorRGBA2252.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2251.color = ColorRGBA2252;

Coordinate Coordinate2253 = createNode("Coordinate");
Coordinate2253.point = new MFVec3f(new float[-0.18072,0.6858,-0.00625,-0.18072,0.708525,-0.004797]);
LineSet2251.coord = Coordinate2253;

Shape2250.geometry = LineSet2251;

HAnimSegment2237.children[1] = Shape2250;

HAnimJoint2236.children = new MFNode();

HAnimJoint2236.children[0] = HAnimSegment2237;

HAnimJoint HAnimJoint2254 = createNode("HAnimJoint");
HAnimJoint2254.name = "r_metacarpophalangeal_3";
HAnimJoint2254.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint2254.center = new SFVec3f(new float[-0.1833,0.63495,-0.0039]);
HAnimJoint2254.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2254.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2255 = createNode("HAnimSegment");
HAnimSegment2255.name = "r_carpal_proximal_phalanx_3";
HAnimSegment2255.DEF = "hanim_r_carpal_proximal_phalanx_3";
Shape Shape2256 = createNode("Shape");
LineSet LineSet2257 = createNode("LineSet");
LineSet2257.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2258 = createNode("ColorRGBA");
ColorRGBA2258.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2257.color = ColorRGBA2258;

Coordinate Coordinate2259 = createNode("Coordinate");
Coordinate2259.point = new MFVec3f(new float[-0.1833,0.63495,-0.0039,-0.18072,0.6858,-0.00625]);
LineSet2257.coord = Coordinate2259;

Shape2256.geometry = LineSet2257;

HAnimSegment2255.children = new MFNode();

HAnimSegment2255.children[0] = Shape2256;

HAnimJoint2254.children = new MFNode();

HAnimJoint2254.children[0] = HAnimSegment2255;

HAnimJoint HAnimJoint2260 = createNode("HAnimJoint");
HAnimJoint2260.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint2260.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint2260.center = new SFVec3f(new float[-0.1813,0.6032,-0.0035]);
HAnimJoint2260.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2260.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2261 = createNode("HAnimSegment");
HAnimSegment2261.name = "r_carpal_middle_phalanx_3";
HAnimSegment2261.DEF = "hanim_r_carpal_middle_phalanx_3";
Shape Shape2262 = createNode("Shape");
LineSet LineSet2263 = createNode("LineSet");
LineSet2263.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2264 = createNode("ColorRGBA");
ColorRGBA2264.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2263.color = ColorRGBA2264;

Coordinate Coordinate2265 = createNode("Coordinate");
Coordinate2265.point = new MFVec3f(new float[-0.1813,0.6032,-0.0035,-0.1833,0.63495,-0.0039]);
LineSet2263.coord = Coordinate2265;

Shape2262.geometry = LineSet2263;

HAnimSegment2261.children = new MFNode();

HAnimSegment2261.children[0] = Shape2262;

HAnimJoint2260.children = new MFNode();

HAnimJoint2260.children[0] = HAnimSegment2261;

HAnimJoint HAnimJoint2266 = createNode("HAnimJoint");
HAnimJoint2266.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint2266.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint2266.center = new SFVec3f(new float[-0.18029,0.5753,-0.00375]);
HAnimJoint2266.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2266.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2267 = createNode("HAnimSegment");
HAnimSegment2267.name = "r_carpal_distal_phalanx_3";
HAnimSegment2267.DEF = "hanim_r_carpal_distal_phalanx_3";
HAnimSite HAnimSite2268 = createNode("HAnimSite");
HAnimSite2268.name = "r_carpal_distal_phalanx_3";
HAnimSite2268.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite2268.translation = new SFVec3f(new float[-0.17,0.555,-0.006]);
TouchSensor TouchSensor2269 = createNode("TouchSensor");
TouchSensor2269.description = "HAnimSite 108 hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite2268.children = new MFNode();

HAnimSite2268.children[0] = TouchSensor2269;

Shape Shape2270 = createNode("Shape");
Appearance Appearance2271 = createNode("Appearance");
Material Material2272 = createNode("Material");
Material2272.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2271.material = Material2272;

Shape2270.appearance = Appearance2271;

IndexedFaceSet IndexedFaceSet2273 = createNode("IndexedFaceSet");
IndexedFaceSet2273.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2273.creaseAngle = 0.5;
IndexedFaceSet2273.solid = False;
ColorRGBA ColorRGBA2274 = createNode("ColorRGBA");
ColorRGBA2274.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2273.color = ColorRGBA2274;

Coordinate Coordinate2275 = createNode("Coordinate");
Coordinate2275.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2273.coord = Coordinate2275;

Shape2270.geometry = IndexedFaceSet2273;

HAnimSite2268.children[1] = Shape2270;

Billboard Billboard2276 = createNode("Billboard");
Billboard2276.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2277 = createNode("Shape");
Text Text2278 = createNode("Text");
Text2278.string = new MFString(new java.lang.String["108"]);
FontStyle FontStyle2279 = createNode("FontStyle");
FontStyle2279.size = 0.035;
Text2278.fontStyle = FontStyle2279;

Shape2277.geometry = Text2278;

Billboard2276.children = new MFNode();

Billboard2276.children[0] = Shape2277;

HAnimSite2268.children[2] = Billboard2276;

HAnimSegment2267.children = new MFNode();

HAnimSegment2267.children[0] = HAnimSite2268;

Shape Shape2280 = createNode("Shape");
LineSet LineSet2281 = createNode("LineSet");
LineSet2281.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2282 = createNode("ColorRGBA");
ColorRGBA2282.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2281.color = ColorRGBA2282;

Coordinate Coordinate2283 = createNode("Coordinate");
Coordinate2283.point = new MFVec3f(new float[-0.18029,0.5753,-0.00375,-0.1813,0.6032,-0.0035]);
LineSet2281.coord = Coordinate2283;

Shape2280.geometry = LineSet2281;

HAnimSegment2267.children[1] = Shape2280;

HAnimJoint2266.children = new MFNode();

HAnimJoint2266.children[0] = HAnimSegment2267;

HAnimJoint2260.children[1] = HAnimJoint2266;

HAnimJoint2254.children[1] = HAnimJoint2260;

HAnimJoint2236.children[1] = HAnimJoint2254;

HAnimJoint2230.children[1] = HAnimJoint2236;

HAnimJoint2110.children[3] = HAnimJoint2230;

HAnimJoint HAnimJoint2284 = createNode("HAnimJoint");
HAnimJoint2284.name = "r_midcarpal_4_5";
HAnimJoint2284.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint2284.center = new SFVec3f(new float[-0.18072,0.70583,-0.02574]);
HAnimJoint2284.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2284.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2285 = createNode("HAnimSegment");
HAnimSegment2285.name = "r_hamate";
HAnimSegment2285.DEF = "hanim_r_hamate";
Shape Shape2286 = createNode("Shape");
LineSet LineSet2287 = createNode("LineSet");
LineSet2287.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2288 = createNode("ColorRGBA");
ColorRGBA2288.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2287.color = ColorRGBA2288;

Coordinate Coordinate2289 = createNode("Coordinate");
Coordinate2289.point = new MFVec3f(new float[-0.18072,0.70583,-0.02574,-0.1816,0.7242,-0.005]);
LineSet2287.coord = Coordinate2289;

Shape2286.geometry = LineSet2287;

HAnimSegment2285.children = new MFNode();

HAnimSegment2285.children[0] = Shape2286;

HAnimJoint2284.children = new MFNode();

HAnimJoint2284.children[0] = HAnimSegment2285;

HAnimJoint HAnimJoint2290 = createNode("HAnimJoint");
HAnimJoint2290.name = "r_carpometacarpal_4";
HAnimJoint2290.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint2290.center = new SFVec3f(new float[-0.18072,0.68625,-0.01992]);
HAnimJoint2290.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2290.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2291 = createNode("HAnimSegment");
HAnimSegment2291.name = "r_metacarpal_4";
HAnimSegment2291.DEF = "hanim_r_metacarpal_4";
Shape Shape2292 = createNode("Shape");
LineSet LineSet2293 = createNode("LineSet");
LineSet2293.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2294 = createNode("ColorRGBA");
ColorRGBA2294.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2293.color = ColorRGBA2294;

Coordinate Coordinate2295 = createNode("Coordinate");
Coordinate2295.point = new MFVec3f(new float[-0.18072,0.68625,-0.01992,-0.18072,0.70583,-0.02574]);
LineSet2293.coord = Coordinate2295;

Shape2292.geometry = LineSet2293;

HAnimSegment2291.children = new MFNode();

HAnimSegment2291.children[0] = Shape2292;

HAnimJoint2290.children = new MFNode();

HAnimJoint2290.children[0] = HAnimSegment2291;

HAnimJoint HAnimJoint2296 = createNode("HAnimJoint");
HAnimJoint2296.name = "r_metacarpophalangeal_4";
HAnimJoint2296.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint2296.center = new SFVec3f(new float[-0.1833,0.63405,-0.02144]);
HAnimJoint2296.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2296.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2297 = createNode("HAnimSegment");
HAnimSegment2297.name = "r_carpal_proximal_phalanx_4";
HAnimSegment2297.DEF = "hanim_r_carpal_proximal_phalanx_4";
Shape Shape2298 = createNode("Shape");
LineSet LineSet2299 = createNode("LineSet");
LineSet2299.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2300 = createNode("ColorRGBA");
ColorRGBA2300.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2299.color = ColorRGBA2300;

Coordinate Coordinate2301 = createNode("Coordinate");
Coordinate2301.point = new MFVec3f(new float[-0.1833,0.63405,-0.02144,-0.18072,0.68625,-0.01992]);
LineSet2299.coord = Coordinate2301;

Shape2298.geometry = LineSet2299;

HAnimSegment2297.children = new MFNode();

HAnimSegment2297.children[0] = Shape2298;

HAnimJoint2296.children = new MFNode();

HAnimJoint2296.children[0] = HAnimSegment2297;

HAnimJoint HAnimJoint2302 = createNode("HAnimJoint");
HAnimJoint2302.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint2302.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint2302.center = new SFVec3f(new float[-0.1813,0.6066,-0.02064]);
HAnimJoint2302.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2302.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2303 = createNode("HAnimSegment");
HAnimSegment2303.name = "r_carpal_middle_phalanx_4";
HAnimSegment2303.DEF = "hanim_r_carpal_middle_phalanx_4";
Shape Shape2304 = createNode("Shape");
LineSet LineSet2305 = createNode("LineSet");
LineSet2305.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2306 = createNode("ColorRGBA");
ColorRGBA2306.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2305.color = ColorRGBA2306;

Coordinate Coordinate2307 = createNode("Coordinate");
Coordinate2307.point = new MFVec3f(new float[-0.1813,0.6066,-0.02064,-0.1833,0.63405,-0.02144]);
LineSet2305.coord = Coordinate2307;

Shape2304.geometry = LineSet2305;

HAnimSegment2303.children = new MFNode();

HAnimSegment2303.children[0] = Shape2304;

HAnimJoint2302.children = new MFNode();

HAnimJoint2302.children[0] = HAnimSegment2303;

HAnimJoint HAnimJoint2308 = createNode("HAnimJoint");
HAnimJoint2308.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint2308.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint2308.center = new SFVec3f(new float[-0.18029,0.5807,-0.01978]);
HAnimJoint2308.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2308.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2309 = createNode("HAnimSegment");
HAnimSegment2309.name = "r_carpal_distal_phalanx_4";
HAnimSegment2309.DEF = "hanim_r_carpal_distal_phalanx_4";
HAnimSite HAnimSite2310 = createNode("HAnimSite");
HAnimSite2310.name = "r_carpal_distal_phalanx_4";
HAnimSite2310.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite2310.translation = new SFVec3f(new float[-0.172,0.559,-0.024]);
TouchSensor TouchSensor2311 = createNode("TouchSensor");
TouchSensor2311.description = "HAnimSite 109 hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite2310.children = new MFNode();

HAnimSite2310.children[0] = TouchSensor2311;

Shape Shape2312 = createNode("Shape");
Appearance Appearance2313 = createNode("Appearance");
Material Material2314 = createNode("Material");
Material2314.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2313.material = Material2314;

Shape2312.appearance = Appearance2313;

IndexedFaceSet IndexedFaceSet2315 = createNode("IndexedFaceSet");
IndexedFaceSet2315.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2315.creaseAngle = 0.5;
IndexedFaceSet2315.solid = False;
ColorRGBA ColorRGBA2316 = createNode("ColorRGBA");
ColorRGBA2316.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2315.color = ColorRGBA2316;

Coordinate Coordinate2317 = createNode("Coordinate");
Coordinate2317.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2315.coord = Coordinate2317;

Shape2312.geometry = IndexedFaceSet2315;

HAnimSite2310.children[1] = Shape2312;

Billboard Billboard2318 = createNode("Billboard");
Billboard2318.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2319 = createNode("Shape");
Text Text2320 = createNode("Text");
Text2320.string = new MFString(new java.lang.String["109"]);
FontStyle FontStyle2321 = createNode("FontStyle");
FontStyle2321.size = 0.035;
Text2320.fontStyle = FontStyle2321;

Shape2319.geometry = Text2320;

Billboard2318.children = new MFNode();

Billboard2318.children[0] = Shape2319;

HAnimSite2310.children[2] = Billboard2318;

HAnimSegment2309.children = new MFNode();

HAnimSegment2309.children[0] = HAnimSite2310;

Shape Shape2322 = createNode("Shape");
LineSet LineSet2323 = createNode("LineSet");
LineSet2323.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2324 = createNode("ColorRGBA");
ColorRGBA2324.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2323.color = ColorRGBA2324;

Coordinate Coordinate2325 = createNode("Coordinate");
Coordinate2325.point = new MFVec3f(new float[-0.18029,0.5807,-0.01978,-0.1813,0.6066,-0.02064]);
LineSet2323.coord = Coordinate2325;

Shape2322.geometry = LineSet2323;

HAnimSegment2309.children[1] = Shape2322;

HAnimJoint2308.children = new MFNode();

HAnimJoint2308.children[0] = HAnimSegment2309;

HAnimJoint2302.children[1] = HAnimJoint2308;

HAnimJoint2296.children[1] = HAnimJoint2302;

HAnimJoint2290.children[1] = HAnimJoint2296;

HAnimJoint2284.children[1] = HAnimJoint2290;

HAnimJoint2110.children[4] = HAnimJoint2284;

HAnimJoint HAnimJoint2326 = createNode("HAnimJoint");
HAnimJoint2326.name = "r_carpometacarpal_5";
HAnimJoint2326.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint2326.center = new SFVec3f(new float[-0.18126,0.68827,-0.03278]);
HAnimJoint2326.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2326.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2327 = createNode("HAnimSegment");
HAnimSegment2327.name = "r_metacarpal_5";
HAnimSegment2327.DEF = "hanim_r_metacarpal_5";
HAnimSite HAnimSite2328 = createNode("HAnimSite");
HAnimSite2328.name = "r_metacarpal_phalanx_5";
HAnimSite2328.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite2328.translation = new SFVec3f(new float[-0.2,0.665,-0.036]);
TouchSensor TouchSensor2329 = createNode("TouchSensor");
TouchSensor2329.description = "HAnimSite 80 hanim_r_metacarpal_phalanx_5_pt";
HAnimSite2328.children = new MFNode();

HAnimSite2328.children[0] = TouchSensor2329;

Shape Shape2330 = createNode("Shape");
Appearance Appearance2331 = createNode("Appearance");
Material Material2332 = createNode("Material");
Material2332.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2331.material = Material2332;

Shape2330.appearance = Appearance2331;

IndexedFaceSet IndexedFaceSet2333 = createNode("IndexedFaceSet");
IndexedFaceSet2333.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2333.creaseAngle = 0.5;
IndexedFaceSet2333.solid = False;
ColorRGBA ColorRGBA2334 = createNode("ColorRGBA");
ColorRGBA2334.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2333.color = ColorRGBA2334;

Coordinate Coordinate2335 = createNode("Coordinate");
Coordinate2335.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2333.coord = Coordinate2335;

Shape2330.geometry = IndexedFaceSet2333;

HAnimSite2328.children[1] = Shape2330;

Billboard Billboard2336 = createNode("Billboard");
Billboard2336.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2337 = createNode("Shape");
Text Text2338 = createNode("Text");
Text2338.string = new MFString(new java.lang.String["80"]);
FontStyle FontStyle2339 = createNode("FontStyle");
FontStyle2339.size = 0.035;
Text2338.fontStyle = FontStyle2339;

Shape2337.geometry = Text2338;

Billboard2336.children = new MFNode();

Billboard2336.children[0] = Shape2337;

HAnimSite2328.children[2] = Billboard2336;

HAnimSegment2327.children = new MFNode();

HAnimSegment2327.children[0] = HAnimSite2328;

Shape Shape2340 = createNode("Shape");
LineSet LineSet2341 = createNode("LineSet");
LineSet2341.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2342 = createNode("ColorRGBA");
ColorRGBA2342.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2341.color = ColorRGBA2342;

Coordinate Coordinate2343 = createNode("Coordinate");
Coordinate2343.point = new MFVec3f(new float[-0.18126,0.68827,-0.03278,-0.1816,0.7242,-0.005]);
LineSet2341.coord = Coordinate2343;

Shape2340.geometry = LineSet2341;

HAnimSegment2327.children[1] = Shape2340;

HAnimJoint2326.children = new MFNode();

HAnimJoint2326.children[0] = HAnimSegment2327;

HAnimJoint HAnimJoint2344 = createNode("HAnimJoint");
HAnimJoint2344.name = "r_metacarpophalangeal_5";
HAnimJoint2344.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint2344.center = new SFVec3f(new float[-0.18297,0.6381,-0.0371]);
HAnimJoint2344.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2344.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2345 = createNode("HAnimSegment");
HAnimSegment2345.name = "r_carpal_proximal_phalanx_5";
HAnimSegment2345.DEF = "hanim_r_carpal_proximal_phalanx_5";
Shape Shape2346 = createNode("Shape");
LineSet LineSet2347 = createNode("LineSet");
LineSet2347.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2348 = createNode("ColorRGBA");
ColorRGBA2348.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2347.color = ColorRGBA2348;

Coordinate Coordinate2349 = createNode("Coordinate");
Coordinate2349.point = new MFVec3f(new float[-0.18297,0.6381,-0.0371,-0.18126,0.68827,-0.03278]);
LineSet2347.coord = Coordinate2349;

Shape2346.geometry = LineSet2347;

HAnimSegment2345.children = new MFNode();

HAnimSegment2345.children[0] = Shape2346;

HAnimJoint2344.children = new MFNode();

HAnimJoint2344.children[0] = HAnimSegment2345;

HAnimJoint HAnimJoint2350 = createNode("HAnimJoint");
HAnimJoint2350.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint2350.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint2350.center = new SFVec3f(new float[-0.1813,0.621,-0.03715]);
HAnimJoint2350.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2350.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2351 = createNode("HAnimSegment");
HAnimSegment2351.name = "r_carpal_middle_phalanx_5";
HAnimSegment2351.DEF = "hanim_r_carpal_middle_phalanx_5";
Shape Shape2352 = createNode("Shape");
LineSet LineSet2353 = createNode("LineSet");
LineSet2353.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2354 = createNode("ColorRGBA");
ColorRGBA2354.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2353.color = ColorRGBA2354;

Coordinate Coordinate2355 = createNode("Coordinate");
Coordinate2355.point = new MFVec3f(new float[-0.1813,0.621,-0.03715,-0.18297,0.6381,-0.0371]);
LineSet2353.coord = Coordinate2355;

Shape2352.geometry = LineSet2353;

HAnimSegment2351.children = new MFNode();

HAnimSegment2351.children[0] = Shape2352;

HAnimJoint2350.children = new MFNode();

HAnimJoint2350.children[0] = HAnimSegment2351;

HAnimJoint HAnimJoint2356 = createNode("HAnimJoint");
HAnimJoint2356.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint2356.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint2356.center = new SFVec3f(new float[-0.18045,0.602325,-0.03697]);
HAnimJoint2356.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint2356.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment2357 = createNode("HAnimSegment");
HAnimSegment2357.name = "r_carpal_distal_phalanx_5";
HAnimSegment2357.DEF = "hanim_r_carpal_distal_phalanx_5";
HAnimSite HAnimSite2358 = createNode("HAnimSite");
HAnimSite2358.name = "r_carpal_distal_phalanx_5";
HAnimSite2358.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite2358.translation = new SFVec3f(new float[-0.172,0.58,-0.039]);
TouchSensor TouchSensor2359 = createNode("TouchSensor");
TouchSensor2359.description = "HAnimSite 110 hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite2358.children = new MFNode();

HAnimSite2358.children[0] = TouchSensor2359;

Shape Shape2360 = createNode("Shape");
Appearance Appearance2361 = createNode("Appearance");
Material Material2362 = createNode("Material");
Material2362.diffuseColor = new SFColor(new float[1,1,1]);
Appearance2361.material = Material2362;

Shape2360.appearance = Appearance2361;

IndexedFaceSet IndexedFaceSet2363 = createNode("IndexedFaceSet");
IndexedFaceSet2363.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
IndexedFaceSet2363.creaseAngle = 0.5;
IndexedFaceSet2363.solid = False;
ColorRGBA ColorRGBA2364 = createNode("ColorRGBA");
ColorRGBA2364.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet2363.color = ColorRGBA2364;

Coordinate Coordinate2365 = createNode("Coordinate");
Coordinate2365.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet2363.coord = Coordinate2365;

Shape2360.geometry = IndexedFaceSet2363;

HAnimSite2358.children[1] = Shape2360;

Billboard Billboard2366 = createNode("Billboard");
Billboard2366.axisOfRotation = new SFVec3f(new float[0,0,0]);
Shape Shape2367 = createNode("Shape");
Text Text2368 = createNode("Text");
Text2368.string = new MFString(new java.lang.String["110"]);
FontStyle FontStyle2369 = createNode("FontStyle");
FontStyle2369.size = 0.035;
Text2368.fontStyle = FontStyle2369;

Shape2367.geometry = Text2368;

Billboard2366.children = new MFNode();

Billboard2366.children[0] = Shape2367;

HAnimSite2358.children[2] = Billboard2366;

HAnimSegment2357.children = new MFNode();

HAnimSegment2357.children[0] = HAnimSite2358;

Shape Shape2370 = createNode("Shape");
LineSet LineSet2371 = createNode("LineSet");
LineSet2371.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA2372 = createNode("ColorRGBA");
ColorRGBA2372.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,1]);
LineSet2371.color = ColorRGBA2372;

Coordinate Coordinate2373 = createNode("Coordinate");
Coordinate2373.point = new MFVec3f(new float[-0.18045,0.602325,-0.03697,-0.1813,0.621,-0.03715]);
LineSet2371.coord = Coordinate2373;

Shape2370.geometry = LineSet2371;

HAnimSegment2357.children[1] = Shape2370;

HAnimJoint2356.children = new MFNode();

HAnimJoint2356.children[0] = HAnimSegment2357;

HAnimJoint2350.children[1] = HAnimJoint2356;

HAnimJoint2344.children[1] = HAnimJoint2350;

HAnimJoint2326.children[1] = HAnimJoint2344;

HAnimJoint2110.children[5] = HAnimJoint2326;

HAnimJoint2080.children[1] = HAnimJoint2110;

HAnimJoint2026.children[1] = HAnimJoint2080;

HAnimJoint1972.children[1] = HAnimJoint2026;

HAnimJoint1954.children[1] = HAnimJoint1972;

HAnimJoint1126.children[3] = HAnimJoint1954;

HAnimJoint1120.children[1] = HAnimJoint1126;

HAnimJoint1114.children[1] = HAnimJoint1120;

HAnimJoint1108.children[1] = HAnimJoint1114;

HAnimJoint1102.children[1] = HAnimJoint1108;

HAnimJoint1096.children[1] = HAnimJoint1102;

HAnimJoint1090.children[1] = HAnimJoint1096;

HAnimJoint1084.children[1] = HAnimJoint1090;

HAnimJoint1018.children[1] = HAnimJoint1084;

HAnimJoint988.children[1] = HAnimJoint1018;

HAnimJoint982.children[1] = HAnimJoint988;

HAnimJoint976.children[1] = HAnimJoint982;

HAnimJoint970.children[1] = HAnimJoint976;

HAnimJoint940.children[1] = HAnimJoint970;

HAnimJoint934.children[1] = HAnimJoint940;

HAnimJoint928.children[1] = HAnimJoint934;

HAnimJoint862.children[1] = HAnimJoint928;

HAnimJoint12.children[2] = HAnimJoint862;

HAnimHumanoid11.joints = new MFNode();

HAnimHumanoid11.joints[0] = HAnimJoint12;

children[2] = HAnimHumanoid11;

NavigationInfo NavigationInfo2374 = createNode("NavigationInfo");
NavigationInfo2374.headlight = False;
children[3] = NavigationInfo2374;

Background Background2375 = createNode("Background");
Background2375.DEF = "Background1";
Background2375.groundColor = new MFColor(new float[0.5,0.5,0.5]);
Background2375.skyColor = new MFColor(new float[0.4,0.4,0.4]);
children[4] = Background2375;

DirectionalLight DirectionalLight2376 = createNode("DirectionalLight");
DirectionalLight2376.global = True;
children[5] = DirectionalLight2376;

Viewpoint Viewpoint2377 = createNode("Viewpoint");
Viewpoint2377.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint2377.description = "JinLOA4";
Viewpoint2377.position = new SFVec3f(new float[0,1,3]);
children[6] = Viewpoint2377;

Transform Transform2378 = createNode("Transform");
Transform2378.DEF = "Landmark000";
//Another Parent Scene 0 0 0 landmark
Shape Shape2379 = createNode("Shape");
Shape2379.DEF = "HAnim000Landmark";
Appearance Appearance2380 = createNode("Appearance");
Material Material2381 = createNode("Material");
Material2381.diffuseColor = new SFColor(new float[0,1,0]);
Material2381.emissiveColor = new SFColor(new float[0,1,0]);
Appearance2380.material = Material2381;

Shape2379.appearance = Appearance2380;

Sphere Sphere2382 = createNode("Sphere");
Sphere2382.radius = 0.01;
Shape2379.geometry = Sphere2382;

Transform2378.child = new undefined();

Transform2378.child[0] = Shape2379;

children[7] = Transform2378;

}
