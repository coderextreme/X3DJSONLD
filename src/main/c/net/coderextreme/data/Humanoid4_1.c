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
meta3.content = "Humanoid4_1.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "description";
meta5.content = "An attempt at a standard LOA-4 skeleton";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "h2.pl";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "14 Jan 2023";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "creator";
meta8.content = "John Carlson";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "created";
meta9.content = "9 November 2020";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "license";
meta10.content = "../license.html";
head1.meta[8] = meta10;

head = head1;

Transform Transform12 = createNode("Transform");
//DEF for markerfor XYZ axes
Shape Shape13 = createNode("Shape");
Shape13.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
IndexedLineSet IndexedLineSet14 = createNode("IndexedLineSet");
IndexedLineSet14.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet14.colorPerVertex = False;
IndexedLineSet14.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate15 = createNode("Coordinate");
Coordinate15.point = new MFVec3f(new float[0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
IndexedLineSet14.coord = Coordinate15;

Color Color16 = createNode("Color");
Color16.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet14.color = Color16;

Shape13.geometry = IndexedLineSet14;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

children = new MFNode();

children[0] = Transform12;

Group Group17 = createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
Transform Transform18 = createNode("Transform");
Transform Transform19 = createNode("Transform");
Transform19.translation = new SFVec3f(new float[0,2,0]);
Shape Shape20 = createNode("Shape");
Shape20.DEF = "HAnimRootShape";
Sphere Sphere21 = createNode("Sphere");
Sphere21.radius = 0.02;
Shape20.geometry = Sphere21;

Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.DEF = "HAnimRootMaterial";
Material23.diffuseColor = new SFColor(new float[0.8,0,0]);
Material23.transparency = 0.3;
Appearance22.material = Material23;

Shape20.appearance = Appearance22;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

Transform Transform24 = createNode("Transform");
Transform24.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape25 = createNode("Shape");
Shape25.DEF = "HAnimJointShape";
Sphere Sphere26 = createNode("Sphere");
Sphere26.radius = 0.02;
Shape25.geometry = Sphere26;

Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.DEF = "HAnimJointMaterial";
Material28.diffuseColor = new SFColor(new float[0,0,0.8]);
Material28.transparency = 0.3;
Appearance27.material = Material28;

Shape25.appearance = Appearance27;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

Transform18.children[1] = Transform24;

Transform Transform29 = createNode("Transform");
Transform29.translation = new SFVec3f(new float[0,2.05,0]);
Shape Shape30 = createNode("Shape");
Shape30.DEF = "HAnimSegmentLine";
LineSet LineSet31 = createNode("LineSet");
LineSet31.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA32 = createNode("ColorRGBA");
ColorRGBA32.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA32.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet31.color = ColorRGBA32;

Coordinate Coordinate33 = createNode("Coordinate");
Coordinate33.point = new MFVec3f(new float[-0.05,0,0,0.05,0,0]);
LineSet31.coord = Coordinate33;

Shape30.geometry = LineSet31;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

Transform18.children[2] = Transform29;

Transform Transform34 = createNode("Transform");
Transform34.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape35 = createNode("Shape");
Shape35.DEF = "HAnimSiteShape";
IndexedFaceSet IndexedFaceSet36 = createNode("IndexedFaceSet");
IndexedFaceSet36.DEF = "DiamondIFS";
IndexedFaceSet36.creaseAngle = 0.5;
IndexedFaceSet36.solid = False;
IndexedFaceSet36.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA ColorRGBA37 = createNode("ColorRGBA");
ColorRGBA37.DEF = "HAnimSiteColorRGBA";
ColorRGBA37.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet36.color = ColorRGBA37;

Coordinate Coordinate38 = createNode("Coordinate");
Coordinate38.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet36.coord = Coordinate38;

Shape35.geometry = IndexedFaceSet36;

Appearance Appearance39 = createNode("Appearance");
Material Material40 = createNode("Material");
Material40.diffuseColor = new SFColor(new float[1,1,0]);
Material40.transparency = 0.3;
Appearance39.material = Material40;

Shape35.appearance = Appearance39;

Transform34.child = new undefined();

Transform34.child[0] = Shape35;

Transform18.children[3] = Transform34;

Group17.children = new MFNode();

Group17.children[0] = Transform18;

children[1] = Group17;

NavigationInfo NavigationInfo41 = createNode("NavigationInfo");
NavigationInfo41.speed = 1.5;
children[2] = NavigationInfo41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.description = "default";
children[3] = Viewpoint42;

HAnimHumanoid HAnimHumanoid43 = createNode("HAnimHumanoid");
HAnimHumanoid43.name = "HAnim";
HAnimHumanoid43.DEF = "hanim_HAnim";
HAnimHumanoid43.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimHumanoid43.version = "2.0";
//</LOD>
Coordinate Coordinate44 = createNode("Coordinate");
HAnimHumanoid43.skinCoord = Coordinate44;

HAnimJoint HAnimJoint45 = createNode("HAnimJoint");
HAnimJoint45.name = "humanoid_root";
HAnimJoint45.DEF = "hanim_humanoid_root";
HAnimJoint45.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimSegment HAnimSegment46 = createNode("HAnimSegment");
HAnimSegment46.name = "sacrum";
HAnimSegment46.DEF = "hanim_sacrum";
Transform Transform47 = createNode("Transform");
Transform47.translation = new SFVec3f(new float[0,0.824,0.0277]);
Transform Transform48 = createNode("Transform");
//Empty Transform
Shape Shape49 = createNode("Shape");
Shape49.USE = "HAnimJointShape";
Transform48.child = new undefined();

Transform48.child[0] = Shape49;

Transform47.children = new MFNode();

Transform47.children[0] = Transform48;

HAnimSegment46.children = new MFNode();

HAnimSegment46.children[0] = Transform47;

Shape Shape50 = createNode("Shape");
LineSet LineSet51 = createNode("LineSet");
LineSet51.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate52 = createNode("Coordinate");
Coordinate52.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet51.coord = Coordinate52;

//from humanoid_root to sacroiliac vertices 2
ColorRGBA ColorRGBA53 = createNode("ColorRGBA");
ColorRGBA53.USE = "HAnimSegmentLineColorRGBA";
LineSet51.color = ColorRGBA53;

Shape50.geometry = LineSet51;

HAnimSegment46.children[1] = Shape50;

HAnimSite HAnimSite54 = createNode("HAnimSite");
HAnimSite54.name = "buttocks_standing_wall_contact_point_pt";
HAnimSite54.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
TouchSensor TouchSensor55 = createNode("TouchSensor");
TouchSensor55.description = "HAnimSite buttocks_standing_wall_contact_point_pt";
HAnimSite54.children = new MFNode();

HAnimSite54.children[0] = TouchSensor55;

Shape Shape56 = createNode("Shape");
Shape56.USE = "HAnimSiteShape";
HAnimSite54.children[1] = Shape56;

HAnimSegment46.children[2] = HAnimSite54;

HAnimSite HAnimSite57 = createNode("HAnimSite");
HAnimSite57.name = "crotch_pt";
HAnimSite57.DEF = "hanim_crotch_pt";
HAnimSite57.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
TouchSensor TouchSensor58 = createNode("TouchSensor");
TouchSensor58.description = "HAnimSite crotch_pt";
HAnimSite57.children = new MFNode();

HAnimSite57.children[0] = TouchSensor58;

Shape Shape59 = createNode("Shape");
Shape59.USE = "HAnimSiteShape";
HAnimSite57.children[1] = Shape59;

HAnimSegment46.children[3] = HAnimSite57;

HAnimSite HAnimSite60 = createNode("HAnimSite");
HAnimSite60.name = "l_asis_pt";
HAnimSite60.DEF = "hanim_l_asis_pt";
HAnimSite60.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
TouchSensor TouchSensor61 = createNode("TouchSensor");
TouchSensor61.description = "HAnimSite l_asis_pt";
HAnimSite60.children = new MFNode();

HAnimSite60.children[0] = TouchSensor61;

Shape Shape62 = createNode("Shape");
Shape62.USE = "HAnimSiteShape";
HAnimSite60.children[1] = Shape62;

HAnimSegment46.children[4] = HAnimSite60;

HAnimSite HAnimSite63 = createNode("HAnimSite");
HAnimSite63.name = "l_iliocristale_pt";
HAnimSite63.DEF = "hanim_l_iliocristale_pt";
HAnimSite63.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
TouchSensor TouchSensor64 = createNode("TouchSensor");
TouchSensor64.description = "HAnimSite l_iliocristale_pt";
HAnimSite63.children = new MFNode();

HAnimSite63.children[0] = TouchSensor64;

Shape Shape65 = createNode("Shape");
Shape65.USE = "HAnimSiteShape";
HAnimSite63.children[1] = Shape65;

HAnimSegment46.children[5] = HAnimSite63;

HAnimSite HAnimSite66 = createNode("HAnimSite");
HAnimSite66.name = "l_psis_pt";
HAnimSite66.DEF = "hanim_l_psis_pt";
HAnimSite66.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
TouchSensor TouchSensor67 = createNode("TouchSensor");
TouchSensor67.description = "HAnimSite l_psis_pt";
HAnimSite66.children = new MFNode();

HAnimSite66.children[0] = TouchSensor67;

Shape Shape68 = createNode("Shape");
Shape68.USE = "HAnimSiteShape";
HAnimSite66.children[1] = Shape68;

HAnimSegment46.children[6] = HAnimSite66;

HAnimSite HAnimSite69 = createNode("HAnimSite");
HAnimSite69.name = "l_trochanterion_pt";
HAnimSite69.DEF = "hanim_l_trochanterion_pt";
HAnimSite69.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
TouchSensor TouchSensor70 = createNode("TouchSensor");
TouchSensor70.description = "HAnimSite l_trochanterion_pt";
HAnimSite69.children = new MFNode();

HAnimSite69.children[0] = TouchSensor70;

Shape Shape71 = createNode("Shape");
Shape71.USE = "HAnimSiteShape";
HAnimSite69.children[1] = Shape71;

HAnimSegment46.children[7] = HAnimSite69;

HAnimSite HAnimSite72 = createNode("HAnimSite");
HAnimSite72.name = "r_asis_pt";
HAnimSite72.DEF = "hanim_r_asis_pt";
HAnimSite72.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
TouchSensor TouchSensor73 = createNode("TouchSensor");
TouchSensor73.description = "HAnimSite r_asis_pt";
HAnimSite72.children = new MFNode();

HAnimSite72.children[0] = TouchSensor73;

Shape Shape74 = createNode("Shape");
Shape74.USE = "HAnimSiteShape";
HAnimSite72.children[1] = Shape74;

HAnimSegment46.children[8] = HAnimSite72;

HAnimSite HAnimSite75 = createNode("HAnimSite");
HAnimSite75.name = "r_iliocristale_pt";
HAnimSite75.DEF = "hanim_r_iliocristale_pt";
HAnimSite75.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
TouchSensor TouchSensor76 = createNode("TouchSensor");
TouchSensor76.description = "HAnimSite r_iliocristale_pt";
HAnimSite75.children = new MFNode();

HAnimSite75.children[0] = TouchSensor76;

Shape Shape77 = createNode("Shape");
Shape77.USE = "HAnimSiteShape";
HAnimSite75.children[1] = Shape77;

HAnimSegment46.children[9] = HAnimSite75;

HAnimSite HAnimSite78 = createNode("HAnimSite");
HAnimSite78.name = "r_psis_pt";
HAnimSite78.DEF = "hanim_r_psis_pt";
HAnimSite78.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
TouchSensor TouchSensor79 = createNode("TouchSensor");
TouchSensor79.description = "HAnimSite r_psis_pt";
HAnimSite78.children = new MFNode();

HAnimSite78.children[0] = TouchSensor79;

Shape Shape80 = createNode("Shape");
Shape80.USE = "HAnimSiteShape";
HAnimSite78.children[1] = Shape80;

HAnimSegment46.children[10] = HAnimSite78;

HAnimSite HAnimSite81 = createNode("HAnimSite");
HAnimSite81.name = "r_trochanterion_pt";
HAnimSite81.DEF = "hanim_r_trochanterion_pt";
HAnimSite81.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
TouchSensor TouchSensor82 = createNode("TouchSensor");
TouchSensor82.description = "HAnimSite r_trochanterion_pt";
HAnimSite81.children = new MFNode();

HAnimSite81.children[0] = TouchSensor82;

Shape Shape83 = createNode("Shape");
Shape83.USE = "HAnimSiteShape";
HAnimSite81.children[1] = Shape83;

HAnimSegment46.children[11] = HAnimSite81;

Shape Shape84 = createNode("Shape");
LineSet LineSet85 = createNode("LineSet");
LineSet85.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate86 = createNode("Coordinate");
Coordinate86.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet85.coord = Coordinate86;

//from humanoid_root to vl5 vertices 2
ColorRGBA ColorRGBA87 = createNode("ColorRGBA");
ColorRGBA87.USE = "HAnimSegmentLineColorRGBA";
LineSet85.color = ColorRGBA87;

Shape84.geometry = LineSet85;

HAnimSegment46.children[12] = Shape84;

HAnimSite HAnimSite88 = createNode("HAnimSite");
HAnimSite88.name = "navel_pt";
HAnimSite88.DEF = "hanim_navel_pt";
HAnimSite88.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
TouchSensor TouchSensor89 = createNode("TouchSensor");
TouchSensor89.description = "HAnimSite navel_pt";
HAnimSite88.children = new MFNode();

HAnimSite88.children[0] = TouchSensor89;

Shape Shape90 = createNode("Shape");
Shape90.USE = "HAnimSiteShape";
HAnimSite88.children[1] = Shape90;

HAnimSegment46.children[13] = HAnimSite88;

HAnimSite HAnimSite91 = createNode("HAnimSite");
HAnimSite91.name = "waist_preferred_anterior_pt";
HAnimSite91.DEF = "hanim_waist_preferred_anterior_pt";
TouchSensor TouchSensor92 = createNode("TouchSensor");
TouchSensor92.description = "HAnimSite waist_preferred_anterior_pt";
HAnimSite91.children = new MFNode();

HAnimSite91.children[0] = TouchSensor92;

Shape Shape93 = createNode("Shape");
Shape93.USE = "HAnimSiteShape";
HAnimSite91.children[1] = Shape93;

HAnimSegment46.children[14] = HAnimSite91;

HAnimSite HAnimSite94 = createNode("HAnimSite");
HAnimSite94.name = "waist_preferred_posterior_pt";
HAnimSite94.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite94.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
TouchSensor TouchSensor95 = createNode("TouchSensor");
TouchSensor95.description = "HAnimSite waist_preferred_posterior_pt";
HAnimSite94.children = new MFNode();

HAnimSite94.children[0] = TouchSensor95;

Shape Shape96 = createNode("Shape");
Shape96.USE = "HAnimSiteShape";
HAnimSite94.children[1] = Shape96;

HAnimSegment46.children[15] = HAnimSite94;

HAnimJoint45.children = new MFNode();

HAnimJoint45.children[0] = HAnimSegment46;

HAnimJoint HAnimJoint97 = createNode("HAnimJoint");
HAnimJoint97.name = "sacroiliac";
HAnimJoint97.DEF = "hanim_sacroiliac";
HAnimJoint97.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimSegment HAnimSegment98 = createNode("HAnimSegment");
HAnimSegment98.name = "pelvis";
HAnimSegment98.DEF = "hanim_pelvis";
Transform Transform99 = createNode("Transform");
Transform99.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Transform Transform100 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate104 = createNode("Coordinate");
Coordinate104.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet103.coord = Coordinate104;

//from sacroiliac to l_hip vertices 2
ColorRGBA ColorRGBA105 = createNode("ColorRGBA");
ColorRGBA105.USE = "HAnimSegmentLineColorRGBA";
LineSet103.color = ColorRGBA105;

Shape102.geometry = LineSet103;

HAnimSegment98.children[1] = Shape102;

HAnimSite HAnimSite106 = createNode("HAnimSite");
HAnimSite106.name = "l_femoral_lateral_epicondyles_pt";
HAnimSite106.DEF = "hanim_l_femoral_lateral_epicondyles_pt";
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
HAnimSite109.name = "l_femoral_medial_epicondyles_pt";
HAnimSite109.DEF = "hanim_l_femoral_medial_epicondyles_pt";
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
HAnimSite112.name = "l_knee_crease_pt";
HAnimSite112.DEF = "hanim_l_knee_crease_pt";
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
HAnimSite115.name = "l_suprapatella_pt";
HAnimSite115.DEF = "hanim_l_suprapatella_pt";
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
Coordinate Coordinate120 = createNode("Coordinate");
Coordinate120.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet119.coord = Coordinate120;

//from sacroiliac to r_hip vertices 2
ColorRGBA ColorRGBA121 = createNode("ColorRGBA");
ColorRGBA121.USE = "HAnimSegmentLineColorRGBA";
LineSet119.color = ColorRGBA121;

Shape118.geometry = LineSet119;

HAnimSegment98.children[6] = Shape118;

HAnimSite HAnimSite122 = createNode("HAnimSite");
HAnimSite122.name = "r_femoral_lateral_epicondyles_pt";
HAnimSite122.DEF = "hanim_r_femoral_lateral_epicondyles_pt";
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
HAnimSite125.name = "r_femoral_medial_epicondyles_pt";
HAnimSite125.DEF = "hanim_r_femoral_medial_epicondyles_pt";
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
HAnimSite128.name = "r_knee_crease_pt";
HAnimSite128.DEF = "hanim_r_knee_crease_pt";
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
HAnimSite131.name = "r_suprapatella_pt";
HAnimSite131.DEF = "hanim_r_suprapatella_pt";
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
HAnimJoint134.name = "l_hip";
HAnimJoint134.DEF = "hanim_l_hip";
HAnimJoint134.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment135 = createNode("HAnimSegment");
HAnimSegment135.name = "l_thigh";
HAnimSegment135.DEF = "hanim_l_thigh";
Transform Transform136 = createNode("Transform");
Transform136.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Transform Transform137 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate141 = createNode("Coordinate");
Coordinate141.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet140.coord = Coordinate141;

//from l_hip to l_knee vertices 2
ColorRGBA ColorRGBA142 = createNode("ColorRGBA");
ColorRGBA142.USE = "HAnimSegmentLineColorRGBA";
LineSet140.color = ColorRGBA142;

Shape139.geometry = LineSet140;

HAnimSegment135.children[1] = Shape139;

HAnimSite HAnimSite143 = createNode("HAnimSite");
HAnimSite143.name = "l_lateral_malleolus_pt";
HAnimSite143.DEF = "hanim_l_lateral_malleolus_pt";
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
HAnimSite146.name = "l_medial_malleolus_pt";
HAnimSite146.DEF = "hanim_l_medial_malleolus_pt";
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
HAnimSite149.name = "l_tibiale_pt";
HAnimSite149.DEF = "hanim_l_tibiale_pt";
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
HAnimJoint152.name = "l_knee";
HAnimJoint152.DEF = "hanim_l_knee";
HAnimJoint152.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment153 = createNode("HAnimSegment");
HAnimSegment153.name = "l_calf";
HAnimSegment153.DEF = "hanim_l_calf";
Transform Transform154 = createNode("Transform");
Transform154.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Transform Transform155 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate159 = createNode("Coordinate");
Coordinate159.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet158.coord = Coordinate159;

//from l_knee to l_talocrural vertices 2
ColorRGBA ColorRGBA160 = createNode("ColorRGBA");
ColorRGBA160.USE = "HAnimSegmentLineColorRGBA";
LineSet158.color = ColorRGBA160;

Shape157.geometry = LineSet158;

HAnimSegment153.children[1] = Shape157;

HAnimSite HAnimSite161 = createNode("HAnimSite");
HAnimSite161.name = "l_calcaneus_posterior_pt";
HAnimSite161.DEF = "hanim_l_calcaneus_posterior_pt";
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
HAnimSite164.name = "l_sphyrion_pt";
HAnimSite164.DEF = "hanim_l_sphyrion_pt";
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
HAnimJoint167.name = "l_talocrural";
HAnimJoint167.DEF = "hanim_l_talocrural";
HAnimJoint167.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment168 = createNode("HAnimSegment");
HAnimSegment168.name = "l_talus";
HAnimSegment168.DEF = "hanim_l_talus";
Transform Transform169 = createNode("Transform");
Transform169.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform169.translation = new SFVec3f(new float[0.08,0.06,-0.025]);
Transform169.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform left foot
Transform Transform170 = createNode("Transform");
//Empty Transform left foot
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
Coordinate Coordinate174 = createNode("Coordinate");
Coordinate174.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,3.4715,0.0374,0.6807]);
LineSet173.coord = Coordinate174;

//from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA ColorRGBA175 = createNode("ColorRGBA");
ColorRGBA175.USE = "HAnimSegmentLineColorRGBA";
LineSet173.color = ColorRGBA175;

Shape172.geometry = LineSet173;

HAnimSegment168.children[1] = Shape172;

Shape Shape176 = createNode("Shape");
LineSet LineSet177 = createNode("LineSet");
LineSet177.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate178 = createNode("Coordinate");
Coordinate178.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,3.9515,0.0653,-0.6895]);
LineSet177.coord = Coordinate178;

//from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA ColorRGBA179 = createNode("ColorRGBA");
ColorRGBA179.USE = "HAnimSegmentLineColorRGBA";
LineSet177.color = ColorRGBA179;

Shape176.geometry = LineSet177;

HAnimSegment168.children[2] = Shape176;

HAnimJoint167.children = new MFNode();

HAnimJoint167.children[0] = HAnimSegment168;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.name = "l_talocalcaneonavicular";
HAnimJoint180.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint180.center = new SFVec3f(new float[3.4715,0.0374,0.6807]);
HAnimSegment HAnimSegment181 = createNode("HAnimSegment");
HAnimSegment181.name = "l_navicular";
HAnimSegment181.DEF = "hanim_l_navicular";
Transform Transform182 = createNode("Transform");
Transform182.translation = new SFVec3f(new float[3.4715,0.0374,0.6807]);
Transform Transform183 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate187 = createNode("Coordinate");
Coordinate187.point = new MFVec3f(new float[3.4715,0.0374,0.6807,2.9855,0.0311,1.2819]);
LineSet186.coord = Coordinate187;

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2
ColorRGBA ColorRGBA188 = createNode("ColorRGBA");
ColorRGBA188.USE = "HAnimSegmentLineColorRGBA";
LineSet186.color = ColorRGBA188;

Shape185.geometry = LineSet186;

HAnimSegment181.children[1] = Shape185;

Shape Shape189 = createNode("Shape");
LineSet LineSet190 = createNode("LineSet");
LineSet190.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate191 = createNode("Coordinate");
Coordinate191.point = new MFVec3f(new float[3.4715,0.0374,0.6807,3.6105,0.033,1.4168]);
LineSet190.coord = Coordinate191;

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2
ColorRGBA ColorRGBA192 = createNode("ColorRGBA");
ColorRGBA192.USE = "HAnimSegmentLineColorRGBA";
LineSet190.color = ColorRGBA192;

Shape189.geometry = LineSet190;

HAnimSegment181.children[2] = Shape189;

Shape Shape193 = createNode("Shape");
LineSet LineSet194 = createNode("LineSet");
LineSet194.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate195 = createNode("Coordinate");
Coordinate195.point = new MFVec3f(new float[3.4715,0.0374,0.6807,4.1235,0.0328,1.3453]);
LineSet194.coord = Coordinate195;

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2
ColorRGBA ColorRGBA196 = createNode("ColorRGBA");
ColorRGBA196.USE = "HAnimSegmentLineColorRGBA";
LineSet194.color = ColorRGBA196;

Shape193.geometry = LineSet194;

HAnimSegment181.children[3] = Shape193;

HAnimJoint180.children = new MFNode();

HAnimJoint180.children[0] = HAnimSegment181;

HAnimJoint HAnimJoint197 = createNode("HAnimJoint");
HAnimJoint197.name = "l_cuneonavicular_1";
HAnimJoint197.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint197.center = new SFVec3f(new float[2.9855,0.0311,1.2819]);
HAnimSegment HAnimSegment198 = createNode("HAnimSegment");
HAnimSegment198.name = "l_cuneiform_1";
HAnimSegment198.DEF = "hanim_l_cuneiform_1";
Transform Transform199 = createNode("Transform");
Transform199.translation = new SFVec3f(new float[2.9855,0.0311,1.2819]);
Transform Transform200 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate204 = createNode("Coordinate");
Coordinate204.point = new MFVec3f(new float[2.9855,0.0311,1.2819,2.8635,0.0194,2.4285]);
LineSet203.coord = Coordinate204;

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2
ColorRGBA ColorRGBA205 = createNode("ColorRGBA");
ColorRGBA205.USE = "HAnimSegmentLineColorRGBA";
LineSet203.color = ColorRGBA205;

Shape202.geometry = LineSet203;

HAnimSegment198.children[1] = Shape202;

HAnimJoint197.children = new MFNode();

HAnimJoint197.children[0] = HAnimSegment198;

HAnimJoint HAnimJoint206 = createNode("HAnimJoint");
HAnimJoint206.name = "l_tarsometatarsal_1";
HAnimJoint206.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint206.center = new SFVec3f(new float[2.8635,0.0194,2.4285]);
HAnimSegment HAnimSegment207 = createNode("HAnimSegment");
HAnimSegment207.name = "l_metatarsal_1";
HAnimSegment207.DEF = "hanim_l_metatarsal_1";
Transform Transform208 = createNode("Transform");
Transform208.translation = new SFVec3f(new float[2.8635,0.0194,2.4285]);
Transform Transform209 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate213 = createNode("Coordinate");
Coordinate213.point = new MFVec3f(new float[2.8635,0.0194,2.4285,2.7525,0.0077,4.6255]);
LineSet212.coord = Coordinate213;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2
ColorRGBA ColorRGBA214 = createNode("ColorRGBA");
ColorRGBA214.USE = "HAnimSegmentLineColorRGBA";
LineSet212.color = ColorRGBA214;

Shape211.geometry = LineSet212;

HAnimSegment207.children[1] = Shape211;

HAnimSite HAnimSite215 = createNode("HAnimSite");
HAnimSite215.name = "l_metatarsal_phalanx_1_pt";
HAnimSite215.DEF = "hanim_l_metatarsal_phalanx_1_pt";
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
HAnimJoint218.name = "l_metatarsophalangeal_1";
HAnimJoint218.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint218.center = new SFVec3f(new float[2.7525,0.0077,4.6255]);
HAnimSegment HAnimSegment219 = createNode("HAnimSegment");
HAnimSegment219.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment219.DEF = "hanim_l_tarsal_proximal_phalanx_1";
Transform Transform220 = createNode("Transform");
Transform220.translation = new SFVec3f(new float[2.7525,0.0077,4.6255]);
Transform Transform221 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate225 = createNode("Coordinate");
Coordinate225.point = new MFVec3f(new float[2.7525,0.0077,4.6255,2.7525,0.0077,4.6255]);
LineSet224.coord = Coordinate225;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA226 = createNode("ColorRGBA");
ColorRGBA226.USE = "HAnimSegmentLineColorRGBA";
LineSet224.color = ColorRGBA226;

Shape223.geometry = LineSet224;

HAnimSegment219.children[1] = Shape223;

HAnimSite HAnimSite227 = createNode("HAnimSite");
HAnimSite227.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite227.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
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
HAnimJoint230.name = "l_tarsal_interphalangeal_1";
HAnimJoint230.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint218.children[1] = HAnimJoint230;

HAnimJoint206.children[1] = HAnimJoint218;

HAnimJoint197.children[1] = HAnimJoint206;

HAnimJoint180.children[1] = HAnimJoint197;

HAnimJoint HAnimJoint231 = createNode("HAnimJoint");
HAnimJoint231.name = "l_cuneonavicular_2";
HAnimJoint231.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint231.center = new SFVec3f(new float[3.6105,0.033,1.4168]);
HAnimSegment HAnimSegment232 = createNode("HAnimSegment");
HAnimSegment232.name = "l_cuneiform_2";
HAnimSegment232.DEF = "hanim_l_cuneiform_2";
Transform Transform233 = createNode("Transform");
Transform233.translation = new SFVec3f(new float[3.6105,0.033,1.4168]);
Transform Transform234 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate238 = createNode("Coordinate");
Coordinate238.point = new MFVec3f(new float[3.6105,0.033,1.4168,3.5555,0.0232,2.2895]);
LineSet237.coord = Coordinate238;

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2
ColorRGBA ColorRGBA239 = createNode("ColorRGBA");
ColorRGBA239.USE = "HAnimSegmentLineColorRGBA";
LineSet237.color = ColorRGBA239;

Shape236.geometry = LineSet237;

HAnimSegment232.children[1] = Shape236;

HAnimJoint231.children = new MFNode();

HAnimJoint231.children[0] = HAnimSegment232;

HAnimJoint HAnimJoint240 = createNode("HAnimJoint");
HAnimJoint240.name = "l_tarsometatarsal_2";
HAnimJoint240.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint240.center = new SFVec3f(new float[3.5555,0.0232,2.2895]);
HAnimSegment HAnimSegment241 = createNode("HAnimSegment");
HAnimSegment241.name = "l_metatarsal_2";
HAnimSegment241.DEF = "hanim_l_metatarsal_2";
Transform Transform242 = createNode("Transform");
Transform242.translation = new SFVec3f(new float[3.5555,0.0232,2.2895]);
Transform Transform243 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate247 = createNode("Coordinate");
Coordinate247.point = new MFVec3f(new float[3.5555,0.0232,2.2895,3.6595,0.0085,4.8125]);
LineSet246.coord = Coordinate247;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA248 = createNode("ColorRGBA");
ColorRGBA248.USE = "HAnimSegmentLineColorRGBA";
LineSet246.color = ColorRGBA248;

Shape245.geometry = LineSet246;

HAnimSegment241.children[1] = Shape245;

HAnimJoint240.children = new MFNode();

HAnimJoint240.children[0] = HAnimSegment241;

HAnimJoint HAnimJoint249 = createNode("HAnimJoint");
HAnimJoint249.name = "l_metatarsophalangeal_2";
HAnimJoint249.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint249.center = new SFVec3f(new float[3.6595,0.0085,4.8125]);
HAnimSegment HAnimSegment250 = createNode("HAnimSegment");
HAnimSegment250.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment250.DEF = "hanim_l_tarsal_proximal_phalanx_2";
Transform Transform251 = createNode("Transform");
Transform251.translation = new SFVec3f(new float[3.6595,0.0085,4.8125]);
Transform Transform252 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate256 = createNode("Coordinate");
Coordinate256.point = new MFVec3f(new float[3.6595,0.0085,4.8125,3.7385,0.0054,5.5315]);
LineSet255.coord = Coordinate256;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA257 = createNode("ColorRGBA");
ColorRGBA257.USE = "HAnimSegmentLineColorRGBA";
LineSet255.color = ColorRGBA257;

Shape254.geometry = LineSet255;

HAnimSegment250.children[1] = Shape254;

HAnimJoint249.children = new MFNode();

HAnimJoint249.children[0] = HAnimSegment250;

HAnimJoint HAnimJoint258 = createNode("HAnimJoint");
HAnimJoint258.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint258.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint258.center = new SFVec3f(new float[3.7385,0.0054,5.5315]);
HAnimSegment HAnimSegment259 = createNode("HAnimSegment");
HAnimSegment259.name = "l_tarsal_middle_phalanx_2";
HAnimSegment259.DEF = "hanim_l_tarsal_middle_phalanx_2";
Transform Transform260 = createNode("Transform");
Transform260.translation = new SFVec3f(new float[3.7385,0.0054,5.5315]);
Transform Transform261 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate265 = createNode("Coordinate");
Coordinate265.point = new MFVec3f(new float[3.7385,0.0054,5.5315,3.7385,0.0017,5.9505]);
LineSet264.coord = Coordinate265;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA266 = createNode("ColorRGBA");
ColorRGBA266.USE = "HAnimSegmentLineColorRGBA";
LineSet264.color = ColorRGBA266;

Shape263.geometry = LineSet264;

HAnimSegment259.children[1] = Shape263;

HAnimSite HAnimSite267 = createNode("HAnimSite");
HAnimSite267.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite267.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
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
HAnimJoint270.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint270.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint270.center = new SFVec3f(new float[3.7385,0.0017,5.9505]);
HAnimJoint258.children[1] = HAnimJoint270;

HAnimJoint249.children[1] = HAnimJoint258;

HAnimJoint240.children[1] = HAnimJoint249;

HAnimJoint231.children[1] = HAnimJoint240;

HAnimJoint180.children[2] = HAnimJoint231;

HAnimJoint HAnimJoint271 = createNode("HAnimJoint");
HAnimJoint271.name = "l_cuneonavicular_3";
HAnimJoint271.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint271.center = new SFVec3f(new float[4.1235,0.0328,1.3453]);
HAnimSegment HAnimSegment272 = createNode("HAnimSegment");
HAnimSegment272.name = "l_cuneiform_3";
HAnimSegment272.DEF = "hanim_l_cuneiform_3";
Transform Transform273 = createNode("Transform");
Transform273.translation = new SFVec3f(new float[4.1235,0.0328,1.3453]);
Transform Transform274 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate278 = createNode("Coordinate");
Coordinate278.point = new MFVec3f(new float[4.1235,0.0328,1.3453,3.7385,0.0017,5.9505]);
LineSet277.coord = Coordinate278;

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2
ColorRGBA ColorRGBA279 = createNode("ColorRGBA");
ColorRGBA279.USE = "HAnimSegmentLineColorRGBA";
LineSet277.color = ColorRGBA279;

Shape276.geometry = LineSet277;

HAnimSegment272.children[1] = Shape276;

HAnimJoint271.children = new MFNode();

HAnimJoint271.children[0] = HAnimSegment272;

HAnimJoint HAnimJoint280 = createNode("HAnimJoint");
HAnimJoint280.name = "l_tarsometatarsal_3";
HAnimJoint280.DEF = "hanim_l_tarsometatarsal_3";
HAnimSegment HAnimSegment281 = createNode("HAnimSegment");
HAnimSegment281.name = "l_metatarsal_3";
HAnimSegment281.DEF = "hanim_l_metatarsal_3";
Transform Transform282 = createNode("Transform");
Transform282.translation = new SFVec3f(new float[4.1235,0.0328,1.3453]);
Transform Transform283 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate287 = createNode("Coordinate");
Coordinate287.point = new MFVec3f(new float[4.2795,0.0086,4.7055]);
LineSet286.coord = Coordinate287;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1
ColorRGBA ColorRGBA288 = createNode("ColorRGBA");
ColorRGBA288.USE = "HAnimSegmentLineColorRGBA";
LineSet286.color = ColorRGBA288;

Shape285.geometry = LineSet286;

HAnimSegment281.children[1] = Shape285;

HAnimJoint280.children = new MFNode();

HAnimJoint280.children[0] = HAnimSegment281;

HAnimJoint HAnimJoint289 = createNode("HAnimJoint");
HAnimJoint289.name = "l_metatarsophalangeal_3";
HAnimJoint289.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint289.center = new SFVec3f(new float[4.2795,0.0086,4.7055]);
HAnimSegment HAnimSegment290 = createNode("HAnimSegment");
HAnimSegment290.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment290.DEF = "hanim_l_tarsal_proximal_phalanx_3";
Transform Transform291 = createNode("Transform");
Transform291.translation = new SFVec3f(new float[4.2795,0.0086,4.7055]);
Transform Transform292 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate296 = createNode("Coordinate");
Coordinate296.point = new MFVec3f(new float[4.2795,0.0086,4.7055,4.3855,0.0044,5.3745]);
LineSet295.coord = Coordinate296;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA297 = createNode("ColorRGBA");
ColorRGBA297.USE = "HAnimSegmentLineColorRGBA";
LineSet295.color = ColorRGBA297;

Shape294.geometry = LineSet295;

HAnimSegment290.children[1] = Shape294;

HAnimJoint289.children = new MFNode();

HAnimJoint289.children[0] = HAnimSegment290;

HAnimJoint HAnimJoint298 = createNode("HAnimJoint");
HAnimJoint298.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint298.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint298.center = new SFVec3f(new float[4.3855,0.0044,5.3745]);
HAnimSegment HAnimSegment299 = createNode("HAnimSegment");
HAnimSegment299.name = "l_tarsal_middle_phalanx_3";
HAnimSegment299.DEF = "hanim_l_tarsal_middle_phalanx_3";
Transform Transform300 = createNode("Transform");
Transform300.translation = new SFVec3f(new float[4.3855,0.0044,5.3745]);
Transform Transform301 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate305 = createNode("Coordinate");
Coordinate305.point = new MFVec3f(new float[4.3855,0.0044,5.3745,4.4545,0.0017,5.7845]);
LineSet304.coord = Coordinate305;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA306 = createNode("ColorRGBA");
ColorRGBA306.USE = "HAnimSegmentLineColorRGBA";
LineSet304.color = ColorRGBA306;

Shape303.geometry = LineSet304;

HAnimSegment299.children[1] = Shape303;

HAnimSite HAnimSite307 = createNode("HAnimSite");
HAnimSite307.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite307.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
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
HAnimJoint310.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint310.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint310.center = new SFVec3f(new float[4.4545,0.0017,5.7845]);
HAnimJoint298.children[1] = HAnimJoint310;

HAnimJoint289.children[1] = HAnimJoint298;

HAnimJoint280.children[1] = HAnimJoint289;

HAnimJoint271.children[1] = HAnimJoint280;

HAnimJoint180.children[3] = HAnimJoint271;

HAnimJoint167.children[1] = HAnimJoint180;

HAnimJoint HAnimJoint311 = createNode("HAnimJoint");
HAnimJoint311.name = "l_calcaneocuboid";
HAnimJoint311.DEF = "hanim_l_calcaneocuboid";
HAnimJoint311.center = new SFVec3f(new float[3.9515,0.0653,-0.6895]);
HAnimSegment HAnimSegment312 = createNode("HAnimSegment");
HAnimSegment312.name = "l_calcaneus";
HAnimSegment312.DEF = "hanim_l_calcaneus";
Transform Transform313 = createNode("Transform");
Transform313.translation = new SFVec3f(new float[3.9515,0.0653,-0.6895]);
Transform Transform314 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate318 = createNode("Coordinate");
Coordinate318.point = new MFVec3f(new float[3.9515,0.0653,-0.6895,4.9085,0.0353,0.5574]);
LineSet317.coord = Coordinate318;

//from l_calcaneocuboid to l_transversetarsal vertices 2
ColorRGBA ColorRGBA319 = createNode("ColorRGBA");
ColorRGBA319.USE = "HAnimSegmentLineColorRGBA";
LineSet317.color = ColorRGBA319;

Shape316.geometry = LineSet317;

HAnimSegment312.children[1] = Shape316;

HAnimJoint311.children = new MFNode();

HAnimJoint311.children[0] = HAnimSegment312;

HAnimJoint HAnimJoint320 = createNode("HAnimJoint");
HAnimJoint320.name = "l_transversetarsal";
HAnimJoint320.DEF = "hanim_l_transversetarsal";
HAnimJoint320.center = new SFVec3f(new float[4.9085,0.0353,0.5574]);
HAnimSegment HAnimSegment321 = createNode("HAnimSegment");
HAnimSegment321.name = "l_cuboid";
HAnimSegment321.DEF = "hanim_l_cuboid";
Transform Transform322 = createNode("Transform");
Transform322.translation = new SFVec3f(new float[4.9085,0.0353,0.5574]);
Transform Transform323 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate327 = createNode("Coordinate");
Coordinate327.point = new MFVec3f(new float[4.9085,0.0353,0.5574,4.7245,0.0211,2.1725]);
LineSet326.coord = Coordinate327;

//from l_transversetarsal to l_tarsometatarsal_4 vertices 2
ColorRGBA ColorRGBA328 = createNode("ColorRGBA");
ColorRGBA328.USE = "HAnimSegmentLineColorRGBA";
LineSet326.color = ColorRGBA328;

Shape325.geometry = LineSet326;

HAnimSegment321.children[1] = Shape325;

Shape Shape329 = createNode("Shape");
LineSet LineSet330 = createNode("LineSet");
LineSet330.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate331 = createNode("Coordinate");
Coordinate331.point = new MFVec3f(new float[4.9085,0.0353,0.5574,5.3615,0.0164,2.0085]);
LineSet330.coord = Coordinate331;

//from l_transversetarsal to l_tarsometatarsal_5 vertices 2
ColorRGBA ColorRGBA332 = createNode("ColorRGBA");
ColorRGBA332.USE = "HAnimSegmentLineColorRGBA";
LineSet330.color = ColorRGBA332;

Shape329.geometry = LineSet330;

HAnimSegment321.children[2] = Shape329;

HAnimJoint320.children = new MFNode();

HAnimJoint320.children[0] = HAnimSegment321;

HAnimJoint HAnimJoint333 = createNode("HAnimJoint");
HAnimJoint333.name = "l_tarsometatarsal_4";
HAnimJoint333.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint333.center = new SFVec3f(new float[4.7245,0.0211,2.1725]);
HAnimSegment HAnimSegment334 = createNode("HAnimSegment");
HAnimSegment334.name = "l_metatarsal_4";
HAnimSegment334.DEF = "hanim_l_metatarsal_4";
Transform Transform335 = createNode("Transform");
Transform335.translation = new SFVec3f(new float[4.7245,0.0211,2.1725]);
Transform Transform336 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate340 = createNode("Coordinate");
Coordinate340.point = new MFVec3f(new float[4.7245,0.0211,2.1725,4.8745,0.0076,4.5165]);
LineSet339.coord = Coordinate340;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2
ColorRGBA ColorRGBA341 = createNode("ColorRGBA");
ColorRGBA341.USE = "HAnimSegmentLineColorRGBA";
LineSet339.color = ColorRGBA341;

Shape338.geometry = LineSet339;

HAnimSegment334.children[1] = Shape338;

HAnimJoint333.children = new MFNode();

HAnimJoint333.children[0] = HAnimSegment334;

HAnimJoint HAnimJoint342 = createNode("HAnimJoint");
HAnimJoint342.name = "l_metatarsophalangeal_4";
HAnimJoint342.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint342.center = new SFVec3f(new float[4.8745,0.0076,4.5165]);
HAnimSegment HAnimSegment343 = createNode("HAnimSegment");
HAnimSegment343.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment343.DEF = "hanim_l_tarsal_proximal_phalanx_4";
Transform Transform344 = createNode("Transform");
Transform344.translation = new SFVec3f(new float[4.8745,0.0076,4.5165]);
Transform Transform345 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate349 = createNode("Coordinate");
Coordinate349.point = new MFVec3f(new float[4.8745,0.0076,4.5165,5.0655,0.0049,5.1895]);
LineSet348.coord = Coordinate349;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA350 = createNode("ColorRGBA");
ColorRGBA350.USE = "HAnimSegmentLineColorRGBA";
LineSet348.color = ColorRGBA350;

Shape347.geometry = LineSet348;

HAnimSegment343.children[1] = Shape347;

HAnimJoint342.children = new MFNode();

HAnimJoint342.children[0] = HAnimSegment343;

HAnimJoint HAnimJoint351 = createNode("HAnimJoint");
HAnimJoint351.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint351.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint351.center = new SFVec3f(new float[5.0655,0.0049,5.1895]);
HAnimSegment HAnimSegment352 = createNode("HAnimSegment");
HAnimSegment352.name = "l_tarsal_middle_phalanx_4";
HAnimSegment352.DEF = "hanim_l_tarsal_middle_phalanx_4";
Transform Transform353 = createNode("Transform");
Transform353.translation = new SFVec3f(new float[5.0655,0.0049,5.1895]);
Transform Transform354 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate358 = createNode("Coordinate");
Coordinate358.point = new MFVec3f(new float[5.0655,0.0049,5.1895,5.1325,0.0011,5.5175]);
LineSet357.coord = Coordinate358;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA359 = createNode("ColorRGBA");
ColorRGBA359.USE = "HAnimSegmentLineColorRGBA";
LineSet357.color = ColorRGBA359;

Shape356.geometry = LineSet357;

HAnimSegment352.children[1] = Shape356;

HAnimSite HAnimSite360 = createNode("HAnimSite");
HAnimSite360.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite360.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
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
HAnimJoint363.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint363.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint363.center = new SFVec3f(new float[5.1325,0.0011,5.5175]);
HAnimJoint351.children[1] = HAnimJoint363;

HAnimJoint342.children[1] = HAnimJoint351;

HAnimJoint333.children[1] = HAnimJoint342;

HAnimJoint320.children[1] = HAnimJoint333;

HAnimJoint HAnimJoint364 = createNode("HAnimJoint");
HAnimJoint364.name = "l_tarsometatarsal_5";
HAnimJoint364.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint364.center = new SFVec3f(new float[5.3615,0.0164,2.0085]);
HAnimSegment HAnimSegment365 = createNode("HAnimSegment");
HAnimSegment365.name = "l_metatarsal_5";
HAnimSegment365.DEF = "hanim_l_metatarsal_5";
Transform Transform366 = createNode("Transform");
Transform366.translation = new SFVec3f(new float[5.3615,0.0164,2.0085]);
Transform Transform367 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate371 = createNode("Coordinate");
Coordinate371.point = new MFVec3f(new float[5.3615,0.0164,2.0085,5.5055,0.0067,4.3115]);
LineSet370.coord = Coordinate371;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2
ColorRGBA ColorRGBA372 = createNode("ColorRGBA");
ColorRGBA372.USE = "HAnimSegmentLineColorRGBA";
LineSet370.color = ColorRGBA372;

Shape369.geometry = LineSet370;

HAnimSegment365.children[1] = Shape369;

HAnimSite HAnimSite373 = createNode("HAnimSite");
HAnimSite373.name = "l_metatarsal_phalanx_5_pt";
HAnimSite373.DEF = "hanim_l_metatarsal_phalanx_5_pt";
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
HAnimJoint376.name = "l_metatarsophalangeal_5";
HAnimJoint376.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint376.center = new SFVec3f(new float[5.5055,0.0067,4.3115]);
HAnimSegment HAnimSegment377 = createNode("HAnimSegment");
HAnimSegment377.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment377.DEF = "hanim_l_tarsal_proximal_phalanx_5";
Transform Transform378 = createNode("Transform");
Transform378.translation = new SFVec3f(new float[5.5055,0.0067,4.3115]);
Transform Transform379 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate383 = createNode("Coordinate");
Coordinate383.point = new MFVec3f(new float[5.5055,0.0067,4.3115,5.6085,0.003,4.6485]);
LineSet382.coord = Coordinate383;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA384 = createNode("ColorRGBA");
ColorRGBA384.USE = "HAnimSegmentLineColorRGBA";
LineSet382.color = ColorRGBA384;

Shape381.geometry = LineSet382;

HAnimSegment377.children[1] = Shape381;

HAnimJoint376.children = new MFNode();

HAnimJoint376.children[0] = HAnimSegment377;

HAnimJoint HAnimJoint385 = createNode("HAnimJoint");
HAnimJoint385.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint385.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint385.center = new SFVec3f(new float[5.6085,0.003,4.6485]);
HAnimSegment HAnimSegment386 = createNode("HAnimSegment");
HAnimSegment386.name = "l_tarsal_middle_phalanx_5";
HAnimSegment386.DEF = "hanim_l_tarsal_middle_phalanx_5";
Transform Transform387 = createNode("Transform");
Transform387.translation = new SFVec3f(new float[5.6085,0.003,4.6485]);
Transform Transform388 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate392 = createNode("Coordinate");
Coordinate392.point = new MFVec3f(new float[5.6085,0.003,4.6485,5.6485,0,4.9925]);
LineSet391.coord = Coordinate392;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA393 = createNode("ColorRGBA");
ColorRGBA393.USE = "HAnimSegmentLineColorRGBA";
LineSet391.color = ColorRGBA393;

Shape390.geometry = LineSet391;

HAnimSegment386.children[1] = Shape390;

HAnimSite HAnimSite394 = createNode("HAnimSite");
HAnimSite394.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite394.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
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
HAnimJoint397.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint397.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint397.center = new SFVec3f(new float[5.6485,0,4.9925]);
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
HAnimJoint398.name = "r_hip";
HAnimJoint398.DEF = "hanim_r_hip";
HAnimJoint398.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimSegment HAnimSegment399 = createNode("HAnimSegment");
HAnimSegment399.name = "r_thigh";
HAnimSegment399.DEF = "hanim_r_thigh";
Transform Transform400 = createNode("Transform");
Transform400.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Transform Transform401 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate405 = createNode("Coordinate");
Coordinate405.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet404.coord = Coordinate405;

//from r_hip to r_knee vertices 2
ColorRGBA ColorRGBA406 = createNode("ColorRGBA");
ColorRGBA406.USE = "HAnimSegmentLineColorRGBA";
LineSet404.color = ColorRGBA406;

Shape403.geometry = LineSet404;

HAnimSegment399.children[1] = Shape403;

HAnimSite HAnimSite407 = createNode("HAnimSite");
HAnimSite407.name = "r_lateral_malleolus_pt";
HAnimSite407.DEF = "hanim_r_lateral_malleolus_pt";
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
HAnimSite410.name = "r_medial_malleolus_pt";
HAnimSite410.DEF = "hanim_r_medial_malleolus_pt";
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
HAnimSite413.name = "r_tibiale_pt";
HAnimSite413.DEF = "hanim_r_tibiale_pt";
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
HAnimJoint416.name = "r_knee";
HAnimJoint416.DEF = "hanim_r_knee";
HAnimJoint416.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimSegment HAnimSegment417 = createNode("HAnimSegment");
HAnimSegment417.name = "r_calf";
HAnimSegment417.DEF = "hanim_r_calf";
Transform Transform418 = createNode("Transform");
Transform418.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Transform Transform419 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate423 = createNode("Coordinate");
Coordinate423.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet422.coord = Coordinate423;

//from r_knee to r_talocrural vertices 2
ColorRGBA ColorRGBA424 = createNode("ColorRGBA");
ColorRGBA424.USE = "HAnimSegmentLineColorRGBA";
LineSet422.color = ColorRGBA424;

Shape421.geometry = LineSet422;

HAnimSegment417.children[1] = Shape421;

HAnimSite HAnimSite425 = createNode("HAnimSite");
HAnimSite425.name = "r_calcaneus_posterior_pt";
HAnimSite425.DEF = "hanim_r_calcaneus_posterior_pt";
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
HAnimSite428.name = "r_sphyrion_pt";
HAnimSite428.DEF = "hanim_r_sphyrion_pt";
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
HAnimJoint431.name = "r_talocrural";
HAnimJoint431.DEF = "hanim_r_talocrural";
HAnimJoint431.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimSegment HAnimSegment432 = createNode("HAnimSegment");
HAnimSegment432.name = "r_talus";
HAnimSegment432.DEF = "hanim_r_talus";
Transform Transform433 = createNode("Transform");
Transform433.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform433.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform433.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
Transform Transform434 = createNode("Transform");
//Empty Transform right foot
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
Coordinate Coordinate438 = createNode("Coordinate");
Coordinate438.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-3.4725,0.0374,0.6807]);
LineSet437.coord = Coordinate438;

//from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA ColorRGBA439 = createNode("ColorRGBA");
ColorRGBA439.USE = "HAnimSegmentLineColorRGBA";
LineSet437.color = ColorRGBA439;

Shape436.geometry = LineSet437;

HAnimSegment432.children[1] = Shape436;

Shape Shape440 = createNode("Shape");
LineSet LineSet441 = createNode("LineSet");
LineSet441.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate442 = createNode("Coordinate");
Coordinate442.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-3.9515,0.0653,-0.6895]);
LineSet441.coord = Coordinate442;

//from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA ColorRGBA443 = createNode("ColorRGBA");
ColorRGBA443.USE = "HAnimSegmentLineColorRGBA";
LineSet441.color = ColorRGBA443;

Shape440.geometry = LineSet441;

HAnimSegment432.children[2] = Shape440;

HAnimJoint431.children = new MFNode();

HAnimJoint431.children[0] = HAnimSegment432;

HAnimJoint HAnimJoint444 = createNode("HAnimJoint");
HAnimJoint444.name = "r_talocalcaneonavicular";
HAnimJoint444.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint444.center = new SFVec3f(new float[-3.4725,0.0374,0.6807]);
HAnimSegment HAnimSegment445 = createNode("HAnimSegment");
HAnimSegment445.name = "r_navicular";
HAnimSegment445.DEF = "hanim_r_navicular";
Transform Transform446 = createNode("Transform");
Transform446.translation = new SFVec3f(new float[-3.4725,0.0374,0.6807]);
Transform Transform447 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate451 = createNode("Coordinate");
Coordinate451.point = new MFVec3f(new float[-3.4725,0.0374,0.6807,-2.9855,0.0311,1.2819]);
LineSet450.coord = Coordinate451;

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2
ColorRGBA ColorRGBA452 = createNode("ColorRGBA");
ColorRGBA452.USE = "HAnimSegmentLineColorRGBA";
LineSet450.color = ColorRGBA452;

Shape449.geometry = LineSet450;

HAnimSegment445.children[1] = Shape449;

Shape Shape453 = createNode("Shape");
LineSet LineSet454 = createNode("LineSet");
LineSet454.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate455 = createNode("Coordinate");
Coordinate455.point = new MFVec3f(new float[-3.4725,0.0374,0.6807,-3.6105,0.033,1.4168]);
LineSet454.coord = Coordinate455;

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2
ColorRGBA ColorRGBA456 = createNode("ColorRGBA");
ColorRGBA456.USE = "HAnimSegmentLineColorRGBA";
LineSet454.color = ColorRGBA456;

Shape453.geometry = LineSet454;

HAnimSegment445.children[2] = Shape453;

Shape Shape457 = createNode("Shape");
LineSet LineSet458 = createNode("LineSet");
LineSet458.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate459 = createNode("Coordinate");
Coordinate459.point = new MFVec3f(new float[-3.4725,0.0374,0.6807,-4.1245,0.0328,1.3453]);
LineSet458.coord = Coordinate459;

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2
ColorRGBA ColorRGBA460 = createNode("ColorRGBA");
ColorRGBA460.USE = "HAnimSegmentLineColorRGBA";
LineSet458.color = ColorRGBA460;

Shape457.geometry = LineSet458;

HAnimSegment445.children[3] = Shape457;

HAnimJoint444.children = new MFNode();

HAnimJoint444.children[0] = HAnimSegment445;

HAnimJoint HAnimJoint461 = createNode("HAnimJoint");
HAnimJoint461.name = "r_cuneonavicular_1";
HAnimJoint461.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint461.center = new SFVec3f(new float[-2.9855,0.0311,1.2819]);
HAnimSegment HAnimSegment462 = createNode("HAnimSegment");
HAnimSegment462.name = "r_cuneiform_1";
HAnimSegment462.DEF = "hanim_r_cuneiform_1";
Transform Transform463 = createNode("Transform");
Transform463.translation = new SFVec3f(new float[-2.9855,0.0311,1.2819]);
Transform Transform464 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate468 = createNode("Coordinate");
Coordinate468.point = new MFVec3f(new float[-2.9855,0.0311,1.2819,-2.8645,0.0194,2.4285]);
LineSet467.coord = Coordinate468;

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2
ColorRGBA ColorRGBA469 = createNode("ColorRGBA");
ColorRGBA469.USE = "HAnimSegmentLineColorRGBA";
LineSet467.color = ColorRGBA469;

Shape466.geometry = LineSet467;

HAnimSegment462.children[1] = Shape466;

HAnimJoint461.children = new MFNode();

HAnimJoint461.children[0] = HAnimSegment462;

HAnimJoint HAnimJoint470 = createNode("HAnimJoint");
HAnimJoint470.name = "r_tarsometatarsal_1";
HAnimJoint470.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint470.center = new SFVec3f(new float[-2.8645,0.0194,2.4285]);
HAnimSegment HAnimSegment471 = createNode("HAnimSegment");
HAnimSegment471.name = "r_metatarsal_1";
HAnimSegment471.DEF = "hanim_r_metatarsal_1";
Transform Transform472 = createNode("Transform");
Transform472.translation = new SFVec3f(new float[-2.8645,0.0194,2.4285]);
Transform Transform473 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate477 = createNode("Coordinate");
Coordinate477.point = new MFVec3f(new float[-2.8645,0.0194,2.4285,-2.7535,0.0077,4.6255]);
LineSet476.coord = Coordinate477;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2
ColorRGBA ColorRGBA478 = createNode("ColorRGBA");
ColorRGBA478.USE = "HAnimSegmentLineColorRGBA";
LineSet476.color = ColorRGBA478;

Shape475.geometry = LineSet476;

HAnimSegment471.children[1] = Shape475;

HAnimSite HAnimSite479 = createNode("HAnimSite");
HAnimSite479.name = "r_metatarsal_phalanx_1_pt";
HAnimSite479.DEF = "hanim_r_metatarsal_phalanx_1_pt";
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
HAnimJoint482.name = "r_metatarsophalangeal_1";
HAnimJoint482.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint482.center = new SFVec3f(new float[-2.7535,0.0077,4.6255]);
HAnimSegment HAnimSegment483 = createNode("HAnimSegment");
HAnimSegment483.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment483.DEF = "hanim_r_tarsal_proximal_phalanx_1";
Transform Transform484 = createNode("Transform");
Transform484.translation = new SFVec3f(new float[-2.7535,0.0077,4.6255]);
Transform Transform485 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate489 = createNode("Coordinate");
Coordinate489.point = new MFVec3f(new float[-2.7535,0.0077,4.6255,-2.7535,0.0077,4.6255]);
LineSet488.coord = Coordinate489;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA490 = createNode("ColorRGBA");
ColorRGBA490.USE = "HAnimSegmentLineColorRGBA";
LineSet488.color = ColorRGBA490;

Shape487.geometry = LineSet488;

HAnimSegment483.children[1] = Shape487;

HAnimSite HAnimSite491 = createNode("HAnimSite");
HAnimSite491.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite491.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
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
HAnimJoint494.name = "r_tarsal_interphalangeal_1";
HAnimJoint494.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint482.children[1] = HAnimJoint494;

HAnimJoint470.children[1] = HAnimJoint482;

HAnimJoint461.children[1] = HAnimJoint470;

HAnimJoint444.children[1] = HAnimJoint461;

HAnimJoint HAnimJoint495 = createNode("HAnimJoint");
HAnimJoint495.name = "r_cuneonavicular_2";
HAnimJoint495.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint495.center = new SFVec3f(new float[-3.6105,0.033,1.4168]);
HAnimSegment HAnimSegment496 = createNode("HAnimSegment");
HAnimSegment496.name = "r_cuneiform_2";
HAnimSegment496.DEF = "hanim_r_cuneiform_2";
Transform Transform497 = createNode("Transform");
Transform497.translation = new SFVec3f(new float[-3.6105,0.033,1.4168]);
Transform Transform498 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate502 = createNode("Coordinate");
Coordinate502.point = new MFVec3f(new float[-3.6105,0.033,1.4168,-3.5565,0.0232,2.2895]);
LineSet501.coord = Coordinate502;

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2
ColorRGBA ColorRGBA503 = createNode("ColorRGBA");
ColorRGBA503.USE = "HAnimSegmentLineColorRGBA";
LineSet501.color = ColorRGBA503;

Shape500.geometry = LineSet501;

HAnimSegment496.children[1] = Shape500;

HAnimJoint495.children = new MFNode();

HAnimJoint495.children[0] = HAnimSegment496;

HAnimJoint HAnimJoint504 = createNode("HAnimJoint");
HAnimJoint504.name = "r_tarsometatarsal_2";
HAnimJoint504.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint504.center = new SFVec3f(new float[-3.5565,0.0232,2.2895]);
HAnimSegment HAnimSegment505 = createNode("HAnimSegment");
HAnimSegment505.name = "r_metatarsal_2";
HAnimSegment505.DEF = "hanim_r_metatarsal_2";
Transform Transform506 = createNode("Transform");
Transform506.translation = new SFVec3f(new float[-3.5565,0.0232,2.2895]);
Transform Transform507 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate511 = createNode("Coordinate");
Coordinate511.point = new MFVec3f(new float[-3.5565,0.0232,2.2895,-3.6595,0.0085,4.8125]);
LineSet510.coord = Coordinate511;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2
ColorRGBA ColorRGBA512 = createNode("ColorRGBA");
ColorRGBA512.USE = "HAnimSegmentLineColorRGBA";
LineSet510.color = ColorRGBA512;

Shape509.geometry = LineSet510;

HAnimSegment505.children[1] = Shape509;

HAnimJoint504.children = new MFNode();

HAnimJoint504.children[0] = HAnimSegment505;

HAnimJoint HAnimJoint513 = createNode("HAnimJoint");
HAnimJoint513.name = "r_metatarsophalangeal_2";
HAnimJoint513.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint513.center = new SFVec3f(new float[-3.6595,0.0085,4.8125]);
HAnimSegment HAnimSegment514 = createNode("HAnimSegment");
HAnimSegment514.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment514.DEF = "hanim_r_tarsal_proximal_phalanx_2";
Transform Transform515 = createNode("Transform");
Transform515.translation = new SFVec3f(new float[-3.6595,0.0085,4.8125]);
Transform Transform516 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate520 = createNode("Coordinate");
Coordinate520.point = new MFVec3f(new float[-3.6595,0.0085,4.8125,-3.7385,0.0054,5.5315]);
LineSet519.coord = Coordinate520;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA521 = createNode("ColorRGBA");
ColorRGBA521.USE = "HAnimSegmentLineColorRGBA";
LineSet519.color = ColorRGBA521;

Shape518.geometry = LineSet519;

HAnimSegment514.children[1] = Shape518;

HAnimJoint513.children = new MFNode();

HAnimJoint513.children[0] = HAnimSegment514;

HAnimJoint HAnimJoint522 = createNode("HAnimJoint");
HAnimJoint522.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint522.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint522.center = new SFVec3f(new float[-3.7385,0.0054,5.5315]);
HAnimSegment HAnimSegment523 = createNode("HAnimSegment");
HAnimSegment523.name = "r_tarsal_middle_phalanx_2";
HAnimSegment523.DEF = "hanim_r_tarsal_middle_phalanx_2";
Transform Transform524 = createNode("Transform");
Transform524.translation = new SFVec3f(new float[-3.7385,0.0054,5.5315]);
Transform Transform525 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate529 = createNode("Coordinate");
Coordinate529.point = new MFVec3f(new float[-3.7385,0.0054,5.5315,-3.7385,0.0017,5.9505]);
LineSet528.coord = Coordinate529;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA530 = createNode("ColorRGBA");
ColorRGBA530.USE = "HAnimSegmentLineColorRGBA";
LineSet528.color = ColorRGBA530;

Shape527.geometry = LineSet528;

HAnimSegment523.children[1] = Shape527;

HAnimSite HAnimSite531 = createNode("HAnimSite");
HAnimSite531.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite531.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite531.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
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
HAnimJoint534.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint534.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint534.center = new SFVec3f(new float[-3.7385,0.0017,5.9505]);
HAnimJoint522.children[1] = HAnimJoint534;

HAnimJoint513.children[1] = HAnimJoint522;

HAnimJoint504.children[1] = HAnimJoint513;

HAnimJoint495.children[1] = HAnimJoint504;

HAnimJoint444.children[2] = HAnimJoint495;

HAnimJoint HAnimJoint535 = createNode("HAnimJoint");
HAnimJoint535.name = "r_cuneonavicular_3";
HAnimJoint535.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint535.center = new SFVec3f(new float[-4.1245,0.0328,1.3453]);
HAnimSegment HAnimSegment536 = createNode("HAnimSegment");
HAnimSegment536.name = "r_cuneiform_3";
HAnimSegment536.DEF = "hanim_r_cuneiform_3";
Transform Transform537 = createNode("Transform");
Transform537.translation = new SFVec3f(new float[-4.1245,0.0328,1.3453]);
Transform Transform538 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate542 = createNode("Coordinate");
Coordinate542.point = new MFVec3f(new float[-4.1245,0.0328,1.3453,-3.7385,0.0017,5.9505]);
LineSet541.coord = Coordinate542;

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2
ColorRGBA ColorRGBA543 = createNode("ColorRGBA");
ColorRGBA543.USE = "HAnimSegmentLineColorRGBA";
LineSet541.color = ColorRGBA543;

Shape540.geometry = LineSet541;

HAnimSegment536.children[1] = Shape540;

HAnimJoint535.children = new MFNode();

HAnimJoint535.children[0] = HAnimSegment536;

HAnimJoint HAnimJoint544 = createNode("HAnimJoint");
HAnimJoint544.name = "r_tarsometatarsal_3";
HAnimJoint544.DEF = "hanim_r_tarsometatarsal_3";
HAnimSegment HAnimSegment545 = createNode("HAnimSegment");
HAnimSegment545.name = "r_metatarsal_3";
HAnimSegment545.DEF = "hanim_r_metatarsal_3";
Transform Transform546 = createNode("Transform");
Transform546.translation = new SFVec3f(new float[-4.1245,0.0328,1.3453]);
Transform Transform547 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate551 = createNode("Coordinate");
Coordinate551.point = new MFVec3f(new float[-4.2795,0.0086,4.7055]);
LineSet550.coord = Coordinate551;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1
ColorRGBA ColorRGBA552 = createNode("ColorRGBA");
ColorRGBA552.USE = "HAnimSegmentLineColorRGBA";
LineSet550.color = ColorRGBA552;

Shape549.geometry = LineSet550;

HAnimSegment545.children[1] = Shape549;

HAnimJoint544.children = new MFNode();

HAnimJoint544.children[0] = HAnimSegment545;

HAnimJoint HAnimJoint553 = createNode("HAnimJoint");
HAnimJoint553.name = "r_metatarsophalangeal_3";
HAnimJoint553.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint553.center = new SFVec3f(new float[-4.2795,0.0086,4.7055]);
HAnimSegment HAnimSegment554 = createNode("HAnimSegment");
HAnimSegment554.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment554.DEF = "hanim_r_tarsal_proximal_phalanx_3";
Transform Transform555 = createNode("Transform");
Transform555.translation = new SFVec3f(new float[-4.2795,0.0086,4.7055]);
Transform Transform556 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate560 = createNode("Coordinate");
Coordinate560.point = new MFVec3f(new float[-4.2795,0.0086,4.7055,-4.3865,0.0044,5.3745]);
LineSet559.coord = Coordinate560;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA561 = createNode("ColorRGBA");
ColorRGBA561.USE = "HAnimSegmentLineColorRGBA";
LineSet559.color = ColorRGBA561;

Shape558.geometry = LineSet559;

HAnimSegment554.children[1] = Shape558;

HAnimJoint553.children = new MFNode();

HAnimJoint553.children[0] = HAnimSegment554;

HAnimJoint HAnimJoint562 = createNode("HAnimJoint");
HAnimJoint562.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint562.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint562.center = new SFVec3f(new float[-4.3865,0.0044,5.3745]);
HAnimSegment HAnimSegment563 = createNode("HAnimSegment");
HAnimSegment563.name = "r_tarsal_middle_phalanx_3";
HAnimSegment563.DEF = "hanim_r_tarsal_middle_phalanx_3";
Transform Transform564 = createNode("Transform");
Transform564.translation = new SFVec3f(new float[-4.3865,0.0044,5.3745]);
Transform Transform565 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate569 = createNode("Coordinate");
Coordinate569.point = new MFVec3f(new float[-4.3865,0.0044,5.3745,-4.4545,0.0017,5.7845]);
LineSet568.coord = Coordinate569;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA570 = createNode("ColorRGBA");
ColorRGBA570.USE = "HAnimSegmentLineColorRGBA";
LineSet568.color = ColorRGBA570;

Shape567.geometry = LineSet568;

HAnimSegment563.children[1] = Shape567;

HAnimSite HAnimSite571 = createNode("HAnimSite");
HAnimSite571.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite571.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
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
HAnimJoint574.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint574.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint574.center = new SFVec3f(new float[-4.4545,0.0017,5.7845]);
HAnimJoint562.children[1] = HAnimJoint574;

HAnimJoint553.children[1] = HAnimJoint562;

HAnimJoint544.children[1] = HAnimJoint553;

HAnimJoint535.children[1] = HAnimJoint544;

HAnimJoint444.children[3] = HAnimJoint535;

HAnimJoint431.children[1] = HAnimJoint444;

HAnimJoint HAnimJoint575 = createNode("HAnimJoint");
HAnimJoint575.name = "r_calcaneocuboid";
HAnimJoint575.DEF = "hanim_r_calcaneocuboid";
HAnimJoint575.center = new SFVec3f(new float[-3.9515,0.0653,-0.6895]);
HAnimSegment HAnimSegment576 = createNode("HAnimSegment");
HAnimSegment576.name = "r_calcaneus";
HAnimSegment576.DEF = "hanim_r_calcaneus";
Transform Transform577 = createNode("Transform");
Transform577.translation = new SFVec3f(new float[-3.9515,0.0653,-0.6895]);
Transform Transform578 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate582 = createNode("Coordinate");
Coordinate582.point = new MFVec3f(new float[-3.9515,0.0653,-0.6895,-4.9095,0.0353,0.5574]);
LineSet581.coord = Coordinate582;

//from r_calcaneocuboid to r_transversetarsal vertices 2
ColorRGBA ColorRGBA583 = createNode("ColorRGBA");
ColorRGBA583.USE = "HAnimSegmentLineColorRGBA";
LineSet581.color = ColorRGBA583;

Shape580.geometry = LineSet581;

HAnimSegment576.children[1] = Shape580;

HAnimJoint575.children = new MFNode();

HAnimJoint575.children[0] = HAnimSegment576;

HAnimJoint HAnimJoint584 = createNode("HAnimJoint");
HAnimJoint584.name = "r_transversetarsal";
HAnimJoint584.DEF = "hanim_r_transversetarsal";
HAnimJoint584.center = new SFVec3f(new float[-4.9095,0.0353,0.5574]);
HAnimSegment HAnimSegment585 = createNode("HAnimSegment");
HAnimSegment585.name = "r_cuboid";
HAnimSegment585.DEF = "hanim_r_cuboid";
Transform Transform586 = createNode("Transform");
Transform586.translation = new SFVec3f(new float[-4.9095,0.0353,0.5574]);
Transform Transform587 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate591 = createNode("Coordinate");
Coordinate591.point = new MFVec3f(new float[-4.9095,0.0353,0.5574,-4.7255,0.0211,2.1725]);
LineSet590.coord = Coordinate591;

//from r_transversetarsal to r_tarsometatarsal_4 vertices 2
ColorRGBA ColorRGBA592 = createNode("ColorRGBA");
ColorRGBA592.USE = "HAnimSegmentLineColorRGBA";
LineSet590.color = ColorRGBA592;

Shape589.geometry = LineSet590;

HAnimSegment585.children[1] = Shape589;

Shape Shape593 = createNode("Shape");
LineSet LineSet594 = createNode("LineSet");
LineSet594.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate595 = createNode("Coordinate");
Coordinate595.point = new MFVec3f(new float[-4.9095,0.0353,0.5574,-5.3615,0.0164,2.0085]);
LineSet594.coord = Coordinate595;

//from r_transversetarsal to r_tarsometatarsal_5 vertices 2
ColorRGBA ColorRGBA596 = createNode("ColorRGBA");
ColorRGBA596.USE = "HAnimSegmentLineColorRGBA";
LineSet594.color = ColorRGBA596;

Shape593.geometry = LineSet594;

HAnimSegment585.children[2] = Shape593;

HAnimJoint584.children = new MFNode();

HAnimJoint584.children[0] = HAnimSegment585;

HAnimJoint HAnimJoint597 = createNode("HAnimJoint");
HAnimJoint597.name = "r_tarsometatarsal_4";
HAnimJoint597.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint597.center = new SFVec3f(new float[-4.7255,0.0211,2.1725]);
HAnimSegment HAnimSegment598 = createNode("HAnimSegment");
HAnimSegment598.name = "r_metatarsal_4";
HAnimSegment598.DEF = "hanim_r_metatarsal_4";
Transform Transform599 = createNode("Transform");
Transform599.translation = new SFVec3f(new float[-4.7255,0.0211,2.1725]);
Transform Transform600 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate604 = createNode("Coordinate");
Coordinate604.point = new MFVec3f(new float[-4.7255,0.0211,2.1725,-4.8755,0.0076,4.5165]);
LineSet603.coord = Coordinate604;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2
ColorRGBA ColorRGBA605 = createNode("ColorRGBA");
ColorRGBA605.USE = "HAnimSegmentLineColorRGBA";
LineSet603.color = ColorRGBA605;

Shape602.geometry = LineSet603;

HAnimSegment598.children[1] = Shape602;

HAnimJoint597.children = new MFNode();

HAnimJoint597.children[0] = HAnimSegment598;

HAnimJoint HAnimJoint606 = createNode("HAnimJoint");
HAnimJoint606.name = "r_metatarsophalangeal_4";
HAnimJoint606.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint606.center = new SFVec3f(new float[-4.8755,0.0076,4.5165]);
HAnimSegment HAnimSegment607 = createNode("HAnimSegment");
HAnimSegment607.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment607.DEF = "hanim_r_tarsal_proximal_phalanx_4";
Transform Transform608 = createNode("Transform");
Transform608.translation = new SFVec3f(new float[-4.8755,0.0076,4.5165]);
Transform Transform609 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate613 = createNode("Coordinate");
Coordinate613.point = new MFVec3f(new float[-4.8755,0.0076,4.5165,-5.0655,0.0049,5.1895]);
LineSet612.coord = Coordinate613;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA614 = createNode("ColorRGBA");
ColorRGBA614.USE = "HAnimSegmentLineColorRGBA";
LineSet612.color = ColorRGBA614;

Shape611.geometry = LineSet612;

HAnimSegment607.children[1] = Shape611;

HAnimJoint606.children = new MFNode();

HAnimJoint606.children[0] = HAnimSegment607;

HAnimJoint HAnimJoint615 = createNode("HAnimJoint");
HAnimJoint615.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint615.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint615.center = new SFVec3f(new float[-5.0655,0.0049,5.1895]);
HAnimSegment HAnimSegment616 = createNode("HAnimSegment");
HAnimSegment616.name = "r_tarsal_middle_phalanx_4";
HAnimSegment616.DEF = "hanim_r_tarsal_middle_phalanx_4";
Transform Transform617 = createNode("Transform");
Transform617.translation = new SFVec3f(new float[-5.0655,0.0049,5.1895]);
Transform Transform618 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate622 = createNode("Coordinate");
Coordinate622.point = new MFVec3f(new float[-5.0655,0.0049,5.1895,-5.1335,0.0011,5.5175]);
LineSet621.coord = Coordinate622;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA623 = createNode("ColorRGBA");
ColorRGBA623.USE = "HAnimSegmentLineColorRGBA";
LineSet621.color = ColorRGBA623;

Shape620.geometry = LineSet621;

HAnimSegment616.children[1] = Shape620;

HAnimSite HAnimSite624 = createNode("HAnimSite");
HAnimSite624.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite624.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
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
HAnimJoint627.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint627.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint627.center = new SFVec3f(new float[-5.1335,0.0011,5.5175]);
HAnimJoint615.children[1] = HAnimJoint627;

HAnimJoint606.children[1] = HAnimJoint615;

HAnimJoint597.children[1] = HAnimJoint606;

HAnimJoint584.children[1] = HAnimJoint597;

HAnimJoint HAnimJoint628 = createNode("HAnimJoint");
HAnimJoint628.name = "r_tarsometatarsal_5";
HAnimJoint628.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint628.center = new SFVec3f(new float[-5.3615,0.0164,2.0085]);
HAnimSegment HAnimSegment629 = createNode("HAnimSegment");
HAnimSegment629.name = "r_metatarsal_5";
HAnimSegment629.DEF = "hanim_r_metatarsal_5";
Transform Transform630 = createNode("Transform");
Transform630.translation = new SFVec3f(new float[-5.3615,0.0164,2.0085]);
Transform Transform631 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate635 = createNode("Coordinate");
Coordinate635.point = new MFVec3f(new float[-5.3615,0.0164,2.0085,-5.5055,0.0067,4.3115]);
LineSet634.coord = Coordinate635;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2
ColorRGBA ColorRGBA636 = createNode("ColorRGBA");
ColorRGBA636.USE = "HAnimSegmentLineColorRGBA";
LineSet634.color = ColorRGBA636;

Shape633.geometry = LineSet634;

HAnimSegment629.children[1] = Shape633;

HAnimSite HAnimSite637 = createNode("HAnimSite");
HAnimSite637.name = "r_metatarsal_phalanx_5_pt";
HAnimSite637.DEF = "hanim_r_metatarsal_phalanx_5_pt";
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
HAnimJoint640.name = "r_metatarsophalangeal_5";
HAnimJoint640.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint640.center = new SFVec3f(new float[-5.5055,0.0067,4.3115]);
HAnimSegment HAnimSegment641 = createNode("HAnimSegment");
HAnimSegment641.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment641.DEF = "hanim_r_tarsal_proximal_phalanx_5";
Transform Transform642 = createNode("Transform");
Transform642.translation = new SFVec3f(new float[-5.5055,0.0067,4.3115]);
Transform Transform643 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate647 = createNode("Coordinate");
Coordinate647.point = new MFVec3f(new float[-5.5055,0.0067,4.3115,-5.6085,0.003,4.6485]);
LineSet646.coord = Coordinate647;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA648 = createNode("ColorRGBA");
ColorRGBA648.USE = "HAnimSegmentLineColorRGBA";
LineSet646.color = ColorRGBA648;

Shape645.geometry = LineSet646;

HAnimSegment641.children[1] = Shape645;

HAnimJoint640.children = new MFNode();

HAnimJoint640.children[0] = HAnimSegment641;

HAnimJoint HAnimJoint649 = createNode("HAnimJoint");
HAnimJoint649.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint649.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint649.center = new SFVec3f(new float[-5.6085,0.003,4.6485]);
HAnimSegment HAnimSegment650 = createNode("HAnimSegment");
HAnimSegment650.name = "r_tarsal_middle_phalanx_5";
HAnimSegment650.DEF = "hanim_r_tarsal_middle_phalanx_5";
Transform Transform651 = createNode("Transform");
Transform651.translation = new SFVec3f(new float[-5.6085,0.003,4.6485]);
Transform Transform652 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate656 = createNode("Coordinate");
Coordinate656.point = new MFVec3f(new float[-5.6085,0.003,4.6485,-5.6495,0,4.9925]);
LineSet655.coord = Coordinate656;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA657 = createNode("ColorRGBA");
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA";
LineSet655.color = ColorRGBA657;

Shape654.geometry = LineSet655;

HAnimSegment650.children[1] = Shape654;

HAnimSite HAnimSite658 = createNode("HAnimSite");
HAnimSite658.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite658.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
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
HAnimJoint661.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint661.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint661.center = new SFVec3f(new float[-5.6495,0,4.9925]);
HAnimJoint649.children[1] = HAnimJoint661;

HAnimJoint640.children[1] = HAnimJoint649;

HAnimJoint628.children[1] = HAnimJoint640;

HAnimJoint584.children[2] = HAnimJoint628;

HAnimJoint575.children[1] = HAnimJoint584;

HAnimJoint431.children[2] = HAnimJoint575;

HAnimJoint416.children[1] = HAnimJoint431;

HAnimJoint398.children[1] = HAnimJoint416;

HAnimJoint97.children[2] = HAnimJoint398;

HAnimJoint45.children[1] = HAnimJoint97;

HAnimJoint HAnimJoint662 = createNode("HAnimJoint");
HAnimJoint662.name = "vl5";
HAnimJoint662.DEF = "hanim_vl5";
HAnimJoint662.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimSegment HAnimSegment663 = createNode("HAnimSegment");
HAnimSegment663.name = "l5";
HAnimSegment663.DEF = "hanim_l5";
Transform Transform664 = createNode("Transform");
Transform664.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Transform Transform665 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate669 = createNode("Coordinate");
Coordinate669.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet668.coord = Coordinate669;

//from vl5 to vl4 vertices 2
ColorRGBA ColorRGBA670 = createNode("ColorRGBA");
ColorRGBA670.USE = "HAnimSegmentLineColorRGBA";
LineSet668.color = ColorRGBA670;

Shape667.geometry = LineSet668;

HAnimSegment663.children[1] = Shape667;

HAnimJoint662.children = new MFNode();

HAnimJoint662.children[0] = HAnimSegment663;

HAnimJoint HAnimJoint671 = createNode("HAnimJoint");
HAnimJoint671.name = "vl4";
HAnimJoint671.DEF = "hanim_vl4";
HAnimJoint671.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimSegment HAnimSegment672 = createNode("HAnimSegment");
HAnimSegment672.name = "l4";
HAnimSegment672.DEF = "hanim_l4";
Transform Transform673 = createNode("Transform");
Transform673.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Transform Transform674 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate678 = createNode("Coordinate");
Coordinate678.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet677.coord = Coordinate678;

//from vl4 to vl3 vertices 2
ColorRGBA ColorRGBA679 = createNode("ColorRGBA");
ColorRGBA679.USE = "HAnimSegmentLineColorRGBA";
LineSet677.color = ColorRGBA679;

Shape676.geometry = LineSet677;

HAnimSegment672.children[1] = Shape676;

HAnimJoint671.children = new MFNode();

HAnimJoint671.children[0] = HAnimSegment672;

HAnimJoint HAnimJoint680 = createNode("HAnimJoint");
HAnimJoint680.name = "vl3";
HAnimJoint680.DEF = "hanim_vl3";
HAnimJoint680.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimSegment HAnimSegment681 = createNode("HAnimSegment");
HAnimSegment681.name = "l3";
HAnimSegment681.DEF = "hanim_l3";
Transform Transform682 = createNode("Transform");
Transform682.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Transform Transform683 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate687 = createNode("Coordinate");
Coordinate687.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet686.coord = Coordinate687;

//from vl3 to vl2 vertices 2
ColorRGBA ColorRGBA688 = createNode("ColorRGBA");
ColorRGBA688.USE = "HAnimSegmentLineColorRGBA";
LineSet686.color = ColorRGBA688;

Shape685.geometry = LineSet686;

HAnimSegment681.children[1] = Shape685;

HAnimSite HAnimSite689 = createNode("HAnimSite");
HAnimSite689.name = "l_rib10_pt";
HAnimSite689.DEF = "hanim_l_rib10_pt";
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
HAnimSite692.name = "r_rib10_pt";
HAnimSite692.DEF = "hanim_r_rib10_pt";
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
HAnimSite695.name = "spine_2_middle_back_pt";
HAnimSite695.DEF = "hanim_spine_2_middle_back_pt";
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
HAnimJoint698.name = "vl2";
HAnimJoint698.DEF = "hanim_vl2";
HAnimJoint698.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimSegment HAnimSegment699 = createNode("HAnimSegment");
HAnimSegment699.name = "l2";
HAnimSegment699.DEF = "hanim_l2";
Transform Transform700 = createNode("Transform");
Transform700.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Transform Transform701 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate705 = createNode("Coordinate");
Coordinate705.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet704.coord = Coordinate705;

//from vl2 to vl1 vertices 2
ColorRGBA ColorRGBA706 = createNode("ColorRGBA");
ColorRGBA706.USE = "HAnimSegmentLineColorRGBA";
LineSet704.color = ColorRGBA706;

Shape703.geometry = LineSet704;

HAnimSegment699.children[1] = Shape703;

HAnimJoint698.children = new MFNode();

HAnimJoint698.children[0] = HAnimSegment699;

HAnimJoint HAnimJoint707 = createNode("HAnimJoint");
HAnimJoint707.name = "vl1";
HAnimJoint707.DEF = "hanim_vl1";
HAnimJoint707.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimSegment HAnimSegment708 = createNode("HAnimSegment");
HAnimSegment708.name = "l1";
HAnimSegment708.DEF = "hanim_l1";
Transform Transform709 = createNode("Transform");
Transform709.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Transform Transform710 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate714 = createNode("Coordinate");
Coordinate714.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet713.coord = Coordinate714;

//from vl1 to vt12 vertices 2
ColorRGBA ColorRGBA715 = createNode("ColorRGBA");
ColorRGBA715.USE = "HAnimSegmentLineColorRGBA";
LineSet713.color = ColorRGBA715;

Shape712.geometry = LineSet713;

HAnimSegment708.children[1] = Shape712;

HAnimJoint707.children = new MFNode();

HAnimJoint707.children[0] = HAnimSegment708;

HAnimJoint HAnimJoint716 = createNode("HAnimJoint");
HAnimJoint716.name = "vt12";
HAnimJoint716.DEF = "hanim_vt12";
HAnimJoint716.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimSegment HAnimSegment717 = createNode("HAnimSegment");
HAnimSegment717.name = "t12";
HAnimSegment717.DEF = "hanim_t12";
Transform Transform718 = createNode("Transform");
Transform718.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Transform Transform719 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate723 = createNode("Coordinate");
Coordinate723.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet722.coord = Coordinate723;

//from vt12 to vt11 vertices 2
ColorRGBA ColorRGBA724 = createNode("ColorRGBA");
ColorRGBA724.USE = "HAnimSegmentLineColorRGBA";
LineSet722.color = ColorRGBA724;

Shape721.geometry = LineSet722;

HAnimSegment717.children[1] = Shape721;

HAnimJoint716.children = new MFNode();

HAnimJoint716.children[0] = HAnimSegment717;

HAnimJoint HAnimJoint725 = createNode("HAnimJoint");
HAnimJoint725.name = "vt11";
HAnimJoint725.DEF = "hanim_vt11";
HAnimJoint725.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimSegment HAnimSegment726 = createNode("HAnimSegment");
HAnimSegment726.name = "t11";
HAnimSegment726.DEF = "hanim_t11";
Transform Transform727 = createNode("Transform");
Transform727.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Transform Transform728 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate732 = createNode("Coordinate");
Coordinate732.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet731.coord = Coordinate732;

//from vt11 to vt10 vertices 2
ColorRGBA ColorRGBA733 = createNode("ColorRGBA");
ColorRGBA733.USE = "HAnimSegmentLineColorRGBA";
LineSet731.color = ColorRGBA733;

Shape730.geometry = LineSet731;

HAnimSegment726.children[1] = Shape730;

HAnimSite HAnimSite734 = createNode("HAnimSite");
HAnimSite734.name = "substernale_pt";
HAnimSite734.DEF = "hanim_substernale_pt";
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
HAnimJoint737.name = "vt10";
HAnimJoint737.DEF = "hanim_vt10";
HAnimJoint737.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimSegment HAnimSegment738 = createNode("HAnimSegment");
HAnimSegment738.name = "t10";
HAnimSegment738.DEF = "hanim_t10";
Transform Transform739 = createNode("Transform");
Transform739.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Transform Transform740 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate744 = createNode("Coordinate");
Coordinate744.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet743.coord = Coordinate744;

//from vt10 to vt9 vertices 2
ColorRGBA ColorRGBA745 = createNode("ColorRGBA");
ColorRGBA745.USE = "HAnimSegmentLineColorRGBA";
LineSet743.color = ColorRGBA745;

Shape742.geometry = LineSet743;

HAnimSegment738.children[1] = Shape742;

HAnimSite HAnimSite746 = createNode("HAnimSite");
HAnimSite746.name = "l_thelion_pt";
HAnimSite746.DEF = "hanim_l_thelion_pt";
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
HAnimSite749.name = "r_thelion_pt";
HAnimSite749.DEF = "hanim_r_thelion_pt";
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
HAnimJoint752.name = "vt9";
HAnimJoint752.DEF = "hanim_vt9";
HAnimJoint752.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimSegment HAnimSegment753 = createNode("HAnimSegment");
HAnimSegment753.name = "t9";
HAnimSegment753.DEF = "hanim_t9";
Transform Transform754 = createNode("Transform");
Transform754.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Transform Transform755 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate759 = createNode("Coordinate");
Coordinate759.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet758.coord = Coordinate759;

//from vt9 to vt8 vertices 2
ColorRGBA ColorRGBA760 = createNode("ColorRGBA");
ColorRGBA760.USE = "HAnimSegmentLineColorRGBA";
LineSet758.color = ColorRGBA760;

Shape757.geometry = LineSet758;

HAnimSegment753.children[1] = Shape757;

HAnimJoint752.children = new MFNode();

HAnimJoint752.children[0] = HAnimSegment753;

HAnimJoint HAnimJoint761 = createNode("HAnimJoint");
HAnimJoint761.name = "vt8";
HAnimJoint761.DEF = "hanim_vt8";
HAnimJoint761.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimSegment HAnimSegment762 = createNode("HAnimSegment");
HAnimSegment762.name = "t8";
HAnimSegment762.DEF = "hanim_t8";
Transform Transform763 = createNode("Transform");
Transform763.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Transform Transform764 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate768 = createNode("Coordinate");
Coordinate768.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet767.coord = Coordinate768;

//from vt8 to vt7 vertices 2
ColorRGBA ColorRGBA769 = createNode("ColorRGBA");
ColorRGBA769.USE = "HAnimSegmentLineColorRGBA";
LineSet767.color = ColorRGBA769;

Shape766.geometry = LineSet767;

HAnimSegment762.children[1] = Shape766;

HAnimJoint761.children = new MFNode();

HAnimJoint761.children[0] = HAnimSegment762;

HAnimJoint HAnimJoint770 = createNode("HAnimJoint");
HAnimJoint770.name = "vt7";
HAnimJoint770.DEF = "hanim_vt7";
HAnimJoint770.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimSegment HAnimSegment771 = createNode("HAnimSegment");
HAnimSegment771.name = "t7";
HAnimSegment771.DEF = "hanim_t7";
Transform Transform772 = createNode("Transform");
Transform772.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Transform Transform773 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate777 = createNode("Coordinate");
Coordinate777.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet776.coord = Coordinate777;

//from vt7 to vt6 vertices 2
ColorRGBA ColorRGBA778 = createNode("ColorRGBA");
ColorRGBA778.USE = "HAnimSegmentLineColorRGBA";
LineSet776.color = ColorRGBA778;

Shape775.geometry = LineSet776;

HAnimSegment771.children[1] = Shape775;

HAnimSite HAnimSite779 = createNode("HAnimSite");
HAnimSite779.name = "l_chest_midsagittal_plane_pt";
HAnimSite779.DEF = "hanim_l_chest_midsagittal_plane_pt";
TouchSensor TouchSensor780 = createNode("TouchSensor");
TouchSensor780.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite779.children = new MFNode();

HAnimSite779.children[0] = TouchSensor780;

Shape Shape781 = createNode("Shape");
Shape781.USE = "HAnimSiteShape";
HAnimSite779.children[1] = Shape781;

HAnimSegment771.children[2] = HAnimSite779;

HAnimSite HAnimSite782 = createNode("HAnimSite");
HAnimSite782.name = "mesosternale_pt";
HAnimSite782.DEF = "hanim_mesosternale_pt";
TouchSensor TouchSensor783 = createNode("TouchSensor");
TouchSensor783.description = "HAnimSite mesosternale_pt";
HAnimSite782.children = new MFNode();

HAnimSite782.children[0] = TouchSensor783;

Shape Shape784 = createNode("Shape");
Shape784.USE = "HAnimSiteShape";
HAnimSite782.children[1] = Shape784;

HAnimSegment771.children[3] = HAnimSite782;

HAnimSite HAnimSite785 = createNode("HAnimSite");
HAnimSite785.name = "r_chest_midsagittal_plane_pt";
HAnimSite785.DEF = "hanim_r_chest_midsagittal_plane_pt";
TouchSensor TouchSensor786 = createNode("TouchSensor");
TouchSensor786.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite785.children = new MFNode();

HAnimSite785.children[0] = TouchSensor786;

Shape Shape787 = createNode("Shape");
Shape787.USE = "HAnimSiteShape";
HAnimSite785.children[1] = Shape787;

HAnimSegment771.children[4] = HAnimSite785;

HAnimSite HAnimSite788 = createNode("HAnimSite");
HAnimSite788.name = "rear_center_midsagittal_plane_pt";
HAnimSite788.DEF = "hanim_rear_center_midsagittal_plane_pt";
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
HAnimJoint791.name = "vt6";
HAnimJoint791.DEF = "hanim_vt6";
HAnimJoint791.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimSegment HAnimSegment792 = createNode("HAnimSegment");
HAnimSegment792.name = "t6";
HAnimSegment792.DEF = "hanim_t6";
Transform Transform793 = createNode("Transform");
Transform793.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Transform Transform794 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate798 = createNode("Coordinate");
Coordinate798.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet797.coord = Coordinate798;

//from vt6 to vt5 vertices 2
ColorRGBA ColorRGBA799 = createNode("ColorRGBA");
ColorRGBA799.USE = "HAnimSegmentLineColorRGBA";
LineSet797.color = ColorRGBA799;

Shape796.geometry = LineSet797;

HAnimSegment792.children[1] = Shape796;

HAnimSite HAnimSite800 = createNode("HAnimSite");
HAnimSite800.name = "spine_1_middle_back_pt";
HAnimSite800.DEF = "hanim_spine_1_middle_back_pt";
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
HAnimJoint803.name = "vt5";
HAnimJoint803.DEF = "hanim_vt5";
HAnimJoint803.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimSegment HAnimSegment804 = createNode("HAnimSegment");
HAnimSegment804.name = "t5";
HAnimSegment804.DEF = "hanim_t5";
Transform Transform805 = createNode("Transform");
Transform805.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Transform Transform806 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate810 = createNode("Coordinate");
Coordinate810.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet809.coord = Coordinate810;

//from vt5 to vt4 vertices 2
ColorRGBA ColorRGBA811 = createNode("ColorRGBA");
ColorRGBA811.USE = "HAnimSegmentLineColorRGBA";
LineSet809.color = ColorRGBA811;

Shape808.geometry = LineSet809;

HAnimSegment804.children[1] = Shape808;

HAnimJoint803.children = new MFNode();

HAnimJoint803.children[0] = HAnimSegment804;

HAnimJoint HAnimJoint812 = createNode("HAnimJoint");
HAnimJoint812.name = "vt4";
HAnimJoint812.DEF = "hanim_vt4";
HAnimJoint812.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimSegment HAnimSegment813 = createNode("HAnimSegment");
HAnimSegment813.name = "t4";
HAnimSegment813.DEF = "hanim_t4";
Transform Transform814 = createNode("Transform");
Transform814.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Transform Transform815 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate819 = createNode("Coordinate");
Coordinate819.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet818.coord = Coordinate819;

//from vt4 to vt3 vertices 2
ColorRGBA ColorRGBA820 = createNode("ColorRGBA");
ColorRGBA820.USE = "HAnimSegmentLineColorRGBA";
LineSet818.color = ColorRGBA820;

Shape817.geometry = LineSet818;

HAnimSegment813.children[1] = Shape817;

HAnimJoint812.children = new MFNode();

HAnimJoint812.children[0] = HAnimSegment813;

HAnimJoint HAnimJoint821 = createNode("HAnimJoint");
HAnimJoint821.name = "vt3";
HAnimJoint821.DEF = "hanim_vt3";
HAnimJoint821.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimSegment HAnimSegment822 = createNode("HAnimSegment");
HAnimSegment822.name = "t3";
HAnimSegment822.DEF = "hanim_t3";
Transform Transform823 = createNode("Transform");
Transform823.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Transform Transform824 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate828 = createNode("Coordinate");
Coordinate828.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet827.coord = Coordinate828;

//from vt3 to vt2 vertices 2
ColorRGBA ColorRGBA829 = createNode("ColorRGBA");
ColorRGBA829.USE = "HAnimSegmentLineColorRGBA";
LineSet827.color = ColorRGBA829;

Shape826.geometry = LineSet827;

HAnimSegment822.children[1] = Shape826;

HAnimJoint821.children = new MFNode();

HAnimJoint821.children[0] = HAnimSegment822;

HAnimJoint HAnimJoint830 = createNode("HAnimJoint");
HAnimJoint830.name = "vt2";
HAnimJoint830.DEF = "hanim_vt2";
HAnimJoint830.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimSegment HAnimSegment831 = createNode("HAnimSegment");
HAnimSegment831.name = "t2";
HAnimSegment831.DEF = "hanim_t2";
Transform Transform832 = createNode("Transform");
Transform832.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Transform Transform833 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate837 = createNode("Coordinate");
Coordinate837.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet836.coord = Coordinate837;

//from vt2 to vt1 vertices 2
ColorRGBA ColorRGBA838 = createNode("ColorRGBA");
ColorRGBA838.USE = "HAnimSegmentLineColorRGBA";
LineSet836.color = ColorRGBA838;

Shape835.geometry = LineSet836;

HAnimSegment831.children[1] = Shape835;

HAnimSite HAnimSite839 = createNode("HAnimSite");
HAnimSite839.name = "cervicale_pt";
HAnimSite839.DEF = "hanim_cervicale_pt";
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
HAnimSite842.name = "suprasternale_pt";
HAnimSite842.DEF = "hanim_suprasternale_pt";
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
HAnimJoint845.name = "vt1";
HAnimJoint845.DEF = "hanim_vt1";
HAnimJoint845.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimSegment HAnimSegment846 = createNode("HAnimSegment");
HAnimSegment846.name = "t1";
HAnimSegment846.DEF = "hanim_t1";
Transform Transform847 = createNode("Transform");
Transform847.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Transform Transform848 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate852 = createNode("Coordinate");
Coordinate852.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet851.coord = Coordinate852;

//from vt1 to vc7 vertices 2
ColorRGBA ColorRGBA853 = createNode("ColorRGBA");
ColorRGBA853.USE = "HAnimSegmentLineColorRGBA";
LineSet851.color = ColorRGBA853;

Shape850.geometry = LineSet851;

HAnimSegment846.children[1] = Shape850;

HAnimSite HAnimSite854 = createNode("HAnimSite");
HAnimSite854.name = "l_neck_base_pt";
HAnimSite854.DEF = "hanim_l_neck_base_pt";
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
HAnimSite857.name = "r_neck_base_pt";
HAnimSite857.DEF = "hanim_r_neck_base_pt";
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
Coordinate Coordinate862 = createNode("Coordinate");
Coordinate862.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet861.coord = Coordinate862;

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA ColorRGBA863 = createNode("ColorRGBA");
ColorRGBA863.USE = "HAnimSegmentLineColorRGBA";
LineSet861.color = ColorRGBA863;

Shape860.geometry = LineSet861;

HAnimSegment846.children[4] = Shape860;

HAnimSite HAnimSite864 = createNode("HAnimSite");
HAnimSite864.name = "l_acromion_pt";
HAnimSite864.DEF = "hanim_l_acromion_pt";
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
HAnimSite867.name = "l_axilla_distal_pt";
HAnimSite867.DEF = "hanim_l_axilla_distal_pt";
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
HAnimSite870.name = "l_axilla_posterior_folds_pt";
HAnimSite870.DEF = "hanim_l_axilla_posterior_folds_pt";
TouchSensor TouchSensor871 = createNode("TouchSensor");
TouchSensor871.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite870.children = new MFNode();

HAnimSite870.children[0] = TouchSensor871;

Shape Shape872 = createNode("Shape");
Shape872.USE = "HAnimSiteShape";
HAnimSite870.children[1] = Shape872;

HAnimSegment846.children[7] = HAnimSite870;

HAnimSite HAnimSite873 = createNode("HAnimSite");
HAnimSite873.name = "l_axilla_proximal_pt";
HAnimSite873.DEF = "hanim_l_axilla_proximal_pt";
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
HAnimSite876.name = "l_clavicale_pt";
HAnimSite876.DEF = "hanim_l_clavicale_pt";
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
Coordinate Coordinate881 = createNode("Coordinate");
Coordinate881.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet880.coord = Coordinate881;

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA ColorRGBA882 = createNode("ColorRGBA");
ColorRGBA882.USE = "HAnimSegmentLineColorRGBA";
LineSet880.color = ColorRGBA882;

Shape879.geometry = LineSet880;

HAnimSegment846.children[10] = Shape879;

HAnimSite HAnimSite883 = createNode("HAnimSite");
HAnimSite883.name = "r_acromion_pt";
HAnimSite883.DEF = "hanim_r_acromion_pt";
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
HAnimSite886.name = "r_axilla_distal_pt";
HAnimSite886.DEF = "hanim_r_axilla_distal_pt";
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
HAnimSite889.name = "r_axilla_posterior_folds_pt";
HAnimSite889.DEF = "hanim_r_axilla_posterior_folds_pt";
TouchSensor TouchSensor890 = createNode("TouchSensor");
TouchSensor890.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite889.children = new MFNode();

HAnimSite889.children[0] = TouchSensor890;

Shape Shape891 = createNode("Shape");
Shape891.USE = "HAnimSiteShape";
HAnimSite889.children[1] = Shape891;

HAnimSegment846.children[13] = HAnimSite889;

HAnimSite HAnimSite892 = createNode("HAnimSite");
HAnimSite892.name = "r_axilla_proximal_pt";
HAnimSite892.DEF = "hanim_r_axilla_proximal_pt";
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
HAnimSite895.name = "r_clavicale_pt";
HAnimSite895.DEF = "hanim_r_clavicale_pt";
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
HAnimJoint898.name = "vc7";
HAnimJoint898.DEF = "hanim_vc7";
HAnimJoint898.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimSegment HAnimSegment899 = createNode("HAnimSegment");
HAnimSegment899.name = "c7";
HAnimSegment899.DEF = "hanim_c7";
Transform Transform900 = createNode("Transform");
Transform900.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Transform Transform901 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate905 = createNode("Coordinate");
Coordinate905.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet904.coord = Coordinate905;

//from vc7 to vc6 vertices 2
ColorRGBA ColorRGBA906 = createNode("ColorRGBA");
ColorRGBA906.USE = "HAnimSegmentLineColorRGBA";
LineSet904.color = ColorRGBA906;

Shape903.geometry = LineSet904;

HAnimSegment899.children[1] = Shape903;

HAnimJoint898.children = new MFNode();

HAnimJoint898.children[0] = HAnimSegment899;

HAnimJoint HAnimJoint907 = createNode("HAnimJoint");
HAnimJoint907.name = "vc6";
HAnimJoint907.DEF = "hanim_vc6";
HAnimJoint907.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimSegment HAnimSegment908 = createNode("HAnimSegment");
HAnimSegment908.name = "c6";
HAnimSegment908.DEF = "hanim_c6";
Transform Transform909 = createNode("Transform");
Transform909.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Transform Transform910 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate914 = createNode("Coordinate");
Coordinate914.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet913.coord = Coordinate914;

//from vc6 to vc5 vertices 2
ColorRGBA ColorRGBA915 = createNode("ColorRGBA");
ColorRGBA915.USE = "HAnimSegmentLineColorRGBA";
LineSet913.color = ColorRGBA915;

Shape912.geometry = LineSet913;

HAnimSegment908.children[1] = Shape912;

HAnimJoint907.children = new MFNode();

HAnimJoint907.children[0] = HAnimSegment908;

HAnimJoint HAnimJoint916 = createNode("HAnimJoint");
HAnimJoint916.name = "vc5";
HAnimJoint916.DEF = "hanim_vc5";
HAnimJoint916.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimSegment HAnimSegment917 = createNode("HAnimSegment");
HAnimSegment917.name = "c5";
HAnimSegment917.DEF = "hanim_c5";
Transform Transform918 = createNode("Transform");
Transform918.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Transform Transform919 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate923 = createNode("Coordinate");
Coordinate923.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet922.coord = Coordinate923;

//from vc5 to vc4 vertices 2
ColorRGBA ColorRGBA924 = createNode("ColorRGBA");
ColorRGBA924.USE = "HAnimSegmentLineColorRGBA";
LineSet922.color = ColorRGBA924;

Shape921.geometry = LineSet922;

HAnimSegment917.children[1] = Shape921;

HAnimJoint916.children = new MFNode();

HAnimJoint916.children[0] = HAnimSegment917;

HAnimJoint HAnimJoint925 = createNode("HAnimJoint");
HAnimJoint925.name = "vc4";
HAnimJoint925.DEF = "hanim_vc4";
HAnimJoint925.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimSegment HAnimSegment926 = createNode("HAnimSegment");
HAnimSegment926.name = "c4";
HAnimSegment926.DEF = "hanim_c4";
Transform Transform927 = createNode("Transform");
Transform927.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Transform Transform928 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate932 = createNode("Coordinate");
Coordinate932.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet931.coord = Coordinate932;

//from vc4 to vc3 vertices 2
ColorRGBA ColorRGBA933 = createNode("ColorRGBA");
ColorRGBA933.USE = "HAnimSegmentLineColorRGBA";
LineSet931.color = ColorRGBA933;

Shape930.geometry = LineSet931;

HAnimSegment926.children[1] = Shape930;

HAnimJoint925.children = new MFNode();

HAnimJoint925.children[0] = HAnimSegment926;

HAnimJoint HAnimJoint934 = createNode("HAnimJoint");
HAnimJoint934.name = "vc3";
HAnimJoint934.DEF = "hanim_vc3";
HAnimJoint934.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimSegment HAnimSegment935 = createNode("HAnimSegment");
HAnimSegment935.name = "c3";
HAnimSegment935.DEF = "hanim_c3";
Transform Transform936 = createNode("Transform");
Transform936.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Transform Transform937 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate941 = createNode("Coordinate");
Coordinate941.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet940.coord = Coordinate941;

//from vc3 to vc2 vertices 2
ColorRGBA ColorRGBA942 = createNode("ColorRGBA");
ColorRGBA942.USE = "HAnimSegmentLineColorRGBA";
LineSet940.color = ColorRGBA942;

Shape939.geometry = LineSet940;

HAnimSegment935.children[1] = Shape939;

HAnimSite HAnimSite943 = createNode("HAnimSite");
HAnimSite943.name = "adams_apple_pt";
HAnimSite943.DEF = "hanim_adams_apple_pt";
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
HAnimJoint946.name = "vc2";
HAnimJoint946.DEF = "hanim_vc2";
HAnimJoint946.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimSegment HAnimSegment947 = createNode("HAnimSegment");
HAnimSegment947.name = "c2";
HAnimSegment947.DEF = "hanim_c2";
Transform Transform948 = createNode("Transform");
Transform948.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Transform Transform949 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate953 = createNode("Coordinate");
Coordinate953.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet952.coord = Coordinate953;

//from vc2 to vc1 vertices 2
ColorRGBA ColorRGBA954 = createNode("ColorRGBA");
ColorRGBA954.USE = "HAnimSegmentLineColorRGBA";
LineSet952.color = ColorRGBA954;

Shape951.geometry = LineSet952;

HAnimSegment947.children[1] = Shape951;

HAnimJoint946.children = new MFNode();

HAnimJoint946.children[0] = HAnimSegment947;

HAnimJoint HAnimJoint955 = createNode("HAnimJoint");
HAnimJoint955.name = "vc1";
HAnimJoint955.DEF = "hanim_vc1";
HAnimJoint955.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimSegment HAnimSegment956 = createNode("HAnimSegment");
HAnimSegment956.name = "c1";
HAnimSegment956.DEF = "hanim_c1";
Transform Transform957 = createNode("Transform");
Transform957.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Transform Transform958 = createNode("Transform");
//Empty Transform
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
Coordinate Coordinate962 = createNode("Coordinate");
Coordinate962.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet961.coord = Coordinate962;

//from vc1 to skullbase vertices 2
ColorRGBA ColorRGBA963 = createNode("ColorRGBA");
ColorRGBA963.USE = "HAnimSegmentLineColorRGBA";
LineSet961.color = ColorRGBA963;

Shape960.geometry = LineSet961;

HAnimSegment956.children[1] = Shape960;

HAnimSite HAnimSite964 = createNode("HAnimSite");
HAnimSite964.name = "glabella_pt";
HAnimSite964.DEF = "hanim_glabella_pt";
TouchSensor TouchSensor965 = createNode("TouchSensor");
TouchSensor965.description = "HAnimSite glabella_pt";
HAnimSite964.children = new MFNode();

HAnimSite964.children[0] = TouchSensor965;

Shape Shape966 = createNode("Shape");
Shape966.USE = "HAnimSiteShape";
HAnimSite964.children[1] = Shape966;

HAnimSegment956.children[2] = HAnimSite964;

HAnimSite HAnimSite967 = createNode("HAnimSite");
HAnimSite967.name = "l_ectocanthus_pt";
HAnimSite967.DEF = "hanim_l_ectocanthus_pt";
TouchSensor TouchSensor968 = createNode("TouchSensor");
TouchSensor968.description = "HAnimSite l_ectocanthus_pt";
HAnimSite967.children = new MFNode();

HAnimSite967.children[0] = TouchSensor968;

Shape Shape969 = createNode("Shape");
Shape969.USE = "HAnimSiteShape";
HAnimSite967.children[1] = Shape969;

HAnimSegment956.children[3] = HAnimSite967;

HAnimSite HAnimSite970 = createNode("HAnimSite");
HAnimSite970.name = "l_infraorbitale_pt";
HAnimSite970.DEF = "hanim_l_infraorbitale_pt";
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
HAnimSite973.name = "l_tragion_pt";
HAnimSite973.DEF = "hanim_l_tragion_pt";
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
HAnimSite976.name = "nuchale_pt";
HAnimSite976.DEF = "hanim_nuchale_pt";
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
HAnimSite979.name = "opisthocranion_pt";
HAnimSite979.DEF = "hanim_opisthocranion_pt";
TouchSensor TouchSensor980 = createNode("TouchSensor");
TouchSensor980.description = "HAnimSite opisthocranion_pt";
HAnimSite979.children = new MFNode();

HAnimSite979.children[0] = TouchSensor980;

Shape Shape981 = createNode("Shape");
Shape981.USE = "HAnimSiteShape";
HAnimSite979.children[1] = Shape981;

HAnimSegment956.children[7] = HAnimSite979;

HAnimSite HAnimSite982 = createNode("HAnimSite");
HAnimSite982.name = "r_ectocanthus_pt";
HAnimSite982.DEF = "hanim_r_ectocanthus_pt";
TouchSensor TouchSensor983 = createNode("TouchSensor");
TouchSensor983.description = "HAnimSite r_ectocanthus_pt";
HAnimSite982.children = new MFNode();

HAnimSite982.children[0] = TouchSensor983;

Shape Shape984 = createNode("Shape");
Shape984.USE = "HAnimSiteShape";
HAnimSite982.children[1] = Shape984;

HAnimSegment956.children[8] = HAnimSite982;

HAnimSite HAnimSite985 = createNode("HAnimSite");
HAnimSite985.name = "r_infraorbitale_pt";
HAnimSite985.DEF = "hanim_r_infraorbitale_pt";
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
HAnimSite988.name = "r_tragion_pt";
HAnimSite988.DEF = "hanim_r_tragion_pt";
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
HAnimSite991.name = "sellion_pt";
HAnimSite991.DEF = "hanim_sellion_pt";
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
HAnimSite994.name = "skull_vertex_pt";
HAnimSite994.DEF = "hanim_skull_vertex_pt";
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
HAnimJoint997.name = "skullbase";
HAnimJoint997.DEF = "hanim_skullbase";
HAnimJoint997.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimSegment HAnimSegment998 = createNode("HAnimSegment");
HAnimSegment998.name = "skull";
HAnimSegment998.DEF = "hanim_skull";
Transform Transform999 = createNode("Transform");
Transform999.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Transform Transform1000 = createNode("Transform");
//Empty Transform
Shape Shape1001 = createNode("Shape");
Shape1001.USE = "HAnimJointShape";
Transform1000.child = new undefined();

Transform1000.child[0] = Shape1001;

Transform999.children = new MFNode();

Transform999.children[0] = Transform1000;

HAnimSegment998.children = new MFNode();

HAnimSegment998.children[0] = Transform999;

Shape Shape1002 = createNode("Shape");
LineSet LineSet1003 = createNode("LineSet");
LineSet1003.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1004 = createNode("Coordinate");
Coordinate1004.point = new MFVec3f(new float[0.0044,1.6209,0.0236,2.2365,1.87,1.9285]);
LineSet1003.coord = Coordinate1004;

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA ColorRGBA1005 = createNode("ColorRGBA");
ColorRGBA1005.USE = "HAnimSegmentLineColorRGBA";
LineSet1003.color = ColorRGBA1005;

Shape1002.geometry = LineSet1003;

HAnimSegment998.children[1] = Shape1002;

Shape Shape1006 = createNode("Shape");
LineSet LineSet1007 = createNode("LineSet");
LineSet1007.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1008 = createNode("Coordinate");
Coordinate1008.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-2.2535,1.87,1.9285]);
LineSet1007.coord = Coordinate1008;

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA ColorRGBA1009 = createNode("ColorRGBA");
ColorRGBA1009.USE = "HAnimSegmentLineColorRGBA";
LineSet1007.color = ColorRGBA1009;

Shape1006.geometry = LineSet1007;

HAnimSegment998.children[2] = Shape1006;

Shape Shape1010 = createNode("Shape");
LineSet LineSet1011 = createNode("LineSet");
LineSet1011.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1012 = createNode("Coordinate");
Coordinate1012.point = new MFVec3f(new float[0.0044,1.6209,0.0236,2.1305,1.8444,4.1555]);
LineSet1011.coord = Coordinate1012;

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA ColorRGBA1013 = createNode("ColorRGBA");
ColorRGBA1013.USE = "HAnimSegmentLineColorRGBA";
LineSet1011.color = ColorRGBA1013;

Shape1010.geometry = LineSet1011;

HAnimSegment998.children[3] = Shape1010;

Shape Shape1014 = createNode("Shape");
LineSet LineSet1015 = createNode("LineSet");
LineSet1015.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1016 = createNode("Coordinate");
Coordinate1016.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-2.1475,1.8444,4.1555]);
LineSet1015.coord = Coordinate1016;

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA ColorRGBA1017 = createNode("ColorRGBA");
ColorRGBA1017.USE = "HAnimSegmentLineColorRGBA";
LineSet1015.color = ColorRGBA1017;

Shape1014.geometry = LineSet1015;

HAnimSegment998.children[4] = Shape1014;

Shape Shape1018 = createNode("Shape");
LineSet LineSet1019 = createNode("LineSet");
LineSet1019.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1020 = createNode("Coordinate");
Coordinate1020.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.9581,1.8563,5.2175]);
LineSet1019.coord = Coordinate1020;

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA ColorRGBA1021 = createNode("ColorRGBA");
ColorRGBA1021.USE = "HAnimSegmentLineColorRGBA";
LineSet1019.color = ColorRGBA1021;

Shape1018.geometry = LineSet1019;

HAnimSegment998.children[5] = Shape1018;

Shape Shape1022 = createNode("Shape");
LineSet LineSet1023 = createNode("LineSet");
LineSet1023.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1024 = createNode("Coordinate");
Coordinate1024.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.9751,1.8563,5.2175]);
LineSet1023.coord = Coordinate1024;

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA ColorRGBA1025 = createNode("ColorRGBA");
ColorRGBA1025.USE = "HAnimSegmentLineColorRGBA";
LineSet1023.color = ColorRGBA1025;

Shape1022.geometry = LineSet1023;

HAnimSegment998.children[6] = Shape1022;

Shape Shape1026 = createNode("Shape");
LineSet LineSet1027 = createNode("LineSet");
LineSet1027.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1028 = createNode("Coordinate");
Coordinate1028.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0085,1.7229,1.148]);
LineSet1027.coord = Coordinate1028;

//from skullbase to temporomandibular vertices 2
ColorRGBA ColorRGBA1029 = createNode("ColorRGBA");
ColorRGBA1029.USE = "HAnimSegmentLineColorRGBA";
LineSet1027.color = ColorRGBA1029;

Shape1026.geometry = LineSet1027;

HAnimSegment998.children[7] = Shape1026;

HAnimSite HAnimSite1030 = createNode("HAnimSite");
HAnimSite1030.name = "l_gonion_pt";
HAnimSite1030.DEF = "hanim_l_gonion_pt";
HAnimSite1030.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
TouchSensor TouchSensor1031 = createNode("TouchSensor");
TouchSensor1031.description = "HAnimSite l_gonion_pt";
HAnimSite1030.children = new MFNode();

HAnimSite1030.children[0] = TouchSensor1031;

Shape Shape1032 = createNode("Shape");
Shape1032.USE = "HAnimSiteShape";
HAnimSite1030.children[1] = Shape1032;

HAnimSegment998.children[8] = HAnimSite1030;

HAnimSite HAnimSite1033 = createNode("HAnimSite");
HAnimSite1033.name = "menton_pt";
HAnimSite1033.DEF = "hanim_menton_pt";
TouchSensor TouchSensor1034 = createNode("TouchSensor");
TouchSensor1034.description = "HAnimSite menton_pt";
HAnimSite1033.children = new MFNode();

HAnimSite1033.children[0] = TouchSensor1034;

Shape Shape1035 = createNode("Shape");
Shape1035.USE = "HAnimSiteShape";
HAnimSite1033.children[1] = Shape1035;

HAnimSegment998.children[9] = HAnimSite1033;

HAnimSite HAnimSite1036 = createNode("HAnimSite");
HAnimSite1036.name = "r_gonion_pt";
HAnimSite1036.DEF = "hanim_r_gonion_pt";
HAnimSite1036.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
TouchSensor TouchSensor1037 = createNode("TouchSensor");
TouchSensor1037.description = "HAnimSite r_gonion_pt";
HAnimSite1036.children = new MFNode();

HAnimSite1036.children[0] = TouchSensor1037;

Shape Shape1038 = createNode("Shape");
Shape1038.USE = "HAnimSiteShape";
HAnimSite1036.children[1] = Shape1038;

HAnimSegment998.children[10] = HAnimSite1036;

HAnimSite HAnimSite1039 = createNode("HAnimSite");
HAnimSite1039.name = "supramenton_pt";
HAnimSite1039.DEF = "hanim_supramenton_pt";
HAnimSite1039.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
TouchSensor TouchSensor1040 = createNode("TouchSensor");
TouchSensor1040.description = "HAnimSite supramenton_pt";
HAnimSite1039.children = new MFNode();

HAnimSite1039.children[0] = TouchSensor1040;

Shape Shape1041 = createNode("Shape");
Shape1041.USE = "HAnimSiteShape";
HAnimSite1039.children[1] = Shape1041;

HAnimSegment998.children[11] = HAnimSite1039;

HAnimJoint997.children = new MFNode();

HAnimJoint997.children[0] = HAnimSegment998;

HAnimJoint HAnimJoint1042 = createNode("HAnimJoint");
HAnimJoint1042.name = "l_eyelid_joint";
HAnimJoint1042.DEF = "hanim_l_eyelid_joint";
HAnimJoint1042.center = new SFVec3f(new float[2.2365,1.87,1.9285]);
HAnimJoint997.children[1] = HAnimJoint1042;

HAnimJoint HAnimJoint1043 = createNode("HAnimJoint");
HAnimJoint1043.name = "r_eyelid_joint";
HAnimJoint1043.DEF = "hanim_r_eyelid_joint";
HAnimJoint1043.center = new SFVec3f(new float[-2.2535,1.87,1.9285]);
HAnimJoint997.children[2] = HAnimJoint1043;

HAnimJoint HAnimJoint1044 = createNode("HAnimJoint");
HAnimJoint1044.name = "l_eyeball_joint";
HAnimJoint1044.DEF = "hanim_l_eyeball_joint";
HAnimJoint1044.center = new SFVec3f(new float[2.1305,1.8444,4.1555]);
HAnimJoint997.children[3] = HAnimJoint1044;

HAnimJoint HAnimJoint1045 = createNode("HAnimJoint");
HAnimJoint1045.name = "r_eyeball_joint";
HAnimJoint1045.DEF = "hanim_r_eyeball_joint";
HAnimJoint1045.center = new SFVec3f(new float[-2.1475,1.8444,4.1555]);
HAnimJoint997.children[4] = HAnimJoint1045;

HAnimJoint HAnimJoint1046 = createNode("HAnimJoint");
HAnimJoint1046.name = "l_eyebrow_joint";
HAnimJoint1046.DEF = "hanim_l_eyebrow_joint";
HAnimJoint1046.center = new SFVec3f(new float[0.9581,1.8563,5.2175]);
HAnimJoint997.children[5] = HAnimJoint1046;

HAnimJoint HAnimJoint1047 = createNode("HAnimJoint");
HAnimJoint1047.name = "r_eyebrow_joint";
HAnimJoint1047.DEF = "hanim_r_eyebrow_joint";
HAnimJoint1047.center = new SFVec3f(new float[-0.9751,1.8563,5.2175]);
HAnimJoint997.children[6] = HAnimJoint1047;

HAnimJoint HAnimJoint1048 = createNode("HAnimJoint");
HAnimJoint1048.name = "temporomandibular";
HAnimJoint1048.DEF = "hanim_temporomandibular";
HAnimJoint1048.center = new SFVec3f(new float[-0.0085,1.7229,1.148]);
HAnimJoint997.children[7] = HAnimJoint1048;

HAnimJoint955.children[1] = HAnimJoint997;

HAnimJoint946.children[1] = HAnimJoint955;

HAnimJoint934.children[1] = HAnimJoint946;

HAnimJoint925.children[1] = HAnimJoint934;

HAnimJoint916.children[1] = HAnimJoint925;

HAnimJoint907.children[1] = HAnimJoint916;

HAnimJoint898.children[1] = HAnimJoint907;

HAnimJoint845.children[1] = HAnimJoint898;

HAnimJoint HAnimJoint1049 = createNode("HAnimJoint");
HAnimJoint1049.name = "l_sternoclavicular";
HAnimJoint1049.DEF = "hanim_l_sternoclavicular";
HAnimJoint1049.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment1050 = createNode("HAnimSegment");
HAnimSegment1050.name = "l_clavicle";
HAnimSegment1050.DEF = "hanim_l_clavicle";
Transform Transform1051 = createNode("Transform");
Transform1051.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Transform Transform1052 = createNode("Transform");
//Empty Transform
Shape Shape1053 = createNode("Shape");
Shape1053.USE = "HAnimJointShape";
Transform1052.child = new undefined();

Transform1052.child[0] = Shape1053;

Transform1051.children = new MFNode();

Transform1051.children[0] = Transform1052;

HAnimSegment1050.children = new MFNode();

HAnimSegment1050.children[0] = Transform1051;

Shape Shape1054 = createNode("Shape");
LineSet LineSet1055 = createNode("LineSet");
LineSet1055.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1056 = createNode("Coordinate");
Coordinate1056.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet1055.coord = Coordinate1056;

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA ColorRGBA1057 = createNode("ColorRGBA");
ColorRGBA1057.USE = "HAnimSegmentLineColorRGBA";
LineSet1055.color = ColorRGBA1057;

Shape1054.geometry = LineSet1055;

HAnimSegment1050.children[1] = Shape1054;

HAnimJoint1049.children = new MFNode();

HAnimJoint1049.children[0] = HAnimSegment1050;

HAnimJoint HAnimJoint1058 = createNode("HAnimJoint");
HAnimJoint1058.name = "l_acromioclavicular";
HAnimJoint1058.DEF = "hanim_l_acromioclavicular";
HAnimJoint1058.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment1059 = createNode("HAnimSegment");
HAnimSegment1059.name = "l_scapula";
HAnimSegment1059.DEF = "hanim_l_scapula";
Transform Transform1060 = createNode("Transform");
Transform1060.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Transform Transform1061 = createNode("Transform");
//Empty Transform
Shape Shape1062 = createNode("Shape");
Shape1062.USE = "HAnimJointShape";
Transform1061.child = new undefined();

Transform1061.child[0] = Shape1062;

Transform1060.children = new MFNode();

Transform1060.children[0] = Transform1061;

HAnimSegment1059.children = new MFNode();

HAnimSegment1059.children[0] = Transform1060;

Shape Shape1063 = createNode("Shape");
LineSet LineSet1064 = createNode("LineSet");
LineSet1064.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1065 = createNode("Coordinate");
Coordinate1065.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet1064.coord = Coordinate1065;

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA ColorRGBA1066 = createNode("ColorRGBA");
ColorRGBA1066.USE = "HAnimSegmentLineColorRGBA";
LineSet1064.color = ColorRGBA1066;

Shape1063.geometry = LineSet1064;

HAnimSegment1059.children[1] = Shape1063;

HAnimSite HAnimSite1067 = createNode("HAnimSite");
HAnimSite1067.name = "l_bideltoid_pt";
HAnimSite1067.DEF = "hanim_l_bideltoid_pt";
TouchSensor TouchSensor1068 = createNode("TouchSensor");
TouchSensor1068.description = "HAnimSite l_bideltoid_pt";
HAnimSite1067.children = new MFNode();

HAnimSite1067.children[0] = TouchSensor1068;

Shape Shape1069 = createNode("Shape");
Shape1069.USE = "HAnimSiteShape";
HAnimSite1067.children[1] = Shape1069;

HAnimSegment1059.children[2] = HAnimSite1067;

HAnimSite HAnimSite1070 = createNode("HAnimSite");
HAnimSite1070.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite1070.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite1070.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor1071 = createNode("TouchSensor");
TouchSensor1071.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite1070.children = new MFNode();

HAnimSite1070.children[0] = TouchSensor1071;

Shape Shape1072 = createNode("Shape");
Shape1072.USE = "HAnimSiteShape";
HAnimSite1070.children[1] = Shape1072;

HAnimSegment1059.children[3] = HAnimSite1070;

HAnimJoint1058.children = new MFNode();

HAnimJoint1058.children[0] = HAnimSegment1059;

HAnimJoint HAnimJoint1073 = createNode("HAnimJoint");
HAnimJoint1073.name = "l_shoulder";
HAnimJoint1073.DEF = "hanim_l_shoulder";
HAnimJoint1073.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment1074 = createNode("HAnimSegment");
HAnimSegment1074.name = "l_upperarm";
HAnimSegment1074.DEF = "hanim_l_upperarm";
Transform Transform1075 = createNode("Transform");
Transform1075.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Transform Transform1076 = createNode("Transform");
//Empty Transform
Shape Shape1077 = createNode("Shape");
Shape1077.USE = "HAnimJointShape";
Transform1076.child = new undefined();

Transform1076.child[0] = Shape1077;

Transform1075.children = new MFNode();

Transform1075.children[0] = Transform1076;

HAnimSegment1074.children = new MFNode();

HAnimSegment1074.children[0] = Transform1075;

Shape Shape1078 = createNode("Shape");
LineSet LineSet1079 = createNode("LineSet");
LineSet1079.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1080 = createNode("Coordinate");
Coordinate1080.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet1079.coord = Coordinate1080;

//from l_shoulder to l_elbow vertices 2
ColorRGBA ColorRGBA1081 = createNode("ColorRGBA");
ColorRGBA1081.USE = "HAnimSegmentLineColorRGBA";
LineSet1079.color = ColorRGBA1081;

Shape1078.geometry = LineSet1079;

HAnimSegment1074.children[1] = Shape1078;

HAnimSite HAnimSite1082 = createNode("HAnimSite");
HAnimSite1082.name = "l_humeral_medial_epicondyles_pt";
HAnimSite1082.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite1082.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor1083 = createNode("TouchSensor");
TouchSensor1083.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite1082.children = new MFNode();

HAnimSite1082.children[0] = TouchSensor1083;

Shape Shape1084 = createNode("Shape");
Shape1084.USE = "HAnimSiteShape";
HAnimSite1082.children[1] = Shape1084;

HAnimSegment1074.children[2] = HAnimSite1082;

HAnimSite HAnimSite1085 = createNode("HAnimSite");
HAnimSite1085.name = "l_olecranon_pt";
HAnimSite1085.DEF = "hanim_l_olecranon_pt";
HAnimSite1085.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor1086 = createNode("TouchSensor");
TouchSensor1086.description = "HAnimSite l_olecranon_pt";
HAnimSite1085.children = new MFNode();

HAnimSite1085.children[0] = TouchSensor1086;

Shape Shape1087 = createNode("Shape");
Shape1087.USE = "HAnimSiteShape";
HAnimSite1085.children[1] = Shape1087;

HAnimSegment1074.children[3] = HAnimSite1085;

HAnimSite HAnimSite1088 = createNode("HAnimSite");
HAnimSite1088.name = "l_radial_styloid_pt";
HAnimSite1088.DEF = "hanim_l_radial_styloid_pt";
HAnimSite1088.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor1089 = createNode("TouchSensor");
TouchSensor1089.description = "HAnimSite l_radial_styloid_pt";
HAnimSite1088.children = new MFNode();

HAnimSite1088.children[0] = TouchSensor1089;

Shape Shape1090 = createNode("Shape");
Shape1090.USE = "HAnimSiteShape";
HAnimSite1088.children[1] = Shape1090;

HAnimSegment1074.children[4] = HAnimSite1088;

HAnimSite HAnimSite1091 = createNode("HAnimSite");
HAnimSite1091.name = "l_radiale_pt";
HAnimSite1091.DEF = "hanim_l_radiale_pt";
HAnimSite1091.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor1092 = createNode("TouchSensor");
TouchSensor1092.description = "HAnimSite l_radiale_pt";
HAnimSite1091.children = new MFNode();

HAnimSite1091.children[0] = TouchSensor1092;

Shape Shape1093 = createNode("Shape");
Shape1093.USE = "HAnimSiteShape";
HAnimSite1091.children[1] = Shape1093;

HAnimSegment1074.children[5] = HAnimSite1091;

HAnimJoint1073.children = new MFNode();

HAnimJoint1073.children[0] = HAnimSegment1074;

HAnimJoint HAnimJoint1094 = createNode("HAnimJoint");
HAnimJoint1094.name = "l_elbow";
HAnimJoint1094.DEF = "hanim_l_elbow";
HAnimJoint1094.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment1095 = createNode("HAnimSegment");
HAnimSegment1095.name = "l_forearm";
HAnimSegment1095.DEF = "hanim_l_forearm";
Transform Transform1096 = createNode("Transform");
Transform1096.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform Transform1097 = createNode("Transform");
//Empty Transform
Shape Shape1098 = createNode("Shape");
Shape1098.USE = "HAnimJointShape";
Transform1097.child = new undefined();

Transform1097.child[0] = Shape1098;

Transform1096.children = new MFNode();

Transform1096.children[0] = Transform1097;

HAnimSegment1095.children = new MFNode();

HAnimSegment1095.children[0] = Transform1096;

Shape Shape1099 = createNode("Shape");
LineSet LineSet1100 = createNode("LineSet");
LineSet1100.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1101 = createNode("Coordinate");
Coordinate1101.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet1100.coord = Coordinate1101;

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA ColorRGBA1102 = createNode("ColorRGBA");
ColorRGBA1102.USE = "HAnimSegmentLineColorRGBA";
LineSet1100.color = ColorRGBA1102;

Shape1099.geometry = LineSet1100;

HAnimSegment1095.children[1] = Shape1099;

HAnimSite HAnimSite1103 = createNode("HAnimSite");
HAnimSite1103.name = "l_ulnar_styloid_pt";
HAnimSite1103.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1103.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor1104 = createNode("TouchSensor");
TouchSensor1104.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite1103.children = new MFNode();

HAnimSite1103.children[0] = TouchSensor1104;

Shape Shape1105 = createNode("Shape");
Shape1105.USE = "HAnimSiteShape";
HAnimSite1103.children[1] = Shape1105;

HAnimSegment1095.children[2] = HAnimSite1103;

HAnimJoint1094.children = new MFNode();

HAnimJoint1094.children[0] = HAnimSegment1095;

HAnimJoint HAnimJoint1106 = createNode("HAnimJoint");
HAnimJoint1106.name = "l_radiocarpal";
HAnimJoint1106.DEF = "hanim_l_radiocarpal";
HAnimJoint1106.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment1107 = createNode("HAnimSegment");
HAnimSegment1107.name = "l_carpal";
HAnimSegment1107.DEF = "hanim_l_carpal";
Transform Transform1108 = createNode("Transform");
Transform1108.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1108.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform1108.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
Transform Transform1109 = createNode("Transform");
Transform1109.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
Shape Shape1110 = createNode("Shape");
Shape1110.USE = "HAnimJointShape";
Transform1109.child = new undefined();

Transform1109.child[0] = Shape1110;

Transform1108.children = new MFNode();

Transform1108.children[0] = Transform1109;

HAnimSegment1107.children = new MFNode();

HAnimSegment1107.children[0] = Transform1108;

Shape Shape1111 = createNode("Shape");
LineSet LineSet1112 = createNode("LineSet");
LineSet1112.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1113 = createNode("Coordinate");
Coordinate1113.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,8.0485,0.9213,1.3235]);
LineSet1112.coord = Coordinate1113;

//from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA ColorRGBA1114 = createNode("ColorRGBA");
ColorRGBA1114.USE = "HAnimSegmentLineColorRGBA";
LineSet1112.color = ColorRGBA1114;

Shape1111.geometry = LineSet1112;

HAnimSegment1107.children[1] = Shape1111;

Shape Shape1115 = createNode("Shape");
LineSet LineSet1116 = createNode("LineSet");
LineSet1116.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1117 = createNode("Coordinate");
Coordinate1117.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,8.0485,0.9225,0.8386]);
LineSet1116.coord = Coordinate1117;

//from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA ColorRGBA1118 = createNode("ColorRGBA");
ColorRGBA1118.USE = "HAnimSegmentLineColorRGBA";
LineSet1116.color = ColorRGBA1118;

Shape1115.geometry = LineSet1116;

HAnimSegment1107.children[2] = Shape1115;

Shape Shape1119 = createNode("Shape");
LineSet LineSet1120 = createNode("LineSet");
LineSet1120.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1121 = createNode("Coordinate");
Coordinate1121.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,8.0395,0.9246,0.2513]);
LineSet1120.coord = Coordinate1121;

//from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA ColorRGBA1122 = createNode("ColorRGBA");
ColorRGBA1122.USE = "HAnimSegmentLineColorRGBA";
LineSet1120.color = ColorRGBA1122;

Shape1119.geometry = LineSet1120;

HAnimSegment1107.children[3] = Shape1119;

Shape Shape1123 = createNode("Shape");
LineSet LineSet1124 = createNode("LineSet");
LineSet1124.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1125 = createNode("Coordinate");
Coordinate1125.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,8.0395,0.921,-0.6795]);
LineSet1124.coord = Coordinate1125;

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA ColorRGBA1126 = createNode("ColorRGBA");
ColorRGBA1126.USE = "HAnimSegmentLineColorRGBA";
LineSet1124.color = ColorRGBA1126;

Shape1123.geometry = LineSet1124;

HAnimSegment1107.children[4] = Shape1123;

HAnimJoint1106.children = new MFNode();

HAnimJoint1106.children[0] = HAnimSegment1107;

HAnimJoint HAnimJoint1127 = createNode("HAnimJoint");
HAnimJoint1127.name = "l_midcarpal_1";
HAnimJoint1127.DEF = "hanim_l_midcarpal_1";
HAnimJoint1127.center = new SFVec3f(new float[8.0485,0.9213,1.3235]);
HAnimSegment HAnimSegment1128 = createNode("HAnimSegment");
HAnimSegment1128.name = "l_trapezium";
HAnimSegment1128.DEF = "hanim_l_trapezium";
Transform Transform1129 = createNode("Transform");
Transform1129.translation = new SFVec3f(new float[8.0485,0.9213,1.3235]);
Transform Transform1130 = createNode("Transform");
//Empty Transform
Shape Shape1131 = createNode("Shape");
Shape1131.USE = "HAnimJointShape";
Transform1130.child = new undefined();

Transform1130.child[0] = Shape1131;

Transform1129.children = new MFNode();

Transform1129.children[0] = Transform1130;

HAnimSegment1128.children = new MFNode();

HAnimSegment1128.children[0] = Transform1129;

Shape Shape1132 = createNode("Shape");
LineSet LineSet1133 = createNode("LineSet");
LineSet1133.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1134 = createNode("Coordinate");
Coordinate1134.point = new MFVec3f(new float[8.0485,0.9213,1.3235,0.1924,0.8472,-0.0534]);
LineSet1133.coord = Coordinate1134;

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA1135 = createNode("ColorRGBA");
ColorRGBA1135.USE = "HAnimSegmentLineColorRGBA";
LineSet1133.color = ColorRGBA1135;

Shape1132.geometry = LineSet1133;

HAnimSegment1128.children[1] = Shape1132;

HAnimJoint1127.children = new MFNode();

HAnimJoint1127.children[0] = HAnimSegment1128;

HAnimJoint HAnimJoint1136 = createNode("HAnimJoint");
HAnimJoint1136.name = "l_carpometacarpal_1";
HAnimJoint1136.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1136.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment1137 = createNode("HAnimSegment");
HAnimSegment1137.name = "l_metacarpal_1";
HAnimSegment1137.DEF = "hanim_l_metacarpal_1";
Transform Transform1138 = createNode("Transform");
Transform1138.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Transform Transform1139 = createNode("Transform");
//Empty Transform
Shape Shape1140 = createNode("Shape");
Shape1140.USE = "HAnimJointShape";
Transform1139.child = new undefined();

Transform1139.child[0] = Shape1140;

Transform1138.children = new MFNode();

Transform1138.children[0] = Transform1139;

HAnimSegment1137.children = new MFNode();

HAnimSegment1137.children[0] = Transform1138;

Shape Shape1141 = createNode("Shape");
LineSet LineSet1142 = createNode("LineSet");
LineSet1142.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1143 = createNode("Coordinate");
Coordinate1143.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1142.coord = Coordinate1143;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA1144 = createNode("ColorRGBA");
ColorRGBA1144.USE = "HAnimSegmentLineColorRGBA";
LineSet1142.color = ColorRGBA1144;

Shape1141.geometry = LineSet1142;

HAnimSegment1137.children[1] = Shape1141;

HAnimJoint1136.children = new MFNode();

HAnimJoint1136.children[0] = HAnimSegment1137;

HAnimJoint HAnimJoint1145 = createNode("HAnimJoint");
HAnimJoint1145.name = "l_metacarpophalangeal_1";
HAnimJoint1145.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1145.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment1146 = createNode("HAnimSegment");
HAnimSegment1146.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1146.DEF = "hanim_l_carpal_proximal_phalanx_1";
Transform Transform1147 = createNode("Transform");
Transform1147.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Transform Transform1148 = createNode("Transform");
//Empty Transform
Shape Shape1149 = createNode("Shape");
Shape1149.USE = "HAnimJointShape";
Transform1148.child = new undefined();

Transform1148.child[0] = Shape1149;

Transform1147.children = new MFNode();

Transform1147.children[0] = Transform1148;

HAnimSegment1146.children = new MFNode();

HAnimSegment1146.children[0] = Transform1147;

Shape Shape1150 = createNode("Shape");
LineSet LineSet1151 = createNode("LineSet");
LineSet1151.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1152 = createNode("Coordinate");
Coordinate1152.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1151.coord = Coordinate1152;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA1153 = createNode("ColorRGBA");
ColorRGBA1153.USE = "HAnimSegmentLineColorRGBA";
LineSet1151.color = ColorRGBA1153;

Shape1150.geometry = LineSet1151;

HAnimSegment1146.children[1] = Shape1150;

HAnimSite HAnimSite1154 = createNode("HAnimSite");
HAnimSite1154.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite1154.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor1155 = createNode("TouchSensor");
TouchSensor1155.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite1154.children = new MFNode();

HAnimSite1154.children[0] = TouchSensor1155;

Shape Shape1156 = createNode("Shape");
Shape1156.USE = "HAnimSiteShape";
HAnimSite1154.children[1] = Shape1156;

HAnimSegment1146.children[2] = HAnimSite1154;

HAnimJoint1145.children = new MFNode();

HAnimJoint1145.children[0] = HAnimSegment1146;

HAnimJoint HAnimJoint1157 = createNode("HAnimJoint");
HAnimJoint1157.name = "l_carpal_interphalangeal_1";
HAnimJoint1157.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1157.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1145.children[1] = HAnimJoint1157;

HAnimJoint1136.children[1] = HAnimJoint1145;

HAnimJoint1127.children[1] = HAnimJoint1136;

HAnimJoint1106.children[1] = HAnimJoint1127;

HAnimJoint HAnimJoint1158 = createNode("HAnimJoint");
HAnimJoint1158.name = "l_midcarpal_2";
HAnimJoint1158.DEF = "hanim_l_midcarpal_2";
HAnimJoint1158.center = new SFVec3f(new float[8.0485,0.9225,0.8386]);
HAnimSegment HAnimSegment1159 = createNode("HAnimSegment");
HAnimSegment1159.name = "l_trapezoid";
HAnimSegment1159.DEF = "hanim_l_trapezoid";
Transform Transform1160 = createNode("Transform");
Transform1160.translation = new SFVec3f(new float[8.0485,0.9225,0.8386]);
Transform Transform1161 = createNode("Transform");
//Empty Transform
Shape Shape1162 = createNode("Shape");
Shape1162.USE = "HAnimJointShape";
Transform1161.child = new undefined();

Transform1161.child[0] = Shape1162;

Transform1160.children = new MFNode();

Transform1160.children[0] = Transform1161;

HAnimSegment1159.children = new MFNode();

HAnimSegment1159.children[0] = Transform1160;

Shape Shape1163 = createNode("Shape");
LineSet LineSet1164 = createNode("LineSet");
LineSet1164.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1165 = createNode("Coordinate");
Coordinate1165.point = new MFVec3f(new float[8.0485,0.9225,0.8386,0.1983,0.8024,-0.028]);
LineSet1164.coord = Coordinate1165;

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA1166 = createNode("ColorRGBA");
ColorRGBA1166.USE = "HAnimSegmentLineColorRGBA";
LineSet1164.color = ColorRGBA1166;

Shape1163.geometry = LineSet1164;

HAnimSegment1159.children[1] = Shape1163;

HAnimSite HAnimSite1167 = createNode("HAnimSite");
HAnimSite1167.name = "l_metacarpal_phalanx_2_pt";
HAnimSite1167.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1167.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor1168 = createNode("TouchSensor");
TouchSensor1168.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite1167.children = new MFNode();

HAnimSite1167.children[0] = TouchSensor1168;

Shape Shape1169 = createNode("Shape");
Shape1169.USE = "HAnimSiteShape";
HAnimSite1167.children[1] = Shape1169;

HAnimSegment1159.children[2] = HAnimSite1167;

HAnimJoint1158.children = new MFNode();

HAnimJoint1158.children[0] = HAnimSegment1159;

HAnimJoint HAnimJoint1170 = createNode("HAnimJoint");
HAnimJoint1170.name = "l_carpometacarpal_2";
HAnimJoint1170.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1170.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment1171 = createNode("HAnimSegment");
HAnimSegment1171.name = "l_metacarpal_2";
HAnimSegment1171.DEF = "hanim_l_metacarpal_2";
Transform Transform1172 = createNode("Transform");
Transform1172.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Transform Transform1173 = createNode("Transform");
//Empty Transform
Shape Shape1174 = createNode("Shape");
Shape1174.USE = "HAnimJointShape";
Transform1173.child = new undefined();

Transform1173.child[0] = Shape1174;

Transform1172.children = new MFNode();

Transform1172.children[0] = Transform1173;

HAnimSegment1171.children = new MFNode();

HAnimSegment1171.children[0] = Transform1172;

Shape Shape1175 = createNode("Shape");
LineSet LineSet1176 = createNode("LineSet");
LineSet1176.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1177 = createNode("Coordinate");
Coordinate1177.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1176.coord = Coordinate1177;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA1178 = createNode("ColorRGBA");
ColorRGBA1178.USE = "HAnimSegmentLineColorRGBA";
LineSet1176.color = ColorRGBA1178;

Shape1175.geometry = LineSet1176;

HAnimSegment1171.children[1] = Shape1175;

HAnimJoint1170.children = new MFNode();

HAnimJoint1170.children[0] = HAnimSegment1171;

HAnimJoint HAnimJoint1179 = createNode("HAnimJoint");
HAnimJoint1179.name = "l_metacarpophalangeal_2";
HAnimJoint1179.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1179.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment1180 = createNode("HAnimSegment");
HAnimSegment1180.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1180.DEF = "hanim_l_carpal_proximal_phalanx_2";
Transform Transform1181 = createNode("Transform");
Transform1181.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Transform Transform1182 = createNode("Transform");
//Empty Transform
Shape Shape1183 = createNode("Shape");
Shape1183.USE = "HAnimJointShape";
Transform1182.child = new undefined();

Transform1182.child[0] = Shape1183;

Transform1181.children = new MFNode();

Transform1181.children[0] = Transform1182;

HAnimSegment1180.children = new MFNode();

HAnimSegment1180.children[0] = Transform1181;

Shape Shape1184 = createNode("Shape");
LineSet LineSet1185 = createNode("LineSet");
LineSet1185.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1186 = createNode("Coordinate");
Coordinate1186.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1185.coord = Coordinate1186;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1187 = createNode("ColorRGBA");
ColorRGBA1187.USE = "HAnimSegmentLineColorRGBA";
LineSet1185.color = ColorRGBA1187;

Shape1184.geometry = LineSet1185;

HAnimSegment1180.children[1] = Shape1184;

HAnimJoint1179.children = new MFNode();

HAnimJoint1179.children[0] = HAnimSegment1180;

HAnimJoint HAnimJoint1188 = createNode("HAnimJoint");
HAnimJoint1188.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1188.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1188.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment1189 = createNode("HAnimSegment");
HAnimSegment1189.name = "l_carpal_middle_phalanx_2";
HAnimSegment1189.DEF = "hanim_l_carpal_middle_phalanx_2";
Transform Transform1190 = createNode("Transform");
Transform1190.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Transform Transform1191 = createNode("Transform");
//Empty Transform
Shape Shape1192 = createNode("Shape");
Shape1192.USE = "HAnimJointShape";
Transform1191.child = new undefined();

Transform1191.child[0] = Shape1192;

Transform1190.children = new MFNode();

Transform1190.children[0] = Transform1191;

HAnimSegment1189.children = new MFNode();

HAnimSegment1189.children[0] = Transform1190;

Shape Shape1193 = createNode("Shape");
LineSet LineSet1194 = createNode("LineSet");
LineSet1194.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1195 = createNode("Coordinate");
Coordinate1195.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1194.coord = Coordinate1195;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1196 = createNode("ColorRGBA");
ColorRGBA1196.USE = "HAnimSegmentLineColorRGBA";
LineSet1194.color = ColorRGBA1196;

Shape1193.geometry = LineSet1194;

HAnimSegment1189.children[1] = Shape1193;

HAnimSite HAnimSite1197 = createNode("HAnimSite");
HAnimSite1197.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite1197.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor1198 = createNode("TouchSensor");
TouchSensor1198.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite1197.children = new MFNode();

HAnimSite1197.children[0] = TouchSensor1198;

Shape Shape1199 = createNode("Shape");
Shape1199.USE = "HAnimSiteShape";
HAnimSite1197.children[1] = Shape1199;

HAnimSegment1189.children[2] = HAnimSite1197;

HAnimSite HAnimSite1200 = createNode("HAnimSite");
HAnimSite1200.name = "l_dactylion_pt";
HAnimSite1200.DEF = "hanim_l_dactylion_pt";
HAnimSite1200.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor1201 = createNode("TouchSensor");
TouchSensor1201.description = "HAnimSite l_dactylion_pt";
HAnimSite1200.children = new MFNode();

HAnimSite1200.children[0] = TouchSensor1201;

Shape Shape1202 = createNode("Shape");
Shape1202.USE = "HAnimSiteShape";
HAnimSite1200.children[1] = Shape1202;

HAnimSegment1189.children[3] = HAnimSite1200;

HAnimJoint1188.children = new MFNode();

HAnimJoint1188.children[0] = HAnimSegment1189;

HAnimJoint HAnimJoint1203 = createNode("HAnimJoint");
HAnimJoint1203.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1203.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1203.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1188.children[1] = HAnimJoint1203;

HAnimJoint1179.children[1] = HAnimJoint1188;

HAnimJoint1170.children[1] = HAnimJoint1179;

HAnimJoint1158.children[1] = HAnimJoint1170;

HAnimJoint1106.children[2] = HAnimJoint1158;

HAnimJoint HAnimJoint1204 = createNode("HAnimJoint");
HAnimJoint1204.name = "l_midcarpal_3";
HAnimJoint1204.DEF = "hanim_l_midcarpal_3";
HAnimJoint1204.center = new SFVec3f(new float[8.0395,0.9246,0.2513]);
HAnimSegment HAnimSegment1205 = createNode("HAnimSegment");
HAnimSegment1205.name = "l_capitate";
HAnimSegment1205.DEF = "hanim_l_capitate";
Transform Transform1206 = createNode("Transform");
Transform1206.translation = new SFVec3f(new float[8.0395,0.9246,0.2513]);
Transform Transform1207 = createNode("Transform");
//Empty Transform
Shape Shape1208 = createNode("Shape");
Shape1208.USE = "HAnimJointShape";
Transform1207.child = new undefined();

Transform1207.child[0] = Shape1208;

Transform1206.children = new MFNode();

Transform1206.children[0] = Transform1207;

HAnimSegment1205.children = new MFNode();

HAnimSegment1205.children[0] = Transform1206;

Shape Shape1209 = createNode("Shape");
LineSet LineSet1210 = createNode("LineSet");
LineSet1210.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1211 = createNode("Coordinate");
Coordinate1211.point = new MFVec3f(new float[8.0395,0.9246,0.2513,0.1987,0.8029,-0.053]);
LineSet1210.coord = Coordinate1211;

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA1212 = createNode("ColorRGBA");
ColorRGBA1212.USE = "HAnimSegmentLineColorRGBA";
LineSet1210.color = ColorRGBA1212;

Shape1209.geometry = LineSet1210;

HAnimSegment1205.children[1] = Shape1209;

HAnimSite HAnimSite1213 = createNode("HAnimSite");
HAnimSite1213.name = "l_metacarpal_phalanx_3_pt";
HAnimSite1213.DEF = "hanim_l_metacarpal_phalanx_3_pt";
TouchSensor TouchSensor1214 = createNode("TouchSensor");
TouchSensor1214.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite1213.children = new MFNode();

HAnimSite1213.children[0] = TouchSensor1214;

Shape Shape1215 = createNode("Shape");
Shape1215.USE = "HAnimSiteShape";
HAnimSite1213.children[1] = Shape1215;

HAnimSegment1205.children[2] = HAnimSite1213;

HAnimJoint1204.children = new MFNode();

HAnimJoint1204.children[0] = HAnimSegment1205;

HAnimJoint HAnimJoint1216 = createNode("HAnimJoint");
HAnimJoint1216.name = "l_carpometacarpal_3";
HAnimJoint1216.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1216.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment1217 = createNode("HAnimSegment");
HAnimSegment1217.name = "l_metacarpal_3";
HAnimSegment1217.DEF = "hanim_l_metacarpal_3";
Transform Transform1218 = createNode("Transform");
Transform1218.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Transform Transform1219 = createNode("Transform");
//Empty Transform
Shape Shape1220 = createNode("Shape");
Shape1220.USE = "HAnimJointShape";
Transform1219.child = new undefined();

Transform1219.child[0] = Shape1220;

Transform1218.children = new MFNode();

Transform1218.children[0] = Transform1219;

HAnimSegment1217.children = new MFNode();

HAnimSegment1217.children[0] = Transform1218;

Shape Shape1221 = createNode("Shape");
LineSet LineSet1222 = createNode("LineSet");
LineSet1222.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1223 = createNode("Coordinate");
Coordinate1223.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1222.coord = Coordinate1223;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA1224 = createNode("ColorRGBA");
ColorRGBA1224.USE = "HAnimSegmentLineColorRGBA";
LineSet1222.color = ColorRGBA1224;

Shape1221.geometry = LineSet1222;

HAnimSegment1217.children[1] = Shape1221;

HAnimJoint1216.children = new MFNode();

HAnimJoint1216.children[0] = HAnimSegment1217;

HAnimJoint HAnimJoint1225 = createNode("HAnimJoint");
HAnimJoint1225.name = "l_metacarpophalangeal_3";
HAnimJoint1225.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1225.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment1226 = createNode("HAnimSegment");
HAnimSegment1226.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1226.DEF = "hanim_l_carpal_proximal_phalanx_3";
Transform Transform1227 = createNode("Transform");
Transform1227.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Transform Transform1228 = createNode("Transform");
//Empty Transform
Shape Shape1229 = createNode("Shape");
Shape1229.USE = "HAnimJointShape";
Transform1228.child = new undefined();

Transform1228.child[0] = Shape1229;

Transform1227.children = new MFNode();

Transform1227.children[0] = Transform1228;

HAnimSegment1226.children = new MFNode();

HAnimSegment1226.children[0] = Transform1227;

Shape Shape1230 = createNode("Shape");
LineSet LineSet1231 = createNode("LineSet");
LineSet1231.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1232 = createNode("Coordinate");
Coordinate1232.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1231.coord = Coordinate1232;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1233 = createNode("ColorRGBA");
ColorRGBA1233.USE = "HAnimSegmentLineColorRGBA";
LineSet1231.color = ColorRGBA1233;

Shape1230.geometry = LineSet1231;

HAnimSegment1226.children[1] = Shape1230;

HAnimJoint1225.children = new MFNode();

HAnimJoint1225.children[0] = HAnimSegment1226;

HAnimJoint HAnimJoint1234 = createNode("HAnimJoint");
HAnimJoint1234.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1234.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1234.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment1235 = createNode("HAnimSegment");
HAnimSegment1235.name = "l_carpal_middle_phalanx_3";
HAnimSegment1235.DEF = "hanim_l_carpal_middle_phalanx_3";
Transform Transform1236 = createNode("Transform");
Transform1236.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Transform Transform1237 = createNode("Transform");
//Empty Transform
Shape Shape1238 = createNode("Shape");
Shape1238.USE = "HAnimJointShape";
Transform1237.child = new undefined();

Transform1237.child[0] = Shape1238;

Transform1236.children = new MFNode();

Transform1236.children[0] = Transform1237;

HAnimSegment1235.children = new MFNode();

HAnimSegment1235.children[0] = Transform1236;

Shape Shape1239 = createNode("Shape");
LineSet LineSet1240 = createNode("LineSet");
LineSet1240.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1241 = createNode("Coordinate");
Coordinate1241.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1240.coord = Coordinate1241;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1242 = createNode("ColorRGBA");
ColorRGBA1242.USE = "HAnimSegmentLineColorRGBA";
LineSet1240.color = ColorRGBA1242;

Shape1239.geometry = LineSet1240;

HAnimSegment1235.children[1] = Shape1239;

HAnimSite HAnimSite1243 = createNode("HAnimSite");
HAnimSite1243.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite1243.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor1244 = createNode("TouchSensor");
TouchSensor1244.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite1243.children = new MFNode();

HAnimSite1243.children[0] = TouchSensor1244;

Shape Shape1245 = createNode("Shape");
Shape1245.USE = "HAnimSiteShape";
HAnimSite1243.children[1] = Shape1245;

HAnimSegment1235.children[2] = HAnimSite1243;

HAnimJoint1234.children = new MFNode();

HAnimJoint1234.children[0] = HAnimSegment1235;

HAnimJoint HAnimJoint1246 = createNode("HAnimJoint");
HAnimJoint1246.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1246.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1246.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1234.children[1] = HAnimJoint1246;

HAnimJoint1225.children[1] = HAnimJoint1234;

HAnimJoint1216.children[1] = HAnimJoint1225;

HAnimJoint1204.children[1] = HAnimJoint1216;

HAnimJoint1106.children[3] = HAnimJoint1204;

HAnimJoint HAnimJoint1247 = createNode("HAnimJoint");
HAnimJoint1247.name = "l_midcarpal_4_5";
HAnimJoint1247.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint1247.center = new SFVec3f(new float[8.0395,0.921,-0.6795]);
HAnimSegment HAnimSegment1248 = createNode("HAnimSegment");
HAnimSegment1248.name = "l_hamate";
HAnimSegment1248.DEF = "hanim_l_hamate";
Transform Transform1249 = createNode("Transform");
Transform1249.translation = new SFVec3f(new float[8.0395,0.921,-0.6795]);
Transform Transform1250 = createNode("Transform");
//Empty Transform
Shape Shape1251 = createNode("Shape");
Shape1251.USE = "HAnimJointShape";
Transform1250.child = new undefined();

Transform1250.child[0] = Shape1251;

Transform1249.children = new MFNode();

Transform1249.children[0] = Transform1250;

HAnimSegment1248.children = new MFNode();

HAnimSegment1248.children[0] = Transform1249;

Shape Shape1252 = createNode("Shape");
LineSet LineSet1253 = createNode("LineSet");
LineSet1253.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1254 = createNode("Coordinate");
Coordinate1254.point = new MFVec3f(new float[8.0395,0.921,-0.6795,0.1956,0.8019,-0.0794]);
LineSet1253.coord = Coordinate1254;

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA1255 = createNode("ColorRGBA");
ColorRGBA1255.USE = "HAnimSegmentLineColorRGBA";
LineSet1253.color = ColorRGBA1255;

Shape1252.geometry = LineSet1253;

HAnimSegment1248.children[1] = Shape1252;

Shape Shape1256 = createNode("Shape");
LineSet LineSet1257 = createNode("LineSet");
LineSet1257.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1258 = createNode("Coordinate");
Coordinate1258.point = new MFVec3f(new float[8.0395,0.921,-0.6795,0.1925,0.8066,-0.1036]);
LineSet1257.coord = Coordinate1258;

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA1259 = createNode("ColorRGBA");
ColorRGBA1259.USE = "HAnimSegmentLineColorRGBA";
LineSet1257.color = ColorRGBA1259;

Shape1256.geometry = LineSet1257;

HAnimSegment1248.children[2] = Shape1256;

HAnimSite HAnimSite1260 = createNode("HAnimSite");
HAnimSite1260.name = "l_metacarpal_phalanx_5_pt";
HAnimSite1260.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1260.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor1261 = createNode("TouchSensor");
TouchSensor1261.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite1260.children = new MFNode();

HAnimSite1260.children[0] = TouchSensor1261;

Shape Shape1262 = createNode("Shape");
Shape1262.USE = "HAnimSiteShape";
HAnimSite1260.children[1] = Shape1262;

HAnimSegment1248.children[3] = HAnimSite1260;

HAnimJoint1247.children = new MFNode();

HAnimJoint1247.children[0] = HAnimSegment1248;

HAnimJoint HAnimJoint1263 = createNode("HAnimJoint");
HAnimJoint1263.name = "l_carpometacarpal_4";
HAnimJoint1263.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1263.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment1264 = createNode("HAnimSegment");
HAnimSegment1264.name = "l_metacarpal_4";
HAnimSegment1264.DEF = "hanim_l_metacarpal_4";
Transform Transform1265 = createNode("Transform");
Transform1265.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Transform Transform1266 = createNode("Transform");
//Empty Transform
Shape Shape1267 = createNode("Shape");
Shape1267.USE = "HAnimJointShape";
Transform1266.child = new undefined();

Transform1266.child[0] = Shape1267;

Transform1265.children = new MFNode();

Transform1265.children[0] = Transform1266;

HAnimSegment1264.children = new MFNode();

HAnimSegment1264.children[0] = Transform1265;

Shape Shape1268 = createNode("Shape");
LineSet LineSet1269 = createNode("LineSet");
LineSet1269.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1270 = createNode("Coordinate");
Coordinate1270.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1269.coord = Coordinate1270;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA1271 = createNode("ColorRGBA");
ColorRGBA1271.USE = "HAnimSegmentLineColorRGBA";
LineSet1269.color = ColorRGBA1271;

Shape1268.geometry = LineSet1269;

HAnimSegment1264.children[1] = Shape1268;

HAnimJoint1263.children = new MFNode();

HAnimJoint1263.children[0] = HAnimSegment1264;

HAnimJoint HAnimJoint1272 = createNode("HAnimJoint");
HAnimJoint1272.name = "l_metacarpophalangeal_4";
HAnimJoint1272.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1272.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment1273 = createNode("HAnimSegment");
HAnimSegment1273.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1273.DEF = "hanim_l_carpal_proximal_phalanx_4";
Transform Transform1274 = createNode("Transform");
Transform1274.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Transform Transform1275 = createNode("Transform");
//Empty Transform
Shape Shape1276 = createNode("Shape");
Shape1276.USE = "HAnimJointShape";
Transform1275.child = new undefined();

Transform1275.child[0] = Shape1276;

Transform1274.children = new MFNode();

Transform1274.children[0] = Transform1275;

HAnimSegment1273.children = new MFNode();

HAnimSegment1273.children[0] = Transform1274;

Shape Shape1277 = createNode("Shape");
LineSet LineSet1278 = createNode("LineSet");
LineSet1278.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1279 = createNode("Coordinate");
Coordinate1279.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1278.coord = Coordinate1279;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1280 = createNode("ColorRGBA");
ColorRGBA1280.USE = "HAnimSegmentLineColorRGBA";
LineSet1278.color = ColorRGBA1280;

Shape1277.geometry = LineSet1278;

HAnimSegment1273.children[1] = Shape1277;

HAnimJoint1272.children = new MFNode();

HAnimJoint1272.children[0] = HAnimSegment1273;

HAnimJoint HAnimJoint1281 = createNode("HAnimJoint");
HAnimJoint1281.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1281.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1281.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment1282 = createNode("HAnimSegment");
HAnimSegment1282.name = "l_carpal_middle_phalanx_4";
HAnimSegment1282.DEF = "hanim_l_carpal_middle_phalanx_4";
Transform Transform1283 = createNode("Transform");
Transform1283.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Transform Transform1284 = createNode("Transform");
//Empty Transform
Shape Shape1285 = createNode("Shape");
Shape1285.USE = "HAnimJointShape";
Transform1284.child = new undefined();

Transform1284.child[0] = Shape1285;

Transform1283.children = new MFNode();

Transform1283.children[0] = Transform1284;

HAnimSegment1282.children = new MFNode();

HAnimSegment1282.children[0] = Transform1283;

Shape Shape1286 = createNode("Shape");
LineSet LineSet1287 = createNode("LineSet");
LineSet1287.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1288 = createNode("Coordinate");
Coordinate1288.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1287.coord = Coordinate1288;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1289 = createNode("ColorRGBA");
ColorRGBA1289.USE = "HAnimSegmentLineColorRGBA";
LineSet1287.color = ColorRGBA1289;

Shape1286.geometry = LineSet1287;

HAnimSegment1282.children[1] = Shape1286;

HAnimSite HAnimSite1290 = createNode("HAnimSite");
HAnimSite1290.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite1290.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor1291 = createNode("TouchSensor");
TouchSensor1291.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite1290.children = new MFNode();

HAnimSite1290.children[0] = TouchSensor1291;

Shape Shape1292 = createNode("Shape");
Shape1292.USE = "HAnimSiteShape";
HAnimSite1290.children[1] = Shape1292;

HAnimSegment1282.children[2] = HAnimSite1290;

HAnimJoint1281.children = new MFNode();

HAnimJoint1281.children[0] = HAnimSegment1282;

HAnimJoint HAnimJoint1293 = createNode("HAnimJoint");
HAnimJoint1293.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1293.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1293.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1281.children[1] = HAnimJoint1293;

HAnimJoint1272.children[1] = HAnimJoint1281;

HAnimJoint1263.children[1] = HAnimJoint1272;

HAnimJoint1247.children[1] = HAnimJoint1263;

HAnimJoint HAnimJoint1294 = createNode("HAnimJoint");
HAnimJoint1294.name = "l_carpometacarpal_5";
HAnimJoint1294.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1294.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment1295 = createNode("HAnimSegment");
HAnimSegment1295.name = "l_metacarpal_5";
HAnimSegment1295.DEF = "hanim_l_metacarpal_5";
Transform Transform1296 = createNode("Transform");
Transform1296.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Transform Transform1297 = createNode("Transform");
//Empty Transform
Shape Shape1298 = createNode("Shape");
Shape1298.USE = "HAnimJointShape";
Transform1297.child = new undefined();

Transform1297.child[0] = Shape1298;

Transform1296.children = new MFNode();

Transform1296.children[0] = Transform1297;

HAnimSegment1295.children = new MFNode();

HAnimSegment1295.children[0] = Transform1296;

Shape Shape1299 = createNode("Shape");
LineSet LineSet1300 = createNode("LineSet");
LineSet1300.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1301 = createNode("Coordinate");
Coordinate1301.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1300.coord = Coordinate1301;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1302 = createNode("ColorRGBA");
ColorRGBA1302.USE = "HAnimSegmentLineColorRGBA";
LineSet1300.color = ColorRGBA1302;

Shape1299.geometry = LineSet1300;

HAnimSegment1295.children[1] = Shape1299;

HAnimJoint1294.children = new MFNode();

HAnimJoint1294.children[0] = HAnimSegment1295;

HAnimJoint HAnimJoint1303 = createNode("HAnimJoint");
HAnimJoint1303.name = "l_metacarpophalangeal_5";
HAnimJoint1303.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1303.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment1304 = createNode("HAnimSegment");
HAnimSegment1304.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1304.DEF = "hanim_l_carpal_proximal_phalanx_5";
Transform Transform1305 = createNode("Transform");
Transform1305.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Transform Transform1306 = createNode("Transform");
//Empty Transform
Shape Shape1307 = createNode("Shape");
Shape1307.USE = "HAnimJointShape";
Transform1306.child = new undefined();

Transform1306.child[0] = Shape1307;

Transform1305.children = new MFNode();

Transform1305.children[0] = Transform1306;

HAnimSegment1304.children = new MFNode();

HAnimSegment1304.children[0] = Transform1305;

Shape Shape1308 = createNode("Shape");
LineSet LineSet1309 = createNode("LineSet");
LineSet1309.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1310 = createNode("Coordinate");
Coordinate1310.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1309.coord = Coordinate1310;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1311 = createNode("ColorRGBA");
ColorRGBA1311.USE = "HAnimSegmentLineColorRGBA";
LineSet1309.color = ColorRGBA1311;

Shape1308.geometry = LineSet1309;

HAnimSegment1304.children[1] = Shape1308;

HAnimJoint1303.children = new MFNode();

HAnimJoint1303.children[0] = HAnimSegment1304;

HAnimJoint HAnimJoint1312 = createNode("HAnimJoint");
HAnimJoint1312.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1312.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1312.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment1313 = createNode("HAnimSegment");
HAnimSegment1313.name = "l_carpal_middle_phalanx_5";
HAnimSegment1313.DEF = "hanim_l_carpal_middle_phalanx_5";
Transform Transform1314 = createNode("Transform");
Transform1314.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Transform Transform1315 = createNode("Transform");
//Empty Transform
Shape Shape1316 = createNode("Shape");
Shape1316.USE = "HAnimJointShape";
Transform1315.child = new undefined();

Transform1315.child[0] = Shape1316;

Transform1314.children = new MFNode();

Transform1314.children[0] = Transform1315;

HAnimSegment1313.children = new MFNode();

HAnimSegment1313.children[0] = Transform1314;

Shape Shape1317 = createNode("Shape");
LineSet LineSet1318 = createNode("LineSet");
LineSet1318.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1319 = createNode("Coordinate");
Coordinate1319.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1318.coord = Coordinate1319;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1320 = createNode("ColorRGBA");
ColorRGBA1320.USE = "HAnimSegmentLineColorRGBA";
LineSet1318.color = ColorRGBA1320;

Shape1317.geometry = LineSet1318;

HAnimSegment1313.children[1] = Shape1317;

HAnimSite HAnimSite1321 = createNode("HAnimSite");
HAnimSite1321.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite1321.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor1322 = createNode("TouchSensor");
TouchSensor1322.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite1321.children = new MFNode();

HAnimSite1321.children[0] = TouchSensor1322;

Shape Shape1323 = createNode("Shape");
Shape1323.USE = "HAnimSiteShape";
HAnimSite1321.children[1] = Shape1323;

HAnimSegment1313.children[2] = HAnimSite1321;

HAnimJoint1312.children = new MFNode();

HAnimJoint1312.children[0] = HAnimSegment1313;

HAnimJoint HAnimJoint1324 = createNode("HAnimJoint");
HAnimJoint1324.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1324.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1324.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1312.children[1] = HAnimJoint1324;

HAnimJoint1303.children[1] = HAnimJoint1312;

HAnimJoint1294.children[1] = HAnimJoint1303;

HAnimJoint1247.children[2] = HAnimJoint1294;

HAnimJoint1106.children[4] = HAnimJoint1247;

HAnimJoint1094.children[1] = HAnimJoint1106;

HAnimJoint1073.children[1] = HAnimJoint1094;

HAnimJoint1058.children[1] = HAnimJoint1073;

HAnimJoint1049.children[1] = HAnimJoint1058;

HAnimJoint845.children[2] = HAnimJoint1049;

HAnimJoint HAnimJoint1325 = createNode("HAnimJoint");
HAnimJoint1325.name = "r_sternoclavicular";
HAnimJoint1325.DEF = "hanim_r_sternoclavicular";
HAnimJoint1325.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimSegment HAnimSegment1326 = createNode("HAnimSegment");
HAnimSegment1326.name = "r_clavicle";
HAnimSegment1326.DEF = "hanim_r_clavicle";
Transform Transform1327 = createNode("Transform");
Transform1327.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
Transform Transform1328 = createNode("Transform");
//Empty Transform
Shape Shape1329 = createNode("Shape");
Shape1329.USE = "HAnimJointShape";
Transform1328.child = new undefined();

Transform1328.child[0] = Shape1329;

Transform1327.children = new MFNode();

Transform1327.children[0] = Transform1328;

HAnimSegment1326.children = new MFNode();

HAnimSegment1326.children[0] = Transform1327;

Shape Shape1330 = createNode("Shape");
LineSet LineSet1331 = createNode("LineSet");
LineSet1331.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1332 = createNode("Coordinate");
Coordinate1332.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet1331.coord = Coordinate1332;

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA ColorRGBA1333 = createNode("ColorRGBA");
ColorRGBA1333.USE = "HAnimSegmentLineColorRGBA";
LineSet1331.color = ColorRGBA1333;

Shape1330.geometry = LineSet1331;

HAnimSegment1326.children[1] = Shape1330;

HAnimJoint1325.children = new MFNode();

HAnimJoint1325.children[0] = HAnimSegment1326;

HAnimJoint HAnimJoint1334 = createNode("HAnimJoint");
HAnimJoint1334.name = "r_acromioclavicular";
HAnimJoint1334.DEF = "hanim_r_acromioclavicular";
HAnimJoint1334.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimSegment HAnimSegment1335 = createNode("HAnimSegment");
HAnimSegment1335.name = "r_scapula";
HAnimSegment1335.DEF = "hanim_r_scapula";
Transform Transform1336 = createNode("Transform");
Transform1336.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
Transform Transform1337 = createNode("Transform");
//Empty Transform
Shape Shape1338 = createNode("Shape");
Shape1338.USE = "HAnimJointShape";
Transform1337.child = new undefined();

Transform1337.child[0] = Shape1338;

Transform1336.children = new MFNode();

Transform1336.children[0] = Transform1337;

HAnimSegment1335.children = new MFNode();

HAnimSegment1335.children[0] = Transform1336;

Shape Shape1339 = createNode("Shape");
LineSet LineSet1340 = createNode("LineSet");
LineSet1340.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1341 = createNode("Coordinate");
Coordinate1341.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet1340.coord = Coordinate1341;

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA ColorRGBA1342 = createNode("ColorRGBA");
ColorRGBA1342.USE = "HAnimSegmentLineColorRGBA";
LineSet1340.color = ColorRGBA1342;

Shape1339.geometry = LineSet1340;

HAnimSegment1335.children[1] = Shape1339;

HAnimSite HAnimSite1343 = createNode("HAnimSite");
HAnimSite1343.name = "r_bideltoid_pt";
HAnimSite1343.DEF = "hanim_r_bideltoid_pt";
TouchSensor TouchSensor1344 = createNode("TouchSensor");
TouchSensor1344.description = "HAnimSite r_bideltoid_pt";
HAnimSite1343.children = new MFNode();

HAnimSite1343.children[0] = TouchSensor1344;

Shape Shape1345 = createNode("Shape");
Shape1345.USE = "HAnimSiteShape";
HAnimSite1343.children[1] = Shape1345;

HAnimSegment1335.children[2] = HAnimSite1343;

HAnimSite HAnimSite1346 = createNode("HAnimSite");
HAnimSite1346.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite1346.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite1346.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor1347 = createNode("TouchSensor");
TouchSensor1347.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite1346.children = new MFNode();

HAnimSite1346.children[0] = TouchSensor1347;

Shape Shape1348 = createNode("Shape");
Shape1348.USE = "HAnimSiteShape";
HAnimSite1346.children[1] = Shape1348;

HAnimSegment1335.children[3] = HAnimSite1346;

HAnimJoint1334.children = new MFNode();

HAnimJoint1334.children[0] = HAnimSegment1335;

HAnimJoint HAnimJoint1349 = createNode("HAnimJoint");
HAnimJoint1349.name = "r_shoulder";
HAnimJoint1349.DEF = "hanim_r_shoulder";
HAnimJoint1349.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimSegment HAnimSegment1350 = createNode("HAnimSegment");
HAnimSegment1350.name = "r_upperarm";
HAnimSegment1350.DEF = "hanim_r_upperarm";
Transform Transform1351 = createNode("Transform");
Transform1351.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform Transform1352 = createNode("Transform");
//Empty Transform
Shape Shape1353 = createNode("Shape");
Shape1353.USE = "HAnimJointShape";
Transform1352.child = new undefined();

Transform1352.child[0] = Shape1353;

Transform1351.children = new MFNode();

Transform1351.children[0] = Transform1352;

HAnimSegment1350.children = new MFNode();

HAnimSegment1350.children[0] = Transform1351;

Shape Shape1354 = createNode("Shape");
LineSet LineSet1355 = createNode("LineSet");
LineSet1355.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1356 = createNode("Coordinate");
Coordinate1356.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet1355.coord = Coordinate1356;

//from r_shoulder to r_elbow vertices 2
ColorRGBA ColorRGBA1357 = createNode("ColorRGBA");
ColorRGBA1357.USE = "HAnimSegmentLineColorRGBA";
LineSet1355.color = ColorRGBA1357;

Shape1354.geometry = LineSet1355;

HAnimSegment1350.children[1] = Shape1354;

HAnimSite HAnimSite1358 = createNode("HAnimSite");
HAnimSite1358.name = "r_humeral_medial_epicondyles_pt";
HAnimSite1358.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite1358.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor1359 = createNode("TouchSensor");
TouchSensor1359.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite1358.children = new MFNode();

HAnimSite1358.children[0] = TouchSensor1359;

Shape Shape1360 = createNode("Shape");
Shape1360.USE = "HAnimSiteShape";
HAnimSite1358.children[1] = Shape1360;

HAnimSegment1350.children[2] = HAnimSite1358;

HAnimSite HAnimSite1361 = createNode("HAnimSite");
HAnimSite1361.name = "r_olecranon_pt";
HAnimSite1361.DEF = "hanim_r_olecranon_pt";
HAnimSite1361.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor1362 = createNode("TouchSensor");
TouchSensor1362.description = "HAnimSite r_olecranon_pt";
HAnimSite1361.children = new MFNode();

HAnimSite1361.children[0] = TouchSensor1362;

Shape Shape1363 = createNode("Shape");
Shape1363.USE = "HAnimSiteShape";
HAnimSite1361.children[1] = Shape1363;

HAnimSegment1350.children[3] = HAnimSite1361;

HAnimSite HAnimSite1364 = createNode("HAnimSite");
HAnimSite1364.name = "r_radial_styloid_pt";
HAnimSite1364.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1364.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor1365 = createNode("TouchSensor");
TouchSensor1365.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1364.children = new MFNode();

HAnimSite1364.children[0] = TouchSensor1365;

Shape Shape1366 = createNode("Shape");
Shape1366.USE = "HAnimSiteShape";
HAnimSite1364.children[1] = Shape1366;

HAnimSegment1350.children[4] = HAnimSite1364;

HAnimSite HAnimSite1367 = createNode("HAnimSite");
HAnimSite1367.name = "r_radiale_pt";
HAnimSite1367.DEF = "hanim_r_radiale_pt";
HAnimSite1367.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor1368 = createNode("TouchSensor");
TouchSensor1368.description = "HAnimSite r_radiale_pt";
HAnimSite1367.children = new MFNode();

HAnimSite1367.children[0] = TouchSensor1368;

Shape Shape1369 = createNode("Shape");
Shape1369.USE = "HAnimSiteShape";
HAnimSite1367.children[1] = Shape1369;

HAnimSegment1350.children[5] = HAnimSite1367;

HAnimJoint1349.children = new MFNode();

HAnimJoint1349.children[0] = HAnimSegment1350;

HAnimJoint HAnimJoint1370 = createNode("HAnimJoint");
HAnimJoint1370.name = "r_elbow";
HAnimJoint1370.DEF = "hanim_r_elbow";
HAnimJoint1370.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimSegment HAnimSegment1371 = createNode("HAnimSegment");
HAnimSegment1371.name = "r_forearm";
HAnimSegment1371.DEF = "hanim_r_forearm";
Transform Transform1372 = createNode("Transform");
Transform1372.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform Transform1373 = createNode("Transform");
//Empty Transform
Shape Shape1374 = createNode("Shape");
Shape1374.USE = "HAnimJointShape";
Transform1373.child = new undefined();

Transform1373.child[0] = Shape1374;

Transform1372.children = new MFNode();

Transform1372.children[0] = Transform1373;

HAnimSegment1371.children = new MFNode();

HAnimSegment1371.children[0] = Transform1372;

Shape Shape1375 = createNode("Shape");
LineSet LineSet1376 = createNode("LineSet");
LineSet1376.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1377 = createNode("Coordinate");
Coordinate1377.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet1376.coord = Coordinate1377;

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA ColorRGBA1378 = createNode("ColorRGBA");
ColorRGBA1378.USE = "HAnimSegmentLineColorRGBA";
LineSet1376.color = ColorRGBA1378;

Shape1375.geometry = LineSet1376;

HAnimSegment1371.children[1] = Shape1375;

HAnimSite HAnimSite1379 = createNode("HAnimSite");
HAnimSite1379.name = "r_ulnar_styloid_pt";
HAnimSite1379.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1379.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor1380 = createNode("TouchSensor");
TouchSensor1380.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1379.children = new MFNode();

HAnimSite1379.children[0] = TouchSensor1380;

Shape Shape1381 = createNode("Shape");
Shape1381.USE = "HAnimSiteShape";
HAnimSite1379.children[1] = Shape1381;

HAnimSegment1371.children[2] = HAnimSite1379;

HAnimJoint1370.children = new MFNode();

HAnimJoint1370.children[0] = HAnimSegment1371;

HAnimJoint HAnimJoint1382 = createNode("HAnimJoint");
HAnimJoint1382.name = "r_radiocarpal";
HAnimJoint1382.DEF = "hanim_r_radiocarpal";
HAnimJoint1382.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimSegment HAnimSegment1383 = createNode("HAnimSegment");
HAnimSegment1383.name = "r_carpal";
HAnimSegment1383.DEF = "hanim_r_carpal";
Transform Transform1384 = createNode("Transform");
Transform1384.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1384.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform1384.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
Transform Transform1385 = createNode("Transform");
Transform1385.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
Shape Shape1386 = createNode("Shape");
Shape1386.USE = "HAnimJointShape";
Transform1385.child = new undefined();

Transform1385.child[0] = Shape1386;

Transform1384.children = new MFNode();

Transform1384.children[0] = Transform1385;

HAnimSegment1383.children = new MFNode();

HAnimSegment1383.children[0] = Transform1384;

Shape Shape1387 = createNode("Shape");
LineSet LineSet1388 = createNode("LineSet");
LineSet1388.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1389 = createNode("Coordinate");
Coordinate1389.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-8.0515,0.9213,1.3235]);
LineSet1388.coord = Coordinate1389;

//from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA ColorRGBA1390 = createNode("ColorRGBA");
ColorRGBA1390.USE = "HAnimSegmentLineColorRGBA";
LineSet1388.color = ColorRGBA1390;

Shape1387.geometry = LineSet1388;

HAnimSegment1383.children[1] = Shape1387;

Shape Shape1391 = createNode("Shape");
LineSet LineSet1392 = createNode("LineSet");
LineSet1392.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1393 = createNode("Coordinate");
Coordinate1393.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-8.0515,0.9225,0.8386]);
LineSet1392.coord = Coordinate1393;

//from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA ColorRGBA1394 = createNode("ColorRGBA");
ColorRGBA1394.USE = "HAnimSegmentLineColorRGBA";
LineSet1392.color = ColorRGBA1394;

Shape1391.geometry = LineSet1392;

HAnimSegment1383.children[2] = Shape1391;

Shape Shape1395 = createNode("Shape");
LineSet LineSet1396 = createNode("LineSet");
LineSet1396.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1397 = createNode("Coordinate");
Coordinate1397.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-8.0405,0.9246,0.2513]);
LineSet1396.coord = Coordinate1397;

//from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA ColorRGBA1398 = createNode("ColorRGBA");
ColorRGBA1398.USE = "HAnimSegmentLineColorRGBA";
LineSet1396.color = ColorRGBA1398;

Shape1395.geometry = LineSet1396;

HAnimSegment1383.children[3] = Shape1395;

Shape Shape1399 = createNode("Shape");
LineSet LineSet1400 = createNode("LineSet");
LineSet1400.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1401 = createNode("Coordinate");
Coordinate1401.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-8.0405,0.921,-0.6795]);
LineSet1400.coord = Coordinate1401;

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA ColorRGBA1402 = createNode("ColorRGBA");
ColorRGBA1402.USE = "HAnimSegmentLineColorRGBA";
LineSet1400.color = ColorRGBA1402;

Shape1399.geometry = LineSet1400;

HAnimSegment1383.children[4] = Shape1399;

HAnimJoint1382.children = new MFNode();

HAnimJoint1382.children[0] = HAnimSegment1383;

HAnimJoint HAnimJoint1403 = createNode("HAnimJoint");
HAnimJoint1403.name = "r_midcarpal_1";
HAnimJoint1403.DEF = "hanim_r_midcarpal_1";
HAnimJoint1403.center = new SFVec3f(new float[-8.0515,0.9213,1.3235]);
HAnimSegment HAnimSegment1404 = createNode("HAnimSegment");
HAnimSegment1404.name = "r_trapezium";
HAnimSegment1404.DEF = "hanim_r_trapezium";
Transform Transform1405 = createNode("Transform");
Transform1405.translation = new SFVec3f(new float[-8.0515,0.9213,1.3235]);
Transform Transform1406 = createNode("Transform");
//Empty Transform
Shape Shape1407 = createNode("Shape");
Shape1407.USE = "HAnimJointShape";
Transform1406.child = new undefined();

Transform1406.child[0] = Shape1407;

Transform1405.children = new MFNode();

Transform1405.children[0] = Transform1406;

HAnimSegment1404.children = new MFNode();

HAnimSegment1404.children[0] = Transform1405;

Shape Shape1408 = createNode("Shape");
LineSet LineSet1409 = createNode("LineSet");
LineSet1409.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1410 = createNode("Coordinate");
Coordinate1410.point = new MFVec3f(new float[-8.0515,0.9213,1.3235,-0.1899,0.8502,-0.0473]);
LineSet1409.coord = Coordinate1410;

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 2
ColorRGBA ColorRGBA1411 = createNode("ColorRGBA");
ColorRGBA1411.USE = "HAnimSegmentLineColorRGBA";
LineSet1409.color = ColorRGBA1411;

Shape1408.geometry = LineSet1409;

HAnimSegment1404.children[1] = Shape1408;

HAnimJoint1403.children = new MFNode();

HAnimJoint1403.children[0] = HAnimSegment1404;

HAnimJoint HAnimJoint1412 = createNode("HAnimJoint");
HAnimJoint1412.name = "r_carpometacarpal_1";
HAnimJoint1412.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1412.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimSegment HAnimSegment1413 = createNode("HAnimSegment");
HAnimSegment1413.name = "r_metacarpal_1";
HAnimSegment1413.DEF = "hanim_r_metacarpal_1";
Transform Transform1414 = createNode("Transform");
Transform1414.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
Transform Transform1415 = createNode("Transform");
//Empty Transform
Shape Shape1416 = createNode("Shape");
Shape1416.USE = "HAnimJointShape";
Transform1415.child = new undefined();

Transform1415.child[0] = Shape1416;

Transform1414.children = new MFNode();

Transform1414.children[0] = Transform1415;

HAnimSegment1413.children = new MFNode();

HAnimSegment1413.children[0] = Transform1414;

Shape Shape1417 = createNode("Shape");
LineSet LineSet1418 = createNode("LineSet");
LineSet1418.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1419 = createNode("Coordinate");
Coordinate1419.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1418.coord = Coordinate1419;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA1420 = createNode("ColorRGBA");
ColorRGBA1420.USE = "HAnimSegmentLineColorRGBA";
LineSet1418.color = ColorRGBA1420;

Shape1417.geometry = LineSet1418;

HAnimSegment1413.children[1] = Shape1417;

HAnimJoint1412.children = new MFNode();

HAnimJoint1412.children[0] = HAnimSegment1413;

HAnimJoint HAnimJoint1421 = createNode("HAnimJoint");
HAnimJoint1421.name = "r_metacarpophalangeal_1";
HAnimJoint1421.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1421.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimSegment HAnimSegment1422 = createNode("HAnimSegment");
HAnimSegment1422.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1422.DEF = "hanim_r_carpal_proximal_phalanx_1";
Transform Transform1423 = createNode("Transform");
Transform1423.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
Transform Transform1424 = createNode("Transform");
//Empty Transform
Shape Shape1425 = createNode("Shape");
Shape1425.USE = "HAnimJointShape";
Transform1424.child = new undefined();

Transform1424.child[0] = Shape1425;

Transform1423.children = new MFNode();

Transform1423.children[0] = Transform1424;

HAnimSegment1422.children = new MFNode();

HAnimSegment1422.children[0] = Transform1423;

Shape Shape1426 = createNode("Shape");
LineSet LineSet1427 = createNode("LineSet");
LineSet1427.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1428 = createNode("Coordinate");
Coordinate1428.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1427.coord = Coordinate1428;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA1429 = createNode("ColorRGBA");
ColorRGBA1429.USE = "HAnimSegmentLineColorRGBA";
LineSet1427.color = ColorRGBA1429;

Shape1426.geometry = LineSet1427;

HAnimSegment1422.children[1] = Shape1426;

HAnimSite HAnimSite1430 = createNode("HAnimSite");
HAnimSite1430.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1430.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor1431 = createNode("TouchSensor");
TouchSensor1431.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1430.children = new MFNode();

HAnimSite1430.children[0] = TouchSensor1431;

Shape Shape1432 = createNode("Shape");
Shape1432.USE = "HAnimSiteShape";
HAnimSite1430.children[1] = Shape1432;

HAnimSegment1422.children[2] = HAnimSite1430;

HAnimJoint1421.children = new MFNode();

HAnimJoint1421.children[0] = HAnimSegment1422;

HAnimJoint HAnimJoint1433 = createNode("HAnimJoint");
HAnimJoint1433.name = "r_carpal_interphalangeal_1";
HAnimJoint1433.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1433.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1421.children[1] = HAnimJoint1433;

HAnimJoint1412.children[1] = HAnimJoint1421;

HAnimJoint1403.children[1] = HAnimJoint1412;

HAnimJoint1382.children[1] = HAnimJoint1403;

HAnimJoint HAnimJoint1434 = createNode("HAnimJoint");
HAnimJoint1434.name = "r_midcarpal_2";
HAnimJoint1434.DEF = "hanim_r_midcarpal_2";
HAnimJoint1434.center = new SFVec3f(new float[-8.0515,0.9225,0.8386]);
HAnimSegment HAnimSegment1435 = createNode("HAnimSegment");
HAnimSegment1435.name = "r_trapezoid";
HAnimSegment1435.DEF = "hanim_r_trapezoid";
Transform Transform1436 = createNode("Transform");
Transform1436.translation = new SFVec3f(new float[-8.0515,0.9225,0.8386]);
Transform Transform1437 = createNode("Transform");
//Empty Transform
Shape Shape1438 = createNode("Shape");
Shape1438.USE = "HAnimJointShape";
Transform1437.child = new undefined();

Transform1437.child[0] = Shape1438;

Transform1436.children = new MFNode();

Transform1436.children[0] = Transform1437;

HAnimSegment1435.children = new MFNode();

HAnimSegment1435.children[0] = Transform1436;

Shape Shape1439 = createNode("Shape");
LineSet LineSet1440 = createNode("LineSet");
LineSet1440.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1441 = createNode("Coordinate");
Coordinate1441.point = new MFVec3f(new float[-8.0515,0.9225,0.8386,-0.1961,0.8055,-0.0218]);
LineSet1440.coord = Coordinate1441;

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 2
ColorRGBA ColorRGBA1442 = createNode("ColorRGBA");
ColorRGBA1442.USE = "HAnimSegmentLineColorRGBA";
LineSet1440.color = ColorRGBA1442;

Shape1439.geometry = LineSet1440;

HAnimSegment1435.children[1] = Shape1439;

HAnimSite HAnimSite1443 = createNode("HAnimSite");
HAnimSite1443.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1443.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1443.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor1444 = createNode("TouchSensor");
TouchSensor1444.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite1443.children = new MFNode();

HAnimSite1443.children[0] = TouchSensor1444;

Shape Shape1445 = createNode("Shape");
Shape1445.USE = "HAnimSiteShape";
HAnimSite1443.children[1] = Shape1445;

HAnimSegment1435.children[2] = HAnimSite1443;

HAnimJoint1434.children = new MFNode();

HAnimJoint1434.children[0] = HAnimSegment1435;

HAnimJoint HAnimJoint1446 = createNode("HAnimJoint");
HAnimJoint1446.name = "r_carpometacarpal_2";
HAnimJoint1446.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1446.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimSegment HAnimSegment1447 = createNode("HAnimSegment");
HAnimSegment1447.name = "r_metacarpal_2";
HAnimSegment1447.DEF = "hanim_r_metacarpal_2";
Transform Transform1448 = createNode("Transform");
Transform1448.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
Transform Transform1449 = createNode("Transform");
//Empty Transform
Shape Shape1450 = createNode("Shape");
Shape1450.USE = "HAnimJointShape";
Transform1449.child = new undefined();

Transform1449.child[0] = Shape1450;

Transform1448.children = new MFNode();

Transform1448.children[0] = Transform1449;

HAnimSegment1447.children = new MFNode();

HAnimSegment1447.children[0] = Transform1448;

Shape Shape1451 = createNode("Shape");
LineSet LineSet1452 = createNode("LineSet");
LineSet1452.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1453 = createNode("Coordinate");
Coordinate1453.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1452.coord = Coordinate1453;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA1454 = createNode("ColorRGBA");
ColorRGBA1454.USE = "HAnimSegmentLineColorRGBA";
LineSet1452.color = ColorRGBA1454;

Shape1451.geometry = LineSet1452;

HAnimSegment1447.children[1] = Shape1451;

HAnimJoint1446.children = new MFNode();

HAnimJoint1446.children[0] = HAnimSegment1447;

HAnimJoint HAnimJoint1455 = createNode("HAnimJoint");
HAnimJoint1455.name = "r_metacarpophalangeal_2";
HAnimJoint1455.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1455.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimSegment HAnimSegment1456 = createNode("HAnimSegment");
HAnimSegment1456.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1456.DEF = "hanim_r_carpal_proximal_phalanx_2";
Transform Transform1457 = createNode("Transform");
Transform1457.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
Transform Transform1458 = createNode("Transform");
//Empty Transform
Shape Shape1459 = createNode("Shape");
Shape1459.USE = "HAnimJointShape";
Transform1458.child = new undefined();

Transform1458.child[0] = Shape1459;

Transform1457.children = new MFNode();

Transform1457.children[0] = Transform1458;

HAnimSegment1456.children = new MFNode();

HAnimSegment1456.children[0] = Transform1457;

Shape Shape1460 = createNode("Shape");
LineSet LineSet1461 = createNode("LineSet");
LineSet1461.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1462 = createNode("Coordinate");
Coordinate1462.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1461.coord = Coordinate1462;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1463 = createNode("ColorRGBA");
ColorRGBA1463.USE = "HAnimSegmentLineColorRGBA";
LineSet1461.color = ColorRGBA1463;

Shape1460.geometry = LineSet1461;

HAnimSegment1456.children[1] = Shape1460;

HAnimJoint1455.children = new MFNode();

HAnimJoint1455.children[0] = HAnimSegment1456;

HAnimJoint HAnimJoint1464 = createNode("HAnimJoint");
HAnimJoint1464.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1464.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1464.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimSegment HAnimSegment1465 = createNode("HAnimSegment");
HAnimSegment1465.name = "r_carpal_middle_phalanx_2";
HAnimSegment1465.DEF = "hanim_r_carpal_middle_phalanx_2";
Transform Transform1466 = createNode("Transform");
Transform1466.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
Transform Transform1467 = createNode("Transform");
//Empty Transform
Shape Shape1468 = createNode("Shape");
Shape1468.USE = "HAnimJointShape";
Transform1467.child = new undefined();

Transform1467.child[0] = Shape1468;

Transform1466.children = new MFNode();

Transform1466.children[0] = Transform1467;

HAnimSegment1465.children = new MFNode();

HAnimSegment1465.children[0] = Transform1466;

Shape Shape1469 = createNode("Shape");
LineSet LineSet1470 = createNode("LineSet");
LineSet1470.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1471 = createNode("Coordinate");
Coordinate1471.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1470.coord = Coordinate1471;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1472 = createNode("ColorRGBA");
ColorRGBA1472.USE = "HAnimSegmentLineColorRGBA";
LineSet1470.color = ColorRGBA1472;

Shape1469.geometry = LineSet1470;

HAnimSegment1465.children[1] = Shape1469;

HAnimSite HAnimSite1473 = createNode("HAnimSite");
HAnimSite1473.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1473.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor1474 = createNode("TouchSensor");
TouchSensor1474.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1473.children = new MFNode();

HAnimSite1473.children[0] = TouchSensor1474;

Shape Shape1475 = createNode("Shape");
Shape1475.USE = "HAnimSiteShape";
HAnimSite1473.children[1] = Shape1475;

HAnimSegment1465.children[2] = HAnimSite1473;

HAnimSite HAnimSite1476 = createNode("HAnimSite");
HAnimSite1476.name = "r_dactylion_pt";
HAnimSite1476.DEF = "hanim_r_dactylion_pt";
HAnimSite1476.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor1477 = createNode("TouchSensor");
TouchSensor1477.description = "HAnimSite r_dactylion_pt";
HAnimSite1476.children = new MFNode();

HAnimSite1476.children[0] = TouchSensor1477;

Shape Shape1478 = createNode("Shape");
Shape1478.USE = "HAnimSiteShape";
HAnimSite1476.children[1] = Shape1478;

HAnimSegment1465.children[3] = HAnimSite1476;

HAnimJoint1464.children = new MFNode();

HAnimJoint1464.children[0] = HAnimSegment1465;

HAnimJoint HAnimJoint1479 = createNode("HAnimJoint");
HAnimJoint1479.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1479.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1479.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1464.children[1] = HAnimJoint1479;

HAnimJoint1455.children[1] = HAnimJoint1464;

HAnimJoint1446.children[1] = HAnimJoint1455;

HAnimJoint1434.children[1] = HAnimJoint1446;

HAnimJoint1382.children[2] = HAnimJoint1434;

HAnimJoint HAnimJoint1480 = createNode("HAnimJoint");
HAnimJoint1480.name = "r_midcarpal_3";
HAnimJoint1480.DEF = "hanim_r_midcarpal_3";
HAnimJoint1480.center = new SFVec3f(new float[-8.0405,0.9246,0.2513]);
HAnimSegment HAnimSegment1481 = createNode("HAnimSegment");
HAnimSegment1481.name = "r_capitate";
HAnimSegment1481.DEF = "hanim_r_capitate";
Transform Transform1482 = createNode("Transform");
Transform1482.translation = new SFVec3f(new float[-8.0405,0.9246,0.2513]);
Transform Transform1483 = createNode("Transform");
//Empty Transform
Shape Shape1484 = createNode("Shape");
Shape1484.USE = "HAnimJointShape";
Transform1483.child = new undefined();

Transform1483.child[0] = Shape1484;

Transform1482.children = new MFNode();

Transform1482.children[0] = Transform1483;

HAnimSegment1481.children = new MFNode();

HAnimSegment1481.children[0] = Transform1482;

Shape Shape1485 = createNode("Shape");
LineSet LineSet1486 = createNode("LineSet");
LineSet1486.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1487 = createNode("Coordinate");
Coordinate1487.point = new MFVec3f(new float[-8.0405,0.9246,0.2513,-0.1972,0.806,-0.0468]);
LineSet1486.coord = Coordinate1487;

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 2
ColorRGBA ColorRGBA1488 = createNode("ColorRGBA");
ColorRGBA1488.USE = "HAnimSegmentLineColorRGBA";
LineSet1486.color = ColorRGBA1488;

Shape1485.geometry = LineSet1486;

HAnimSegment1481.children[1] = Shape1485;

HAnimSite HAnimSite1489 = createNode("HAnimSite");
HAnimSite1489.name = "r_metacarpal_phalanx_3_pt";
HAnimSite1489.DEF = "hanim_r_metacarpal_phalanx_3_pt";
TouchSensor TouchSensor1490 = createNode("TouchSensor");
TouchSensor1490.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite1489.children = new MFNode();

HAnimSite1489.children[0] = TouchSensor1490;

Shape Shape1491 = createNode("Shape");
Shape1491.USE = "HAnimSiteShape";
HAnimSite1489.children[1] = Shape1491;

HAnimSegment1481.children[2] = HAnimSite1489;

HAnimJoint1480.children = new MFNode();

HAnimJoint1480.children[0] = HAnimSegment1481;

HAnimJoint HAnimJoint1492 = createNode("HAnimJoint");
HAnimJoint1492.name = "r_carpometacarpal_3";
HAnimJoint1492.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1492.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimSegment HAnimSegment1493 = createNode("HAnimSegment");
HAnimSegment1493.name = "r_metacarpal_3";
HAnimSegment1493.DEF = "hanim_r_metacarpal_3";
Transform Transform1494 = createNode("Transform");
Transform1494.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
Transform Transform1495 = createNode("Transform");
//Empty Transform
Shape Shape1496 = createNode("Shape");
Shape1496.USE = "HAnimJointShape";
Transform1495.child = new undefined();

Transform1495.child[0] = Shape1496;

Transform1494.children = new MFNode();

Transform1494.children[0] = Transform1495;

HAnimSegment1493.children = new MFNode();

HAnimSegment1493.children[0] = Transform1494;

Shape Shape1497 = createNode("Shape");
LineSet LineSet1498 = createNode("LineSet");
LineSet1498.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1499 = createNode("Coordinate");
Coordinate1499.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1498.coord = Coordinate1499;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA1500 = createNode("ColorRGBA");
ColorRGBA1500.USE = "HAnimSegmentLineColorRGBA";
LineSet1498.color = ColorRGBA1500;

Shape1497.geometry = LineSet1498;

HAnimSegment1493.children[1] = Shape1497;

HAnimJoint1492.children = new MFNode();

HAnimJoint1492.children[0] = HAnimSegment1493;

HAnimJoint HAnimJoint1501 = createNode("HAnimJoint");
HAnimJoint1501.name = "r_metacarpophalangeal_3";
HAnimJoint1501.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1501.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimSegment HAnimSegment1502 = createNode("HAnimSegment");
HAnimSegment1502.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1502.DEF = "hanim_r_carpal_proximal_phalanx_3";
Transform Transform1503 = createNode("Transform");
Transform1503.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
Transform Transform1504 = createNode("Transform");
//Empty Transform
Shape Shape1505 = createNode("Shape");
Shape1505.USE = "HAnimJointShape";
Transform1504.child = new undefined();

Transform1504.child[0] = Shape1505;

Transform1503.children = new MFNode();

Transform1503.children[0] = Transform1504;

HAnimSegment1502.children = new MFNode();

HAnimSegment1502.children[0] = Transform1503;

Shape Shape1506 = createNode("Shape");
LineSet LineSet1507 = createNode("LineSet");
LineSet1507.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1508 = createNode("Coordinate");
Coordinate1508.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1507.coord = Coordinate1508;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1509 = createNode("ColorRGBA");
ColorRGBA1509.USE = "HAnimSegmentLineColorRGBA";
LineSet1507.color = ColorRGBA1509;

Shape1506.geometry = LineSet1507;

HAnimSegment1502.children[1] = Shape1506;

HAnimJoint1501.children = new MFNode();

HAnimJoint1501.children[0] = HAnimSegment1502;

HAnimJoint HAnimJoint1510 = createNode("HAnimJoint");
HAnimJoint1510.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1510.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1510.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimSegment HAnimSegment1511 = createNode("HAnimSegment");
HAnimSegment1511.name = "r_carpal_middle_phalanx_3";
HAnimSegment1511.DEF = "hanim_r_carpal_middle_phalanx_3";
Transform Transform1512 = createNode("Transform");
Transform1512.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
Transform Transform1513 = createNode("Transform");
//Empty Transform
Shape Shape1514 = createNode("Shape");
Shape1514.USE = "HAnimJointShape";
Transform1513.child = new undefined();

Transform1513.child[0] = Shape1514;

Transform1512.children = new MFNode();

Transform1512.children[0] = Transform1513;

HAnimSegment1511.children = new MFNode();

HAnimSegment1511.children[0] = Transform1512;

Shape Shape1515 = createNode("Shape");
LineSet LineSet1516 = createNode("LineSet");
LineSet1516.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1517 = createNode("Coordinate");
Coordinate1517.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1516.coord = Coordinate1517;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1518 = createNode("ColorRGBA");
ColorRGBA1518.USE = "HAnimSegmentLineColorRGBA";
LineSet1516.color = ColorRGBA1518;

Shape1515.geometry = LineSet1516;

HAnimSegment1511.children[1] = Shape1515;

HAnimSite HAnimSite1519 = createNode("HAnimSite");
HAnimSite1519.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1519.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor1520 = createNode("TouchSensor");
TouchSensor1520.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1519.children = new MFNode();

HAnimSite1519.children[0] = TouchSensor1520;

Shape Shape1521 = createNode("Shape");
Shape1521.USE = "HAnimSiteShape";
HAnimSite1519.children[1] = Shape1521;

HAnimSegment1511.children[2] = HAnimSite1519;

HAnimJoint1510.children = new MFNode();

HAnimJoint1510.children[0] = HAnimSegment1511;

HAnimJoint HAnimJoint1522 = createNode("HAnimJoint");
HAnimJoint1522.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1522.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1522.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1510.children[1] = HAnimJoint1522;

HAnimJoint1501.children[1] = HAnimJoint1510;

HAnimJoint1492.children[1] = HAnimJoint1501;

HAnimJoint1480.children[1] = HAnimJoint1492;

HAnimJoint1382.children[3] = HAnimJoint1480;

HAnimJoint HAnimJoint1523 = createNode("HAnimJoint");
HAnimJoint1523.name = "r_midcarpal_4_5";
HAnimJoint1523.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1523.center = new SFVec3f(new float[-8.0405,0.921,-0.6795]);
HAnimSegment HAnimSegment1524 = createNode("HAnimSegment");
HAnimSegment1524.name = "r_hamate";
HAnimSegment1524.DEF = "hanim_r_hamate";
Transform Transform1525 = createNode("Transform");
Transform1525.translation = new SFVec3f(new float[-8.0405,0.921,-0.6795]);
Transform Transform1526 = createNode("Transform");
//Empty Transform
Shape Shape1527 = createNode("Shape");
Shape1527.USE = "HAnimJointShape";
Transform1526.child = new undefined();

Transform1526.child[0] = Shape1527;

Transform1525.children = new MFNode();

Transform1525.children[0] = Transform1526;

HAnimSegment1524.children = new MFNode();

HAnimSegment1524.children[0] = Transform1525;

Shape Shape1528 = createNode("Shape");
LineSet LineSet1529 = createNode("LineSet");
LineSet1529.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1530 = createNode("Coordinate");
Coordinate1530.point = new MFVec3f(new float[-8.0405,0.921,-0.6795,-0.1951,0.8049,-0.0732]);
LineSet1529.coord = Coordinate1530;

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2
ColorRGBA ColorRGBA1531 = createNode("ColorRGBA");
ColorRGBA1531.USE = "HAnimSegmentLineColorRGBA";
LineSet1529.color = ColorRGBA1531;

Shape1528.geometry = LineSet1529;

HAnimSegment1524.children[1] = Shape1528;

Shape Shape1532 = createNode("Shape");
LineSet LineSet1533 = createNode("LineSet");
LineSet1533.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1534 = createNode("Coordinate");
Coordinate1534.point = new MFVec3f(new float[-8.0405,0.921,-0.6795,-0.1926,0.8096,-0.0975]);
LineSet1533.coord = Coordinate1534;

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2
ColorRGBA ColorRGBA1535 = createNode("ColorRGBA");
ColorRGBA1535.USE = "HAnimSegmentLineColorRGBA";
LineSet1533.color = ColorRGBA1535;

Shape1532.geometry = LineSet1533;

HAnimSegment1524.children[2] = Shape1532;

HAnimSite HAnimSite1536 = createNode("HAnimSite");
HAnimSite1536.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1536.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1536.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor1537 = createNode("TouchSensor");
TouchSensor1537.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite1536.children = new MFNode();

HAnimSite1536.children[0] = TouchSensor1537;

Shape Shape1538 = createNode("Shape");
Shape1538.USE = "HAnimSiteShape";
HAnimSite1536.children[1] = Shape1538;

HAnimSegment1524.children[3] = HAnimSite1536;

HAnimJoint1523.children = new MFNode();

HAnimJoint1523.children[0] = HAnimSegment1524;

HAnimJoint HAnimJoint1539 = createNode("HAnimJoint");
HAnimJoint1539.name = "r_carpometacarpal_4";
HAnimJoint1539.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1539.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimSegment HAnimSegment1540 = createNode("HAnimSegment");
HAnimSegment1540.name = "r_metacarpal_4";
HAnimSegment1540.DEF = "hanim_r_metacarpal_4";
Transform Transform1541 = createNode("Transform");
Transform1541.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
Transform Transform1542 = createNode("Transform");
//Empty Transform
Shape Shape1543 = createNode("Shape");
Shape1543.USE = "HAnimJointShape";
Transform1542.child = new undefined();

Transform1542.child[0] = Shape1543;

Transform1541.children = new MFNode();

Transform1541.children[0] = Transform1542;

HAnimSegment1540.children = new MFNode();

HAnimSegment1540.children[0] = Transform1541;

Shape Shape1544 = createNode("Shape");
LineSet LineSet1545 = createNode("LineSet");
LineSet1545.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1546 = createNode("Coordinate");
Coordinate1546.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1545.coord = Coordinate1546;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA1547 = createNode("ColorRGBA");
ColorRGBA1547.USE = "HAnimSegmentLineColorRGBA";
LineSet1545.color = ColorRGBA1547;

Shape1544.geometry = LineSet1545;

HAnimSegment1540.children[1] = Shape1544;

HAnimJoint1539.children = new MFNode();

HAnimJoint1539.children[0] = HAnimSegment1540;

HAnimJoint HAnimJoint1548 = createNode("HAnimJoint");
HAnimJoint1548.name = "r_metacarpophalangeal_4";
HAnimJoint1548.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1548.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimSegment HAnimSegment1549 = createNode("HAnimSegment");
HAnimSegment1549.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1549.DEF = "hanim_r_carpal_proximal_phalanx_4";
Transform Transform1550 = createNode("Transform");
Transform1550.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
Transform Transform1551 = createNode("Transform");
//Empty Transform
Shape Shape1552 = createNode("Shape");
Shape1552.USE = "HAnimJointShape";
Transform1551.child = new undefined();

Transform1551.child[0] = Shape1552;

Transform1550.children = new MFNode();

Transform1550.children[0] = Transform1551;

HAnimSegment1549.children = new MFNode();

HAnimSegment1549.children[0] = Transform1550;

Shape Shape1553 = createNode("Shape");
LineSet LineSet1554 = createNode("LineSet");
LineSet1554.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1555 = createNode("Coordinate");
Coordinate1555.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1554.coord = Coordinate1555;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1556 = createNode("ColorRGBA");
ColorRGBA1556.USE = "HAnimSegmentLineColorRGBA";
LineSet1554.color = ColorRGBA1556;

Shape1553.geometry = LineSet1554;

HAnimSegment1549.children[1] = Shape1553;

HAnimJoint1548.children = new MFNode();

HAnimJoint1548.children[0] = HAnimSegment1549;

HAnimJoint HAnimJoint1557 = createNode("HAnimJoint");
HAnimJoint1557.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1557.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1557.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimSegment HAnimSegment1558 = createNode("HAnimSegment");
HAnimSegment1558.name = "r_carpal_middle_phalanx_4";
HAnimSegment1558.DEF = "hanim_r_carpal_middle_phalanx_4";
Transform Transform1559 = createNode("Transform");
Transform1559.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
Transform Transform1560 = createNode("Transform");
//Empty Transform
Shape Shape1561 = createNode("Shape");
Shape1561.USE = "HAnimJointShape";
Transform1560.child = new undefined();

Transform1560.child[0] = Shape1561;

Transform1559.children = new MFNode();

Transform1559.children[0] = Transform1560;

HAnimSegment1558.children = new MFNode();

HAnimSegment1558.children[0] = Transform1559;

Shape Shape1562 = createNode("Shape");
LineSet LineSet1563 = createNode("LineSet");
LineSet1563.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1564 = createNode("Coordinate");
Coordinate1564.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1563.coord = Coordinate1564;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1565 = createNode("ColorRGBA");
ColorRGBA1565.USE = "HAnimSegmentLineColorRGBA";
LineSet1563.color = ColorRGBA1565;

Shape1562.geometry = LineSet1563;

HAnimSegment1558.children[1] = Shape1562;

HAnimSite HAnimSite1566 = createNode("HAnimSite");
HAnimSite1566.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1566.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor1567 = createNode("TouchSensor");
TouchSensor1567.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1566.children = new MFNode();

HAnimSite1566.children[0] = TouchSensor1567;

Shape Shape1568 = createNode("Shape");
Shape1568.USE = "HAnimSiteShape";
HAnimSite1566.children[1] = Shape1568;

HAnimSegment1558.children[2] = HAnimSite1566;

HAnimJoint1557.children = new MFNode();

HAnimJoint1557.children[0] = HAnimSegment1558;

HAnimJoint HAnimJoint1569 = createNode("HAnimJoint");
HAnimJoint1569.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1569.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1569.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1557.children[1] = HAnimJoint1569;

HAnimJoint1548.children[1] = HAnimJoint1557;

HAnimJoint1539.children[1] = HAnimJoint1548;

HAnimJoint1523.children[1] = HAnimJoint1539;

HAnimJoint HAnimJoint1570 = createNode("HAnimJoint");
HAnimJoint1570.name = "r_carpometacarpal_5";
HAnimJoint1570.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1570.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimSegment HAnimSegment1571 = createNode("HAnimSegment");
HAnimSegment1571.name = "r_metacarpal_5";
HAnimSegment1571.DEF = "hanim_r_metacarpal_5";
Transform Transform1572 = createNode("Transform");
Transform1572.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
Transform Transform1573 = createNode("Transform");
//Empty Transform
Shape Shape1574 = createNode("Shape");
Shape1574.USE = "HAnimJointShape";
Transform1573.child = new undefined();

Transform1573.child[0] = Shape1574;

Transform1572.children = new MFNode();

Transform1572.children[0] = Transform1573;

HAnimSegment1571.children = new MFNode();

HAnimSegment1571.children[0] = Transform1572;

Shape Shape1575 = createNode("Shape");
LineSet LineSet1576 = createNode("LineSet");
LineSet1576.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1577 = createNode("Coordinate");
Coordinate1577.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1576.coord = Coordinate1577;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1578 = createNode("ColorRGBA");
ColorRGBA1578.USE = "HAnimSegmentLineColorRGBA";
LineSet1576.color = ColorRGBA1578;

Shape1575.geometry = LineSet1576;

HAnimSegment1571.children[1] = Shape1575;

HAnimJoint1570.children = new MFNode();

HAnimJoint1570.children[0] = HAnimSegment1571;

HAnimJoint HAnimJoint1579 = createNode("HAnimJoint");
HAnimJoint1579.name = "r_metacarpophalangeal_5";
HAnimJoint1579.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1579.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimSegment HAnimSegment1580 = createNode("HAnimSegment");
HAnimSegment1580.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1580.DEF = "hanim_r_carpal_proximal_phalanx_5";
Transform Transform1581 = createNode("Transform");
Transform1581.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
Transform Transform1582 = createNode("Transform");
//Empty Transform
Shape Shape1583 = createNode("Shape");
Shape1583.USE = "HAnimJointShape";
Transform1582.child = new undefined();

Transform1582.child[0] = Shape1583;

Transform1581.children = new MFNode();

Transform1581.children[0] = Transform1582;

HAnimSegment1580.children = new MFNode();

HAnimSegment1580.children[0] = Transform1581;

Shape Shape1584 = createNode("Shape");
LineSet LineSet1585 = createNode("LineSet");
LineSet1585.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1586 = createNode("Coordinate");
Coordinate1586.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1585.coord = Coordinate1586;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1587 = createNode("ColorRGBA");
ColorRGBA1587.USE = "HAnimSegmentLineColorRGBA";
LineSet1585.color = ColorRGBA1587;

Shape1584.geometry = LineSet1585;

HAnimSegment1580.children[1] = Shape1584;

HAnimJoint1579.children = new MFNode();

HAnimJoint1579.children[0] = HAnimSegment1580;

HAnimJoint HAnimJoint1588 = createNode("HAnimJoint");
HAnimJoint1588.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1588.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1588.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimSegment HAnimSegment1589 = createNode("HAnimSegment");
HAnimSegment1589.name = "r_carpal_middle_phalanx_5";
HAnimSegment1589.DEF = "hanim_r_carpal_middle_phalanx_5";
Transform Transform1590 = createNode("Transform");
Transform1590.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
Transform Transform1591 = createNode("Transform");
//Empty Transform
Shape Shape1592 = createNode("Shape");
Shape1592.USE = "HAnimJointShape";
Transform1591.child = new undefined();

Transform1591.child[0] = Shape1592;

Transform1590.children = new MFNode();

Transform1590.children[0] = Transform1591;

HAnimSegment1589.children = new MFNode();

HAnimSegment1589.children[0] = Transform1590;

Shape Shape1593 = createNode("Shape");
LineSet LineSet1594 = createNode("LineSet");
LineSet1594.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1595 = createNode("Coordinate");
Coordinate1595.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1594.coord = Coordinate1595;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1596 = createNode("ColorRGBA");
ColorRGBA1596.USE = "HAnimSegmentLineColorRGBA";
LineSet1594.color = ColorRGBA1596;

Shape1593.geometry = LineSet1594;

HAnimSegment1589.children[1] = Shape1593;

HAnimSite HAnimSite1597 = createNode("HAnimSite");
HAnimSite1597.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1597.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor1598 = createNode("TouchSensor");
TouchSensor1598.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1597.children = new MFNode();

HAnimSite1597.children[0] = TouchSensor1598;

Shape Shape1599 = createNode("Shape");
Shape1599.USE = "HAnimSiteShape";
HAnimSite1597.children[1] = Shape1599;

HAnimSegment1589.children[2] = HAnimSite1597;

HAnimJoint1588.children = new MFNode();

HAnimJoint1588.children[0] = HAnimSegment1589;

HAnimJoint HAnimJoint1600 = createNode("HAnimJoint");
HAnimJoint1600.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1600.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1600.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1588.children[1] = HAnimJoint1600;

HAnimJoint1579.children[1] = HAnimJoint1588;

HAnimJoint1570.children[1] = HAnimJoint1579;

HAnimJoint1523.children[2] = HAnimJoint1570;

HAnimJoint1382.children[4] = HAnimJoint1523;

HAnimJoint1370.children[1] = HAnimJoint1382;

HAnimJoint1349.children[1] = HAnimJoint1370;

HAnimJoint1334.children[1] = HAnimJoint1349;

HAnimJoint1325.children[1] = HAnimJoint1334;

HAnimJoint845.children[3] = HAnimJoint1325;

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

HAnimJoint45.children[2] = HAnimJoint662;

HAnimHumanoid43.joints = new MFNode();

HAnimHumanoid43.joints[0] = HAnimJoint45;

HAnimJoint HAnimJoint1601 = createNode("HAnimJoint");
HAnimJoint1601.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[1] = HAnimJoint1601;

HAnimJoint HAnimJoint1602 = createNode("HAnimJoint");
HAnimJoint1602.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[2] = HAnimJoint1602;

HAnimJoint HAnimJoint1603 = createNode("HAnimJoint");
HAnimJoint1603.USE = "hanim_l_hip";
HAnimHumanoid43.joints[3] = HAnimJoint1603;

HAnimJoint HAnimJoint1604 = createNode("HAnimJoint");
HAnimJoint1604.USE = "hanim_l_knee";
HAnimHumanoid43.joints[4] = HAnimJoint1604;

HAnimJoint HAnimJoint1605 = createNode("HAnimJoint");
HAnimJoint1605.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[5] = HAnimJoint1605;

HAnimJoint HAnimJoint1606 = createNode("HAnimJoint");
HAnimJoint1606.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid43.joints[6] = HAnimJoint1606;

HAnimJoint HAnimJoint1607 = createNode("HAnimJoint");
HAnimJoint1607.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid43.joints[7] = HAnimJoint1607;

HAnimJoint HAnimJoint1608 = createNode("HAnimJoint");
HAnimJoint1608.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid43.joints[8] = HAnimJoint1608;

HAnimJoint HAnimJoint1609 = createNode("HAnimJoint");
HAnimJoint1609.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid43.joints[9] = HAnimJoint1609;

HAnimJoint HAnimJoint1610 = createNode("HAnimJoint");
HAnimJoint1610.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[10] = HAnimJoint1610;

HAnimJoint HAnimJoint1611 = createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid43.joints[11] = HAnimJoint1611;

HAnimJoint HAnimJoint1612 = createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[12] = HAnimJoint1612;

HAnimJoint HAnimJoint1613 = createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[13] = HAnimJoint1613;

HAnimJoint HAnimJoint1614 = createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint1614;

HAnimJoint HAnimJoint1615 = createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint1615;

HAnimJoint HAnimJoint1616 = createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid43.joints[16] = HAnimJoint1616;

HAnimJoint HAnimJoint1617 = createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid43.joints[17] = HAnimJoint1617;

HAnimJoint HAnimJoint1618 = createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid43.joints[18] = HAnimJoint1618;

HAnimJoint HAnimJoint1619 = createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[19] = HAnimJoint1619;

HAnimJoint HAnimJoint1620 = createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[20] = HAnimJoint1620;

HAnimJoint HAnimJoint1621 = createNode("HAnimJoint");
HAnimJoint1621.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid43.joints[21] = HAnimJoint1621;

HAnimJoint HAnimJoint1622 = createNode("HAnimJoint");
HAnimJoint1622.USE = "hanim_l_transversetarsal";
HAnimHumanoid43.joints[22] = HAnimJoint1622;

HAnimJoint HAnimJoint1623 = createNode("HAnimJoint");
HAnimJoint1623.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid43.joints[23] = HAnimJoint1623;

HAnimJoint HAnimJoint1624 = createNode("HAnimJoint");
HAnimJoint1624.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid43.joints[24] = HAnimJoint1624;

HAnimJoint HAnimJoint1625 = createNode("HAnimJoint");
HAnimJoint1625.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[25] = HAnimJoint1625;

HAnimJoint HAnimJoint1626 = createNode("HAnimJoint");
HAnimJoint1626.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[26] = HAnimJoint1626;

HAnimJoint HAnimJoint1627 = createNode("HAnimJoint");
HAnimJoint1627.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid43.joints[27] = HAnimJoint1627;

HAnimJoint HAnimJoint1628 = createNode("HAnimJoint");
HAnimJoint1628.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid43.joints[28] = HAnimJoint1628;

HAnimJoint HAnimJoint1629 = createNode("HAnimJoint");
HAnimJoint1629.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[29] = HAnimJoint1629;

HAnimJoint HAnimJoint1630 = createNode("HAnimJoint");
HAnimJoint1630.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[30] = HAnimJoint1630;

HAnimJoint HAnimJoint1631 = createNode("HAnimJoint");
HAnimJoint1631.USE = "hanim_r_hip";
HAnimHumanoid43.joints[31] = HAnimJoint1631;

HAnimJoint HAnimJoint1632 = createNode("HAnimJoint");
HAnimJoint1632.USE = "hanim_r_knee";
HAnimHumanoid43.joints[32] = HAnimJoint1632;

HAnimJoint HAnimJoint1633 = createNode("HAnimJoint");
HAnimJoint1633.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[33] = HAnimJoint1633;

HAnimJoint HAnimJoint1634 = createNode("HAnimJoint");
HAnimJoint1634.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid43.joints[34] = HAnimJoint1634;

HAnimJoint HAnimJoint1635 = createNode("HAnimJoint");
HAnimJoint1635.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid43.joints[35] = HAnimJoint1635;

HAnimJoint HAnimJoint1636 = createNode("HAnimJoint");
HAnimJoint1636.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid43.joints[36] = HAnimJoint1636;

HAnimJoint HAnimJoint1637 = createNode("HAnimJoint");
HAnimJoint1637.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid43.joints[37] = HAnimJoint1637;

HAnimJoint HAnimJoint1638 = createNode("HAnimJoint");
HAnimJoint1638.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[38] = HAnimJoint1638;

HAnimJoint HAnimJoint1639 = createNode("HAnimJoint");
HAnimJoint1639.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid43.joints[39] = HAnimJoint1639;

HAnimJoint HAnimJoint1640 = createNode("HAnimJoint");
HAnimJoint1640.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[40] = HAnimJoint1640;

HAnimJoint HAnimJoint1641 = createNode("HAnimJoint");
HAnimJoint1641.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[41] = HAnimJoint1641;

HAnimJoint HAnimJoint1642 = createNode("HAnimJoint");
HAnimJoint1642.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[42] = HAnimJoint1642;

HAnimJoint HAnimJoint1643 = createNode("HAnimJoint");
HAnimJoint1643.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[43] = HAnimJoint1643;

HAnimJoint HAnimJoint1644 = createNode("HAnimJoint");
HAnimJoint1644.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid43.joints[44] = HAnimJoint1644;

HAnimJoint HAnimJoint1645 = createNode("HAnimJoint");
HAnimJoint1645.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid43.joints[45] = HAnimJoint1645;

HAnimJoint HAnimJoint1646 = createNode("HAnimJoint");
HAnimJoint1646.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid43.joints[46] = HAnimJoint1646;

HAnimJoint HAnimJoint1647 = createNode("HAnimJoint");
HAnimJoint1647.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[47] = HAnimJoint1647;

HAnimJoint HAnimJoint1648 = createNode("HAnimJoint");
HAnimJoint1648.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[48] = HAnimJoint1648;

HAnimJoint HAnimJoint1649 = createNode("HAnimJoint");
HAnimJoint1649.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid43.joints[49] = HAnimJoint1649;

HAnimJoint HAnimJoint1650 = createNode("HAnimJoint");
HAnimJoint1650.USE = "hanim_r_transversetarsal";
HAnimHumanoid43.joints[50] = HAnimJoint1650;

HAnimJoint HAnimJoint1651 = createNode("HAnimJoint");
HAnimJoint1651.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid43.joints[51] = HAnimJoint1651;

HAnimJoint HAnimJoint1652 = createNode("HAnimJoint");
HAnimJoint1652.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid43.joints[52] = HAnimJoint1652;

HAnimJoint HAnimJoint1653 = createNode("HAnimJoint");
HAnimJoint1653.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[53] = HAnimJoint1653;

HAnimJoint HAnimJoint1654 = createNode("HAnimJoint");
HAnimJoint1654.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[54] = HAnimJoint1654;

HAnimJoint HAnimJoint1655 = createNode("HAnimJoint");
HAnimJoint1655.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid43.joints[55] = HAnimJoint1655;

HAnimJoint HAnimJoint1656 = createNode("HAnimJoint");
HAnimJoint1656.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid43.joints[56] = HAnimJoint1656;

HAnimJoint HAnimJoint1657 = createNode("HAnimJoint");
HAnimJoint1657.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[57] = HAnimJoint1657;

HAnimJoint HAnimJoint1658 = createNode("HAnimJoint");
HAnimJoint1658.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[58] = HAnimJoint1658;

HAnimJoint HAnimJoint1659 = createNode("HAnimJoint");
HAnimJoint1659.USE = "hanim_vl5";
HAnimHumanoid43.joints[59] = HAnimJoint1659;

HAnimJoint HAnimJoint1660 = createNode("HAnimJoint");
HAnimJoint1660.USE = "hanim_vl4";
HAnimHumanoid43.joints[60] = HAnimJoint1660;

HAnimJoint HAnimJoint1661 = createNode("HAnimJoint");
HAnimJoint1661.USE = "hanim_vl3";
HAnimHumanoid43.joints[61] = HAnimJoint1661;

HAnimJoint HAnimJoint1662 = createNode("HAnimJoint");
HAnimJoint1662.USE = "hanim_vl2";
HAnimHumanoid43.joints[62] = HAnimJoint1662;

HAnimJoint HAnimJoint1663 = createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_vl1";
HAnimHumanoid43.joints[63] = HAnimJoint1663;

HAnimJoint HAnimJoint1664 = createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_vt12";
HAnimHumanoid43.joints[64] = HAnimJoint1664;

HAnimJoint HAnimJoint1665 = createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_vt11";
HAnimHumanoid43.joints[65] = HAnimJoint1665;

HAnimJoint HAnimJoint1666 = createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_vt10";
HAnimHumanoid43.joints[66] = HAnimJoint1666;

HAnimJoint HAnimJoint1667 = createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_vt9";
HAnimHumanoid43.joints[67] = HAnimJoint1667;

HAnimJoint HAnimJoint1668 = createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_vt8";
HAnimHumanoid43.joints[68] = HAnimJoint1668;

HAnimJoint HAnimJoint1669 = createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_vt7";
HAnimHumanoid43.joints[69] = HAnimJoint1669;

HAnimJoint HAnimJoint1670 = createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_vt6";
HAnimHumanoid43.joints[70] = HAnimJoint1670;

HAnimJoint HAnimJoint1671 = createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_vt5";
HAnimHumanoid43.joints[71] = HAnimJoint1671;

HAnimJoint HAnimJoint1672 = createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_vt4";
HAnimHumanoid43.joints[72] = HAnimJoint1672;

HAnimJoint HAnimJoint1673 = createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_vt3";
HAnimHumanoid43.joints[73] = HAnimJoint1673;

HAnimJoint HAnimJoint1674 = createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_vt2";
HAnimHumanoid43.joints[74] = HAnimJoint1674;

HAnimJoint HAnimJoint1675 = createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_vt1";
HAnimHumanoid43.joints[75] = HAnimJoint1675;

HAnimJoint HAnimJoint1676 = createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_vc7";
HAnimHumanoid43.joints[76] = HAnimJoint1676;

HAnimJoint HAnimJoint1677 = createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_vc6";
HAnimHumanoid43.joints[77] = HAnimJoint1677;

HAnimJoint HAnimJoint1678 = createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_vc5";
HAnimHumanoid43.joints[78] = HAnimJoint1678;

HAnimJoint HAnimJoint1679 = createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_vc4";
HAnimHumanoid43.joints[79] = HAnimJoint1679;

HAnimJoint HAnimJoint1680 = createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_vc3";
HAnimHumanoid43.joints[80] = HAnimJoint1680;

HAnimJoint HAnimJoint1681 = createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_vc2";
HAnimHumanoid43.joints[81] = HAnimJoint1681;

HAnimJoint HAnimJoint1682 = createNode("HAnimJoint");
HAnimJoint1682.USE = "hanim_vc1";
HAnimHumanoid43.joints[82] = HAnimJoint1682;

HAnimJoint HAnimJoint1683 = createNode("HAnimJoint");
HAnimJoint1683.USE = "hanim_skullbase";
HAnimHumanoid43.joints[83] = HAnimJoint1683;

HAnimJoint HAnimJoint1684 = createNode("HAnimJoint");
HAnimJoint1684.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[84] = HAnimJoint1684;

HAnimJoint HAnimJoint1685 = createNode("HAnimJoint");
HAnimJoint1685.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[85] = HAnimJoint1685;

HAnimJoint HAnimJoint1686 = createNode("HAnimJoint");
HAnimJoint1686.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[86] = HAnimJoint1686;

HAnimJoint HAnimJoint1687 = createNode("HAnimJoint");
HAnimJoint1687.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[87] = HAnimJoint1687;

HAnimJoint HAnimJoint1688 = createNode("HAnimJoint");
HAnimJoint1688.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[88] = HAnimJoint1688;

HAnimJoint HAnimJoint1689 = createNode("HAnimJoint");
HAnimJoint1689.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[89] = HAnimJoint1689;

HAnimJoint HAnimJoint1690 = createNode("HAnimJoint");
HAnimJoint1690.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[90] = HAnimJoint1690;

HAnimJoint HAnimJoint1691 = createNode("HAnimJoint");
HAnimJoint1691.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[91] = HAnimJoint1691;

HAnimJoint HAnimJoint1692 = createNode("HAnimJoint");
HAnimJoint1692.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[92] = HAnimJoint1692;

HAnimJoint HAnimJoint1693 = createNode("HAnimJoint");
HAnimJoint1693.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[93] = HAnimJoint1693;

HAnimJoint HAnimJoint1694 = createNode("HAnimJoint");
HAnimJoint1694.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[94] = HAnimJoint1694;

HAnimJoint HAnimJoint1695 = createNode("HAnimJoint");
HAnimJoint1695.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[95] = HAnimJoint1695;

HAnimJoint HAnimJoint1696 = createNode("HAnimJoint");
HAnimJoint1696.USE = "hanim_l_midcarpal_1";
HAnimHumanoid43.joints[96] = HAnimJoint1696;

HAnimJoint HAnimJoint1697 = createNode("HAnimJoint");
HAnimJoint1697.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[97] = HAnimJoint1697;

HAnimJoint HAnimJoint1698 = createNode("HAnimJoint");
HAnimJoint1698.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[98] = HAnimJoint1698;

HAnimJoint HAnimJoint1699 = createNode("HAnimJoint");
HAnimJoint1699.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[99] = HAnimJoint1699;

HAnimJoint HAnimJoint1700 = createNode("HAnimJoint");
HAnimJoint1700.USE = "hanim_l_midcarpal_2";
HAnimHumanoid43.joints[100] = HAnimJoint1700;

HAnimJoint HAnimJoint1701 = createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[101] = HAnimJoint1701;

HAnimJoint HAnimJoint1702 = createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[102] = HAnimJoint1702;

HAnimJoint HAnimJoint1703 = createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[103] = HAnimJoint1703;

HAnimJoint HAnimJoint1704 = createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[104] = HAnimJoint1704;

HAnimJoint HAnimJoint1705 = createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_l_midcarpal_3";
HAnimHumanoid43.joints[105] = HAnimJoint1705;

HAnimJoint HAnimJoint1706 = createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[106] = HAnimJoint1706;

HAnimJoint HAnimJoint1707 = createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[107] = HAnimJoint1707;

HAnimJoint HAnimJoint1708 = createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[108] = HAnimJoint1708;

HAnimJoint HAnimJoint1709 = createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[109] = HAnimJoint1709;

HAnimJoint HAnimJoint1710 = createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid43.joints[110] = HAnimJoint1710;

HAnimJoint HAnimJoint1711 = createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[111] = HAnimJoint1711;

HAnimJoint HAnimJoint1712 = createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[112] = HAnimJoint1712;

HAnimJoint HAnimJoint1713 = createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[113] = HAnimJoint1713;

HAnimJoint HAnimJoint1714 = createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[114] = HAnimJoint1714;

HAnimJoint HAnimJoint1715 = createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[115] = HAnimJoint1715;

HAnimJoint HAnimJoint1716 = createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[116] = HAnimJoint1716;

HAnimJoint HAnimJoint1717 = createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[117] = HAnimJoint1717;

HAnimJoint HAnimJoint1718 = createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[118] = HAnimJoint1718;

HAnimJoint HAnimJoint1719 = createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[119] = HAnimJoint1719;

HAnimJoint HAnimJoint1720 = createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[120] = HAnimJoint1720;

HAnimJoint HAnimJoint1721 = createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[121] = HAnimJoint1721;

HAnimJoint HAnimJoint1722 = createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[122] = HAnimJoint1722;

HAnimJoint HAnimJoint1723 = createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[123] = HAnimJoint1723;

HAnimJoint HAnimJoint1724 = createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_r_midcarpal_1";
HAnimHumanoid43.joints[124] = HAnimJoint1724;

HAnimJoint HAnimJoint1725 = createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[125] = HAnimJoint1725;

HAnimJoint HAnimJoint1726 = createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[126] = HAnimJoint1726;

HAnimJoint HAnimJoint1727 = createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[127] = HAnimJoint1727;

HAnimJoint HAnimJoint1728 = createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_r_midcarpal_2";
HAnimHumanoid43.joints[128] = HAnimJoint1728;

HAnimJoint HAnimJoint1729 = createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[129] = HAnimJoint1729;

HAnimJoint HAnimJoint1730 = createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[130] = HAnimJoint1730;

HAnimJoint HAnimJoint1731 = createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[131] = HAnimJoint1731;

HAnimJoint HAnimJoint1732 = createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[132] = HAnimJoint1732;

HAnimJoint HAnimJoint1733 = createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_r_midcarpal_3";
HAnimHumanoid43.joints[133] = HAnimJoint1733;

HAnimJoint HAnimJoint1734 = createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[134] = HAnimJoint1734;

HAnimJoint HAnimJoint1735 = createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[135] = HAnimJoint1735;

HAnimJoint HAnimJoint1736 = createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[136] = HAnimJoint1736;

HAnimJoint HAnimJoint1737 = createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[137] = HAnimJoint1737;

HAnimJoint HAnimJoint1738 = createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid43.joints[138] = HAnimJoint1738;

HAnimJoint HAnimJoint1739 = createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[139] = HAnimJoint1739;

HAnimJoint HAnimJoint1740 = createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[140] = HAnimJoint1740;

HAnimJoint HAnimJoint1741 = createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[141] = HAnimJoint1741;

HAnimJoint HAnimJoint1742 = createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[142] = HAnimJoint1742;

HAnimJoint HAnimJoint1743 = createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[143] = HAnimJoint1743;

HAnimJoint HAnimJoint1744 = createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[144] = HAnimJoint1744;

HAnimJoint HAnimJoint1745 = createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[145] = HAnimJoint1745;

HAnimJoint HAnimJoint1746 = createNode("HAnimJoint");
HAnimJoint1746.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[146] = HAnimJoint1746;

HAnimSegment HAnimSegment1747 = createNode("HAnimSegment");
HAnimSegment1747.USE = "hanim_sacrum";
HAnimHumanoid43.segments[147] = HAnimSegment1747;

HAnimSegment HAnimSegment1748 = createNode("HAnimSegment");
HAnimSegment1748.USE = "hanim_pelvis";
HAnimHumanoid43.segments[148] = HAnimSegment1748;

HAnimSegment HAnimSegment1749 = createNode("HAnimSegment");
HAnimSegment1749.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[149] = HAnimSegment1749;

HAnimSegment HAnimSegment1750 = createNode("HAnimSegment");
HAnimSegment1750.USE = "hanim_l_calf";
HAnimHumanoid43.segments[150] = HAnimSegment1750;

HAnimSegment HAnimSegment1751 = createNode("HAnimSegment");
HAnimSegment1751.USE = "hanim_l_talus";
HAnimHumanoid43.segments[151] = HAnimSegment1751;

HAnimSegment HAnimSegment1752 = createNode("HAnimSegment");
HAnimSegment1752.USE = "hanim_l_navicular";
HAnimHumanoid43.segments[152] = HAnimSegment1752;

HAnimSegment HAnimSegment1753 = createNode("HAnimSegment");
HAnimSegment1753.USE = "hanim_l_cuneiform_1";
HAnimHumanoid43.segments[153] = HAnimSegment1753;

HAnimSegment HAnimSegment1754 = createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_l_metatarsal_1";
HAnimHumanoid43.segments[154] = HAnimSegment1754;

HAnimSegment HAnimSegment1755 = createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[155] = HAnimSegment1755;

HAnimSegment HAnimSegment1756 = createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_l_cuneiform_2";
HAnimHumanoid43.segments[156] = HAnimSegment1756;

HAnimSegment HAnimSegment1757 = createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[157] = HAnimSegment1757;

HAnimSegment HAnimSegment1758 = createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[158] = HAnimSegment1758;

HAnimSegment HAnimSegment1759 = createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[159] = HAnimSegment1759;

HAnimSegment HAnimSegment1760 = createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_l_cuneiform_3";
HAnimHumanoid43.segments[160] = HAnimSegment1760;

HAnimSegment HAnimSegment1761 = createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_l_metatarsal_3";
HAnimHumanoid43.segments[161] = HAnimSegment1761;

HAnimSegment HAnimSegment1762 = createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[162] = HAnimSegment1762;

HAnimSegment HAnimSegment1763 = createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[163] = HAnimSegment1763;

HAnimSegment HAnimSegment1764 = createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_l_calcaneus";
HAnimHumanoid43.segments[164] = HAnimSegment1764;

HAnimSegment HAnimSegment1765 = createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_l_cuboid";
HAnimHumanoid43.segments[165] = HAnimSegment1765;

HAnimSegment HAnimSegment1766 = createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_l_metatarsal_4";
HAnimHumanoid43.segments[166] = HAnimSegment1766;

HAnimSegment HAnimSegment1767 = createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[167] = HAnimSegment1767;

HAnimSegment HAnimSegment1768 = createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[168] = HAnimSegment1768;

HAnimSegment HAnimSegment1769 = createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_l_metatarsal_5";
HAnimHumanoid43.segments[169] = HAnimSegment1769;

HAnimSegment HAnimSegment1770 = createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[170] = HAnimSegment1770;

HAnimSegment HAnimSegment1771 = createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_l_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[171] = HAnimSegment1771;

HAnimSegment HAnimSegment1772 = createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[172] = HAnimSegment1772;

HAnimSegment HAnimSegment1773 = createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_r_calf";
HAnimHumanoid43.segments[173] = HAnimSegment1773;

HAnimSegment HAnimSegment1774 = createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_r_talus";
HAnimHumanoid43.segments[174] = HAnimSegment1774;

HAnimSegment HAnimSegment1775 = createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_r_navicular";
HAnimHumanoid43.segments[175] = HAnimSegment1775;

HAnimSegment HAnimSegment1776 = createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_r_cuneiform_1";
HAnimHumanoid43.segments[176] = HAnimSegment1776;

HAnimSegment HAnimSegment1777 = createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_r_metatarsal_1";
HAnimHumanoid43.segments[177] = HAnimSegment1777;

HAnimSegment HAnimSegment1778 = createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[178] = HAnimSegment1778;

HAnimSegment HAnimSegment1779 = createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_r_cuneiform_2";
HAnimHumanoid43.segments[179] = HAnimSegment1779;

HAnimSegment HAnimSegment1780 = createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[180] = HAnimSegment1780;

HAnimSegment HAnimSegment1781 = createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[181] = HAnimSegment1781;

HAnimSegment HAnimSegment1782 = createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[182] = HAnimSegment1782;

HAnimSegment HAnimSegment1783 = createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_r_cuneiform_3";
HAnimHumanoid43.segments[183] = HAnimSegment1783;

HAnimSegment HAnimSegment1784 = createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_r_metatarsal_3";
HAnimHumanoid43.segments[184] = HAnimSegment1784;

HAnimSegment HAnimSegment1785 = createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[185] = HAnimSegment1785;

HAnimSegment HAnimSegment1786 = createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[186] = HAnimSegment1786;

HAnimSegment HAnimSegment1787 = createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_r_calcaneus";
HAnimHumanoid43.segments[187] = HAnimSegment1787;

HAnimSegment HAnimSegment1788 = createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_r_cuboid";
HAnimHumanoid43.segments[188] = HAnimSegment1788;

HAnimSegment HAnimSegment1789 = createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_r_metatarsal_4";
HAnimHumanoid43.segments[189] = HAnimSegment1789;

HAnimSegment HAnimSegment1790 = createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[190] = HAnimSegment1790;

HAnimSegment HAnimSegment1791 = createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[191] = HAnimSegment1791;

HAnimSegment HAnimSegment1792 = createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_r_metatarsal_5";
HAnimHumanoid43.segments[192] = HAnimSegment1792;

HAnimSegment HAnimSegment1793 = createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[193] = HAnimSegment1793;

HAnimSegment HAnimSegment1794 = createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_r_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[194] = HAnimSegment1794;

HAnimSegment HAnimSegment1795 = createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_l5";
HAnimHumanoid43.segments[195] = HAnimSegment1795;

HAnimSegment HAnimSegment1796 = createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_l4";
HAnimHumanoid43.segments[196] = HAnimSegment1796;

HAnimSegment HAnimSegment1797 = createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_l3";
HAnimHumanoid43.segments[197] = HAnimSegment1797;

HAnimSegment HAnimSegment1798 = createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_l2";
HAnimHumanoid43.segments[198] = HAnimSegment1798;

HAnimSegment HAnimSegment1799 = createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_l1";
HAnimHumanoid43.segments[199] = HAnimSegment1799;

HAnimSegment HAnimSegment1800 = createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_t12";
HAnimHumanoid43.segments[200] = HAnimSegment1800;

HAnimSegment HAnimSegment1801 = createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_t11";
HAnimHumanoid43.segments[201] = HAnimSegment1801;

HAnimSegment HAnimSegment1802 = createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_t10";
HAnimHumanoid43.segments[202] = HAnimSegment1802;

HAnimSegment HAnimSegment1803 = createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_t9";
HAnimHumanoid43.segments[203] = HAnimSegment1803;

HAnimSegment HAnimSegment1804 = createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_t8";
HAnimHumanoid43.segments[204] = HAnimSegment1804;

HAnimSegment HAnimSegment1805 = createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_t7";
HAnimHumanoid43.segments[205] = HAnimSegment1805;

HAnimSegment HAnimSegment1806 = createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_t6";
HAnimHumanoid43.segments[206] = HAnimSegment1806;

HAnimSegment HAnimSegment1807 = createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_t5";
HAnimHumanoid43.segments[207] = HAnimSegment1807;

HAnimSegment HAnimSegment1808 = createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_t4";
HAnimHumanoid43.segments[208] = HAnimSegment1808;

HAnimSegment HAnimSegment1809 = createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_t3";
HAnimHumanoid43.segments[209] = HAnimSegment1809;

HAnimSegment HAnimSegment1810 = createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_t2";
HAnimHumanoid43.segments[210] = HAnimSegment1810;

HAnimSegment HAnimSegment1811 = createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_t1";
HAnimHumanoid43.segments[211] = HAnimSegment1811;

HAnimSegment HAnimSegment1812 = createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_c7";
HAnimHumanoid43.segments[212] = HAnimSegment1812;

HAnimSegment HAnimSegment1813 = createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_c6";
HAnimHumanoid43.segments[213] = HAnimSegment1813;

HAnimSegment HAnimSegment1814 = createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_c5";
HAnimHumanoid43.segments[214] = HAnimSegment1814;

HAnimSegment HAnimSegment1815 = createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_c4";
HAnimHumanoid43.segments[215] = HAnimSegment1815;

HAnimSegment HAnimSegment1816 = createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_c3";
HAnimHumanoid43.segments[216] = HAnimSegment1816;

HAnimSegment HAnimSegment1817 = createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_c2";
HAnimHumanoid43.segments[217] = HAnimSegment1817;

HAnimSegment HAnimSegment1818 = createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_c1";
HAnimHumanoid43.segments[218] = HAnimSegment1818;

HAnimSegment HAnimSegment1819 = createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_skull";
HAnimHumanoid43.segments[219] = HAnimSegment1819;

HAnimSegment HAnimSegment1820 = createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[220] = HAnimSegment1820;

HAnimSegment HAnimSegment1821 = createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[221] = HAnimSegment1821;

HAnimSegment HAnimSegment1822 = createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[222] = HAnimSegment1822;

HAnimSegment HAnimSegment1823 = createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[223] = HAnimSegment1823;

HAnimSegment HAnimSegment1824 = createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[224] = HAnimSegment1824;

HAnimSegment HAnimSegment1825 = createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_l_trapezium";
HAnimHumanoid43.segments[225] = HAnimSegment1825;

HAnimSegment HAnimSegment1826 = createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[226] = HAnimSegment1826;

HAnimSegment HAnimSegment1827 = createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[227] = HAnimSegment1827;

HAnimSegment HAnimSegment1828 = createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_l_trapezoid";
HAnimHumanoid43.segments[228] = HAnimSegment1828;

HAnimSegment HAnimSegment1829 = createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[229] = HAnimSegment1829;

HAnimSegment HAnimSegment1830 = createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[230] = HAnimSegment1830;

HAnimSegment HAnimSegment1831 = createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[231] = HAnimSegment1831;

HAnimSegment HAnimSegment1832 = createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_l_capitate";
HAnimHumanoid43.segments[232] = HAnimSegment1832;

HAnimSegment HAnimSegment1833 = createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[233] = HAnimSegment1833;

HAnimSegment HAnimSegment1834 = createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[234] = HAnimSegment1834;

HAnimSegment HAnimSegment1835 = createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[235] = HAnimSegment1835;

HAnimSegment HAnimSegment1836 = createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_l_hamate";
HAnimHumanoid43.segments[236] = HAnimSegment1836;

HAnimSegment HAnimSegment1837 = createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[237] = HAnimSegment1837;

HAnimSegment HAnimSegment1838 = createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[238] = HAnimSegment1838;

HAnimSegment HAnimSegment1839 = createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[239] = HAnimSegment1839;

HAnimSegment HAnimSegment1840 = createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[240] = HAnimSegment1840;

HAnimSegment HAnimSegment1841 = createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[241] = HAnimSegment1841;

HAnimSegment HAnimSegment1842 = createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[242] = HAnimSegment1842;

HAnimSegment HAnimSegment1843 = createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[243] = HAnimSegment1843;

HAnimSegment HAnimSegment1844 = createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[244] = HAnimSegment1844;

HAnimSegment HAnimSegment1845 = createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[245] = HAnimSegment1845;

HAnimSegment HAnimSegment1846 = createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[246] = HAnimSegment1846;

HAnimSegment HAnimSegment1847 = createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[247] = HAnimSegment1847;

HAnimSegment HAnimSegment1848 = createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_r_trapezium";
HAnimHumanoid43.segments[248] = HAnimSegment1848;

HAnimSegment HAnimSegment1849 = createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[249] = HAnimSegment1849;

HAnimSegment HAnimSegment1850 = createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[250] = HAnimSegment1850;

HAnimSegment HAnimSegment1851 = createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_r_trapezoid";
HAnimHumanoid43.segments[251] = HAnimSegment1851;

HAnimSegment HAnimSegment1852 = createNode("HAnimSegment");
HAnimSegment1852.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[252] = HAnimSegment1852;

HAnimSegment HAnimSegment1853 = createNode("HAnimSegment");
HAnimSegment1853.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[253] = HAnimSegment1853;

HAnimSegment HAnimSegment1854 = createNode("HAnimSegment");
HAnimSegment1854.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[254] = HAnimSegment1854;

HAnimSegment HAnimSegment1855 = createNode("HAnimSegment");
HAnimSegment1855.USE = "hanim_r_capitate";
HAnimHumanoid43.segments[255] = HAnimSegment1855;

HAnimSegment HAnimSegment1856 = createNode("HAnimSegment");
HAnimSegment1856.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[256] = HAnimSegment1856;

HAnimSegment HAnimSegment1857 = createNode("HAnimSegment");
HAnimSegment1857.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[257] = HAnimSegment1857;

HAnimSegment HAnimSegment1858 = createNode("HAnimSegment");
HAnimSegment1858.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[258] = HAnimSegment1858;

HAnimSegment HAnimSegment1859 = createNode("HAnimSegment");
HAnimSegment1859.USE = "hanim_r_hamate";
HAnimHumanoid43.segments[259] = HAnimSegment1859;

HAnimSegment HAnimSegment1860 = createNode("HAnimSegment");
HAnimSegment1860.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[260] = HAnimSegment1860;

HAnimSegment HAnimSegment1861 = createNode("HAnimSegment");
HAnimSegment1861.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[261] = HAnimSegment1861;

HAnimSegment HAnimSegment1862 = createNode("HAnimSegment");
HAnimSegment1862.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[262] = HAnimSegment1862;

HAnimSegment HAnimSegment1863 = createNode("HAnimSegment");
HAnimSegment1863.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[263] = HAnimSegment1863;

HAnimSegment HAnimSegment1864 = createNode("HAnimSegment");
HAnimSegment1864.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[264] = HAnimSegment1864;

HAnimSegment HAnimSegment1865 = createNode("HAnimSegment");
HAnimSegment1865.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[265] = HAnimSegment1865;

HAnimSite HAnimSite1866 = createNode("HAnimSite");
HAnimSite1866.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid43.viewpoints[266] = HAnimSite1866;

HAnimSite HAnimSite1867 = createNode("HAnimSite");
HAnimSite1867.USE = "hanim_crotch_pt";
HAnimHumanoid43.viewpoints[267] = HAnimSite1867;

HAnimSite HAnimSite1868 = createNode("HAnimSite");
HAnimSite1868.USE = "hanim_l_asis_pt";
HAnimHumanoid43.viewpoints[268] = HAnimSite1868;

HAnimSite HAnimSite1869 = createNode("HAnimSite");
HAnimSite1869.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid43.viewpoints[269] = HAnimSite1869;

HAnimSite HAnimSite1870 = createNode("HAnimSite");
HAnimSite1870.USE = "hanim_l_psis_pt";
HAnimHumanoid43.viewpoints[270] = HAnimSite1870;

HAnimSite HAnimSite1871 = createNode("HAnimSite");
HAnimSite1871.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid43.viewpoints[271] = HAnimSite1871;

HAnimSite HAnimSite1872 = createNode("HAnimSite");
HAnimSite1872.USE = "hanim_r_asis_pt";
HAnimHumanoid43.viewpoints[272] = HAnimSite1872;

HAnimSite HAnimSite1873 = createNode("HAnimSite");
HAnimSite1873.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid43.viewpoints[273] = HAnimSite1873;

HAnimSite HAnimSite1874 = createNode("HAnimSite");
HAnimSite1874.USE = "hanim_r_psis_pt";
HAnimHumanoid43.viewpoints[274] = HAnimSite1874;

HAnimSite HAnimSite1875 = createNode("HAnimSite");
HAnimSite1875.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid43.viewpoints[275] = HAnimSite1875;

HAnimSite HAnimSite1876 = createNode("HAnimSite");
HAnimSite1876.USE = "hanim_navel_pt";
HAnimHumanoid43.viewpoints[276] = HAnimSite1876;

HAnimSite HAnimSite1877 = createNode("HAnimSite");
HAnimSite1877.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid43.viewpoints[277] = HAnimSite1877;

HAnimSite HAnimSite1878 = createNode("HAnimSite");
HAnimSite1878.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid43.viewpoints[278] = HAnimSite1878;

HAnimSite HAnimSite1879 = createNode("HAnimSite");
HAnimSite1879.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[279] = HAnimSite1879;

HAnimSite HAnimSite1880 = createNode("HAnimSite");
HAnimSite1880.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[280] = HAnimSite1880;

HAnimSite HAnimSite1881 = createNode("HAnimSite");
HAnimSite1881.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid43.viewpoints[281] = HAnimSite1881;

HAnimSite HAnimSite1882 = createNode("HAnimSite");
HAnimSite1882.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid43.viewpoints[282] = HAnimSite1882;

HAnimSite HAnimSite1883 = createNode("HAnimSite");
HAnimSite1883.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[283] = HAnimSite1883;

HAnimSite HAnimSite1884 = createNode("HAnimSite");
HAnimSite1884.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[284] = HAnimSite1884;

HAnimSite HAnimSite1885 = createNode("HAnimSite");
HAnimSite1885.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid43.viewpoints[285] = HAnimSite1885;

HAnimSite HAnimSite1886 = createNode("HAnimSite");
HAnimSite1886.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid43.viewpoints[286] = HAnimSite1886;

HAnimSite HAnimSite1887 = createNode("HAnimSite");
HAnimSite1887.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[287] = HAnimSite1887;

HAnimSite HAnimSite1888 = createNode("HAnimSite");
HAnimSite1888.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[288] = HAnimSite1888;

HAnimSite HAnimSite1889 = createNode("HAnimSite");
HAnimSite1889.USE = "hanim_l_tibiale_pt";
HAnimHumanoid43.viewpoints[289] = HAnimSite1889;

HAnimSite HAnimSite1890 = createNode("HAnimSite");
HAnimSite1890.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[290] = HAnimSite1890;

HAnimSite HAnimSite1891 = createNode("HAnimSite");
HAnimSite1891.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid43.viewpoints[291] = HAnimSite1891;

HAnimSite HAnimSite1892 = createNode("HAnimSite");
HAnimSite1892.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[292] = HAnimSite1892;

HAnimSite HAnimSite1893 = createNode("HAnimSite");
HAnimSite1893.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[293] = HAnimSite1893;

HAnimSite HAnimSite1894 = createNode("HAnimSite");
HAnimSite1894.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[294] = HAnimSite1894;

HAnimSite HAnimSite1895 = createNode("HAnimSite");
HAnimSite1895.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[295] = HAnimSite1895;

HAnimSite HAnimSite1896 = createNode("HAnimSite");
HAnimSite1896.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[296] = HAnimSite1896;

HAnimSite HAnimSite1897 = createNode("HAnimSite");
HAnimSite1897.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[297] = HAnimSite1897;

HAnimSite HAnimSite1898 = createNode("HAnimSite");
HAnimSite1898.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[298] = HAnimSite1898;

HAnimSite HAnimSite1899 = createNode("HAnimSite");
HAnimSite1899.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[299] = HAnimSite1899;

HAnimSite HAnimSite1900 = createNode("HAnimSite");
HAnimSite1900.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[300] = HAnimSite1900;

HAnimSite HAnimSite1901 = createNode("HAnimSite");
HAnimSite1901.USE = "hanim_r_tibiale_pt";
HAnimHumanoid43.viewpoints[301] = HAnimSite1901;

HAnimSite HAnimSite1902 = createNode("HAnimSite");
HAnimSite1902.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[302] = HAnimSite1902;

HAnimSite HAnimSite1903 = createNode("HAnimSite");
HAnimSite1903.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid43.viewpoints[303] = HAnimSite1903;

HAnimSite HAnimSite1904 = createNode("HAnimSite");
HAnimSite1904.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[304] = HAnimSite1904;

HAnimSite HAnimSite1905 = createNode("HAnimSite");
HAnimSite1905.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[305] = HAnimSite1905;

HAnimSite HAnimSite1906 = createNode("HAnimSite");
HAnimSite1906.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[306] = HAnimSite1906;

HAnimSite HAnimSite1907 = createNode("HAnimSite");
HAnimSite1907.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[307] = HAnimSite1907;

HAnimSite HAnimSite1908 = createNode("HAnimSite");
HAnimSite1908.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[308] = HAnimSite1908;

HAnimSite HAnimSite1909 = createNode("HAnimSite");
HAnimSite1909.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[309] = HAnimSite1909;

HAnimSite HAnimSite1910 = createNode("HAnimSite");
HAnimSite1910.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[310] = HAnimSite1910;

HAnimSite HAnimSite1911 = createNode("HAnimSite");
HAnimSite1911.USE = "hanim_l_rib10_pt";
HAnimHumanoid43.viewpoints[311] = HAnimSite1911;

HAnimSite HAnimSite1912 = createNode("HAnimSite");
HAnimSite1912.USE = "hanim_r_rib10_pt";
HAnimHumanoid43.viewpoints[312] = HAnimSite1912;

HAnimSite HAnimSite1913 = createNode("HAnimSite");
HAnimSite1913.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid43.viewpoints[313] = HAnimSite1913;

HAnimSite HAnimSite1914 = createNode("HAnimSite");
HAnimSite1914.USE = "hanim_substernale_pt";
HAnimHumanoid43.viewpoints[314] = HAnimSite1914;

HAnimSite HAnimSite1915 = createNode("HAnimSite");
HAnimSite1915.USE = "hanim_l_thelion_pt";
HAnimHumanoid43.viewpoints[315] = HAnimSite1915;

HAnimSite HAnimSite1916 = createNode("HAnimSite");
HAnimSite1916.USE = "hanim_r_thelion_pt";
HAnimHumanoid43.viewpoints[316] = HAnimSite1916;

HAnimSite HAnimSite1917 = createNode("HAnimSite");
HAnimSite1917.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[317] = HAnimSite1917;

HAnimSite HAnimSite1918 = createNode("HAnimSite");
HAnimSite1918.USE = "hanim_mesosternale_pt";
HAnimHumanoid43.viewpoints[318] = HAnimSite1918;

HAnimSite HAnimSite1919 = createNode("HAnimSite");
HAnimSite1919.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[319] = HAnimSite1919;

HAnimSite HAnimSite1920 = createNode("HAnimSite");
HAnimSite1920.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[320] = HAnimSite1920;

HAnimSite HAnimSite1921 = createNode("HAnimSite");
HAnimSite1921.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid43.viewpoints[321] = HAnimSite1921;

HAnimSite HAnimSite1922 = createNode("HAnimSite");
HAnimSite1922.USE = "hanim_cervicale_pt";
HAnimHumanoid43.viewpoints[322] = HAnimSite1922;

HAnimSite HAnimSite1923 = createNode("HAnimSite");
HAnimSite1923.USE = "hanim_suprasternale_pt";
HAnimHumanoid43.viewpoints[323] = HAnimSite1923;

HAnimSite HAnimSite1924 = createNode("HAnimSite");
HAnimSite1924.USE = "hanim_l_neck_base_pt";
HAnimHumanoid43.viewpoints[324] = HAnimSite1924;

HAnimSite HAnimSite1925 = createNode("HAnimSite");
HAnimSite1925.USE = "hanim_r_neck_base_pt";
HAnimHumanoid43.viewpoints[325] = HAnimSite1925;

HAnimSite HAnimSite1926 = createNode("HAnimSite");
HAnimSite1926.USE = "hanim_l_acromion_pt";
HAnimHumanoid43.viewpoints[326] = HAnimSite1926;

HAnimSite HAnimSite1927 = createNode("HAnimSite");
HAnimSite1927.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[327] = HAnimSite1927;

HAnimSite HAnimSite1928 = createNode("HAnimSite");
HAnimSite1928.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[328] = HAnimSite1928;

HAnimSite HAnimSite1929 = createNode("HAnimSite");
HAnimSite1929.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[329] = HAnimSite1929;

HAnimSite HAnimSite1930 = createNode("HAnimSite");
HAnimSite1930.USE = "hanim_l_clavicale_pt";
HAnimHumanoid43.viewpoints[330] = HAnimSite1930;

HAnimSite HAnimSite1931 = createNode("HAnimSite");
HAnimSite1931.USE = "hanim_r_acromion_pt";
HAnimHumanoid43.viewpoints[331] = HAnimSite1931;

HAnimSite HAnimSite1932 = createNode("HAnimSite");
HAnimSite1932.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[332] = HAnimSite1932;

HAnimSite HAnimSite1933 = createNode("HAnimSite");
HAnimSite1933.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[333] = HAnimSite1933;

HAnimSite HAnimSite1934 = createNode("HAnimSite");
HAnimSite1934.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[334] = HAnimSite1934;

HAnimSite HAnimSite1935 = createNode("HAnimSite");
HAnimSite1935.USE = "hanim_r_clavicale_pt";
HAnimHumanoid43.viewpoints[335] = HAnimSite1935;

HAnimSite HAnimSite1936 = createNode("HAnimSite");
HAnimSite1936.USE = "hanim_adams_apple_pt";
HAnimHumanoid43.viewpoints[336] = HAnimSite1936;

HAnimSite HAnimSite1937 = createNode("HAnimSite");
HAnimSite1937.USE = "hanim_glabella_pt";
HAnimHumanoid43.viewpoints[337] = HAnimSite1937;

HAnimSite HAnimSite1938 = createNode("HAnimSite");
HAnimSite1938.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid43.viewpoints[338] = HAnimSite1938;

HAnimSite HAnimSite1939 = createNode("HAnimSite");
HAnimSite1939.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid43.viewpoints[339] = HAnimSite1939;

HAnimSite HAnimSite1940 = createNode("HAnimSite");
HAnimSite1940.USE = "hanim_l_tragion_pt";
HAnimHumanoid43.viewpoints[340] = HAnimSite1940;

HAnimSite HAnimSite1941 = createNode("HAnimSite");
HAnimSite1941.USE = "hanim_nuchale_pt";
HAnimHumanoid43.viewpoints[341] = HAnimSite1941;

HAnimSite HAnimSite1942 = createNode("HAnimSite");
HAnimSite1942.USE = "hanim_opisthocranion_pt";
HAnimHumanoid43.viewpoints[342] = HAnimSite1942;

HAnimSite HAnimSite1943 = createNode("HAnimSite");
HAnimSite1943.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid43.viewpoints[343] = HAnimSite1943;

HAnimSite HAnimSite1944 = createNode("HAnimSite");
HAnimSite1944.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid43.viewpoints[344] = HAnimSite1944;

HAnimSite HAnimSite1945 = createNode("HAnimSite");
HAnimSite1945.USE = "hanim_r_tragion_pt";
HAnimHumanoid43.viewpoints[345] = HAnimSite1945;

HAnimSite HAnimSite1946 = createNode("HAnimSite");
HAnimSite1946.USE = "hanim_sellion_pt";
HAnimHumanoid43.viewpoints[346] = HAnimSite1946;

HAnimSite HAnimSite1947 = createNode("HAnimSite");
HAnimSite1947.USE = "hanim_skull_vertex_pt";
HAnimHumanoid43.viewpoints[347] = HAnimSite1947;

HAnimSite HAnimSite1948 = createNode("HAnimSite");
HAnimSite1948.USE = "hanim_l_gonion_pt";
HAnimHumanoid43.viewpoints[348] = HAnimSite1948;

HAnimSite HAnimSite1949 = createNode("HAnimSite");
HAnimSite1949.USE = "hanim_menton_pt";
HAnimHumanoid43.viewpoints[349] = HAnimSite1949;

HAnimSite HAnimSite1950 = createNode("HAnimSite");
HAnimSite1950.USE = "hanim_r_gonion_pt";
HAnimHumanoid43.viewpoints[350] = HAnimSite1950;

HAnimSite HAnimSite1951 = createNode("HAnimSite");
HAnimSite1951.USE = "hanim_supramenton_pt";
HAnimHumanoid43.viewpoints[351] = HAnimSite1951;

HAnimSite HAnimSite1952 = createNode("HAnimSite");
HAnimSite1952.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid43.viewpoints[352] = HAnimSite1952;

HAnimSite HAnimSite1953 = createNode("HAnimSite");
HAnimSite1953.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[353] = HAnimSite1953;

HAnimSite HAnimSite1954 = createNode("HAnimSite");
HAnimSite1954.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[354] = HAnimSite1954;

HAnimSite HAnimSite1955 = createNode("HAnimSite");
HAnimSite1955.USE = "hanim_l_olecranon_pt";
HAnimHumanoid43.viewpoints[355] = HAnimSite1955;

HAnimSite HAnimSite1956 = createNode("HAnimSite");
HAnimSite1956.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid43.viewpoints[356] = HAnimSite1956;

HAnimSite HAnimSite1957 = createNode("HAnimSite");
HAnimSite1957.USE = "hanim_l_radiale_pt";
HAnimHumanoid43.viewpoints[357] = HAnimSite1957;

HAnimSite HAnimSite1958 = createNode("HAnimSite");
HAnimSite1958.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[358] = HAnimSite1958;

HAnimSite HAnimSite1959 = createNode("HAnimSite");
HAnimSite1959.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[359] = HAnimSite1959;

HAnimSite HAnimSite1960 = createNode("HAnimSite");
HAnimSite1960.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[360] = HAnimSite1960;

HAnimSite HAnimSite1961 = createNode("HAnimSite");
HAnimSite1961.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[361] = HAnimSite1961;

HAnimSite HAnimSite1962 = createNode("HAnimSite");
HAnimSite1962.USE = "hanim_l_dactylion_pt";
HAnimHumanoid43.viewpoints[362] = HAnimSite1962;

HAnimSite HAnimSite1963 = createNode("HAnimSite");
HAnimSite1963.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[363] = HAnimSite1963;

HAnimSite HAnimSite1964 = createNode("HAnimSite");
HAnimSite1964.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[364] = HAnimSite1964;

HAnimSite HAnimSite1965 = createNode("HAnimSite");
HAnimSite1965.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[365] = HAnimSite1965;

HAnimSite HAnimSite1966 = createNode("HAnimSite");
HAnimSite1966.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[366] = HAnimSite1966;

HAnimSite HAnimSite1967 = createNode("HAnimSite");
HAnimSite1967.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[367] = HAnimSite1967;

HAnimSite HAnimSite1968 = createNode("HAnimSite");
HAnimSite1968.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid43.viewpoints[368] = HAnimSite1968;

HAnimSite HAnimSite1969 = createNode("HAnimSite");
HAnimSite1969.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[369] = HAnimSite1969;

HAnimSite HAnimSite1970 = createNode("HAnimSite");
HAnimSite1970.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[370] = HAnimSite1970;

HAnimSite HAnimSite1971 = createNode("HAnimSite");
HAnimSite1971.USE = "hanim_r_olecranon_pt";
HAnimHumanoid43.viewpoints[371] = HAnimSite1971;

HAnimSite HAnimSite1972 = createNode("HAnimSite");
HAnimSite1972.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid43.viewpoints[372] = HAnimSite1972;

HAnimSite HAnimSite1973 = createNode("HAnimSite");
HAnimSite1973.USE = "hanim_r_radiale_pt";
HAnimHumanoid43.viewpoints[373] = HAnimSite1973;

HAnimSite HAnimSite1974 = createNode("HAnimSite");
HAnimSite1974.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[374] = HAnimSite1974;

HAnimSite HAnimSite1975 = createNode("HAnimSite");
HAnimSite1975.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[375] = HAnimSite1975;

HAnimSite HAnimSite1976 = createNode("HAnimSite");
HAnimSite1976.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[376] = HAnimSite1976;

HAnimSite HAnimSite1977 = createNode("HAnimSite");
HAnimSite1977.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[377] = HAnimSite1977;

HAnimSite HAnimSite1978 = createNode("HAnimSite");
HAnimSite1978.USE = "hanim_r_dactylion_pt";
HAnimHumanoid43.viewpoints[378] = HAnimSite1978;

HAnimSite HAnimSite1979 = createNode("HAnimSite");
HAnimSite1979.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[379] = HAnimSite1979;

HAnimSite HAnimSite1980 = createNode("HAnimSite");
HAnimSite1980.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[380] = HAnimSite1980;

HAnimSite HAnimSite1981 = createNode("HAnimSite");
HAnimSite1981.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[381] = HAnimSite1981;

HAnimSite HAnimSite1982 = createNode("HAnimSite");
HAnimSite1982.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[382] = HAnimSite1982;

HAnimSite HAnimSite1983 = createNode("HAnimSite");
HAnimSite1983.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[383] = HAnimSite1983;

children[4] = HAnimHumanoid43;

}
