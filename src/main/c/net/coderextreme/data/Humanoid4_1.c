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
meta3.content = "JohnBoy.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d";
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

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

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

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

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

Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

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

Transform29.children = new MFNode();

Transform29.children[0] = Shape30;

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

Transform34.children = new MFNode();

Transform34.children[0] = Shape35;

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
HAnimJoint HAnimJoint44 = createNode("HAnimJoint");
HAnimJoint44.name = "humanoid_root";
HAnimJoint44.DEF = "hanim_humanoid_root";
HAnimJoint44.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint44.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint44.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment45 = createNode("HAnimSegment");
HAnimSegment45.name = "sacrum";
HAnimSegment45.DEF = "hanim_sacrum";
Transform Transform46 = createNode("Transform");
Transform46.translation = new SFVec3f(new float[0,0.824,0.0277]);
Transform Transform47 = createNode("Transform");
//Empty Transform
Shape Shape48 = createNode("Shape");
Shape48.USE = "HAnimJointShape";
Transform47.children = new MFNode();

Transform47.children[0] = Shape48;

Transform46.children = new MFNode();

Transform46.children[0] = Transform47;

HAnimSegment45.children = new MFNode();

HAnimSegment45.children[0] = Transform46;

Shape Shape49 = createNode("Shape");
LineSet LineSet50 = createNode("LineSet");
LineSet50.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate51 = createNode("Coordinate");
Coordinate51.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet50.coord = Coordinate51;

//from humanoid_root to sacroiliac vertices 2
ColorRGBA ColorRGBA52 = createNode("ColorRGBA");
ColorRGBA52.USE = "HAnimSegmentLineColorRGBA";
LineSet50.color = ColorRGBA52;

Shape49.geometry = LineSet50;

HAnimSegment45.children[1] = Shape49;

HAnimSite HAnimSite53 = createNode("HAnimSite");
HAnimSite53.name = "buttocks_standing_wall_contact_point_pt";
HAnimSite53.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
TouchSensor TouchSensor54 = createNode("TouchSensor");
TouchSensor54.description = "HAnimSite buttocks_standing_wall_contact_point_pt";
HAnimSite53.children = new MFNode();

HAnimSite53.children[0] = TouchSensor54;

Shape Shape55 = createNode("Shape");
Shape55.USE = "HAnimSiteShape";
HAnimSite53.children[1] = Shape55;

HAnimSegment45.children[2] = HAnimSite53;

HAnimSite HAnimSite56 = createNode("HAnimSite");
HAnimSite56.name = "crotch_pt";
HAnimSite56.DEF = "hanim_crotch_pt";
HAnimSite56.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
TouchSensor TouchSensor57 = createNode("TouchSensor");
TouchSensor57.description = "HAnimSite crotch_pt";
HAnimSite56.children = new MFNode();

HAnimSite56.children[0] = TouchSensor57;

Shape Shape58 = createNode("Shape");
Shape58.USE = "HAnimSiteShape";
HAnimSite56.children[1] = Shape58;

HAnimSegment45.children[3] = HAnimSite56;

HAnimSite HAnimSite59 = createNode("HAnimSite");
HAnimSite59.name = "l_asis_pt";
HAnimSite59.DEF = "hanim_l_asis_pt";
HAnimSite59.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
TouchSensor TouchSensor60 = createNode("TouchSensor");
TouchSensor60.description = "HAnimSite l_asis_pt";
HAnimSite59.children = new MFNode();

HAnimSite59.children[0] = TouchSensor60;

Shape Shape61 = createNode("Shape");
Shape61.USE = "HAnimSiteShape";
HAnimSite59.children[1] = Shape61;

HAnimSegment45.children[4] = HAnimSite59;

HAnimSite HAnimSite62 = createNode("HAnimSite");
HAnimSite62.name = "l_iliocristale_pt";
HAnimSite62.DEF = "hanim_l_iliocristale_pt";
HAnimSite62.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
TouchSensor TouchSensor63 = createNode("TouchSensor");
TouchSensor63.description = "HAnimSite l_iliocristale_pt";
HAnimSite62.children = new MFNode();

HAnimSite62.children[0] = TouchSensor63;

Shape Shape64 = createNode("Shape");
Shape64.USE = "HAnimSiteShape";
HAnimSite62.children[1] = Shape64;

HAnimSegment45.children[5] = HAnimSite62;

HAnimSite HAnimSite65 = createNode("HAnimSite");
HAnimSite65.name = "l_psis_pt";
HAnimSite65.DEF = "hanim_l_psis_pt";
HAnimSite65.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
TouchSensor TouchSensor66 = createNode("TouchSensor");
TouchSensor66.description = "HAnimSite l_psis_pt";
HAnimSite65.children = new MFNode();

HAnimSite65.children[0] = TouchSensor66;

Shape Shape67 = createNode("Shape");
Shape67.USE = "HAnimSiteShape";
HAnimSite65.children[1] = Shape67;

HAnimSegment45.children[6] = HAnimSite65;

HAnimSite HAnimSite68 = createNode("HAnimSite");
HAnimSite68.name = "l_trochanterion_pt";
HAnimSite68.DEF = "hanim_l_trochanterion_pt";
HAnimSite68.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
TouchSensor TouchSensor69 = createNode("TouchSensor");
TouchSensor69.description = "HAnimSite l_trochanterion_pt";
HAnimSite68.children = new MFNode();

HAnimSite68.children[0] = TouchSensor69;

Shape Shape70 = createNode("Shape");
Shape70.USE = "HAnimSiteShape";
HAnimSite68.children[1] = Shape70;

HAnimSegment45.children[7] = HAnimSite68;

HAnimSite HAnimSite71 = createNode("HAnimSite");
HAnimSite71.name = "r_asis_pt";
HAnimSite71.DEF = "hanim_r_asis_pt";
HAnimSite71.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
TouchSensor TouchSensor72 = createNode("TouchSensor");
TouchSensor72.description = "HAnimSite r_asis_pt";
HAnimSite71.children = new MFNode();

HAnimSite71.children[0] = TouchSensor72;

Shape Shape73 = createNode("Shape");
Shape73.USE = "HAnimSiteShape";
HAnimSite71.children[1] = Shape73;

HAnimSegment45.children[8] = HAnimSite71;

HAnimSite HAnimSite74 = createNode("HAnimSite");
HAnimSite74.name = "r_iliocristale_pt";
HAnimSite74.DEF = "hanim_r_iliocristale_pt";
HAnimSite74.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
TouchSensor TouchSensor75 = createNode("TouchSensor");
TouchSensor75.description = "HAnimSite r_iliocristale_pt";
HAnimSite74.children = new MFNode();

HAnimSite74.children[0] = TouchSensor75;

Shape Shape76 = createNode("Shape");
Shape76.USE = "HAnimSiteShape";
HAnimSite74.children[1] = Shape76;

HAnimSegment45.children[9] = HAnimSite74;

HAnimSite HAnimSite77 = createNode("HAnimSite");
HAnimSite77.name = "r_psis_pt";
HAnimSite77.DEF = "hanim_r_psis_pt";
HAnimSite77.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
TouchSensor TouchSensor78 = createNode("TouchSensor");
TouchSensor78.description = "HAnimSite r_psis_pt";
HAnimSite77.children = new MFNode();

HAnimSite77.children[0] = TouchSensor78;

Shape Shape79 = createNode("Shape");
Shape79.USE = "HAnimSiteShape";
HAnimSite77.children[1] = Shape79;

HAnimSegment45.children[10] = HAnimSite77;

HAnimSite HAnimSite80 = createNode("HAnimSite");
HAnimSite80.name = "r_trochanterion_pt";
HAnimSite80.DEF = "hanim_r_trochanterion_pt";
HAnimSite80.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
TouchSensor TouchSensor81 = createNode("TouchSensor");
TouchSensor81.description = "HAnimSite r_trochanterion_pt";
HAnimSite80.children = new MFNode();

HAnimSite80.children[0] = TouchSensor81;

Shape Shape82 = createNode("Shape");
Shape82.USE = "HAnimSiteShape";
HAnimSite80.children[1] = Shape82;

HAnimSegment45.children[11] = HAnimSite80;

Shape Shape83 = createNode("Shape");
LineSet LineSet84 = createNode("LineSet");
LineSet84.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate85 = createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet84.coord = Coordinate85;

//from humanoid_root to vl5 vertices 2
ColorRGBA ColorRGBA86 = createNode("ColorRGBA");
ColorRGBA86.USE = "HAnimSegmentLineColorRGBA";
LineSet84.color = ColorRGBA86;

Shape83.geometry = LineSet84;

HAnimSegment45.children[12] = Shape83;

HAnimSite HAnimSite87 = createNode("HAnimSite");
HAnimSite87.name = "navel_pt";
HAnimSite87.DEF = "hanim_navel_pt";
HAnimSite87.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
TouchSensor TouchSensor88 = createNode("TouchSensor");
TouchSensor88.description = "HAnimSite navel_pt";
HAnimSite87.children = new MFNode();

HAnimSite87.children[0] = TouchSensor88;

Shape Shape89 = createNode("Shape");
Shape89.USE = "HAnimSiteShape";
HAnimSite87.children[1] = Shape89;

HAnimSegment45.children[13] = HAnimSite87;

HAnimSite HAnimSite90 = createNode("HAnimSite");
HAnimSite90.name = "waist_preferred_anterior_pt";
HAnimSite90.DEF = "hanim_waist_preferred_anterior_pt";
TouchSensor TouchSensor91 = createNode("TouchSensor");
TouchSensor91.description = "HAnimSite waist_preferred_anterior_pt";
HAnimSite90.children = new MFNode();

HAnimSite90.children[0] = TouchSensor91;

Shape Shape92 = createNode("Shape");
Shape92.USE = "HAnimSiteShape";
HAnimSite90.children[1] = Shape92;

HAnimSegment45.children[14] = HAnimSite90;

HAnimSite HAnimSite93 = createNode("HAnimSite");
HAnimSite93.name = "waist_preferred_posterior_pt";
HAnimSite93.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite93.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
TouchSensor TouchSensor94 = createNode("TouchSensor");
TouchSensor94.description = "HAnimSite waist_preferred_posterior_pt";
HAnimSite93.children = new MFNode();

HAnimSite93.children[0] = TouchSensor94;

Shape Shape95 = createNode("Shape");
Shape95.USE = "HAnimSiteShape";
HAnimSite93.children[1] = Shape95;

HAnimSegment45.children[15] = HAnimSite93;

HAnimJoint44.children = new MFNode();

HAnimJoint44.children[0] = HAnimSegment45;

HAnimJoint HAnimJoint96 = createNode("HAnimJoint");
HAnimJoint96.name = "sacroiliac";
HAnimJoint96.DEF = "hanim_sacroiliac";
HAnimJoint96.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint96.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint96.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment97 = createNode("HAnimSegment");
HAnimSegment97.name = "pelvis";
HAnimSegment97.DEF = "hanim_pelvis";
Transform Transform98 = createNode("Transform");
Transform98.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Transform Transform99 = createNode("Transform");
//Empty Transform
Shape Shape100 = createNode("Shape");
Shape100.USE = "HAnimJointShape";
Transform99.children = new MFNode();

Transform99.children[0] = Shape100;

Transform98.children = new MFNode();

Transform98.children[0] = Transform99;

HAnimSegment97.children = new MFNode();

HAnimSegment97.children[0] = Transform98;

Shape Shape101 = createNode("Shape");
LineSet LineSet102 = createNode("LineSet");
LineSet102.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate103 = createNode("Coordinate");
Coordinate103.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet102.coord = Coordinate103;

//from sacroiliac to l_hip vertices 2
ColorRGBA ColorRGBA104 = createNode("ColorRGBA");
ColorRGBA104.USE = "HAnimSegmentLineColorRGBA";
LineSet102.color = ColorRGBA104;

Shape101.geometry = LineSet102;

HAnimSegment97.children[1] = Shape101;

HAnimSite HAnimSite105 = createNode("HAnimSite");
HAnimSite105.name = "l_femoral_lateral_epicondyles_pt";
HAnimSite105.DEF = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimSite105.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
TouchSensor TouchSensor106 = createNode("TouchSensor");
TouchSensor106.description = "HAnimSite l_femoral_lateral_epicondyles_pt";
HAnimSite105.children = new MFNode();

HAnimSite105.children[0] = TouchSensor106;

Shape Shape107 = createNode("Shape");
Shape107.USE = "HAnimSiteShape";
HAnimSite105.children[1] = Shape107;

HAnimSegment97.children[2] = HAnimSite105;

HAnimSite HAnimSite108 = createNode("HAnimSite");
HAnimSite108.name = "l_femoral_medial_epicondyles_pt";
HAnimSite108.DEF = "hanim_l_femoral_medial_epicondyles_pt";
HAnimSite108.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
TouchSensor TouchSensor109 = createNode("TouchSensor");
TouchSensor109.description = "HAnimSite l_femoral_medial_epicondyles_pt";
HAnimSite108.children = new MFNode();

HAnimSite108.children[0] = TouchSensor109;

Shape Shape110 = createNode("Shape");
Shape110.USE = "HAnimSiteShape";
HAnimSite108.children[1] = Shape110;

HAnimSegment97.children[3] = HAnimSite108;

HAnimSite HAnimSite111 = createNode("HAnimSite");
HAnimSite111.name = "l_knee_crease_pt";
HAnimSite111.DEF = "hanim_l_knee_crease_pt";
HAnimSite111.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
TouchSensor TouchSensor112 = createNode("TouchSensor");
TouchSensor112.description = "HAnimSite l_knee_crease_pt";
HAnimSite111.children = new MFNode();

HAnimSite111.children[0] = TouchSensor112;

Shape Shape113 = createNode("Shape");
Shape113.USE = "HAnimSiteShape";
HAnimSite111.children[1] = Shape113;

HAnimSegment97.children[4] = HAnimSite111;

HAnimSite HAnimSite114 = createNode("HAnimSite");
HAnimSite114.name = "l_suprapatella_pt";
HAnimSite114.DEF = "hanim_l_suprapatella_pt";
TouchSensor TouchSensor115 = createNode("TouchSensor");
TouchSensor115.description = "HAnimSite l_suprapatella_pt";
HAnimSite114.children = new MFNode();

HAnimSite114.children[0] = TouchSensor115;

Shape Shape116 = createNode("Shape");
Shape116.USE = "HAnimSiteShape";
HAnimSite114.children[1] = Shape116;

HAnimSegment97.children[5] = HAnimSite114;

Shape Shape117 = createNode("Shape");
LineSet LineSet118 = createNode("LineSet");
LineSet118.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate119 = createNode("Coordinate");
Coordinate119.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet118.coord = Coordinate119;

//from sacroiliac to r_hip vertices 2
ColorRGBA ColorRGBA120 = createNode("ColorRGBA");
ColorRGBA120.USE = "HAnimSegmentLineColorRGBA";
LineSet118.color = ColorRGBA120;

Shape117.geometry = LineSet118;

HAnimSegment97.children[6] = Shape117;

HAnimSite HAnimSite121 = createNode("HAnimSite");
HAnimSite121.name = "r_femoral_lateral_epicondyles_pt";
HAnimSite121.DEF = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimSite121.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
TouchSensor TouchSensor122 = createNode("TouchSensor");
TouchSensor122.description = "HAnimSite r_femoral_lateral_epicondyles_pt";
HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = TouchSensor122;

Shape Shape123 = createNode("Shape");
Shape123.USE = "HAnimSiteShape";
HAnimSite121.children[1] = Shape123;

HAnimSegment97.children[7] = HAnimSite121;

HAnimSite HAnimSite124 = createNode("HAnimSite");
HAnimSite124.name = "r_femoral_medial_epicondyles_pt";
HAnimSite124.DEF = "hanim_r_femoral_medial_epicondyles_pt";
HAnimSite124.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
TouchSensor TouchSensor125 = createNode("TouchSensor");
TouchSensor125.description = "HAnimSite r_femoral_medial_epicondyles_pt";
HAnimSite124.children = new MFNode();

HAnimSite124.children[0] = TouchSensor125;

Shape Shape126 = createNode("Shape");
Shape126.USE = "HAnimSiteShape";
HAnimSite124.children[1] = Shape126;

HAnimSegment97.children[8] = HAnimSite124;

HAnimSite HAnimSite127 = createNode("HAnimSite");
HAnimSite127.name = "r_knee_crease_pt";
HAnimSite127.DEF = "hanim_r_knee_crease_pt";
HAnimSite127.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
TouchSensor TouchSensor128 = createNode("TouchSensor");
TouchSensor128.description = "HAnimSite r_knee_crease_pt";
HAnimSite127.children = new MFNode();

HAnimSite127.children[0] = TouchSensor128;

Shape Shape129 = createNode("Shape");
Shape129.USE = "HAnimSiteShape";
HAnimSite127.children[1] = Shape129;

HAnimSegment97.children[9] = HAnimSite127;

HAnimSite HAnimSite130 = createNode("HAnimSite");
HAnimSite130.name = "r_suprapatella_pt";
HAnimSite130.DEF = "hanim_r_suprapatella_pt";
TouchSensor TouchSensor131 = createNode("TouchSensor");
TouchSensor131.description = "HAnimSite r_suprapatella_pt";
HAnimSite130.children = new MFNode();

HAnimSite130.children[0] = TouchSensor131;

Shape Shape132 = createNode("Shape");
Shape132.USE = "HAnimSiteShape";
HAnimSite130.children[1] = Shape132;

HAnimSegment97.children[10] = HAnimSite130;

HAnimJoint96.children = new MFNode();

HAnimJoint96.children[0] = HAnimSegment97;

HAnimJoint HAnimJoint133 = createNode("HAnimJoint");
HAnimJoint133.name = "l_hip";
HAnimJoint133.DEF = "hanim_l_hip";
HAnimJoint133.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint133.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint133.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment134 = createNode("HAnimSegment");
HAnimSegment134.name = "l_thigh";
HAnimSegment134.DEF = "hanim_l_thigh";
Transform Transform135 = createNode("Transform");
Transform135.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Transform Transform136 = createNode("Transform");
//Empty Transform
Shape Shape137 = createNode("Shape");
Shape137.USE = "HAnimJointShape";
Transform136.children = new MFNode();

Transform136.children[0] = Shape137;

Transform135.children = new MFNode();

Transform135.children[0] = Transform136;

HAnimSegment134.children = new MFNode();

HAnimSegment134.children[0] = Transform135;

Shape Shape138 = createNode("Shape");
LineSet LineSet139 = createNode("LineSet");
LineSet139.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate140 = createNode("Coordinate");
Coordinate140.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet139.coord = Coordinate140;

//from l_hip to l_knee vertices 2
ColorRGBA ColorRGBA141 = createNode("ColorRGBA");
ColorRGBA141.USE = "HAnimSegmentLineColorRGBA";
LineSet139.color = ColorRGBA141;

Shape138.geometry = LineSet139;

HAnimSegment134.children[1] = Shape138;

HAnimSite HAnimSite142 = createNode("HAnimSite");
HAnimSite142.name = "l_lateral_malleolus_pt";
HAnimSite142.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite142.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
TouchSensor TouchSensor143 = createNode("TouchSensor");
TouchSensor143.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite142.children = new MFNode();

HAnimSite142.children[0] = TouchSensor143;

Shape Shape144 = createNode("Shape");
Shape144.USE = "HAnimSiteShape";
HAnimSite142.children[1] = Shape144;

HAnimSegment134.children[2] = HAnimSite142;

HAnimSite HAnimSite145 = createNode("HAnimSite");
HAnimSite145.name = "l_medial_malleolus_pt";
HAnimSite145.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite145.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
TouchSensor TouchSensor146 = createNode("TouchSensor");
TouchSensor146.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite145.children = new MFNode();

HAnimSite145.children[0] = TouchSensor146;

Shape Shape147 = createNode("Shape");
Shape147.USE = "HAnimSiteShape";
HAnimSite145.children[1] = Shape147;

HAnimSegment134.children[3] = HAnimSite145;

HAnimSite HAnimSite148 = createNode("HAnimSite");
HAnimSite148.name = "l_tibiale_pt";
HAnimSite148.DEF = "hanim_l_tibiale_pt";
TouchSensor TouchSensor149 = createNode("TouchSensor");
TouchSensor149.description = "HAnimSite l_tibiale_pt";
HAnimSite148.children = new MFNode();

HAnimSite148.children[0] = TouchSensor149;

Shape Shape150 = createNode("Shape");
Shape150.USE = "HAnimSiteShape";
HAnimSite148.children[1] = Shape150;

HAnimSegment134.children[4] = HAnimSite148;

HAnimJoint133.children = new MFNode();

HAnimJoint133.children[0] = HAnimSegment134;

HAnimJoint HAnimJoint151 = createNode("HAnimJoint");
HAnimJoint151.name = "l_knee";
HAnimJoint151.DEF = "hanim_l_knee";
HAnimJoint151.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint151.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint151.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment152 = createNode("HAnimSegment");
HAnimSegment152.name = "l_calf";
HAnimSegment152.DEF = "hanim_l_calf";
Transform Transform153 = createNode("Transform");
Transform153.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Transform Transform154 = createNode("Transform");
//Empty Transform
Shape Shape155 = createNode("Shape");
Shape155.USE = "HAnimJointShape";
Transform154.children = new MFNode();

Transform154.children[0] = Shape155;

Transform153.children = new MFNode();

Transform153.children[0] = Transform154;

HAnimSegment152.children = new MFNode();

HAnimSegment152.children[0] = Transform153;

Shape Shape156 = createNode("Shape");
LineSet LineSet157 = createNode("LineSet");
LineSet157.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate158 = createNode("Coordinate");
Coordinate158.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet157.coord = Coordinate158;

//from l_knee to l_talocrural vertices 2
ColorRGBA ColorRGBA159 = createNode("ColorRGBA");
ColorRGBA159.USE = "HAnimSegmentLineColorRGBA";
LineSet157.color = ColorRGBA159;

Shape156.geometry = LineSet157;

HAnimSegment152.children[1] = Shape156;

HAnimSite HAnimSite160 = createNode("HAnimSite");
HAnimSite160.name = "l_calcaneus_posterior_pt";
HAnimSite160.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite160.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
TouchSensor TouchSensor161 = createNode("TouchSensor");
TouchSensor161.description = "HAnimSite l_calcaneus_posterior_pt";
HAnimSite160.children = new MFNode();

HAnimSite160.children[0] = TouchSensor161;

Shape Shape162 = createNode("Shape");
Shape162.USE = "HAnimSiteShape";
HAnimSite160.children[1] = Shape162;

HAnimSegment152.children[2] = HAnimSite160;

HAnimSite HAnimSite163 = createNode("HAnimSite");
HAnimSite163.name = "l_sphyrion_pt";
HAnimSite163.DEF = "hanim_l_sphyrion_pt";
HAnimSite163.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
TouchSensor TouchSensor164 = createNode("TouchSensor");
TouchSensor164.description = "HAnimSite l_sphyrion_pt";
HAnimSite163.children = new MFNode();

HAnimSite163.children[0] = TouchSensor164;

Shape Shape165 = createNode("Shape");
Shape165.USE = "HAnimSiteShape";
HAnimSite163.children[1] = Shape165;

HAnimSegment152.children[3] = HAnimSite163;

HAnimJoint151.children = new MFNode();

HAnimJoint151.children[0] = HAnimSegment152;

HAnimJoint HAnimJoint166 = createNode("HAnimJoint");
HAnimJoint166.name = "l_talocrural";
HAnimJoint166.DEF = "hanim_l_talocrural";
HAnimJoint166.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint166.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint166.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment167 = createNode("HAnimSegment");
HAnimSegment167.name = "l_talus";
HAnimSegment167.DEF = "hanim_l_talus";
Transform Transform168 = createNode("Transform");
Transform168.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform168.translation = new SFVec3f(new float[0.08,0.06,-0.025]);
Transform168.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform left foot
Transform Transform169 = createNode("Transform");
//Empty Transform left foot
Shape Shape170 = createNode("Shape");
Shape170.USE = "HAnimJointShape";
Transform169.children = new MFNode();

Transform169.children[0] = Shape170;

Transform168.children = new MFNode();

Transform168.children[0] = Transform169;

HAnimSegment167.children = new MFNode();

HAnimSegment167.children[0] = Transform168;

Shape Shape171 = createNode("Shape");
LineSet LineSet172 = createNode("LineSet");
LineSet172.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate173 = createNode("Coordinate");
Coordinate173.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1101,0.0656,-0.0736]);
LineSet172.coord = Coordinate173;

//from l_talocrural to l_talocalcaneonavicular vertices 2
ColorRGBA ColorRGBA174 = createNode("ColorRGBA");
ColorRGBA174.USE = "HAnimSegmentLineColorRGBA";
LineSet172.color = ColorRGBA174;

Shape171.geometry = LineSet172;

HAnimSegment167.children[1] = Shape171;

Shape Shape175 = createNode("Shape");
LineSet LineSet176 = createNode("LineSet");
LineSet176.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate177 = createNode("Coordinate");
Coordinate177.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.1101,0.0656,-0.0736]);
LineSet176.coord = Coordinate177;

//from l_talocrural to l_calcaneocuboid vertices 2
ColorRGBA ColorRGBA178 = createNode("ColorRGBA");
ColorRGBA178.USE = "HAnimSegmentLineColorRGBA";
LineSet176.color = ColorRGBA178;

Shape175.geometry = LineSet176;

HAnimSegment167.children[2] = Shape175;

HAnimJoint166.children = new MFNode();

HAnimJoint166.children[0] = HAnimSegment167;

HAnimJoint HAnimJoint179 = createNode("HAnimJoint");
HAnimJoint179.name = "l_talocalcaneonavicular";
HAnimJoint179.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint179.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint179.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment180 = createNode("HAnimSegment");
HAnimSegment180.name = "l_navicular";
HAnimSegment180.DEF = "hanim_l_navicular";
Transform Transform181 = createNode("Transform");
Transform181.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform182 = createNode("Transform");
//Empty Transform
Shape Shape183 = createNode("Shape");
Shape183.USE = "HAnimJointShape";
Transform182.children = new MFNode();

Transform182.children[0] = Shape183;

Transform181.children = new MFNode();

Transform181.children[0] = Transform182;

HAnimSegment180.children = new MFNode();

HAnimSegment180.children[0] = Transform181;

Shape Shape184 = createNode("Shape");
LineSet LineSet185 = createNode("LineSet");
LineSet185.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate186 = createNode("Coordinate");
Coordinate186.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet185.coord = Coordinate186;

//from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 1
ColorRGBA ColorRGBA187 = createNode("ColorRGBA");
ColorRGBA187.USE = "HAnimSegmentLineColorRGBA";
LineSet185.color = ColorRGBA187;

Shape184.geometry = LineSet185;

HAnimSegment180.children[1] = Shape184;

Shape Shape188 = createNode("Shape");
LineSet LineSet189 = createNode("LineSet");
LineSet189.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate190 = createNode("Coordinate");
Coordinate190.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet189.coord = Coordinate190;

//from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 1
ColorRGBA ColorRGBA191 = createNode("ColorRGBA");
ColorRGBA191.USE = "HAnimSegmentLineColorRGBA";
LineSet189.color = ColorRGBA191;

Shape188.geometry = LineSet189;

HAnimSegment180.children[2] = Shape188;

Shape Shape192 = createNode("Shape");
LineSet LineSet193 = createNode("LineSet");
LineSet193.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate194 = createNode("Coordinate");
Coordinate194.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet193.coord = Coordinate194;

//from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 1
ColorRGBA ColorRGBA195 = createNode("ColorRGBA");
ColorRGBA195.USE = "HAnimSegmentLineColorRGBA";
LineSet193.color = ColorRGBA195;

Shape192.geometry = LineSet193;

HAnimSegment180.children[3] = Shape192;

HAnimJoint179.children = new MFNode();

HAnimJoint179.children[0] = HAnimSegment180;

HAnimJoint HAnimJoint196 = createNode("HAnimJoint");
HAnimJoint196.name = "l_cuneonavicular_1";
HAnimJoint196.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint196.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint196.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment197 = createNode("HAnimSegment");
HAnimSegment197.name = "l_cuneiform_1";
HAnimSegment197.DEF = "hanim_l_cuneiform_1";
Transform Transform198 = createNode("Transform");
Transform198.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform199 = createNode("Transform");
//Empty Transform
Shape Shape200 = createNode("Shape");
Shape200.USE = "HAnimJointShape";
Transform199.children = new MFNode();

Transform199.children[0] = Shape200;

Transform198.children = new MFNode();

Transform198.children[0] = Transform199;

HAnimSegment197.children = new MFNode();

HAnimSegment197.children[0] = Transform198;

Shape Shape201 = createNode("Shape");
LineSet LineSet202 = createNode("LineSet");
LineSet202.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate203 = createNode("Coordinate");
Coordinate203.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet202.coord = Coordinate203;

//from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 1
ColorRGBA ColorRGBA204 = createNode("ColorRGBA");
ColorRGBA204.USE = "HAnimSegmentLineColorRGBA";
LineSet202.color = ColorRGBA204;

Shape201.geometry = LineSet202;

HAnimSegment197.children[1] = Shape201;

HAnimJoint196.children = new MFNode();

HAnimJoint196.children[0] = HAnimSegment197;

HAnimJoint HAnimJoint205 = createNode("HAnimJoint");
HAnimJoint205.name = "l_tarsometatarsal_1";
HAnimJoint205.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint205.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint205.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment206 = createNode("HAnimSegment");
HAnimSegment206.name = "l_metatarsal_1";
HAnimSegment206.DEF = "hanim_l_metatarsal_1";
Transform Transform207 = createNode("Transform");
Transform207.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform208 = createNode("Transform");
//Empty Transform
Shape Shape209 = createNode("Shape");
Shape209.USE = "HAnimJointShape";
Transform208.children = new MFNode();

Transform208.children[0] = Shape209;

Transform207.children = new MFNode();

Transform207.children[0] = Transform208;

HAnimSegment206.children = new MFNode();

HAnimSegment206.children[0] = Transform207;

Shape Shape210 = createNode("Shape");
LineSet LineSet211 = createNode("LineSet");
LineSet211.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate212 = createNode("Coordinate");
Coordinate212.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet211.coord = Coordinate212;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 1
ColorRGBA ColorRGBA213 = createNode("ColorRGBA");
ColorRGBA213.USE = "HAnimSegmentLineColorRGBA";
LineSet211.color = ColorRGBA213;

Shape210.geometry = LineSet211;

HAnimSegment206.children[1] = Shape210;

HAnimSite HAnimSite214 = createNode("HAnimSite");
HAnimSite214.name = "l_metatarsal_phalanx_1_pt";
HAnimSite214.DEF = "hanim_l_metatarsal_phalanx_1_pt";
TouchSensor TouchSensor215 = createNode("TouchSensor");
TouchSensor215.description = "HAnimSite l_metatarsal_phalanx_1_pt";
HAnimSite214.children = new MFNode();

HAnimSite214.children[0] = TouchSensor215;

Shape Shape216 = createNode("Shape");
Shape216.USE = "HAnimSiteShape";
HAnimSite214.children[1] = Shape216;

HAnimSegment206.children[2] = HAnimSite214;

HAnimJoint205.children = new MFNode();

HAnimJoint205.children[0] = HAnimSegment206;

HAnimJoint HAnimJoint217 = createNode("HAnimJoint");
HAnimJoint217.name = "l_metatarsophalangeal_1";
HAnimJoint217.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint217.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint217.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment218 = createNode("HAnimSegment");
HAnimSegment218.name = "l_tarsal_proximal_phalanx_1";
HAnimSegment218.DEF = "hanim_l_tarsal_proximal_phalanx_1";
Transform Transform219 = createNode("Transform");
Transform219.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform220 = createNode("Transform");
//Empty Transform
Shape Shape221 = createNode("Shape");
Shape221.USE = "HAnimJointShape";
Transform220.children = new MFNode();

Transform220.children[0] = Shape221;

Transform219.children = new MFNode();

Transform219.children[0] = Transform220;

HAnimSegment218.children = new MFNode();

HAnimSegment218.children[0] = Transform219;

Shape Shape222 = createNode("Shape");
LineSet LineSet223 = createNode("LineSet");
LineSet223.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate224 = createNode("Coordinate");
Coordinate224.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet223.coord = Coordinate224;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 1
ColorRGBA ColorRGBA225 = createNode("ColorRGBA");
ColorRGBA225.USE = "HAnimSegmentLineColorRGBA";
LineSet223.color = ColorRGBA225;

Shape222.geometry = LineSet223;

HAnimSegment218.children[1] = Shape222;

HAnimSite HAnimSite226 = createNode("HAnimSite");
HAnimSite226.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite226.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
TouchSensor TouchSensor227 = createNode("TouchSensor");
TouchSensor227.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite226.children = new MFNode();

HAnimSite226.children[0] = TouchSensor227;

Shape Shape228 = createNode("Shape");
Shape228.USE = "HAnimSiteShape";
HAnimSite226.children[1] = Shape228;

HAnimSegment218.children[2] = HAnimSite226;

HAnimJoint217.children = new MFNode();

HAnimJoint217.children[0] = HAnimSegment218;

HAnimJoint HAnimJoint229 = createNode("HAnimJoint");
HAnimJoint229.name = "l_tarsal_interphalangeal_1";
HAnimJoint229.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint229.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint229.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint217.children[1] = HAnimJoint229;

HAnimJoint205.children[1] = HAnimJoint217;

HAnimJoint196.children[1] = HAnimJoint205;

HAnimJoint179.children[1] = HAnimJoint196;

HAnimJoint HAnimJoint230 = createNode("HAnimJoint");
HAnimJoint230.name = "l_cuneonavicular_2";
HAnimJoint230.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint230.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint230.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment231 = createNode("HAnimSegment");
HAnimSegment231.name = "l_cuneiform_2";
HAnimSegment231.DEF = "hanim_l_cuneiform_2";
Transform Transform232 = createNode("Transform");
Transform232.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform233 = createNode("Transform");
//Empty Transform
Shape Shape234 = createNode("Shape");
Shape234.USE = "HAnimJointShape";
Transform233.children = new MFNode();

Transform233.children[0] = Shape234;

Transform232.children = new MFNode();

Transform232.children[0] = Transform233;

HAnimSegment231.children = new MFNode();

HAnimSegment231.children[0] = Transform232;

Shape Shape235 = createNode("Shape");
LineSet LineSet236 = createNode("LineSet");
LineSet236.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate237 = createNode("Coordinate");
Coordinate237.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet236.coord = Coordinate237;

//from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 1
ColorRGBA ColorRGBA238 = createNode("ColorRGBA");
ColorRGBA238.USE = "HAnimSegmentLineColorRGBA";
LineSet236.color = ColorRGBA238;

Shape235.geometry = LineSet236;

HAnimSegment231.children[1] = Shape235;

HAnimJoint230.children = new MFNode();

HAnimJoint230.children[0] = HAnimSegment231;

HAnimJoint HAnimJoint239 = createNode("HAnimJoint");
HAnimJoint239.name = "l_tarsometatarsal_2";
HAnimJoint239.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint239.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint239.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment240 = createNode("HAnimSegment");
HAnimSegment240.name = "l_metatarsal_2";
HAnimSegment240.DEF = "hanim_l_metatarsal_2";
Transform Transform241 = createNode("Transform");
Transform241.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform242 = createNode("Transform");
//Empty Transform
Shape Shape243 = createNode("Shape");
Shape243.USE = "HAnimJointShape";
Transform242.children = new MFNode();

Transform242.children[0] = Shape243;

Transform241.children = new MFNode();

Transform241.children[0] = Transform242;

HAnimSegment240.children = new MFNode();

HAnimSegment240.children[0] = Transform241;

Shape Shape244 = createNode("Shape");
LineSet LineSet245 = createNode("LineSet");
LineSet245.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate246 = createNode("Coordinate");
Coordinate246.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet245.coord = Coordinate246;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 1
ColorRGBA ColorRGBA247 = createNode("ColorRGBA");
ColorRGBA247.USE = "HAnimSegmentLineColorRGBA";
LineSet245.color = ColorRGBA247;

Shape244.geometry = LineSet245;

HAnimSegment240.children[1] = Shape244;

HAnimJoint239.children = new MFNode();

HAnimJoint239.children[0] = HAnimSegment240;

HAnimJoint HAnimJoint248 = createNode("HAnimJoint");
HAnimJoint248.name = "l_metatarsophalangeal_2";
HAnimJoint248.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint248.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint248.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment249 = createNode("HAnimSegment");
HAnimSegment249.name = "l_tarsal_proximal_phalanx_2";
HAnimSegment249.DEF = "hanim_l_tarsal_proximal_phalanx_2";
Transform Transform250 = createNode("Transform");
Transform250.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform251 = createNode("Transform");
//Empty Transform
Shape Shape252 = createNode("Shape");
Shape252.USE = "HAnimJointShape";
Transform251.children = new MFNode();

Transform251.children[0] = Shape252;

Transform250.children = new MFNode();

Transform250.children[0] = Transform251;

HAnimSegment249.children = new MFNode();

HAnimSegment249.children[0] = Transform250;

Shape Shape253 = createNode("Shape");
LineSet LineSet254 = createNode("LineSet");
LineSet254.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate255 = createNode("Coordinate");
Coordinate255.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet254.coord = Coordinate255;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 1
ColorRGBA ColorRGBA256 = createNode("ColorRGBA");
ColorRGBA256.USE = "HAnimSegmentLineColorRGBA";
LineSet254.color = ColorRGBA256;

Shape253.geometry = LineSet254;

HAnimSegment249.children[1] = Shape253;

HAnimJoint248.children = new MFNode();

HAnimJoint248.children[0] = HAnimSegment249;

HAnimJoint HAnimJoint257 = createNode("HAnimJoint");
HAnimJoint257.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint257.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint257.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint257.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment258 = createNode("HAnimSegment");
HAnimSegment258.name = "l_tarsal_middle_phalanx_2";
HAnimSegment258.DEF = "hanim_l_tarsal_middle_phalanx_2";
Transform Transform259 = createNode("Transform");
Transform259.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform260 = createNode("Transform");
//Empty Transform
Shape Shape261 = createNode("Shape");
Shape261.USE = "HAnimJointShape";
Transform260.children = new MFNode();

Transform260.children[0] = Shape261;

Transform259.children = new MFNode();

Transform259.children[0] = Transform260;

HAnimSegment258.children = new MFNode();

HAnimSegment258.children[0] = Transform259;

Shape Shape262 = createNode("Shape");
LineSet LineSet263 = createNode("LineSet");
LineSet263.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate264 = createNode("Coordinate");
Coordinate264.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet263.coord = Coordinate264;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 1
ColorRGBA ColorRGBA265 = createNode("ColorRGBA");
ColorRGBA265.USE = "HAnimSegmentLineColorRGBA";
LineSet263.color = ColorRGBA265;

Shape262.geometry = LineSet263;

HAnimSegment258.children[1] = Shape262;

HAnimSite HAnimSite266 = createNode("HAnimSite");
HAnimSite266.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite266.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite266.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
TouchSensor TouchSensor267 = createNode("TouchSensor");
TouchSensor267.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite266.children = new MFNode();

HAnimSite266.children[0] = TouchSensor267;

Shape Shape268 = createNode("Shape");
Shape268.USE = "HAnimSiteShape";
HAnimSite266.children[1] = Shape268;

HAnimSegment258.children[2] = HAnimSite266;

HAnimJoint257.children = new MFNode();

HAnimJoint257.children[0] = HAnimSegment258;

HAnimJoint HAnimJoint269 = createNode("HAnimJoint");
HAnimJoint269.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint269.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint269.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint269.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint257.children[1] = HAnimJoint269;

HAnimJoint248.children[1] = HAnimJoint257;

HAnimJoint239.children[1] = HAnimJoint248;

HAnimJoint230.children[1] = HAnimJoint239;

HAnimJoint179.children[2] = HAnimJoint230;

HAnimJoint HAnimJoint270 = createNode("HAnimJoint");
HAnimJoint270.name = "l_cuneonavicular_3";
HAnimJoint270.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint270.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint270.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment271 = createNode("HAnimSegment");
HAnimSegment271.name = "l_cuneiform_3";
HAnimSegment271.DEF = "hanim_l_cuneiform_3";
Transform Transform272 = createNode("Transform");
Transform272.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform273 = createNode("Transform");
//Empty Transform
Shape Shape274 = createNode("Shape");
Shape274.USE = "HAnimJointShape";
Transform273.children = new MFNode();

Transform273.children[0] = Shape274;

Transform272.children = new MFNode();

Transform272.children[0] = Transform273;

HAnimSegment271.children = new MFNode();

HAnimSegment271.children[0] = Transform272;

Shape Shape275 = createNode("Shape");
LineSet LineSet276 = createNode("LineSet");
LineSet276.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate277 = createNode("Coordinate");
Coordinate277.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet276.coord = Coordinate277;

//from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 1
ColorRGBA ColorRGBA278 = createNode("ColorRGBA");
ColorRGBA278.USE = "HAnimSegmentLineColorRGBA";
LineSet276.color = ColorRGBA278;

Shape275.geometry = LineSet276;

HAnimSegment271.children[1] = Shape275;

HAnimJoint270.children = new MFNode();

HAnimJoint270.children[0] = HAnimSegment271;

HAnimJoint HAnimJoint279 = createNode("HAnimJoint");
HAnimJoint279.name = "l_tarsometatarsal_3";
HAnimJoint279.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint279.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint279.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment280 = createNode("HAnimSegment");
HAnimSegment280.name = "l_metatarsal_3";
HAnimSegment280.DEF = "hanim_l_metatarsal_3";
Transform Transform281 = createNode("Transform");
Transform281.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform282 = createNode("Transform");
//Empty Transform
Shape Shape283 = createNode("Shape");
Shape283.USE = "HAnimJointShape";
Transform282.children = new MFNode();

Transform282.children[0] = Shape283;

Transform281.children = new MFNode();

Transform281.children[0] = Transform282;

HAnimSegment280.children = new MFNode();

HAnimSegment280.children[0] = Transform281;

Shape Shape284 = createNode("Shape");
LineSet LineSet285 = createNode("LineSet");
LineSet285.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate286 = createNode("Coordinate");
Coordinate286.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet285.coord = Coordinate286;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1
ColorRGBA ColorRGBA287 = createNode("ColorRGBA");
ColorRGBA287.USE = "HAnimSegmentLineColorRGBA";
LineSet285.color = ColorRGBA287;

Shape284.geometry = LineSet285;

HAnimSegment280.children[1] = Shape284;

HAnimJoint279.children = new MFNode();

HAnimJoint279.children[0] = HAnimSegment280;

HAnimJoint HAnimJoint288 = createNode("HAnimJoint");
HAnimJoint288.name = "l_metatarsophalangeal_3";
HAnimJoint288.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint288.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint288.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment289 = createNode("HAnimSegment");
HAnimSegment289.name = "l_tarsal_proximal_phalanx_3";
HAnimSegment289.DEF = "hanim_l_tarsal_proximal_phalanx_3";
Transform Transform290 = createNode("Transform");
Transform290.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform291 = createNode("Transform");
//Empty Transform
Shape Shape292 = createNode("Shape");
Shape292.USE = "HAnimJointShape";
Transform291.children = new MFNode();

Transform291.children[0] = Shape292;

Transform290.children = new MFNode();

Transform290.children[0] = Transform291;

HAnimSegment289.children = new MFNode();

HAnimSegment289.children[0] = Transform290;

Shape Shape293 = createNode("Shape");
LineSet LineSet294 = createNode("LineSet");
LineSet294.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate295 = createNode("Coordinate");
Coordinate295.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet294.coord = Coordinate295;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 1
ColorRGBA ColorRGBA296 = createNode("ColorRGBA");
ColorRGBA296.USE = "HAnimSegmentLineColorRGBA";
LineSet294.color = ColorRGBA296;

Shape293.geometry = LineSet294;

HAnimSegment289.children[1] = Shape293;

HAnimJoint288.children = new MFNode();

HAnimJoint288.children[0] = HAnimSegment289;

HAnimJoint HAnimJoint297 = createNode("HAnimJoint");
HAnimJoint297.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint297.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint297.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint297.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment298 = createNode("HAnimSegment");
HAnimSegment298.name = "l_tarsal_middle_phalanx_3";
HAnimSegment298.DEF = "hanim_l_tarsal_middle_phalanx_3";
Transform Transform299 = createNode("Transform");
Transform299.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform300 = createNode("Transform");
//Empty Transform
Shape Shape301 = createNode("Shape");
Shape301.USE = "HAnimJointShape";
Transform300.children = new MFNode();

Transform300.children[0] = Shape301;

Transform299.children = new MFNode();

Transform299.children[0] = Transform300;

HAnimSegment298.children = new MFNode();

HAnimSegment298.children[0] = Transform299;

Shape Shape302 = createNode("Shape");
LineSet LineSet303 = createNode("LineSet");
LineSet303.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate304 = createNode("Coordinate");
Coordinate304.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet303.coord = Coordinate304;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 1
ColorRGBA ColorRGBA305 = createNode("ColorRGBA");
ColorRGBA305.USE = "HAnimSegmentLineColorRGBA";
LineSet303.color = ColorRGBA305;

Shape302.geometry = LineSet303;

HAnimSegment298.children[1] = Shape302;

HAnimSite HAnimSite306 = createNode("HAnimSite");
HAnimSite306.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite306.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
TouchSensor TouchSensor307 = createNode("TouchSensor");
TouchSensor307.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite306.children = new MFNode();

HAnimSite306.children[0] = TouchSensor307;

Shape Shape308 = createNode("Shape");
Shape308.USE = "HAnimSiteShape";
HAnimSite306.children[1] = Shape308;

HAnimSegment298.children[2] = HAnimSite306;

HAnimJoint297.children = new MFNode();

HAnimJoint297.children[0] = HAnimSegment298;

HAnimJoint HAnimJoint309 = createNode("HAnimJoint");
HAnimJoint309.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint309.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint309.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint309.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint297.children[1] = HAnimJoint309;

HAnimJoint288.children[1] = HAnimJoint297;

HAnimJoint279.children[1] = HAnimJoint288;

HAnimJoint270.children[1] = HAnimJoint279;

HAnimJoint179.children[3] = HAnimJoint270;

HAnimJoint166.children[1] = HAnimJoint179;

HAnimJoint HAnimJoint310 = createNode("HAnimJoint");
HAnimJoint310.name = "l_calcaneocuboid";
HAnimJoint310.DEF = "hanim_l_calcaneocuboid";
HAnimJoint310.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint310.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment311 = createNode("HAnimSegment");
HAnimSegment311.name = "l_calcaneus";
HAnimSegment311.DEF = "hanim_l_calcaneus";
Transform Transform312 = createNode("Transform");
Transform312.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform313 = createNode("Transform");
//Empty Transform
Shape Shape314 = createNode("Shape");
Shape314.USE = "HAnimJointShape";
Transform313.children = new MFNode();

Transform313.children[0] = Shape314;

Transform312.children = new MFNode();

Transform312.children[0] = Transform313;

HAnimSegment311.children = new MFNode();

HAnimSegment311.children[0] = Transform312;

Shape Shape315 = createNode("Shape");
LineSet LineSet316 = createNode("LineSet");
LineSet316.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate317 = createNode("Coordinate");
Coordinate317.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet316.coord = Coordinate317;

//from l_calcaneocuboid to l_transversetarsal vertices 1
ColorRGBA ColorRGBA318 = createNode("ColorRGBA");
ColorRGBA318.USE = "HAnimSegmentLineColorRGBA";
LineSet316.color = ColorRGBA318;

Shape315.geometry = LineSet316;

HAnimSegment311.children[1] = Shape315;

HAnimJoint310.children = new MFNode();

HAnimJoint310.children[0] = HAnimSegment311;

HAnimJoint HAnimJoint319 = createNode("HAnimJoint");
HAnimJoint319.name = "l_transversetarsal";
HAnimJoint319.DEF = "hanim_l_transversetarsal";
HAnimJoint319.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint319.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment320 = createNode("HAnimSegment");
HAnimSegment320.name = "l_cuboid";
HAnimSegment320.DEF = "hanim_l_cuboid";
Transform Transform321 = createNode("Transform");
Transform321.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform322 = createNode("Transform");
//Empty Transform
Shape Shape323 = createNode("Shape");
Shape323.USE = "HAnimJointShape";
Transform322.children = new MFNode();

Transform322.children[0] = Shape323;

Transform321.children = new MFNode();

Transform321.children[0] = Transform322;

HAnimSegment320.children = new MFNode();

HAnimSegment320.children[0] = Transform321;

Shape Shape324 = createNode("Shape");
LineSet LineSet325 = createNode("LineSet");
LineSet325.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate326 = createNode("Coordinate");
Coordinate326.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet325.coord = Coordinate326;

//from l_transversetarsal to l_tarsometatarsal_4 vertices 1
ColorRGBA ColorRGBA327 = createNode("ColorRGBA");
ColorRGBA327.USE = "HAnimSegmentLineColorRGBA";
LineSet325.color = ColorRGBA327;

Shape324.geometry = LineSet325;

HAnimSegment320.children[1] = Shape324;

Shape Shape328 = createNode("Shape");
LineSet LineSet329 = createNode("LineSet");
LineSet329.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate330 = createNode("Coordinate");
Coordinate330.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet329.coord = Coordinate330;

//from l_transversetarsal to l_tarsometatarsal_5 vertices 1
ColorRGBA ColorRGBA331 = createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSegmentLineColorRGBA";
LineSet329.color = ColorRGBA331;

Shape328.geometry = LineSet329;

HAnimSegment320.children[2] = Shape328;

HAnimJoint319.children = new MFNode();

HAnimJoint319.children[0] = HAnimSegment320;

HAnimJoint HAnimJoint332 = createNode("HAnimJoint");
HAnimJoint332.name = "l_tarsometatarsal_4";
HAnimJoint332.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint332.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint332.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment333 = createNode("HAnimSegment");
HAnimSegment333.name = "l_metatarsal_4";
HAnimSegment333.DEF = "hanim_l_metatarsal_4";
Transform Transform334 = createNode("Transform");
Transform334.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform335 = createNode("Transform");
//Empty Transform
Shape Shape336 = createNode("Shape");
Shape336.USE = "HAnimJointShape";
Transform335.children = new MFNode();

Transform335.children[0] = Shape336;

Transform334.children = new MFNode();

Transform334.children[0] = Transform335;

HAnimSegment333.children = new MFNode();

HAnimSegment333.children[0] = Transform334;

Shape Shape337 = createNode("Shape");
LineSet LineSet338 = createNode("LineSet");
LineSet338.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate339 = createNode("Coordinate");
Coordinate339.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet338.coord = Coordinate339;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 1
ColorRGBA ColorRGBA340 = createNode("ColorRGBA");
ColorRGBA340.USE = "HAnimSegmentLineColorRGBA";
LineSet338.color = ColorRGBA340;

Shape337.geometry = LineSet338;

HAnimSegment333.children[1] = Shape337;

HAnimJoint332.children = new MFNode();

HAnimJoint332.children[0] = HAnimSegment333;

HAnimJoint HAnimJoint341 = createNode("HAnimJoint");
HAnimJoint341.name = "l_metatarsophalangeal_4";
HAnimJoint341.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint341.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint341.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment342 = createNode("HAnimSegment");
HAnimSegment342.name = "l_tarsal_proximal_phalanx_4";
HAnimSegment342.DEF = "hanim_l_tarsal_proximal_phalanx_4";
Transform Transform343 = createNode("Transform");
Transform343.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform344 = createNode("Transform");
//Empty Transform
Shape Shape345 = createNode("Shape");
Shape345.USE = "HAnimJointShape";
Transform344.children = new MFNode();

Transform344.children[0] = Shape345;

Transform343.children = new MFNode();

Transform343.children[0] = Transform344;

HAnimSegment342.children = new MFNode();

HAnimSegment342.children[0] = Transform343;

Shape Shape346 = createNode("Shape");
LineSet LineSet347 = createNode("LineSet");
LineSet347.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate348 = createNode("Coordinate");
Coordinate348.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet347.coord = Coordinate348;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 1
ColorRGBA ColorRGBA349 = createNode("ColorRGBA");
ColorRGBA349.USE = "HAnimSegmentLineColorRGBA";
LineSet347.color = ColorRGBA349;

Shape346.geometry = LineSet347;

HAnimSegment342.children[1] = Shape346;

HAnimJoint341.children = new MFNode();

HAnimJoint341.children[0] = HAnimSegment342;

HAnimJoint HAnimJoint350 = createNode("HAnimJoint");
HAnimJoint350.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint350.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint350.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint350.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment351 = createNode("HAnimSegment");
HAnimSegment351.name = "l_tarsal_middle_phalanx_4";
HAnimSegment351.DEF = "hanim_l_tarsal_middle_phalanx_4";
Transform Transform352 = createNode("Transform");
Transform352.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform353 = createNode("Transform");
//Empty Transform
Shape Shape354 = createNode("Shape");
Shape354.USE = "HAnimJointShape";
Transform353.children = new MFNode();

Transform353.children[0] = Shape354;

Transform352.children = new MFNode();

Transform352.children[0] = Transform353;

HAnimSegment351.children = new MFNode();

HAnimSegment351.children[0] = Transform352;

Shape Shape355 = createNode("Shape");
LineSet LineSet356 = createNode("LineSet");
LineSet356.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate357 = createNode("Coordinate");
Coordinate357.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet356.coord = Coordinate357;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 1
ColorRGBA ColorRGBA358 = createNode("ColorRGBA");
ColorRGBA358.USE = "HAnimSegmentLineColorRGBA";
LineSet356.color = ColorRGBA358;

Shape355.geometry = LineSet356;

HAnimSegment351.children[1] = Shape355;

HAnimSite HAnimSite359 = createNode("HAnimSite");
HAnimSite359.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite359.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
TouchSensor TouchSensor360 = createNode("TouchSensor");
TouchSensor360.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite359.children = new MFNode();

HAnimSite359.children[0] = TouchSensor360;

Shape Shape361 = createNode("Shape");
Shape361.USE = "HAnimSiteShape";
HAnimSite359.children[1] = Shape361;

HAnimSegment351.children[2] = HAnimSite359;

HAnimJoint350.children = new MFNode();

HAnimJoint350.children[0] = HAnimSegment351;

HAnimJoint HAnimJoint362 = createNode("HAnimJoint");
HAnimJoint362.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint362.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint362.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint362.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint350.children[1] = HAnimJoint362;

HAnimJoint341.children[1] = HAnimJoint350;

HAnimJoint332.children[1] = HAnimJoint341;

HAnimJoint319.children[1] = HAnimJoint332;

HAnimJoint HAnimJoint363 = createNode("HAnimJoint");
HAnimJoint363.name = "l_tarsometatarsal_5";
HAnimJoint363.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint363.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint363.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment364 = createNode("HAnimSegment");
HAnimSegment364.name = "l_metatarsal_5";
HAnimSegment364.DEF = "hanim_l_metatarsal_5";
Transform Transform365 = createNode("Transform");
Transform365.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform366 = createNode("Transform");
//Empty Transform
Shape Shape367 = createNode("Shape");
Shape367.USE = "HAnimJointShape";
Transform366.children = new MFNode();

Transform366.children[0] = Shape367;

Transform365.children = new MFNode();

Transform365.children[0] = Transform366;

HAnimSegment364.children = new MFNode();

HAnimSegment364.children[0] = Transform365;

Shape Shape368 = createNode("Shape");
LineSet LineSet369 = createNode("LineSet");
LineSet369.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate370 = createNode("Coordinate");
Coordinate370.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet369.coord = Coordinate370;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 1
ColorRGBA ColorRGBA371 = createNode("ColorRGBA");
ColorRGBA371.USE = "HAnimSegmentLineColorRGBA";
LineSet369.color = ColorRGBA371;

Shape368.geometry = LineSet369;

HAnimSegment364.children[1] = Shape368;

HAnimSite HAnimSite372 = createNode("HAnimSite");
HAnimSite372.name = "l_metatarsal_phalanx_5_pt";
HAnimSite372.DEF = "hanim_l_metatarsal_phalanx_5_pt";
TouchSensor TouchSensor373 = createNode("TouchSensor");
TouchSensor373.description = "HAnimSite l_metatarsal_phalanx_5_pt";
HAnimSite372.children = new MFNode();

HAnimSite372.children[0] = TouchSensor373;

Shape Shape374 = createNode("Shape");
Shape374.USE = "HAnimSiteShape";
HAnimSite372.children[1] = Shape374;

HAnimSegment364.children[2] = HAnimSite372;

HAnimJoint363.children = new MFNode();

HAnimJoint363.children[0] = HAnimSegment364;

HAnimJoint HAnimJoint375 = createNode("HAnimJoint");
HAnimJoint375.name = "l_metatarsophalangeal_5";
HAnimJoint375.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint375.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint375.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment376 = createNode("HAnimSegment");
HAnimSegment376.name = "l_tarsal_proximal_phalanx_5";
HAnimSegment376.DEF = "hanim_l_tarsal_proximal_phalanx_5";
Transform Transform377 = createNode("Transform");
Transform377.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform378 = createNode("Transform");
//Empty Transform
Shape Shape379 = createNode("Shape");
Shape379.USE = "HAnimJointShape";
Transform378.children = new MFNode();

Transform378.children[0] = Shape379;

Transform377.children = new MFNode();

Transform377.children[0] = Transform378;

HAnimSegment376.children = new MFNode();

HAnimSegment376.children[0] = Transform377;

Shape Shape380 = createNode("Shape");
LineSet LineSet381 = createNode("LineSet");
LineSet381.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate382 = createNode("Coordinate");
Coordinate382.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet381.coord = Coordinate382;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 1
ColorRGBA ColorRGBA383 = createNode("ColorRGBA");
ColorRGBA383.USE = "HAnimSegmentLineColorRGBA";
LineSet381.color = ColorRGBA383;

Shape380.geometry = LineSet381;

HAnimSegment376.children[1] = Shape380;

HAnimJoint375.children = new MFNode();

HAnimJoint375.children[0] = HAnimSegment376;

HAnimJoint HAnimJoint384 = createNode("HAnimJoint");
HAnimJoint384.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint384.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint384.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint384.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment385 = createNode("HAnimSegment");
HAnimSegment385.name = "l_tarsal_middle_phalanx_5";
HAnimSegment385.DEF = "hanim_l_tarsal_middle_phalanx_5";
Transform Transform386 = createNode("Transform");
Transform386.translation = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
Transform Transform387 = createNode("Transform");
//Empty Transform
Shape Shape388 = createNode("Shape");
Shape388.USE = "HAnimJointShape";
Transform387.children = new MFNode();

Transform387.children[0] = Shape388;

Transform386.children = new MFNode();

Transform386.children[0] = Transform387;

HAnimSegment385.children = new MFNode();

HAnimSegment385.children[0] = Transform386;

Shape Shape389 = createNode("Shape");
LineSet LineSet390 = createNode("LineSet");
LineSet390.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate391 = createNode("Coordinate");
Coordinate391.point = new MFVec3f(new float[0.1101,0.0656,-0.0736]);
LineSet390.coord = Coordinate391;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 1
ColorRGBA ColorRGBA392 = createNode("ColorRGBA");
ColorRGBA392.USE = "HAnimSegmentLineColorRGBA";
LineSet390.color = ColorRGBA392;

Shape389.geometry = LineSet390;

HAnimSegment385.children[1] = Shape389;

HAnimSite HAnimSite393 = createNode("HAnimSite");
HAnimSite393.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite393.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
TouchSensor TouchSensor394 = createNode("TouchSensor");
TouchSensor394.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite393.children = new MFNode();

HAnimSite393.children[0] = TouchSensor394;

Shape Shape395 = createNode("Shape");
Shape395.USE = "HAnimSiteShape";
HAnimSite393.children[1] = Shape395;

HAnimSegment385.children[2] = HAnimSite393;

HAnimJoint384.children = new MFNode();

HAnimJoint384.children[0] = HAnimSegment385;

HAnimJoint HAnimJoint396 = createNode("HAnimJoint");
HAnimJoint396.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint396.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint396.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint396.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint384.children[1] = HAnimJoint396;

HAnimJoint375.children[1] = HAnimJoint384;

HAnimJoint363.children[1] = HAnimJoint375;

HAnimJoint319.children[2] = HAnimJoint363;

HAnimJoint310.children[1] = HAnimJoint319;

HAnimJoint166.children[2] = HAnimJoint310;

HAnimJoint151.children[1] = HAnimJoint166;

HAnimJoint133.children[1] = HAnimJoint151;

HAnimJoint96.children[1] = HAnimJoint133;

HAnimJoint HAnimJoint397 = createNode("HAnimJoint");
HAnimJoint397.name = "r_hip";
HAnimJoint397.DEF = "hanim_r_hip";
HAnimJoint397.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint397.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint397.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment398 = createNode("HAnimSegment");
HAnimSegment398.name = "r_thigh";
HAnimSegment398.DEF = "hanim_r_thigh";
Transform Transform399 = createNode("Transform");
Transform399.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Transform Transform400 = createNode("Transform");
//Empty Transform
Shape Shape401 = createNode("Shape");
Shape401.USE = "HAnimJointShape";
Transform400.children = new MFNode();

Transform400.children[0] = Shape401;

Transform399.children = new MFNode();

Transform399.children[0] = Transform400;

HAnimSegment398.children = new MFNode();

HAnimSegment398.children[0] = Transform399;

Shape Shape402 = createNode("Shape");
LineSet LineSet403 = createNode("LineSet");
LineSet403.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate404 = createNode("Coordinate");
Coordinate404.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet403.coord = Coordinate404;

//from r_hip to r_knee vertices 2
ColorRGBA ColorRGBA405 = createNode("ColorRGBA");
ColorRGBA405.USE = "HAnimSegmentLineColorRGBA";
LineSet403.color = ColorRGBA405;

Shape402.geometry = LineSet403;

HAnimSegment398.children[1] = Shape402;

HAnimSite HAnimSite406 = createNode("HAnimSite");
HAnimSite406.name = "r_lateral_malleolus_pt";
HAnimSite406.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite406.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor407 = createNode("TouchSensor");
TouchSensor407.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite406.children = new MFNode();

HAnimSite406.children[0] = TouchSensor407;

Shape Shape408 = createNode("Shape");
Shape408.USE = "HAnimSiteShape";
HAnimSite406.children[1] = Shape408;

HAnimSegment398.children[2] = HAnimSite406;

HAnimSite HAnimSite409 = createNode("HAnimSite");
HAnimSite409.name = "r_medial_malleolus_pt";
HAnimSite409.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite409.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor410 = createNode("TouchSensor");
TouchSensor410.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite409.children = new MFNode();

HAnimSite409.children[0] = TouchSensor410;

Shape Shape411 = createNode("Shape");
Shape411.USE = "HAnimSiteShape";
HAnimSite409.children[1] = Shape411;

HAnimSegment398.children[3] = HAnimSite409;

HAnimSite HAnimSite412 = createNode("HAnimSite");
HAnimSite412.name = "r_tibiale_pt";
HAnimSite412.DEF = "hanim_r_tibiale_pt";
TouchSensor TouchSensor413 = createNode("TouchSensor");
TouchSensor413.description = "HAnimSite r_tibiale_pt";
HAnimSite412.children = new MFNode();

HAnimSite412.children[0] = TouchSensor413;

Shape Shape414 = createNode("Shape");
Shape414.USE = "HAnimSiteShape";
HAnimSite412.children[1] = Shape414;

HAnimSegment398.children[4] = HAnimSite412;

HAnimJoint397.children = new MFNode();

HAnimJoint397.children[0] = HAnimSegment398;

HAnimJoint HAnimJoint415 = createNode("HAnimJoint");
HAnimJoint415.name = "r_knee";
HAnimJoint415.DEF = "hanim_r_knee";
HAnimJoint415.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint415.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint415.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment416 = createNode("HAnimSegment");
HAnimSegment416.name = "r_calf";
HAnimSegment416.DEF = "hanim_r_calf";
Transform Transform417 = createNode("Transform");
Transform417.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Transform Transform418 = createNode("Transform");
//Empty Transform
Shape Shape419 = createNode("Shape");
Shape419.USE = "HAnimJointShape";
Transform418.children = new MFNode();

Transform418.children[0] = Shape419;

Transform417.children = new MFNode();

Transform417.children[0] = Transform418;

HAnimSegment416.children = new MFNode();

HAnimSegment416.children[0] = Transform417;

Shape Shape420 = createNode("Shape");
LineSet LineSet421 = createNode("LineSet");
LineSet421.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate422 = createNode("Coordinate");
Coordinate422.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet421.coord = Coordinate422;

//from r_knee to r_talocrural vertices 2
ColorRGBA ColorRGBA423 = createNode("ColorRGBA");
ColorRGBA423.USE = "HAnimSegmentLineColorRGBA";
LineSet421.color = ColorRGBA423;

Shape420.geometry = LineSet421;

HAnimSegment416.children[1] = Shape420;

HAnimSite HAnimSite424 = createNode("HAnimSite");
HAnimSite424.name = "r_calcaneus_posterior_pt";
HAnimSite424.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite424.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor425 = createNode("TouchSensor");
TouchSensor425.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite424.children = new MFNode();

HAnimSite424.children[0] = TouchSensor425;

Shape Shape426 = createNode("Shape");
Shape426.USE = "HAnimSiteShape";
HAnimSite424.children[1] = Shape426;

HAnimSegment416.children[2] = HAnimSite424;

HAnimSite HAnimSite427 = createNode("HAnimSite");
HAnimSite427.name = "r_sphyrion_pt";
HAnimSite427.DEF = "hanim_r_sphyrion_pt";
HAnimSite427.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor428 = createNode("TouchSensor");
TouchSensor428.description = "HAnimSite r_sphyrion_pt";
HAnimSite427.children = new MFNode();

HAnimSite427.children[0] = TouchSensor428;

Shape Shape429 = createNode("Shape");
Shape429.USE = "HAnimSiteShape";
HAnimSite427.children[1] = Shape429;

HAnimSegment416.children[3] = HAnimSite427;

HAnimJoint415.children = new MFNode();

HAnimJoint415.children[0] = HAnimSegment416;

HAnimJoint HAnimJoint430 = createNode("HAnimJoint");
HAnimJoint430.name = "r_talocrural";
HAnimJoint430.DEF = "hanim_r_talocrural";
HAnimJoint430.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint430.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint430.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment431 = createNode("HAnimSegment");
HAnimSegment431.name = "r_talus";
HAnimSegment431.DEF = "hanim_r_talus";
Transform Transform432 = createNode("Transform");
Transform432.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform432.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform432.rotation = new SFRotation(new float[1,0,0,-1.57]);
//Transform right foot
Transform Transform433 = createNode("Transform");
//Empty Transform right foot
Shape Shape434 = createNode("Shape");
Shape434.USE = "HAnimJointShape";
Transform433.children = new MFNode();

Transform433.children[0] = Shape434;

Transform432.children = new MFNode();

Transform432.children[0] = Transform433;

HAnimSegment431.children = new MFNode();

HAnimSegment431.children[0] = Transform432;

Shape Shape435 = createNode("Shape");
LineSet LineSet436 = createNode("LineSet");
LineSet436.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate437 = createNode("Coordinate");
Coordinate437.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0801,0.0712,-0.0766]);
LineSet436.coord = Coordinate437;

//from r_talocrural to r_talocalcaneonavicular vertices 2
ColorRGBA ColorRGBA438 = createNode("ColorRGBA");
ColorRGBA438.USE = "HAnimSegmentLineColorRGBA";
LineSet436.color = ColorRGBA438;

Shape435.geometry = LineSet436;

HAnimSegment431.children[1] = Shape435;

Shape Shape439 = createNode("Shape");
LineSet LineSet440 = createNode("LineSet");
LineSet440.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate441 = createNode("Coordinate");
Coordinate441.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0801,0.0712,-0.0766]);
LineSet440.coord = Coordinate441;

//from r_talocrural to r_calcaneocuboid vertices 2
ColorRGBA ColorRGBA442 = createNode("ColorRGBA");
ColorRGBA442.USE = "HAnimSegmentLineColorRGBA";
LineSet440.color = ColorRGBA442;

Shape439.geometry = LineSet440;

HAnimSegment431.children[2] = Shape439;

HAnimJoint430.children = new MFNode();

HAnimJoint430.children[0] = HAnimSegment431;

HAnimJoint HAnimJoint443 = createNode("HAnimJoint");
HAnimJoint443.name = "r_talocalcaneonavicular";
HAnimJoint443.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint443.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint443.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment444 = createNode("HAnimSegment");
HAnimSegment444.name = "r_navicular";
HAnimSegment444.DEF = "hanim_r_navicular";
Transform Transform445 = createNode("Transform");
Transform445.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform446 = createNode("Transform");
//Empty Transform
Shape Shape447 = createNode("Shape");
Shape447.USE = "HAnimJointShape";
Transform446.children = new MFNode();

Transform446.children[0] = Shape447;

Transform445.children = new MFNode();

Transform445.children[0] = Transform446;

HAnimSegment444.children = new MFNode();

HAnimSegment444.children[0] = Transform445;

Shape Shape448 = createNode("Shape");
LineSet LineSet449 = createNode("LineSet");
LineSet449.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate450 = createNode("Coordinate");
Coordinate450.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet449.coord = Coordinate450;

//from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 1
ColorRGBA ColorRGBA451 = createNode("ColorRGBA");
ColorRGBA451.USE = "HAnimSegmentLineColorRGBA";
LineSet449.color = ColorRGBA451;

Shape448.geometry = LineSet449;

HAnimSegment444.children[1] = Shape448;

Shape Shape452 = createNode("Shape");
LineSet LineSet453 = createNode("LineSet");
LineSet453.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate454 = createNode("Coordinate");
Coordinate454.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet453.coord = Coordinate454;

//from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 1
ColorRGBA ColorRGBA455 = createNode("ColorRGBA");
ColorRGBA455.USE = "HAnimSegmentLineColorRGBA";
LineSet453.color = ColorRGBA455;

Shape452.geometry = LineSet453;

HAnimSegment444.children[2] = Shape452;

Shape Shape456 = createNode("Shape");
LineSet LineSet457 = createNode("LineSet");
LineSet457.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate458 = createNode("Coordinate");
Coordinate458.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet457.coord = Coordinate458;

//from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 1
ColorRGBA ColorRGBA459 = createNode("ColorRGBA");
ColorRGBA459.USE = "HAnimSegmentLineColorRGBA";
LineSet457.color = ColorRGBA459;

Shape456.geometry = LineSet457;

HAnimSegment444.children[3] = Shape456;

HAnimJoint443.children = new MFNode();

HAnimJoint443.children[0] = HAnimSegment444;

HAnimJoint HAnimJoint460 = createNode("HAnimJoint");
HAnimJoint460.name = "r_cuneonavicular_1";
HAnimJoint460.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint460.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint460.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment461 = createNode("HAnimSegment");
HAnimSegment461.name = "r_cuneiform_1";
HAnimSegment461.DEF = "hanim_r_cuneiform_1";
Transform Transform462 = createNode("Transform");
Transform462.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform463 = createNode("Transform");
//Empty Transform
Shape Shape464 = createNode("Shape");
Shape464.USE = "HAnimJointShape";
Transform463.children = new MFNode();

Transform463.children[0] = Shape464;

Transform462.children = new MFNode();

Transform462.children[0] = Transform463;

HAnimSegment461.children = new MFNode();

HAnimSegment461.children[0] = Transform462;

Shape Shape465 = createNode("Shape");
LineSet LineSet466 = createNode("LineSet");
LineSet466.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate467 = createNode("Coordinate");
Coordinate467.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet466.coord = Coordinate467;

//from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 1
ColorRGBA ColorRGBA468 = createNode("ColorRGBA");
ColorRGBA468.USE = "HAnimSegmentLineColorRGBA";
LineSet466.color = ColorRGBA468;

Shape465.geometry = LineSet466;

HAnimSegment461.children[1] = Shape465;

HAnimJoint460.children = new MFNode();

HAnimJoint460.children[0] = HAnimSegment461;

HAnimJoint HAnimJoint469 = createNode("HAnimJoint");
HAnimJoint469.name = "r_tarsometatarsal_1";
HAnimJoint469.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint469.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint469.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment470 = createNode("HAnimSegment");
HAnimSegment470.name = "r_metatarsal_1";
HAnimSegment470.DEF = "hanim_r_metatarsal_1";
Transform Transform471 = createNode("Transform");
Transform471.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform472 = createNode("Transform");
//Empty Transform
Shape Shape473 = createNode("Shape");
Shape473.USE = "HAnimJointShape";
Transform472.children = new MFNode();

Transform472.children[0] = Shape473;

Transform471.children = new MFNode();

Transform471.children[0] = Transform472;

HAnimSegment470.children = new MFNode();

HAnimSegment470.children[0] = Transform471;

Shape Shape474 = createNode("Shape");
LineSet LineSet475 = createNode("LineSet");
LineSet475.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate476 = createNode("Coordinate");
Coordinate476.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet475.coord = Coordinate476;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 1
ColorRGBA ColorRGBA477 = createNode("ColorRGBA");
ColorRGBA477.USE = "HAnimSegmentLineColorRGBA";
LineSet475.color = ColorRGBA477;

Shape474.geometry = LineSet475;

HAnimSegment470.children[1] = Shape474;

HAnimSite HAnimSite478 = createNode("HAnimSite");
HAnimSite478.name = "r_metatarsal_phalanx_1_pt";
HAnimSite478.DEF = "hanim_r_metatarsal_phalanx_1_pt";
TouchSensor TouchSensor479 = createNode("TouchSensor");
TouchSensor479.description = "HAnimSite r_metatarsal_phalanx_1_pt";
HAnimSite478.children = new MFNode();

HAnimSite478.children[0] = TouchSensor479;

Shape Shape480 = createNode("Shape");
Shape480.USE = "HAnimSiteShape";
HAnimSite478.children[1] = Shape480;

HAnimSegment470.children[2] = HAnimSite478;

HAnimJoint469.children = new MFNode();

HAnimJoint469.children[0] = HAnimSegment470;

HAnimJoint HAnimJoint481 = createNode("HAnimJoint");
HAnimJoint481.name = "r_metatarsophalangeal_1";
HAnimJoint481.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint481.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint481.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment482 = createNode("HAnimSegment");
HAnimSegment482.name = "r_tarsal_proximal_phalanx_1";
HAnimSegment482.DEF = "hanim_r_tarsal_proximal_phalanx_1";
Transform Transform483 = createNode("Transform");
Transform483.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform484 = createNode("Transform");
//Empty Transform
Shape Shape485 = createNode("Shape");
Shape485.USE = "HAnimJointShape";
Transform484.children = new MFNode();

Transform484.children[0] = Shape485;

Transform483.children = new MFNode();

Transform483.children[0] = Transform484;

HAnimSegment482.children = new MFNode();

HAnimSegment482.children[0] = Transform483;

Shape Shape486 = createNode("Shape");
LineSet LineSet487 = createNode("LineSet");
LineSet487.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate488 = createNode("Coordinate");
Coordinate488.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet487.coord = Coordinate488;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 1
ColorRGBA ColorRGBA489 = createNode("ColorRGBA");
ColorRGBA489.USE = "HAnimSegmentLineColorRGBA";
LineSet487.color = ColorRGBA489;

Shape486.geometry = LineSet487;

HAnimSegment482.children[1] = Shape486;

HAnimSite HAnimSite490 = createNode("HAnimSite");
HAnimSite490.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite490.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
TouchSensor TouchSensor491 = createNode("TouchSensor");
TouchSensor491.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite490.children = new MFNode();

HAnimSite490.children[0] = TouchSensor491;

Shape Shape492 = createNode("Shape");
Shape492.USE = "HAnimSiteShape";
HAnimSite490.children[1] = Shape492;

HAnimSegment482.children[2] = HAnimSite490;

HAnimJoint481.children = new MFNode();

HAnimJoint481.children[0] = HAnimSegment482;

HAnimJoint HAnimJoint493 = createNode("HAnimJoint");
HAnimJoint493.name = "r_tarsal_interphalangeal_1";
HAnimJoint493.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint493.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint493.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint481.children[1] = HAnimJoint493;

HAnimJoint469.children[1] = HAnimJoint481;

HAnimJoint460.children[1] = HAnimJoint469;

HAnimJoint443.children[1] = HAnimJoint460;

HAnimJoint HAnimJoint494 = createNode("HAnimJoint");
HAnimJoint494.name = "r_cuneonavicular_2";
HAnimJoint494.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint494.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint494.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment495 = createNode("HAnimSegment");
HAnimSegment495.name = "r_cuneiform_2";
HAnimSegment495.DEF = "hanim_r_cuneiform_2";
Transform Transform496 = createNode("Transform");
Transform496.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform497 = createNode("Transform");
//Empty Transform
Shape Shape498 = createNode("Shape");
Shape498.USE = "HAnimJointShape";
Transform497.children = new MFNode();

Transform497.children[0] = Shape498;

Transform496.children = new MFNode();

Transform496.children[0] = Transform497;

HAnimSegment495.children = new MFNode();

HAnimSegment495.children[0] = Transform496;

Shape Shape499 = createNode("Shape");
LineSet LineSet500 = createNode("LineSet");
LineSet500.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate501 = createNode("Coordinate");
Coordinate501.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet500.coord = Coordinate501;

//from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 1
ColorRGBA ColorRGBA502 = createNode("ColorRGBA");
ColorRGBA502.USE = "HAnimSegmentLineColorRGBA";
LineSet500.color = ColorRGBA502;

Shape499.geometry = LineSet500;

HAnimSegment495.children[1] = Shape499;

HAnimJoint494.children = new MFNode();

HAnimJoint494.children[0] = HAnimSegment495;

HAnimJoint HAnimJoint503 = createNode("HAnimJoint");
HAnimJoint503.name = "r_tarsometatarsal_2";
HAnimJoint503.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint503.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint503.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment504 = createNode("HAnimSegment");
HAnimSegment504.name = "r_metatarsal_2";
HAnimSegment504.DEF = "hanim_r_metatarsal_2";
Transform Transform505 = createNode("Transform");
Transform505.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform506 = createNode("Transform");
//Empty Transform
Shape Shape507 = createNode("Shape");
Shape507.USE = "HAnimJointShape";
Transform506.children = new MFNode();

Transform506.children[0] = Shape507;

Transform505.children = new MFNode();

Transform505.children[0] = Transform506;

HAnimSegment504.children = new MFNode();

HAnimSegment504.children[0] = Transform505;

Shape Shape508 = createNode("Shape");
LineSet LineSet509 = createNode("LineSet");
LineSet509.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate510 = createNode("Coordinate");
Coordinate510.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet509.coord = Coordinate510;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 1
ColorRGBA ColorRGBA511 = createNode("ColorRGBA");
ColorRGBA511.USE = "HAnimSegmentLineColorRGBA";
LineSet509.color = ColorRGBA511;

Shape508.geometry = LineSet509;

HAnimSegment504.children[1] = Shape508;

HAnimJoint503.children = new MFNode();

HAnimJoint503.children[0] = HAnimSegment504;

HAnimJoint HAnimJoint512 = createNode("HAnimJoint");
HAnimJoint512.name = "r_metatarsophalangeal_2";
HAnimJoint512.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint512.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint512.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment513 = createNode("HAnimSegment");
HAnimSegment513.name = "r_tarsal_proximal_phalanx_2";
HAnimSegment513.DEF = "hanim_r_tarsal_proximal_phalanx_2";
Transform Transform514 = createNode("Transform");
Transform514.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform515 = createNode("Transform");
//Empty Transform
Shape Shape516 = createNode("Shape");
Shape516.USE = "HAnimJointShape";
Transform515.children = new MFNode();

Transform515.children[0] = Shape516;

Transform514.children = new MFNode();

Transform514.children[0] = Transform515;

HAnimSegment513.children = new MFNode();

HAnimSegment513.children[0] = Transform514;

Shape Shape517 = createNode("Shape");
LineSet LineSet518 = createNode("LineSet");
LineSet518.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate519 = createNode("Coordinate");
Coordinate519.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet518.coord = Coordinate519;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 1
ColorRGBA ColorRGBA520 = createNode("ColorRGBA");
ColorRGBA520.USE = "HAnimSegmentLineColorRGBA";
LineSet518.color = ColorRGBA520;

Shape517.geometry = LineSet518;

HAnimSegment513.children[1] = Shape517;

HAnimJoint512.children = new MFNode();

HAnimJoint512.children[0] = HAnimSegment513;

HAnimJoint HAnimJoint521 = createNode("HAnimJoint");
HAnimJoint521.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint521.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint521.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint521.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment522 = createNode("HAnimSegment");
HAnimSegment522.name = "r_tarsal_middle_phalanx_2";
HAnimSegment522.DEF = "hanim_r_tarsal_middle_phalanx_2";
Transform Transform523 = createNode("Transform");
Transform523.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform524 = createNode("Transform");
//Empty Transform
Shape Shape525 = createNode("Shape");
Shape525.USE = "HAnimJointShape";
Transform524.children = new MFNode();

Transform524.children[0] = Shape525;

Transform523.children = new MFNode();

Transform523.children[0] = Transform524;

HAnimSegment522.children = new MFNode();

HAnimSegment522.children[0] = Transform523;

Shape Shape526 = createNode("Shape");
LineSet LineSet527 = createNode("LineSet");
LineSet527.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate528 = createNode("Coordinate");
Coordinate528.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet527.coord = Coordinate528;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 1
ColorRGBA ColorRGBA529 = createNode("ColorRGBA");
ColorRGBA529.USE = "HAnimSegmentLineColorRGBA";
LineSet527.color = ColorRGBA529;

Shape526.geometry = LineSet527;

HAnimSegment522.children[1] = Shape526;

HAnimSite HAnimSite530 = createNode("HAnimSite");
HAnimSite530.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite530.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite530.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
TouchSensor TouchSensor531 = createNode("TouchSensor");
TouchSensor531.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite530.children = new MFNode();

HAnimSite530.children[0] = TouchSensor531;

Shape Shape532 = createNode("Shape");
Shape532.USE = "HAnimSiteShape";
HAnimSite530.children[1] = Shape532;

HAnimSegment522.children[2] = HAnimSite530;

HAnimJoint521.children = new MFNode();

HAnimJoint521.children[0] = HAnimSegment522;

HAnimJoint HAnimJoint533 = createNode("HAnimJoint");
HAnimJoint533.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint533.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint533.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint533.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint521.children[1] = HAnimJoint533;

HAnimJoint512.children[1] = HAnimJoint521;

HAnimJoint503.children[1] = HAnimJoint512;

HAnimJoint494.children[1] = HAnimJoint503;

HAnimJoint443.children[2] = HAnimJoint494;

HAnimJoint HAnimJoint534 = createNode("HAnimJoint");
HAnimJoint534.name = "r_cuneonavicular_3";
HAnimJoint534.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint534.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint534.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment535 = createNode("HAnimSegment");
HAnimSegment535.name = "r_cuneiform_3";
HAnimSegment535.DEF = "hanim_r_cuneiform_3";
Transform Transform536 = createNode("Transform");
Transform536.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform537 = createNode("Transform");
//Empty Transform
Shape Shape538 = createNode("Shape");
Shape538.USE = "HAnimJointShape";
Transform537.children = new MFNode();

Transform537.children[0] = Shape538;

Transform536.children = new MFNode();

Transform536.children[0] = Transform537;

HAnimSegment535.children = new MFNode();

HAnimSegment535.children[0] = Transform536;

Shape Shape539 = createNode("Shape");
LineSet LineSet540 = createNode("LineSet");
LineSet540.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate541 = createNode("Coordinate");
Coordinate541.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet540.coord = Coordinate541;

//from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 1
ColorRGBA ColorRGBA542 = createNode("ColorRGBA");
ColorRGBA542.USE = "HAnimSegmentLineColorRGBA";
LineSet540.color = ColorRGBA542;

Shape539.geometry = LineSet540;

HAnimSegment535.children[1] = Shape539;

HAnimJoint534.children = new MFNode();

HAnimJoint534.children[0] = HAnimSegment535;

HAnimJoint HAnimJoint543 = createNode("HAnimJoint");
HAnimJoint543.name = "r_tarsometatarsal_3";
HAnimJoint543.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint543.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint543.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment544 = createNode("HAnimSegment");
HAnimSegment544.name = "r_metatarsal_3";
HAnimSegment544.DEF = "hanim_r_metatarsal_3";
Transform Transform545 = createNode("Transform");
Transform545.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform546 = createNode("Transform");
//Empty Transform
Shape Shape547 = createNode("Shape");
Shape547.USE = "HAnimJointShape";
Transform546.children = new MFNode();

Transform546.children[0] = Shape547;

Transform545.children = new MFNode();

Transform545.children[0] = Transform546;

HAnimSegment544.children = new MFNode();

HAnimSegment544.children[0] = Transform545;

Shape Shape548 = createNode("Shape");
LineSet LineSet549 = createNode("LineSet");
LineSet549.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate550 = createNode("Coordinate");
Coordinate550.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet549.coord = Coordinate550;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1
ColorRGBA ColorRGBA551 = createNode("ColorRGBA");
ColorRGBA551.USE = "HAnimSegmentLineColorRGBA";
LineSet549.color = ColorRGBA551;

Shape548.geometry = LineSet549;

HAnimSegment544.children[1] = Shape548;

HAnimJoint543.children = new MFNode();

HAnimJoint543.children[0] = HAnimSegment544;

HAnimJoint HAnimJoint552 = createNode("HAnimJoint");
HAnimJoint552.name = "r_metatarsophalangeal_3";
HAnimJoint552.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint552.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint552.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment553 = createNode("HAnimSegment");
HAnimSegment553.name = "r_tarsal_proximal_phalanx_3";
HAnimSegment553.DEF = "hanim_r_tarsal_proximal_phalanx_3";
Transform Transform554 = createNode("Transform");
Transform554.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform555 = createNode("Transform");
//Empty Transform
Shape Shape556 = createNode("Shape");
Shape556.USE = "HAnimJointShape";
Transform555.children = new MFNode();

Transform555.children[0] = Shape556;

Transform554.children = new MFNode();

Transform554.children[0] = Transform555;

HAnimSegment553.children = new MFNode();

HAnimSegment553.children[0] = Transform554;

Shape Shape557 = createNode("Shape");
LineSet LineSet558 = createNode("LineSet");
LineSet558.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate559 = createNode("Coordinate");
Coordinate559.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet558.coord = Coordinate559;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 1
ColorRGBA ColorRGBA560 = createNode("ColorRGBA");
ColorRGBA560.USE = "HAnimSegmentLineColorRGBA";
LineSet558.color = ColorRGBA560;

Shape557.geometry = LineSet558;

HAnimSegment553.children[1] = Shape557;

HAnimJoint552.children = new MFNode();

HAnimJoint552.children[0] = HAnimSegment553;

HAnimJoint HAnimJoint561 = createNode("HAnimJoint");
HAnimJoint561.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint561.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint561.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint561.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment562 = createNode("HAnimSegment");
HAnimSegment562.name = "r_tarsal_middle_phalanx_3";
HAnimSegment562.DEF = "hanim_r_tarsal_middle_phalanx_3";
Transform Transform563 = createNode("Transform");
Transform563.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform564 = createNode("Transform");
//Empty Transform
Shape Shape565 = createNode("Shape");
Shape565.USE = "HAnimJointShape";
Transform564.children = new MFNode();

Transform564.children[0] = Shape565;

Transform563.children = new MFNode();

Transform563.children[0] = Transform564;

HAnimSegment562.children = new MFNode();

HAnimSegment562.children[0] = Transform563;

Shape Shape566 = createNode("Shape");
LineSet LineSet567 = createNode("LineSet");
LineSet567.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate568 = createNode("Coordinate");
Coordinate568.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet567.coord = Coordinate568;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 1
ColorRGBA ColorRGBA569 = createNode("ColorRGBA");
ColorRGBA569.USE = "HAnimSegmentLineColorRGBA";
LineSet567.color = ColorRGBA569;

Shape566.geometry = LineSet567;

HAnimSegment562.children[1] = Shape566;

HAnimSite HAnimSite570 = createNode("HAnimSite");
HAnimSite570.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite570.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
TouchSensor TouchSensor571 = createNode("TouchSensor");
TouchSensor571.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite570.children = new MFNode();

HAnimSite570.children[0] = TouchSensor571;

Shape Shape572 = createNode("Shape");
Shape572.USE = "HAnimSiteShape";
HAnimSite570.children[1] = Shape572;

HAnimSegment562.children[2] = HAnimSite570;

HAnimJoint561.children = new MFNode();

HAnimJoint561.children[0] = HAnimSegment562;

HAnimJoint HAnimJoint573 = createNode("HAnimJoint");
HAnimJoint573.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint573.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint573.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint573.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint561.children[1] = HAnimJoint573;

HAnimJoint552.children[1] = HAnimJoint561;

HAnimJoint543.children[1] = HAnimJoint552;

HAnimJoint534.children[1] = HAnimJoint543;

HAnimJoint443.children[3] = HAnimJoint534;

HAnimJoint430.children[1] = HAnimJoint443;

HAnimJoint HAnimJoint574 = createNode("HAnimJoint");
HAnimJoint574.name = "r_calcaneocuboid";
HAnimJoint574.DEF = "hanim_r_calcaneocuboid";
HAnimJoint574.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint574.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment575 = createNode("HAnimSegment");
HAnimSegment575.name = "r_calcaneus";
HAnimSegment575.DEF = "hanim_r_calcaneus";
Transform Transform576 = createNode("Transform");
Transform576.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform577 = createNode("Transform");
//Empty Transform
Shape Shape578 = createNode("Shape");
Shape578.USE = "HAnimJointShape";
Transform577.children = new MFNode();

Transform577.children[0] = Shape578;

Transform576.children = new MFNode();

Transform576.children[0] = Transform577;

HAnimSegment575.children = new MFNode();

HAnimSegment575.children[0] = Transform576;

Shape Shape579 = createNode("Shape");
LineSet LineSet580 = createNode("LineSet");
LineSet580.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate581 = createNode("Coordinate");
Coordinate581.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet580.coord = Coordinate581;

//from r_calcaneocuboid to r_transversetarsal vertices 1
ColorRGBA ColorRGBA582 = createNode("ColorRGBA");
ColorRGBA582.USE = "HAnimSegmentLineColorRGBA";
LineSet580.color = ColorRGBA582;

Shape579.geometry = LineSet580;

HAnimSegment575.children[1] = Shape579;

HAnimJoint574.children = new MFNode();

HAnimJoint574.children[0] = HAnimSegment575;

HAnimJoint HAnimJoint583 = createNode("HAnimJoint");
HAnimJoint583.name = "r_transversetarsal";
HAnimJoint583.DEF = "hanim_r_transversetarsal";
HAnimJoint583.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint583.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment584 = createNode("HAnimSegment");
HAnimSegment584.name = "r_cuboid";
HAnimSegment584.DEF = "hanim_r_cuboid";
Transform Transform585 = createNode("Transform");
Transform585.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform586 = createNode("Transform");
//Empty Transform
Shape Shape587 = createNode("Shape");
Shape587.USE = "HAnimJointShape";
Transform586.children = new MFNode();

Transform586.children[0] = Shape587;

Transform585.children = new MFNode();

Transform585.children[0] = Transform586;

HAnimSegment584.children = new MFNode();

HAnimSegment584.children[0] = Transform585;

Shape Shape588 = createNode("Shape");
LineSet LineSet589 = createNode("LineSet");
LineSet589.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate590 = createNode("Coordinate");
Coordinate590.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet589.coord = Coordinate590;

//from r_transversetarsal to r_tarsometatarsal_4 vertices 1
ColorRGBA ColorRGBA591 = createNode("ColorRGBA");
ColorRGBA591.USE = "HAnimSegmentLineColorRGBA";
LineSet589.color = ColorRGBA591;

Shape588.geometry = LineSet589;

HAnimSegment584.children[1] = Shape588;

Shape Shape592 = createNode("Shape");
LineSet LineSet593 = createNode("LineSet");
LineSet593.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate594 = createNode("Coordinate");
Coordinate594.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet593.coord = Coordinate594;

//from r_transversetarsal to r_tarsometatarsal_5 vertices 1
ColorRGBA ColorRGBA595 = createNode("ColorRGBA");
ColorRGBA595.USE = "HAnimSegmentLineColorRGBA";
LineSet593.color = ColorRGBA595;

Shape592.geometry = LineSet593;

HAnimSegment584.children[2] = Shape592;

HAnimJoint583.children = new MFNode();

HAnimJoint583.children[0] = HAnimSegment584;

HAnimJoint HAnimJoint596 = createNode("HAnimJoint");
HAnimJoint596.name = "r_tarsometatarsal_4";
HAnimJoint596.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint596.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint596.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment597 = createNode("HAnimSegment");
HAnimSegment597.name = "r_metatarsal_4";
HAnimSegment597.DEF = "hanim_r_metatarsal_4";
Transform Transform598 = createNode("Transform");
Transform598.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform599 = createNode("Transform");
//Empty Transform
Shape Shape600 = createNode("Shape");
Shape600.USE = "HAnimJointShape";
Transform599.children = new MFNode();

Transform599.children[0] = Shape600;

Transform598.children = new MFNode();

Transform598.children[0] = Transform599;

HAnimSegment597.children = new MFNode();

HAnimSegment597.children[0] = Transform598;

Shape Shape601 = createNode("Shape");
LineSet LineSet602 = createNode("LineSet");
LineSet602.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate603 = createNode("Coordinate");
Coordinate603.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet602.coord = Coordinate603;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 1
ColorRGBA ColorRGBA604 = createNode("ColorRGBA");
ColorRGBA604.USE = "HAnimSegmentLineColorRGBA";
LineSet602.color = ColorRGBA604;

Shape601.geometry = LineSet602;

HAnimSegment597.children[1] = Shape601;

HAnimJoint596.children = new MFNode();

HAnimJoint596.children[0] = HAnimSegment597;

HAnimJoint HAnimJoint605 = createNode("HAnimJoint");
HAnimJoint605.name = "r_metatarsophalangeal_4";
HAnimJoint605.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint605.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint605.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment606 = createNode("HAnimSegment");
HAnimSegment606.name = "r_tarsal_proximal_phalanx_4";
HAnimSegment606.DEF = "hanim_r_tarsal_proximal_phalanx_4";
Transform Transform607 = createNode("Transform");
Transform607.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform608 = createNode("Transform");
//Empty Transform
Shape Shape609 = createNode("Shape");
Shape609.USE = "HAnimJointShape";
Transform608.children = new MFNode();

Transform608.children[0] = Shape609;

Transform607.children = new MFNode();

Transform607.children[0] = Transform608;

HAnimSegment606.children = new MFNode();

HAnimSegment606.children[0] = Transform607;

Shape Shape610 = createNode("Shape");
LineSet LineSet611 = createNode("LineSet");
LineSet611.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate612 = createNode("Coordinate");
Coordinate612.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet611.coord = Coordinate612;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 1
ColorRGBA ColorRGBA613 = createNode("ColorRGBA");
ColorRGBA613.USE = "HAnimSegmentLineColorRGBA";
LineSet611.color = ColorRGBA613;

Shape610.geometry = LineSet611;

HAnimSegment606.children[1] = Shape610;

HAnimJoint605.children = new MFNode();

HAnimJoint605.children[0] = HAnimSegment606;

HAnimJoint HAnimJoint614 = createNode("HAnimJoint");
HAnimJoint614.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint614.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint614.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint614.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment615 = createNode("HAnimSegment");
HAnimSegment615.name = "r_tarsal_middle_phalanx_4";
HAnimSegment615.DEF = "hanim_r_tarsal_middle_phalanx_4";
Transform Transform616 = createNode("Transform");
Transform616.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform617 = createNode("Transform");
//Empty Transform
Shape Shape618 = createNode("Shape");
Shape618.USE = "HAnimJointShape";
Transform617.children = new MFNode();

Transform617.children[0] = Shape618;

Transform616.children = new MFNode();

Transform616.children[0] = Transform617;

HAnimSegment615.children = new MFNode();

HAnimSegment615.children[0] = Transform616;

Shape Shape619 = createNode("Shape");
LineSet LineSet620 = createNode("LineSet");
LineSet620.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate621 = createNode("Coordinate");
Coordinate621.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet620.coord = Coordinate621;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 1
ColorRGBA ColorRGBA622 = createNode("ColorRGBA");
ColorRGBA622.USE = "HAnimSegmentLineColorRGBA";
LineSet620.color = ColorRGBA622;

Shape619.geometry = LineSet620;

HAnimSegment615.children[1] = Shape619;

HAnimSite HAnimSite623 = createNode("HAnimSite");
HAnimSite623.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite623.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
TouchSensor TouchSensor624 = createNode("TouchSensor");
TouchSensor624.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite623.children = new MFNode();

HAnimSite623.children[0] = TouchSensor624;

Shape Shape625 = createNode("Shape");
Shape625.USE = "HAnimSiteShape";
HAnimSite623.children[1] = Shape625;

HAnimSegment615.children[2] = HAnimSite623;

HAnimJoint614.children = new MFNode();

HAnimJoint614.children[0] = HAnimSegment615;

HAnimJoint HAnimJoint626 = createNode("HAnimJoint");
HAnimJoint626.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint626.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint626.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint626.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint614.children[1] = HAnimJoint626;

HAnimJoint605.children[1] = HAnimJoint614;

HAnimJoint596.children[1] = HAnimJoint605;

HAnimJoint583.children[1] = HAnimJoint596;

HAnimJoint HAnimJoint627 = createNode("HAnimJoint");
HAnimJoint627.name = "r_tarsometatarsal_5";
HAnimJoint627.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint627.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint627.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment628 = createNode("HAnimSegment");
HAnimSegment628.name = "r_metatarsal_5";
HAnimSegment628.DEF = "hanim_r_metatarsal_5";
Transform Transform629 = createNode("Transform");
Transform629.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform630 = createNode("Transform");
//Empty Transform
Shape Shape631 = createNode("Shape");
Shape631.USE = "HAnimJointShape";
Transform630.children = new MFNode();

Transform630.children[0] = Shape631;

Transform629.children = new MFNode();

Transform629.children[0] = Transform630;

HAnimSegment628.children = new MFNode();

HAnimSegment628.children[0] = Transform629;

Shape Shape632 = createNode("Shape");
LineSet LineSet633 = createNode("LineSet");
LineSet633.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate634 = createNode("Coordinate");
Coordinate634.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet633.coord = Coordinate634;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 1
ColorRGBA ColorRGBA635 = createNode("ColorRGBA");
ColorRGBA635.USE = "HAnimSegmentLineColorRGBA";
LineSet633.color = ColorRGBA635;

Shape632.geometry = LineSet633;

HAnimSegment628.children[1] = Shape632;

HAnimSite HAnimSite636 = createNode("HAnimSite");
HAnimSite636.name = "r_metatarsal_phalanx_5_pt";
HAnimSite636.DEF = "hanim_r_metatarsal_phalanx_5_pt";
TouchSensor TouchSensor637 = createNode("TouchSensor");
TouchSensor637.description = "HAnimSite r_metatarsal_phalanx_5_pt";
HAnimSite636.children = new MFNode();

HAnimSite636.children[0] = TouchSensor637;

Shape Shape638 = createNode("Shape");
Shape638.USE = "HAnimSiteShape";
HAnimSite636.children[1] = Shape638;

HAnimSegment628.children[2] = HAnimSite636;

HAnimJoint627.children = new MFNode();

HAnimJoint627.children[0] = HAnimSegment628;

HAnimJoint HAnimJoint639 = createNode("HAnimJoint");
HAnimJoint639.name = "r_metatarsophalangeal_5";
HAnimJoint639.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint639.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint639.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment640 = createNode("HAnimSegment");
HAnimSegment640.name = "r_tarsal_proximal_phalanx_5";
HAnimSegment640.DEF = "hanim_r_tarsal_proximal_phalanx_5";
Transform Transform641 = createNode("Transform");
Transform641.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform642 = createNode("Transform");
//Empty Transform
Shape Shape643 = createNode("Shape");
Shape643.USE = "HAnimJointShape";
Transform642.children = new MFNode();

Transform642.children[0] = Shape643;

Transform641.children = new MFNode();

Transform641.children[0] = Transform642;

HAnimSegment640.children = new MFNode();

HAnimSegment640.children[0] = Transform641;

Shape Shape644 = createNode("Shape");
LineSet LineSet645 = createNode("LineSet");
LineSet645.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate646 = createNode("Coordinate");
Coordinate646.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet645.coord = Coordinate646;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 1
ColorRGBA ColorRGBA647 = createNode("ColorRGBA");
ColorRGBA647.USE = "HAnimSegmentLineColorRGBA";
LineSet645.color = ColorRGBA647;

Shape644.geometry = LineSet645;

HAnimSegment640.children[1] = Shape644;

HAnimJoint639.children = new MFNode();

HAnimJoint639.children[0] = HAnimSegment640;

HAnimJoint HAnimJoint648 = createNode("HAnimJoint");
HAnimJoint648.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint648.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint648.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint648.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment649 = createNode("HAnimSegment");
HAnimSegment649.name = "r_tarsal_middle_phalanx_5";
HAnimSegment649.DEF = "hanim_r_tarsal_middle_phalanx_5";
Transform Transform650 = createNode("Transform");
Transform650.translation = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
Transform Transform651 = createNode("Transform");
//Empty Transform
Shape Shape652 = createNode("Shape");
Shape652.USE = "HAnimJointShape";
Transform651.children = new MFNode();

Transform651.children[0] = Shape652;

Transform650.children = new MFNode();

Transform650.children[0] = Transform651;

HAnimSegment649.children = new MFNode();

HAnimSegment649.children[0] = Transform650;

Shape Shape653 = createNode("Shape");
LineSet LineSet654 = createNode("LineSet");
LineSet654.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate655 = createNode("Coordinate");
Coordinate655.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766]);
LineSet654.coord = Coordinate655;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 1
ColorRGBA ColorRGBA656 = createNode("ColorRGBA");
ColorRGBA656.USE = "HAnimSegmentLineColorRGBA";
LineSet654.color = ColorRGBA656;

Shape653.geometry = LineSet654;

HAnimSegment649.children[1] = Shape653;

HAnimSite HAnimSite657 = createNode("HAnimSite");
HAnimSite657.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite657.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
TouchSensor TouchSensor658 = createNode("TouchSensor");
TouchSensor658.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite657.children = new MFNode();

HAnimSite657.children[0] = TouchSensor658;

Shape Shape659 = createNode("Shape");
Shape659.USE = "HAnimSiteShape";
HAnimSite657.children[1] = Shape659;

HAnimSegment649.children[2] = HAnimSite657;

HAnimJoint648.children = new MFNode();

HAnimJoint648.children[0] = HAnimSegment649;

HAnimJoint HAnimJoint660 = createNode("HAnimJoint");
HAnimJoint660.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint660.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint660.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint660.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint648.children[1] = HAnimJoint660;

HAnimJoint639.children[1] = HAnimJoint648;

HAnimJoint627.children[1] = HAnimJoint639;

HAnimJoint583.children[2] = HAnimJoint627;

HAnimJoint574.children[1] = HAnimJoint583;

HAnimJoint430.children[2] = HAnimJoint574;

HAnimJoint415.children[1] = HAnimJoint430;

HAnimJoint397.children[1] = HAnimJoint415;

HAnimJoint96.children[2] = HAnimJoint397;

HAnimJoint44.children[1] = HAnimJoint96;

HAnimJoint HAnimJoint661 = createNode("HAnimJoint");
HAnimJoint661.name = "vl5";
HAnimJoint661.DEF = "hanim_vl5";
HAnimJoint661.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint661.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint661.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment662 = createNode("HAnimSegment");
HAnimSegment662.name = "l5";
HAnimSegment662.DEF = "hanim_l5";
Transform Transform663 = createNode("Transform");
Transform663.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Transform Transform664 = createNode("Transform");
//Empty Transform
Shape Shape665 = createNode("Shape");
Shape665.USE = "HAnimJointShape";
Transform664.children = new MFNode();

Transform664.children[0] = Shape665;

Transform663.children = new MFNode();

Transform663.children[0] = Transform664;

HAnimSegment662.children = new MFNode();

HAnimSegment662.children[0] = Transform663;

Shape Shape666 = createNode("Shape");
LineSet LineSet667 = createNode("LineSet");
LineSet667.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate668 = createNode("Coordinate");
Coordinate668.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet667.coord = Coordinate668;

//from vl5 to vl4 vertices 2
ColorRGBA ColorRGBA669 = createNode("ColorRGBA");
ColorRGBA669.USE = "HAnimSegmentLineColorRGBA";
LineSet667.color = ColorRGBA669;

Shape666.geometry = LineSet667;

HAnimSegment662.children[1] = Shape666;

HAnimJoint661.children = new MFNode();

HAnimJoint661.children[0] = HAnimSegment662;

HAnimJoint HAnimJoint670 = createNode("HAnimJoint");
HAnimJoint670.name = "vl4";
HAnimJoint670.DEF = "hanim_vl4";
HAnimJoint670.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint670.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint670.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment671 = createNode("HAnimSegment");
HAnimSegment671.name = "l4";
HAnimSegment671.DEF = "hanim_l4";
Transform Transform672 = createNode("Transform");
Transform672.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Transform Transform673 = createNode("Transform");
//Empty Transform
Shape Shape674 = createNode("Shape");
Shape674.USE = "HAnimJointShape";
Transform673.children = new MFNode();

Transform673.children[0] = Shape674;

Transform672.children = new MFNode();

Transform672.children[0] = Transform673;

HAnimSegment671.children = new MFNode();

HAnimSegment671.children[0] = Transform672;

Shape Shape675 = createNode("Shape");
LineSet LineSet676 = createNode("LineSet");
LineSet676.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate677 = createNode("Coordinate");
Coordinate677.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet676.coord = Coordinate677;

//from vl4 to vl3 vertices 2
ColorRGBA ColorRGBA678 = createNode("ColorRGBA");
ColorRGBA678.USE = "HAnimSegmentLineColorRGBA";
LineSet676.color = ColorRGBA678;

Shape675.geometry = LineSet676;

HAnimSegment671.children[1] = Shape675;

HAnimJoint670.children = new MFNode();

HAnimJoint670.children[0] = HAnimSegment671;

HAnimJoint HAnimJoint679 = createNode("HAnimJoint");
HAnimJoint679.name = "vl3";
HAnimJoint679.DEF = "hanim_vl3";
HAnimJoint679.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint679.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint679.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment680 = createNode("HAnimSegment");
HAnimSegment680.name = "l3";
HAnimSegment680.DEF = "hanim_l3";
Transform Transform681 = createNode("Transform");
Transform681.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Transform Transform682 = createNode("Transform");
//Empty Transform
Shape Shape683 = createNode("Shape");
Shape683.USE = "HAnimJointShape";
Transform682.children = new MFNode();

Transform682.children[0] = Shape683;

Transform681.children = new MFNode();

Transform681.children[0] = Transform682;

HAnimSegment680.children = new MFNode();

HAnimSegment680.children[0] = Transform681;

Shape Shape684 = createNode("Shape");
LineSet LineSet685 = createNode("LineSet");
LineSet685.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate686 = createNode("Coordinate");
Coordinate686.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet685.coord = Coordinate686;

//from vl3 to vl2 vertices 2
ColorRGBA ColorRGBA687 = createNode("ColorRGBA");
ColorRGBA687.USE = "HAnimSegmentLineColorRGBA";
LineSet685.color = ColorRGBA687;

Shape684.geometry = LineSet685;

HAnimSegment680.children[1] = Shape684;

HAnimSite HAnimSite688 = createNode("HAnimSite");
HAnimSite688.name = "l_rib10_pt";
HAnimSite688.DEF = "hanim_l_rib10_pt";
HAnimSite688.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor689 = createNode("TouchSensor");
TouchSensor689.description = "HAnimSite l_rib10_pt";
HAnimSite688.children = new MFNode();

HAnimSite688.children[0] = TouchSensor689;

Shape Shape690 = createNode("Shape");
Shape690.USE = "HAnimSiteShape";
HAnimSite688.children[1] = Shape690;

HAnimSegment680.children[2] = HAnimSite688;

HAnimSite HAnimSite691 = createNode("HAnimSite");
HAnimSite691.name = "r_rib10_pt";
HAnimSite691.DEF = "hanim_r_rib10_pt";
HAnimSite691.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor692 = createNode("TouchSensor");
TouchSensor692.description = "HAnimSite r_rib10_pt";
HAnimSite691.children = new MFNode();

HAnimSite691.children[0] = TouchSensor692;

Shape Shape693 = createNode("Shape");
Shape693.USE = "HAnimSiteShape";
HAnimSite691.children[1] = Shape693;

HAnimSegment680.children[3] = HAnimSite691;

HAnimSite HAnimSite694 = createNode("HAnimSite");
HAnimSite694.name = "spine_2_middle_back_pt";
HAnimSite694.DEF = "hanim_spine_2_middle_back_pt";
TouchSensor TouchSensor695 = createNode("TouchSensor");
TouchSensor695.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite694.children = new MFNode();

HAnimSite694.children[0] = TouchSensor695;

Shape Shape696 = createNode("Shape");
Shape696.USE = "HAnimSiteShape";
HAnimSite694.children[1] = Shape696;

HAnimSegment680.children[4] = HAnimSite694;

HAnimJoint679.children = new MFNode();

HAnimJoint679.children[0] = HAnimSegment680;

HAnimJoint HAnimJoint697 = createNode("HAnimJoint");
HAnimJoint697.name = "vl2";
HAnimJoint697.DEF = "hanim_vl2";
HAnimJoint697.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint697.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint697.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment698 = createNode("HAnimSegment");
HAnimSegment698.name = "l2";
HAnimSegment698.DEF = "hanim_l2";
Transform Transform699 = createNode("Transform");
Transform699.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Transform Transform700 = createNode("Transform");
//Empty Transform
Shape Shape701 = createNode("Shape");
Shape701.USE = "HAnimJointShape";
Transform700.children = new MFNode();

Transform700.children[0] = Shape701;

Transform699.children = new MFNode();

Transform699.children[0] = Transform700;

HAnimSegment698.children = new MFNode();

HAnimSegment698.children[0] = Transform699;

Shape Shape702 = createNode("Shape");
LineSet LineSet703 = createNode("LineSet");
LineSet703.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate704 = createNode("Coordinate");
Coordinate704.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet703.coord = Coordinate704;

//from vl2 to vl1 vertices 2
ColorRGBA ColorRGBA705 = createNode("ColorRGBA");
ColorRGBA705.USE = "HAnimSegmentLineColorRGBA";
LineSet703.color = ColorRGBA705;

Shape702.geometry = LineSet703;

HAnimSegment698.children[1] = Shape702;

HAnimJoint697.children = new MFNode();

HAnimJoint697.children[0] = HAnimSegment698;

HAnimJoint HAnimJoint706 = createNode("HAnimJoint");
HAnimJoint706.name = "vl1";
HAnimJoint706.DEF = "hanim_vl1";
HAnimJoint706.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint706.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint706.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment707 = createNode("HAnimSegment");
HAnimSegment707.name = "l1";
HAnimSegment707.DEF = "hanim_l1";
Transform Transform708 = createNode("Transform");
Transform708.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Transform Transform709 = createNode("Transform");
//Empty Transform
Shape Shape710 = createNode("Shape");
Shape710.USE = "HAnimJointShape";
Transform709.children = new MFNode();

Transform709.children[0] = Shape710;

Transform708.children = new MFNode();

Transform708.children[0] = Transform709;

HAnimSegment707.children = new MFNode();

HAnimSegment707.children[0] = Transform708;

Shape Shape711 = createNode("Shape");
LineSet LineSet712 = createNode("LineSet");
LineSet712.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate713 = createNode("Coordinate");
Coordinate713.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet712.coord = Coordinate713;

//from vl1 to vt12 vertices 2
ColorRGBA ColorRGBA714 = createNode("ColorRGBA");
ColorRGBA714.USE = "HAnimSegmentLineColorRGBA";
LineSet712.color = ColorRGBA714;

Shape711.geometry = LineSet712;

HAnimSegment707.children[1] = Shape711;

HAnimJoint706.children = new MFNode();

HAnimJoint706.children[0] = HAnimSegment707;

HAnimJoint HAnimJoint715 = createNode("HAnimJoint");
HAnimJoint715.name = "vt12";
HAnimJoint715.DEF = "hanim_vt12";
HAnimJoint715.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint715.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint715.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment716 = createNode("HAnimSegment");
HAnimSegment716.name = "t12";
HAnimSegment716.DEF = "hanim_t12";
Transform Transform717 = createNode("Transform");
Transform717.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Transform Transform718 = createNode("Transform");
//Empty Transform
Shape Shape719 = createNode("Shape");
Shape719.USE = "HAnimJointShape";
Transform718.children = new MFNode();

Transform718.children[0] = Shape719;

Transform717.children = new MFNode();

Transform717.children[0] = Transform718;

HAnimSegment716.children = new MFNode();

HAnimSegment716.children[0] = Transform717;

Shape Shape720 = createNode("Shape");
LineSet LineSet721 = createNode("LineSet");
LineSet721.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate722 = createNode("Coordinate");
Coordinate722.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet721.coord = Coordinate722;

//from vt12 to vt11 vertices 2
ColorRGBA ColorRGBA723 = createNode("ColorRGBA");
ColorRGBA723.USE = "HAnimSegmentLineColorRGBA";
LineSet721.color = ColorRGBA723;

Shape720.geometry = LineSet721;

HAnimSegment716.children[1] = Shape720;

HAnimJoint715.children = new MFNode();

HAnimJoint715.children[0] = HAnimSegment716;

HAnimJoint HAnimJoint724 = createNode("HAnimJoint");
HAnimJoint724.name = "vt11";
HAnimJoint724.DEF = "hanim_vt11";
HAnimJoint724.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint724.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint724.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment725 = createNode("HAnimSegment");
HAnimSegment725.name = "t11";
HAnimSegment725.DEF = "hanim_t11";
Transform Transform726 = createNode("Transform");
Transform726.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Transform Transform727 = createNode("Transform");
//Empty Transform
Shape Shape728 = createNode("Shape");
Shape728.USE = "HAnimJointShape";
Transform727.children = new MFNode();

Transform727.children[0] = Shape728;

Transform726.children = new MFNode();

Transform726.children[0] = Transform727;

HAnimSegment725.children = new MFNode();

HAnimSegment725.children[0] = Transform726;

Shape Shape729 = createNode("Shape");
LineSet LineSet730 = createNode("LineSet");
LineSet730.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate731 = createNode("Coordinate");
Coordinate731.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet730.coord = Coordinate731;

//from vt11 to vt10 vertices 2
ColorRGBA ColorRGBA732 = createNode("ColorRGBA");
ColorRGBA732.USE = "HAnimSegmentLineColorRGBA";
LineSet730.color = ColorRGBA732;

Shape729.geometry = LineSet730;

HAnimSegment725.children[1] = Shape729;

HAnimSite HAnimSite733 = createNode("HAnimSite");
HAnimSite733.name = "substernale_pt";
HAnimSite733.DEF = "hanim_substernale_pt";
HAnimSite733.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor734 = createNode("TouchSensor");
TouchSensor734.description = "HAnimSite substernale_pt";
HAnimSite733.children = new MFNode();

HAnimSite733.children[0] = TouchSensor734;

Shape Shape735 = createNode("Shape");
Shape735.USE = "HAnimSiteShape";
HAnimSite733.children[1] = Shape735;

HAnimSegment725.children[2] = HAnimSite733;

HAnimJoint724.children = new MFNode();

HAnimJoint724.children[0] = HAnimSegment725;

HAnimJoint HAnimJoint736 = createNode("HAnimJoint");
HAnimJoint736.name = "vt10";
HAnimJoint736.DEF = "hanim_vt10";
HAnimJoint736.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint736.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint736.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment737 = createNode("HAnimSegment");
HAnimSegment737.name = "t10";
HAnimSegment737.DEF = "hanim_t10";
Transform Transform738 = createNode("Transform");
Transform738.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Transform Transform739 = createNode("Transform");
//Empty Transform
Shape Shape740 = createNode("Shape");
Shape740.USE = "HAnimJointShape";
Transform739.children = new MFNode();

Transform739.children[0] = Shape740;

Transform738.children = new MFNode();

Transform738.children[0] = Transform739;

HAnimSegment737.children = new MFNode();

HAnimSegment737.children[0] = Transform738;

Shape Shape741 = createNode("Shape");
LineSet LineSet742 = createNode("LineSet");
LineSet742.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate743 = createNode("Coordinate");
Coordinate743.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet742.coord = Coordinate743;

//from vt10 to vt9 vertices 2
ColorRGBA ColorRGBA744 = createNode("ColorRGBA");
ColorRGBA744.USE = "HAnimSegmentLineColorRGBA";
LineSet742.color = ColorRGBA744;

Shape741.geometry = LineSet742;

HAnimSegment737.children[1] = Shape741;

HAnimSite HAnimSite745 = createNode("HAnimSite");
HAnimSite745.name = "l_thelion_pt";
HAnimSite745.DEF = "hanim_l_thelion_pt";
HAnimSite745.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor746 = createNode("TouchSensor");
TouchSensor746.description = "HAnimSite l_thelion_pt";
HAnimSite745.children = new MFNode();

HAnimSite745.children[0] = TouchSensor746;

Shape Shape747 = createNode("Shape");
Shape747.USE = "HAnimSiteShape";
HAnimSite745.children[1] = Shape747;

HAnimSegment737.children[2] = HAnimSite745;

HAnimSite HAnimSite748 = createNode("HAnimSite");
HAnimSite748.name = "r_thelion_pt";
HAnimSite748.DEF = "hanim_r_thelion_pt";
HAnimSite748.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor749 = createNode("TouchSensor");
TouchSensor749.description = "HAnimSite r_thelion_pt";
HAnimSite748.children = new MFNode();

HAnimSite748.children[0] = TouchSensor749;

Shape Shape750 = createNode("Shape");
Shape750.USE = "HAnimSiteShape";
HAnimSite748.children[1] = Shape750;

HAnimSegment737.children[3] = HAnimSite748;

HAnimJoint736.children = new MFNode();

HAnimJoint736.children[0] = HAnimSegment737;

HAnimJoint HAnimJoint751 = createNode("HAnimJoint");
HAnimJoint751.name = "vt9";
HAnimJoint751.DEF = "hanim_vt9";
HAnimJoint751.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint751.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint751.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment752 = createNode("HAnimSegment");
HAnimSegment752.name = "t9";
HAnimSegment752.DEF = "hanim_t9";
Transform Transform753 = createNode("Transform");
Transform753.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Transform Transform754 = createNode("Transform");
//Empty Transform
Shape Shape755 = createNode("Shape");
Shape755.USE = "HAnimJointShape";
Transform754.children = new MFNode();

Transform754.children[0] = Shape755;

Transform753.children = new MFNode();

Transform753.children[0] = Transform754;

HAnimSegment752.children = new MFNode();

HAnimSegment752.children[0] = Transform753;

Shape Shape756 = createNode("Shape");
LineSet LineSet757 = createNode("LineSet");
LineSet757.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate758 = createNode("Coordinate");
Coordinate758.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet757.coord = Coordinate758;

//from vt9 to vt8 vertices 2
ColorRGBA ColorRGBA759 = createNode("ColorRGBA");
ColorRGBA759.USE = "HAnimSegmentLineColorRGBA";
LineSet757.color = ColorRGBA759;

Shape756.geometry = LineSet757;

HAnimSegment752.children[1] = Shape756;

HAnimJoint751.children = new MFNode();

HAnimJoint751.children[0] = HAnimSegment752;

HAnimJoint HAnimJoint760 = createNode("HAnimJoint");
HAnimJoint760.name = "vt8";
HAnimJoint760.DEF = "hanim_vt8";
HAnimJoint760.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint760.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint760.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment761 = createNode("HAnimSegment");
HAnimSegment761.name = "t8";
HAnimSegment761.DEF = "hanim_t8";
Transform Transform762 = createNode("Transform");
Transform762.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Transform Transform763 = createNode("Transform");
//Empty Transform
Shape Shape764 = createNode("Shape");
Shape764.USE = "HAnimJointShape";
Transform763.children = new MFNode();

Transform763.children[0] = Shape764;

Transform762.children = new MFNode();

Transform762.children[0] = Transform763;

HAnimSegment761.children = new MFNode();

HAnimSegment761.children[0] = Transform762;

Shape Shape765 = createNode("Shape");
LineSet LineSet766 = createNode("LineSet");
LineSet766.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate767 = createNode("Coordinate");
Coordinate767.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet766.coord = Coordinate767;

//from vt8 to vt7 vertices 2
ColorRGBA ColorRGBA768 = createNode("ColorRGBA");
ColorRGBA768.USE = "HAnimSegmentLineColorRGBA";
LineSet766.color = ColorRGBA768;

Shape765.geometry = LineSet766;

HAnimSegment761.children[1] = Shape765;

HAnimJoint760.children = new MFNode();

HAnimJoint760.children[0] = HAnimSegment761;

HAnimJoint HAnimJoint769 = createNode("HAnimJoint");
HAnimJoint769.name = "vt7";
HAnimJoint769.DEF = "hanim_vt7";
HAnimJoint769.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint769.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint769.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment770 = createNode("HAnimSegment");
HAnimSegment770.name = "t7";
HAnimSegment770.DEF = "hanim_t7";
Transform Transform771 = createNode("Transform");
Transform771.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Transform Transform772 = createNode("Transform");
//Empty Transform
Shape Shape773 = createNode("Shape");
Shape773.USE = "HAnimJointShape";
Transform772.children = new MFNode();

Transform772.children[0] = Shape773;

Transform771.children = new MFNode();

Transform771.children[0] = Transform772;

HAnimSegment770.children = new MFNode();

HAnimSegment770.children[0] = Transform771;

Shape Shape774 = createNode("Shape");
LineSet LineSet775 = createNode("LineSet");
LineSet775.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate776 = createNode("Coordinate");
Coordinate776.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet775.coord = Coordinate776;

//from vt7 to vt6 vertices 2
ColorRGBA ColorRGBA777 = createNode("ColorRGBA");
ColorRGBA777.USE = "HAnimSegmentLineColorRGBA";
LineSet775.color = ColorRGBA777;

Shape774.geometry = LineSet775;

HAnimSegment770.children[1] = Shape774;

HAnimSite HAnimSite778 = createNode("HAnimSite");
HAnimSite778.name = "l_chest_midsagittal_plane_pt";
HAnimSite778.DEF = "hanim_l_chest_midsagittal_plane_pt";
TouchSensor TouchSensor779 = createNode("TouchSensor");
TouchSensor779.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite778.children = new MFNode();

HAnimSite778.children[0] = TouchSensor779;

Shape Shape780 = createNode("Shape");
Shape780.USE = "HAnimSiteShape";
HAnimSite778.children[1] = Shape780;

HAnimSegment770.children[2] = HAnimSite778;

HAnimSite HAnimSite781 = createNode("HAnimSite");
HAnimSite781.name = "mesosternale_pt";
HAnimSite781.DEF = "hanim_mesosternale_pt";
TouchSensor TouchSensor782 = createNode("TouchSensor");
TouchSensor782.description = "HAnimSite mesosternale_pt";
HAnimSite781.children = new MFNode();

HAnimSite781.children[0] = TouchSensor782;

Shape Shape783 = createNode("Shape");
Shape783.USE = "HAnimSiteShape";
HAnimSite781.children[1] = Shape783;

HAnimSegment770.children[3] = HAnimSite781;

HAnimSite HAnimSite784 = createNode("HAnimSite");
HAnimSite784.name = "r_chest_midsagittal_plane_pt";
HAnimSite784.DEF = "hanim_r_chest_midsagittal_plane_pt";
TouchSensor TouchSensor785 = createNode("TouchSensor");
TouchSensor785.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite784.children = new MFNode();

HAnimSite784.children[0] = TouchSensor785;

Shape Shape786 = createNode("Shape");
Shape786.USE = "HAnimSiteShape";
HAnimSite784.children[1] = Shape786;

HAnimSegment770.children[4] = HAnimSite784;

HAnimSite HAnimSite787 = createNode("HAnimSite");
HAnimSite787.name = "rear_center_midsagittal_plane_pt";
HAnimSite787.DEF = "hanim_rear_center_midsagittal_plane_pt";
TouchSensor TouchSensor788 = createNode("TouchSensor");
TouchSensor788.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite787.children = new MFNode();

HAnimSite787.children[0] = TouchSensor788;

Shape Shape789 = createNode("Shape");
Shape789.USE = "HAnimSiteShape";
HAnimSite787.children[1] = Shape789;

HAnimSegment770.children[5] = HAnimSite787;

HAnimJoint769.children = new MFNode();

HAnimJoint769.children[0] = HAnimSegment770;

HAnimJoint HAnimJoint790 = createNode("HAnimJoint");
HAnimJoint790.name = "vt6";
HAnimJoint790.DEF = "hanim_vt6";
HAnimJoint790.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint790.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint790.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment791 = createNode("HAnimSegment");
HAnimSegment791.name = "t6";
HAnimSegment791.DEF = "hanim_t6";
Transform Transform792 = createNode("Transform");
Transform792.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Transform Transform793 = createNode("Transform");
//Empty Transform
Shape Shape794 = createNode("Shape");
Shape794.USE = "HAnimJointShape";
Transform793.children = new MFNode();

Transform793.children[0] = Shape794;

Transform792.children = new MFNode();

Transform792.children[0] = Transform793;

HAnimSegment791.children = new MFNode();

HAnimSegment791.children[0] = Transform792;

Shape Shape795 = createNode("Shape");
LineSet LineSet796 = createNode("LineSet");
LineSet796.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate797 = createNode("Coordinate");
Coordinate797.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet796.coord = Coordinate797;

//from vt6 to vt5 vertices 2
ColorRGBA ColorRGBA798 = createNode("ColorRGBA");
ColorRGBA798.USE = "HAnimSegmentLineColorRGBA";
LineSet796.color = ColorRGBA798;

Shape795.geometry = LineSet796;

HAnimSegment791.children[1] = Shape795;

HAnimSite HAnimSite799 = createNode("HAnimSite");
HAnimSite799.name = "spine_1_middle_back_pt";
HAnimSite799.DEF = "hanim_spine_1_middle_back_pt";
TouchSensor TouchSensor800 = createNode("TouchSensor");
TouchSensor800.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite799.children = new MFNode();

HAnimSite799.children[0] = TouchSensor800;

Shape Shape801 = createNode("Shape");
Shape801.USE = "HAnimSiteShape";
HAnimSite799.children[1] = Shape801;

HAnimSegment791.children[2] = HAnimSite799;

HAnimJoint790.children = new MFNode();

HAnimJoint790.children[0] = HAnimSegment791;

HAnimJoint HAnimJoint802 = createNode("HAnimJoint");
HAnimJoint802.name = "vt5";
HAnimJoint802.DEF = "hanim_vt5";
HAnimJoint802.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint802.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint802.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment803 = createNode("HAnimSegment");
HAnimSegment803.name = "t5";
HAnimSegment803.DEF = "hanim_t5";
Transform Transform804 = createNode("Transform");
Transform804.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Transform Transform805 = createNode("Transform");
//Empty Transform
Shape Shape806 = createNode("Shape");
Shape806.USE = "HAnimJointShape";
Transform805.children = new MFNode();

Transform805.children[0] = Shape806;

Transform804.children = new MFNode();

Transform804.children[0] = Transform805;

HAnimSegment803.children = new MFNode();

HAnimSegment803.children[0] = Transform804;

Shape Shape807 = createNode("Shape");
LineSet LineSet808 = createNode("LineSet");
LineSet808.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate809 = createNode("Coordinate");
Coordinate809.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet808.coord = Coordinate809;

//from vt5 to vt4 vertices 2
ColorRGBA ColorRGBA810 = createNode("ColorRGBA");
ColorRGBA810.USE = "HAnimSegmentLineColorRGBA";
LineSet808.color = ColorRGBA810;

Shape807.geometry = LineSet808;

HAnimSegment803.children[1] = Shape807;

HAnimJoint802.children = new MFNode();

HAnimJoint802.children[0] = HAnimSegment803;

HAnimJoint HAnimJoint811 = createNode("HAnimJoint");
HAnimJoint811.name = "vt4";
HAnimJoint811.DEF = "hanim_vt4";
HAnimJoint811.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint811.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint811.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment812 = createNode("HAnimSegment");
HAnimSegment812.name = "t4";
HAnimSegment812.DEF = "hanim_t4";
Transform Transform813 = createNode("Transform");
Transform813.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Transform Transform814 = createNode("Transform");
//Empty Transform
Shape Shape815 = createNode("Shape");
Shape815.USE = "HAnimJointShape";
Transform814.children = new MFNode();

Transform814.children[0] = Shape815;

Transform813.children = new MFNode();

Transform813.children[0] = Transform814;

HAnimSegment812.children = new MFNode();

HAnimSegment812.children[0] = Transform813;

Shape Shape816 = createNode("Shape");
LineSet LineSet817 = createNode("LineSet");
LineSet817.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate818 = createNode("Coordinate");
Coordinate818.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet817.coord = Coordinate818;

//from vt4 to vt3 vertices 2
ColorRGBA ColorRGBA819 = createNode("ColorRGBA");
ColorRGBA819.USE = "HAnimSegmentLineColorRGBA";
LineSet817.color = ColorRGBA819;

Shape816.geometry = LineSet817;

HAnimSegment812.children[1] = Shape816;

HAnimJoint811.children = new MFNode();

HAnimJoint811.children[0] = HAnimSegment812;

HAnimJoint HAnimJoint820 = createNode("HAnimJoint");
HAnimJoint820.name = "vt3";
HAnimJoint820.DEF = "hanim_vt3";
HAnimJoint820.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint820.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint820.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment821 = createNode("HAnimSegment");
HAnimSegment821.name = "t3";
HAnimSegment821.DEF = "hanim_t3";
Transform Transform822 = createNode("Transform");
Transform822.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Transform Transform823 = createNode("Transform");
//Empty Transform
Shape Shape824 = createNode("Shape");
Shape824.USE = "HAnimJointShape";
Transform823.children = new MFNode();

Transform823.children[0] = Shape824;

Transform822.children = new MFNode();

Transform822.children[0] = Transform823;

HAnimSegment821.children = new MFNode();

HAnimSegment821.children[0] = Transform822;

Shape Shape825 = createNode("Shape");
LineSet LineSet826 = createNode("LineSet");
LineSet826.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate827 = createNode("Coordinate");
Coordinate827.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet826.coord = Coordinate827;

//from vt3 to vt2 vertices 2
ColorRGBA ColorRGBA828 = createNode("ColorRGBA");
ColorRGBA828.USE = "HAnimSegmentLineColorRGBA";
LineSet826.color = ColorRGBA828;

Shape825.geometry = LineSet826;

HAnimSegment821.children[1] = Shape825;

HAnimJoint820.children = new MFNode();

HAnimJoint820.children[0] = HAnimSegment821;

HAnimJoint HAnimJoint829 = createNode("HAnimJoint");
HAnimJoint829.name = "vt2";
HAnimJoint829.DEF = "hanim_vt2";
HAnimJoint829.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint829.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint829.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment830 = createNode("HAnimSegment");
HAnimSegment830.name = "t2";
HAnimSegment830.DEF = "hanim_t2";
Transform Transform831 = createNode("Transform");
Transform831.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Transform Transform832 = createNode("Transform");
//Empty Transform
Shape Shape833 = createNode("Shape");
Shape833.USE = "HAnimJointShape";
Transform832.children = new MFNode();

Transform832.children[0] = Shape833;

Transform831.children = new MFNode();

Transform831.children[0] = Transform832;

HAnimSegment830.children = new MFNode();

HAnimSegment830.children[0] = Transform831;

Shape Shape834 = createNode("Shape");
LineSet LineSet835 = createNode("LineSet");
LineSet835.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate836 = createNode("Coordinate");
Coordinate836.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet835.coord = Coordinate836;

//from vt2 to vt1 vertices 2
ColorRGBA ColorRGBA837 = createNode("ColorRGBA");
ColorRGBA837.USE = "HAnimSegmentLineColorRGBA";
LineSet835.color = ColorRGBA837;

Shape834.geometry = LineSet835;

HAnimSegment830.children[1] = Shape834;

HAnimSite HAnimSite838 = createNode("HAnimSite");
HAnimSite838.name = "cervicale_pt";
HAnimSite838.DEF = "hanim_cervicale_pt";
HAnimSite838.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor839 = createNode("TouchSensor");
TouchSensor839.description = "HAnimSite cervicale_pt";
HAnimSite838.children = new MFNode();

HAnimSite838.children[0] = TouchSensor839;

Shape Shape840 = createNode("Shape");
Shape840.USE = "HAnimSiteShape";
HAnimSite838.children[1] = Shape840;

HAnimSegment830.children[2] = HAnimSite838;

HAnimSite HAnimSite841 = createNode("HAnimSite");
HAnimSite841.name = "suprasternale_pt";
HAnimSite841.DEF = "hanim_suprasternale_pt";
HAnimSite841.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor842 = createNode("TouchSensor");
TouchSensor842.description = "HAnimSite suprasternale_pt";
HAnimSite841.children = new MFNode();

HAnimSite841.children[0] = TouchSensor842;

Shape Shape843 = createNode("Shape");
Shape843.USE = "HAnimSiteShape";
HAnimSite841.children[1] = Shape843;

HAnimSegment830.children[3] = HAnimSite841;

HAnimJoint829.children = new MFNode();

HAnimJoint829.children[0] = HAnimSegment830;

HAnimJoint HAnimJoint844 = createNode("HAnimJoint");
HAnimJoint844.name = "vt1";
HAnimJoint844.DEF = "hanim_vt1";
HAnimJoint844.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint844.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint844.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment845 = createNode("HAnimSegment");
HAnimSegment845.name = "t1";
HAnimSegment845.DEF = "hanim_t1";
Transform Transform846 = createNode("Transform");
Transform846.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Transform Transform847 = createNode("Transform");
//Empty Transform
Shape Shape848 = createNode("Shape");
Shape848.USE = "HAnimJointShape";
Transform847.children = new MFNode();

Transform847.children[0] = Shape848;

Transform846.children = new MFNode();

Transform846.children[0] = Transform847;

HAnimSegment845.children = new MFNode();

HAnimSegment845.children[0] = Transform846;

Shape Shape849 = createNode("Shape");
LineSet LineSet850 = createNode("LineSet");
LineSet850.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate851 = createNode("Coordinate");
Coordinate851.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet850.coord = Coordinate851;

//from vt1 to vc7 vertices 2
ColorRGBA ColorRGBA852 = createNode("ColorRGBA");
ColorRGBA852.USE = "HAnimSegmentLineColorRGBA";
LineSet850.color = ColorRGBA852;

Shape849.geometry = LineSet850;

HAnimSegment845.children[1] = Shape849;

HAnimSite HAnimSite853 = createNode("HAnimSite");
HAnimSite853.name = "l_neck_base_pt";
HAnimSite853.DEF = "hanim_l_neck_base_pt";
HAnimSite853.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor854 = createNode("TouchSensor");
TouchSensor854.description = "HAnimSite l_neck_base_pt";
HAnimSite853.children = new MFNode();

HAnimSite853.children[0] = TouchSensor854;

Shape Shape855 = createNode("Shape");
Shape855.USE = "HAnimSiteShape";
HAnimSite853.children[1] = Shape855;

HAnimSegment845.children[2] = HAnimSite853;

HAnimSite HAnimSite856 = createNode("HAnimSite");
HAnimSite856.name = "r_neck_base_pt";
HAnimSite856.DEF = "hanim_r_neck_base_pt";
HAnimSite856.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor857 = createNode("TouchSensor");
TouchSensor857.description = "HAnimSite r_neck_base_pt";
HAnimSite856.children = new MFNode();

HAnimSite856.children[0] = TouchSensor857;

Shape Shape858 = createNode("Shape");
Shape858.USE = "HAnimSiteShape";
HAnimSite856.children[1] = Shape858;

HAnimSegment845.children[3] = HAnimSite856;

Shape Shape859 = createNode("Shape");
LineSet LineSet860 = createNode("LineSet");
LineSet860.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate861 = createNode("Coordinate");
Coordinate861.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet860.coord = Coordinate861;

//from vt1 to l_sternoclavicular vertices 2
ColorRGBA ColorRGBA862 = createNode("ColorRGBA");
ColorRGBA862.USE = "HAnimSegmentLineColorRGBA";
LineSet860.color = ColorRGBA862;

Shape859.geometry = LineSet860;

HAnimSegment845.children[4] = Shape859;

HAnimSite HAnimSite863 = createNode("HAnimSite");
HAnimSite863.name = "l_acromion_pt";
HAnimSite863.DEF = "hanim_l_acromion_pt";
HAnimSite863.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor864 = createNode("TouchSensor");
TouchSensor864.description = "HAnimSite l_acromion_pt";
HAnimSite863.children = new MFNode();

HAnimSite863.children[0] = TouchSensor864;

Shape Shape865 = createNode("Shape");
Shape865.USE = "HAnimSiteShape";
HAnimSite863.children[1] = Shape865;

HAnimSegment845.children[5] = HAnimSite863;

HAnimSite HAnimSite866 = createNode("HAnimSite");
HAnimSite866.name = "l_axilla_distal_pt";
HAnimSite866.DEF = "hanim_l_axilla_distal_pt";
HAnimSite866.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor867 = createNode("TouchSensor");
TouchSensor867.description = "HAnimSite l_axilla_distal_pt";
HAnimSite866.children = new MFNode();

HAnimSite866.children[0] = TouchSensor867;

Shape Shape868 = createNode("Shape");
Shape868.USE = "HAnimSiteShape";
HAnimSite866.children[1] = Shape868;

HAnimSegment845.children[6] = HAnimSite866;

HAnimSite HAnimSite869 = createNode("HAnimSite");
HAnimSite869.name = "l_axilla_posterior_folds_pt";
HAnimSite869.DEF = "hanim_l_axilla_posterior_folds_pt";
TouchSensor TouchSensor870 = createNode("TouchSensor");
TouchSensor870.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite869.children = new MFNode();

HAnimSite869.children[0] = TouchSensor870;

Shape Shape871 = createNode("Shape");
Shape871.USE = "HAnimSiteShape";
HAnimSite869.children[1] = Shape871;

HAnimSegment845.children[7] = HAnimSite869;

HAnimSite HAnimSite872 = createNode("HAnimSite");
HAnimSite872.name = "l_axilla_proximal_pt";
HAnimSite872.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite872.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor873 = createNode("TouchSensor");
TouchSensor873.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite872.children = new MFNode();

HAnimSite872.children[0] = TouchSensor873;

Shape Shape874 = createNode("Shape");
Shape874.USE = "HAnimSiteShape";
HAnimSite872.children[1] = Shape874;

HAnimSegment845.children[8] = HAnimSite872;

HAnimSite HAnimSite875 = createNode("HAnimSite");
HAnimSite875.name = "l_clavicale_pt";
HAnimSite875.DEF = "hanim_l_clavicale_pt";
HAnimSite875.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor876 = createNode("TouchSensor");
TouchSensor876.description = "HAnimSite l_clavicale_pt";
HAnimSite875.children = new MFNode();

HAnimSite875.children[0] = TouchSensor876;

Shape Shape877 = createNode("Shape");
Shape877.USE = "HAnimSiteShape";
HAnimSite875.children[1] = Shape877;

HAnimSegment845.children[9] = HAnimSite875;

Shape Shape878 = createNode("Shape");
LineSet LineSet879 = createNode("LineSet");
LineSet879.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate880 = createNode("Coordinate");
Coordinate880.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet879.coord = Coordinate880;

//from vt1 to r_sternoclavicular vertices 2
ColorRGBA ColorRGBA881 = createNode("ColorRGBA");
ColorRGBA881.USE = "HAnimSegmentLineColorRGBA";
LineSet879.color = ColorRGBA881;

Shape878.geometry = LineSet879;

HAnimSegment845.children[10] = Shape878;

HAnimSite HAnimSite882 = createNode("HAnimSite");
HAnimSite882.name = "r_acromion_pt";
HAnimSite882.DEF = "hanim_r_acromion_pt";
HAnimSite882.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor883 = createNode("TouchSensor");
TouchSensor883.description = "HAnimSite r_acromion_pt";
HAnimSite882.children = new MFNode();

HAnimSite882.children[0] = TouchSensor883;

Shape Shape884 = createNode("Shape");
Shape884.USE = "HAnimSiteShape";
HAnimSite882.children[1] = Shape884;

HAnimSegment845.children[11] = HAnimSite882;

HAnimSite HAnimSite885 = createNode("HAnimSite");
HAnimSite885.name = "r_axilla_distal_pt";
HAnimSite885.DEF = "hanim_r_axilla_distal_pt";
HAnimSite885.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor886 = createNode("TouchSensor");
TouchSensor886.description = "HAnimSite r_axilla_distal_pt";
HAnimSite885.children = new MFNode();

HAnimSite885.children[0] = TouchSensor886;

Shape Shape887 = createNode("Shape");
Shape887.USE = "HAnimSiteShape";
HAnimSite885.children[1] = Shape887;

HAnimSegment845.children[12] = HAnimSite885;

HAnimSite HAnimSite888 = createNode("HAnimSite");
HAnimSite888.name = "r_axilla_posterior_folds_pt";
HAnimSite888.DEF = "hanim_r_axilla_posterior_folds_pt";
TouchSensor TouchSensor889 = createNode("TouchSensor");
TouchSensor889.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite888.children = new MFNode();

HAnimSite888.children[0] = TouchSensor889;

Shape Shape890 = createNode("Shape");
Shape890.USE = "HAnimSiteShape";
HAnimSite888.children[1] = Shape890;

HAnimSegment845.children[13] = HAnimSite888;

HAnimSite HAnimSite891 = createNode("HAnimSite");
HAnimSite891.name = "r_axilla_proximal_pt";
HAnimSite891.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite891.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor892 = createNode("TouchSensor");
TouchSensor892.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite891.children = new MFNode();

HAnimSite891.children[0] = TouchSensor892;

Shape Shape893 = createNode("Shape");
Shape893.USE = "HAnimSiteShape";
HAnimSite891.children[1] = Shape893;

HAnimSegment845.children[14] = HAnimSite891;

HAnimSite HAnimSite894 = createNode("HAnimSite");
HAnimSite894.name = "r_clavicale_pt";
HAnimSite894.DEF = "hanim_r_clavicale_pt";
HAnimSite894.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor895 = createNode("TouchSensor");
TouchSensor895.description = "HAnimSite r_clavicale_pt";
HAnimSite894.children = new MFNode();

HAnimSite894.children[0] = TouchSensor895;

Shape Shape896 = createNode("Shape");
Shape896.USE = "HAnimSiteShape";
HAnimSite894.children[1] = Shape896;

HAnimSegment845.children[15] = HAnimSite894;

HAnimJoint844.children = new MFNode();

HAnimJoint844.children[0] = HAnimSegment845;

HAnimJoint HAnimJoint897 = createNode("HAnimJoint");
HAnimJoint897.name = "vc7";
HAnimJoint897.DEF = "hanim_vc7";
HAnimJoint897.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint897.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint897.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment898 = createNode("HAnimSegment");
HAnimSegment898.name = "c7";
HAnimSegment898.DEF = "hanim_c7";
Transform Transform899 = createNode("Transform");
Transform899.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Transform Transform900 = createNode("Transform");
//Empty Transform
Shape Shape901 = createNode("Shape");
Shape901.USE = "HAnimJointShape";
Transform900.children = new MFNode();

Transform900.children[0] = Shape901;

Transform899.children = new MFNode();

Transform899.children[0] = Transform900;

HAnimSegment898.children = new MFNode();

HAnimSegment898.children[0] = Transform899;

Shape Shape902 = createNode("Shape");
LineSet LineSet903 = createNode("LineSet");
LineSet903.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate904 = createNode("Coordinate");
Coordinate904.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet903.coord = Coordinate904;

//from vc7 to vc6 vertices 2
ColorRGBA ColorRGBA905 = createNode("ColorRGBA");
ColorRGBA905.USE = "HAnimSegmentLineColorRGBA";
LineSet903.color = ColorRGBA905;

Shape902.geometry = LineSet903;

HAnimSegment898.children[1] = Shape902;

HAnimJoint897.children = new MFNode();

HAnimJoint897.children[0] = HAnimSegment898;

HAnimJoint HAnimJoint906 = createNode("HAnimJoint");
HAnimJoint906.name = "vc6";
HAnimJoint906.DEF = "hanim_vc6";
HAnimJoint906.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint906.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint906.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment907 = createNode("HAnimSegment");
HAnimSegment907.name = "c6";
HAnimSegment907.DEF = "hanim_c6";
Transform Transform908 = createNode("Transform");
Transform908.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Transform Transform909 = createNode("Transform");
//Empty Transform
Shape Shape910 = createNode("Shape");
Shape910.USE = "HAnimJointShape";
Transform909.children = new MFNode();

Transform909.children[0] = Shape910;

Transform908.children = new MFNode();

Transform908.children[0] = Transform909;

HAnimSegment907.children = new MFNode();

HAnimSegment907.children[0] = Transform908;

Shape Shape911 = createNode("Shape");
LineSet LineSet912 = createNode("LineSet");
LineSet912.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate913 = createNode("Coordinate");
Coordinate913.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet912.coord = Coordinate913;

//from vc6 to vc5 vertices 2
ColorRGBA ColorRGBA914 = createNode("ColorRGBA");
ColorRGBA914.USE = "HAnimSegmentLineColorRGBA";
LineSet912.color = ColorRGBA914;

Shape911.geometry = LineSet912;

HAnimSegment907.children[1] = Shape911;

HAnimJoint906.children = new MFNode();

HAnimJoint906.children[0] = HAnimSegment907;

HAnimJoint HAnimJoint915 = createNode("HAnimJoint");
HAnimJoint915.name = "vc5";
HAnimJoint915.DEF = "hanim_vc5";
HAnimJoint915.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint915.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint915.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment916 = createNode("HAnimSegment");
HAnimSegment916.name = "c5";
HAnimSegment916.DEF = "hanim_c5";
Transform Transform917 = createNode("Transform");
Transform917.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Transform Transform918 = createNode("Transform");
//Empty Transform
Shape Shape919 = createNode("Shape");
Shape919.USE = "HAnimJointShape";
Transform918.children = new MFNode();

Transform918.children[0] = Shape919;

Transform917.children = new MFNode();

Transform917.children[0] = Transform918;

HAnimSegment916.children = new MFNode();

HAnimSegment916.children[0] = Transform917;

Shape Shape920 = createNode("Shape");
LineSet LineSet921 = createNode("LineSet");
LineSet921.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate922 = createNode("Coordinate");
Coordinate922.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet921.coord = Coordinate922;

//from vc5 to vc4 vertices 2
ColorRGBA ColorRGBA923 = createNode("ColorRGBA");
ColorRGBA923.USE = "HAnimSegmentLineColorRGBA";
LineSet921.color = ColorRGBA923;

Shape920.geometry = LineSet921;

HAnimSegment916.children[1] = Shape920;

HAnimJoint915.children = new MFNode();

HAnimJoint915.children[0] = HAnimSegment916;

HAnimJoint HAnimJoint924 = createNode("HAnimJoint");
HAnimJoint924.name = "vc4";
HAnimJoint924.DEF = "hanim_vc4";
HAnimJoint924.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint924.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint924.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment925 = createNode("HAnimSegment");
HAnimSegment925.name = "c4";
HAnimSegment925.DEF = "hanim_c4";
Transform Transform926 = createNode("Transform");
Transform926.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Transform Transform927 = createNode("Transform");
//Empty Transform
Shape Shape928 = createNode("Shape");
Shape928.USE = "HAnimJointShape";
Transform927.children = new MFNode();

Transform927.children[0] = Shape928;

Transform926.children = new MFNode();

Transform926.children[0] = Transform927;

HAnimSegment925.children = new MFNode();

HAnimSegment925.children[0] = Transform926;

Shape Shape929 = createNode("Shape");
LineSet LineSet930 = createNode("LineSet");
LineSet930.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate931 = createNode("Coordinate");
Coordinate931.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet930.coord = Coordinate931;

//from vc4 to vc3 vertices 2
ColorRGBA ColorRGBA932 = createNode("ColorRGBA");
ColorRGBA932.USE = "HAnimSegmentLineColorRGBA";
LineSet930.color = ColorRGBA932;

Shape929.geometry = LineSet930;

HAnimSegment925.children[1] = Shape929;

HAnimJoint924.children = new MFNode();

HAnimJoint924.children[0] = HAnimSegment925;

HAnimJoint HAnimJoint933 = createNode("HAnimJoint");
HAnimJoint933.name = "vc3";
HAnimJoint933.DEF = "hanim_vc3";
HAnimJoint933.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint933.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint933.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment934 = createNode("HAnimSegment");
HAnimSegment934.name = "c3";
HAnimSegment934.DEF = "hanim_c3";
Transform Transform935 = createNode("Transform");
Transform935.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Transform Transform936 = createNode("Transform");
//Empty Transform
Shape Shape937 = createNode("Shape");
Shape937.USE = "HAnimJointShape";
Transform936.children = new MFNode();

Transform936.children[0] = Shape937;

Transform935.children = new MFNode();

Transform935.children[0] = Transform936;

HAnimSegment934.children = new MFNode();

HAnimSegment934.children[0] = Transform935;

Shape Shape938 = createNode("Shape");
LineSet LineSet939 = createNode("LineSet");
LineSet939.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate940 = createNode("Coordinate");
Coordinate940.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet939.coord = Coordinate940;

//from vc3 to vc2 vertices 2
ColorRGBA ColorRGBA941 = createNode("ColorRGBA");
ColorRGBA941.USE = "HAnimSegmentLineColorRGBA";
LineSet939.color = ColorRGBA941;

Shape938.geometry = LineSet939;

HAnimSegment934.children[1] = Shape938;

HAnimSite HAnimSite942 = createNode("HAnimSite");
HAnimSite942.name = "adams_apple_pt";
HAnimSite942.DEF = "hanim_adams_apple_pt";
TouchSensor TouchSensor943 = createNode("TouchSensor");
TouchSensor943.description = "HAnimSite adams_apple_pt";
HAnimSite942.children = new MFNode();

HAnimSite942.children[0] = TouchSensor943;

Shape Shape944 = createNode("Shape");
Shape944.USE = "HAnimSiteShape";
HAnimSite942.children[1] = Shape944;

HAnimSegment934.children[2] = HAnimSite942;

HAnimJoint933.children = new MFNode();

HAnimJoint933.children[0] = HAnimSegment934;

HAnimJoint HAnimJoint945 = createNode("HAnimJoint");
HAnimJoint945.name = "vc2";
HAnimJoint945.DEF = "hanim_vc2";
HAnimJoint945.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint945.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint945.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment946 = createNode("HAnimSegment");
HAnimSegment946.name = "c2";
HAnimSegment946.DEF = "hanim_c2";
Transform Transform947 = createNode("Transform");
Transform947.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Transform Transform948 = createNode("Transform");
//Empty Transform
Shape Shape949 = createNode("Shape");
Shape949.USE = "HAnimJointShape";
Transform948.children = new MFNode();

Transform948.children[0] = Shape949;

Transform947.children = new MFNode();

Transform947.children[0] = Transform948;

HAnimSegment946.children = new MFNode();

HAnimSegment946.children[0] = Transform947;

Shape Shape950 = createNode("Shape");
LineSet LineSet951 = createNode("LineSet");
LineSet951.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate952 = createNode("Coordinate");
Coordinate952.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet951.coord = Coordinate952;

//from vc2 to vc1 vertices 2
ColorRGBA ColorRGBA953 = createNode("ColorRGBA");
ColorRGBA953.USE = "HAnimSegmentLineColorRGBA";
LineSet951.color = ColorRGBA953;

Shape950.geometry = LineSet951;

HAnimSegment946.children[1] = Shape950;

HAnimJoint945.children = new MFNode();

HAnimJoint945.children[0] = HAnimSegment946;

HAnimJoint HAnimJoint954 = createNode("HAnimJoint");
HAnimJoint954.name = "vc1";
HAnimJoint954.DEF = "hanim_vc1";
HAnimJoint954.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint954.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint954.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment955 = createNode("HAnimSegment");
HAnimSegment955.name = "c1";
HAnimSegment955.DEF = "hanim_c1";
Transform Transform956 = createNode("Transform");
Transform956.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Transform Transform957 = createNode("Transform");
//Empty Transform
Shape Shape958 = createNode("Shape");
Shape958.USE = "HAnimJointShape";
Transform957.children = new MFNode();

Transform957.children[0] = Shape958;

Transform956.children = new MFNode();

Transform956.children[0] = Transform957;

HAnimSegment955.children = new MFNode();

HAnimSegment955.children[0] = Transform956;

Shape Shape959 = createNode("Shape");
LineSet LineSet960 = createNode("LineSet");
LineSet960.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate961 = createNode("Coordinate");
Coordinate961.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet960.coord = Coordinate961;

//from vc1 to skullbase vertices 2
ColorRGBA ColorRGBA962 = createNode("ColorRGBA");
ColorRGBA962.USE = "HAnimSegmentLineColorRGBA";
LineSet960.color = ColorRGBA962;

Shape959.geometry = LineSet960;

HAnimSegment955.children[1] = Shape959;

HAnimSite HAnimSite963 = createNode("HAnimSite");
HAnimSite963.name = "glabella_pt";
HAnimSite963.DEF = "hanim_glabella_pt";
TouchSensor TouchSensor964 = createNode("TouchSensor");
TouchSensor964.description = "HAnimSite glabella_pt";
HAnimSite963.children = new MFNode();

HAnimSite963.children[0] = TouchSensor964;

Shape Shape965 = createNode("Shape");
Shape965.USE = "HAnimSiteShape";
HAnimSite963.children[1] = Shape965;

HAnimSegment955.children[2] = HAnimSite963;

HAnimSite HAnimSite966 = createNode("HAnimSite");
HAnimSite966.name = "l_ectocanthus_pt";
HAnimSite966.DEF = "hanim_l_ectocanthus_pt";
TouchSensor TouchSensor967 = createNode("TouchSensor");
TouchSensor967.description = "HAnimSite l_ectocanthus_pt";
HAnimSite966.children = new MFNode();

HAnimSite966.children[0] = TouchSensor967;

Shape Shape968 = createNode("Shape");
Shape968.USE = "HAnimSiteShape";
HAnimSite966.children[1] = Shape968;

HAnimSegment955.children[3] = HAnimSite966;

HAnimSite HAnimSite969 = createNode("HAnimSite");
HAnimSite969.name = "l_infraorbitale_pt";
HAnimSite969.DEF = "hanim_l_infraorbitale_pt";
HAnimSite969.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor970 = createNode("TouchSensor");
TouchSensor970.description = "HAnimSite l_infraorbitale_pt";
HAnimSite969.children = new MFNode();

HAnimSite969.children[0] = TouchSensor970;

Shape Shape971 = createNode("Shape");
Shape971.USE = "HAnimSiteShape";
HAnimSite969.children[1] = Shape971;

HAnimSegment955.children[4] = HAnimSite969;

HAnimSite HAnimSite972 = createNode("HAnimSite");
HAnimSite972.name = "l_tragion_pt";
HAnimSite972.DEF = "hanim_l_tragion_pt";
HAnimSite972.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor973 = createNode("TouchSensor");
TouchSensor973.description = "HAnimSite l_tragion_pt";
HAnimSite972.children = new MFNode();

HAnimSite972.children[0] = TouchSensor973;

Shape Shape974 = createNode("Shape");
Shape974.USE = "HAnimSiteShape";
HAnimSite972.children[1] = Shape974;

HAnimSegment955.children[5] = HAnimSite972;

HAnimSite HAnimSite975 = createNode("HAnimSite");
HAnimSite975.name = "nuchale_pt";
HAnimSite975.DEF = "hanim_nuchale_pt";
HAnimSite975.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor976 = createNode("TouchSensor");
TouchSensor976.description = "HAnimSite nuchale_pt";
HAnimSite975.children = new MFNode();

HAnimSite975.children[0] = TouchSensor976;

Shape Shape977 = createNode("Shape");
Shape977.USE = "HAnimSiteShape";
HAnimSite975.children[1] = Shape977;

HAnimSegment955.children[6] = HAnimSite975;

HAnimSite HAnimSite978 = createNode("HAnimSite");
HAnimSite978.name = "opisthocranion_pt";
HAnimSite978.DEF = "hanim_opisthocranion_pt";
TouchSensor TouchSensor979 = createNode("TouchSensor");
TouchSensor979.description = "HAnimSite opisthocranion_pt";
HAnimSite978.children = new MFNode();

HAnimSite978.children[0] = TouchSensor979;

Shape Shape980 = createNode("Shape");
Shape980.USE = "HAnimSiteShape";
HAnimSite978.children[1] = Shape980;

HAnimSegment955.children[7] = HAnimSite978;

HAnimSite HAnimSite981 = createNode("HAnimSite");
HAnimSite981.name = "r_ectocanthus_pt";
HAnimSite981.DEF = "hanim_r_ectocanthus_pt";
TouchSensor TouchSensor982 = createNode("TouchSensor");
TouchSensor982.description = "HAnimSite r_ectocanthus_pt";
HAnimSite981.children = new MFNode();

HAnimSite981.children[0] = TouchSensor982;

Shape Shape983 = createNode("Shape");
Shape983.USE = "HAnimSiteShape";
HAnimSite981.children[1] = Shape983;

HAnimSegment955.children[8] = HAnimSite981;

HAnimSite HAnimSite984 = createNode("HAnimSite");
HAnimSite984.name = "r_infraorbitale_pt";
HAnimSite984.DEF = "hanim_r_infraorbitale_pt";
HAnimSite984.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor985 = createNode("TouchSensor");
TouchSensor985.description = "HAnimSite r_infraorbitale_pt";
HAnimSite984.children = new MFNode();

HAnimSite984.children[0] = TouchSensor985;

Shape Shape986 = createNode("Shape");
Shape986.USE = "HAnimSiteShape";
HAnimSite984.children[1] = Shape986;

HAnimSegment955.children[9] = HAnimSite984;

HAnimSite HAnimSite987 = createNode("HAnimSite");
HAnimSite987.name = "r_tragion_pt";
HAnimSite987.DEF = "hanim_r_tragion_pt";
HAnimSite987.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor988 = createNode("TouchSensor");
TouchSensor988.description = "HAnimSite r_tragion_pt";
HAnimSite987.children = new MFNode();

HAnimSite987.children[0] = TouchSensor988;

Shape Shape989 = createNode("Shape");
Shape989.USE = "HAnimSiteShape";
HAnimSite987.children[1] = Shape989;

HAnimSegment955.children[10] = HAnimSite987;

HAnimSite HAnimSite990 = createNode("HAnimSite");
HAnimSite990.name = "sellion_pt";
HAnimSite990.DEF = "hanim_sellion_pt";
HAnimSite990.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor991 = createNode("TouchSensor");
TouchSensor991.description = "HAnimSite sellion_pt";
HAnimSite990.children = new MFNode();

HAnimSite990.children[0] = TouchSensor991;

Shape Shape992 = createNode("Shape");
Shape992.USE = "HAnimSiteShape";
HAnimSite990.children[1] = Shape992;

HAnimSegment955.children[11] = HAnimSite990;

HAnimSite HAnimSite993 = createNode("HAnimSite");
HAnimSite993.name = "skull_vertex_pt";
HAnimSite993.DEF = "hanim_skull_vertex_pt";
HAnimSite993.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor994 = createNode("TouchSensor");
TouchSensor994.description = "HAnimSite skull_vertex_pt";
HAnimSite993.children = new MFNode();

HAnimSite993.children[0] = TouchSensor994;

Shape Shape995 = createNode("Shape");
Shape995.USE = "HAnimSiteShape";
HAnimSite993.children[1] = Shape995;

HAnimSegment955.children[12] = HAnimSite993;

HAnimJoint954.children = new MFNode();

HAnimJoint954.children[0] = HAnimSegment955;

HAnimJoint HAnimJoint996 = createNode("HAnimJoint");
HAnimJoint996.name = "skullbase";
HAnimJoint996.DEF = "hanim_skullbase";
HAnimJoint996.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint996.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment997 = createNode("HAnimSegment");
HAnimSegment997.name = "skull";
HAnimSegment997.DEF = "hanim_skull";
Transform Transform998 = createNode("Transform");
Transform998.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Transform Transform999 = createNode("Transform");
//Empty Transform
Shape Shape1000 = createNode("Shape");
Shape1000.USE = "HAnimJointShape";
Transform999.children = new MFNode();

Transform999.children[0] = Shape1000;

Transform998.children = new MFNode();

Transform998.children[0] = Transform999;

HAnimSegment997.children = new MFNode();

HAnimSegment997.children[0] = Transform998;

Shape Shape1001 = createNode("Shape");
LineSet LineSet1002 = createNode("LineSet");
LineSet1002.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1003 = createNode("Coordinate");
Coordinate1003.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1002.coord = Coordinate1003;

//from skullbase to l_eyelid_joint vertices 2
ColorRGBA ColorRGBA1004 = createNode("ColorRGBA");
ColorRGBA1004.USE = "HAnimSegmentLineColorRGBA";
LineSet1002.color = ColorRGBA1004;

Shape1001.geometry = LineSet1002;

HAnimSegment997.children[1] = Shape1001;

Shape Shape1005 = createNode("Shape");
LineSet LineSet1006 = createNode("LineSet");
LineSet1006.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1007 = createNode("Coordinate");
Coordinate1007.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1006.coord = Coordinate1007;

//from skullbase to r_eyelid_joint vertices 2
ColorRGBA ColorRGBA1008 = createNode("ColorRGBA");
ColorRGBA1008.USE = "HAnimSegmentLineColorRGBA";
LineSet1006.color = ColorRGBA1008;

Shape1005.geometry = LineSet1006;

HAnimSegment997.children[2] = Shape1005;

Shape Shape1009 = createNode("Shape");
LineSet LineSet1010 = createNode("LineSet");
LineSet1010.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1011 = createNode("Coordinate");
Coordinate1011.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1010.coord = Coordinate1011;

//from skullbase to l_eyeball_joint vertices 2
ColorRGBA ColorRGBA1012 = createNode("ColorRGBA");
ColorRGBA1012.USE = "HAnimSegmentLineColorRGBA";
LineSet1010.color = ColorRGBA1012;

Shape1009.geometry = LineSet1010;

HAnimSegment997.children[3] = Shape1009;

Shape Shape1013 = createNode("Shape");
LineSet LineSet1014 = createNode("LineSet");
LineSet1014.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1015 = createNode("Coordinate");
Coordinate1015.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1014.coord = Coordinate1015;

//from skullbase to r_eyeball_joint vertices 2
ColorRGBA ColorRGBA1016 = createNode("ColorRGBA");
ColorRGBA1016.USE = "HAnimSegmentLineColorRGBA";
LineSet1014.color = ColorRGBA1016;

Shape1013.geometry = LineSet1014;

HAnimSegment997.children[4] = Shape1013;

Shape Shape1017 = createNode("Shape");
LineSet LineSet1018 = createNode("LineSet");
LineSet1018.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1019 = createNode("Coordinate");
Coordinate1019.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1018.coord = Coordinate1019;

//from skullbase to l_eyebrow_joint vertices 2
ColorRGBA ColorRGBA1020 = createNode("ColorRGBA");
ColorRGBA1020.USE = "HAnimSegmentLineColorRGBA";
LineSet1018.color = ColorRGBA1020;

Shape1017.geometry = LineSet1018;

HAnimSegment997.children[5] = Shape1017;

Shape Shape1021 = createNode("Shape");
LineSet LineSet1022 = createNode("LineSet");
LineSet1022.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1023 = createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1022.coord = Coordinate1023;

//from skullbase to r_eyebrow_joint vertices 2
ColorRGBA ColorRGBA1024 = createNode("ColorRGBA");
ColorRGBA1024.USE = "HAnimSegmentLineColorRGBA";
LineSet1022.color = ColorRGBA1024;

Shape1021.geometry = LineSet1022;

HAnimSegment997.children[6] = Shape1021;

Shape Shape1025 = createNode("Shape");
LineSet LineSet1026 = createNode("LineSet");
LineSet1026.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1027 = createNode("Coordinate");
Coordinate1027.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0044,1.6209,0.0236]);
LineSet1026.coord = Coordinate1027;

//from skullbase to temporomandibular vertices 2
ColorRGBA ColorRGBA1028 = createNode("ColorRGBA");
ColorRGBA1028.USE = "HAnimSegmentLineColorRGBA";
LineSet1026.color = ColorRGBA1028;

Shape1025.geometry = LineSet1026;

HAnimSegment997.children[7] = Shape1025;

HAnimSite HAnimSite1029 = createNode("HAnimSite");
HAnimSite1029.name = "l_gonion_pt";
HAnimSite1029.DEF = "hanim_l_gonion_pt";
HAnimSite1029.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
TouchSensor TouchSensor1030 = createNode("TouchSensor");
TouchSensor1030.description = "HAnimSite l_gonion_pt";
HAnimSite1029.children = new MFNode();

HAnimSite1029.children[0] = TouchSensor1030;

Shape Shape1031 = createNode("Shape");
Shape1031.USE = "HAnimSiteShape";
HAnimSite1029.children[1] = Shape1031;

HAnimSegment997.children[8] = HAnimSite1029;

HAnimSite HAnimSite1032 = createNode("HAnimSite");
HAnimSite1032.name = "menton_pt";
HAnimSite1032.DEF = "hanim_menton_pt";
TouchSensor TouchSensor1033 = createNode("TouchSensor");
TouchSensor1033.description = "HAnimSite menton_pt";
HAnimSite1032.children = new MFNode();

HAnimSite1032.children[0] = TouchSensor1033;

Shape Shape1034 = createNode("Shape");
Shape1034.USE = "HAnimSiteShape";
HAnimSite1032.children[1] = Shape1034;

HAnimSegment997.children[9] = HAnimSite1032;

HAnimSite HAnimSite1035 = createNode("HAnimSite");
HAnimSite1035.name = "r_gonion_pt";
HAnimSite1035.DEF = "hanim_r_gonion_pt";
HAnimSite1035.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
TouchSensor TouchSensor1036 = createNode("TouchSensor");
TouchSensor1036.description = "HAnimSite r_gonion_pt";
HAnimSite1035.children = new MFNode();

HAnimSite1035.children[0] = TouchSensor1036;

Shape Shape1037 = createNode("Shape");
Shape1037.USE = "HAnimSiteShape";
HAnimSite1035.children[1] = Shape1037;

HAnimSegment997.children[10] = HAnimSite1035;

HAnimSite HAnimSite1038 = createNode("HAnimSite");
HAnimSite1038.name = "supramenton_pt";
HAnimSite1038.DEF = "hanim_supramenton_pt";
HAnimSite1038.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
TouchSensor TouchSensor1039 = createNode("TouchSensor");
TouchSensor1039.description = "HAnimSite supramenton_pt";
HAnimSite1038.children = new MFNode();

HAnimSite1038.children[0] = TouchSensor1039;

Shape Shape1040 = createNode("Shape");
Shape1040.USE = "HAnimSiteShape";
HAnimSite1038.children[1] = Shape1040;

HAnimSegment997.children[11] = HAnimSite1038;

HAnimJoint996.children = new MFNode();

HAnimJoint996.children[0] = HAnimSegment997;

HAnimJoint HAnimJoint1041 = createNode("HAnimJoint");
HAnimJoint1041.name = "l_eyelid_joint";
HAnimJoint1041.DEF = "hanim_l_eyelid_joint";
HAnimJoint1041.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1041.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.children[1] = HAnimJoint1041;

HAnimJoint HAnimJoint1042 = createNode("HAnimJoint");
HAnimJoint1042.name = "r_eyelid_joint";
HAnimJoint1042.DEF = "hanim_r_eyelid_joint";
HAnimJoint1042.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1042.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.children[2] = HAnimJoint1042;

HAnimJoint HAnimJoint1043 = createNode("HAnimJoint");
HAnimJoint1043.name = "l_eyeball_joint";
HAnimJoint1043.DEF = "hanim_l_eyeball_joint";
HAnimJoint1043.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1043.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.children[3] = HAnimJoint1043;

HAnimJoint HAnimJoint1044 = createNode("HAnimJoint");
HAnimJoint1044.name = "r_eyeball_joint";
HAnimJoint1044.DEF = "hanim_r_eyeball_joint";
HAnimJoint1044.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1044.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.children[4] = HAnimJoint1044;

HAnimJoint HAnimJoint1045 = createNode("HAnimJoint");
HAnimJoint1045.name = "l_eyebrow_joint";
HAnimJoint1045.DEF = "hanim_l_eyebrow_joint";
HAnimJoint1045.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1045.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.children[5] = HAnimJoint1045;

HAnimJoint HAnimJoint1046 = createNode("HAnimJoint");
HAnimJoint1046.name = "r_eyebrow_joint";
HAnimJoint1046.DEF = "hanim_r_eyebrow_joint";
HAnimJoint1046.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1046.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.children[6] = HAnimJoint1046;

HAnimJoint HAnimJoint1047 = createNode("HAnimJoint");
HAnimJoint1047.name = "temporomandibular";
HAnimJoint1047.DEF = "hanim_temporomandibular";
HAnimJoint1047.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1047.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.children[7] = HAnimJoint1047;

HAnimJoint954.children[1] = HAnimJoint996;

HAnimJoint945.children[1] = HAnimJoint954;

HAnimJoint933.children[1] = HAnimJoint945;

HAnimJoint924.children[1] = HAnimJoint933;

HAnimJoint915.children[1] = HAnimJoint924;

HAnimJoint906.children[1] = HAnimJoint915;

HAnimJoint897.children[1] = HAnimJoint906;

HAnimJoint844.children[1] = HAnimJoint897;

HAnimJoint HAnimJoint1048 = createNode("HAnimJoint");
HAnimJoint1048.name = "l_sternoclavicular";
HAnimJoint1048.DEF = "hanim_l_sternoclavicular";
HAnimJoint1048.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint1048.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1048.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1049 = createNode("HAnimSegment");
HAnimSegment1049.name = "l_clavicle";
HAnimSegment1049.DEF = "hanim_l_clavicle";
Transform Transform1050 = createNode("Transform");
Transform1050.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Transform Transform1051 = createNode("Transform");
//Empty Transform
Shape Shape1052 = createNode("Shape");
Shape1052.USE = "HAnimJointShape";
Transform1051.children = new MFNode();

Transform1051.children[0] = Shape1052;

Transform1050.children = new MFNode();

Transform1050.children[0] = Transform1051;

HAnimSegment1049.children = new MFNode();

HAnimSegment1049.children[0] = Transform1050;

Shape Shape1053 = createNode("Shape");
LineSet LineSet1054 = createNode("LineSet");
LineSet1054.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1055 = createNode("Coordinate");
Coordinate1055.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet1054.coord = Coordinate1055;

//from l_sternoclavicular to l_acromioclavicular vertices 2
ColorRGBA ColorRGBA1056 = createNode("ColorRGBA");
ColorRGBA1056.USE = "HAnimSegmentLineColorRGBA";
LineSet1054.color = ColorRGBA1056;

Shape1053.geometry = LineSet1054;

HAnimSegment1049.children[1] = Shape1053;

HAnimJoint1048.children = new MFNode();

HAnimJoint1048.children[0] = HAnimSegment1049;

HAnimJoint HAnimJoint1057 = createNode("HAnimJoint");
HAnimJoint1057.name = "l_acromioclavicular";
HAnimJoint1057.DEF = "hanim_l_acromioclavicular";
HAnimJoint1057.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint1057.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1057.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1058 = createNode("HAnimSegment");
HAnimSegment1058.name = "l_scapula";
HAnimSegment1058.DEF = "hanim_l_scapula";
Transform Transform1059 = createNode("Transform");
Transform1059.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Transform Transform1060 = createNode("Transform");
//Empty Transform
Shape Shape1061 = createNode("Shape");
Shape1061.USE = "HAnimJointShape";
Transform1060.children = new MFNode();

Transform1060.children[0] = Shape1061;

Transform1059.children = new MFNode();

Transform1059.children[0] = Transform1060;

HAnimSegment1058.children = new MFNode();

HAnimSegment1058.children[0] = Transform1059;

Shape Shape1062 = createNode("Shape");
LineSet LineSet1063 = createNode("LineSet");
LineSet1063.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1064 = createNode("Coordinate");
Coordinate1064.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet1063.coord = Coordinate1064;

//from l_acromioclavicular to l_shoulder vertices 2
ColorRGBA ColorRGBA1065 = createNode("ColorRGBA");
ColorRGBA1065.USE = "HAnimSegmentLineColorRGBA";
LineSet1063.color = ColorRGBA1065;

Shape1062.geometry = LineSet1063;

HAnimSegment1058.children[1] = Shape1062;

HAnimSite HAnimSite1066 = createNode("HAnimSite");
HAnimSite1066.name = "l_bideltoid_pt";
HAnimSite1066.DEF = "hanim_l_bideltoid_pt";
TouchSensor TouchSensor1067 = createNode("TouchSensor");
TouchSensor1067.description = "HAnimSite l_bideltoid_pt";
HAnimSite1066.children = new MFNode();

HAnimSite1066.children[0] = TouchSensor1067;

Shape Shape1068 = createNode("Shape");
Shape1068.USE = "HAnimSiteShape";
HAnimSite1066.children[1] = Shape1068;

HAnimSegment1058.children[2] = HAnimSite1066;

HAnimSite HAnimSite1069 = createNode("HAnimSite");
HAnimSite1069.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite1069.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite1069.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor1070 = createNode("TouchSensor");
TouchSensor1070.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite1069.children = new MFNode();

HAnimSite1069.children[0] = TouchSensor1070;

Shape Shape1071 = createNode("Shape");
Shape1071.USE = "HAnimSiteShape";
HAnimSite1069.children[1] = Shape1071;

HAnimSegment1058.children[3] = HAnimSite1069;

HAnimJoint1057.children = new MFNode();

HAnimJoint1057.children[0] = HAnimSegment1058;

HAnimJoint HAnimJoint1072 = createNode("HAnimJoint");
HAnimJoint1072.name = "l_shoulder";
HAnimJoint1072.DEF = "hanim_l_shoulder";
HAnimJoint1072.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint1072.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1072.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1073 = createNode("HAnimSegment");
HAnimSegment1073.name = "l_upperarm";
HAnimSegment1073.DEF = "hanim_l_upperarm";
Transform Transform1074 = createNode("Transform");
Transform1074.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Transform Transform1075 = createNode("Transform");
//Empty Transform
Shape Shape1076 = createNode("Shape");
Shape1076.USE = "HAnimJointShape";
Transform1075.children = new MFNode();

Transform1075.children[0] = Shape1076;

Transform1074.children = new MFNode();

Transform1074.children[0] = Transform1075;

HAnimSegment1073.children = new MFNode();

HAnimSegment1073.children[0] = Transform1074;

Shape Shape1077 = createNode("Shape");
LineSet LineSet1078 = createNode("LineSet");
LineSet1078.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1079 = createNode("Coordinate");
Coordinate1079.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet1078.coord = Coordinate1079;

//from l_shoulder to l_elbow vertices 2
ColorRGBA ColorRGBA1080 = createNode("ColorRGBA");
ColorRGBA1080.USE = "HAnimSegmentLineColorRGBA";
LineSet1078.color = ColorRGBA1080;

Shape1077.geometry = LineSet1078;

HAnimSegment1073.children[1] = Shape1077;

HAnimSite HAnimSite1081 = createNode("HAnimSite");
HAnimSite1081.name = "l_humeral_medial_epicondyles_pt";
HAnimSite1081.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite1081.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor1082 = createNode("TouchSensor");
TouchSensor1082.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite1081.children = new MFNode();

HAnimSite1081.children[0] = TouchSensor1082;

Shape Shape1083 = createNode("Shape");
Shape1083.USE = "HAnimSiteShape";
HAnimSite1081.children[1] = Shape1083;

HAnimSegment1073.children[2] = HAnimSite1081;

HAnimSite HAnimSite1084 = createNode("HAnimSite");
HAnimSite1084.name = "l_olecranon_pt";
HAnimSite1084.DEF = "hanim_l_olecranon_pt";
HAnimSite1084.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor1085 = createNode("TouchSensor");
TouchSensor1085.description = "HAnimSite l_olecranon_pt";
HAnimSite1084.children = new MFNode();

HAnimSite1084.children[0] = TouchSensor1085;

Shape Shape1086 = createNode("Shape");
Shape1086.USE = "HAnimSiteShape";
HAnimSite1084.children[1] = Shape1086;

HAnimSegment1073.children[3] = HAnimSite1084;

HAnimSite HAnimSite1087 = createNode("HAnimSite");
HAnimSite1087.name = "l_radial_styloid_pt";
HAnimSite1087.DEF = "hanim_l_radial_styloid_pt";
HAnimSite1087.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor1088 = createNode("TouchSensor");
TouchSensor1088.description = "HAnimSite l_radial_styloid_pt";
HAnimSite1087.children = new MFNode();

HAnimSite1087.children[0] = TouchSensor1088;

Shape Shape1089 = createNode("Shape");
Shape1089.USE = "HAnimSiteShape";
HAnimSite1087.children[1] = Shape1089;

HAnimSegment1073.children[4] = HAnimSite1087;

HAnimSite HAnimSite1090 = createNode("HAnimSite");
HAnimSite1090.name = "l_radiale_pt";
HAnimSite1090.DEF = "hanim_l_radiale_pt";
HAnimSite1090.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor1091 = createNode("TouchSensor");
TouchSensor1091.description = "HAnimSite l_radiale_pt";
HAnimSite1090.children = new MFNode();

HAnimSite1090.children[0] = TouchSensor1091;

Shape Shape1092 = createNode("Shape");
Shape1092.USE = "HAnimSiteShape";
HAnimSite1090.children[1] = Shape1092;

HAnimSegment1073.children[5] = HAnimSite1090;

HAnimJoint1072.children = new MFNode();

HAnimJoint1072.children[0] = HAnimSegment1073;

HAnimJoint HAnimJoint1093 = createNode("HAnimJoint");
HAnimJoint1093.name = "l_elbow";
HAnimJoint1093.DEF = "hanim_l_elbow";
HAnimJoint1093.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint1093.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1093.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1094 = createNode("HAnimSegment");
HAnimSegment1094.name = "l_forearm";
HAnimSegment1094.DEF = "hanim_l_forearm";
Transform Transform1095 = createNode("Transform");
Transform1095.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform Transform1096 = createNode("Transform");
//Empty Transform
Shape Shape1097 = createNode("Shape");
Shape1097.USE = "HAnimJointShape";
Transform1096.children = new MFNode();

Transform1096.children[0] = Shape1097;

Transform1095.children = new MFNode();

Transform1095.children[0] = Transform1096;

HAnimSegment1094.children = new MFNode();

HAnimSegment1094.children[0] = Transform1095;

Shape Shape1098 = createNode("Shape");
LineSet LineSet1099 = createNode("LineSet");
LineSet1099.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1100 = createNode("Coordinate");
Coordinate1100.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet1099.coord = Coordinate1100;

//from l_elbow to l_radiocarpal vertices 2
ColorRGBA ColorRGBA1101 = createNode("ColorRGBA");
ColorRGBA1101.USE = "HAnimSegmentLineColorRGBA";
LineSet1099.color = ColorRGBA1101;

Shape1098.geometry = LineSet1099;

HAnimSegment1094.children[1] = Shape1098;

HAnimSite HAnimSite1102 = createNode("HAnimSite");
HAnimSite1102.name = "l_ulnar_styloid_pt";
HAnimSite1102.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1102.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor1103 = createNode("TouchSensor");
TouchSensor1103.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite1102.children = new MFNode();

HAnimSite1102.children[0] = TouchSensor1103;

Shape Shape1104 = createNode("Shape");
Shape1104.USE = "HAnimSiteShape";
HAnimSite1102.children[1] = Shape1104;

HAnimSegment1094.children[2] = HAnimSite1102;

HAnimJoint1093.children = new MFNode();

HAnimJoint1093.children[0] = HAnimSegment1094;

HAnimJoint HAnimJoint1105 = createNode("HAnimJoint");
HAnimJoint1105.name = "l_radiocarpal";
HAnimJoint1105.DEF = "hanim_l_radiocarpal";
HAnimJoint1105.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint1105.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1105.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1106 = createNode("HAnimSegment");
HAnimSegment1106.name = "l_carpal";
HAnimSegment1106.DEF = "hanim_l_carpal";
Transform Transform1107 = createNode("Transform");
Transform1107.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1107.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform1107.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform left hand
Transform Transform1108 = createNode("Transform");
Transform1108.rotation = new SFRotation(new float[0,1,0,-1.57]);
//Transform left hand
Shape Shape1109 = createNode("Shape");
Shape1109.USE = "HAnimJointShape";
Transform1108.children = new MFNode();

Transform1108.children[0] = Shape1109;

Transform1107.children = new MFNode();

Transform1107.children[0] = Transform1108;

HAnimSegment1106.children = new MFNode();

HAnimSegment1106.children[0] = Transform1107;

Shape Shape1110 = createNode("Shape");
LineSet LineSet1111 = createNode("LineSet");
LineSet1111.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1112 = createNode("Coordinate");
Coordinate1112.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583]);
LineSet1111.coord = Coordinate1112;

//from l_radiocarpal to l_midcarpal_1 vertices 2
ColorRGBA ColorRGBA1113 = createNode("ColorRGBA");
ColorRGBA1113.USE = "HAnimSegmentLineColorRGBA";
LineSet1111.color = ColorRGBA1113;

Shape1110.geometry = LineSet1111;

HAnimSegment1106.children[1] = Shape1110;

Shape Shape1114 = createNode("Shape");
LineSet LineSet1115 = createNode("LineSet");
LineSet1115.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1116 = createNode("Coordinate");
Coordinate1116.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583]);
LineSet1115.coord = Coordinate1116;

//from l_radiocarpal to l_midcarpal_2 vertices 2
ColorRGBA ColorRGBA1117 = createNode("ColorRGBA");
ColorRGBA1117.USE = "HAnimSegmentLineColorRGBA";
LineSet1115.color = ColorRGBA1117;

Shape1114.geometry = LineSet1115;

HAnimSegment1106.children[2] = Shape1114;

Shape Shape1118 = createNode("Shape");
LineSet LineSet1119 = createNode("LineSet");
LineSet1119.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1120 = createNode("Coordinate");
Coordinate1120.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583]);
LineSet1119.coord = Coordinate1120;

//from l_radiocarpal to l_midcarpal_3 vertices 2
ColorRGBA ColorRGBA1121 = createNode("ColorRGBA");
ColorRGBA1121.USE = "HAnimSegmentLineColorRGBA";
LineSet1119.color = ColorRGBA1121;

Shape1118.geometry = LineSet1119;

HAnimSegment1106.children[3] = Shape1118;

Shape Shape1122 = createNode("Shape");
LineSet LineSet1123 = createNode("LineSet");
LineSet1123.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1124 = createNode("Coordinate");
Coordinate1124.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583]);
LineSet1123.coord = Coordinate1124;

//from l_radiocarpal to l_midcarpal_4_5 vertices 2
ColorRGBA ColorRGBA1125 = createNode("ColorRGBA");
ColorRGBA1125.USE = "HAnimSegmentLineColorRGBA";
LineSet1123.color = ColorRGBA1125;

Shape1122.geometry = LineSet1123;

HAnimSegment1106.children[4] = Shape1122;

HAnimJoint1105.children = new MFNode();

HAnimJoint1105.children[0] = HAnimSegment1106;

HAnimJoint HAnimJoint1126 = createNode("HAnimJoint");
HAnimJoint1126.name = "l_midcarpal_1";
HAnimJoint1126.DEF = "hanim_l_midcarpal_1";
HAnimJoint1126.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1126.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1127 = createNode("HAnimSegment");
HAnimSegment1127.name = "l_trapezium";
HAnimSegment1127.DEF = "hanim_l_trapezium";
Transform Transform1128 = createNode("Transform");
Transform1128.translation = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
Transform Transform1129 = createNode("Transform");
//Empty Transform
Shape Shape1130 = createNode("Shape");
Shape1130.USE = "HAnimJointShape";
Transform1129.children = new MFNode();

Transform1129.children[0] = Shape1130;

Transform1128.children = new MFNode();

Transform1128.children[0] = Transform1129;

HAnimSegment1127.children = new MFNode();

HAnimSegment1127.children[0] = Transform1128;

Shape Shape1131 = createNode("Shape");
LineSet LineSet1132 = createNode("LineSet");
LineSet1132.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1133 = createNode("Coordinate");
Coordinate1133.point = new MFVec3f(new float[0.1924,0.8472,-0.0534]);
LineSet1132.coord = Coordinate1133;

//from l_midcarpal_1 to l_carpometacarpal_1 vertices 1
ColorRGBA ColorRGBA1134 = createNode("ColorRGBA");
ColorRGBA1134.USE = "HAnimSegmentLineColorRGBA";
LineSet1132.color = ColorRGBA1134;

Shape1131.geometry = LineSet1132;

HAnimSegment1127.children[1] = Shape1131;

HAnimJoint1126.children = new MFNode();

HAnimJoint1126.children[0] = HAnimSegment1127;

HAnimJoint HAnimJoint1135 = createNode("HAnimJoint");
HAnimJoint1135.name = "l_carpometacarpal_1";
HAnimJoint1135.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1135.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint1135.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1135.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1136 = createNode("HAnimSegment");
HAnimSegment1136.name = "l_metacarpal_1";
HAnimSegment1136.DEF = "hanim_l_metacarpal_1";
Transform Transform1137 = createNode("Transform");
Transform1137.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Transform Transform1138 = createNode("Transform");
//Empty Transform
Shape Shape1139 = createNode("Shape");
Shape1139.USE = "HAnimJointShape";
Transform1138.children = new MFNode();

Transform1138.children[0] = Shape1139;

Transform1137.children = new MFNode();

Transform1137.children[0] = Transform1138;

HAnimSegment1136.children = new MFNode();

HAnimSegment1136.children[0] = Transform1137;

Shape Shape1140 = createNode("Shape");
LineSet LineSet1141 = createNode("LineSet");
LineSet1141.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1142 = createNode("Coordinate");
Coordinate1142.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1141.coord = Coordinate1142;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA1143 = createNode("ColorRGBA");
ColorRGBA1143.USE = "HAnimSegmentLineColorRGBA";
LineSet1141.color = ColorRGBA1143;

Shape1140.geometry = LineSet1141;

HAnimSegment1136.children[1] = Shape1140;

HAnimJoint1135.children = new MFNode();

HAnimJoint1135.children[0] = HAnimSegment1136;

HAnimJoint HAnimJoint1144 = createNode("HAnimJoint");
HAnimJoint1144.name = "l_metacarpophalangeal_1";
HAnimJoint1144.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1144.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint1144.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1144.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1145 = createNode("HAnimSegment");
HAnimSegment1145.name = "l_carpal_proximal_phalanx_1";
HAnimSegment1145.DEF = "hanim_l_carpal_proximal_phalanx_1";
Transform Transform1146 = createNode("Transform");
Transform1146.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Transform Transform1147 = createNode("Transform");
//Empty Transform
Shape Shape1148 = createNode("Shape");
Shape1148.USE = "HAnimJointShape";
Transform1147.children = new MFNode();

Transform1147.children[0] = Shape1148;

Transform1146.children = new MFNode();

Transform1146.children[0] = Transform1147;

HAnimSegment1145.children = new MFNode();

HAnimSegment1145.children[0] = Transform1146;

Shape Shape1149 = createNode("Shape");
LineSet LineSet1150 = createNode("LineSet");
LineSet1150.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1151 = createNode("Coordinate");
Coordinate1151.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1150.coord = Coordinate1151;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA1152 = createNode("ColorRGBA");
ColorRGBA1152.USE = "HAnimSegmentLineColorRGBA";
LineSet1150.color = ColorRGBA1152;

Shape1149.geometry = LineSet1150;

HAnimSegment1145.children[1] = Shape1149;

HAnimSite HAnimSite1153 = createNode("HAnimSite");
HAnimSite1153.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite1153.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor1154 = createNode("TouchSensor");
TouchSensor1154.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite1153.children = new MFNode();

HAnimSite1153.children[0] = TouchSensor1154;

Shape Shape1155 = createNode("Shape");
Shape1155.USE = "HAnimSiteShape";
HAnimSite1153.children[1] = Shape1155;

HAnimSegment1145.children[2] = HAnimSite1153;

HAnimJoint1144.children = new MFNode();

HAnimJoint1144.children[0] = HAnimSegment1145;

HAnimJoint HAnimJoint1156 = createNode("HAnimJoint");
HAnimJoint1156.name = "l_carpal_interphalangeal_1";
HAnimJoint1156.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1156.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1156.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1156.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1144.children[1] = HAnimJoint1156;

HAnimJoint1135.children[1] = HAnimJoint1144;

HAnimJoint1126.children[1] = HAnimJoint1135;

HAnimJoint1105.children[1] = HAnimJoint1126;

HAnimJoint HAnimJoint1157 = createNode("HAnimJoint");
HAnimJoint1157.name = "l_midcarpal_2";
HAnimJoint1157.DEF = "hanim_l_midcarpal_2";
HAnimJoint1157.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1157.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1158 = createNode("HAnimSegment");
HAnimSegment1158.name = "l_trapezoid";
HAnimSegment1158.DEF = "hanim_l_trapezoid";
Transform Transform1159 = createNode("Transform");
Transform1159.translation = new SFVec3f(new float[0.1955,0.8159,0.0464]);
Transform Transform1160 = createNode("Transform");
//Empty Transform
Shape Shape1161 = createNode("Shape");
Shape1161.USE = "HAnimJointShape";
Transform1160.children = new MFNode();

Transform1160.children[0] = Shape1161;

Transform1159.children = new MFNode();

Transform1159.children[0] = Transform1160;

HAnimSegment1158.children = new MFNode();

HAnimSegment1158.children[0] = Transform1159;

Shape Shape1162 = createNode("Shape");
LineSet LineSet1163 = createNode("LineSet");
LineSet1163.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1164 = createNode("Coordinate");
Coordinate1164.point = new MFVec3f(new float[0.1983,0.8024,-0.028]);
LineSet1163.coord = Coordinate1164;

//from l_midcarpal_2 to l_carpometacarpal_2 vertices 1
ColorRGBA ColorRGBA1165 = createNode("ColorRGBA");
ColorRGBA1165.USE = "HAnimSegmentLineColorRGBA";
LineSet1163.color = ColorRGBA1165;

Shape1162.geometry = LineSet1163;

HAnimSegment1158.children[1] = Shape1162;

HAnimSite HAnimSite1166 = createNode("HAnimSite");
HAnimSite1166.name = "l_metacarpal_phalanx_2_pt";
HAnimSite1166.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1166.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor1167 = createNode("TouchSensor");
TouchSensor1167.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite1166.children = new MFNode();

HAnimSite1166.children[0] = TouchSensor1167;

Shape Shape1168 = createNode("Shape");
Shape1168.USE = "HAnimSiteShape";
HAnimSite1166.children[1] = Shape1168;

HAnimSegment1158.children[2] = HAnimSite1166;

HAnimJoint1157.children = new MFNode();

HAnimJoint1157.children[0] = HAnimSegment1158;

HAnimJoint HAnimJoint1169 = createNode("HAnimJoint");
HAnimJoint1169.name = "l_carpometacarpal_2";
HAnimJoint1169.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1169.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint1169.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1169.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1170 = createNode("HAnimSegment");
HAnimSegment1170.name = "l_metacarpal_2";
HAnimSegment1170.DEF = "hanim_l_metacarpal_2";
Transform Transform1171 = createNode("Transform");
Transform1171.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Transform Transform1172 = createNode("Transform");
//Empty Transform
Shape Shape1173 = createNode("Shape");
Shape1173.USE = "HAnimJointShape";
Transform1172.children = new MFNode();

Transform1172.children[0] = Shape1173;

Transform1171.children = new MFNode();

Transform1171.children[0] = Transform1172;

HAnimSegment1170.children = new MFNode();

HAnimSegment1170.children[0] = Transform1171;

Shape Shape1174 = createNode("Shape");
LineSet LineSet1175 = createNode("LineSet");
LineSet1175.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1176 = createNode("Coordinate");
Coordinate1176.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1175.coord = Coordinate1176;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA1177 = createNode("ColorRGBA");
ColorRGBA1177.USE = "HAnimSegmentLineColorRGBA";
LineSet1175.color = ColorRGBA1177;

Shape1174.geometry = LineSet1175;

HAnimSegment1170.children[1] = Shape1174;

HAnimJoint1169.children = new MFNode();

HAnimJoint1169.children[0] = HAnimSegment1170;

HAnimJoint HAnimJoint1178 = createNode("HAnimJoint");
HAnimJoint1178.name = "l_metacarpophalangeal_2";
HAnimJoint1178.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1178.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint1178.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1178.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1179 = createNode("HAnimSegment");
HAnimSegment1179.name = "l_carpal_proximal_phalanx_2";
HAnimSegment1179.DEF = "hanim_l_carpal_proximal_phalanx_2";
Transform Transform1180 = createNode("Transform");
Transform1180.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Transform Transform1181 = createNode("Transform");
//Empty Transform
Shape Shape1182 = createNode("Shape");
Shape1182.USE = "HAnimJointShape";
Transform1181.children = new MFNode();

Transform1181.children[0] = Shape1182;

Transform1180.children = new MFNode();

Transform1180.children[0] = Transform1181;

HAnimSegment1179.children = new MFNode();

HAnimSegment1179.children[0] = Transform1180;

Shape Shape1183 = createNode("Shape");
LineSet LineSet1184 = createNode("LineSet");
LineSet1184.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1185 = createNode("Coordinate");
Coordinate1185.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1184.coord = Coordinate1185;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1186 = createNode("ColorRGBA");
ColorRGBA1186.USE = "HAnimSegmentLineColorRGBA";
LineSet1184.color = ColorRGBA1186;

Shape1183.geometry = LineSet1184;

HAnimSegment1179.children[1] = Shape1183;

HAnimJoint1178.children = new MFNode();

HAnimJoint1178.children[0] = HAnimSegment1179;

HAnimJoint HAnimJoint1187 = createNode("HAnimJoint");
HAnimJoint1187.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1187.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1187.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint1187.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1187.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1188 = createNode("HAnimSegment");
HAnimSegment1188.name = "l_carpal_middle_phalanx_2";
HAnimSegment1188.DEF = "hanim_l_carpal_middle_phalanx_2";
Transform Transform1189 = createNode("Transform");
Transform1189.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Transform Transform1190 = createNode("Transform");
//Empty Transform
Shape Shape1191 = createNode("Shape");
Shape1191.USE = "HAnimJointShape";
Transform1190.children = new MFNode();

Transform1190.children[0] = Shape1191;

Transform1189.children = new MFNode();

Transform1189.children[0] = Transform1190;

HAnimSegment1188.children = new MFNode();

HAnimSegment1188.children[0] = Transform1189;

Shape Shape1192 = createNode("Shape");
LineSet LineSet1193 = createNode("LineSet");
LineSet1193.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1194 = createNode("Coordinate");
Coordinate1194.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1193.coord = Coordinate1194;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1195 = createNode("ColorRGBA");
ColorRGBA1195.USE = "HAnimSegmentLineColorRGBA";
LineSet1193.color = ColorRGBA1195;

Shape1192.geometry = LineSet1193;

HAnimSegment1188.children[1] = Shape1192;

HAnimSite HAnimSite1196 = createNode("HAnimSite");
HAnimSite1196.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite1196.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor1197 = createNode("TouchSensor");
TouchSensor1197.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite1196.children = new MFNode();

HAnimSite1196.children[0] = TouchSensor1197;

Shape Shape1198 = createNode("Shape");
Shape1198.USE = "HAnimSiteShape";
HAnimSite1196.children[1] = Shape1198;

HAnimSegment1188.children[2] = HAnimSite1196;

HAnimSite HAnimSite1199 = createNode("HAnimSite");
HAnimSite1199.name = "l_dactylion_pt";
HAnimSite1199.DEF = "hanim_l_dactylion_pt";
HAnimSite1199.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor1200 = createNode("TouchSensor");
TouchSensor1200.description = "HAnimSite l_dactylion_pt";
HAnimSite1199.children = new MFNode();

HAnimSite1199.children[0] = TouchSensor1200;

Shape Shape1201 = createNode("Shape");
Shape1201.USE = "HAnimSiteShape";
HAnimSite1199.children[1] = Shape1201;

HAnimSegment1188.children[3] = HAnimSite1199;

HAnimJoint1187.children = new MFNode();

HAnimJoint1187.children[0] = HAnimSegment1188;

HAnimJoint HAnimJoint1202 = createNode("HAnimJoint");
HAnimJoint1202.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1202.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1202.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1202.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1202.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1187.children[1] = HAnimJoint1202;

HAnimJoint1178.children[1] = HAnimJoint1187;

HAnimJoint1169.children[1] = HAnimJoint1178;

HAnimJoint1157.children[1] = HAnimJoint1169;

HAnimJoint1105.children[2] = HAnimJoint1157;

HAnimJoint HAnimJoint1203 = createNode("HAnimJoint");
HAnimJoint1203.name = "l_midcarpal_3";
HAnimJoint1203.DEF = "hanim_l_midcarpal_3";
HAnimJoint1203.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1203.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1204 = createNode("HAnimSegment");
HAnimSegment1204.name = "l_capitate";
HAnimSegment1204.DEF = "hanim_l_capitate";
Transform Transform1205 = createNode("Transform");
Transform1205.translation = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
Transform Transform1206 = createNode("Transform");
//Empty Transform
Shape Shape1207 = createNode("Shape");
Shape1207.USE = "HAnimJointShape";
Transform1206.children = new MFNode();

Transform1206.children[0] = Shape1207;

Transform1205.children = new MFNode();

Transform1205.children[0] = Transform1206;

HAnimSegment1204.children = new MFNode();

HAnimSegment1204.children[0] = Transform1205;

Shape Shape1208 = createNode("Shape");
LineSet LineSet1209 = createNode("LineSet");
LineSet1209.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1210 = createNode("Coordinate");
Coordinate1210.point = new MFVec3f(new float[0.1987,0.8029,-0.053]);
LineSet1209.coord = Coordinate1210;

//from l_midcarpal_3 to l_carpometacarpal_3 vertices 1
ColorRGBA ColorRGBA1211 = createNode("ColorRGBA");
ColorRGBA1211.USE = "HAnimSegmentLineColorRGBA";
LineSet1209.color = ColorRGBA1211;

Shape1208.geometry = LineSet1209;

HAnimSegment1204.children[1] = Shape1208;

HAnimSite HAnimSite1212 = createNode("HAnimSite");
HAnimSite1212.name = "l_metacarpal_phalanx_3_pt";
HAnimSite1212.DEF = "hanim_l_metacarpal_phalanx_3_pt";
TouchSensor TouchSensor1213 = createNode("TouchSensor");
TouchSensor1213.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite1212.children = new MFNode();

HAnimSite1212.children[0] = TouchSensor1213;

Shape Shape1214 = createNode("Shape");
Shape1214.USE = "HAnimSiteShape";
HAnimSite1212.children[1] = Shape1214;

HAnimSegment1204.children[2] = HAnimSite1212;

HAnimJoint1203.children = new MFNode();

HAnimJoint1203.children[0] = HAnimSegment1204;

HAnimJoint HAnimJoint1215 = createNode("HAnimJoint");
HAnimJoint1215.name = "l_carpometacarpal_3";
HAnimJoint1215.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1215.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint1215.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1215.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1216 = createNode("HAnimSegment");
HAnimSegment1216.name = "l_metacarpal_3";
HAnimSegment1216.DEF = "hanim_l_metacarpal_3";
Transform Transform1217 = createNode("Transform");
Transform1217.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Transform Transform1218 = createNode("Transform");
//Empty Transform
Shape Shape1219 = createNode("Shape");
Shape1219.USE = "HAnimJointShape";
Transform1218.children = new MFNode();

Transform1218.children[0] = Shape1219;

Transform1217.children = new MFNode();

Transform1217.children[0] = Transform1218;

HAnimSegment1216.children = new MFNode();

HAnimSegment1216.children[0] = Transform1217;

Shape Shape1220 = createNode("Shape");
LineSet LineSet1221 = createNode("LineSet");
LineSet1221.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1222 = createNode("Coordinate");
Coordinate1222.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1221.coord = Coordinate1222;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA1223 = createNode("ColorRGBA");
ColorRGBA1223.USE = "HAnimSegmentLineColorRGBA";
LineSet1221.color = ColorRGBA1223;

Shape1220.geometry = LineSet1221;

HAnimSegment1216.children[1] = Shape1220;

HAnimJoint1215.children = new MFNode();

HAnimJoint1215.children[0] = HAnimSegment1216;

HAnimJoint HAnimJoint1224 = createNode("HAnimJoint");
HAnimJoint1224.name = "l_metacarpophalangeal_3";
HAnimJoint1224.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1224.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint1224.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1224.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1225 = createNode("HAnimSegment");
HAnimSegment1225.name = "l_carpal_proximal_phalanx_3";
HAnimSegment1225.DEF = "hanim_l_carpal_proximal_phalanx_3";
Transform Transform1226 = createNode("Transform");
Transform1226.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Transform Transform1227 = createNode("Transform");
//Empty Transform
Shape Shape1228 = createNode("Shape");
Shape1228.USE = "HAnimJointShape";
Transform1227.children = new MFNode();

Transform1227.children[0] = Shape1228;

Transform1226.children = new MFNode();

Transform1226.children[0] = Transform1227;

HAnimSegment1225.children = new MFNode();

HAnimSegment1225.children[0] = Transform1226;

Shape Shape1229 = createNode("Shape");
LineSet LineSet1230 = createNode("LineSet");
LineSet1230.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1231 = createNode("Coordinate");
Coordinate1231.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1230.coord = Coordinate1231;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1232 = createNode("ColorRGBA");
ColorRGBA1232.USE = "HAnimSegmentLineColorRGBA";
LineSet1230.color = ColorRGBA1232;

Shape1229.geometry = LineSet1230;

HAnimSegment1225.children[1] = Shape1229;

HAnimJoint1224.children = new MFNode();

HAnimJoint1224.children[0] = HAnimSegment1225;

HAnimJoint HAnimJoint1233 = createNode("HAnimJoint");
HAnimJoint1233.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1233.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1233.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint1233.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1233.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1234 = createNode("HAnimSegment");
HAnimSegment1234.name = "l_carpal_middle_phalanx_3";
HAnimSegment1234.DEF = "hanim_l_carpal_middle_phalanx_3";
Transform Transform1235 = createNode("Transform");
Transform1235.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Transform Transform1236 = createNode("Transform");
//Empty Transform
Shape Shape1237 = createNode("Shape");
Shape1237.USE = "HAnimJointShape";
Transform1236.children = new MFNode();

Transform1236.children[0] = Shape1237;

Transform1235.children = new MFNode();

Transform1235.children[0] = Transform1236;

HAnimSegment1234.children = new MFNode();

HAnimSegment1234.children[0] = Transform1235;

Shape Shape1238 = createNode("Shape");
LineSet LineSet1239 = createNode("LineSet");
LineSet1239.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1240 = createNode("Coordinate");
Coordinate1240.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1239.coord = Coordinate1240;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1241 = createNode("ColorRGBA");
ColorRGBA1241.USE = "HAnimSegmentLineColorRGBA";
LineSet1239.color = ColorRGBA1241;

Shape1238.geometry = LineSet1239;

HAnimSegment1234.children[1] = Shape1238;

HAnimSite HAnimSite1242 = createNode("HAnimSite");
HAnimSite1242.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite1242.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor1243 = createNode("TouchSensor");
TouchSensor1243.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite1242.children = new MFNode();

HAnimSite1242.children[0] = TouchSensor1243;

Shape Shape1244 = createNode("Shape");
Shape1244.USE = "HAnimSiteShape";
HAnimSite1242.children[1] = Shape1244;

HAnimSegment1234.children[2] = HAnimSite1242;

HAnimJoint1233.children = new MFNode();

HAnimJoint1233.children[0] = HAnimSegment1234;

HAnimJoint HAnimJoint1245 = createNode("HAnimJoint");
HAnimJoint1245.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1245.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1245.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1245.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1245.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1233.children[1] = HAnimJoint1245;

HAnimJoint1224.children[1] = HAnimJoint1233;

HAnimJoint1215.children[1] = HAnimJoint1224;

HAnimJoint1203.children[1] = HAnimJoint1215;

HAnimJoint1105.children[3] = HAnimJoint1203;

HAnimJoint HAnimJoint1246 = createNode("HAnimJoint");
HAnimJoint1246.name = "l_midcarpal_4_5";
HAnimJoint1246.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint1246.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1246.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1247 = createNode("HAnimSegment");
HAnimSegment1247.name = "l_hamate";
HAnimSegment1247.DEF = "hanim_l_hamate";
Transform Transform1248 = createNode("Transform");
Transform1248.translation = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
Transform Transform1249 = createNode("Transform");
//Empty Transform
Shape Shape1250 = createNode("Shape");
Shape1250.USE = "HAnimJointShape";
Transform1249.children = new MFNode();

Transform1249.children[0] = Shape1250;

Transform1248.children = new MFNode();

Transform1248.children[0] = Transform1249;

HAnimSegment1247.children = new MFNode();

HAnimSegment1247.children[0] = Transform1248;

Shape Shape1251 = createNode("Shape");
LineSet LineSet1252 = createNode("LineSet");
LineSet1252.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1253 = createNode("Coordinate");
Coordinate1253.point = new MFVec3f(new float[0.1956,0.8019,-0.0794]);
LineSet1252.coord = Coordinate1253;

//from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 1
ColorRGBA ColorRGBA1254 = createNode("ColorRGBA");
ColorRGBA1254.USE = "HAnimSegmentLineColorRGBA";
LineSet1252.color = ColorRGBA1254;

Shape1251.geometry = LineSet1252;

HAnimSegment1247.children[1] = Shape1251;

Shape Shape1255 = createNode("Shape");
LineSet LineSet1256 = createNode("LineSet");
LineSet1256.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1257 = createNode("Coordinate");
Coordinate1257.point = new MFVec3f(new float[0.1925,0.8066,-0.1036]);
LineSet1256.coord = Coordinate1257;

//from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 1
ColorRGBA ColorRGBA1258 = createNode("ColorRGBA");
ColorRGBA1258.USE = "HAnimSegmentLineColorRGBA";
LineSet1256.color = ColorRGBA1258;

Shape1255.geometry = LineSet1256;

HAnimSegment1247.children[2] = Shape1255;

HAnimSite HAnimSite1259 = createNode("HAnimSite");
HAnimSite1259.name = "l_metacarpal_phalanx_5_pt";
HAnimSite1259.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1259.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor1260 = createNode("TouchSensor");
TouchSensor1260.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite1259.children = new MFNode();

HAnimSite1259.children[0] = TouchSensor1260;

Shape Shape1261 = createNode("Shape");
Shape1261.USE = "HAnimSiteShape";
HAnimSite1259.children[1] = Shape1261;

HAnimSegment1247.children[3] = HAnimSite1259;

HAnimJoint1246.children = new MFNode();

HAnimJoint1246.children[0] = HAnimSegment1247;

HAnimJoint HAnimJoint1262 = createNode("HAnimJoint");
HAnimJoint1262.name = "l_carpometacarpal_4";
HAnimJoint1262.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1262.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint1262.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1262.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1263 = createNode("HAnimSegment");
HAnimSegment1263.name = "l_metacarpal_4";
HAnimSegment1263.DEF = "hanim_l_metacarpal_4";
Transform Transform1264 = createNode("Transform");
Transform1264.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Transform Transform1265 = createNode("Transform");
//Empty Transform
Shape Shape1266 = createNode("Shape");
Shape1266.USE = "HAnimJointShape";
Transform1265.children = new MFNode();

Transform1265.children[0] = Shape1266;

Transform1264.children = new MFNode();

Transform1264.children[0] = Transform1265;

HAnimSegment1263.children = new MFNode();

HAnimSegment1263.children[0] = Transform1264;

Shape Shape1267 = createNode("Shape");
LineSet LineSet1268 = createNode("LineSet");
LineSet1268.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1269 = createNode("Coordinate");
Coordinate1269.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1268.coord = Coordinate1269;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA1270 = createNode("ColorRGBA");
ColorRGBA1270.USE = "HAnimSegmentLineColorRGBA";
LineSet1268.color = ColorRGBA1270;

Shape1267.geometry = LineSet1268;

HAnimSegment1263.children[1] = Shape1267;

HAnimJoint1262.children = new MFNode();

HAnimJoint1262.children[0] = HAnimSegment1263;

HAnimJoint HAnimJoint1271 = createNode("HAnimJoint");
HAnimJoint1271.name = "l_metacarpophalangeal_4";
HAnimJoint1271.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1271.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint1271.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1271.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1272 = createNode("HAnimSegment");
HAnimSegment1272.name = "l_carpal_proximal_phalanx_4";
HAnimSegment1272.DEF = "hanim_l_carpal_proximal_phalanx_4";
Transform Transform1273 = createNode("Transform");
Transform1273.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Transform Transform1274 = createNode("Transform");
//Empty Transform
Shape Shape1275 = createNode("Shape");
Shape1275.USE = "HAnimJointShape";
Transform1274.children = new MFNode();

Transform1274.children[0] = Shape1275;

Transform1273.children = new MFNode();

Transform1273.children[0] = Transform1274;

HAnimSegment1272.children = new MFNode();

HAnimSegment1272.children[0] = Transform1273;

Shape Shape1276 = createNode("Shape");
LineSet LineSet1277 = createNode("LineSet");
LineSet1277.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1278 = createNode("Coordinate");
Coordinate1278.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1277.coord = Coordinate1278;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1279 = createNode("ColorRGBA");
ColorRGBA1279.USE = "HAnimSegmentLineColorRGBA";
LineSet1277.color = ColorRGBA1279;

Shape1276.geometry = LineSet1277;

HAnimSegment1272.children[1] = Shape1276;

HAnimJoint1271.children = new MFNode();

HAnimJoint1271.children[0] = HAnimSegment1272;

HAnimJoint HAnimJoint1280 = createNode("HAnimJoint");
HAnimJoint1280.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1280.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1280.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint1280.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1280.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1281 = createNode("HAnimSegment");
HAnimSegment1281.name = "l_carpal_middle_phalanx_4";
HAnimSegment1281.DEF = "hanim_l_carpal_middle_phalanx_4";
Transform Transform1282 = createNode("Transform");
Transform1282.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Transform Transform1283 = createNode("Transform");
//Empty Transform
Shape Shape1284 = createNode("Shape");
Shape1284.USE = "HAnimJointShape";
Transform1283.children = new MFNode();

Transform1283.children[0] = Shape1284;

Transform1282.children = new MFNode();

Transform1282.children[0] = Transform1283;

HAnimSegment1281.children = new MFNode();

HAnimSegment1281.children[0] = Transform1282;

Shape Shape1285 = createNode("Shape");
LineSet LineSet1286 = createNode("LineSet");
LineSet1286.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1287 = createNode("Coordinate");
Coordinate1287.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1286.coord = Coordinate1287;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1288 = createNode("ColorRGBA");
ColorRGBA1288.USE = "HAnimSegmentLineColorRGBA";
LineSet1286.color = ColorRGBA1288;

Shape1285.geometry = LineSet1286;

HAnimSegment1281.children[1] = Shape1285;

HAnimSite HAnimSite1289 = createNode("HAnimSite");
HAnimSite1289.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite1289.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor1290 = createNode("TouchSensor");
TouchSensor1290.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite1289.children = new MFNode();

HAnimSite1289.children[0] = TouchSensor1290;

Shape Shape1291 = createNode("Shape");
Shape1291.USE = "HAnimSiteShape";
HAnimSite1289.children[1] = Shape1291;

HAnimSegment1281.children[2] = HAnimSite1289;

HAnimJoint1280.children = new MFNode();

HAnimJoint1280.children[0] = HAnimSegment1281;

HAnimJoint HAnimJoint1292 = createNode("HAnimJoint");
HAnimJoint1292.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1292.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1292.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1292.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1292.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1280.children[1] = HAnimJoint1292;

HAnimJoint1271.children[1] = HAnimJoint1280;

HAnimJoint1262.children[1] = HAnimJoint1271;

HAnimJoint1246.children[1] = HAnimJoint1262;

HAnimJoint HAnimJoint1293 = createNode("HAnimJoint");
HAnimJoint1293.name = "l_carpometacarpal_5";
HAnimJoint1293.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1293.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint1293.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1293.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1294 = createNode("HAnimSegment");
HAnimSegment1294.name = "l_metacarpal_5";
HAnimSegment1294.DEF = "hanim_l_metacarpal_5";
Transform Transform1295 = createNode("Transform");
Transform1295.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Transform Transform1296 = createNode("Transform");
//Empty Transform
Shape Shape1297 = createNode("Shape");
Shape1297.USE = "HAnimJointShape";
Transform1296.children = new MFNode();

Transform1296.children[0] = Shape1297;

Transform1295.children = new MFNode();

Transform1295.children[0] = Transform1296;

HAnimSegment1294.children = new MFNode();

HAnimSegment1294.children[0] = Transform1295;

Shape Shape1298 = createNode("Shape");
LineSet LineSet1299 = createNode("LineSet");
LineSet1299.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1300 = createNode("Coordinate");
Coordinate1300.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1299.coord = Coordinate1300;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1301 = createNode("ColorRGBA");
ColorRGBA1301.USE = "HAnimSegmentLineColorRGBA";
LineSet1299.color = ColorRGBA1301;

Shape1298.geometry = LineSet1299;

HAnimSegment1294.children[1] = Shape1298;

HAnimJoint1293.children = new MFNode();

HAnimJoint1293.children[0] = HAnimSegment1294;

HAnimJoint HAnimJoint1302 = createNode("HAnimJoint");
HAnimJoint1302.name = "l_metacarpophalangeal_5";
HAnimJoint1302.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1302.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint1302.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1302.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1303 = createNode("HAnimSegment");
HAnimSegment1303.name = "l_carpal_proximal_phalanx_5";
HAnimSegment1303.DEF = "hanim_l_carpal_proximal_phalanx_5";
Transform Transform1304 = createNode("Transform");
Transform1304.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Transform Transform1305 = createNode("Transform");
//Empty Transform
Shape Shape1306 = createNode("Shape");
Shape1306.USE = "HAnimJointShape";
Transform1305.children = new MFNode();

Transform1305.children[0] = Shape1306;

Transform1304.children = new MFNode();

Transform1304.children[0] = Transform1305;

HAnimSegment1303.children = new MFNode();

HAnimSegment1303.children[0] = Transform1304;

Shape Shape1307 = createNode("Shape");
LineSet LineSet1308 = createNode("LineSet");
LineSet1308.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1309 = createNode("Coordinate");
Coordinate1309.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1308.coord = Coordinate1309;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1310 = createNode("ColorRGBA");
ColorRGBA1310.USE = "HAnimSegmentLineColorRGBA";
LineSet1308.color = ColorRGBA1310;

Shape1307.geometry = LineSet1308;

HAnimSegment1303.children[1] = Shape1307;

HAnimJoint1302.children = new MFNode();

HAnimJoint1302.children[0] = HAnimSegment1303;

HAnimJoint HAnimJoint1311 = createNode("HAnimJoint");
HAnimJoint1311.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1311.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint1311.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint1311.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1311.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1312 = createNode("HAnimSegment");
HAnimSegment1312.name = "l_carpal_middle_phalanx_5";
HAnimSegment1312.DEF = "hanim_l_carpal_middle_phalanx_5";
Transform Transform1313 = createNode("Transform");
Transform1313.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Transform Transform1314 = createNode("Transform");
//Empty Transform
Shape Shape1315 = createNode("Shape");
Shape1315.USE = "HAnimJointShape";
Transform1314.children = new MFNode();

Transform1314.children[0] = Shape1315;

Transform1313.children = new MFNode();

Transform1313.children[0] = Transform1314;

HAnimSegment1312.children = new MFNode();

HAnimSegment1312.children[0] = Transform1313;

Shape Shape1316 = createNode("Shape");
LineSet LineSet1317 = createNode("LineSet");
LineSet1317.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1318 = createNode("Coordinate");
Coordinate1318.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1317.coord = Coordinate1318;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1319 = createNode("ColorRGBA");
ColorRGBA1319.USE = "HAnimSegmentLineColorRGBA";
LineSet1317.color = ColorRGBA1319;

Shape1316.geometry = LineSet1317;

HAnimSegment1312.children[1] = Shape1316;

HAnimSite HAnimSite1320 = createNode("HAnimSite");
HAnimSite1320.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite1320.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor1321 = createNode("TouchSensor");
TouchSensor1321.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite1320.children = new MFNode();

HAnimSite1320.children[0] = TouchSensor1321;

Shape Shape1322 = createNode("Shape");
Shape1322.USE = "HAnimSiteShape";
HAnimSite1320.children[1] = Shape1322;

HAnimSegment1312.children[2] = HAnimSite1320;

HAnimJoint1311.children = new MFNode();

HAnimJoint1311.children[0] = HAnimSegment1312;

HAnimJoint HAnimJoint1323 = createNode("HAnimJoint");
HAnimJoint1323.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1323.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint1323.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1323.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1323.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1311.children[1] = HAnimJoint1323;

HAnimJoint1302.children[1] = HAnimJoint1311;

HAnimJoint1293.children[1] = HAnimJoint1302;

HAnimJoint1246.children[2] = HAnimJoint1293;

HAnimJoint1105.children[4] = HAnimJoint1246;

HAnimJoint1093.children[1] = HAnimJoint1105;

HAnimJoint1072.children[1] = HAnimJoint1093;

HAnimJoint1057.children[1] = HAnimJoint1072;

HAnimJoint1048.children[1] = HAnimJoint1057;

HAnimJoint844.children[2] = HAnimJoint1048;

HAnimJoint HAnimJoint1324 = createNode("HAnimJoint");
HAnimJoint1324.name = "r_sternoclavicular";
HAnimJoint1324.DEF = "hanim_r_sternoclavicular";
HAnimJoint1324.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint1324.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1324.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1325 = createNode("HAnimSegment");
HAnimSegment1325.name = "r_clavicle";
HAnimSegment1325.DEF = "hanim_r_clavicle";
Transform Transform1326 = createNode("Transform");
Transform1326.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
Transform Transform1327 = createNode("Transform");
//Empty Transform
Shape Shape1328 = createNode("Shape");
Shape1328.USE = "HAnimJointShape";
Transform1327.children = new MFNode();

Transform1327.children[0] = Shape1328;

Transform1326.children = new MFNode();

Transform1326.children[0] = Transform1327;

HAnimSegment1325.children = new MFNode();

HAnimSegment1325.children[0] = Transform1326;

Shape Shape1329 = createNode("Shape");
LineSet LineSet1330 = createNode("LineSet");
LineSet1330.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1331 = createNode("Coordinate");
Coordinate1331.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet1330.coord = Coordinate1331;

//from r_sternoclavicular to r_acromioclavicular vertices 2
ColorRGBA ColorRGBA1332 = createNode("ColorRGBA");
ColorRGBA1332.USE = "HAnimSegmentLineColorRGBA";
LineSet1330.color = ColorRGBA1332;

Shape1329.geometry = LineSet1330;

HAnimSegment1325.children[1] = Shape1329;

HAnimJoint1324.children = new MFNode();

HAnimJoint1324.children[0] = HAnimSegment1325;

HAnimJoint HAnimJoint1333 = createNode("HAnimJoint");
HAnimJoint1333.name = "r_acromioclavicular";
HAnimJoint1333.DEF = "hanim_r_acromioclavicular";
HAnimJoint1333.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint1333.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1333.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1334 = createNode("HAnimSegment");
HAnimSegment1334.name = "r_scapula";
HAnimSegment1334.DEF = "hanim_r_scapula";
Transform Transform1335 = createNode("Transform");
Transform1335.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
Transform Transform1336 = createNode("Transform");
//Empty Transform
Shape Shape1337 = createNode("Shape");
Shape1337.USE = "HAnimJointShape";
Transform1336.children = new MFNode();

Transform1336.children[0] = Shape1337;

Transform1335.children = new MFNode();

Transform1335.children[0] = Transform1336;

HAnimSegment1334.children = new MFNode();

HAnimSegment1334.children[0] = Transform1335;

Shape Shape1338 = createNode("Shape");
LineSet LineSet1339 = createNode("LineSet");
LineSet1339.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1340 = createNode("Coordinate");
Coordinate1340.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet1339.coord = Coordinate1340;

//from r_acromioclavicular to r_shoulder vertices 2
ColorRGBA ColorRGBA1341 = createNode("ColorRGBA");
ColorRGBA1341.USE = "HAnimSegmentLineColorRGBA";
LineSet1339.color = ColorRGBA1341;

Shape1338.geometry = LineSet1339;

HAnimSegment1334.children[1] = Shape1338;

HAnimSite HAnimSite1342 = createNode("HAnimSite");
HAnimSite1342.name = "r_bideltoid_pt";
HAnimSite1342.DEF = "hanim_r_bideltoid_pt";
TouchSensor TouchSensor1343 = createNode("TouchSensor");
TouchSensor1343.description = "HAnimSite r_bideltoid_pt";
HAnimSite1342.children = new MFNode();

HAnimSite1342.children[0] = TouchSensor1343;

Shape Shape1344 = createNode("Shape");
Shape1344.USE = "HAnimSiteShape";
HAnimSite1342.children[1] = Shape1344;

HAnimSegment1334.children[2] = HAnimSite1342;

HAnimSite HAnimSite1345 = createNode("HAnimSite");
HAnimSite1345.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite1345.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite1345.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor1346 = createNode("TouchSensor");
TouchSensor1346.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite1345.children = new MFNode();

HAnimSite1345.children[0] = TouchSensor1346;

Shape Shape1347 = createNode("Shape");
Shape1347.USE = "HAnimSiteShape";
HAnimSite1345.children[1] = Shape1347;

HAnimSegment1334.children[3] = HAnimSite1345;

HAnimJoint1333.children = new MFNode();

HAnimJoint1333.children[0] = HAnimSegment1334;

HAnimJoint HAnimJoint1348 = createNode("HAnimJoint");
HAnimJoint1348.name = "r_shoulder";
HAnimJoint1348.DEF = "hanim_r_shoulder";
HAnimJoint1348.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint1348.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1348.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1349 = createNode("HAnimSegment");
HAnimSegment1349.name = "r_upperarm";
HAnimSegment1349.DEF = "hanim_r_upperarm";
Transform Transform1350 = createNode("Transform");
Transform1350.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform Transform1351 = createNode("Transform");
//Empty Transform
Shape Shape1352 = createNode("Shape");
Shape1352.USE = "HAnimJointShape";
Transform1351.children = new MFNode();

Transform1351.children[0] = Shape1352;

Transform1350.children = new MFNode();

Transform1350.children[0] = Transform1351;

HAnimSegment1349.children = new MFNode();

HAnimSegment1349.children[0] = Transform1350;

Shape Shape1353 = createNode("Shape");
LineSet LineSet1354 = createNode("LineSet");
LineSet1354.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1355 = createNode("Coordinate");
Coordinate1355.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet1354.coord = Coordinate1355;

//from r_shoulder to r_elbow vertices 2
ColorRGBA ColorRGBA1356 = createNode("ColorRGBA");
ColorRGBA1356.USE = "HAnimSegmentLineColorRGBA";
LineSet1354.color = ColorRGBA1356;

Shape1353.geometry = LineSet1354;

HAnimSegment1349.children[1] = Shape1353;

HAnimSite HAnimSite1357 = createNode("HAnimSite");
HAnimSite1357.name = "r_humeral_medial_epicondyles_pt";
HAnimSite1357.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite1357.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor1358 = createNode("TouchSensor");
TouchSensor1358.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite1357.children = new MFNode();

HAnimSite1357.children[0] = TouchSensor1358;

Shape Shape1359 = createNode("Shape");
Shape1359.USE = "HAnimSiteShape";
HAnimSite1357.children[1] = Shape1359;

HAnimSegment1349.children[2] = HAnimSite1357;

HAnimSite HAnimSite1360 = createNode("HAnimSite");
HAnimSite1360.name = "r_olecranon_pt";
HAnimSite1360.DEF = "hanim_r_olecranon_pt";
HAnimSite1360.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor1361 = createNode("TouchSensor");
TouchSensor1361.description = "HAnimSite r_olecranon_pt";
HAnimSite1360.children = new MFNode();

HAnimSite1360.children[0] = TouchSensor1361;

Shape Shape1362 = createNode("Shape");
Shape1362.USE = "HAnimSiteShape";
HAnimSite1360.children[1] = Shape1362;

HAnimSegment1349.children[3] = HAnimSite1360;

HAnimSite HAnimSite1363 = createNode("HAnimSite");
HAnimSite1363.name = "r_radial_styloid_pt";
HAnimSite1363.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1363.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor1364 = createNode("TouchSensor");
TouchSensor1364.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1363.children = new MFNode();

HAnimSite1363.children[0] = TouchSensor1364;

Shape Shape1365 = createNode("Shape");
Shape1365.USE = "HAnimSiteShape";
HAnimSite1363.children[1] = Shape1365;

HAnimSegment1349.children[4] = HAnimSite1363;

HAnimSite HAnimSite1366 = createNode("HAnimSite");
HAnimSite1366.name = "r_radiale_pt";
HAnimSite1366.DEF = "hanim_r_radiale_pt";
HAnimSite1366.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor1367 = createNode("TouchSensor");
TouchSensor1367.description = "HAnimSite r_radiale_pt";
HAnimSite1366.children = new MFNode();

HAnimSite1366.children[0] = TouchSensor1367;

Shape Shape1368 = createNode("Shape");
Shape1368.USE = "HAnimSiteShape";
HAnimSite1366.children[1] = Shape1368;

HAnimSegment1349.children[5] = HAnimSite1366;

HAnimJoint1348.children = new MFNode();

HAnimJoint1348.children[0] = HAnimSegment1349;

HAnimJoint HAnimJoint1369 = createNode("HAnimJoint");
HAnimJoint1369.name = "r_elbow";
HAnimJoint1369.DEF = "hanim_r_elbow";
HAnimJoint1369.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint1369.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1369.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1370 = createNode("HAnimSegment");
HAnimSegment1370.name = "r_forearm";
HAnimSegment1370.DEF = "hanim_r_forearm";
Transform Transform1371 = createNode("Transform");
Transform1371.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform Transform1372 = createNode("Transform");
//Empty Transform
Shape Shape1373 = createNode("Shape");
Shape1373.USE = "HAnimJointShape";
Transform1372.children = new MFNode();

Transform1372.children[0] = Shape1373;

Transform1371.children = new MFNode();

Transform1371.children[0] = Transform1372;

HAnimSegment1370.children = new MFNode();

HAnimSegment1370.children[0] = Transform1371;

Shape Shape1374 = createNode("Shape");
LineSet LineSet1375 = createNode("LineSet");
LineSet1375.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1376 = createNode("Coordinate");
Coordinate1376.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet1375.coord = Coordinate1376;

//from r_elbow to r_radiocarpal vertices 2
ColorRGBA ColorRGBA1377 = createNode("ColorRGBA");
ColorRGBA1377.USE = "HAnimSegmentLineColorRGBA";
LineSet1375.color = ColorRGBA1377;

Shape1374.geometry = LineSet1375;

HAnimSegment1370.children[1] = Shape1374;

HAnimSite HAnimSite1378 = createNode("HAnimSite");
HAnimSite1378.name = "r_ulnar_styloid_pt";
HAnimSite1378.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1378.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor1379 = createNode("TouchSensor");
TouchSensor1379.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1378.children = new MFNode();

HAnimSite1378.children[0] = TouchSensor1379;

Shape Shape1380 = createNode("Shape");
Shape1380.USE = "HAnimSiteShape";
HAnimSite1378.children[1] = Shape1380;

HAnimSegment1370.children[2] = HAnimSite1378;

HAnimJoint1369.children = new MFNode();

HAnimJoint1369.children[0] = HAnimSegment1370;

HAnimJoint HAnimJoint1381 = createNode("HAnimJoint");
HAnimJoint1381.name = "r_radiocarpal";
HAnimJoint1381.DEF = "hanim_r_radiocarpal";
HAnimJoint1381.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint1381.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1381.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1382 = createNode("HAnimSegment");
HAnimSegment1382.name = "r_carpal";
HAnimSegment1382.DEF = "hanim_r_carpal";
Transform Transform1383 = createNode("Transform");
Transform1383.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform1383.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform1383.rotation = new SFRotation(new float[0,0,1,-3.14]);
//Transform right hand
Transform Transform1384 = createNode("Transform");
Transform1384.rotation = new SFRotation(new float[0,1,0,1.57]);
//Transform right hand
Shape Shape1385 = createNode("Shape");
Shape1385.USE = "HAnimJointShape";
Transform1384.children = new MFNode();

Transform1384.children[0] = Shape1385;

Transform1383.children = new MFNode();

Transform1383.children[0] = Transform1384;

HAnimSegment1382.children = new MFNode();

HAnimSegment1382.children[0] = Transform1383;

Shape Shape1386 = createNode("Shape");
LineSet LineSet1387 = createNode("LineSet");
LineSet1387.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1388 = createNode("Coordinate");
Coordinate1388.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521]);
LineSet1387.coord = Coordinate1388;

//from r_radiocarpal to r_midcarpal_1 vertices 2
ColorRGBA ColorRGBA1389 = createNode("ColorRGBA");
ColorRGBA1389.USE = "HAnimSegmentLineColorRGBA";
LineSet1387.color = ColorRGBA1389;

Shape1386.geometry = LineSet1387;

HAnimSegment1382.children[1] = Shape1386;

Shape Shape1390 = createNode("Shape");
LineSet LineSet1391 = createNode("LineSet");
LineSet1391.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1392 = createNode("Coordinate");
Coordinate1392.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521]);
LineSet1391.coord = Coordinate1392;

//from r_radiocarpal to r_midcarpal_2 vertices 2
ColorRGBA ColorRGBA1393 = createNode("ColorRGBA");
ColorRGBA1393.USE = "HAnimSegmentLineColorRGBA";
LineSet1391.color = ColorRGBA1393;

Shape1390.geometry = LineSet1391;

HAnimSegment1382.children[2] = Shape1390;

Shape Shape1394 = createNode("Shape");
LineSet LineSet1395 = createNode("LineSet");
LineSet1395.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1396 = createNode("Coordinate");
Coordinate1396.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521]);
LineSet1395.coord = Coordinate1396;

//from r_radiocarpal to r_midcarpal_3 vertices 2
ColorRGBA ColorRGBA1397 = createNode("ColorRGBA");
ColorRGBA1397.USE = "HAnimSegmentLineColorRGBA";
LineSet1395.color = ColorRGBA1397;

Shape1394.geometry = LineSet1395;

HAnimSegment1382.children[3] = Shape1394;

Shape Shape1398 = createNode("Shape");
LineSet LineSet1399 = createNode("LineSet");
LineSet1399.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1400 = createNode("Coordinate");
Coordinate1400.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521]);
LineSet1399.coord = Coordinate1400;

//from r_radiocarpal to r_midcarpal_4_5 vertices 2
ColorRGBA ColorRGBA1401 = createNode("ColorRGBA");
ColorRGBA1401.USE = "HAnimSegmentLineColorRGBA";
LineSet1399.color = ColorRGBA1401;

Shape1398.geometry = LineSet1399;

HAnimSegment1382.children[4] = Shape1398;

HAnimJoint1381.children = new MFNode();

HAnimJoint1381.children[0] = HAnimSegment1382;

HAnimJoint HAnimJoint1402 = createNode("HAnimJoint");
HAnimJoint1402.name = "r_midcarpal_1";
HAnimJoint1402.DEF = "hanim_r_midcarpal_1";
HAnimJoint1402.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1402.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1403 = createNode("HAnimSegment");
HAnimSegment1403.name = "r_trapezium";
HAnimSegment1403.DEF = "hanim_r_trapezium";
Transform Transform1404 = createNode("Transform");
Transform1404.translation = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
Transform Transform1405 = createNode("Transform");
//Empty Transform
Shape Shape1406 = createNode("Shape");
Shape1406.USE = "HAnimJointShape";
Transform1405.children = new MFNode();

Transform1405.children[0] = Shape1406;

Transform1404.children = new MFNode();

Transform1404.children[0] = Transform1405;

HAnimSegment1403.children = new MFNode();

HAnimSegment1403.children[0] = Transform1404;

Shape Shape1407 = createNode("Shape");
LineSet LineSet1408 = createNode("LineSet");
LineSet1408.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1409 = createNode("Coordinate");
Coordinate1409.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473]);
LineSet1408.coord = Coordinate1409;

//from r_midcarpal_1 to r_carpometacarpal_1 vertices 1
ColorRGBA ColorRGBA1410 = createNode("ColorRGBA");
ColorRGBA1410.USE = "HAnimSegmentLineColorRGBA";
LineSet1408.color = ColorRGBA1410;

Shape1407.geometry = LineSet1408;

HAnimSegment1403.children[1] = Shape1407;

HAnimJoint1402.children = new MFNode();

HAnimJoint1402.children[0] = HAnimSegment1403;

HAnimJoint HAnimJoint1411 = createNode("HAnimJoint");
HAnimJoint1411.name = "r_carpometacarpal_1";
HAnimJoint1411.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1411.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint1411.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1411.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1412 = createNode("HAnimSegment");
HAnimSegment1412.name = "r_metacarpal_1";
HAnimSegment1412.DEF = "hanim_r_metacarpal_1";
Transform Transform1413 = createNode("Transform");
Transform1413.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
Transform Transform1414 = createNode("Transform");
//Empty Transform
Shape Shape1415 = createNode("Shape");
Shape1415.USE = "HAnimJointShape";
Transform1414.children = new MFNode();

Transform1414.children[0] = Shape1415;

Transform1413.children = new MFNode();

Transform1413.children[0] = Transform1414;

HAnimSegment1412.children = new MFNode();

HAnimSegment1412.children[0] = Transform1413;

Shape Shape1416 = createNode("Shape");
LineSet LineSet1417 = createNode("LineSet");
LineSet1417.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1418 = createNode("Coordinate");
Coordinate1418.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1417.coord = Coordinate1418;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2
ColorRGBA ColorRGBA1419 = createNode("ColorRGBA");
ColorRGBA1419.USE = "HAnimSegmentLineColorRGBA";
LineSet1417.color = ColorRGBA1419;

Shape1416.geometry = LineSet1417;

HAnimSegment1412.children[1] = Shape1416;

HAnimJoint1411.children = new MFNode();

HAnimJoint1411.children[0] = HAnimSegment1412;

HAnimJoint HAnimJoint1420 = createNode("HAnimJoint");
HAnimJoint1420.name = "r_metacarpophalangeal_1";
HAnimJoint1420.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1420.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint1420.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1420.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1421 = createNode("HAnimSegment");
HAnimSegment1421.name = "r_carpal_proximal_phalanx_1";
HAnimSegment1421.DEF = "hanim_r_carpal_proximal_phalanx_1";
Transform Transform1422 = createNode("Transform");
Transform1422.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
Transform Transform1423 = createNode("Transform");
//Empty Transform
Shape Shape1424 = createNode("Shape");
Shape1424.USE = "HAnimJointShape";
Transform1423.children = new MFNode();

Transform1423.children[0] = Shape1424;

Transform1422.children = new MFNode();

Transform1422.children[0] = Transform1423;

HAnimSegment1421.children = new MFNode();

HAnimSegment1421.children[0] = Transform1422;

Shape Shape1425 = createNode("Shape");
LineSet LineSet1426 = createNode("LineSet");
LineSet1426.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1427 = createNode("Coordinate");
Coordinate1427.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1426.coord = Coordinate1427;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2
ColorRGBA ColorRGBA1428 = createNode("ColorRGBA");
ColorRGBA1428.USE = "HAnimSegmentLineColorRGBA";
LineSet1426.color = ColorRGBA1428;

Shape1425.geometry = LineSet1426;

HAnimSegment1421.children[1] = Shape1425;

HAnimSite HAnimSite1429 = createNode("HAnimSite");
HAnimSite1429.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1429.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor1430 = createNode("TouchSensor");
TouchSensor1430.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1429.children = new MFNode();

HAnimSite1429.children[0] = TouchSensor1430;

Shape Shape1431 = createNode("Shape");
Shape1431.USE = "HAnimSiteShape";
HAnimSite1429.children[1] = Shape1431;

HAnimSegment1421.children[2] = HAnimSite1429;

HAnimJoint1420.children = new MFNode();

HAnimJoint1420.children[0] = HAnimSegment1421;

HAnimJoint HAnimJoint1432 = createNode("HAnimJoint");
HAnimJoint1432.name = "r_carpal_interphalangeal_1";
HAnimJoint1432.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1432.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1432.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1432.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1420.children[1] = HAnimJoint1432;

HAnimJoint1411.children[1] = HAnimJoint1420;

HAnimJoint1402.children[1] = HAnimJoint1411;

HAnimJoint1381.children[1] = HAnimJoint1402;

HAnimJoint HAnimJoint1433 = createNode("HAnimJoint");
HAnimJoint1433.name = "r_midcarpal_2";
HAnimJoint1433.DEF = "hanim_r_midcarpal_2";
HAnimJoint1433.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1433.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1434 = createNode("HAnimSegment");
HAnimSegment1434.name = "r_trapezoid";
HAnimSegment1434.DEF = "hanim_r_trapezoid";
Transform Transform1435 = createNode("Transform");
Transform1435.translation = new SFVec3f(new float[-0.1864,0.819,0.0506]);
Transform Transform1436 = createNode("Transform");
//Empty Transform
Shape Shape1437 = createNode("Shape");
Shape1437.USE = "HAnimJointShape";
Transform1436.children = new MFNode();

Transform1436.children[0] = Shape1437;

Transform1435.children = new MFNode();

Transform1435.children[0] = Transform1436;

HAnimSegment1434.children = new MFNode();

HAnimSegment1434.children[0] = Transform1435;

Shape Shape1438 = createNode("Shape");
LineSet LineSet1439 = createNode("LineSet");
LineSet1439.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1440 = createNode("Coordinate");
Coordinate1440.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218]);
LineSet1439.coord = Coordinate1440;

//from r_midcarpal_2 to r_carpometacarpal_2 vertices 1
ColorRGBA ColorRGBA1441 = createNode("ColorRGBA");
ColorRGBA1441.USE = "HAnimSegmentLineColorRGBA";
LineSet1439.color = ColorRGBA1441;

Shape1438.geometry = LineSet1439;

HAnimSegment1434.children[1] = Shape1438;

HAnimSite HAnimSite1442 = createNode("HAnimSite");
HAnimSite1442.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1442.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1442.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor1443 = createNode("TouchSensor");
TouchSensor1443.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite1442.children = new MFNode();

HAnimSite1442.children[0] = TouchSensor1443;

Shape Shape1444 = createNode("Shape");
Shape1444.USE = "HAnimSiteShape";
HAnimSite1442.children[1] = Shape1444;

HAnimSegment1434.children[2] = HAnimSite1442;

HAnimJoint1433.children = new MFNode();

HAnimJoint1433.children[0] = HAnimSegment1434;

HAnimJoint HAnimJoint1445 = createNode("HAnimJoint");
HAnimJoint1445.name = "r_carpometacarpal_2";
HAnimJoint1445.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1445.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1445.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1445.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1446 = createNode("HAnimSegment");
HAnimSegment1446.name = "r_metacarpal_2";
HAnimSegment1446.DEF = "hanim_r_metacarpal_2";
Transform Transform1447 = createNode("Transform");
Transform1447.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
Transform Transform1448 = createNode("Transform");
//Empty Transform
Shape Shape1449 = createNode("Shape");
Shape1449.USE = "HAnimJointShape";
Transform1448.children = new MFNode();

Transform1448.children[0] = Shape1449;

Transform1447.children = new MFNode();

Transform1447.children[0] = Transform1448;

HAnimSegment1446.children = new MFNode();

HAnimSegment1446.children[0] = Transform1447;

Shape Shape1450 = createNode("Shape");
LineSet LineSet1451 = createNode("LineSet");
LineSet1451.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1452 = createNode("Coordinate");
Coordinate1452.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1451.coord = Coordinate1452;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2
ColorRGBA ColorRGBA1453 = createNode("ColorRGBA");
ColorRGBA1453.USE = "HAnimSegmentLineColorRGBA";
LineSet1451.color = ColorRGBA1453;

Shape1450.geometry = LineSet1451;

HAnimSegment1446.children[1] = Shape1450;

HAnimJoint1445.children = new MFNode();

HAnimJoint1445.children[0] = HAnimSegment1446;

HAnimJoint HAnimJoint1454 = createNode("HAnimJoint");
HAnimJoint1454.name = "r_metacarpophalangeal_2";
HAnimJoint1454.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1454.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1454.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1454.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1455 = createNode("HAnimSegment");
HAnimSegment1455.name = "r_carpal_proximal_phalanx_2";
HAnimSegment1455.DEF = "hanim_r_carpal_proximal_phalanx_2";
Transform Transform1456 = createNode("Transform");
Transform1456.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
Transform Transform1457 = createNode("Transform");
//Empty Transform
Shape Shape1458 = createNode("Shape");
Shape1458.USE = "HAnimJointShape";
Transform1457.children = new MFNode();

Transform1457.children[0] = Shape1458;

Transform1456.children = new MFNode();

Transform1456.children[0] = Transform1457;

HAnimSegment1455.children = new MFNode();

HAnimSegment1455.children[0] = Transform1456;

Shape Shape1459 = createNode("Shape");
LineSet LineSet1460 = createNode("LineSet");
LineSet1460.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1461 = createNode("Coordinate");
Coordinate1461.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1460.coord = Coordinate1461;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1462 = createNode("ColorRGBA");
ColorRGBA1462.USE = "HAnimSegmentLineColorRGBA";
LineSet1460.color = ColorRGBA1462;

Shape1459.geometry = LineSet1460;

HAnimSegment1455.children[1] = Shape1459;

HAnimJoint1454.children = new MFNode();

HAnimJoint1454.children[0] = HAnimSegment1455;

HAnimJoint HAnimJoint1463 = createNode("HAnimJoint");
HAnimJoint1463.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1463.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1463.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1463.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1463.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1464 = createNode("HAnimSegment");
HAnimSegment1464.name = "r_carpal_middle_phalanx_2";
HAnimSegment1464.DEF = "hanim_r_carpal_middle_phalanx_2";
Transform Transform1465 = createNode("Transform");
Transform1465.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
Transform Transform1466 = createNode("Transform");
//Empty Transform
Shape Shape1467 = createNode("Shape");
Shape1467.USE = "HAnimJointShape";
Transform1466.children = new MFNode();

Transform1466.children[0] = Shape1467;

Transform1465.children = new MFNode();

Transform1465.children[0] = Transform1466;

HAnimSegment1464.children = new MFNode();

HAnimSegment1464.children[0] = Transform1465;

Shape Shape1468 = createNode("Shape");
LineSet LineSet1469 = createNode("LineSet");
LineSet1469.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1470 = createNode("Coordinate");
Coordinate1470.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1469.coord = Coordinate1470;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2
ColorRGBA ColorRGBA1471 = createNode("ColorRGBA");
ColorRGBA1471.USE = "HAnimSegmentLineColorRGBA";
LineSet1469.color = ColorRGBA1471;

Shape1468.geometry = LineSet1469;

HAnimSegment1464.children[1] = Shape1468;

HAnimSite HAnimSite1472 = createNode("HAnimSite");
HAnimSite1472.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1472.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor1473 = createNode("TouchSensor");
TouchSensor1473.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1472.children = new MFNode();

HAnimSite1472.children[0] = TouchSensor1473;

Shape Shape1474 = createNode("Shape");
Shape1474.USE = "HAnimSiteShape";
HAnimSite1472.children[1] = Shape1474;

HAnimSegment1464.children[2] = HAnimSite1472;

HAnimSite HAnimSite1475 = createNode("HAnimSite");
HAnimSite1475.name = "r_dactylion_pt";
HAnimSite1475.DEF = "hanim_r_dactylion_pt";
HAnimSite1475.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor1476 = createNode("TouchSensor");
TouchSensor1476.description = "HAnimSite r_dactylion_pt";
HAnimSite1475.children = new MFNode();

HAnimSite1475.children[0] = TouchSensor1476;

Shape Shape1477 = createNode("Shape");
Shape1477.USE = "HAnimSiteShape";
HAnimSite1475.children[1] = Shape1477;

HAnimSegment1464.children[3] = HAnimSite1475;

HAnimJoint1463.children = new MFNode();

HAnimJoint1463.children[0] = HAnimSegment1464;

HAnimJoint HAnimJoint1478 = createNode("HAnimJoint");
HAnimJoint1478.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1478.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1478.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1478.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1478.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1463.children[1] = HAnimJoint1478;

HAnimJoint1454.children[1] = HAnimJoint1463;

HAnimJoint1445.children[1] = HAnimJoint1454;

HAnimJoint1433.children[1] = HAnimJoint1445;

HAnimJoint1381.children[2] = HAnimJoint1433;

HAnimJoint HAnimJoint1479 = createNode("HAnimJoint");
HAnimJoint1479.name = "r_midcarpal_3";
HAnimJoint1479.DEF = "hanim_r_midcarpal_3";
HAnimJoint1479.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1479.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1480 = createNode("HAnimSegment");
HAnimSegment1480.name = "r_capitate";
HAnimSegment1480.DEF = "hanim_r_capitate";
Transform Transform1481 = createNode("Transform");
Transform1481.translation = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
Transform Transform1482 = createNode("Transform");
//Empty Transform
Shape Shape1483 = createNode("Shape");
Shape1483.USE = "HAnimJointShape";
Transform1482.children = new MFNode();

Transform1482.children[0] = Shape1483;

Transform1481.children = new MFNode();

Transform1481.children[0] = Transform1482;

HAnimSegment1480.children = new MFNode();

HAnimSegment1480.children[0] = Transform1481;

Shape Shape1484 = createNode("Shape");
LineSet LineSet1485 = createNode("LineSet");
LineSet1485.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1486 = createNode("Coordinate");
Coordinate1486.point = new MFVec3f(new float[-0.1972,0.806,-0.0468]);
LineSet1485.coord = Coordinate1486;

//from r_midcarpal_3 to r_carpometacarpal_3 vertices 1
ColorRGBA ColorRGBA1487 = createNode("ColorRGBA");
ColorRGBA1487.USE = "HAnimSegmentLineColorRGBA";
LineSet1485.color = ColorRGBA1487;

Shape1484.geometry = LineSet1485;

HAnimSegment1480.children[1] = Shape1484;

HAnimSite HAnimSite1488 = createNode("HAnimSite");
HAnimSite1488.name = "r_metacarpal_phalanx_3_pt";
HAnimSite1488.DEF = "hanim_r_metacarpal_phalanx_3_pt";
TouchSensor TouchSensor1489 = createNode("TouchSensor");
TouchSensor1489.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite1488.children = new MFNode();

HAnimSite1488.children[0] = TouchSensor1489;

Shape Shape1490 = createNode("Shape");
Shape1490.USE = "HAnimSiteShape";
HAnimSite1488.children[1] = Shape1490;

HAnimSegment1480.children[2] = HAnimSite1488;

HAnimJoint1479.children = new MFNode();

HAnimJoint1479.children[0] = HAnimSegment1480;

HAnimJoint HAnimJoint1491 = createNode("HAnimJoint");
HAnimJoint1491.name = "r_carpometacarpal_3";
HAnimJoint1491.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1491.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1491.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1491.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1492 = createNode("HAnimSegment");
HAnimSegment1492.name = "r_metacarpal_3";
HAnimSegment1492.DEF = "hanim_r_metacarpal_3";
Transform Transform1493 = createNode("Transform");
Transform1493.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
Transform Transform1494 = createNode("Transform");
//Empty Transform
Shape Shape1495 = createNode("Shape");
Shape1495.USE = "HAnimJointShape";
Transform1494.children = new MFNode();

Transform1494.children[0] = Shape1495;

Transform1493.children = new MFNode();

Transform1493.children[0] = Transform1494;

HAnimSegment1492.children = new MFNode();

HAnimSegment1492.children[0] = Transform1493;

Shape Shape1496 = createNode("Shape");
LineSet LineSet1497 = createNode("LineSet");
LineSet1497.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1498 = createNode("Coordinate");
Coordinate1498.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1497.coord = Coordinate1498;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2
ColorRGBA ColorRGBA1499 = createNode("ColorRGBA");
ColorRGBA1499.USE = "HAnimSegmentLineColorRGBA";
LineSet1497.color = ColorRGBA1499;

Shape1496.geometry = LineSet1497;

HAnimSegment1492.children[1] = Shape1496;

HAnimJoint1491.children = new MFNode();

HAnimJoint1491.children[0] = HAnimSegment1492;

HAnimJoint HAnimJoint1500 = createNode("HAnimJoint");
HAnimJoint1500.name = "r_metacarpophalangeal_3";
HAnimJoint1500.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1500.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1500.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1500.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1501 = createNode("HAnimSegment");
HAnimSegment1501.name = "r_carpal_proximal_phalanx_3";
HAnimSegment1501.DEF = "hanim_r_carpal_proximal_phalanx_3";
Transform Transform1502 = createNode("Transform");
Transform1502.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
Transform Transform1503 = createNode("Transform");
//Empty Transform
Shape Shape1504 = createNode("Shape");
Shape1504.USE = "HAnimJointShape";
Transform1503.children = new MFNode();

Transform1503.children[0] = Shape1504;

Transform1502.children = new MFNode();

Transform1502.children[0] = Transform1503;

HAnimSegment1501.children = new MFNode();

HAnimSegment1501.children[0] = Transform1502;

Shape Shape1505 = createNode("Shape");
LineSet LineSet1506 = createNode("LineSet");
LineSet1506.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1507 = createNode("Coordinate");
Coordinate1507.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1506.coord = Coordinate1507;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1508 = createNode("ColorRGBA");
ColorRGBA1508.USE = "HAnimSegmentLineColorRGBA";
LineSet1506.color = ColorRGBA1508;

Shape1505.geometry = LineSet1506;

HAnimSegment1501.children[1] = Shape1505;

HAnimJoint1500.children = new MFNode();

HAnimJoint1500.children[0] = HAnimSegment1501;

HAnimJoint HAnimJoint1509 = createNode("HAnimJoint");
HAnimJoint1509.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1509.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1509.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1509.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1509.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1510 = createNode("HAnimSegment");
HAnimSegment1510.name = "r_carpal_middle_phalanx_3";
HAnimSegment1510.DEF = "hanim_r_carpal_middle_phalanx_3";
Transform Transform1511 = createNode("Transform");
Transform1511.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
Transform Transform1512 = createNode("Transform");
//Empty Transform
Shape Shape1513 = createNode("Shape");
Shape1513.USE = "HAnimJointShape";
Transform1512.children = new MFNode();

Transform1512.children[0] = Shape1513;

Transform1511.children = new MFNode();

Transform1511.children[0] = Transform1512;

HAnimSegment1510.children = new MFNode();

HAnimSegment1510.children[0] = Transform1511;

Shape Shape1514 = createNode("Shape");
LineSet LineSet1515 = createNode("LineSet");
LineSet1515.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1516 = createNode("Coordinate");
Coordinate1516.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1515.coord = Coordinate1516;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2
ColorRGBA ColorRGBA1517 = createNode("ColorRGBA");
ColorRGBA1517.USE = "HAnimSegmentLineColorRGBA";
LineSet1515.color = ColorRGBA1517;

Shape1514.geometry = LineSet1515;

HAnimSegment1510.children[1] = Shape1514;

HAnimSite HAnimSite1518 = createNode("HAnimSite");
HAnimSite1518.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1518.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor1519 = createNode("TouchSensor");
TouchSensor1519.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1518.children = new MFNode();

HAnimSite1518.children[0] = TouchSensor1519;

Shape Shape1520 = createNode("Shape");
Shape1520.USE = "HAnimSiteShape";
HAnimSite1518.children[1] = Shape1520;

HAnimSegment1510.children[2] = HAnimSite1518;

HAnimJoint1509.children = new MFNode();

HAnimJoint1509.children[0] = HAnimSegment1510;

HAnimJoint HAnimJoint1521 = createNode("HAnimJoint");
HAnimJoint1521.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1521.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1521.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1521.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1521.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1509.children[1] = HAnimJoint1521;

HAnimJoint1500.children[1] = HAnimJoint1509;

HAnimJoint1491.children[1] = HAnimJoint1500;

HAnimJoint1479.children[1] = HAnimJoint1491;

HAnimJoint1381.children[3] = HAnimJoint1479;

HAnimJoint HAnimJoint1522 = createNode("HAnimJoint");
HAnimJoint1522.name = "r_midcarpal_4_5";
HAnimJoint1522.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1522.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1522.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1523 = createNode("HAnimSegment");
HAnimSegment1523.name = "r_hamate";
HAnimSegment1523.DEF = "hanim_r_hamate";
Transform Transform1524 = createNode("Transform");
Transform1524.translation = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
Transform Transform1525 = createNode("Transform");
//Empty Transform
Shape Shape1526 = createNode("Shape");
Shape1526.USE = "HAnimJointShape";
Transform1525.children = new MFNode();

Transform1525.children[0] = Shape1526;

Transform1524.children = new MFNode();

Transform1524.children[0] = Transform1525;

HAnimSegment1523.children = new MFNode();

HAnimSegment1523.children[0] = Transform1524;

Shape Shape1527 = createNode("Shape");
LineSet LineSet1528 = createNode("LineSet");
LineSet1528.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1529 = createNode("Coordinate");
Coordinate1529.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732]);
LineSet1528.coord = Coordinate1529;

//from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 1
ColorRGBA ColorRGBA1530 = createNode("ColorRGBA");
ColorRGBA1530.USE = "HAnimSegmentLineColorRGBA";
LineSet1528.color = ColorRGBA1530;

Shape1527.geometry = LineSet1528;

HAnimSegment1523.children[1] = Shape1527;

Shape Shape1531 = createNode("Shape");
LineSet LineSet1532 = createNode("LineSet");
LineSet1532.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1533 = createNode("Coordinate");
Coordinate1533.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975]);
LineSet1532.coord = Coordinate1533;

//from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 1
ColorRGBA ColorRGBA1534 = createNode("ColorRGBA");
ColorRGBA1534.USE = "HAnimSegmentLineColorRGBA";
LineSet1532.color = ColorRGBA1534;

Shape1531.geometry = LineSet1532;

HAnimSegment1523.children[2] = Shape1531;

HAnimSite HAnimSite1535 = createNode("HAnimSite");
HAnimSite1535.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1535.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1535.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor1536 = createNode("TouchSensor");
TouchSensor1536.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite1535.children = new MFNode();

HAnimSite1535.children[0] = TouchSensor1536;

Shape Shape1537 = createNode("Shape");
Shape1537.USE = "HAnimSiteShape";
HAnimSite1535.children[1] = Shape1537;

HAnimSegment1523.children[3] = HAnimSite1535;

HAnimJoint1522.children = new MFNode();

HAnimJoint1522.children[0] = HAnimSegment1523;

HAnimJoint HAnimJoint1538 = createNode("HAnimJoint");
HAnimJoint1538.name = "r_carpometacarpal_4";
HAnimJoint1538.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1538.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1538.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1538.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1539 = createNode("HAnimSegment");
HAnimSegment1539.name = "r_metacarpal_4";
HAnimSegment1539.DEF = "hanim_r_metacarpal_4";
Transform Transform1540 = createNode("Transform");
Transform1540.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
Transform Transform1541 = createNode("Transform");
//Empty Transform
Shape Shape1542 = createNode("Shape");
Shape1542.USE = "HAnimJointShape";
Transform1541.children = new MFNode();

Transform1541.children[0] = Shape1542;

Transform1540.children = new MFNode();

Transform1540.children[0] = Transform1541;

HAnimSegment1539.children = new MFNode();

HAnimSegment1539.children[0] = Transform1540;

Shape Shape1543 = createNode("Shape");
LineSet LineSet1544 = createNode("LineSet");
LineSet1544.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1545 = createNode("Coordinate");
Coordinate1545.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1544.coord = Coordinate1545;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2
ColorRGBA ColorRGBA1546 = createNode("ColorRGBA");
ColorRGBA1546.USE = "HAnimSegmentLineColorRGBA";
LineSet1544.color = ColorRGBA1546;

Shape1543.geometry = LineSet1544;

HAnimSegment1539.children[1] = Shape1543;

HAnimJoint1538.children = new MFNode();

HAnimJoint1538.children[0] = HAnimSegment1539;

HAnimJoint HAnimJoint1547 = createNode("HAnimJoint");
HAnimJoint1547.name = "r_metacarpophalangeal_4";
HAnimJoint1547.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1547.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1547.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1547.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1548 = createNode("HAnimSegment");
HAnimSegment1548.name = "r_carpal_proximal_phalanx_4";
HAnimSegment1548.DEF = "hanim_r_carpal_proximal_phalanx_4";
Transform Transform1549 = createNode("Transform");
Transform1549.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
Transform Transform1550 = createNode("Transform");
//Empty Transform
Shape Shape1551 = createNode("Shape");
Shape1551.USE = "HAnimJointShape";
Transform1550.children = new MFNode();

Transform1550.children[0] = Shape1551;

Transform1549.children = new MFNode();

Transform1549.children[0] = Transform1550;

HAnimSegment1548.children = new MFNode();

HAnimSegment1548.children[0] = Transform1549;

Shape Shape1552 = createNode("Shape");
LineSet LineSet1553 = createNode("LineSet");
LineSet1553.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1554 = createNode("Coordinate");
Coordinate1554.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1553.coord = Coordinate1554;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1555 = createNode("ColorRGBA");
ColorRGBA1555.USE = "HAnimSegmentLineColorRGBA";
LineSet1553.color = ColorRGBA1555;

Shape1552.geometry = LineSet1553;

HAnimSegment1548.children[1] = Shape1552;

HAnimJoint1547.children = new MFNode();

HAnimJoint1547.children[0] = HAnimSegment1548;

HAnimJoint HAnimJoint1556 = createNode("HAnimJoint");
HAnimJoint1556.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1556.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1556.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1556.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1556.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1557 = createNode("HAnimSegment");
HAnimSegment1557.name = "r_carpal_middle_phalanx_4";
HAnimSegment1557.DEF = "hanim_r_carpal_middle_phalanx_4";
Transform Transform1558 = createNode("Transform");
Transform1558.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
Transform Transform1559 = createNode("Transform");
//Empty Transform
Shape Shape1560 = createNode("Shape");
Shape1560.USE = "HAnimJointShape";
Transform1559.children = new MFNode();

Transform1559.children[0] = Shape1560;

Transform1558.children = new MFNode();

Transform1558.children[0] = Transform1559;

HAnimSegment1557.children = new MFNode();

HAnimSegment1557.children[0] = Transform1558;

Shape Shape1561 = createNode("Shape");
LineSet LineSet1562 = createNode("LineSet");
LineSet1562.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1563 = createNode("Coordinate");
Coordinate1563.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1562.coord = Coordinate1563;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2
ColorRGBA ColorRGBA1564 = createNode("ColorRGBA");
ColorRGBA1564.USE = "HAnimSegmentLineColorRGBA";
LineSet1562.color = ColorRGBA1564;

Shape1561.geometry = LineSet1562;

HAnimSegment1557.children[1] = Shape1561;

HAnimSite HAnimSite1565 = createNode("HAnimSite");
HAnimSite1565.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1565.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor1566 = createNode("TouchSensor");
TouchSensor1566.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1565.children = new MFNode();

HAnimSite1565.children[0] = TouchSensor1566;

Shape Shape1567 = createNode("Shape");
Shape1567.USE = "HAnimSiteShape";
HAnimSite1565.children[1] = Shape1567;

HAnimSegment1557.children[2] = HAnimSite1565;

HAnimJoint1556.children = new MFNode();

HAnimJoint1556.children[0] = HAnimSegment1557;

HAnimJoint HAnimJoint1568 = createNode("HAnimJoint");
HAnimJoint1568.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1568.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1568.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1568.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1568.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1556.children[1] = HAnimJoint1568;

HAnimJoint1547.children[1] = HAnimJoint1556;

HAnimJoint1538.children[1] = HAnimJoint1547;

HAnimJoint1522.children[1] = HAnimJoint1538;

HAnimJoint HAnimJoint1569 = createNode("HAnimJoint");
HAnimJoint1569.name = "r_carpometacarpal_5";
HAnimJoint1569.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1569.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1569.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1569.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1570 = createNode("HAnimSegment");
HAnimSegment1570.name = "r_metacarpal_5";
HAnimSegment1570.DEF = "hanim_r_metacarpal_5";
Transform Transform1571 = createNode("Transform");
Transform1571.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
Transform Transform1572 = createNode("Transform");
//Empty Transform
Shape Shape1573 = createNode("Shape");
Shape1573.USE = "HAnimJointShape";
Transform1572.children = new MFNode();

Transform1572.children[0] = Shape1573;

Transform1571.children = new MFNode();

Transform1571.children[0] = Transform1572;

HAnimSegment1570.children = new MFNode();

HAnimSegment1570.children[0] = Transform1571;

Shape Shape1574 = createNode("Shape");
LineSet LineSet1575 = createNode("LineSet");
LineSet1575.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1576 = createNode("Coordinate");
Coordinate1576.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1575.coord = Coordinate1576;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2
ColorRGBA ColorRGBA1577 = createNode("ColorRGBA");
ColorRGBA1577.USE = "HAnimSegmentLineColorRGBA";
LineSet1575.color = ColorRGBA1577;

Shape1574.geometry = LineSet1575;

HAnimSegment1570.children[1] = Shape1574;

HAnimJoint1569.children = new MFNode();

HAnimJoint1569.children[0] = HAnimSegment1570;

HAnimJoint HAnimJoint1578 = createNode("HAnimJoint");
HAnimJoint1578.name = "r_metacarpophalangeal_5";
HAnimJoint1578.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1578.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1578.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1578.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1579 = createNode("HAnimSegment");
HAnimSegment1579.name = "r_carpal_proximal_phalanx_5";
HAnimSegment1579.DEF = "hanim_r_carpal_proximal_phalanx_5";
Transform Transform1580 = createNode("Transform");
Transform1580.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
Transform Transform1581 = createNode("Transform");
//Empty Transform
Shape Shape1582 = createNode("Shape");
Shape1582.USE = "HAnimJointShape";
Transform1581.children = new MFNode();

Transform1581.children[0] = Shape1582;

Transform1580.children = new MFNode();

Transform1580.children[0] = Transform1581;

HAnimSegment1579.children = new MFNode();

HAnimSegment1579.children[0] = Transform1580;

Shape Shape1583 = createNode("Shape");
LineSet LineSet1584 = createNode("LineSet");
LineSet1584.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1585 = createNode("Coordinate");
Coordinate1585.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1584.coord = Coordinate1585;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1586 = createNode("ColorRGBA");
ColorRGBA1586.USE = "HAnimSegmentLineColorRGBA";
LineSet1584.color = ColorRGBA1586;

Shape1583.geometry = LineSet1584;

HAnimSegment1579.children[1] = Shape1583;

HAnimJoint1578.children = new MFNode();

HAnimJoint1578.children[0] = HAnimSegment1579;

HAnimJoint HAnimJoint1587 = createNode("HAnimJoint");
HAnimJoint1587.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1587.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1587.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1587.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1587.llimit = new MFFloat(new float[0,0,0]);
HAnimSegment HAnimSegment1588 = createNode("HAnimSegment");
HAnimSegment1588.name = "r_carpal_middle_phalanx_5";
HAnimSegment1588.DEF = "hanim_r_carpal_middle_phalanx_5";
Transform Transform1589 = createNode("Transform");
Transform1589.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
Transform Transform1590 = createNode("Transform");
//Empty Transform
Shape Shape1591 = createNode("Shape");
Shape1591.USE = "HAnimJointShape";
Transform1590.children = new MFNode();

Transform1590.children[0] = Shape1591;

Transform1589.children = new MFNode();

Transform1589.children[0] = Transform1590;

HAnimSegment1588.children = new MFNode();

HAnimSegment1588.children[0] = Transform1589;

Shape Shape1592 = createNode("Shape");
LineSet LineSet1593 = createNode("LineSet");
LineSet1593.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1594 = createNode("Coordinate");
Coordinate1594.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1593.coord = Coordinate1594;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2
ColorRGBA ColorRGBA1595 = createNode("ColorRGBA");
ColorRGBA1595.USE = "HAnimSegmentLineColorRGBA";
LineSet1593.color = ColorRGBA1595;

Shape1592.geometry = LineSet1593;

HAnimSegment1588.children[1] = Shape1592;

HAnimSite HAnimSite1596 = createNode("HAnimSite");
HAnimSite1596.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1596.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor1597 = createNode("TouchSensor");
TouchSensor1597.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1596.children = new MFNode();

HAnimSite1596.children[0] = TouchSensor1597;

Shape Shape1598 = createNode("Shape");
Shape1598.USE = "HAnimSiteShape";
HAnimSite1596.children[1] = Shape1598;

HAnimSegment1588.children[2] = HAnimSite1596;

HAnimJoint1587.children = new MFNode();

HAnimJoint1587.children[0] = HAnimSegment1588;

HAnimJoint HAnimJoint1599 = createNode("HAnimJoint");
HAnimJoint1599.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1599.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1599.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1599.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1599.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1587.children[1] = HAnimJoint1599;

HAnimJoint1578.children[1] = HAnimJoint1587;

HAnimJoint1569.children[1] = HAnimJoint1578;

HAnimJoint1522.children[2] = HAnimJoint1569;

HAnimJoint1381.children[4] = HAnimJoint1522;

HAnimJoint1369.children[1] = HAnimJoint1381;

HAnimJoint1348.children[1] = HAnimJoint1369;

HAnimJoint1333.children[1] = HAnimJoint1348;

HAnimJoint1324.children[1] = HAnimJoint1333;

HAnimJoint844.children[3] = HAnimJoint1324;

HAnimJoint829.children[1] = HAnimJoint844;

HAnimJoint820.children[1] = HAnimJoint829;

HAnimJoint811.children[1] = HAnimJoint820;

HAnimJoint802.children[1] = HAnimJoint811;

HAnimJoint790.children[1] = HAnimJoint802;

HAnimJoint769.children[1] = HAnimJoint790;

HAnimJoint760.children[1] = HAnimJoint769;

HAnimJoint751.children[1] = HAnimJoint760;

HAnimJoint736.children[1] = HAnimJoint751;

HAnimJoint724.children[1] = HAnimJoint736;

HAnimJoint715.children[1] = HAnimJoint724;

HAnimJoint706.children[1] = HAnimJoint715;

HAnimJoint697.children[1] = HAnimJoint706;

HAnimJoint679.children[1] = HAnimJoint697;

HAnimJoint670.children[1] = HAnimJoint679;

HAnimJoint661.children[1] = HAnimJoint670;

HAnimJoint44.children[2] = HAnimJoint661;

HAnimHumanoid43.joints = new MFNode();

HAnimHumanoid43.joints[0] = HAnimJoint44;

HAnimJoint HAnimJoint1600 = createNode("HAnimJoint");
HAnimJoint1600.USE = "hanim_humanoid_root";
HAnimHumanoid43.joints[1] = HAnimJoint1600;

HAnimJoint HAnimJoint1601 = createNode("HAnimJoint");
HAnimJoint1601.USE = "hanim_sacroiliac";
HAnimHumanoid43.joints[2] = HAnimJoint1601;

HAnimJoint HAnimJoint1602 = createNode("HAnimJoint");
HAnimJoint1602.USE = "hanim_l_hip";
HAnimHumanoid43.joints[3] = HAnimJoint1602;

HAnimJoint HAnimJoint1603 = createNode("HAnimJoint");
HAnimJoint1603.USE = "hanim_l_knee";
HAnimHumanoid43.joints[4] = HAnimJoint1603;

HAnimJoint HAnimJoint1604 = createNode("HAnimJoint");
HAnimJoint1604.USE = "hanim_l_talocrural";
HAnimHumanoid43.joints[5] = HAnimJoint1604;

HAnimJoint HAnimJoint1605 = createNode("HAnimJoint");
HAnimJoint1605.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid43.joints[6] = HAnimJoint1605;

HAnimJoint HAnimJoint1606 = createNode("HAnimJoint");
HAnimJoint1606.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid43.joints[7] = HAnimJoint1606;

HAnimJoint HAnimJoint1607 = createNode("HAnimJoint");
HAnimJoint1607.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid43.joints[8] = HAnimJoint1607;

HAnimJoint HAnimJoint1608 = createNode("HAnimJoint");
HAnimJoint1608.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid43.joints[9] = HAnimJoint1608;

HAnimJoint HAnimJoint1609 = createNode("HAnimJoint");
HAnimJoint1609.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[10] = HAnimJoint1609;

HAnimJoint HAnimJoint1610 = createNode("HAnimJoint");
HAnimJoint1610.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid43.joints[11] = HAnimJoint1610;

HAnimJoint HAnimJoint1611 = createNode("HAnimJoint");
HAnimJoint1611.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid43.joints[12] = HAnimJoint1611;

HAnimJoint HAnimJoint1612 = createNode("HAnimJoint");
HAnimJoint1612.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid43.joints[13] = HAnimJoint1612;

HAnimJoint HAnimJoint1613 = createNode("HAnimJoint");
HAnimJoint1613.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[14] = HAnimJoint1613;

HAnimJoint HAnimJoint1614 = createNode("HAnimJoint");
HAnimJoint1614.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[15] = HAnimJoint1614;

HAnimJoint HAnimJoint1615 = createNode("HAnimJoint");
HAnimJoint1615.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid43.joints[16] = HAnimJoint1615;

HAnimJoint HAnimJoint1616 = createNode("HAnimJoint");
HAnimJoint1616.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid43.joints[17] = HAnimJoint1616;

HAnimJoint HAnimJoint1617 = createNode("HAnimJoint");
HAnimJoint1617.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid43.joints[18] = HAnimJoint1617;

HAnimJoint HAnimJoint1618 = createNode("HAnimJoint");
HAnimJoint1618.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[19] = HAnimJoint1618;

HAnimJoint HAnimJoint1619 = createNode("HAnimJoint");
HAnimJoint1619.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[20] = HAnimJoint1619;

HAnimJoint HAnimJoint1620 = createNode("HAnimJoint");
HAnimJoint1620.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid43.joints[21] = HAnimJoint1620;

HAnimJoint HAnimJoint1621 = createNode("HAnimJoint");
HAnimJoint1621.USE = "hanim_l_transversetarsal";
HAnimHumanoid43.joints[22] = HAnimJoint1621;

HAnimJoint HAnimJoint1622 = createNode("HAnimJoint");
HAnimJoint1622.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid43.joints[23] = HAnimJoint1622;

HAnimJoint HAnimJoint1623 = createNode("HAnimJoint");
HAnimJoint1623.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid43.joints[24] = HAnimJoint1623;

HAnimJoint HAnimJoint1624 = createNode("HAnimJoint");
HAnimJoint1624.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[25] = HAnimJoint1624;

HAnimJoint HAnimJoint1625 = createNode("HAnimJoint");
HAnimJoint1625.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[26] = HAnimJoint1625;

HAnimJoint HAnimJoint1626 = createNode("HAnimJoint");
HAnimJoint1626.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid43.joints[27] = HAnimJoint1626;

HAnimJoint HAnimJoint1627 = createNode("HAnimJoint");
HAnimJoint1627.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid43.joints[28] = HAnimJoint1627;

HAnimJoint HAnimJoint1628 = createNode("HAnimJoint");
HAnimJoint1628.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[29] = HAnimJoint1628;

HAnimJoint HAnimJoint1629 = createNode("HAnimJoint");
HAnimJoint1629.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[30] = HAnimJoint1629;

HAnimJoint HAnimJoint1630 = createNode("HAnimJoint");
HAnimJoint1630.USE = "hanim_r_hip";
HAnimHumanoid43.joints[31] = HAnimJoint1630;

HAnimJoint HAnimJoint1631 = createNode("HAnimJoint");
HAnimJoint1631.USE = "hanim_r_knee";
HAnimHumanoid43.joints[32] = HAnimJoint1631;

HAnimJoint HAnimJoint1632 = createNode("HAnimJoint");
HAnimJoint1632.USE = "hanim_r_talocrural";
HAnimHumanoid43.joints[33] = HAnimJoint1632;

HAnimJoint HAnimJoint1633 = createNode("HAnimJoint");
HAnimJoint1633.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid43.joints[34] = HAnimJoint1633;

HAnimJoint HAnimJoint1634 = createNode("HAnimJoint");
HAnimJoint1634.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid43.joints[35] = HAnimJoint1634;

HAnimJoint HAnimJoint1635 = createNode("HAnimJoint");
HAnimJoint1635.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid43.joints[36] = HAnimJoint1635;

HAnimJoint HAnimJoint1636 = createNode("HAnimJoint");
HAnimJoint1636.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid43.joints[37] = HAnimJoint1636;

HAnimJoint HAnimJoint1637 = createNode("HAnimJoint");
HAnimJoint1637.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid43.joints[38] = HAnimJoint1637;

HAnimJoint HAnimJoint1638 = createNode("HAnimJoint");
HAnimJoint1638.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid43.joints[39] = HAnimJoint1638;

HAnimJoint HAnimJoint1639 = createNode("HAnimJoint");
HAnimJoint1639.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid43.joints[40] = HAnimJoint1639;

HAnimJoint HAnimJoint1640 = createNode("HAnimJoint");
HAnimJoint1640.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid43.joints[41] = HAnimJoint1640;

HAnimJoint HAnimJoint1641 = createNode("HAnimJoint");
HAnimJoint1641.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[42] = HAnimJoint1641;

HAnimJoint HAnimJoint1642 = createNode("HAnimJoint");
HAnimJoint1642.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid43.joints[43] = HAnimJoint1642;

HAnimJoint HAnimJoint1643 = createNode("HAnimJoint");
HAnimJoint1643.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid43.joints[44] = HAnimJoint1643;

HAnimJoint HAnimJoint1644 = createNode("HAnimJoint");
HAnimJoint1644.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid43.joints[45] = HAnimJoint1644;

HAnimJoint HAnimJoint1645 = createNode("HAnimJoint");
HAnimJoint1645.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid43.joints[46] = HAnimJoint1645;

HAnimJoint HAnimJoint1646 = createNode("HAnimJoint");
HAnimJoint1646.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[47] = HAnimJoint1646;

HAnimJoint HAnimJoint1647 = createNode("HAnimJoint");
HAnimJoint1647.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid43.joints[48] = HAnimJoint1647;

HAnimJoint HAnimJoint1648 = createNode("HAnimJoint");
HAnimJoint1648.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid43.joints[49] = HAnimJoint1648;

HAnimJoint HAnimJoint1649 = createNode("HAnimJoint");
HAnimJoint1649.USE = "hanim_r_transversetarsal";
HAnimHumanoid43.joints[50] = HAnimJoint1649;

HAnimJoint HAnimJoint1650 = createNode("HAnimJoint");
HAnimJoint1650.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid43.joints[51] = HAnimJoint1650;

HAnimJoint HAnimJoint1651 = createNode("HAnimJoint");
HAnimJoint1651.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid43.joints[52] = HAnimJoint1651;

HAnimJoint HAnimJoint1652 = createNode("HAnimJoint");
HAnimJoint1652.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[53] = HAnimJoint1652;

HAnimJoint HAnimJoint1653 = createNode("HAnimJoint");
HAnimJoint1653.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid43.joints[54] = HAnimJoint1653;

HAnimJoint HAnimJoint1654 = createNode("HAnimJoint");
HAnimJoint1654.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid43.joints[55] = HAnimJoint1654;

HAnimJoint HAnimJoint1655 = createNode("HAnimJoint");
HAnimJoint1655.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid43.joints[56] = HAnimJoint1655;

HAnimJoint HAnimJoint1656 = createNode("HAnimJoint");
HAnimJoint1656.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[57] = HAnimJoint1656;

HAnimJoint HAnimJoint1657 = createNode("HAnimJoint");
HAnimJoint1657.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid43.joints[58] = HAnimJoint1657;

HAnimJoint HAnimJoint1658 = createNode("HAnimJoint");
HAnimJoint1658.USE = "hanim_vl5";
HAnimHumanoid43.joints[59] = HAnimJoint1658;

HAnimJoint HAnimJoint1659 = createNode("HAnimJoint");
HAnimJoint1659.USE = "hanim_vl4";
HAnimHumanoid43.joints[60] = HAnimJoint1659;

HAnimJoint HAnimJoint1660 = createNode("HAnimJoint");
HAnimJoint1660.USE = "hanim_vl3";
HAnimHumanoid43.joints[61] = HAnimJoint1660;

HAnimJoint HAnimJoint1661 = createNode("HAnimJoint");
HAnimJoint1661.USE = "hanim_vl2";
HAnimHumanoid43.joints[62] = HAnimJoint1661;

HAnimJoint HAnimJoint1662 = createNode("HAnimJoint");
HAnimJoint1662.USE = "hanim_vl1";
HAnimHumanoid43.joints[63] = HAnimJoint1662;

HAnimJoint HAnimJoint1663 = createNode("HAnimJoint");
HAnimJoint1663.USE = "hanim_vt12";
HAnimHumanoid43.joints[64] = HAnimJoint1663;

HAnimJoint HAnimJoint1664 = createNode("HAnimJoint");
HAnimJoint1664.USE = "hanim_vt11";
HAnimHumanoid43.joints[65] = HAnimJoint1664;

HAnimJoint HAnimJoint1665 = createNode("HAnimJoint");
HAnimJoint1665.USE = "hanim_vt10";
HAnimHumanoid43.joints[66] = HAnimJoint1665;

HAnimJoint HAnimJoint1666 = createNode("HAnimJoint");
HAnimJoint1666.USE = "hanim_vt9";
HAnimHumanoid43.joints[67] = HAnimJoint1666;

HAnimJoint HAnimJoint1667 = createNode("HAnimJoint");
HAnimJoint1667.USE = "hanim_vt8";
HAnimHumanoid43.joints[68] = HAnimJoint1667;

HAnimJoint HAnimJoint1668 = createNode("HAnimJoint");
HAnimJoint1668.USE = "hanim_vt7";
HAnimHumanoid43.joints[69] = HAnimJoint1668;

HAnimJoint HAnimJoint1669 = createNode("HAnimJoint");
HAnimJoint1669.USE = "hanim_vt6";
HAnimHumanoid43.joints[70] = HAnimJoint1669;

HAnimJoint HAnimJoint1670 = createNode("HAnimJoint");
HAnimJoint1670.USE = "hanim_vt5";
HAnimHumanoid43.joints[71] = HAnimJoint1670;

HAnimJoint HAnimJoint1671 = createNode("HAnimJoint");
HAnimJoint1671.USE = "hanim_vt4";
HAnimHumanoid43.joints[72] = HAnimJoint1671;

HAnimJoint HAnimJoint1672 = createNode("HAnimJoint");
HAnimJoint1672.USE = "hanim_vt3";
HAnimHumanoid43.joints[73] = HAnimJoint1672;

HAnimJoint HAnimJoint1673 = createNode("HAnimJoint");
HAnimJoint1673.USE = "hanim_vt2";
HAnimHumanoid43.joints[74] = HAnimJoint1673;

HAnimJoint HAnimJoint1674 = createNode("HAnimJoint");
HAnimJoint1674.USE = "hanim_vt1";
HAnimHumanoid43.joints[75] = HAnimJoint1674;

HAnimJoint HAnimJoint1675 = createNode("HAnimJoint");
HAnimJoint1675.USE = "hanim_vc7";
HAnimHumanoid43.joints[76] = HAnimJoint1675;

HAnimJoint HAnimJoint1676 = createNode("HAnimJoint");
HAnimJoint1676.USE = "hanim_vc6";
HAnimHumanoid43.joints[77] = HAnimJoint1676;

HAnimJoint HAnimJoint1677 = createNode("HAnimJoint");
HAnimJoint1677.USE = "hanim_vc5";
HAnimHumanoid43.joints[78] = HAnimJoint1677;

HAnimJoint HAnimJoint1678 = createNode("HAnimJoint");
HAnimJoint1678.USE = "hanim_vc4";
HAnimHumanoid43.joints[79] = HAnimJoint1678;

HAnimJoint HAnimJoint1679 = createNode("HAnimJoint");
HAnimJoint1679.USE = "hanim_vc3";
HAnimHumanoid43.joints[80] = HAnimJoint1679;

HAnimJoint HAnimJoint1680 = createNode("HAnimJoint");
HAnimJoint1680.USE = "hanim_vc2";
HAnimHumanoid43.joints[81] = HAnimJoint1680;

HAnimJoint HAnimJoint1681 = createNode("HAnimJoint");
HAnimJoint1681.USE = "hanim_vc1";
HAnimHumanoid43.joints[82] = HAnimJoint1681;

HAnimJoint HAnimJoint1682 = createNode("HAnimJoint");
HAnimJoint1682.USE = "hanim_skullbase";
HAnimHumanoid43.joints[83] = HAnimJoint1682;

HAnimJoint HAnimJoint1683 = createNode("HAnimJoint");
HAnimJoint1683.USE = "hanim_l_eyelid_joint";
HAnimHumanoid43.joints[84] = HAnimJoint1683;

HAnimJoint HAnimJoint1684 = createNode("HAnimJoint");
HAnimJoint1684.USE = "hanim_r_eyelid_joint";
HAnimHumanoid43.joints[85] = HAnimJoint1684;

HAnimJoint HAnimJoint1685 = createNode("HAnimJoint");
HAnimJoint1685.USE = "hanim_l_eyeball_joint";
HAnimHumanoid43.joints[86] = HAnimJoint1685;

HAnimJoint HAnimJoint1686 = createNode("HAnimJoint");
HAnimJoint1686.USE = "hanim_r_eyeball_joint";
HAnimHumanoid43.joints[87] = HAnimJoint1686;

HAnimJoint HAnimJoint1687 = createNode("HAnimJoint");
HAnimJoint1687.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid43.joints[88] = HAnimJoint1687;

HAnimJoint HAnimJoint1688 = createNode("HAnimJoint");
HAnimJoint1688.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid43.joints[89] = HAnimJoint1688;

HAnimJoint HAnimJoint1689 = createNode("HAnimJoint");
HAnimJoint1689.USE = "hanim_temporomandibular";
HAnimHumanoid43.joints[90] = HAnimJoint1689;

HAnimJoint HAnimJoint1690 = createNode("HAnimJoint");
HAnimJoint1690.USE = "hanim_l_sternoclavicular";
HAnimHumanoid43.joints[91] = HAnimJoint1690;

HAnimJoint HAnimJoint1691 = createNode("HAnimJoint");
HAnimJoint1691.USE = "hanim_l_acromioclavicular";
HAnimHumanoid43.joints[92] = HAnimJoint1691;

HAnimJoint HAnimJoint1692 = createNode("HAnimJoint");
HAnimJoint1692.USE = "hanim_l_shoulder";
HAnimHumanoid43.joints[93] = HAnimJoint1692;

HAnimJoint HAnimJoint1693 = createNode("HAnimJoint");
HAnimJoint1693.USE = "hanim_l_elbow";
HAnimHumanoid43.joints[94] = HAnimJoint1693;

HAnimJoint HAnimJoint1694 = createNode("HAnimJoint");
HAnimJoint1694.USE = "hanim_l_radiocarpal";
HAnimHumanoid43.joints[95] = HAnimJoint1694;

HAnimJoint HAnimJoint1695 = createNode("HAnimJoint");
HAnimJoint1695.USE = "hanim_l_midcarpal_1";
HAnimHumanoid43.joints[96] = HAnimJoint1695;

HAnimJoint HAnimJoint1696 = createNode("HAnimJoint");
HAnimJoint1696.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid43.joints[97] = HAnimJoint1696;

HAnimJoint HAnimJoint1697 = createNode("HAnimJoint");
HAnimJoint1697.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid43.joints[98] = HAnimJoint1697;

HAnimJoint HAnimJoint1698 = createNode("HAnimJoint");
HAnimJoint1698.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid43.joints[99] = HAnimJoint1698;

HAnimJoint HAnimJoint1699 = createNode("HAnimJoint");
HAnimJoint1699.USE = "hanim_l_midcarpal_2";
HAnimHumanoid43.joints[100] = HAnimJoint1699;

HAnimJoint HAnimJoint1700 = createNode("HAnimJoint");
HAnimJoint1700.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid43.joints[101] = HAnimJoint1700;

HAnimJoint HAnimJoint1701 = createNode("HAnimJoint");
HAnimJoint1701.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid43.joints[102] = HAnimJoint1701;

HAnimJoint HAnimJoint1702 = createNode("HAnimJoint");
HAnimJoint1702.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[103] = HAnimJoint1702;

HAnimJoint HAnimJoint1703 = createNode("HAnimJoint");
HAnimJoint1703.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[104] = HAnimJoint1703;

HAnimJoint HAnimJoint1704 = createNode("HAnimJoint");
HAnimJoint1704.USE = "hanim_l_midcarpal_3";
HAnimHumanoid43.joints[105] = HAnimJoint1704;

HAnimJoint HAnimJoint1705 = createNode("HAnimJoint");
HAnimJoint1705.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid43.joints[106] = HAnimJoint1705;

HAnimJoint HAnimJoint1706 = createNode("HAnimJoint");
HAnimJoint1706.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid43.joints[107] = HAnimJoint1706;

HAnimJoint HAnimJoint1707 = createNode("HAnimJoint");
HAnimJoint1707.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[108] = HAnimJoint1707;

HAnimJoint HAnimJoint1708 = createNode("HAnimJoint");
HAnimJoint1708.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[109] = HAnimJoint1708;

HAnimJoint HAnimJoint1709 = createNode("HAnimJoint");
HAnimJoint1709.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid43.joints[110] = HAnimJoint1709;

HAnimJoint HAnimJoint1710 = createNode("HAnimJoint");
HAnimJoint1710.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid43.joints[111] = HAnimJoint1710;

HAnimJoint HAnimJoint1711 = createNode("HAnimJoint");
HAnimJoint1711.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid43.joints[112] = HAnimJoint1711;

HAnimJoint HAnimJoint1712 = createNode("HAnimJoint");
HAnimJoint1712.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[113] = HAnimJoint1712;

HAnimJoint HAnimJoint1713 = createNode("HAnimJoint");
HAnimJoint1713.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[114] = HAnimJoint1713;

HAnimJoint HAnimJoint1714 = createNode("HAnimJoint");
HAnimJoint1714.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid43.joints[115] = HAnimJoint1714;

HAnimJoint HAnimJoint1715 = createNode("HAnimJoint");
HAnimJoint1715.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid43.joints[116] = HAnimJoint1715;

HAnimJoint HAnimJoint1716 = createNode("HAnimJoint");
HAnimJoint1716.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[117] = HAnimJoint1716;

HAnimJoint HAnimJoint1717 = createNode("HAnimJoint");
HAnimJoint1717.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[118] = HAnimJoint1717;

HAnimJoint HAnimJoint1718 = createNode("HAnimJoint");
HAnimJoint1718.USE = "hanim_r_sternoclavicular";
HAnimHumanoid43.joints[119] = HAnimJoint1718;

HAnimJoint HAnimJoint1719 = createNode("HAnimJoint");
HAnimJoint1719.USE = "hanim_r_acromioclavicular";
HAnimHumanoid43.joints[120] = HAnimJoint1719;

HAnimJoint HAnimJoint1720 = createNode("HAnimJoint");
HAnimJoint1720.USE = "hanim_r_shoulder";
HAnimHumanoid43.joints[121] = HAnimJoint1720;

HAnimJoint HAnimJoint1721 = createNode("HAnimJoint");
HAnimJoint1721.USE = "hanim_r_elbow";
HAnimHumanoid43.joints[122] = HAnimJoint1721;

HAnimJoint HAnimJoint1722 = createNode("HAnimJoint");
HAnimJoint1722.USE = "hanim_r_radiocarpal";
HAnimHumanoid43.joints[123] = HAnimJoint1722;

HAnimJoint HAnimJoint1723 = createNode("HAnimJoint");
HAnimJoint1723.USE = "hanim_r_midcarpal_1";
HAnimHumanoid43.joints[124] = HAnimJoint1723;

HAnimJoint HAnimJoint1724 = createNode("HAnimJoint");
HAnimJoint1724.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid43.joints[125] = HAnimJoint1724;

HAnimJoint HAnimJoint1725 = createNode("HAnimJoint");
HAnimJoint1725.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid43.joints[126] = HAnimJoint1725;

HAnimJoint HAnimJoint1726 = createNode("HAnimJoint");
HAnimJoint1726.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid43.joints[127] = HAnimJoint1726;

HAnimJoint HAnimJoint1727 = createNode("HAnimJoint");
HAnimJoint1727.USE = "hanim_r_midcarpal_2";
HAnimHumanoid43.joints[128] = HAnimJoint1727;

HAnimJoint HAnimJoint1728 = createNode("HAnimJoint");
HAnimJoint1728.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid43.joints[129] = HAnimJoint1728;

HAnimJoint HAnimJoint1729 = createNode("HAnimJoint");
HAnimJoint1729.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid43.joints[130] = HAnimJoint1729;

HAnimJoint HAnimJoint1730 = createNode("HAnimJoint");
HAnimJoint1730.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid43.joints[131] = HAnimJoint1730;

HAnimJoint HAnimJoint1731 = createNode("HAnimJoint");
HAnimJoint1731.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid43.joints[132] = HAnimJoint1731;

HAnimJoint HAnimJoint1732 = createNode("HAnimJoint");
HAnimJoint1732.USE = "hanim_r_midcarpal_3";
HAnimHumanoid43.joints[133] = HAnimJoint1732;

HAnimJoint HAnimJoint1733 = createNode("HAnimJoint");
HAnimJoint1733.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid43.joints[134] = HAnimJoint1733;

HAnimJoint HAnimJoint1734 = createNode("HAnimJoint");
HAnimJoint1734.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid43.joints[135] = HAnimJoint1734;

HAnimJoint HAnimJoint1735 = createNode("HAnimJoint");
HAnimJoint1735.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid43.joints[136] = HAnimJoint1735;

HAnimJoint HAnimJoint1736 = createNode("HAnimJoint");
HAnimJoint1736.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid43.joints[137] = HAnimJoint1736;

HAnimJoint HAnimJoint1737 = createNode("HAnimJoint");
HAnimJoint1737.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid43.joints[138] = HAnimJoint1737;

HAnimJoint HAnimJoint1738 = createNode("HAnimJoint");
HAnimJoint1738.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid43.joints[139] = HAnimJoint1738;

HAnimJoint HAnimJoint1739 = createNode("HAnimJoint");
HAnimJoint1739.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid43.joints[140] = HAnimJoint1739;

HAnimJoint HAnimJoint1740 = createNode("HAnimJoint");
HAnimJoint1740.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid43.joints[141] = HAnimJoint1740;

HAnimJoint HAnimJoint1741 = createNode("HAnimJoint");
HAnimJoint1741.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid43.joints[142] = HAnimJoint1741;

HAnimJoint HAnimJoint1742 = createNode("HAnimJoint");
HAnimJoint1742.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid43.joints[143] = HAnimJoint1742;

HAnimJoint HAnimJoint1743 = createNode("HAnimJoint");
HAnimJoint1743.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid43.joints[144] = HAnimJoint1743;

HAnimJoint HAnimJoint1744 = createNode("HAnimJoint");
HAnimJoint1744.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid43.joints[145] = HAnimJoint1744;

HAnimJoint HAnimJoint1745 = createNode("HAnimJoint");
HAnimJoint1745.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid43.joints[146] = HAnimJoint1745;

HAnimSegment HAnimSegment1746 = createNode("HAnimSegment");
HAnimSegment1746.USE = "hanim_sacrum";
HAnimHumanoid43.segments[147] = HAnimSegment1746;

HAnimSegment HAnimSegment1747 = createNode("HAnimSegment");
HAnimSegment1747.USE = "hanim_pelvis";
HAnimHumanoid43.segments[148] = HAnimSegment1747;

HAnimSegment HAnimSegment1748 = createNode("HAnimSegment");
HAnimSegment1748.USE = "hanim_l_thigh";
HAnimHumanoid43.segments[149] = HAnimSegment1748;

HAnimSegment HAnimSegment1749 = createNode("HAnimSegment");
HAnimSegment1749.USE = "hanim_l_calf";
HAnimHumanoid43.segments[150] = HAnimSegment1749;

HAnimSegment HAnimSegment1750 = createNode("HAnimSegment");
HAnimSegment1750.USE = "hanim_l_talus";
HAnimHumanoid43.segments[151] = HAnimSegment1750;

HAnimSegment HAnimSegment1751 = createNode("HAnimSegment");
HAnimSegment1751.USE = "hanim_l_navicular";
HAnimHumanoid43.segments[152] = HAnimSegment1751;

HAnimSegment HAnimSegment1752 = createNode("HAnimSegment");
HAnimSegment1752.USE = "hanim_l_cuneiform_1";
HAnimHumanoid43.segments[153] = HAnimSegment1752;

HAnimSegment HAnimSegment1753 = createNode("HAnimSegment");
HAnimSegment1753.USE = "hanim_l_metatarsal_1";
HAnimHumanoid43.segments[154] = HAnimSegment1753;

HAnimSegment HAnimSegment1754 = createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[155] = HAnimSegment1754;

HAnimSegment HAnimSegment1755 = createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_l_cuneiform_2";
HAnimHumanoid43.segments[156] = HAnimSegment1755;

HAnimSegment HAnimSegment1756 = createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_l_metatarsal_2";
HAnimHumanoid43.segments[157] = HAnimSegment1756;

HAnimSegment HAnimSegment1757 = createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[158] = HAnimSegment1757;

HAnimSegment HAnimSegment1758 = createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[159] = HAnimSegment1758;

HAnimSegment HAnimSegment1759 = createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_l_cuneiform_3";
HAnimHumanoid43.segments[160] = HAnimSegment1759;

HAnimSegment HAnimSegment1760 = createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_l_metatarsal_3";
HAnimHumanoid43.segments[161] = HAnimSegment1760;

HAnimSegment HAnimSegment1761 = createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[162] = HAnimSegment1761;

HAnimSegment HAnimSegment1762 = createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[163] = HAnimSegment1762;

HAnimSegment HAnimSegment1763 = createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_l_calcaneus";
HAnimHumanoid43.segments[164] = HAnimSegment1763;

HAnimSegment HAnimSegment1764 = createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_l_cuboid";
HAnimHumanoid43.segments[165] = HAnimSegment1764;

HAnimSegment HAnimSegment1765 = createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_l_metatarsal_4";
HAnimHumanoid43.segments[166] = HAnimSegment1765;

HAnimSegment HAnimSegment1766 = createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[167] = HAnimSegment1766;

HAnimSegment HAnimSegment1767 = createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[168] = HAnimSegment1767;

HAnimSegment HAnimSegment1768 = createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_l_metatarsal_5";
HAnimHumanoid43.segments[169] = HAnimSegment1768;

HAnimSegment HAnimSegment1769 = createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[170] = HAnimSegment1769;

HAnimSegment HAnimSegment1770 = createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_l_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[171] = HAnimSegment1770;

HAnimSegment HAnimSegment1771 = createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_r_thigh";
HAnimHumanoid43.segments[172] = HAnimSegment1771;

HAnimSegment HAnimSegment1772 = createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_r_calf";
HAnimHumanoid43.segments[173] = HAnimSegment1772;

HAnimSegment HAnimSegment1773 = createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_r_talus";
HAnimHumanoid43.segments[174] = HAnimSegment1773;

HAnimSegment HAnimSegment1774 = createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_r_navicular";
HAnimHumanoid43.segments[175] = HAnimSegment1774;

HAnimSegment HAnimSegment1775 = createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_r_cuneiform_1";
HAnimHumanoid43.segments[176] = HAnimSegment1775;

HAnimSegment HAnimSegment1776 = createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_r_metatarsal_1";
HAnimHumanoid43.segments[177] = HAnimSegment1776;

HAnimSegment HAnimSegment1777 = createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid43.segments[178] = HAnimSegment1777;

HAnimSegment HAnimSegment1778 = createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_r_cuneiform_2";
HAnimHumanoid43.segments[179] = HAnimSegment1778;

HAnimSegment HAnimSegment1779 = createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_r_metatarsal_2";
HAnimHumanoid43.segments[180] = HAnimSegment1779;

HAnimSegment HAnimSegment1780 = createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid43.segments[181] = HAnimSegment1780;

HAnimSegment HAnimSegment1781 = createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid43.segments[182] = HAnimSegment1781;

HAnimSegment HAnimSegment1782 = createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_r_cuneiform_3";
HAnimHumanoid43.segments[183] = HAnimSegment1782;

HAnimSegment HAnimSegment1783 = createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_r_metatarsal_3";
HAnimHumanoid43.segments[184] = HAnimSegment1783;

HAnimSegment HAnimSegment1784 = createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid43.segments[185] = HAnimSegment1784;

HAnimSegment HAnimSegment1785 = createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid43.segments[186] = HAnimSegment1785;

HAnimSegment HAnimSegment1786 = createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_r_calcaneus";
HAnimHumanoid43.segments[187] = HAnimSegment1786;

HAnimSegment HAnimSegment1787 = createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_r_cuboid";
HAnimHumanoid43.segments[188] = HAnimSegment1787;

HAnimSegment HAnimSegment1788 = createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_r_metatarsal_4";
HAnimHumanoid43.segments[189] = HAnimSegment1788;

HAnimSegment HAnimSegment1789 = createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid43.segments[190] = HAnimSegment1789;

HAnimSegment HAnimSegment1790 = createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid43.segments[191] = HAnimSegment1790;

HAnimSegment HAnimSegment1791 = createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_r_metatarsal_5";
HAnimHumanoid43.segments[192] = HAnimSegment1791;

HAnimSegment HAnimSegment1792 = createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid43.segments[193] = HAnimSegment1792;

HAnimSegment HAnimSegment1793 = createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_r_tarsal_middle_phalanx_5";
HAnimHumanoid43.segments[194] = HAnimSegment1793;

HAnimSegment HAnimSegment1794 = createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_l5";
HAnimHumanoid43.segments[195] = HAnimSegment1794;

HAnimSegment HAnimSegment1795 = createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_l4";
HAnimHumanoid43.segments[196] = HAnimSegment1795;

HAnimSegment HAnimSegment1796 = createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_l3";
HAnimHumanoid43.segments[197] = HAnimSegment1796;

HAnimSegment HAnimSegment1797 = createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_l2";
HAnimHumanoid43.segments[198] = HAnimSegment1797;

HAnimSegment HAnimSegment1798 = createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_l1";
HAnimHumanoid43.segments[199] = HAnimSegment1798;

HAnimSegment HAnimSegment1799 = createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_t12";
HAnimHumanoid43.segments[200] = HAnimSegment1799;

HAnimSegment HAnimSegment1800 = createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_t11";
HAnimHumanoid43.segments[201] = HAnimSegment1800;

HAnimSegment HAnimSegment1801 = createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_t10";
HAnimHumanoid43.segments[202] = HAnimSegment1801;

HAnimSegment HAnimSegment1802 = createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_t9";
HAnimHumanoid43.segments[203] = HAnimSegment1802;

HAnimSegment HAnimSegment1803 = createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_t8";
HAnimHumanoid43.segments[204] = HAnimSegment1803;

HAnimSegment HAnimSegment1804 = createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_t7";
HAnimHumanoid43.segments[205] = HAnimSegment1804;

HAnimSegment HAnimSegment1805 = createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_t6";
HAnimHumanoid43.segments[206] = HAnimSegment1805;

HAnimSegment HAnimSegment1806 = createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_t5";
HAnimHumanoid43.segments[207] = HAnimSegment1806;

HAnimSegment HAnimSegment1807 = createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_t4";
HAnimHumanoid43.segments[208] = HAnimSegment1807;

HAnimSegment HAnimSegment1808 = createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_t3";
HAnimHumanoid43.segments[209] = HAnimSegment1808;

HAnimSegment HAnimSegment1809 = createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_t2";
HAnimHumanoid43.segments[210] = HAnimSegment1809;

HAnimSegment HAnimSegment1810 = createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_t1";
HAnimHumanoid43.segments[211] = HAnimSegment1810;

HAnimSegment HAnimSegment1811 = createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_c7";
HAnimHumanoid43.segments[212] = HAnimSegment1811;

HAnimSegment HAnimSegment1812 = createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_c6";
HAnimHumanoid43.segments[213] = HAnimSegment1812;

HAnimSegment HAnimSegment1813 = createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_c5";
HAnimHumanoid43.segments[214] = HAnimSegment1813;

HAnimSegment HAnimSegment1814 = createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_c4";
HAnimHumanoid43.segments[215] = HAnimSegment1814;

HAnimSegment HAnimSegment1815 = createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_c3";
HAnimHumanoid43.segments[216] = HAnimSegment1815;

HAnimSegment HAnimSegment1816 = createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_c2";
HAnimHumanoid43.segments[217] = HAnimSegment1816;

HAnimSegment HAnimSegment1817 = createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_c1";
HAnimHumanoid43.segments[218] = HAnimSegment1817;

HAnimSegment HAnimSegment1818 = createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_skull";
HAnimHumanoid43.segments[219] = HAnimSegment1818;

HAnimSegment HAnimSegment1819 = createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_l_clavicle";
HAnimHumanoid43.segments[220] = HAnimSegment1819;

HAnimSegment HAnimSegment1820 = createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_l_scapula";
HAnimHumanoid43.segments[221] = HAnimSegment1820;

HAnimSegment HAnimSegment1821 = createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_l_upperarm";
HAnimHumanoid43.segments[222] = HAnimSegment1821;

HAnimSegment HAnimSegment1822 = createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_l_forearm";
HAnimHumanoid43.segments[223] = HAnimSegment1822;

HAnimSegment HAnimSegment1823 = createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_l_carpal";
HAnimHumanoid43.segments[224] = HAnimSegment1823;

HAnimSegment HAnimSegment1824 = createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_l_trapezium";
HAnimHumanoid43.segments[225] = HAnimSegment1824;

HAnimSegment HAnimSegment1825 = createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_l_metacarpal_1";
HAnimHumanoid43.segments[226] = HAnimSegment1825;

HAnimSegment HAnimSegment1826 = createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[227] = HAnimSegment1826;

HAnimSegment HAnimSegment1827 = createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_l_trapezoid";
HAnimHumanoid43.segments[228] = HAnimSegment1827;

HAnimSegment HAnimSegment1828 = createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_l_metacarpal_2";
HAnimHumanoid43.segments[229] = HAnimSegment1828;

HAnimSegment HAnimSegment1829 = createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[230] = HAnimSegment1829;

HAnimSegment HAnimSegment1830 = createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[231] = HAnimSegment1830;

HAnimSegment HAnimSegment1831 = createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_l_capitate";
HAnimHumanoid43.segments[232] = HAnimSegment1831;

HAnimSegment HAnimSegment1832 = createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_l_metacarpal_3";
HAnimHumanoid43.segments[233] = HAnimSegment1832;

HAnimSegment HAnimSegment1833 = createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[234] = HAnimSegment1833;

HAnimSegment HAnimSegment1834 = createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[235] = HAnimSegment1834;

HAnimSegment HAnimSegment1835 = createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_l_hamate";
HAnimHumanoid43.segments[236] = HAnimSegment1835;

HAnimSegment HAnimSegment1836 = createNode("HAnimSegment");
HAnimSegment1836.USE = "hanim_l_metacarpal_4";
HAnimHumanoid43.segments[237] = HAnimSegment1836;

HAnimSegment HAnimSegment1837 = createNode("HAnimSegment");
HAnimSegment1837.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[238] = HAnimSegment1837;

HAnimSegment HAnimSegment1838 = createNode("HAnimSegment");
HAnimSegment1838.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[239] = HAnimSegment1838;

HAnimSegment HAnimSegment1839 = createNode("HAnimSegment");
HAnimSegment1839.USE = "hanim_l_metacarpal_5";
HAnimHumanoid43.segments[240] = HAnimSegment1839;

HAnimSegment HAnimSegment1840 = createNode("HAnimSegment");
HAnimSegment1840.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[241] = HAnimSegment1840;

HAnimSegment HAnimSegment1841 = createNode("HAnimSegment");
HAnimSegment1841.USE = "hanim_l_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[242] = HAnimSegment1841;

HAnimSegment HAnimSegment1842 = createNode("HAnimSegment");
HAnimSegment1842.USE = "hanim_r_clavicle";
HAnimHumanoid43.segments[243] = HAnimSegment1842;

HAnimSegment HAnimSegment1843 = createNode("HAnimSegment");
HAnimSegment1843.USE = "hanim_r_scapula";
HAnimHumanoid43.segments[244] = HAnimSegment1843;

HAnimSegment HAnimSegment1844 = createNode("HAnimSegment");
HAnimSegment1844.USE = "hanim_r_upperarm";
HAnimHumanoid43.segments[245] = HAnimSegment1844;

HAnimSegment HAnimSegment1845 = createNode("HAnimSegment");
HAnimSegment1845.USE = "hanim_r_forearm";
HAnimHumanoid43.segments[246] = HAnimSegment1845;

HAnimSegment HAnimSegment1846 = createNode("HAnimSegment");
HAnimSegment1846.USE = "hanim_r_carpal";
HAnimHumanoid43.segments[247] = HAnimSegment1846;

HAnimSegment HAnimSegment1847 = createNode("HAnimSegment");
HAnimSegment1847.USE = "hanim_r_trapezium";
HAnimHumanoid43.segments[248] = HAnimSegment1847;

HAnimSegment HAnimSegment1848 = createNode("HAnimSegment");
HAnimSegment1848.USE = "hanim_r_metacarpal_1";
HAnimHumanoid43.segments[249] = HAnimSegment1848;

HAnimSegment HAnimSegment1849 = createNode("HAnimSegment");
HAnimSegment1849.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid43.segments[250] = HAnimSegment1849;

HAnimSegment HAnimSegment1850 = createNode("HAnimSegment");
HAnimSegment1850.USE = "hanim_r_trapezoid";
HAnimHumanoid43.segments[251] = HAnimSegment1850;

HAnimSegment HAnimSegment1851 = createNode("HAnimSegment");
HAnimSegment1851.USE = "hanim_r_metacarpal_2";
HAnimHumanoid43.segments[252] = HAnimSegment1851;

HAnimSegment HAnimSegment1852 = createNode("HAnimSegment");
HAnimSegment1852.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid43.segments[253] = HAnimSegment1852;

HAnimSegment HAnimSegment1853 = createNode("HAnimSegment");
HAnimSegment1853.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid43.segments[254] = HAnimSegment1853;

HAnimSegment HAnimSegment1854 = createNode("HAnimSegment");
HAnimSegment1854.USE = "hanim_r_capitate";
HAnimHumanoid43.segments[255] = HAnimSegment1854;

HAnimSegment HAnimSegment1855 = createNode("HAnimSegment");
HAnimSegment1855.USE = "hanim_r_metacarpal_3";
HAnimHumanoid43.segments[256] = HAnimSegment1855;

HAnimSegment HAnimSegment1856 = createNode("HAnimSegment");
HAnimSegment1856.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid43.segments[257] = HAnimSegment1856;

HAnimSegment HAnimSegment1857 = createNode("HAnimSegment");
HAnimSegment1857.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid43.segments[258] = HAnimSegment1857;

HAnimSegment HAnimSegment1858 = createNode("HAnimSegment");
HAnimSegment1858.USE = "hanim_r_hamate";
HAnimHumanoid43.segments[259] = HAnimSegment1858;

HAnimSegment HAnimSegment1859 = createNode("HAnimSegment");
HAnimSegment1859.USE = "hanim_r_metacarpal_4";
HAnimHumanoid43.segments[260] = HAnimSegment1859;

HAnimSegment HAnimSegment1860 = createNode("HAnimSegment");
HAnimSegment1860.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid43.segments[261] = HAnimSegment1860;

HAnimSegment HAnimSegment1861 = createNode("HAnimSegment");
HAnimSegment1861.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid43.segments[262] = HAnimSegment1861;

HAnimSegment HAnimSegment1862 = createNode("HAnimSegment");
HAnimSegment1862.USE = "hanim_r_metacarpal_5";
HAnimHumanoid43.segments[263] = HAnimSegment1862;

HAnimSegment HAnimSegment1863 = createNode("HAnimSegment");
HAnimSegment1863.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid43.segments[264] = HAnimSegment1863;

HAnimSegment HAnimSegment1864 = createNode("HAnimSegment");
HAnimSegment1864.USE = "hanim_r_carpal_middle_phalanx_5";
HAnimHumanoid43.segments[265] = HAnimSegment1864;

HAnimSite HAnimSite1865 = createNode("HAnimSite");
HAnimSite1865.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid43.viewpoints[266] = HAnimSite1865;

HAnimSite HAnimSite1866 = createNode("HAnimSite");
HAnimSite1866.USE = "hanim_crotch_pt";
HAnimHumanoid43.viewpoints[267] = HAnimSite1866;

HAnimSite HAnimSite1867 = createNode("HAnimSite");
HAnimSite1867.USE = "hanim_l_asis_pt";
HAnimHumanoid43.viewpoints[268] = HAnimSite1867;

HAnimSite HAnimSite1868 = createNode("HAnimSite");
HAnimSite1868.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid43.viewpoints[269] = HAnimSite1868;

HAnimSite HAnimSite1869 = createNode("HAnimSite");
HAnimSite1869.USE = "hanim_l_psis_pt";
HAnimHumanoid43.viewpoints[270] = HAnimSite1869;

HAnimSite HAnimSite1870 = createNode("HAnimSite");
HAnimSite1870.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid43.viewpoints[271] = HAnimSite1870;

HAnimSite HAnimSite1871 = createNode("HAnimSite");
HAnimSite1871.USE = "hanim_r_asis_pt";
HAnimHumanoid43.viewpoints[272] = HAnimSite1871;

HAnimSite HAnimSite1872 = createNode("HAnimSite");
HAnimSite1872.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid43.viewpoints[273] = HAnimSite1872;

HAnimSite HAnimSite1873 = createNode("HAnimSite");
HAnimSite1873.USE = "hanim_r_psis_pt";
HAnimHumanoid43.viewpoints[274] = HAnimSite1873;

HAnimSite HAnimSite1874 = createNode("HAnimSite");
HAnimSite1874.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid43.viewpoints[275] = HAnimSite1874;

HAnimSite HAnimSite1875 = createNode("HAnimSite");
HAnimSite1875.USE = "hanim_navel_pt";
HAnimHumanoid43.viewpoints[276] = HAnimSite1875;

HAnimSite HAnimSite1876 = createNode("HAnimSite");
HAnimSite1876.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid43.viewpoints[277] = HAnimSite1876;

HAnimSite HAnimSite1877 = createNode("HAnimSite");
HAnimSite1877.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid43.viewpoints[278] = HAnimSite1877;

HAnimSite HAnimSite1878 = createNode("HAnimSite");
HAnimSite1878.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[279] = HAnimSite1878;

HAnimSite HAnimSite1879 = createNode("HAnimSite");
HAnimSite1879.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[280] = HAnimSite1879;

HAnimSite HAnimSite1880 = createNode("HAnimSite");
HAnimSite1880.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid43.viewpoints[281] = HAnimSite1880;

HAnimSite HAnimSite1881 = createNode("HAnimSite");
HAnimSite1881.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid43.viewpoints[282] = HAnimSite1881;

HAnimSite HAnimSite1882 = createNode("HAnimSite");
HAnimSite1882.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[283] = HAnimSite1882;

HAnimSite HAnimSite1883 = createNode("HAnimSite");
HAnimSite1883.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[284] = HAnimSite1883;

HAnimSite HAnimSite1884 = createNode("HAnimSite");
HAnimSite1884.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid43.viewpoints[285] = HAnimSite1884;

HAnimSite HAnimSite1885 = createNode("HAnimSite");
HAnimSite1885.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid43.viewpoints[286] = HAnimSite1885;

HAnimSite HAnimSite1886 = createNode("HAnimSite");
HAnimSite1886.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[287] = HAnimSite1886;

HAnimSite HAnimSite1887 = createNode("HAnimSite");
HAnimSite1887.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[288] = HAnimSite1887;

HAnimSite HAnimSite1888 = createNode("HAnimSite");
HAnimSite1888.USE = "hanim_l_tibiale_pt";
HAnimHumanoid43.viewpoints[289] = HAnimSite1888;

HAnimSite HAnimSite1889 = createNode("HAnimSite");
HAnimSite1889.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[290] = HAnimSite1889;

HAnimSite HAnimSite1890 = createNode("HAnimSite");
HAnimSite1890.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid43.viewpoints[291] = HAnimSite1890;

HAnimSite HAnimSite1891 = createNode("HAnimSite");
HAnimSite1891.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[292] = HAnimSite1891;

HAnimSite HAnimSite1892 = createNode("HAnimSite");
HAnimSite1892.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[293] = HAnimSite1892;

HAnimSite HAnimSite1893 = createNode("HAnimSite");
HAnimSite1893.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[294] = HAnimSite1893;

HAnimSite HAnimSite1894 = createNode("HAnimSite");
HAnimSite1894.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[295] = HAnimSite1894;

HAnimSite HAnimSite1895 = createNode("HAnimSite");
HAnimSite1895.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[296] = HAnimSite1895;

HAnimSite HAnimSite1896 = createNode("HAnimSite");
HAnimSite1896.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[297] = HAnimSite1896;

HAnimSite HAnimSite1897 = createNode("HAnimSite");
HAnimSite1897.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[298] = HAnimSite1897;

HAnimSite HAnimSite1898 = createNode("HAnimSite");
HAnimSite1898.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid43.viewpoints[299] = HAnimSite1898;

HAnimSite HAnimSite1899 = createNode("HAnimSite");
HAnimSite1899.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid43.viewpoints[300] = HAnimSite1899;

HAnimSite HAnimSite1900 = createNode("HAnimSite");
HAnimSite1900.USE = "hanim_r_tibiale_pt";
HAnimHumanoid43.viewpoints[301] = HAnimSite1900;

HAnimSite HAnimSite1901 = createNode("HAnimSite");
HAnimSite1901.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid43.viewpoints[302] = HAnimSite1901;

HAnimSite HAnimSite1902 = createNode("HAnimSite");
HAnimSite1902.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid43.viewpoints[303] = HAnimSite1902;

HAnimSite HAnimSite1903 = createNode("HAnimSite");
HAnimSite1903.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid43.viewpoints[304] = HAnimSite1903;

HAnimSite HAnimSite1904 = createNode("HAnimSite");
HAnimSite1904.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[305] = HAnimSite1904;

HAnimSite HAnimSite1905 = createNode("HAnimSite");
HAnimSite1905.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[306] = HAnimSite1905;

HAnimSite HAnimSite1906 = createNode("HAnimSite");
HAnimSite1906.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[307] = HAnimSite1906;

HAnimSite HAnimSite1907 = createNode("HAnimSite");
HAnimSite1907.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[308] = HAnimSite1907;

HAnimSite HAnimSite1908 = createNode("HAnimSite");
HAnimSite1908.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[309] = HAnimSite1908;

HAnimSite HAnimSite1909 = createNode("HAnimSite");
HAnimSite1909.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[310] = HAnimSite1909;

HAnimSite HAnimSite1910 = createNode("HAnimSite");
HAnimSite1910.USE = "hanim_l_rib10_pt";
HAnimHumanoid43.viewpoints[311] = HAnimSite1910;

HAnimSite HAnimSite1911 = createNode("HAnimSite");
HAnimSite1911.USE = "hanim_r_rib10_pt";
HAnimHumanoid43.viewpoints[312] = HAnimSite1911;

HAnimSite HAnimSite1912 = createNode("HAnimSite");
HAnimSite1912.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid43.viewpoints[313] = HAnimSite1912;

HAnimSite HAnimSite1913 = createNode("HAnimSite");
HAnimSite1913.USE = "hanim_substernale_pt";
HAnimHumanoid43.viewpoints[314] = HAnimSite1913;

HAnimSite HAnimSite1914 = createNode("HAnimSite");
HAnimSite1914.USE = "hanim_l_thelion_pt";
HAnimHumanoid43.viewpoints[315] = HAnimSite1914;

HAnimSite HAnimSite1915 = createNode("HAnimSite");
HAnimSite1915.USE = "hanim_r_thelion_pt";
HAnimHumanoid43.viewpoints[316] = HAnimSite1915;

HAnimSite HAnimSite1916 = createNode("HAnimSite");
HAnimSite1916.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[317] = HAnimSite1916;

HAnimSite HAnimSite1917 = createNode("HAnimSite");
HAnimSite1917.USE = "hanim_mesosternale_pt";
HAnimHumanoid43.viewpoints[318] = HAnimSite1917;

HAnimSite HAnimSite1918 = createNode("HAnimSite");
HAnimSite1918.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[319] = HAnimSite1918;

HAnimSite HAnimSite1919 = createNode("HAnimSite");
HAnimSite1919.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid43.viewpoints[320] = HAnimSite1919;

HAnimSite HAnimSite1920 = createNode("HAnimSite");
HAnimSite1920.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid43.viewpoints[321] = HAnimSite1920;

HAnimSite HAnimSite1921 = createNode("HAnimSite");
HAnimSite1921.USE = "hanim_cervicale_pt";
HAnimHumanoid43.viewpoints[322] = HAnimSite1921;

HAnimSite HAnimSite1922 = createNode("HAnimSite");
HAnimSite1922.USE = "hanim_suprasternale_pt";
HAnimHumanoid43.viewpoints[323] = HAnimSite1922;

HAnimSite HAnimSite1923 = createNode("HAnimSite");
HAnimSite1923.USE = "hanim_l_neck_base_pt";
HAnimHumanoid43.viewpoints[324] = HAnimSite1923;

HAnimSite HAnimSite1924 = createNode("HAnimSite");
HAnimSite1924.USE = "hanim_r_neck_base_pt";
HAnimHumanoid43.viewpoints[325] = HAnimSite1924;

HAnimSite HAnimSite1925 = createNode("HAnimSite");
HAnimSite1925.USE = "hanim_l_acromion_pt";
HAnimHumanoid43.viewpoints[326] = HAnimSite1925;

HAnimSite HAnimSite1926 = createNode("HAnimSite");
HAnimSite1926.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid43.viewpoints[327] = HAnimSite1926;

HAnimSite HAnimSite1927 = createNode("HAnimSite");
HAnimSite1927.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[328] = HAnimSite1927;

HAnimSite HAnimSite1928 = createNode("HAnimSite");
HAnimSite1928.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[329] = HAnimSite1928;

HAnimSite HAnimSite1929 = createNode("HAnimSite");
HAnimSite1929.USE = "hanim_l_clavicale_pt";
HAnimHumanoid43.viewpoints[330] = HAnimSite1929;

HAnimSite HAnimSite1930 = createNode("HAnimSite");
HAnimSite1930.USE = "hanim_r_acromion_pt";
HAnimHumanoid43.viewpoints[331] = HAnimSite1930;

HAnimSite HAnimSite1931 = createNode("HAnimSite");
HAnimSite1931.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid43.viewpoints[332] = HAnimSite1931;

HAnimSite HAnimSite1932 = createNode("HAnimSite");
HAnimSite1932.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid43.viewpoints[333] = HAnimSite1932;

HAnimSite HAnimSite1933 = createNode("HAnimSite");
HAnimSite1933.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid43.viewpoints[334] = HAnimSite1933;

HAnimSite HAnimSite1934 = createNode("HAnimSite");
HAnimSite1934.USE = "hanim_r_clavicale_pt";
HAnimHumanoid43.viewpoints[335] = HAnimSite1934;

HAnimSite HAnimSite1935 = createNode("HAnimSite");
HAnimSite1935.USE = "hanim_adams_apple_pt";
HAnimHumanoid43.viewpoints[336] = HAnimSite1935;

HAnimSite HAnimSite1936 = createNode("HAnimSite");
HAnimSite1936.USE = "hanim_glabella_pt";
HAnimHumanoid43.viewpoints[337] = HAnimSite1936;

HAnimSite HAnimSite1937 = createNode("HAnimSite");
HAnimSite1937.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid43.viewpoints[338] = HAnimSite1937;

HAnimSite HAnimSite1938 = createNode("HAnimSite");
HAnimSite1938.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid43.viewpoints[339] = HAnimSite1938;

HAnimSite HAnimSite1939 = createNode("HAnimSite");
HAnimSite1939.USE = "hanim_l_tragion_pt";
HAnimHumanoid43.viewpoints[340] = HAnimSite1939;

HAnimSite HAnimSite1940 = createNode("HAnimSite");
HAnimSite1940.USE = "hanim_nuchale_pt";
HAnimHumanoid43.viewpoints[341] = HAnimSite1940;

HAnimSite HAnimSite1941 = createNode("HAnimSite");
HAnimSite1941.USE = "hanim_opisthocranion_pt";
HAnimHumanoid43.viewpoints[342] = HAnimSite1941;

HAnimSite HAnimSite1942 = createNode("HAnimSite");
HAnimSite1942.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid43.viewpoints[343] = HAnimSite1942;

HAnimSite HAnimSite1943 = createNode("HAnimSite");
HAnimSite1943.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid43.viewpoints[344] = HAnimSite1943;

HAnimSite HAnimSite1944 = createNode("HAnimSite");
HAnimSite1944.USE = "hanim_r_tragion_pt";
HAnimHumanoid43.viewpoints[345] = HAnimSite1944;

HAnimSite HAnimSite1945 = createNode("HAnimSite");
HAnimSite1945.USE = "hanim_sellion_pt";
HAnimHumanoid43.viewpoints[346] = HAnimSite1945;

HAnimSite HAnimSite1946 = createNode("HAnimSite");
HAnimSite1946.USE = "hanim_skull_vertex_pt";
HAnimHumanoid43.viewpoints[347] = HAnimSite1946;

HAnimSite HAnimSite1947 = createNode("HAnimSite");
HAnimSite1947.USE = "hanim_l_gonion_pt";
HAnimHumanoid43.viewpoints[348] = HAnimSite1947;

HAnimSite HAnimSite1948 = createNode("HAnimSite");
HAnimSite1948.USE = "hanim_menton_pt";
HAnimHumanoid43.viewpoints[349] = HAnimSite1948;

HAnimSite HAnimSite1949 = createNode("HAnimSite");
HAnimSite1949.USE = "hanim_r_gonion_pt";
HAnimHumanoid43.viewpoints[350] = HAnimSite1949;

HAnimSite HAnimSite1950 = createNode("HAnimSite");
HAnimSite1950.USE = "hanim_supramenton_pt";
HAnimHumanoid43.viewpoints[351] = HAnimSite1950;

HAnimSite HAnimSite1951 = createNode("HAnimSite");
HAnimSite1951.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid43.viewpoints[352] = HAnimSite1951;

HAnimSite HAnimSite1952 = createNode("HAnimSite");
HAnimSite1952.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[353] = HAnimSite1952;

HAnimSite HAnimSite1953 = createNode("HAnimSite");
HAnimSite1953.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[354] = HAnimSite1953;

HAnimSite HAnimSite1954 = createNode("HAnimSite");
HAnimSite1954.USE = "hanim_l_olecranon_pt";
HAnimHumanoid43.viewpoints[355] = HAnimSite1954;

HAnimSite HAnimSite1955 = createNode("HAnimSite");
HAnimSite1955.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid43.viewpoints[356] = HAnimSite1955;

HAnimSite HAnimSite1956 = createNode("HAnimSite");
HAnimSite1956.USE = "hanim_l_radiale_pt";
HAnimHumanoid43.viewpoints[357] = HAnimSite1956;

HAnimSite HAnimSite1957 = createNode("HAnimSite");
HAnimSite1957.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[358] = HAnimSite1957;

HAnimSite HAnimSite1958 = createNode("HAnimSite");
HAnimSite1958.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[359] = HAnimSite1958;

HAnimSite HAnimSite1959 = createNode("HAnimSite");
HAnimSite1959.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[360] = HAnimSite1959;

HAnimSite HAnimSite1960 = createNode("HAnimSite");
HAnimSite1960.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[361] = HAnimSite1960;

HAnimSite HAnimSite1961 = createNode("HAnimSite");
HAnimSite1961.USE = "hanim_l_dactylion_pt";
HAnimHumanoid43.viewpoints[362] = HAnimSite1961;

HAnimSite HAnimSite1962 = createNode("HAnimSite");
HAnimSite1962.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[363] = HAnimSite1962;

HAnimSite HAnimSite1963 = createNode("HAnimSite");
HAnimSite1963.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[364] = HAnimSite1963;

HAnimSite HAnimSite1964 = createNode("HAnimSite");
HAnimSite1964.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[365] = HAnimSite1964;

HAnimSite HAnimSite1965 = createNode("HAnimSite");
HAnimSite1965.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[366] = HAnimSite1965;

HAnimSite HAnimSite1966 = createNode("HAnimSite");
HAnimSite1966.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[367] = HAnimSite1966;

HAnimSite HAnimSite1967 = createNode("HAnimSite");
HAnimSite1967.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid43.viewpoints[368] = HAnimSite1967;

HAnimSite HAnimSite1968 = createNode("HAnimSite");
HAnimSite1968.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid43.viewpoints[369] = HAnimSite1968;

HAnimSite HAnimSite1969 = createNode("HAnimSite");
HAnimSite1969.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid43.viewpoints[370] = HAnimSite1969;

HAnimSite HAnimSite1970 = createNode("HAnimSite");
HAnimSite1970.USE = "hanim_r_olecranon_pt";
HAnimHumanoid43.viewpoints[371] = HAnimSite1970;

HAnimSite HAnimSite1971 = createNode("HAnimSite");
HAnimSite1971.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid43.viewpoints[372] = HAnimSite1971;

HAnimSite HAnimSite1972 = createNode("HAnimSite");
HAnimSite1972.USE = "hanim_r_radiale_pt";
HAnimHumanoid43.viewpoints[373] = HAnimSite1972;

HAnimSite HAnimSite1973 = createNode("HAnimSite");
HAnimSite1973.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid43.viewpoints[374] = HAnimSite1973;

HAnimSite HAnimSite1974 = createNode("HAnimSite");
HAnimSite1974.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid43.viewpoints[375] = HAnimSite1974;

HAnimSite HAnimSite1975 = createNode("HAnimSite");
HAnimSite1975.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid43.viewpoints[376] = HAnimSite1975;

HAnimSite HAnimSite1976 = createNode("HAnimSite");
HAnimSite1976.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid43.viewpoints[377] = HAnimSite1976;

HAnimSite HAnimSite1977 = createNode("HAnimSite");
HAnimSite1977.USE = "hanim_r_dactylion_pt";
HAnimHumanoid43.viewpoints[378] = HAnimSite1977;

HAnimSite HAnimSite1978 = createNode("HAnimSite");
HAnimSite1978.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid43.viewpoints[379] = HAnimSite1978;

HAnimSite HAnimSite1979 = createNode("HAnimSite");
HAnimSite1979.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid43.viewpoints[380] = HAnimSite1979;

HAnimSite HAnimSite1980 = createNode("HAnimSite");
HAnimSite1980.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid43.viewpoints[381] = HAnimSite1980;

HAnimSite HAnimSite1981 = createNode("HAnimSite");
HAnimSite1981.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid43.viewpoints[382] = HAnimSite1981;

HAnimSite HAnimSite1982 = createNode("HAnimSite");
HAnimSite1982.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid43.viewpoints[383] = HAnimSite1982;

children[4] = HAnimHumanoid43;

}
