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
meta3.content = "JohnJoint3.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint3.x3d";
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
//<Transform translation='0 2 0' scale='1 1 1'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Transform Transform19 = createNode("Transform");
Transform19.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape20 = createNode("Shape");
Shape20.DEF = "HAnimJointShape";
Sphere Sphere21 = createNode("Sphere");
Sphere21.radius = 0.02;
Shape20.geometry = Sphere21;

Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.DEF = "HAnimJointMaterial";
Material23.diffuseColor = new SFColor(new float[0,0,0.8]);
Material23.transparency = 0.3;
Appearance22.material = Material23;

Shape20.appearance = Appearance22;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

Transform Transform24 = createNode("Transform");
Transform24.translation = new SFVec3f(new float[0,2.05,0]);
Shape Shape25 = createNode("Shape");
Shape25.DEF = "HAnimSegmentLine";
LineSet LineSet26 = createNode("LineSet");
LineSet26.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA27 = createNode("ColorRGBA");
ColorRGBA27.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA27.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet26.color = ColorRGBA27;

Coordinate Coordinate28 = createNode("Coordinate");
Coordinate28.point = new MFVec3f(new float[-0.05,0,0,0.05,0,0]);
LineSet26.coord = Coordinate28;

Shape25.geometry = LineSet26;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

Transform18.children[1] = Transform24;

Transform Transform29 = createNode("Transform");
Transform29.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape30 = createNode("Shape");
Shape30.DEF = "HAnimSiteShape";
IndexedFaceSet IndexedFaceSet31 = createNode("IndexedFaceSet");
IndexedFaceSet31.DEF = "DiamondIFS";
IndexedFaceSet31.creaseAngle = 0.5;
IndexedFaceSet31.solid = False;
IndexedFaceSet31.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA ColorRGBA32 = createNode("ColorRGBA");
ColorRGBA32.DEF = "HAnimSiteColorRGBA";
ColorRGBA32.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
IndexedFaceSet31.color = ColorRGBA32;

Coordinate Coordinate33 = createNode("Coordinate");
Coordinate33.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet31.coord = Coordinate33;

Shape30.geometry = IndexedFaceSet31;

Appearance Appearance34 = createNode("Appearance");
Material Material35 = createNode("Material");
Material35.diffuseColor = new SFColor(new float[1,1,0]);
Material35.transparency = 0.3;
Appearance34.material = Material35;

Shape30.appearance = Appearance34;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

Transform18.children[2] = Transform29;

Group17.children = new MFNode();

Group17.children[0] = Transform18;

children[1] = Group17;

NavigationInfo NavigationInfo36 = createNode("NavigationInfo");
NavigationInfo36.speed = 1.5;
children[2] = NavigationInfo36;

Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.description = "default";
children[3] = Viewpoint37;

HAnimHumanoid HAnimHumanoid38 = createNode("HAnimHumanoid");
HAnimHumanoid38.name = "HAnim";
HAnimHumanoid38.DEF = "hanim_HAnim";
HAnimHumanoid38.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimHumanoid38.version = "2.0";
HAnimJoint HAnimJoint39 = createNode("HAnimJoint");
HAnimJoint39.name = "humanoid_root";
HAnimJoint39.DEF = "hanim_humanoid_root";
HAnimJoint39.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint39.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint39.llimit = new MFFloat(new float[0,0,0]);
Shape Shape40 = createNode("Shape");
LineSet LineSet41 = createNode("LineSet");
LineSet41.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate42 = createNode("Coordinate");
Coordinate42.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet41.coord = Coordinate42;

//from humanoid_root to sacroiliac
ColorRGBA ColorRGBA43 = createNode("ColorRGBA");
ColorRGBA43.USE = "HAnimSegmentLineColorRGBA";
LineSet41.color = ColorRGBA43;

Shape40.geometry = LineSet41;

HAnimJoint39.child = new undefined();

HAnimJoint39.child[0] = Shape40;

HAnimSite HAnimSite44 = createNode("HAnimSite");
HAnimSite44.name = "buttocks_standing_wall_contact_point_pt";
HAnimSite44.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimSite44.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor45 = createNode("TouchSensor");
TouchSensor45.description = "HAnimSite buttocks_standing_wall_contact_point_pt";
HAnimSite44.children = new MFNode();

HAnimSite44.children[0] = TouchSensor45;

Shape Shape46 = createNode("Shape");
Shape46.USE = "HAnimSiteShape";
HAnimSite44.children[1] = Shape46;

HAnimJoint39.child[1] = HAnimSite44;

HAnimSite HAnimSite47 = createNode("HAnimSite");
HAnimSite47.name = "crotch_pt";
HAnimSite47.DEF = "hanim_crotch_pt";
HAnimSite47.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
TouchSensor TouchSensor48 = createNode("TouchSensor");
TouchSensor48.description = "HAnimSite crotch_pt";
HAnimSite47.children = new MFNode();

HAnimSite47.children[0] = TouchSensor48;

Shape Shape49 = createNode("Shape");
Shape49.USE = "HAnimSiteShape";
HAnimSite47.children[1] = Shape49;

HAnimJoint39.child[2] = HAnimSite47;

HAnimSite HAnimSite50 = createNode("HAnimSite");
HAnimSite50.name = "l_asis_pt";
HAnimSite50.DEF = "hanim_l_asis_pt";
HAnimSite50.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
TouchSensor TouchSensor51 = createNode("TouchSensor");
TouchSensor51.description = "HAnimSite l_asis_pt";
HAnimSite50.children = new MFNode();

HAnimSite50.children[0] = TouchSensor51;

Shape Shape52 = createNode("Shape");
Shape52.USE = "HAnimSiteShape";
HAnimSite50.children[1] = Shape52;

HAnimJoint39.child[3] = HAnimSite50;

HAnimSite HAnimSite53 = createNode("HAnimSite");
HAnimSite53.name = "l_iliocristale_pt";
HAnimSite53.DEF = "hanim_l_iliocristale_pt";
HAnimSite53.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
TouchSensor TouchSensor54 = createNode("TouchSensor");
TouchSensor54.description = "HAnimSite l_iliocristale_pt";
HAnimSite53.children = new MFNode();

HAnimSite53.children[0] = TouchSensor54;

Shape Shape55 = createNode("Shape");
Shape55.USE = "HAnimSiteShape";
HAnimSite53.children[1] = Shape55;

HAnimJoint39.child[4] = HAnimSite53;

HAnimSite HAnimSite56 = createNode("HAnimSite");
HAnimSite56.name = "l_psis_pt";
HAnimSite56.DEF = "hanim_l_psis_pt";
HAnimSite56.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
TouchSensor TouchSensor57 = createNode("TouchSensor");
TouchSensor57.description = "HAnimSite l_psis_pt";
HAnimSite56.children = new MFNode();

HAnimSite56.children[0] = TouchSensor57;

Shape Shape58 = createNode("Shape");
Shape58.USE = "HAnimSiteShape";
HAnimSite56.children[1] = Shape58;

HAnimJoint39.child[5] = HAnimSite56;

HAnimSite HAnimSite59 = createNode("HAnimSite");
HAnimSite59.name = "l_trochanterion_pt";
HAnimSite59.DEF = "hanim_l_trochanterion_pt";
HAnimSite59.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
TouchSensor TouchSensor60 = createNode("TouchSensor");
TouchSensor60.description = "HAnimSite l_trochanterion_pt";
HAnimSite59.children = new MFNode();

HAnimSite59.children[0] = TouchSensor60;

Shape Shape61 = createNode("Shape");
Shape61.USE = "HAnimSiteShape";
HAnimSite59.children[1] = Shape61;

HAnimJoint39.child[6] = HAnimSite59;

HAnimSite HAnimSite62 = createNode("HAnimSite");
HAnimSite62.name = "r_asis_pt";
HAnimSite62.DEF = "hanim_r_asis_pt";
HAnimSite62.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
TouchSensor TouchSensor63 = createNode("TouchSensor");
TouchSensor63.description = "HAnimSite r_asis_pt";
HAnimSite62.children = new MFNode();

HAnimSite62.children[0] = TouchSensor63;

Shape Shape64 = createNode("Shape");
Shape64.USE = "HAnimSiteShape";
HAnimSite62.children[1] = Shape64;

HAnimJoint39.child[7] = HAnimSite62;

HAnimSite HAnimSite65 = createNode("HAnimSite");
HAnimSite65.name = "r_iliocristale_pt";
HAnimSite65.DEF = "hanim_r_iliocristale_pt";
HAnimSite65.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
TouchSensor TouchSensor66 = createNode("TouchSensor");
TouchSensor66.description = "HAnimSite r_iliocristale_pt";
HAnimSite65.children = new MFNode();

HAnimSite65.children[0] = TouchSensor66;

Shape Shape67 = createNode("Shape");
Shape67.USE = "HAnimSiteShape";
HAnimSite65.children[1] = Shape67;

HAnimJoint39.child[8] = HAnimSite65;

HAnimSite HAnimSite68 = createNode("HAnimSite");
HAnimSite68.name = "r_psis_pt";
HAnimSite68.DEF = "hanim_r_psis_pt";
HAnimSite68.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
TouchSensor TouchSensor69 = createNode("TouchSensor");
TouchSensor69.description = "HAnimSite r_psis_pt";
HAnimSite68.children = new MFNode();

HAnimSite68.children[0] = TouchSensor69;

Shape Shape70 = createNode("Shape");
Shape70.USE = "HAnimSiteShape";
HAnimSite68.children[1] = Shape70;

HAnimJoint39.child[9] = HAnimSite68;

HAnimSite HAnimSite71 = createNode("HAnimSite");
HAnimSite71.name = "r_trochanterion_pt";
HAnimSite71.DEF = "hanim_r_trochanterion_pt";
HAnimSite71.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
TouchSensor TouchSensor72 = createNode("TouchSensor");
TouchSensor72.description = "HAnimSite r_trochanterion_pt";
HAnimSite71.children = new MFNode();

HAnimSite71.children[0] = TouchSensor72;

Shape Shape73 = createNode("Shape");
Shape73.USE = "HAnimSiteShape";
HAnimSite71.children[1] = Shape73;

HAnimJoint39.child[10] = HAnimSite71;

Shape Shape74 = createNode("Shape");
LineSet LineSet75 = createNode("LineSet");
LineSet75.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate76 = createNode("Coordinate");
Coordinate76.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet75.coord = Coordinate76;

//from humanoid_root to vl5
ColorRGBA ColorRGBA77 = createNode("ColorRGBA");
ColorRGBA77.USE = "HAnimSegmentLineColorRGBA";
LineSet75.color = ColorRGBA77;

Shape74.geometry = LineSet75;

HAnimJoint39.child[11] = Shape74;

HAnimSite HAnimSite78 = createNode("HAnimSite");
HAnimSite78.name = "navel_pt";
HAnimSite78.DEF = "hanim_navel_pt";
HAnimSite78.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
TouchSensor TouchSensor79 = createNode("TouchSensor");
TouchSensor79.description = "HAnimSite navel_pt";
HAnimSite78.children = new MFNode();

HAnimSite78.children[0] = TouchSensor79;

Shape Shape80 = createNode("Shape");
Shape80.USE = "HAnimSiteShape";
HAnimSite78.children[1] = Shape80;

HAnimJoint39.child[12] = HAnimSite78;

HAnimSite HAnimSite81 = createNode("HAnimSite");
HAnimSite81.name = "waist_preferred_anterior_pt";
HAnimSite81.DEF = "hanim_waist_preferred_anterior_pt";
HAnimSite81.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor82 = createNode("TouchSensor");
TouchSensor82.description = "HAnimSite waist_preferred_anterior_pt";
HAnimSite81.children = new MFNode();

HAnimSite81.children[0] = TouchSensor82;

Shape Shape83 = createNode("Shape");
Shape83.USE = "HAnimSiteShape";
HAnimSite81.children[1] = Shape83;

HAnimJoint39.child[13] = HAnimSite81;

HAnimSite HAnimSite84 = createNode("HAnimSite");
HAnimSite84.name = "waist_preferred_posterior_pt";
HAnimSite84.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite84.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
TouchSensor TouchSensor85 = createNode("TouchSensor");
TouchSensor85.description = "HAnimSite waist_preferred_posterior_pt";
HAnimSite84.children = new MFNode();

HAnimSite84.children[0] = TouchSensor85;

Shape Shape86 = createNode("Shape");
Shape86.USE = "HAnimSiteShape";
HAnimSite84.children[1] = Shape86;

HAnimJoint39.child[14] = HAnimSite84;

HAnimJoint HAnimJoint87 = createNode("HAnimJoint");
HAnimJoint87.name = "sacroiliac";
HAnimJoint87.DEF = "hanim_sacroiliac";
HAnimJoint87.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint87.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint87.llimit = new MFFloat(new float[0,0,0]);
Shape Shape88 = createNode("Shape");
LineSet LineSet89 = createNode("LineSet");
LineSet89.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate90 = createNode("Coordinate");
Coordinate90.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet89.coord = Coordinate90;

//from sacroiliac to l_hip
ColorRGBA ColorRGBA91 = createNode("ColorRGBA");
ColorRGBA91.USE = "HAnimSegmentLineColorRGBA";
LineSet89.color = ColorRGBA91;

Shape88.geometry = LineSet89;

HAnimJoint87.child = new undefined();

HAnimJoint87.child[0] = Shape88;

HAnimSite HAnimSite92 = createNode("HAnimSite");
HAnimSite92.name = "l_femoral_lateral_epicondyles_pt";
HAnimSite92.DEF = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimSite92.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
TouchSensor TouchSensor93 = createNode("TouchSensor");
TouchSensor93.description = "HAnimSite l_femoral_lateral_epicondyles_pt";
HAnimSite92.children = new MFNode();

HAnimSite92.children[0] = TouchSensor93;

Shape Shape94 = createNode("Shape");
Shape94.USE = "HAnimSiteShape";
HAnimSite92.children[1] = Shape94;

HAnimJoint87.child[1] = HAnimSite92;

HAnimSite HAnimSite95 = createNode("HAnimSite");
HAnimSite95.name = "l_femoral_medial_epicondyles_pt";
HAnimSite95.DEF = "hanim_l_femoral_medial_epicondyles_pt";
HAnimSite95.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
TouchSensor TouchSensor96 = createNode("TouchSensor");
TouchSensor96.description = "HAnimSite l_femoral_medial_epicondyles_pt";
HAnimSite95.children = new MFNode();

HAnimSite95.children[0] = TouchSensor96;

Shape Shape97 = createNode("Shape");
Shape97.USE = "HAnimSiteShape";
HAnimSite95.children[1] = Shape97;

HAnimJoint87.child[2] = HAnimSite95;

HAnimSite HAnimSite98 = createNode("HAnimSite");
HAnimSite98.name = "l_knee_crease_pt";
HAnimSite98.DEF = "hanim_l_knee_crease_pt";
HAnimSite98.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
TouchSensor TouchSensor99 = createNode("TouchSensor");
TouchSensor99.description = "HAnimSite l_knee_crease_pt";
HAnimSite98.children = new MFNode();

HAnimSite98.children[0] = TouchSensor99;

Shape Shape100 = createNode("Shape");
Shape100.USE = "HAnimSiteShape";
HAnimSite98.children[1] = Shape100;

HAnimJoint87.child[3] = HAnimSite98;

HAnimSite HAnimSite101 = createNode("HAnimSite");
HAnimSite101.name = "l_suprapatella_pt";
HAnimSite101.DEF = "hanim_l_suprapatella_pt";
HAnimSite101.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor102 = createNode("TouchSensor");
TouchSensor102.description = "HAnimSite l_suprapatella_pt";
HAnimSite101.children = new MFNode();

HAnimSite101.children[0] = TouchSensor102;

Shape Shape103 = createNode("Shape");
Shape103.USE = "HAnimSiteShape";
HAnimSite101.children[1] = Shape103;

HAnimJoint87.child[4] = HAnimSite101;

Shape Shape104 = createNode("Shape");
LineSet LineSet105 = createNode("LineSet");
LineSet105.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate106 = createNode("Coordinate");
Coordinate106.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet105.coord = Coordinate106;

//from sacroiliac to r_hip
ColorRGBA ColorRGBA107 = createNode("ColorRGBA");
ColorRGBA107.USE = "HAnimSegmentLineColorRGBA";
LineSet105.color = ColorRGBA107;

Shape104.geometry = LineSet105;

HAnimJoint87.child[5] = Shape104;

HAnimSite HAnimSite108 = createNode("HAnimSite");
HAnimSite108.name = "r_femoral_lateral_epicondyles_pt";
HAnimSite108.DEF = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimSite108.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
TouchSensor TouchSensor109 = createNode("TouchSensor");
TouchSensor109.description = "HAnimSite r_femoral_lateral_epicondyles_pt";
HAnimSite108.children = new MFNode();

HAnimSite108.children[0] = TouchSensor109;

Shape Shape110 = createNode("Shape");
Shape110.USE = "HAnimSiteShape";
HAnimSite108.children[1] = Shape110;

HAnimJoint87.child[6] = HAnimSite108;

HAnimSite HAnimSite111 = createNode("HAnimSite");
HAnimSite111.name = "r_femoral_medial_epicondyles_pt";
HAnimSite111.DEF = "hanim_r_femoral_medial_epicondyles_pt";
HAnimSite111.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
TouchSensor TouchSensor112 = createNode("TouchSensor");
TouchSensor112.description = "HAnimSite r_femoral_medial_epicondyles_pt";
HAnimSite111.children = new MFNode();

HAnimSite111.children[0] = TouchSensor112;

Shape Shape113 = createNode("Shape");
Shape113.USE = "HAnimSiteShape";
HAnimSite111.children[1] = Shape113;

HAnimJoint87.child[7] = HAnimSite111;

HAnimSite HAnimSite114 = createNode("HAnimSite");
HAnimSite114.name = "r_knee_crease_pt";
HAnimSite114.DEF = "hanim_r_knee_crease_pt";
HAnimSite114.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
TouchSensor TouchSensor115 = createNode("TouchSensor");
TouchSensor115.description = "HAnimSite r_knee_crease_pt";
HAnimSite114.children = new MFNode();

HAnimSite114.children[0] = TouchSensor115;

Shape Shape116 = createNode("Shape");
Shape116.USE = "HAnimSiteShape";
HAnimSite114.children[1] = Shape116;

HAnimJoint87.child[8] = HAnimSite114;

HAnimSite HAnimSite117 = createNode("HAnimSite");
HAnimSite117.name = "r_suprapatella_pt";
HAnimSite117.DEF = "hanim_r_suprapatella_pt";
HAnimSite117.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor118 = createNode("TouchSensor");
TouchSensor118.description = "HAnimSite r_suprapatella_pt";
HAnimSite117.children = new MFNode();

HAnimSite117.children[0] = TouchSensor118;

Shape Shape119 = createNode("Shape");
Shape119.USE = "HAnimSiteShape";
HAnimSite117.children[1] = Shape119;

HAnimJoint87.child[9] = HAnimSite117;

HAnimJoint HAnimJoint120 = createNode("HAnimJoint");
HAnimJoint120.name = "l_hip";
HAnimJoint120.DEF = "hanim_l_hip";
HAnimJoint120.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint120.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint120.llimit = new MFFloat(new float[0,0,0]);
Shape Shape121 = createNode("Shape");
LineSet LineSet122 = createNode("LineSet");
LineSet122.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate123 = createNode("Coordinate");
Coordinate123.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet122.coord = Coordinate123;

//from l_hip to l_knee
ColorRGBA ColorRGBA124 = createNode("ColorRGBA");
ColorRGBA124.USE = "HAnimSegmentLineColorRGBA";
LineSet122.color = ColorRGBA124;

Shape121.geometry = LineSet122;

HAnimJoint120.child = new undefined();

HAnimJoint120.child[0] = Shape121;

HAnimSite HAnimSite125 = createNode("HAnimSite");
HAnimSite125.name = "l_lateral_malleolus_pt";
HAnimSite125.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite125.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
TouchSensor TouchSensor126 = createNode("TouchSensor");
TouchSensor126.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite125.children = new MFNode();

HAnimSite125.children[0] = TouchSensor126;

Shape Shape127 = createNode("Shape");
Shape127.USE = "HAnimSiteShape";
HAnimSite125.children[1] = Shape127;

HAnimJoint120.child[1] = HAnimSite125;

HAnimSite HAnimSite128 = createNode("HAnimSite");
HAnimSite128.name = "l_medial_malleolus_pt";
HAnimSite128.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite128.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
TouchSensor TouchSensor129 = createNode("TouchSensor");
TouchSensor129.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite128.children = new MFNode();

HAnimSite128.children[0] = TouchSensor129;

Shape Shape130 = createNode("Shape");
Shape130.USE = "HAnimSiteShape";
HAnimSite128.children[1] = Shape130;

HAnimJoint120.child[2] = HAnimSite128;

HAnimSite HAnimSite131 = createNode("HAnimSite");
HAnimSite131.name = "l_tibiale_pt";
HAnimSite131.DEF = "hanim_l_tibiale_pt";
HAnimSite131.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor132 = createNode("TouchSensor");
TouchSensor132.description = "HAnimSite l_tibiale_pt";
HAnimSite131.children = new MFNode();

HAnimSite131.children[0] = TouchSensor132;

Shape Shape133 = createNode("Shape");
Shape133.USE = "HAnimSiteShape";
HAnimSite131.children[1] = Shape133;

HAnimJoint120.child[3] = HAnimSite131;

HAnimJoint HAnimJoint134 = createNode("HAnimJoint");
HAnimJoint134.name = "l_knee";
HAnimJoint134.DEF = "hanim_l_knee";
HAnimJoint134.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint134.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint134.llimit = new MFFloat(new float[0,0,0]);
Shape Shape135 = createNode("Shape");
LineSet LineSet136 = createNode("LineSet");
LineSet136.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate137 = createNode("Coordinate");
Coordinate137.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet136.coord = Coordinate137;

//from l_knee to l_talocrural
ColorRGBA ColorRGBA138 = createNode("ColorRGBA");
ColorRGBA138.USE = "HAnimSegmentLineColorRGBA";
LineSet136.color = ColorRGBA138;

Shape135.geometry = LineSet136;

HAnimJoint134.child = new undefined();

HAnimJoint134.child[0] = Shape135;

HAnimSite HAnimSite139 = createNode("HAnimSite");
HAnimSite139.name = "l_calcaneus_posterior_pt";
HAnimSite139.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite139.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
TouchSensor TouchSensor140 = createNode("TouchSensor");
TouchSensor140.description = "HAnimSite l_calcaneus_posterior_pt";
HAnimSite139.children = new MFNode();

HAnimSite139.children[0] = TouchSensor140;

Shape Shape141 = createNode("Shape");
Shape141.USE = "HAnimSiteShape";
HAnimSite139.children[1] = Shape141;

HAnimJoint134.child[1] = HAnimSite139;

HAnimSite HAnimSite142 = createNode("HAnimSite");
HAnimSite142.name = "l_sphyrion_pt";
HAnimSite142.DEF = "hanim_l_sphyrion_pt";
HAnimSite142.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
TouchSensor TouchSensor143 = createNode("TouchSensor");
TouchSensor143.description = "HAnimSite l_sphyrion_pt";
HAnimSite142.children = new MFNode();

HAnimSite142.children[0] = TouchSensor143;

Shape Shape144 = createNode("Shape");
Shape144.USE = "HAnimSiteShape";
HAnimSite142.children[1] = Shape144;

HAnimJoint134.child[2] = HAnimSite142;

HAnimJoint HAnimJoint145 = createNode("HAnimJoint");
HAnimJoint145.name = "l_talocrural";
HAnimJoint145.DEF = "hanim_l_talocrural";
HAnimJoint145.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint145.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint145.llimit = new MFFloat(new float[0,0,0]);
Shape Shape146 = createNode("Shape");
LineSet LineSet147 = createNode("LineSet");
LineSet147.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate148 = createNode("Coordinate");
Coordinate148.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0,1,0]);
LineSet147.coord = Coordinate148;

//from l_talocrural to l_talocalcaneonavicular
ColorRGBA ColorRGBA149 = createNode("ColorRGBA");
ColorRGBA149.USE = "HAnimSegmentLineColorRGBA";
LineSet147.color = ColorRGBA149;

Shape146.geometry = LineSet147;

HAnimJoint145.child = new undefined();

HAnimJoint145.child[0] = Shape146;

Shape Shape150 = createNode("Shape");
LineSet LineSet151 = createNode("LineSet");
LineSet151.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate152 = createNode("Coordinate");
Coordinate152.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0,1,0]);
LineSet151.coord = Coordinate152;

//from l_talocrural to l_calcaneocuboid
ColorRGBA ColorRGBA153 = createNode("ColorRGBA");
ColorRGBA153.USE = "HAnimSegmentLineColorRGBA";
LineSet151.color = ColorRGBA153;

Shape150.geometry = LineSet151;

HAnimJoint145.child[1] = Shape150;

HAnimJoint HAnimJoint154 = createNode("HAnimJoint");
HAnimJoint154.name = "l_talocalcaneonavicular";
HAnimJoint154.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint154.center = new SFVec3f(new float[0,1,0]);
HAnimJoint154.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint154.llimit = new MFFloat(new float[0,0,0]);
Shape Shape155 = createNode("Shape");
LineSet LineSet156 = createNode("LineSet");
LineSet156.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate157 = createNode("Coordinate");
Coordinate157.point = new MFVec3f(new float[0,1,0]);
LineSet156.coord = Coordinate157;

//from l_talocalcaneonavicular to l_cuneonavicular_1
ColorRGBA ColorRGBA158 = createNode("ColorRGBA");
ColorRGBA158.USE = "HAnimSegmentLineColorRGBA";
LineSet156.color = ColorRGBA158;

Shape155.geometry = LineSet156;

HAnimJoint154.child = new undefined();

HAnimJoint154.child[0] = Shape155;

Shape Shape159 = createNode("Shape");
LineSet LineSet160 = createNode("LineSet");
LineSet160.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate161 = createNode("Coordinate");
Coordinate161.point = new MFVec3f(new float[0,1,0]);
LineSet160.coord = Coordinate161;

//from l_talocalcaneonavicular to l_cuneonavicular_2
ColorRGBA ColorRGBA162 = createNode("ColorRGBA");
ColorRGBA162.USE = "HAnimSegmentLineColorRGBA";
LineSet160.color = ColorRGBA162;

Shape159.geometry = LineSet160;

HAnimJoint154.child[1] = Shape159;

Shape Shape163 = createNode("Shape");
LineSet LineSet164 = createNode("LineSet");
LineSet164.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate165 = createNode("Coordinate");
Coordinate165.point = new MFVec3f(new float[0,1,0]);
LineSet164.coord = Coordinate165;

//from l_talocalcaneonavicular to l_cuneonavicular_3
ColorRGBA ColorRGBA166 = createNode("ColorRGBA");
ColorRGBA166.USE = "HAnimSegmentLineColorRGBA";
LineSet164.color = ColorRGBA166;

Shape163.geometry = LineSet164;

HAnimJoint154.child[2] = Shape163;

HAnimJoint HAnimJoint167 = createNode("HAnimJoint");
HAnimJoint167.name = "l_cuneonavicular_1";
HAnimJoint167.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint167.center = new SFVec3f(new float[0,1,0]);
HAnimJoint167.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint167.llimit = new MFFloat(new float[0,0,0]);
Shape Shape168 = createNode("Shape");
LineSet LineSet169 = createNode("LineSet");
LineSet169.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate170 = createNode("Coordinate");
Coordinate170.point = new MFVec3f(new float[0,1,0]);
LineSet169.coord = Coordinate170;

//from l_cuneonavicular_1 to l_tarsometatarsal_1
ColorRGBA ColorRGBA171 = createNode("ColorRGBA");
ColorRGBA171.USE = "HAnimSegmentLineColorRGBA";
LineSet169.color = ColorRGBA171;

Shape168.geometry = LineSet169;

HAnimJoint167.child = new undefined();

HAnimJoint167.child[0] = Shape168;

HAnimJoint HAnimJoint172 = createNode("HAnimJoint");
HAnimJoint172.name = "l_tarsometatarsal_1";
HAnimJoint172.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint172.center = new SFVec3f(new float[0,1,0]);
HAnimJoint172.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint172.llimit = new MFFloat(new float[0,0,0]);
Shape Shape173 = createNode("Shape");
LineSet LineSet174 = createNode("LineSet");
LineSet174.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate175 = createNode("Coordinate");
Coordinate175.point = new MFVec3f(new float[0,1,0]);
LineSet174.coord = Coordinate175;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1
ColorRGBA ColorRGBA176 = createNode("ColorRGBA");
ColorRGBA176.USE = "HAnimSegmentLineColorRGBA";
LineSet174.color = ColorRGBA176;

Shape173.geometry = LineSet174;

HAnimJoint172.child = new undefined();

HAnimJoint172.child[0] = Shape173;

HAnimSite HAnimSite177 = createNode("HAnimSite");
HAnimSite177.name = "l_metatarsal_phalanx_1_pt";
HAnimSite177.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite177.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor178 = createNode("TouchSensor");
TouchSensor178.description = "HAnimSite l_metatarsal_phalanx_1_pt";
HAnimSite177.children = new MFNode();

HAnimSite177.children[0] = TouchSensor178;

Shape Shape179 = createNode("Shape");
Shape179.USE = "HAnimSiteShape";
HAnimSite177.children[1] = Shape179;

HAnimJoint172.child[1] = HAnimSite177;

HAnimJoint HAnimJoint180 = createNode("HAnimJoint");
HAnimJoint180.name = "l_metatarsophalangeal_1";
HAnimJoint180.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint180.center = new SFVec3f(new float[0,1,0]);
HAnimJoint180.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint180.llimit = new MFFloat(new float[0,0,0]);
Shape Shape181 = createNode("Shape");
LineSet LineSet182 = createNode("LineSet");
LineSet182.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate183 = createNode("Coordinate");
Coordinate183.point = new MFVec3f(new float[0,1,0]);
LineSet182.coord = Coordinate183;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1
ColorRGBA ColorRGBA184 = createNode("ColorRGBA");
ColorRGBA184.USE = "HAnimSegmentLineColorRGBA";
LineSet182.color = ColorRGBA184;

Shape181.geometry = LineSet182;

HAnimJoint180.child = new undefined();

HAnimJoint180.child[0] = Shape181;

HAnimSite HAnimSite185 = createNode("HAnimSite");
HAnimSite185.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite185.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimSite185.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor186 = createNode("TouchSensor");
TouchSensor186.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite185.children = new MFNode();

HAnimSite185.children[0] = TouchSensor186;

Shape Shape187 = createNode("Shape");
Shape187.USE = "HAnimSiteShape";
HAnimSite185.children[1] = Shape187;

HAnimJoint180.child[1] = HAnimSite185;

HAnimJoint HAnimJoint188 = createNode("HAnimJoint");
HAnimJoint188.name = "l_tarsal_interphalangeal_1";
HAnimJoint188.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint188.center = new SFVec3f(new float[0,1,0]);
HAnimJoint188.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint188.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint180.children[2] = HAnimJoint188;

HAnimJoint172.children[2] = HAnimJoint180;

HAnimJoint167.children[1] = HAnimJoint172;

HAnimJoint154.children[3] = HAnimJoint167;

HAnimJoint HAnimJoint189 = createNode("HAnimJoint");
HAnimJoint189.name = "l_cuneonavicular_2";
HAnimJoint189.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint189.center = new SFVec3f(new float[0,1,0]);
HAnimJoint189.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint189.llimit = new MFFloat(new float[0,0,0]);
Shape Shape190 = createNode("Shape");
LineSet LineSet191 = createNode("LineSet");
LineSet191.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate192 = createNode("Coordinate");
Coordinate192.point = new MFVec3f(new float[0,1,0]);
LineSet191.coord = Coordinate192;

//from l_cuneonavicular_2 to l_tarsometatarsal_2
ColorRGBA ColorRGBA193 = createNode("ColorRGBA");
ColorRGBA193.USE = "HAnimSegmentLineColorRGBA";
LineSet191.color = ColorRGBA193;

Shape190.geometry = LineSet191;

HAnimJoint189.child = new undefined();

HAnimJoint189.child[0] = Shape190;

HAnimJoint HAnimJoint194 = createNode("HAnimJoint");
HAnimJoint194.name = "l_tarsometatarsal_2";
HAnimJoint194.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint194.center = new SFVec3f(new float[0,1,0]);
HAnimJoint194.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint194.llimit = new MFFloat(new float[0,0,0]);
Shape Shape195 = createNode("Shape");
LineSet LineSet196 = createNode("LineSet");
LineSet196.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate197 = createNode("Coordinate");
Coordinate197.point = new MFVec3f(new float[0,1,0]);
LineSet196.coord = Coordinate197;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2
ColorRGBA ColorRGBA198 = createNode("ColorRGBA");
ColorRGBA198.USE = "HAnimSegmentLineColorRGBA";
LineSet196.color = ColorRGBA198;

Shape195.geometry = LineSet196;

HAnimJoint194.child = new undefined();

HAnimJoint194.child[0] = Shape195;

HAnimJoint HAnimJoint199 = createNode("HAnimJoint");
HAnimJoint199.name = "l_metatarsophalangeal_2";
HAnimJoint199.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint199.center = new SFVec3f(new float[0,1,0]);
HAnimJoint199.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint199.llimit = new MFFloat(new float[0,0,0]);
Shape Shape200 = createNode("Shape");
LineSet LineSet201 = createNode("LineSet");
LineSet201.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate202 = createNode("Coordinate");
Coordinate202.point = new MFVec3f(new float[0,1,0]);
LineSet201.coord = Coordinate202;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2
ColorRGBA ColorRGBA203 = createNode("ColorRGBA");
ColorRGBA203.USE = "HAnimSegmentLineColorRGBA";
LineSet201.color = ColorRGBA203;

Shape200.geometry = LineSet201;

HAnimJoint199.child = new undefined();

HAnimJoint199.child[0] = Shape200;

HAnimJoint HAnimJoint204 = createNode("HAnimJoint");
HAnimJoint204.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint204.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint204.center = new SFVec3f(new float[0,1,0]);
HAnimJoint204.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint204.llimit = new MFFloat(new float[0,0,0]);
Shape Shape205 = createNode("Shape");
LineSet LineSet206 = createNode("LineSet");
LineSet206.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate207 = createNode("Coordinate");
Coordinate207.point = new MFVec3f(new float[0,1,0]);
LineSet206.coord = Coordinate207;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2
ColorRGBA ColorRGBA208 = createNode("ColorRGBA");
ColorRGBA208.USE = "HAnimSegmentLineColorRGBA";
LineSet206.color = ColorRGBA208;

Shape205.geometry = LineSet206;

HAnimJoint204.child = new undefined();

HAnimJoint204.child[0] = Shape205;

HAnimSite HAnimSite209 = createNode("HAnimSite");
HAnimSite209.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite209.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite209.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
TouchSensor TouchSensor210 = createNode("TouchSensor");
TouchSensor210.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite209.children = new MFNode();

HAnimSite209.children[0] = TouchSensor210;

Shape Shape211 = createNode("Shape");
Shape211.USE = "HAnimSiteShape";
HAnimSite209.children[1] = Shape211;

HAnimJoint204.child[1] = HAnimSite209;

HAnimJoint HAnimJoint212 = createNode("HAnimJoint");
HAnimJoint212.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint212.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint212.center = new SFVec3f(new float[0,1,0]);
HAnimJoint212.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint212.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint204.children[2] = HAnimJoint212;

HAnimJoint199.children[1] = HAnimJoint204;

HAnimJoint194.children[1] = HAnimJoint199;

HAnimJoint189.children[1] = HAnimJoint194;

HAnimJoint154.children[4] = HAnimJoint189;

HAnimJoint HAnimJoint213 = createNode("HAnimJoint");
HAnimJoint213.name = "l_cuneonavicular_3";
HAnimJoint213.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint213.center = new SFVec3f(new float[0,1,0]);
HAnimJoint213.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint213.llimit = new MFFloat(new float[0,0,0]);
Shape Shape214 = createNode("Shape");
LineSet LineSet215 = createNode("LineSet");
LineSet215.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate216 = createNode("Coordinate");
Coordinate216.point = new MFVec3f(new float[0,1,0]);
LineSet215.coord = Coordinate216;

//from l_cuneonavicular_3 to l_tarsometatarsal_3
ColorRGBA ColorRGBA217 = createNode("ColorRGBA");
ColorRGBA217.USE = "HAnimSegmentLineColorRGBA";
LineSet215.color = ColorRGBA217;

Shape214.geometry = LineSet215;

HAnimJoint213.child = new undefined();

HAnimJoint213.child[0] = Shape214;

HAnimJoint HAnimJoint218 = createNode("HAnimJoint");
HAnimJoint218.name = "l_tarsometatarsal_3";
HAnimJoint218.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint218.center = new SFVec3f(new float[0,1,0]);
HAnimJoint218.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint218.llimit = new MFFloat(new float[0,0,0]);
Shape Shape219 = createNode("Shape");
LineSet LineSet220 = createNode("LineSet");
LineSet220.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate221 = createNode("Coordinate");
Coordinate221.point = new MFVec3f(new float[0,1,0]);
LineSet220.coord = Coordinate221;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3
ColorRGBA ColorRGBA222 = createNode("ColorRGBA");
ColorRGBA222.USE = "HAnimSegmentLineColorRGBA";
LineSet220.color = ColorRGBA222;

Shape219.geometry = LineSet220;

HAnimJoint218.child = new undefined();

HAnimJoint218.child[0] = Shape219;

HAnimJoint HAnimJoint223 = createNode("HAnimJoint");
HAnimJoint223.name = "l_metatarsophalangeal_3";
HAnimJoint223.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint223.center = new SFVec3f(new float[0,1,0]);
HAnimJoint223.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint223.llimit = new MFFloat(new float[0,0,0]);
Shape Shape224 = createNode("Shape");
LineSet LineSet225 = createNode("LineSet");
LineSet225.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate226 = createNode("Coordinate");
Coordinate226.point = new MFVec3f(new float[0,1,0]);
LineSet225.coord = Coordinate226;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3
ColorRGBA ColorRGBA227 = createNode("ColorRGBA");
ColorRGBA227.USE = "HAnimSegmentLineColorRGBA";
LineSet225.color = ColorRGBA227;

Shape224.geometry = LineSet225;

HAnimJoint223.child = new undefined();

HAnimJoint223.child[0] = Shape224;

HAnimJoint HAnimJoint228 = createNode("HAnimJoint");
HAnimJoint228.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint228.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint228.center = new SFVec3f(new float[0,1,0]);
HAnimJoint228.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint228.llimit = new MFFloat(new float[0,0,0]);
Shape Shape229 = createNode("Shape");
LineSet LineSet230 = createNode("LineSet");
LineSet230.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate231 = createNode("Coordinate");
Coordinate231.point = new MFVec3f(new float[0,1,0]);
LineSet230.coord = Coordinate231;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3
ColorRGBA ColorRGBA232 = createNode("ColorRGBA");
ColorRGBA232.USE = "HAnimSegmentLineColorRGBA";
LineSet230.color = ColorRGBA232;

Shape229.geometry = LineSet230;

HAnimJoint228.child = new undefined();

HAnimJoint228.child[0] = Shape229;

HAnimSite HAnimSite233 = createNode("HAnimSite");
HAnimSite233.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite233.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimSite233.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor234 = createNode("TouchSensor");
TouchSensor234.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite233.children = new MFNode();

HAnimSite233.children[0] = TouchSensor234;

Shape Shape235 = createNode("Shape");
Shape235.USE = "HAnimSiteShape";
HAnimSite233.children[1] = Shape235;

HAnimJoint228.child[1] = HAnimSite233;

HAnimJoint HAnimJoint236 = createNode("HAnimJoint");
HAnimJoint236.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint236.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint236.center = new SFVec3f(new float[0,1,0]);
HAnimJoint236.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint236.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint228.children[2] = HAnimJoint236;

HAnimJoint223.children[1] = HAnimJoint228;

HAnimJoint218.children[1] = HAnimJoint223;

HAnimJoint213.children[1] = HAnimJoint218;

HAnimJoint154.children[5] = HAnimJoint213;

HAnimJoint145.children[2] = HAnimJoint154;

HAnimJoint HAnimJoint237 = createNode("HAnimJoint");
HAnimJoint237.name = "l_calcaneocuboid";
HAnimJoint237.DEF = "hanim_l_calcaneocuboid";
HAnimJoint237.center = new SFVec3f(new float[0,1,0]);
HAnimJoint237.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint237.llimit = new MFFloat(new float[0,0,0]);
Shape Shape238 = createNode("Shape");
LineSet LineSet239 = createNode("LineSet");
LineSet239.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate240 = createNode("Coordinate");
Coordinate240.point = new MFVec3f(new float[0,1,0]);
LineSet239.coord = Coordinate240;

//from l_calcaneocuboid to l_transversetarsal
ColorRGBA ColorRGBA241 = createNode("ColorRGBA");
ColorRGBA241.USE = "HAnimSegmentLineColorRGBA";
LineSet239.color = ColorRGBA241;

Shape238.geometry = LineSet239;

HAnimJoint237.child = new undefined();

HAnimJoint237.child[0] = Shape238;

HAnimJoint HAnimJoint242 = createNode("HAnimJoint");
HAnimJoint242.name = "l_transversetarsal";
HAnimJoint242.DEF = "hanim_l_transversetarsal";
HAnimJoint242.center = new SFVec3f(new float[0,1,0]);
HAnimJoint242.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint242.llimit = new MFFloat(new float[0,0,0]);
Shape Shape243 = createNode("Shape");
LineSet LineSet244 = createNode("LineSet");
LineSet244.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate245 = createNode("Coordinate");
Coordinate245.point = new MFVec3f(new float[0,1,0]);
LineSet244.coord = Coordinate245;

//from l_transversetarsal to l_tarsometatarsal_4
ColorRGBA ColorRGBA246 = createNode("ColorRGBA");
ColorRGBA246.USE = "HAnimSegmentLineColorRGBA";
LineSet244.color = ColorRGBA246;

Shape243.geometry = LineSet244;

HAnimJoint242.child = new undefined();

HAnimJoint242.child[0] = Shape243;

Shape Shape247 = createNode("Shape");
LineSet LineSet248 = createNode("LineSet");
LineSet248.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate249 = createNode("Coordinate");
Coordinate249.point = new MFVec3f(new float[0,1,0]);
LineSet248.coord = Coordinate249;

//from l_transversetarsal to l_tarsometatarsal_5
ColorRGBA ColorRGBA250 = createNode("ColorRGBA");
ColorRGBA250.USE = "HAnimSegmentLineColorRGBA";
LineSet248.color = ColorRGBA250;

Shape247.geometry = LineSet248;

HAnimJoint242.child[1] = Shape247;

HAnimJoint HAnimJoint251 = createNode("HAnimJoint");
HAnimJoint251.name = "l_tarsometatarsal_4";
HAnimJoint251.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint251.center = new SFVec3f(new float[0,1,0]);
HAnimJoint251.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint251.llimit = new MFFloat(new float[0,0,0]);
Shape Shape252 = createNode("Shape");
LineSet LineSet253 = createNode("LineSet");
LineSet253.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate254 = createNode("Coordinate");
Coordinate254.point = new MFVec3f(new float[0,1,0]);
LineSet253.coord = Coordinate254;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4
ColorRGBA ColorRGBA255 = createNode("ColorRGBA");
ColorRGBA255.USE = "HAnimSegmentLineColorRGBA";
LineSet253.color = ColorRGBA255;

Shape252.geometry = LineSet253;

HAnimJoint251.child = new undefined();

HAnimJoint251.child[0] = Shape252;

HAnimJoint HAnimJoint256 = createNode("HAnimJoint");
HAnimJoint256.name = "l_metatarsophalangeal_4";
HAnimJoint256.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint256.center = new SFVec3f(new float[0,1,0]);
HAnimJoint256.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint256.llimit = new MFFloat(new float[0,0,0]);
Shape Shape257 = createNode("Shape");
LineSet LineSet258 = createNode("LineSet");
LineSet258.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate259 = createNode("Coordinate");
Coordinate259.point = new MFVec3f(new float[0,1,0]);
LineSet258.coord = Coordinate259;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4
ColorRGBA ColorRGBA260 = createNode("ColorRGBA");
ColorRGBA260.USE = "HAnimSegmentLineColorRGBA";
LineSet258.color = ColorRGBA260;

Shape257.geometry = LineSet258;

HAnimJoint256.child = new undefined();

HAnimJoint256.child[0] = Shape257;

HAnimJoint HAnimJoint261 = createNode("HAnimJoint");
HAnimJoint261.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint261.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint261.center = new SFVec3f(new float[0,1,0]);
HAnimJoint261.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint261.llimit = new MFFloat(new float[0,0,0]);
Shape Shape262 = createNode("Shape");
LineSet LineSet263 = createNode("LineSet");
LineSet263.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate264 = createNode("Coordinate");
Coordinate264.point = new MFVec3f(new float[0,1,0]);
LineSet263.coord = Coordinate264;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4
ColorRGBA ColorRGBA265 = createNode("ColorRGBA");
ColorRGBA265.USE = "HAnimSegmentLineColorRGBA";
LineSet263.color = ColorRGBA265;

Shape262.geometry = LineSet263;

HAnimJoint261.child = new undefined();

HAnimJoint261.child[0] = Shape262;

HAnimSite HAnimSite266 = createNode("HAnimSite");
HAnimSite266.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite266.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimSite266.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor267 = createNode("TouchSensor");
TouchSensor267.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite266.children = new MFNode();

HAnimSite266.children[0] = TouchSensor267;

Shape Shape268 = createNode("Shape");
Shape268.USE = "HAnimSiteShape";
HAnimSite266.children[1] = Shape268;

HAnimJoint261.child[1] = HAnimSite266;

HAnimJoint HAnimJoint269 = createNode("HAnimJoint");
HAnimJoint269.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint269.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint269.center = new SFVec3f(new float[0,1,0]);
HAnimJoint269.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint269.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint261.children[2] = HAnimJoint269;

HAnimJoint256.children[1] = HAnimJoint261;

HAnimJoint251.children[1] = HAnimJoint256;

HAnimJoint242.children[2] = HAnimJoint251;

HAnimJoint HAnimJoint270 = createNode("HAnimJoint");
HAnimJoint270.name = "l_tarsometatarsal_5";
HAnimJoint270.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint270.center = new SFVec3f(new float[0,1,0]);
HAnimJoint270.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint270.llimit = new MFFloat(new float[0,0,0]);
Shape Shape271 = createNode("Shape");
LineSet LineSet272 = createNode("LineSet");
LineSet272.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate273 = createNode("Coordinate");
Coordinate273.point = new MFVec3f(new float[0,1,0]);
LineSet272.coord = Coordinate273;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5
ColorRGBA ColorRGBA274 = createNode("ColorRGBA");
ColorRGBA274.USE = "HAnimSegmentLineColorRGBA";
LineSet272.color = ColorRGBA274;

Shape271.geometry = LineSet272;

HAnimJoint270.child = new undefined();

HAnimJoint270.child[0] = Shape271;

HAnimSite HAnimSite275 = createNode("HAnimSite");
HAnimSite275.name = "l_metatarsal_phalanx_5_pt";
HAnimSite275.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite275.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor276 = createNode("TouchSensor");
TouchSensor276.description = "HAnimSite l_metatarsal_phalanx_5_pt";
HAnimSite275.children = new MFNode();

HAnimSite275.children[0] = TouchSensor276;

Shape Shape277 = createNode("Shape");
Shape277.USE = "HAnimSiteShape";
HAnimSite275.children[1] = Shape277;

HAnimJoint270.child[1] = HAnimSite275;

HAnimJoint HAnimJoint278 = createNode("HAnimJoint");
HAnimJoint278.name = "l_metatarsophalangeal_5";
HAnimJoint278.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint278.center = new SFVec3f(new float[0,1,0]);
HAnimJoint278.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint278.llimit = new MFFloat(new float[0,0,0]);
Shape Shape279 = createNode("Shape");
LineSet LineSet280 = createNode("LineSet");
LineSet280.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate281 = createNode("Coordinate");
Coordinate281.point = new MFVec3f(new float[0,1,0]);
LineSet280.coord = Coordinate281;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5
ColorRGBA ColorRGBA282 = createNode("ColorRGBA");
ColorRGBA282.USE = "HAnimSegmentLineColorRGBA";
LineSet280.color = ColorRGBA282;

Shape279.geometry = LineSet280;

HAnimJoint278.child = new undefined();

HAnimJoint278.child[0] = Shape279;

HAnimJoint HAnimJoint283 = createNode("HAnimJoint");
HAnimJoint283.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint283.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint283.center = new SFVec3f(new float[0,1,0]);
HAnimJoint283.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint283.llimit = new MFFloat(new float[0,0,0]);
Shape Shape284 = createNode("Shape");
LineSet LineSet285 = createNode("LineSet");
LineSet285.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate286 = createNode("Coordinate");
Coordinate286.point = new MFVec3f(new float[0,1,0]);
LineSet285.coord = Coordinate286;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5
ColorRGBA ColorRGBA287 = createNode("ColorRGBA");
ColorRGBA287.USE = "HAnimSegmentLineColorRGBA";
LineSet285.color = ColorRGBA287;

Shape284.geometry = LineSet285;

HAnimJoint283.child = new undefined();

HAnimJoint283.child[0] = Shape284;

HAnimSite HAnimSite288 = createNode("HAnimSite");
HAnimSite288.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite288.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimSite288.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor289 = createNode("TouchSensor");
TouchSensor289.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite288.children = new MFNode();

HAnimSite288.children[0] = TouchSensor289;

Shape Shape290 = createNode("Shape");
Shape290.USE = "HAnimSiteShape";
HAnimSite288.children[1] = Shape290;

HAnimJoint283.child[1] = HAnimSite288;

HAnimJoint HAnimJoint291 = createNode("HAnimJoint");
HAnimJoint291.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint291.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint291.center = new SFVec3f(new float[0,1,0]);
HAnimJoint291.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint291.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint283.children[2] = HAnimJoint291;

HAnimJoint278.children[1] = HAnimJoint283;

HAnimJoint270.children[2] = HAnimJoint278;

HAnimJoint242.children[3] = HAnimJoint270;

HAnimJoint237.children[1] = HAnimJoint242;

HAnimJoint145.children[3] = HAnimJoint237;

HAnimJoint134.children[3] = HAnimJoint145;

HAnimJoint120.children[4] = HAnimJoint134;

HAnimJoint87.children[10] = HAnimJoint120;

HAnimJoint HAnimJoint292 = createNode("HAnimJoint");
HAnimJoint292.name = "r_hip";
HAnimJoint292.DEF = "hanim_r_hip";
HAnimJoint292.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint292.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint292.llimit = new MFFloat(new float[0,0,0]);
Shape Shape293 = createNode("Shape");
LineSet LineSet294 = createNode("LineSet");
LineSet294.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate295 = createNode("Coordinate");
Coordinate295.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet294.coord = Coordinate295;

//from r_hip to r_knee
ColorRGBA ColorRGBA296 = createNode("ColorRGBA");
ColorRGBA296.USE = "HAnimSegmentLineColorRGBA";
LineSet294.color = ColorRGBA296;

Shape293.geometry = LineSet294;

HAnimJoint292.child = new undefined();

HAnimJoint292.child[0] = Shape293;

HAnimSite HAnimSite297 = createNode("HAnimSite");
HAnimSite297.name = "r_lateral_malleolus_pt";
HAnimSite297.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite297.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor298 = createNode("TouchSensor");
TouchSensor298.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite297.children = new MFNode();

HAnimSite297.children[0] = TouchSensor298;

Shape Shape299 = createNode("Shape");
Shape299.USE = "HAnimSiteShape";
HAnimSite297.children[1] = Shape299;

HAnimJoint292.child[1] = HAnimSite297;

HAnimSite HAnimSite300 = createNode("HAnimSite");
HAnimSite300.name = "r_medial_malleolus_pt";
HAnimSite300.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite300.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor301 = createNode("TouchSensor");
TouchSensor301.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite300.children = new MFNode();

HAnimSite300.children[0] = TouchSensor301;

Shape Shape302 = createNode("Shape");
Shape302.USE = "HAnimSiteShape";
HAnimSite300.children[1] = Shape302;

HAnimJoint292.child[2] = HAnimSite300;

HAnimSite HAnimSite303 = createNode("HAnimSite");
HAnimSite303.name = "r_tibiale_pt";
HAnimSite303.DEF = "hanim_r_tibiale_pt";
HAnimSite303.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor304 = createNode("TouchSensor");
TouchSensor304.description = "HAnimSite r_tibiale_pt";
HAnimSite303.children = new MFNode();

HAnimSite303.children[0] = TouchSensor304;

Shape Shape305 = createNode("Shape");
Shape305.USE = "HAnimSiteShape";
HAnimSite303.children[1] = Shape305;

HAnimJoint292.child[3] = HAnimSite303;

HAnimJoint HAnimJoint306 = createNode("HAnimJoint");
HAnimJoint306.name = "r_knee";
HAnimJoint306.DEF = "hanim_r_knee";
HAnimJoint306.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint306.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint306.llimit = new MFFloat(new float[0,0,0]);
Shape Shape307 = createNode("Shape");
LineSet LineSet308 = createNode("LineSet");
LineSet308.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate309 = createNode("Coordinate");
Coordinate309.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet308.coord = Coordinate309;

//from r_knee to r_talocrural
ColorRGBA ColorRGBA310 = createNode("ColorRGBA");
ColorRGBA310.USE = "HAnimSegmentLineColorRGBA";
LineSet308.color = ColorRGBA310;

Shape307.geometry = LineSet308;

HAnimJoint306.child = new undefined();

HAnimJoint306.child[0] = Shape307;

HAnimSite HAnimSite311 = createNode("HAnimSite");
HAnimSite311.name = "r_calcaneus_posterior_pt";
HAnimSite311.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite311.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor312 = createNode("TouchSensor");
TouchSensor312.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite311.children = new MFNode();

HAnimSite311.children[0] = TouchSensor312;

Shape Shape313 = createNode("Shape");
Shape313.USE = "HAnimSiteShape";
HAnimSite311.children[1] = Shape313;

HAnimJoint306.child[1] = HAnimSite311;

HAnimSite HAnimSite314 = createNode("HAnimSite");
HAnimSite314.name = "r_sphyrion_pt";
HAnimSite314.DEF = "hanim_r_sphyrion_pt";
HAnimSite314.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor315 = createNode("TouchSensor");
TouchSensor315.description = "HAnimSite r_sphyrion_pt";
HAnimSite314.children = new MFNode();

HAnimSite314.children[0] = TouchSensor315;

Shape Shape316 = createNode("Shape");
Shape316.USE = "HAnimSiteShape";
HAnimSite314.children[1] = Shape316;

HAnimJoint306.child[2] = HAnimSite314;

HAnimJoint HAnimJoint317 = createNode("HAnimJoint");
HAnimJoint317.name = "r_talocrural";
HAnimJoint317.DEF = "hanim_r_talocrural";
HAnimJoint317.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint317.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint317.llimit = new MFFloat(new float[0,0,0]);
Shape Shape318 = createNode("Shape");
LineSet LineSet319 = createNode("LineSet");
LineSet319.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate320 = createNode("Coordinate");
Coordinate320.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,0,1,0]);
LineSet319.coord = Coordinate320;

//from r_talocrural to r_talocalcaneonavicular
ColorRGBA ColorRGBA321 = createNode("ColorRGBA");
ColorRGBA321.USE = "HAnimSegmentLineColorRGBA";
LineSet319.color = ColorRGBA321;

Shape318.geometry = LineSet319;

HAnimJoint317.child = new undefined();

HAnimJoint317.child[0] = Shape318;

Shape Shape322 = createNode("Shape");
LineSet LineSet323 = createNode("LineSet");
LineSet323.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate324 = createNode("Coordinate");
Coordinate324.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,0,1,0]);
LineSet323.coord = Coordinate324;

//from r_talocrural to r_calcaneocuboid
ColorRGBA ColorRGBA325 = createNode("ColorRGBA");
ColorRGBA325.USE = "HAnimSegmentLineColorRGBA";
LineSet323.color = ColorRGBA325;

Shape322.geometry = LineSet323;

HAnimJoint317.child[1] = Shape322;

HAnimJoint HAnimJoint326 = createNode("HAnimJoint");
HAnimJoint326.name = "r_talocalcaneonavicular";
HAnimJoint326.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint326.center = new SFVec3f(new float[0,1,0]);
HAnimJoint326.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint326.llimit = new MFFloat(new float[0,0,0]);
Shape Shape327 = createNode("Shape");
LineSet LineSet328 = createNode("LineSet");
LineSet328.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate329 = createNode("Coordinate");
Coordinate329.point = new MFVec3f(new float[0,1,0]);
LineSet328.coord = Coordinate329;

//from r_talocalcaneonavicular to r_cuneonavicular_1
ColorRGBA ColorRGBA330 = createNode("ColorRGBA");
ColorRGBA330.USE = "HAnimSegmentLineColorRGBA";
LineSet328.color = ColorRGBA330;

Shape327.geometry = LineSet328;

HAnimJoint326.child = new undefined();

HAnimJoint326.child[0] = Shape327;

Shape Shape331 = createNode("Shape");
LineSet LineSet332 = createNode("LineSet");
LineSet332.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate333 = createNode("Coordinate");
Coordinate333.point = new MFVec3f(new float[0,1,0]);
LineSet332.coord = Coordinate333;

//from r_talocalcaneonavicular to r_cuneonavicular_2
ColorRGBA ColorRGBA334 = createNode("ColorRGBA");
ColorRGBA334.USE = "HAnimSegmentLineColorRGBA";
LineSet332.color = ColorRGBA334;

Shape331.geometry = LineSet332;

HAnimJoint326.child[1] = Shape331;

Shape Shape335 = createNode("Shape");
LineSet LineSet336 = createNode("LineSet");
LineSet336.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate337 = createNode("Coordinate");
Coordinate337.point = new MFVec3f(new float[0,1,0]);
LineSet336.coord = Coordinate337;

//from r_talocalcaneonavicular to r_cuneonavicular_3
ColorRGBA ColorRGBA338 = createNode("ColorRGBA");
ColorRGBA338.USE = "HAnimSegmentLineColorRGBA";
LineSet336.color = ColorRGBA338;

Shape335.geometry = LineSet336;

HAnimJoint326.child[2] = Shape335;

HAnimJoint HAnimJoint339 = createNode("HAnimJoint");
HAnimJoint339.name = "r_cuneonavicular_1";
HAnimJoint339.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint339.center = new SFVec3f(new float[0,1,0]);
HAnimJoint339.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint339.llimit = new MFFloat(new float[0,0,0]);
Shape Shape340 = createNode("Shape");
LineSet LineSet341 = createNode("LineSet");
LineSet341.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate342 = createNode("Coordinate");
Coordinate342.point = new MFVec3f(new float[0,1,0]);
LineSet341.coord = Coordinate342;

//from r_cuneonavicular_1 to r_tarsometatarsal_1
ColorRGBA ColorRGBA343 = createNode("ColorRGBA");
ColorRGBA343.USE = "HAnimSegmentLineColorRGBA";
LineSet341.color = ColorRGBA343;

Shape340.geometry = LineSet341;

HAnimJoint339.child = new undefined();

HAnimJoint339.child[0] = Shape340;

HAnimJoint HAnimJoint344 = createNode("HAnimJoint");
HAnimJoint344.name = "r_tarsometatarsal_1";
HAnimJoint344.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint344.center = new SFVec3f(new float[0,1,0]);
HAnimJoint344.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint344.llimit = new MFFloat(new float[0,0,0]);
Shape Shape345 = createNode("Shape");
LineSet LineSet346 = createNode("LineSet");
LineSet346.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate347 = createNode("Coordinate");
Coordinate347.point = new MFVec3f(new float[0,1,0]);
LineSet346.coord = Coordinate347;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1
ColorRGBA ColorRGBA348 = createNode("ColorRGBA");
ColorRGBA348.USE = "HAnimSegmentLineColorRGBA";
LineSet346.color = ColorRGBA348;

Shape345.geometry = LineSet346;

HAnimJoint344.child = new undefined();

HAnimJoint344.child[0] = Shape345;

HAnimSite HAnimSite349 = createNode("HAnimSite");
HAnimSite349.name = "r_metatarsal_phalanx_1_pt";
HAnimSite349.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite349.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor350 = createNode("TouchSensor");
TouchSensor350.description = "HAnimSite r_metatarsal_phalanx_1_pt";
HAnimSite349.children = new MFNode();

HAnimSite349.children[0] = TouchSensor350;

Shape Shape351 = createNode("Shape");
Shape351.USE = "HAnimSiteShape";
HAnimSite349.children[1] = Shape351;

HAnimJoint344.child[1] = HAnimSite349;

HAnimJoint HAnimJoint352 = createNode("HAnimJoint");
HAnimJoint352.name = "r_metatarsophalangeal_1";
HAnimJoint352.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint352.center = new SFVec3f(new float[0,1,0]);
HAnimJoint352.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint352.llimit = new MFFloat(new float[0,0,0]);
Shape Shape353 = createNode("Shape");
LineSet LineSet354 = createNode("LineSet");
LineSet354.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate355 = createNode("Coordinate");
Coordinate355.point = new MFVec3f(new float[0,1,0]);
LineSet354.coord = Coordinate355;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1
ColorRGBA ColorRGBA356 = createNode("ColorRGBA");
ColorRGBA356.USE = "HAnimSegmentLineColorRGBA";
LineSet354.color = ColorRGBA356;

Shape353.geometry = LineSet354;

HAnimJoint352.child = new undefined();

HAnimJoint352.child[0] = Shape353;

HAnimSite HAnimSite357 = createNode("HAnimSite");
HAnimSite357.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite357.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimSite357.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor358 = createNode("TouchSensor");
TouchSensor358.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite357.children = new MFNode();

HAnimSite357.children[0] = TouchSensor358;

Shape Shape359 = createNode("Shape");
Shape359.USE = "HAnimSiteShape";
HAnimSite357.children[1] = Shape359;

HAnimJoint352.child[1] = HAnimSite357;

HAnimJoint HAnimJoint360 = createNode("HAnimJoint");
HAnimJoint360.name = "r_tarsal_interphalangeal_1";
HAnimJoint360.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint360.center = new SFVec3f(new float[0,1,0]);
HAnimJoint360.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint360.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint352.children[2] = HAnimJoint360;

HAnimJoint344.children[2] = HAnimJoint352;

HAnimJoint339.children[1] = HAnimJoint344;

HAnimJoint326.children[3] = HAnimJoint339;

HAnimJoint HAnimJoint361 = createNode("HAnimJoint");
HAnimJoint361.name = "r_cuneonavicular_2";
HAnimJoint361.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint361.center = new SFVec3f(new float[0,1,0]);
HAnimJoint361.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint361.llimit = new MFFloat(new float[0,0,0]);
Shape Shape362 = createNode("Shape");
LineSet LineSet363 = createNode("LineSet");
LineSet363.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate364 = createNode("Coordinate");
Coordinate364.point = new MFVec3f(new float[0,1,0]);
LineSet363.coord = Coordinate364;

//from r_cuneonavicular_2 to r_tarsometatarsal_2
ColorRGBA ColorRGBA365 = createNode("ColorRGBA");
ColorRGBA365.USE = "HAnimSegmentLineColorRGBA";
LineSet363.color = ColorRGBA365;

Shape362.geometry = LineSet363;

HAnimJoint361.child = new undefined();

HAnimJoint361.child[0] = Shape362;

HAnimJoint HAnimJoint366 = createNode("HAnimJoint");
HAnimJoint366.name = "r_tarsometatarsal_2";
HAnimJoint366.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint366.center = new SFVec3f(new float[0,1,0]);
HAnimJoint366.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint366.llimit = new MFFloat(new float[0,0,0]);
Shape Shape367 = createNode("Shape");
LineSet LineSet368 = createNode("LineSet");
LineSet368.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate369 = createNode("Coordinate");
Coordinate369.point = new MFVec3f(new float[0,1,0]);
LineSet368.coord = Coordinate369;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2
ColorRGBA ColorRGBA370 = createNode("ColorRGBA");
ColorRGBA370.USE = "HAnimSegmentLineColorRGBA";
LineSet368.color = ColorRGBA370;

Shape367.geometry = LineSet368;

HAnimJoint366.child = new undefined();

HAnimJoint366.child[0] = Shape367;

HAnimJoint HAnimJoint371 = createNode("HAnimJoint");
HAnimJoint371.name = "r_metatarsophalangeal_2";
HAnimJoint371.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint371.center = new SFVec3f(new float[0,1,0]);
HAnimJoint371.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint371.llimit = new MFFloat(new float[0,0,0]);
Shape Shape372 = createNode("Shape");
LineSet LineSet373 = createNode("LineSet");
LineSet373.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate374 = createNode("Coordinate");
Coordinate374.point = new MFVec3f(new float[0,1,0]);
LineSet373.coord = Coordinate374;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2
ColorRGBA ColorRGBA375 = createNode("ColorRGBA");
ColorRGBA375.USE = "HAnimSegmentLineColorRGBA";
LineSet373.color = ColorRGBA375;

Shape372.geometry = LineSet373;

HAnimJoint371.child = new undefined();

HAnimJoint371.child[0] = Shape372;

HAnimJoint HAnimJoint376 = createNode("HAnimJoint");
HAnimJoint376.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint376.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint376.center = new SFVec3f(new float[0,1,0]);
HAnimJoint376.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint376.llimit = new MFFloat(new float[0,0,0]);
Shape Shape377 = createNode("Shape");
LineSet LineSet378 = createNode("LineSet");
LineSet378.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate379 = createNode("Coordinate");
Coordinate379.point = new MFVec3f(new float[0,1,0]);
LineSet378.coord = Coordinate379;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2
ColorRGBA ColorRGBA380 = createNode("ColorRGBA");
ColorRGBA380.USE = "HAnimSegmentLineColorRGBA";
LineSet378.color = ColorRGBA380;

Shape377.geometry = LineSet378;

HAnimJoint376.child = new undefined();

HAnimJoint376.child[0] = Shape377;

HAnimSite HAnimSite381 = createNode("HAnimSite");
HAnimSite381.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite381.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite381.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
TouchSensor TouchSensor382 = createNode("TouchSensor");
TouchSensor382.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite381.children = new MFNode();

HAnimSite381.children[0] = TouchSensor382;

Shape Shape383 = createNode("Shape");
Shape383.USE = "HAnimSiteShape";
HAnimSite381.children[1] = Shape383;

HAnimJoint376.child[1] = HAnimSite381;

HAnimJoint HAnimJoint384 = createNode("HAnimJoint");
HAnimJoint384.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint384.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint384.center = new SFVec3f(new float[0,1,0]);
HAnimJoint384.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint384.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint376.children[2] = HAnimJoint384;

HAnimJoint371.children[1] = HAnimJoint376;

HAnimJoint366.children[1] = HAnimJoint371;

HAnimJoint361.children[1] = HAnimJoint366;

HAnimJoint326.children[4] = HAnimJoint361;

HAnimJoint HAnimJoint385 = createNode("HAnimJoint");
HAnimJoint385.name = "r_cuneonavicular_3";
HAnimJoint385.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint385.center = new SFVec3f(new float[0,1,0]);
HAnimJoint385.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint385.llimit = new MFFloat(new float[0,0,0]);
Shape Shape386 = createNode("Shape");
LineSet LineSet387 = createNode("LineSet");
LineSet387.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate388 = createNode("Coordinate");
Coordinate388.point = new MFVec3f(new float[0,1,0]);
LineSet387.coord = Coordinate388;

//from r_cuneonavicular_3 to r_tarsometatarsal_3
ColorRGBA ColorRGBA389 = createNode("ColorRGBA");
ColorRGBA389.USE = "HAnimSegmentLineColorRGBA";
LineSet387.color = ColorRGBA389;

Shape386.geometry = LineSet387;

HAnimJoint385.child = new undefined();

HAnimJoint385.child[0] = Shape386;

HAnimJoint HAnimJoint390 = createNode("HAnimJoint");
HAnimJoint390.name = "r_tarsometatarsal_3";
HAnimJoint390.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint390.center = new SFVec3f(new float[0,1,0]);
HAnimJoint390.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint390.llimit = new MFFloat(new float[0,0,0]);
Shape Shape391 = createNode("Shape");
LineSet LineSet392 = createNode("LineSet");
LineSet392.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate393 = createNode("Coordinate");
Coordinate393.point = new MFVec3f(new float[0,1,0]);
LineSet392.coord = Coordinate393;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3
ColorRGBA ColorRGBA394 = createNode("ColorRGBA");
ColorRGBA394.USE = "HAnimSegmentLineColorRGBA";
LineSet392.color = ColorRGBA394;

Shape391.geometry = LineSet392;

HAnimJoint390.child = new undefined();

HAnimJoint390.child[0] = Shape391;

HAnimJoint HAnimJoint395 = createNode("HAnimJoint");
HAnimJoint395.name = "r_metatarsophalangeal_3";
HAnimJoint395.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint395.center = new SFVec3f(new float[0,1,0]);
HAnimJoint395.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint395.llimit = new MFFloat(new float[0,0,0]);
Shape Shape396 = createNode("Shape");
LineSet LineSet397 = createNode("LineSet");
LineSet397.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate398 = createNode("Coordinate");
Coordinate398.point = new MFVec3f(new float[0,1,0]);
LineSet397.coord = Coordinate398;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3
ColorRGBA ColorRGBA399 = createNode("ColorRGBA");
ColorRGBA399.USE = "HAnimSegmentLineColorRGBA";
LineSet397.color = ColorRGBA399;

Shape396.geometry = LineSet397;

HAnimJoint395.child = new undefined();

HAnimJoint395.child[0] = Shape396;

HAnimJoint HAnimJoint400 = createNode("HAnimJoint");
HAnimJoint400.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint400.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint400.center = new SFVec3f(new float[0,1,0]);
HAnimJoint400.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint400.llimit = new MFFloat(new float[0,0,0]);
Shape Shape401 = createNode("Shape");
LineSet LineSet402 = createNode("LineSet");
LineSet402.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate403 = createNode("Coordinate");
Coordinate403.point = new MFVec3f(new float[0,1,0]);
LineSet402.coord = Coordinate403;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3
ColorRGBA ColorRGBA404 = createNode("ColorRGBA");
ColorRGBA404.USE = "HAnimSegmentLineColorRGBA";
LineSet402.color = ColorRGBA404;

Shape401.geometry = LineSet402;

HAnimJoint400.child = new undefined();

HAnimJoint400.child[0] = Shape401;

HAnimSite HAnimSite405 = createNode("HAnimSite");
HAnimSite405.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite405.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimSite405.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor406 = createNode("TouchSensor");
TouchSensor406.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite405.children = new MFNode();

HAnimSite405.children[0] = TouchSensor406;

Shape Shape407 = createNode("Shape");
Shape407.USE = "HAnimSiteShape";
HAnimSite405.children[1] = Shape407;

HAnimJoint400.child[1] = HAnimSite405;

HAnimJoint HAnimJoint408 = createNode("HAnimJoint");
HAnimJoint408.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint408.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint408.center = new SFVec3f(new float[0,1,0]);
HAnimJoint408.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint408.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint400.children[2] = HAnimJoint408;

HAnimJoint395.children[1] = HAnimJoint400;

HAnimJoint390.children[1] = HAnimJoint395;

HAnimJoint385.children[1] = HAnimJoint390;

HAnimJoint326.children[5] = HAnimJoint385;

HAnimJoint317.children[2] = HAnimJoint326;

HAnimJoint HAnimJoint409 = createNode("HAnimJoint");
HAnimJoint409.name = "r_calcaneocuboid";
HAnimJoint409.DEF = "hanim_r_calcaneocuboid";
HAnimJoint409.center = new SFVec3f(new float[0,1,0]);
HAnimJoint409.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint409.llimit = new MFFloat(new float[0,0,0]);
Shape Shape410 = createNode("Shape");
LineSet LineSet411 = createNode("LineSet");
LineSet411.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate412 = createNode("Coordinate");
Coordinate412.point = new MFVec3f(new float[0,1,0]);
LineSet411.coord = Coordinate412;

//from r_calcaneocuboid to r_transversetarsal
ColorRGBA ColorRGBA413 = createNode("ColorRGBA");
ColorRGBA413.USE = "HAnimSegmentLineColorRGBA";
LineSet411.color = ColorRGBA413;

Shape410.geometry = LineSet411;

HAnimJoint409.child = new undefined();

HAnimJoint409.child[0] = Shape410;

HAnimJoint HAnimJoint414 = createNode("HAnimJoint");
HAnimJoint414.name = "r_transversetarsal";
HAnimJoint414.DEF = "hanim_r_transversetarsal";
HAnimJoint414.center = new SFVec3f(new float[0,1,0]);
HAnimJoint414.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint414.llimit = new MFFloat(new float[0,0,0]);
Shape Shape415 = createNode("Shape");
LineSet LineSet416 = createNode("LineSet");
LineSet416.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate417 = createNode("Coordinate");
Coordinate417.point = new MFVec3f(new float[0,1,0]);
LineSet416.coord = Coordinate417;

//from r_transversetarsal to r_tarsometatarsal_4
ColorRGBA ColorRGBA418 = createNode("ColorRGBA");
ColorRGBA418.USE = "HAnimSegmentLineColorRGBA";
LineSet416.color = ColorRGBA418;

Shape415.geometry = LineSet416;

HAnimJoint414.child = new undefined();

HAnimJoint414.child[0] = Shape415;

Shape Shape419 = createNode("Shape");
LineSet LineSet420 = createNode("LineSet");
LineSet420.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate421 = createNode("Coordinate");
Coordinate421.point = new MFVec3f(new float[0,1,0]);
LineSet420.coord = Coordinate421;

//from r_transversetarsal to r_tarsometatarsal_5
ColorRGBA ColorRGBA422 = createNode("ColorRGBA");
ColorRGBA422.USE = "HAnimSegmentLineColorRGBA";
LineSet420.color = ColorRGBA422;

Shape419.geometry = LineSet420;

HAnimJoint414.child[1] = Shape419;

HAnimJoint HAnimJoint423 = createNode("HAnimJoint");
HAnimJoint423.name = "r_tarsometatarsal_4";
HAnimJoint423.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint423.center = new SFVec3f(new float[0,1,0]);
HAnimJoint423.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint423.llimit = new MFFloat(new float[0,0,0]);
Shape Shape424 = createNode("Shape");
LineSet LineSet425 = createNode("LineSet");
LineSet425.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate426 = createNode("Coordinate");
Coordinate426.point = new MFVec3f(new float[0,1,0]);
LineSet425.coord = Coordinate426;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4
ColorRGBA ColorRGBA427 = createNode("ColorRGBA");
ColorRGBA427.USE = "HAnimSegmentLineColorRGBA";
LineSet425.color = ColorRGBA427;

Shape424.geometry = LineSet425;

HAnimJoint423.child = new undefined();

HAnimJoint423.child[0] = Shape424;

HAnimJoint HAnimJoint428 = createNode("HAnimJoint");
HAnimJoint428.name = "r_metatarsophalangeal_4";
HAnimJoint428.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint428.center = new SFVec3f(new float[0,1,0]);
HAnimJoint428.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint428.llimit = new MFFloat(new float[0,0,0]);
Shape Shape429 = createNode("Shape");
LineSet LineSet430 = createNode("LineSet");
LineSet430.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate431 = createNode("Coordinate");
Coordinate431.point = new MFVec3f(new float[0,1,0]);
LineSet430.coord = Coordinate431;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4
ColorRGBA ColorRGBA432 = createNode("ColorRGBA");
ColorRGBA432.USE = "HAnimSegmentLineColorRGBA";
LineSet430.color = ColorRGBA432;

Shape429.geometry = LineSet430;

HAnimJoint428.child = new undefined();

HAnimJoint428.child[0] = Shape429;

HAnimJoint HAnimJoint433 = createNode("HAnimJoint");
HAnimJoint433.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint433.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint433.center = new SFVec3f(new float[0,1,0]);
HAnimJoint433.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint433.llimit = new MFFloat(new float[0,0,0]);
Shape Shape434 = createNode("Shape");
LineSet LineSet435 = createNode("LineSet");
LineSet435.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate436 = createNode("Coordinate");
Coordinate436.point = new MFVec3f(new float[0,1,0]);
LineSet435.coord = Coordinate436;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4
ColorRGBA ColorRGBA437 = createNode("ColorRGBA");
ColorRGBA437.USE = "HAnimSegmentLineColorRGBA";
LineSet435.color = ColorRGBA437;

Shape434.geometry = LineSet435;

HAnimJoint433.child = new undefined();

HAnimJoint433.child[0] = Shape434;

HAnimSite HAnimSite438 = createNode("HAnimSite");
HAnimSite438.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite438.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimSite438.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor439 = createNode("TouchSensor");
TouchSensor439.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite438.children = new MFNode();

HAnimSite438.children[0] = TouchSensor439;

Shape Shape440 = createNode("Shape");
Shape440.USE = "HAnimSiteShape";
HAnimSite438.children[1] = Shape440;

HAnimJoint433.child[1] = HAnimSite438;

HAnimJoint HAnimJoint441 = createNode("HAnimJoint");
HAnimJoint441.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint441.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint441.center = new SFVec3f(new float[0,1,0]);
HAnimJoint441.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint441.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint433.children[2] = HAnimJoint441;

HAnimJoint428.children[1] = HAnimJoint433;

HAnimJoint423.children[1] = HAnimJoint428;

HAnimJoint414.children[2] = HAnimJoint423;

HAnimJoint HAnimJoint442 = createNode("HAnimJoint");
HAnimJoint442.name = "r_tarsometatarsal_5";
HAnimJoint442.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint442.center = new SFVec3f(new float[0,1,0]);
HAnimJoint442.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint442.llimit = new MFFloat(new float[0,0,0]);
Shape Shape443 = createNode("Shape");
LineSet LineSet444 = createNode("LineSet");
LineSet444.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate445 = createNode("Coordinate");
Coordinate445.point = new MFVec3f(new float[0,1,0]);
LineSet444.coord = Coordinate445;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5
ColorRGBA ColorRGBA446 = createNode("ColorRGBA");
ColorRGBA446.USE = "HAnimSegmentLineColorRGBA";
LineSet444.color = ColorRGBA446;

Shape443.geometry = LineSet444;

HAnimJoint442.child = new undefined();

HAnimJoint442.child[0] = Shape443;

HAnimSite HAnimSite447 = createNode("HAnimSite");
HAnimSite447.name = "r_metatarsal_phalanx_5_pt";
HAnimSite447.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite447.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor448 = createNode("TouchSensor");
TouchSensor448.description = "HAnimSite r_metatarsal_phalanx_5_pt";
HAnimSite447.children = new MFNode();

HAnimSite447.children[0] = TouchSensor448;

Shape Shape449 = createNode("Shape");
Shape449.USE = "HAnimSiteShape";
HAnimSite447.children[1] = Shape449;

HAnimJoint442.child[1] = HAnimSite447;

HAnimJoint HAnimJoint450 = createNode("HAnimJoint");
HAnimJoint450.name = "r_metatarsophalangeal_5";
HAnimJoint450.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint450.center = new SFVec3f(new float[0,1,0]);
HAnimJoint450.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint450.llimit = new MFFloat(new float[0,0,0]);
Shape Shape451 = createNode("Shape");
LineSet LineSet452 = createNode("LineSet");
LineSet452.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate453 = createNode("Coordinate");
Coordinate453.point = new MFVec3f(new float[0,1,0]);
LineSet452.coord = Coordinate453;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5
ColorRGBA ColorRGBA454 = createNode("ColorRGBA");
ColorRGBA454.USE = "HAnimSegmentLineColorRGBA";
LineSet452.color = ColorRGBA454;

Shape451.geometry = LineSet452;

HAnimJoint450.child = new undefined();

HAnimJoint450.child[0] = Shape451;

HAnimJoint HAnimJoint455 = createNode("HAnimJoint");
HAnimJoint455.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint455.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint455.center = new SFVec3f(new float[0,1,0]);
HAnimJoint455.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint455.llimit = new MFFloat(new float[0,0,0]);
Shape Shape456 = createNode("Shape");
LineSet LineSet457 = createNode("LineSet");
LineSet457.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate458 = createNode("Coordinate");
Coordinate458.point = new MFVec3f(new float[0,1,0]);
LineSet457.coord = Coordinate458;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5
ColorRGBA ColorRGBA459 = createNode("ColorRGBA");
ColorRGBA459.USE = "HAnimSegmentLineColorRGBA";
LineSet457.color = ColorRGBA459;

Shape456.geometry = LineSet457;

HAnimJoint455.child = new undefined();

HAnimJoint455.child[0] = Shape456;

HAnimSite HAnimSite460 = createNode("HAnimSite");
HAnimSite460.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite460.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimSite460.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor461 = createNode("TouchSensor");
TouchSensor461.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite460.children = new MFNode();

HAnimSite460.children[0] = TouchSensor461;

Shape Shape462 = createNode("Shape");
Shape462.USE = "HAnimSiteShape";
HAnimSite460.children[1] = Shape462;

HAnimJoint455.child[1] = HAnimSite460;

HAnimJoint HAnimJoint463 = createNode("HAnimJoint");
HAnimJoint463.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint463.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint463.center = new SFVec3f(new float[0,1,0]);
HAnimJoint463.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint463.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint455.children[2] = HAnimJoint463;

HAnimJoint450.children[1] = HAnimJoint455;

HAnimJoint442.children[2] = HAnimJoint450;

HAnimJoint414.children[3] = HAnimJoint442;

HAnimJoint409.children[1] = HAnimJoint414;

HAnimJoint317.children[3] = HAnimJoint409;

HAnimJoint306.children[3] = HAnimJoint317;

HAnimJoint292.children[4] = HAnimJoint306;

HAnimJoint87.children[11] = HAnimJoint292;

HAnimJoint39.children[15] = HAnimJoint87;

HAnimJoint HAnimJoint464 = createNode("HAnimJoint");
HAnimJoint464.name = "vl5";
HAnimJoint464.DEF = "hanim_vl5";
HAnimJoint464.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint464.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint464.llimit = new MFFloat(new float[0,0,0]);
Shape Shape465 = createNode("Shape");
LineSet LineSet466 = createNode("LineSet");
LineSet466.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate467 = createNode("Coordinate");
Coordinate467.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet466.coord = Coordinate467;

//from vl5 to vl4
ColorRGBA ColorRGBA468 = createNode("ColorRGBA");
ColorRGBA468.USE = "HAnimSegmentLineColorRGBA";
LineSet466.color = ColorRGBA468;

Shape465.geometry = LineSet466;

HAnimJoint464.child = new undefined();

HAnimJoint464.child[0] = Shape465;

HAnimJoint HAnimJoint469 = createNode("HAnimJoint");
HAnimJoint469.name = "vl4";
HAnimJoint469.DEF = "hanim_vl4";
HAnimJoint469.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint469.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint469.llimit = new MFFloat(new float[0,0,0]);
Shape Shape470 = createNode("Shape");
LineSet LineSet471 = createNode("LineSet");
LineSet471.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate472 = createNode("Coordinate");
Coordinate472.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet471.coord = Coordinate472;

//from vl4 to vl3
ColorRGBA ColorRGBA473 = createNode("ColorRGBA");
ColorRGBA473.USE = "HAnimSegmentLineColorRGBA";
LineSet471.color = ColorRGBA473;

Shape470.geometry = LineSet471;

HAnimJoint469.child = new undefined();

HAnimJoint469.child[0] = Shape470;

HAnimJoint HAnimJoint474 = createNode("HAnimJoint");
HAnimJoint474.name = "vl3";
HAnimJoint474.DEF = "hanim_vl3";
HAnimJoint474.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint474.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint474.llimit = new MFFloat(new float[0,0,0]);
Shape Shape475 = createNode("Shape");
LineSet LineSet476 = createNode("LineSet");
LineSet476.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate477 = createNode("Coordinate");
Coordinate477.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet476.coord = Coordinate477;

//from vl3 to vl2
ColorRGBA ColorRGBA478 = createNode("ColorRGBA");
ColorRGBA478.USE = "HAnimSegmentLineColorRGBA";
LineSet476.color = ColorRGBA478;

Shape475.geometry = LineSet476;

HAnimJoint474.child = new undefined();

HAnimJoint474.child[0] = Shape475;

HAnimSite HAnimSite479 = createNode("HAnimSite");
HAnimSite479.name = "l_rib10_pt";
HAnimSite479.DEF = "hanim_l_rib10_pt";
HAnimSite479.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor480 = createNode("TouchSensor");
TouchSensor480.description = "HAnimSite l_rib10_pt";
HAnimSite479.children = new MFNode();

HAnimSite479.children[0] = TouchSensor480;

Shape Shape481 = createNode("Shape");
Shape481.USE = "HAnimSiteShape";
HAnimSite479.children[1] = Shape481;

HAnimJoint474.child[1] = HAnimSite479;

HAnimSite HAnimSite482 = createNode("HAnimSite");
HAnimSite482.name = "r_rib10_pt";
HAnimSite482.DEF = "hanim_r_rib10_pt";
HAnimSite482.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor483 = createNode("TouchSensor");
TouchSensor483.description = "HAnimSite r_rib10_pt";
HAnimSite482.children = new MFNode();

HAnimSite482.children[0] = TouchSensor483;

Shape Shape484 = createNode("Shape");
Shape484.USE = "HAnimSiteShape";
HAnimSite482.children[1] = Shape484;

HAnimJoint474.child[2] = HAnimSite482;

HAnimSite HAnimSite485 = createNode("HAnimSite");
HAnimSite485.name = "spine_2_middle_back_pt";
HAnimSite485.DEF = "hanim_spine_2_middle_back_pt";
HAnimSite485.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor486 = createNode("TouchSensor");
TouchSensor486.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite485.children = new MFNode();

HAnimSite485.children[0] = TouchSensor486;

Shape Shape487 = createNode("Shape");
Shape487.USE = "HAnimSiteShape";
HAnimSite485.children[1] = Shape487;

HAnimJoint474.child[3] = HAnimSite485;

HAnimJoint HAnimJoint488 = createNode("HAnimJoint");
HAnimJoint488.name = "vl2";
HAnimJoint488.DEF = "hanim_vl2";
HAnimJoint488.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint488.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint488.llimit = new MFFloat(new float[0,0,0]);
Shape Shape489 = createNode("Shape");
LineSet LineSet490 = createNode("LineSet");
LineSet490.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate491 = createNode("Coordinate");
Coordinate491.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet490.coord = Coordinate491;

//from vl2 to vl1
ColorRGBA ColorRGBA492 = createNode("ColorRGBA");
ColorRGBA492.USE = "HAnimSegmentLineColorRGBA";
LineSet490.color = ColorRGBA492;

Shape489.geometry = LineSet490;

HAnimJoint488.child = new undefined();

HAnimJoint488.child[0] = Shape489;

HAnimJoint HAnimJoint493 = createNode("HAnimJoint");
HAnimJoint493.name = "vl1";
HAnimJoint493.DEF = "hanim_vl1";
HAnimJoint493.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint493.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint493.llimit = new MFFloat(new float[0,0,0]);
Shape Shape494 = createNode("Shape");
LineSet LineSet495 = createNode("LineSet");
LineSet495.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate496 = createNode("Coordinate");
Coordinate496.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet495.coord = Coordinate496;

//from vl1 to vt12
ColorRGBA ColorRGBA497 = createNode("ColorRGBA");
ColorRGBA497.USE = "HAnimSegmentLineColorRGBA";
LineSet495.color = ColorRGBA497;

Shape494.geometry = LineSet495;

HAnimJoint493.child = new undefined();

HAnimJoint493.child[0] = Shape494;

HAnimJoint HAnimJoint498 = createNode("HAnimJoint");
HAnimJoint498.name = "vt12";
HAnimJoint498.DEF = "hanim_vt12";
HAnimJoint498.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint498.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint498.llimit = new MFFloat(new float[0,0,0]);
Shape Shape499 = createNode("Shape");
LineSet LineSet500 = createNode("LineSet");
LineSet500.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate501 = createNode("Coordinate");
Coordinate501.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet500.coord = Coordinate501;

//from vt12 to vt11
ColorRGBA ColorRGBA502 = createNode("ColorRGBA");
ColorRGBA502.USE = "HAnimSegmentLineColorRGBA";
LineSet500.color = ColorRGBA502;

Shape499.geometry = LineSet500;

HAnimJoint498.child = new undefined();

HAnimJoint498.child[0] = Shape499;

HAnimJoint HAnimJoint503 = createNode("HAnimJoint");
HAnimJoint503.name = "vt11";
HAnimJoint503.DEF = "hanim_vt11";
HAnimJoint503.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint503.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint503.llimit = new MFFloat(new float[0,0,0]);
Shape Shape504 = createNode("Shape");
LineSet LineSet505 = createNode("LineSet");
LineSet505.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate506 = createNode("Coordinate");
Coordinate506.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet505.coord = Coordinate506;

//from vt11 to vt10
ColorRGBA ColorRGBA507 = createNode("ColorRGBA");
ColorRGBA507.USE = "HAnimSegmentLineColorRGBA";
LineSet505.color = ColorRGBA507;

Shape504.geometry = LineSet505;

HAnimJoint503.child = new undefined();

HAnimJoint503.child[0] = Shape504;

HAnimSite HAnimSite508 = createNode("HAnimSite");
HAnimSite508.name = "substernale_pt";
HAnimSite508.DEF = "hanim_substernale_pt";
HAnimSite508.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor509 = createNode("TouchSensor");
TouchSensor509.description = "HAnimSite substernale_pt";
HAnimSite508.children = new MFNode();

HAnimSite508.children[0] = TouchSensor509;

Shape Shape510 = createNode("Shape");
Shape510.USE = "HAnimSiteShape";
HAnimSite508.children[1] = Shape510;

HAnimJoint503.child[1] = HAnimSite508;

HAnimJoint HAnimJoint511 = createNode("HAnimJoint");
HAnimJoint511.name = "vt10";
HAnimJoint511.DEF = "hanim_vt10";
HAnimJoint511.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint511.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint511.llimit = new MFFloat(new float[0,0,0]);
Shape Shape512 = createNode("Shape");
LineSet LineSet513 = createNode("LineSet");
LineSet513.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate514 = createNode("Coordinate");
Coordinate514.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet513.coord = Coordinate514;

//from vt10 to vt9
ColorRGBA ColorRGBA515 = createNode("ColorRGBA");
ColorRGBA515.USE = "HAnimSegmentLineColorRGBA";
LineSet513.color = ColorRGBA515;

Shape512.geometry = LineSet513;

HAnimJoint511.child = new undefined();

HAnimJoint511.child[0] = Shape512;

HAnimSite HAnimSite516 = createNode("HAnimSite");
HAnimSite516.name = "l_thelion_pt";
HAnimSite516.DEF = "hanim_l_thelion_pt";
HAnimSite516.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor517 = createNode("TouchSensor");
TouchSensor517.description = "HAnimSite l_thelion_pt";
HAnimSite516.children = new MFNode();

HAnimSite516.children[0] = TouchSensor517;

Shape Shape518 = createNode("Shape");
Shape518.USE = "HAnimSiteShape";
HAnimSite516.children[1] = Shape518;

HAnimJoint511.child[1] = HAnimSite516;

HAnimSite HAnimSite519 = createNode("HAnimSite");
HAnimSite519.name = "r_thelion_pt";
HAnimSite519.DEF = "hanim_r_thelion_pt";
HAnimSite519.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor520 = createNode("TouchSensor");
TouchSensor520.description = "HAnimSite r_thelion_pt";
HAnimSite519.children = new MFNode();

HAnimSite519.children[0] = TouchSensor520;

Shape Shape521 = createNode("Shape");
Shape521.USE = "HAnimSiteShape";
HAnimSite519.children[1] = Shape521;

HAnimJoint511.child[2] = HAnimSite519;

HAnimJoint HAnimJoint522 = createNode("HAnimJoint");
HAnimJoint522.name = "vt9";
HAnimJoint522.DEF = "hanim_vt9";
HAnimJoint522.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint522.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint522.llimit = new MFFloat(new float[0,0,0]);
Shape Shape523 = createNode("Shape");
LineSet LineSet524 = createNode("LineSet");
LineSet524.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate525 = createNode("Coordinate");
Coordinate525.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet524.coord = Coordinate525;

//from vt9 to vt8
ColorRGBA ColorRGBA526 = createNode("ColorRGBA");
ColorRGBA526.USE = "HAnimSegmentLineColorRGBA";
LineSet524.color = ColorRGBA526;

Shape523.geometry = LineSet524;

HAnimJoint522.child = new undefined();

HAnimJoint522.child[0] = Shape523;

HAnimJoint HAnimJoint527 = createNode("HAnimJoint");
HAnimJoint527.name = "vt8";
HAnimJoint527.DEF = "hanim_vt8";
HAnimJoint527.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint527.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint527.llimit = new MFFloat(new float[0,0,0]);
Shape Shape528 = createNode("Shape");
LineSet LineSet529 = createNode("LineSet");
LineSet529.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate530 = createNode("Coordinate");
Coordinate530.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet529.coord = Coordinate530;

//from vt8 to vt7
ColorRGBA ColorRGBA531 = createNode("ColorRGBA");
ColorRGBA531.USE = "HAnimSegmentLineColorRGBA";
LineSet529.color = ColorRGBA531;

Shape528.geometry = LineSet529;

HAnimJoint527.child = new undefined();

HAnimJoint527.child[0] = Shape528;

HAnimJoint HAnimJoint532 = createNode("HAnimJoint");
HAnimJoint532.name = "vt7";
HAnimJoint532.DEF = "hanim_vt7";
HAnimJoint532.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint532.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint532.llimit = new MFFloat(new float[0,0,0]);
Shape Shape533 = createNode("Shape");
LineSet LineSet534 = createNode("LineSet");
LineSet534.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate535 = createNode("Coordinate");
Coordinate535.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet534.coord = Coordinate535;

//from vt7 to vt6
ColorRGBA ColorRGBA536 = createNode("ColorRGBA");
ColorRGBA536.USE = "HAnimSegmentLineColorRGBA";
LineSet534.color = ColorRGBA536;

Shape533.geometry = LineSet534;

HAnimJoint532.child = new undefined();

HAnimJoint532.child[0] = Shape533;

HAnimSite HAnimSite537 = createNode("HAnimSite");
HAnimSite537.name = "l_chest_midsagittal_plane_pt";
HAnimSite537.DEF = "hanim_l_chest_midsagittal_plane_pt";
HAnimSite537.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor538 = createNode("TouchSensor");
TouchSensor538.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite537.children = new MFNode();

HAnimSite537.children[0] = TouchSensor538;

Shape Shape539 = createNode("Shape");
Shape539.USE = "HAnimSiteShape";
HAnimSite537.children[1] = Shape539;

HAnimJoint532.child[1] = HAnimSite537;

HAnimSite HAnimSite540 = createNode("HAnimSite");
HAnimSite540.name = "mesosternale_pt";
HAnimSite540.DEF = "hanim_mesosternale_pt";
HAnimSite540.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor541 = createNode("TouchSensor");
TouchSensor541.description = "HAnimSite mesosternale_pt";
HAnimSite540.children = new MFNode();

HAnimSite540.children[0] = TouchSensor541;

Shape Shape542 = createNode("Shape");
Shape542.USE = "HAnimSiteShape";
HAnimSite540.children[1] = Shape542;

HAnimJoint532.child[2] = HAnimSite540;

HAnimSite HAnimSite543 = createNode("HAnimSite");
HAnimSite543.name = "r_chest_midsagittal_plane_pt";
HAnimSite543.DEF = "hanim_r_chest_midsagittal_plane_pt";
HAnimSite543.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor544 = createNode("TouchSensor");
TouchSensor544.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite543.children = new MFNode();

HAnimSite543.children[0] = TouchSensor544;

Shape Shape545 = createNode("Shape");
Shape545.USE = "HAnimSiteShape";
HAnimSite543.children[1] = Shape545;

HAnimJoint532.child[3] = HAnimSite543;

HAnimSite HAnimSite546 = createNode("HAnimSite");
HAnimSite546.name = "rear_center_midsagittal_plane_pt";
HAnimSite546.DEF = "hanim_rear_center_midsagittal_plane_pt";
HAnimSite546.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor547 = createNode("TouchSensor");
TouchSensor547.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite546.children = new MFNode();

HAnimSite546.children[0] = TouchSensor547;

Shape Shape548 = createNode("Shape");
Shape548.USE = "HAnimSiteShape";
HAnimSite546.children[1] = Shape548;

HAnimJoint532.child[4] = HAnimSite546;

HAnimJoint HAnimJoint549 = createNode("HAnimJoint");
HAnimJoint549.name = "vt6";
HAnimJoint549.DEF = "hanim_vt6";
HAnimJoint549.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint549.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint549.llimit = new MFFloat(new float[0,0,0]);
Shape Shape550 = createNode("Shape");
LineSet LineSet551 = createNode("LineSet");
LineSet551.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate552 = createNode("Coordinate");
Coordinate552.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet551.coord = Coordinate552;

//from vt6 to vt5
ColorRGBA ColorRGBA553 = createNode("ColorRGBA");
ColorRGBA553.USE = "HAnimSegmentLineColorRGBA";
LineSet551.color = ColorRGBA553;

Shape550.geometry = LineSet551;

HAnimJoint549.child = new undefined();

HAnimJoint549.child[0] = Shape550;

HAnimSite HAnimSite554 = createNode("HAnimSite");
HAnimSite554.name = "spine_1_middle_back_pt";
HAnimSite554.DEF = "hanim_spine_1_middle_back_pt";
HAnimSite554.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor555 = createNode("TouchSensor");
TouchSensor555.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite554.children = new MFNode();

HAnimSite554.children[0] = TouchSensor555;

Shape Shape556 = createNode("Shape");
Shape556.USE = "HAnimSiteShape";
HAnimSite554.children[1] = Shape556;

HAnimJoint549.child[1] = HAnimSite554;

HAnimJoint HAnimJoint557 = createNode("HAnimJoint");
HAnimJoint557.name = "vt5";
HAnimJoint557.DEF = "hanim_vt5";
HAnimJoint557.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint557.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint557.llimit = new MFFloat(new float[0,0,0]);
Shape Shape558 = createNode("Shape");
LineSet LineSet559 = createNode("LineSet");
LineSet559.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate560 = createNode("Coordinate");
Coordinate560.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet559.coord = Coordinate560;

//from vt5 to vt4
ColorRGBA ColorRGBA561 = createNode("ColorRGBA");
ColorRGBA561.USE = "HAnimSegmentLineColorRGBA";
LineSet559.color = ColorRGBA561;

Shape558.geometry = LineSet559;

HAnimJoint557.child = new undefined();

HAnimJoint557.child[0] = Shape558;

HAnimJoint HAnimJoint562 = createNode("HAnimJoint");
HAnimJoint562.name = "vt4";
HAnimJoint562.DEF = "hanim_vt4";
HAnimJoint562.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint562.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint562.llimit = new MFFloat(new float[0,0,0]);
Shape Shape563 = createNode("Shape");
LineSet LineSet564 = createNode("LineSet");
LineSet564.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate565 = createNode("Coordinate");
Coordinate565.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet564.coord = Coordinate565;

//from vt4 to vt3
ColorRGBA ColorRGBA566 = createNode("ColorRGBA");
ColorRGBA566.USE = "HAnimSegmentLineColorRGBA";
LineSet564.color = ColorRGBA566;

Shape563.geometry = LineSet564;

HAnimJoint562.child = new undefined();

HAnimJoint562.child[0] = Shape563;

HAnimJoint HAnimJoint567 = createNode("HAnimJoint");
HAnimJoint567.name = "vt3";
HAnimJoint567.DEF = "hanim_vt3";
HAnimJoint567.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint567.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint567.llimit = new MFFloat(new float[0,0,0]);
Shape Shape568 = createNode("Shape");
LineSet LineSet569 = createNode("LineSet");
LineSet569.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate570 = createNode("Coordinate");
Coordinate570.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet569.coord = Coordinate570;

//from vt3 to vt2
ColorRGBA ColorRGBA571 = createNode("ColorRGBA");
ColorRGBA571.USE = "HAnimSegmentLineColorRGBA";
LineSet569.color = ColorRGBA571;

Shape568.geometry = LineSet569;

HAnimJoint567.child = new undefined();

HAnimJoint567.child[0] = Shape568;

HAnimJoint HAnimJoint572 = createNode("HAnimJoint");
HAnimJoint572.name = "vt2";
HAnimJoint572.DEF = "hanim_vt2";
HAnimJoint572.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint572.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint572.llimit = new MFFloat(new float[0,0,0]);
Shape Shape573 = createNode("Shape");
LineSet LineSet574 = createNode("LineSet");
LineSet574.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate575 = createNode("Coordinate");
Coordinate575.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet574.coord = Coordinate575;

//from vt2 to vt1
ColorRGBA ColorRGBA576 = createNode("ColorRGBA");
ColorRGBA576.USE = "HAnimSegmentLineColorRGBA";
LineSet574.color = ColorRGBA576;

Shape573.geometry = LineSet574;

HAnimJoint572.child = new undefined();

HAnimJoint572.child[0] = Shape573;

HAnimSite HAnimSite577 = createNode("HAnimSite");
HAnimSite577.name = "cervicale_pt";
HAnimSite577.DEF = "hanim_cervicale_pt";
HAnimSite577.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor578 = createNode("TouchSensor");
TouchSensor578.description = "HAnimSite cervicale_pt";
HAnimSite577.children = new MFNode();

HAnimSite577.children[0] = TouchSensor578;

Shape Shape579 = createNode("Shape");
Shape579.USE = "HAnimSiteShape";
HAnimSite577.children[1] = Shape579;

HAnimJoint572.child[1] = HAnimSite577;

HAnimSite HAnimSite580 = createNode("HAnimSite");
HAnimSite580.name = "suprasternale_pt";
HAnimSite580.DEF = "hanim_suprasternale_pt";
HAnimSite580.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor581 = createNode("TouchSensor");
TouchSensor581.description = "HAnimSite suprasternale_pt";
HAnimSite580.children = new MFNode();

HAnimSite580.children[0] = TouchSensor581;

Shape Shape582 = createNode("Shape");
Shape582.USE = "HAnimSiteShape";
HAnimSite580.children[1] = Shape582;

HAnimJoint572.child[2] = HAnimSite580;

HAnimJoint HAnimJoint583 = createNode("HAnimJoint");
HAnimJoint583.name = "vt1";
HAnimJoint583.DEF = "hanim_vt1";
HAnimJoint583.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint583.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint583.llimit = new MFFloat(new float[0,0,0]);
Shape Shape584 = createNode("Shape");
LineSet LineSet585 = createNode("LineSet");
LineSet585.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate586 = createNode("Coordinate");
Coordinate586.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet585.coord = Coordinate586;

//from vt1 to vc7
ColorRGBA ColorRGBA587 = createNode("ColorRGBA");
ColorRGBA587.USE = "HAnimSegmentLineColorRGBA";
LineSet585.color = ColorRGBA587;

Shape584.geometry = LineSet585;

HAnimJoint583.child = new undefined();

HAnimJoint583.child[0] = Shape584;

HAnimSite HAnimSite588 = createNode("HAnimSite");
HAnimSite588.name = "l_neck_base_pt";
HAnimSite588.DEF = "hanim_l_neck_base_pt";
HAnimSite588.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor589 = createNode("TouchSensor");
TouchSensor589.description = "HAnimSite l_neck_base_pt";
HAnimSite588.children = new MFNode();

HAnimSite588.children[0] = TouchSensor589;

Shape Shape590 = createNode("Shape");
Shape590.USE = "HAnimSiteShape";
HAnimSite588.children[1] = Shape590;

HAnimJoint583.child[1] = HAnimSite588;

HAnimSite HAnimSite591 = createNode("HAnimSite");
HAnimSite591.name = "r_neck_base_pt";
HAnimSite591.DEF = "hanim_r_neck_base_pt";
HAnimSite591.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor592 = createNode("TouchSensor");
TouchSensor592.description = "HAnimSite r_neck_base_pt";
HAnimSite591.children = new MFNode();

HAnimSite591.children[0] = TouchSensor592;

Shape Shape593 = createNode("Shape");
Shape593.USE = "HAnimSiteShape";
HAnimSite591.children[1] = Shape593;

HAnimJoint583.child[2] = HAnimSite591;

Shape Shape594 = createNode("Shape");
LineSet LineSet595 = createNode("LineSet");
LineSet595.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate596 = createNode("Coordinate");
Coordinate596.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet595.coord = Coordinate596;

//from vt1 to l_sternoclavicular
ColorRGBA ColorRGBA597 = createNode("ColorRGBA");
ColorRGBA597.USE = "HAnimSegmentLineColorRGBA";
LineSet595.color = ColorRGBA597;

Shape594.geometry = LineSet595;

HAnimJoint583.child[3] = Shape594;

HAnimSite HAnimSite598 = createNode("HAnimSite");
HAnimSite598.name = "l_acromion_pt";
HAnimSite598.DEF = "hanim_l_acromion_pt";
HAnimSite598.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor599 = createNode("TouchSensor");
TouchSensor599.description = "HAnimSite l_acromion_pt";
HAnimSite598.children = new MFNode();

HAnimSite598.children[0] = TouchSensor599;

Shape Shape600 = createNode("Shape");
Shape600.USE = "HAnimSiteShape";
HAnimSite598.children[1] = Shape600;

HAnimJoint583.child[4] = HAnimSite598;

HAnimSite HAnimSite601 = createNode("HAnimSite");
HAnimSite601.name = "l_axilla_distal_pt";
HAnimSite601.DEF = "hanim_l_axilla_distal_pt";
HAnimSite601.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor602 = createNode("TouchSensor");
TouchSensor602.description = "HAnimSite l_axilla_distal_pt";
HAnimSite601.children = new MFNode();

HAnimSite601.children[0] = TouchSensor602;

Shape Shape603 = createNode("Shape");
Shape603.USE = "HAnimSiteShape";
HAnimSite601.children[1] = Shape603;

HAnimJoint583.child[5] = HAnimSite601;

HAnimSite HAnimSite604 = createNode("HAnimSite");
HAnimSite604.name = "l_axilla_posterior_folds_pt";
HAnimSite604.DEF = "hanim_l_axilla_posterior_folds_pt";
HAnimSite604.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor605 = createNode("TouchSensor");
TouchSensor605.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite604.children = new MFNode();

HAnimSite604.children[0] = TouchSensor605;

Shape Shape606 = createNode("Shape");
Shape606.USE = "HAnimSiteShape";
HAnimSite604.children[1] = Shape606;

HAnimJoint583.child[6] = HAnimSite604;

HAnimSite HAnimSite607 = createNode("HAnimSite");
HAnimSite607.name = "l_axilla_proximal_pt";
HAnimSite607.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite607.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor608 = createNode("TouchSensor");
TouchSensor608.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite607.children = new MFNode();

HAnimSite607.children[0] = TouchSensor608;

Shape Shape609 = createNode("Shape");
Shape609.USE = "HAnimSiteShape";
HAnimSite607.children[1] = Shape609;

HAnimJoint583.child[7] = HAnimSite607;

HAnimSite HAnimSite610 = createNode("HAnimSite");
HAnimSite610.name = "l_clavicale_pt";
HAnimSite610.DEF = "hanim_l_clavicale_pt";
HAnimSite610.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor611 = createNode("TouchSensor");
TouchSensor611.description = "HAnimSite l_clavicale_pt";
HAnimSite610.children = new MFNode();

HAnimSite610.children[0] = TouchSensor611;

Shape Shape612 = createNode("Shape");
Shape612.USE = "HAnimSiteShape";
HAnimSite610.children[1] = Shape612;

HAnimJoint583.child[8] = HAnimSite610;

Shape Shape613 = createNode("Shape");
LineSet LineSet614 = createNode("LineSet");
LineSet614.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate615 = createNode("Coordinate");
Coordinate615.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet614.coord = Coordinate615;

//from vt1 to r_sternoclavicular
ColorRGBA ColorRGBA616 = createNode("ColorRGBA");
ColorRGBA616.USE = "HAnimSegmentLineColorRGBA";
LineSet614.color = ColorRGBA616;

Shape613.geometry = LineSet614;

HAnimJoint583.child[9] = Shape613;

HAnimSite HAnimSite617 = createNode("HAnimSite");
HAnimSite617.name = "r_acromion_pt";
HAnimSite617.DEF = "hanim_r_acromion_pt";
HAnimSite617.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor618 = createNode("TouchSensor");
TouchSensor618.description = "HAnimSite r_acromion_pt";
HAnimSite617.children = new MFNode();

HAnimSite617.children[0] = TouchSensor618;

Shape Shape619 = createNode("Shape");
Shape619.USE = "HAnimSiteShape";
HAnimSite617.children[1] = Shape619;

HAnimJoint583.child[10] = HAnimSite617;

HAnimSite HAnimSite620 = createNode("HAnimSite");
HAnimSite620.name = "r_axilla_distal_pt";
HAnimSite620.DEF = "hanim_r_axilla_distal_pt";
HAnimSite620.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor621 = createNode("TouchSensor");
TouchSensor621.description = "HAnimSite r_axilla_distal_pt";
HAnimSite620.children = new MFNode();

HAnimSite620.children[0] = TouchSensor621;

Shape Shape622 = createNode("Shape");
Shape622.USE = "HAnimSiteShape";
HAnimSite620.children[1] = Shape622;

HAnimJoint583.child[11] = HAnimSite620;

HAnimSite HAnimSite623 = createNode("HAnimSite");
HAnimSite623.name = "r_axilla_posterior_folds_pt";
HAnimSite623.DEF = "hanim_r_axilla_posterior_folds_pt";
HAnimSite623.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor624 = createNode("TouchSensor");
TouchSensor624.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite623.children = new MFNode();

HAnimSite623.children[0] = TouchSensor624;

Shape Shape625 = createNode("Shape");
Shape625.USE = "HAnimSiteShape";
HAnimSite623.children[1] = Shape625;

HAnimJoint583.child[12] = HAnimSite623;

HAnimSite HAnimSite626 = createNode("HAnimSite");
HAnimSite626.name = "r_axilla_proximal_pt";
HAnimSite626.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite626.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor627 = createNode("TouchSensor");
TouchSensor627.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite626.children = new MFNode();

HAnimSite626.children[0] = TouchSensor627;

Shape Shape628 = createNode("Shape");
Shape628.USE = "HAnimSiteShape";
HAnimSite626.children[1] = Shape628;

HAnimJoint583.child[13] = HAnimSite626;

HAnimSite HAnimSite629 = createNode("HAnimSite");
HAnimSite629.name = "r_clavicale_pt";
HAnimSite629.DEF = "hanim_r_clavicale_pt";
HAnimSite629.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor630 = createNode("TouchSensor");
TouchSensor630.description = "HAnimSite r_clavicale_pt";
HAnimSite629.children = new MFNode();

HAnimSite629.children[0] = TouchSensor630;

Shape Shape631 = createNode("Shape");
Shape631.USE = "HAnimSiteShape";
HAnimSite629.children[1] = Shape631;

HAnimJoint583.child[14] = HAnimSite629;

HAnimJoint HAnimJoint632 = createNode("HAnimJoint");
HAnimJoint632.name = "vc7";
HAnimJoint632.DEF = "hanim_vc7";
HAnimJoint632.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint632.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint632.llimit = new MFFloat(new float[0,0,0]);
Shape Shape633 = createNode("Shape");
LineSet LineSet634 = createNode("LineSet");
LineSet634.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate635 = createNode("Coordinate");
Coordinate635.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet634.coord = Coordinate635;

//from vc7 to vc6
ColorRGBA ColorRGBA636 = createNode("ColorRGBA");
ColorRGBA636.USE = "HAnimSegmentLineColorRGBA";
LineSet634.color = ColorRGBA636;

Shape633.geometry = LineSet634;

HAnimJoint632.child = new undefined();

HAnimJoint632.child[0] = Shape633;

HAnimJoint HAnimJoint637 = createNode("HAnimJoint");
HAnimJoint637.name = "vc6";
HAnimJoint637.DEF = "hanim_vc6";
HAnimJoint637.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint637.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint637.llimit = new MFFloat(new float[0,0,0]);
Shape Shape638 = createNode("Shape");
LineSet LineSet639 = createNode("LineSet");
LineSet639.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate640 = createNode("Coordinate");
Coordinate640.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet639.coord = Coordinate640;

//from vc6 to vc5
ColorRGBA ColorRGBA641 = createNode("ColorRGBA");
ColorRGBA641.USE = "HAnimSegmentLineColorRGBA";
LineSet639.color = ColorRGBA641;

Shape638.geometry = LineSet639;

HAnimJoint637.child = new undefined();

HAnimJoint637.child[0] = Shape638;

HAnimJoint HAnimJoint642 = createNode("HAnimJoint");
HAnimJoint642.name = "vc5";
HAnimJoint642.DEF = "hanim_vc5";
HAnimJoint642.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint642.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint642.llimit = new MFFloat(new float[0,0,0]);
Shape Shape643 = createNode("Shape");
LineSet LineSet644 = createNode("LineSet");
LineSet644.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate645 = createNode("Coordinate");
Coordinate645.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet644.coord = Coordinate645;

//from vc5 to vc4
ColorRGBA ColorRGBA646 = createNode("ColorRGBA");
ColorRGBA646.USE = "HAnimSegmentLineColorRGBA";
LineSet644.color = ColorRGBA646;

Shape643.geometry = LineSet644;

HAnimJoint642.child = new undefined();

HAnimJoint642.child[0] = Shape643;

HAnimJoint HAnimJoint647 = createNode("HAnimJoint");
HAnimJoint647.name = "vc4";
HAnimJoint647.DEF = "hanim_vc4";
HAnimJoint647.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint647.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint647.llimit = new MFFloat(new float[0,0,0]);
Shape Shape648 = createNode("Shape");
LineSet LineSet649 = createNode("LineSet");
LineSet649.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate650 = createNode("Coordinate");
Coordinate650.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet649.coord = Coordinate650;

//from vc4 to vc3
ColorRGBA ColorRGBA651 = createNode("ColorRGBA");
ColorRGBA651.USE = "HAnimSegmentLineColorRGBA";
LineSet649.color = ColorRGBA651;

Shape648.geometry = LineSet649;

HAnimJoint647.child = new undefined();

HAnimJoint647.child[0] = Shape648;

HAnimJoint HAnimJoint652 = createNode("HAnimJoint");
HAnimJoint652.name = "vc3";
HAnimJoint652.DEF = "hanim_vc3";
HAnimJoint652.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint652.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint652.llimit = new MFFloat(new float[0,0,0]);
Shape Shape653 = createNode("Shape");
LineSet LineSet654 = createNode("LineSet");
LineSet654.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate655 = createNode("Coordinate");
Coordinate655.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet654.coord = Coordinate655;

//from vc3 to vc2
ColorRGBA ColorRGBA656 = createNode("ColorRGBA");
ColorRGBA656.USE = "HAnimSegmentLineColorRGBA";
LineSet654.color = ColorRGBA656;

Shape653.geometry = LineSet654;

HAnimJoint652.child = new undefined();

HAnimJoint652.child[0] = Shape653;

HAnimSite HAnimSite657 = createNode("HAnimSite");
HAnimSite657.name = "adams_apple_pt";
HAnimSite657.DEF = "hanim_adams_apple_pt";
HAnimSite657.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor658 = createNode("TouchSensor");
TouchSensor658.description = "HAnimSite adams_apple_pt";
HAnimSite657.children = new MFNode();

HAnimSite657.children[0] = TouchSensor658;

Shape Shape659 = createNode("Shape");
Shape659.USE = "HAnimSiteShape";
HAnimSite657.children[1] = Shape659;

HAnimJoint652.child[1] = HAnimSite657;

HAnimJoint HAnimJoint660 = createNode("HAnimJoint");
HAnimJoint660.name = "vc2";
HAnimJoint660.DEF = "hanim_vc2";
HAnimJoint660.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint660.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint660.llimit = new MFFloat(new float[0,0,0]);
Shape Shape661 = createNode("Shape");
LineSet LineSet662 = createNode("LineSet");
LineSet662.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate663 = createNode("Coordinate");
Coordinate663.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet662.coord = Coordinate663;

//from vc2 to vc1
ColorRGBA ColorRGBA664 = createNode("ColorRGBA");
ColorRGBA664.USE = "HAnimSegmentLineColorRGBA";
LineSet662.color = ColorRGBA664;

Shape661.geometry = LineSet662;

HAnimJoint660.child = new undefined();

HAnimJoint660.child[0] = Shape661;

HAnimJoint HAnimJoint665 = createNode("HAnimJoint");
HAnimJoint665.name = "vc1";
HAnimJoint665.DEF = "hanim_vc1";
HAnimJoint665.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint665.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint665.llimit = new MFFloat(new float[0,0,0]);
Shape Shape666 = createNode("Shape");
LineSet LineSet667 = createNode("LineSet");
LineSet667.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate668 = createNode("Coordinate");
Coordinate668.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet667.coord = Coordinate668;

//from vc1 to skullbase
ColorRGBA ColorRGBA669 = createNode("ColorRGBA");
ColorRGBA669.USE = "HAnimSegmentLineColorRGBA";
LineSet667.color = ColorRGBA669;

Shape666.geometry = LineSet667;

HAnimJoint665.child = new undefined();

HAnimJoint665.child[0] = Shape666;

HAnimSite HAnimSite670 = createNode("HAnimSite");
HAnimSite670.name = "glabella_pt";
HAnimSite670.DEF = "hanim_glabella_pt";
HAnimSite670.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor671 = createNode("TouchSensor");
TouchSensor671.description = "HAnimSite glabella_pt";
HAnimSite670.children = new MFNode();

HAnimSite670.children[0] = TouchSensor671;

Shape Shape672 = createNode("Shape");
Shape672.USE = "HAnimSiteShape";
HAnimSite670.children[1] = Shape672;

HAnimJoint665.child[1] = HAnimSite670;

HAnimSite HAnimSite673 = createNode("HAnimSite");
HAnimSite673.name = "l_ectocanthus_pt";
HAnimSite673.DEF = "hanim_l_ectocanthus_pt";
HAnimSite673.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor674 = createNode("TouchSensor");
TouchSensor674.description = "HAnimSite l_ectocanthus_pt";
HAnimSite673.children = new MFNode();

HAnimSite673.children[0] = TouchSensor674;

Shape Shape675 = createNode("Shape");
Shape675.USE = "HAnimSiteShape";
HAnimSite673.children[1] = Shape675;

HAnimJoint665.child[2] = HAnimSite673;

HAnimSite HAnimSite676 = createNode("HAnimSite");
HAnimSite676.name = "l_infraorbitale_pt";
HAnimSite676.DEF = "hanim_l_infraorbitale_pt";
HAnimSite676.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor677 = createNode("TouchSensor");
TouchSensor677.description = "HAnimSite l_infraorbitale_pt";
HAnimSite676.children = new MFNode();

HAnimSite676.children[0] = TouchSensor677;

Shape Shape678 = createNode("Shape");
Shape678.USE = "HAnimSiteShape";
HAnimSite676.children[1] = Shape678;

HAnimJoint665.child[3] = HAnimSite676;

HAnimSite HAnimSite679 = createNode("HAnimSite");
HAnimSite679.name = "l_tragion_pt";
HAnimSite679.DEF = "hanim_l_tragion_pt";
HAnimSite679.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor680 = createNode("TouchSensor");
TouchSensor680.description = "HAnimSite l_tragion_pt";
HAnimSite679.children = new MFNode();

HAnimSite679.children[0] = TouchSensor680;

Shape Shape681 = createNode("Shape");
Shape681.USE = "HAnimSiteShape";
HAnimSite679.children[1] = Shape681;

HAnimJoint665.child[4] = HAnimSite679;

HAnimSite HAnimSite682 = createNode("HAnimSite");
HAnimSite682.name = "nuchale_pt";
HAnimSite682.DEF = "hanim_nuchale_pt";
HAnimSite682.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor683 = createNode("TouchSensor");
TouchSensor683.description = "HAnimSite nuchale_pt";
HAnimSite682.children = new MFNode();

HAnimSite682.children[0] = TouchSensor683;

Shape Shape684 = createNode("Shape");
Shape684.USE = "HAnimSiteShape";
HAnimSite682.children[1] = Shape684;

HAnimJoint665.child[5] = HAnimSite682;

HAnimSite HAnimSite685 = createNode("HAnimSite");
HAnimSite685.name = "opisthocranion_pt";
HAnimSite685.DEF = "hanim_opisthocranion_pt";
HAnimSite685.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor686 = createNode("TouchSensor");
TouchSensor686.description = "HAnimSite opisthocranion_pt";
HAnimSite685.children = new MFNode();

HAnimSite685.children[0] = TouchSensor686;

Shape Shape687 = createNode("Shape");
Shape687.USE = "HAnimSiteShape";
HAnimSite685.children[1] = Shape687;

HAnimJoint665.child[6] = HAnimSite685;

HAnimSite HAnimSite688 = createNode("HAnimSite");
HAnimSite688.name = "r_ectocanthus_pt";
HAnimSite688.DEF = "hanim_r_ectocanthus_pt";
HAnimSite688.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor689 = createNode("TouchSensor");
TouchSensor689.description = "HAnimSite r_ectocanthus_pt";
HAnimSite688.children = new MFNode();

HAnimSite688.children[0] = TouchSensor689;

Shape Shape690 = createNode("Shape");
Shape690.USE = "HAnimSiteShape";
HAnimSite688.children[1] = Shape690;

HAnimJoint665.child[7] = HAnimSite688;

HAnimSite HAnimSite691 = createNode("HAnimSite");
HAnimSite691.name = "r_infraorbitale_pt";
HAnimSite691.DEF = "hanim_r_infraorbitale_pt";
HAnimSite691.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor692 = createNode("TouchSensor");
TouchSensor692.description = "HAnimSite r_infraorbitale_pt";
HAnimSite691.children = new MFNode();

HAnimSite691.children[0] = TouchSensor692;

Shape Shape693 = createNode("Shape");
Shape693.USE = "HAnimSiteShape";
HAnimSite691.children[1] = Shape693;

HAnimJoint665.child[8] = HAnimSite691;

HAnimSite HAnimSite694 = createNode("HAnimSite");
HAnimSite694.name = "r_tragion_pt";
HAnimSite694.DEF = "hanim_r_tragion_pt";
HAnimSite694.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor695 = createNode("TouchSensor");
TouchSensor695.description = "HAnimSite r_tragion_pt";
HAnimSite694.children = new MFNode();

HAnimSite694.children[0] = TouchSensor695;

Shape Shape696 = createNode("Shape");
Shape696.USE = "HAnimSiteShape";
HAnimSite694.children[1] = Shape696;

HAnimJoint665.child[9] = HAnimSite694;

HAnimSite HAnimSite697 = createNode("HAnimSite");
HAnimSite697.name = "sellion_pt";
HAnimSite697.DEF = "hanim_sellion_pt";
HAnimSite697.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor698 = createNode("TouchSensor");
TouchSensor698.description = "HAnimSite sellion_pt";
HAnimSite697.children = new MFNode();

HAnimSite697.children[0] = TouchSensor698;

Shape Shape699 = createNode("Shape");
Shape699.USE = "HAnimSiteShape";
HAnimSite697.children[1] = Shape699;

HAnimJoint665.child[10] = HAnimSite697;

HAnimSite HAnimSite700 = createNode("HAnimSite");
HAnimSite700.name = "skull_vertex_pt";
HAnimSite700.DEF = "hanim_skull_vertex_pt";
HAnimSite700.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor701 = createNode("TouchSensor");
TouchSensor701.description = "HAnimSite skull_vertex_pt";
HAnimSite700.children = new MFNode();

HAnimSite700.children[0] = TouchSensor701;

Shape Shape702 = createNode("Shape");
Shape702.USE = "HAnimSiteShape";
HAnimSite700.children[1] = Shape702;

HAnimJoint665.child[11] = HAnimSite700;

HAnimJoint HAnimJoint703 = createNode("HAnimJoint");
HAnimJoint703.name = "skullbase";
HAnimJoint703.DEF = "hanim_skullbase";
HAnimJoint703.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint703.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.llimit = new MFFloat(new float[0,0,0]);
Shape Shape704 = createNode("Shape");
LineSet LineSet705 = createNode("LineSet");
LineSet705.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate706 = createNode("Coordinate");
Coordinate706.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet705.coord = Coordinate706;

//from skullbase to l_eyelid_joint
ColorRGBA ColorRGBA707 = createNode("ColorRGBA");
ColorRGBA707.USE = "HAnimSegmentLineColorRGBA";
LineSet705.color = ColorRGBA707;

Shape704.geometry = LineSet705;

HAnimJoint703.child = new undefined();

HAnimJoint703.child[0] = Shape704;

Shape Shape708 = createNode("Shape");
LineSet LineSet709 = createNode("LineSet");
LineSet709.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate710 = createNode("Coordinate");
Coordinate710.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet709.coord = Coordinate710;

//from skullbase to r_eyelid_joint
ColorRGBA ColorRGBA711 = createNode("ColorRGBA");
ColorRGBA711.USE = "HAnimSegmentLineColorRGBA";
LineSet709.color = ColorRGBA711;

Shape708.geometry = LineSet709;

HAnimJoint703.child[1] = Shape708;

Shape Shape712 = createNode("Shape");
LineSet LineSet713 = createNode("LineSet");
LineSet713.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate714 = createNode("Coordinate");
Coordinate714.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet713.coord = Coordinate714;

//from skullbase to l_eyeball_joint
ColorRGBA ColorRGBA715 = createNode("ColorRGBA");
ColorRGBA715.USE = "HAnimSegmentLineColorRGBA";
LineSet713.color = ColorRGBA715;

Shape712.geometry = LineSet713;

HAnimJoint703.child[2] = Shape712;

Shape Shape716 = createNode("Shape");
LineSet LineSet717 = createNode("LineSet");
LineSet717.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate718 = createNode("Coordinate");
Coordinate718.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet717.coord = Coordinate718;

//from skullbase to r_eyeball_joint
ColorRGBA ColorRGBA719 = createNode("ColorRGBA");
ColorRGBA719.USE = "HAnimSegmentLineColorRGBA";
LineSet717.color = ColorRGBA719;

Shape716.geometry = LineSet717;

HAnimJoint703.child[3] = Shape716;

Shape Shape720 = createNode("Shape");
LineSet LineSet721 = createNode("LineSet");
LineSet721.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate722 = createNode("Coordinate");
Coordinate722.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet721.coord = Coordinate722;

//from skullbase to l_eyebrow_joint
ColorRGBA ColorRGBA723 = createNode("ColorRGBA");
ColorRGBA723.USE = "HAnimSegmentLineColorRGBA";
LineSet721.color = ColorRGBA723;

Shape720.geometry = LineSet721;

HAnimJoint703.child[4] = Shape720;

Shape Shape724 = createNode("Shape");
LineSet LineSet725 = createNode("LineSet");
LineSet725.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate726 = createNode("Coordinate");
Coordinate726.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet725.coord = Coordinate726;

//from skullbase to r_eyebrow_joint
ColorRGBA ColorRGBA727 = createNode("ColorRGBA");
ColorRGBA727.USE = "HAnimSegmentLineColorRGBA";
LineSet725.color = ColorRGBA727;

Shape724.geometry = LineSet725;

HAnimJoint703.child[5] = Shape724;

Shape Shape728 = createNode("Shape");
LineSet LineSet729 = createNode("LineSet");
LineSet729.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate730 = createNode("Coordinate");
Coordinate730.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet729.coord = Coordinate730;

//from skullbase to temporomandibular
ColorRGBA ColorRGBA731 = createNode("ColorRGBA");
ColorRGBA731.USE = "HAnimSegmentLineColorRGBA";
LineSet729.color = ColorRGBA731;

Shape728.geometry = LineSet729;

HAnimJoint703.child[6] = Shape728;

HAnimSite HAnimSite732 = createNode("HAnimSite");
HAnimSite732.name = "l_gonion_pt";
HAnimSite732.DEF = "hanim_l_gonion_pt";
HAnimSite732.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
TouchSensor TouchSensor733 = createNode("TouchSensor");
TouchSensor733.description = "HAnimSite l_gonion_pt";
HAnimSite732.children = new MFNode();

HAnimSite732.children[0] = TouchSensor733;

Shape Shape734 = createNode("Shape");
Shape734.USE = "HAnimSiteShape";
HAnimSite732.children[1] = Shape734;

HAnimJoint703.child[7] = HAnimSite732;

HAnimSite HAnimSite735 = createNode("HAnimSite");
HAnimSite735.name = "menton_pt";
HAnimSite735.DEF = "hanim_menton_pt";
HAnimSite735.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor736 = createNode("TouchSensor");
TouchSensor736.description = "HAnimSite menton_pt";
HAnimSite735.children = new MFNode();

HAnimSite735.children[0] = TouchSensor736;

Shape Shape737 = createNode("Shape");
Shape737.USE = "HAnimSiteShape";
HAnimSite735.children[1] = Shape737;

HAnimJoint703.child[8] = HAnimSite735;

HAnimSite HAnimSite738 = createNode("HAnimSite");
HAnimSite738.name = "r_gonion_pt";
HAnimSite738.DEF = "hanim_r_gonion_pt";
HAnimSite738.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
TouchSensor TouchSensor739 = createNode("TouchSensor");
TouchSensor739.description = "HAnimSite r_gonion_pt";
HAnimSite738.children = new MFNode();

HAnimSite738.children[0] = TouchSensor739;

Shape Shape740 = createNode("Shape");
Shape740.USE = "HAnimSiteShape";
HAnimSite738.children[1] = Shape740;

HAnimJoint703.child[9] = HAnimSite738;

HAnimSite HAnimSite741 = createNode("HAnimSite");
HAnimSite741.name = "supramenton_pt";
HAnimSite741.DEF = "hanim_supramenton_pt";
HAnimSite741.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
TouchSensor TouchSensor742 = createNode("TouchSensor");
TouchSensor742.description = "HAnimSite supramenton_pt";
HAnimSite741.children = new MFNode();

HAnimSite741.children[0] = TouchSensor742;

Shape Shape743 = createNode("Shape");
Shape743.USE = "HAnimSiteShape";
HAnimSite741.children[1] = Shape743;

HAnimJoint703.child[10] = HAnimSite741;

HAnimJoint HAnimJoint744 = createNode("HAnimJoint");
HAnimJoint744.name = "l_eyelid_joint";
HAnimJoint744.DEF = "hanim_l_eyelid_joint";
HAnimJoint744.center = new SFVec3f(new float[0,1,0]);
HAnimJoint744.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint744.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.children[11] = HAnimJoint744;

HAnimJoint HAnimJoint745 = createNode("HAnimJoint");
HAnimJoint745.name = "r_eyelid_joint";
HAnimJoint745.DEF = "hanim_r_eyelid_joint";
HAnimJoint745.center = new SFVec3f(new float[0,1,0]);
HAnimJoint745.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint745.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.children[12] = HAnimJoint745;

HAnimJoint HAnimJoint746 = createNode("HAnimJoint");
HAnimJoint746.name = "l_eyeball_joint";
HAnimJoint746.DEF = "hanim_l_eyeball_joint";
HAnimJoint746.center = new SFVec3f(new float[0,1,0]);
HAnimJoint746.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint746.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.children[13] = HAnimJoint746;

HAnimJoint HAnimJoint747 = createNode("HAnimJoint");
HAnimJoint747.name = "r_eyeball_joint";
HAnimJoint747.DEF = "hanim_r_eyeball_joint";
HAnimJoint747.center = new SFVec3f(new float[0,1,0]);
HAnimJoint747.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint747.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.children[14] = HAnimJoint747;

HAnimJoint HAnimJoint748 = createNode("HAnimJoint");
HAnimJoint748.name = "l_eyebrow_joint";
HAnimJoint748.DEF = "hanim_l_eyebrow_joint";
HAnimJoint748.center = new SFVec3f(new float[0,1,0]);
HAnimJoint748.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint748.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.children[15] = HAnimJoint748;

HAnimJoint HAnimJoint749 = createNode("HAnimJoint");
HAnimJoint749.name = "r_eyebrow_joint";
HAnimJoint749.DEF = "hanim_r_eyebrow_joint";
HAnimJoint749.center = new SFVec3f(new float[0,1,0]);
HAnimJoint749.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint749.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.children[16] = HAnimJoint749;

HAnimJoint HAnimJoint750 = createNode("HAnimJoint");
HAnimJoint750.name = "temporomandibular";
HAnimJoint750.DEF = "hanim_temporomandibular";
HAnimJoint750.center = new SFVec3f(new float[0,1,0]);
HAnimJoint750.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint750.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint703.children[17] = HAnimJoint750;

HAnimJoint665.children[12] = HAnimJoint703;

HAnimJoint660.children[1] = HAnimJoint665;

HAnimJoint652.children[2] = HAnimJoint660;

HAnimJoint647.children[1] = HAnimJoint652;

HAnimJoint642.children[1] = HAnimJoint647;

HAnimJoint637.children[1] = HAnimJoint642;

HAnimJoint632.children[1] = HAnimJoint637;

HAnimJoint583.children[15] = HAnimJoint632;

HAnimJoint HAnimJoint751 = createNode("HAnimJoint");
HAnimJoint751.name = "l_sternoclavicular";
HAnimJoint751.DEF = "hanim_l_sternoclavicular";
HAnimJoint751.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint751.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint751.llimit = new MFFloat(new float[0,0,0]);
Shape Shape752 = createNode("Shape");
LineSet LineSet753 = createNode("LineSet");
LineSet753.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate754 = createNode("Coordinate");
Coordinate754.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet753.coord = Coordinate754;

//from l_sternoclavicular to l_acromioclavicular
ColorRGBA ColorRGBA755 = createNode("ColorRGBA");
ColorRGBA755.USE = "HAnimSegmentLineColorRGBA";
LineSet753.color = ColorRGBA755;

Shape752.geometry = LineSet753;

HAnimJoint751.child = new undefined();

HAnimJoint751.child[0] = Shape752;

HAnimJoint HAnimJoint756 = createNode("HAnimJoint");
HAnimJoint756.name = "l_acromioclavicular";
HAnimJoint756.DEF = "hanim_l_acromioclavicular";
HAnimJoint756.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint756.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint756.llimit = new MFFloat(new float[0,0,0]);
Shape Shape757 = createNode("Shape");
LineSet LineSet758 = createNode("LineSet");
LineSet758.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate759 = createNode("Coordinate");
Coordinate759.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet758.coord = Coordinate759;

//from l_acromioclavicular to l_shoulder
ColorRGBA ColorRGBA760 = createNode("ColorRGBA");
ColorRGBA760.USE = "HAnimSegmentLineColorRGBA";
LineSet758.color = ColorRGBA760;

Shape757.geometry = LineSet758;

HAnimJoint756.child = new undefined();

HAnimJoint756.child[0] = Shape757;

HAnimSite HAnimSite761 = createNode("HAnimSite");
HAnimSite761.name = "l_bideltoid_pt";
HAnimSite761.DEF = "hanim_l_bideltoid_pt";
HAnimSite761.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor762 = createNode("TouchSensor");
TouchSensor762.description = "HAnimSite l_bideltoid_pt";
HAnimSite761.children = new MFNode();

HAnimSite761.children[0] = TouchSensor762;

Shape Shape763 = createNode("Shape");
Shape763.USE = "HAnimSiteShape";
HAnimSite761.children[1] = Shape763;

HAnimJoint756.child[1] = HAnimSite761;

HAnimSite HAnimSite764 = createNode("HAnimSite");
HAnimSite764.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite764.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite764.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor765 = createNode("TouchSensor");
TouchSensor765.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite764.children = new MFNode();

HAnimSite764.children[0] = TouchSensor765;

Shape Shape766 = createNode("Shape");
Shape766.USE = "HAnimSiteShape";
HAnimSite764.children[1] = Shape766;

HAnimJoint756.child[2] = HAnimSite764;

HAnimJoint HAnimJoint767 = createNode("HAnimJoint");
HAnimJoint767.name = "l_shoulder";
HAnimJoint767.DEF = "hanim_l_shoulder";
HAnimJoint767.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint767.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint767.llimit = new MFFloat(new float[0,0,0]);
Shape Shape768 = createNode("Shape");
LineSet LineSet769 = createNode("LineSet");
LineSet769.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate770 = createNode("Coordinate");
Coordinate770.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet769.coord = Coordinate770;

//from l_shoulder to l_elbow
ColorRGBA ColorRGBA771 = createNode("ColorRGBA");
ColorRGBA771.USE = "HAnimSegmentLineColorRGBA";
LineSet769.color = ColorRGBA771;

Shape768.geometry = LineSet769;

HAnimJoint767.child = new undefined();

HAnimJoint767.child[0] = Shape768;

HAnimSite HAnimSite772 = createNode("HAnimSite");
HAnimSite772.name = "l_humeral_medial_epicondyles_pt";
HAnimSite772.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite772.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor773 = createNode("TouchSensor");
TouchSensor773.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite772.children = new MFNode();

HAnimSite772.children[0] = TouchSensor773;

Shape Shape774 = createNode("Shape");
Shape774.USE = "HAnimSiteShape";
HAnimSite772.children[1] = Shape774;

HAnimJoint767.child[1] = HAnimSite772;

HAnimSite HAnimSite775 = createNode("HAnimSite");
HAnimSite775.name = "l_olecranon_pt";
HAnimSite775.DEF = "hanim_l_olecranon_pt";
HAnimSite775.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor776 = createNode("TouchSensor");
TouchSensor776.description = "HAnimSite l_olecranon_pt";
HAnimSite775.children = new MFNode();

HAnimSite775.children[0] = TouchSensor776;

Shape Shape777 = createNode("Shape");
Shape777.USE = "HAnimSiteShape";
HAnimSite775.children[1] = Shape777;

HAnimJoint767.child[2] = HAnimSite775;

HAnimSite HAnimSite778 = createNode("HAnimSite");
HAnimSite778.name = "l_radial_styloid_pt";
HAnimSite778.DEF = "hanim_l_radial_styloid_pt";
HAnimSite778.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor779 = createNode("TouchSensor");
TouchSensor779.description = "HAnimSite l_radial_styloid_pt";
HAnimSite778.children = new MFNode();

HAnimSite778.children[0] = TouchSensor779;

Shape Shape780 = createNode("Shape");
Shape780.USE = "HAnimSiteShape";
HAnimSite778.children[1] = Shape780;

HAnimJoint767.child[3] = HAnimSite778;

HAnimSite HAnimSite781 = createNode("HAnimSite");
HAnimSite781.name = "l_radiale_pt";
HAnimSite781.DEF = "hanim_l_radiale_pt";
HAnimSite781.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor782 = createNode("TouchSensor");
TouchSensor782.description = "HAnimSite l_radiale_pt";
HAnimSite781.children = new MFNode();

HAnimSite781.children[0] = TouchSensor782;

Shape Shape783 = createNode("Shape");
Shape783.USE = "HAnimSiteShape";
HAnimSite781.children[1] = Shape783;

HAnimJoint767.child[4] = HAnimSite781;

HAnimJoint HAnimJoint784 = createNode("HAnimJoint");
HAnimJoint784.name = "l_elbow";
HAnimJoint784.DEF = "hanim_l_elbow";
HAnimJoint784.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint784.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint784.llimit = new MFFloat(new float[0,0,0]);
Shape Shape785 = createNode("Shape");
LineSet LineSet786 = createNode("LineSet");
LineSet786.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate787 = createNode("Coordinate");
Coordinate787.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet786.coord = Coordinate787;

//from l_elbow to l_radiocarpal
ColorRGBA ColorRGBA788 = createNode("ColorRGBA");
ColorRGBA788.USE = "HAnimSegmentLineColorRGBA";
LineSet786.color = ColorRGBA788;

Shape785.geometry = LineSet786;

HAnimJoint784.child = new undefined();

HAnimJoint784.child[0] = Shape785;

HAnimSite HAnimSite789 = createNode("HAnimSite");
HAnimSite789.name = "l_ulnar_styloid_pt";
HAnimSite789.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite789.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor790 = createNode("TouchSensor");
TouchSensor790.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite789.children = new MFNode();

HAnimSite789.children[0] = TouchSensor790;

Shape Shape791 = createNode("Shape");
Shape791.USE = "HAnimSiteShape";
HAnimSite789.children[1] = Shape791;

HAnimJoint784.child[1] = HAnimSite789;

HAnimJoint HAnimJoint792 = createNode("HAnimJoint");
HAnimJoint792.name = "l_radiocarpal";
HAnimJoint792.DEF = "hanim_l_radiocarpal";
HAnimJoint792.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint792.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint792.llimit = new MFFloat(new float[0,0,0]);
Shape Shape793 = createNode("Shape");
LineSet LineSet794 = createNode("LineSet");
LineSet794.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate795 = createNode("Coordinate");
Coordinate795.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet794.coord = Coordinate795;

//from l_radiocarpal to l_midcarpal_1
ColorRGBA ColorRGBA796 = createNode("ColorRGBA");
ColorRGBA796.USE = "HAnimSegmentLineColorRGBA";
LineSet794.color = ColorRGBA796;

Shape793.geometry = LineSet794;

HAnimJoint792.child = new undefined();

HAnimJoint792.child[0] = Shape793;

Shape Shape797 = createNode("Shape");
LineSet LineSet798 = createNode("LineSet");
LineSet798.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate799 = createNode("Coordinate");
Coordinate799.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet798.coord = Coordinate799;

//from l_radiocarpal to l_midcarpal_2
ColorRGBA ColorRGBA800 = createNode("ColorRGBA");
ColorRGBA800.USE = "HAnimSegmentLineColorRGBA";
LineSet798.color = ColorRGBA800;

Shape797.geometry = LineSet798;

HAnimJoint792.child[1] = Shape797;

Shape Shape801 = createNode("Shape");
LineSet LineSet802 = createNode("LineSet");
LineSet802.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate803 = createNode("Coordinate");
Coordinate803.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet802.coord = Coordinate803;

//from l_radiocarpal to l_midcarpal_3
ColorRGBA ColorRGBA804 = createNode("ColorRGBA");
ColorRGBA804.USE = "HAnimSegmentLineColorRGBA";
LineSet802.color = ColorRGBA804;

Shape801.geometry = LineSet802;

HAnimJoint792.child[2] = Shape801;

Shape Shape805 = createNode("Shape");
LineSet LineSet806 = createNode("LineSet");
LineSet806.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate807 = createNode("Coordinate");
Coordinate807.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet806.coord = Coordinate807;

//from l_radiocarpal to l_midcarpal_4_5
ColorRGBA ColorRGBA808 = createNode("ColorRGBA");
ColorRGBA808.USE = "HAnimSegmentLineColorRGBA";
LineSet806.color = ColorRGBA808;

Shape805.geometry = LineSet806;

HAnimJoint792.child[3] = Shape805;

HAnimJoint HAnimJoint809 = createNode("HAnimJoint");
HAnimJoint809.name = "l_midcarpal_1";
HAnimJoint809.DEF = "hanim_l_midcarpal_1";
HAnimJoint809.center = new SFVec3f(new float[0,1,0]);
HAnimJoint809.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint809.llimit = new MFFloat(new float[0,0,0]);
Shape Shape810 = createNode("Shape");
LineSet LineSet811 = createNode("LineSet");
LineSet811.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate812 = createNode("Coordinate");
Coordinate812.point = new MFVec3f(new float[0.1924,0.8472,-0.0534]);
LineSet811.coord = Coordinate812;

//from l_midcarpal_1 to l_carpometacarpal_1
ColorRGBA ColorRGBA813 = createNode("ColorRGBA");
ColorRGBA813.USE = "HAnimSegmentLineColorRGBA";
LineSet811.color = ColorRGBA813;

Shape810.geometry = LineSet811;

HAnimJoint809.child = new undefined();

HAnimJoint809.child[0] = Shape810;

HAnimJoint HAnimJoint814 = createNode("HAnimJoint");
HAnimJoint814.name = "l_carpometacarpal_1";
HAnimJoint814.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint814.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint814.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint814.llimit = new MFFloat(new float[0,0,0]);
Shape Shape815 = createNode("Shape");
LineSet LineSet816 = createNode("LineSet");
LineSet816.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate817 = createNode("Coordinate");
Coordinate817.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet816.coord = Coordinate817;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1
ColorRGBA ColorRGBA818 = createNode("ColorRGBA");
ColorRGBA818.USE = "HAnimSegmentLineColorRGBA";
LineSet816.color = ColorRGBA818;

Shape815.geometry = LineSet816;

HAnimJoint814.child = new undefined();

HAnimJoint814.child[0] = Shape815;

HAnimJoint HAnimJoint819 = createNode("HAnimJoint");
HAnimJoint819.name = "l_metacarpophalangeal_1";
HAnimJoint819.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint819.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint819.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint819.llimit = new MFFloat(new float[0,0,0]);
Shape Shape820 = createNode("Shape");
LineSet LineSet821 = createNode("LineSet");
LineSet821.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate822 = createNode("Coordinate");
Coordinate822.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet821.coord = Coordinate822;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1
ColorRGBA ColorRGBA823 = createNode("ColorRGBA");
ColorRGBA823.USE = "HAnimSegmentLineColorRGBA";
LineSet821.color = ColorRGBA823;

Shape820.geometry = LineSet821;

HAnimJoint819.child = new undefined();

HAnimJoint819.child[0] = Shape820;

HAnimSite HAnimSite824 = createNode("HAnimSite");
HAnimSite824.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite824.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite824.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor825 = createNode("TouchSensor");
TouchSensor825.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite824.children = new MFNode();

HAnimSite824.children[0] = TouchSensor825;

Shape Shape826 = createNode("Shape");
Shape826.USE = "HAnimSiteShape";
HAnimSite824.children[1] = Shape826;

HAnimJoint819.child[1] = HAnimSite824;

HAnimJoint HAnimJoint827 = createNode("HAnimJoint");
HAnimJoint827.name = "l_carpal_interphalangeal_1";
HAnimJoint827.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint827.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint827.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint827.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint819.children[2] = HAnimJoint827;

HAnimJoint814.children[1] = HAnimJoint819;

HAnimJoint809.children[1] = HAnimJoint814;

HAnimJoint792.children[4] = HAnimJoint809;

HAnimJoint HAnimJoint828 = createNode("HAnimJoint");
HAnimJoint828.name = "l_midcarpal_2";
HAnimJoint828.DEF = "hanim_l_midcarpal_2";
HAnimJoint828.center = new SFVec3f(new float[0,1,0]);
HAnimJoint828.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint828.llimit = new MFFloat(new float[0,0,0]);
Shape Shape829 = createNode("Shape");
LineSet LineSet830 = createNode("LineSet");
LineSet830.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate831 = createNode("Coordinate");
Coordinate831.point = new MFVec3f(new float[0.1983,0.8024,-0.028]);
LineSet830.coord = Coordinate831;

//from l_midcarpal_2 to l_carpometacarpal_2
ColorRGBA ColorRGBA832 = createNode("ColorRGBA");
ColorRGBA832.USE = "HAnimSegmentLineColorRGBA";
LineSet830.color = ColorRGBA832;

Shape829.geometry = LineSet830;

HAnimJoint828.child = new undefined();

HAnimJoint828.child[0] = Shape829;

HAnimSite HAnimSite833 = createNode("HAnimSite");
HAnimSite833.name = "l_metacarpal_phalanx_2_pt";
HAnimSite833.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite833.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor834 = createNode("TouchSensor");
TouchSensor834.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite833.children = new MFNode();

HAnimSite833.children[0] = TouchSensor834;

Shape Shape835 = createNode("Shape");
Shape835.USE = "HAnimSiteShape";
HAnimSite833.children[1] = Shape835;

HAnimJoint828.child[1] = HAnimSite833;

HAnimJoint HAnimJoint836 = createNode("HAnimJoint");
HAnimJoint836.name = "l_carpometacarpal_2";
HAnimJoint836.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint836.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint836.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint836.llimit = new MFFloat(new float[0,0,0]);
Shape Shape837 = createNode("Shape");
LineSet LineSet838 = createNode("LineSet");
LineSet838.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate839 = createNode("Coordinate");
Coordinate839.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet838.coord = Coordinate839;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2
ColorRGBA ColorRGBA840 = createNode("ColorRGBA");
ColorRGBA840.USE = "HAnimSegmentLineColorRGBA";
LineSet838.color = ColorRGBA840;

Shape837.geometry = LineSet838;

HAnimJoint836.child = new undefined();

HAnimJoint836.child[0] = Shape837;

HAnimJoint HAnimJoint841 = createNode("HAnimJoint");
HAnimJoint841.name = "l_metacarpophalangeal_2";
HAnimJoint841.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint841.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint841.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint841.llimit = new MFFloat(new float[0,0,0]);
Shape Shape842 = createNode("Shape");
LineSet LineSet843 = createNode("LineSet");
LineSet843.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate844 = createNode("Coordinate");
Coordinate844.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet843.coord = Coordinate844;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2
ColorRGBA ColorRGBA845 = createNode("ColorRGBA");
ColorRGBA845.USE = "HAnimSegmentLineColorRGBA";
LineSet843.color = ColorRGBA845;

Shape842.geometry = LineSet843;

HAnimJoint841.child = new undefined();

HAnimJoint841.child[0] = Shape842;

HAnimJoint HAnimJoint846 = createNode("HAnimJoint");
HAnimJoint846.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint846.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint846.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint846.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint846.llimit = new MFFloat(new float[0,0,0]);
Shape Shape847 = createNode("Shape");
LineSet LineSet848 = createNode("LineSet");
LineSet848.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate849 = createNode("Coordinate");
Coordinate849.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet848.coord = Coordinate849;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2
ColorRGBA ColorRGBA850 = createNode("ColorRGBA");
ColorRGBA850.USE = "HAnimSegmentLineColorRGBA";
LineSet848.color = ColorRGBA850;

Shape847.geometry = LineSet848;

HAnimJoint846.child = new undefined();

HAnimJoint846.child[0] = Shape847;

HAnimSite HAnimSite851 = createNode("HAnimSite");
HAnimSite851.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite851.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite851.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor852 = createNode("TouchSensor");
TouchSensor852.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite851.children = new MFNode();

HAnimSite851.children[0] = TouchSensor852;

Shape Shape853 = createNode("Shape");
Shape853.USE = "HAnimSiteShape";
HAnimSite851.children[1] = Shape853;

HAnimJoint846.child[1] = HAnimSite851;

HAnimSite HAnimSite854 = createNode("HAnimSite");
HAnimSite854.name = "l_dactylion_pt";
HAnimSite854.DEF = "hanim_l_dactylion_pt";
HAnimSite854.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor855 = createNode("TouchSensor");
TouchSensor855.description = "HAnimSite l_dactylion_pt";
HAnimSite854.children = new MFNode();

HAnimSite854.children[0] = TouchSensor855;

Shape Shape856 = createNode("Shape");
Shape856.USE = "HAnimSiteShape";
HAnimSite854.children[1] = Shape856;

HAnimJoint846.child[2] = HAnimSite854;

HAnimJoint HAnimJoint857 = createNode("HAnimJoint");
HAnimJoint857.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint857.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint857.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint857.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint857.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint846.children[3] = HAnimJoint857;

HAnimJoint841.children[1] = HAnimJoint846;

HAnimJoint836.children[1] = HAnimJoint841;

HAnimJoint828.children[2] = HAnimJoint836;

HAnimJoint792.children[5] = HAnimJoint828;

HAnimJoint HAnimJoint858 = createNode("HAnimJoint");
HAnimJoint858.name = "l_midcarpal_3";
HAnimJoint858.DEF = "hanim_l_midcarpal_3";
HAnimJoint858.center = new SFVec3f(new float[0,1,0]);
HAnimJoint858.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint858.llimit = new MFFloat(new float[0,0,0]);
Shape Shape859 = createNode("Shape");
LineSet LineSet860 = createNode("LineSet");
LineSet860.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate861 = createNode("Coordinate");
Coordinate861.point = new MFVec3f(new float[0.1987,0.8029,-0.053]);
LineSet860.coord = Coordinate861;

//from l_midcarpal_3 to l_carpometacarpal_3
ColorRGBA ColorRGBA862 = createNode("ColorRGBA");
ColorRGBA862.USE = "HAnimSegmentLineColorRGBA";
LineSet860.color = ColorRGBA862;

Shape859.geometry = LineSet860;

HAnimJoint858.child = new undefined();

HAnimJoint858.child[0] = Shape859;

HAnimSite HAnimSite863 = createNode("HAnimSite");
HAnimSite863.name = "l_metacarpal_phalanx_3_pt";
HAnimSite863.DEF = "hanim_l_metacarpal_phalanx_3_pt";
HAnimSite863.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor864 = createNode("TouchSensor");
TouchSensor864.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite863.children = new MFNode();

HAnimSite863.children[0] = TouchSensor864;

Shape Shape865 = createNode("Shape");
Shape865.USE = "HAnimSiteShape";
HAnimSite863.children[1] = Shape865;

HAnimJoint858.child[1] = HAnimSite863;

HAnimJoint HAnimJoint866 = createNode("HAnimJoint");
HAnimJoint866.name = "l_carpometacarpal_3";
HAnimJoint866.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint866.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint866.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint866.llimit = new MFFloat(new float[0,0,0]);
Shape Shape867 = createNode("Shape");
LineSet LineSet868 = createNode("LineSet");
LineSet868.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate869 = createNode("Coordinate");
Coordinate869.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet868.coord = Coordinate869;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3
ColorRGBA ColorRGBA870 = createNode("ColorRGBA");
ColorRGBA870.USE = "HAnimSegmentLineColorRGBA";
LineSet868.color = ColorRGBA870;

Shape867.geometry = LineSet868;

HAnimJoint866.child = new undefined();

HAnimJoint866.child[0] = Shape867;

HAnimJoint HAnimJoint871 = createNode("HAnimJoint");
HAnimJoint871.name = "l_metacarpophalangeal_3";
HAnimJoint871.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint871.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint871.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint871.llimit = new MFFloat(new float[0,0,0]);
Shape Shape872 = createNode("Shape");
LineSet LineSet873 = createNode("LineSet");
LineSet873.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate874 = createNode("Coordinate");
Coordinate874.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet873.coord = Coordinate874;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3
ColorRGBA ColorRGBA875 = createNode("ColorRGBA");
ColorRGBA875.USE = "HAnimSegmentLineColorRGBA";
LineSet873.color = ColorRGBA875;

Shape872.geometry = LineSet873;

HAnimJoint871.child = new undefined();

HAnimJoint871.child[0] = Shape872;

HAnimJoint HAnimJoint876 = createNode("HAnimJoint");
HAnimJoint876.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint876.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint876.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint876.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint876.llimit = new MFFloat(new float[0,0,0]);
Shape Shape877 = createNode("Shape");
LineSet LineSet878 = createNode("LineSet");
LineSet878.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate879 = createNode("Coordinate");
Coordinate879.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet878.coord = Coordinate879;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3
ColorRGBA ColorRGBA880 = createNode("ColorRGBA");
ColorRGBA880.USE = "HAnimSegmentLineColorRGBA";
LineSet878.color = ColorRGBA880;

Shape877.geometry = LineSet878;

HAnimJoint876.child = new undefined();

HAnimJoint876.child[0] = Shape877;

HAnimSite HAnimSite881 = createNode("HAnimSite");
HAnimSite881.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite881.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite881.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor882 = createNode("TouchSensor");
TouchSensor882.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite881.children = new MFNode();

HAnimSite881.children[0] = TouchSensor882;

Shape Shape883 = createNode("Shape");
Shape883.USE = "HAnimSiteShape";
HAnimSite881.children[1] = Shape883;

HAnimJoint876.child[1] = HAnimSite881;

HAnimJoint HAnimJoint884 = createNode("HAnimJoint");
HAnimJoint884.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint884.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint884.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint884.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint884.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint876.children[2] = HAnimJoint884;

HAnimJoint871.children[1] = HAnimJoint876;

HAnimJoint866.children[1] = HAnimJoint871;

HAnimJoint858.children[2] = HAnimJoint866;

HAnimJoint792.children[6] = HAnimJoint858;

HAnimJoint HAnimJoint885 = createNode("HAnimJoint");
HAnimJoint885.name = "l_midcarpal_4_5";
HAnimJoint885.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint885.center = new SFVec3f(new float[0,1,0]);
HAnimJoint885.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint885.llimit = new MFFloat(new float[0,0,0]);
Shape Shape886 = createNode("Shape");
LineSet LineSet887 = createNode("LineSet");
LineSet887.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate888 = createNode("Coordinate");
Coordinate888.point = new MFVec3f(new float[0.1956,0.8019,-0.0794]);
LineSet887.coord = Coordinate888;

//from l_midcarpal_4_5 to l_carpometacarpal_4
ColorRGBA ColorRGBA889 = createNode("ColorRGBA");
ColorRGBA889.USE = "HAnimSegmentLineColorRGBA";
LineSet887.color = ColorRGBA889;

Shape886.geometry = LineSet887;

HAnimJoint885.child = new undefined();

HAnimJoint885.child[0] = Shape886;

Shape Shape890 = createNode("Shape");
LineSet LineSet891 = createNode("LineSet");
LineSet891.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate892 = createNode("Coordinate");
Coordinate892.point = new MFVec3f(new float[0.1925,0.8066,-0.1036]);
LineSet891.coord = Coordinate892;

//from l_midcarpal_4_5 to l_carpometacarpal_5
ColorRGBA ColorRGBA893 = createNode("ColorRGBA");
ColorRGBA893.USE = "HAnimSegmentLineColorRGBA";
LineSet891.color = ColorRGBA893;

Shape890.geometry = LineSet891;

HAnimJoint885.child[1] = Shape890;

HAnimSite HAnimSite894 = createNode("HAnimSite");
HAnimSite894.name = "l_metacarpal_phalanx_5_pt";
HAnimSite894.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite894.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor895 = createNode("TouchSensor");
TouchSensor895.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite894.children = new MFNode();

HAnimSite894.children[0] = TouchSensor895;

Shape Shape896 = createNode("Shape");
Shape896.USE = "HAnimSiteShape";
HAnimSite894.children[1] = Shape896;

HAnimJoint885.child[2] = HAnimSite894;

HAnimJoint HAnimJoint897 = createNode("HAnimJoint");
HAnimJoint897.name = "l_carpometacarpal_4";
HAnimJoint897.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint897.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint897.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint897.llimit = new MFFloat(new float[0,0,0]);
Shape Shape898 = createNode("Shape");
LineSet LineSet899 = createNode("LineSet");
LineSet899.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate900 = createNode("Coordinate");
Coordinate900.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet899.coord = Coordinate900;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4
ColorRGBA ColorRGBA901 = createNode("ColorRGBA");
ColorRGBA901.USE = "HAnimSegmentLineColorRGBA";
LineSet899.color = ColorRGBA901;

Shape898.geometry = LineSet899;

HAnimJoint897.child = new undefined();

HAnimJoint897.child[0] = Shape898;

HAnimJoint HAnimJoint902 = createNode("HAnimJoint");
HAnimJoint902.name = "l_metacarpophalangeal_4";
HAnimJoint902.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint902.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint902.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint902.llimit = new MFFloat(new float[0,0,0]);
Shape Shape903 = createNode("Shape");
LineSet LineSet904 = createNode("LineSet");
LineSet904.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate905 = createNode("Coordinate");
Coordinate905.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet904.coord = Coordinate905;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4
ColorRGBA ColorRGBA906 = createNode("ColorRGBA");
ColorRGBA906.USE = "HAnimSegmentLineColorRGBA";
LineSet904.color = ColorRGBA906;

Shape903.geometry = LineSet904;

HAnimJoint902.child = new undefined();

HAnimJoint902.child[0] = Shape903;

HAnimJoint HAnimJoint907 = createNode("HAnimJoint");
HAnimJoint907.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint907.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint907.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint907.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint907.llimit = new MFFloat(new float[0,0,0]);
Shape Shape908 = createNode("Shape");
LineSet LineSet909 = createNode("LineSet");
LineSet909.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate910 = createNode("Coordinate");
Coordinate910.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet909.coord = Coordinate910;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4
ColorRGBA ColorRGBA911 = createNode("ColorRGBA");
ColorRGBA911.USE = "HAnimSegmentLineColorRGBA";
LineSet909.color = ColorRGBA911;

Shape908.geometry = LineSet909;

HAnimJoint907.child = new undefined();

HAnimJoint907.child[0] = Shape908;

HAnimSite HAnimSite912 = createNode("HAnimSite");
HAnimSite912.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite912.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite912.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor913 = createNode("TouchSensor");
TouchSensor913.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite912.children = new MFNode();

HAnimSite912.children[0] = TouchSensor913;

Shape Shape914 = createNode("Shape");
Shape914.USE = "HAnimSiteShape";
HAnimSite912.children[1] = Shape914;

HAnimJoint907.child[1] = HAnimSite912;

HAnimJoint HAnimJoint915 = createNode("HAnimJoint");
HAnimJoint915.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint915.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint915.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint915.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint915.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint907.children[2] = HAnimJoint915;

HAnimJoint902.children[1] = HAnimJoint907;

HAnimJoint897.children[1] = HAnimJoint902;

HAnimJoint885.children[3] = HAnimJoint897;

HAnimJoint HAnimJoint916 = createNode("HAnimJoint");
HAnimJoint916.name = "l_carpometacarpal_5";
HAnimJoint916.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint916.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint916.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint916.llimit = new MFFloat(new float[0,0,0]);
Shape Shape917 = createNode("Shape");
LineSet LineSet918 = createNode("LineSet");
LineSet918.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate919 = createNode("Coordinate");
Coordinate919.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet918.coord = Coordinate919;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5
ColorRGBA ColorRGBA920 = createNode("ColorRGBA");
ColorRGBA920.USE = "HAnimSegmentLineColorRGBA";
LineSet918.color = ColorRGBA920;

Shape917.geometry = LineSet918;

HAnimJoint916.child = new undefined();

HAnimJoint916.child[0] = Shape917;

HAnimJoint HAnimJoint921 = createNode("HAnimJoint");
HAnimJoint921.name = "l_metacarpophalangeal_5";
HAnimJoint921.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint921.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint921.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint921.llimit = new MFFloat(new float[0,0,0]);
Shape Shape922 = createNode("Shape");
LineSet LineSet923 = createNode("LineSet");
LineSet923.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate924 = createNode("Coordinate");
Coordinate924.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet923.coord = Coordinate924;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5
ColorRGBA ColorRGBA925 = createNode("ColorRGBA");
ColorRGBA925.USE = "HAnimSegmentLineColorRGBA";
LineSet923.color = ColorRGBA925;

Shape922.geometry = LineSet923;

HAnimJoint921.child = new undefined();

HAnimJoint921.child[0] = Shape922;

HAnimJoint HAnimJoint926 = createNode("HAnimJoint");
HAnimJoint926.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint926.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint926.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint926.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint926.llimit = new MFFloat(new float[0,0,0]);
Shape Shape927 = createNode("Shape");
LineSet LineSet928 = createNode("LineSet");
LineSet928.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate929 = createNode("Coordinate");
Coordinate929.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet928.coord = Coordinate929;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5
ColorRGBA ColorRGBA930 = createNode("ColorRGBA");
ColorRGBA930.USE = "HAnimSegmentLineColorRGBA";
LineSet928.color = ColorRGBA930;

Shape927.geometry = LineSet928;

HAnimJoint926.child = new undefined();

HAnimJoint926.child[0] = Shape927;

HAnimSite HAnimSite931 = createNode("HAnimSite");
HAnimSite931.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite931.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite931.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor932 = createNode("TouchSensor");
TouchSensor932.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite931.children = new MFNode();

HAnimSite931.children[0] = TouchSensor932;

Shape Shape933 = createNode("Shape");
Shape933.USE = "HAnimSiteShape";
HAnimSite931.children[1] = Shape933;

HAnimJoint926.child[1] = HAnimSite931;

HAnimJoint HAnimJoint934 = createNode("HAnimJoint");
HAnimJoint934.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint934.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint934.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint934.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint934.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint926.children[2] = HAnimJoint934;

HAnimJoint921.children[1] = HAnimJoint926;

HAnimJoint916.children[1] = HAnimJoint921;

HAnimJoint885.children[4] = HAnimJoint916;

HAnimJoint792.children[7] = HAnimJoint885;

HAnimJoint784.children[2] = HAnimJoint792;

HAnimJoint767.children[5] = HAnimJoint784;

HAnimJoint756.children[3] = HAnimJoint767;

HAnimJoint751.children[1] = HAnimJoint756;

HAnimJoint583.children[16] = HAnimJoint751;

HAnimJoint HAnimJoint935 = createNode("HAnimJoint");
HAnimJoint935.name = "r_sternoclavicular";
HAnimJoint935.DEF = "hanim_r_sternoclavicular";
HAnimJoint935.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint935.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint935.llimit = new MFFloat(new float[0,0,0]);
Shape Shape936 = createNode("Shape");
LineSet LineSet937 = createNode("LineSet");
LineSet937.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate938 = createNode("Coordinate");
Coordinate938.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet937.coord = Coordinate938;

//from r_sternoclavicular to r_acromioclavicular
ColorRGBA ColorRGBA939 = createNode("ColorRGBA");
ColorRGBA939.USE = "HAnimSegmentLineColorRGBA";
LineSet937.color = ColorRGBA939;

Shape936.geometry = LineSet937;

HAnimJoint935.child = new undefined();

HAnimJoint935.child[0] = Shape936;

HAnimJoint HAnimJoint940 = createNode("HAnimJoint");
HAnimJoint940.name = "r_acromioclavicular";
HAnimJoint940.DEF = "hanim_r_acromioclavicular";
HAnimJoint940.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint940.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint940.llimit = new MFFloat(new float[0,0,0]);
Shape Shape941 = createNode("Shape");
LineSet LineSet942 = createNode("LineSet");
LineSet942.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate943 = createNode("Coordinate");
Coordinate943.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet942.coord = Coordinate943;

//from r_acromioclavicular to r_shoulder
ColorRGBA ColorRGBA944 = createNode("ColorRGBA");
ColorRGBA944.USE = "HAnimSegmentLineColorRGBA";
LineSet942.color = ColorRGBA944;

Shape941.geometry = LineSet942;

HAnimJoint940.child = new undefined();

HAnimJoint940.child[0] = Shape941;

HAnimSite HAnimSite945 = createNode("HAnimSite");
HAnimSite945.name = "r_bideltoid_pt";
HAnimSite945.DEF = "hanim_r_bideltoid_pt";
HAnimSite945.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor946 = createNode("TouchSensor");
TouchSensor946.description = "HAnimSite r_bideltoid_pt";
HAnimSite945.children = new MFNode();

HAnimSite945.children[0] = TouchSensor946;

Shape Shape947 = createNode("Shape");
Shape947.USE = "HAnimSiteShape";
HAnimSite945.children[1] = Shape947;

HAnimJoint940.child[1] = HAnimSite945;

HAnimSite HAnimSite948 = createNode("HAnimSite");
HAnimSite948.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite948.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite948.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor949 = createNode("TouchSensor");
TouchSensor949.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite948.children = new MFNode();

HAnimSite948.children[0] = TouchSensor949;

Shape Shape950 = createNode("Shape");
Shape950.USE = "HAnimSiteShape";
HAnimSite948.children[1] = Shape950;

HAnimJoint940.child[2] = HAnimSite948;

HAnimJoint HAnimJoint951 = createNode("HAnimJoint");
HAnimJoint951.name = "r_shoulder";
HAnimJoint951.DEF = "hanim_r_shoulder";
HAnimJoint951.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint951.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint951.llimit = new MFFloat(new float[0,0,0]);
Shape Shape952 = createNode("Shape");
LineSet LineSet953 = createNode("LineSet");
LineSet953.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate954 = createNode("Coordinate");
Coordinate954.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet953.coord = Coordinate954;

//from r_shoulder to r_elbow
ColorRGBA ColorRGBA955 = createNode("ColorRGBA");
ColorRGBA955.USE = "HAnimSegmentLineColorRGBA";
LineSet953.color = ColorRGBA955;

Shape952.geometry = LineSet953;

HAnimJoint951.child = new undefined();

HAnimJoint951.child[0] = Shape952;

HAnimSite HAnimSite956 = createNode("HAnimSite");
HAnimSite956.name = "r_humeral_medial_epicondyles_pt";
HAnimSite956.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite956.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor957 = createNode("TouchSensor");
TouchSensor957.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite956.children = new MFNode();

HAnimSite956.children[0] = TouchSensor957;

Shape Shape958 = createNode("Shape");
Shape958.USE = "HAnimSiteShape";
HAnimSite956.children[1] = Shape958;

HAnimJoint951.child[1] = HAnimSite956;

HAnimSite HAnimSite959 = createNode("HAnimSite");
HAnimSite959.name = "r_olecranon_pt";
HAnimSite959.DEF = "hanim_r_olecranon_pt";
HAnimSite959.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor960 = createNode("TouchSensor");
TouchSensor960.description = "HAnimSite r_olecranon_pt";
HAnimSite959.children = new MFNode();

HAnimSite959.children[0] = TouchSensor960;

Shape Shape961 = createNode("Shape");
Shape961.USE = "HAnimSiteShape";
HAnimSite959.children[1] = Shape961;

HAnimJoint951.child[2] = HAnimSite959;

HAnimSite HAnimSite962 = createNode("HAnimSite");
HAnimSite962.name = "r_radial_styloid_pt";
HAnimSite962.DEF = "hanim_r_radial_styloid_pt";
HAnimSite962.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor963 = createNode("TouchSensor");
TouchSensor963.description = "HAnimSite r_radial_styloid_pt";
HAnimSite962.children = new MFNode();

HAnimSite962.children[0] = TouchSensor963;

Shape Shape964 = createNode("Shape");
Shape964.USE = "HAnimSiteShape";
HAnimSite962.children[1] = Shape964;

HAnimJoint951.child[3] = HAnimSite962;

HAnimSite HAnimSite965 = createNode("HAnimSite");
HAnimSite965.name = "r_radiale_pt";
HAnimSite965.DEF = "hanim_r_radiale_pt";
HAnimSite965.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor966 = createNode("TouchSensor");
TouchSensor966.description = "HAnimSite r_radiale_pt";
HAnimSite965.children = new MFNode();

HAnimSite965.children[0] = TouchSensor966;

Shape Shape967 = createNode("Shape");
Shape967.USE = "HAnimSiteShape";
HAnimSite965.children[1] = Shape967;

HAnimJoint951.child[4] = HAnimSite965;

HAnimJoint HAnimJoint968 = createNode("HAnimJoint");
HAnimJoint968.name = "r_elbow";
HAnimJoint968.DEF = "hanim_r_elbow";
HAnimJoint968.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint968.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint968.llimit = new MFFloat(new float[0,0,0]);
Shape Shape969 = createNode("Shape");
LineSet LineSet970 = createNode("LineSet");
LineSet970.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate971 = createNode("Coordinate");
Coordinate971.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet970.coord = Coordinate971;

//from r_elbow to r_radiocarpal
ColorRGBA ColorRGBA972 = createNode("ColorRGBA");
ColorRGBA972.USE = "HAnimSegmentLineColorRGBA";
LineSet970.color = ColorRGBA972;

Shape969.geometry = LineSet970;

HAnimJoint968.child = new undefined();

HAnimJoint968.child[0] = Shape969;

HAnimSite HAnimSite973 = createNode("HAnimSite");
HAnimSite973.name = "r_ulnar_styloid_pt";
HAnimSite973.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite973.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor974 = createNode("TouchSensor");
TouchSensor974.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite973.children = new MFNode();

HAnimSite973.children[0] = TouchSensor974;

Shape Shape975 = createNode("Shape");
Shape975.USE = "HAnimSiteShape";
HAnimSite973.children[1] = Shape975;

HAnimJoint968.child[1] = HAnimSite973;

HAnimJoint HAnimJoint976 = createNode("HAnimJoint");
HAnimJoint976.name = "r_radiocarpal";
HAnimJoint976.DEF = "hanim_r_radiocarpal";
HAnimJoint976.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint976.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint976.llimit = new MFFloat(new float[0,0,0]);
Shape Shape977 = createNode("Shape");
LineSet LineSet978 = createNode("LineSet");
LineSet978.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate979 = createNode("Coordinate");
Coordinate979.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet978.coord = Coordinate979;

//from r_radiocarpal to r_midcarpal_1
ColorRGBA ColorRGBA980 = createNode("ColorRGBA");
ColorRGBA980.USE = "HAnimSegmentLineColorRGBA";
LineSet978.color = ColorRGBA980;

Shape977.geometry = LineSet978;

HAnimJoint976.child = new undefined();

HAnimJoint976.child[0] = Shape977;

Shape Shape981 = createNode("Shape");
LineSet LineSet982 = createNode("LineSet");
LineSet982.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate983 = createNode("Coordinate");
Coordinate983.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet982.coord = Coordinate983;

//from r_radiocarpal to r_midcarpal_2
ColorRGBA ColorRGBA984 = createNode("ColorRGBA");
ColorRGBA984.USE = "HAnimSegmentLineColorRGBA";
LineSet982.color = ColorRGBA984;

Shape981.geometry = LineSet982;

HAnimJoint976.child[1] = Shape981;

Shape Shape985 = createNode("Shape");
LineSet LineSet986 = createNode("LineSet");
LineSet986.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate987 = createNode("Coordinate");
Coordinate987.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet986.coord = Coordinate987;

//from r_radiocarpal to r_midcarpal_3
ColorRGBA ColorRGBA988 = createNode("ColorRGBA");
ColorRGBA988.USE = "HAnimSegmentLineColorRGBA";
LineSet986.color = ColorRGBA988;

Shape985.geometry = LineSet986;

HAnimJoint976.child[2] = Shape985;

Shape Shape989 = createNode("Shape");
LineSet LineSet990 = createNode("LineSet");
LineSet990.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate991 = createNode("Coordinate");
Coordinate991.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet990.coord = Coordinate991;

//from r_radiocarpal to r_midcarpal_4_5
ColorRGBA ColorRGBA992 = createNode("ColorRGBA");
ColorRGBA992.USE = "HAnimSegmentLineColorRGBA";
LineSet990.color = ColorRGBA992;

Shape989.geometry = LineSet990;

HAnimJoint976.child[3] = Shape989;

HAnimJoint HAnimJoint993 = createNode("HAnimJoint");
HAnimJoint993.name = "r_midcarpal_1";
HAnimJoint993.DEF = "hanim_r_midcarpal_1";
HAnimJoint993.center = new SFVec3f(new float[0,1,0]);
HAnimJoint993.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint993.llimit = new MFFloat(new float[0,0,0]);
Shape Shape994 = createNode("Shape");
LineSet LineSet995 = createNode("LineSet");
LineSet995.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate996 = createNode("Coordinate");
Coordinate996.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473]);
LineSet995.coord = Coordinate996;

//from r_midcarpal_1 to r_carpometacarpal_1
ColorRGBA ColorRGBA997 = createNode("ColorRGBA");
ColorRGBA997.USE = "HAnimSegmentLineColorRGBA";
LineSet995.color = ColorRGBA997;

Shape994.geometry = LineSet995;

HAnimJoint993.child = new undefined();

HAnimJoint993.child[0] = Shape994;

HAnimJoint HAnimJoint998 = createNode("HAnimJoint");
HAnimJoint998.name = "r_carpometacarpal_1";
HAnimJoint998.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint998.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint998.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint998.llimit = new MFFloat(new float[0,0,0]);
Shape Shape999 = createNode("Shape");
LineSet LineSet1000 = createNode("LineSet");
LineSet1000.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1001 = createNode("Coordinate");
Coordinate1001.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1000.coord = Coordinate1001;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1
ColorRGBA ColorRGBA1002 = createNode("ColorRGBA");
ColorRGBA1002.USE = "HAnimSegmentLineColorRGBA";
LineSet1000.color = ColorRGBA1002;

Shape999.geometry = LineSet1000;

HAnimJoint998.child = new undefined();

HAnimJoint998.child[0] = Shape999;

HAnimJoint HAnimJoint1003 = createNode("HAnimJoint");
HAnimJoint1003.name = "r_metacarpophalangeal_1";
HAnimJoint1003.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1003.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint1003.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1003.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1004 = createNode("Shape");
LineSet LineSet1005 = createNode("LineSet");
LineSet1005.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1006 = createNode("Coordinate");
Coordinate1006.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1005.coord = Coordinate1006;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1
ColorRGBA ColorRGBA1007 = createNode("ColorRGBA");
ColorRGBA1007.USE = "HAnimSegmentLineColorRGBA";
LineSet1005.color = ColorRGBA1007;

Shape1004.geometry = LineSet1005;

HAnimJoint1003.child = new undefined();

HAnimJoint1003.child[0] = Shape1004;

HAnimSite HAnimSite1008 = createNode("HAnimSite");
HAnimSite1008.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1008.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite1008.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1009 = createNode("TouchSensor");
TouchSensor1009.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1008.children = new MFNode();

HAnimSite1008.children[0] = TouchSensor1009;

Shape Shape1010 = createNode("Shape");
Shape1010.USE = "HAnimSiteShape";
HAnimSite1008.children[1] = Shape1010;

HAnimJoint1003.child[1] = HAnimSite1008;

HAnimJoint HAnimJoint1011 = createNode("HAnimJoint");
HAnimJoint1011.name = "r_carpal_interphalangeal_1";
HAnimJoint1011.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1011.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1011.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1011.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1003.children[2] = HAnimJoint1011;

HAnimJoint998.children[1] = HAnimJoint1003;

HAnimJoint993.children[1] = HAnimJoint998;

HAnimJoint976.children[4] = HAnimJoint993;

HAnimJoint HAnimJoint1012 = createNode("HAnimJoint");
HAnimJoint1012.name = "r_midcarpal_2";
HAnimJoint1012.DEF = "hanim_r_midcarpal_2";
HAnimJoint1012.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1012.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1012.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1013 = createNode("Shape");
LineSet LineSet1014 = createNode("LineSet");
LineSet1014.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate1015 = createNode("Coordinate");
Coordinate1015.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218]);
LineSet1014.coord = Coordinate1015;

//from r_midcarpal_2 to r_carpometacarpal_2
ColorRGBA ColorRGBA1016 = createNode("ColorRGBA");
ColorRGBA1016.USE = "HAnimSegmentLineColorRGBA";
LineSet1014.color = ColorRGBA1016;

Shape1013.geometry = LineSet1014;

HAnimJoint1012.child = new undefined();

HAnimJoint1012.child[0] = Shape1013;

HAnimSite HAnimSite1017 = createNode("HAnimSite");
HAnimSite1017.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1017.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1017.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor1018 = createNode("TouchSensor");
TouchSensor1018.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite1017.children = new MFNode();

HAnimSite1017.children[0] = TouchSensor1018;

Shape Shape1019 = createNode("Shape");
Shape1019.USE = "HAnimSiteShape";
HAnimSite1017.children[1] = Shape1019;

HAnimJoint1012.child[1] = HAnimSite1017;

HAnimJoint HAnimJoint1020 = createNode("HAnimJoint");
HAnimJoint1020.name = "r_carpometacarpal_2";
HAnimJoint1020.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1020.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1020.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1020.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1021 = createNode("Shape");
LineSet LineSet1022 = createNode("LineSet");
LineSet1022.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1023 = createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1022.coord = Coordinate1023;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2
ColorRGBA ColorRGBA1024 = createNode("ColorRGBA");
ColorRGBA1024.USE = "HAnimSegmentLineColorRGBA";
LineSet1022.color = ColorRGBA1024;

Shape1021.geometry = LineSet1022;

HAnimJoint1020.child = new undefined();

HAnimJoint1020.child[0] = Shape1021;

HAnimJoint HAnimJoint1025 = createNode("HAnimJoint");
HAnimJoint1025.name = "r_metacarpophalangeal_2";
HAnimJoint1025.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1025.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1025.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1025.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1026 = createNode("Shape");
LineSet LineSet1027 = createNode("LineSet");
LineSet1027.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1028 = createNode("Coordinate");
Coordinate1028.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1027.coord = Coordinate1028;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2
ColorRGBA ColorRGBA1029 = createNode("ColorRGBA");
ColorRGBA1029.USE = "HAnimSegmentLineColorRGBA";
LineSet1027.color = ColorRGBA1029;

Shape1026.geometry = LineSet1027;

HAnimJoint1025.child = new undefined();

HAnimJoint1025.child[0] = Shape1026;

HAnimJoint HAnimJoint1030 = createNode("HAnimJoint");
HAnimJoint1030.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1030.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1030.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1030.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1030.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1031 = createNode("Shape");
LineSet LineSet1032 = createNode("LineSet");
LineSet1032.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1033 = createNode("Coordinate");
Coordinate1033.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1032.coord = Coordinate1033;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2
ColorRGBA ColorRGBA1034 = createNode("ColorRGBA");
ColorRGBA1034.USE = "HAnimSegmentLineColorRGBA";
LineSet1032.color = ColorRGBA1034;

Shape1031.geometry = LineSet1032;

HAnimJoint1030.child = new undefined();

HAnimJoint1030.child[0] = Shape1031;

HAnimSite HAnimSite1035 = createNode("HAnimSite");
HAnimSite1035.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1035.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite1035.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1036 = createNode("TouchSensor");
TouchSensor1036.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1035.children = new MFNode();

HAnimSite1035.children[0] = TouchSensor1036;

Shape Shape1037 = createNode("Shape");
Shape1037.USE = "HAnimSiteShape";
HAnimSite1035.children[1] = Shape1037;

HAnimJoint1030.child[1] = HAnimSite1035;

HAnimSite HAnimSite1038 = createNode("HAnimSite");
HAnimSite1038.name = "r_dactylion_pt";
HAnimSite1038.DEF = "hanim_r_dactylion_pt";
HAnimSite1038.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor1039 = createNode("TouchSensor");
TouchSensor1039.description = "HAnimSite r_dactylion_pt";
HAnimSite1038.children = new MFNode();

HAnimSite1038.children[0] = TouchSensor1039;

Shape Shape1040 = createNode("Shape");
Shape1040.USE = "HAnimSiteShape";
HAnimSite1038.children[1] = Shape1040;

HAnimJoint1030.child[2] = HAnimSite1038;

HAnimJoint HAnimJoint1041 = createNode("HAnimJoint");
HAnimJoint1041.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1041.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1041.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1041.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1041.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1030.children[3] = HAnimJoint1041;

HAnimJoint1025.children[1] = HAnimJoint1030;

HAnimJoint1020.children[1] = HAnimJoint1025;

HAnimJoint1012.children[2] = HAnimJoint1020;

HAnimJoint976.children[5] = HAnimJoint1012;

HAnimJoint HAnimJoint1042 = createNode("HAnimJoint");
HAnimJoint1042.name = "r_midcarpal_3";
HAnimJoint1042.DEF = "hanim_r_midcarpal_3";
HAnimJoint1042.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1042.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1042.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1043 = createNode("Shape");
LineSet LineSet1044 = createNode("LineSet");
LineSet1044.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate1045 = createNode("Coordinate");
Coordinate1045.point = new MFVec3f(new float[-0.1972,0.806,-0.0468]);
LineSet1044.coord = Coordinate1045;

//from r_midcarpal_3 to r_carpometacarpal_3
ColorRGBA ColorRGBA1046 = createNode("ColorRGBA");
ColorRGBA1046.USE = "HAnimSegmentLineColorRGBA";
LineSet1044.color = ColorRGBA1046;

Shape1043.geometry = LineSet1044;

HAnimJoint1042.child = new undefined();

HAnimJoint1042.child[0] = Shape1043;

HAnimSite HAnimSite1047 = createNode("HAnimSite");
HAnimSite1047.name = "r_metacarpal_phalanx_3_pt";
HAnimSite1047.DEF = "hanim_r_metacarpal_phalanx_3_pt";
HAnimSite1047.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1048 = createNode("TouchSensor");
TouchSensor1048.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite1047.children = new MFNode();

HAnimSite1047.children[0] = TouchSensor1048;

Shape Shape1049 = createNode("Shape");
Shape1049.USE = "HAnimSiteShape";
HAnimSite1047.children[1] = Shape1049;

HAnimJoint1042.child[1] = HAnimSite1047;

HAnimJoint HAnimJoint1050 = createNode("HAnimJoint");
HAnimJoint1050.name = "r_carpometacarpal_3";
HAnimJoint1050.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1050.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1050.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1050.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1051 = createNode("Shape");
LineSet LineSet1052 = createNode("LineSet");
LineSet1052.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1053 = createNode("Coordinate");
Coordinate1053.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1052.coord = Coordinate1053;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3
ColorRGBA ColorRGBA1054 = createNode("ColorRGBA");
ColorRGBA1054.USE = "HAnimSegmentLineColorRGBA";
LineSet1052.color = ColorRGBA1054;

Shape1051.geometry = LineSet1052;

HAnimJoint1050.child = new undefined();

HAnimJoint1050.child[0] = Shape1051;

HAnimJoint HAnimJoint1055 = createNode("HAnimJoint");
HAnimJoint1055.name = "r_metacarpophalangeal_3";
HAnimJoint1055.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1055.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1055.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1055.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1056 = createNode("Shape");
LineSet LineSet1057 = createNode("LineSet");
LineSet1057.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1058 = createNode("Coordinate");
Coordinate1058.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1057.coord = Coordinate1058;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3
ColorRGBA ColorRGBA1059 = createNode("ColorRGBA");
ColorRGBA1059.USE = "HAnimSegmentLineColorRGBA";
LineSet1057.color = ColorRGBA1059;

Shape1056.geometry = LineSet1057;

HAnimJoint1055.child = new undefined();

HAnimJoint1055.child[0] = Shape1056;

HAnimJoint HAnimJoint1060 = createNode("HAnimJoint");
HAnimJoint1060.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1060.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1060.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1060.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1060.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1061 = createNode("Shape");
LineSet LineSet1062 = createNode("LineSet");
LineSet1062.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1063 = createNode("Coordinate");
Coordinate1063.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1062.coord = Coordinate1063;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3
ColorRGBA ColorRGBA1064 = createNode("ColorRGBA");
ColorRGBA1064.USE = "HAnimSegmentLineColorRGBA";
LineSet1062.color = ColorRGBA1064;

Shape1061.geometry = LineSet1062;

HAnimJoint1060.child = new undefined();

HAnimJoint1060.child[0] = Shape1061;

HAnimSite HAnimSite1065 = createNode("HAnimSite");
HAnimSite1065.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1065.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite1065.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1066 = createNode("TouchSensor");
TouchSensor1066.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1065.children = new MFNode();

HAnimSite1065.children[0] = TouchSensor1066;

Shape Shape1067 = createNode("Shape");
Shape1067.USE = "HAnimSiteShape";
HAnimSite1065.children[1] = Shape1067;

HAnimJoint1060.child[1] = HAnimSite1065;

HAnimJoint HAnimJoint1068 = createNode("HAnimJoint");
HAnimJoint1068.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1068.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1068.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1068.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1068.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1060.children[2] = HAnimJoint1068;

HAnimJoint1055.children[1] = HAnimJoint1060;

HAnimJoint1050.children[1] = HAnimJoint1055;

HAnimJoint1042.children[2] = HAnimJoint1050;

HAnimJoint976.children[6] = HAnimJoint1042;

HAnimJoint HAnimJoint1069 = createNode("HAnimJoint");
HAnimJoint1069.name = "r_midcarpal_4_5";
HAnimJoint1069.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1069.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1069.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1069.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1070 = createNode("Shape");
LineSet LineSet1071 = createNode("LineSet");
LineSet1071.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate1072 = createNode("Coordinate");
Coordinate1072.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732]);
LineSet1071.coord = Coordinate1072;

//from r_midcarpal_4_5 to r_carpometacarpal_4
ColorRGBA ColorRGBA1073 = createNode("ColorRGBA");
ColorRGBA1073.USE = "HAnimSegmentLineColorRGBA";
LineSet1071.color = ColorRGBA1073;

Shape1070.geometry = LineSet1071;

HAnimJoint1069.child = new undefined();

HAnimJoint1069.child[0] = Shape1070;

Shape Shape1074 = createNode("Shape");
LineSet LineSet1075 = createNode("LineSet");
LineSet1075.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate1076 = createNode("Coordinate");
Coordinate1076.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975]);
LineSet1075.coord = Coordinate1076;

//from r_midcarpal_4_5 to r_carpometacarpal_5
ColorRGBA ColorRGBA1077 = createNode("ColorRGBA");
ColorRGBA1077.USE = "HAnimSegmentLineColorRGBA";
LineSet1075.color = ColorRGBA1077;

Shape1074.geometry = LineSet1075;

HAnimJoint1069.child[1] = Shape1074;

HAnimSite HAnimSite1078 = createNode("HAnimSite");
HAnimSite1078.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1078.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1078.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor1079 = createNode("TouchSensor");
TouchSensor1079.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite1078.children = new MFNode();

HAnimSite1078.children[0] = TouchSensor1079;

Shape Shape1080 = createNode("Shape");
Shape1080.USE = "HAnimSiteShape";
HAnimSite1078.children[1] = Shape1080;

HAnimJoint1069.child[2] = HAnimSite1078;

HAnimJoint HAnimJoint1081 = createNode("HAnimJoint");
HAnimJoint1081.name = "r_carpometacarpal_4";
HAnimJoint1081.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1081.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1081.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1081.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1082 = createNode("Shape");
LineSet LineSet1083 = createNode("LineSet");
LineSet1083.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1084 = createNode("Coordinate");
Coordinate1084.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1083.coord = Coordinate1084;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4
ColorRGBA ColorRGBA1085 = createNode("ColorRGBA");
ColorRGBA1085.USE = "HAnimSegmentLineColorRGBA";
LineSet1083.color = ColorRGBA1085;

Shape1082.geometry = LineSet1083;

HAnimJoint1081.child = new undefined();

HAnimJoint1081.child[0] = Shape1082;

HAnimJoint HAnimJoint1086 = createNode("HAnimJoint");
HAnimJoint1086.name = "r_metacarpophalangeal_4";
HAnimJoint1086.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1086.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1086.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1086.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1087 = createNode("Shape");
LineSet LineSet1088 = createNode("LineSet");
LineSet1088.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1089 = createNode("Coordinate");
Coordinate1089.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1088.coord = Coordinate1089;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4
ColorRGBA ColorRGBA1090 = createNode("ColorRGBA");
ColorRGBA1090.USE = "HAnimSegmentLineColorRGBA";
LineSet1088.color = ColorRGBA1090;

Shape1087.geometry = LineSet1088;

HAnimJoint1086.child = new undefined();

HAnimJoint1086.child[0] = Shape1087;

HAnimJoint HAnimJoint1091 = createNode("HAnimJoint");
HAnimJoint1091.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1091.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1091.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1091.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1091.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1092 = createNode("Shape");
LineSet LineSet1093 = createNode("LineSet");
LineSet1093.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1094 = createNode("Coordinate");
Coordinate1094.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1093.coord = Coordinate1094;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4
ColorRGBA ColorRGBA1095 = createNode("ColorRGBA");
ColorRGBA1095.USE = "HAnimSegmentLineColorRGBA";
LineSet1093.color = ColorRGBA1095;

Shape1092.geometry = LineSet1093;

HAnimJoint1091.child = new undefined();

HAnimJoint1091.child[0] = Shape1092;

HAnimSite HAnimSite1096 = createNode("HAnimSite");
HAnimSite1096.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1096.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite1096.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1097 = createNode("TouchSensor");
TouchSensor1097.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1096.children = new MFNode();

HAnimSite1096.children[0] = TouchSensor1097;

Shape Shape1098 = createNode("Shape");
Shape1098.USE = "HAnimSiteShape";
HAnimSite1096.children[1] = Shape1098;

HAnimJoint1091.child[1] = HAnimSite1096;

HAnimJoint HAnimJoint1099 = createNode("HAnimJoint");
HAnimJoint1099.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1099.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1099.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1099.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1099.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1091.children[2] = HAnimJoint1099;

HAnimJoint1086.children[1] = HAnimJoint1091;

HAnimJoint1081.children[1] = HAnimJoint1086;

HAnimJoint1069.children[3] = HAnimJoint1081;

HAnimJoint HAnimJoint1100 = createNode("HAnimJoint");
HAnimJoint1100.name = "r_carpometacarpal_5";
HAnimJoint1100.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1100.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1100.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1100.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1101 = createNode("Shape");
LineSet LineSet1102 = createNode("LineSet");
LineSet1102.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1103 = createNode("Coordinate");
Coordinate1103.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1102.coord = Coordinate1103;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5
ColorRGBA ColorRGBA1104 = createNode("ColorRGBA");
ColorRGBA1104.USE = "HAnimSegmentLineColorRGBA";
LineSet1102.color = ColorRGBA1104;

Shape1101.geometry = LineSet1102;

HAnimJoint1100.child = new undefined();

HAnimJoint1100.child[0] = Shape1101;

HAnimJoint HAnimJoint1105 = createNode("HAnimJoint");
HAnimJoint1105.name = "r_metacarpophalangeal_5";
HAnimJoint1105.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1105.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1105.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1105.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1106 = createNode("Shape");
LineSet LineSet1107 = createNode("LineSet");
LineSet1107.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1108 = createNode("Coordinate");
Coordinate1108.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1107.coord = Coordinate1108;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5
ColorRGBA ColorRGBA1109 = createNode("ColorRGBA");
ColorRGBA1109.USE = "HAnimSegmentLineColorRGBA";
LineSet1107.color = ColorRGBA1109;

Shape1106.geometry = LineSet1107;

HAnimJoint1105.child = new undefined();

HAnimJoint1105.child[0] = Shape1106;

HAnimJoint HAnimJoint1110 = createNode("HAnimJoint");
HAnimJoint1110.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1110.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1110.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1110.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1111 = createNode("Shape");
LineSet LineSet1112 = createNode("LineSet");
LineSet1112.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1113 = createNode("Coordinate");
Coordinate1113.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1112.coord = Coordinate1113;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5
ColorRGBA ColorRGBA1114 = createNode("ColorRGBA");
ColorRGBA1114.USE = "HAnimSegmentLineColorRGBA";
LineSet1112.color = ColorRGBA1114;

Shape1111.geometry = LineSet1112;

HAnimJoint1110.child = new undefined();

HAnimJoint1110.child[0] = Shape1111;

HAnimSite HAnimSite1115 = createNode("HAnimSite");
HAnimSite1115.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1115.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite1115.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1116 = createNode("TouchSensor");
TouchSensor1116.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1115.children = new MFNode();

HAnimSite1115.children[0] = TouchSensor1116;

Shape Shape1117 = createNode("Shape");
Shape1117.USE = "HAnimSiteShape";
HAnimSite1115.children[1] = Shape1117;

HAnimJoint1110.child[1] = HAnimSite1115;

HAnimJoint HAnimJoint1118 = createNode("HAnimJoint");
HAnimJoint1118.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1118.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1118.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1118.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1118.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1110.children[2] = HAnimJoint1118;

HAnimJoint1105.children[1] = HAnimJoint1110;

HAnimJoint1100.children[1] = HAnimJoint1105;

HAnimJoint1069.children[4] = HAnimJoint1100;

HAnimJoint976.children[7] = HAnimJoint1069;

HAnimJoint968.children[2] = HAnimJoint976;

HAnimJoint951.children[5] = HAnimJoint968;

HAnimJoint940.children[3] = HAnimJoint951;

HAnimJoint935.children[1] = HAnimJoint940;

HAnimJoint583.children[17] = HAnimJoint935;

HAnimJoint572.children[3] = HAnimJoint583;

HAnimJoint567.children[1] = HAnimJoint572;

HAnimJoint562.children[1] = HAnimJoint567;

HAnimJoint557.children[1] = HAnimJoint562;

HAnimJoint549.children[2] = HAnimJoint557;

HAnimJoint532.children[5] = HAnimJoint549;

HAnimJoint527.children[1] = HAnimJoint532;

HAnimJoint522.children[1] = HAnimJoint527;

HAnimJoint511.children[3] = HAnimJoint522;

HAnimJoint503.children[2] = HAnimJoint511;

HAnimJoint498.children[1] = HAnimJoint503;

HAnimJoint493.children[1] = HAnimJoint498;

HAnimJoint488.children[1] = HAnimJoint493;

HAnimJoint474.children[4] = HAnimJoint488;

HAnimJoint469.children[1] = HAnimJoint474;

HAnimJoint464.children[1] = HAnimJoint469;

HAnimJoint39.children[16] = HAnimJoint464;

HAnimHumanoid38.joints = new MFNode();

HAnimHumanoid38.joints[0] = HAnimJoint39;

HAnimJoint HAnimJoint1119 = createNode("HAnimJoint");
HAnimJoint1119.USE = "hanim_humanoid_root";
HAnimHumanoid38.joints[1] = HAnimJoint1119;

HAnimJoint HAnimJoint1120 = createNode("HAnimJoint");
HAnimJoint1120.USE = "hanim_sacroiliac";
HAnimHumanoid38.joints[2] = HAnimJoint1120;

HAnimJoint HAnimJoint1121 = createNode("HAnimJoint");
HAnimJoint1121.USE = "hanim_l_hip";
HAnimHumanoid38.joints[3] = HAnimJoint1121;

HAnimJoint HAnimJoint1122 = createNode("HAnimJoint");
HAnimJoint1122.USE = "hanim_l_knee";
HAnimHumanoid38.joints[4] = HAnimJoint1122;

HAnimJoint HAnimJoint1123 = createNode("HAnimJoint");
HAnimJoint1123.USE = "hanim_l_talocrural";
HAnimHumanoid38.joints[5] = HAnimJoint1123;

HAnimJoint HAnimJoint1124 = createNode("HAnimJoint");
HAnimJoint1124.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid38.joints[6] = HAnimJoint1124;

HAnimJoint HAnimJoint1125 = createNode("HAnimJoint");
HAnimJoint1125.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid38.joints[7] = HAnimJoint1125;

HAnimJoint HAnimJoint1126 = createNode("HAnimJoint");
HAnimJoint1126.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid38.joints[8] = HAnimJoint1126;

HAnimJoint HAnimJoint1127 = createNode("HAnimJoint");
HAnimJoint1127.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid38.joints[9] = HAnimJoint1127;

HAnimJoint HAnimJoint1128 = createNode("HAnimJoint");
HAnimJoint1128.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid38.joints[10] = HAnimJoint1128;

HAnimJoint HAnimJoint1129 = createNode("HAnimJoint");
HAnimJoint1129.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid38.joints[11] = HAnimJoint1129;

HAnimJoint HAnimJoint1130 = createNode("HAnimJoint");
HAnimJoint1130.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid38.joints[12] = HAnimJoint1130;

HAnimJoint HAnimJoint1131 = createNode("HAnimJoint");
HAnimJoint1131.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid38.joints[13] = HAnimJoint1131;

HAnimJoint HAnimJoint1132 = createNode("HAnimJoint");
HAnimJoint1132.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[14] = HAnimJoint1132;

HAnimJoint HAnimJoint1133 = createNode("HAnimJoint");
HAnimJoint1133.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid38.joints[15] = HAnimJoint1133;

HAnimJoint HAnimJoint1134 = createNode("HAnimJoint");
HAnimJoint1134.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid38.joints[16] = HAnimJoint1134;

HAnimJoint HAnimJoint1135 = createNode("HAnimJoint");
HAnimJoint1135.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid38.joints[17] = HAnimJoint1135;

HAnimJoint HAnimJoint1136 = createNode("HAnimJoint");
HAnimJoint1136.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid38.joints[18] = HAnimJoint1136;

HAnimJoint HAnimJoint1137 = createNode("HAnimJoint");
HAnimJoint1137.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[19] = HAnimJoint1137;

HAnimJoint HAnimJoint1138 = createNode("HAnimJoint");
HAnimJoint1138.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid38.joints[20] = HAnimJoint1138;

HAnimJoint HAnimJoint1139 = createNode("HAnimJoint");
HAnimJoint1139.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid38.joints[21] = HAnimJoint1139;

HAnimJoint HAnimJoint1140 = createNode("HAnimJoint");
HAnimJoint1140.USE = "hanim_l_transversetarsal";
HAnimHumanoid38.joints[22] = HAnimJoint1140;

HAnimJoint HAnimJoint1141 = createNode("HAnimJoint");
HAnimJoint1141.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid38.joints[23] = HAnimJoint1141;

HAnimJoint HAnimJoint1142 = createNode("HAnimJoint");
HAnimJoint1142.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid38.joints[24] = HAnimJoint1142;

HAnimJoint HAnimJoint1143 = createNode("HAnimJoint");
HAnimJoint1143.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[25] = HAnimJoint1143;

HAnimJoint HAnimJoint1144 = createNode("HAnimJoint");
HAnimJoint1144.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid38.joints[26] = HAnimJoint1144;

HAnimJoint HAnimJoint1145 = createNode("HAnimJoint");
HAnimJoint1145.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid38.joints[27] = HAnimJoint1145;

HAnimJoint HAnimJoint1146 = createNode("HAnimJoint");
HAnimJoint1146.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid38.joints[28] = HAnimJoint1146;

HAnimJoint HAnimJoint1147 = createNode("HAnimJoint");
HAnimJoint1147.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[29] = HAnimJoint1147;

HAnimJoint HAnimJoint1148 = createNode("HAnimJoint");
HAnimJoint1148.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid38.joints[30] = HAnimJoint1148;

HAnimJoint HAnimJoint1149 = createNode("HAnimJoint");
HAnimJoint1149.USE = "hanim_r_hip";
HAnimHumanoid38.joints[31] = HAnimJoint1149;

HAnimJoint HAnimJoint1150 = createNode("HAnimJoint");
HAnimJoint1150.USE = "hanim_r_knee";
HAnimHumanoid38.joints[32] = HAnimJoint1150;

HAnimJoint HAnimJoint1151 = createNode("HAnimJoint");
HAnimJoint1151.USE = "hanim_r_talocrural";
HAnimHumanoid38.joints[33] = HAnimJoint1151;

HAnimJoint HAnimJoint1152 = createNode("HAnimJoint");
HAnimJoint1152.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid38.joints[34] = HAnimJoint1152;

HAnimJoint HAnimJoint1153 = createNode("HAnimJoint");
HAnimJoint1153.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid38.joints[35] = HAnimJoint1153;

HAnimJoint HAnimJoint1154 = createNode("HAnimJoint");
HAnimJoint1154.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid38.joints[36] = HAnimJoint1154;

HAnimJoint HAnimJoint1155 = createNode("HAnimJoint");
HAnimJoint1155.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid38.joints[37] = HAnimJoint1155;

HAnimJoint HAnimJoint1156 = createNode("HAnimJoint");
HAnimJoint1156.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid38.joints[38] = HAnimJoint1156;

HAnimJoint HAnimJoint1157 = createNode("HAnimJoint");
HAnimJoint1157.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid38.joints[39] = HAnimJoint1157;

HAnimJoint HAnimJoint1158 = createNode("HAnimJoint");
HAnimJoint1158.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid38.joints[40] = HAnimJoint1158;

HAnimJoint HAnimJoint1159 = createNode("HAnimJoint");
HAnimJoint1159.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid38.joints[41] = HAnimJoint1159;

HAnimJoint HAnimJoint1160 = createNode("HAnimJoint");
HAnimJoint1160.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[42] = HAnimJoint1160;

HAnimJoint HAnimJoint1161 = createNode("HAnimJoint");
HAnimJoint1161.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid38.joints[43] = HAnimJoint1161;

HAnimJoint HAnimJoint1162 = createNode("HAnimJoint");
HAnimJoint1162.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid38.joints[44] = HAnimJoint1162;

HAnimJoint HAnimJoint1163 = createNode("HAnimJoint");
HAnimJoint1163.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid38.joints[45] = HAnimJoint1163;

HAnimJoint HAnimJoint1164 = createNode("HAnimJoint");
HAnimJoint1164.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid38.joints[46] = HAnimJoint1164;

HAnimJoint HAnimJoint1165 = createNode("HAnimJoint");
HAnimJoint1165.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[47] = HAnimJoint1165;

HAnimJoint HAnimJoint1166 = createNode("HAnimJoint");
HAnimJoint1166.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid38.joints[48] = HAnimJoint1166;

HAnimJoint HAnimJoint1167 = createNode("HAnimJoint");
HAnimJoint1167.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid38.joints[49] = HAnimJoint1167;

HAnimJoint HAnimJoint1168 = createNode("HAnimJoint");
HAnimJoint1168.USE = "hanim_r_transversetarsal";
HAnimHumanoid38.joints[50] = HAnimJoint1168;

HAnimJoint HAnimJoint1169 = createNode("HAnimJoint");
HAnimJoint1169.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid38.joints[51] = HAnimJoint1169;

HAnimJoint HAnimJoint1170 = createNode("HAnimJoint");
HAnimJoint1170.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid38.joints[52] = HAnimJoint1170;

HAnimJoint HAnimJoint1171 = createNode("HAnimJoint");
HAnimJoint1171.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[53] = HAnimJoint1171;

HAnimJoint HAnimJoint1172 = createNode("HAnimJoint");
HAnimJoint1172.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid38.joints[54] = HAnimJoint1172;

HAnimJoint HAnimJoint1173 = createNode("HAnimJoint");
HAnimJoint1173.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid38.joints[55] = HAnimJoint1173;

HAnimJoint HAnimJoint1174 = createNode("HAnimJoint");
HAnimJoint1174.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid38.joints[56] = HAnimJoint1174;

HAnimJoint HAnimJoint1175 = createNode("HAnimJoint");
HAnimJoint1175.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[57] = HAnimJoint1175;

HAnimJoint HAnimJoint1176 = createNode("HAnimJoint");
HAnimJoint1176.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid38.joints[58] = HAnimJoint1176;

HAnimJoint HAnimJoint1177 = createNode("HAnimJoint");
HAnimJoint1177.USE = "hanim_vl5";
HAnimHumanoid38.joints[59] = HAnimJoint1177;

HAnimJoint HAnimJoint1178 = createNode("HAnimJoint");
HAnimJoint1178.USE = "hanim_vl4";
HAnimHumanoid38.joints[60] = HAnimJoint1178;

HAnimJoint HAnimJoint1179 = createNode("HAnimJoint");
HAnimJoint1179.USE = "hanim_vl3";
HAnimHumanoid38.joints[61] = HAnimJoint1179;

HAnimJoint HAnimJoint1180 = createNode("HAnimJoint");
HAnimJoint1180.USE = "hanim_vl2";
HAnimHumanoid38.joints[62] = HAnimJoint1180;

HAnimJoint HAnimJoint1181 = createNode("HAnimJoint");
HAnimJoint1181.USE = "hanim_vl1";
HAnimHumanoid38.joints[63] = HAnimJoint1181;

HAnimJoint HAnimJoint1182 = createNode("HAnimJoint");
HAnimJoint1182.USE = "hanim_vt12";
HAnimHumanoid38.joints[64] = HAnimJoint1182;

HAnimJoint HAnimJoint1183 = createNode("HAnimJoint");
HAnimJoint1183.USE = "hanim_vt11";
HAnimHumanoid38.joints[65] = HAnimJoint1183;

HAnimJoint HAnimJoint1184 = createNode("HAnimJoint");
HAnimJoint1184.USE = "hanim_vt10";
HAnimHumanoid38.joints[66] = HAnimJoint1184;

HAnimJoint HAnimJoint1185 = createNode("HAnimJoint");
HAnimJoint1185.USE = "hanim_vt9";
HAnimHumanoid38.joints[67] = HAnimJoint1185;

HAnimJoint HAnimJoint1186 = createNode("HAnimJoint");
HAnimJoint1186.USE = "hanim_vt8";
HAnimHumanoid38.joints[68] = HAnimJoint1186;

HAnimJoint HAnimJoint1187 = createNode("HAnimJoint");
HAnimJoint1187.USE = "hanim_vt7";
HAnimHumanoid38.joints[69] = HAnimJoint1187;

HAnimJoint HAnimJoint1188 = createNode("HAnimJoint");
HAnimJoint1188.USE = "hanim_vt6";
HAnimHumanoid38.joints[70] = HAnimJoint1188;

HAnimJoint HAnimJoint1189 = createNode("HAnimJoint");
HAnimJoint1189.USE = "hanim_vt5";
HAnimHumanoid38.joints[71] = HAnimJoint1189;

HAnimJoint HAnimJoint1190 = createNode("HAnimJoint");
HAnimJoint1190.USE = "hanim_vt4";
HAnimHumanoid38.joints[72] = HAnimJoint1190;

HAnimJoint HAnimJoint1191 = createNode("HAnimJoint");
HAnimJoint1191.USE = "hanim_vt3";
HAnimHumanoid38.joints[73] = HAnimJoint1191;

HAnimJoint HAnimJoint1192 = createNode("HAnimJoint");
HAnimJoint1192.USE = "hanim_vt2";
HAnimHumanoid38.joints[74] = HAnimJoint1192;

HAnimJoint HAnimJoint1193 = createNode("HAnimJoint");
HAnimJoint1193.USE = "hanim_vt1";
HAnimHumanoid38.joints[75] = HAnimJoint1193;

HAnimJoint HAnimJoint1194 = createNode("HAnimJoint");
HAnimJoint1194.USE = "hanim_vc7";
HAnimHumanoid38.joints[76] = HAnimJoint1194;

HAnimJoint HAnimJoint1195 = createNode("HAnimJoint");
HAnimJoint1195.USE = "hanim_vc6";
HAnimHumanoid38.joints[77] = HAnimJoint1195;

HAnimJoint HAnimJoint1196 = createNode("HAnimJoint");
HAnimJoint1196.USE = "hanim_vc5";
HAnimHumanoid38.joints[78] = HAnimJoint1196;

HAnimJoint HAnimJoint1197 = createNode("HAnimJoint");
HAnimJoint1197.USE = "hanim_vc4";
HAnimHumanoid38.joints[79] = HAnimJoint1197;

HAnimJoint HAnimJoint1198 = createNode("HAnimJoint");
HAnimJoint1198.USE = "hanim_vc3";
HAnimHumanoid38.joints[80] = HAnimJoint1198;

HAnimJoint HAnimJoint1199 = createNode("HAnimJoint");
HAnimJoint1199.USE = "hanim_vc2";
HAnimHumanoid38.joints[81] = HAnimJoint1199;

HAnimJoint HAnimJoint1200 = createNode("HAnimJoint");
HAnimJoint1200.USE = "hanim_vc1";
HAnimHumanoid38.joints[82] = HAnimJoint1200;

HAnimJoint HAnimJoint1201 = createNode("HAnimJoint");
HAnimJoint1201.USE = "hanim_skullbase";
HAnimHumanoid38.joints[83] = HAnimJoint1201;

HAnimJoint HAnimJoint1202 = createNode("HAnimJoint");
HAnimJoint1202.USE = "hanim_l_eyelid_joint";
HAnimHumanoid38.joints[84] = HAnimJoint1202;

HAnimJoint HAnimJoint1203 = createNode("HAnimJoint");
HAnimJoint1203.USE = "hanim_r_eyelid_joint";
HAnimHumanoid38.joints[85] = HAnimJoint1203;

HAnimJoint HAnimJoint1204 = createNode("HAnimJoint");
HAnimJoint1204.USE = "hanim_l_eyeball_joint";
HAnimHumanoid38.joints[86] = HAnimJoint1204;

HAnimJoint HAnimJoint1205 = createNode("HAnimJoint");
HAnimJoint1205.USE = "hanim_r_eyeball_joint";
HAnimHumanoid38.joints[87] = HAnimJoint1205;

HAnimJoint HAnimJoint1206 = createNode("HAnimJoint");
HAnimJoint1206.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid38.joints[88] = HAnimJoint1206;

HAnimJoint HAnimJoint1207 = createNode("HAnimJoint");
HAnimJoint1207.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid38.joints[89] = HAnimJoint1207;

HAnimJoint HAnimJoint1208 = createNode("HAnimJoint");
HAnimJoint1208.USE = "hanim_temporomandibular";
HAnimHumanoid38.joints[90] = HAnimJoint1208;

HAnimJoint HAnimJoint1209 = createNode("HAnimJoint");
HAnimJoint1209.USE = "hanim_l_sternoclavicular";
HAnimHumanoid38.joints[91] = HAnimJoint1209;

HAnimJoint HAnimJoint1210 = createNode("HAnimJoint");
HAnimJoint1210.USE = "hanim_l_acromioclavicular";
HAnimHumanoid38.joints[92] = HAnimJoint1210;

HAnimJoint HAnimJoint1211 = createNode("HAnimJoint");
HAnimJoint1211.USE = "hanim_l_shoulder";
HAnimHumanoid38.joints[93] = HAnimJoint1211;

HAnimJoint HAnimJoint1212 = createNode("HAnimJoint");
HAnimJoint1212.USE = "hanim_l_elbow";
HAnimHumanoid38.joints[94] = HAnimJoint1212;

HAnimJoint HAnimJoint1213 = createNode("HAnimJoint");
HAnimJoint1213.USE = "hanim_l_radiocarpal";
HAnimHumanoid38.joints[95] = HAnimJoint1213;

HAnimJoint HAnimJoint1214 = createNode("HAnimJoint");
HAnimJoint1214.USE = "hanim_l_midcarpal_1";
HAnimHumanoid38.joints[96] = HAnimJoint1214;

HAnimJoint HAnimJoint1215 = createNode("HAnimJoint");
HAnimJoint1215.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid38.joints[97] = HAnimJoint1215;

HAnimJoint HAnimJoint1216 = createNode("HAnimJoint");
HAnimJoint1216.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid38.joints[98] = HAnimJoint1216;

HAnimJoint HAnimJoint1217 = createNode("HAnimJoint");
HAnimJoint1217.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid38.joints[99] = HAnimJoint1217;

HAnimJoint HAnimJoint1218 = createNode("HAnimJoint");
HAnimJoint1218.USE = "hanim_l_midcarpal_2";
HAnimHumanoid38.joints[100] = HAnimJoint1218;

HAnimJoint HAnimJoint1219 = createNode("HAnimJoint");
HAnimJoint1219.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid38.joints[101] = HAnimJoint1219;

HAnimJoint HAnimJoint1220 = createNode("HAnimJoint");
HAnimJoint1220.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid38.joints[102] = HAnimJoint1220;

HAnimJoint HAnimJoint1221 = createNode("HAnimJoint");
HAnimJoint1221.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[103] = HAnimJoint1221;

HAnimJoint HAnimJoint1222 = createNode("HAnimJoint");
HAnimJoint1222.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid38.joints[104] = HAnimJoint1222;

HAnimJoint HAnimJoint1223 = createNode("HAnimJoint");
HAnimJoint1223.USE = "hanim_l_midcarpal_3";
HAnimHumanoid38.joints[105] = HAnimJoint1223;

HAnimJoint HAnimJoint1224 = createNode("HAnimJoint");
HAnimJoint1224.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid38.joints[106] = HAnimJoint1224;

HAnimJoint HAnimJoint1225 = createNode("HAnimJoint");
HAnimJoint1225.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid38.joints[107] = HAnimJoint1225;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[108] = HAnimJoint1226;

HAnimJoint HAnimJoint1227 = createNode("HAnimJoint");
HAnimJoint1227.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid38.joints[109] = HAnimJoint1227;

HAnimJoint HAnimJoint1228 = createNode("HAnimJoint");
HAnimJoint1228.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid38.joints[110] = HAnimJoint1228;

HAnimJoint HAnimJoint1229 = createNode("HAnimJoint");
HAnimJoint1229.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid38.joints[111] = HAnimJoint1229;

HAnimJoint HAnimJoint1230 = createNode("HAnimJoint");
HAnimJoint1230.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid38.joints[112] = HAnimJoint1230;

HAnimJoint HAnimJoint1231 = createNode("HAnimJoint");
HAnimJoint1231.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[113] = HAnimJoint1231;

HAnimJoint HAnimJoint1232 = createNode("HAnimJoint");
HAnimJoint1232.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid38.joints[114] = HAnimJoint1232;

HAnimJoint HAnimJoint1233 = createNode("HAnimJoint");
HAnimJoint1233.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid38.joints[115] = HAnimJoint1233;

HAnimJoint HAnimJoint1234 = createNode("HAnimJoint");
HAnimJoint1234.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid38.joints[116] = HAnimJoint1234;

HAnimJoint HAnimJoint1235 = createNode("HAnimJoint");
HAnimJoint1235.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[117] = HAnimJoint1235;

HAnimJoint HAnimJoint1236 = createNode("HAnimJoint");
HAnimJoint1236.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid38.joints[118] = HAnimJoint1236;

HAnimJoint HAnimJoint1237 = createNode("HAnimJoint");
HAnimJoint1237.USE = "hanim_r_sternoclavicular";
HAnimHumanoid38.joints[119] = HAnimJoint1237;

HAnimJoint HAnimJoint1238 = createNode("HAnimJoint");
HAnimJoint1238.USE = "hanim_r_acromioclavicular";
HAnimHumanoid38.joints[120] = HAnimJoint1238;

HAnimJoint HAnimJoint1239 = createNode("HAnimJoint");
HAnimJoint1239.USE = "hanim_r_shoulder";
HAnimHumanoid38.joints[121] = HAnimJoint1239;

HAnimJoint HAnimJoint1240 = createNode("HAnimJoint");
HAnimJoint1240.USE = "hanim_r_elbow";
HAnimHumanoid38.joints[122] = HAnimJoint1240;

HAnimJoint HAnimJoint1241 = createNode("HAnimJoint");
HAnimJoint1241.USE = "hanim_r_radiocarpal";
HAnimHumanoid38.joints[123] = HAnimJoint1241;

HAnimJoint HAnimJoint1242 = createNode("HAnimJoint");
HAnimJoint1242.USE = "hanim_r_midcarpal_1";
HAnimHumanoid38.joints[124] = HAnimJoint1242;

HAnimJoint HAnimJoint1243 = createNode("HAnimJoint");
HAnimJoint1243.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid38.joints[125] = HAnimJoint1243;

HAnimJoint HAnimJoint1244 = createNode("HAnimJoint");
HAnimJoint1244.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid38.joints[126] = HAnimJoint1244;

HAnimJoint HAnimJoint1245 = createNode("HAnimJoint");
HAnimJoint1245.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid38.joints[127] = HAnimJoint1245;

HAnimJoint HAnimJoint1246 = createNode("HAnimJoint");
HAnimJoint1246.USE = "hanim_r_midcarpal_2";
HAnimHumanoid38.joints[128] = HAnimJoint1246;

HAnimJoint HAnimJoint1247 = createNode("HAnimJoint");
HAnimJoint1247.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid38.joints[129] = HAnimJoint1247;

HAnimJoint HAnimJoint1248 = createNode("HAnimJoint");
HAnimJoint1248.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid38.joints[130] = HAnimJoint1248;

HAnimJoint HAnimJoint1249 = createNode("HAnimJoint");
HAnimJoint1249.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid38.joints[131] = HAnimJoint1249;

HAnimJoint HAnimJoint1250 = createNode("HAnimJoint");
HAnimJoint1250.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid38.joints[132] = HAnimJoint1250;

HAnimJoint HAnimJoint1251 = createNode("HAnimJoint");
HAnimJoint1251.USE = "hanim_r_midcarpal_3";
HAnimHumanoid38.joints[133] = HAnimJoint1251;

HAnimJoint HAnimJoint1252 = createNode("HAnimJoint");
HAnimJoint1252.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid38.joints[134] = HAnimJoint1252;

HAnimJoint HAnimJoint1253 = createNode("HAnimJoint");
HAnimJoint1253.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid38.joints[135] = HAnimJoint1253;

HAnimJoint HAnimJoint1254 = createNode("HAnimJoint");
HAnimJoint1254.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid38.joints[136] = HAnimJoint1254;

HAnimJoint HAnimJoint1255 = createNode("HAnimJoint");
HAnimJoint1255.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid38.joints[137] = HAnimJoint1255;

HAnimJoint HAnimJoint1256 = createNode("HAnimJoint");
HAnimJoint1256.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid38.joints[138] = HAnimJoint1256;

HAnimJoint HAnimJoint1257 = createNode("HAnimJoint");
HAnimJoint1257.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid38.joints[139] = HAnimJoint1257;

HAnimJoint HAnimJoint1258 = createNode("HAnimJoint");
HAnimJoint1258.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid38.joints[140] = HAnimJoint1258;

HAnimJoint HAnimJoint1259 = createNode("HAnimJoint");
HAnimJoint1259.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid38.joints[141] = HAnimJoint1259;

HAnimJoint HAnimJoint1260 = createNode("HAnimJoint");
HAnimJoint1260.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid38.joints[142] = HAnimJoint1260;

HAnimJoint HAnimJoint1261 = createNode("HAnimJoint");
HAnimJoint1261.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid38.joints[143] = HAnimJoint1261;

HAnimJoint HAnimJoint1262 = createNode("HAnimJoint");
HAnimJoint1262.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid38.joints[144] = HAnimJoint1262;

HAnimJoint HAnimJoint1263 = createNode("HAnimJoint");
HAnimJoint1263.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid38.joints[145] = HAnimJoint1263;

HAnimJoint HAnimJoint1264 = createNode("HAnimJoint");
HAnimJoint1264.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid38.joints[146] = HAnimJoint1264;

HAnimSite HAnimSite1265 = createNode("HAnimSite");
HAnimSite1265.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid38.viewpoints[147] = HAnimSite1265;

HAnimSite HAnimSite1266 = createNode("HAnimSite");
HAnimSite1266.USE = "hanim_crotch_pt";
HAnimHumanoid38.viewpoints[148] = HAnimSite1266;

HAnimSite HAnimSite1267 = createNode("HAnimSite");
HAnimSite1267.USE = "hanim_l_asis_pt";
HAnimHumanoid38.viewpoints[149] = HAnimSite1267;

HAnimSite HAnimSite1268 = createNode("HAnimSite");
HAnimSite1268.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid38.viewpoints[150] = HAnimSite1268;

HAnimSite HAnimSite1269 = createNode("HAnimSite");
HAnimSite1269.USE = "hanim_l_psis_pt";
HAnimHumanoid38.viewpoints[151] = HAnimSite1269;

HAnimSite HAnimSite1270 = createNode("HAnimSite");
HAnimSite1270.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid38.viewpoints[152] = HAnimSite1270;

HAnimSite HAnimSite1271 = createNode("HAnimSite");
HAnimSite1271.USE = "hanim_r_asis_pt";
HAnimHumanoid38.viewpoints[153] = HAnimSite1271;

HAnimSite HAnimSite1272 = createNode("HAnimSite");
HAnimSite1272.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid38.viewpoints[154] = HAnimSite1272;

HAnimSite HAnimSite1273 = createNode("HAnimSite");
HAnimSite1273.USE = "hanim_r_psis_pt";
HAnimHumanoid38.viewpoints[155] = HAnimSite1273;

HAnimSite HAnimSite1274 = createNode("HAnimSite");
HAnimSite1274.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid38.viewpoints[156] = HAnimSite1274;

HAnimSite HAnimSite1275 = createNode("HAnimSite");
HAnimSite1275.USE = "hanim_navel_pt";
HAnimHumanoid38.viewpoints[157] = HAnimSite1275;

HAnimSite HAnimSite1276 = createNode("HAnimSite");
HAnimSite1276.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid38.viewpoints[158] = HAnimSite1276;

HAnimSite HAnimSite1277 = createNode("HAnimSite");
HAnimSite1277.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid38.viewpoints[159] = HAnimSite1277;

HAnimSite HAnimSite1278 = createNode("HAnimSite");
HAnimSite1278.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid38.viewpoints[160] = HAnimSite1278;

HAnimSite HAnimSite1279 = createNode("HAnimSite");
HAnimSite1279.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid38.viewpoints[161] = HAnimSite1279;

HAnimSite HAnimSite1280 = createNode("HAnimSite");
HAnimSite1280.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid38.viewpoints[162] = HAnimSite1280;

HAnimSite HAnimSite1281 = createNode("HAnimSite");
HAnimSite1281.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid38.viewpoints[163] = HAnimSite1281;

HAnimSite HAnimSite1282 = createNode("HAnimSite");
HAnimSite1282.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid38.viewpoints[164] = HAnimSite1282;

HAnimSite HAnimSite1283 = createNode("HAnimSite");
HAnimSite1283.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid38.viewpoints[165] = HAnimSite1283;

HAnimSite HAnimSite1284 = createNode("HAnimSite");
HAnimSite1284.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid38.viewpoints[166] = HAnimSite1284;

HAnimSite HAnimSite1285 = createNode("HAnimSite");
HAnimSite1285.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid38.viewpoints[167] = HAnimSite1285;

HAnimSite HAnimSite1286 = createNode("HAnimSite");
HAnimSite1286.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid38.viewpoints[168] = HAnimSite1286;

HAnimSite HAnimSite1287 = createNode("HAnimSite");
HAnimSite1287.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid38.viewpoints[169] = HAnimSite1287;

HAnimSite HAnimSite1288 = createNode("HAnimSite");
HAnimSite1288.USE = "hanim_l_tibiale_pt";
HAnimHumanoid38.viewpoints[170] = HAnimSite1288;

HAnimSite HAnimSite1289 = createNode("HAnimSite");
HAnimSite1289.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid38.viewpoints[171] = HAnimSite1289;

HAnimSite HAnimSite1290 = createNode("HAnimSite");
HAnimSite1290.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid38.viewpoints[172] = HAnimSite1290;

HAnimSite HAnimSite1291 = createNode("HAnimSite");
HAnimSite1291.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid38.viewpoints[173] = HAnimSite1291;

HAnimSite HAnimSite1292 = createNode("HAnimSite");
HAnimSite1292.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid38.viewpoints[174] = HAnimSite1292;

HAnimSite HAnimSite1293 = createNode("HAnimSite");
HAnimSite1293.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid38.viewpoints[175] = HAnimSite1293;

HAnimSite HAnimSite1294 = createNode("HAnimSite");
HAnimSite1294.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid38.viewpoints[176] = HAnimSite1294;

HAnimSite HAnimSite1295 = createNode("HAnimSite");
HAnimSite1295.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid38.viewpoints[177] = HAnimSite1295;

HAnimSite HAnimSite1296 = createNode("HAnimSite");
HAnimSite1296.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid38.viewpoints[178] = HAnimSite1296;

HAnimSite HAnimSite1297 = createNode("HAnimSite");
HAnimSite1297.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid38.viewpoints[179] = HAnimSite1297;

HAnimSite HAnimSite1298 = createNode("HAnimSite");
HAnimSite1298.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid38.viewpoints[180] = HAnimSite1298;

HAnimSite HAnimSite1299 = createNode("HAnimSite");
HAnimSite1299.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid38.viewpoints[181] = HAnimSite1299;

HAnimSite HAnimSite1300 = createNode("HAnimSite");
HAnimSite1300.USE = "hanim_r_tibiale_pt";
HAnimHumanoid38.viewpoints[182] = HAnimSite1300;

HAnimSite HAnimSite1301 = createNode("HAnimSite");
HAnimSite1301.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid38.viewpoints[183] = HAnimSite1301;

HAnimSite HAnimSite1302 = createNode("HAnimSite");
HAnimSite1302.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid38.viewpoints[184] = HAnimSite1302;

HAnimSite HAnimSite1303 = createNode("HAnimSite");
HAnimSite1303.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid38.viewpoints[185] = HAnimSite1303;

HAnimSite HAnimSite1304 = createNode("HAnimSite");
HAnimSite1304.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid38.viewpoints[186] = HAnimSite1304;

HAnimSite HAnimSite1305 = createNode("HAnimSite");
HAnimSite1305.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid38.viewpoints[187] = HAnimSite1305;

HAnimSite HAnimSite1306 = createNode("HAnimSite");
HAnimSite1306.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid38.viewpoints[188] = HAnimSite1306;

HAnimSite HAnimSite1307 = createNode("HAnimSite");
HAnimSite1307.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid38.viewpoints[189] = HAnimSite1307;

HAnimSite HAnimSite1308 = createNode("HAnimSite");
HAnimSite1308.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid38.viewpoints[190] = HAnimSite1308;

HAnimSite HAnimSite1309 = createNode("HAnimSite");
HAnimSite1309.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid38.viewpoints[191] = HAnimSite1309;

HAnimSite HAnimSite1310 = createNode("HAnimSite");
HAnimSite1310.USE = "hanim_l_rib10_pt";
HAnimHumanoid38.viewpoints[192] = HAnimSite1310;

HAnimSite HAnimSite1311 = createNode("HAnimSite");
HAnimSite1311.USE = "hanim_r_rib10_pt";
HAnimHumanoid38.viewpoints[193] = HAnimSite1311;

HAnimSite HAnimSite1312 = createNode("HAnimSite");
HAnimSite1312.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid38.viewpoints[194] = HAnimSite1312;

HAnimSite HAnimSite1313 = createNode("HAnimSite");
HAnimSite1313.USE = "hanim_substernale_pt";
HAnimHumanoid38.viewpoints[195] = HAnimSite1313;

HAnimSite HAnimSite1314 = createNode("HAnimSite");
HAnimSite1314.USE = "hanim_l_thelion_pt";
HAnimHumanoid38.viewpoints[196] = HAnimSite1314;

HAnimSite HAnimSite1315 = createNode("HAnimSite");
HAnimSite1315.USE = "hanim_r_thelion_pt";
HAnimHumanoid38.viewpoints[197] = HAnimSite1315;

HAnimSite HAnimSite1316 = createNode("HAnimSite");
HAnimSite1316.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid38.viewpoints[198] = HAnimSite1316;

HAnimSite HAnimSite1317 = createNode("HAnimSite");
HAnimSite1317.USE = "hanim_mesosternale_pt";
HAnimHumanoid38.viewpoints[199] = HAnimSite1317;

HAnimSite HAnimSite1318 = createNode("HAnimSite");
HAnimSite1318.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid38.viewpoints[200] = HAnimSite1318;

HAnimSite HAnimSite1319 = createNode("HAnimSite");
HAnimSite1319.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid38.viewpoints[201] = HAnimSite1319;

HAnimSite HAnimSite1320 = createNode("HAnimSite");
HAnimSite1320.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid38.viewpoints[202] = HAnimSite1320;

HAnimSite HAnimSite1321 = createNode("HAnimSite");
HAnimSite1321.USE = "hanim_cervicale_pt";
HAnimHumanoid38.viewpoints[203] = HAnimSite1321;

HAnimSite HAnimSite1322 = createNode("HAnimSite");
HAnimSite1322.USE = "hanim_suprasternale_pt";
HAnimHumanoid38.viewpoints[204] = HAnimSite1322;

HAnimSite HAnimSite1323 = createNode("HAnimSite");
HAnimSite1323.USE = "hanim_l_neck_base_pt";
HAnimHumanoid38.viewpoints[205] = HAnimSite1323;

HAnimSite HAnimSite1324 = createNode("HAnimSite");
HAnimSite1324.USE = "hanim_r_neck_base_pt";
HAnimHumanoid38.viewpoints[206] = HAnimSite1324;

HAnimSite HAnimSite1325 = createNode("HAnimSite");
HAnimSite1325.USE = "hanim_l_acromion_pt";
HAnimHumanoid38.viewpoints[207] = HAnimSite1325;

HAnimSite HAnimSite1326 = createNode("HAnimSite");
HAnimSite1326.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid38.viewpoints[208] = HAnimSite1326;

HAnimSite HAnimSite1327 = createNode("HAnimSite");
HAnimSite1327.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid38.viewpoints[209] = HAnimSite1327;

HAnimSite HAnimSite1328 = createNode("HAnimSite");
HAnimSite1328.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid38.viewpoints[210] = HAnimSite1328;

HAnimSite HAnimSite1329 = createNode("HAnimSite");
HAnimSite1329.USE = "hanim_l_clavicale_pt";
HAnimHumanoid38.viewpoints[211] = HAnimSite1329;

HAnimSite HAnimSite1330 = createNode("HAnimSite");
HAnimSite1330.USE = "hanim_r_acromion_pt";
HAnimHumanoid38.viewpoints[212] = HAnimSite1330;

HAnimSite HAnimSite1331 = createNode("HAnimSite");
HAnimSite1331.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid38.viewpoints[213] = HAnimSite1331;

HAnimSite HAnimSite1332 = createNode("HAnimSite");
HAnimSite1332.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid38.viewpoints[214] = HAnimSite1332;

HAnimSite HAnimSite1333 = createNode("HAnimSite");
HAnimSite1333.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid38.viewpoints[215] = HAnimSite1333;

HAnimSite HAnimSite1334 = createNode("HAnimSite");
HAnimSite1334.USE = "hanim_r_clavicale_pt";
HAnimHumanoid38.viewpoints[216] = HAnimSite1334;

HAnimSite HAnimSite1335 = createNode("HAnimSite");
HAnimSite1335.USE = "hanim_adams_apple_pt";
HAnimHumanoid38.viewpoints[217] = HAnimSite1335;

HAnimSite HAnimSite1336 = createNode("HAnimSite");
HAnimSite1336.USE = "hanim_glabella_pt";
HAnimHumanoid38.viewpoints[218] = HAnimSite1336;

HAnimSite HAnimSite1337 = createNode("HAnimSite");
HAnimSite1337.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid38.viewpoints[219] = HAnimSite1337;

HAnimSite HAnimSite1338 = createNode("HAnimSite");
HAnimSite1338.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid38.viewpoints[220] = HAnimSite1338;

HAnimSite HAnimSite1339 = createNode("HAnimSite");
HAnimSite1339.USE = "hanim_l_tragion_pt";
HAnimHumanoid38.viewpoints[221] = HAnimSite1339;

HAnimSite HAnimSite1340 = createNode("HAnimSite");
HAnimSite1340.USE = "hanim_nuchale_pt";
HAnimHumanoid38.viewpoints[222] = HAnimSite1340;

HAnimSite HAnimSite1341 = createNode("HAnimSite");
HAnimSite1341.USE = "hanim_opisthocranion_pt";
HAnimHumanoid38.viewpoints[223] = HAnimSite1341;

HAnimSite HAnimSite1342 = createNode("HAnimSite");
HAnimSite1342.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid38.viewpoints[224] = HAnimSite1342;

HAnimSite HAnimSite1343 = createNode("HAnimSite");
HAnimSite1343.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid38.viewpoints[225] = HAnimSite1343;

HAnimSite HAnimSite1344 = createNode("HAnimSite");
HAnimSite1344.USE = "hanim_r_tragion_pt";
HAnimHumanoid38.viewpoints[226] = HAnimSite1344;

HAnimSite HAnimSite1345 = createNode("HAnimSite");
HAnimSite1345.USE = "hanim_sellion_pt";
HAnimHumanoid38.viewpoints[227] = HAnimSite1345;

HAnimSite HAnimSite1346 = createNode("HAnimSite");
HAnimSite1346.USE = "hanim_skull_vertex_pt";
HAnimHumanoid38.viewpoints[228] = HAnimSite1346;

HAnimSite HAnimSite1347 = createNode("HAnimSite");
HAnimSite1347.USE = "hanim_l_gonion_pt";
HAnimHumanoid38.viewpoints[229] = HAnimSite1347;

HAnimSite HAnimSite1348 = createNode("HAnimSite");
HAnimSite1348.USE = "hanim_menton_pt";
HAnimHumanoid38.viewpoints[230] = HAnimSite1348;

HAnimSite HAnimSite1349 = createNode("HAnimSite");
HAnimSite1349.USE = "hanim_r_gonion_pt";
HAnimHumanoid38.viewpoints[231] = HAnimSite1349;

HAnimSite HAnimSite1350 = createNode("HAnimSite");
HAnimSite1350.USE = "hanim_supramenton_pt";
HAnimHumanoid38.viewpoints[232] = HAnimSite1350;

HAnimSite HAnimSite1351 = createNode("HAnimSite");
HAnimSite1351.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid38.viewpoints[233] = HAnimSite1351;

HAnimSite HAnimSite1352 = createNode("HAnimSite");
HAnimSite1352.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid38.viewpoints[234] = HAnimSite1352;

HAnimSite HAnimSite1353 = createNode("HAnimSite");
HAnimSite1353.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid38.viewpoints[235] = HAnimSite1353;

HAnimSite HAnimSite1354 = createNode("HAnimSite");
HAnimSite1354.USE = "hanim_l_olecranon_pt";
HAnimHumanoid38.viewpoints[236] = HAnimSite1354;

HAnimSite HAnimSite1355 = createNode("HAnimSite");
HAnimSite1355.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid38.viewpoints[237] = HAnimSite1355;

HAnimSite HAnimSite1356 = createNode("HAnimSite");
HAnimSite1356.USE = "hanim_l_radiale_pt";
HAnimHumanoid38.viewpoints[238] = HAnimSite1356;

HAnimSite HAnimSite1357 = createNode("HAnimSite");
HAnimSite1357.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid38.viewpoints[239] = HAnimSite1357;

HAnimSite HAnimSite1358 = createNode("HAnimSite");
HAnimSite1358.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid38.viewpoints[240] = HAnimSite1358;

HAnimSite HAnimSite1359 = createNode("HAnimSite");
HAnimSite1359.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid38.viewpoints[241] = HAnimSite1359;

HAnimSite HAnimSite1360 = createNode("HAnimSite");
HAnimSite1360.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid38.viewpoints[242] = HAnimSite1360;

HAnimSite HAnimSite1361 = createNode("HAnimSite");
HAnimSite1361.USE = "hanim_l_dactylion_pt";
HAnimHumanoid38.viewpoints[243] = HAnimSite1361;

HAnimSite HAnimSite1362 = createNode("HAnimSite");
HAnimSite1362.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid38.viewpoints[244] = HAnimSite1362;

HAnimSite HAnimSite1363 = createNode("HAnimSite");
HAnimSite1363.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid38.viewpoints[245] = HAnimSite1363;

HAnimSite HAnimSite1364 = createNode("HAnimSite");
HAnimSite1364.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid38.viewpoints[246] = HAnimSite1364;

HAnimSite HAnimSite1365 = createNode("HAnimSite");
HAnimSite1365.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid38.viewpoints[247] = HAnimSite1365;

HAnimSite HAnimSite1366 = createNode("HAnimSite");
HAnimSite1366.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid38.viewpoints[248] = HAnimSite1366;

HAnimSite HAnimSite1367 = createNode("HAnimSite");
HAnimSite1367.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid38.viewpoints[249] = HAnimSite1367;

HAnimSite HAnimSite1368 = createNode("HAnimSite");
HAnimSite1368.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid38.viewpoints[250] = HAnimSite1368;

HAnimSite HAnimSite1369 = createNode("HAnimSite");
HAnimSite1369.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid38.viewpoints[251] = HAnimSite1369;

HAnimSite HAnimSite1370 = createNode("HAnimSite");
HAnimSite1370.USE = "hanim_r_olecranon_pt";
HAnimHumanoid38.viewpoints[252] = HAnimSite1370;

HAnimSite HAnimSite1371 = createNode("HAnimSite");
HAnimSite1371.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid38.viewpoints[253] = HAnimSite1371;

HAnimSite HAnimSite1372 = createNode("HAnimSite");
HAnimSite1372.USE = "hanim_r_radiale_pt";
HAnimHumanoid38.viewpoints[254] = HAnimSite1372;

HAnimSite HAnimSite1373 = createNode("HAnimSite");
HAnimSite1373.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid38.viewpoints[255] = HAnimSite1373;

HAnimSite HAnimSite1374 = createNode("HAnimSite");
HAnimSite1374.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid38.viewpoints[256] = HAnimSite1374;

HAnimSite HAnimSite1375 = createNode("HAnimSite");
HAnimSite1375.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid38.viewpoints[257] = HAnimSite1375;

HAnimSite HAnimSite1376 = createNode("HAnimSite");
HAnimSite1376.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid38.viewpoints[258] = HAnimSite1376;

HAnimSite HAnimSite1377 = createNode("HAnimSite");
HAnimSite1377.USE = "hanim_r_dactylion_pt";
HAnimHumanoid38.viewpoints[259] = HAnimSite1377;

HAnimSite HAnimSite1378 = createNode("HAnimSite");
HAnimSite1378.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid38.viewpoints[260] = HAnimSite1378;

HAnimSite HAnimSite1379 = createNode("HAnimSite");
HAnimSite1379.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid38.viewpoints[261] = HAnimSite1379;

HAnimSite HAnimSite1380 = createNode("HAnimSite");
HAnimSite1380.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid38.viewpoints[262] = HAnimSite1380;

HAnimSite HAnimSite1381 = createNode("HAnimSite");
HAnimSite1381.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid38.viewpoints[263] = HAnimSite1381;

HAnimSite HAnimSite1382 = createNode("HAnimSite");
HAnimSite1382.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid38.viewpoints[264] = HAnimSite1382;

children[4] = HAnimHumanoid38;

}
