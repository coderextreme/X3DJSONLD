#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "JohnJoint20.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "identifier";
meta3.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint20.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "An attempt at a standard LOA-4 skeleton";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "h2.pl";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "20 Jan 2023";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "creator";
meta7.content = "John Carlson";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "created";
meta8.content = "9 November 2020";
head1.meta[6] = meta8;

component component9 = createNode("component");
component9.name = "HAnim";
component9.level = 1;
head1.component[7] = component9;

head = head1;

Transform Transform11 = createNode("Transform");
Shape Shape12 = createNode("Shape");
Shape12.DEF = "AxisLinesShape";
IndexedLineSet IndexedLineSet13 = createNode("IndexedLineSet");
IndexedLineSet13.colorPerVertex = False;
IndexedLineSet13.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet13.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Color Color14 = createNode("Color");
Color14.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet13.color = Color14;

Coordinate Coordinate15 = createNode("Coordinate");
Coordinate15.point = new MFVec3f(new float[0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
IndexedLineSet13.coord = Coordinate15;

Shape12.geometry = IndexedLineSet13;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

children = new MFNode();

children[0] = Transform11;

Group Group16 = createNode("Group");
Transform Transform17 = createNode("Transform");
Transform Transform18 = createNode("Transform");
Transform18.translation = new SFVec3f(new float[0,2,0]);
Shape Shape19 = createNode("Shape");
Shape19.DEF = "HAnimRootShape";
Appearance Appearance20 = createNode("Appearance");
Material Material21 = createNode("Material");
Material21.DEF = "HAnimRootMaterial";
Material21.diffuseColor = new SFColor(new float[0.8,0,0]);
Material21.transparency = 0.3;
Appearance20.material = Material21;

Shape19.appearance = Appearance20;

Sphere Sphere22 = createNode("Sphere");
Sphere22.radius = 0.02;
Shape19.geometry = Sphere22;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Transform17.children = new MFNode();

Transform17.children[0] = Transform18;

Transform Transform23 = createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape24 = createNode("Shape");
Shape24.DEF = "HAnimJointShape";
Appearance Appearance25 = createNode("Appearance");
Material Material26 = createNode("Material");
Material26.DEF = "HAnimJointMaterial";
Material26.diffuseColor = new SFColor(new float[0,0,0.8]);
Material26.transparency = 0.3;
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

Sphere Sphere27 = createNode("Sphere");
Sphere27.radius = 0.02;
Shape24.geometry = Sphere27;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

Transform17.children[1] = Transform23;

Transform Transform28 = createNode("Transform");
Transform28.translation = new SFVec3f(new float[0,2.05,0]);
Shape Shape29 = createNode("Shape");
Shape29.DEF = "HAnimSegmentLine";
LineSet LineSet30 = createNode("LineSet");
LineSet30.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA31 = createNode("ColorRGBA");
ColorRGBA31.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA31.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet30.color = ColorRGBA31;

Coordinate Coordinate32 = createNode("Coordinate");
Coordinate32.point = new MFVec3f(new float[-0.05,0,0,0.05,0,0]);
LineSet30.coord = Coordinate32;

Shape29.geometry = LineSet30;

Transform28.child = new undefined();

Transform28.child[0] = Shape29;

Transform17.children[2] = Transform28;

Transform Transform33 = createNode("Transform");
Transform33.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape34 = createNode("Shape");
Shape34.DEF = "HAnimSiteShape";
Appearance Appearance35 = createNode("Appearance");
Material Material36 = createNode("Material");
Material36.diffuseColor = new SFColor(new float[1,1,0]);
Material36.transparency = 0.3;
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

IndexedFaceSet IndexedFaceSet37 = createNode("IndexedFaceSet");
IndexedFaceSet37.DEF = "DiamondIFS";
IndexedFaceSet37.solid = False;
IndexedFaceSet37.creaseAngle = 0.5;
IndexedFaceSet37.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA ColorRGBA38 = createNode("ColorRGBA");
ColorRGBA38.DEF = "HAnimSiteColorRGBA";
ColorRGBA38.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet37.color = ColorRGBA38;

Coordinate Coordinate39 = createNode("Coordinate");
Coordinate39.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet37.coord = Coordinate39;

Shape34.geometry = IndexedFaceSet37;

Transform33.child = new undefined();

Transform33.child[0] = Shape34;

Transform17.children[3] = Transform33;

Group16.children = new MFNode();

Group16.children[0] = Transform17;

children[1] = Group16;

NavigationInfo NavigationInfo40 = createNode("NavigationInfo");
NavigationInfo40.speed = 1.5;
children[2] = NavigationInfo40;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.description = "default";
children[3] = Viewpoint41;

HAnimHumanoid HAnimHumanoid42 = createNode("HAnimHumanoid");
HAnimHumanoid42.DEF = "hanim_HAnim";
HAnimHumanoid42.version = "2.0";
HAnimHumanoid42.name = "HAnim";
HAnimHumanoid42.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimJoint HAnimJoint43 = createNode("HAnimJoint");
HAnimJoint43.DEF = "hanim_humanoid_root";
HAnimJoint43.name = "humanoid_root";
HAnimJoint43.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimSegment HAnimSegment44 = createNode("HAnimSegment");
HAnimSegment44.DEF = "hanim_sacrum";
HAnimSegment44.name = "sacrum";
HAnimDisplacer HAnimDisplacer45 = createNode("HAnimDisplacer");
HAnimDisplacer45.name = "sacrum_feature";
HAnimDisplacer45.coordIndex = new MFInt32(new int[0]);
HAnimDisplacer45.displacements = new MFVec3f(new float[0,0,0]);
HAnimSegment44.displacers = new MFNode();

HAnimSegment44.displacers[0] = HAnimDisplacer45;

HAnimDisplacer HAnimDisplacer46 = createNode("HAnimDisplacer");
HAnimDisplacer46.name = "sacrum_config";
HAnimDisplacer46.coordIndex = new MFInt32(new int[0]);
HAnimDisplacer46.displacements = new MFVec3f(new float[0,0,0]);
HAnimSegment44.displacers[1] = HAnimDisplacer46;

Transform Transform47 = createNode("Transform");
Transform Transform48 = createNode("Transform");
Shape Shape49 = createNode("Shape");
Shape49.USE = "HAnimJointShape";
Transform48.child = new undefined();

Transform48.child[0] = Shape49;

Transform47.children = new MFNode();

Transform47.children[0] = Transform48;

HAnimSegment44.children[2] = Transform47;

Shape Shape50 = createNode("Shape");
LineSet LineSet51 = createNode("LineSet");
LineSet51.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA52 = createNode("ColorRGBA");
ColorRGBA52.USE = "HAnimSegmentLineColorRGBA";
LineSet51.color = ColorRGBA52;

Coordinate Coordinate53 = createNode("Coordinate");
Coordinate53.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet51.coord = Coordinate53;

Shape50.geometry = LineSet51;

HAnimSegment44.children[3] = Shape50;

HAnimSite HAnimSite54 = createNode("HAnimSite");
HAnimSite54.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimSite54.name = "buttocks_standing_wall_contact_point_pt";
HAnimSite54.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor55 = createNode("TouchSensor");
TouchSensor55.description = "HAnimSite buttocks_standing_wall_contact_point_pt";
HAnimSite54.children = new MFNode();

HAnimSite54.children[0] = TouchSensor55;

Shape Shape56 = createNode("Shape");
Shape56.USE = "HAnimSiteShape";
HAnimSite54.children[1] = Shape56;

HAnimSegment44.children[4] = HAnimSite54;

HAnimSite HAnimSite57 = createNode("HAnimSite");
HAnimSite57.DEF = "hanim_crotch_pt";
HAnimSite57.name = "crotch_pt";
HAnimSite57.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
TouchSensor TouchSensor58 = createNode("TouchSensor");
TouchSensor58.description = "HAnimSite crotch_pt";
HAnimSite57.children = new MFNode();

HAnimSite57.children[0] = TouchSensor58;

Shape Shape59 = createNode("Shape");
Shape59.USE = "HAnimSiteShape";
HAnimSite57.children[1] = Shape59;

HAnimSegment44.children[5] = HAnimSite57;

HAnimSite HAnimSite60 = createNode("HAnimSite");
HAnimSite60.DEF = "hanim_l_asis_pt";
HAnimSite60.name = "l_asis_pt";
HAnimSite60.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
TouchSensor TouchSensor61 = createNode("TouchSensor");
TouchSensor61.description = "HAnimSite l_asis_pt";
HAnimSite60.children = new MFNode();

HAnimSite60.children[0] = TouchSensor61;

Shape Shape62 = createNode("Shape");
Shape62.USE = "HAnimSiteShape";
HAnimSite60.children[1] = Shape62;

HAnimSegment44.children[6] = HAnimSite60;

HAnimSite HAnimSite63 = createNode("HAnimSite");
HAnimSite63.DEF = "hanim_l_iliocristale_pt";
HAnimSite63.name = "l_iliocristale_pt";
HAnimSite63.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
TouchSensor TouchSensor64 = createNode("TouchSensor");
TouchSensor64.description = "HAnimSite l_iliocristale_pt";
HAnimSite63.children = new MFNode();

HAnimSite63.children[0] = TouchSensor64;

Shape Shape65 = createNode("Shape");
Shape65.USE = "HAnimSiteShape";
HAnimSite63.children[1] = Shape65;

HAnimSegment44.children[7] = HAnimSite63;

HAnimSite HAnimSite66 = createNode("HAnimSite");
HAnimSite66.DEF = "hanim_l_psis_pt";
HAnimSite66.name = "l_psis_pt";
HAnimSite66.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
TouchSensor TouchSensor67 = createNode("TouchSensor");
TouchSensor67.description = "HAnimSite l_psis_pt";
HAnimSite66.children = new MFNode();

HAnimSite66.children[0] = TouchSensor67;

Shape Shape68 = createNode("Shape");
Shape68.USE = "HAnimSiteShape";
HAnimSite66.children[1] = Shape68;

HAnimSegment44.children[8] = HAnimSite66;

HAnimSite HAnimSite69 = createNode("HAnimSite");
HAnimSite69.DEF = "hanim_l_trochanterion_pt";
HAnimSite69.name = "l_trochanterion_pt";
HAnimSite69.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
TouchSensor TouchSensor70 = createNode("TouchSensor");
TouchSensor70.description = "HAnimSite l_trochanterion_pt";
HAnimSite69.children = new MFNode();

HAnimSite69.children[0] = TouchSensor70;

Shape Shape71 = createNode("Shape");
Shape71.USE = "HAnimSiteShape";
HAnimSite69.children[1] = Shape71;

HAnimSegment44.children[9] = HAnimSite69;

HAnimSite HAnimSite72 = createNode("HAnimSite");
HAnimSite72.DEF = "hanim_r_asis_pt";
HAnimSite72.name = "r_asis_pt";
HAnimSite72.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
TouchSensor TouchSensor73 = createNode("TouchSensor");
TouchSensor73.description = "HAnimSite r_asis_pt";
HAnimSite72.children = new MFNode();

HAnimSite72.children[0] = TouchSensor73;

Shape Shape74 = createNode("Shape");
Shape74.USE = "HAnimSiteShape";
HAnimSite72.children[1] = Shape74;

HAnimSegment44.children[10] = HAnimSite72;

HAnimSite HAnimSite75 = createNode("HAnimSite");
HAnimSite75.DEF = "hanim_r_iliocristale_pt";
HAnimSite75.name = "r_iliocristale_pt";
HAnimSite75.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
TouchSensor TouchSensor76 = createNode("TouchSensor");
TouchSensor76.description = "HAnimSite r_iliocristale_pt";
HAnimSite75.children = new MFNode();

HAnimSite75.children[0] = TouchSensor76;

Shape Shape77 = createNode("Shape");
Shape77.USE = "HAnimSiteShape";
HAnimSite75.children[1] = Shape77;

HAnimSegment44.children[11] = HAnimSite75;

HAnimSite HAnimSite78 = createNode("HAnimSite");
HAnimSite78.DEF = "hanim_r_psis_pt";
HAnimSite78.name = "r_psis_pt";
HAnimSite78.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
TouchSensor TouchSensor79 = createNode("TouchSensor");
TouchSensor79.description = "HAnimSite r_psis_pt";
HAnimSite78.children = new MFNode();

HAnimSite78.children[0] = TouchSensor79;

Shape Shape80 = createNode("Shape");
Shape80.USE = "HAnimSiteShape";
HAnimSite78.children[1] = Shape80;

HAnimSegment44.children[12] = HAnimSite78;

HAnimSite HAnimSite81 = createNode("HAnimSite");
HAnimSite81.DEF = "hanim_r_trochanterion_pt";
HAnimSite81.name = "r_trochanterion_pt";
HAnimSite81.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
TouchSensor TouchSensor82 = createNode("TouchSensor");
TouchSensor82.description = "HAnimSite r_trochanterion_pt";
HAnimSite81.children = new MFNode();

HAnimSite81.children[0] = TouchSensor82;

Shape Shape83 = createNode("Shape");
Shape83.USE = "HAnimSiteShape";
HAnimSite81.children[1] = Shape83;

HAnimSegment44.children[13] = HAnimSite81;

Shape Shape84 = createNode("Shape");
LineSet LineSet85 = createNode("LineSet");
LineSet85.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA86 = createNode("ColorRGBA");
ColorRGBA86.USE = "HAnimSegmentLineColorRGBA";
LineSet85.color = ColorRGBA86;

Coordinate Coordinate87 = createNode("Coordinate");
Coordinate87.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet85.coord = Coordinate87;

Shape84.geometry = LineSet85;

HAnimSegment44.children[14] = Shape84;

HAnimSite HAnimSite88 = createNode("HAnimSite");
HAnimSite88.DEF = "hanim_navel_pt";
HAnimSite88.name = "navel_pt";
HAnimSite88.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
TouchSensor TouchSensor89 = createNode("TouchSensor");
TouchSensor89.description = "HAnimSite navel_pt";
HAnimSite88.children = new MFNode();

HAnimSite88.children[0] = TouchSensor89;

Shape Shape90 = createNode("Shape");
Shape90.USE = "HAnimSiteShape";
HAnimSite88.children[1] = Shape90;

HAnimSegment44.children[15] = HAnimSite88;

HAnimSite HAnimSite91 = createNode("HAnimSite");
HAnimSite91.DEF = "hanim_waist_preferred_anterior_pt";
HAnimSite91.name = "waist_preferred_anterior_pt";
HAnimSite91.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor92 = createNode("TouchSensor");
TouchSensor92.description = "HAnimSite waist_preferred_anterior_pt";
HAnimSite91.children = new MFNode();

HAnimSite91.children[0] = TouchSensor92;

Shape Shape93 = createNode("Shape");
Shape93.USE = "HAnimSiteShape";
HAnimSite91.children[1] = Shape93;

HAnimSegment44.children[16] = HAnimSite91;

HAnimSite HAnimSite94 = createNode("HAnimSite");
HAnimSite94.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite94.name = "waist_preferred_posterior_pt";
HAnimSite94.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
TouchSensor TouchSensor95 = createNode("TouchSensor");
TouchSensor95.description = "HAnimSite waist_preferred_posterior_pt";
HAnimSite94.children = new MFNode();

HAnimSite94.children[0] = TouchSensor95;

Shape Shape96 = createNode("Shape");
Shape96.USE = "HAnimSiteShape";
HAnimSite94.children[1] = Shape96;

HAnimSegment44.children[17] = HAnimSite94;

HAnimJoint43.children = new MFNode();

HAnimJoint43.children[0] = HAnimSegment44;

HAnimJoint HAnimJoint97 = createNode("HAnimJoint");
HAnimJoint97.DEF = "hanim_sacroiliac";
HAnimJoint97.name = "sacroiliac";
HAnimJoint97.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimSegment HAnimSegment98 = createNode("HAnimSegment");
HAnimSegment98.DEF = "hanim_pelvis";
HAnimSegment98.name = "pelvis";
Transform Transform99 = createNode("Transform");
Transform Transform100 = createNode("Transform");
Shape Shape101 = createNode("Shape");
Shape101.USE = "HAnimJointShape";
Transform100.child = new undefined();

Transform100.child[0] = Shape101;

Transform99.children = new MFNode();

Transform99.children[0] = Transform100;

HAnimSegment98.children = new MFNode();

HAnimSegment98.children[0] = Transform99;

Shape Shape102 = createNode("Shape");
LineSet LineSet103 = createNode("LineSet");
LineSet103.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA104 = createNode("ColorRGBA");
ColorRGBA104.USE = "HAnimSegmentLineColorRGBA";
LineSet103.color = ColorRGBA104;

Coordinate Coordinate105 = createNode("Coordinate");
Coordinate105.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet103.coord = Coordinate105;

Shape102.geometry = LineSet103;

HAnimSegment98.children[1] = Shape102;

HAnimSite HAnimSite106 = createNode("HAnimSite");
HAnimSite106.DEF = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimSite106.name = "l_femoral_lateral_epicondyles_pt";
HAnimSite106.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
TouchSensor TouchSensor107 = createNode("TouchSensor");
TouchSensor107.description = "HAnimSite l_femoral_lateral_epicondyles_pt";
HAnimSite106.children = new MFNode();

HAnimSite106.children[0] = TouchSensor107;

Shape Shape108 = createNode("Shape");
Shape108.USE = "HAnimSiteShape";
HAnimSite106.children[1] = Shape108;

HAnimSegment98.children[2] = HAnimSite106;

HAnimSite HAnimSite109 = createNode("HAnimSite");
HAnimSite109.DEF = "hanim_l_femoral_medial_epicondyles_pt";
HAnimSite109.name = "l_femoral_medial_epicondyles_pt";
HAnimSite109.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
TouchSensor TouchSensor110 = createNode("TouchSensor");
TouchSensor110.description = "HAnimSite l_femoral_medial_epicondyles_pt";
HAnimSite109.children = new MFNode();

HAnimSite109.children[0] = TouchSensor110;

Shape Shape111 = createNode("Shape");
Shape111.USE = "HAnimSiteShape";
HAnimSite109.children[1] = Shape111;

HAnimSegment98.children[3] = HAnimSite109;

HAnimSite HAnimSite112 = createNode("HAnimSite");
HAnimSite112.DEF = "hanim_l_knee_crease_pt";
HAnimSite112.name = "l_knee_crease_pt";
HAnimSite112.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
TouchSensor TouchSensor113 = createNode("TouchSensor");
TouchSensor113.description = "HAnimSite l_knee_crease_pt";
HAnimSite112.children = new MFNode();

HAnimSite112.children[0] = TouchSensor113;

Shape Shape114 = createNode("Shape");
Shape114.USE = "HAnimSiteShape";
HAnimSite112.children[1] = Shape114;

HAnimSegment98.children[4] = HAnimSite112;

HAnimSite HAnimSite115 = createNode("HAnimSite");
HAnimSite115.DEF = "hanim_l_suprapatella_pt";
HAnimSite115.name = "l_suprapatella_pt";
HAnimSite115.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor116 = createNode("TouchSensor");
TouchSensor116.description = "HAnimSite l_suprapatella_pt";
HAnimSite115.children = new MFNode();

HAnimSite115.children[0] = TouchSensor116;

Shape Shape117 = createNode("Shape");
Shape117.USE = "HAnimSiteShape";
HAnimSite115.children[1] = Shape117;

HAnimSegment98.children[5] = HAnimSite115;

Shape Shape118 = createNode("Shape");
LineSet LineSet119 = createNode("LineSet");
LineSet119.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA120 = createNode("ColorRGBA");
ColorRGBA120.USE = "HAnimSegmentLineColorRGBA";
LineSet119.color = ColorRGBA120;

Coordinate Coordinate121 = createNode("Coordinate");
Coordinate121.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet119.coord = Coordinate121;

Shape118.geometry = LineSet119;

HAnimSegment98.children[6] = Shape118;

HAnimSite HAnimSite122 = createNode("HAnimSite");
HAnimSite122.DEF = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimSite122.name = "r_femoral_lateral_epicondyles_pt";
HAnimSite122.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
TouchSensor TouchSensor123 = createNode("TouchSensor");
TouchSensor123.description = "HAnimSite r_femoral_lateral_epicondyles_pt";
HAnimSite122.children = new MFNode();

HAnimSite122.children[0] = TouchSensor123;

Shape Shape124 = createNode("Shape");
Shape124.USE = "HAnimSiteShape";
HAnimSite122.children[1] = Shape124;

HAnimSegment98.children[7] = HAnimSite122;

HAnimSite HAnimSite125 = createNode("HAnimSite");
HAnimSite125.DEF = "hanim_r_femoral_medial_epicondyles_pt";
HAnimSite125.name = "r_femoral_medial_epicondyles_pt";
HAnimSite125.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
TouchSensor TouchSensor126 = createNode("TouchSensor");
TouchSensor126.description = "HAnimSite r_femoral_medial_epicondyles_pt";
HAnimSite125.children = new MFNode();

HAnimSite125.children[0] = TouchSensor126;

Shape Shape127 = createNode("Shape");
Shape127.USE = "HAnimSiteShape";
HAnimSite125.children[1] = Shape127;

HAnimSegment98.children[8] = HAnimSite125;

HAnimSite HAnimSite128 = createNode("HAnimSite");
HAnimSite128.DEF = "hanim_r_knee_crease_pt";
HAnimSite128.name = "r_knee_crease_pt";
HAnimSite128.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
TouchSensor TouchSensor129 = createNode("TouchSensor");
TouchSensor129.description = "HAnimSite r_knee_crease_pt";
HAnimSite128.children = new MFNode();

HAnimSite128.children[0] = TouchSensor129;

Shape Shape130 = createNode("Shape");
Shape130.USE = "HAnimSiteShape";
HAnimSite128.children[1] = Shape130;

HAnimSegment98.children[9] = HAnimSite128;

HAnimSite HAnimSite131 = createNode("HAnimSite");
HAnimSite131.DEF = "hanim_r_suprapatella_pt";
HAnimSite131.name = "r_suprapatella_pt";
HAnimSite131.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor132 = createNode("TouchSensor");
TouchSensor132.description = "HAnimSite r_suprapatella_pt";
HAnimSite131.children = new MFNode();

HAnimSite131.children[0] = TouchSensor132;

Shape Shape133 = createNode("Shape");
Shape133.USE = "HAnimSiteShape";
HAnimSite131.children[1] = Shape133;

HAnimSegment98.children[10] = HAnimSite131;

HAnimJoint97.children = new MFNode();

HAnimJoint97.children[0] = HAnimSegment98;

HAnimJoint HAnimJoint134 = createNode("HAnimJoint");
HAnimJoint134.DEF = "hanim_l_hip";
HAnimJoint134.name = "l_hip";
HAnimJoint134.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment135 = createNode("HAnimSegment");
HAnimSegment135.DEF = "hanim_l_thigh";
HAnimSegment135.name = "l_thigh";
Transform Transform136 = createNode("Transform");
Transform Transform137 = createNode("Transform");
Shape Shape138 = createNode("Shape");
Shape138.USE = "HAnimJointShape";
Transform137.child = new undefined();

Transform137.child[0] = Shape138;

Transform136.children = new MFNode();

Transform136.children[0] = Transform137;

HAnimSegment135.children = new MFNode();

HAnimSegment135.children[0] = Transform136;

Shape Shape139 = createNode("Shape");
LineSet LineSet140 = createNode("LineSet");
LineSet140.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA141 = createNode("ColorRGBA");
ColorRGBA141.USE = "HAnimSegmentLineColorRGBA";
LineSet140.color = ColorRGBA141;

Coordinate Coordinate142 = createNode("Coordinate");
Coordinate142.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet140.coord = Coordinate142;

Shape139.geometry = LineSet140;

HAnimSegment135.children[1] = Shape139;

HAnimSite HAnimSite143 = createNode("HAnimSite");
HAnimSite143.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite143.name = "l_lateral_malleolus_pt";
HAnimSite143.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
TouchSensor TouchSensor144 = createNode("TouchSensor");
TouchSensor144.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite143.children = new MFNode();

HAnimSite143.children[0] = TouchSensor144;

Shape Shape145 = createNode("Shape");
Shape145.USE = "HAnimSiteShape";
HAnimSite143.children[1] = Shape145;

HAnimSegment135.children[2] = HAnimSite143;

HAnimSite HAnimSite146 = createNode("HAnimSite");
HAnimSite146.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite146.name = "l_medial_malleolus_pt";
HAnimSite146.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
TouchSensor TouchSensor147 = createNode("TouchSensor");
TouchSensor147.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite146.children = new MFNode();

HAnimSite146.children[0] = TouchSensor147;

Shape Shape148 = createNode("Shape");
Shape148.USE = "HAnimSiteShape";
HAnimSite146.children[1] = Shape148;

HAnimSegment135.children[3] = HAnimSite146;

HAnimSite HAnimSite149 = createNode("HAnimSite");
HAnimSite149.DEF = "hanim_l_tibiale_pt";
HAnimSite149.name = "l_tibiale_pt";
HAnimSite149.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor150 = createNode("TouchSensor");
TouchSensor150.description = "HAnimSite l_tibiale_pt";
HAnimSite149.children = new MFNode();

HAnimSite149.children[0] = TouchSensor150;

Shape Shape151 = createNode("Shape");
Shape151.USE = "HAnimSiteShape";
HAnimSite149.children[1] = Shape151;

HAnimSegment135.children[4] = HAnimSite149;

HAnimJoint134.children = new MFNode();

HAnimJoint134.children[0] = HAnimSegment135;

HAnimJoint HAnimJoint152 = createNode("HAnimJoint");
HAnimJoint152.DEF = "hanim_l_knee";
HAnimJoint152.name = "l_knee";
HAnimJoint152.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment153 = createNode("HAnimSegment");
HAnimSegment153.DEF = "hanim_l_calf";
HAnimSegment153.name = "l_calf";
Transform Transform154 = createNode("Transform");
Transform Transform155 = createNode("Transform");
Shape Shape156 = createNode("Shape");
Shape156.USE = "HAnimJointShape";
Transform155.child = new undefined();

Transform155.child[0] = Shape156;

Transform154.children = new MFNode();

Transform154.children[0] = Transform155;

HAnimSegment153.children = new MFNode();

HAnimSegment153.children[0] = Transform154;

Shape Shape157 = createNode("Shape");
LineSet LineSet158 = createNode("LineSet");
LineSet158.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA159 = createNode("ColorRGBA");
ColorRGBA159.USE = "HAnimSegmentLineColorRGBA";
LineSet158.color = ColorRGBA159;

Coordinate Coordinate160 = createNode("Coordinate");
Coordinate160.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet158.coord = Coordinate160;

Shape157.geometry = LineSet158;

HAnimSegment153.children[1] = Shape157;

HAnimSite HAnimSite161 = createNode("HAnimSite");
HAnimSite161.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite161.name = "l_calcaneus_posterior_pt";
HAnimSite161.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
TouchSensor TouchSensor162 = createNode("TouchSensor");
TouchSensor162.description = "HAnimSite l_calcaneus_posterior_pt";
HAnimSite161.children = new MFNode();

HAnimSite161.children[0] = TouchSensor162;

Shape Shape163 = createNode("Shape");
Shape163.USE = "HAnimSiteShape";
HAnimSite161.children[1] = Shape163;

HAnimSegment153.children[2] = HAnimSite161;

HAnimSite HAnimSite164 = createNode("HAnimSite");
HAnimSite164.DEF = "hanim_l_sphyrion_pt";
HAnimSite164.name = "l_sphyrion_pt";
HAnimSite164.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
TouchSensor TouchSensor165 = createNode("TouchSensor");
TouchSensor165.description = "HAnimSite l_sphyrion_pt";
HAnimSite164.children = new MFNode();

HAnimSite164.children[0] = TouchSensor165;

Shape Shape166 = createNode("Shape");
Shape166.USE = "HAnimSiteShape";
HAnimSite164.children[1] = Shape166;

HAnimSegment153.children[3] = HAnimSite164;

HAnimJoint152.children = new MFNode();

HAnimJoint152.children[0] = HAnimSegment153;

HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.DEF = "hanim_l_talocrural";
HAnimJoint167.name = "l_talocrural";
HAnimJoint167.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment168 = createNode("HAnimSegment");
HAnimSegment168.DEF = "hanim_l_talus";
HAnimSegment168.name = "l_talus";
Transform Transform169 = createNode("Transform");
Transform169.translation = new SFVec3f(new float[0.08,0.06,-0.025]);
Transform169.rotation = new SFRotation(new float[1,0,0,-1.57]);
Transform169.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform Transform170 = createNode("Transform");
Shape Shape171 = createNode("Shape");
Shape171.USE = "HAnimJointShape";
Transform170.child = new undefined();

Transform170.child[0] = Shape171;

Transform169.children = new MFNode();

Transform169.children[0] = Transform170;

HAnimSegment168.children = new MFNode();

HAnimSegment168.children[0] = Transform169;

Shape Shape172 = createNode("Shape");
LineSet LineSet173 = createNode("LineSet");
LineSet173.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA174 = createNode("ColorRGBA");
ColorRGBA174.USE = "HAnimSegmentLineColorRGBA";
LineSet173.color = ColorRGBA174;

Coordinate Coordinate175 = createNode("Coordinate");
Coordinate175.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0,1,0]);
LineSet173.coord = Coordinate175;

Shape172.geometry = LineSet173;

HAnimSegment168.children[1] = Shape172;

Shape Shape176 = createNode("Shape");
LineSet LineSet177 = createNode("LineSet");
LineSet177.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA178 = createNode("ColorRGBA");
ColorRGBA178.USE = "HAnimSegmentLineColorRGBA";
LineSet177.color = ColorRGBA178;

Coordinate Coordinate179 = createNode("Coordinate");
Coordinate179.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0,1,0]);
LineSet177.coord = Coordinate179;

Shape176.geometry = LineSet177;

HAnimSegment168.children[2] = Shape176;

HAnimJoint167.children = new MFNode();

HAnimJoint167.children[0] = HAnimSegment168;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint180.name = "l_talocalcaneonavicular";
HAnimJoint180.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment181 = createNode("HAnimSegment");
HAnimSegment181.DEF = "hanim_l_navicular";
HAnimSegment181.name = "l_navicular";
Transform Transform182 = createNode("Transform");
Transform Transform183 = createNode("Transform");
Shape Shape184 = createNode("Shape");
Shape184.USE = "HAnimJointShape";
Transform183.child = new undefined();

Transform183.child[0] = Shape184;

Transform182.children = new MFNode();

Transform182.children[0] = Transform183;

HAnimSegment181.children = new MFNode();

HAnimSegment181.children[0] = Transform182;

Shape Shape185 = createNode("Shape");
LineSet LineSet186 = createNode("LineSet");
LineSet186.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA187 = createNode("ColorRGBA");
ColorRGBA187.USE = "HAnimSegmentLineColorRGBA";
LineSet186.color = ColorRGBA187;

Coordinate Coordinate188 = createNode("Coordinate");
Coordinate188.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet186.coord = Coordinate188;

Shape185.geometry = LineSet186;

HAnimSegment181.children[1] = Shape185;

Shape Shape189 = createNode("Shape");
LineSet LineSet190 = createNode("LineSet");
LineSet190.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA191 = createNode("ColorRGBA");
ColorRGBA191.USE = "HAnimSegmentLineColorRGBA";
LineSet190.color = ColorRGBA191;

Coordinate Coordinate192 = createNode("Coordinate");
Coordinate192.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet190.coord = Coordinate192;

Shape189.geometry = LineSet190;

HAnimSegment181.children[2] = Shape189;

Shape Shape193 = createNode("Shape");
LineSet LineSet194 = createNode("LineSet");
LineSet194.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA195 = createNode("ColorRGBA");
ColorRGBA195.USE = "HAnimSegmentLineColorRGBA";
LineSet194.color = ColorRGBA195;

Coordinate Coordinate196 = createNode("Coordinate");
Coordinate196.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet194.coord = Coordinate196;

Shape193.geometry = LineSet194;

HAnimSegment181.children[3] = Shape193;

HAnimJoint180.children = new MFNode();

HAnimJoint180.children[0] = HAnimSegment181;

HAnimJoint HAnimJoint197 = createNode("HAnimJoint");
HAnimJoint197.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint197.name = "l_cuneonavicular_1";
HAnimJoint197.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment198 = createNode("HAnimSegment");
HAnimSegment198.DEF = "hanim_l_cuneiform_1";
HAnimSegment198.name = "l_cuneiform_1";
Transform Transform199 = createNode("Transform");
Transform Transform200 = createNode("Transform");
Shape Shape201 = createNode("Shape");
Shape201.USE = "HAnimJointShape";
Transform200.child = new undefined();

Transform200.child[0] = Shape201;

Transform199.children = new MFNode();

Transform199.children[0] = Transform200;

HAnimSegment198.children = new MFNode();

HAnimSegment198.children[0] = Transform199;

Shape Shape202 = createNode("Shape");
LineSet LineSet203 = createNode("LineSet");
LineSet203.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA204 = createNode("ColorRGBA");
ColorRGBA204.USE = "HAnimSegmentLineColorRGBA";
LineSet203.color = ColorRGBA204;

Coordinate Coordinate205 = createNode("Coordinate");
Coordinate205.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet203.coord = Coordinate205;

Shape202.geometry = LineSet203;

HAnimSegment198.children[1] = Shape202;

HAnimJoint197.children = new MFNode();

HAnimJoint197.children[0] = HAnimSegment198;

HAnimJoint HAnimJoint206 = createNode("HAnimJoint");
HAnimJoint206.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint206.name = "l_tarsometatarsal_1";
HAnimJoint206.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment207 = createNode("HAnimSegment");
HAnimSegment207.DEF = "hanim_l_metatarsal_1";
HAnimSegment207.name = "l_metatarsal_1";
Transform Transform208 = createNode("Transform");
Transform Transform209 = createNode("Transform");
Shape Shape210 = createNode("Shape");
Shape210.USE = "HAnimJointShape";
Transform209.child = new undefined();

Transform209.child[0] = Shape210;

Transform208.children = new MFNode();

Transform208.children[0] = Transform209;

HAnimSegment207.children = new MFNode();

HAnimSegment207.children[0] = Transform208;

Shape Shape211 = createNode("Shape");
LineSet LineSet212 = createNode("LineSet");
LineSet212.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA213 = createNode("ColorRGBA");
ColorRGBA213.USE = "HAnimSegmentLineColorRGBA";
LineSet212.color = ColorRGBA213;

Coordinate Coordinate214 = createNode("Coordinate");
Coordinate214.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet212.coord = Coordinate214;

Shape211.geometry = LineSet212;

HAnimSegment207.children[1] = Shape211;

HAnimSite HAnimSite215 = createNode("HAnimSite");
HAnimSite215.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite215.name = "l_metatarsal_phalanx_1_pt";
HAnimSite215.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor216 = createNode("TouchSensor");
TouchSensor216.description = "HAnimSite l_metatarsal_phalanx_1_pt";
HAnimSite215.children = new MFNode();

HAnimSite215.children[0] = TouchSensor216;

Shape Shape217 = createNode("Shape");
Shape217.USE = "HAnimSiteShape";
HAnimSite215.children[1] = Shape217;

HAnimSegment207.children[2] = HAnimSite215;

HAnimJoint206.children = new MFNode();

HAnimJoint206.children[0] = HAnimSegment207;

HAnimJoint HAnimJoint218 = createNode("HAnimJoint");
HAnimJoint218.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint218.name = "l_metatarsophalangeal_1";
HAnimJoint218.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment219 = createNode("HAnimSegment");
HAnimSegment219.DEF = "hanim_l_tarsal_proximal_phalanx_1";
HAnimSegment219.name = "l_tarsal_proximal_phalanx_1";
Transform Transform220 = createNode("Transform");
Transform Transform221 = createNode("Transform");
Shape Shape222 = createNode("Shape");
Shape222.USE = "HAnimJointShape";
Transform221.child = new undefined();

Transform221.child[0] = Shape222;

Transform220.children = new MFNode();

Transform220.children[0] = Transform221;

HAnimSegment219.children = new MFNode();

HAnimSegment219.children[0] = Transform220;

Shape Shape223 = createNode("Shape");
LineSet LineSet224 = createNode("LineSet");
LineSet224.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA225 = createNode("ColorRGBA");
ColorRGBA225.USE = "HAnimSegmentLineColorRGBA";
LineSet224.color = ColorRGBA225;

Coordinate Coordinate226 = createNode("Coordinate");
Coordinate226.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet224.coord = Coordinate226;

Shape223.geometry = LineSet224;

HAnimSegment219.children[1] = Shape223;

HAnimSite HAnimSite227 = createNode("HAnimSite");
HAnimSite227.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimSite227.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite227.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor228 = createNode("TouchSensor");
TouchSensor228.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite227.children = new MFNode();

HAnimSite227.children[0] = TouchSensor228;

Shape Shape229 = createNode("Shape");
Shape229.USE = "HAnimSiteShape";
HAnimSite227.children[1] = Shape229;

HAnimSegment219.children[2] = HAnimSite227;

HAnimJoint218.children = new MFNode();

HAnimJoint218.children[0] = HAnimSegment219;

HAnimJoint HAnimJoint230 = createNode("HAnimJoint");
HAnimJoint230.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint230.name = "l_tarsal_interphalangeal_1";
HAnimJoint230.center = new SFVec3f(new float[0,1,0]);
HAnimJoint218.children[1] = HAnimJoint230;

HAnimJoint206.children[1] = HAnimJoint218;

HAnimJoint197.children[1] = HAnimJoint206;

HAnimJoint180.children[1] = HAnimJoint197;

HAnimJoint HAnimJoint231 = createNode("HAnimJoint");
HAnimJoint231.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint231.name = "l_cuneonavicular_2";
HAnimJoint231.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment232 = createNode("HAnimSegment");
HAnimSegment232.DEF = "hanim_l_cuneiform_2";
HAnimSegment232.name = "l_cuneiform_2";
Transform Transform233 = createNode("Transform");
Transform Transform234 = createNode("Transform");
Shape Shape235 = createNode("Shape");
Shape235.USE = "HAnimJointShape";
Transform234.child = new undefined();

Transform234.child[0] = Shape235;

Transform233.children = new MFNode();

Transform233.children[0] = Transform234;

HAnimSegment232.children = new MFNode();

HAnimSegment232.children[0] = Transform233;

Shape Shape236 = createNode("Shape");
LineSet LineSet237 = createNode("LineSet");
LineSet237.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA238 = createNode("ColorRGBA");
ColorRGBA238.USE = "HAnimSegmentLineColorRGBA";
LineSet237.color = ColorRGBA238;

Coordinate Coordinate239 = createNode("Coordinate");
Coordinate239.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet237.coord = Coordinate239;

Shape236.geometry = LineSet237;

HAnimSegment232.children[1] = Shape236;

HAnimJoint231.children = new MFNode();

HAnimJoint231.children[0] = HAnimSegment232;

HAnimJoint HAnimJoint240 = createNode("HAnimJoint");
HAnimJoint240.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint240.name = "l_tarsometatarsal_2";
HAnimJoint240.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment241 = createNode("HAnimSegment");
HAnimSegment241.DEF = "hanim_l_metatarsal_2";
HAnimSegment241.name = "l_metatarsal_2";
Transform Transform242 = createNode("Transform");
Transform Transform243 = createNode("Transform");
Shape Shape244 = createNode("Shape");
Shape244.USE = "HAnimJointShape";
Transform243.child = new undefined();

Transform243.child[0] = Shape244;

Transform242.children = new MFNode();

Transform242.children[0] = Transform243;

HAnimSegment241.children = new MFNode();

HAnimSegment241.children[0] = Transform242;

Shape Shape245 = createNode("Shape");
LineSet LineSet246 = createNode("LineSet");
LineSet246.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA247 = createNode("ColorRGBA");
ColorRGBA247.USE = "HAnimSegmentLineColorRGBA";
LineSet246.color = ColorRGBA247;

Coordinate Coordinate248 = createNode("Coordinate");
Coordinate248.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet246.coord = Coordinate248;

Shape245.geometry = LineSet246;

HAnimSegment241.children[1] = Shape245;

HAnimJoint240.children = new MFNode();

HAnimJoint240.children[0] = HAnimSegment241;

HAnimJoint HAnimJoint249 = createNode("HAnimJoint");
HAnimJoint249.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint249.name = "l_metatarsophalangeal_2";
HAnimJoint249.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment250 = createNode("HAnimSegment");
HAnimSegment250.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSegment250.name = "l_tarsal_proximal_phalanx_2";
Transform Transform251 = createNode("Transform");
Transform Transform252 = createNode("Transform");
Shape Shape253 = createNode("Shape");
Shape253.USE = "HAnimJointShape";
Transform252.child = new undefined();

Transform252.child[0] = Shape253;

Transform251.children = new MFNode();

Transform251.children[0] = Transform252;

HAnimSegment250.children = new MFNode();

HAnimSegment250.children[0] = Transform251;

Shape Shape254 = createNode("Shape");
LineSet LineSet255 = createNode("LineSet");
LineSet255.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA256 = createNode("ColorRGBA");
ColorRGBA256.USE = "HAnimSegmentLineColorRGBA";
LineSet255.color = ColorRGBA256;

Coordinate Coordinate257 = createNode("Coordinate");
Coordinate257.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet255.coord = Coordinate257;

Shape254.geometry = LineSet255;

HAnimSegment250.children[1] = Shape254;

HAnimJoint249.children = new MFNode();

HAnimJoint249.children[0] = HAnimSegment250;

HAnimJoint HAnimJoint258 = createNode("HAnimJoint");
HAnimJoint258.DEF = "hanim_l_tarsal_proximal_interphalangeal_1";
HAnimJoint258.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint258.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment259 = createNode("HAnimSegment");
HAnimSegment259.DEF = "hanim_l_tarsal_middle_phalanx_1";
HAnimSegment259.name = "l_tarsal_middle_phalanx_2";
Transform Transform260 = createNode("Transform");
Transform Transform261 = createNode("Transform");
Shape Shape262 = createNode("Shape");
Shape262.USE = "HAnimJointShape";
Transform261.child = new undefined();

Transform261.child[0] = Shape262;

Transform260.children = new MFNode();

Transform260.children[0] = Transform261;

HAnimSegment259.children = new MFNode();

HAnimSegment259.children[0] = Transform260;

Shape Shape263 = createNode("Shape");
LineSet LineSet264 = createNode("LineSet");
LineSet264.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA265 = createNode("ColorRGBA");
ColorRGBA265.USE = "HAnimSegmentLineColorRGBA";
LineSet264.color = ColorRGBA265;

Coordinate Coordinate266 = createNode("Coordinate");
Coordinate266.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet264.coord = Coordinate266;

Shape263.geometry = LineSet264;

HAnimSegment259.children[1] = Shape263;

HAnimSite HAnimSite267 = createNode("HAnimSite");
HAnimSite267.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite267.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite267.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
TouchSensor TouchSensor268 = createNode("TouchSensor");
TouchSensor268.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite267.children = new MFNode();

HAnimSite267.children[0] = TouchSensor268;

Shape Shape269 = createNode("Shape");
Shape269.USE = "HAnimSiteShape";
HAnimSite267.children[1] = Shape269;

HAnimSegment259.children[2] = HAnimSite267;

HAnimJoint258.children = new MFNode();

HAnimJoint258.children[0] = HAnimSegment259;

HAnimJoint HAnimJoint270 = createNode("HAnimJoint");
HAnimJoint270.DEF = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimJoint270.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint270.center = new SFVec3f(new float[0,1,0]);
HAnimJoint258.children[1] = HAnimJoint270;

HAnimJoint249.children[1] = HAnimJoint258;

HAnimJoint240.children[1] = HAnimJoint249;

HAnimJoint231.children[1] = HAnimJoint240;

HAnimJoint180.children[2] = HAnimJoint231;

HAnimJoint HAnimJoint271 = createNode("HAnimJoint");
HAnimJoint271.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint271.name = "l_cuneonavicular_3";
HAnimJoint271.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment272 = createNode("HAnimSegment");
HAnimSegment272.DEF = "hanim_l_cuneiform_3";
HAnimSegment272.name = "l_cuneiform_3";
Transform Transform273 = createNode("Transform");
Transform Transform274 = createNode("Transform");
Shape Shape275 = createNode("Shape");
Shape275.USE = "HAnimJointShape";
Transform274.child = new undefined();

Transform274.child[0] = Shape275;

Transform273.children = new MFNode();

Transform273.children[0] = Transform274;

HAnimSegment272.children = new MFNode();

HAnimSegment272.children[0] = Transform273;

Shape Shape276 = createNode("Shape");
LineSet LineSet277 = createNode("LineSet");
LineSet277.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA278 = createNode("ColorRGBA");
ColorRGBA278.USE = "HAnimSegmentLineColorRGBA";
LineSet277.color = ColorRGBA278;

Coordinate Coordinate279 = createNode("Coordinate");
Coordinate279.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet277.coord = Coordinate279;

Shape276.geometry = LineSet277;

HAnimSegment272.children[1] = Shape276;

HAnimJoint271.children = new MFNode();

HAnimJoint271.children[0] = HAnimSegment272;

HAnimJoint HAnimJoint280 = createNode("HAnimJoint");
HAnimJoint280.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint280.name = "l_tarsometatarsal_3";
HAnimJoint280.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment281 = createNode("HAnimSegment");
HAnimSegment281.DEF = "hanim_l_metatarsal_3";
HAnimSegment281.name = "l_metatarsal_3";
Transform Transform282 = createNode("Transform");
Transform Transform283 = createNode("Transform");
Shape Shape284 = createNode("Shape");
Shape284.USE = "HAnimJointShape";
Transform283.child = new undefined();

Transform283.child[0] = Shape284;

Transform282.children = new MFNode();

Transform282.children[0] = Transform283;

HAnimSegment281.children = new MFNode();

HAnimSegment281.children[0] = Transform282;

Shape Shape285 = createNode("Shape");
LineSet LineSet286 = createNode("LineSet");
LineSet286.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA287 = createNode("ColorRGBA");
ColorRGBA287.USE = "HAnimSegmentLineColorRGBA";
LineSet286.color = ColorRGBA287;

Coordinate Coordinate288 = createNode("Coordinate");
Coordinate288.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet286.coord = Coordinate288;

Shape285.geometry = LineSet286;

HAnimSegment281.children[1] = Shape285;

HAnimJoint280.children = new MFNode();

HAnimJoint280.children[0] = HAnimSegment281;

HAnimJoint HAnimJoint289 = createNode("HAnimJoint");
HAnimJoint289.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint289.name = "l_metatarsophalangeal_3";
HAnimJoint289.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment290 = createNode("HAnimSegment");
HAnimSegment290.DEF = "hanim_l_tarsal_proximal_phalanx_3";
HAnimSegment290.name = "l_tarsal_proximal_phalanx_3";
Transform Transform291 = createNode("Transform");
Transform Transform292 = createNode("Transform");
Shape Shape293 = createNode("Shape");
Shape293.USE = "HAnimJointShape";
Transform292.child = new undefined();

Transform292.child[0] = Shape293;

Transform291.children = new MFNode();

Transform291.children[0] = Transform292;

HAnimSegment290.children = new MFNode();

HAnimSegment290.children[0] = Transform291;

Shape Shape294 = createNode("Shape");
LineSet LineSet295 = createNode("LineSet");
LineSet295.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA296 = createNode("ColorRGBA");
ColorRGBA296.USE = "HAnimSegmentLineColorRGBA";
LineSet295.color = ColorRGBA296;

Coordinate Coordinate297 = createNode("Coordinate");
Coordinate297.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet295.coord = Coordinate297;

Shape294.geometry = LineSet295;

HAnimSegment290.children[1] = Shape294;

HAnimJoint289.children = new MFNode();

HAnimJoint289.children[0] = HAnimSegment290;

HAnimJoint HAnimJoint298 = createNode("HAnimJoint");
HAnimJoint298.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint298.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint298.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment299 = createNode("HAnimSegment");
HAnimSegment299.DEF = "hanim_l_tarsal_middle_phalanx_2";
HAnimSegment299.name = "l_tarsal_middle_phalanx_3";
Transform Transform300 = createNode("Transform");
Transform Transform301 = createNode("Transform");
Shape Shape302 = createNode("Shape");
Shape302.USE = "HAnimJointShape";
Transform301.child = new undefined();

Transform301.child[0] = Shape302;

Transform300.children = new MFNode();

Transform300.children[0] = Transform301;

HAnimSegment299.children = new MFNode();

HAnimSegment299.children[0] = Transform300;

Shape Shape303 = createNode("Shape");
LineSet LineSet304 = createNode("LineSet");
LineSet304.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA305 = createNode("ColorRGBA");
ColorRGBA305.USE = "HAnimSegmentLineColorRGBA";
LineSet304.color = ColorRGBA305;

Coordinate Coordinate306 = createNode("Coordinate");
Coordinate306.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet304.coord = Coordinate306;

Shape303.geometry = LineSet304;

HAnimSegment299.children[1] = Shape303;

HAnimSite HAnimSite307 = createNode("HAnimSite");
HAnimSite307.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimSite307.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite307.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor308 = createNode("TouchSensor");
TouchSensor308.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite307.children = new MFNode();

HAnimSite307.children[0] = TouchSensor308;

Shape Shape309 = createNode("Shape");
Shape309.USE = "HAnimSiteShape";
HAnimSite307.children[1] = Shape309;

HAnimSegment299.children[2] = HAnimSite307;

HAnimJoint298.children = new MFNode();

HAnimJoint298.children[0] = HAnimSegment299;

HAnimJoint HAnimJoint310 = createNode("HAnimJoint");
HAnimJoint310.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint310.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint310.center = new SFVec3f(new float[0,1,0]);
HAnimJoint298.children[1] = HAnimJoint310;

HAnimJoint289.children[1] = HAnimJoint298;

HAnimJoint280.children[1] = HAnimJoint289;

HAnimJoint271.children[1] = HAnimJoint280;

HAnimJoint180.children[3] = HAnimJoint271;

HAnimJoint167.children[1] = HAnimJoint180;

HAnimJoint HAnimJoint311 = createNode("HAnimJoint");
HAnimJoint311.DEF = "hanim_l_calcaneocuboid";
HAnimJoint311.name = "l_calcaneocuboid";
HAnimJoint311.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment312 = createNode("HAnimSegment");
HAnimSegment312.DEF = "hanim_l_calcaneus";
HAnimSegment312.name = "l_calcaneus";
Transform Transform313 = createNode("Transform");
Transform Transform314 = createNode("Transform");
Shape Shape315 = createNode("Shape");
Shape315.USE = "HAnimJointShape";
Transform314.child = new undefined();

Transform314.child[0] = Shape315;

Transform313.children = new MFNode();

Transform313.children[0] = Transform314;

HAnimSegment312.children = new MFNode();

HAnimSegment312.children[0] = Transform313;

Shape Shape316 = createNode("Shape");
LineSet LineSet317 = createNode("LineSet");
LineSet317.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA318 = createNode("ColorRGBA");
ColorRGBA318.USE = "HAnimSegmentLineColorRGBA";
LineSet317.color = ColorRGBA318;

Coordinate Coordinate319 = createNode("Coordinate");
Coordinate319.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet317.coord = Coordinate319;

Shape316.geometry = LineSet317;

HAnimSegment312.children[1] = Shape316;

HAnimJoint311.children = new MFNode();

HAnimJoint311.children[0] = HAnimSegment312;

HAnimJoint HAnimJoint320 = createNode("HAnimJoint");
HAnimJoint320.DEF = "hanim_l_transversetarsal";
HAnimJoint320.name = "l_transversetarsal";
HAnimJoint320.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment321 = createNode("HAnimSegment");
HAnimSegment321.DEF = "hanim_l_cuboid";
HAnimSegment321.name = "l_cuboid";
Transform Transform322 = createNode("Transform");
Transform Transform323 = createNode("Transform");
Shape Shape324 = createNode("Shape");
Shape324.USE = "HAnimJointShape";
Transform323.child = new undefined();

Transform323.child[0] = Shape324;

Transform322.children = new MFNode();

Transform322.children[0] = Transform323;

HAnimSegment321.children = new MFNode();

HAnimSegment321.children[0] = Transform322;

Shape Shape325 = createNode("Shape");
LineSet LineSet326 = createNode("LineSet");
LineSet326.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA327 = createNode("ColorRGBA");
ColorRGBA327.USE = "HAnimSegmentLineColorRGBA";
LineSet326.color = ColorRGBA327;

Coordinate Coordinate328 = createNode("Coordinate");
Coordinate328.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet326.coord = Coordinate328;

Shape325.geometry = LineSet326;

HAnimSegment321.children[1] = Shape325;

Shape Shape329 = createNode("Shape");
LineSet LineSet330 = createNode("LineSet");
LineSet330.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA331 = createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSegmentLineColorRGBA";
LineSet330.color = ColorRGBA331;

Coordinate Coordinate332 = createNode("Coordinate");
Coordinate332.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet330.coord = Coordinate332;

Shape329.geometry = LineSet330;

HAnimSegment321.children[2] = Shape329;

HAnimJoint320.children = new MFNode();

HAnimJoint320.children[0] = HAnimSegment321;

HAnimJoint HAnimJoint333 = createNode("HAnimJoint");
HAnimJoint333.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint333.name = "l_tarsometatarsal_4";
HAnimJoint333.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment334 = createNode("HAnimSegment");
HAnimSegment334.DEF = "hanim_l_metatarsal_4";
HAnimSegment334.name = "l_metatarsal_4";
Transform Transform335 = createNode("Transform");
Transform Transform336 = createNode("Transform");
Shape Shape337 = createNode("Shape");
Shape337.USE = "HAnimJointShape";
Transform336.child = new undefined();

Transform336.child[0] = Shape337;

Transform335.children = new MFNode();

Transform335.children[0] = Transform336;

HAnimSegment334.children = new MFNode();

HAnimSegment334.children[0] = Transform335;

Shape Shape338 = createNode("Shape");
LineSet LineSet339 = createNode("LineSet");
LineSet339.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA340 = createNode("ColorRGBA");
ColorRGBA340.USE = "HAnimSegmentLineColorRGBA";
LineSet339.color = ColorRGBA340;

Coordinate Coordinate341 = createNode("Coordinate");
Coordinate341.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet339.coord = Coordinate341;

Shape338.geometry = LineSet339;

HAnimSegment334.children[1] = Shape338;

HAnimJoint333.children = new MFNode();

HAnimJoint333.children[0] = HAnimSegment334;

HAnimJoint HAnimJoint342 = createNode("HAnimJoint");
HAnimJoint342.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint342.name = "l_metatarsophalangeal_4";
HAnimJoint342.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment343 = createNode("HAnimSegment");
HAnimSegment343.DEF = "hanim_l_tarsal_proximal_phalanx_4";
HAnimSegment343.name = "l_tarsal_proximal_phalanx_4";
Transform Transform344 = createNode("Transform");
Transform Transform345 = createNode("Transform");
Shape Shape346 = createNode("Shape");
Shape346.USE = "HAnimJointShape";
Transform345.child = new undefined();

Transform345.child[0] = Shape346;

Transform344.children = new MFNode();

Transform344.children[0] = Transform345;

HAnimSegment343.children = new MFNode();

HAnimSegment343.children[0] = Transform344;

Shape Shape347 = createNode("Shape");
LineSet LineSet348 = createNode("LineSet");
LineSet348.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA349 = createNode("ColorRGBA");
ColorRGBA349.USE = "HAnimSegmentLineColorRGBA";
LineSet348.color = ColorRGBA349;

Coordinate Coordinate350 = createNode("Coordinate");
Coordinate350.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet348.coord = Coordinate350;

Shape347.geometry = LineSet348;

HAnimSegment343.children[1] = Shape347;

HAnimJoint342.children = new MFNode();

HAnimJoint342.children[0] = HAnimSegment343;

HAnimJoint HAnimJoint351 = createNode("HAnimJoint");
HAnimJoint351.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint351.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint351.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment352 = createNode("HAnimSegment");
HAnimSegment352.DEF = "hanim_l_tarsal_middle_phalanx_3";
HAnimSegment352.name = "l_tarsal_middle_phalanx_4";
Transform Transform353 = createNode("Transform");
Transform Transform354 = createNode("Transform");
Shape Shape355 = createNode("Shape");
Shape355.USE = "HAnimJointShape";
Transform354.child = new undefined();

Transform354.child[0] = Shape355;

Transform353.children = new MFNode();

Transform353.children[0] = Transform354;

HAnimSegment352.children = new MFNode();

HAnimSegment352.children[0] = Transform353;

Shape Shape356 = createNode("Shape");
LineSet LineSet357 = createNode("LineSet");
LineSet357.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA358 = createNode("ColorRGBA");
ColorRGBA358.USE = "HAnimSegmentLineColorRGBA";
LineSet357.color = ColorRGBA358;

Coordinate Coordinate359 = createNode("Coordinate");
Coordinate359.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet357.coord = Coordinate359;

Shape356.geometry = LineSet357;

HAnimSegment352.children[1] = Shape356;

HAnimSite HAnimSite360 = createNode("HAnimSite");
HAnimSite360.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimSite360.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite360.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor361 = createNode("TouchSensor");
TouchSensor361.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite360.children = new MFNode();

HAnimSite360.children[0] = TouchSensor361;

Shape Shape362 = createNode("Shape");
Shape362.USE = "HAnimSiteShape";
HAnimSite360.children[1] = Shape362;

HAnimSegment352.children[2] = HAnimSite360;

HAnimJoint351.children = new MFNode();

HAnimJoint351.children[0] = HAnimSegment352;

HAnimJoint HAnimJoint363 = createNode("HAnimJoint");
HAnimJoint363.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint363.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint363.center = new SFVec3f(new float[0,1,0]);
HAnimJoint351.children[1] = HAnimJoint363;

HAnimJoint342.children[1] = HAnimJoint351;

HAnimJoint333.children[1] = HAnimJoint342;

HAnimJoint320.children[1] = HAnimJoint333;

HAnimJoint HAnimJoint364 = createNode("HAnimJoint");
HAnimJoint364.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint364.name = "l_tarsometatarsal_5";
HAnimJoint364.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment365 = createNode("HAnimSegment");
HAnimSegment365.DEF = "hanim_l_metatarsal_5";
HAnimSegment365.name = "l_metatarsal_5";
Transform Transform366 = createNode("Transform");
Transform Transform367 = createNode("Transform");
Shape Shape368 = createNode("Shape");
Shape368.USE = "HAnimJointShape";
Transform367.child = new undefined();

Transform367.child[0] = Shape368;

Transform366.children = new MFNode();

Transform366.children[0] = Transform367;

HAnimSegment365.children = new MFNode();

HAnimSegment365.children[0] = Transform366;

Shape Shape369 = createNode("Shape");
LineSet LineSet370 = createNode("LineSet");
LineSet370.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA371 = createNode("ColorRGBA");
ColorRGBA371.USE = "HAnimSegmentLineColorRGBA";
LineSet370.color = ColorRGBA371;

Coordinate Coordinate372 = createNode("Coordinate");
Coordinate372.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet370.coord = Coordinate372;

Shape369.geometry = LineSet370;

HAnimSegment365.children[1] = Shape369;

HAnimSite HAnimSite373 = createNode("HAnimSite");
HAnimSite373.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite373.name = "l_metatarsal_phalanx_5_pt";
HAnimSite373.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor374 = createNode("TouchSensor");
TouchSensor374.description = "HAnimSite l_metatarsal_phalanx_5_pt";
HAnimSite373.children = new MFNode();

HAnimSite373.children[0] = TouchSensor374;

Shape Shape375 = createNode("Shape");
Shape375.USE = "HAnimSiteShape";
HAnimSite373.children[1] = Shape375;

HAnimSegment365.children[2] = HAnimSite373;

HAnimJoint364.children = new MFNode();

HAnimJoint364.children[0] = HAnimSegment365;

HAnimJoint HAnimJoint376 = createNode("HAnimJoint");
HAnimJoint376.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint376.name = "l_metatarsophalangeal_5";
HAnimJoint376.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment377 = createNode("HAnimSegment");
HAnimSegment377.DEF = "hanim_l_tarsal_proximal_phalanx_5";
HAnimSegment377.name = "l_tarsal_proximal_phalanx_5";
Transform Transform378 = createNode("Transform");
Transform Transform379 = createNode("Transform");
Shape Shape380 = createNode("Shape");
Shape380.USE = "HAnimJointShape";
Transform379.child = new undefined();

Transform379.child[0] = Shape380;

Transform378.children = new MFNode();

Transform378.children[0] = Transform379;

HAnimSegment377.children = new MFNode();

HAnimSegment377.children[0] = Transform378;

Shape Shape381 = createNode("Shape");
LineSet LineSet382 = createNode("LineSet");
LineSet382.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA383 = createNode("ColorRGBA");
ColorRGBA383.USE = "HAnimSegmentLineColorRGBA";
LineSet382.color = ColorRGBA383;

Coordinate Coordinate384 = createNode("Coordinate");
Coordinate384.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet382.coord = Coordinate384;

Shape381.geometry = LineSet382;

HAnimSegment377.children[1] = Shape381;

HAnimJoint376.children = new MFNode();

HAnimJoint376.children[0] = HAnimSegment377;

HAnimJoint HAnimJoint385 = createNode("HAnimJoint");
HAnimJoint385.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint385.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint385.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment386 = createNode("HAnimSegment");
HAnimSegment386.DEF = "hanim_l_tarsal_middle_phalanx_4";
HAnimSegment386.name = "l_tarsal_middle_phalanx_5";
Transform Transform387 = createNode("Transform");
Transform Transform388 = createNode("Transform");
Shape Shape389 = createNode("Shape");
Shape389.USE = "HAnimJointShape";
Transform388.child = new undefined();

Transform388.child[0] = Shape389;

Transform387.children = new MFNode();

Transform387.children[0] = Transform388;

HAnimSegment386.children = new MFNode();

HAnimSegment386.children[0] = Transform387;

Shape Shape390 = createNode("Shape");
LineSet LineSet391 = createNode("LineSet");
LineSet391.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA392 = createNode("ColorRGBA");
ColorRGBA392.USE = "HAnimSegmentLineColorRGBA";
LineSet391.color = ColorRGBA392;

Coordinate Coordinate393 = createNode("Coordinate");
Coordinate393.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet391.coord = Coordinate393;

Shape390.geometry = LineSet391;

HAnimSegment386.children[1] = Shape390;

HAnimSite HAnimSite394 = createNode("HAnimSite");
HAnimSite394.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimSite394.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite394.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor395 = createNode("TouchSensor");
TouchSensor395.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite394.children = new MFNode();

HAnimSite394.children[0] = TouchSensor395;

Shape Shape396 = createNode("Shape");
Shape396.USE = "HAnimSiteShape";
HAnimSite394.children[1] = Shape396;

HAnimSegment386.children[2] = HAnimSite394;

HAnimJoint385.children = new MFNode();

HAnimJoint385.children[0] = HAnimSegment386;

HAnimJoint HAnimJoint397 = createNode("HAnimJoint");
HAnimJoint397.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint397.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint397.center = new SFVec3f(new float[0,1,0]);
HAnimJoint385.children[1] = HAnimJoint397;

HAnimJoint376.children[1] = HAnimJoint385;

HAnimJoint364.children[1] = HAnimJoint376;

HAnimJoint320.children[2] = HAnimJoint364;

HAnimJoint311.children[1] = HAnimJoint320;

HAnimJoint167.children[2] = HAnimJoint311;

HAnimJoint152.children[1] = HAnimJoint167;

HAnimJoint134.children[1] = HAnimJoint152;

HAnimJoint97.children[1] = HAnimJoint134;

HAnimJoint HAnimJoint398 = createNode("HAnimJoint");
HAnimJoint398.DEF = "hanim_r_hip";
HAnimJoint398.name = "r_hip";
HAnimJoint398.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimSegment HAnimSegment399 = createNode("HAnimSegment");
HAnimSegment399.DEF = "hanim_r_thigh";
HAnimSegment399.name = "r_thigh";
Transform Transform400 = createNode("Transform");
Transform Transform401 = createNode("Transform");
Shape Shape402 = createNode("Shape");
Shape402.USE = "HAnimJointShape";
Transform401.child = new undefined();

Transform401.child[0] = Shape402;

Transform400.children = new MFNode();

Transform400.children[0] = Transform401;

HAnimSegment399.children = new MFNode();

HAnimSegment399.children[0] = Transform400;

Shape Shape403 = createNode("Shape");
LineSet LineSet404 = createNode("LineSet");
LineSet404.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA405 = createNode("ColorRGBA");
ColorRGBA405.USE = "HAnimSegmentLineColorRGBA";
LineSet404.color = ColorRGBA405;

Coordinate Coordinate406 = createNode("Coordinate");
Coordinate406.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet404.coord = Coordinate406;

Shape403.geometry = LineSet404;

HAnimSegment399.children[1] = Shape403;

HAnimSite HAnimSite407 = createNode("HAnimSite");
HAnimSite407.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite407.name = "r_lateral_malleolus_pt";
HAnimSite407.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor408 = createNode("TouchSensor");
TouchSensor408.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite407.children = new MFNode();

HAnimSite407.children[0] = TouchSensor408;

Shape Shape409 = createNode("Shape");
Shape409.USE = "HAnimSiteShape";
HAnimSite407.children[1] = Shape409;

HAnimSegment399.children[2] = HAnimSite407;

HAnimSite HAnimSite410 = createNode("HAnimSite");
HAnimSite410.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite410.name = "r_medial_malleolus_pt";
HAnimSite410.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor411 = createNode("TouchSensor");
TouchSensor411.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite410.children = new MFNode();

HAnimSite410.children[0] = TouchSensor411;

Shape Shape412 = createNode("Shape");
Shape412.USE = "HAnimSiteShape";
HAnimSite410.children[1] = Shape412;

HAnimSegment399.children[3] = HAnimSite410;

HAnimSite HAnimSite413 = createNode("HAnimSite");
HAnimSite413.DEF = "hanim_r_tibiale_pt";
HAnimSite413.name = "r_tibiale_pt";
HAnimSite413.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor414 = createNode("TouchSensor");
TouchSensor414.description = "HAnimSite r_tibiale_pt";
HAnimSite413.children = new MFNode();

HAnimSite413.children[0] = TouchSensor414;

Shape Shape415 = createNode("Shape");
Shape415.USE = "HAnimSiteShape";
HAnimSite413.children[1] = Shape415;

HAnimSegment399.children[4] = HAnimSite413;

HAnimJoint398.children = new MFNode();

HAnimJoint398.children[0] = HAnimSegment399;

HAnimJoint HAnimJoint416 = createNode("HAnimJoint");
HAnimJoint416.DEF = "hanim_r_knee";
HAnimJoint416.name = "r_knee";
HAnimJoint416.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimSegment HAnimSegment417 = createNode("HAnimSegment");
HAnimSegment417.DEF = "hanim_r_calf";
HAnimSegment417.name = "r_calf";
Transform Transform418 = createNode("Transform");
Transform Transform419 = createNode("Transform");
Shape Shape420 = createNode("Shape");
Shape420.USE = "HAnimJointShape";
Transform419.child = new undefined();

Transform419.child[0] = Shape420;

Transform418.children = new MFNode();

Transform418.children[0] = Transform419;

HAnimSegment417.children = new MFNode();

HAnimSegment417.children[0] = Transform418;

Shape Shape421 = createNode("Shape");
LineSet LineSet422 = createNode("LineSet");
LineSet422.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA423 = createNode("ColorRGBA");
ColorRGBA423.USE = "HAnimSegmentLineColorRGBA";
LineSet422.color = ColorRGBA423;

Coordinate Coordinate424 = createNode("Coordinate");
Coordinate424.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet422.coord = Coordinate424;

Shape421.geometry = LineSet422;

HAnimSegment417.children[1] = Shape421;

HAnimSite HAnimSite425 = createNode("HAnimSite");
HAnimSite425.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite425.name = "r_calcaneus_posterior_pt";
HAnimSite425.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor426 = createNode("TouchSensor");
TouchSensor426.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite425.children = new MFNode();

HAnimSite425.children[0] = TouchSensor426;

Shape Shape427 = createNode("Shape");
Shape427.USE = "HAnimSiteShape";
HAnimSite425.children[1] = Shape427;

HAnimSegment417.children[2] = HAnimSite425;

HAnimSite HAnimSite428 = createNode("HAnimSite");
HAnimSite428.DEF = "hanim_r_sphyrion_pt";
HAnimSite428.name = "r_sphyrion_pt";
HAnimSite428.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor429 = createNode("TouchSensor");
TouchSensor429.description = "HAnimSite r_sphyrion_pt";
HAnimSite428.children = new MFNode();

HAnimSite428.children[0] = TouchSensor429;

Shape Shape430 = createNode("Shape");
Shape430.USE = "HAnimSiteShape";
HAnimSite428.children[1] = Shape430;

HAnimSegment417.children[3] = HAnimSite428;

HAnimJoint416.children = new MFNode();

HAnimJoint416.children[0] = HAnimSegment417;

HAnimJoint HAnimJoint431 = createNode("HAnimJoint");
HAnimJoint431.DEF = "hanim_r_talocrural";
HAnimJoint431.name = "r_talocrural";
HAnimJoint431.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimSegment HAnimSegment432 = createNode("HAnimSegment");
HAnimSegment432.DEF = "hanim_r_talus";
HAnimSegment432.name = "r_talus";
Transform Transform433 = createNode("Transform");
Transform433.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform433.rotation = new SFRotation(new float[1,0,0,-1.57]);
Transform433.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform Transform434 = createNode("Transform");
Shape Shape435 = createNode("Shape");
Shape435.USE = "HAnimJointShape";
Transform434.child = new undefined();

Transform434.child[0] = Shape435;

Transform433.children = new MFNode();

Transform433.children[0] = Transform434;

HAnimSegment432.children = new MFNode();

HAnimSegment432.children[0] = Transform433;

Shape Shape436 = createNode("Shape");
LineSet LineSet437 = createNode("LineSet");
LineSet437.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA438 = createNode("ColorRGBA");
ColorRGBA438.USE = "HAnimSegmentLineColorRGBA";
LineSet437.color = ColorRGBA438;

Coordinate Coordinate439 = createNode("Coordinate");
Coordinate439.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,0,1,0]);
LineSet437.coord = Coordinate439;

Shape436.geometry = LineSet437;

HAnimSegment432.children[1] = Shape436;

Shape Shape440 = createNode("Shape");
LineSet LineSet441 = createNode("LineSet");
LineSet441.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA442 = createNode("ColorRGBA");
ColorRGBA442.USE = "HAnimSegmentLineColorRGBA";
LineSet441.color = ColorRGBA442;

Coordinate Coordinate443 = createNode("Coordinate");
Coordinate443.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,0,1,0]);
LineSet441.coord = Coordinate443;

Shape440.geometry = LineSet441;

HAnimSegment432.children[2] = Shape440;

HAnimJoint431.children = new MFNode();

HAnimJoint431.children[0] = HAnimSegment432;

HAnimJoint HAnimJoint444 = createNode("HAnimJoint");
HAnimJoint444.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint444.name = "r_talocalcaneonavicular";
HAnimJoint444.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment445 = createNode("HAnimSegment");
HAnimSegment445.DEF = "hanim_r_navicular";
HAnimSegment445.name = "r_navicular";
Transform Transform446 = createNode("Transform");
Transform Transform447 = createNode("Transform");
Shape Shape448 = createNode("Shape");
Shape448.USE = "HAnimJointShape";
Transform447.child = new undefined();

Transform447.child[0] = Shape448;

Transform446.children = new MFNode();

Transform446.children[0] = Transform447;

HAnimSegment445.children = new MFNode();

HAnimSegment445.children[0] = Transform446;

Shape Shape449 = createNode("Shape");
LineSet LineSet450 = createNode("LineSet");
LineSet450.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA451 = createNode("ColorRGBA");
ColorRGBA451.USE = "HAnimSegmentLineColorRGBA";
LineSet450.color = ColorRGBA451;

Coordinate Coordinate452 = createNode("Coordinate");
Coordinate452.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet450.coord = Coordinate452;

Shape449.geometry = LineSet450;

HAnimSegment445.children[1] = Shape449;

Shape Shape453 = createNode("Shape");
LineSet LineSet454 = createNode("LineSet");
LineSet454.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA455 = createNode("ColorRGBA");
ColorRGBA455.USE = "HAnimSegmentLineColorRGBA";
LineSet454.color = ColorRGBA455;

Coordinate Coordinate456 = createNode("Coordinate");
Coordinate456.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet454.coord = Coordinate456;

Shape453.geometry = LineSet454;

HAnimSegment445.children[2] = Shape453;

Shape Shape457 = createNode("Shape");
LineSet LineSet458 = createNode("LineSet");
LineSet458.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA459 = createNode("ColorRGBA");
ColorRGBA459.USE = "HAnimSegmentLineColorRGBA";
LineSet458.color = ColorRGBA459;

Coordinate Coordinate460 = createNode("Coordinate");
Coordinate460.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet458.coord = Coordinate460;

Shape457.geometry = LineSet458;

HAnimSegment445.children[3] = Shape457;

HAnimJoint444.children = new MFNode();

HAnimJoint444.children[0] = HAnimSegment445;

HAnimJoint HAnimJoint461 = createNode("HAnimJoint");
HAnimJoint461.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint461.name = "r_cuneonavicular_1";
HAnimJoint461.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment462 = createNode("HAnimSegment");
HAnimSegment462.DEF = "hanim_r_cuneiform_1";
HAnimSegment462.name = "r_cuneiform_1";
Transform Transform463 = createNode("Transform");
Transform Transform464 = createNode("Transform");
Shape Shape465 = createNode("Shape");
Shape465.USE = "HAnimJointShape";
Transform464.child = new undefined();

Transform464.child[0] = Shape465;

Transform463.children = new MFNode();

Transform463.children[0] = Transform464;

HAnimSegment462.children = new MFNode();

HAnimSegment462.children[0] = Transform463;

Shape Shape466 = createNode("Shape");
LineSet LineSet467 = createNode("LineSet");
LineSet467.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA468 = createNode("ColorRGBA");
ColorRGBA468.USE = "HAnimSegmentLineColorRGBA";
LineSet467.color = ColorRGBA468;

Coordinate Coordinate469 = createNode("Coordinate");
Coordinate469.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet467.coord = Coordinate469;

Shape466.geometry = LineSet467;

HAnimSegment462.children[1] = Shape466;

HAnimJoint461.children = new MFNode();

HAnimJoint461.children[0] = HAnimSegment462;

HAnimJoint HAnimJoint470 = createNode("HAnimJoint");
HAnimJoint470.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint470.name = "r_tarsometatarsal_1";
HAnimJoint470.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment471 = createNode("HAnimSegment");
HAnimSegment471.DEF = "hanim_r_metatarsal_1";
HAnimSegment471.name = "r_metatarsal_1";
Transform Transform472 = createNode("Transform");
Transform Transform473 = createNode("Transform");
Shape Shape474 = createNode("Shape");
Shape474.USE = "HAnimJointShape";
Transform473.child = new undefined();

Transform473.child[0] = Shape474;

Transform472.children = new MFNode();

Transform472.children[0] = Transform473;

HAnimSegment471.children = new MFNode();

HAnimSegment471.children[0] = Transform472;

Shape Shape475 = createNode("Shape");
LineSet LineSet476 = createNode("LineSet");
LineSet476.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA477 = createNode("ColorRGBA");
ColorRGBA477.USE = "HAnimSegmentLineColorRGBA";
LineSet476.color = ColorRGBA477;

Coordinate Coordinate478 = createNode("Coordinate");
Coordinate478.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet476.coord = Coordinate478;

Shape475.geometry = LineSet476;

HAnimSegment471.children[1] = Shape475;

HAnimSite HAnimSite479 = createNode("HAnimSite");
HAnimSite479.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite479.name = "r_metatarsal_phalanx_1_pt";
HAnimSite479.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor480 = createNode("TouchSensor");
TouchSensor480.description = "HAnimSite r_metatarsal_phalanx_1_pt";
HAnimSite479.children = new MFNode();

HAnimSite479.children[0] = TouchSensor480;

Shape Shape481 = createNode("Shape");
Shape481.USE = "HAnimSiteShape";
HAnimSite479.children[1] = Shape481;

HAnimSegment471.children[2] = HAnimSite479;

HAnimJoint470.children = new MFNode();

HAnimJoint470.children[0] = HAnimSegment471;

HAnimJoint HAnimJoint482 = createNode("HAnimJoint");
HAnimJoint482.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint482.name = "r_metatarsophalangeal_1";
HAnimJoint482.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment483 = createNode("HAnimSegment");
HAnimSegment483.DEF = "hanim_r_tarsal_proximal_phalanx_1";
HAnimSegment483.name = "r_tarsal_proximal_phalanx_1";
Transform Transform484 = createNode("Transform");
Transform Transform485 = createNode("Transform");
Shape Shape486 = createNode("Shape");
Shape486.USE = "HAnimJointShape";
Transform485.child = new undefined();

Transform485.child[0] = Shape486;

Transform484.children = new MFNode();

Transform484.children[0] = Transform485;

HAnimSegment483.children = new MFNode();

HAnimSegment483.children[0] = Transform484;

Shape Shape487 = createNode("Shape");
LineSet LineSet488 = createNode("LineSet");
LineSet488.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA489 = createNode("ColorRGBA");
ColorRGBA489.USE = "HAnimSegmentLineColorRGBA";
LineSet488.color = ColorRGBA489;

Coordinate Coordinate490 = createNode("Coordinate");
Coordinate490.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet488.coord = Coordinate490;

Shape487.geometry = LineSet488;

HAnimSegment483.children[1] = Shape487;

HAnimSite HAnimSite491 = createNode("HAnimSite");
HAnimSite491.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimSite491.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite491.translation = new SFVec3f(new float[0.1,-1.05,0]);
TouchSensor TouchSensor492 = createNode("TouchSensor");
TouchSensor492.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite491.children = new MFNode();

HAnimSite491.children[0] = TouchSensor492;

Shape Shape493 = createNode("Shape");
Shape493.USE = "HAnimSiteShape";
HAnimSite491.children[1] = Shape493;

HAnimSegment483.children[2] = HAnimSite491;

HAnimJoint482.children = new MFNode();

HAnimJoint482.children[0] = HAnimSegment483;

HAnimJoint HAnimJoint494 = createNode("HAnimJoint");
HAnimJoint494.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint494.name = "r_tarsal_interphalangeal_1";
HAnimJoint494.center = new SFVec3f(new float[0,1,0]);
HAnimJoint482.children[1] = HAnimJoint494;

HAnimJoint470.children[1] = HAnimJoint482;

HAnimJoint461.children[1] = HAnimJoint470;

HAnimJoint444.children[1] = HAnimJoint461;

HAnimJoint HAnimJoint495 = createNode("HAnimJoint");
HAnimJoint495.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint495.name = "r_cuneonavicular_2";
HAnimJoint495.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment496 = createNode("HAnimSegment");
HAnimSegment496.DEF = "hanim_r_cuneiform_2";
HAnimSegment496.name = "r_cuneiform_2";
Transform Transform497 = createNode("Transform");
Transform Transform498 = createNode("Transform");
Shape Shape499 = createNode("Shape");
Shape499.USE = "HAnimJointShape";
Transform498.child = new undefined();

Transform498.child[0] = Shape499;

Transform497.children = new MFNode();

Transform497.children[0] = Transform498;

HAnimSegment496.children = new MFNode();

HAnimSegment496.children[0] = Transform497;

Shape Shape500 = createNode("Shape");
LineSet LineSet501 = createNode("LineSet");
LineSet501.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA502 = createNode("ColorRGBA");
ColorRGBA502.USE = "HAnimSegmentLineColorRGBA";
LineSet501.color = ColorRGBA502;

Coordinate Coordinate503 = createNode("Coordinate");
Coordinate503.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet501.coord = Coordinate503;

Shape500.geometry = LineSet501;

HAnimSegment496.children[1] = Shape500;

HAnimJoint495.children = new MFNode();

HAnimJoint495.children[0] = HAnimSegment496;

HAnimJoint HAnimJoint504 = createNode("HAnimJoint");
HAnimJoint504.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint504.name = "r_tarsometatarsal_2";
HAnimJoint504.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment505 = createNode("HAnimSegment");
HAnimSegment505.DEF = "hanim_r_metatarsal_2";
HAnimSegment505.name = "r_metatarsal_2";
Transform Transform506 = createNode("Transform");
Transform Transform507 = createNode("Transform");
Shape Shape508 = createNode("Shape");
Shape508.USE = "HAnimJointShape";
Transform507.child = new undefined();

Transform507.child[0] = Shape508;

Transform506.children = new MFNode();

Transform506.children[0] = Transform507;

HAnimSegment505.children = new MFNode();

HAnimSegment505.children[0] = Transform506;

Shape Shape509 = createNode("Shape");
LineSet LineSet510 = createNode("LineSet");
LineSet510.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA511 = createNode("ColorRGBA");
ColorRGBA511.USE = "HAnimSegmentLineColorRGBA";
LineSet510.color = ColorRGBA511;

Coordinate Coordinate512 = createNode("Coordinate");
Coordinate512.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet510.coord = Coordinate512;

Shape509.geometry = LineSet510;

HAnimSegment505.children[1] = Shape509;

HAnimJoint504.children = new MFNode();

HAnimJoint504.children[0] = HAnimSegment505;

HAnimJoint HAnimJoint513 = createNode("HAnimJoint");
HAnimJoint513.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint513.name = "r_metatarsophalangeal_2";
HAnimJoint513.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment514 = createNode("HAnimSegment");
HAnimSegment514.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSegment514.name = "r_tarsal_proximal_phalanx_2";
Transform Transform515 = createNode("Transform");
Transform Transform516 = createNode("Transform");
Shape Shape517 = createNode("Shape");
Shape517.USE = "HAnimJointShape";
Transform516.child = new undefined();

Transform516.child[0] = Shape517;

Transform515.children = new MFNode();

Transform515.children[0] = Transform516;

HAnimSegment514.children = new MFNode();

HAnimSegment514.children[0] = Transform515;

Shape Shape518 = createNode("Shape");
LineSet LineSet519 = createNode("LineSet");
LineSet519.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA520 = createNode("ColorRGBA");
ColorRGBA520.USE = "HAnimSegmentLineColorRGBA";
LineSet519.color = ColorRGBA520;

Coordinate Coordinate521 = createNode("Coordinate");
Coordinate521.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet519.coord = Coordinate521;

Shape518.geometry = LineSet519;

HAnimSegment514.children[1] = Shape518;

HAnimJoint513.children = new MFNode();

HAnimJoint513.children[0] = HAnimSegment514;

HAnimJoint HAnimJoint522 = createNode("HAnimJoint");
HAnimJoint522.DEF = "hanim_r_tarsal_proximal_interphalangeal_1";
HAnimJoint522.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint522.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment523 = createNode("HAnimSegment");
HAnimSegment523.DEF = "hanim_r_tarsal_middle_phalanx_1";
HAnimSegment523.name = "r_tarsal_middle_phalanx_2";
Transform Transform524 = createNode("Transform");
Transform Transform525 = createNode("Transform");
Shape Shape526 = createNode("Shape");
Shape526.USE = "HAnimJointShape";
Transform525.child = new undefined();

Transform525.child[0] = Shape526;

Transform524.children = new MFNode();

Transform524.children[0] = Transform525;

HAnimSegment523.children = new MFNode();

HAnimSegment523.children[0] = Transform524;

Shape Shape527 = createNode("Shape");
LineSet LineSet528 = createNode("LineSet");
LineSet528.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA529 = createNode("ColorRGBA");
ColorRGBA529.USE = "HAnimSegmentLineColorRGBA";
LineSet528.color = ColorRGBA529;

Coordinate Coordinate530 = createNode("Coordinate");
Coordinate530.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet528.coord = Coordinate530;

Shape527.geometry = LineSet528;

HAnimSegment523.children[1] = Shape527;

HAnimSite HAnimSite531 = createNode("HAnimSite");
HAnimSite531.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite531.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite531.translation = new SFVec3f(new float[-0.05,-1.12,0]);
TouchSensor TouchSensor532 = createNode("TouchSensor");
TouchSensor532.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite531.children = new MFNode();

HAnimSite531.children[0] = TouchSensor532;

Shape Shape533 = createNode("Shape");
Shape533.USE = "HAnimSiteShape";
HAnimSite531.children[1] = Shape533;

HAnimSegment523.children[2] = HAnimSite531;

HAnimJoint522.children = new MFNode();

HAnimJoint522.children[0] = HAnimSegment523;

HAnimJoint HAnimJoint534 = createNode("HAnimJoint");
HAnimJoint534.DEF = "hanim_r_tarsal_distal_interphalangeal_1";
HAnimJoint534.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint534.center = new SFVec3f(new float[0,1,0]);
HAnimJoint522.children[1] = HAnimJoint534;

HAnimJoint513.children[1] = HAnimJoint522;

HAnimJoint504.children[1] = HAnimJoint513;

HAnimJoint495.children[1] = HAnimJoint504;

HAnimJoint444.children[2] = HAnimJoint495;

HAnimJoint HAnimJoint535 = createNode("HAnimJoint");
HAnimJoint535.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint535.name = "r_cuneonavicular_3";
HAnimJoint535.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment536 = createNode("HAnimSegment");
HAnimSegment536.DEF = "hanim_r_cuneiform_3";
HAnimSegment536.name = "r_cuneiform_3";
Transform Transform537 = createNode("Transform");
Transform Transform538 = createNode("Transform");
Shape Shape539 = createNode("Shape");
Shape539.USE = "HAnimJointShape";
Transform538.child = new undefined();

Transform538.child[0] = Shape539;

Transform537.children = new MFNode();

Transform537.children[0] = Transform538;

HAnimSegment536.children = new MFNode();

HAnimSegment536.children[0] = Transform537;

Shape Shape540 = createNode("Shape");
LineSet LineSet541 = createNode("LineSet");
LineSet541.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA542 = createNode("ColorRGBA");
ColorRGBA542.USE = "HAnimSegmentLineColorRGBA";
LineSet541.color = ColorRGBA542;

Coordinate Coordinate543 = createNode("Coordinate");
Coordinate543.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet541.coord = Coordinate543;

Shape540.geometry = LineSet541;

HAnimSegment536.children[1] = Shape540;

HAnimJoint535.children = new MFNode();

HAnimJoint535.children[0] = HAnimSegment536;

HAnimJoint HAnimJoint544 = createNode("HAnimJoint");
HAnimJoint544.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint544.name = "r_tarsometatarsal_3";
HAnimJoint544.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment545 = createNode("HAnimSegment");
HAnimSegment545.DEF = "hanim_r_metatarsal_3";
HAnimSegment545.name = "r_metatarsal_3";
Transform Transform546 = createNode("Transform");
Transform Transform547 = createNode("Transform");
Shape Shape548 = createNode("Shape");
Shape548.USE = "HAnimJointShape";
Transform547.child = new undefined();

Transform547.child[0] = Shape548;

Transform546.children = new MFNode();

Transform546.children[0] = Transform547;

HAnimSegment545.children = new MFNode();

HAnimSegment545.children[0] = Transform546;

Shape Shape549 = createNode("Shape");
LineSet LineSet550 = createNode("LineSet");
LineSet550.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA551 = createNode("ColorRGBA");
ColorRGBA551.USE = "HAnimSegmentLineColorRGBA";
LineSet550.color = ColorRGBA551;

Coordinate Coordinate552 = createNode("Coordinate");
Coordinate552.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet550.coord = Coordinate552;

Shape549.geometry = LineSet550;

HAnimSegment545.children[1] = Shape549;

HAnimJoint544.children = new MFNode();

HAnimJoint544.children[0] = HAnimSegment545;

HAnimJoint HAnimJoint553 = createNode("HAnimJoint");
HAnimJoint553.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint553.name = "r_metatarsophalangeal_3";
HAnimJoint553.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment554 = createNode("HAnimSegment");
HAnimSegment554.DEF = "hanim_r_tarsal_proximal_phalanx_3";
HAnimSegment554.name = "r_tarsal_proximal_phalanx_3";
Transform Transform555 = createNode("Transform");
Transform Transform556 = createNode("Transform");
Shape Shape557 = createNode("Shape");
Shape557.USE = "HAnimJointShape";
Transform556.child = new undefined();

Transform556.child[0] = Shape557;

Transform555.children = new MFNode();

Transform555.children[0] = Transform556;

HAnimSegment554.children = new MFNode();

HAnimSegment554.children[0] = Transform555;

Shape Shape558 = createNode("Shape");
LineSet LineSet559 = createNode("LineSet");
LineSet559.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA560 = createNode("ColorRGBA");
ColorRGBA560.USE = "HAnimSegmentLineColorRGBA";
LineSet559.color = ColorRGBA560;

Coordinate Coordinate561 = createNode("Coordinate");
Coordinate561.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet559.coord = Coordinate561;

Shape558.geometry = LineSet559;

HAnimSegment554.children[1] = Shape558;

HAnimJoint553.children = new MFNode();

HAnimJoint553.children[0] = HAnimSegment554;

HAnimJoint HAnimJoint562 = createNode("HAnimJoint");
HAnimJoint562.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint562.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint562.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment563 = createNode("HAnimSegment");
HAnimSegment563.DEF = "hanim_r_tarsal_middle_phalanx_2";
HAnimSegment563.name = "r_tarsal_middle_phalanx_3";
Transform Transform564 = createNode("Transform");
Transform Transform565 = createNode("Transform");
Shape Shape566 = createNode("Shape");
Shape566.USE = "HAnimJointShape";
Transform565.child = new undefined();

Transform565.child[0] = Shape566;

Transform564.children = new MFNode();

Transform564.children[0] = Transform565;

HAnimSegment563.children = new MFNode();

HAnimSegment563.children[0] = Transform564;

Shape Shape567 = createNode("Shape");
LineSet LineSet568 = createNode("LineSet");
LineSet568.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA569 = createNode("ColorRGBA");
ColorRGBA569.USE = "HAnimSegmentLineColorRGBA";
LineSet568.color = ColorRGBA569;

Coordinate Coordinate570 = createNode("Coordinate");
Coordinate570.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet568.coord = Coordinate570;

Shape567.geometry = LineSet568;

HAnimSegment563.children[1] = Shape567;

HAnimSite HAnimSite571 = createNode("HAnimSite");
HAnimSite571.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimSite571.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite571.translation = new SFVec3f(new float[-0.15,-1.13,0]);
TouchSensor TouchSensor572 = createNode("TouchSensor");
TouchSensor572.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite571.children = new MFNode();

HAnimSite571.children[0] = TouchSensor572;

Shape Shape573 = createNode("Shape");
Shape573.USE = "HAnimSiteShape";
HAnimSite571.children[1] = Shape573;

HAnimSegment563.children[2] = HAnimSite571;

HAnimJoint562.children = new MFNode();

HAnimJoint562.children[0] = HAnimSegment563;

HAnimJoint HAnimJoint574 = createNode("HAnimJoint");
HAnimJoint574.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint574.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint574.center = new SFVec3f(new float[0,1,0]);
HAnimJoint562.children[1] = HAnimJoint574;

HAnimJoint553.children[1] = HAnimJoint562;

HAnimJoint544.children[1] = HAnimJoint553;

HAnimJoint535.children[1] = HAnimJoint544;

HAnimJoint444.children[3] = HAnimJoint535;

HAnimJoint431.children[1] = HAnimJoint444;

HAnimJoint HAnimJoint575 = createNode("HAnimJoint");
HAnimJoint575.DEF = "hanim_r_calcaneocuboid";
HAnimJoint575.name = "r_calcaneocuboid";
HAnimJoint575.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment576 = createNode("HAnimSegment");
HAnimSegment576.DEF = "hanim_r_calcaneus";
HAnimSegment576.name = "r_calcaneus";
Transform Transform577 = createNode("Transform");
Transform Transform578 = createNode("Transform");
Shape Shape579 = createNode("Shape");
Shape579.USE = "HAnimJointShape";
Transform578.child = new undefined();

Transform578.child[0] = Shape579;

Transform577.children = new MFNode();

Transform577.children[0] = Transform578;

HAnimSegment576.children = new MFNode();

HAnimSegment576.children[0] = Transform577;

Shape Shape580 = createNode("Shape");
LineSet LineSet581 = createNode("LineSet");
LineSet581.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA582 = createNode("ColorRGBA");
ColorRGBA582.USE = "HAnimSegmentLineColorRGBA";
LineSet581.color = ColorRGBA582;

Coordinate Coordinate583 = createNode("Coordinate");
Coordinate583.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet581.coord = Coordinate583;

Shape580.geometry = LineSet581;

HAnimSegment576.children[1] = Shape580;

HAnimJoint575.children = new MFNode();

HAnimJoint575.children[0] = HAnimSegment576;

HAnimJoint HAnimJoint584 = createNode("HAnimJoint");
HAnimJoint584.DEF = "hanim_r_transversetarsal";
HAnimJoint584.name = "r_transversetarsal";
HAnimJoint584.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment585 = createNode("HAnimSegment");
HAnimSegment585.DEF = "hanim_r_cuboid";
HAnimSegment585.name = "r_cuboid";
Transform Transform586 = createNode("Transform");
Transform Transform587 = createNode("Transform");
Shape Shape588 = createNode("Shape");
Shape588.USE = "HAnimJointShape";
Transform587.child = new undefined();

Transform587.child[0] = Shape588;

Transform586.children = new MFNode();

Transform586.children[0] = Transform587;

HAnimSegment585.children = new MFNode();

HAnimSegment585.children[0] = Transform586;

Shape Shape589 = createNode("Shape");
LineSet LineSet590 = createNode("LineSet");
LineSet590.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA591 = createNode("ColorRGBA");
ColorRGBA591.USE = "HAnimSegmentLineColorRGBA";
LineSet590.color = ColorRGBA591;

Coordinate Coordinate592 = createNode("Coordinate");
Coordinate592.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet590.coord = Coordinate592;

Shape589.geometry = LineSet590;

HAnimSegment585.children[1] = Shape589;

Shape Shape593 = createNode("Shape");
LineSet LineSet594 = createNode("LineSet");
LineSet594.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA595 = createNode("ColorRGBA");
ColorRGBA595.USE = "HAnimSegmentLineColorRGBA";
LineSet594.color = ColorRGBA595;

Coordinate Coordinate596 = createNode("Coordinate");
Coordinate596.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet594.coord = Coordinate596;

Shape593.geometry = LineSet594;

HAnimSegment585.children[2] = Shape593;

HAnimJoint584.children = new MFNode();

HAnimJoint584.children[0] = HAnimSegment585;

HAnimJoint HAnimJoint597 = createNode("HAnimJoint");
HAnimJoint597.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint597.name = "r_tarsometatarsal_4";
HAnimJoint597.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment598 = createNode("HAnimSegment");
HAnimSegment598.DEF = "hanim_r_metatarsal_4";
HAnimSegment598.name = "r_metatarsal_4";
Transform Transform599 = createNode("Transform");
Transform Transform600 = createNode("Transform");
Shape Shape601 = createNode("Shape");
Shape601.USE = "HAnimJointShape";
Transform600.child = new undefined();

Transform600.child[0] = Shape601;

Transform599.children = new MFNode();

Transform599.children[0] = Transform600;

HAnimSegment598.children = new MFNode();

HAnimSegment598.children[0] = Transform599;

Shape Shape602 = createNode("Shape");
LineSet LineSet603 = createNode("LineSet");
LineSet603.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA604 = createNode("ColorRGBA");
ColorRGBA604.USE = "HAnimSegmentLineColorRGBA";
LineSet603.color = ColorRGBA604;

Coordinate Coordinate605 = createNode("Coordinate");
Coordinate605.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet603.coord = Coordinate605;

Shape602.geometry = LineSet603;

HAnimSegment598.children[1] = Shape602;

HAnimJoint597.children = new MFNode();

HAnimJoint597.children[0] = HAnimSegment598;

HAnimJoint HAnimJoint606 = createNode("HAnimJoint");
HAnimJoint606.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint606.name = "r_metatarsophalangeal_4";
HAnimJoint606.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment607 = createNode("HAnimSegment");
HAnimSegment607.DEF = "hanim_r_tarsal_proximal_phalanx_4";
HAnimSegment607.name = "r_tarsal_proximal_phalanx_4";
Transform Transform608 = createNode("Transform");
Transform Transform609 = createNode("Transform");
Shape Shape610 = createNode("Shape");
Shape610.USE = "HAnimJointShape";
Transform609.child = new undefined();

Transform609.child[0] = Shape610;

Transform608.children = new MFNode();

Transform608.children[0] = Transform609;

HAnimSegment607.children = new MFNode();

HAnimSegment607.children[0] = Transform608;

Shape Shape611 = createNode("Shape");
LineSet LineSet612 = createNode("LineSet");
LineSet612.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA613 = createNode("ColorRGBA");
ColorRGBA613.USE = "HAnimSegmentLineColorRGBA";
LineSet612.color = ColorRGBA613;

Coordinate Coordinate614 = createNode("Coordinate");
Coordinate614.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet612.coord = Coordinate614;

Shape611.geometry = LineSet612;

HAnimSegment607.children[1] = Shape611;

HAnimJoint606.children = new MFNode();

HAnimJoint606.children[0] = HAnimSegment607;

HAnimJoint HAnimJoint615 = createNode("HAnimJoint");
HAnimJoint615.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint615.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint615.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment616 = createNode("HAnimSegment");
HAnimSegment616.DEF = "hanim_r_tarsal_middle_phalanx_3";
HAnimSegment616.name = "r_tarsal_middle_phalanx_4";
Transform Transform617 = createNode("Transform");
Transform Transform618 = createNode("Transform");
Shape Shape619 = createNode("Shape");
Shape619.USE = "HAnimJointShape";
Transform618.child = new undefined();

Transform618.child[0] = Shape619;

Transform617.children = new MFNode();

Transform617.children[0] = Transform618;

HAnimSegment616.children = new MFNode();

HAnimSegment616.children[0] = Transform617;

Shape Shape620 = createNode("Shape");
LineSet LineSet621 = createNode("LineSet");
LineSet621.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA622 = createNode("ColorRGBA");
ColorRGBA622.USE = "HAnimSegmentLineColorRGBA";
LineSet621.color = ColorRGBA622;

Coordinate Coordinate623 = createNode("Coordinate");
Coordinate623.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet621.coord = Coordinate623;

Shape620.geometry = LineSet621;

HAnimSegment616.children[1] = Shape620;

HAnimSite HAnimSite624 = createNode("HAnimSite");
HAnimSite624.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimSite624.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite624.translation = new SFVec3f(new float[-0.25,-1.1,0]);
TouchSensor TouchSensor625 = createNode("TouchSensor");
TouchSensor625.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite624.children = new MFNode();

HAnimSite624.children[0] = TouchSensor625;

Shape Shape626 = createNode("Shape");
Shape626.USE = "HAnimSiteShape";
HAnimSite624.children[1] = Shape626;

HAnimSegment616.children[2] = HAnimSite624;

HAnimJoint615.children = new MFNode();

HAnimJoint615.children[0] = HAnimSegment616;

HAnimJoint HAnimJoint627 = createNode("HAnimJoint");
HAnimJoint627.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint627.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint627.center = new SFVec3f(new float[0,1,0]);
HAnimJoint615.children[1] = HAnimJoint627;

HAnimJoint606.children[1] = HAnimJoint615;

HAnimJoint597.children[1] = HAnimJoint606;

HAnimJoint584.children[1] = HAnimJoint597;

HAnimJoint HAnimJoint628 = createNode("HAnimJoint");
HAnimJoint628.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint628.name = "r_tarsometatarsal_5";
HAnimJoint628.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment629 = createNode("HAnimSegment");
HAnimSegment629.DEF = "hanim_r_metatarsal_5";
HAnimSegment629.name = "r_metatarsal_5";
Transform Transform630 = createNode("Transform");
Transform Transform631 = createNode("Transform");
Shape Shape632 = createNode("Shape");
Shape632.USE = "HAnimJointShape";
Transform631.child = new undefined();

Transform631.child[0] = Shape632;

Transform630.children = new MFNode();

Transform630.children[0] = Transform631;

HAnimSegment629.children = new MFNode();

HAnimSegment629.children[0] = Transform630;

Shape Shape633 = createNode("Shape");
LineSet LineSet634 = createNode("LineSet");
LineSet634.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA635 = createNode("ColorRGBA");
ColorRGBA635.USE = "HAnimSegmentLineColorRGBA";
LineSet634.color = ColorRGBA635;

Coordinate Coordinate636 = createNode("Coordinate");
Coordinate636.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet634.coord = Coordinate636;

Shape633.geometry = LineSet634;

HAnimSegment629.children[1] = Shape633;

HAnimSite HAnimSite637 = createNode("HAnimSite");
HAnimSite637.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite637.name = "r_metatarsal_phalanx_5_pt";
HAnimSite637.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor638 = createNode("TouchSensor");
TouchSensor638.description = "HAnimSite r_metatarsal_phalanx_5_pt";
HAnimSite637.children = new MFNode();

HAnimSite637.children[0] = TouchSensor638;

Shape Shape639 = createNode("Shape");
Shape639.USE = "HAnimSiteShape";
HAnimSite637.children[1] = Shape639;

HAnimSegment629.children[2] = HAnimSite637;

HAnimJoint628.children = new MFNode();

HAnimJoint628.children[0] = HAnimSegment629;

HAnimJoint HAnimJoint640 = createNode("HAnimJoint");
HAnimJoint640.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint640.name = "r_metatarsophalangeal_5";
HAnimJoint640.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment641 = createNode("HAnimSegment");
HAnimSegment641.DEF = "hanim_r_tarsal_proximal_phalanx_5";
HAnimSegment641.name = "r_tarsal_proximal_phalanx_5";
Transform Transform642 = createNode("Transform");
Transform Transform643 = createNode("Transform");
Shape Shape644 = createNode("Shape");
Shape644.USE = "HAnimJointShape";
Transform643.child = new undefined();

Transform643.child[0] = Shape644;

Transform642.children = new MFNode();

Transform642.children[0] = Transform643;

HAnimSegment641.children = new MFNode();

HAnimSegment641.children[0] = Transform642;

Shape Shape645 = createNode("Shape");
LineSet LineSet646 = createNode("LineSet");
LineSet646.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA647 = createNode("ColorRGBA");
ColorRGBA647.USE = "HAnimSegmentLineColorRGBA";
LineSet646.color = ColorRGBA647;

Coordinate Coordinate648 = createNode("Coordinate");
Coordinate648.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet646.coord = Coordinate648;

Shape645.geometry = LineSet646;

HAnimSegment641.children[1] = Shape645;

HAnimJoint640.children = new MFNode();

HAnimJoint640.children[0] = HAnimSegment641;

HAnimJoint HAnimJoint649 = createNode("HAnimJoint");
HAnimJoint649.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint649.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint649.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment650 = createNode("HAnimSegment");
HAnimSegment650.DEF = "hanim_r_tarsal_middle_phalanx_4";
HAnimSegment650.name = "r_tarsal_middle_phalanx_5";
Transform Transform651 = createNode("Transform");
Transform Transform652 = createNode("Transform");
Shape Shape653 = createNode("Shape");
Shape653.USE = "HAnimJointShape";
Transform652.child = new undefined();

Transform652.child[0] = Shape653;

Transform651.children = new MFNode();

Transform651.children[0] = Transform652;

HAnimSegment650.children = new MFNode();

HAnimSegment650.children[0] = Transform651;

Shape Shape654 = createNode("Shape");
LineSet LineSet655 = createNode("LineSet");
LineSet655.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA656 = createNode("ColorRGBA");
ColorRGBA656.USE = "HAnimSegmentLineColorRGBA";
LineSet655.color = ColorRGBA656;

Coordinate Coordinate657 = createNode("Coordinate");
Coordinate657.point = new MFVec3f(new float[0,1,0,0,1,0]);
LineSet655.coord = Coordinate657;

Shape654.geometry = LineSet655;

HAnimSegment650.children[1] = Shape654;

HAnimSite HAnimSite658 = createNode("HAnimSite");
HAnimSite658.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimSite658.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite658.translation = new SFVec3f(new float[-0.34,-1.05,0]);
TouchSensor TouchSensor659 = createNode("TouchSensor");
TouchSensor659.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite658.children = new MFNode();

HAnimSite658.children[0] = TouchSensor659;

Shape Shape660 = createNode("Shape");
Shape660.USE = "HAnimSiteShape";
HAnimSite658.children[1] = Shape660;

HAnimSegment650.children[2] = HAnimSite658;

HAnimJoint649.children = new MFNode();

HAnimJoint649.children[0] = HAnimSegment650;

HAnimJoint HAnimJoint661 = createNode("HAnimJoint");
HAnimJoint661.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint661.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint661.center = new SFVec3f(new float[0,1,0]);
HAnimJoint649.children[1] = HAnimJoint661;

HAnimJoint640.children[1] = HAnimJoint649;

HAnimJoint628.children[1] = HAnimJoint640;

HAnimJoint584.children[2] = HAnimJoint628;

HAnimJoint575.children[1] = HAnimJoint584;

HAnimJoint431.children[2] = HAnimJoint575;

HAnimJoint416.children[1] = HAnimJoint431;

HAnimJoint398.children[1] = HAnimJoint416;

HAnimJoint97.children[2] = HAnimJoint398;

HAnimJoint43.children[1] = HAnimJoint97;

HAnimJoint HAnimJoint662 = createNode("HAnimJoint");
HAnimJoint662.DEF = "hanim_vl5";
HAnimJoint662.name = "vl5";
HAnimJoint662.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimSegment HAnimSegment663 = createNode("HAnimSegment");
HAnimSegment663.DEF = "hanim_l5";
HAnimSegment663.name = "l5";
Transform Transform664 = createNode("Transform");
Transform Transform665 = createNode("Transform");
Shape Shape666 = createNode("Shape");
Shape666.USE = "HAnimJointShape";
Transform665.child = new undefined();

Transform665.child[0] = Shape666;

Transform664.children = new MFNode();

Transform664.children[0] = Transform665;

HAnimSegment663.children = new MFNode();

HAnimSegment663.children[0] = Transform664;

Shape Shape667 = createNode("Shape");
LineSet LineSet668 = createNode("LineSet");
LineSet668.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA669 = createNode("ColorRGBA");
ColorRGBA669.USE = "HAnimSegmentLineColorRGBA";
LineSet668.color = ColorRGBA669;

Coordinate Coordinate670 = createNode("Coordinate");
Coordinate670.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet668.coord = Coordinate670;

Shape667.geometry = LineSet668;

HAnimSegment663.children[1] = Shape667;

HAnimJoint662.children = new MFNode();

HAnimJoint662.children[0] = HAnimSegment663;

HAnimJoint HAnimJoint671 = createNode("HAnimJoint");
HAnimJoint671.DEF = "hanim_vl4";
HAnimJoint671.name = "vl4";
HAnimJoint671.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimSegment HAnimSegment672 = createNode("HAnimSegment");
HAnimSegment672.DEF = "hanim_l4";
HAnimSegment672.name = "l4";
Transform Transform673 = createNode("Transform");
Transform Transform674 = createNode("Transform");
Shape Shape675 = createNode("Shape");
Shape675.USE = "HAnimJointShape";
Transform674.child = new undefined();

Transform674.child[0] = Shape675;

Transform673.children = new MFNode();

Transform673.children[0] = Transform674;

HAnimSegment672.children = new MFNode();

HAnimSegment672.children[0] = Transform673;

Shape Shape676 = createNode("Shape");
LineSet LineSet677 = createNode("LineSet");
LineSet677.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA678 = createNode("ColorRGBA");
ColorRGBA678.USE = "HAnimSegmentLineColorRGBA";
LineSet677.color = ColorRGBA678;

Coordinate Coordinate679 = createNode("Coordinate");
Coordinate679.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet677.coord = Coordinate679;

Shape676.geometry = LineSet677;

HAnimSegment672.children[1] = Shape676;

HAnimJoint671.children = new MFNode();

HAnimJoint671.children[0] = HAnimSegment672;

HAnimJoint HAnimJoint680 = createNode("HAnimJoint");
HAnimJoint680.DEF = "hanim_vl3";
HAnimJoint680.name = "vl3";
HAnimJoint680.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimSegment HAnimSegment681 = createNode("HAnimSegment");
HAnimSegment681.DEF = "hanim_l3";
HAnimSegment681.name = "l3";
Transform Transform682 = createNode("Transform");
Transform Transform683 = createNode("Transform");
Shape Shape684 = createNode("Shape");
Shape684.USE = "HAnimJointShape";
Transform683.child = new undefined();

Transform683.child[0] = Shape684;

Transform682.children = new MFNode();

Transform682.children[0] = Transform683;

HAnimSegment681.children = new MFNode();

HAnimSegment681.children[0] = Transform682;

Shape Shape685 = createNode("Shape");
LineSet LineSet686 = createNode("LineSet");
LineSet686.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA687 = createNode("ColorRGBA");
ColorRGBA687.USE = "HAnimSegmentLineColorRGBA";
LineSet686.color = ColorRGBA687;

Coordinate Coordinate688 = createNode("Coordinate");
Coordinate688.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet686.coord = Coordinate688;

Shape685.geometry = LineSet686;

HAnimSegment681.children[1] = Shape685;

HAnimSite HAnimSite689 = createNode("HAnimSite");
HAnimSite689.DEF = "hanim_l_rib10_pt";
HAnimSite689.name = "l_rib10_pt";
HAnimSite689.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor690 = createNode("TouchSensor");
TouchSensor690.description = "HAnimSite l_rib10_pt";
HAnimSite689.children = new MFNode();

HAnimSite689.children[0] = TouchSensor690;

Shape Shape691 = createNode("Shape");
Shape691.USE = "HAnimSiteShape";
HAnimSite689.children[1] = Shape691;

HAnimSegment681.children[2] = HAnimSite689;

HAnimSite HAnimSite692 = createNode("HAnimSite");
HAnimSite692.DEF = "hanim_r_rib10_pt";
HAnimSite692.name = "r_rib10_pt";
HAnimSite692.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor693 = createNode("TouchSensor");
TouchSensor693.description = "HAnimSite r_rib10_pt";
HAnimSite692.children = new MFNode();

HAnimSite692.children[0] = TouchSensor693;

Shape Shape694 = createNode("Shape");
Shape694.USE = "HAnimSiteShape";
HAnimSite692.children[1] = Shape694;

HAnimSegment681.children[3] = HAnimSite692;

HAnimSite HAnimSite695 = createNode("HAnimSite");
HAnimSite695.DEF = "hanim_spine_2_middle_back_pt";
HAnimSite695.name = "spine_2_middle_back_pt";
HAnimSite695.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor696 = createNode("TouchSensor");
TouchSensor696.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite695.children = new MFNode();

HAnimSite695.children[0] = TouchSensor696;

Shape Shape697 = createNode("Shape");
Shape697.USE = "HAnimSiteShape";
HAnimSite695.children[1] = Shape697;

HAnimSegment681.children[4] = HAnimSite695;

HAnimJoint680.children = new MFNode();

HAnimJoint680.children[0] = HAnimSegment681;

HAnimJoint HAnimJoint698 = createNode("HAnimJoint");
HAnimJoint698.DEF = "hanim_vl2";
HAnimJoint698.name = "vl2";
HAnimJoint698.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimSegment HAnimSegment699 = createNode("HAnimSegment");
HAnimSegment699.DEF = "hanim_l2";
HAnimSegment699.name = "l2";
Transform Transform700 = createNode("Transform");
Transform Transform701 = createNode("Transform");
Shape Shape702 = createNode("Shape");
Shape702.USE = "HAnimJointShape";
Transform701.child = new undefined();

Transform701.child[0] = Shape702;

Transform700.children = new MFNode();

Transform700.children[0] = Transform701;

HAnimSegment699.children = new MFNode();

HAnimSegment699.children[0] = Transform700;

Shape Shape703 = createNode("Shape");
LineSet LineSet704 = createNode("LineSet");
LineSet704.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA705 = createNode("ColorRGBA");
ColorRGBA705.USE = "HAnimSegmentLineColorRGBA";
LineSet704.color = ColorRGBA705;

Coordinate Coordinate706 = createNode("Coordinate");
Coordinate706.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet704.coord = Coordinate706;

Shape703.geometry = LineSet704;

HAnimSegment699.children[1] = Shape703;

HAnimJoint698.children = new MFNode();

HAnimJoint698.children[0] = HAnimSegment699;

HAnimJoint HAnimJoint707 = createNode("HAnimJoint");
HAnimJoint707.DEF = "hanim_vl1";
HAnimJoint707.name = "vl1";
HAnimJoint707.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimSegment HAnimSegment708 = createNode("HAnimSegment");
HAnimSegment708.DEF = "hanim_l1";
HAnimSegment708.name = "l1";
Transform Transform709 = createNode("Transform");
Transform Transform710 = createNode("Transform");
Shape Shape711 = createNode("Shape");
Shape711.USE = "HAnimJointShape";
Transform710.child = new undefined();

Transform710.child[0] = Shape711;

Transform709.children = new MFNode();

Transform709.children[0] = Transform710;

HAnimSegment708.children = new MFNode();

HAnimSegment708.children[0] = Transform709;

Shape Shape712 = createNode("Shape");
LineSet LineSet713 = createNode("LineSet");
LineSet713.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA714 = createNode("ColorRGBA");
ColorRGBA714.USE = "HAnimSegmentLineColorRGBA";
LineSet713.color = ColorRGBA714;

Coordinate Coordinate715 = createNode("Coordinate");
Coordinate715.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet713.coord = Coordinate715;

Shape712.geometry = LineSet713;

HAnimSegment708.children[1] = Shape712;

HAnimJoint707.children = new MFNode();

HAnimJoint707.children[0] = HAnimSegment708;

HAnimJoint HAnimJoint716 = createNode("HAnimJoint");
HAnimJoint716.DEF = "hanim_vt12";
HAnimJoint716.name = "vt12";
HAnimJoint716.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimSegment HAnimSegment717 = createNode("HAnimSegment");
HAnimSegment717.DEF = "hanim_t12";
HAnimSegment717.name = "t12";
Transform Transform718 = createNode("Transform");
Transform Transform719 = createNode("Transform");
Shape Shape720 = createNode("Shape");
Shape720.USE = "HAnimJointShape";
Transform719.child = new undefined();

Transform719.child[0] = Shape720;

Transform718.children = new MFNode();

Transform718.children[0] = Transform719;

HAnimSegment717.children = new MFNode();

HAnimSegment717.children[0] = Transform718;

Shape Shape721 = createNode("Shape");
LineSet LineSet722 = createNode("LineSet");
LineSet722.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA723 = createNode("ColorRGBA");
ColorRGBA723.USE = "HAnimSegmentLineColorRGBA";
LineSet722.color = ColorRGBA723;

Coordinate Coordinate724 = createNode("Coordinate");
Coordinate724.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet722.coord = Coordinate724;

Shape721.geometry = LineSet722;

HAnimSegment717.children[1] = Shape721;

HAnimJoint716.children = new MFNode();

HAnimJoint716.children[0] = HAnimSegment717;

HAnimJoint HAnimJoint725 = createNode("HAnimJoint");
HAnimJoint725.DEF = "hanim_vt11";
HAnimJoint725.name = "vt11";
HAnimJoint725.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimSegment HAnimSegment726 = createNode("HAnimSegment");
HAnimSegment726.DEF = "hanim_t11";
HAnimSegment726.name = "t11";
Transform Transform727 = createNode("Transform");
Transform Transform728 = createNode("Transform");
Shape Shape729 = createNode("Shape");
Shape729.USE = "HAnimJointShape";
Transform728.child = new undefined();

Transform728.child[0] = Shape729;

Transform727.children = new MFNode();

Transform727.children[0] = Transform728;

HAnimSegment726.children = new MFNode();

HAnimSegment726.children[0] = Transform727;

Shape Shape730 = createNode("Shape");
LineSet LineSet731 = createNode("LineSet");
LineSet731.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA732 = createNode("ColorRGBA");
ColorRGBA732.USE = "HAnimSegmentLineColorRGBA";
LineSet731.color = ColorRGBA732;

Coordinate Coordinate733 = createNode("Coordinate");
Coordinate733.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet731.coord = Coordinate733;

Shape730.geometry = LineSet731;

HAnimSegment726.children[1] = Shape730;

HAnimSite HAnimSite734 = createNode("HAnimSite");
HAnimSite734.DEF = "hanim_substernale_pt";
HAnimSite734.name = "substernale_pt";
HAnimSite734.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor735 = createNode("TouchSensor");
TouchSensor735.description = "HAnimSite substernale_pt";
HAnimSite734.children = new MFNode();

HAnimSite734.children[0] = TouchSensor735;

Shape Shape736 = createNode("Shape");
Shape736.USE = "HAnimSiteShape";
HAnimSite734.children[1] = Shape736;

HAnimSegment726.children[2] = HAnimSite734;

HAnimJoint725.children = new MFNode();

HAnimJoint725.children[0] = HAnimSegment726;

HAnimJoint HAnimJoint737 = createNode("HAnimJoint");
HAnimJoint737.DEF = "hanim_vt10";
HAnimJoint737.name = "vt10";
HAnimJoint737.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimSegment HAnimSegment738 = createNode("HAnimSegment");
HAnimSegment738.DEF = "hanim_t10";
HAnimSegment738.name = "t10";
Transform Transform739 = createNode("Transform");
Transform Transform740 = createNode("Transform");
Shape Shape741 = createNode("Shape");
Shape741.USE = "HAnimJointShape";
Transform740.child = new undefined();

Transform740.child[0] = Shape741;

Transform739.children = new MFNode();

Transform739.children[0] = Transform740;

HAnimSegment738.children = new MFNode();

HAnimSegment738.children[0] = Transform739;

Shape Shape742 = createNode("Shape");
LineSet LineSet743 = createNode("LineSet");
LineSet743.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA744 = createNode("ColorRGBA");
ColorRGBA744.USE = "HAnimSegmentLineColorRGBA";
LineSet743.color = ColorRGBA744;

Coordinate Coordinate745 = createNode("Coordinate");
Coordinate745.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet743.coord = Coordinate745;

Shape742.geometry = LineSet743;

HAnimSegment738.children[1] = Shape742;

HAnimSite HAnimSite746 = createNode("HAnimSite");
HAnimSite746.DEF = "hanim_l_thelion_pt";
HAnimSite746.name = "l_thelion_pt";
HAnimSite746.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor747 = createNode("TouchSensor");
TouchSensor747.description = "HAnimSite l_thelion_pt";
HAnimSite746.children = new MFNode();

HAnimSite746.children[0] = TouchSensor747;

Shape Shape748 = createNode("Shape");
Shape748.USE = "HAnimSiteShape";
HAnimSite746.children[1] = Shape748;

HAnimSegment738.children[2] = HAnimSite746;

HAnimSite HAnimSite749 = createNode("HAnimSite");
HAnimSite749.DEF = "hanim_r_thelion_pt";
HAnimSite749.name = "r_thelion_pt";
HAnimSite749.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor750 = createNode("TouchSensor");
TouchSensor750.description = "HAnimSite r_thelion_pt";
HAnimSite749.children = new MFNode();

HAnimSite749.children[0] = TouchSensor750;

Shape Shape751 = createNode("Shape");
Shape751.USE = "HAnimSiteShape";
HAnimSite749.children[1] = Shape751;

HAnimSegment738.children[3] = HAnimSite749;

HAnimJoint737.children = new MFNode();

HAnimJoint737.children[0] = HAnimSegment738;

HAnimJoint HAnimJoint752 = createNode("HAnimJoint");
HAnimJoint752.DEF = "hanim_vt9";
HAnimJoint752.name = "vt9";
HAnimJoint752.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimSegment HAnimSegment753 = createNode("HAnimSegment");
HAnimSegment753.DEF = "hanim_t9";
HAnimSegment753.name = "t9";
Transform Transform754 = createNode("Transform");
Transform Transform755 = createNode("Transform");
Shape Shape756 = createNode("Shape");
Shape756.USE = "HAnimJointShape";
Transform755.child = new undefined();

Transform755.child[0] = Shape756;

Transform754.children = new MFNode();

Transform754.children[0] = Transform755;

HAnimSegment753.children = new MFNode();

HAnimSegment753.children[0] = Transform754;

Shape Shape757 = createNode("Shape");
LineSet LineSet758 = createNode("LineSet");
LineSet758.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA759 = createNode("ColorRGBA");
ColorRGBA759.USE = "HAnimSegmentLineColorRGBA";
LineSet758.color = ColorRGBA759;

Coordinate Coordinate760 = createNode("Coordinate");
Coordinate760.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet758.coord = Coordinate760;

Shape757.geometry = LineSet758;

HAnimSegment753.children[1] = Shape757;

HAnimJoint752.children = new MFNode();

HAnimJoint752.children[0] = HAnimSegment753;

HAnimJoint HAnimJoint761 = createNode("HAnimJoint");
HAnimJoint761.DEF = "hanim_vt8";
HAnimJoint761.name = "vt8";
HAnimJoint761.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimSegment HAnimSegment762 = createNode("HAnimSegment");
HAnimSegment762.DEF = "hanim_t8";
HAnimSegment762.name = "t8";
Transform Transform763 = createNode("Transform");
Transform Transform764 = createNode("Transform");
Shape Shape765 = createNode("Shape");
Shape765.USE = "HAnimJointShape";
Transform764.child = new undefined();

Transform764.child[0] = Shape765;

Transform763.children = new MFNode();

Transform763.children[0] = Transform764;

HAnimSegment762.children = new MFNode();

HAnimSegment762.children[0] = Transform763;

Shape Shape766 = createNode("Shape");
LineSet LineSet767 = createNode("LineSet");
LineSet767.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA768 = createNode("ColorRGBA");
ColorRGBA768.USE = "HAnimSegmentLineColorRGBA";
LineSet767.color = ColorRGBA768;

Coordinate Coordinate769 = createNode("Coordinate");
Coordinate769.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet767.coord = Coordinate769;

Shape766.geometry = LineSet767;

HAnimSegment762.children[1] = Shape766;

HAnimJoint761.children = new MFNode();

HAnimJoint761.children[0] = HAnimSegment762;

HAnimJoint HAnimJoint770 = createNode("HAnimJoint");
HAnimJoint770.DEF = "hanim_vt7";
HAnimJoint770.name = "vt7";
HAnimJoint770.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimSegment HAnimSegment771 = createNode("HAnimSegment");
HAnimSegment771.DEF = "hanim_t7";
HAnimSegment771.name = "t7";
Transform Transform772 = createNode("Transform");
Transform Transform773 = createNode("Transform");
Shape Shape774 = createNode("Shape");
Shape774.USE = "HAnimJointShape";
Transform773.child = new undefined();

Transform773.child[0] = Shape774;

Transform772.children = new MFNode();

Transform772.children[0] = Transform773;

HAnimSegment771.children = new MFNode();

HAnimSegment771.children[0] = Transform772;

Shape Shape775 = createNode("Shape");
LineSet LineSet776 = createNode("LineSet");
LineSet776.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA777 = createNode("ColorRGBA");
ColorRGBA777.USE = "HAnimSegmentLineColorRGBA";
LineSet776.color = ColorRGBA777;

Coordinate Coordinate778 = createNode("Coordinate");
Coordinate778.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet776.coord = Coordinate778;

Shape775.geometry = LineSet776;

HAnimSegment771.children[1] = Shape775;

HAnimSite HAnimSite779 = createNode("HAnimSite");
HAnimSite779.DEF = "hanim_l_chest_midsagittal_plane_pt";
HAnimSite779.name = "l_chest_midsagittal_plane_pt";
HAnimSite779.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor780 = createNode("TouchSensor");
TouchSensor780.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite779.children = new MFNode();

HAnimSite779.children[0] = TouchSensor780;

Shape Shape781 = createNode("Shape");
Shape781.USE = "HAnimSiteShape";
HAnimSite779.children[1] = Shape781;

HAnimSegment771.children[2] = HAnimSite779;

HAnimSite HAnimSite782 = createNode("HAnimSite");
HAnimSite782.DEF = "hanim_mesosternale_pt";
HAnimSite782.name = "mesosternale_pt";
HAnimSite782.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor783 = createNode("TouchSensor");
TouchSensor783.description = "HAnimSite mesosternale_pt";
HAnimSite782.children = new MFNode();

HAnimSite782.children[0] = TouchSensor783;

Shape Shape784 = createNode("Shape");
Shape784.USE = "HAnimSiteShape";
HAnimSite782.children[1] = Shape784;

HAnimSegment771.children[3] = HAnimSite782;

HAnimSite HAnimSite785 = createNode("HAnimSite");
HAnimSite785.DEF = "hanim_r_chest_midsagittal_plane_pt";
HAnimSite785.name = "r_chest_midsagittal_plane_pt";
HAnimSite785.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor786 = createNode("TouchSensor");
TouchSensor786.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite785.children = new MFNode();

HAnimSite785.children[0] = TouchSensor786;

Shape Shape787 = createNode("Shape");
Shape787.USE = "HAnimSiteShape";
HAnimSite785.children[1] = Shape787;

HAnimSegment771.children[4] = HAnimSite785;

HAnimSite HAnimSite788 = createNode("HAnimSite");
HAnimSite788.DEF = "hanim_rear_center_midsagittal_plane_pt";
HAnimSite788.name = "rear_center_midsagittal_plane_pt";
HAnimSite788.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor789 = createNode("TouchSensor");
TouchSensor789.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite788.children = new MFNode();

HAnimSite788.children[0] = TouchSensor789;

Shape Shape790 = createNode("Shape");
Shape790.USE = "HAnimSiteShape";
HAnimSite788.children[1] = Shape790;

HAnimSegment771.children[5] = HAnimSite788;

HAnimJoint770.children = new MFNode();

HAnimJoint770.children[0] = HAnimSegment771;

HAnimJoint HAnimJoint791 = createNode("HAnimJoint");
HAnimJoint791.DEF = "hanim_vt6";
HAnimJoint791.name = "vt6";
HAnimJoint791.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimSegment HAnimSegment792 = createNode("HAnimSegment");
HAnimSegment792.DEF = "hanim_t6";
HAnimSegment792.name = "t6";
Transform Transform793 = createNode("Transform");
Transform Transform794 = createNode("Transform");
Shape Shape795 = createNode("Shape");
Shape795.USE = "HAnimJointShape";
Transform794.child = new undefined();

Transform794.child[0] = Shape795;

Transform793.children = new MFNode();

Transform793.children[0] = Transform794;

HAnimSegment792.children = new MFNode();

HAnimSegment792.children[0] = Transform793;

Shape Shape796 = createNode("Shape");
LineSet LineSet797 = createNode("LineSet");
LineSet797.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA798 = createNode("ColorRGBA");
ColorRGBA798.USE = "HAnimSegmentLineColorRGBA";
LineSet797.color = ColorRGBA798;

Coordinate Coordinate799 = createNode("Coordinate");
Coordinate799.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet797.coord = Coordinate799;

Shape796.geometry = LineSet797;

HAnimSegment792.children[1] = Shape796;

HAnimSite HAnimSite800 = createNode("HAnimSite");
HAnimSite800.DEF = "hanim_spine_1_middle_back_pt";
HAnimSite800.name = "spine_1_middle_back_pt";
HAnimSite800.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor801 = createNode("TouchSensor");
TouchSensor801.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite800.children = new MFNode();

HAnimSite800.children[0] = TouchSensor801;

Shape Shape802 = createNode("Shape");
Shape802.USE = "HAnimSiteShape";
HAnimSite800.children[1] = Shape802;

HAnimSegment792.children[2] = HAnimSite800;

HAnimJoint791.children = new MFNode();

HAnimJoint791.children[0] = HAnimSegment792;

HAnimJoint HAnimJoint803 = createNode("HAnimJoint");
HAnimJoint803.DEF = "hanim_vt5";
HAnimJoint803.name = "vt5";
HAnimJoint803.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimSegment HAnimSegment804 = createNode("HAnimSegment");
HAnimSegment804.DEF = "hanim_t5";
HAnimSegment804.name = "t5";
Transform Transform805 = createNode("Transform");
Transform Transform806 = createNode("Transform");
Shape Shape807 = createNode("Shape");
Shape807.USE = "HAnimJointShape";
Transform806.child = new undefined();

Transform806.child[0] = Shape807;

Transform805.children = new MFNode();

Transform805.children[0] = Transform806;

HAnimSegment804.children = new MFNode();

HAnimSegment804.children[0] = Transform805;

Shape Shape808 = createNode("Shape");
LineSet LineSet809 = createNode("LineSet");
LineSet809.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA810 = createNode("ColorRGBA");
ColorRGBA810.USE = "HAnimSegmentLineColorRGBA";
LineSet809.color = ColorRGBA810;

Coordinate Coordinate811 = createNode("Coordinate");
Coordinate811.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet809.coord = Coordinate811;

Shape808.geometry = LineSet809;

HAnimSegment804.children[1] = Shape808;

HAnimJoint803.children = new MFNode();

HAnimJoint803.children[0] = HAnimSegment804;

HAnimJoint HAnimJoint812 = createNode("HAnimJoint");
HAnimJoint812.DEF = "hanim_vt4";
HAnimJoint812.name = "vt4";
HAnimJoint812.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimSegment HAnimSegment813 = createNode("HAnimSegment");
HAnimSegment813.DEF = "hanim_t4";
HAnimSegment813.name = "t4";
Transform Transform814 = createNode("Transform");
Transform Transform815 = createNode("Transform");
Shape Shape816 = createNode("Shape");
Shape816.USE = "HAnimJointShape";
Transform815.child = new undefined();

Transform815.child[0] = Shape816;

Transform814.children = new MFNode();

Transform814.children[0] = Transform815;

HAnimSegment813.children = new MFNode();

HAnimSegment813.children[0] = Transform814;

Shape Shape817 = createNode("Shape");
LineSet LineSet818 = createNode("LineSet");
LineSet818.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA819 = createNode("ColorRGBA");
ColorRGBA819.USE = "HAnimSegmentLineColorRGBA";
LineSet818.color = ColorRGBA819;

Coordinate Coordinate820 = createNode("Coordinate");
Coordinate820.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet818.coord = Coordinate820;

Shape817.geometry = LineSet818;

HAnimSegment813.children[1] = Shape817;

HAnimJoint812.children = new MFNode();

HAnimJoint812.children[0] = HAnimSegment813;

HAnimJoint HAnimJoint821 = createNode("HAnimJoint");
HAnimJoint821.DEF = "hanim_vt3";
HAnimJoint821.name = "vt3";
HAnimJoint821.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimSegment HAnimSegment822 = createNode("HAnimSegment");
HAnimSegment822.DEF = "hanim_t3";
HAnimSegment822.name = "t3";
Transform Transform823 = createNode("Transform");
Transform Transform824 = createNode("Transform");
Shape Shape825 = createNode("Shape");
Shape825.USE = "HAnimJointShape";
Transform824.child = new undefined();

Transform824.child[0] = Shape825;

Transform823.children = new MFNode();

Transform823.children[0] = Transform824;

HAnimSegment822.children = new MFNode();

HAnimSegment822.children[0] = Transform823;

Shape Shape826 = createNode("Shape");
LineSet LineSet827 = createNode("LineSet");
LineSet827.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA828 = createNode("ColorRGBA");
ColorRGBA828.USE = "HAnimSegmentLineColorRGBA";
LineSet827.color = ColorRGBA828;

Coordinate Coordinate829 = createNode("Coordinate");
Coordinate829.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet827.coord = Coordinate829;

Shape826.geometry = LineSet827;

HAnimSegment822.children[1] = Shape826;

HAnimJoint821.children = new MFNode();

HAnimJoint821.children[0] = HAnimSegment822;

HAnimJoint HAnimJoint830 = createNode("HAnimJoint");
HAnimJoint830.DEF = "hanim_vt2";
HAnimJoint830.name = "vt2";
HAnimJoint830.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimSegment HAnimSegment831 = createNode("HAnimSegment");
HAnimSegment831.DEF = "hanim_t2";
HAnimSegment831.name = "t2";
Transform Transform832 = createNode("Transform");
Transform Transform833 = createNode("Transform");
Shape Shape834 = createNode("Shape");
Shape834.USE = "HAnimJointShape";
Transform833.child = new undefined();

Transform833.child[0] = Shape834;

Transform832.children = new MFNode();

Transform832.children[0] = Transform833;

HAnimSegment831.children = new MFNode();

HAnimSegment831.children[0] = Transform832;

Shape Shape835 = createNode("Shape");
LineSet LineSet836 = createNode("LineSet");
LineSet836.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA837 = createNode("ColorRGBA");
ColorRGBA837.USE = "HAnimSegmentLineColorRGBA";
LineSet836.color = ColorRGBA837;

Coordinate Coordinate838 = createNode("Coordinate");
Coordinate838.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet836.coord = Coordinate838;

Shape835.geometry = LineSet836;

HAnimSegment831.children[1] = Shape835;

HAnimSite HAnimSite839 = createNode("HAnimSite");
HAnimSite839.DEF = "hanim_cervicale_pt";
HAnimSite839.name = "cervicale_pt";
HAnimSite839.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor840 = createNode("TouchSensor");
TouchSensor840.description = "HAnimSite cervicale_pt";
HAnimSite839.children = new MFNode();

HAnimSite839.children[0] = TouchSensor840;

Shape Shape841 = createNode("Shape");
Shape841.USE = "HAnimSiteShape";
HAnimSite839.children[1] = Shape841;

HAnimSegment831.children[2] = HAnimSite839;

HAnimSite HAnimSite842 = createNode("HAnimSite");
HAnimSite842.DEF = "hanim_suprasternale_pt";
HAnimSite842.name = "suprasternale_pt";
HAnimSite842.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor843 = createNode("TouchSensor");
TouchSensor843.description = "HAnimSite suprasternale_pt";
HAnimSite842.children = new MFNode();

HAnimSite842.children[0] = TouchSensor843;

Shape Shape844 = createNode("Shape");
Shape844.USE = "HAnimSiteShape";
HAnimSite842.children[1] = Shape844;

HAnimSegment831.children[3] = HAnimSite842;

HAnimJoint830.children = new MFNode();

HAnimJoint830.children[0] = HAnimSegment831;

HAnimJoint HAnimJoint845 = createNode("HAnimJoint");
HAnimJoint845.DEF = "hanim_vt1";
HAnimJoint845.name = "vt1";
HAnimJoint845.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimSegment HAnimSegment846 = createNode("HAnimSegment");
HAnimSegment846.DEF = "hanim_t1";
HAnimSegment846.name = "t1";
Transform Transform847 = createNode("Transform");
Transform Transform848 = createNode("Transform");
Shape Shape849 = createNode("Shape");
Shape849.USE = "HAnimJointShape";
Transform848.child = new undefined();

Transform848.child[0] = Shape849;

Transform847.children = new MFNode();

Transform847.children[0] = Transform848;

HAnimSegment846.children = new MFNode();

HAnimSegment846.children[0] = Transform847;

Shape Shape850 = createNode("Shape");
LineSet LineSet851 = createNode("LineSet");
LineSet851.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA852 = createNode("ColorRGBA");
ColorRGBA852.USE = "HAnimSegmentLineColorRGBA";
LineSet851.color = ColorRGBA852;

Coordinate Coordinate853 = createNode("Coordinate");
Coordinate853.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet851.coord = Coordinate853;

Shape850.geometry = LineSet851;

HAnimSegment846.children[1] = Shape850;

HAnimSite HAnimSite854 = createNode("HAnimSite");
HAnimSite854.DEF = "hanim_l_neck_base_pt";
HAnimSite854.name = "l_neck_base_pt";
HAnimSite854.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor855 = createNode("TouchSensor");
TouchSensor855.description = "HAnimSite l_neck_base_pt";
HAnimSite854.children = new MFNode();

HAnimSite854.children[0] = TouchSensor855;

Shape Shape856 = createNode("Shape");
Shape856.USE = "HAnimSiteShape";
HAnimSite854.children[1] = Shape856;

HAnimSegment846.children[2] = HAnimSite854;

HAnimSite HAnimSite857 = createNode("HAnimSite");
HAnimSite857.DEF = "hanim_r_neck_base_pt";
HAnimSite857.name = "r_neck_base_pt";
HAnimSite857.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor858 = createNode("TouchSensor");
TouchSensor858.description = "HAnimSite r_neck_base_pt";
HAnimSite857.children = new MFNode();

HAnimSite857.children[0] = TouchSensor858;

Shape Shape859 = createNode("Shape");
Shape859.USE = "HAnimSiteShape";
HAnimSite857.children[1] = Shape859;

HAnimSegment846.children[3] = HAnimSite857;

Shape Shape860 = createNode("Shape");
LineSet LineSet861 = createNode("LineSet");
LineSet861.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA862 = createNode("ColorRGBA");
ColorRGBA862.USE = "HAnimSegmentLineColorRGBA";
LineSet861.color = ColorRGBA862;

Coordinate Coordinate863 = createNode("Coordinate");
Coordinate863.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet861.coord = Coordinate863;

Shape860.geometry = LineSet861;

HAnimSegment846.children[4] = Shape860;

HAnimSite HAnimSite864 = createNode("HAnimSite");
HAnimSite864.DEF = "hanim_l_acromion_pt";
HAnimSite864.name = "l_acromion_pt";
HAnimSite864.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor865 = createNode("TouchSensor");
TouchSensor865.description = "HAnimSite l_acromion_pt";
HAnimSite864.children = new MFNode();

HAnimSite864.children[0] = TouchSensor865;

Shape Shape866 = createNode("Shape");
Shape866.USE = "HAnimSiteShape";
HAnimSite864.children[1] = Shape866;

HAnimSegment846.children[5] = HAnimSite864;

HAnimSite HAnimSite867 = createNode("HAnimSite");
HAnimSite867.DEF = "hanim_l_axilla_distal_pt";
HAnimSite867.name = "l_axilla_distal_pt";
HAnimSite867.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor868 = createNode("TouchSensor");
TouchSensor868.description = "HAnimSite l_axilla_distal_pt";
HAnimSite867.children = new MFNode();

HAnimSite867.children[0] = TouchSensor868;

Shape Shape869 = createNode("Shape");
Shape869.USE = "HAnimSiteShape";
HAnimSite867.children[1] = Shape869;

HAnimSegment846.children[6] = HAnimSite867;

HAnimSite HAnimSite870 = createNode("HAnimSite");
HAnimSite870.DEF = "hanim_l_axilla_posterior_folds_pt";
HAnimSite870.name = "l_axilla_posterior_folds_pt";
HAnimSite870.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor871 = createNode("TouchSensor");
TouchSensor871.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite870.children = new MFNode();

HAnimSite870.children[0] = TouchSensor871;

Shape Shape872 = createNode("Shape");
Shape872.USE = "HAnimSiteShape";
HAnimSite870.children[1] = Shape872;

HAnimSegment846.children[7] = HAnimSite870;

HAnimSite HAnimSite873 = createNode("HAnimSite");
HAnimSite873.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite873.name = "l_axilla_proximal_pt";
HAnimSite873.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor874 = createNode("TouchSensor");
TouchSensor874.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite873.children = new MFNode();

HAnimSite873.children[0] = TouchSensor874;

Shape Shape875 = createNode("Shape");
Shape875.USE = "HAnimSiteShape";
HAnimSite873.children[1] = Shape875;

HAnimSegment846.children[8] = HAnimSite873;

HAnimSite HAnimSite876 = createNode("HAnimSite");
HAnimSite876.DEF = "hanim_l_clavicale_pt";
HAnimSite876.name = "l_clavicale_pt";
HAnimSite876.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor877 = createNode("TouchSensor");
TouchSensor877.description = "HAnimSite l_clavicale_pt";
HAnimSite876.children = new MFNode();

HAnimSite876.children[0] = TouchSensor877;

Shape Shape878 = createNode("Shape");
Shape878.USE = "HAnimSiteShape";
HAnimSite876.children[1] = Shape878;

HAnimSegment846.children[9] = HAnimSite876;

Shape Shape879 = createNode("Shape");
LineSet LineSet880 = createNode("LineSet");
LineSet880.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA881 = createNode("ColorRGBA");
ColorRGBA881.USE = "HAnimSegmentLineColorRGBA";
LineSet880.color = ColorRGBA881;

Coordinate Coordinate882 = createNode("Coordinate");
Coordinate882.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet880.coord = Coordinate882;

Shape879.geometry = LineSet880;

HAnimSegment846.children[10] = Shape879;

HAnimSite HAnimSite883 = createNode("HAnimSite");
HAnimSite883.DEF = "hanim_r_acromion_pt";
HAnimSite883.name = "r_acromion_pt";
HAnimSite883.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor884 = createNode("TouchSensor");
TouchSensor884.description = "HAnimSite r_acromion_pt";
HAnimSite883.children = new MFNode();

HAnimSite883.children[0] = TouchSensor884;

Shape Shape885 = createNode("Shape");
Shape885.USE = "HAnimSiteShape";
HAnimSite883.children[1] = Shape885;

HAnimSegment846.children[11] = HAnimSite883;

HAnimSite HAnimSite886 = createNode("HAnimSite");
HAnimSite886.DEF = "hanim_r_axilla_distal_pt";
HAnimSite886.name = "r_axilla_distal_pt";
HAnimSite886.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor887 = createNode("TouchSensor");
TouchSensor887.description = "HAnimSite r_axilla_distal_pt";
HAnimSite886.children = new MFNode();

HAnimSite886.children[0] = TouchSensor887;

Shape Shape888 = createNode("Shape");
Shape888.USE = "HAnimSiteShape";
HAnimSite886.children[1] = Shape888;

HAnimSegment846.children[12] = HAnimSite886;

HAnimSite HAnimSite889 = createNode("HAnimSite");
HAnimSite889.DEF = "hanim_r_axilla_posterior_folds_pt";
HAnimSite889.name = "r_axilla_posterior_folds_pt";
HAnimSite889.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor890 = createNode("TouchSensor");
TouchSensor890.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite889.children = new MFNode();

HAnimSite889.children[0] = TouchSensor890;

Shape Shape891 = createNode("Shape");
Shape891.USE = "HAnimSiteShape";
HAnimSite889.children[1] = Shape891;

HAnimSegment846.children[13] = HAnimSite889;

HAnimSite HAnimSite892 = createNode("HAnimSite");
HAnimSite892.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite892.name = "r_axilla_proximal_pt";
HAnimSite892.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor893 = createNode("TouchSensor");
TouchSensor893.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite892.children = new MFNode();

HAnimSite892.children[0] = TouchSensor893;

Shape Shape894 = createNode("Shape");
Shape894.USE = "HAnimSiteShape";
HAnimSite892.children[1] = Shape894;

HAnimSegment846.children[14] = HAnimSite892;

HAnimSite HAnimSite895 = createNode("HAnimSite");
HAnimSite895.DEF = "hanim_r_clavicale_pt";
HAnimSite895.name = "r_clavicale_pt";
HAnimSite895.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor896 = createNode("TouchSensor");
TouchSensor896.description = "HAnimSite r_clavicale_pt";
HAnimSite895.children = new MFNode();

HAnimSite895.children[0] = TouchSensor896;

Shape Shape897 = createNode("Shape");
Shape897.USE = "HAnimSiteShape";
HAnimSite895.children[1] = Shape897;

HAnimSegment846.children[15] = HAnimSite895;

HAnimJoint845.children = new MFNode();

HAnimJoint845.children[0] = HAnimSegment846;

HAnimJoint HAnimJoint898 = createNode("HAnimJoint");
HAnimJoint898.DEF = "hanim_vc7";
HAnimJoint898.name = "vc7";
HAnimJoint898.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimSegment HAnimSegment899 = createNode("HAnimSegment");
HAnimSegment899.DEF = "hanim_c7";
HAnimSegment899.name = "c7";
Transform Transform900 = createNode("Transform");
Transform Transform901 = createNode("Transform");
Shape Shape902 = createNode("Shape");
Shape902.USE = "HAnimJointShape";
Transform901.child = new undefined();

Transform901.child[0] = Shape902;

Transform900.children = new MFNode();

Transform900.children[0] = Transform901;

HAnimSegment899.children = new MFNode();

HAnimSegment899.children[0] = Transform900;

Shape Shape903 = createNode("Shape");
LineSet LineSet904 = createNode("LineSet");
LineSet904.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA905 = createNode("ColorRGBA");
ColorRGBA905.USE = "HAnimSegmentLineColorRGBA";
LineSet904.color = ColorRGBA905;

Coordinate Coordinate906 = createNode("Coordinate");
Coordinate906.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet904.coord = Coordinate906;

Shape903.geometry = LineSet904;

HAnimSegment899.children[1] = Shape903;

HAnimJoint898.children = new MFNode();

HAnimJoint898.children[0] = HAnimSegment899;

HAnimJoint HAnimJoint907 = createNode("HAnimJoint");
HAnimJoint907.DEF = "hanim_vc6";
HAnimJoint907.name = "vc6";
HAnimJoint907.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimSegment HAnimSegment908 = createNode("HAnimSegment");
HAnimSegment908.DEF = "hanim_c6";
HAnimSegment908.name = "c6";
Transform Transform909 = createNode("Transform");
Transform Transform910 = createNode("Transform");
Shape Shape911 = createNode("Shape");
Shape911.USE = "HAnimJointShape";
Transform910.child = new undefined();

Transform910.child[0] = Shape911;

Transform909.children = new MFNode();

Transform909.children[0] = Transform910;

HAnimSegment908.children = new MFNode();

HAnimSegment908.children[0] = Transform909;

Shape Shape912 = createNode("Shape");
LineSet LineSet913 = createNode("LineSet");
LineSet913.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA914 = createNode("ColorRGBA");
ColorRGBA914.USE = "HAnimSegmentLineColorRGBA";
LineSet913.color = ColorRGBA914;

Coordinate Coordinate915 = createNode("Coordinate");
Coordinate915.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet913.coord = Coordinate915;

Shape912.geometry = LineSet913;

HAnimSegment908.children[1] = Shape912;

HAnimJoint907.children = new MFNode();

HAnimJoint907.children[0] = HAnimSegment908;

HAnimJoint HAnimJoint916 = createNode("HAnimJoint");
HAnimJoint916.DEF = "hanim_vc5";
HAnimJoint916.name = "vc5";
HAnimJoint916.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimSegment HAnimSegment917 = createNode("HAnimSegment");
HAnimSegment917.DEF = "hanim_c5";
HAnimSegment917.name = "c5";
Transform Transform918 = createNode("Transform");
Transform Transform919 = createNode("Transform");
Shape Shape920 = createNode("Shape");
Shape920.USE = "HAnimJointShape";
Transform919.child = new undefined();

Transform919.child[0] = Shape920;

Transform918.children = new MFNode();

Transform918.children[0] = Transform919;

HAnimSegment917.children = new MFNode();

HAnimSegment917.children[0] = Transform918;

Shape Shape921 = createNode("Shape");
LineSet LineSet922 = createNode("LineSet");
LineSet922.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA923 = createNode("ColorRGBA");
ColorRGBA923.USE = "HAnimSegmentLineColorRGBA";
LineSet922.color = ColorRGBA923;

Coordinate Coordinate924 = createNode("Coordinate");
Coordinate924.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet922.coord = Coordinate924;

Shape921.geometry = LineSet922;

HAnimSegment917.children[1] = Shape921;

HAnimJoint916.children = new MFNode();

HAnimJoint916.children[0] = HAnimSegment917;

HAnimJoint HAnimJoint925 = createNode("HAnimJoint");
HAnimJoint925.DEF = "hanim_vc4";
HAnimJoint925.name = "vc4";
HAnimJoint925.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimSegment HAnimSegment926 = createNode("HAnimSegment");
HAnimSegment926.DEF = "hanim_c4";
HAnimSegment926.name = "c4";
Transform Transform927 = createNode("Transform");
Transform Transform928 = createNode("Transform");
Shape Shape929 = createNode("Shape");
Shape929.USE = "HAnimJointShape";
Transform928.child = new undefined();

Transform928.child[0] = Shape929;

Transform927.children = new MFNode();

Transform927.children[0] = Transform928;

HAnimSegment926.children = new MFNode();

HAnimSegment926.children[0] = Transform927;

Shape Shape930 = createNode("Shape");
LineSet LineSet931 = createNode("LineSet");
LineSet931.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA932 = createNode("ColorRGBA");
ColorRGBA932.USE = "HAnimSegmentLineColorRGBA";
LineSet931.color = ColorRGBA932;

Coordinate Coordinate933 = createNode("Coordinate");
Coordinate933.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet931.coord = Coordinate933;

Shape930.geometry = LineSet931;

HAnimSegment926.children[1] = Shape930;

HAnimJoint925.children = new MFNode();

HAnimJoint925.children[0] = HAnimSegment926;

HAnimJoint HAnimJoint934 = createNode("HAnimJoint");
HAnimJoint934.DEF = "hanim_vc3";
HAnimJoint934.name = "vc3";
HAnimJoint934.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimSegment HAnimSegment935 = createNode("HAnimSegment");
HAnimSegment935.DEF = "hanim_c3";
HAnimSegment935.name = "c3";
Transform Transform936 = createNode("Transform");
Transform Transform937 = createNode("Transform");
Shape Shape938 = createNode("Shape");
Shape938.USE = "HAnimJointShape";
Transform937.child = new undefined();

Transform937.child[0] = Shape938;

Transform936.children = new MFNode();

Transform936.children[0] = Transform937;

HAnimSegment935.children = new MFNode();

HAnimSegment935.children[0] = Transform936;

Shape Shape939 = createNode("Shape");
LineSet LineSet940 = createNode("LineSet");
LineSet940.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA941 = createNode("ColorRGBA");
ColorRGBA941.USE = "HAnimSegmentLineColorRGBA";
LineSet940.color = ColorRGBA941;

Coordinate Coordinate942 = createNode("Coordinate");
Coordinate942.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet940.coord = Coordinate942;

Shape939.geometry = LineSet940;

HAnimSegment935.children[1] = Shape939;

HAnimSite HAnimSite943 = createNode("HAnimSite");
HAnimSite943.DEF = "hanim_adams_apple_pt";
HAnimSite943.name = "adams_apple_pt";
HAnimSite943.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor944 = createNode("TouchSensor");
TouchSensor944.description = "HAnimSite adams_apple_pt";
HAnimSite943.children = new MFNode();

HAnimSite943.children[0] = TouchSensor944;

Shape Shape945 = createNode("Shape");
Shape945.USE = "HAnimSiteShape";
HAnimSite943.children[1] = Shape945;

HAnimSegment935.children[2] = HAnimSite943;

HAnimJoint934.children = new MFNode();

HAnimJoint934.children[0] = HAnimSegment935;

HAnimJoint HAnimJoint946 = createNode("HAnimJoint");
HAnimJoint946.DEF = "hanim_vc2";
HAnimJoint946.name = "vc2";
HAnimJoint946.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimSegment HAnimSegment947 = createNode("HAnimSegment");
HAnimSegment947.DEF = "hanim_c2";
HAnimSegment947.name = "c2";
Transform Transform948 = createNode("Transform");
Transform Transform949 = createNode("Transform");
Shape Shape950 = createNode("Shape");
Shape950.USE = "HAnimJointShape";
Transform949.child = new undefined();

Transform949.child[0] = Shape950;

Transform948.children = new MFNode();

Transform948.children[0] = Transform949;

HAnimSegment947.children = new MFNode();

HAnimSegment947.children[0] = Transform948;

Shape Shape951 = createNode("Shape");
LineSet LineSet952 = createNode("LineSet");
LineSet952.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA953 = createNode("ColorRGBA");
ColorRGBA953.USE = "HAnimSegmentLineColorRGBA";
LineSet952.color = ColorRGBA953;

Coordinate Coordinate954 = createNode("Coordinate");
Coordinate954.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet952.coord = Coordinate954;

Shape951.geometry = LineSet952;

HAnimSegment947.children[1] = Shape951;

HAnimJoint946.children = new MFNode();

HAnimJoint946.children[0] = HAnimSegment947;

HAnimJoint HAnimJoint955 = createNode("HAnimJoint");
HAnimJoint955.DEF = "hanim_vc1";
HAnimJoint955.name = "vc1";
HAnimJoint955.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimSegment HAnimSegment956 = createNode("HAnimSegment");
HAnimSegment956.DEF = "hanim_c1";
HAnimSegment956.name = "c1";
Transform Transform957 = createNode("Transform");
Transform Transform958 = createNode("Transform");
Shape Shape959 = createNode("Shape");
Shape959.USE = "HAnimJointShape";
Transform958.child = new undefined();

Transform958.child[0] = Shape959;

Transform957.children = new MFNode();

Transform957.children[0] = Transform958;

HAnimSegment956.children = new MFNode();

HAnimSegment956.children[0] = Transform957;

Shape Shape960 = createNode("Shape");
LineSet LineSet961 = createNode("LineSet");
LineSet961.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA962 = createNode("ColorRGBA");
ColorRGBA962.USE = "HAnimSegmentLineColorRGBA";
LineSet961.color = ColorRGBA962;

Coordinate Coordinate963 = createNode("Coordinate");
Coordinate963.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet961.coord = Coordinate963;

Shape960.geometry = LineSet961;

HAnimSegment956.children[1] = Shape960;

HAnimSite HAnimSite964 = createNode("HAnimSite");
HAnimSite964.DEF = "hanim_glabella_pt";
HAnimSite964.name = "glabella_pt";
HAnimSite964.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor965 = createNode("TouchSensor");
TouchSensor965.description = "HAnimSite glabella_pt";
HAnimSite964.children = new MFNode();

HAnimSite964.children[0] = TouchSensor965;

Shape Shape966 = createNode("Shape");
Shape966.USE = "HAnimSiteShape";
HAnimSite964.children[1] = Shape966;

HAnimSegment956.children[2] = HAnimSite964;

HAnimSite HAnimSite967 = createNode("HAnimSite");
HAnimSite967.DEF = "hanim_l_ectocanthus_pt";
HAnimSite967.name = "l_ectocanthus_pt";
HAnimSite967.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor968 = createNode("TouchSensor");
TouchSensor968.description = "HAnimSite l_ectocanthus_pt";
HAnimSite967.children = new MFNode();

HAnimSite967.children[0] = TouchSensor968;

Shape Shape969 = createNode("Shape");
Shape969.USE = "HAnimSiteShape";
HAnimSite967.children[1] = Shape969;

HAnimSegment956.children[3] = HAnimSite967;

HAnimSite HAnimSite970 = createNode("HAnimSite");
HAnimSite970.DEF = "hanim_l_infraorbitale_pt";
HAnimSite970.name = "l_infraorbitale_pt";
HAnimSite970.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor971 = createNode("TouchSensor");
TouchSensor971.description = "HAnimSite l_infraorbitale_pt";
HAnimSite970.children = new MFNode();

HAnimSite970.children[0] = TouchSensor971;

Shape Shape972 = createNode("Shape");
Shape972.USE = "HAnimSiteShape";
HAnimSite970.children[1] = Shape972;

HAnimSegment956.children[4] = HAnimSite970;

HAnimSite HAnimSite973 = createNode("HAnimSite");
HAnimSite973.DEF = "hanim_l_tragion_pt";
HAnimSite973.name = "l_tragion_pt";
HAnimSite973.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor974 = createNode("TouchSensor");
TouchSensor974.description = "HAnimSite l_tragion_pt";
HAnimSite973.children = new MFNode();

HAnimSite973.children[0] = TouchSensor974;

Shape Shape975 = createNode("Shape");
Shape975.USE = "HAnimSiteShape";
HAnimSite973.children[1] = Shape975;

HAnimSegment956.children[5] = HAnimSite973;

HAnimSite HAnimSite976 = createNode("HAnimSite");
HAnimSite976.DEF = "hanim_nuchale_pt";
HAnimSite976.name = "nuchale_pt";
HAnimSite976.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor977 = createNode("TouchSensor");
TouchSensor977.description = "HAnimSite nuchale_pt";
HAnimSite976.children = new MFNode();

HAnimSite976.children[0] = TouchSensor977;

Shape Shape978 = createNode("Shape");
Shape978.USE = "HAnimSiteShape";
HAnimSite976.children[1] = Shape978;

HAnimSegment956.children[6] = HAnimSite976;

HAnimSite HAnimSite979 = createNode("HAnimSite");
HAnimSite979.DEF = "hanim_opisthocranion_pt";
HAnimSite979.name = "opisthocranion_pt";
HAnimSite979.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor980 = createNode("TouchSensor");
TouchSensor980.description = "HAnimSite opisthocranion_pt";
HAnimSite979.children = new MFNode();

HAnimSite979.children[0] = TouchSensor980;

Shape Shape981 = createNode("Shape");
Shape981.USE = "HAnimSiteShape";
HAnimSite979.children[1] = Shape981;

HAnimSegment956.children[7] = HAnimSite979;

HAnimSite HAnimSite982 = createNode("HAnimSite");
HAnimSite982.DEF = "hanim_r_ectocanthus_pt";
HAnimSite982.name = "r_ectocanthus_pt";
HAnimSite982.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor983 = createNode("TouchSensor");
TouchSensor983.description = "HAnimSite r_ectocanthus_pt";
HAnimSite982.children = new MFNode();

HAnimSite982.children[0] = TouchSensor983;

Shape Shape984 = createNode("Shape");
Shape984.USE = "HAnimSiteShape";
HAnimSite982.children[1] = Shape984;

HAnimSegment956.children[8] = HAnimSite982;

HAnimSite HAnimSite985 = createNode("HAnimSite");
HAnimSite985.DEF = "hanim_r_infraorbitale_pt";
HAnimSite985.name = "r_infraorbitale_pt";
HAnimSite985.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor986 = createNode("TouchSensor");
TouchSensor986.description = "HAnimSite r_infraorbitale_pt";
HAnimSite985.children = new MFNode();

HAnimSite985.children[0] = TouchSensor986;

Shape Shape987 = createNode("Shape");
Shape987.USE = "HAnimSiteShape";
HAnimSite985.children[1] = Shape987;

HAnimSegment956.children[9] = HAnimSite985;

HAnimSite HAnimSite988 = createNode("HAnimSite");
HAnimSite988.DEF = "hanim_r_tragion_pt";
HAnimSite988.name = "r_tragion_pt";
HAnimSite988.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor989 = createNode("TouchSensor");
TouchSensor989.description = "HAnimSite r_tragion_pt";
HAnimSite988.children = new MFNode();

HAnimSite988.children[0] = TouchSensor989;

Shape Shape990 = createNode("Shape");
Shape990.USE = "HAnimSiteShape";
HAnimSite988.children[1] = Shape990;

HAnimSegment956.children[10] = HAnimSite988;

HAnimSite HAnimSite991 = createNode("HAnimSite");
HAnimSite991.DEF = "hanim_sellion_pt";
HAnimSite991.name = "sellion_pt";
HAnimSite991.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor992 = createNode("TouchSensor");
TouchSensor992.description = "HAnimSite sellion_pt";
HAnimSite991.children = new MFNode();

HAnimSite991.children[0] = TouchSensor992;

Shape Shape993 = createNode("Shape");
Shape993.USE = "HAnimSiteShape";
HAnimSite991.children[1] = Shape993;

HAnimSegment956.children[11] = HAnimSite991;

HAnimSite HAnimSite994 = createNode("HAnimSite");
HAnimSite994.DEF = "hanim_skull_vertex_pt";
HAnimSite994.name = "skull_vertex_pt";
HAnimSite994.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor995 = createNode("TouchSensor");
TouchSensor995.description = "HAnimSite skull_vertex_pt";
HAnimSite994.children = new MFNode();

HAnimSite994.children[0] = TouchSensor995;

Shape Shape996 = createNode("Shape");
Shape996.USE = "HAnimSiteShape";
HAnimSite994.children[1] = Shape996;

HAnimSegment956.children[12] = HAnimSite994;

HAnimJoint955.children = new MFNode();

HAnimJoint955.children[0] = HAnimSegment956;

HAnimJoint HAnimJoint997 = createNode("HAnimJoint");
HAnimJoint997.DEF = "hanim_skullbase";
HAnimJoint997.name = "skullbase";
HAnimJoint997.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimDisplacer HAnimDisplacer998 = createNode("HAnimDisplacer");
HAnimDisplacer998.DEF = "Joe_skull_tip_raiser_action";
HAnimDisplacer998.name = "skull_tip_raiser_action";
HAnimDisplacer998.coordIndex = new MFInt32(new int[0,1,2,3,4,5,6,7,8,9]);
HAnimDisplacer998.displacements = new MFVec3f(new float[0,0.15,0,0,0,0.15,-0.1,0,0.15,0.1,0,0.05,0,-0.02,0.05,-0.15,0,0,-0.05,0,0,0.15,0,0,0.05,0,0,0,0,-0.15]);
HAnimJoint997.displacers = new MFNode();

HAnimJoint997.displacers[0] = HAnimDisplacer998;

HAnimSegment HAnimSegment999 = createNode("HAnimSegment");
HAnimSegment999.DEF = "hanim_skull";
HAnimSegment999.name = "skull";
Transform Transform1000 = createNode("Transform");
Transform Transform1001 = createNode("Transform");
Shape Shape1002 = createNode("Shape");
Shape1002.USE = "HAnimJointShape";
Transform1001.child = new undefined();

Transform1001.child[0] = Shape1002;

Transform1000.children = new MFNode();

Transform1000.children[0] = Transform1001;

HAnimSegment999.children = new MFNode();

HAnimSegment999.children[0] = Transform1000;

Shape Shape1003 = createNode("Shape");
LineSet LineSet1004 = createNode("LineSet");
LineSet1004.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1005 = createNode("ColorRGBA");
ColorRGBA1005.USE = "HAnimSegmentLineColorRGBA";
LineSet1004.color = ColorRGBA1005;

Coordinate Coordinate1006 = createNode("Coordinate");
Coordinate1006.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1004.coord = Coordinate1006;

Shape1003.geometry = LineSet1004;

HAnimSegment999.children[1] = Shape1003;

Shape Shape1007 = createNode("Shape");
LineSet LineSet1008 = createNode("LineSet");
LineSet1008.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1009 = createNode("ColorRGBA");
ColorRGBA1009.USE = "HAnimSegmentLineColorRGBA";
LineSet1008.color = ColorRGBA1009;

Coordinate Coordinate1010 = createNode("Coordinate");
Coordinate1010.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1008.coord = Coordinate1010;

Shape1007.geometry = LineSet1008;

HAnimSegment999.children[2] = Shape1007;

Shape Shape1011 = createNode("Shape");
LineSet LineSet1012 = createNode("LineSet");
LineSet1012.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1013 = createNode("ColorRGBA");
ColorRGBA1013.USE = "HAnimSegmentLineColorRGBA";
LineSet1012.color = ColorRGBA1013;

Coordinate Coordinate1014 = createNode("Coordinate");
Coordinate1014.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1012.coord = Coordinate1014;

Shape1011.geometry = LineSet1012;

HAnimSegment999.children[3] = Shape1011;

Shape Shape1015 = createNode("Shape");
LineSet LineSet1016 = createNode("LineSet");
LineSet1016.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1017 = createNode("ColorRGBA");
ColorRGBA1017.USE = "HAnimSegmentLineColorRGBA";
LineSet1016.color = ColorRGBA1017;

Coordinate Coordinate1018 = createNode("Coordinate");
Coordinate1018.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1016.coord = Coordinate1018;

Shape1015.geometry = LineSet1016;

HAnimSegment999.children[4] = Shape1015;

Shape Shape1019 = createNode("Shape");
LineSet LineSet1020 = createNode("LineSet");
LineSet1020.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1021 = createNode("ColorRGBA");
ColorRGBA1021.USE = "HAnimSegmentLineColorRGBA";
LineSet1020.color = ColorRGBA1021;

Coordinate Coordinate1022 = createNode("Coordinate");
Coordinate1022.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1020.coord = Coordinate1022;

Shape1019.geometry = LineSet1020;

HAnimSegment999.children[5] = Shape1019;

Shape Shape1023 = createNode("Shape");
LineSet LineSet1024 = createNode("LineSet");
LineSet1024.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1025 = createNode("ColorRGBA");
ColorRGBA1025.USE = "HAnimSegmentLineColorRGBA";
LineSet1024.color = ColorRGBA1025;

Coordinate Coordinate1026 = createNode("Coordinate");
Coordinate1026.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1024.coord = Coordinate1026;

Shape1023.geometry = LineSet1024;

HAnimSegment999.children[6] = Shape1023;

Shape Shape1027 = createNode("Shape");
LineSet LineSet1028 = createNode("LineSet");
LineSet1028.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1029 = createNode("ColorRGBA");
ColorRGBA1029.USE = "HAnimSegmentLineColorRGBA";
LineSet1028.color = ColorRGBA1029;

Coordinate Coordinate1030 = createNode("Coordinate");
Coordinate1030.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet1028.coord = Coordinate1030;

Shape1027.geometry = LineSet1028;

HAnimSegment999.children[7] = Shape1027;

HAnimSite HAnimSite1031 = createNode("HAnimSite");
HAnimSite1031.DEF = "hanim_l_gonion_pt";
HAnimSite1031.name = "l_gonion_pt";
HAnimSite1031.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
TouchSensor TouchSensor1032 = createNode("TouchSensor");
TouchSensor1032.description = "HAnimSite l_gonion_pt";
HAnimSite1031.children = new MFNode();

HAnimSite1031.children[0] = TouchSensor1032;

Shape Shape1033 = createNode("Shape");
Shape1033.USE = "HAnimSiteShape";
HAnimSite1031.children[1] = Shape1033;

HAnimSegment999.children[8] = HAnimSite1031;

HAnimSite HAnimSite1034 = createNode("HAnimSite");
HAnimSite1034.DEF = "hanim_menton_pt";
HAnimSite1034.name = "menton_pt";
HAnimSite1034.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1035 = createNode("TouchSensor");
TouchSensor1035.description = "HAnimSite menton_pt";
HAnimSite1034.children = new MFNode();

HAnimSite1034.children[0] = TouchSensor1035;

Shape Shape1036 = createNode("Shape");
Shape1036.USE = "HAnimSiteShape";
HAnimSite1034.children[1] = Shape1036;

HAnimSegment999.children[9] = HAnimSite1034;

HAnimSite HAnimSite1037 = createNode("HAnimSite");
HAnimSite1037.DEF = "hanim_r_gonion_pt";
HAnimSite1037.name = "r_gonion_pt";
HAnimSite1037.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
TouchSensor TouchSensor1038 = createNode("TouchSensor");
TouchSensor1038.description = "HAnimSite r_gonion_pt";
HAnimSite1037.children = new MFNode();

HAnimSite1037.children[0] = TouchSensor1038;

Shape Shape1039 = createNode("Shape");
Shape1039.USE = "HAnimSiteShape";
HAnimSite1037.children[1] = Shape1039;

HAnimSegment999.children[10] = HAnimSite1037;

HAnimSite HAnimSite1040 = createNode("HAnimSite");
HAnimSite1040.DEF = "hanim_supramenton_pt";
HAnimSite1040.name = "supramenton_pt";
HAnimSite1040.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
TouchSensor TouchSensor1041 = createNode("TouchSensor");
TouchSensor1041.description = "HAnimSite supramenton_pt";
HAnimSite1040.children = new MFNode();

HAnimSite1040.children[0] = TouchSensor1041;

Shape Shape1042 = createNode("Shape");
Shape1042.USE = "HAnimSiteShape";
HAnimSite1040.children[1] = Shape1042;

HAnimSegment999.children[11] = HAnimSite1040;

HAnimJoint997.children[1] = HAnimSegment999;

HAnimJoint HAnimJoint1043 = createNode("HAnimJoint");
HAnimJoint1043.DEF = "hanim_l_eyelid_joint";
HAnimJoint1043.name = "l_eyelid_joint";
HAnimJoint1043.center = new SFVec3f(new float[0,1,0]);
HAnimJoint997.children[2] = HAnimJoint1043;

HAnimJoint HAnimJoint1044 = createNode("HAnimJoint");
HAnimJoint1044.DEF = "hanim_r_eyelid_joint";
HAnimJoint1044.name = "r_eyelid_joint";
HAnimJoint1044.center = new SFVec3f(new float[0,1,0]);
HAnimJoint997.children[3] = HAnimJoint1044;

HAnimJoint HAnimJoint1045 = createNode("HAnimJoint");
HAnimJoint1045.DEF = "hanim_l_eyeball_joint";
HAnimJoint1045.name = "l_eyeball_joint";
HAnimJoint1045.center = new SFVec3f(new float[0,1,0]);
HAnimJoint997.children[4] = HAnimJoint1045;

HAnimJoint HAnimJoint1046 = createNode("HAnimJoint");
HAnimJoint1046.DEF = "hanim_r_eyeball_joint";
HAnimJoint1046.name = "r_eyeball_joint";
HAnimJoint1046.center = new SFVec3f(new float[0,1,0]);
HAnimJoint997.children[5] = HAnimJoint1046;

HAnimJoint HAnimJoint1047 = createNode("HAnimJoint");
HAnimJoint1047.DEF = "hanim_l_eyebrow_joint";
HAnimJoint1047.name = "l_eyebrow_joint";
HAnimJoint1047.center = new SFVec3f(new float[0,1,0]);
HAnimJoint997.children[6] = HAnimJoint1047;

HAnimJoint HAnimJoint1048 = createNode("HAnimJoint");
HAnimJoint1048.DEF = "hanim_r_eyebrow_joint";
HAnimJoint1048.name = "r_eyebrow_joint";
HAnimJoint1048.center = new SFVec3f(new float[0,1,0]);
HAnimJoint997.children[7] = HAnimJoint1048;

HAnimJoint HAnimJoint1049 = createNode("HAnimJoint");
HAnimJoint1049.DEF = "hanim_temporomandibular";
HAnimJoint1049.name = "temporomandibular";
HAnimJoint1049.center = new SFVec3f(new float[0,1,0]);
HAnimJoint997.children[8] = HAnimJoint1049;

HAnimJoint955.children[1] = HAnimJoint997;

HAnimJoint946.children[1] = HAnimJoint955;

HAnimJoint934.children[1] = HAnimJoint946;

HAnimJoint925.children[1] = HAnimJoint934;

HAnimJoint916.children[1] = HAnimJoint925;

HAnimJoint907.children[1] = HAnimJoint916;

HAnimJoint898.children[1] = HAnimJoint907;

HAnimJoint845.children[1] = HAnimJoint898;

HAnimJoint HAnimJoint1050 = createNode("HAnimJoint");
HAnimJoint1050.DEF = "hanim_l_sternoclavicular";
HAnimJoint1050.name = "l_sternoclavicular";
HAnimJoint1050.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment1051 = createNode("HAnimSegment");
HAnimSegment1051.DEF = "hanim_l_clavicle";
HAnimSegment1051.name = "l_clavicle";
Transform Transform1052 = createNode("Transform");
Transform Transform1053 = createNode("Transform");
Shape Shape1054 = createNode("Shape");
Shape1054.USE = "HAnimJointShape";
Transform1053.child = new undefined();

Transform1053.child[0] = Shape1054;

Transform1052.children = new MFNode();

Transform1052.children[0] = Transform1053;

HAnimSegment1051.children = new MFNode();

HAnimSegment1051.children[0] = Transform1052;

Shape Shape1055 = createNode("Shape");
LineSet LineSet1056 = createNode("LineSet");
LineSet1056.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1057 = createNode("ColorRGBA");
ColorRGBA1057.USE = "HAnimSegmentLineColorRGBA";
LineSet1056.color = ColorRGBA1057;

Coordinate Coordinate1058 = createNode("Coordinate");
Coordinate1058.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet1056.coord = Coordinate1058;

Shape1055.geometry = LineSet1056;

HAnimSegment1051.children[1] = Shape1055;

HAnimJoint1050.children = new MFNode();

HAnimJoint1050.children[0] = HAnimSegment1051;

HAnimJoint HAnimJoint1059 = createNode("HAnimJoint");
HAnimJoint1059.DEF = "hanim_l_acromioclavicular";
HAnimJoint1059.name = "l_acromioclavicular";
HAnimJoint1059.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment1060 = createNode("HAnimSegment");
HAnimSegment1060.DEF = "hanim_l_scapula";
HAnimSegment1060.name = "l_scapula";
Transform Transform1061 = createNode("Transform");
Transform Transform1062 = createNode("Transform");
Shape Shape1063 = createNode("Shape");
Shape1063.USE = "HAnimJointShape";
Transform1062.child = new undefined();

Transform1062.child[0] = Shape1063;

Transform1061.children = new MFNode();

Transform1061.children[0] = Transform1062;

HAnimSegment1060.children = new MFNode();

HAnimSegment1060.children[0] = Transform1061;

Shape Shape1064 = createNode("Shape");
LineSet LineSet1065 = createNode("LineSet");
LineSet1065.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1066 = createNode("ColorRGBA");
ColorRGBA1066.USE = "HAnimSegmentLineColorRGBA";
LineSet1065.color = ColorRGBA1066;

Coordinate Coordinate1067 = createNode("Coordinate");
Coordinate1067.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet1065.coord = Coordinate1067;

Shape1064.geometry = LineSet1065;

HAnimSegment1060.children[1] = Shape1064;

HAnimSite HAnimSite1068 = createNode("HAnimSite");
HAnimSite1068.DEF = "hanim_l_bideltoid_pt";
HAnimSite1068.name = "l_bideltoid_pt";
HAnimSite1068.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1069 = createNode("TouchSensor");
TouchSensor1069.description = "HAnimSite l_bideltoid_pt";
HAnimSite1068.children = new MFNode();

HAnimSite1068.children[0] = TouchSensor1069;

Shape Shape1070 = createNode("Shape");
Shape1070.USE = "HAnimSiteShape";
HAnimSite1068.children[1] = Shape1070;

HAnimSegment1060.children[2] = HAnimSite1068;

HAnimSite HAnimSite1071 = createNode("HAnimSite");
HAnimSite1071.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite1071.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite1071.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor1072 = createNode("TouchSensor");
TouchSensor1072.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite1071.children = new MFNode();

HAnimSite1071.children[0] = TouchSensor1072;

Shape Shape1073 = createNode("Shape");
Shape1073.USE = "HAnimSiteShape";
HAnimSite1071.children[1] = Shape1073;

HAnimSegment1060.children[3] = HAnimSite1071;

HAnimJoint1059.children = new MFNode();

HAnimJoint1059.children[0] = HAnimSegment1060;

HAnimJoint HAnimJoint1074 = createNode("HAnimJoint");
HAnimJoint1074.DEF = "hanim_l_shoulder";
HAnimJoint1074.name = "l_shoulder";
HAnimJoint1074.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment1075 = createNode("HAnimSegment");
HAnimSegment1075.DEF = "hanim_l_upperarm";
HAnimSegment1075.name = "l_upperarm";
Transform Transform1076 = createNode("Transform");
Transform Transform1077 = createNode("Transform");
Shape Shape1078 = createNode("Shape");
Shape1078.USE = "HAnimJointShape";
Transform1077.child = new undefined();

Transform1077.child[0] = Shape1078;

Transform1076.children = new MFNode();

Transform1076.children[0] = Transform1077;

HAnimSegment1075.children = new MFNode();

HAnimSegment1075.children[0] = Transform1076;

Shape Shape1079 = createNode("Shape");
LineSet LineSet1080 = createNode("LineSet");
LineSet1080.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1081 = createNode("ColorRGBA");
ColorRGBA1081.USE = "HAnimSegmentLineColorRGBA";
LineSet1080.color = ColorRGBA1081;

Coordinate Coordinate1082 = createNode("Coordinate");
Coordinate1082.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet1080.coord = Coordinate1082;

Shape1079.geometry = LineSet1080;

HAnimSegment1075.children[1] = Shape1079;

HAnimSite HAnimSite1083 = createNode("HAnimSite");
HAnimSite1083.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite1083.name = "l_humeral_medial_epicondyles_pt";
HAnimSite1083.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor1084 = createNode("TouchSensor");
TouchSensor1084.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite1083.children = new MFNode();

HAnimSite1083.children[0] = TouchSensor1084;

Shape Shape1085 = createNode("Shape");
Shape1085.USE = "HAnimSiteShape";
HAnimSite1083.children[1] = Shape1085;

HAnimSegment1075.children[2] = HAnimSite1083;

HAnimSite HAnimSite1086 = createNode("HAnimSite");
HAnimSite1086.DEF = "hanim_l_olecranon_pt";
HAnimSite1086.name = "l_olecranon_pt";
HAnimSite1086.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor1087 = createNode("TouchSensor");
TouchSensor1087.description = "HAnimSite l_olecranon_pt";
HAnimSite1086.children = new MFNode();

HAnimSite1086.children[0] = TouchSensor1087;

Shape Shape1088 = createNode("Shape");
Shape1088.USE = "HAnimSiteShape";
HAnimSite1086.children[1] = Shape1088;

HAnimSegment1075.children[3] = HAnimSite1086;

HAnimSite HAnimSite1089 = createNode("HAnimSite");
HAnimSite1089.DEF = "hanim_l_radial_styloid_pt";
HAnimSite1089.name = "l_radial_styloid_pt";
HAnimSite1089.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor1090 = createNode("TouchSensor");
TouchSensor1090.description = "HAnimSite l_radial_styloid_pt";
HAnimSite1089.children = new MFNode();

HAnimSite1089.children[0] = TouchSensor1090;

Shape Shape1091 = createNode("Shape");
Shape1091.USE = "HAnimSiteShape";
HAnimSite1089.children[1] = Shape1091;

HAnimSegment1075.children[4] = HAnimSite1089;

HAnimSite HAnimSite1092 = createNode("HAnimSite");
HAnimSite1092.DEF = "hanim_l_radiale_pt";
HAnimSite1092.name = "l_radiale_pt";
HAnimSite1092.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor1093 = createNode("TouchSensor");
TouchSensor1093.description = "HAnimSite l_radiale_pt";
HAnimSite1092.children = new MFNode();

HAnimSite1092.children[0] = TouchSensor1093;

Shape Shape1094 = createNode("Shape");
Shape1094.USE = "HAnimSiteShape";
HAnimSite1092.children[1] = Shape1094;

HAnimSegment1075.children[5] = HAnimSite1092;

HAnimJoint1074.children = new MFNode();

HAnimJoint1074.children[0] = HAnimSegment1075;

HAnimJoint HAnimJoint1095 = createNode("HAnimJoint");
HAnimJoint1095.DEF = "hanim_l_elbow";
HAnimJoint1095.name = "l_elbow";
HAnimJoint1095.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment1096 = createNode("HAnimSegment");
HAnimSegment1096.DEF = "hanim_l_forearm";
HAnimSegment1096.name = "l_forearm";
Transform Transform1097 = createNode("Transform");
Transform Transform1098 = createNode("Transform");
Shape Shape1099 = createNode("Shape");
Shape1099.USE = "HAnimJointShape";
Transform1098.child = new undefined();

Transform1098.child[0] = Shape1099;

Transform1097.children = new MFNode();

Transform1097.children[0] = Transform1098;

HAnimSegment1096.children = new MFNode();

HAnimSegment1096.children[0] = Transform1097;

Shape Shape1100 = createNode("Shape");
LineSet LineSet1101 = createNode("LineSet");
LineSet1101.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1102 = createNode("ColorRGBA");
ColorRGBA1102.USE = "HAnimSegmentLineColorRGBA";
LineSet1101.color = ColorRGBA1102;

Coordinate Coordinate1103 = createNode("Coordinate");
Coordinate1103.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet1101.coord = Coordinate1103;

Shape1100.geometry = LineSet1101;

HAnimSegment1096.children[1] = Shape1100;

HAnimSite HAnimSite1104 = createNode("HAnimSite");
HAnimSite1104.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1104.name = "l_ulnar_styloid_pt";
HAnimSite1104.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor1105 = createNode("TouchSensor");
TouchSensor1105.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite1104.children = new MFNode();

HAnimSite1104.children[0] = TouchSensor1105;

Shape Shape1106 = createNode("Shape");
Shape1106.USE = "HAnimSiteShape";
HAnimSite1104.children[1] = Shape1106;

HAnimSegment1096.children[2] = HAnimSite1104;

HAnimJoint1095.children = new MFNode();

HAnimJoint1095.children[0] = HAnimSegment1096;

HAnimJoint HAnimJoint1107 = createNode("HAnimJoint");
HAnimJoint1107.DEF = "hanim_l_radiocarpal";
HAnimJoint1107.name = "l_radiocarpal";
HAnimJoint1107.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment1108 = createNode("HAnimSegment");
HAnimSegment1108.DEF = "hanim_l_carpal";
HAnimSegment1108.name = "l_carpal";
Transform Transform1109 = createNode("Transform");
Transform1109.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform1109.rotation = new SFRotation(new float[0,0,1,-3.14]);
Transform1109.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform Transform1110 = createNode("Transform");
Transform1110.rotation = new SFRotation(new float[0,1,0,-1.57]);
Shape Shape1111 = createNode("Shape");
Shape1111.USE = "HAnimJointShape";
Transform1110.child = new undefined();

Transform1110.child[0] = Shape1111;

Transform1109.children = new MFNode();

Transform1109.children[0] = Transform1110;

HAnimSegment1108.children = new MFNode();

HAnimSegment1108.children[0] = Transform1109;

Shape Shape1112 = createNode("Shape");
LineSet LineSet1113 = createNode("LineSet");
LineSet1113.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1114 = createNode("ColorRGBA");
ColorRGBA1114.USE = "HAnimSegmentLineColorRGBA";
LineSet1113.color = ColorRGBA1114;

Coordinate Coordinate1115 = createNode("Coordinate");
Coordinate1115.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet1113.coord = Coordinate1115;

Shape1112.geometry = LineSet1113;

HAnimSegment1108.children[1] = Shape1112;

Shape Shape1116 = createNode("Shape");
LineSet LineSet1117 = createNode("LineSet");
LineSet1117.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1118 = createNode("ColorRGBA");
ColorRGBA1118.USE = "HAnimSegmentLineColorRGBA";
LineSet1117.color = ColorRGBA1118;

Coordinate Coordinate1119 = createNode("Coordinate");
Coordinate1119.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet1117.coord = Coordinate1119;

Shape1116.geometry = LineSet1117;

HAnimSegment1108.children[2] = Shape1116;

Shape Shape1120 = createNode("Shape");
LineSet LineSet1121 = createNode("LineSet");
LineSet1121.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1122 = createNode("ColorRGBA");
ColorRGBA1122.USE = "HAnimSegmentLineColorRGBA";
LineSet1121.color = ColorRGBA1122;

Coordinate Coordinate1123 = createNode("Coordinate");
Coordinate1123.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet1121.coord = Coordinate1123;

Shape1120.geometry = LineSet1121;

HAnimSegment1108.children[3] = Shape1120;

Shape Shape1124 = createNode("Shape");
LineSet LineSet1125 = createNode("LineSet");
LineSet1125.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1126 = createNode("ColorRGBA");
ColorRGBA1126.USE = "HAnimSegmentLineColorRGBA";
LineSet1125.color = ColorRGBA1126;

Coordinate Coordinate1127 = createNode("Coordinate");
Coordinate1127.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet1125.coord = Coordinate1127;

Shape1124.geometry = LineSet1125;

HAnimSegment1108.children[4] = Shape1124;

HAnimJoint1107.children = new MFNode();

HAnimJoint1107.children[0] = HAnimSegment1108;

HAnimJoint HAnimJoint1128 = createNode("HAnimJoint");
HAnimJoint1128.DEF = "hanim_l_midcarpal_1";
HAnimJoint1128.name = "l_midcarpal_1";
HAnimJoint1128.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment1129 = createNode("HAnimSegment");
HAnimSegment1129.DEF = "hanim_l_trapezium";
HAnimSegment1129.name = "l_trapezium";
Transform Transform1130 = createNode("Transform");
Transform Transform1131 = createNode("Transform");
Shape Shape1132 = createNode("Shape");
Shape1132.USE = "HAnimJointShape";
Transform1131.child = new undefined();

Transform1131.child[0] = Shape1132;

Transform1130.children = new MFNode();

Transform1130.children[0] = Transform1131;

HAnimSegment1129.children = new MFNode();

HAnimSegment1129.children[0] = Transform1130;

Shape Shape1133 = createNode("Shape");
LineSet LineSet1134 = createNode("LineSet");
LineSet1134.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1135 = createNode("ColorRGBA");
ColorRGBA1135.USE = "HAnimSegmentLineColorRGBA";
LineSet1134.color = ColorRGBA1135;

Coordinate Coordinate1136 = createNode("Coordinate");
Coordinate1136.point = new MFVec3f(new float[0,1,0,0.1924,0.8472,-0.0534]);
LineSet1134.coord = Coordinate1136;

Shape1133.geometry = LineSet1134;

HAnimSegment1129.children[1] = Shape1133;

HAnimJoint1128.children = new MFNode();

HAnimJoint1128.children[0] = HAnimSegment1129;

HAnimJoint HAnimJoint1137 = createNode("HAnimJoint");
HAnimJoint1137.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1137.name = "l_carpometacarpal_1";
HAnimJoint1137.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment1138 = createNode("HAnimSegment");
HAnimSegment1138.DEF = "hanim_l_metacarpal_1";
HAnimSegment1138.name = "l_metacarpal_1";
Transform Transform1139 = createNode("Transform");
Transform Transform1140 = createNode("Transform");
Shape Shape1141 = createNode("Shape");
Shape1141.USE = "HAnimJointShape";
Transform1140.child = new undefined();

Transform1140.child[0] = Shape1141;

Transform1139.children = new MFNode();

Transform1139.children[0] = Transform1140;

HAnimSegment1138.children = new MFNode();

HAnimSegment1138.children[0] = Transform1139;

Shape Shape1142 = createNode("Shape");
LineSet LineSet1143 = createNode("LineSet");
LineSet1143.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1144 = createNode("ColorRGBA");
ColorRGBA1144.USE = "HAnimSegmentLineColorRGBA";
LineSet1143.color = ColorRGBA1144;

Coordinate Coordinate1145 = createNode("Coordinate");
Coordinate1145.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1143.coord = Coordinate1145;

Shape1142.geometry = LineSet1143;

HAnimSegment1138.children[1] = Shape1142;

HAnimJoint1137.children = new MFNode();

HAnimJoint1137.children[0] = HAnimSegment1138;

HAnimJoint HAnimJoint1146 = createNode("HAnimJoint");
HAnimJoint1146.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1146.name = "l_metacarpophalangeal_1";
HAnimJoint1146.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment1147 = createNode("HAnimSegment");
HAnimSegment1147.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment1147.name = "l_carpal_proximal_phalanx_1";
Transform Transform1148 = createNode("Transform");
Transform Transform1149 = createNode("Transform");
Shape Shape1150 = createNode("Shape");
Shape1150.USE = "HAnimJointShape";
Transform1149.child = new undefined();

Transform1149.child[0] = Shape1150;

Transform1148.children = new MFNode();

Transform1148.children[0] = Transform1149;

HAnimSegment1147.children = new MFNode();

HAnimSegment1147.children[0] = Transform1148;

Shape Shape1151 = createNode("Shape");
LineSet LineSet1152 = createNode("LineSet");
LineSet1152.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1153 = createNode("ColorRGBA");
ColorRGBA1153.USE = "HAnimSegmentLineColorRGBA";
LineSet1152.color = ColorRGBA1153;

Coordinate Coordinate1154 = createNode("Coordinate");
Coordinate1154.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1152.coord = Coordinate1154;

Shape1151.geometry = LineSet1152;

HAnimSegment1147.children[1] = Shape1151;

HAnimSite HAnimSite1155 = createNode("HAnimSite");
HAnimSite1155.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite1155.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite1155.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1156 = createNode("TouchSensor");
TouchSensor1156.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite1155.children = new MFNode();

HAnimSite1155.children[0] = TouchSensor1156;

Shape Shape1157 = createNode("Shape");
Shape1157.USE = "HAnimSiteShape";
HAnimSite1155.children[1] = Shape1157;

HAnimSegment1147.children[2] = HAnimSite1155;

HAnimJoint1146.children = new MFNode();

HAnimJoint1146.children[0] = HAnimSegment1147;

HAnimJoint HAnimJoint1158 = createNode("HAnimJoint");
HAnimJoint1158.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1158.name = "l_carpal_interphalangeal_1";
HAnimJoint1158.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1146.children[1] = HAnimJoint1158;

HAnimJoint1137.children[1] = HAnimJoint1146;

HAnimJoint1128.children[1] = HAnimJoint1137;

HAnimJoint1107.children[1] = HAnimJoint1128;

HAnimJoint HAnimJoint1159 = createNode("HAnimJoint");
HAnimJoint1159.DEF = "hanim_l_midcarpal_2";
HAnimJoint1159.name = "l_midcarpal_2";
HAnimJoint1159.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment1160 = createNode("HAnimSegment");
HAnimSegment1160.DEF = "hanim_l_trapezoid";
HAnimSegment1160.name = "l_trapezoid";
Transform Transform1161 = createNode("Transform");
Transform Transform1162 = createNode("Transform");
Shape Shape1163 = createNode("Shape");
Shape1163.USE = "HAnimJointShape";
Transform1162.child = new undefined();

Transform1162.child[0] = Shape1163;

Transform1161.children = new MFNode();

Transform1161.children[0] = Transform1162;

HAnimSegment1160.children = new MFNode();

HAnimSegment1160.children[0] = Transform1161;

Shape Shape1164 = createNode("Shape");
LineSet LineSet1165 = createNode("LineSet");
LineSet1165.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1166 = createNode("ColorRGBA");
ColorRGBA1166.USE = "HAnimSegmentLineColorRGBA";
LineSet1165.color = ColorRGBA1166;

Coordinate Coordinate1167 = createNode("Coordinate");
Coordinate1167.point = new MFVec3f(new float[0,1,0,0.1983,0.8024,-0.028]);
LineSet1165.coord = Coordinate1167;

Shape1164.geometry = LineSet1165;

HAnimSegment1160.children[1] = Shape1164;

HAnimSite HAnimSite1168 = createNode("HAnimSite");
HAnimSite1168.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1168.name = "l_metacarpal_phalanx_2_pt";
HAnimSite1168.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor1169 = createNode("TouchSensor");
TouchSensor1169.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite1168.children = new MFNode();

HAnimSite1168.children[0] = TouchSensor1169;

Shape Shape1170 = createNode("Shape");
Shape1170.USE = "HAnimSiteShape";
HAnimSite1168.children[1] = Shape1170;

HAnimSegment1160.children[2] = HAnimSite1168;

HAnimJoint1159.children = new MFNode();

HAnimJoint1159.children[0] = HAnimSegment1160;

HAnimJoint HAnimJoint1171 = createNode("HAnimJoint");
HAnimJoint1171.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1171.name = "l_carpometacarpal_2";
HAnimJoint1171.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment1172 = createNode("HAnimSegment");
HAnimSegment1172.DEF = "hanim_l_metacarpal_2";
HAnimSegment1172.name = "l_metacarpal_2";
Transform Transform1173 = createNode("Transform");
Transform Transform1174 = createNode("Transform");
Shape Shape1175 = createNode("Shape");
Shape1175.USE = "HAnimJointShape";
Transform1174.child = new undefined();

Transform1174.child[0] = Shape1175;

Transform1173.children = new MFNode();

Transform1173.children[0] = Transform1174;

HAnimSegment1172.children = new MFNode();

HAnimSegment1172.children[0] = Transform1173;

Shape Shape1176 = createNode("Shape");
LineSet LineSet1177 = createNode("LineSet");
LineSet1177.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1178 = createNode("ColorRGBA");
ColorRGBA1178.USE = "HAnimSegmentLineColorRGBA";
LineSet1177.color = ColorRGBA1178;

Coordinate Coordinate1179 = createNode("Coordinate");
Coordinate1179.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1177.coord = Coordinate1179;

Shape1176.geometry = LineSet1177;

HAnimSegment1172.children[1] = Shape1176;

HAnimJoint1171.children = new MFNode();

HAnimJoint1171.children[0] = HAnimSegment1172;

HAnimJoint HAnimJoint1180 = createNode("HAnimJoint");
HAnimJoint1180.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1180.name = "l_metacarpophalangeal_2";
HAnimJoint1180.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment1181 = createNode("HAnimSegment");
HAnimSegment1181.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment1181.name = "l_carpal_proximal_phalanx_2";
Transform Transform1182 = createNode("Transform");
Transform Transform1183 = createNode("Transform");
Shape Shape1184 = createNode("Shape");
Shape1184.USE = "HAnimJointShape";
Transform1183.child = new undefined();

Transform1183.child[0] = Shape1184;

Transform1182.children = new MFNode();

Transform1182.children[0] = Transform1183;

HAnimSegment1181.children = new MFNode();

HAnimSegment1181.children[0] = Transform1182;

Shape Shape1185 = createNode("Shape");
LineSet LineSet1186 = createNode("LineSet");
LineSet1186.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1187 = createNode("ColorRGBA");
ColorRGBA1187.USE = "HAnimSegmentLineColorRGBA";
LineSet1186.color = ColorRGBA1187;

Coordinate Coordinate1188 = createNode("Coordinate");
Coordinate1188.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1186.coord = Coordinate1188;

Shape1185.geometry = LineSet1186;

HAnimSegment1181.children[1] = Shape1185;

HAnimJoint1180.children = new MFNode();

HAnimJoint1180.children[0] = HAnimSegment1181;

HAnimJoint HAnimJoint1189 = createNode("HAnimJoint");
HAnimJoint1189.DEF = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimJoint1189.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1189.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment1190 = createNode("HAnimSegment");
HAnimSegment1190.DEF = "hanim_l_carpal_middle_phalanx_1";
HAnimSegment1190.name = "l_carpal_middle_phalanx_2";
Transform Transform1191 = createNode("Transform");
Transform Transform1192 = createNode("Transform");
Shape Shape1193 = createNode("Shape");
Shape1193.USE = "HAnimJointShape";
Transform1192.child = new undefined();

Transform1192.child[0] = Shape1193;

Transform1191.children = new MFNode();

Transform1191.children[0] = Transform1192;

HAnimSegment1190.children = new MFNode();

HAnimSegment1190.children[0] = Transform1191;

Shape Shape1194 = createNode("Shape");
LineSet LineSet1195 = createNode("LineSet");
LineSet1195.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1196 = createNode("ColorRGBA");
ColorRGBA1196.USE = "HAnimSegmentLineColorRGBA";
LineSet1195.color = ColorRGBA1196;

Coordinate Coordinate1197 = createNode("Coordinate");
Coordinate1197.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1195.coord = Coordinate1197;

Shape1194.geometry = LineSet1195;

HAnimSegment1190.children[1] = Shape1194;

HAnimSite HAnimSite1198 = createNode("HAnimSite");
HAnimSite1198.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite1198.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite1198.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1199 = createNode("TouchSensor");
TouchSensor1199.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite1198.children = new MFNode();

HAnimSite1198.children[0] = TouchSensor1199;

Shape Shape1200 = createNode("Shape");
Shape1200.USE = "HAnimSiteShape";
HAnimSite1198.children[1] = Shape1200;

HAnimSegment1190.children[2] = HAnimSite1198;

HAnimSite HAnimSite1201 = createNode("HAnimSite");
HAnimSite1201.DEF = "hanim_l_dactylion_pt";
HAnimSite1201.name = "l_dactylion_pt";
HAnimSite1201.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor1202 = createNode("TouchSensor");
TouchSensor1202.description = "HAnimSite l_dactylion_pt";
HAnimSite1201.children = new MFNode();

HAnimSite1201.children[0] = TouchSensor1202;

Shape Shape1203 = createNode("Shape");
Shape1203.USE = "HAnimSiteShape";
HAnimSite1201.children[1] = Shape1203;

HAnimSegment1190.children[3] = HAnimSite1201;

HAnimJoint1189.children = new MFNode();

HAnimJoint1189.children[0] = HAnimSegment1190;

HAnimJoint HAnimJoint1204 = createNode("HAnimJoint");
HAnimJoint1204.DEF = "hanim_l_carpal_distal_interphalangeal_1";
HAnimJoint1204.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1204.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1189.children[1] = HAnimJoint1204;

HAnimJoint1180.children[1] = HAnimJoint1189;

HAnimJoint1171.children[1] = HAnimJoint1180;

HAnimJoint1159.children[1] = HAnimJoint1171;

HAnimJoint1107.children[2] = HAnimJoint1159;

HAnimJoint HAnimJoint1205 = createNode("HAnimJoint");
HAnimJoint1205.DEF = "hanim_l_midcarpal_3";
HAnimJoint1205.name = "l_midcarpal_3";
HAnimJoint1205.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment1206 = createNode("HAnimSegment");
HAnimSegment1206.DEF = "hanim_l_capitate";
HAnimSegment1206.name = "l_capitate";
Transform Transform1207 = createNode("Transform");
Transform Transform1208 = createNode("Transform");
Shape Shape1209 = createNode("Shape");
Shape1209.USE = "HAnimJointShape";
Transform1208.child = new undefined();

Transform1208.child[0] = Shape1209;

Transform1207.children = new MFNode();

Transform1207.children[0] = Transform1208;

HAnimSegment1206.children = new MFNode();

HAnimSegment1206.children[0] = Transform1207;

Shape Shape1210 = createNode("Shape");
LineSet LineSet1211 = createNode("LineSet");
LineSet1211.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1212 = createNode("ColorRGBA");
ColorRGBA1212.USE = "HAnimSegmentLineColorRGBA";
LineSet1211.color = ColorRGBA1212;

Coordinate Coordinate1213 = createNode("Coordinate");
Coordinate1213.point = new MFVec3f(new float[0,1,0,0.1987,0.8029,-0.053]);
LineSet1211.coord = Coordinate1213;

Shape1210.geometry = LineSet1211;

HAnimSegment1206.children[1] = Shape1210;

HAnimSite HAnimSite1214 = createNode("HAnimSite");
HAnimSite1214.DEF = "hanim_l_metacarpal_phalanx_3_pt";
HAnimSite1214.name = "l_metacarpal_phalanx_3_pt";
HAnimSite1214.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1215 = createNode("TouchSensor");
TouchSensor1215.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite1214.children = new MFNode();

HAnimSite1214.children[0] = TouchSensor1215;

Shape Shape1216 = createNode("Shape");
Shape1216.USE = "HAnimSiteShape";
HAnimSite1214.children[1] = Shape1216;

HAnimSegment1206.children[2] = HAnimSite1214;

HAnimJoint1205.children = new MFNode();

HAnimJoint1205.children[0] = HAnimSegment1206;

HAnimJoint HAnimJoint1217 = createNode("HAnimJoint");
HAnimJoint1217.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1217.name = "l_carpometacarpal_3";
HAnimJoint1217.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment1218 = createNode("HAnimSegment");
HAnimSegment1218.DEF = "hanim_l_metacarpal_3";
HAnimSegment1218.name = "l_metacarpal_3";
Transform Transform1219 = createNode("Transform");
Transform Transform1220 = createNode("Transform");
Shape Shape1221 = createNode("Shape");
Shape1221.USE = "HAnimJointShape";
Transform1220.child = new undefined();

Transform1220.child[0] = Shape1221;

Transform1219.children = new MFNode();

Transform1219.children[0] = Transform1220;

HAnimSegment1218.children = new MFNode();

HAnimSegment1218.children[0] = Transform1219;

Shape Shape1222 = createNode("Shape");
LineSet LineSet1223 = createNode("LineSet");
LineSet1223.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1224 = createNode("ColorRGBA");
ColorRGBA1224.USE = "HAnimSegmentLineColorRGBA";
LineSet1223.color = ColorRGBA1224;

Coordinate Coordinate1225 = createNode("Coordinate");
Coordinate1225.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1223.coord = Coordinate1225;

Shape1222.geometry = LineSet1223;

HAnimSegment1218.children[1] = Shape1222;

HAnimJoint1217.children = new MFNode();

HAnimJoint1217.children[0] = HAnimSegment1218;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1226.name = "l_metacarpophalangeal_3";
HAnimJoint1226.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment1227 = createNode("HAnimSegment");
HAnimSegment1227.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimSegment1227.name = "l_carpal_proximal_phalanx_3";
Transform Transform1228 = createNode("Transform");
Transform Transform1229 = createNode("Transform");
Shape Shape1230 = createNode("Shape");
Shape1230.USE = "HAnimJointShape";
Transform1229.child = new undefined();

Transform1229.child[0] = Shape1230;

Transform1228.children = new MFNode();

Transform1228.children[0] = Transform1229;

HAnimSegment1227.children = new MFNode();

HAnimSegment1227.children[0] = Transform1228;

Shape Shape1231 = createNode("Shape");
LineSet LineSet1232 = createNode("LineSet");
LineSet1232.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1233 = createNode("ColorRGBA");
ColorRGBA1233.USE = "HAnimSegmentLineColorRGBA";
LineSet1232.color = ColorRGBA1233;

Coordinate Coordinate1234 = createNode("Coordinate");
Coordinate1234.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1232.coord = Coordinate1234;

Shape1231.geometry = LineSet1232;

HAnimSegment1227.children[1] = Shape1231;

HAnimJoint1226.children = new MFNode();

HAnimJoint1226.children[0] = HAnimSegment1227;

HAnimJoint HAnimJoint1235 = createNode("HAnimJoint");
HAnimJoint1235.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1235.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1235.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment1236 = createNode("HAnimSegment");
HAnimSegment1236.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment1236.name = "l_carpal_middle_phalanx_3";
Transform Transform1237 = createNode("Transform");
Transform Transform1238 = createNode("Transform");
Shape Shape1239 = createNode("Shape");
Shape1239.USE = "HAnimJointShape";
Transform1238.child = new undefined();

Transform1238.child[0] = Shape1239;

Transform1237.children = new MFNode();

Transform1237.children[0] = Transform1238;

HAnimSegment1236.children = new MFNode();

HAnimSegment1236.children[0] = Transform1237;

Shape Shape1240 = createNode("Shape");
LineSet LineSet1241 = createNode("LineSet");
LineSet1241.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1242 = createNode("ColorRGBA");
ColorRGBA1242.USE = "HAnimSegmentLineColorRGBA";
LineSet1241.color = ColorRGBA1242;

Coordinate Coordinate1243 = createNode("Coordinate");
Coordinate1243.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1241.coord = Coordinate1243;

Shape1240.geometry = LineSet1241;

HAnimSegment1236.children[1] = Shape1240;

HAnimSite HAnimSite1244 = createNode("HAnimSite");
HAnimSite1244.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite1244.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite1244.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1245 = createNode("TouchSensor");
TouchSensor1245.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite1244.children = new MFNode();

HAnimSite1244.children[0] = TouchSensor1245;

Shape Shape1246 = createNode("Shape");
Shape1246.USE = "HAnimSiteShape";
HAnimSite1244.children[1] = Shape1246;

HAnimSegment1236.children[2] = HAnimSite1244;

HAnimJoint1235.children = new MFNode();

HAnimJoint1235.children[0] = HAnimSegment1236;

HAnimJoint HAnimJoint1247 = createNode("HAnimJoint");
HAnimJoint1247.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1247.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1247.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1235.children[1] = HAnimJoint1247;

HAnimJoint1226.children[1] = HAnimJoint1235;

HAnimJoint1217.children[1] = HAnimJoint1226;

HAnimJoint1205.children[1] = HAnimJoint1217;

HAnimJoint1107.children[3] = HAnimJoint1205;

HAnimJoint HAnimJoint1248 = createNode("HAnimJoint");
HAnimJoint1248.DEF = "hanim_l_midcarpal_4_1";
HAnimJoint1248.name = "l_midcarpal_4_5";
HAnimJoint1248.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment1249 = createNode("HAnimSegment");
HAnimSegment1249.DEF = "hanim_l_hamate";
HAnimSegment1249.name = "l_hamate";
Transform Transform1250 = createNode("Transform");
Transform Transform1251 = createNode("Transform");
Shape Shape1252 = createNode("Shape");
Shape1252.USE = "HAnimJointShape";
Transform1251.child = new undefined();

Transform1251.child[0] = Shape1252;

Transform1250.children = new MFNode();

Transform1250.children[0] = Transform1251;

HAnimSegment1249.children = new MFNode();

HAnimSegment1249.children[0] = Transform1250;

Shape Shape1253 = createNode("Shape");
LineSet LineSet1254 = createNode("LineSet");
LineSet1254.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1255 = createNode("ColorRGBA");
ColorRGBA1255.USE = "HAnimSegmentLineColorRGBA";
LineSet1254.color = ColorRGBA1255;

Coordinate Coordinate1256 = createNode("Coordinate");
Coordinate1256.point = new MFVec3f(new float[0,1,0,0.1956,0.8019,-0.0794]);
LineSet1254.coord = Coordinate1256;

Shape1253.geometry = LineSet1254;

HAnimSegment1249.children[1] = Shape1253;

Shape Shape1257 = createNode("Shape");
LineSet LineSet1258 = createNode("LineSet");
LineSet1258.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1259 = createNode("ColorRGBA");
ColorRGBA1259.USE = "HAnimSegmentLineColorRGBA";
LineSet1258.color = ColorRGBA1259;

Coordinate Coordinate1260 = createNode("Coordinate");
Coordinate1260.point = new MFVec3f(new float[0,1,0,0.1925,0.8066,-0.1036]);
LineSet1258.coord = Coordinate1260;

Shape1257.geometry = LineSet1258;

HAnimSegment1249.children[2] = Shape1257;

HAnimSite HAnimSite1261 = createNode("HAnimSite");
HAnimSite1261.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1261.name = "l_metacarpal_phalanx_5_pt";
HAnimSite1261.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor1262 = createNode("TouchSensor");
TouchSensor1262.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite1261.children = new MFNode();

HAnimSite1261.children[0] = TouchSensor1262;

Shape Shape1263 = createNode("Shape");
Shape1263.USE = "HAnimSiteShape";
HAnimSite1261.children[1] = Shape1263;

HAnimSegment1249.children[3] = HAnimSite1261;

HAnimJoint1248.children = new MFNode();

HAnimJoint1248.children[0] = HAnimSegment1249;

HAnimJoint HAnimJoint1264 = createNode("HAnimJoint");
HAnimJoint1264.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1264.name = "l_carpometacarpal_4";
HAnimJoint1264.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment1265 = createNode("HAnimSegment");
HAnimSegment1265.DEF = "hanim_l_metacarpal_4";
HAnimSegment1265.name = "l_metacarpal_4";
Transform Transform1266 = createNode("Transform");
Transform Transform1267 = createNode("Transform");
Shape Shape1268 = createNode("Shape");
Shape1268.USE = "HAnimJointShape";
Transform1267.child = new undefined();

Transform1267.child[0] = Shape1268;

Transform1266.children = new MFNode();

Transform1266.children[0] = Transform1267;

HAnimSegment1265.children = new MFNode();

HAnimSegment1265.children[0] = Transform1266;

Shape Shape1269 = createNode("Shape");
LineSet LineSet1270 = createNode("LineSet");
LineSet1270.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1271 = createNode("ColorRGBA");
ColorRGBA1271.USE = "HAnimSegmentLineColorRGBA";
LineSet1270.color = ColorRGBA1271;

Coordinate Coordinate1272 = createNode("Coordinate");
Coordinate1272.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1270.coord = Coordinate1272;

Shape1269.geometry = LineSet1270;

HAnimSegment1265.children[1] = Shape1269;

HAnimJoint1264.children = new MFNode();

HAnimJoint1264.children[0] = HAnimSegment1265;

HAnimJoint HAnimJoint1273 = createNode("HAnimJoint");
HAnimJoint1273.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1273.name = "l_metacarpophalangeal_4";
HAnimJoint1273.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment1274 = createNode("HAnimSegment");
HAnimSegment1274.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimSegment1274.name = "l_carpal_proximal_phalanx_4";
Transform Transform1275 = createNode("Transform");
Transform Transform1276 = createNode("Transform");
Shape Shape1277 = createNode("Shape");
Shape1277.USE = "HAnimJointShape";
Transform1276.child = new undefined();

Transform1276.child[0] = Shape1277;

Transform1275.children = new MFNode();

Transform1275.children[0] = Transform1276;

HAnimSegment1274.children = new MFNode();

HAnimSegment1274.children[0] = Transform1275;

Shape Shape1278 = createNode("Shape");
LineSet LineSet1279 = createNode("LineSet");
LineSet1279.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1280 = createNode("ColorRGBA");
ColorRGBA1280.USE = "HAnimSegmentLineColorRGBA";
LineSet1279.color = ColorRGBA1280;

Coordinate Coordinate1281 = createNode("Coordinate");
Coordinate1281.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1279.coord = Coordinate1281;

Shape1278.geometry = LineSet1279;

HAnimSegment1274.children[1] = Shape1278;

HAnimJoint1273.children = new MFNode();

HAnimJoint1273.children[0] = HAnimSegment1274;

HAnimJoint HAnimJoint1282 = createNode("HAnimJoint");
HAnimJoint1282.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1282.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1282.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment1283 = createNode("HAnimSegment");
HAnimSegment1283.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimSegment1283.name = "l_carpal_middle_phalanx_4";
Transform Transform1284 = createNode("Transform");
Transform Transform1285 = createNode("Transform");
Shape Shape1286 = createNode("Shape");
Shape1286.USE = "HAnimJointShape";
Transform1285.child = new undefined();

Transform1285.child[0] = Shape1286;

Transform1284.children = new MFNode();

Transform1284.children[0] = Transform1285;

HAnimSegment1283.children = new MFNode();

HAnimSegment1283.children[0] = Transform1284;

Shape Shape1287 = createNode("Shape");
LineSet LineSet1288 = createNode("LineSet");
LineSet1288.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1289 = createNode("ColorRGBA");
ColorRGBA1289.USE = "HAnimSegmentLineColorRGBA";
LineSet1288.color = ColorRGBA1289;

Coordinate Coordinate1290 = createNode("Coordinate");
Coordinate1290.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1288.coord = Coordinate1290;

Shape1287.geometry = LineSet1288;

HAnimSegment1283.children[1] = Shape1287;

HAnimSite HAnimSite1291 = createNode("HAnimSite");
HAnimSite1291.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite1291.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite1291.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1292 = createNode("TouchSensor");
TouchSensor1292.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite1291.children = new MFNode();

HAnimSite1291.children[0] = TouchSensor1292;

Shape Shape1293 = createNode("Shape");
Shape1293.USE = "HAnimSiteShape";
HAnimSite1291.children[1] = Shape1293;

HAnimSegment1283.children[2] = HAnimSite1291;

HAnimJoint1282.children = new MFNode();

HAnimJoint1282.children[0] = HAnimSegment1283;

HAnimJoint HAnimJoint1294 = createNode("HAnimJoint");
HAnimJoint1294.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1294.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1294.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1282.children[1] = HAnimJoint1294;

HAnimJoint1273.children[1] = HAnimJoint1282;

HAnimJoint1264.children[1] = HAnimJoint1273;

HAnimJoint1248.children[1] = HAnimJoint1264;

HAnimJoint HAnimJoint1295 = createNode("HAnimJoint");
HAnimJoint1295.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1295.name = "l_carpometacarpal_5";
HAnimJoint1295.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment1296 = createNode("HAnimSegment");
HAnimSegment1296.DEF = "hanim_l_metacarpal_5";
HAnimSegment1296.name = "l_metacarpal_5";
Transform Transform1297 = createNode("Transform");
Transform Transform1298 = createNode("Transform");
Shape Shape1299 = createNode("Shape");
Shape1299.USE = "HAnimJointShape";
Transform1298.child = new undefined();

Transform1298.child[0] = Shape1299;

Transform1297.children = new MFNode();

Transform1297.children[0] = Transform1298;

HAnimSegment1296.children = new MFNode();

HAnimSegment1296.children[0] = Transform1297;

Shape Shape1300 = createNode("Shape");
LineSet LineSet1301 = createNode("LineSet");
LineSet1301.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1302 = createNode("ColorRGBA");
ColorRGBA1302.USE = "HAnimSegmentLineColorRGBA";
LineSet1301.color = ColorRGBA1302;

Coordinate Coordinate1303 = createNode("Coordinate");
Coordinate1303.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1301.coord = Coordinate1303;

Shape1300.geometry = LineSet1301;

HAnimSegment1296.children[1] = Shape1300;

HAnimJoint1295.children = new MFNode();

HAnimJoint1295.children[0] = HAnimSegment1296;

HAnimJoint HAnimJoint1304 = createNode("HAnimJoint");
HAnimJoint1304.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1304.name = "l_metacarpophalangeal_5";
HAnimJoint1304.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment1305 = createNode("HAnimSegment");
HAnimSegment1305.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimSegment1305.name = "l_carpal_proximal_phalanx_5";
Transform Transform1306 = createNode("Transform");
Transform Transform1307 = createNode("Transform");
Shape Shape1308 = createNode("Shape");
Shape1308.USE = "HAnimJointShape";
Transform1307.child = new undefined();

Transform1307.child[0] = Shape1308;

Transform1306.children = new MFNode();

Transform1306.children[0] = Transform1307;

HAnimSegment1305.children = new MFNode();

HAnimSegment1305.children[0] = Transform1306;

Shape Shape1309 = createNode("Shape");
LineSet LineSet1310 = createNode("LineSet");
LineSet1310.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1311 = createNode("ColorRGBA");
ColorRGBA1311.USE = "HAnimSegmentLineColorRGBA";
LineSet1310.color = ColorRGBA1311;

Coordinate Coordinate1312 = createNode("Coordinate");
Coordinate1312.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1310.coord = Coordinate1312;

Shape1309.geometry = LineSet1310;

HAnimSegment1305.children[1] = Shape1309;

HAnimJoint1304.children = new MFNode();

HAnimJoint1304.children[0] = HAnimSegment1305;

HAnimJoint HAnimJoint1313 = createNode("HAnimJoint");
HAnimJoint1313.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1313.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1313.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment1314 = createNode("HAnimSegment");
HAnimSegment1314.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimSegment1314.name = "l_carpal_middle_phalanx_5";
Transform Transform1315 = createNode("Transform");
Transform Transform1316 = createNode("Transform");
Shape Shape1317 = createNode("Shape");
Shape1317.USE = "HAnimJointShape";
Transform1316.child = new undefined();

Transform1316.child[0] = Shape1317;

Transform1315.children = new MFNode();

Transform1315.children[0] = Transform1316;

HAnimSegment1314.children = new MFNode();

HAnimSegment1314.children[0] = Transform1315;

Shape Shape1318 = createNode("Shape");
LineSet LineSet1319 = createNode("LineSet");
LineSet1319.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1320 = createNode("ColorRGBA");
ColorRGBA1320.USE = "HAnimSegmentLineColorRGBA";
LineSet1319.color = ColorRGBA1320;

Coordinate Coordinate1321 = createNode("Coordinate");
Coordinate1321.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1319.coord = Coordinate1321;

Shape1318.geometry = LineSet1319;

HAnimSegment1314.children[1] = Shape1318;

HAnimSite HAnimSite1322 = createNode("HAnimSite");
HAnimSite1322.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite1322.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite1322.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1323 = createNode("TouchSensor");
TouchSensor1323.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite1322.children = new MFNode();

HAnimSite1322.children[0] = TouchSensor1323;

Shape Shape1324 = createNode("Shape");
Shape1324.USE = "HAnimSiteShape";
HAnimSite1322.children[1] = Shape1324;

HAnimSegment1314.children[2] = HAnimSite1322;

HAnimJoint1313.children = new MFNode();

HAnimJoint1313.children[0] = HAnimSegment1314;

HAnimJoint HAnimJoint1325 = createNode("HAnimJoint");
HAnimJoint1325.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1325.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1325.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1313.children[1] = HAnimJoint1325;

HAnimJoint1304.children[1] = HAnimJoint1313;

HAnimJoint1295.children[1] = HAnimJoint1304;

HAnimJoint1248.children[2] = HAnimJoint1295;

HAnimJoint1107.children[4] = HAnimJoint1248;

HAnimJoint1095.children[1] = HAnimJoint1107;

HAnimJoint1074.children[1] = HAnimJoint1095;

HAnimJoint1059.children[1] = HAnimJoint1074;

HAnimJoint1050.children[1] = HAnimJoint1059;

HAnimJoint845.children[2] = HAnimJoint1050;

HAnimJoint HAnimJoint1326 = createNode("HAnimJoint");
HAnimJoint1326.DEF = "hanim_r_sternoclavicular";
HAnimJoint1326.name = "r_sternoclavicular";
HAnimJoint1326.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimSegment HAnimSegment1327 = createNode("HAnimSegment");
HAnimSegment1327.DEF = "hanim_r_clavicle";
HAnimSegment1327.name = "r_clavicle";
Transform Transform1328 = createNode("Transform");
Transform Transform1329 = createNode("Transform");
Shape Shape1330 = createNode("Shape");
Shape1330.USE = "HAnimJointShape";
Transform1329.child = new undefined();

Transform1329.child[0] = Shape1330;

Transform1328.children = new MFNode();

Transform1328.children[0] = Transform1329;

HAnimSegment1327.children = new MFNode();

HAnimSegment1327.children[0] = Transform1328;

Shape Shape1331 = createNode("Shape");
LineSet LineSet1332 = createNode("LineSet");
LineSet1332.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1333 = createNode("ColorRGBA");
ColorRGBA1333.USE = "HAnimSegmentLineColorRGBA";
LineSet1332.color = ColorRGBA1333;

Coordinate Coordinate1334 = createNode("Coordinate");
Coordinate1334.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet1332.coord = Coordinate1334;

Shape1331.geometry = LineSet1332;

HAnimSegment1327.children[1] = Shape1331;

HAnimJoint1326.children = new MFNode();

HAnimJoint1326.children[0] = HAnimSegment1327;

HAnimJoint HAnimJoint1335 = createNode("HAnimJoint");
HAnimJoint1335.DEF = "hanim_r_acromioclavicular";
HAnimJoint1335.name = "r_acromioclavicular";
HAnimJoint1335.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimSegment HAnimSegment1336 = createNode("HAnimSegment");
HAnimSegment1336.DEF = "hanim_r_scapula";
HAnimSegment1336.name = "r_scapula";
Transform Transform1337 = createNode("Transform");
Transform Transform1338 = createNode("Transform");
Shape Shape1339 = createNode("Shape");
Shape1339.USE = "HAnimJointShape";
Transform1338.child = new undefined();

Transform1338.child[0] = Shape1339;

Transform1337.children = new MFNode();

Transform1337.children[0] = Transform1338;

HAnimSegment1336.children = new MFNode();

HAnimSegment1336.children[0] = Transform1337;

Shape Shape1340 = createNode("Shape");
LineSet LineSet1341 = createNode("LineSet");
LineSet1341.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1342 = createNode("ColorRGBA");
ColorRGBA1342.USE = "HAnimSegmentLineColorRGBA";
LineSet1341.color = ColorRGBA1342;

Coordinate Coordinate1343 = createNode("Coordinate");
Coordinate1343.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet1341.coord = Coordinate1343;

Shape1340.geometry = LineSet1341;

HAnimSegment1336.children[1] = Shape1340;

HAnimSite HAnimSite1344 = createNode("HAnimSite");
HAnimSite1344.DEF = "hanim_r_bideltoid_pt";
HAnimSite1344.name = "r_bideltoid_pt";
HAnimSite1344.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1345 = createNode("TouchSensor");
TouchSensor1345.description = "HAnimSite r_bideltoid_pt";
HAnimSite1344.children = new MFNode();

HAnimSite1344.children[0] = TouchSensor1345;

Shape Shape1346 = createNode("Shape");
Shape1346.USE = "HAnimSiteShape";
HAnimSite1344.children[1] = Shape1346;

HAnimSegment1336.children[2] = HAnimSite1344;

HAnimSite HAnimSite1347 = createNode("HAnimSite");
HAnimSite1347.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite1347.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite1347.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor1348 = createNode("TouchSensor");
TouchSensor1348.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite1347.children = new MFNode();

HAnimSite1347.children[0] = TouchSensor1348;

Shape Shape1349 = createNode("Shape");
Shape1349.USE = "HAnimSiteShape";
HAnimSite1347.children[1] = Shape1349;

HAnimSegment1336.children[3] = HAnimSite1347;

HAnimJoint1335.children = new MFNode();

HAnimJoint1335.children[0] = HAnimSegment1336;

HAnimJoint HAnimJoint1350 = createNode("HAnimJoint");
HAnimJoint1350.DEF = "hanim_r_shoulder";
HAnimJoint1350.name = "r_shoulder";
HAnimJoint1350.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimSegment HAnimSegment1351 = createNode("HAnimSegment");
HAnimSegment1351.DEF = "hanim_r_upperarm";
HAnimSegment1351.name = "r_upperarm";
Transform Transform1352 = createNode("Transform");
Transform Transform1353 = createNode("Transform");
Shape Shape1354 = createNode("Shape");
Shape1354.USE = "HAnimJointShape";
Transform1353.child = new undefined();

Transform1353.child[0] = Shape1354;

Transform1352.children = new MFNode();

Transform1352.children[0] = Transform1353;

HAnimSegment1351.children = new MFNode();

HAnimSegment1351.children[0] = Transform1352;

Shape Shape1355 = createNode("Shape");
LineSet LineSet1356 = createNode("LineSet");
LineSet1356.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1357 = createNode("ColorRGBA");
ColorRGBA1357.USE = "HAnimSegmentLineColorRGBA";
LineSet1356.color = ColorRGBA1357;

Coordinate Coordinate1358 = createNode("Coordinate");
Coordinate1358.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet1356.coord = Coordinate1358;

Shape1355.geometry = LineSet1356;

HAnimSegment1351.children[1] = Shape1355;

HAnimSite HAnimSite1359 = createNode("HAnimSite");
HAnimSite1359.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite1359.name = "r_humeral_medial_epicondyles_pt";
HAnimSite1359.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor1360 = createNode("TouchSensor");
TouchSensor1360.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite1359.children = new MFNode();

HAnimSite1359.children[0] = TouchSensor1360;

Shape Shape1361 = createNode("Shape");
Shape1361.USE = "HAnimSiteShape";
HAnimSite1359.children[1] = Shape1361;

HAnimSegment1351.children[2] = HAnimSite1359;

HAnimSite HAnimSite1362 = createNode("HAnimSite");
HAnimSite1362.DEF = "hanim_r_olecranon_pt";
HAnimSite1362.name = "r_olecranon_pt";
HAnimSite1362.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor1363 = createNode("TouchSensor");
TouchSensor1363.description = "HAnimSite r_olecranon_pt";
HAnimSite1362.children = new MFNode();

HAnimSite1362.children[0] = TouchSensor1363;

Shape Shape1364 = createNode("Shape");
Shape1364.USE = "HAnimSiteShape";
HAnimSite1362.children[1] = Shape1364;

HAnimSegment1351.children[3] = HAnimSite1362;

HAnimSite HAnimSite1365 = createNode("HAnimSite");
HAnimSite1365.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1365.name = "r_radial_styloid_pt";
HAnimSite1365.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor1366 = createNode("TouchSensor");
TouchSensor1366.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1365.children = new MFNode();

HAnimSite1365.children[0] = TouchSensor1366;

Shape Shape1367 = createNode("Shape");
Shape1367.USE = "HAnimSiteShape";
HAnimSite1365.children[1] = Shape1367;

HAnimSegment1351.children[4] = HAnimSite1365;

HAnimSite HAnimSite1368 = createNode("HAnimSite");
HAnimSite1368.DEF = "hanim_r_radiale_pt";
HAnimSite1368.name = "r_radiale_pt";
HAnimSite1368.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor1369 = createNode("TouchSensor");
TouchSensor1369.description = "HAnimSite r_radiale_pt";
HAnimSite1368.children = new MFNode();

HAnimSite1368.children[0] = TouchSensor1369;

Shape Shape1370 = createNode("Shape");
Shape1370.USE = "HAnimSiteShape";
HAnimSite1368.children[1] = Shape1370;

HAnimSegment1351.children[5] = HAnimSite1368;

HAnimJoint1350.children = new MFNode();

HAnimJoint1350.children[0] = HAnimSegment1351;

HAnimJoint HAnimJoint1371 = createNode("HAnimJoint");
HAnimJoint1371.DEF = "hanim_r_elbow";
HAnimJoint1371.name = "r_elbow";
HAnimJoint1371.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimSegment HAnimSegment1372 = createNode("HAnimSegment");
HAnimSegment1372.DEF = "hanim_r_forearm";
HAnimSegment1372.name = "r_forearm";
Transform Transform1373 = createNode("Transform");
Transform Transform1374 = createNode("Transform");
Shape Shape1375 = createNode("Shape");
Shape1375.USE = "HAnimJointShape";
Transform1374.child = new undefined();

Transform1374.child[0] = Shape1375;

Transform1373.children = new MFNode();

Transform1373.children[0] = Transform1374;

HAnimSegment1372.children = new MFNode();

HAnimSegment1372.children[0] = Transform1373;

Shape Shape1376 = createNode("Shape");
LineSet LineSet1377 = createNode("LineSet");
LineSet1377.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1378 = createNode("ColorRGBA");
ColorRGBA1378.USE = "HAnimSegmentLineColorRGBA";
LineSet1377.color = ColorRGBA1378;

Coordinate Coordinate1379 = createNode("Coordinate");
Coordinate1379.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet1377.coord = Coordinate1379;

Shape1376.geometry = LineSet1377;

HAnimSegment1372.children[1] = Shape1376;

HAnimSite HAnimSite1380 = createNode("HAnimSite");
HAnimSite1380.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1380.name = "r_ulnar_styloid_pt";
HAnimSite1380.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor1381 = createNode("TouchSensor");
TouchSensor1381.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1380.children = new MFNode();

HAnimSite1380.children[0] = TouchSensor1381;

Shape Shape1382 = createNode("Shape");
Shape1382.USE = "HAnimSiteShape";
HAnimSite1380.children[1] = Shape1382;

HAnimSegment1372.children[2] = HAnimSite1380;

HAnimJoint1371.children = new MFNode();

HAnimJoint1371.children[0] = HAnimSegment1372;

HAnimJoint HAnimJoint1383 = createNode("HAnimJoint");
HAnimJoint1383.DEF = "hanim_r_radiocarpal";
HAnimJoint1383.name = "r_radiocarpal";
HAnimJoint1383.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimSegment HAnimSegment1384 = createNode("HAnimSegment");
HAnimSegment1384.DEF = "hanim_r_carpal";
HAnimSegment1384.name = "r_carpal";
Transform Transform1385 = createNode("Transform");
Transform1385.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform1385.rotation = new SFRotation(new float[0,0,1,-3.14]);
Transform1385.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform Transform1386 = createNode("Transform");
Transform1386.rotation = new SFRotation(new float[0,1,0,1.57]);
Shape Shape1387 = createNode("Shape");
Shape1387.USE = "HAnimJointShape";
Transform1386.child = new undefined();

Transform1386.child[0] = Shape1387;

Transform1385.children = new MFNode();

Transform1385.children[0] = Transform1386;

HAnimSegment1384.children = new MFNode();

HAnimSegment1384.children[0] = Transform1385;

Shape Shape1388 = createNode("Shape");
LineSet LineSet1389 = createNode("LineSet");
LineSet1389.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1390 = createNode("ColorRGBA");
ColorRGBA1390.USE = "HAnimSegmentLineColorRGBA";
LineSet1389.color = ColorRGBA1390;

Coordinate Coordinate1391 = createNode("Coordinate");
Coordinate1391.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet1389.coord = Coordinate1391;

Shape1388.geometry = LineSet1389;

HAnimSegment1384.children[1] = Shape1388;

Shape Shape1392 = createNode("Shape");
LineSet LineSet1393 = createNode("LineSet");
LineSet1393.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1394 = createNode("ColorRGBA");
ColorRGBA1394.USE = "HAnimSegmentLineColorRGBA";
LineSet1393.color = ColorRGBA1394;

Coordinate Coordinate1395 = createNode("Coordinate");
Coordinate1395.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet1393.coord = Coordinate1395;

Shape1392.geometry = LineSet1393;

HAnimSegment1384.children[2] = Shape1392;

Shape Shape1396 = createNode("Shape");
LineSet LineSet1397 = createNode("LineSet");
LineSet1397.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1398 = createNode("ColorRGBA");
ColorRGBA1398.USE = "HAnimSegmentLineColorRGBA";
LineSet1397.color = ColorRGBA1398;

Coordinate Coordinate1399 = createNode("Coordinate");
Coordinate1399.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet1397.coord = Coordinate1399;

Shape1396.geometry = LineSet1397;

HAnimSegment1384.children[3] = Shape1396;

Shape Shape1400 = createNode("Shape");
LineSet LineSet1401 = createNode("LineSet");
LineSet1401.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1402 = createNode("ColorRGBA");
ColorRGBA1402.USE = "HAnimSegmentLineColorRGBA";
LineSet1401.color = ColorRGBA1402;

Coordinate Coordinate1403 = createNode("Coordinate");
Coordinate1403.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet1401.coord = Coordinate1403;

Shape1400.geometry = LineSet1401;

HAnimSegment1384.children[4] = Shape1400;

HAnimJoint1383.children = new MFNode();

HAnimJoint1383.children[0] = HAnimSegment1384;

HAnimJoint HAnimJoint1404 = createNode("HAnimJoint");
HAnimJoint1404.DEF = "hanim_r_midcarpal_1";
HAnimJoint1404.name = "r_midcarpal_1";
HAnimJoint1404.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment1405 = createNode("HAnimSegment");
HAnimSegment1405.DEF = "hanim_r_trapezium";
HAnimSegment1405.name = "r_trapezium";
Transform Transform1406 = createNode("Transform");
Transform Transform1407 = createNode("Transform");
Shape Shape1408 = createNode("Shape");
Shape1408.USE = "HAnimJointShape";
Transform1407.child = new undefined();

Transform1407.child[0] = Shape1408;

Transform1406.children = new MFNode();

Transform1406.children[0] = Transform1407;

HAnimSegment1405.children = new MFNode();

HAnimSegment1405.children[0] = Transform1406;

Shape Shape1409 = createNode("Shape");
LineSet LineSet1410 = createNode("LineSet");
LineSet1410.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1411 = createNode("ColorRGBA");
ColorRGBA1411.USE = "HAnimSegmentLineColorRGBA";
LineSet1410.color = ColorRGBA1411;

Coordinate Coordinate1412 = createNode("Coordinate");
Coordinate1412.point = new MFVec3f(new float[0,1,0,-0.1899,0.8502,-0.0473]);
LineSet1410.coord = Coordinate1412;

Shape1409.geometry = LineSet1410;

HAnimSegment1405.children[1] = Shape1409;

HAnimJoint1404.children = new MFNode();

HAnimJoint1404.children[0] = HAnimSegment1405;

HAnimJoint HAnimJoint1413 = createNode("HAnimJoint");
HAnimJoint1413.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1413.name = "r_carpometacarpal_1";
HAnimJoint1413.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimSegment HAnimSegment1414 = createNode("HAnimSegment");
HAnimSegment1414.DEF = "hanim_r_metacarpal_1";
HAnimSegment1414.name = "r_metacarpal_1";
Transform Transform1415 = createNode("Transform");
Transform Transform1416 = createNode("Transform");
Shape Shape1417 = createNode("Shape");
Shape1417.USE = "HAnimJointShape";
Transform1416.child = new undefined();

Transform1416.child[0] = Shape1417;

Transform1415.children = new MFNode();

Transform1415.children[0] = Transform1416;

HAnimSegment1414.children = new MFNode();

HAnimSegment1414.children[0] = Transform1415;

Shape Shape1418 = createNode("Shape");
LineSet LineSet1419 = createNode("LineSet");
LineSet1419.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1420 = createNode("ColorRGBA");
ColorRGBA1420.USE = "HAnimSegmentLineColorRGBA";
LineSet1419.color = ColorRGBA1420;

Coordinate Coordinate1421 = createNode("Coordinate");
Coordinate1421.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1419.coord = Coordinate1421;

Shape1418.geometry = LineSet1419;

HAnimSegment1414.children[1] = Shape1418;

HAnimJoint1413.children = new MFNode();

HAnimJoint1413.children[0] = HAnimSegment1414;

HAnimJoint HAnimJoint1422 = createNode("HAnimJoint");
HAnimJoint1422.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1422.name = "r_metacarpophalangeal_1";
HAnimJoint1422.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimSegment HAnimSegment1423 = createNode("HAnimSegment");
HAnimSegment1423.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimSegment1423.name = "r_carpal_proximal_phalanx_1";
Transform Transform1424 = createNode("Transform");
Transform Transform1425 = createNode("Transform");
Shape Shape1426 = createNode("Shape");
Shape1426.USE = "HAnimJointShape";
Transform1425.child = new undefined();

Transform1425.child[0] = Shape1426;

Transform1424.children = new MFNode();

Transform1424.children[0] = Transform1425;

HAnimSegment1423.children = new MFNode();

HAnimSegment1423.children[0] = Transform1424;

Shape Shape1427 = createNode("Shape");
LineSet LineSet1428 = createNode("LineSet");
LineSet1428.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1429 = createNode("ColorRGBA");
ColorRGBA1429.USE = "HAnimSegmentLineColorRGBA";
LineSet1428.color = ColorRGBA1429;

Coordinate Coordinate1430 = createNode("Coordinate");
Coordinate1430.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1428.coord = Coordinate1430;

Shape1427.geometry = LineSet1428;

HAnimSegment1423.children[1] = Shape1427;

HAnimSite HAnimSite1431 = createNode("HAnimSite");
HAnimSite1431.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite1431.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1431.translation = new SFVec3f(new float[-0.35,0.4,0]);
TouchSensor TouchSensor1432 = createNode("TouchSensor");
TouchSensor1432.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1431.children = new MFNode();

HAnimSite1431.children[0] = TouchSensor1432;

Shape Shape1433 = createNode("Shape");
Shape1433.USE = "HAnimSiteShape";
HAnimSite1431.children[1] = Shape1433;

HAnimSegment1423.children[2] = HAnimSite1431;

HAnimJoint1422.children = new MFNode();

HAnimJoint1422.children[0] = HAnimSegment1423;

HAnimJoint HAnimJoint1434 = createNode("HAnimJoint");
HAnimJoint1434.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1434.name = "r_carpal_interphalangeal_1";
HAnimJoint1434.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1422.children[1] = HAnimJoint1434;

HAnimJoint1413.children[1] = HAnimJoint1422;

HAnimJoint1404.children[1] = HAnimJoint1413;

HAnimJoint1383.children[1] = HAnimJoint1404;

HAnimJoint HAnimJoint1435 = createNode("HAnimJoint");
HAnimJoint1435.DEF = "hanim_r_midcarpal_2";
HAnimJoint1435.name = "r_midcarpal_2";
HAnimJoint1435.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment1436 = createNode("HAnimSegment");
HAnimSegment1436.DEF = "hanim_r_trapezoid";
HAnimSegment1436.name = "r_trapezoid";
Transform Transform1437 = createNode("Transform");
Transform Transform1438 = createNode("Transform");
Shape Shape1439 = createNode("Shape");
Shape1439.USE = "HAnimJointShape";
Transform1438.child = new undefined();

Transform1438.child[0] = Shape1439;

Transform1437.children = new MFNode();

Transform1437.children[0] = Transform1438;

HAnimSegment1436.children = new MFNode();

HAnimSegment1436.children[0] = Transform1437;

Shape Shape1440 = createNode("Shape");
LineSet LineSet1441 = createNode("LineSet");
LineSet1441.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1442 = createNode("ColorRGBA");
ColorRGBA1442.USE = "HAnimSegmentLineColorRGBA";
LineSet1441.color = ColorRGBA1442;

Coordinate Coordinate1443 = createNode("Coordinate");
Coordinate1443.point = new MFVec3f(new float[0,1,0,-0.1961,0.8055,-0.0218]);
LineSet1441.coord = Coordinate1443;

Shape1440.geometry = LineSet1441;

HAnimSegment1436.children[1] = Shape1440;

HAnimSite HAnimSite1444 = createNode("HAnimSite");
HAnimSite1444.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1444.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1444.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor1445 = createNode("TouchSensor");
TouchSensor1445.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite1444.children = new MFNode();

HAnimSite1444.children[0] = TouchSensor1445;

Shape Shape1446 = createNode("Shape");
Shape1446.USE = "HAnimSiteShape";
HAnimSite1444.children[1] = Shape1446;

HAnimSegment1436.children[2] = HAnimSite1444;

HAnimJoint1435.children = new MFNode();

HAnimJoint1435.children[0] = HAnimSegment1436;

HAnimJoint HAnimJoint1447 = createNode("HAnimJoint");
HAnimJoint1447.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1447.name = "r_carpometacarpal_2";
HAnimJoint1447.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimSegment HAnimSegment1448 = createNode("HAnimSegment");
HAnimSegment1448.DEF = "hanim_r_metacarpal_2";
HAnimSegment1448.name = "r_metacarpal_2";
Transform Transform1449 = createNode("Transform");
Transform Transform1450 = createNode("Transform");
Shape Shape1451 = createNode("Shape");
Shape1451.USE = "HAnimJointShape";
Transform1450.child = new undefined();

Transform1450.child[0] = Shape1451;

Transform1449.children = new MFNode();

Transform1449.children[0] = Transform1450;

HAnimSegment1448.children = new MFNode();

HAnimSegment1448.children[0] = Transform1449;

Shape Shape1452 = createNode("Shape");
LineSet LineSet1453 = createNode("LineSet");
LineSet1453.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1454 = createNode("ColorRGBA");
ColorRGBA1454.USE = "HAnimSegmentLineColorRGBA";
LineSet1453.color = ColorRGBA1454;

Coordinate Coordinate1455 = createNode("Coordinate");
Coordinate1455.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1453.coord = Coordinate1455;

Shape1452.geometry = LineSet1453;

HAnimSegment1448.children[1] = Shape1452;

HAnimJoint1447.children = new MFNode();

HAnimJoint1447.children[0] = HAnimSegment1448;

HAnimJoint HAnimJoint1456 = createNode("HAnimJoint");
HAnimJoint1456.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1456.name = "r_metacarpophalangeal_2";
HAnimJoint1456.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimSegment HAnimSegment1457 = createNode("HAnimSegment");
HAnimSegment1457.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimSegment1457.name = "r_carpal_proximal_phalanx_2";
Transform Transform1458 = createNode("Transform");
Transform Transform1459 = createNode("Transform");
Shape Shape1460 = createNode("Shape");
Shape1460.USE = "HAnimJointShape";
Transform1459.child = new undefined();

Transform1459.child[0] = Shape1460;

Transform1458.children = new MFNode();

Transform1458.children[0] = Transform1459;

HAnimSegment1457.children = new MFNode();

HAnimSegment1457.children[0] = Transform1458;

Shape Shape1461 = createNode("Shape");
LineSet LineSet1462 = createNode("LineSet");
LineSet1462.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1463 = createNode("ColorRGBA");
ColorRGBA1463.USE = "HAnimSegmentLineColorRGBA";
LineSet1462.color = ColorRGBA1463;

Coordinate Coordinate1464 = createNode("Coordinate");
Coordinate1464.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1462.coord = Coordinate1464;

Shape1461.geometry = LineSet1462;

HAnimSegment1457.children[1] = Shape1461;

HAnimJoint1456.children = new MFNode();

HAnimJoint1456.children[0] = HAnimSegment1457;

HAnimJoint HAnimJoint1465 = createNode("HAnimJoint");
HAnimJoint1465.DEF = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimJoint1465.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1465.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimSegment HAnimSegment1466 = createNode("HAnimSegment");
HAnimSegment1466.DEF = "hanim_r_carpal_middle_phalanx_1";
HAnimSegment1466.name = "r_carpal_middle_phalanx_2";
Transform Transform1467 = createNode("Transform");
Transform Transform1468 = createNode("Transform");
Shape Shape1469 = createNode("Shape");
Shape1469.USE = "HAnimJointShape";
Transform1468.child = new undefined();

Transform1468.child[0] = Shape1469;

Transform1467.children = new MFNode();

Transform1467.children[0] = Transform1468;

HAnimSegment1466.children = new MFNode();

HAnimSegment1466.children[0] = Transform1467;

Shape Shape1470 = createNode("Shape");
LineSet LineSet1471 = createNode("LineSet");
LineSet1471.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1472 = createNode("ColorRGBA");
ColorRGBA1472.USE = "HAnimSegmentLineColorRGBA";
LineSet1471.color = ColorRGBA1472;

Coordinate Coordinate1473 = createNode("Coordinate");
Coordinate1473.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1471.coord = Coordinate1473;

Shape1470.geometry = LineSet1471;

HAnimSegment1466.children[1] = Shape1470;

HAnimSite HAnimSite1474 = createNode("HAnimSite");
HAnimSite1474.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite1474.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1474.translation = new SFVec3f(new float[-0.24,0.87,0]);
TouchSensor TouchSensor1475 = createNode("TouchSensor");
TouchSensor1475.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1474.children = new MFNode();

HAnimSite1474.children[0] = TouchSensor1475;

Shape Shape1476 = createNode("Shape");
Shape1476.USE = "HAnimSiteShape";
HAnimSite1474.children[1] = Shape1476;

HAnimSegment1466.children[2] = HAnimSite1474;

HAnimSite HAnimSite1477 = createNode("HAnimSite");
HAnimSite1477.DEF = "hanim_r_dactylion_pt";
HAnimSite1477.name = "r_dactylion_pt";
HAnimSite1477.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor1478 = createNode("TouchSensor");
TouchSensor1478.description = "HAnimSite r_dactylion_pt";
HAnimSite1477.children = new MFNode();

HAnimSite1477.children[0] = TouchSensor1478;

Shape Shape1479 = createNode("Shape");
Shape1479.USE = "HAnimSiteShape";
HAnimSite1477.children[1] = Shape1479;

HAnimSegment1466.children[3] = HAnimSite1477;

HAnimJoint1465.children = new MFNode();

HAnimJoint1465.children[0] = HAnimSegment1466;

HAnimJoint HAnimJoint1480 = createNode("HAnimJoint");
HAnimJoint1480.DEF = "hanim_r_carpal_distal_interphalangeal_1";
HAnimJoint1480.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1480.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1465.children[1] = HAnimJoint1480;

HAnimJoint1456.children[1] = HAnimJoint1465;

HAnimJoint1447.children[1] = HAnimJoint1456;

HAnimJoint1435.children[1] = HAnimJoint1447;

HAnimJoint1383.children[2] = HAnimJoint1435;

HAnimJoint HAnimJoint1481 = createNode("HAnimJoint");
HAnimJoint1481.DEF = "hanim_r_midcarpal_3";
HAnimJoint1481.name = "r_midcarpal_3";
HAnimJoint1481.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment1482 = createNode("HAnimSegment");
HAnimSegment1482.DEF = "hanim_r_capitate";
HAnimSegment1482.name = "r_capitate";
Transform Transform1483 = createNode("Transform");
Transform Transform1484 = createNode("Transform");
Shape Shape1485 = createNode("Shape");
Shape1485.USE = "HAnimJointShape";
Transform1484.child = new undefined();

Transform1484.child[0] = Shape1485;

Transform1483.children = new MFNode();

Transform1483.children[0] = Transform1484;

HAnimSegment1482.children = new MFNode();

HAnimSegment1482.children[0] = Transform1483;

Shape Shape1486 = createNode("Shape");
LineSet LineSet1487 = createNode("LineSet");
LineSet1487.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1488 = createNode("ColorRGBA");
ColorRGBA1488.USE = "HAnimSegmentLineColorRGBA";
LineSet1487.color = ColorRGBA1488;

Coordinate Coordinate1489 = createNode("Coordinate");
Coordinate1489.point = new MFVec3f(new float[0,1,0,-0.1972,0.806,-0.0468]);
LineSet1487.coord = Coordinate1489;

Shape1486.geometry = LineSet1487;

HAnimSegment1482.children[1] = Shape1486;

HAnimSite HAnimSite1490 = createNode("HAnimSite");
HAnimSite1490.DEF = "hanim_r_metacarpal_phalanx_3_pt";
HAnimSite1490.name = "r_metacarpal_phalanx_3_pt";
HAnimSite1490.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1491 = createNode("TouchSensor");
TouchSensor1491.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite1490.children = new MFNode();

HAnimSite1490.children[0] = TouchSensor1491;

Shape Shape1492 = createNode("Shape");
Shape1492.USE = "HAnimSiteShape";
HAnimSite1490.children[1] = Shape1492;

HAnimSegment1482.children[2] = HAnimSite1490;

HAnimJoint1481.children = new MFNode();

HAnimJoint1481.children[0] = HAnimSegment1482;

HAnimJoint HAnimJoint1493 = createNode("HAnimJoint");
HAnimJoint1493.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1493.name = "r_carpometacarpal_3";
HAnimJoint1493.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimSegment HAnimSegment1494 = createNode("HAnimSegment");
HAnimSegment1494.DEF = "hanim_r_metacarpal_3";
HAnimSegment1494.name = "r_metacarpal_3";
Transform Transform1495 = createNode("Transform");
Transform Transform1496 = createNode("Transform");
Shape Shape1497 = createNode("Shape");
Shape1497.USE = "HAnimJointShape";
Transform1496.child = new undefined();

Transform1496.child[0] = Shape1497;

Transform1495.children = new MFNode();

Transform1495.children[0] = Transform1496;

HAnimSegment1494.children = new MFNode();

HAnimSegment1494.children[0] = Transform1495;

Shape Shape1498 = createNode("Shape");
LineSet LineSet1499 = createNode("LineSet");
LineSet1499.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1500 = createNode("ColorRGBA");
ColorRGBA1500.USE = "HAnimSegmentLineColorRGBA";
LineSet1499.color = ColorRGBA1500;

Coordinate Coordinate1501 = createNode("Coordinate");
Coordinate1501.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1499.coord = Coordinate1501;

Shape1498.geometry = LineSet1499;

HAnimSegment1494.children[1] = Shape1498;

HAnimJoint1493.children = new MFNode();

HAnimJoint1493.children[0] = HAnimSegment1494;

HAnimJoint HAnimJoint1502 = createNode("HAnimJoint");
HAnimJoint1502.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1502.name = "r_metacarpophalangeal_3";
HAnimJoint1502.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimSegment HAnimSegment1503 = createNode("HAnimSegment");
HAnimSegment1503.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimSegment1503.name = "r_carpal_proximal_phalanx_3";
Transform Transform1504 = createNode("Transform");
Transform Transform1505 = createNode("Transform");
Shape Shape1506 = createNode("Shape");
Shape1506.USE = "HAnimJointShape";
Transform1505.child = new undefined();

Transform1505.child[0] = Shape1506;

Transform1504.children = new MFNode();

Transform1504.children[0] = Transform1505;

HAnimSegment1503.children = new MFNode();

HAnimSegment1503.children[0] = Transform1504;

Shape Shape1507 = createNode("Shape");
LineSet LineSet1508 = createNode("LineSet");
LineSet1508.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1509 = createNode("ColorRGBA");
ColorRGBA1509.USE = "HAnimSegmentLineColorRGBA";
LineSet1508.color = ColorRGBA1509;

Coordinate Coordinate1510 = createNode("Coordinate");
Coordinate1510.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1508.coord = Coordinate1510;

Shape1507.geometry = LineSet1508;

HAnimSegment1503.children[1] = Shape1507;

HAnimJoint1502.children = new MFNode();

HAnimJoint1502.children[0] = HAnimSegment1503;

HAnimJoint HAnimJoint1511 = createNode("HAnimJoint");
HAnimJoint1511.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1511.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1511.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimSegment HAnimSegment1512 = createNode("HAnimSegment");
HAnimSegment1512.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimSegment1512.name = "r_carpal_middle_phalanx_3";
Transform Transform1513 = createNode("Transform");
Transform Transform1514 = createNode("Transform");
Shape Shape1515 = createNode("Shape");
Shape1515.USE = "HAnimJointShape";
Transform1514.child = new undefined();

Transform1514.child[0] = Shape1515;

Transform1513.children = new MFNode();

Transform1513.children[0] = Transform1514;

HAnimSegment1512.children = new MFNode();

HAnimSegment1512.children[0] = Transform1513;

Shape Shape1516 = createNode("Shape");
LineSet LineSet1517 = createNode("LineSet");
LineSet1517.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1518 = createNode("ColorRGBA");
ColorRGBA1518.USE = "HAnimSegmentLineColorRGBA";
LineSet1517.color = ColorRGBA1518;

Coordinate Coordinate1519 = createNode("Coordinate");
Coordinate1519.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1517.coord = Coordinate1519;

Shape1516.geometry = LineSet1517;

HAnimSegment1512.children[1] = Shape1516;

HAnimSite HAnimSite1520 = createNode("HAnimSite");
HAnimSite1520.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite1520.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1520.translation = new SFVec3f(new float[-0.08,0.96,0]);
TouchSensor TouchSensor1521 = createNode("TouchSensor");
TouchSensor1521.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1520.children = new MFNode();

HAnimSite1520.children[0] = TouchSensor1521;

Shape Shape1522 = createNode("Shape");
Shape1522.USE = "HAnimSiteShape";
HAnimSite1520.children[1] = Shape1522;

HAnimSegment1512.children[2] = HAnimSite1520;

HAnimJoint1511.children = new MFNode();

HAnimJoint1511.children[0] = HAnimSegment1512;

HAnimJoint HAnimJoint1523 = createNode("HAnimJoint");
HAnimJoint1523.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1523.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1523.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1511.children[1] = HAnimJoint1523;

HAnimJoint1502.children[1] = HAnimJoint1511;

HAnimJoint1493.children[1] = HAnimJoint1502;

HAnimJoint1481.children[1] = HAnimJoint1493;

HAnimJoint1383.children[3] = HAnimJoint1481;

HAnimJoint HAnimJoint1524 = createNode("HAnimJoint");
HAnimJoint1524.DEF = "hanim_r_midcarpal_4_1";
HAnimJoint1524.name = "r_midcarpal_4_5";
HAnimJoint1524.center = new SFVec3f(new float[0,1,0]);
HAnimSegment HAnimSegment1525 = createNode("HAnimSegment");
HAnimSegment1525.DEF = "hanim_r_hamate";
HAnimSegment1525.name = "r_hamate";
Transform Transform1526 = createNode("Transform");
Transform Transform1527 = createNode("Transform");
Shape Shape1528 = createNode("Shape");
Shape1528.USE = "HAnimJointShape";
Transform1527.child = new undefined();

Transform1527.child[0] = Shape1528;

Transform1526.children = new MFNode();

Transform1526.children[0] = Transform1527;

HAnimSegment1525.children = new MFNode();

HAnimSegment1525.children[0] = Transform1526;

Shape Shape1529 = createNode("Shape");
LineSet LineSet1530 = createNode("LineSet");
LineSet1530.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1531 = createNode("ColorRGBA");
ColorRGBA1531.USE = "HAnimSegmentLineColorRGBA";
LineSet1530.color = ColorRGBA1531;

Coordinate Coordinate1532 = createNode("Coordinate");
Coordinate1532.point = new MFVec3f(new float[0,1,0,-0.1951,0.8049,-0.0732]);
LineSet1530.coord = Coordinate1532;

Shape1529.geometry = LineSet1530;

HAnimSegment1525.children[1] = Shape1529;

Shape Shape1533 = createNode("Shape");
LineSet LineSet1534 = createNode("LineSet");
LineSet1534.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1535 = createNode("ColorRGBA");
ColorRGBA1535.USE = "HAnimSegmentLineColorRGBA";
LineSet1534.color = ColorRGBA1535;

Coordinate Coordinate1536 = createNode("Coordinate");
Coordinate1536.point = new MFVec3f(new float[0,1,0,-0.1926,0.8096,-0.0975]);
LineSet1534.coord = Coordinate1536;

Shape1533.geometry = LineSet1534;

HAnimSegment1525.children[2] = Shape1533;

HAnimSite HAnimSite1537 = createNode("HAnimSite");
HAnimSite1537.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1537.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1537.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor1538 = createNode("TouchSensor");
TouchSensor1538.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite1537.children = new MFNode();

HAnimSite1537.children[0] = TouchSensor1538;

Shape Shape1539 = createNode("Shape");
Shape1539.USE = "HAnimSiteShape";
HAnimSite1537.children[1] = Shape1539;

HAnimSegment1525.children[3] = HAnimSite1537;

HAnimJoint1524.children = new MFNode();

HAnimJoint1524.children[0] = HAnimSegment1525;

HAnimJoint HAnimJoint1540 = createNode("HAnimJoint");
HAnimJoint1540.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1540.name = "r_carpometacarpal_4";
HAnimJoint1540.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimSegment HAnimSegment1541 = createNode("HAnimSegment");
HAnimSegment1541.DEF = "hanim_r_metacarpal_4";
HAnimSegment1541.name = "r_metacarpal_4";
Transform Transform1542 = createNode("Transform");
Transform Transform1543 = createNode("Transform");
Shape Shape1544 = createNode("Shape");
Shape1544.USE = "HAnimJointShape";
Transform1543.child = new undefined();

Transform1543.child[0] = Shape1544;

Transform1542.children = new MFNode();

Transform1542.children[0] = Transform1543;

HAnimSegment1541.children = new MFNode();

HAnimSegment1541.children[0] = Transform1542;

Shape Shape1545 = createNode("Shape");
LineSet LineSet1546 = createNode("LineSet");
LineSet1546.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1547 = createNode("ColorRGBA");
ColorRGBA1547.USE = "HAnimSegmentLineColorRGBA";
LineSet1546.color = ColorRGBA1547;

Coordinate Coordinate1548 = createNode("Coordinate");
Coordinate1548.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1546.coord = Coordinate1548;

Shape1545.geometry = LineSet1546;

HAnimSegment1541.children[1] = Shape1545;

HAnimJoint1540.children = new MFNode();

HAnimJoint1540.children[0] = HAnimSegment1541;

HAnimJoint HAnimJoint1549 = createNode("HAnimJoint");
HAnimJoint1549.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1549.name = "r_metacarpophalangeal_4";
HAnimJoint1549.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimSegment HAnimSegment1550 = createNode("HAnimSegment");
HAnimSegment1550.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimSegment1550.name = "r_carpal_proximal_phalanx_4";
Transform Transform1551 = createNode("Transform");
Transform Transform1552 = createNode("Transform");
Shape Shape1553 = createNode("Shape");
Shape1553.USE = "HAnimJointShape";
Transform1552.child = new undefined();

Transform1552.child[0] = Shape1553;

Transform1551.children = new MFNode();

Transform1551.children[0] = Transform1552;

HAnimSegment1550.children = new MFNode();

HAnimSegment1550.children[0] = Transform1551;

Shape Shape1554 = createNode("Shape");
LineSet LineSet1555 = createNode("LineSet");
LineSet1555.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1556 = createNode("ColorRGBA");
ColorRGBA1556.USE = "HAnimSegmentLineColorRGBA";
LineSet1555.color = ColorRGBA1556;

Coordinate Coordinate1557 = createNode("Coordinate");
Coordinate1557.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1555.coord = Coordinate1557;

Shape1554.geometry = LineSet1555;

HAnimSegment1550.children[1] = Shape1554;

HAnimJoint1549.children = new MFNode();

HAnimJoint1549.children[0] = HAnimSegment1550;

HAnimJoint HAnimJoint1558 = createNode("HAnimJoint");
HAnimJoint1558.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1558.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1558.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimSegment HAnimSegment1559 = createNode("HAnimSegment");
HAnimSegment1559.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimSegment1559.name = "r_carpal_middle_phalanx_4";
Transform Transform1560 = createNode("Transform");
Transform Transform1561 = createNode("Transform");
Shape Shape1562 = createNode("Shape");
Shape1562.USE = "HAnimJointShape";
Transform1561.child = new undefined();

Transform1561.child[0] = Shape1562;

Transform1560.children = new MFNode();

Transform1560.children[0] = Transform1561;

HAnimSegment1559.children = new MFNode();

HAnimSegment1559.children[0] = Transform1560;

Shape Shape1563 = createNode("Shape");
LineSet LineSet1564 = createNode("LineSet");
LineSet1564.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1565 = createNode("ColorRGBA");
ColorRGBA1565.USE = "HAnimSegmentLineColorRGBA";
LineSet1564.color = ColorRGBA1565;

Coordinate Coordinate1566 = createNode("Coordinate");
Coordinate1566.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1564.coord = Coordinate1566;

Shape1563.geometry = LineSet1564;

HAnimSegment1559.children[1] = Shape1563;

HAnimSite HAnimSite1567 = createNode("HAnimSite");
HAnimSite1567.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite1567.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1567.translation = new SFVec3f(new float[0.1,0.93,0]);
TouchSensor TouchSensor1568 = createNode("TouchSensor");
TouchSensor1568.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1567.children = new MFNode();

HAnimSite1567.children[0] = TouchSensor1568;

Shape Shape1569 = createNode("Shape");
Shape1569.USE = "HAnimSiteShape";
HAnimSite1567.children[1] = Shape1569;

HAnimSegment1559.children[2] = HAnimSite1567;

HAnimJoint1558.children = new MFNode();

HAnimJoint1558.children[0] = HAnimSegment1559;

HAnimJoint HAnimJoint1570 = createNode("HAnimJoint");
HAnimJoint1570.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1570.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1570.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1558.children[1] = HAnimJoint1570;

HAnimJoint1549.children[1] = HAnimJoint1558;

HAnimJoint1540.children[1] = HAnimJoint1549;

HAnimJoint1524.children[1] = HAnimJoint1540;

HAnimJoint HAnimJoint1571 = createNode("HAnimJoint");
HAnimJoint1571.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1571.name = "r_carpometacarpal_5";
HAnimJoint1571.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimSegment HAnimSegment1572 = createNode("HAnimSegment");
HAnimSegment1572.DEF = "hanim_r_metacarpal_5";
HAnimSegment1572.name = "r_metacarpal_5";
Transform Transform1573 = createNode("Transform");
Transform Transform1574 = createNode("Transform");
Shape Shape1575 = createNode("Shape");
Shape1575.USE = "HAnimJointShape";
Transform1574.child = new undefined();

Transform1574.child[0] = Shape1575;

Transform1573.children = new MFNode();

Transform1573.children[0] = Transform1574;

HAnimSegment1572.children = new MFNode();

HAnimSegment1572.children[0] = Transform1573;

Shape Shape1576 = createNode("Shape");
LineSet LineSet1577 = createNode("LineSet");
LineSet1577.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1578 = createNode("ColorRGBA");
ColorRGBA1578.USE = "HAnimSegmentLineColorRGBA";
LineSet1577.color = ColorRGBA1578;

Coordinate Coordinate1579 = createNode("Coordinate");
Coordinate1579.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1577.coord = Coordinate1579;

Shape1576.geometry = LineSet1577;

HAnimSegment1572.children[1] = Shape1576;

HAnimJoint1571.children = new MFNode();

HAnimJoint1571.children[0] = HAnimSegment1572;

HAnimJoint HAnimJoint1580 = createNode("HAnimJoint");
HAnimJoint1580.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1580.name = "r_metacarpophalangeal_5";
HAnimJoint1580.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimSegment HAnimSegment1581 = createNode("HAnimSegment");
HAnimSegment1581.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimSegment1581.name = "r_carpal_proximal_phalanx_5";
Transform Transform1582 = createNode("Transform");
Transform Transform1583 = createNode("Transform");
Shape Shape1584 = createNode("Shape");
Shape1584.USE = "HAnimJointShape";
Transform1583.child = new undefined();

Transform1583.child[0] = Shape1584;

Transform1582.children = new MFNode();

Transform1582.children[0] = Transform1583;

HAnimSegment1581.children = new MFNode();

HAnimSegment1581.children[0] = Transform1582;

Shape Shape1585 = createNode("Shape");
LineSet LineSet1586 = createNode("LineSet");
LineSet1586.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1587 = createNode("ColorRGBA");
ColorRGBA1587.USE = "HAnimSegmentLineColorRGBA";
LineSet1586.color = ColorRGBA1587;

Coordinate Coordinate1588 = createNode("Coordinate");
Coordinate1588.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1586.coord = Coordinate1588;

Shape1585.geometry = LineSet1586;

HAnimSegment1581.children[1] = Shape1585;

HAnimJoint1580.children = new MFNode();

HAnimJoint1580.children[0] = HAnimSegment1581;

HAnimJoint HAnimJoint1589 = createNode("HAnimJoint");
HAnimJoint1589.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1589.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1589.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimSegment HAnimSegment1590 = createNode("HAnimSegment");
HAnimSegment1590.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimSegment1590.name = "r_carpal_middle_phalanx_5";
Transform Transform1591 = createNode("Transform");
Transform Transform1592 = createNode("Transform");
Shape Shape1593 = createNode("Shape");
Shape1593.USE = "HAnimJointShape";
Transform1592.child = new undefined();

Transform1592.child[0] = Shape1593;

Transform1591.children = new MFNode();

Transform1591.children[0] = Transform1592;

HAnimSegment1590.children = new MFNode();

HAnimSegment1590.children[0] = Transform1591;

Shape Shape1594 = createNode("Shape");
LineSet LineSet1595 = createNode("LineSet");
LineSet1595.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1596 = createNode("ColorRGBA");
ColorRGBA1596.USE = "HAnimSegmentLineColorRGBA";
LineSet1595.color = ColorRGBA1596;

Coordinate Coordinate1597 = createNode("Coordinate");
Coordinate1597.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1595.coord = Coordinate1597;

Shape1594.geometry = LineSet1595;

HAnimSegment1590.children[1] = Shape1594;

HAnimSite HAnimSite1598 = createNode("HAnimSite");
HAnimSite1598.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite1598.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1598.translation = new SFVec3f(new float[0.25,0.79,0]);
TouchSensor TouchSensor1599 = createNode("TouchSensor");
TouchSensor1599.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1598.children = new MFNode();

HAnimSite1598.children[0] = TouchSensor1599;

Shape Shape1600 = createNode("Shape");
Shape1600.USE = "HAnimSiteShape";
HAnimSite1598.children[1] = Shape1600;

HAnimSegment1590.children[2] = HAnimSite1598;

HAnimJoint1589.children = new MFNode();

HAnimJoint1589.children[0] = HAnimSegment1590;

HAnimJoint HAnimJoint1601 = createNode("HAnimJoint");
HAnimJoint1601.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1601.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1601.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1589.children[1] = HAnimJoint1601;

HAnimJoint1580.children[1] = HAnimJoint1589;

HAnimJoint1571.children[1] = HAnimJoint1580;

HAnimJoint1524.children[2] = HAnimJoint1571;

HAnimJoint1383.children[4] = HAnimJoint1524;

HAnimJoint1371.children[1] = HAnimJoint1383;

HAnimJoint1350.children[1] = HAnimJoint1371;

HAnimJoint1335.children[1] = HAnimJoint1350;

HAnimJoint1326.children[1] = HAnimJoint1335;

HAnimJoint845.children[3] = HAnimJoint1326;

HAnimJoint830.children[1] = HAnimJoint845;

HAnimJoint821.children[1] = HAnimJoint830;

HAnimJoint812.children[1] = HAnimJoint821;

HAnimJoint803.children[1] = HAnimJoint812;

HAnimJoint791.children[1] = HAnimJoint803;

HAnimJoint770.children[1] = HAnimJoint791;

HAnimJoint761.children[1] = HAnimJoint770;

HAnimJoint752.children[1] = HAnimJoint761;

HAnimJoint737.children[1] = HAnimJoint752;

HAnimJoint725.children[1] = HAnimJoint737;

HAnimJoint716.children[1] = HAnimJoint725;

HAnimJoint707.children[1] = HAnimJoint716;

HAnimJoint698.children[1] = HAnimJoint707;

HAnimJoint680.children[1] = HAnimJoint698;

HAnimJoint671.children[1] = HAnimJoint680;

HAnimJoint662.children[1] = HAnimJoint671;

HAnimJoint43.children[2] = HAnimJoint662;

HAnimHumanoid42.joints = new MFNode();

HAnimHumanoid42.joints[0] = HAnimJoint43;

HAnimSite HAnimSite1602 = createNode("HAnimSite");
HAnimSite1602.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid42.viewpoints[1] = HAnimSite1602;

HAnimSite HAnimSite1603 = createNode("HAnimSite");
HAnimSite1603.USE = "hanim_crotch_pt";
HAnimHumanoid42.viewpoints[2] = HAnimSite1603;

HAnimSite HAnimSite1604 = createNode("HAnimSite");
HAnimSite1604.USE = "hanim_l_asis_pt";
HAnimHumanoid42.viewpoints[3] = HAnimSite1604;

HAnimSite HAnimSite1605 = createNode("HAnimSite");
HAnimSite1605.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid42.viewpoints[4] = HAnimSite1605;

HAnimSite HAnimSite1606 = createNode("HAnimSite");
HAnimSite1606.USE = "hanim_l_psis_pt";
HAnimHumanoid42.viewpoints[5] = HAnimSite1606;

HAnimSite HAnimSite1607 = createNode("HAnimSite");
HAnimSite1607.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid42.viewpoints[6] = HAnimSite1607;

HAnimSite HAnimSite1608 = createNode("HAnimSite");
HAnimSite1608.USE = "hanim_r_asis_pt";
HAnimHumanoid42.viewpoints[7] = HAnimSite1608;

HAnimSite HAnimSite1609 = createNode("HAnimSite");
HAnimSite1609.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid42.viewpoints[8] = HAnimSite1609;

HAnimSite HAnimSite1610 = createNode("HAnimSite");
HAnimSite1610.USE = "hanim_r_psis_pt";
HAnimHumanoid42.viewpoints[9] = HAnimSite1610;

HAnimSite HAnimSite1611 = createNode("HAnimSite");
HAnimSite1611.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid42.viewpoints[10] = HAnimSite1611;

HAnimSite HAnimSite1612 = createNode("HAnimSite");
HAnimSite1612.USE = "hanim_navel_pt";
HAnimHumanoid42.viewpoints[11] = HAnimSite1612;

HAnimSite HAnimSite1613 = createNode("HAnimSite");
HAnimSite1613.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid42.viewpoints[12] = HAnimSite1613;

HAnimSite HAnimSite1614 = createNode("HAnimSite");
HAnimSite1614.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid42.viewpoints[13] = HAnimSite1614;

HAnimSite HAnimSite1615 = createNode("HAnimSite");
HAnimSite1615.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[14] = HAnimSite1615;

HAnimSite HAnimSite1616 = createNode("HAnimSite");
HAnimSite1616.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[15] = HAnimSite1616;

HAnimSite HAnimSite1617 = createNode("HAnimSite");
HAnimSite1617.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid42.viewpoints[16] = HAnimSite1617;

HAnimSite HAnimSite1618 = createNode("HAnimSite");
HAnimSite1618.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid42.viewpoints[17] = HAnimSite1618;

HAnimSite HAnimSite1619 = createNode("HAnimSite");
HAnimSite1619.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[18] = HAnimSite1619;

HAnimSite HAnimSite1620 = createNode("HAnimSite");
HAnimSite1620.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[19] = HAnimSite1620;

HAnimSite HAnimSite1621 = createNode("HAnimSite");
HAnimSite1621.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid42.viewpoints[20] = HAnimSite1621;

HAnimSite HAnimSite1622 = createNode("HAnimSite");
HAnimSite1622.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid42.viewpoints[21] = HAnimSite1622;

HAnimSite HAnimSite1623 = createNode("HAnimSite");
HAnimSite1623.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[22] = HAnimSite1623;

HAnimSite HAnimSite1624 = createNode("HAnimSite");
HAnimSite1624.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[23] = HAnimSite1624;

HAnimSite HAnimSite1625 = createNode("HAnimSite");
HAnimSite1625.USE = "hanim_l_tibiale_pt";
HAnimHumanoid42.viewpoints[24] = HAnimSite1625;

HAnimSite HAnimSite1626 = createNode("HAnimSite");
HAnimSite1626.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[25] = HAnimSite1626;

HAnimSite HAnimSite1627 = createNode("HAnimSite");
HAnimSite1627.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid42.viewpoints[26] = HAnimSite1627;

HAnimSite HAnimSite1628 = createNode("HAnimSite");
HAnimSite1628.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid42.viewpoints[27] = HAnimSite1628;

HAnimSite HAnimSite1629 = createNode("HAnimSite");
HAnimSite1629.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[28] = HAnimSite1629;

HAnimSite HAnimSite1630 = createNode("HAnimSite");
HAnimSite1630.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[29] = HAnimSite1630;

HAnimSite HAnimSite1631 = createNode("HAnimSite");
HAnimSite1631.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[30] = HAnimSite1631;

HAnimSite HAnimSite1632 = createNode("HAnimSite");
HAnimSite1632.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[31] = HAnimSite1632;

HAnimSite HAnimSite1633 = createNode("HAnimSite");
HAnimSite1633.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[32] = HAnimSite1633;

HAnimSite HAnimSite1634 = createNode("HAnimSite");
HAnimSite1634.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[33] = HAnimSite1634;

HAnimSite HAnimSite1635 = createNode("HAnimSite");
HAnimSite1635.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[34] = HAnimSite1635;

HAnimSite HAnimSite1636 = createNode("HAnimSite");
HAnimSite1636.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[35] = HAnimSite1636;

HAnimSite HAnimSite1637 = createNode("HAnimSite");
HAnimSite1637.USE = "hanim_r_tibiale_pt";
HAnimHumanoid42.viewpoints[36] = HAnimSite1637;

HAnimSite HAnimSite1638 = createNode("HAnimSite");
HAnimSite1638.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[37] = HAnimSite1638;

HAnimSite HAnimSite1639 = createNode("HAnimSite");
HAnimSite1639.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid42.viewpoints[38] = HAnimSite1639;

HAnimSite HAnimSite1640 = createNode("HAnimSite");
HAnimSite1640.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid42.viewpoints[39] = HAnimSite1640;

HAnimSite HAnimSite1641 = createNode("HAnimSite");
HAnimSite1641.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[40] = HAnimSite1641;

HAnimSite HAnimSite1642 = createNode("HAnimSite");
HAnimSite1642.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[41] = HAnimSite1642;

HAnimSite HAnimSite1643 = createNode("HAnimSite");
HAnimSite1643.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[42] = HAnimSite1643;

HAnimSite HAnimSite1644 = createNode("HAnimSite");
HAnimSite1644.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[43] = HAnimSite1644;

HAnimSite HAnimSite1645 = createNode("HAnimSite");
HAnimSite1645.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[44] = HAnimSite1645;

HAnimSite HAnimSite1646 = createNode("HAnimSite");
HAnimSite1646.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[45] = HAnimSite1646;

HAnimSite HAnimSite1647 = createNode("HAnimSite");
HAnimSite1647.USE = "hanim_l_rib10_pt";
HAnimHumanoid42.viewpoints[46] = HAnimSite1647;

HAnimSite HAnimSite1648 = createNode("HAnimSite");
HAnimSite1648.USE = "hanim_r_rib10_pt";
HAnimHumanoid42.viewpoints[47] = HAnimSite1648;

HAnimSite HAnimSite1649 = createNode("HAnimSite");
HAnimSite1649.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid42.viewpoints[48] = HAnimSite1649;

HAnimSite HAnimSite1650 = createNode("HAnimSite");
HAnimSite1650.USE = "hanim_substernale_pt";
HAnimHumanoid42.viewpoints[49] = HAnimSite1650;

HAnimSite HAnimSite1651 = createNode("HAnimSite");
HAnimSite1651.USE = "hanim_l_thelion_pt";
HAnimHumanoid42.viewpoints[50] = HAnimSite1651;

HAnimSite HAnimSite1652 = createNode("HAnimSite");
HAnimSite1652.USE = "hanim_r_thelion_pt";
HAnimHumanoid42.viewpoints[51] = HAnimSite1652;

HAnimSite HAnimSite1653 = createNode("HAnimSite");
HAnimSite1653.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[52] = HAnimSite1653;

HAnimSite HAnimSite1654 = createNode("HAnimSite");
HAnimSite1654.USE = "hanim_mesosternale_pt";
HAnimHumanoid42.viewpoints[53] = HAnimSite1654;

HAnimSite HAnimSite1655 = createNode("HAnimSite");
HAnimSite1655.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[54] = HAnimSite1655;

HAnimSite HAnimSite1656 = createNode("HAnimSite");
HAnimSite1656.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[55] = HAnimSite1656;

HAnimSite HAnimSite1657 = createNode("HAnimSite");
HAnimSite1657.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid42.viewpoints[56] = HAnimSite1657;

HAnimSite HAnimSite1658 = createNode("HAnimSite");
HAnimSite1658.USE = "hanim_cervicale_pt";
HAnimHumanoid42.viewpoints[57] = HAnimSite1658;

HAnimSite HAnimSite1659 = createNode("HAnimSite");
HAnimSite1659.USE = "hanim_suprasternale_pt";
HAnimHumanoid42.viewpoints[58] = HAnimSite1659;

HAnimSite HAnimSite1660 = createNode("HAnimSite");
HAnimSite1660.USE = "hanim_l_neck_base_pt";
HAnimHumanoid42.viewpoints[59] = HAnimSite1660;

HAnimSite HAnimSite1661 = createNode("HAnimSite");
HAnimSite1661.USE = "hanim_r_neck_base_pt";
HAnimHumanoid42.viewpoints[60] = HAnimSite1661;

HAnimSite HAnimSite1662 = createNode("HAnimSite");
HAnimSite1662.USE = "hanim_l_acromion_pt";
HAnimHumanoid42.viewpoints[61] = HAnimSite1662;

HAnimSite HAnimSite1663 = createNode("HAnimSite");
HAnimSite1663.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid42.viewpoints[62] = HAnimSite1663;

HAnimSite HAnimSite1664 = createNode("HAnimSite");
HAnimSite1664.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid42.viewpoints[63] = HAnimSite1664;

HAnimSite HAnimSite1665 = createNode("HAnimSite");
HAnimSite1665.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid42.viewpoints[64] = HAnimSite1665;

HAnimSite HAnimSite1666 = createNode("HAnimSite");
HAnimSite1666.USE = "hanim_l_clavicale_pt";
HAnimHumanoid42.viewpoints[65] = HAnimSite1666;

HAnimSite HAnimSite1667 = createNode("HAnimSite");
HAnimSite1667.USE = "hanim_r_acromion_pt";
HAnimHumanoid42.viewpoints[66] = HAnimSite1667;

HAnimSite HAnimSite1668 = createNode("HAnimSite");
HAnimSite1668.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid42.viewpoints[67] = HAnimSite1668;

HAnimSite HAnimSite1669 = createNode("HAnimSite");
HAnimSite1669.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid42.viewpoints[68] = HAnimSite1669;

HAnimSite HAnimSite1670 = createNode("HAnimSite");
HAnimSite1670.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid42.viewpoints[69] = HAnimSite1670;

HAnimSite HAnimSite1671 = createNode("HAnimSite");
HAnimSite1671.USE = "hanim_r_clavicale_pt";
HAnimHumanoid42.viewpoints[70] = HAnimSite1671;

HAnimSite HAnimSite1672 = createNode("HAnimSite");
HAnimSite1672.USE = "hanim_adams_apple_pt";
HAnimHumanoid42.viewpoints[71] = HAnimSite1672;

HAnimSite HAnimSite1673 = createNode("HAnimSite");
HAnimSite1673.USE = "hanim_glabella_pt";
HAnimHumanoid42.viewpoints[72] = HAnimSite1673;

HAnimSite HAnimSite1674 = createNode("HAnimSite");
HAnimSite1674.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid42.viewpoints[73] = HAnimSite1674;

HAnimSite HAnimSite1675 = createNode("HAnimSite");
HAnimSite1675.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid42.viewpoints[74] = HAnimSite1675;

HAnimSite HAnimSite1676 = createNode("HAnimSite");
HAnimSite1676.USE = "hanim_l_tragion_pt";
HAnimHumanoid42.viewpoints[75] = HAnimSite1676;

HAnimSite HAnimSite1677 = createNode("HAnimSite");
HAnimSite1677.USE = "hanim_nuchale_pt";
HAnimHumanoid42.viewpoints[76] = HAnimSite1677;

HAnimSite HAnimSite1678 = createNode("HAnimSite");
HAnimSite1678.USE = "hanim_opisthocranion_pt";
HAnimHumanoid42.viewpoints[77] = HAnimSite1678;

HAnimSite HAnimSite1679 = createNode("HAnimSite");
HAnimSite1679.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid42.viewpoints[78] = HAnimSite1679;

HAnimSite HAnimSite1680 = createNode("HAnimSite");
HAnimSite1680.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid42.viewpoints[79] = HAnimSite1680;

HAnimSite HAnimSite1681 = createNode("HAnimSite");
HAnimSite1681.USE = "hanim_r_tragion_pt";
HAnimHumanoid42.viewpoints[80] = HAnimSite1681;

HAnimSite HAnimSite1682 = createNode("HAnimSite");
HAnimSite1682.USE = "hanim_sellion_pt";
HAnimHumanoid42.viewpoints[81] = HAnimSite1682;

HAnimSite HAnimSite1683 = createNode("HAnimSite");
HAnimSite1683.USE = "hanim_skull_vertex_pt";
HAnimHumanoid42.viewpoints[82] = HAnimSite1683;

HAnimSite HAnimSite1684 = createNode("HAnimSite");
HAnimSite1684.USE = "hanim_l_gonion_pt";
HAnimHumanoid42.viewpoints[83] = HAnimSite1684;

HAnimSite HAnimSite1685 = createNode("HAnimSite");
HAnimSite1685.USE = "hanim_menton_pt";
HAnimHumanoid42.viewpoints[84] = HAnimSite1685;

HAnimSite HAnimSite1686 = createNode("HAnimSite");
HAnimSite1686.USE = "hanim_r_gonion_pt";
HAnimHumanoid42.viewpoints[85] = HAnimSite1686;

HAnimSite HAnimSite1687 = createNode("HAnimSite");
HAnimSite1687.USE = "hanim_supramenton_pt";
HAnimHumanoid42.viewpoints[86] = HAnimSite1687;

HAnimSite HAnimSite1688 = createNode("HAnimSite");
HAnimSite1688.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid42.viewpoints[87] = HAnimSite1688;

HAnimSite HAnimSite1689 = createNode("HAnimSite");
HAnimSite1689.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[88] = HAnimSite1689;

HAnimSite HAnimSite1690 = createNode("HAnimSite");
HAnimSite1690.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[89] = HAnimSite1690;

HAnimSite HAnimSite1691 = createNode("HAnimSite");
HAnimSite1691.USE = "hanim_l_olecranon_pt";
HAnimHumanoid42.viewpoints[90] = HAnimSite1691;

HAnimSite HAnimSite1692 = createNode("HAnimSite");
HAnimSite1692.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid42.viewpoints[91] = HAnimSite1692;

HAnimSite HAnimSite1693 = createNode("HAnimSite");
HAnimSite1693.USE = "hanim_l_radiale_pt";
HAnimHumanoid42.viewpoints[92] = HAnimSite1693;

HAnimSite HAnimSite1694 = createNode("HAnimSite");
HAnimSite1694.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[93] = HAnimSite1694;

HAnimSite HAnimSite1695 = createNode("HAnimSite");
HAnimSite1695.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[94] = HAnimSite1695;

HAnimSite HAnimSite1696 = createNode("HAnimSite");
HAnimSite1696.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid42.viewpoints[95] = HAnimSite1696;

HAnimSite HAnimSite1697 = createNode("HAnimSite");
HAnimSite1697.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[96] = HAnimSite1697;

HAnimSite HAnimSite1698 = createNode("HAnimSite");
HAnimSite1698.USE = "hanim_l_dactylion_pt";
HAnimHumanoid42.viewpoints[97] = HAnimSite1698;

HAnimSite HAnimSite1699 = createNode("HAnimSite");
HAnimSite1699.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid42.viewpoints[98] = HAnimSite1699;

HAnimSite HAnimSite1700 = createNode("HAnimSite");
HAnimSite1700.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[99] = HAnimSite1700;

HAnimSite HAnimSite1701 = createNode("HAnimSite");
HAnimSite1701.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[100] = HAnimSite1701;

HAnimSite HAnimSite1702 = createNode("HAnimSite");
HAnimSite1702.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[101] = HAnimSite1702;

HAnimSite HAnimSite1703 = createNode("HAnimSite");
HAnimSite1703.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[102] = HAnimSite1703;

HAnimSite HAnimSite1704 = createNode("HAnimSite");
HAnimSite1704.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid42.viewpoints[103] = HAnimSite1704;

HAnimSite HAnimSite1705 = createNode("HAnimSite");
HAnimSite1705.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[104] = HAnimSite1705;

HAnimSite HAnimSite1706 = createNode("HAnimSite");
HAnimSite1706.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[105] = HAnimSite1706;

HAnimSite HAnimSite1707 = createNode("HAnimSite");
HAnimSite1707.USE = "hanim_r_olecranon_pt";
HAnimHumanoid42.viewpoints[106] = HAnimSite1707;

HAnimSite HAnimSite1708 = createNode("HAnimSite");
HAnimSite1708.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid42.viewpoints[107] = HAnimSite1708;

HAnimSite HAnimSite1709 = createNode("HAnimSite");
HAnimSite1709.USE = "hanim_r_radiale_pt";
HAnimHumanoid42.viewpoints[108] = HAnimSite1709;

HAnimSite HAnimSite1710 = createNode("HAnimSite");
HAnimSite1710.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[109] = HAnimSite1710;

HAnimSite HAnimSite1711 = createNode("HAnimSite");
HAnimSite1711.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[110] = HAnimSite1711;

HAnimSite HAnimSite1712 = createNode("HAnimSite");
HAnimSite1712.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid42.viewpoints[111] = HAnimSite1712;

HAnimSite HAnimSite1713 = createNode("HAnimSite");
HAnimSite1713.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[112] = HAnimSite1713;

HAnimSite HAnimSite1714 = createNode("HAnimSite");
HAnimSite1714.USE = "hanim_r_dactylion_pt";
HAnimHumanoid42.viewpoints[113] = HAnimSite1714;

HAnimSite HAnimSite1715 = createNode("HAnimSite");
HAnimSite1715.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid42.viewpoints[114] = HAnimSite1715;

HAnimSite HAnimSite1716 = createNode("HAnimSite");
HAnimSite1716.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[115] = HAnimSite1716;

HAnimSite HAnimSite1717 = createNode("HAnimSite");
HAnimSite1717.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[116] = HAnimSite1717;

HAnimSite HAnimSite1718 = createNode("HAnimSite");
HAnimSite1718.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[117] = HAnimSite1718;

HAnimSite HAnimSite1719 = createNode("HAnimSite");
HAnimSite1719.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[118] = HAnimSite1719;

HAnimSegment HAnimSegment1720 = createNode("HAnimSegment");
HAnimSegment1720.USE = "hanim_sacrum";
HAnimHumanoid42.segments[119] = HAnimSegment1720;

HAnimSegment HAnimSegment1721 = createNode("HAnimSegment");
HAnimSegment1721.USE = "hanim_pelvis";
HAnimHumanoid42.segments[120] = HAnimSegment1721;

HAnimSegment HAnimSegment1722 = createNode("HAnimSegment");
HAnimSegment1722.USE = "hanim_l_thigh";
HAnimHumanoid42.segments[121] = HAnimSegment1722;

HAnimSegment HAnimSegment1723 = createNode("HAnimSegment");
HAnimSegment1723.USE = "hanim_l_calf";
HAnimHumanoid42.segments[122] = HAnimSegment1723;

HAnimSegment HAnimSegment1724 = createNode("HAnimSegment");
HAnimSegment1724.USE = "hanim_l_talus";
HAnimHumanoid42.segments[123] = HAnimSegment1724;

HAnimSegment HAnimSegment1725 = createNode("HAnimSegment");
HAnimSegment1725.USE = "hanim_l_navicular";
HAnimHumanoid42.segments[124] = HAnimSegment1725;

HAnimSegment HAnimSegment1726 = createNode("HAnimSegment");
HAnimSegment1726.USE = "hanim_l_cuneiform_1";
HAnimHumanoid42.segments[125] = HAnimSegment1726;

HAnimSegment HAnimSegment1727 = createNode("HAnimSegment");
HAnimSegment1727.USE = "hanim_l_metatarsal_1";
HAnimHumanoid42.segments[126] = HAnimSegment1727;

HAnimSegment HAnimSegment1728 = createNode("HAnimSegment");
HAnimSegment1728.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid42.segments[127] = HAnimSegment1728;

HAnimSegment HAnimSegment1729 = createNode("HAnimSegment");
HAnimSegment1729.USE = "hanim_l_cuneiform_2";
HAnimHumanoid42.segments[128] = HAnimSegment1729;

HAnimSegment HAnimSegment1730 = createNode("HAnimSegment");
HAnimSegment1730.USE = "hanim_l_metatarsal_2";
HAnimHumanoid42.segments[129] = HAnimSegment1730;

HAnimSegment HAnimSegment1731 = createNode("HAnimSegment");
HAnimSegment1731.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid42.segments[130] = HAnimSegment1731;

HAnimSegment HAnimSegment1732 = createNode("HAnimSegment");
HAnimSegment1732.USE = "hanim_l_tarsal_middle_phalanx_1";
HAnimHumanoid42.segments[131] = HAnimSegment1732;

HAnimSegment HAnimSegment1733 = createNode("HAnimSegment");
HAnimSegment1733.USE = "hanim_l_cuneiform_3";
HAnimHumanoid42.segments[132] = HAnimSegment1733;

HAnimSegment HAnimSegment1734 = createNode("HAnimSegment");
HAnimSegment1734.USE = "hanim_l_metatarsal_3";
HAnimHumanoid42.segments[133] = HAnimSegment1734;

HAnimSegment HAnimSegment1735 = createNode("HAnimSegment");
HAnimSegment1735.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid42.segments[134] = HAnimSegment1735;

HAnimSegment HAnimSegment1736 = createNode("HAnimSegment");
HAnimSegment1736.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid42.segments[135] = HAnimSegment1736;

HAnimSegment HAnimSegment1737 = createNode("HAnimSegment");
HAnimSegment1737.USE = "hanim_l_calcaneus";
HAnimHumanoid42.segments[136] = HAnimSegment1737;

HAnimSegment HAnimSegment1738 = createNode("HAnimSegment");
HAnimSegment1738.USE = "hanim_l_cuboid";
HAnimHumanoid42.segments[137] = HAnimSegment1738;

HAnimSegment HAnimSegment1739 = createNode("HAnimSegment");
HAnimSegment1739.USE = "hanim_l_metatarsal_4";
HAnimHumanoid42.segments[138] = HAnimSegment1739;

HAnimSegment HAnimSegment1740 = createNode("HAnimSegment");
HAnimSegment1740.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid42.segments[139] = HAnimSegment1740;

HAnimSegment HAnimSegment1741 = createNode("HAnimSegment");
HAnimSegment1741.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid42.segments[140] = HAnimSegment1741;

HAnimSegment HAnimSegment1742 = createNode("HAnimSegment");
HAnimSegment1742.USE = "hanim_l_metatarsal_5";
HAnimHumanoid42.segments[141] = HAnimSegment1742;

HAnimSegment HAnimSegment1743 = createNode("HAnimSegment");
HAnimSegment1743.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid42.segments[142] = HAnimSegment1743;

HAnimSegment HAnimSegment1744 = createNode("HAnimSegment");
HAnimSegment1744.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid42.segments[143] = HAnimSegment1744;

HAnimSegment HAnimSegment1745 = createNode("HAnimSegment");
HAnimSegment1745.USE = "hanim_r_thigh";
HAnimHumanoid42.segments[144] = HAnimSegment1745;

HAnimSegment HAnimSegment1746 = createNode("HAnimSegment");
HAnimSegment1746.USE = "hanim_r_calf";
HAnimHumanoid42.segments[145] = HAnimSegment1746;

HAnimSegment HAnimSegment1747 = createNode("HAnimSegment");
HAnimSegment1747.USE = "hanim_r_talus";
HAnimHumanoid42.segments[146] = HAnimSegment1747;

HAnimSegment HAnimSegment1748 = createNode("HAnimSegment");
HAnimSegment1748.USE = "hanim_r_navicular";
HAnimHumanoid42.segments[147] = HAnimSegment1748;

HAnimSegment HAnimSegment1749 = createNode("HAnimSegment");
HAnimSegment1749.USE = "hanim_r_cuneiform_1";
HAnimHumanoid42.segments[148] = HAnimSegment1749;

HAnimSegment HAnimSegment1750 = createNode("HAnimSegment");
HAnimSegment1750.USE = "hanim_r_metatarsal_1";
HAnimHumanoid42.segments[149] = HAnimSegment1750;

HAnimSegment HAnimSegment1751 = createNode("HAnimSegment");
HAnimSegment1751.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid42.segments[150] = HAnimSegment1751;

HAnimSegment HAnimSegment1752 = createNode("HAnimSegment");
HAnimSegment1752.USE = "hanim_r_cuneiform_2";
HAnimHumanoid42.segments[151] = HAnimSegment1752;

HAnimSegment HAnimSegment1753 = createNode("HAnimSegment");
HAnimSegment1753.USE = "hanim_r_metatarsal_2";
HAnimHumanoid42.segments[152] = HAnimSegment1753;

HAnimSegment HAnimSegment1754 = createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid42.segments[153] = HAnimSegment1754;

HAnimSegment HAnimSegment1755 = createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_r_tarsal_middle_phalanx_1";
HAnimHumanoid42.segments[154] = HAnimSegment1755;

HAnimSegment HAnimSegment1756 = createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_r_cuneiform_3";
HAnimHumanoid42.segments[155] = HAnimSegment1756;

HAnimSegment HAnimSegment1757 = createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_r_metatarsal_3";
HAnimHumanoid42.segments[156] = HAnimSegment1757;

HAnimSegment HAnimSegment1758 = createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid42.segments[157] = HAnimSegment1758;

HAnimSegment HAnimSegment1759 = createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid42.segments[158] = HAnimSegment1759;

HAnimSegment HAnimSegment1760 = createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_r_calcaneus";
HAnimHumanoid42.segments[159] = HAnimSegment1760;

HAnimSegment HAnimSegment1761 = createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_r_cuboid";
HAnimHumanoid42.segments[160] = HAnimSegment1761;

HAnimSegment HAnimSegment1762 = createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_r_metatarsal_4";
HAnimHumanoid42.segments[161] = HAnimSegment1762;

HAnimSegment HAnimSegment1763 = createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid42.segments[162] = HAnimSegment1763;

HAnimSegment HAnimSegment1764 = createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid42.segments[163] = HAnimSegment1764;

HAnimSegment HAnimSegment1765 = createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_r_metatarsal_5";
HAnimHumanoid42.segments[164] = HAnimSegment1765;

HAnimSegment HAnimSegment1766 = createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid42.segments[165] = HAnimSegment1766;

HAnimSegment HAnimSegment1767 = createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid42.segments[166] = HAnimSegment1767;

HAnimSegment HAnimSegment1768 = createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_l5";
HAnimHumanoid42.segments[167] = HAnimSegment1768;

HAnimSegment HAnimSegment1769 = createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_l4";
HAnimHumanoid42.segments[168] = HAnimSegment1769;

HAnimSegment HAnimSegment1770 = createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_l3";
HAnimHumanoid42.segments[169] = HAnimSegment1770;

HAnimSegment HAnimSegment1771 = createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_l2";
HAnimHumanoid42.segments[170] = HAnimSegment1771;

HAnimSegment HAnimSegment1772 = createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_l1";
HAnimHumanoid42.segments[171] = HAnimSegment1772;

HAnimSegment HAnimSegment1773 = createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_t12";
HAnimHumanoid42.segments[172] = HAnimSegment1773;

HAnimSegment HAnimSegment1774 = createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_t11";
HAnimHumanoid42.segments[173] = HAnimSegment1774;

HAnimSegment HAnimSegment1775 = createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_t10";
HAnimHumanoid42.segments[174] = HAnimSegment1775;

HAnimSegment HAnimSegment1776 = createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_t9";
HAnimHumanoid42.segments[175] = HAnimSegment1776;

HAnimSegment HAnimSegment1777 = createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_t8";
HAnimHumanoid42.segments[176] = HAnimSegment1777;

HAnimSegment HAnimSegment1778 = createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_t7";
HAnimHumanoid42.segments[177] = HAnimSegment1778;

HAnimSegment HAnimSegment1779 = createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_t6";
HAnimHumanoid42.segments[178] = HAnimSegment1779;

HAnimSegment HAnimSegment1780 = createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_t5";
HAnimHumanoid42.segments[179] = HAnimSegment1780;

HAnimSegment HAnimSegment1781 = createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_t4";
HAnimHumanoid42.segments[180] = HAnimSegment1781;

HAnimSegment HAnimSegment1782 = createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_t3";
HAnimHumanoid42.segments[181] = HAnimSegment1782;

HAnimSegment HAnimSegment1783 = createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_t2";
HAnimHumanoid42.segments[182] = HAnimSegment1783;

HAnimSegment HAnimSegment1784 = createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_t1";
HAnimHumanoid42.segments[183] = HAnimSegment1784;

HAnimSegment HAnimSegment1785 = createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_c7";
HAnimHumanoid42.segments[184] = HAnimSegment1785;

HAnimSegment HAnimSegment1786 = createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_c6";
HAnimHumanoid42.segments[185] = HAnimSegment1786;

HAnimSegment HAnimSegment1787 = createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_c5";
HAnimHumanoid42.segments[186] = HAnimSegment1787;

HAnimSegment HAnimSegment1788 = createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_c4";
HAnimHumanoid42.segments[187] = HAnimSegment1788;

HAnimSegment HAnimSegment1789 = createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_c3";
HAnimHumanoid42.segments[188] = HAnimSegment1789;

HAnimSegment HAnimSegment1790 = createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_c2";
HAnimHumanoid42.segments[189] = HAnimSegment1790;

HAnimSegment HAnimSegment1791 = createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_c1";
HAnimHumanoid42.segments[190] = HAnimSegment1791;

HAnimSegment HAnimSegment1792 = createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_skull";
HAnimHumanoid42.segments[191] = HAnimSegment1792;

HAnimSegment HAnimSegment1793 = createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_l_clavicle";
HAnimHumanoid42.segments[192] = HAnimSegment1793;

HAnimSegment HAnimSegment1794 = createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_l_scapula";
HAnimHumanoid42.segments[193] = HAnimSegment1794;

HAnimSegment HAnimSegment1795 = createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_l_upperarm";
HAnimHumanoid42.segments[194] = HAnimSegment1795;

HAnimSegment HAnimSegment1796 = createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_l_forearm";
HAnimHumanoid42.segments[195] = HAnimSegment1796;

HAnimSegment HAnimSegment1797 = createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_l_carpal";
HAnimHumanoid42.segments[196] = HAnimSegment1797;

HAnimSegment HAnimSegment1798 = createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_l_trapezium";
HAnimHumanoid42.segments[197] = HAnimSegment1798;

HAnimSegment HAnimSegment1799 = createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_l_metacarpal_1";
HAnimHumanoid42.segments[198] = HAnimSegment1799;

HAnimSegment HAnimSegment1800 = createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid42.segments[199] = HAnimSegment1800;

HAnimSegment HAnimSegment1801 = createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_l_trapezoid";
HAnimHumanoid42.segments[200] = HAnimSegment1801;

HAnimSegment HAnimSegment1802 = createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_l_metacarpal_2";
HAnimHumanoid42.segments[201] = HAnimSegment1802;

HAnimSegment HAnimSegment1803 = createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid42.segments[202] = HAnimSegment1803;

HAnimSegment HAnimSegment1804 = createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_l_carpal_middle_phalanx_1";
HAnimHumanoid42.segments[203] = HAnimSegment1804;

HAnimSegment HAnimSegment1805 = createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_l_capitate";
HAnimHumanoid42.segments[204] = HAnimSegment1805;

HAnimSegment HAnimSegment1806 = createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_l_metacarpal_3";
HAnimHumanoid42.segments[205] = HAnimSegment1806;

HAnimSegment HAnimSegment1807 = createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid42.segments[206] = HAnimSegment1807;

HAnimSegment HAnimSegment1808 = createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid42.segments[207] = HAnimSegment1808;

HAnimSegment HAnimSegment1809 = createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_l_hamate";
HAnimHumanoid42.segments[208] = HAnimSegment1809;

HAnimSegment HAnimSegment1810 = createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_l_metacarpal_4";
HAnimHumanoid42.segments[209] = HAnimSegment1810;

HAnimSegment HAnimSegment1811 = createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid42.segments[210] = HAnimSegment1811;

HAnimSegment HAnimSegment1812 = createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid42.segments[211] = HAnimSegment1812;

HAnimSegment HAnimSegment1813 = createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_l_metacarpal_5";
HAnimHumanoid42.segments[212] = HAnimSegment1813;

HAnimSegment HAnimSegment1814 = createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid42.segments[213] = HAnimSegment1814;

HAnimSegment HAnimSegment1815 = createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid42.segments[214] = HAnimSegment1815;

HAnimSegment HAnimSegment1816 = createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_r_clavicle";
HAnimHumanoid42.segments[215] = HAnimSegment1816;

HAnimSegment HAnimSegment1817 = createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_r_scapula";
HAnimHumanoid42.segments[216] = HAnimSegment1817;

HAnimSegment HAnimSegment1818 = createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_r_upperarm";
HAnimHumanoid42.segments[217] = HAnimSegment1818;

HAnimSegment HAnimSegment1819 = createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_r_forearm";
HAnimHumanoid42.segments[218] = HAnimSegment1819;

HAnimSegment HAnimSegment1820 = createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_r_carpal";
HAnimHumanoid42.segments[219] = HAnimSegment1820;

HAnimSegment HAnimSegment1821 = createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_r_trapezium";
HAnimHumanoid42.segments[220] = HAnimSegment1821;

HAnimSegment HAnimSegment1822 = createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_r_metacarpal_1";
HAnimHumanoid42.segments[221] = HAnimSegment1822;

HAnimSegment HAnimSegment1823 = createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid42.segments[222] = HAnimSegment1823;

HAnimSegment HAnimSegment1824 = createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_r_trapezoid";
HAnimHumanoid42.segments[223] = HAnimSegment1824;

HAnimSegment HAnimSegment1825 = createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_r_metacarpal_2";
HAnimHumanoid42.segments[224] = HAnimSegment1825;

HAnimSegment HAnimSegment1826 = createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid42.segments[225] = HAnimSegment1826;

HAnimSegment HAnimSegment1827 = createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_r_carpal_middle_phalanx_1";
HAnimHumanoid42.segments[226] = HAnimSegment1827;

HAnimSegment HAnimSegment1828 = createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_r_capitate";
HAnimHumanoid42.segments[227] = HAnimSegment1828;

HAnimSegment HAnimSegment1829 = createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_r_metacarpal_3";
HAnimHumanoid42.segments[228] = HAnimSegment1829;

HAnimSegment HAnimSegment1830 = createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid42.segments[229] = HAnimSegment1830;

HAnimSegment HAnimSegment1831 = createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid42.segments[230] = HAnimSegment1831;

HAnimSegment HAnimSegment1832 = createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_r_hamate";
HAnimHumanoid42.segments[231] = HAnimSegment1832;

HAnimSegment HAnimSegment1833 = createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_r_metacarpal_4";
HAnimHumanoid42.segments[232] = HAnimSegment1833;

HAnimSegment HAnimSegment1834 = createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid42.segments[233] = HAnimSegment1834;

HAnimSegment HAnimSegment1835 = createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid42.segments[234] = HAnimSegment1835;

HAnimSegment HAnimSegment1836 = createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_r_metacarpal_5";
HAnimHumanoid42.segments[235] = HAnimSegment1836;

HAnimSegment HAnimSegment1837 = createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid42.segments[236] = HAnimSegment1837;

HAnimSegment HAnimSegment1838 = createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid42.segments[237] = HAnimSegment1838;

HAnimJoint HAnimJoint1839 = createNode("HAnimJoint");
HAnimJoint1839.USE = "hanim_humanoid_root";
HAnimHumanoid42.joints[238] = HAnimJoint1839;

HAnimJoint HAnimJoint1840 = createNode("HAnimJoint");
HAnimJoint1840.USE = "hanim_sacroiliac";
HAnimHumanoid42.joints[239] = HAnimJoint1840;

HAnimJoint HAnimJoint1841 = createNode("HAnimJoint");
HAnimJoint1841.USE = "hanim_l_hip";
HAnimHumanoid42.joints[240] = HAnimJoint1841;

HAnimJoint HAnimJoint1842 = createNode("HAnimJoint");
HAnimJoint1842.USE = "hanim_l_knee";
HAnimHumanoid42.joints[241] = HAnimJoint1842;

HAnimJoint HAnimJoint1843 = createNode("HAnimJoint");
HAnimJoint1843.USE = "hanim_l_talocrural";
HAnimHumanoid42.joints[242] = HAnimJoint1843;

HAnimJoint HAnimJoint1844 = createNode("HAnimJoint");
HAnimJoint1844.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid42.joints[243] = HAnimJoint1844;

HAnimJoint HAnimJoint1845 = createNode("HAnimJoint");
HAnimJoint1845.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid42.joints[244] = HAnimJoint1845;

HAnimJoint HAnimJoint1846 = createNode("HAnimJoint");
HAnimJoint1846.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid42.joints[245] = HAnimJoint1846;

HAnimJoint HAnimJoint1847 = createNode("HAnimJoint");
HAnimJoint1847.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid42.joints[246] = HAnimJoint1847;

HAnimJoint HAnimJoint1848 = createNode("HAnimJoint");
HAnimJoint1848.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid42.joints[247] = HAnimJoint1848;

HAnimJoint HAnimJoint1849 = createNode("HAnimJoint");
HAnimJoint1849.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid42.joints[248] = HAnimJoint1849;

HAnimJoint HAnimJoint1850 = createNode("HAnimJoint");
HAnimJoint1850.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid42.joints[249] = HAnimJoint1850;

HAnimJoint HAnimJoint1851 = createNode("HAnimJoint");
HAnimJoint1851.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid42.joints[250] = HAnimJoint1851;

HAnimJoint HAnimJoint1852 = createNode("HAnimJoint");
HAnimJoint1852.USE = "hanim_l_tarsal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[251] = HAnimJoint1852;

HAnimJoint HAnimJoint1853 = createNode("HAnimJoint");
HAnimJoint1853.USE = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimHumanoid42.joints[252] = HAnimJoint1853;

HAnimJoint HAnimJoint1854 = createNode("HAnimJoint");
HAnimJoint1854.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid42.joints[253] = HAnimJoint1854;

HAnimJoint HAnimJoint1855 = createNode("HAnimJoint");
HAnimJoint1855.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid42.joints[254] = HAnimJoint1855;

HAnimJoint HAnimJoint1856 = createNode("HAnimJoint");
HAnimJoint1856.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid42.joints[255] = HAnimJoint1856;

HAnimJoint HAnimJoint1857 = createNode("HAnimJoint");
HAnimJoint1857.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[256] = HAnimJoint1857;

HAnimJoint HAnimJoint1858 = createNode("HAnimJoint");
HAnimJoint1858.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid42.joints[257] = HAnimJoint1858;

HAnimJoint HAnimJoint1859 = createNode("HAnimJoint");
HAnimJoint1859.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid42.joints[258] = HAnimJoint1859;

HAnimJoint HAnimJoint1860 = createNode("HAnimJoint");
HAnimJoint1860.USE = "hanim_l_transversetarsal";
HAnimHumanoid42.joints[259] = HAnimJoint1860;

HAnimJoint HAnimJoint1861 = createNode("HAnimJoint");
HAnimJoint1861.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid42.joints[260] = HAnimJoint1861;

HAnimJoint HAnimJoint1862 = createNode("HAnimJoint");
HAnimJoint1862.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid42.joints[261] = HAnimJoint1862;

HAnimJoint HAnimJoint1863 = createNode("HAnimJoint");
HAnimJoint1863.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[262] = HAnimJoint1863;

HAnimJoint HAnimJoint1864 = createNode("HAnimJoint");
HAnimJoint1864.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid42.joints[263] = HAnimJoint1864;

HAnimJoint HAnimJoint1865 = createNode("HAnimJoint");
HAnimJoint1865.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid42.joints[264] = HAnimJoint1865;

HAnimJoint HAnimJoint1866 = createNode("HAnimJoint");
HAnimJoint1866.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid42.joints[265] = HAnimJoint1866;

HAnimJoint HAnimJoint1867 = createNode("HAnimJoint");
HAnimJoint1867.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[266] = HAnimJoint1867;

HAnimJoint HAnimJoint1868 = createNode("HAnimJoint");
HAnimJoint1868.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid42.joints[267] = HAnimJoint1868;

HAnimJoint HAnimJoint1869 = createNode("HAnimJoint");
HAnimJoint1869.USE = "hanim_r_hip";
HAnimHumanoid42.joints[268] = HAnimJoint1869;

HAnimJoint HAnimJoint1870 = createNode("HAnimJoint");
HAnimJoint1870.USE = "hanim_r_knee";
HAnimHumanoid42.joints[269] = HAnimJoint1870;

HAnimJoint HAnimJoint1871 = createNode("HAnimJoint");
HAnimJoint1871.USE = "hanim_r_talocrural";
HAnimHumanoid42.joints[270] = HAnimJoint1871;

HAnimJoint HAnimJoint1872 = createNode("HAnimJoint");
HAnimJoint1872.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid42.joints[271] = HAnimJoint1872;

HAnimJoint HAnimJoint1873 = createNode("HAnimJoint");
HAnimJoint1873.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid42.joints[272] = HAnimJoint1873;

HAnimJoint HAnimJoint1874 = createNode("HAnimJoint");
HAnimJoint1874.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid42.joints[273] = HAnimJoint1874;

HAnimJoint HAnimJoint1875 = createNode("HAnimJoint");
HAnimJoint1875.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid42.joints[274] = HAnimJoint1875;

HAnimJoint HAnimJoint1876 = createNode("HAnimJoint");
HAnimJoint1876.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid42.joints[275] = HAnimJoint1876;

HAnimJoint HAnimJoint1877 = createNode("HAnimJoint");
HAnimJoint1877.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid42.joints[276] = HAnimJoint1877;

HAnimJoint HAnimJoint1878 = createNode("HAnimJoint");
HAnimJoint1878.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid42.joints[277] = HAnimJoint1878;

HAnimJoint HAnimJoint1879 = createNode("HAnimJoint");
HAnimJoint1879.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid42.joints[278] = HAnimJoint1879;

HAnimJoint HAnimJoint1880 = createNode("HAnimJoint");
HAnimJoint1880.USE = "hanim_r_tarsal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[279] = HAnimJoint1880;

HAnimJoint HAnimJoint1881 = createNode("HAnimJoint");
HAnimJoint1881.USE = "hanim_r_tarsal_distal_interphalangeal_1";
HAnimHumanoid42.joints[280] = HAnimJoint1881;

HAnimJoint HAnimJoint1882 = createNode("HAnimJoint");
HAnimJoint1882.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid42.joints[281] = HAnimJoint1882;

HAnimJoint HAnimJoint1883 = createNode("HAnimJoint");
HAnimJoint1883.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid42.joints[282] = HAnimJoint1883;

HAnimJoint HAnimJoint1884 = createNode("HAnimJoint");
HAnimJoint1884.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid42.joints[283] = HAnimJoint1884;

HAnimJoint HAnimJoint1885 = createNode("HAnimJoint");
HAnimJoint1885.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[284] = HAnimJoint1885;

HAnimJoint HAnimJoint1886 = createNode("HAnimJoint");
HAnimJoint1886.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid42.joints[285] = HAnimJoint1886;

HAnimJoint HAnimJoint1887 = createNode("HAnimJoint");
HAnimJoint1887.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid42.joints[286] = HAnimJoint1887;

HAnimJoint HAnimJoint1888 = createNode("HAnimJoint");
HAnimJoint1888.USE = "hanim_r_transversetarsal";
HAnimHumanoid42.joints[287] = HAnimJoint1888;

HAnimJoint HAnimJoint1889 = createNode("HAnimJoint");
HAnimJoint1889.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid42.joints[288] = HAnimJoint1889;

HAnimJoint HAnimJoint1890 = createNode("HAnimJoint");
HAnimJoint1890.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid42.joints[289] = HAnimJoint1890;

HAnimJoint HAnimJoint1891 = createNode("HAnimJoint");
HAnimJoint1891.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[290] = HAnimJoint1891;

HAnimJoint HAnimJoint1892 = createNode("HAnimJoint");
HAnimJoint1892.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid42.joints[291] = HAnimJoint1892;

HAnimJoint HAnimJoint1893 = createNode("HAnimJoint");
HAnimJoint1893.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid42.joints[292] = HAnimJoint1893;

HAnimJoint HAnimJoint1894 = createNode("HAnimJoint");
HAnimJoint1894.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid42.joints[293] = HAnimJoint1894;

HAnimJoint HAnimJoint1895 = createNode("HAnimJoint");
HAnimJoint1895.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[294] = HAnimJoint1895;

HAnimJoint HAnimJoint1896 = createNode("HAnimJoint");
HAnimJoint1896.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid42.joints[295] = HAnimJoint1896;

HAnimJoint HAnimJoint1897 = createNode("HAnimJoint");
HAnimJoint1897.USE = "hanim_vl5";
HAnimHumanoid42.joints[296] = HAnimJoint1897;

HAnimJoint HAnimJoint1898 = createNode("HAnimJoint");
HAnimJoint1898.USE = "hanim_vl4";
HAnimHumanoid42.joints[297] = HAnimJoint1898;

HAnimJoint HAnimJoint1899 = createNode("HAnimJoint");
HAnimJoint1899.USE = "hanim_vl3";
HAnimHumanoid42.joints[298] = HAnimJoint1899;

HAnimJoint HAnimJoint1900 = createNode("HAnimJoint");
HAnimJoint1900.USE = "hanim_vl2";
HAnimHumanoid42.joints[299] = HAnimJoint1900;

HAnimJoint HAnimJoint1901 = createNode("HAnimJoint");
HAnimJoint1901.USE = "hanim_vl1";
HAnimHumanoid42.joints[300] = HAnimJoint1901;

HAnimJoint HAnimJoint1902 = createNode("HAnimJoint");
HAnimJoint1902.USE = "hanim_vt12";
HAnimHumanoid42.joints[301] = HAnimJoint1902;

HAnimJoint HAnimJoint1903 = createNode("HAnimJoint");
HAnimJoint1903.USE = "hanim_vt11";
HAnimHumanoid42.joints[302] = HAnimJoint1903;

HAnimJoint HAnimJoint1904 = createNode("HAnimJoint");
HAnimJoint1904.USE = "hanim_vt10";
HAnimHumanoid42.joints[303] = HAnimJoint1904;

HAnimJoint HAnimJoint1905 = createNode("HAnimJoint");
HAnimJoint1905.USE = "hanim_vt9";
HAnimHumanoid42.joints[304] = HAnimJoint1905;

HAnimJoint HAnimJoint1906 = createNode("HAnimJoint");
HAnimJoint1906.USE = "hanim_vt8";
HAnimHumanoid42.joints[305] = HAnimJoint1906;

HAnimJoint HAnimJoint1907 = createNode("HAnimJoint");
HAnimJoint1907.USE = "hanim_vt7";
HAnimHumanoid42.joints[306] = HAnimJoint1907;

HAnimJoint HAnimJoint1908 = createNode("HAnimJoint");
HAnimJoint1908.USE = "hanim_vt6";
HAnimHumanoid42.joints[307] = HAnimJoint1908;

HAnimJoint HAnimJoint1909 = createNode("HAnimJoint");
HAnimJoint1909.USE = "hanim_vt5";
HAnimHumanoid42.joints[308] = HAnimJoint1909;

HAnimJoint HAnimJoint1910 = createNode("HAnimJoint");
HAnimJoint1910.USE = "hanim_vt4";
HAnimHumanoid42.joints[309] = HAnimJoint1910;

HAnimJoint HAnimJoint1911 = createNode("HAnimJoint");
HAnimJoint1911.USE = "hanim_vt3";
HAnimHumanoid42.joints[310] = HAnimJoint1911;

HAnimJoint HAnimJoint1912 = createNode("HAnimJoint");
HAnimJoint1912.USE = "hanim_vt2";
HAnimHumanoid42.joints[311] = HAnimJoint1912;

HAnimJoint HAnimJoint1913 = createNode("HAnimJoint");
HAnimJoint1913.USE = "hanim_vt1";
HAnimHumanoid42.joints[312] = HAnimJoint1913;

HAnimJoint HAnimJoint1914 = createNode("HAnimJoint");
HAnimJoint1914.USE = "hanim_vc7";
HAnimHumanoid42.joints[313] = HAnimJoint1914;

HAnimJoint HAnimJoint1915 = createNode("HAnimJoint");
HAnimJoint1915.USE = "hanim_vc6";
HAnimHumanoid42.joints[314] = HAnimJoint1915;

HAnimJoint HAnimJoint1916 = createNode("HAnimJoint");
HAnimJoint1916.USE = "hanim_vc5";
HAnimHumanoid42.joints[315] = HAnimJoint1916;

HAnimJoint HAnimJoint1917 = createNode("HAnimJoint");
HAnimJoint1917.USE = "hanim_vc4";
HAnimHumanoid42.joints[316] = HAnimJoint1917;

HAnimJoint HAnimJoint1918 = createNode("HAnimJoint");
HAnimJoint1918.USE = "hanim_vc3";
HAnimHumanoid42.joints[317] = HAnimJoint1918;

HAnimJoint HAnimJoint1919 = createNode("HAnimJoint");
HAnimJoint1919.USE = "hanim_vc2";
HAnimHumanoid42.joints[318] = HAnimJoint1919;

HAnimJoint HAnimJoint1920 = createNode("HAnimJoint");
HAnimJoint1920.USE = "hanim_vc1";
HAnimHumanoid42.joints[319] = HAnimJoint1920;

HAnimJoint HAnimJoint1921 = createNode("HAnimJoint");
HAnimJoint1921.USE = "hanim_skullbase";
HAnimHumanoid42.joints[320] = HAnimJoint1921;

HAnimJoint HAnimJoint1922 = createNode("HAnimJoint");
HAnimJoint1922.USE = "hanim_l_eyelid_joint";
HAnimHumanoid42.joints[321] = HAnimJoint1922;

HAnimJoint HAnimJoint1923 = createNode("HAnimJoint");
HAnimJoint1923.USE = "hanim_r_eyelid_joint";
HAnimHumanoid42.joints[322] = HAnimJoint1923;

HAnimJoint HAnimJoint1924 = createNode("HAnimJoint");
HAnimJoint1924.USE = "hanim_l_eyeball_joint";
HAnimHumanoid42.joints[323] = HAnimJoint1924;

HAnimJoint HAnimJoint1925 = createNode("HAnimJoint");
HAnimJoint1925.USE = "hanim_r_eyeball_joint";
HAnimHumanoid42.joints[324] = HAnimJoint1925;

HAnimJoint HAnimJoint1926 = createNode("HAnimJoint");
HAnimJoint1926.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid42.joints[325] = HAnimJoint1926;

HAnimJoint HAnimJoint1927 = createNode("HAnimJoint");
HAnimJoint1927.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid42.joints[326] = HAnimJoint1927;

HAnimJoint HAnimJoint1928 = createNode("HAnimJoint");
HAnimJoint1928.USE = "hanim_temporomandibular";
HAnimHumanoid42.joints[327] = HAnimJoint1928;

HAnimJoint HAnimJoint1929 = createNode("HAnimJoint");
HAnimJoint1929.USE = "hanim_l_sternoclavicular";
HAnimHumanoid42.joints[328] = HAnimJoint1929;

HAnimJoint HAnimJoint1930 = createNode("HAnimJoint");
HAnimJoint1930.USE = "hanim_l_acromioclavicular";
HAnimHumanoid42.joints[329] = HAnimJoint1930;

HAnimJoint HAnimJoint1931 = createNode("HAnimJoint");
HAnimJoint1931.USE = "hanim_l_shoulder";
HAnimHumanoid42.joints[330] = HAnimJoint1931;

HAnimJoint HAnimJoint1932 = createNode("HAnimJoint");
HAnimJoint1932.USE = "hanim_l_elbow";
HAnimHumanoid42.joints[331] = HAnimJoint1932;

HAnimJoint HAnimJoint1933 = createNode("HAnimJoint");
HAnimJoint1933.USE = "hanim_l_radiocarpal";
HAnimHumanoid42.joints[332] = HAnimJoint1933;

HAnimJoint HAnimJoint1934 = createNode("HAnimJoint");
HAnimJoint1934.USE = "hanim_l_midcarpal_1";
HAnimHumanoid42.joints[333] = HAnimJoint1934;

HAnimJoint HAnimJoint1935 = createNode("HAnimJoint");
HAnimJoint1935.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid42.joints[334] = HAnimJoint1935;

HAnimJoint HAnimJoint1936 = createNode("HAnimJoint");
HAnimJoint1936.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid42.joints[335] = HAnimJoint1936;

HAnimJoint HAnimJoint1937 = createNode("HAnimJoint");
HAnimJoint1937.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid42.joints[336] = HAnimJoint1937;

HAnimJoint HAnimJoint1938 = createNode("HAnimJoint");
HAnimJoint1938.USE = "hanim_l_midcarpal_2";
HAnimHumanoid42.joints[337] = HAnimJoint1938;

HAnimJoint HAnimJoint1939 = createNode("HAnimJoint");
HAnimJoint1939.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid42.joints[338] = HAnimJoint1939;

HAnimJoint HAnimJoint1940 = createNode("HAnimJoint");
HAnimJoint1940.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid42.joints[339] = HAnimJoint1940;

HAnimJoint HAnimJoint1941 = createNode("HAnimJoint");
HAnimJoint1941.USE = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[340] = HAnimJoint1941;

HAnimJoint HAnimJoint1942 = createNode("HAnimJoint");
HAnimJoint1942.USE = "hanim_l_carpal_distal_interphalangeal_1";
HAnimHumanoid42.joints[341] = HAnimJoint1942;

HAnimJoint HAnimJoint1943 = createNode("HAnimJoint");
HAnimJoint1943.USE = "hanim_l_midcarpal_3";
HAnimHumanoid42.joints[342] = HAnimJoint1943;

HAnimJoint HAnimJoint1944 = createNode("HAnimJoint");
HAnimJoint1944.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid42.joints[343] = HAnimJoint1944;

HAnimJoint HAnimJoint1945 = createNode("HAnimJoint");
HAnimJoint1945.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid42.joints[344] = HAnimJoint1945;

HAnimJoint HAnimJoint1946 = createNode("HAnimJoint");
HAnimJoint1946.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[345] = HAnimJoint1946;

HAnimJoint HAnimJoint1947 = createNode("HAnimJoint");
HAnimJoint1947.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid42.joints[346] = HAnimJoint1947;

HAnimJoint HAnimJoint1948 = createNode("HAnimJoint");
HAnimJoint1948.USE = "hanim_l_midcarpal_4_1";
HAnimHumanoid42.joints[347] = HAnimJoint1948;

HAnimJoint HAnimJoint1949 = createNode("HAnimJoint");
HAnimJoint1949.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid42.joints[348] = HAnimJoint1949;

HAnimJoint HAnimJoint1950 = createNode("HAnimJoint");
HAnimJoint1950.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid42.joints[349] = HAnimJoint1950;

HAnimJoint HAnimJoint1951 = createNode("HAnimJoint");
HAnimJoint1951.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[350] = HAnimJoint1951;

HAnimJoint HAnimJoint1952 = createNode("HAnimJoint");
HAnimJoint1952.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid42.joints[351] = HAnimJoint1952;

HAnimJoint HAnimJoint1953 = createNode("HAnimJoint");
HAnimJoint1953.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid42.joints[352] = HAnimJoint1953;

HAnimJoint HAnimJoint1954 = createNode("HAnimJoint");
HAnimJoint1954.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid42.joints[353] = HAnimJoint1954;

HAnimJoint HAnimJoint1955 = createNode("HAnimJoint");
HAnimJoint1955.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[354] = HAnimJoint1955;

HAnimJoint HAnimJoint1956 = createNode("HAnimJoint");
HAnimJoint1956.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid42.joints[355] = HAnimJoint1956;

HAnimJoint HAnimJoint1957 = createNode("HAnimJoint");
HAnimJoint1957.USE = "hanim_r_sternoclavicular";
HAnimHumanoid42.joints[356] = HAnimJoint1957;

HAnimJoint HAnimJoint1958 = createNode("HAnimJoint");
HAnimJoint1958.USE = "hanim_r_acromioclavicular";
HAnimHumanoid42.joints[357] = HAnimJoint1958;

HAnimJoint HAnimJoint1959 = createNode("HAnimJoint");
HAnimJoint1959.USE = "hanim_r_shoulder";
HAnimHumanoid42.joints[358] = HAnimJoint1959;

HAnimJoint HAnimJoint1960 = createNode("HAnimJoint");
HAnimJoint1960.USE = "hanim_r_elbow";
HAnimHumanoid42.joints[359] = HAnimJoint1960;

HAnimJoint HAnimJoint1961 = createNode("HAnimJoint");
HAnimJoint1961.USE = "hanim_r_radiocarpal";
HAnimHumanoid42.joints[360] = HAnimJoint1961;

HAnimJoint HAnimJoint1962 = createNode("HAnimJoint");
HAnimJoint1962.USE = "hanim_r_midcarpal_1";
HAnimHumanoid42.joints[361] = HAnimJoint1962;

HAnimJoint HAnimJoint1963 = createNode("HAnimJoint");
HAnimJoint1963.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid42.joints[362] = HAnimJoint1963;

HAnimJoint HAnimJoint1964 = createNode("HAnimJoint");
HAnimJoint1964.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid42.joints[363] = HAnimJoint1964;

HAnimJoint HAnimJoint1965 = createNode("HAnimJoint");
HAnimJoint1965.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid42.joints[364] = HAnimJoint1965;

HAnimJoint HAnimJoint1966 = createNode("HAnimJoint");
HAnimJoint1966.USE = "hanim_r_midcarpal_2";
HAnimHumanoid42.joints[365] = HAnimJoint1966;

HAnimJoint HAnimJoint1967 = createNode("HAnimJoint");
HAnimJoint1967.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid42.joints[366] = HAnimJoint1967;

HAnimJoint HAnimJoint1968 = createNode("HAnimJoint");
HAnimJoint1968.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid42.joints[367] = HAnimJoint1968;

HAnimJoint HAnimJoint1969 = createNode("HAnimJoint");
HAnimJoint1969.USE = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[368] = HAnimJoint1969;

HAnimJoint HAnimJoint1970 = createNode("HAnimJoint");
HAnimJoint1970.USE = "hanim_r_carpal_distal_interphalangeal_1";
HAnimHumanoid42.joints[369] = HAnimJoint1970;

HAnimJoint HAnimJoint1971 = createNode("HAnimJoint");
HAnimJoint1971.USE = "hanim_r_midcarpal_3";
HAnimHumanoid42.joints[370] = HAnimJoint1971;

HAnimJoint HAnimJoint1972 = createNode("HAnimJoint");
HAnimJoint1972.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid42.joints[371] = HAnimJoint1972;

HAnimJoint HAnimJoint1973 = createNode("HAnimJoint");
HAnimJoint1973.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid42.joints[372] = HAnimJoint1973;

HAnimJoint HAnimJoint1974 = createNode("HAnimJoint");
HAnimJoint1974.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[373] = HAnimJoint1974;

HAnimJoint HAnimJoint1975 = createNode("HAnimJoint");
HAnimJoint1975.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid42.joints[374] = HAnimJoint1975;

HAnimJoint HAnimJoint1976 = createNode("HAnimJoint");
HAnimJoint1976.USE = "hanim_r_midcarpal_4_1";
HAnimHumanoid42.joints[375] = HAnimJoint1976;

HAnimJoint HAnimJoint1977 = createNode("HAnimJoint");
HAnimJoint1977.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid42.joints[376] = HAnimJoint1977;

HAnimJoint HAnimJoint1978 = createNode("HAnimJoint");
HAnimJoint1978.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid42.joints[377] = HAnimJoint1978;

HAnimJoint HAnimJoint1979 = createNode("HAnimJoint");
HAnimJoint1979.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[378] = HAnimJoint1979;

HAnimJoint HAnimJoint1980 = createNode("HAnimJoint");
HAnimJoint1980.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid42.joints[379] = HAnimJoint1980;

HAnimJoint HAnimJoint1981 = createNode("HAnimJoint");
HAnimJoint1981.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid42.joints[380] = HAnimJoint1981;

HAnimJoint HAnimJoint1982 = createNode("HAnimJoint");
HAnimJoint1982.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid42.joints[381] = HAnimJoint1982;

HAnimJoint HAnimJoint1983 = createNode("HAnimJoint");
HAnimJoint1983.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[382] = HAnimJoint1983;

HAnimJoint HAnimJoint1984 = createNode("HAnimJoint");
HAnimJoint1984.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid42.joints[383] = HAnimJoint1984;

Coordinate Coordinate1985 = createNode("Coordinate");
Coordinate1985.DEF = "TheSkinCoord";
Coordinate1985.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
HAnimHumanoid42.skinCoord = Coordinate1985;

Shape Shape1986 = createNode("Shape");
Shape1986.DEF = "SkinShape";
Appearance Appearance1987 = createNode("Appearance");
Appearance1987.DEF = "SkinAppearance";
Material Material1988 = createNode("Material");
Material1988.DEF = "SkinMaterial";
Material1988.ambientIntensity = 0.6;
Material1988.diffuseColor = new SFColor(new float[1,1,1]);
Material1988.shininess = 0.6;
Material1988.transparency = 0.2;
Appearance1987.material = Material1988;

ImageTexture ImageTexture1989 = createNode("ImageTexture");
ImageTexture1989.DEF = "zBlueSpiralBkg2";
ImageTexture1989.url = new MFString(new java.lang.String["../resources/images/zBlueSpiralBkg2.gif","../data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
Appearance1987.texture = ImageTexture1989;

Shape1986.appearance = Appearance1987;

IndexedFaceSet IndexedFaceSet1990 = createNode("IndexedFaceSet");
IndexedFaceSet1990.creaseAngle = 3.1;
IndexedFaceSet1990.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
Color Color1991 = createNode("Color");
Color1991.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet1990.color = Color1991;

Coordinate Coordinate1992 = createNode("Coordinate");
Coordinate1992.USE = "TheSkinCoord";
IndexedFaceSet1990.coord = Coordinate1992;

Shape1986.geometry = IndexedFaceSet1990;

HAnimHumanoid42.skin[384] = Shape1986;

children[4] = HAnimHumanoid42;

}
