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

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

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

Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

Transform18.children[1] = Transform24;

//<Transform translation='0 2.1 0' scale='1 1 1'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Group17.children = new MFNode();

Group17.children[0] = Transform18;

children[1] = Group17;

NavigationInfo NavigationInfo29 = createNode("NavigationInfo");
NavigationInfo29.speed = 1.5;
children[2] = NavigationInfo29;

Viewpoint Viewpoint30 = createNode("Viewpoint");
Viewpoint30.description = "default";
children[3] = Viewpoint30;

HAnimHumanoid HAnimHumanoid31 = createNode("HAnimHumanoid");
HAnimHumanoid31.name = "HAnim";
HAnimHumanoid31.DEF = "hanim_HAnim";
HAnimHumanoid31.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
HAnimHumanoid31.version = "2.0";
HAnimJoint HAnimJoint32 = createNode("HAnimJoint");
HAnimJoint32.name = "humanoid_root";
HAnimJoint32.DEF = "hanim_humanoid_root";
HAnimJoint32.center = new SFVec3f(new float[0,0.824,0.0277]);
HAnimJoint32.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint32.llimit = new MFFloat(new float[0,0,0]);
Shape Shape33 = createNode("Shape");
LineSet LineSet34 = createNode("LineSet");
LineSet34.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate35 = createNode("Coordinate");
Coordinate35.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet34.coord = Coordinate35;

//from humanoid_root to sacroiliac
ColorRGBA ColorRGBA36 = createNode("ColorRGBA");
ColorRGBA36.USE = "HAnimSegmentLineColorRGBA";
LineSet34.color = ColorRGBA36;

Shape33.geometry = LineSet34;

HAnimJoint32.shape = Shape33;

HAnimSite HAnimSite37 = createNode("HAnimSite");
HAnimSite37.name = "buttocks_standing_wall_contact_point_pt";
HAnimSite37.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimSite37.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor38 = createNode("TouchSensor");
TouchSensor38.description = "HAnimSite buttocks_standing_wall_contact_point_pt";
HAnimSite37.children = new MFNode();

HAnimSite37.children[0] = TouchSensor38;

Shape Shape39 = createNode("Shape");
Shape39.USE = "HAnimSiteShape";
HAnimSite37.children[1] = Shape39;

HAnimJoint32.hAnimSite = new undefined();

HAnimJoint32.hAnimSite[0] = HAnimSite37;

HAnimSite HAnimSite40 = createNode("HAnimSite");
HAnimSite40.name = "crotch_pt";
HAnimSite40.DEF = "hanim_crotch_pt";
HAnimSite40.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
TouchSensor TouchSensor41 = createNode("TouchSensor");
TouchSensor41.description = "HAnimSite crotch_pt";
HAnimSite40.children = new MFNode();

HAnimSite40.children[0] = TouchSensor41;

Shape Shape42 = createNode("Shape");
Shape42.USE = "HAnimSiteShape";
HAnimSite40.children[1] = Shape42;

HAnimJoint32.hAnimSite[1] = HAnimSite40;

HAnimSite HAnimSite43 = createNode("HAnimSite");
HAnimSite43.name = "l_asis_pt";
HAnimSite43.DEF = "hanim_l_asis_pt";
HAnimSite43.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
TouchSensor TouchSensor44 = createNode("TouchSensor");
TouchSensor44.description = "HAnimSite l_asis_pt";
HAnimSite43.children = new MFNode();

HAnimSite43.children[0] = TouchSensor44;

Shape Shape45 = createNode("Shape");
Shape45.USE = "HAnimSiteShape";
HAnimSite43.children[1] = Shape45;

HAnimJoint32.hAnimSite[2] = HAnimSite43;

HAnimSite HAnimSite46 = createNode("HAnimSite");
HAnimSite46.name = "l_iliocristale_pt";
HAnimSite46.DEF = "hanim_l_iliocristale_pt";
HAnimSite46.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
TouchSensor TouchSensor47 = createNode("TouchSensor");
TouchSensor47.description = "HAnimSite l_iliocristale_pt";
HAnimSite46.children = new MFNode();

HAnimSite46.children[0] = TouchSensor47;

Shape Shape48 = createNode("Shape");
Shape48.USE = "HAnimSiteShape";
HAnimSite46.children[1] = Shape48;

HAnimJoint32.hAnimSite[3] = HAnimSite46;

HAnimSite HAnimSite49 = createNode("HAnimSite");
HAnimSite49.name = "l_psis_pt";
HAnimSite49.DEF = "hanim_l_psis_pt";
HAnimSite49.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
TouchSensor TouchSensor50 = createNode("TouchSensor");
TouchSensor50.description = "HAnimSite l_psis_pt";
HAnimSite49.children = new MFNode();

HAnimSite49.children[0] = TouchSensor50;

Shape Shape51 = createNode("Shape");
Shape51.USE = "HAnimSiteShape";
HAnimSite49.children[1] = Shape51;

HAnimJoint32.hAnimSite[4] = HAnimSite49;

HAnimSite HAnimSite52 = createNode("HAnimSite");
HAnimSite52.name = "l_trochanterion_pt";
HAnimSite52.DEF = "hanim_l_trochanterion_pt";
HAnimSite52.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
TouchSensor TouchSensor53 = createNode("TouchSensor");
TouchSensor53.description = "HAnimSite l_trochanterion_pt";
HAnimSite52.children = new MFNode();

HAnimSite52.children[0] = TouchSensor53;

Shape Shape54 = createNode("Shape");
Shape54.USE = "HAnimSiteShape";
HAnimSite52.children[1] = Shape54;

HAnimJoint32.hAnimSite[5] = HAnimSite52;

HAnimSite HAnimSite55 = createNode("HAnimSite");
HAnimSite55.name = "r_asis_pt";
HAnimSite55.DEF = "hanim_r_asis_pt";
HAnimSite55.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
TouchSensor TouchSensor56 = createNode("TouchSensor");
TouchSensor56.description = "HAnimSite r_asis_pt";
HAnimSite55.children = new MFNode();

HAnimSite55.children[0] = TouchSensor56;

Shape Shape57 = createNode("Shape");
Shape57.USE = "HAnimSiteShape";
HAnimSite55.children[1] = Shape57;

HAnimJoint32.hAnimSite[6] = HAnimSite55;

HAnimSite HAnimSite58 = createNode("HAnimSite");
HAnimSite58.name = "r_iliocristale_pt";
HAnimSite58.DEF = "hanim_r_iliocristale_pt";
HAnimSite58.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
TouchSensor TouchSensor59 = createNode("TouchSensor");
TouchSensor59.description = "HAnimSite r_iliocristale_pt";
HAnimSite58.children = new MFNode();

HAnimSite58.children[0] = TouchSensor59;

Shape Shape60 = createNode("Shape");
Shape60.USE = "HAnimSiteShape";
HAnimSite58.children[1] = Shape60;

HAnimJoint32.hAnimSite[7] = HAnimSite58;

HAnimSite HAnimSite61 = createNode("HAnimSite");
HAnimSite61.name = "r_psis_pt";
HAnimSite61.DEF = "hanim_r_psis_pt";
HAnimSite61.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
TouchSensor TouchSensor62 = createNode("TouchSensor");
TouchSensor62.description = "HAnimSite r_psis_pt";
HAnimSite61.children = new MFNode();

HAnimSite61.children[0] = TouchSensor62;

Shape Shape63 = createNode("Shape");
Shape63.USE = "HAnimSiteShape";
HAnimSite61.children[1] = Shape63;

HAnimJoint32.hAnimSite[8] = HAnimSite61;

HAnimSite HAnimSite64 = createNode("HAnimSite");
HAnimSite64.name = "r_trochanterion_pt";
HAnimSite64.DEF = "hanim_r_trochanterion_pt";
HAnimSite64.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
TouchSensor TouchSensor65 = createNode("TouchSensor");
TouchSensor65.description = "HAnimSite r_trochanterion_pt";
HAnimSite64.children = new MFNode();

HAnimSite64.children[0] = TouchSensor65;

Shape Shape66 = createNode("Shape");
Shape66.USE = "HAnimSiteShape";
HAnimSite64.children[1] = Shape66;

HAnimJoint32.hAnimSite[9] = HAnimSite64;

Shape Shape67 = createNode("Shape");
LineSet LineSet68 = createNode("LineSet");
LineSet68.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate69 = createNode("Coordinate");
Coordinate69.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet68.coord = Coordinate69;

//from humanoid_root to vl5
ColorRGBA ColorRGBA70 = createNode("ColorRGBA");
ColorRGBA70.USE = "HAnimSegmentLineColorRGBA";
LineSet68.color = ColorRGBA70;

Shape67.geometry = LineSet68;

HAnimJoint32.shape[10] = Shape67;

HAnimSite HAnimSite71 = createNode("HAnimSite");
HAnimSite71.name = "navel_pt";
HAnimSite71.DEF = "hanim_navel_pt";
HAnimSite71.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
TouchSensor TouchSensor72 = createNode("TouchSensor");
TouchSensor72.description = "HAnimSite navel_pt";
HAnimSite71.children = new MFNode();

HAnimSite71.children[0] = TouchSensor72;

Shape Shape73 = createNode("Shape");
Shape73.USE = "HAnimSiteShape";
HAnimSite71.children[1] = Shape73;

HAnimJoint32.hAnimSite[11] = HAnimSite71;

HAnimSite HAnimSite74 = createNode("HAnimSite");
HAnimSite74.name = "waist_preferred_anterior_pt";
HAnimSite74.DEF = "hanim_waist_preferred_anterior_pt";
HAnimSite74.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor75 = createNode("TouchSensor");
TouchSensor75.description = "HAnimSite waist_preferred_anterior_pt";
HAnimSite74.children = new MFNode();

HAnimSite74.children[0] = TouchSensor75;

Shape Shape76 = createNode("Shape");
Shape76.USE = "HAnimSiteShape";
HAnimSite74.children[1] = Shape76;

HAnimJoint32.hAnimSite[12] = HAnimSite74;

HAnimSite HAnimSite77 = createNode("HAnimSite");
HAnimSite77.name = "waist_preferred_posterior_pt";
HAnimSite77.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite77.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
TouchSensor TouchSensor78 = createNode("TouchSensor");
TouchSensor78.description = "HAnimSite waist_preferred_posterior_pt";
HAnimSite77.children = new MFNode();

HAnimSite77.children[0] = TouchSensor78;

Shape Shape79 = createNode("Shape");
Shape79.USE = "HAnimSiteShape";
HAnimSite77.children[1] = Shape79;

HAnimJoint32.hAnimSite[13] = HAnimSite77;

HAnimJoint HAnimJoint80 = createNode("HAnimJoint");
HAnimJoint80.name = "sacroiliac";
HAnimJoint80.DEF = "hanim_sacroiliac";
HAnimJoint80.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimJoint80.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint80.llimit = new MFFloat(new float[0,0,0]);
Shape Shape81 = createNode("Shape");
LineSet LineSet82 = createNode("LineSet");
LineSet82.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate83 = createNode("Coordinate");
Coordinate83.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet82.coord = Coordinate83;

//from sacroiliac to l_hip
ColorRGBA ColorRGBA84 = createNode("ColorRGBA");
ColorRGBA84.USE = "HAnimSegmentLineColorRGBA";
LineSet82.color = ColorRGBA84;

Shape81.geometry = LineSet82;

HAnimJoint80.shape = Shape81;

HAnimSite HAnimSite85 = createNode("HAnimSite");
HAnimSite85.name = "l_femoral_lateral_epicondyles_pt";
HAnimSite85.DEF = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimSite85.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
TouchSensor TouchSensor86 = createNode("TouchSensor");
TouchSensor86.description = "HAnimSite l_femoral_lateral_epicondyles_pt";
HAnimSite85.children = new MFNode();

HAnimSite85.children[0] = TouchSensor86;

Shape Shape87 = createNode("Shape");
Shape87.USE = "HAnimSiteShape";
HAnimSite85.children[1] = Shape87;

HAnimJoint80.hAnimSite = new undefined();

HAnimJoint80.hAnimSite[0] = HAnimSite85;

HAnimSite HAnimSite88 = createNode("HAnimSite");
HAnimSite88.name = "l_femoral_medial_epicondyles_pt";
HAnimSite88.DEF = "hanim_l_femoral_medial_epicondyles_pt";
HAnimSite88.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
TouchSensor TouchSensor89 = createNode("TouchSensor");
TouchSensor89.description = "HAnimSite l_femoral_medial_epicondyles_pt";
HAnimSite88.children = new MFNode();

HAnimSite88.children[0] = TouchSensor89;

Shape Shape90 = createNode("Shape");
Shape90.USE = "HAnimSiteShape";
HAnimSite88.children[1] = Shape90;

HAnimJoint80.hAnimSite[1] = HAnimSite88;

HAnimSite HAnimSite91 = createNode("HAnimSite");
HAnimSite91.name = "l_knee_crease_pt";
HAnimSite91.DEF = "hanim_l_knee_crease_pt";
HAnimSite91.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
TouchSensor TouchSensor92 = createNode("TouchSensor");
TouchSensor92.description = "HAnimSite l_knee_crease_pt";
HAnimSite91.children = new MFNode();

HAnimSite91.children[0] = TouchSensor92;

Shape Shape93 = createNode("Shape");
Shape93.USE = "HAnimSiteShape";
HAnimSite91.children[1] = Shape93;

HAnimJoint80.hAnimSite[2] = HAnimSite91;

HAnimSite HAnimSite94 = createNode("HAnimSite");
HAnimSite94.name = "l_suprapatella_pt";
HAnimSite94.DEF = "hanim_l_suprapatella_pt";
HAnimSite94.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor95 = createNode("TouchSensor");
TouchSensor95.description = "HAnimSite l_suprapatella_pt";
HAnimSite94.children = new MFNode();

HAnimSite94.children[0] = TouchSensor95;

Shape Shape96 = createNode("Shape");
Shape96.USE = "HAnimSiteShape";
HAnimSite94.children[1] = Shape96;

HAnimJoint80.hAnimSite[3] = HAnimSite94;

Shape Shape97 = createNode("Shape");
LineSet LineSet98 = createNode("LineSet");
LineSet98.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate99 = createNode("Coordinate");
Coordinate99.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet98.coord = Coordinate99;

//from sacroiliac to r_hip
ColorRGBA ColorRGBA100 = createNode("ColorRGBA");
ColorRGBA100.USE = "HAnimSegmentLineColorRGBA";
LineSet98.color = ColorRGBA100;

Shape97.geometry = LineSet98;

HAnimJoint80.shape[4] = Shape97;

HAnimSite HAnimSite101 = createNode("HAnimSite");
HAnimSite101.name = "r_femoral_lateral_epicondyles_pt";
HAnimSite101.DEF = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimSite101.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
TouchSensor TouchSensor102 = createNode("TouchSensor");
TouchSensor102.description = "HAnimSite r_femoral_lateral_epicondyles_pt";
HAnimSite101.children = new MFNode();

HAnimSite101.children[0] = TouchSensor102;

Shape Shape103 = createNode("Shape");
Shape103.USE = "HAnimSiteShape";
HAnimSite101.children[1] = Shape103;

HAnimJoint80.hAnimSite[5] = HAnimSite101;

HAnimSite HAnimSite104 = createNode("HAnimSite");
HAnimSite104.name = "r_femoral_medial_epicondyles_pt";
HAnimSite104.DEF = "hanim_r_femoral_medial_epicondyles_pt";
HAnimSite104.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
TouchSensor TouchSensor105 = createNode("TouchSensor");
TouchSensor105.description = "HAnimSite r_femoral_medial_epicondyles_pt";
HAnimSite104.children = new MFNode();

HAnimSite104.children[0] = TouchSensor105;

Shape Shape106 = createNode("Shape");
Shape106.USE = "HAnimSiteShape";
HAnimSite104.children[1] = Shape106;

HAnimJoint80.hAnimSite[6] = HAnimSite104;

HAnimSite HAnimSite107 = createNode("HAnimSite");
HAnimSite107.name = "r_knee_crease_pt";
HAnimSite107.DEF = "hanim_r_knee_crease_pt";
HAnimSite107.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
TouchSensor TouchSensor108 = createNode("TouchSensor");
TouchSensor108.description = "HAnimSite r_knee_crease_pt";
HAnimSite107.children = new MFNode();

HAnimSite107.children[0] = TouchSensor108;

Shape Shape109 = createNode("Shape");
Shape109.USE = "HAnimSiteShape";
HAnimSite107.children[1] = Shape109;

HAnimJoint80.hAnimSite[7] = HAnimSite107;

HAnimSite HAnimSite110 = createNode("HAnimSite");
HAnimSite110.name = "r_suprapatella_pt";
HAnimSite110.DEF = "hanim_r_suprapatella_pt";
HAnimSite110.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor111 = createNode("TouchSensor");
TouchSensor111.description = "HAnimSite r_suprapatella_pt";
HAnimSite110.children = new MFNode();

HAnimSite110.children[0] = TouchSensor111;

Shape Shape112 = createNode("Shape");
Shape112.USE = "HAnimSiteShape";
HAnimSite110.children[1] = Shape112;

HAnimJoint80.hAnimSite[8] = HAnimSite110;

HAnimJoint HAnimJoint113 = createNode("HAnimJoint");
HAnimJoint113.name = "l_hip";
HAnimJoint113.DEF = "hanim_l_hip";
HAnimJoint113.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimJoint113.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint113.llimit = new MFFloat(new float[0,0,0]);
Shape Shape114 = createNode("Shape");
LineSet LineSet115 = createNode("LineSet");
LineSet115.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate116 = createNode("Coordinate");
Coordinate116.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet115.coord = Coordinate116;

//from l_hip to l_knee
ColorRGBA ColorRGBA117 = createNode("ColorRGBA");
ColorRGBA117.USE = "HAnimSegmentLineColorRGBA";
LineSet115.color = ColorRGBA117;

Shape114.geometry = LineSet115;

HAnimJoint113.shape = Shape114;

HAnimSite HAnimSite118 = createNode("HAnimSite");
HAnimSite118.name = "l_lateral_malleolus_pt";
HAnimSite118.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite118.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
TouchSensor TouchSensor119 = createNode("TouchSensor");
TouchSensor119.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite118.children = new MFNode();

HAnimSite118.children[0] = TouchSensor119;

Shape Shape120 = createNode("Shape");
Shape120.USE = "HAnimSiteShape";
HAnimSite118.children[1] = Shape120;

HAnimJoint113.hAnimSite = new undefined();

HAnimJoint113.hAnimSite[0] = HAnimSite118;

HAnimSite HAnimSite121 = createNode("HAnimSite");
HAnimSite121.name = "l_medial_malleolus_pt";
HAnimSite121.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite121.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
TouchSensor TouchSensor122 = createNode("TouchSensor");
TouchSensor122.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite121.children = new MFNode();

HAnimSite121.children[0] = TouchSensor122;

Shape Shape123 = createNode("Shape");
Shape123.USE = "HAnimSiteShape";
HAnimSite121.children[1] = Shape123;

HAnimJoint113.hAnimSite[1] = HAnimSite121;

HAnimSite HAnimSite124 = createNode("HAnimSite");
HAnimSite124.name = "l_tibiale_pt";
HAnimSite124.DEF = "hanim_l_tibiale_pt";
HAnimSite124.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor125 = createNode("TouchSensor");
TouchSensor125.description = "HAnimSite l_tibiale_pt";
HAnimSite124.children = new MFNode();

HAnimSite124.children[0] = TouchSensor125;

Shape Shape126 = createNode("Shape");
Shape126.USE = "HAnimSiteShape";
HAnimSite124.children[1] = Shape126;

HAnimJoint113.hAnimSite[2] = HAnimSite124;

HAnimJoint HAnimJoint127 = createNode("HAnimJoint");
HAnimJoint127.name = "l_knee";
HAnimJoint127.DEF = "hanim_l_knee";
HAnimJoint127.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimJoint127.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint127.llimit = new MFFloat(new float[0,0,0]);
Shape Shape128 = createNode("Shape");
LineSet LineSet129 = createNode("LineSet");
LineSet129.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate130 = createNode("Coordinate");
Coordinate130.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet129.coord = Coordinate130;

//from l_knee to l_talocrural
ColorRGBA ColorRGBA131 = createNode("ColorRGBA");
ColorRGBA131.USE = "HAnimSegmentLineColorRGBA";
LineSet129.color = ColorRGBA131;

Shape128.geometry = LineSet129;

HAnimJoint127.shape = Shape128;

HAnimSite HAnimSite132 = createNode("HAnimSite");
HAnimSite132.name = "l_calcaneus_posterior_pt";
HAnimSite132.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite132.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
TouchSensor TouchSensor133 = createNode("TouchSensor");
TouchSensor133.description = "HAnimSite l_calcaneus_posterior_pt";
HAnimSite132.children = new MFNode();

HAnimSite132.children[0] = TouchSensor133;

Shape Shape134 = createNode("Shape");
Shape134.USE = "HAnimSiteShape";
HAnimSite132.children[1] = Shape134;

HAnimJoint127.hAnimSite = new undefined();

HAnimJoint127.hAnimSite[0] = HAnimSite132;

HAnimSite HAnimSite135 = createNode("HAnimSite");
HAnimSite135.name = "l_sphyrion_pt";
HAnimSite135.DEF = "hanim_l_sphyrion_pt";
HAnimSite135.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
TouchSensor TouchSensor136 = createNode("TouchSensor");
TouchSensor136.description = "HAnimSite l_sphyrion_pt";
HAnimSite135.children = new MFNode();

HAnimSite135.children[0] = TouchSensor136;

Shape Shape137 = createNode("Shape");
Shape137.USE = "HAnimSiteShape";
HAnimSite135.children[1] = Shape137;

HAnimJoint127.hAnimSite[1] = HAnimSite135;

HAnimJoint HAnimJoint138 = createNode("HAnimJoint");
HAnimJoint138.name = "l_talocrural";
HAnimJoint138.DEF = "hanim_l_talocrural";
HAnimJoint138.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimJoint138.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint138.llimit = new MFFloat(new float[0,0,0]);
Shape Shape139 = createNode("Shape");
LineSet LineSet140 = createNode("LineSet");
LineSet140.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate141 = createNode("Coordinate");
Coordinate141.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0,1,0]);
LineSet140.coord = Coordinate141;

//from l_talocrural to l_talocalcaneonavicular
ColorRGBA ColorRGBA142 = createNode("ColorRGBA");
ColorRGBA142.USE = "HAnimSegmentLineColorRGBA";
LineSet140.color = ColorRGBA142;

Shape139.geometry = LineSet140;

HAnimJoint138.shape = Shape139;

Shape Shape143 = createNode("Shape");
LineSet LineSet144 = createNode("LineSet");
LineSet144.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate145 = createNode("Coordinate");
Coordinate145.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0,1,0]);
LineSet144.coord = Coordinate145;

//from l_talocrural to l_calcaneocuboid
ColorRGBA ColorRGBA146 = createNode("ColorRGBA");
ColorRGBA146.USE = "HAnimSegmentLineColorRGBA";
LineSet144.color = ColorRGBA146;

Shape143.geometry = LineSet144;

HAnimJoint138.shape = new undefined();

HAnimJoint138.shape[0] = Shape143;

HAnimJoint HAnimJoint147 = createNode("HAnimJoint");
HAnimJoint147.name = "l_talocalcaneonavicular";
HAnimJoint147.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint147.center = new SFVec3f(new float[0,1,0]);
HAnimJoint147.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint147.llimit = new MFFloat(new float[0,0,0]);
Shape Shape148 = createNode("Shape");
LineSet LineSet149 = createNode("LineSet");
LineSet149.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate150 = createNode("Coordinate");
Coordinate150.point = new MFVec3f(new float[0,1,0]);
LineSet149.coord = Coordinate150;

//from l_talocalcaneonavicular to l_cuneonavicular_1
ColorRGBA ColorRGBA151 = createNode("ColorRGBA");
ColorRGBA151.USE = "HAnimSegmentLineColorRGBA";
LineSet149.color = ColorRGBA151;

Shape148.geometry = LineSet149;

HAnimJoint147.shape = Shape148;

Shape Shape152 = createNode("Shape");
LineSet LineSet153 = createNode("LineSet");
LineSet153.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate154 = createNode("Coordinate");
Coordinate154.point = new MFVec3f(new float[0,1,0]);
LineSet153.coord = Coordinate154;

//from l_talocalcaneonavicular to l_cuneonavicular_2
ColorRGBA ColorRGBA155 = createNode("ColorRGBA");
ColorRGBA155.USE = "HAnimSegmentLineColorRGBA";
LineSet153.color = ColorRGBA155;

Shape152.geometry = LineSet153;

HAnimJoint147.shape = new undefined();

HAnimJoint147.shape[0] = Shape152;

Shape Shape156 = createNode("Shape");
LineSet LineSet157 = createNode("LineSet");
LineSet157.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate158 = createNode("Coordinate");
Coordinate158.point = new MFVec3f(new float[0,1,0]);
LineSet157.coord = Coordinate158;

//from l_talocalcaneonavicular to l_cuneonavicular_3
ColorRGBA ColorRGBA159 = createNode("ColorRGBA");
ColorRGBA159.USE = "HAnimSegmentLineColorRGBA";
LineSet157.color = ColorRGBA159;

Shape156.geometry = LineSet157;

HAnimJoint147.shape[1] = Shape156;

HAnimJoint HAnimJoint160 = createNode("HAnimJoint");
HAnimJoint160.name = "l_cuneonavicular_1";
HAnimJoint160.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint160.center = new SFVec3f(new float[0,1,0]);
HAnimJoint160.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint160.llimit = new MFFloat(new float[0,0,0]);
Shape Shape161 = createNode("Shape");
LineSet LineSet162 = createNode("LineSet");
LineSet162.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate163 = createNode("Coordinate");
Coordinate163.point = new MFVec3f(new float[0,1,0]);
LineSet162.coord = Coordinate163;

//from l_cuneonavicular_1 to l_tarsometatarsal_1
ColorRGBA ColorRGBA164 = createNode("ColorRGBA");
ColorRGBA164.USE = "HAnimSegmentLineColorRGBA";
LineSet162.color = ColorRGBA164;

Shape161.geometry = LineSet162;

HAnimJoint160.shape = Shape161;

HAnimJoint HAnimJoint165 = createNode("HAnimJoint");
HAnimJoint165.name = "l_tarsometatarsal_1";
HAnimJoint165.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint165.center = new SFVec3f(new float[0,1,0]);
HAnimJoint165.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint165.llimit = new MFFloat(new float[0,0,0]);
Shape Shape166 = createNode("Shape");
LineSet LineSet167 = createNode("LineSet");
LineSet167.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate168 = createNode("Coordinate");
Coordinate168.point = new MFVec3f(new float[0,1,0]);
LineSet167.coord = Coordinate168;

//from l_tarsometatarsal_1 to l_metatarsophalangeal_1
ColorRGBA ColorRGBA169 = createNode("ColorRGBA");
ColorRGBA169.USE = "HAnimSegmentLineColorRGBA";
LineSet167.color = ColorRGBA169;

Shape166.geometry = LineSet167;

HAnimJoint165.shape = Shape166;

HAnimSite HAnimSite170 = createNode("HAnimSite");
HAnimSite170.name = "l_metatarsal_phalanx_1_pt";
HAnimSite170.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite170.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor171 = createNode("TouchSensor");
TouchSensor171.description = "HAnimSite l_metatarsal_phalanx_1_pt";
HAnimSite170.children = new MFNode();

HAnimSite170.children[0] = TouchSensor171;

Shape Shape172 = createNode("Shape");
Shape172.USE = "HAnimSiteShape";
HAnimSite170.children[1] = Shape172;

HAnimJoint165.hAnimSite = new undefined();

HAnimJoint165.hAnimSite[0] = HAnimSite170;

HAnimJoint HAnimJoint173 = createNode("HAnimJoint");
HAnimJoint173.name = "l_metatarsophalangeal_1";
HAnimJoint173.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint173.center = new SFVec3f(new float[0,1,0]);
HAnimJoint173.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint173.llimit = new MFFloat(new float[0,0,0]);
Shape Shape174 = createNode("Shape");
LineSet LineSet175 = createNode("LineSet");
LineSet175.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate176 = createNode("Coordinate");
Coordinate176.point = new MFVec3f(new float[0,1,0]);
LineSet175.coord = Coordinate176;

//from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1
ColorRGBA ColorRGBA177 = createNode("ColorRGBA");
ColorRGBA177.USE = "HAnimSegmentLineColorRGBA";
LineSet175.color = ColorRGBA177;

Shape174.geometry = LineSet175;

HAnimJoint173.shape = Shape174;

HAnimSite HAnimSite178 = createNode("HAnimSite");
HAnimSite178.name = "l_tarsal_distal_phalanx_1_tip";
HAnimSite178.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimSite178.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor179 = createNode("TouchSensor");
TouchSensor179.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite178.children = new MFNode();

HAnimSite178.children[0] = TouchSensor179;

Shape Shape180 = createNode("Shape");
Shape180.USE = "HAnimSiteShape";
HAnimSite178.children[1] = Shape180;

HAnimJoint173.hAnimSite = new undefined();

HAnimJoint173.hAnimSite[0] = HAnimSite178;

HAnimJoint HAnimJoint181 = createNode("HAnimJoint");
HAnimJoint181.name = "l_tarsal_interphalangeal_1";
HAnimJoint181.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint181.center = new SFVec3f(new float[0,1,0]);
HAnimJoint181.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint181.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint173.children[1] = HAnimJoint181;

HAnimJoint165.children[1] = HAnimJoint173;

HAnimJoint160.children = new MFNode();

HAnimJoint160.children[0] = HAnimJoint165;

HAnimJoint147.children[2] = HAnimJoint160;

HAnimJoint HAnimJoint182 = createNode("HAnimJoint");
HAnimJoint182.name = "l_cuneonavicular_2";
HAnimJoint182.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint182.center = new SFVec3f(new float[0,1,0]);
HAnimJoint182.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint182.llimit = new MFFloat(new float[0,0,0]);
Shape Shape183 = createNode("Shape");
LineSet LineSet184 = createNode("LineSet");
LineSet184.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate185 = createNode("Coordinate");
Coordinate185.point = new MFVec3f(new float[0,1,0]);
LineSet184.coord = Coordinate185;

//from l_cuneonavicular_2 to l_tarsometatarsal_2
ColorRGBA ColorRGBA186 = createNode("ColorRGBA");
ColorRGBA186.USE = "HAnimSegmentLineColorRGBA";
LineSet184.color = ColorRGBA186;

Shape183.geometry = LineSet184;

HAnimJoint182.shape = Shape183;

HAnimJoint HAnimJoint187 = createNode("HAnimJoint");
HAnimJoint187.name = "l_tarsometatarsal_2";
HAnimJoint187.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint187.center = new SFVec3f(new float[0,1,0]);
HAnimJoint187.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint187.llimit = new MFFloat(new float[0,0,0]);
Shape Shape188 = createNode("Shape");
LineSet LineSet189 = createNode("LineSet");
LineSet189.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate190 = createNode("Coordinate");
Coordinate190.point = new MFVec3f(new float[0,1,0]);
LineSet189.coord = Coordinate190;

//from l_tarsometatarsal_2 to l_metatarsophalangeal_2
ColorRGBA ColorRGBA191 = createNode("ColorRGBA");
ColorRGBA191.USE = "HAnimSegmentLineColorRGBA";
LineSet189.color = ColorRGBA191;

Shape188.geometry = LineSet189;

HAnimJoint187.shape = Shape188;

HAnimJoint HAnimJoint192 = createNode("HAnimJoint");
HAnimJoint192.name = "l_metatarsophalangeal_2";
HAnimJoint192.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint192.center = new SFVec3f(new float[0,1,0]);
HAnimJoint192.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint192.llimit = new MFFloat(new float[0,0,0]);
Shape Shape193 = createNode("Shape");
LineSet LineSet194 = createNode("LineSet");
LineSet194.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate195 = createNode("Coordinate");
Coordinate195.point = new MFVec3f(new float[0,1,0]);
LineSet194.coord = Coordinate195;

//from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2
ColorRGBA ColorRGBA196 = createNode("ColorRGBA");
ColorRGBA196.USE = "HAnimSegmentLineColorRGBA";
LineSet194.color = ColorRGBA196;

Shape193.geometry = LineSet194;

HAnimJoint192.shape = Shape193;

HAnimJoint HAnimJoint197 = createNode("HAnimJoint");
HAnimJoint197.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint197.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint197.center = new SFVec3f(new float[0,1,0]);
HAnimJoint197.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint197.llimit = new MFFloat(new float[0,0,0]);
Shape Shape198 = createNode("Shape");
LineSet LineSet199 = createNode("LineSet");
LineSet199.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate200 = createNode("Coordinate");
Coordinate200.point = new MFVec3f(new float[0,1,0]);
LineSet199.coord = Coordinate200;

//from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2
ColorRGBA ColorRGBA201 = createNode("ColorRGBA");
ColorRGBA201.USE = "HAnimSegmentLineColorRGBA";
LineSet199.color = ColorRGBA201;

Shape198.geometry = LineSet199;

HAnimJoint197.shape = Shape198;

HAnimSite HAnimSite202 = createNode("HAnimSite");
HAnimSite202.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite202.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite202.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
TouchSensor TouchSensor203 = createNode("TouchSensor");
TouchSensor203.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite202.children = new MFNode();

HAnimSite202.children[0] = TouchSensor203;

Shape Shape204 = createNode("Shape");
Shape204.USE = "HAnimSiteShape";
HAnimSite202.children[1] = Shape204;

HAnimJoint197.hAnimSite = new undefined();

HAnimJoint197.hAnimSite[0] = HAnimSite202;

HAnimJoint HAnimJoint205 = createNode("HAnimJoint");
HAnimJoint205.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint205.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint205.center = new SFVec3f(new float[0,1,0]);
HAnimJoint205.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint205.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint197.children[1] = HAnimJoint205;

HAnimJoint192.children = new MFNode();

HAnimJoint192.children[0] = HAnimJoint197;

HAnimJoint187.children = new MFNode();

HAnimJoint187.children[0] = HAnimJoint192;

HAnimJoint182.children = new MFNode();

HAnimJoint182.children[0] = HAnimJoint187;

HAnimJoint147.children[3] = HAnimJoint182;

HAnimJoint HAnimJoint206 = createNode("HAnimJoint");
HAnimJoint206.name = "l_cuneonavicular_3";
HAnimJoint206.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint206.center = new SFVec3f(new float[0,1,0]);
HAnimJoint206.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint206.llimit = new MFFloat(new float[0,0,0]);
Shape Shape207 = createNode("Shape");
LineSet LineSet208 = createNode("LineSet");
LineSet208.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate209 = createNode("Coordinate");
Coordinate209.point = new MFVec3f(new float[0,1,0]);
LineSet208.coord = Coordinate209;

//from l_cuneonavicular_3 to l_tarsometatarsal_3
ColorRGBA ColorRGBA210 = createNode("ColorRGBA");
ColorRGBA210.USE = "HAnimSegmentLineColorRGBA";
LineSet208.color = ColorRGBA210;

Shape207.geometry = LineSet208;

HAnimJoint206.shape = Shape207;

HAnimJoint HAnimJoint211 = createNode("HAnimJoint");
HAnimJoint211.name = "l_tarsometatarsal_3";
HAnimJoint211.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint211.center = new SFVec3f(new float[0,1,0]);
HAnimJoint211.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint211.llimit = new MFFloat(new float[0,0,0]);
Shape Shape212 = createNode("Shape");
LineSet LineSet213 = createNode("LineSet");
LineSet213.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate214 = createNode("Coordinate");
Coordinate214.point = new MFVec3f(new float[0,1,0]);
LineSet213.coord = Coordinate214;

//from l_tarsometatarsal_3 to l_metatarsophalangeal_3
ColorRGBA ColorRGBA215 = createNode("ColorRGBA");
ColorRGBA215.USE = "HAnimSegmentLineColorRGBA";
LineSet213.color = ColorRGBA215;

Shape212.geometry = LineSet213;

HAnimJoint211.shape = Shape212;

HAnimJoint HAnimJoint216 = createNode("HAnimJoint");
HAnimJoint216.name = "l_metatarsophalangeal_3";
HAnimJoint216.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint216.center = new SFVec3f(new float[0,1,0]);
HAnimJoint216.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint216.llimit = new MFFloat(new float[0,0,0]);
Shape Shape217 = createNode("Shape");
LineSet LineSet218 = createNode("LineSet");
LineSet218.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate219 = createNode("Coordinate");
Coordinate219.point = new MFVec3f(new float[0,1,0]);
LineSet218.coord = Coordinate219;

//from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3
ColorRGBA ColorRGBA220 = createNode("ColorRGBA");
ColorRGBA220.USE = "HAnimSegmentLineColorRGBA";
LineSet218.color = ColorRGBA220;

Shape217.geometry = LineSet218;

HAnimJoint216.shape = Shape217;

HAnimJoint HAnimJoint221 = createNode("HAnimJoint");
HAnimJoint221.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint221.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint221.center = new SFVec3f(new float[0,1,0]);
HAnimJoint221.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint221.llimit = new MFFloat(new float[0,0,0]);
Shape Shape222 = createNode("Shape");
LineSet LineSet223 = createNode("LineSet");
LineSet223.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate224 = createNode("Coordinate");
Coordinate224.point = new MFVec3f(new float[0,1,0]);
LineSet223.coord = Coordinate224;

//from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3
ColorRGBA ColorRGBA225 = createNode("ColorRGBA");
ColorRGBA225.USE = "HAnimSegmentLineColorRGBA";
LineSet223.color = ColorRGBA225;

Shape222.geometry = LineSet223;

HAnimJoint221.shape = Shape222;

HAnimSite HAnimSite226 = createNode("HAnimSite");
HAnimSite226.name = "l_tarsal_distal_phalanx_3_tip";
HAnimSite226.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimSite226.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor227 = createNode("TouchSensor");
TouchSensor227.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite226.children = new MFNode();

HAnimSite226.children[0] = TouchSensor227;

Shape Shape228 = createNode("Shape");
Shape228.USE = "HAnimSiteShape";
HAnimSite226.children[1] = Shape228;

HAnimJoint221.hAnimSite = new undefined();

HAnimJoint221.hAnimSite[0] = HAnimSite226;

HAnimJoint HAnimJoint229 = createNode("HAnimJoint");
HAnimJoint229.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint229.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint229.center = new SFVec3f(new float[0,1,0]);
HAnimJoint229.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint229.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint221.children[1] = HAnimJoint229;

HAnimJoint216.children = new MFNode();

HAnimJoint216.children[0] = HAnimJoint221;

HAnimJoint211.children = new MFNode();

HAnimJoint211.children[0] = HAnimJoint216;

HAnimJoint206.children = new MFNode();

HAnimJoint206.children[0] = HAnimJoint211;

HAnimJoint147.children[4] = HAnimJoint206;

HAnimJoint138.children[1] = HAnimJoint147;

HAnimJoint HAnimJoint230 = createNode("HAnimJoint");
HAnimJoint230.name = "l_calcaneocuboid";
HAnimJoint230.DEF = "hanim_l_calcaneocuboid";
HAnimJoint230.center = new SFVec3f(new float[0,1,0]);
HAnimJoint230.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint230.llimit = new MFFloat(new float[0,0,0]);
Shape Shape231 = createNode("Shape");
LineSet LineSet232 = createNode("LineSet");
LineSet232.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate233 = createNode("Coordinate");
Coordinate233.point = new MFVec3f(new float[0,1,0]);
LineSet232.coord = Coordinate233;

//from l_calcaneocuboid to l_transversetarsal
ColorRGBA ColorRGBA234 = createNode("ColorRGBA");
ColorRGBA234.USE = "HAnimSegmentLineColorRGBA";
LineSet232.color = ColorRGBA234;

Shape231.geometry = LineSet232;

HAnimJoint230.shape = Shape231;

HAnimJoint HAnimJoint235 = createNode("HAnimJoint");
HAnimJoint235.name = "l_transversetarsal";
HAnimJoint235.DEF = "hanim_l_transversetarsal";
HAnimJoint235.center = new SFVec3f(new float[0,1,0]);
HAnimJoint235.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint235.llimit = new MFFloat(new float[0,0,0]);
Shape Shape236 = createNode("Shape");
LineSet LineSet237 = createNode("LineSet");
LineSet237.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate238 = createNode("Coordinate");
Coordinate238.point = new MFVec3f(new float[0,1,0]);
LineSet237.coord = Coordinate238;

//from l_transversetarsal to l_tarsometatarsal_4
ColorRGBA ColorRGBA239 = createNode("ColorRGBA");
ColorRGBA239.USE = "HAnimSegmentLineColorRGBA";
LineSet237.color = ColorRGBA239;

Shape236.geometry = LineSet237;

HAnimJoint235.shape = Shape236;

Shape Shape240 = createNode("Shape");
LineSet LineSet241 = createNode("LineSet");
LineSet241.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate242 = createNode("Coordinate");
Coordinate242.point = new MFVec3f(new float[0,1,0]);
LineSet241.coord = Coordinate242;

//from l_transversetarsal to l_tarsometatarsal_5
ColorRGBA ColorRGBA243 = createNode("ColorRGBA");
ColorRGBA243.USE = "HAnimSegmentLineColorRGBA";
LineSet241.color = ColorRGBA243;

Shape240.geometry = LineSet241;

HAnimJoint235.shape = new undefined();

HAnimJoint235.shape[0] = Shape240;

HAnimJoint HAnimJoint244 = createNode("HAnimJoint");
HAnimJoint244.name = "l_tarsometatarsal_4";
HAnimJoint244.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint244.center = new SFVec3f(new float[0,1,0]);
HAnimJoint244.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint244.llimit = new MFFloat(new float[0,0,0]);
Shape Shape245 = createNode("Shape");
LineSet LineSet246 = createNode("LineSet");
LineSet246.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate247 = createNode("Coordinate");
Coordinate247.point = new MFVec3f(new float[0,1,0]);
LineSet246.coord = Coordinate247;

//from l_tarsometatarsal_4 to l_metatarsophalangeal_4
ColorRGBA ColorRGBA248 = createNode("ColorRGBA");
ColorRGBA248.USE = "HAnimSegmentLineColorRGBA";
LineSet246.color = ColorRGBA248;

Shape245.geometry = LineSet246;

HAnimJoint244.shape = Shape245;

HAnimJoint HAnimJoint249 = createNode("HAnimJoint");
HAnimJoint249.name = "l_metatarsophalangeal_4";
HAnimJoint249.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint249.center = new SFVec3f(new float[0,1,0]);
HAnimJoint249.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint249.llimit = new MFFloat(new float[0,0,0]);
Shape Shape250 = createNode("Shape");
LineSet LineSet251 = createNode("LineSet");
LineSet251.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate252 = createNode("Coordinate");
Coordinate252.point = new MFVec3f(new float[0,1,0]);
LineSet251.coord = Coordinate252;

//from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4
ColorRGBA ColorRGBA253 = createNode("ColorRGBA");
ColorRGBA253.USE = "HAnimSegmentLineColorRGBA";
LineSet251.color = ColorRGBA253;

Shape250.geometry = LineSet251;

HAnimJoint249.shape = Shape250;

HAnimJoint HAnimJoint254 = createNode("HAnimJoint");
HAnimJoint254.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint254.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint254.center = new SFVec3f(new float[0,1,0]);
HAnimJoint254.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint254.llimit = new MFFloat(new float[0,0,0]);
Shape Shape255 = createNode("Shape");
LineSet LineSet256 = createNode("LineSet");
LineSet256.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate257 = createNode("Coordinate");
Coordinate257.point = new MFVec3f(new float[0,1,0]);
LineSet256.coord = Coordinate257;

//from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4
ColorRGBA ColorRGBA258 = createNode("ColorRGBA");
ColorRGBA258.USE = "HAnimSegmentLineColorRGBA";
LineSet256.color = ColorRGBA258;

Shape255.geometry = LineSet256;

HAnimJoint254.shape = Shape255;

HAnimSite HAnimSite259 = createNode("HAnimSite");
HAnimSite259.name = "l_tarsal_distal_phalanx_4_tip";
HAnimSite259.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimSite259.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor260 = createNode("TouchSensor");
TouchSensor260.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite259.children = new MFNode();

HAnimSite259.children[0] = TouchSensor260;

Shape Shape261 = createNode("Shape");
Shape261.USE = "HAnimSiteShape";
HAnimSite259.children[1] = Shape261;

HAnimJoint254.hAnimSite = new undefined();

HAnimJoint254.hAnimSite[0] = HAnimSite259;

HAnimJoint HAnimJoint262 = createNode("HAnimJoint");
HAnimJoint262.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint262.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint262.center = new SFVec3f(new float[0,1,0]);
HAnimJoint262.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint262.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint254.children[1] = HAnimJoint262;

HAnimJoint249.children = new MFNode();

HAnimJoint249.children[0] = HAnimJoint254;

HAnimJoint244.children = new MFNode();

HAnimJoint244.children[0] = HAnimJoint249;

HAnimJoint235.children[1] = HAnimJoint244;

HAnimJoint HAnimJoint263 = createNode("HAnimJoint");
HAnimJoint263.name = "l_tarsometatarsal_5";
HAnimJoint263.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint263.center = new SFVec3f(new float[0,1,0]);
HAnimJoint263.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint263.llimit = new MFFloat(new float[0,0,0]);
Shape Shape264 = createNode("Shape");
LineSet LineSet265 = createNode("LineSet");
LineSet265.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate266 = createNode("Coordinate");
Coordinate266.point = new MFVec3f(new float[0,1,0]);
LineSet265.coord = Coordinate266;

//from l_tarsometatarsal_5 to l_metatarsophalangeal_5
ColorRGBA ColorRGBA267 = createNode("ColorRGBA");
ColorRGBA267.USE = "HAnimSegmentLineColorRGBA";
LineSet265.color = ColorRGBA267;

Shape264.geometry = LineSet265;

HAnimJoint263.shape = Shape264;

HAnimSite HAnimSite268 = createNode("HAnimSite");
HAnimSite268.name = "l_metatarsal_phalanx_5_pt";
HAnimSite268.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite268.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor269 = createNode("TouchSensor");
TouchSensor269.description = "HAnimSite l_metatarsal_phalanx_5_pt";
HAnimSite268.children = new MFNode();

HAnimSite268.children[0] = TouchSensor269;

Shape Shape270 = createNode("Shape");
Shape270.USE = "HAnimSiteShape";
HAnimSite268.children[1] = Shape270;

HAnimJoint263.hAnimSite = new undefined();

HAnimJoint263.hAnimSite[0] = HAnimSite268;

HAnimJoint HAnimJoint271 = createNode("HAnimJoint");
HAnimJoint271.name = "l_metatarsophalangeal_5";
HAnimJoint271.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint271.center = new SFVec3f(new float[0,1,0]);
HAnimJoint271.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint271.llimit = new MFFloat(new float[0,0,0]);
Shape Shape272 = createNode("Shape");
LineSet LineSet273 = createNode("LineSet");
LineSet273.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate274 = createNode("Coordinate");
Coordinate274.point = new MFVec3f(new float[0,1,0]);
LineSet273.coord = Coordinate274;

//from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5
ColorRGBA ColorRGBA275 = createNode("ColorRGBA");
ColorRGBA275.USE = "HAnimSegmentLineColorRGBA";
LineSet273.color = ColorRGBA275;

Shape272.geometry = LineSet273;

HAnimJoint271.shape = Shape272;

HAnimJoint HAnimJoint276 = createNode("HAnimJoint");
HAnimJoint276.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint276.DEF = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimJoint276.center = new SFVec3f(new float[0,1,0]);
HAnimJoint276.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint276.llimit = new MFFloat(new float[0,0,0]);
Shape Shape277 = createNode("Shape");
LineSet LineSet278 = createNode("LineSet");
LineSet278.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate279 = createNode("Coordinate");
Coordinate279.point = new MFVec3f(new float[0,1,0]);
LineSet278.coord = Coordinate279;

//from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5
ColorRGBA ColorRGBA280 = createNode("ColorRGBA");
ColorRGBA280.USE = "HAnimSegmentLineColorRGBA";
LineSet278.color = ColorRGBA280;

Shape277.geometry = LineSet278;

HAnimJoint276.shape = Shape277;

HAnimSite HAnimSite281 = createNode("HAnimSite");
HAnimSite281.name = "l_tarsal_distal_phalanx_5_tip";
HAnimSite281.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimSite281.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor282 = createNode("TouchSensor");
TouchSensor282.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite281.children = new MFNode();

HAnimSite281.children[0] = TouchSensor282;

Shape Shape283 = createNode("Shape");
Shape283.USE = "HAnimSiteShape";
HAnimSite281.children[1] = Shape283;

HAnimJoint276.hAnimSite = new undefined();

HAnimJoint276.hAnimSite[0] = HAnimSite281;

HAnimJoint HAnimJoint284 = createNode("HAnimJoint");
HAnimJoint284.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint284.DEF = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimJoint284.center = new SFVec3f(new float[0,1,0]);
HAnimJoint284.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint284.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint276.children[1] = HAnimJoint284;

HAnimJoint271.children = new MFNode();

HAnimJoint271.children[0] = HAnimJoint276;

HAnimJoint263.children[1] = HAnimJoint271;

HAnimJoint235.children[2] = HAnimJoint263;

HAnimJoint230.children = new MFNode();

HAnimJoint230.children[0] = HAnimJoint235;

HAnimJoint138.children[2] = HAnimJoint230;

HAnimJoint127.children[2] = HAnimJoint138;

HAnimJoint113.children[3] = HAnimJoint127;

HAnimJoint80.children[9] = HAnimJoint113;

HAnimJoint HAnimJoint285 = createNode("HAnimJoint");
HAnimJoint285.name = "r_hip";
HAnimJoint285.DEF = "hanim_r_hip";
HAnimJoint285.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimJoint285.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint285.llimit = new MFFloat(new float[0,0,0]);
Shape Shape286 = createNode("Shape");
LineSet LineSet287 = createNode("LineSet");
LineSet287.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate288 = createNode("Coordinate");
Coordinate288.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet287.coord = Coordinate288;

//from r_hip to r_knee
ColorRGBA ColorRGBA289 = createNode("ColorRGBA");
ColorRGBA289.USE = "HAnimSegmentLineColorRGBA";
LineSet287.color = ColorRGBA289;

Shape286.geometry = LineSet287;

HAnimJoint285.shape = Shape286;

HAnimSite HAnimSite290 = createNode("HAnimSite");
HAnimSite290.name = "r_lateral_malleolus_pt";
HAnimSite290.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite290.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor291 = createNode("TouchSensor");
TouchSensor291.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite290.children = new MFNode();

HAnimSite290.children[0] = TouchSensor291;

Shape Shape292 = createNode("Shape");
Shape292.USE = "HAnimSiteShape";
HAnimSite290.children[1] = Shape292;

HAnimJoint285.hAnimSite = new undefined();

HAnimJoint285.hAnimSite[0] = HAnimSite290;

HAnimSite HAnimSite293 = createNode("HAnimSite");
HAnimSite293.name = "r_medial_malleolus_pt";
HAnimSite293.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite293.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor294 = createNode("TouchSensor");
TouchSensor294.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite293.children = new MFNode();

HAnimSite293.children[0] = TouchSensor294;

Shape Shape295 = createNode("Shape");
Shape295.USE = "HAnimSiteShape";
HAnimSite293.children[1] = Shape295;

HAnimJoint285.hAnimSite[1] = HAnimSite293;

HAnimSite HAnimSite296 = createNode("HAnimSite");
HAnimSite296.name = "r_tibiale_pt";
HAnimSite296.DEF = "hanim_r_tibiale_pt";
HAnimSite296.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor297 = createNode("TouchSensor");
TouchSensor297.description = "HAnimSite r_tibiale_pt";
HAnimSite296.children = new MFNode();

HAnimSite296.children[0] = TouchSensor297;

Shape Shape298 = createNode("Shape");
Shape298.USE = "HAnimSiteShape";
HAnimSite296.children[1] = Shape298;

HAnimJoint285.hAnimSite[2] = HAnimSite296;

HAnimJoint HAnimJoint299 = createNode("HAnimJoint");
HAnimJoint299.name = "r_knee";
HAnimJoint299.DEF = "hanim_r_knee";
HAnimJoint299.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimJoint299.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint299.llimit = new MFFloat(new float[0,0,0]);
Shape Shape300 = createNode("Shape");
LineSet LineSet301 = createNode("LineSet");
LineSet301.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate302 = createNode("Coordinate");
Coordinate302.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet301.coord = Coordinate302;

//from r_knee to r_talocrural
ColorRGBA ColorRGBA303 = createNode("ColorRGBA");
ColorRGBA303.USE = "HAnimSegmentLineColorRGBA";
LineSet301.color = ColorRGBA303;

Shape300.geometry = LineSet301;

HAnimJoint299.shape = Shape300;

HAnimSite HAnimSite304 = createNode("HAnimSite");
HAnimSite304.name = "r_calcaneus_posterior_pt";
HAnimSite304.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite304.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor305 = createNode("TouchSensor");
TouchSensor305.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite304.children = new MFNode();

HAnimSite304.children[0] = TouchSensor305;

Shape Shape306 = createNode("Shape");
Shape306.USE = "HAnimSiteShape";
HAnimSite304.children[1] = Shape306;

HAnimJoint299.hAnimSite = new undefined();

HAnimJoint299.hAnimSite[0] = HAnimSite304;

HAnimSite HAnimSite307 = createNode("HAnimSite");
HAnimSite307.name = "r_sphyrion_pt";
HAnimSite307.DEF = "hanim_r_sphyrion_pt";
HAnimSite307.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor308 = createNode("TouchSensor");
TouchSensor308.description = "HAnimSite r_sphyrion_pt";
HAnimSite307.children = new MFNode();

HAnimSite307.children[0] = TouchSensor308;

Shape Shape309 = createNode("Shape");
Shape309.USE = "HAnimSiteShape";
HAnimSite307.children[1] = Shape309;

HAnimJoint299.hAnimSite[1] = HAnimSite307;

HAnimJoint HAnimJoint310 = createNode("HAnimJoint");
HAnimJoint310.name = "r_talocrural";
HAnimJoint310.DEF = "hanim_r_talocrural";
HAnimJoint310.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimJoint310.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint310.llimit = new MFFloat(new float[0,0,0]);
Shape Shape311 = createNode("Shape");
LineSet LineSet312 = createNode("LineSet");
LineSet312.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate313 = createNode("Coordinate");
Coordinate313.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,0,1,0]);
LineSet312.coord = Coordinate313;

//from r_talocrural to r_talocalcaneonavicular
ColorRGBA ColorRGBA314 = createNode("ColorRGBA");
ColorRGBA314.USE = "HAnimSegmentLineColorRGBA";
LineSet312.color = ColorRGBA314;

Shape311.geometry = LineSet312;

HAnimJoint310.shape = Shape311;

Shape Shape315 = createNode("Shape");
LineSet LineSet316 = createNode("LineSet");
LineSet316.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate317 = createNode("Coordinate");
Coordinate317.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,0,1,0]);
LineSet316.coord = Coordinate317;

//from r_talocrural to r_calcaneocuboid
ColorRGBA ColorRGBA318 = createNode("ColorRGBA");
ColorRGBA318.USE = "HAnimSegmentLineColorRGBA";
LineSet316.color = ColorRGBA318;

Shape315.geometry = LineSet316;

HAnimJoint310.shape = new undefined();

HAnimJoint310.shape[0] = Shape315;

HAnimJoint HAnimJoint319 = createNode("HAnimJoint");
HAnimJoint319.name = "r_talocalcaneonavicular";
HAnimJoint319.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint319.center = new SFVec3f(new float[0,1,0]);
HAnimJoint319.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint319.llimit = new MFFloat(new float[0,0,0]);
Shape Shape320 = createNode("Shape");
LineSet LineSet321 = createNode("LineSet");
LineSet321.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate322 = createNode("Coordinate");
Coordinate322.point = new MFVec3f(new float[0,1,0]);
LineSet321.coord = Coordinate322;

//from r_talocalcaneonavicular to r_cuneonavicular_1
ColorRGBA ColorRGBA323 = createNode("ColorRGBA");
ColorRGBA323.USE = "HAnimSegmentLineColorRGBA";
LineSet321.color = ColorRGBA323;

Shape320.geometry = LineSet321;

HAnimJoint319.shape = Shape320;

Shape Shape324 = createNode("Shape");
LineSet LineSet325 = createNode("LineSet");
LineSet325.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate326 = createNode("Coordinate");
Coordinate326.point = new MFVec3f(new float[0,1,0]);
LineSet325.coord = Coordinate326;

//from r_talocalcaneonavicular to r_cuneonavicular_2
ColorRGBA ColorRGBA327 = createNode("ColorRGBA");
ColorRGBA327.USE = "HAnimSegmentLineColorRGBA";
LineSet325.color = ColorRGBA327;

Shape324.geometry = LineSet325;

HAnimJoint319.shape = new undefined();

HAnimJoint319.shape[0] = Shape324;

Shape Shape328 = createNode("Shape");
LineSet LineSet329 = createNode("LineSet");
LineSet329.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate330 = createNode("Coordinate");
Coordinate330.point = new MFVec3f(new float[0,1,0]);
LineSet329.coord = Coordinate330;

//from r_talocalcaneonavicular to r_cuneonavicular_3
ColorRGBA ColorRGBA331 = createNode("ColorRGBA");
ColorRGBA331.USE = "HAnimSegmentLineColorRGBA";
LineSet329.color = ColorRGBA331;

Shape328.geometry = LineSet329;

HAnimJoint319.shape[1] = Shape328;

HAnimJoint HAnimJoint332 = createNode("HAnimJoint");
HAnimJoint332.name = "r_cuneonavicular_1";
HAnimJoint332.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint332.center = new SFVec3f(new float[0,1,0]);
HAnimJoint332.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint332.llimit = new MFFloat(new float[0,0,0]);
Shape Shape333 = createNode("Shape");
LineSet LineSet334 = createNode("LineSet");
LineSet334.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate335 = createNode("Coordinate");
Coordinate335.point = new MFVec3f(new float[0,1,0]);
LineSet334.coord = Coordinate335;

//from r_cuneonavicular_1 to r_tarsometatarsal_1
ColorRGBA ColorRGBA336 = createNode("ColorRGBA");
ColorRGBA336.USE = "HAnimSegmentLineColorRGBA";
LineSet334.color = ColorRGBA336;

Shape333.geometry = LineSet334;

HAnimJoint332.shape = Shape333;

HAnimJoint HAnimJoint337 = createNode("HAnimJoint");
HAnimJoint337.name = "r_tarsometatarsal_1";
HAnimJoint337.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint337.center = new SFVec3f(new float[0,1,0]);
HAnimJoint337.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint337.llimit = new MFFloat(new float[0,0,0]);
Shape Shape338 = createNode("Shape");
LineSet LineSet339 = createNode("LineSet");
LineSet339.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate340 = createNode("Coordinate");
Coordinate340.point = new MFVec3f(new float[0,1,0]);
LineSet339.coord = Coordinate340;

//from r_tarsometatarsal_1 to r_metatarsophalangeal_1
ColorRGBA ColorRGBA341 = createNode("ColorRGBA");
ColorRGBA341.USE = "HAnimSegmentLineColorRGBA";
LineSet339.color = ColorRGBA341;

Shape338.geometry = LineSet339;

HAnimJoint337.shape = Shape338;

HAnimSite HAnimSite342 = createNode("HAnimSite");
HAnimSite342.name = "r_metatarsal_phalanx_1_pt";
HAnimSite342.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite342.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor343 = createNode("TouchSensor");
TouchSensor343.description = "HAnimSite r_metatarsal_phalanx_1_pt";
HAnimSite342.children = new MFNode();

HAnimSite342.children[0] = TouchSensor343;

Shape Shape344 = createNode("Shape");
Shape344.USE = "HAnimSiteShape";
HAnimSite342.children[1] = Shape344;

HAnimJoint337.hAnimSite = new undefined();

HAnimJoint337.hAnimSite[0] = HAnimSite342;

HAnimJoint HAnimJoint345 = createNode("HAnimJoint");
HAnimJoint345.name = "r_metatarsophalangeal_1";
HAnimJoint345.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint345.center = new SFVec3f(new float[0,1,0]);
HAnimJoint345.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint345.llimit = new MFFloat(new float[0,0,0]);
Shape Shape346 = createNode("Shape");
LineSet LineSet347 = createNode("LineSet");
LineSet347.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate348 = createNode("Coordinate");
Coordinate348.point = new MFVec3f(new float[0,1,0]);
LineSet347.coord = Coordinate348;

//from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1
ColorRGBA ColorRGBA349 = createNode("ColorRGBA");
ColorRGBA349.USE = "HAnimSegmentLineColorRGBA";
LineSet347.color = ColorRGBA349;

Shape346.geometry = LineSet347;

HAnimJoint345.shape = Shape346;

HAnimSite HAnimSite350 = createNode("HAnimSite");
HAnimSite350.name = "r_tarsal_distal_phalanx_1_tip";
HAnimSite350.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimSite350.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor351 = createNode("TouchSensor");
TouchSensor351.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite350.children = new MFNode();

HAnimSite350.children[0] = TouchSensor351;

Shape Shape352 = createNode("Shape");
Shape352.USE = "HAnimSiteShape";
HAnimSite350.children[1] = Shape352;

HAnimJoint345.hAnimSite = new undefined();

HAnimJoint345.hAnimSite[0] = HAnimSite350;

HAnimJoint HAnimJoint353 = createNode("HAnimJoint");
HAnimJoint353.name = "r_tarsal_interphalangeal_1";
HAnimJoint353.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint353.center = new SFVec3f(new float[0,1,0]);
HAnimJoint353.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint353.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint345.children[1] = HAnimJoint353;

HAnimJoint337.children[1] = HAnimJoint345;

HAnimJoint332.children = new MFNode();

HAnimJoint332.children[0] = HAnimJoint337;

HAnimJoint319.children[2] = HAnimJoint332;

HAnimJoint HAnimJoint354 = createNode("HAnimJoint");
HAnimJoint354.name = "r_cuneonavicular_2";
HAnimJoint354.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint354.center = new SFVec3f(new float[0,1,0]);
HAnimJoint354.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint354.llimit = new MFFloat(new float[0,0,0]);
Shape Shape355 = createNode("Shape");
LineSet LineSet356 = createNode("LineSet");
LineSet356.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate357 = createNode("Coordinate");
Coordinate357.point = new MFVec3f(new float[0,1,0]);
LineSet356.coord = Coordinate357;

//from r_cuneonavicular_2 to r_tarsometatarsal_2
ColorRGBA ColorRGBA358 = createNode("ColorRGBA");
ColorRGBA358.USE = "HAnimSegmentLineColorRGBA";
LineSet356.color = ColorRGBA358;

Shape355.geometry = LineSet356;

HAnimJoint354.shape = Shape355;

HAnimJoint HAnimJoint359 = createNode("HAnimJoint");
HAnimJoint359.name = "r_tarsometatarsal_2";
HAnimJoint359.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint359.center = new SFVec3f(new float[0,1,0]);
HAnimJoint359.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint359.llimit = new MFFloat(new float[0,0,0]);
Shape Shape360 = createNode("Shape");
LineSet LineSet361 = createNode("LineSet");
LineSet361.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate362 = createNode("Coordinate");
Coordinate362.point = new MFVec3f(new float[0,1,0]);
LineSet361.coord = Coordinate362;

//from r_tarsometatarsal_2 to r_metatarsophalangeal_2
ColorRGBA ColorRGBA363 = createNode("ColorRGBA");
ColorRGBA363.USE = "HAnimSegmentLineColorRGBA";
LineSet361.color = ColorRGBA363;

Shape360.geometry = LineSet361;

HAnimJoint359.shape = Shape360;

HAnimJoint HAnimJoint364 = createNode("HAnimJoint");
HAnimJoint364.name = "r_metatarsophalangeal_2";
HAnimJoint364.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint364.center = new SFVec3f(new float[0,1,0]);
HAnimJoint364.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint364.llimit = new MFFloat(new float[0,0,0]);
Shape Shape365 = createNode("Shape");
LineSet LineSet366 = createNode("LineSet");
LineSet366.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate367 = createNode("Coordinate");
Coordinate367.point = new MFVec3f(new float[0,1,0]);
LineSet366.coord = Coordinate367;

//from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2
ColorRGBA ColorRGBA368 = createNode("ColorRGBA");
ColorRGBA368.USE = "HAnimSegmentLineColorRGBA";
LineSet366.color = ColorRGBA368;

Shape365.geometry = LineSet366;

HAnimJoint364.shape = Shape365;

HAnimJoint HAnimJoint369 = createNode("HAnimJoint");
HAnimJoint369.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint369.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint369.center = new SFVec3f(new float[0,1,0]);
HAnimJoint369.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint369.llimit = new MFFloat(new float[0,0,0]);
Shape Shape370 = createNode("Shape");
LineSet LineSet371 = createNode("LineSet");
LineSet371.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate372 = createNode("Coordinate");
Coordinate372.point = new MFVec3f(new float[0,1,0]);
LineSet371.coord = Coordinate372;

//from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2
ColorRGBA ColorRGBA373 = createNode("ColorRGBA");
ColorRGBA373.USE = "HAnimSegmentLineColorRGBA";
LineSet371.color = ColorRGBA373;

Shape370.geometry = LineSet371;

HAnimJoint369.shape = Shape370;

HAnimSite HAnimSite374 = createNode("HAnimSite");
HAnimSite374.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite374.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite374.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
TouchSensor TouchSensor375 = createNode("TouchSensor");
TouchSensor375.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite374.children = new MFNode();

HAnimSite374.children[0] = TouchSensor375;

Shape Shape376 = createNode("Shape");
Shape376.USE = "HAnimSiteShape";
HAnimSite374.children[1] = Shape376;

HAnimJoint369.hAnimSite = new undefined();

HAnimJoint369.hAnimSite[0] = HAnimSite374;

HAnimJoint HAnimJoint377 = createNode("HAnimJoint");
HAnimJoint377.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint377.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint377.center = new SFVec3f(new float[0,1,0]);
HAnimJoint377.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint377.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint369.children[1] = HAnimJoint377;

HAnimJoint364.children = new MFNode();

HAnimJoint364.children[0] = HAnimJoint369;

HAnimJoint359.children = new MFNode();

HAnimJoint359.children[0] = HAnimJoint364;

HAnimJoint354.children = new MFNode();

HAnimJoint354.children[0] = HAnimJoint359;

HAnimJoint319.children[3] = HAnimJoint354;

HAnimJoint HAnimJoint378 = createNode("HAnimJoint");
HAnimJoint378.name = "r_cuneonavicular_3";
HAnimJoint378.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint378.center = new SFVec3f(new float[0,1,0]);
HAnimJoint378.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint378.llimit = new MFFloat(new float[0,0,0]);
Shape Shape379 = createNode("Shape");
LineSet LineSet380 = createNode("LineSet");
LineSet380.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate381 = createNode("Coordinate");
Coordinate381.point = new MFVec3f(new float[0,1,0]);
LineSet380.coord = Coordinate381;

//from r_cuneonavicular_3 to r_tarsometatarsal_3
ColorRGBA ColorRGBA382 = createNode("ColorRGBA");
ColorRGBA382.USE = "HAnimSegmentLineColorRGBA";
LineSet380.color = ColorRGBA382;

Shape379.geometry = LineSet380;

HAnimJoint378.shape = Shape379;

HAnimJoint HAnimJoint383 = createNode("HAnimJoint");
HAnimJoint383.name = "r_tarsometatarsal_3";
HAnimJoint383.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint383.center = new SFVec3f(new float[0,1,0]);
HAnimJoint383.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint383.llimit = new MFFloat(new float[0,0,0]);
Shape Shape384 = createNode("Shape");
LineSet LineSet385 = createNode("LineSet");
LineSet385.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate386 = createNode("Coordinate");
Coordinate386.point = new MFVec3f(new float[0,1,0]);
LineSet385.coord = Coordinate386;

//from r_tarsometatarsal_3 to r_metatarsophalangeal_3
ColorRGBA ColorRGBA387 = createNode("ColorRGBA");
ColorRGBA387.USE = "HAnimSegmentLineColorRGBA";
LineSet385.color = ColorRGBA387;

Shape384.geometry = LineSet385;

HAnimJoint383.shape = Shape384;

HAnimJoint HAnimJoint388 = createNode("HAnimJoint");
HAnimJoint388.name = "r_metatarsophalangeal_3";
HAnimJoint388.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint388.center = new SFVec3f(new float[0,1,0]);
HAnimJoint388.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint388.llimit = new MFFloat(new float[0,0,0]);
Shape Shape389 = createNode("Shape");
LineSet LineSet390 = createNode("LineSet");
LineSet390.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate391 = createNode("Coordinate");
Coordinate391.point = new MFVec3f(new float[0,1,0]);
LineSet390.coord = Coordinate391;

//from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3
ColorRGBA ColorRGBA392 = createNode("ColorRGBA");
ColorRGBA392.USE = "HAnimSegmentLineColorRGBA";
LineSet390.color = ColorRGBA392;

Shape389.geometry = LineSet390;

HAnimJoint388.shape = Shape389;

HAnimJoint HAnimJoint393 = createNode("HAnimJoint");
HAnimJoint393.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint393.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint393.center = new SFVec3f(new float[0,1,0]);
HAnimJoint393.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint393.llimit = new MFFloat(new float[0,0,0]);
Shape Shape394 = createNode("Shape");
LineSet LineSet395 = createNode("LineSet");
LineSet395.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate396 = createNode("Coordinate");
Coordinate396.point = new MFVec3f(new float[0,1,0]);
LineSet395.coord = Coordinate396;

//from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3
ColorRGBA ColorRGBA397 = createNode("ColorRGBA");
ColorRGBA397.USE = "HAnimSegmentLineColorRGBA";
LineSet395.color = ColorRGBA397;

Shape394.geometry = LineSet395;

HAnimJoint393.shape = Shape394;

HAnimSite HAnimSite398 = createNode("HAnimSite");
HAnimSite398.name = "r_tarsal_distal_phalanx_3_tip";
HAnimSite398.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimSite398.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor399 = createNode("TouchSensor");
TouchSensor399.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite398.children = new MFNode();

HAnimSite398.children[0] = TouchSensor399;

Shape Shape400 = createNode("Shape");
Shape400.USE = "HAnimSiteShape";
HAnimSite398.children[1] = Shape400;

HAnimJoint393.hAnimSite = new undefined();

HAnimJoint393.hAnimSite[0] = HAnimSite398;

HAnimJoint HAnimJoint401 = createNode("HAnimJoint");
HAnimJoint401.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint401.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint401.center = new SFVec3f(new float[0,1,0]);
HAnimJoint401.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint401.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint393.children[1] = HAnimJoint401;

HAnimJoint388.children = new MFNode();

HAnimJoint388.children[0] = HAnimJoint393;

HAnimJoint383.children = new MFNode();

HAnimJoint383.children[0] = HAnimJoint388;

HAnimJoint378.children = new MFNode();

HAnimJoint378.children[0] = HAnimJoint383;

HAnimJoint319.children[4] = HAnimJoint378;

HAnimJoint310.children[1] = HAnimJoint319;

HAnimJoint HAnimJoint402 = createNode("HAnimJoint");
HAnimJoint402.name = "r_calcaneocuboid";
HAnimJoint402.DEF = "hanim_r_calcaneocuboid";
HAnimJoint402.center = new SFVec3f(new float[0,1,0]);
HAnimJoint402.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint402.llimit = new MFFloat(new float[0,0,0]);
Shape Shape403 = createNode("Shape");
LineSet LineSet404 = createNode("LineSet");
LineSet404.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate405 = createNode("Coordinate");
Coordinate405.point = new MFVec3f(new float[0,1,0]);
LineSet404.coord = Coordinate405;

//from r_calcaneocuboid to r_transversetarsal
ColorRGBA ColorRGBA406 = createNode("ColorRGBA");
ColorRGBA406.USE = "HAnimSegmentLineColorRGBA";
LineSet404.color = ColorRGBA406;

Shape403.geometry = LineSet404;

HAnimJoint402.shape = Shape403;

HAnimJoint HAnimJoint407 = createNode("HAnimJoint");
HAnimJoint407.name = "r_transversetarsal";
HAnimJoint407.DEF = "hanim_r_transversetarsal";
HAnimJoint407.center = new SFVec3f(new float[0,1,0]);
HAnimJoint407.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint407.llimit = new MFFloat(new float[0,0,0]);
Shape Shape408 = createNode("Shape");
LineSet LineSet409 = createNode("LineSet");
LineSet409.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate410 = createNode("Coordinate");
Coordinate410.point = new MFVec3f(new float[0,1,0]);
LineSet409.coord = Coordinate410;

//from r_transversetarsal to r_tarsometatarsal_4
ColorRGBA ColorRGBA411 = createNode("ColorRGBA");
ColorRGBA411.USE = "HAnimSegmentLineColorRGBA";
LineSet409.color = ColorRGBA411;

Shape408.geometry = LineSet409;

HAnimJoint407.shape = Shape408;

Shape Shape412 = createNode("Shape");
LineSet LineSet413 = createNode("LineSet");
LineSet413.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate414 = createNode("Coordinate");
Coordinate414.point = new MFVec3f(new float[0,1,0]);
LineSet413.coord = Coordinate414;

//from r_transversetarsal to r_tarsometatarsal_5
ColorRGBA ColorRGBA415 = createNode("ColorRGBA");
ColorRGBA415.USE = "HAnimSegmentLineColorRGBA";
LineSet413.color = ColorRGBA415;

Shape412.geometry = LineSet413;

HAnimJoint407.shape = new undefined();

HAnimJoint407.shape[0] = Shape412;

HAnimJoint HAnimJoint416 = createNode("HAnimJoint");
HAnimJoint416.name = "r_tarsometatarsal_4";
HAnimJoint416.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint416.center = new SFVec3f(new float[0,1,0]);
HAnimJoint416.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint416.llimit = new MFFloat(new float[0,0,0]);
Shape Shape417 = createNode("Shape");
LineSet LineSet418 = createNode("LineSet");
LineSet418.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate419 = createNode("Coordinate");
Coordinate419.point = new MFVec3f(new float[0,1,0]);
LineSet418.coord = Coordinate419;

//from r_tarsometatarsal_4 to r_metatarsophalangeal_4
ColorRGBA ColorRGBA420 = createNode("ColorRGBA");
ColorRGBA420.USE = "HAnimSegmentLineColorRGBA";
LineSet418.color = ColorRGBA420;

Shape417.geometry = LineSet418;

HAnimJoint416.shape = Shape417;

HAnimJoint HAnimJoint421 = createNode("HAnimJoint");
HAnimJoint421.name = "r_metatarsophalangeal_4";
HAnimJoint421.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint421.center = new SFVec3f(new float[0,1,0]);
HAnimJoint421.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint421.llimit = new MFFloat(new float[0,0,0]);
Shape Shape422 = createNode("Shape");
LineSet LineSet423 = createNode("LineSet");
LineSet423.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate424 = createNode("Coordinate");
Coordinate424.point = new MFVec3f(new float[0,1,0]);
LineSet423.coord = Coordinate424;

//from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4
ColorRGBA ColorRGBA425 = createNode("ColorRGBA");
ColorRGBA425.USE = "HAnimSegmentLineColorRGBA";
LineSet423.color = ColorRGBA425;

Shape422.geometry = LineSet423;

HAnimJoint421.shape = Shape422;

HAnimJoint HAnimJoint426 = createNode("HAnimJoint");
HAnimJoint426.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint426.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint426.center = new SFVec3f(new float[0,1,0]);
HAnimJoint426.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint426.llimit = new MFFloat(new float[0,0,0]);
Shape Shape427 = createNode("Shape");
LineSet LineSet428 = createNode("LineSet");
LineSet428.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate429 = createNode("Coordinate");
Coordinate429.point = new MFVec3f(new float[0,1,0]);
LineSet428.coord = Coordinate429;

//from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4
ColorRGBA ColorRGBA430 = createNode("ColorRGBA");
ColorRGBA430.USE = "HAnimSegmentLineColorRGBA";
LineSet428.color = ColorRGBA430;

Shape427.geometry = LineSet428;

HAnimJoint426.shape = Shape427;

HAnimSite HAnimSite431 = createNode("HAnimSite");
HAnimSite431.name = "r_tarsal_distal_phalanx_4_tip";
HAnimSite431.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimSite431.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor432 = createNode("TouchSensor");
TouchSensor432.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite431.children = new MFNode();

HAnimSite431.children[0] = TouchSensor432;

Shape Shape433 = createNode("Shape");
Shape433.USE = "HAnimSiteShape";
HAnimSite431.children[1] = Shape433;

HAnimJoint426.hAnimSite = new undefined();

HAnimJoint426.hAnimSite[0] = HAnimSite431;

HAnimJoint HAnimJoint434 = createNode("HAnimJoint");
HAnimJoint434.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint434.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint434.center = new SFVec3f(new float[0,1,0]);
HAnimJoint434.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint434.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint426.children[1] = HAnimJoint434;

HAnimJoint421.children = new MFNode();

HAnimJoint421.children[0] = HAnimJoint426;

HAnimJoint416.children = new MFNode();

HAnimJoint416.children[0] = HAnimJoint421;

HAnimJoint407.children[1] = HAnimJoint416;

HAnimJoint HAnimJoint435 = createNode("HAnimJoint");
HAnimJoint435.name = "r_tarsometatarsal_5";
HAnimJoint435.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint435.center = new SFVec3f(new float[0,1,0]);
HAnimJoint435.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint435.llimit = new MFFloat(new float[0,0,0]);
Shape Shape436 = createNode("Shape");
LineSet LineSet437 = createNode("LineSet");
LineSet437.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate438 = createNode("Coordinate");
Coordinate438.point = new MFVec3f(new float[0,1,0]);
LineSet437.coord = Coordinate438;

//from r_tarsometatarsal_5 to r_metatarsophalangeal_5
ColorRGBA ColorRGBA439 = createNode("ColorRGBA");
ColorRGBA439.USE = "HAnimSegmentLineColorRGBA";
LineSet437.color = ColorRGBA439;

Shape436.geometry = LineSet437;

HAnimJoint435.shape = Shape436;

HAnimSite HAnimSite440 = createNode("HAnimSite");
HAnimSite440.name = "r_metatarsal_phalanx_5_pt";
HAnimSite440.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite440.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor441 = createNode("TouchSensor");
TouchSensor441.description = "HAnimSite r_metatarsal_phalanx_5_pt";
HAnimSite440.children = new MFNode();

HAnimSite440.children[0] = TouchSensor441;

Shape Shape442 = createNode("Shape");
Shape442.USE = "HAnimSiteShape";
HAnimSite440.children[1] = Shape442;

HAnimJoint435.hAnimSite = new undefined();

HAnimJoint435.hAnimSite[0] = HAnimSite440;

HAnimJoint HAnimJoint443 = createNode("HAnimJoint");
HAnimJoint443.name = "r_metatarsophalangeal_5";
HAnimJoint443.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint443.center = new SFVec3f(new float[0,1,0]);
HAnimJoint443.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint443.llimit = new MFFloat(new float[0,0,0]);
Shape Shape444 = createNode("Shape");
LineSet LineSet445 = createNode("LineSet");
LineSet445.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate446 = createNode("Coordinate");
Coordinate446.point = new MFVec3f(new float[0,1,0]);
LineSet445.coord = Coordinate446;

//from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5
ColorRGBA ColorRGBA447 = createNode("ColorRGBA");
ColorRGBA447.USE = "HAnimSegmentLineColorRGBA";
LineSet445.color = ColorRGBA447;

Shape444.geometry = LineSet445;

HAnimJoint443.shape = Shape444;

HAnimJoint HAnimJoint448 = createNode("HAnimJoint");
HAnimJoint448.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint448.DEF = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimJoint448.center = new SFVec3f(new float[0,1,0]);
HAnimJoint448.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint448.llimit = new MFFloat(new float[0,0,0]);
Shape Shape449 = createNode("Shape");
LineSet LineSet450 = createNode("LineSet");
LineSet450.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate451 = createNode("Coordinate");
Coordinate451.point = new MFVec3f(new float[0,1,0]);
LineSet450.coord = Coordinate451;

//from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5
ColorRGBA ColorRGBA452 = createNode("ColorRGBA");
ColorRGBA452.USE = "HAnimSegmentLineColorRGBA";
LineSet450.color = ColorRGBA452;

Shape449.geometry = LineSet450;

HAnimJoint448.shape = Shape449;

HAnimSite HAnimSite453 = createNode("HAnimSite");
HAnimSite453.name = "r_tarsal_distal_phalanx_5_tip";
HAnimSite453.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimSite453.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor454 = createNode("TouchSensor");
TouchSensor454.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite453.children = new MFNode();

HAnimSite453.children[0] = TouchSensor454;

Shape Shape455 = createNode("Shape");
Shape455.USE = "HAnimSiteShape";
HAnimSite453.children[1] = Shape455;

HAnimJoint448.hAnimSite = new undefined();

HAnimJoint448.hAnimSite[0] = HAnimSite453;

HAnimJoint HAnimJoint456 = createNode("HAnimJoint");
HAnimJoint456.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint456.DEF = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimJoint456.center = new SFVec3f(new float[0,1,0]);
HAnimJoint456.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint456.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint448.children[1] = HAnimJoint456;

HAnimJoint443.children = new MFNode();

HAnimJoint443.children[0] = HAnimJoint448;

HAnimJoint435.children[1] = HAnimJoint443;

HAnimJoint407.children[2] = HAnimJoint435;

HAnimJoint402.children = new MFNode();

HAnimJoint402.children[0] = HAnimJoint407;

HAnimJoint310.children[2] = HAnimJoint402;

HAnimJoint299.children[2] = HAnimJoint310;

HAnimJoint285.children[3] = HAnimJoint299;

HAnimJoint80.children[10] = HAnimJoint285;

HAnimJoint32.children[14] = HAnimJoint80;

HAnimJoint HAnimJoint457 = createNode("HAnimJoint");
HAnimJoint457.name = "vl5";
HAnimJoint457.DEF = "hanim_vl5";
HAnimJoint457.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimJoint457.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint457.llimit = new MFFloat(new float[0,0,0]);
Shape Shape458 = createNode("Shape");
LineSet LineSet459 = createNode("LineSet");
LineSet459.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate460 = createNode("Coordinate");
Coordinate460.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet459.coord = Coordinate460;

//from vl5 to vl4
ColorRGBA ColorRGBA461 = createNode("ColorRGBA");
ColorRGBA461.USE = "HAnimSegmentLineColorRGBA";
LineSet459.color = ColorRGBA461;

Shape458.geometry = LineSet459;

HAnimJoint457.shape = Shape458;

HAnimJoint HAnimJoint462 = createNode("HAnimJoint");
HAnimJoint462.name = "vl4";
HAnimJoint462.DEF = "hanim_vl4";
HAnimJoint462.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimJoint462.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint462.llimit = new MFFloat(new float[0,0,0]);
Shape Shape463 = createNode("Shape");
LineSet LineSet464 = createNode("LineSet");
LineSet464.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate465 = createNode("Coordinate");
Coordinate465.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet464.coord = Coordinate465;

//from vl4 to vl3
ColorRGBA ColorRGBA466 = createNode("ColorRGBA");
ColorRGBA466.USE = "HAnimSegmentLineColorRGBA";
LineSet464.color = ColorRGBA466;

Shape463.geometry = LineSet464;

HAnimJoint462.shape = Shape463;

HAnimJoint HAnimJoint467 = createNode("HAnimJoint");
HAnimJoint467.name = "vl3";
HAnimJoint467.DEF = "hanim_vl3";
HAnimJoint467.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimJoint467.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint467.llimit = new MFFloat(new float[0,0,0]);
Shape Shape468 = createNode("Shape");
LineSet LineSet469 = createNode("LineSet");
LineSet469.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate470 = createNode("Coordinate");
Coordinate470.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet469.coord = Coordinate470;

//from vl3 to vl2
ColorRGBA ColorRGBA471 = createNode("ColorRGBA");
ColorRGBA471.USE = "HAnimSegmentLineColorRGBA";
LineSet469.color = ColorRGBA471;

Shape468.geometry = LineSet469;

HAnimJoint467.shape = Shape468;

HAnimSite HAnimSite472 = createNode("HAnimSite");
HAnimSite472.name = "l_rib10_pt";
HAnimSite472.DEF = "hanim_l_rib10_pt";
HAnimSite472.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor473 = createNode("TouchSensor");
TouchSensor473.description = "HAnimSite l_rib10_pt";
HAnimSite472.children = new MFNode();

HAnimSite472.children[0] = TouchSensor473;

Shape Shape474 = createNode("Shape");
Shape474.USE = "HAnimSiteShape";
HAnimSite472.children[1] = Shape474;

HAnimJoint467.hAnimSite = new undefined();

HAnimJoint467.hAnimSite[0] = HAnimSite472;

HAnimSite HAnimSite475 = createNode("HAnimSite");
HAnimSite475.name = "r_rib10_pt";
HAnimSite475.DEF = "hanim_r_rib10_pt";
HAnimSite475.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor476 = createNode("TouchSensor");
TouchSensor476.description = "HAnimSite r_rib10_pt";
HAnimSite475.children = new MFNode();

HAnimSite475.children[0] = TouchSensor476;

Shape Shape477 = createNode("Shape");
Shape477.USE = "HAnimSiteShape";
HAnimSite475.children[1] = Shape477;

HAnimJoint467.hAnimSite[1] = HAnimSite475;

HAnimSite HAnimSite478 = createNode("HAnimSite");
HAnimSite478.name = "spine_2_middle_back_pt";
HAnimSite478.DEF = "hanim_spine_2_middle_back_pt";
HAnimSite478.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor479 = createNode("TouchSensor");
TouchSensor479.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite478.children = new MFNode();

HAnimSite478.children[0] = TouchSensor479;

Shape Shape480 = createNode("Shape");
Shape480.USE = "HAnimSiteShape";
HAnimSite478.children[1] = Shape480;

HAnimJoint467.hAnimSite[2] = HAnimSite478;

HAnimJoint HAnimJoint481 = createNode("HAnimJoint");
HAnimJoint481.name = "vl2";
HAnimJoint481.DEF = "hanim_vl2";
HAnimJoint481.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimJoint481.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint481.llimit = new MFFloat(new float[0,0,0]);
Shape Shape482 = createNode("Shape");
LineSet LineSet483 = createNode("LineSet");
LineSet483.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate484 = createNode("Coordinate");
Coordinate484.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet483.coord = Coordinate484;

//from vl2 to vl1
ColorRGBA ColorRGBA485 = createNode("ColorRGBA");
ColorRGBA485.USE = "HAnimSegmentLineColorRGBA";
LineSet483.color = ColorRGBA485;

Shape482.geometry = LineSet483;

HAnimJoint481.shape = Shape482;

HAnimJoint HAnimJoint486 = createNode("HAnimJoint");
HAnimJoint486.name = "vl1";
HAnimJoint486.DEF = "hanim_vl1";
HAnimJoint486.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimJoint486.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint486.llimit = new MFFloat(new float[0,0,0]);
Shape Shape487 = createNode("Shape");
LineSet LineSet488 = createNode("LineSet");
LineSet488.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate489 = createNode("Coordinate");
Coordinate489.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet488.coord = Coordinate489;

//from vl1 to vt12
ColorRGBA ColorRGBA490 = createNode("ColorRGBA");
ColorRGBA490.USE = "HAnimSegmentLineColorRGBA";
LineSet488.color = ColorRGBA490;

Shape487.geometry = LineSet488;

HAnimJoint486.shape = Shape487;

HAnimJoint HAnimJoint491 = createNode("HAnimJoint");
HAnimJoint491.name = "vt12";
HAnimJoint491.DEF = "hanim_vt12";
HAnimJoint491.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimJoint491.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint491.llimit = new MFFloat(new float[0,0,0]);
Shape Shape492 = createNode("Shape");
LineSet LineSet493 = createNode("LineSet");
LineSet493.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate494 = createNode("Coordinate");
Coordinate494.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet493.coord = Coordinate494;

//from vt12 to vt11
ColorRGBA ColorRGBA495 = createNode("ColorRGBA");
ColorRGBA495.USE = "HAnimSegmentLineColorRGBA";
LineSet493.color = ColorRGBA495;

Shape492.geometry = LineSet493;

HAnimJoint491.shape = Shape492;

HAnimJoint HAnimJoint496 = createNode("HAnimJoint");
HAnimJoint496.name = "vt11";
HAnimJoint496.DEF = "hanim_vt11";
HAnimJoint496.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimJoint496.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint496.llimit = new MFFloat(new float[0,0,0]);
Shape Shape497 = createNode("Shape");
LineSet LineSet498 = createNode("LineSet");
LineSet498.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate499 = createNode("Coordinate");
Coordinate499.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet498.coord = Coordinate499;

//from vt11 to vt10
ColorRGBA ColorRGBA500 = createNode("ColorRGBA");
ColorRGBA500.USE = "HAnimSegmentLineColorRGBA";
LineSet498.color = ColorRGBA500;

Shape497.geometry = LineSet498;

HAnimJoint496.shape = Shape497;

HAnimSite HAnimSite501 = createNode("HAnimSite");
HAnimSite501.name = "substernale_pt";
HAnimSite501.DEF = "hanim_substernale_pt";
HAnimSite501.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor502 = createNode("TouchSensor");
TouchSensor502.description = "HAnimSite substernale_pt";
HAnimSite501.children = new MFNode();

HAnimSite501.children[0] = TouchSensor502;

Shape Shape503 = createNode("Shape");
Shape503.USE = "HAnimSiteShape";
HAnimSite501.children[1] = Shape503;

HAnimJoint496.hAnimSite = new undefined();

HAnimJoint496.hAnimSite[0] = HAnimSite501;

HAnimJoint HAnimJoint504 = createNode("HAnimJoint");
HAnimJoint504.name = "vt10";
HAnimJoint504.DEF = "hanim_vt10";
HAnimJoint504.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimJoint504.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint504.llimit = new MFFloat(new float[0,0,0]);
Shape Shape505 = createNode("Shape");
LineSet LineSet506 = createNode("LineSet");
LineSet506.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate507 = createNode("Coordinate");
Coordinate507.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet506.coord = Coordinate507;

//from vt10 to vt9
ColorRGBA ColorRGBA508 = createNode("ColorRGBA");
ColorRGBA508.USE = "HAnimSegmentLineColorRGBA";
LineSet506.color = ColorRGBA508;

Shape505.geometry = LineSet506;

HAnimJoint504.shape = Shape505;

HAnimSite HAnimSite509 = createNode("HAnimSite");
HAnimSite509.name = "l_thelion_pt";
HAnimSite509.DEF = "hanim_l_thelion_pt";
HAnimSite509.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor510 = createNode("TouchSensor");
TouchSensor510.description = "HAnimSite l_thelion_pt";
HAnimSite509.children = new MFNode();

HAnimSite509.children[0] = TouchSensor510;

Shape Shape511 = createNode("Shape");
Shape511.USE = "HAnimSiteShape";
HAnimSite509.children[1] = Shape511;

HAnimJoint504.hAnimSite = new undefined();

HAnimJoint504.hAnimSite[0] = HAnimSite509;

HAnimSite HAnimSite512 = createNode("HAnimSite");
HAnimSite512.name = "r_thelion_pt";
HAnimSite512.DEF = "hanim_r_thelion_pt";
HAnimSite512.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor513 = createNode("TouchSensor");
TouchSensor513.description = "HAnimSite r_thelion_pt";
HAnimSite512.children = new MFNode();

HAnimSite512.children[0] = TouchSensor513;

Shape Shape514 = createNode("Shape");
Shape514.USE = "HAnimSiteShape";
HAnimSite512.children[1] = Shape514;

HAnimJoint504.hAnimSite[1] = HAnimSite512;

HAnimJoint HAnimJoint515 = createNode("HAnimJoint");
HAnimJoint515.name = "vt9";
HAnimJoint515.DEF = "hanim_vt9";
HAnimJoint515.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimJoint515.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint515.llimit = new MFFloat(new float[0,0,0]);
Shape Shape516 = createNode("Shape");
LineSet LineSet517 = createNode("LineSet");
LineSet517.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate518 = createNode("Coordinate");
Coordinate518.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet517.coord = Coordinate518;

//from vt9 to vt8
ColorRGBA ColorRGBA519 = createNode("ColorRGBA");
ColorRGBA519.USE = "HAnimSegmentLineColorRGBA";
LineSet517.color = ColorRGBA519;

Shape516.geometry = LineSet517;

HAnimJoint515.shape = Shape516;

HAnimJoint HAnimJoint520 = createNode("HAnimJoint");
HAnimJoint520.name = "vt8";
HAnimJoint520.DEF = "hanim_vt8";
HAnimJoint520.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimJoint520.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint520.llimit = new MFFloat(new float[0,0,0]);
Shape Shape521 = createNode("Shape");
LineSet LineSet522 = createNode("LineSet");
LineSet522.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate523 = createNode("Coordinate");
Coordinate523.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet522.coord = Coordinate523;

//from vt8 to vt7
ColorRGBA ColorRGBA524 = createNode("ColorRGBA");
ColorRGBA524.USE = "HAnimSegmentLineColorRGBA";
LineSet522.color = ColorRGBA524;

Shape521.geometry = LineSet522;

HAnimJoint520.shape = Shape521;

HAnimJoint HAnimJoint525 = createNode("HAnimJoint");
HAnimJoint525.name = "vt7";
HAnimJoint525.DEF = "hanim_vt7";
HAnimJoint525.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimJoint525.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint525.llimit = new MFFloat(new float[0,0,0]);
Shape Shape526 = createNode("Shape");
LineSet LineSet527 = createNode("LineSet");
LineSet527.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate528 = createNode("Coordinate");
Coordinate528.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet527.coord = Coordinate528;

//from vt7 to vt6
ColorRGBA ColorRGBA529 = createNode("ColorRGBA");
ColorRGBA529.USE = "HAnimSegmentLineColorRGBA";
LineSet527.color = ColorRGBA529;

Shape526.geometry = LineSet527;

HAnimJoint525.shape = Shape526;

HAnimSite HAnimSite530 = createNode("HAnimSite");
HAnimSite530.name = "l_chest_midsagittal_plane_pt";
HAnimSite530.DEF = "hanim_l_chest_midsagittal_plane_pt";
HAnimSite530.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor531 = createNode("TouchSensor");
TouchSensor531.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite530.children = new MFNode();

HAnimSite530.children[0] = TouchSensor531;

Shape Shape532 = createNode("Shape");
Shape532.USE = "HAnimSiteShape";
HAnimSite530.children[1] = Shape532;

HAnimJoint525.hAnimSite = new undefined();

HAnimJoint525.hAnimSite[0] = HAnimSite530;

HAnimSite HAnimSite533 = createNode("HAnimSite");
HAnimSite533.name = "mesosternale_pt";
HAnimSite533.DEF = "hanim_mesosternale_pt";
HAnimSite533.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor534 = createNode("TouchSensor");
TouchSensor534.description = "HAnimSite mesosternale_pt";
HAnimSite533.children = new MFNode();

HAnimSite533.children[0] = TouchSensor534;

Shape Shape535 = createNode("Shape");
Shape535.USE = "HAnimSiteShape";
HAnimSite533.children[1] = Shape535;

HAnimJoint525.hAnimSite[1] = HAnimSite533;

HAnimSite HAnimSite536 = createNode("HAnimSite");
HAnimSite536.name = "r_chest_midsagittal_plane_pt";
HAnimSite536.DEF = "hanim_r_chest_midsagittal_plane_pt";
HAnimSite536.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor537 = createNode("TouchSensor");
TouchSensor537.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite536.children = new MFNode();

HAnimSite536.children[0] = TouchSensor537;

Shape Shape538 = createNode("Shape");
Shape538.USE = "HAnimSiteShape";
HAnimSite536.children[1] = Shape538;

HAnimJoint525.hAnimSite[2] = HAnimSite536;

HAnimSite HAnimSite539 = createNode("HAnimSite");
HAnimSite539.name = "rear_center_midsagittal_plane_pt";
HAnimSite539.DEF = "hanim_rear_center_midsagittal_plane_pt";
HAnimSite539.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor540 = createNode("TouchSensor");
TouchSensor540.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite539.children = new MFNode();

HAnimSite539.children[0] = TouchSensor540;

Shape Shape541 = createNode("Shape");
Shape541.USE = "HAnimSiteShape";
HAnimSite539.children[1] = Shape541;

HAnimJoint525.hAnimSite[3] = HAnimSite539;

HAnimJoint HAnimJoint542 = createNode("HAnimJoint");
HAnimJoint542.name = "vt6";
HAnimJoint542.DEF = "hanim_vt6";
HAnimJoint542.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimJoint542.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint542.llimit = new MFFloat(new float[0,0,0]);
Shape Shape543 = createNode("Shape");
LineSet LineSet544 = createNode("LineSet");
LineSet544.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate545 = createNode("Coordinate");
Coordinate545.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet544.coord = Coordinate545;

//from vt6 to vt5
ColorRGBA ColorRGBA546 = createNode("ColorRGBA");
ColorRGBA546.USE = "HAnimSegmentLineColorRGBA";
LineSet544.color = ColorRGBA546;

Shape543.geometry = LineSet544;

HAnimJoint542.shape = Shape543;

HAnimSite HAnimSite547 = createNode("HAnimSite");
HAnimSite547.name = "spine_1_middle_back_pt";
HAnimSite547.DEF = "hanim_spine_1_middle_back_pt";
HAnimSite547.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor548 = createNode("TouchSensor");
TouchSensor548.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite547.children = new MFNode();

HAnimSite547.children[0] = TouchSensor548;

Shape Shape549 = createNode("Shape");
Shape549.USE = "HAnimSiteShape";
HAnimSite547.children[1] = Shape549;

HAnimJoint542.hAnimSite = new undefined();

HAnimJoint542.hAnimSite[0] = HAnimSite547;

HAnimJoint HAnimJoint550 = createNode("HAnimJoint");
HAnimJoint550.name = "vt5";
HAnimJoint550.DEF = "hanim_vt5";
HAnimJoint550.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimJoint550.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint550.llimit = new MFFloat(new float[0,0,0]);
Shape Shape551 = createNode("Shape");
LineSet LineSet552 = createNode("LineSet");
LineSet552.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate553 = createNode("Coordinate");
Coordinate553.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet552.coord = Coordinate553;

//from vt5 to vt4
ColorRGBA ColorRGBA554 = createNode("ColorRGBA");
ColorRGBA554.USE = "HAnimSegmentLineColorRGBA";
LineSet552.color = ColorRGBA554;

Shape551.geometry = LineSet552;

HAnimJoint550.shape = Shape551;

HAnimJoint HAnimJoint555 = createNode("HAnimJoint");
HAnimJoint555.name = "vt4";
HAnimJoint555.DEF = "hanim_vt4";
HAnimJoint555.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimJoint555.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint555.llimit = new MFFloat(new float[0,0,0]);
Shape Shape556 = createNode("Shape");
LineSet LineSet557 = createNode("LineSet");
LineSet557.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate558 = createNode("Coordinate");
Coordinate558.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet557.coord = Coordinate558;

//from vt4 to vt3
ColorRGBA ColorRGBA559 = createNode("ColorRGBA");
ColorRGBA559.USE = "HAnimSegmentLineColorRGBA";
LineSet557.color = ColorRGBA559;

Shape556.geometry = LineSet557;

HAnimJoint555.shape = Shape556;

HAnimJoint HAnimJoint560 = createNode("HAnimJoint");
HAnimJoint560.name = "vt3";
HAnimJoint560.DEF = "hanim_vt3";
HAnimJoint560.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimJoint560.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint560.llimit = new MFFloat(new float[0,0,0]);
Shape Shape561 = createNode("Shape");
LineSet LineSet562 = createNode("LineSet");
LineSet562.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate563 = createNode("Coordinate");
Coordinate563.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet562.coord = Coordinate563;

//from vt3 to vt2
ColorRGBA ColorRGBA564 = createNode("ColorRGBA");
ColorRGBA564.USE = "HAnimSegmentLineColorRGBA";
LineSet562.color = ColorRGBA564;

Shape561.geometry = LineSet562;

HAnimJoint560.shape = Shape561;

HAnimJoint HAnimJoint565 = createNode("HAnimJoint");
HAnimJoint565.name = "vt2";
HAnimJoint565.DEF = "hanim_vt2";
HAnimJoint565.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimJoint565.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint565.llimit = new MFFloat(new float[0,0,0]);
Shape Shape566 = createNode("Shape");
LineSet LineSet567 = createNode("LineSet");
LineSet567.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate568 = createNode("Coordinate");
Coordinate568.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet567.coord = Coordinate568;

//from vt2 to vt1
ColorRGBA ColorRGBA569 = createNode("ColorRGBA");
ColorRGBA569.USE = "HAnimSegmentLineColorRGBA";
LineSet567.color = ColorRGBA569;

Shape566.geometry = LineSet567;

HAnimJoint565.shape = Shape566;

HAnimSite HAnimSite570 = createNode("HAnimSite");
HAnimSite570.name = "cervicale_pt";
HAnimSite570.DEF = "hanim_cervicale_pt";
HAnimSite570.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor571 = createNode("TouchSensor");
TouchSensor571.description = "HAnimSite cervicale_pt";
HAnimSite570.children = new MFNode();

HAnimSite570.children[0] = TouchSensor571;

Shape Shape572 = createNode("Shape");
Shape572.USE = "HAnimSiteShape";
HAnimSite570.children[1] = Shape572;

HAnimJoint565.hAnimSite = new undefined();

HAnimJoint565.hAnimSite[0] = HAnimSite570;

HAnimSite HAnimSite573 = createNode("HAnimSite");
HAnimSite573.name = "suprasternale_pt";
HAnimSite573.DEF = "hanim_suprasternale_pt";
HAnimSite573.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor574 = createNode("TouchSensor");
TouchSensor574.description = "HAnimSite suprasternale_pt";
HAnimSite573.children = new MFNode();

HAnimSite573.children[0] = TouchSensor574;

Shape Shape575 = createNode("Shape");
Shape575.USE = "HAnimSiteShape";
HAnimSite573.children[1] = Shape575;

HAnimJoint565.hAnimSite[1] = HAnimSite573;

HAnimJoint HAnimJoint576 = createNode("HAnimJoint");
HAnimJoint576.name = "vt1";
HAnimJoint576.DEF = "hanim_vt1";
HAnimJoint576.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimJoint576.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint576.llimit = new MFFloat(new float[0,0,0]);
Shape Shape577 = createNode("Shape");
LineSet LineSet578 = createNode("LineSet");
LineSet578.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate579 = createNode("Coordinate");
Coordinate579.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet578.coord = Coordinate579;

//from vt1 to vc7
ColorRGBA ColorRGBA580 = createNode("ColorRGBA");
ColorRGBA580.USE = "HAnimSegmentLineColorRGBA";
LineSet578.color = ColorRGBA580;

Shape577.geometry = LineSet578;

HAnimJoint576.shape = Shape577;

HAnimSite HAnimSite581 = createNode("HAnimSite");
HAnimSite581.name = "l_neck_base_pt";
HAnimSite581.DEF = "hanim_l_neck_base_pt";
HAnimSite581.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor582 = createNode("TouchSensor");
TouchSensor582.description = "HAnimSite l_neck_base_pt";
HAnimSite581.children = new MFNode();

HAnimSite581.children[0] = TouchSensor582;

Shape Shape583 = createNode("Shape");
Shape583.USE = "HAnimSiteShape";
HAnimSite581.children[1] = Shape583;

HAnimJoint576.hAnimSite = new undefined();

HAnimJoint576.hAnimSite[0] = HAnimSite581;

HAnimSite HAnimSite584 = createNode("HAnimSite");
HAnimSite584.name = "r_neck_base_pt";
HAnimSite584.DEF = "hanim_r_neck_base_pt";
HAnimSite584.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor585 = createNode("TouchSensor");
TouchSensor585.description = "HAnimSite r_neck_base_pt";
HAnimSite584.children = new MFNode();

HAnimSite584.children[0] = TouchSensor585;

Shape Shape586 = createNode("Shape");
Shape586.USE = "HAnimSiteShape";
HAnimSite584.children[1] = Shape586;

HAnimJoint576.hAnimSite[1] = HAnimSite584;

Shape Shape587 = createNode("Shape");
LineSet LineSet588 = createNode("LineSet");
LineSet588.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate589 = createNode("Coordinate");
Coordinate589.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet588.coord = Coordinate589;

//from vt1 to l_sternoclavicular
ColorRGBA ColorRGBA590 = createNode("ColorRGBA");
ColorRGBA590.USE = "HAnimSegmentLineColorRGBA";
LineSet588.color = ColorRGBA590;

Shape587.geometry = LineSet588;

HAnimJoint576.shape[2] = Shape587;

HAnimSite HAnimSite591 = createNode("HAnimSite");
HAnimSite591.name = "l_acromion_pt";
HAnimSite591.DEF = "hanim_l_acromion_pt";
HAnimSite591.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor592 = createNode("TouchSensor");
TouchSensor592.description = "HAnimSite l_acromion_pt";
HAnimSite591.children = new MFNode();

HAnimSite591.children[0] = TouchSensor592;

Shape Shape593 = createNode("Shape");
Shape593.USE = "HAnimSiteShape";
HAnimSite591.children[1] = Shape593;

HAnimJoint576.hAnimSite[3] = HAnimSite591;

HAnimSite HAnimSite594 = createNode("HAnimSite");
HAnimSite594.name = "l_axilla_distal_pt";
HAnimSite594.DEF = "hanim_l_axilla_distal_pt";
HAnimSite594.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor595 = createNode("TouchSensor");
TouchSensor595.description = "HAnimSite l_axilla_distal_pt";
HAnimSite594.children = new MFNode();

HAnimSite594.children[0] = TouchSensor595;

Shape Shape596 = createNode("Shape");
Shape596.USE = "HAnimSiteShape";
HAnimSite594.children[1] = Shape596;

HAnimJoint576.hAnimSite[4] = HAnimSite594;

HAnimSite HAnimSite597 = createNode("HAnimSite");
HAnimSite597.name = "l_axilla_posterior_folds_pt";
HAnimSite597.DEF = "hanim_l_axilla_posterior_folds_pt";
HAnimSite597.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor598 = createNode("TouchSensor");
TouchSensor598.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite597.children = new MFNode();

HAnimSite597.children[0] = TouchSensor598;

Shape Shape599 = createNode("Shape");
Shape599.USE = "HAnimSiteShape";
HAnimSite597.children[1] = Shape599;

HAnimJoint576.hAnimSite[5] = HAnimSite597;

HAnimSite HAnimSite600 = createNode("HAnimSite");
HAnimSite600.name = "l_axilla_proximal_pt";
HAnimSite600.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite600.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor601 = createNode("TouchSensor");
TouchSensor601.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite600.children = new MFNode();

HAnimSite600.children[0] = TouchSensor601;

Shape Shape602 = createNode("Shape");
Shape602.USE = "HAnimSiteShape";
HAnimSite600.children[1] = Shape602;

HAnimJoint576.hAnimSite[6] = HAnimSite600;

HAnimSite HAnimSite603 = createNode("HAnimSite");
HAnimSite603.name = "l_clavicale_pt";
HAnimSite603.DEF = "hanim_l_clavicale_pt";
HAnimSite603.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor604 = createNode("TouchSensor");
TouchSensor604.description = "HAnimSite l_clavicale_pt";
HAnimSite603.children = new MFNode();

HAnimSite603.children[0] = TouchSensor604;

Shape Shape605 = createNode("Shape");
Shape605.USE = "HAnimSiteShape";
HAnimSite603.children[1] = Shape605;

HAnimJoint576.hAnimSite[7] = HAnimSite603;

Shape Shape606 = createNode("Shape");
LineSet LineSet607 = createNode("LineSet");
LineSet607.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate608 = createNode("Coordinate");
Coordinate608.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet607.coord = Coordinate608;

//from vt1 to r_sternoclavicular
ColorRGBA ColorRGBA609 = createNode("ColorRGBA");
ColorRGBA609.USE = "HAnimSegmentLineColorRGBA";
LineSet607.color = ColorRGBA609;

Shape606.geometry = LineSet607;

HAnimJoint576.shape[8] = Shape606;

HAnimSite HAnimSite610 = createNode("HAnimSite");
HAnimSite610.name = "r_acromion_pt";
HAnimSite610.DEF = "hanim_r_acromion_pt";
HAnimSite610.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor611 = createNode("TouchSensor");
TouchSensor611.description = "HAnimSite r_acromion_pt";
HAnimSite610.children = new MFNode();

HAnimSite610.children[0] = TouchSensor611;

Shape Shape612 = createNode("Shape");
Shape612.USE = "HAnimSiteShape";
HAnimSite610.children[1] = Shape612;

HAnimJoint576.hAnimSite[9] = HAnimSite610;

HAnimSite HAnimSite613 = createNode("HAnimSite");
HAnimSite613.name = "r_axilla_distal_pt";
HAnimSite613.DEF = "hanim_r_axilla_distal_pt";
HAnimSite613.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor614 = createNode("TouchSensor");
TouchSensor614.description = "HAnimSite r_axilla_distal_pt";
HAnimSite613.children = new MFNode();

HAnimSite613.children[0] = TouchSensor614;

Shape Shape615 = createNode("Shape");
Shape615.USE = "HAnimSiteShape";
HAnimSite613.children[1] = Shape615;

HAnimJoint576.hAnimSite[10] = HAnimSite613;

HAnimSite HAnimSite616 = createNode("HAnimSite");
HAnimSite616.name = "r_axilla_posterior_folds_pt";
HAnimSite616.DEF = "hanim_r_axilla_posterior_folds_pt";
HAnimSite616.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor617 = createNode("TouchSensor");
TouchSensor617.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite616.children = new MFNode();

HAnimSite616.children[0] = TouchSensor617;

Shape Shape618 = createNode("Shape");
Shape618.USE = "HAnimSiteShape";
HAnimSite616.children[1] = Shape618;

HAnimJoint576.hAnimSite[11] = HAnimSite616;

HAnimSite HAnimSite619 = createNode("HAnimSite");
HAnimSite619.name = "r_axilla_proximal_pt";
HAnimSite619.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite619.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor620 = createNode("TouchSensor");
TouchSensor620.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite619.children = new MFNode();

HAnimSite619.children[0] = TouchSensor620;

Shape Shape621 = createNode("Shape");
Shape621.USE = "HAnimSiteShape";
HAnimSite619.children[1] = Shape621;

HAnimJoint576.hAnimSite[12] = HAnimSite619;

HAnimSite HAnimSite622 = createNode("HAnimSite");
HAnimSite622.name = "r_clavicale_pt";
HAnimSite622.DEF = "hanim_r_clavicale_pt";
HAnimSite622.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor623 = createNode("TouchSensor");
TouchSensor623.description = "HAnimSite r_clavicale_pt";
HAnimSite622.children = new MFNode();

HAnimSite622.children[0] = TouchSensor623;

Shape Shape624 = createNode("Shape");
Shape624.USE = "HAnimSiteShape";
HAnimSite622.children[1] = Shape624;

HAnimJoint576.hAnimSite[13] = HAnimSite622;

HAnimJoint HAnimJoint625 = createNode("HAnimJoint");
HAnimJoint625.name = "vc7";
HAnimJoint625.DEF = "hanim_vc7";
HAnimJoint625.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimJoint625.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint625.llimit = new MFFloat(new float[0,0,0]);
Shape Shape626 = createNode("Shape");
LineSet LineSet627 = createNode("LineSet");
LineSet627.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate628 = createNode("Coordinate");
Coordinate628.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet627.coord = Coordinate628;

//from vc7 to vc6
ColorRGBA ColorRGBA629 = createNode("ColorRGBA");
ColorRGBA629.USE = "HAnimSegmentLineColorRGBA";
LineSet627.color = ColorRGBA629;

Shape626.geometry = LineSet627;

HAnimJoint625.shape = Shape626;

HAnimJoint HAnimJoint630 = createNode("HAnimJoint");
HAnimJoint630.name = "vc6";
HAnimJoint630.DEF = "hanim_vc6";
HAnimJoint630.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimJoint630.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint630.llimit = new MFFloat(new float[0,0,0]);
Shape Shape631 = createNode("Shape");
LineSet LineSet632 = createNode("LineSet");
LineSet632.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate633 = createNode("Coordinate");
Coordinate633.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet632.coord = Coordinate633;

//from vc6 to vc5
ColorRGBA ColorRGBA634 = createNode("ColorRGBA");
ColorRGBA634.USE = "HAnimSegmentLineColorRGBA";
LineSet632.color = ColorRGBA634;

Shape631.geometry = LineSet632;

HAnimJoint630.shape = Shape631;

HAnimJoint HAnimJoint635 = createNode("HAnimJoint");
HAnimJoint635.name = "vc5";
HAnimJoint635.DEF = "hanim_vc5";
HAnimJoint635.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimJoint635.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint635.llimit = new MFFloat(new float[0,0,0]);
Shape Shape636 = createNode("Shape");
LineSet LineSet637 = createNode("LineSet");
LineSet637.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate638 = createNode("Coordinate");
Coordinate638.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet637.coord = Coordinate638;

//from vc5 to vc4
ColorRGBA ColorRGBA639 = createNode("ColorRGBA");
ColorRGBA639.USE = "HAnimSegmentLineColorRGBA";
LineSet637.color = ColorRGBA639;

Shape636.geometry = LineSet637;

HAnimJoint635.shape = Shape636;

HAnimJoint HAnimJoint640 = createNode("HAnimJoint");
HAnimJoint640.name = "vc4";
HAnimJoint640.DEF = "hanim_vc4";
HAnimJoint640.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimJoint640.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint640.llimit = new MFFloat(new float[0,0,0]);
Shape Shape641 = createNode("Shape");
LineSet LineSet642 = createNode("LineSet");
LineSet642.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate643 = createNode("Coordinate");
Coordinate643.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet642.coord = Coordinate643;

//from vc4 to vc3
ColorRGBA ColorRGBA644 = createNode("ColorRGBA");
ColorRGBA644.USE = "HAnimSegmentLineColorRGBA";
LineSet642.color = ColorRGBA644;

Shape641.geometry = LineSet642;

HAnimJoint640.shape = Shape641;

HAnimJoint HAnimJoint645 = createNode("HAnimJoint");
HAnimJoint645.name = "vc3";
HAnimJoint645.DEF = "hanim_vc3";
HAnimJoint645.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimJoint645.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint645.llimit = new MFFloat(new float[0,0,0]);
Shape Shape646 = createNode("Shape");
LineSet LineSet647 = createNode("LineSet");
LineSet647.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate648 = createNode("Coordinate");
Coordinate648.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet647.coord = Coordinate648;

//from vc3 to vc2
ColorRGBA ColorRGBA649 = createNode("ColorRGBA");
ColorRGBA649.USE = "HAnimSegmentLineColorRGBA";
LineSet647.color = ColorRGBA649;

Shape646.geometry = LineSet647;

HAnimJoint645.shape = Shape646;

HAnimSite HAnimSite650 = createNode("HAnimSite");
HAnimSite650.name = "adams_apple_pt";
HAnimSite650.DEF = "hanim_adams_apple_pt";
HAnimSite650.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor651 = createNode("TouchSensor");
TouchSensor651.description = "HAnimSite adams_apple_pt";
HAnimSite650.children = new MFNode();

HAnimSite650.children[0] = TouchSensor651;

Shape Shape652 = createNode("Shape");
Shape652.USE = "HAnimSiteShape";
HAnimSite650.children[1] = Shape652;

HAnimJoint645.hAnimSite = new undefined();

HAnimJoint645.hAnimSite[0] = HAnimSite650;

HAnimJoint HAnimJoint653 = createNode("HAnimJoint");
HAnimJoint653.name = "vc2";
HAnimJoint653.DEF = "hanim_vc2";
HAnimJoint653.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimJoint653.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint653.llimit = new MFFloat(new float[0,0,0]);
Shape Shape654 = createNode("Shape");
LineSet LineSet655 = createNode("LineSet");
LineSet655.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate656 = createNode("Coordinate");
Coordinate656.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet655.coord = Coordinate656;

//from vc2 to vc1
ColorRGBA ColorRGBA657 = createNode("ColorRGBA");
ColorRGBA657.USE = "HAnimSegmentLineColorRGBA";
LineSet655.color = ColorRGBA657;

Shape654.geometry = LineSet655;

HAnimJoint653.shape = Shape654;

HAnimJoint HAnimJoint658 = createNode("HAnimJoint");
HAnimJoint658.name = "vc1";
HAnimJoint658.DEF = "hanim_vc1";
HAnimJoint658.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimJoint658.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint658.llimit = new MFFloat(new float[0,0,0]);
Shape Shape659 = createNode("Shape");
LineSet LineSet660 = createNode("LineSet");
LineSet660.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate661 = createNode("Coordinate");
Coordinate661.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet660.coord = Coordinate661;

//from vc1 to skullbase
ColorRGBA ColorRGBA662 = createNode("ColorRGBA");
ColorRGBA662.USE = "HAnimSegmentLineColorRGBA";
LineSet660.color = ColorRGBA662;

Shape659.geometry = LineSet660;

HAnimJoint658.shape = Shape659;

HAnimSite HAnimSite663 = createNode("HAnimSite");
HAnimSite663.name = "glabella_pt";
HAnimSite663.DEF = "hanim_glabella_pt";
HAnimSite663.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor664 = createNode("TouchSensor");
TouchSensor664.description = "HAnimSite glabella_pt";
HAnimSite663.children = new MFNode();

HAnimSite663.children[0] = TouchSensor664;

Shape Shape665 = createNode("Shape");
Shape665.USE = "HAnimSiteShape";
HAnimSite663.children[1] = Shape665;

HAnimJoint658.hAnimSite = new undefined();

HAnimJoint658.hAnimSite[0] = HAnimSite663;

HAnimSite HAnimSite666 = createNode("HAnimSite");
HAnimSite666.name = "l_ectocanthus_pt";
HAnimSite666.DEF = "hanim_l_ectocanthus_pt";
HAnimSite666.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor667 = createNode("TouchSensor");
TouchSensor667.description = "HAnimSite l_ectocanthus_pt";
HAnimSite666.children = new MFNode();

HAnimSite666.children[0] = TouchSensor667;

Shape Shape668 = createNode("Shape");
Shape668.USE = "HAnimSiteShape";
HAnimSite666.children[1] = Shape668;

HAnimJoint658.hAnimSite[1] = HAnimSite666;

HAnimSite HAnimSite669 = createNode("HAnimSite");
HAnimSite669.name = "l_infraorbitale_pt";
HAnimSite669.DEF = "hanim_l_infraorbitale_pt";
HAnimSite669.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor670 = createNode("TouchSensor");
TouchSensor670.description = "HAnimSite l_infraorbitale_pt";
HAnimSite669.children = new MFNode();

HAnimSite669.children[0] = TouchSensor670;

Shape Shape671 = createNode("Shape");
Shape671.USE = "HAnimSiteShape";
HAnimSite669.children[1] = Shape671;

HAnimJoint658.hAnimSite[2] = HAnimSite669;

HAnimSite HAnimSite672 = createNode("HAnimSite");
HAnimSite672.name = "l_tragion_pt";
HAnimSite672.DEF = "hanim_l_tragion_pt";
HAnimSite672.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor673 = createNode("TouchSensor");
TouchSensor673.description = "HAnimSite l_tragion_pt";
HAnimSite672.children = new MFNode();

HAnimSite672.children[0] = TouchSensor673;

Shape Shape674 = createNode("Shape");
Shape674.USE = "HAnimSiteShape";
HAnimSite672.children[1] = Shape674;

HAnimJoint658.hAnimSite[3] = HAnimSite672;

HAnimSite HAnimSite675 = createNode("HAnimSite");
HAnimSite675.name = "nuchale_pt";
HAnimSite675.DEF = "hanim_nuchale_pt";
HAnimSite675.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor676 = createNode("TouchSensor");
TouchSensor676.description = "HAnimSite nuchale_pt";
HAnimSite675.children = new MFNode();

HAnimSite675.children[0] = TouchSensor676;

Shape Shape677 = createNode("Shape");
Shape677.USE = "HAnimSiteShape";
HAnimSite675.children[1] = Shape677;

HAnimJoint658.hAnimSite[4] = HAnimSite675;

HAnimSite HAnimSite678 = createNode("HAnimSite");
HAnimSite678.name = "opisthocranion_pt";
HAnimSite678.DEF = "hanim_opisthocranion_pt";
HAnimSite678.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor679 = createNode("TouchSensor");
TouchSensor679.description = "HAnimSite opisthocranion_pt";
HAnimSite678.children = new MFNode();

HAnimSite678.children[0] = TouchSensor679;

Shape Shape680 = createNode("Shape");
Shape680.USE = "HAnimSiteShape";
HAnimSite678.children[1] = Shape680;

HAnimJoint658.hAnimSite[5] = HAnimSite678;

HAnimSite HAnimSite681 = createNode("HAnimSite");
HAnimSite681.name = "r_ectocanthus_pt";
HAnimSite681.DEF = "hanim_r_ectocanthus_pt";
HAnimSite681.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor682 = createNode("TouchSensor");
TouchSensor682.description = "HAnimSite r_ectocanthus_pt";
HAnimSite681.children = new MFNode();

HAnimSite681.children[0] = TouchSensor682;

Shape Shape683 = createNode("Shape");
Shape683.USE = "HAnimSiteShape";
HAnimSite681.children[1] = Shape683;

HAnimJoint658.hAnimSite[6] = HAnimSite681;

HAnimSite HAnimSite684 = createNode("HAnimSite");
HAnimSite684.name = "r_infraorbitale_pt";
HAnimSite684.DEF = "hanim_r_infraorbitale_pt";
HAnimSite684.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor685 = createNode("TouchSensor");
TouchSensor685.description = "HAnimSite r_infraorbitale_pt";
HAnimSite684.children = new MFNode();

HAnimSite684.children[0] = TouchSensor685;

Shape Shape686 = createNode("Shape");
Shape686.USE = "HAnimSiteShape";
HAnimSite684.children[1] = Shape686;

HAnimJoint658.hAnimSite[7] = HAnimSite684;

HAnimSite HAnimSite687 = createNode("HAnimSite");
HAnimSite687.name = "r_tragion_pt";
HAnimSite687.DEF = "hanim_r_tragion_pt";
HAnimSite687.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor688 = createNode("TouchSensor");
TouchSensor688.description = "HAnimSite r_tragion_pt";
HAnimSite687.children = new MFNode();

HAnimSite687.children[0] = TouchSensor688;

Shape Shape689 = createNode("Shape");
Shape689.USE = "HAnimSiteShape";
HAnimSite687.children[1] = Shape689;

HAnimJoint658.hAnimSite[8] = HAnimSite687;

HAnimSite HAnimSite690 = createNode("HAnimSite");
HAnimSite690.name = "sellion_pt";
HAnimSite690.DEF = "hanim_sellion_pt";
HAnimSite690.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor691 = createNode("TouchSensor");
TouchSensor691.description = "HAnimSite sellion_pt";
HAnimSite690.children = new MFNode();

HAnimSite690.children[0] = TouchSensor691;

Shape Shape692 = createNode("Shape");
Shape692.USE = "HAnimSiteShape";
HAnimSite690.children[1] = Shape692;

HAnimJoint658.hAnimSite[9] = HAnimSite690;

HAnimSite HAnimSite693 = createNode("HAnimSite");
HAnimSite693.name = "skull_vertex_pt";
HAnimSite693.DEF = "hanim_skull_vertex_pt";
HAnimSite693.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor694 = createNode("TouchSensor");
TouchSensor694.description = "HAnimSite skull_vertex_pt";
HAnimSite693.children = new MFNode();

HAnimSite693.children[0] = TouchSensor694;

Shape Shape695 = createNode("Shape");
Shape695.USE = "HAnimSiteShape";
HAnimSite693.children[1] = Shape695;

HAnimJoint658.hAnimSite[10] = HAnimSite693;

HAnimJoint HAnimJoint696 = createNode("HAnimJoint");
HAnimJoint696.name = "skullbase";
HAnimJoint696.DEF = "hanim_skullbase";
HAnimJoint696.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint696.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.llimit = new MFFloat(new float[0,0,0]);
Shape Shape697 = createNode("Shape");
LineSet LineSet698 = createNode("LineSet");
LineSet698.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate699 = createNode("Coordinate");
Coordinate699.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet698.coord = Coordinate699;

//from skullbase to l_eyelid_joint
ColorRGBA ColorRGBA700 = createNode("ColorRGBA");
ColorRGBA700.USE = "HAnimSegmentLineColorRGBA";
LineSet698.color = ColorRGBA700;

Shape697.geometry = LineSet698;

HAnimJoint696.shape = Shape697;

Shape Shape701 = createNode("Shape");
LineSet LineSet702 = createNode("LineSet");
LineSet702.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate703 = createNode("Coordinate");
Coordinate703.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet702.coord = Coordinate703;

//from skullbase to r_eyelid_joint
ColorRGBA ColorRGBA704 = createNode("ColorRGBA");
ColorRGBA704.USE = "HAnimSegmentLineColorRGBA";
LineSet702.color = ColorRGBA704;

Shape701.geometry = LineSet702;

HAnimJoint696.shape = new undefined();

HAnimJoint696.shape[0] = Shape701;

Shape Shape705 = createNode("Shape");
LineSet LineSet706 = createNode("LineSet");
LineSet706.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate707 = createNode("Coordinate");
Coordinate707.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet706.coord = Coordinate707;

//from skullbase to l_eyeball_joint
ColorRGBA ColorRGBA708 = createNode("ColorRGBA");
ColorRGBA708.USE = "HAnimSegmentLineColorRGBA";
LineSet706.color = ColorRGBA708;

Shape705.geometry = LineSet706;

HAnimJoint696.shape[1] = Shape705;

Shape Shape709 = createNode("Shape");
LineSet LineSet710 = createNode("LineSet");
LineSet710.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate711 = createNode("Coordinate");
Coordinate711.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet710.coord = Coordinate711;

//from skullbase to r_eyeball_joint
ColorRGBA ColorRGBA712 = createNode("ColorRGBA");
ColorRGBA712.USE = "HAnimSegmentLineColorRGBA";
LineSet710.color = ColorRGBA712;

Shape709.geometry = LineSet710;

HAnimJoint696.shape[2] = Shape709;

Shape Shape713 = createNode("Shape");
LineSet LineSet714 = createNode("LineSet");
LineSet714.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate715 = createNode("Coordinate");
Coordinate715.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet714.coord = Coordinate715;

//from skullbase to l_eyebrow_joint
ColorRGBA ColorRGBA716 = createNode("ColorRGBA");
ColorRGBA716.USE = "HAnimSegmentLineColorRGBA";
LineSet714.color = ColorRGBA716;

Shape713.geometry = LineSet714;

HAnimJoint696.shape[3] = Shape713;

Shape Shape717 = createNode("Shape");
LineSet LineSet718 = createNode("LineSet");
LineSet718.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate719 = createNode("Coordinate");
Coordinate719.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet718.coord = Coordinate719;

//from skullbase to r_eyebrow_joint
ColorRGBA ColorRGBA720 = createNode("ColorRGBA");
ColorRGBA720.USE = "HAnimSegmentLineColorRGBA";
LineSet718.color = ColorRGBA720;

Shape717.geometry = LineSet718;

HAnimJoint696.shape[4] = Shape717;

Shape Shape721 = createNode("Shape");
LineSet LineSet722 = createNode("LineSet");
LineSet722.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate723 = createNode("Coordinate");
Coordinate723.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0,1,0]);
LineSet722.coord = Coordinate723;

//from skullbase to temporomandibular
ColorRGBA ColorRGBA724 = createNode("ColorRGBA");
ColorRGBA724.USE = "HAnimSegmentLineColorRGBA";
LineSet722.color = ColorRGBA724;

Shape721.geometry = LineSet722;

HAnimJoint696.shape[5] = Shape721;

HAnimSite HAnimSite725 = createNode("HAnimSite");
HAnimSite725.name = "l_gonion_pt";
HAnimSite725.DEF = "hanim_l_gonion_pt";
HAnimSite725.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
TouchSensor TouchSensor726 = createNode("TouchSensor");
TouchSensor726.description = "HAnimSite l_gonion_pt";
HAnimSite725.children = new MFNode();

HAnimSite725.children[0] = TouchSensor726;

Shape Shape727 = createNode("Shape");
Shape727.USE = "HAnimSiteShape";
HAnimSite725.children[1] = Shape727;

HAnimJoint696.hAnimSite[6] = HAnimSite725;

HAnimSite HAnimSite728 = createNode("HAnimSite");
HAnimSite728.name = "menton_pt";
HAnimSite728.DEF = "hanim_menton_pt";
HAnimSite728.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor729 = createNode("TouchSensor");
TouchSensor729.description = "HAnimSite menton_pt";
HAnimSite728.children = new MFNode();

HAnimSite728.children[0] = TouchSensor729;

Shape Shape730 = createNode("Shape");
Shape730.USE = "HAnimSiteShape";
HAnimSite728.children[1] = Shape730;

HAnimJoint696.hAnimSite[7] = HAnimSite728;

HAnimSite HAnimSite731 = createNode("HAnimSite");
HAnimSite731.name = "r_gonion_pt";
HAnimSite731.DEF = "hanim_r_gonion_pt";
HAnimSite731.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
TouchSensor TouchSensor732 = createNode("TouchSensor");
TouchSensor732.description = "HAnimSite r_gonion_pt";
HAnimSite731.children = new MFNode();

HAnimSite731.children[0] = TouchSensor732;

Shape Shape733 = createNode("Shape");
Shape733.USE = "HAnimSiteShape";
HAnimSite731.children[1] = Shape733;

HAnimJoint696.hAnimSite[8] = HAnimSite731;

HAnimSite HAnimSite734 = createNode("HAnimSite");
HAnimSite734.name = "supramenton_pt";
HAnimSite734.DEF = "hanim_supramenton_pt";
HAnimSite734.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
TouchSensor TouchSensor735 = createNode("TouchSensor");
TouchSensor735.description = "HAnimSite supramenton_pt";
HAnimSite734.children = new MFNode();

HAnimSite734.children[0] = TouchSensor735;

Shape Shape736 = createNode("Shape");
Shape736.USE = "HAnimSiteShape";
HAnimSite734.children[1] = Shape736;

HAnimJoint696.hAnimSite[9] = HAnimSite734;

HAnimJoint HAnimJoint737 = createNode("HAnimJoint");
HAnimJoint737.name = "l_eyelid_joint";
HAnimJoint737.DEF = "hanim_l_eyelid_joint";
HAnimJoint737.center = new SFVec3f(new float[0,1,0]);
HAnimJoint737.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint737.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.children[10] = HAnimJoint737;

HAnimJoint HAnimJoint738 = createNode("HAnimJoint");
HAnimJoint738.name = "r_eyelid_joint";
HAnimJoint738.DEF = "hanim_r_eyelid_joint";
HAnimJoint738.center = new SFVec3f(new float[0,1,0]);
HAnimJoint738.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint738.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.children[11] = HAnimJoint738;

HAnimJoint HAnimJoint739 = createNode("HAnimJoint");
HAnimJoint739.name = "l_eyeball_joint";
HAnimJoint739.DEF = "hanim_l_eyeball_joint";
HAnimJoint739.center = new SFVec3f(new float[0,1,0]);
HAnimJoint739.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint739.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.children[12] = HAnimJoint739;

HAnimJoint HAnimJoint740 = createNode("HAnimJoint");
HAnimJoint740.name = "r_eyeball_joint";
HAnimJoint740.DEF = "hanim_r_eyeball_joint";
HAnimJoint740.center = new SFVec3f(new float[0,1,0]);
HAnimJoint740.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint740.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.children[13] = HAnimJoint740;

HAnimJoint HAnimJoint741 = createNode("HAnimJoint");
HAnimJoint741.name = "l_eyebrow_joint";
HAnimJoint741.DEF = "hanim_l_eyebrow_joint";
HAnimJoint741.center = new SFVec3f(new float[0,1,0]);
HAnimJoint741.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint741.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.children[14] = HAnimJoint741;

HAnimJoint HAnimJoint742 = createNode("HAnimJoint");
HAnimJoint742.name = "r_eyebrow_joint";
HAnimJoint742.DEF = "hanim_r_eyebrow_joint";
HAnimJoint742.center = new SFVec3f(new float[0,1,0]);
HAnimJoint742.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint742.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.children[15] = HAnimJoint742;

HAnimJoint HAnimJoint743 = createNode("HAnimJoint");
HAnimJoint743.name = "temporomandibular";
HAnimJoint743.DEF = "hanim_temporomandibular";
HAnimJoint743.center = new SFVec3f(new float[0,1,0]);
HAnimJoint743.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint743.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint696.children[16] = HAnimJoint743;

HAnimJoint658.children[11] = HAnimJoint696;

HAnimJoint653.children = new MFNode();

HAnimJoint653.children[0] = HAnimJoint658;

HAnimJoint645.children[1] = HAnimJoint653;

HAnimJoint640.children = new MFNode();

HAnimJoint640.children[0] = HAnimJoint645;

HAnimJoint635.children = new MFNode();

HAnimJoint635.children[0] = HAnimJoint640;

HAnimJoint630.children = new MFNode();

HAnimJoint630.children[0] = HAnimJoint635;

HAnimJoint625.children = new MFNode();

HAnimJoint625.children[0] = HAnimJoint630;

HAnimJoint576.children[14] = HAnimJoint625;

HAnimJoint HAnimJoint744 = createNode("HAnimJoint");
HAnimJoint744.name = "l_sternoclavicular";
HAnimJoint744.DEF = "hanim_l_sternoclavicular";
HAnimJoint744.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimJoint744.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint744.llimit = new MFFloat(new float[0,0,0]);
Shape Shape745 = createNode("Shape");
LineSet LineSet746 = createNode("LineSet");
LineSet746.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate747 = createNode("Coordinate");
Coordinate747.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet746.coord = Coordinate747;

//from l_sternoclavicular to l_acromioclavicular
ColorRGBA ColorRGBA748 = createNode("ColorRGBA");
ColorRGBA748.USE = "HAnimSegmentLineColorRGBA";
LineSet746.color = ColorRGBA748;

Shape745.geometry = LineSet746;

HAnimJoint744.shape = Shape745;

HAnimJoint HAnimJoint749 = createNode("HAnimJoint");
HAnimJoint749.name = "l_acromioclavicular";
HAnimJoint749.DEF = "hanim_l_acromioclavicular";
HAnimJoint749.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimJoint749.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint749.llimit = new MFFloat(new float[0,0,0]);
Shape Shape750 = createNode("Shape");
LineSet LineSet751 = createNode("LineSet");
LineSet751.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate752 = createNode("Coordinate");
Coordinate752.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet751.coord = Coordinate752;

//from l_acromioclavicular to l_shoulder
ColorRGBA ColorRGBA753 = createNode("ColorRGBA");
ColorRGBA753.USE = "HAnimSegmentLineColorRGBA";
LineSet751.color = ColorRGBA753;

Shape750.geometry = LineSet751;

HAnimJoint749.shape = Shape750;

HAnimSite HAnimSite754 = createNode("HAnimSite");
HAnimSite754.name = "l_bideltoid_pt";
HAnimSite754.DEF = "hanim_l_bideltoid_pt";
HAnimSite754.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor755 = createNode("TouchSensor");
TouchSensor755.description = "HAnimSite l_bideltoid_pt";
HAnimSite754.children = new MFNode();

HAnimSite754.children[0] = TouchSensor755;

Shape Shape756 = createNode("Shape");
Shape756.USE = "HAnimSiteShape";
HAnimSite754.children[1] = Shape756;

HAnimJoint749.hAnimSite = new undefined();

HAnimJoint749.hAnimSite[0] = HAnimSite754;

HAnimSite HAnimSite757 = createNode("HAnimSite");
HAnimSite757.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite757.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite757.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor758 = createNode("TouchSensor");
TouchSensor758.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite757.children = new MFNode();

HAnimSite757.children[0] = TouchSensor758;

Shape Shape759 = createNode("Shape");
Shape759.USE = "HAnimSiteShape";
HAnimSite757.children[1] = Shape759;

HAnimJoint749.hAnimSite[1] = HAnimSite757;

HAnimJoint HAnimJoint760 = createNode("HAnimJoint");
HAnimJoint760.name = "l_shoulder";
HAnimJoint760.DEF = "hanim_l_shoulder";
HAnimJoint760.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimJoint760.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint760.llimit = new MFFloat(new float[0,0,0]);
Shape Shape761 = createNode("Shape");
LineSet LineSet762 = createNode("LineSet");
LineSet762.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate763 = createNode("Coordinate");
Coordinate763.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet762.coord = Coordinate763;

//from l_shoulder to l_elbow
ColorRGBA ColorRGBA764 = createNode("ColorRGBA");
ColorRGBA764.USE = "HAnimSegmentLineColorRGBA";
LineSet762.color = ColorRGBA764;

Shape761.geometry = LineSet762;

HAnimJoint760.shape = Shape761;

HAnimSite HAnimSite765 = createNode("HAnimSite");
HAnimSite765.name = "l_humeral_medial_epicondyles_pt";
HAnimSite765.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite765.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor766 = createNode("TouchSensor");
TouchSensor766.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite765.children = new MFNode();

HAnimSite765.children[0] = TouchSensor766;

Shape Shape767 = createNode("Shape");
Shape767.USE = "HAnimSiteShape";
HAnimSite765.children[1] = Shape767;

HAnimJoint760.hAnimSite = new undefined();

HAnimJoint760.hAnimSite[0] = HAnimSite765;

HAnimSite HAnimSite768 = createNode("HAnimSite");
HAnimSite768.name = "l_olecranon_pt";
HAnimSite768.DEF = "hanim_l_olecranon_pt";
HAnimSite768.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor769 = createNode("TouchSensor");
TouchSensor769.description = "HAnimSite l_olecranon_pt";
HAnimSite768.children = new MFNode();

HAnimSite768.children[0] = TouchSensor769;

Shape Shape770 = createNode("Shape");
Shape770.USE = "HAnimSiteShape";
HAnimSite768.children[1] = Shape770;

HAnimJoint760.hAnimSite[1] = HAnimSite768;

HAnimSite HAnimSite771 = createNode("HAnimSite");
HAnimSite771.name = "l_radial_styloid_pt";
HAnimSite771.DEF = "hanim_l_radial_styloid_pt";
HAnimSite771.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor772 = createNode("TouchSensor");
TouchSensor772.description = "HAnimSite l_radial_styloid_pt";
HAnimSite771.children = new MFNode();

HAnimSite771.children[0] = TouchSensor772;

Shape Shape773 = createNode("Shape");
Shape773.USE = "HAnimSiteShape";
HAnimSite771.children[1] = Shape773;

HAnimJoint760.hAnimSite[2] = HAnimSite771;

HAnimSite HAnimSite774 = createNode("HAnimSite");
HAnimSite774.name = "l_radiale_pt";
HAnimSite774.DEF = "hanim_l_radiale_pt";
HAnimSite774.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor775 = createNode("TouchSensor");
TouchSensor775.description = "HAnimSite l_radiale_pt";
HAnimSite774.children = new MFNode();

HAnimSite774.children[0] = TouchSensor775;

Shape Shape776 = createNode("Shape");
Shape776.USE = "HAnimSiteShape";
HAnimSite774.children[1] = Shape776;

HAnimJoint760.hAnimSite[3] = HAnimSite774;

HAnimJoint HAnimJoint777 = createNode("HAnimJoint");
HAnimJoint777.name = "l_elbow";
HAnimJoint777.DEF = "hanim_l_elbow";
HAnimJoint777.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimJoint777.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint777.llimit = new MFFloat(new float[0,0,0]);
Shape Shape778 = createNode("Shape");
LineSet LineSet779 = createNode("LineSet");
LineSet779.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate780 = createNode("Coordinate");
Coordinate780.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet779.coord = Coordinate780;

//from l_elbow to l_radiocarpal
ColorRGBA ColorRGBA781 = createNode("ColorRGBA");
ColorRGBA781.USE = "HAnimSegmentLineColorRGBA";
LineSet779.color = ColorRGBA781;

Shape778.geometry = LineSet779;

HAnimJoint777.shape = Shape778;

HAnimSite HAnimSite782 = createNode("HAnimSite");
HAnimSite782.name = "l_ulnar_styloid_pt";
HAnimSite782.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite782.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor783 = createNode("TouchSensor");
TouchSensor783.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite782.children = new MFNode();

HAnimSite782.children[0] = TouchSensor783;

Shape Shape784 = createNode("Shape");
Shape784.USE = "HAnimSiteShape";
HAnimSite782.children[1] = Shape784;

HAnimJoint777.hAnimSite = new undefined();

HAnimJoint777.hAnimSite[0] = HAnimSite782;

HAnimJoint HAnimJoint785 = createNode("HAnimJoint");
HAnimJoint785.name = "l_radiocarpal";
HAnimJoint785.DEF = "hanim_l_radiocarpal";
HAnimJoint785.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint785.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint785.llimit = new MFFloat(new float[0,0,0]);
Shape Shape786 = createNode("Shape");
LineSet LineSet787 = createNode("LineSet");
LineSet787.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate788 = createNode("Coordinate");
Coordinate788.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet787.coord = Coordinate788;

//from l_radiocarpal to l_midcarpal_1
ColorRGBA ColorRGBA789 = createNode("ColorRGBA");
ColorRGBA789.USE = "HAnimSegmentLineColorRGBA";
LineSet787.color = ColorRGBA789;

Shape786.geometry = LineSet787;

HAnimJoint785.shape = Shape786;

Shape Shape790 = createNode("Shape");
LineSet LineSet791 = createNode("LineSet");
LineSet791.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate792 = createNode("Coordinate");
Coordinate792.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet791.coord = Coordinate792;

//from l_radiocarpal to l_midcarpal_2
ColorRGBA ColorRGBA793 = createNode("ColorRGBA");
ColorRGBA793.USE = "HAnimSegmentLineColorRGBA";
LineSet791.color = ColorRGBA793;

Shape790.geometry = LineSet791;

HAnimJoint785.shape = new undefined();

HAnimJoint785.shape[0] = Shape790;

Shape Shape794 = createNode("Shape");
LineSet LineSet795 = createNode("LineSet");
LineSet795.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate796 = createNode("Coordinate");
Coordinate796.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet795.coord = Coordinate796;

//from l_radiocarpal to l_midcarpal_3
ColorRGBA ColorRGBA797 = createNode("ColorRGBA");
ColorRGBA797.USE = "HAnimSegmentLineColorRGBA";
LineSet795.color = ColorRGBA797;

Shape794.geometry = LineSet795;

HAnimJoint785.shape[1] = Shape794;

Shape Shape798 = createNode("Shape");
LineSet LineSet799 = createNode("LineSet");
LineSet799.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate800 = createNode("Coordinate");
Coordinate800.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0,1,0]);
LineSet799.coord = Coordinate800;

//from l_radiocarpal to l_midcarpal_4_5
ColorRGBA ColorRGBA801 = createNode("ColorRGBA");
ColorRGBA801.USE = "HAnimSegmentLineColorRGBA";
LineSet799.color = ColorRGBA801;

Shape798.geometry = LineSet799;

HAnimJoint785.shape[2] = Shape798;

HAnimJoint HAnimJoint802 = createNode("HAnimJoint");
HAnimJoint802.name = "l_midcarpal_1";
HAnimJoint802.DEF = "hanim_l_midcarpal_1";
HAnimJoint802.center = new SFVec3f(new float[0,1,0]);
HAnimJoint802.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint802.llimit = new MFFloat(new float[0,0,0]);
Shape Shape803 = createNode("Shape");
LineSet LineSet804 = createNode("LineSet");
LineSet804.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate805 = createNode("Coordinate");
Coordinate805.point = new MFVec3f(new float[0.1924,0.8472,-0.0534]);
LineSet804.coord = Coordinate805;

//from l_midcarpal_1 to l_carpometacarpal_1
ColorRGBA ColorRGBA806 = createNode("ColorRGBA");
ColorRGBA806.USE = "HAnimSegmentLineColorRGBA";
LineSet804.color = ColorRGBA806;

Shape803.geometry = LineSet804;

HAnimJoint802.shape = Shape803;

HAnimJoint HAnimJoint807 = createNode("HAnimJoint");
HAnimJoint807.name = "l_carpometacarpal_1";
HAnimJoint807.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint807.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimJoint807.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint807.llimit = new MFFloat(new float[0,0,0]);
Shape Shape808 = createNode("Shape");
LineSet LineSet809 = createNode("LineSet");
LineSet809.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate810 = createNode("Coordinate");
Coordinate810.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet809.coord = Coordinate810;

//from l_carpometacarpal_1 to l_metacarpophalangeal_1
ColorRGBA ColorRGBA811 = createNode("ColorRGBA");
ColorRGBA811.USE = "HAnimSegmentLineColorRGBA";
LineSet809.color = ColorRGBA811;

Shape808.geometry = LineSet809;

HAnimJoint807.shape = Shape808;

HAnimJoint HAnimJoint812 = createNode("HAnimJoint");
HAnimJoint812.name = "l_metacarpophalangeal_1";
HAnimJoint812.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint812.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimJoint812.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint812.llimit = new MFFloat(new float[0,0,0]);
Shape Shape813 = createNode("Shape");
LineSet LineSet814 = createNode("LineSet");
LineSet814.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate815 = createNode("Coordinate");
Coordinate815.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet814.coord = Coordinate815;

//from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1
ColorRGBA ColorRGBA816 = createNode("ColorRGBA");
ColorRGBA816.USE = "HAnimSegmentLineColorRGBA";
LineSet814.color = ColorRGBA816;

Shape813.geometry = LineSet814;

HAnimJoint812.shape = Shape813;

HAnimSite HAnimSite817 = createNode("HAnimSite");
HAnimSite817.name = "l_carpal_distal_phalanx_1_tip";
HAnimSite817.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite817.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor818 = createNode("TouchSensor");
TouchSensor818.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite817.children = new MFNode();

HAnimSite817.children[0] = TouchSensor818;

Shape Shape819 = createNode("Shape");
Shape819.USE = "HAnimSiteShape";
HAnimSite817.children[1] = Shape819;

HAnimJoint812.hAnimSite = new undefined();

HAnimJoint812.hAnimSite[0] = HAnimSite817;

HAnimJoint HAnimJoint820 = createNode("HAnimJoint");
HAnimJoint820.name = "l_carpal_interphalangeal_1";
HAnimJoint820.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint820.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint820.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint820.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint812.children[1] = HAnimJoint820;

HAnimJoint807.children = new MFNode();

HAnimJoint807.children[0] = HAnimJoint812;

HAnimJoint802.children = new MFNode();

HAnimJoint802.children[0] = HAnimJoint807;

HAnimJoint785.children[3] = HAnimJoint802;

HAnimJoint HAnimJoint821 = createNode("HAnimJoint");
HAnimJoint821.name = "l_midcarpal_2";
HAnimJoint821.DEF = "hanim_l_midcarpal_2";
HAnimJoint821.center = new SFVec3f(new float[0,1,0]);
HAnimJoint821.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint821.llimit = new MFFloat(new float[0,0,0]);
Shape Shape822 = createNode("Shape");
LineSet LineSet823 = createNode("LineSet");
LineSet823.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate824 = createNode("Coordinate");
Coordinate824.point = new MFVec3f(new float[0.1983,0.8024,-0.028]);
LineSet823.coord = Coordinate824;

//from l_midcarpal_2 to l_carpometacarpal_2
ColorRGBA ColorRGBA825 = createNode("ColorRGBA");
ColorRGBA825.USE = "HAnimSegmentLineColorRGBA";
LineSet823.color = ColorRGBA825;

Shape822.geometry = LineSet823;

HAnimJoint821.shape = Shape822;

HAnimSite HAnimSite826 = createNode("HAnimSite");
HAnimSite826.name = "l_metacarpal_phalanx_2_pt";
HAnimSite826.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite826.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor827 = createNode("TouchSensor");
TouchSensor827.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite826.children = new MFNode();

HAnimSite826.children[0] = TouchSensor827;

Shape Shape828 = createNode("Shape");
Shape828.USE = "HAnimSiteShape";
HAnimSite826.children[1] = Shape828;

HAnimJoint821.hAnimSite = new undefined();

HAnimJoint821.hAnimSite[0] = HAnimSite826;

HAnimJoint HAnimJoint829 = createNode("HAnimJoint");
HAnimJoint829.name = "l_carpometacarpal_2";
HAnimJoint829.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint829.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimJoint829.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint829.llimit = new MFFloat(new float[0,0,0]);
Shape Shape830 = createNode("Shape");
LineSet LineSet831 = createNode("LineSet");
LineSet831.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate832 = createNode("Coordinate");
Coordinate832.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet831.coord = Coordinate832;

//from l_carpometacarpal_2 to l_metacarpophalangeal_2
ColorRGBA ColorRGBA833 = createNode("ColorRGBA");
ColorRGBA833.USE = "HAnimSegmentLineColorRGBA";
LineSet831.color = ColorRGBA833;

Shape830.geometry = LineSet831;

HAnimJoint829.shape = Shape830;

HAnimJoint HAnimJoint834 = createNode("HAnimJoint");
HAnimJoint834.name = "l_metacarpophalangeal_2";
HAnimJoint834.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint834.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimJoint834.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint834.llimit = new MFFloat(new float[0,0,0]);
Shape Shape835 = createNode("Shape");
LineSet LineSet836 = createNode("LineSet");
LineSet836.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate837 = createNode("Coordinate");
Coordinate837.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet836.coord = Coordinate837;

//from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2
ColorRGBA ColorRGBA838 = createNode("ColorRGBA");
ColorRGBA838.USE = "HAnimSegmentLineColorRGBA";
LineSet836.color = ColorRGBA838;

Shape835.geometry = LineSet836;

HAnimJoint834.shape = Shape835;

HAnimJoint HAnimJoint839 = createNode("HAnimJoint");
HAnimJoint839.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint839.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint839.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimJoint839.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint839.llimit = new MFFloat(new float[0,0,0]);
Shape Shape840 = createNode("Shape");
LineSet LineSet841 = createNode("LineSet");
LineSet841.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate842 = createNode("Coordinate");
Coordinate842.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet841.coord = Coordinate842;

//from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2
ColorRGBA ColorRGBA843 = createNode("ColorRGBA");
ColorRGBA843.USE = "HAnimSegmentLineColorRGBA";
LineSet841.color = ColorRGBA843;

Shape840.geometry = LineSet841;

HAnimJoint839.shape = Shape840;

HAnimSite HAnimSite844 = createNode("HAnimSite");
HAnimSite844.name = "l_carpal_distal_phalanx_2_tip";
HAnimSite844.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite844.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor845 = createNode("TouchSensor");
TouchSensor845.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite844.children = new MFNode();

HAnimSite844.children[0] = TouchSensor845;

Shape Shape846 = createNode("Shape");
Shape846.USE = "HAnimSiteShape";
HAnimSite844.children[1] = Shape846;

HAnimJoint839.hAnimSite = new undefined();

HAnimJoint839.hAnimSite[0] = HAnimSite844;

HAnimSite HAnimSite847 = createNode("HAnimSite");
HAnimSite847.name = "l_dactylion_pt";
HAnimSite847.DEF = "hanim_l_dactylion_pt";
HAnimSite847.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor848 = createNode("TouchSensor");
TouchSensor848.description = "HAnimSite l_dactylion_pt";
HAnimSite847.children = new MFNode();

HAnimSite847.children[0] = TouchSensor848;

Shape Shape849 = createNode("Shape");
Shape849.USE = "HAnimSiteShape";
HAnimSite847.children[1] = Shape849;

HAnimJoint839.hAnimSite[1] = HAnimSite847;

HAnimJoint HAnimJoint850 = createNode("HAnimJoint");
HAnimJoint850.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint850.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint850.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint850.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint850.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint839.children[2] = HAnimJoint850;

HAnimJoint834.children = new MFNode();

HAnimJoint834.children[0] = HAnimJoint839;

HAnimJoint829.children = new MFNode();

HAnimJoint829.children[0] = HAnimJoint834;

HAnimJoint821.children[1] = HAnimJoint829;

HAnimJoint785.children[4] = HAnimJoint821;

HAnimJoint HAnimJoint851 = createNode("HAnimJoint");
HAnimJoint851.name = "l_midcarpal_3";
HAnimJoint851.DEF = "hanim_l_midcarpal_3";
HAnimJoint851.center = new SFVec3f(new float[0,1,0]);
HAnimJoint851.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint851.llimit = new MFFloat(new float[0,0,0]);
Shape Shape852 = createNode("Shape");
LineSet LineSet853 = createNode("LineSet");
LineSet853.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate854 = createNode("Coordinate");
Coordinate854.point = new MFVec3f(new float[0.1987,0.8029,-0.053]);
LineSet853.coord = Coordinate854;

//from l_midcarpal_3 to l_carpometacarpal_3
ColorRGBA ColorRGBA855 = createNode("ColorRGBA");
ColorRGBA855.USE = "HAnimSegmentLineColorRGBA";
LineSet853.color = ColorRGBA855;

Shape852.geometry = LineSet853;

HAnimJoint851.shape = Shape852;

HAnimSite HAnimSite856 = createNode("HAnimSite");
HAnimSite856.name = "l_metacarpal_phalanx_3_pt";
HAnimSite856.DEF = "hanim_l_metacarpal_phalanx_3_pt";
HAnimSite856.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor857 = createNode("TouchSensor");
TouchSensor857.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite856.children = new MFNode();

HAnimSite856.children[0] = TouchSensor857;

Shape Shape858 = createNode("Shape");
Shape858.USE = "HAnimSiteShape";
HAnimSite856.children[1] = Shape858;

HAnimJoint851.hAnimSite = new undefined();

HAnimJoint851.hAnimSite[0] = HAnimSite856;

HAnimJoint HAnimJoint859 = createNode("HAnimJoint");
HAnimJoint859.name = "l_carpometacarpal_3";
HAnimJoint859.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint859.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimJoint859.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint859.llimit = new MFFloat(new float[0,0,0]);
Shape Shape860 = createNode("Shape");
LineSet LineSet861 = createNode("LineSet");
LineSet861.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate862 = createNode("Coordinate");
Coordinate862.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet861.coord = Coordinate862;

//from l_carpometacarpal_3 to l_metacarpophalangeal_3
ColorRGBA ColorRGBA863 = createNode("ColorRGBA");
ColorRGBA863.USE = "HAnimSegmentLineColorRGBA";
LineSet861.color = ColorRGBA863;

Shape860.geometry = LineSet861;

HAnimJoint859.shape = Shape860;

HAnimJoint HAnimJoint864 = createNode("HAnimJoint");
HAnimJoint864.name = "l_metacarpophalangeal_3";
HAnimJoint864.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint864.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimJoint864.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint864.llimit = new MFFloat(new float[0,0,0]);
Shape Shape865 = createNode("Shape");
LineSet LineSet866 = createNode("LineSet");
LineSet866.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate867 = createNode("Coordinate");
Coordinate867.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet866.coord = Coordinate867;

//from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3
ColorRGBA ColorRGBA868 = createNode("ColorRGBA");
ColorRGBA868.USE = "HAnimSegmentLineColorRGBA";
LineSet866.color = ColorRGBA868;

Shape865.geometry = LineSet866;

HAnimJoint864.shape = Shape865;

HAnimJoint HAnimJoint869 = createNode("HAnimJoint");
HAnimJoint869.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint869.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint869.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimJoint869.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint869.llimit = new MFFloat(new float[0,0,0]);
Shape Shape870 = createNode("Shape");
LineSet LineSet871 = createNode("LineSet");
LineSet871.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate872 = createNode("Coordinate");
Coordinate872.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet871.coord = Coordinate872;

//from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3
ColorRGBA ColorRGBA873 = createNode("ColorRGBA");
ColorRGBA873.USE = "HAnimSegmentLineColorRGBA";
LineSet871.color = ColorRGBA873;

Shape870.geometry = LineSet871;

HAnimJoint869.shape = Shape870;

HAnimSite HAnimSite874 = createNode("HAnimSite");
HAnimSite874.name = "l_carpal_distal_phalanx_3_tip";
HAnimSite874.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite874.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor875 = createNode("TouchSensor");
TouchSensor875.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite874.children = new MFNode();

HAnimSite874.children[0] = TouchSensor875;

Shape Shape876 = createNode("Shape");
Shape876.USE = "HAnimSiteShape";
HAnimSite874.children[1] = Shape876;

HAnimJoint869.hAnimSite = new undefined();

HAnimJoint869.hAnimSite[0] = HAnimSite874;

HAnimJoint HAnimJoint877 = createNode("HAnimJoint");
HAnimJoint877.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint877.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint877.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint877.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint877.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint869.children[1] = HAnimJoint877;

HAnimJoint864.children = new MFNode();

HAnimJoint864.children[0] = HAnimJoint869;

HAnimJoint859.children = new MFNode();

HAnimJoint859.children[0] = HAnimJoint864;

HAnimJoint851.children[1] = HAnimJoint859;

HAnimJoint785.children[5] = HAnimJoint851;

HAnimJoint HAnimJoint878 = createNode("HAnimJoint");
HAnimJoint878.name = "l_midcarpal_4_5";
HAnimJoint878.DEF = "hanim_l_midcarpal_4_5";
HAnimJoint878.center = new SFVec3f(new float[0,1,0]);
HAnimJoint878.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint878.llimit = new MFFloat(new float[0,0,0]);
Shape Shape879 = createNode("Shape");
LineSet LineSet880 = createNode("LineSet");
LineSet880.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate881 = createNode("Coordinate");
Coordinate881.point = new MFVec3f(new float[0.1956,0.8019,-0.0794]);
LineSet880.coord = Coordinate881;

//from l_midcarpal_4_5 to l_carpometacarpal_4
ColorRGBA ColorRGBA882 = createNode("ColorRGBA");
ColorRGBA882.USE = "HAnimSegmentLineColorRGBA";
LineSet880.color = ColorRGBA882;

Shape879.geometry = LineSet880;

HAnimJoint878.shape = Shape879;

Shape Shape883 = createNode("Shape");
LineSet LineSet884 = createNode("LineSet");
LineSet884.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate885 = createNode("Coordinate");
Coordinate885.point = new MFVec3f(new float[0.1925,0.8066,-0.1036]);
LineSet884.coord = Coordinate885;

//from l_midcarpal_4_5 to l_carpometacarpal_5
ColorRGBA ColorRGBA886 = createNode("ColorRGBA");
ColorRGBA886.USE = "HAnimSegmentLineColorRGBA";
LineSet884.color = ColorRGBA886;

Shape883.geometry = LineSet884;

HAnimJoint878.shape = new undefined();

HAnimJoint878.shape[0] = Shape883;

HAnimSite HAnimSite887 = createNode("HAnimSite");
HAnimSite887.name = "l_metacarpal_phalanx_5_pt";
HAnimSite887.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite887.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor888 = createNode("TouchSensor");
TouchSensor888.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite887.children = new MFNode();

HAnimSite887.children[0] = TouchSensor888;

Shape Shape889 = createNode("Shape");
Shape889.USE = "HAnimSiteShape";
HAnimSite887.children[1] = Shape889;

HAnimJoint878.hAnimSite[1] = HAnimSite887;

HAnimJoint HAnimJoint890 = createNode("HAnimJoint");
HAnimJoint890.name = "l_carpometacarpal_4";
HAnimJoint890.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint890.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimJoint890.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint890.llimit = new MFFloat(new float[0,0,0]);
Shape Shape891 = createNode("Shape");
LineSet LineSet892 = createNode("LineSet");
LineSet892.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate893 = createNode("Coordinate");
Coordinate893.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet892.coord = Coordinate893;

//from l_carpometacarpal_4 to l_metacarpophalangeal_4
ColorRGBA ColorRGBA894 = createNode("ColorRGBA");
ColorRGBA894.USE = "HAnimSegmentLineColorRGBA";
LineSet892.color = ColorRGBA894;

Shape891.geometry = LineSet892;

HAnimJoint890.shape = Shape891;

HAnimJoint HAnimJoint895 = createNode("HAnimJoint");
HAnimJoint895.name = "l_metacarpophalangeal_4";
HAnimJoint895.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint895.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimJoint895.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint895.llimit = new MFFloat(new float[0,0,0]);
Shape Shape896 = createNode("Shape");
LineSet LineSet897 = createNode("LineSet");
LineSet897.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate898 = createNode("Coordinate");
Coordinate898.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet897.coord = Coordinate898;

//from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4
ColorRGBA ColorRGBA899 = createNode("ColorRGBA");
ColorRGBA899.USE = "HAnimSegmentLineColorRGBA";
LineSet897.color = ColorRGBA899;

Shape896.geometry = LineSet897;

HAnimJoint895.shape = Shape896;

HAnimJoint HAnimJoint900 = createNode("HAnimJoint");
HAnimJoint900.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint900.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint900.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimJoint900.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint900.llimit = new MFFloat(new float[0,0,0]);
Shape Shape901 = createNode("Shape");
LineSet LineSet902 = createNode("LineSet");
LineSet902.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate903 = createNode("Coordinate");
Coordinate903.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet902.coord = Coordinate903;

//from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4
ColorRGBA ColorRGBA904 = createNode("ColorRGBA");
ColorRGBA904.USE = "HAnimSegmentLineColorRGBA";
LineSet902.color = ColorRGBA904;

Shape901.geometry = LineSet902;

HAnimJoint900.shape = Shape901;

HAnimSite HAnimSite905 = createNode("HAnimSite");
HAnimSite905.name = "l_carpal_distal_phalanx_4_tip";
HAnimSite905.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite905.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor906 = createNode("TouchSensor");
TouchSensor906.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite905.children = new MFNode();

HAnimSite905.children[0] = TouchSensor906;

Shape Shape907 = createNode("Shape");
Shape907.USE = "HAnimSiteShape";
HAnimSite905.children[1] = Shape907;

HAnimJoint900.hAnimSite = new undefined();

HAnimJoint900.hAnimSite[0] = HAnimSite905;

HAnimJoint HAnimJoint908 = createNode("HAnimJoint");
HAnimJoint908.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint908.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint908.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint908.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint908.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint900.children[1] = HAnimJoint908;

HAnimJoint895.children = new MFNode();

HAnimJoint895.children[0] = HAnimJoint900;

HAnimJoint890.children = new MFNode();

HAnimJoint890.children[0] = HAnimJoint895;

HAnimJoint878.children[2] = HAnimJoint890;

HAnimJoint HAnimJoint909 = createNode("HAnimJoint");
HAnimJoint909.name = "l_carpometacarpal_5";
HAnimJoint909.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint909.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimJoint909.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint909.llimit = new MFFloat(new float[0,0,0]);
Shape Shape910 = createNode("Shape");
LineSet LineSet911 = createNode("LineSet");
LineSet911.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate912 = createNode("Coordinate");
Coordinate912.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet911.coord = Coordinate912;

//from l_carpometacarpal_5 to l_metacarpophalangeal_5
ColorRGBA ColorRGBA913 = createNode("ColorRGBA");
ColorRGBA913.USE = "HAnimSegmentLineColorRGBA";
LineSet911.color = ColorRGBA913;

Shape910.geometry = LineSet911;

HAnimJoint909.shape = Shape910;

HAnimJoint HAnimJoint914 = createNode("HAnimJoint");
HAnimJoint914.name = "l_metacarpophalangeal_5";
HAnimJoint914.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint914.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimJoint914.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint914.llimit = new MFFloat(new float[0,0,0]);
Shape Shape915 = createNode("Shape");
LineSet LineSet916 = createNode("LineSet");
LineSet916.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate917 = createNode("Coordinate");
Coordinate917.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet916.coord = Coordinate917;

//from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5
ColorRGBA ColorRGBA918 = createNode("ColorRGBA");
ColorRGBA918.USE = "HAnimSegmentLineColorRGBA";
LineSet916.color = ColorRGBA918;

Shape915.geometry = LineSet916;

HAnimJoint914.shape = Shape915;

HAnimJoint HAnimJoint919 = createNode("HAnimJoint");
HAnimJoint919.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint919.DEF = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimJoint919.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimJoint919.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint919.llimit = new MFFloat(new float[0,0,0]);
Shape Shape920 = createNode("Shape");
LineSet LineSet921 = createNode("LineSet");
LineSet921.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate922 = createNode("Coordinate");
Coordinate922.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet921.coord = Coordinate922;

//from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5
ColorRGBA ColorRGBA923 = createNode("ColorRGBA");
ColorRGBA923.USE = "HAnimSegmentLineColorRGBA";
LineSet921.color = ColorRGBA923;

Shape920.geometry = LineSet921;

HAnimJoint919.shape = Shape920;

HAnimSite HAnimSite924 = createNode("HAnimSite");
HAnimSite924.name = "l_carpal_distal_phalanx_5_tip";
HAnimSite924.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite924.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor925 = createNode("TouchSensor");
TouchSensor925.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite924.children = new MFNode();

HAnimSite924.children[0] = TouchSensor925;

Shape Shape926 = createNode("Shape");
Shape926.USE = "HAnimSiteShape";
HAnimSite924.children[1] = Shape926;

HAnimJoint919.hAnimSite = new undefined();

HAnimJoint919.hAnimSite[0] = HAnimSite924;

HAnimJoint HAnimJoint927 = createNode("HAnimJoint");
HAnimJoint927.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint927.DEF = "hanim_l_carpal_distal_interphalangeal_5";
HAnimJoint927.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint927.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint927.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint919.children[1] = HAnimJoint927;

HAnimJoint914.children = new MFNode();

HAnimJoint914.children[0] = HAnimJoint919;

HAnimJoint909.children = new MFNode();

HAnimJoint909.children[0] = HAnimJoint914;

HAnimJoint878.children[3] = HAnimJoint909;

HAnimJoint785.children[6] = HAnimJoint878;

HAnimJoint777.children[1] = HAnimJoint785;

HAnimJoint760.children[4] = HAnimJoint777;

HAnimJoint749.children[2] = HAnimJoint760;

HAnimJoint744.children = new MFNode();

HAnimJoint744.children[0] = HAnimJoint749;

HAnimJoint576.children[15] = HAnimJoint744;

HAnimJoint HAnimJoint928 = createNode("HAnimJoint");
HAnimJoint928.name = "r_sternoclavicular";
HAnimJoint928.DEF = "hanim_r_sternoclavicular";
HAnimJoint928.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimJoint928.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint928.llimit = new MFFloat(new float[0,0,0]);
Shape Shape929 = createNode("Shape");
LineSet LineSet930 = createNode("LineSet");
LineSet930.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate931 = createNode("Coordinate");
Coordinate931.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet930.coord = Coordinate931;

//from r_sternoclavicular to r_acromioclavicular
ColorRGBA ColorRGBA932 = createNode("ColorRGBA");
ColorRGBA932.USE = "HAnimSegmentLineColorRGBA";
LineSet930.color = ColorRGBA932;

Shape929.geometry = LineSet930;

HAnimJoint928.shape = Shape929;

HAnimJoint HAnimJoint933 = createNode("HAnimJoint");
HAnimJoint933.name = "r_acromioclavicular";
HAnimJoint933.DEF = "hanim_r_acromioclavicular";
HAnimJoint933.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimJoint933.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint933.llimit = new MFFloat(new float[0,0,0]);
Shape Shape934 = createNode("Shape");
LineSet LineSet935 = createNode("LineSet");
LineSet935.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate936 = createNode("Coordinate");
Coordinate936.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet935.coord = Coordinate936;

//from r_acromioclavicular to r_shoulder
ColorRGBA ColorRGBA937 = createNode("ColorRGBA");
ColorRGBA937.USE = "HAnimSegmentLineColorRGBA";
LineSet935.color = ColorRGBA937;

Shape934.geometry = LineSet935;

HAnimJoint933.shape = Shape934;

HAnimSite HAnimSite938 = createNode("HAnimSite");
HAnimSite938.name = "r_bideltoid_pt";
HAnimSite938.DEF = "hanim_r_bideltoid_pt";
HAnimSite938.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor939 = createNode("TouchSensor");
TouchSensor939.description = "HAnimSite r_bideltoid_pt";
HAnimSite938.children = new MFNode();

HAnimSite938.children[0] = TouchSensor939;

Shape Shape940 = createNode("Shape");
Shape940.USE = "HAnimSiteShape";
HAnimSite938.children[1] = Shape940;

HAnimJoint933.hAnimSite = new undefined();

HAnimJoint933.hAnimSite[0] = HAnimSite938;

HAnimSite HAnimSite941 = createNode("HAnimSite");
HAnimSite941.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite941.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite941.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor942 = createNode("TouchSensor");
TouchSensor942.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite941.children = new MFNode();

HAnimSite941.children[0] = TouchSensor942;

Shape Shape943 = createNode("Shape");
Shape943.USE = "HAnimSiteShape";
HAnimSite941.children[1] = Shape943;

HAnimJoint933.hAnimSite[1] = HAnimSite941;

HAnimJoint HAnimJoint944 = createNode("HAnimJoint");
HAnimJoint944.name = "r_shoulder";
HAnimJoint944.DEF = "hanim_r_shoulder";
HAnimJoint944.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimJoint944.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint944.llimit = new MFFloat(new float[0,0,0]);
Shape Shape945 = createNode("Shape");
LineSet LineSet946 = createNode("LineSet");
LineSet946.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate947 = createNode("Coordinate");
Coordinate947.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet946.coord = Coordinate947;

//from r_shoulder to r_elbow
ColorRGBA ColorRGBA948 = createNode("ColorRGBA");
ColorRGBA948.USE = "HAnimSegmentLineColorRGBA";
LineSet946.color = ColorRGBA948;

Shape945.geometry = LineSet946;

HAnimJoint944.shape = Shape945;

HAnimSite HAnimSite949 = createNode("HAnimSite");
HAnimSite949.name = "r_humeral_medial_epicondyles_pt";
HAnimSite949.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite949.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor950 = createNode("TouchSensor");
TouchSensor950.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite949.children = new MFNode();

HAnimSite949.children[0] = TouchSensor950;

Shape Shape951 = createNode("Shape");
Shape951.USE = "HAnimSiteShape";
HAnimSite949.children[1] = Shape951;

HAnimJoint944.hAnimSite = new undefined();

HAnimJoint944.hAnimSite[0] = HAnimSite949;

HAnimSite HAnimSite952 = createNode("HAnimSite");
HAnimSite952.name = "r_olecranon_pt";
HAnimSite952.DEF = "hanim_r_olecranon_pt";
HAnimSite952.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor953 = createNode("TouchSensor");
TouchSensor953.description = "HAnimSite r_olecranon_pt";
HAnimSite952.children = new MFNode();

HAnimSite952.children[0] = TouchSensor953;

Shape Shape954 = createNode("Shape");
Shape954.USE = "HAnimSiteShape";
HAnimSite952.children[1] = Shape954;

HAnimJoint944.hAnimSite[1] = HAnimSite952;

HAnimSite HAnimSite955 = createNode("HAnimSite");
HAnimSite955.name = "r_radial_styloid_pt";
HAnimSite955.DEF = "hanim_r_radial_styloid_pt";
HAnimSite955.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor956 = createNode("TouchSensor");
TouchSensor956.description = "HAnimSite r_radial_styloid_pt";
HAnimSite955.children = new MFNode();

HAnimSite955.children[0] = TouchSensor956;

Shape Shape957 = createNode("Shape");
Shape957.USE = "HAnimSiteShape";
HAnimSite955.children[1] = Shape957;

HAnimJoint944.hAnimSite[2] = HAnimSite955;

HAnimSite HAnimSite958 = createNode("HAnimSite");
HAnimSite958.name = "r_radiale_pt";
HAnimSite958.DEF = "hanim_r_radiale_pt";
HAnimSite958.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor959 = createNode("TouchSensor");
TouchSensor959.description = "HAnimSite r_radiale_pt";
HAnimSite958.children = new MFNode();

HAnimSite958.children[0] = TouchSensor959;

Shape Shape960 = createNode("Shape");
Shape960.USE = "HAnimSiteShape";
HAnimSite958.children[1] = Shape960;

HAnimJoint944.hAnimSite[3] = HAnimSite958;

HAnimJoint HAnimJoint961 = createNode("HAnimJoint");
HAnimJoint961.name = "r_elbow";
HAnimJoint961.DEF = "hanim_r_elbow";
HAnimJoint961.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimJoint961.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint961.llimit = new MFFloat(new float[0,0,0]);
Shape Shape962 = createNode("Shape");
LineSet LineSet963 = createNode("LineSet");
LineSet963.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate964 = createNode("Coordinate");
Coordinate964.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet963.coord = Coordinate964;

//from r_elbow to r_radiocarpal
ColorRGBA ColorRGBA965 = createNode("ColorRGBA");
ColorRGBA965.USE = "HAnimSegmentLineColorRGBA";
LineSet963.color = ColorRGBA965;

Shape962.geometry = LineSet963;

HAnimJoint961.shape = Shape962;

HAnimSite HAnimSite966 = createNode("HAnimSite");
HAnimSite966.name = "r_ulnar_styloid_pt";
HAnimSite966.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite966.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor967 = createNode("TouchSensor");
TouchSensor967.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite966.children = new MFNode();

HAnimSite966.children[0] = TouchSensor967;

Shape Shape968 = createNode("Shape");
Shape968.USE = "HAnimSiteShape";
HAnimSite966.children[1] = Shape968;

HAnimJoint961.hAnimSite = new undefined();

HAnimJoint961.hAnimSite[0] = HAnimSite966;

HAnimJoint HAnimJoint969 = createNode("HAnimJoint");
HAnimJoint969.name = "r_radiocarpal";
HAnimJoint969.DEF = "hanim_r_radiocarpal";
HAnimJoint969.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint969.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint969.llimit = new MFFloat(new float[0,0,0]);
Shape Shape970 = createNode("Shape");
LineSet LineSet971 = createNode("LineSet");
LineSet971.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate972 = createNode("Coordinate");
Coordinate972.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet971.coord = Coordinate972;

//from r_radiocarpal to r_midcarpal_1
ColorRGBA ColorRGBA973 = createNode("ColorRGBA");
ColorRGBA973.USE = "HAnimSegmentLineColorRGBA";
LineSet971.color = ColorRGBA973;

Shape970.geometry = LineSet971;

HAnimJoint969.shape = Shape970;

Shape Shape974 = createNode("Shape");
LineSet LineSet975 = createNode("LineSet");
LineSet975.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate976 = createNode("Coordinate");
Coordinate976.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet975.coord = Coordinate976;

//from r_radiocarpal to r_midcarpal_2
ColorRGBA ColorRGBA977 = createNode("ColorRGBA");
ColorRGBA977.USE = "HAnimSegmentLineColorRGBA";
LineSet975.color = ColorRGBA977;

Shape974.geometry = LineSet975;

HAnimJoint969.shape = new undefined();

HAnimJoint969.shape[0] = Shape974;

Shape Shape978 = createNode("Shape");
LineSet LineSet979 = createNode("LineSet");
LineSet979.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate980 = createNode("Coordinate");
Coordinate980.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet979.coord = Coordinate980;

//from r_radiocarpal to r_midcarpal_3
ColorRGBA ColorRGBA981 = createNode("ColorRGBA");
ColorRGBA981.USE = "HAnimSegmentLineColorRGBA";
LineSet979.color = ColorRGBA981;

Shape978.geometry = LineSet979;

HAnimJoint969.shape[1] = Shape978;

Shape Shape982 = createNode("Shape");
LineSet LineSet983 = createNode("LineSet");
LineSet983.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate984 = createNode("Coordinate");
Coordinate984.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,0,1,0]);
LineSet983.coord = Coordinate984;

//from r_radiocarpal to r_midcarpal_4_5
ColorRGBA ColorRGBA985 = createNode("ColorRGBA");
ColorRGBA985.USE = "HAnimSegmentLineColorRGBA";
LineSet983.color = ColorRGBA985;

Shape982.geometry = LineSet983;

HAnimJoint969.shape[2] = Shape982;

HAnimJoint HAnimJoint986 = createNode("HAnimJoint");
HAnimJoint986.name = "r_midcarpal_1";
HAnimJoint986.DEF = "hanim_r_midcarpal_1";
HAnimJoint986.center = new SFVec3f(new float[0,1,0]);
HAnimJoint986.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint986.llimit = new MFFloat(new float[0,0,0]);
Shape Shape987 = createNode("Shape");
LineSet LineSet988 = createNode("LineSet");
LineSet988.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate989 = createNode("Coordinate");
Coordinate989.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473]);
LineSet988.coord = Coordinate989;

//from r_midcarpal_1 to r_carpometacarpal_1
ColorRGBA ColorRGBA990 = createNode("ColorRGBA");
ColorRGBA990.USE = "HAnimSegmentLineColorRGBA";
LineSet988.color = ColorRGBA990;

Shape987.geometry = LineSet988;

HAnimJoint986.shape = Shape987;

HAnimJoint HAnimJoint991 = createNode("HAnimJoint");
HAnimJoint991.name = "r_carpometacarpal_1";
HAnimJoint991.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint991.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimJoint991.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint991.llimit = new MFFloat(new float[0,0,0]);
Shape Shape992 = createNode("Shape");
LineSet LineSet993 = createNode("LineSet");
LineSet993.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate994 = createNode("Coordinate");
Coordinate994.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet993.coord = Coordinate994;

//from r_carpometacarpal_1 to r_metacarpophalangeal_1
ColorRGBA ColorRGBA995 = createNode("ColorRGBA");
ColorRGBA995.USE = "HAnimSegmentLineColorRGBA";
LineSet993.color = ColorRGBA995;

Shape992.geometry = LineSet993;

HAnimJoint991.shape = Shape992;

HAnimJoint HAnimJoint996 = createNode("HAnimJoint");
HAnimJoint996.name = "r_metacarpophalangeal_1";
HAnimJoint996.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint996.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimJoint996.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.llimit = new MFFloat(new float[0,0,0]);
Shape Shape997 = createNode("Shape");
LineSet LineSet998 = createNode("LineSet");
LineSet998.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate999 = createNode("Coordinate");
Coordinate999.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet998.coord = Coordinate999;

//from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1
ColorRGBA ColorRGBA1000 = createNode("ColorRGBA");
ColorRGBA1000.USE = "HAnimSegmentLineColorRGBA";
LineSet998.color = ColorRGBA1000;

Shape997.geometry = LineSet998;

HAnimJoint996.shape = Shape997;

HAnimSite HAnimSite1001 = createNode("HAnimSite");
HAnimSite1001.name = "r_carpal_distal_phalanx_1_tip";
HAnimSite1001.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite1001.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1002 = createNode("TouchSensor");
TouchSensor1002.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1001.children = new MFNode();

HAnimSite1001.children[0] = TouchSensor1002;

Shape Shape1003 = createNode("Shape");
Shape1003.USE = "HAnimSiteShape";
HAnimSite1001.children[1] = Shape1003;

HAnimJoint996.hAnimSite = new undefined();

HAnimJoint996.hAnimSite[0] = HAnimSite1001;

HAnimJoint HAnimJoint1004 = createNode("HAnimJoint");
HAnimJoint1004.name = "r_carpal_interphalangeal_1";
HAnimJoint1004.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1004.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1004.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1004.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint996.children[1] = HAnimJoint1004;

HAnimJoint991.children = new MFNode();

HAnimJoint991.children[0] = HAnimJoint996;

HAnimJoint986.children = new MFNode();

HAnimJoint986.children[0] = HAnimJoint991;

HAnimJoint969.children[3] = HAnimJoint986;

HAnimJoint HAnimJoint1005 = createNode("HAnimJoint");
HAnimJoint1005.name = "r_midcarpal_2";
HAnimJoint1005.DEF = "hanim_r_midcarpal_2";
HAnimJoint1005.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1005.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1005.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1006 = createNode("Shape");
LineSet LineSet1007 = createNode("LineSet");
LineSet1007.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate1008 = createNode("Coordinate");
Coordinate1008.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218]);
LineSet1007.coord = Coordinate1008;

//from r_midcarpal_2 to r_carpometacarpal_2
ColorRGBA ColorRGBA1009 = createNode("ColorRGBA");
ColorRGBA1009.USE = "HAnimSegmentLineColorRGBA";
LineSet1007.color = ColorRGBA1009;

Shape1006.geometry = LineSet1007;

HAnimJoint1005.shape = Shape1006;

HAnimSite HAnimSite1010 = createNode("HAnimSite");
HAnimSite1010.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1010.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1010.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor1011 = createNode("TouchSensor");
TouchSensor1011.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite1010.children = new MFNode();

HAnimSite1010.children[0] = TouchSensor1011;

Shape Shape1012 = createNode("Shape");
Shape1012.USE = "HAnimSiteShape";
HAnimSite1010.children[1] = Shape1012;

HAnimJoint1005.hAnimSite = new undefined();

HAnimJoint1005.hAnimSite[0] = HAnimSite1010;

HAnimJoint HAnimJoint1013 = createNode("HAnimJoint");
HAnimJoint1013.name = "r_carpometacarpal_2";
HAnimJoint1013.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1013.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimJoint1013.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1013.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1014 = createNode("Shape");
LineSet LineSet1015 = createNode("LineSet");
LineSet1015.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1016 = createNode("Coordinate");
Coordinate1016.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1015.coord = Coordinate1016;

//from r_carpometacarpal_2 to r_metacarpophalangeal_2
ColorRGBA ColorRGBA1017 = createNode("ColorRGBA");
ColorRGBA1017.USE = "HAnimSegmentLineColorRGBA";
LineSet1015.color = ColorRGBA1017;

Shape1014.geometry = LineSet1015;

HAnimJoint1013.shape = Shape1014;

HAnimJoint HAnimJoint1018 = createNode("HAnimJoint");
HAnimJoint1018.name = "r_metacarpophalangeal_2";
HAnimJoint1018.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1018.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimJoint1018.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1018.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1019 = createNode("Shape");
LineSet LineSet1020 = createNode("LineSet");
LineSet1020.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1021 = createNode("Coordinate");
Coordinate1021.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1020.coord = Coordinate1021;

//from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2
ColorRGBA ColorRGBA1022 = createNode("ColorRGBA");
ColorRGBA1022.USE = "HAnimSegmentLineColorRGBA";
LineSet1020.color = ColorRGBA1022;

Shape1019.geometry = LineSet1020;

HAnimJoint1018.shape = Shape1019;

HAnimJoint HAnimJoint1023 = createNode("HAnimJoint");
HAnimJoint1023.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1023.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1023.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimJoint1023.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1023.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1024 = createNode("Shape");
LineSet LineSet1025 = createNode("LineSet");
LineSet1025.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1026 = createNode("Coordinate");
Coordinate1026.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1025.coord = Coordinate1026;

//from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2
ColorRGBA ColorRGBA1027 = createNode("ColorRGBA");
ColorRGBA1027.USE = "HAnimSegmentLineColorRGBA";
LineSet1025.color = ColorRGBA1027;

Shape1024.geometry = LineSet1025;

HAnimJoint1023.shape = Shape1024;

HAnimSite HAnimSite1028 = createNode("HAnimSite");
HAnimSite1028.name = "r_carpal_distal_phalanx_2_tip";
HAnimSite1028.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite1028.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1029 = createNode("TouchSensor");
TouchSensor1029.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1028.children = new MFNode();

HAnimSite1028.children[0] = TouchSensor1029;

Shape Shape1030 = createNode("Shape");
Shape1030.USE = "HAnimSiteShape";
HAnimSite1028.children[1] = Shape1030;

HAnimJoint1023.hAnimSite = new undefined();

HAnimJoint1023.hAnimSite[0] = HAnimSite1028;

HAnimSite HAnimSite1031 = createNode("HAnimSite");
HAnimSite1031.name = "r_dactylion_pt";
HAnimSite1031.DEF = "hanim_r_dactylion_pt";
HAnimSite1031.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor1032 = createNode("TouchSensor");
TouchSensor1032.description = "HAnimSite r_dactylion_pt";
HAnimSite1031.children = new MFNode();

HAnimSite1031.children[0] = TouchSensor1032;

Shape Shape1033 = createNode("Shape");
Shape1033.USE = "HAnimSiteShape";
HAnimSite1031.children[1] = Shape1033;

HAnimJoint1023.hAnimSite[1] = HAnimSite1031;

HAnimJoint HAnimJoint1034 = createNode("HAnimJoint");
HAnimJoint1034.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1034.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1034.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1034.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1034.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1023.children[2] = HAnimJoint1034;

HAnimJoint1018.children = new MFNode();

HAnimJoint1018.children[0] = HAnimJoint1023;

HAnimJoint1013.children = new MFNode();

HAnimJoint1013.children[0] = HAnimJoint1018;

HAnimJoint1005.children[1] = HAnimJoint1013;

HAnimJoint969.children[4] = HAnimJoint1005;

HAnimJoint HAnimJoint1035 = createNode("HAnimJoint");
HAnimJoint1035.name = "r_midcarpal_3";
HAnimJoint1035.DEF = "hanim_r_midcarpal_3";
HAnimJoint1035.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1035.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1035.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1036 = createNode("Shape");
LineSet LineSet1037 = createNode("LineSet");
LineSet1037.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate1038 = createNode("Coordinate");
Coordinate1038.point = new MFVec3f(new float[-0.1972,0.806,-0.0468]);
LineSet1037.coord = Coordinate1038;

//from r_midcarpal_3 to r_carpometacarpal_3
ColorRGBA ColorRGBA1039 = createNode("ColorRGBA");
ColorRGBA1039.USE = "HAnimSegmentLineColorRGBA";
LineSet1037.color = ColorRGBA1039;

Shape1036.geometry = LineSet1037;

HAnimJoint1035.shape = Shape1036;

HAnimSite HAnimSite1040 = createNode("HAnimSite");
HAnimSite1040.name = "r_metacarpal_phalanx_3_pt";
HAnimSite1040.DEF = "hanim_r_metacarpal_phalanx_3_pt";
HAnimSite1040.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1041 = createNode("TouchSensor");
TouchSensor1041.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite1040.children = new MFNode();

HAnimSite1040.children[0] = TouchSensor1041;

Shape Shape1042 = createNode("Shape");
Shape1042.USE = "HAnimSiteShape";
HAnimSite1040.children[1] = Shape1042;

HAnimJoint1035.hAnimSite = new undefined();

HAnimJoint1035.hAnimSite[0] = HAnimSite1040;

HAnimJoint HAnimJoint1043 = createNode("HAnimJoint");
HAnimJoint1043.name = "r_carpometacarpal_3";
HAnimJoint1043.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1043.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimJoint1043.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1043.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1044 = createNode("Shape");
LineSet LineSet1045 = createNode("LineSet");
LineSet1045.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1046 = createNode("Coordinate");
Coordinate1046.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1045.coord = Coordinate1046;

//from r_carpometacarpal_3 to r_metacarpophalangeal_3
ColorRGBA ColorRGBA1047 = createNode("ColorRGBA");
ColorRGBA1047.USE = "HAnimSegmentLineColorRGBA";
LineSet1045.color = ColorRGBA1047;

Shape1044.geometry = LineSet1045;

HAnimJoint1043.shape = Shape1044;

HAnimJoint HAnimJoint1048 = createNode("HAnimJoint");
HAnimJoint1048.name = "r_metacarpophalangeal_3";
HAnimJoint1048.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1048.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimJoint1048.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1048.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1049 = createNode("Shape");
LineSet LineSet1050 = createNode("LineSet");
LineSet1050.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1051 = createNode("Coordinate");
Coordinate1051.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1050.coord = Coordinate1051;

//from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3
ColorRGBA ColorRGBA1052 = createNode("ColorRGBA");
ColorRGBA1052.USE = "HAnimSegmentLineColorRGBA";
LineSet1050.color = ColorRGBA1052;

Shape1049.geometry = LineSet1050;

HAnimJoint1048.shape = Shape1049;

HAnimJoint HAnimJoint1053 = createNode("HAnimJoint");
HAnimJoint1053.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1053.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1053.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimJoint1053.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1053.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1054 = createNode("Shape");
LineSet LineSet1055 = createNode("LineSet");
LineSet1055.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1056 = createNode("Coordinate");
Coordinate1056.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1055.coord = Coordinate1056;

//from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3
ColorRGBA ColorRGBA1057 = createNode("ColorRGBA");
ColorRGBA1057.USE = "HAnimSegmentLineColorRGBA";
LineSet1055.color = ColorRGBA1057;

Shape1054.geometry = LineSet1055;

HAnimJoint1053.shape = Shape1054;

HAnimSite HAnimSite1058 = createNode("HAnimSite");
HAnimSite1058.name = "r_carpal_distal_phalanx_3_tip";
HAnimSite1058.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite1058.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1059 = createNode("TouchSensor");
TouchSensor1059.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1058.children = new MFNode();

HAnimSite1058.children[0] = TouchSensor1059;

Shape Shape1060 = createNode("Shape");
Shape1060.USE = "HAnimSiteShape";
HAnimSite1058.children[1] = Shape1060;

HAnimJoint1053.hAnimSite = new undefined();

HAnimJoint1053.hAnimSite[0] = HAnimSite1058;

HAnimJoint HAnimJoint1061 = createNode("HAnimJoint");
HAnimJoint1061.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1061.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1061.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1061.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1061.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1053.children[1] = HAnimJoint1061;

HAnimJoint1048.children = new MFNode();

HAnimJoint1048.children[0] = HAnimJoint1053;

HAnimJoint1043.children = new MFNode();

HAnimJoint1043.children[0] = HAnimJoint1048;

HAnimJoint1035.children[1] = HAnimJoint1043;

HAnimJoint969.children[5] = HAnimJoint1035;

HAnimJoint HAnimJoint1062 = createNode("HAnimJoint");
HAnimJoint1062.name = "r_midcarpal_4_5";
HAnimJoint1062.DEF = "hanim_r_midcarpal_4_5";
HAnimJoint1062.center = new SFVec3f(new float[0,1,0]);
HAnimJoint1062.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1062.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1063 = createNode("Shape");
LineSet LineSet1064 = createNode("LineSet");
LineSet1064.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate1065 = createNode("Coordinate");
Coordinate1065.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732]);
LineSet1064.coord = Coordinate1065;

//from r_midcarpal_4_5 to r_carpometacarpal_4
ColorRGBA ColorRGBA1066 = createNode("ColorRGBA");
ColorRGBA1066.USE = "HAnimSegmentLineColorRGBA";
LineSet1064.color = ColorRGBA1066;

Shape1063.geometry = LineSet1064;

HAnimJoint1062.shape = Shape1063;

Shape Shape1067 = createNode("Shape");
LineSet LineSet1068 = createNode("LineSet");
LineSet1068.vertexCount = new MFInt32(new int[1]);
Coordinate Coordinate1069 = createNode("Coordinate");
Coordinate1069.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975]);
LineSet1068.coord = Coordinate1069;

//from r_midcarpal_4_5 to r_carpometacarpal_5
ColorRGBA ColorRGBA1070 = createNode("ColorRGBA");
ColorRGBA1070.USE = "HAnimSegmentLineColorRGBA";
LineSet1068.color = ColorRGBA1070;

Shape1067.geometry = LineSet1068;

HAnimJoint1062.shape = new undefined();

HAnimJoint1062.shape[0] = Shape1067;

HAnimSite HAnimSite1071 = createNode("HAnimSite");
HAnimSite1071.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1071.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1071.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor1072 = createNode("TouchSensor");
TouchSensor1072.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite1071.children = new MFNode();

HAnimSite1071.children[0] = TouchSensor1072;

Shape Shape1073 = createNode("Shape");
Shape1073.USE = "HAnimSiteShape";
HAnimSite1071.children[1] = Shape1073;

HAnimJoint1062.hAnimSite[1] = HAnimSite1071;

HAnimJoint HAnimJoint1074 = createNode("HAnimJoint");
HAnimJoint1074.name = "r_carpometacarpal_4";
HAnimJoint1074.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1074.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimJoint1074.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1074.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1075 = createNode("Shape");
LineSet LineSet1076 = createNode("LineSet");
LineSet1076.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1077 = createNode("Coordinate");
Coordinate1077.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1076.coord = Coordinate1077;

//from r_carpometacarpal_4 to r_metacarpophalangeal_4
ColorRGBA ColorRGBA1078 = createNode("ColorRGBA");
ColorRGBA1078.USE = "HAnimSegmentLineColorRGBA";
LineSet1076.color = ColorRGBA1078;

Shape1075.geometry = LineSet1076;

HAnimJoint1074.shape = Shape1075;

HAnimJoint HAnimJoint1079 = createNode("HAnimJoint");
HAnimJoint1079.name = "r_metacarpophalangeal_4";
HAnimJoint1079.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1079.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimJoint1079.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1079.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1080 = createNode("Shape");
LineSet LineSet1081 = createNode("LineSet");
LineSet1081.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1082 = createNode("Coordinate");
Coordinate1082.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1081.coord = Coordinate1082;

//from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4
ColorRGBA ColorRGBA1083 = createNode("ColorRGBA");
ColorRGBA1083.USE = "HAnimSegmentLineColorRGBA";
LineSet1081.color = ColorRGBA1083;

Shape1080.geometry = LineSet1081;

HAnimJoint1079.shape = Shape1080;

HAnimJoint HAnimJoint1084 = createNode("HAnimJoint");
HAnimJoint1084.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1084.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1084.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimJoint1084.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1084.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1085 = createNode("Shape");
LineSet LineSet1086 = createNode("LineSet");
LineSet1086.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1087 = createNode("Coordinate");
Coordinate1087.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1086.coord = Coordinate1087;

//from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4
ColorRGBA ColorRGBA1088 = createNode("ColorRGBA");
ColorRGBA1088.USE = "HAnimSegmentLineColorRGBA";
LineSet1086.color = ColorRGBA1088;

Shape1085.geometry = LineSet1086;

HAnimJoint1084.shape = Shape1085;

HAnimSite HAnimSite1089 = createNode("HAnimSite");
HAnimSite1089.name = "r_carpal_distal_phalanx_4_tip";
HAnimSite1089.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite1089.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1090 = createNode("TouchSensor");
TouchSensor1090.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1089.children = new MFNode();

HAnimSite1089.children[0] = TouchSensor1090;

Shape Shape1091 = createNode("Shape");
Shape1091.USE = "HAnimSiteShape";
HAnimSite1089.children[1] = Shape1091;

HAnimJoint1084.hAnimSite = new undefined();

HAnimJoint1084.hAnimSite[0] = HAnimSite1089;

HAnimJoint HAnimJoint1092 = createNode("HAnimJoint");
HAnimJoint1092.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1092.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1092.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1092.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1092.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1084.children[1] = HAnimJoint1092;

HAnimJoint1079.children = new MFNode();

HAnimJoint1079.children[0] = HAnimJoint1084;

HAnimJoint1074.children = new MFNode();

HAnimJoint1074.children[0] = HAnimJoint1079;

HAnimJoint1062.children[2] = HAnimJoint1074;

HAnimJoint HAnimJoint1093 = createNode("HAnimJoint");
HAnimJoint1093.name = "r_carpometacarpal_5";
HAnimJoint1093.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1093.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimJoint1093.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1093.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1094 = createNode("Shape");
LineSet LineSet1095 = createNode("LineSet");
LineSet1095.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1096 = createNode("Coordinate");
Coordinate1096.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1095.coord = Coordinate1096;

//from r_carpometacarpal_5 to r_metacarpophalangeal_5
ColorRGBA ColorRGBA1097 = createNode("ColorRGBA");
ColorRGBA1097.USE = "HAnimSegmentLineColorRGBA";
LineSet1095.color = ColorRGBA1097;

Shape1094.geometry = LineSet1095;

HAnimJoint1093.shape = Shape1094;

HAnimJoint HAnimJoint1098 = createNode("HAnimJoint");
HAnimJoint1098.name = "r_metacarpophalangeal_5";
HAnimJoint1098.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1098.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimJoint1098.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1098.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1099 = createNode("Shape");
LineSet LineSet1100 = createNode("LineSet");
LineSet1100.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1101 = createNode("Coordinate");
Coordinate1101.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1100.coord = Coordinate1101;

//from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5
ColorRGBA ColorRGBA1102 = createNode("ColorRGBA");
ColorRGBA1102.USE = "HAnimSegmentLineColorRGBA";
LineSet1100.color = ColorRGBA1102;

Shape1099.geometry = LineSet1100;

HAnimJoint1098.shape = Shape1099;

HAnimJoint HAnimJoint1103 = createNode("HAnimJoint");
HAnimJoint1103.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1103.DEF = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimJoint1103.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimJoint1103.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1103.llimit = new MFFloat(new float[0,0,0]);
Shape Shape1104 = createNode("Shape");
LineSet LineSet1105 = createNode("LineSet");
LineSet1105.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate1106 = createNode("Coordinate");
Coordinate1106.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1105.coord = Coordinate1106;

//from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5
ColorRGBA ColorRGBA1107 = createNode("ColorRGBA");
ColorRGBA1107.USE = "HAnimSegmentLineColorRGBA";
LineSet1105.color = ColorRGBA1107;

Shape1104.geometry = LineSet1105;

HAnimJoint1103.shape = Shape1104;

HAnimSite HAnimSite1108 = createNode("HAnimSite");
HAnimSite1108.name = "r_carpal_distal_phalanx_5_tip";
HAnimSite1108.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite1108.translation = new SFVec3f(new float[0,1,0]);
TouchSensor TouchSensor1109 = createNode("TouchSensor");
TouchSensor1109.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1108.children = new MFNode();

HAnimSite1108.children[0] = TouchSensor1109;

Shape Shape1110 = createNode("Shape");
Shape1110.USE = "HAnimSiteShape";
HAnimSite1108.children[1] = Shape1110;

HAnimJoint1103.hAnimSite = new undefined();

HAnimJoint1103.hAnimSite[0] = HAnimSite1108;

HAnimJoint HAnimJoint1111 = createNode("HAnimJoint");
HAnimJoint1111.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1111.DEF = "hanim_r_carpal_distal_interphalangeal_5";
HAnimJoint1111.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1111.ulimit = new MFFloat(new float[0,0,0]);
HAnimJoint1111.llimit = new MFFloat(new float[0,0,0]);
HAnimJoint1103.children[1] = HAnimJoint1111;

HAnimJoint1098.children = new MFNode();

HAnimJoint1098.children[0] = HAnimJoint1103;

HAnimJoint1093.children = new MFNode();

HAnimJoint1093.children[0] = HAnimJoint1098;

HAnimJoint1062.children[3] = HAnimJoint1093;

HAnimJoint969.children[6] = HAnimJoint1062;

HAnimJoint961.children[1] = HAnimJoint969;

HAnimJoint944.children[4] = HAnimJoint961;

HAnimJoint933.children[2] = HAnimJoint944;

HAnimJoint928.children = new MFNode();

HAnimJoint928.children[0] = HAnimJoint933;

HAnimJoint576.children[16] = HAnimJoint928;

HAnimJoint565.children[2] = HAnimJoint576;

HAnimJoint560.children = new MFNode();

HAnimJoint560.children[0] = HAnimJoint565;

HAnimJoint555.children = new MFNode();

HAnimJoint555.children[0] = HAnimJoint560;

HAnimJoint550.children = new MFNode();

HAnimJoint550.children[0] = HAnimJoint555;

HAnimJoint542.children[1] = HAnimJoint550;

HAnimJoint525.children[4] = HAnimJoint542;

HAnimJoint520.children = new MFNode();

HAnimJoint520.children[0] = HAnimJoint525;

HAnimJoint515.children = new MFNode();

HAnimJoint515.children[0] = HAnimJoint520;

HAnimJoint504.children[2] = HAnimJoint515;

HAnimJoint496.children[1] = HAnimJoint504;

HAnimJoint491.children = new MFNode();

HAnimJoint491.children[0] = HAnimJoint496;

HAnimJoint486.children = new MFNode();

HAnimJoint486.children[0] = HAnimJoint491;

HAnimJoint481.children = new MFNode();

HAnimJoint481.children[0] = HAnimJoint486;

HAnimJoint467.children[3] = HAnimJoint481;

HAnimJoint462.children = new MFNode();

HAnimJoint462.children[0] = HAnimJoint467;

HAnimJoint457.children = new MFNode();

HAnimJoint457.children[0] = HAnimJoint462;

HAnimJoint32.children[15] = HAnimJoint457;

HAnimHumanoid31.joints = new MFNode();

HAnimHumanoid31.joints[0] = HAnimJoint32;

HAnimJoint HAnimJoint1112 = createNode("HAnimJoint");
HAnimJoint1112.USE = "hanim_humanoid_root";
HAnimHumanoid31.joints[1] = HAnimJoint1112;

HAnimJoint HAnimJoint1113 = createNode("HAnimJoint");
HAnimJoint1113.USE = "hanim_sacroiliac";
HAnimHumanoid31.joints[2] = HAnimJoint1113;

HAnimJoint HAnimJoint1114 = createNode("HAnimJoint");
HAnimJoint1114.USE = "hanim_l_hip";
HAnimHumanoid31.joints[3] = HAnimJoint1114;

HAnimJoint HAnimJoint1115 = createNode("HAnimJoint");
HAnimJoint1115.USE = "hanim_l_knee";
HAnimHumanoid31.joints[4] = HAnimJoint1115;

HAnimJoint HAnimJoint1116 = createNode("HAnimJoint");
HAnimJoint1116.USE = "hanim_l_talocrural";
HAnimHumanoid31.joints[5] = HAnimJoint1116;

HAnimJoint HAnimJoint1117 = createNode("HAnimJoint");
HAnimJoint1117.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid31.joints[6] = HAnimJoint1117;

HAnimJoint HAnimJoint1118 = createNode("HAnimJoint");
HAnimJoint1118.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid31.joints[7] = HAnimJoint1118;

HAnimJoint HAnimJoint1119 = createNode("HAnimJoint");
HAnimJoint1119.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid31.joints[8] = HAnimJoint1119;

HAnimJoint HAnimJoint1120 = createNode("HAnimJoint");
HAnimJoint1120.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid31.joints[9] = HAnimJoint1120;

HAnimJoint HAnimJoint1121 = createNode("HAnimJoint");
HAnimJoint1121.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid31.joints[10] = HAnimJoint1121;

HAnimJoint HAnimJoint1122 = createNode("HAnimJoint");
HAnimJoint1122.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid31.joints[11] = HAnimJoint1122;

HAnimJoint HAnimJoint1123 = createNode("HAnimJoint");
HAnimJoint1123.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid31.joints[12] = HAnimJoint1123;

HAnimJoint HAnimJoint1124 = createNode("HAnimJoint");
HAnimJoint1124.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid31.joints[13] = HAnimJoint1124;

HAnimJoint HAnimJoint1125 = createNode("HAnimJoint");
HAnimJoint1125.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[14] = HAnimJoint1125;

HAnimJoint HAnimJoint1126 = createNode("HAnimJoint");
HAnimJoint1126.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid31.joints[15] = HAnimJoint1126;

HAnimJoint HAnimJoint1127 = createNode("HAnimJoint");
HAnimJoint1127.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid31.joints[16] = HAnimJoint1127;

HAnimJoint HAnimJoint1128 = createNode("HAnimJoint");
HAnimJoint1128.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid31.joints[17] = HAnimJoint1128;

HAnimJoint HAnimJoint1129 = createNode("HAnimJoint");
HAnimJoint1129.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid31.joints[18] = HAnimJoint1129;

HAnimJoint HAnimJoint1130 = createNode("HAnimJoint");
HAnimJoint1130.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[19] = HAnimJoint1130;

HAnimJoint HAnimJoint1131 = createNode("HAnimJoint");
HAnimJoint1131.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid31.joints[20] = HAnimJoint1131;

HAnimJoint HAnimJoint1132 = createNode("HAnimJoint");
HAnimJoint1132.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid31.joints[21] = HAnimJoint1132;

HAnimJoint HAnimJoint1133 = createNode("HAnimJoint");
HAnimJoint1133.USE = "hanim_l_transversetarsal";
HAnimHumanoid31.joints[22] = HAnimJoint1133;

HAnimJoint HAnimJoint1134 = createNode("HAnimJoint");
HAnimJoint1134.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid31.joints[23] = HAnimJoint1134;

HAnimJoint HAnimJoint1135 = createNode("HAnimJoint");
HAnimJoint1135.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid31.joints[24] = HAnimJoint1135;

HAnimJoint HAnimJoint1136 = createNode("HAnimJoint");
HAnimJoint1136.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[25] = HAnimJoint1136;

HAnimJoint HAnimJoint1137 = createNode("HAnimJoint");
HAnimJoint1137.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid31.joints[26] = HAnimJoint1137;

HAnimJoint HAnimJoint1138 = createNode("HAnimJoint");
HAnimJoint1138.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid31.joints[27] = HAnimJoint1138;

HAnimJoint HAnimJoint1139 = createNode("HAnimJoint");
HAnimJoint1139.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid31.joints[28] = HAnimJoint1139;

HAnimJoint HAnimJoint1140 = createNode("HAnimJoint");
HAnimJoint1140.USE = "hanim_l_tarsal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[29] = HAnimJoint1140;

HAnimJoint HAnimJoint1141 = createNode("HAnimJoint");
HAnimJoint1141.USE = "hanim_l_tarsal_distal_interphalangeal_5";
HAnimHumanoid31.joints[30] = HAnimJoint1141;

HAnimJoint HAnimJoint1142 = createNode("HAnimJoint");
HAnimJoint1142.USE = "hanim_r_hip";
HAnimHumanoid31.joints[31] = HAnimJoint1142;

HAnimJoint HAnimJoint1143 = createNode("HAnimJoint");
HAnimJoint1143.USE = "hanim_r_knee";
HAnimHumanoid31.joints[32] = HAnimJoint1143;

HAnimJoint HAnimJoint1144 = createNode("HAnimJoint");
HAnimJoint1144.USE = "hanim_r_talocrural";
HAnimHumanoid31.joints[33] = HAnimJoint1144;

HAnimJoint HAnimJoint1145 = createNode("HAnimJoint");
HAnimJoint1145.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid31.joints[34] = HAnimJoint1145;

HAnimJoint HAnimJoint1146 = createNode("HAnimJoint");
HAnimJoint1146.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid31.joints[35] = HAnimJoint1146;

HAnimJoint HAnimJoint1147 = createNode("HAnimJoint");
HAnimJoint1147.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid31.joints[36] = HAnimJoint1147;

HAnimJoint HAnimJoint1148 = createNode("HAnimJoint");
HAnimJoint1148.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid31.joints[37] = HAnimJoint1148;

HAnimJoint HAnimJoint1149 = createNode("HAnimJoint");
HAnimJoint1149.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid31.joints[38] = HAnimJoint1149;

HAnimJoint HAnimJoint1150 = createNode("HAnimJoint");
HAnimJoint1150.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid31.joints[39] = HAnimJoint1150;

HAnimJoint HAnimJoint1151 = createNode("HAnimJoint");
HAnimJoint1151.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid31.joints[40] = HAnimJoint1151;

HAnimJoint HAnimJoint1152 = createNode("HAnimJoint");
HAnimJoint1152.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid31.joints[41] = HAnimJoint1152;

HAnimJoint HAnimJoint1153 = createNode("HAnimJoint");
HAnimJoint1153.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[42] = HAnimJoint1153;

HAnimJoint HAnimJoint1154 = createNode("HAnimJoint");
HAnimJoint1154.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid31.joints[43] = HAnimJoint1154;

HAnimJoint HAnimJoint1155 = createNode("HAnimJoint");
HAnimJoint1155.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid31.joints[44] = HAnimJoint1155;

HAnimJoint HAnimJoint1156 = createNode("HAnimJoint");
HAnimJoint1156.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid31.joints[45] = HAnimJoint1156;

HAnimJoint HAnimJoint1157 = createNode("HAnimJoint");
HAnimJoint1157.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid31.joints[46] = HAnimJoint1157;

HAnimJoint HAnimJoint1158 = createNode("HAnimJoint");
HAnimJoint1158.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[47] = HAnimJoint1158;

HAnimJoint HAnimJoint1159 = createNode("HAnimJoint");
HAnimJoint1159.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid31.joints[48] = HAnimJoint1159;

HAnimJoint HAnimJoint1160 = createNode("HAnimJoint");
HAnimJoint1160.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid31.joints[49] = HAnimJoint1160;

HAnimJoint HAnimJoint1161 = createNode("HAnimJoint");
HAnimJoint1161.USE = "hanim_r_transversetarsal";
HAnimHumanoid31.joints[50] = HAnimJoint1161;

HAnimJoint HAnimJoint1162 = createNode("HAnimJoint");
HAnimJoint1162.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid31.joints[51] = HAnimJoint1162;

HAnimJoint HAnimJoint1163 = createNode("HAnimJoint");
HAnimJoint1163.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid31.joints[52] = HAnimJoint1163;

HAnimJoint HAnimJoint1164 = createNode("HAnimJoint");
HAnimJoint1164.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[53] = HAnimJoint1164;

HAnimJoint HAnimJoint1165 = createNode("HAnimJoint");
HAnimJoint1165.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid31.joints[54] = HAnimJoint1165;

HAnimJoint HAnimJoint1166 = createNode("HAnimJoint");
HAnimJoint1166.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid31.joints[55] = HAnimJoint1166;

HAnimJoint HAnimJoint1167 = createNode("HAnimJoint");
HAnimJoint1167.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid31.joints[56] = HAnimJoint1167;

HAnimJoint HAnimJoint1168 = createNode("HAnimJoint");
HAnimJoint1168.USE = "hanim_r_tarsal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[57] = HAnimJoint1168;

HAnimJoint HAnimJoint1169 = createNode("HAnimJoint");
HAnimJoint1169.USE = "hanim_r_tarsal_distal_interphalangeal_5";
HAnimHumanoid31.joints[58] = HAnimJoint1169;

HAnimJoint HAnimJoint1170 = createNode("HAnimJoint");
HAnimJoint1170.USE = "hanim_vl5";
HAnimHumanoid31.joints[59] = HAnimJoint1170;

HAnimJoint HAnimJoint1171 = createNode("HAnimJoint");
HAnimJoint1171.USE = "hanim_vl4";
HAnimHumanoid31.joints[60] = HAnimJoint1171;

HAnimJoint HAnimJoint1172 = createNode("HAnimJoint");
HAnimJoint1172.USE = "hanim_vl3";
HAnimHumanoid31.joints[61] = HAnimJoint1172;

HAnimJoint HAnimJoint1173 = createNode("HAnimJoint");
HAnimJoint1173.USE = "hanim_vl2";
HAnimHumanoid31.joints[62] = HAnimJoint1173;

HAnimJoint HAnimJoint1174 = createNode("HAnimJoint");
HAnimJoint1174.USE = "hanim_vl1";
HAnimHumanoid31.joints[63] = HAnimJoint1174;

HAnimJoint HAnimJoint1175 = createNode("HAnimJoint");
HAnimJoint1175.USE = "hanim_vt12";
HAnimHumanoid31.joints[64] = HAnimJoint1175;

HAnimJoint HAnimJoint1176 = createNode("HAnimJoint");
HAnimJoint1176.USE = "hanim_vt11";
HAnimHumanoid31.joints[65] = HAnimJoint1176;

HAnimJoint HAnimJoint1177 = createNode("HAnimJoint");
HAnimJoint1177.USE = "hanim_vt10";
HAnimHumanoid31.joints[66] = HAnimJoint1177;

HAnimJoint HAnimJoint1178 = createNode("HAnimJoint");
HAnimJoint1178.USE = "hanim_vt9";
HAnimHumanoid31.joints[67] = HAnimJoint1178;

HAnimJoint HAnimJoint1179 = createNode("HAnimJoint");
HAnimJoint1179.USE = "hanim_vt8";
HAnimHumanoid31.joints[68] = HAnimJoint1179;

HAnimJoint HAnimJoint1180 = createNode("HAnimJoint");
HAnimJoint1180.USE = "hanim_vt7";
HAnimHumanoid31.joints[69] = HAnimJoint1180;

HAnimJoint HAnimJoint1181 = createNode("HAnimJoint");
HAnimJoint1181.USE = "hanim_vt6";
HAnimHumanoid31.joints[70] = HAnimJoint1181;

HAnimJoint HAnimJoint1182 = createNode("HAnimJoint");
HAnimJoint1182.USE = "hanim_vt5";
HAnimHumanoid31.joints[71] = HAnimJoint1182;

HAnimJoint HAnimJoint1183 = createNode("HAnimJoint");
HAnimJoint1183.USE = "hanim_vt4";
HAnimHumanoid31.joints[72] = HAnimJoint1183;

HAnimJoint HAnimJoint1184 = createNode("HAnimJoint");
HAnimJoint1184.USE = "hanim_vt3";
HAnimHumanoid31.joints[73] = HAnimJoint1184;

HAnimJoint HAnimJoint1185 = createNode("HAnimJoint");
HAnimJoint1185.USE = "hanim_vt2";
HAnimHumanoid31.joints[74] = HAnimJoint1185;

HAnimJoint HAnimJoint1186 = createNode("HAnimJoint");
HAnimJoint1186.USE = "hanim_vt1";
HAnimHumanoid31.joints[75] = HAnimJoint1186;

HAnimJoint HAnimJoint1187 = createNode("HAnimJoint");
HAnimJoint1187.USE = "hanim_vc7";
HAnimHumanoid31.joints[76] = HAnimJoint1187;

HAnimJoint HAnimJoint1188 = createNode("HAnimJoint");
HAnimJoint1188.USE = "hanim_vc6";
HAnimHumanoid31.joints[77] = HAnimJoint1188;

HAnimJoint HAnimJoint1189 = createNode("HAnimJoint");
HAnimJoint1189.USE = "hanim_vc5";
HAnimHumanoid31.joints[78] = HAnimJoint1189;

HAnimJoint HAnimJoint1190 = createNode("HAnimJoint");
HAnimJoint1190.USE = "hanim_vc4";
HAnimHumanoid31.joints[79] = HAnimJoint1190;

HAnimJoint HAnimJoint1191 = createNode("HAnimJoint");
HAnimJoint1191.USE = "hanim_vc3";
HAnimHumanoid31.joints[80] = HAnimJoint1191;

HAnimJoint HAnimJoint1192 = createNode("HAnimJoint");
HAnimJoint1192.USE = "hanim_vc2";
HAnimHumanoid31.joints[81] = HAnimJoint1192;

HAnimJoint HAnimJoint1193 = createNode("HAnimJoint");
HAnimJoint1193.USE = "hanim_vc1";
HAnimHumanoid31.joints[82] = HAnimJoint1193;

HAnimJoint HAnimJoint1194 = createNode("HAnimJoint");
HAnimJoint1194.USE = "hanim_skullbase";
HAnimHumanoid31.joints[83] = HAnimJoint1194;

HAnimJoint HAnimJoint1195 = createNode("HAnimJoint");
HAnimJoint1195.USE = "hanim_l_eyelid_joint";
HAnimHumanoid31.joints[84] = HAnimJoint1195;

HAnimJoint HAnimJoint1196 = createNode("HAnimJoint");
HAnimJoint1196.USE = "hanim_r_eyelid_joint";
HAnimHumanoid31.joints[85] = HAnimJoint1196;

HAnimJoint HAnimJoint1197 = createNode("HAnimJoint");
HAnimJoint1197.USE = "hanim_l_eyeball_joint";
HAnimHumanoid31.joints[86] = HAnimJoint1197;

HAnimJoint HAnimJoint1198 = createNode("HAnimJoint");
HAnimJoint1198.USE = "hanim_r_eyeball_joint";
HAnimHumanoid31.joints[87] = HAnimJoint1198;

HAnimJoint HAnimJoint1199 = createNode("HAnimJoint");
HAnimJoint1199.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid31.joints[88] = HAnimJoint1199;

HAnimJoint HAnimJoint1200 = createNode("HAnimJoint");
HAnimJoint1200.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid31.joints[89] = HAnimJoint1200;

HAnimJoint HAnimJoint1201 = createNode("HAnimJoint");
HAnimJoint1201.USE = "hanim_temporomandibular";
HAnimHumanoid31.joints[90] = HAnimJoint1201;

HAnimJoint HAnimJoint1202 = createNode("HAnimJoint");
HAnimJoint1202.USE = "hanim_l_sternoclavicular";
HAnimHumanoid31.joints[91] = HAnimJoint1202;

HAnimJoint HAnimJoint1203 = createNode("HAnimJoint");
HAnimJoint1203.USE = "hanim_l_acromioclavicular";
HAnimHumanoid31.joints[92] = HAnimJoint1203;

HAnimJoint HAnimJoint1204 = createNode("HAnimJoint");
HAnimJoint1204.USE = "hanim_l_shoulder";
HAnimHumanoid31.joints[93] = HAnimJoint1204;

HAnimJoint HAnimJoint1205 = createNode("HAnimJoint");
HAnimJoint1205.USE = "hanim_l_elbow";
HAnimHumanoid31.joints[94] = HAnimJoint1205;

HAnimJoint HAnimJoint1206 = createNode("HAnimJoint");
HAnimJoint1206.USE = "hanim_l_radiocarpal";
HAnimHumanoid31.joints[95] = HAnimJoint1206;

HAnimJoint HAnimJoint1207 = createNode("HAnimJoint");
HAnimJoint1207.USE = "hanim_l_midcarpal_1";
HAnimHumanoid31.joints[96] = HAnimJoint1207;

HAnimJoint HAnimJoint1208 = createNode("HAnimJoint");
HAnimJoint1208.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid31.joints[97] = HAnimJoint1208;

HAnimJoint HAnimJoint1209 = createNode("HAnimJoint");
HAnimJoint1209.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid31.joints[98] = HAnimJoint1209;

HAnimJoint HAnimJoint1210 = createNode("HAnimJoint");
HAnimJoint1210.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid31.joints[99] = HAnimJoint1210;

HAnimJoint HAnimJoint1211 = createNode("HAnimJoint");
HAnimJoint1211.USE = "hanim_l_midcarpal_2";
HAnimHumanoid31.joints[100] = HAnimJoint1211;

HAnimJoint HAnimJoint1212 = createNode("HAnimJoint");
HAnimJoint1212.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid31.joints[101] = HAnimJoint1212;

HAnimJoint HAnimJoint1213 = createNode("HAnimJoint");
HAnimJoint1213.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid31.joints[102] = HAnimJoint1213;

HAnimJoint HAnimJoint1214 = createNode("HAnimJoint");
HAnimJoint1214.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[103] = HAnimJoint1214;

HAnimJoint HAnimJoint1215 = createNode("HAnimJoint");
HAnimJoint1215.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid31.joints[104] = HAnimJoint1215;

HAnimJoint HAnimJoint1216 = createNode("HAnimJoint");
HAnimJoint1216.USE = "hanim_l_midcarpal_3";
HAnimHumanoid31.joints[105] = HAnimJoint1216;

HAnimJoint HAnimJoint1217 = createNode("HAnimJoint");
HAnimJoint1217.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid31.joints[106] = HAnimJoint1217;

HAnimJoint HAnimJoint1218 = createNode("HAnimJoint");
HAnimJoint1218.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid31.joints[107] = HAnimJoint1218;

HAnimJoint HAnimJoint1219 = createNode("HAnimJoint");
HAnimJoint1219.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[108] = HAnimJoint1219;

HAnimJoint HAnimJoint1220 = createNode("HAnimJoint");
HAnimJoint1220.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid31.joints[109] = HAnimJoint1220;

HAnimJoint HAnimJoint1221 = createNode("HAnimJoint");
HAnimJoint1221.USE = "hanim_l_midcarpal_4_5";
HAnimHumanoid31.joints[110] = HAnimJoint1221;

HAnimJoint HAnimJoint1222 = createNode("HAnimJoint");
HAnimJoint1222.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid31.joints[111] = HAnimJoint1222;

HAnimJoint HAnimJoint1223 = createNode("HAnimJoint");
HAnimJoint1223.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid31.joints[112] = HAnimJoint1223;

HAnimJoint HAnimJoint1224 = createNode("HAnimJoint");
HAnimJoint1224.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[113] = HAnimJoint1224;

HAnimJoint HAnimJoint1225 = createNode("HAnimJoint");
HAnimJoint1225.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid31.joints[114] = HAnimJoint1225;

HAnimJoint HAnimJoint1226 = createNode("HAnimJoint");
HAnimJoint1226.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid31.joints[115] = HAnimJoint1226;

HAnimJoint HAnimJoint1227 = createNode("HAnimJoint");
HAnimJoint1227.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid31.joints[116] = HAnimJoint1227;

HAnimJoint HAnimJoint1228 = createNode("HAnimJoint");
HAnimJoint1228.USE = "hanim_l_carpal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[117] = HAnimJoint1228;

HAnimJoint HAnimJoint1229 = createNode("HAnimJoint");
HAnimJoint1229.USE = "hanim_l_carpal_distal_interphalangeal_5";
HAnimHumanoid31.joints[118] = HAnimJoint1229;

HAnimJoint HAnimJoint1230 = createNode("HAnimJoint");
HAnimJoint1230.USE = "hanim_r_sternoclavicular";
HAnimHumanoid31.joints[119] = HAnimJoint1230;

HAnimJoint HAnimJoint1231 = createNode("HAnimJoint");
HAnimJoint1231.USE = "hanim_r_acromioclavicular";
HAnimHumanoid31.joints[120] = HAnimJoint1231;

HAnimJoint HAnimJoint1232 = createNode("HAnimJoint");
HAnimJoint1232.USE = "hanim_r_shoulder";
HAnimHumanoid31.joints[121] = HAnimJoint1232;

HAnimJoint HAnimJoint1233 = createNode("HAnimJoint");
HAnimJoint1233.USE = "hanim_r_elbow";
HAnimHumanoid31.joints[122] = HAnimJoint1233;

HAnimJoint HAnimJoint1234 = createNode("HAnimJoint");
HAnimJoint1234.USE = "hanim_r_radiocarpal";
HAnimHumanoid31.joints[123] = HAnimJoint1234;

HAnimJoint HAnimJoint1235 = createNode("HAnimJoint");
HAnimJoint1235.USE = "hanim_r_midcarpal_1";
HAnimHumanoid31.joints[124] = HAnimJoint1235;

HAnimJoint HAnimJoint1236 = createNode("HAnimJoint");
HAnimJoint1236.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid31.joints[125] = HAnimJoint1236;

HAnimJoint HAnimJoint1237 = createNode("HAnimJoint");
HAnimJoint1237.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid31.joints[126] = HAnimJoint1237;

HAnimJoint HAnimJoint1238 = createNode("HAnimJoint");
HAnimJoint1238.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid31.joints[127] = HAnimJoint1238;

HAnimJoint HAnimJoint1239 = createNode("HAnimJoint");
HAnimJoint1239.USE = "hanim_r_midcarpal_2";
HAnimHumanoid31.joints[128] = HAnimJoint1239;

HAnimJoint HAnimJoint1240 = createNode("HAnimJoint");
HAnimJoint1240.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid31.joints[129] = HAnimJoint1240;

HAnimJoint HAnimJoint1241 = createNode("HAnimJoint");
HAnimJoint1241.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid31.joints[130] = HAnimJoint1241;

HAnimJoint HAnimJoint1242 = createNode("HAnimJoint");
HAnimJoint1242.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid31.joints[131] = HAnimJoint1242;

HAnimJoint HAnimJoint1243 = createNode("HAnimJoint");
HAnimJoint1243.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid31.joints[132] = HAnimJoint1243;

HAnimJoint HAnimJoint1244 = createNode("HAnimJoint");
HAnimJoint1244.USE = "hanim_r_midcarpal_3";
HAnimHumanoid31.joints[133] = HAnimJoint1244;

HAnimJoint HAnimJoint1245 = createNode("HAnimJoint");
HAnimJoint1245.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid31.joints[134] = HAnimJoint1245;

HAnimJoint HAnimJoint1246 = createNode("HAnimJoint");
HAnimJoint1246.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid31.joints[135] = HAnimJoint1246;

HAnimJoint HAnimJoint1247 = createNode("HAnimJoint");
HAnimJoint1247.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid31.joints[136] = HAnimJoint1247;

HAnimJoint HAnimJoint1248 = createNode("HAnimJoint");
HAnimJoint1248.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid31.joints[137] = HAnimJoint1248;

HAnimJoint HAnimJoint1249 = createNode("HAnimJoint");
HAnimJoint1249.USE = "hanim_r_midcarpal_4_5";
HAnimHumanoid31.joints[138] = HAnimJoint1249;

HAnimJoint HAnimJoint1250 = createNode("HAnimJoint");
HAnimJoint1250.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid31.joints[139] = HAnimJoint1250;

HAnimJoint HAnimJoint1251 = createNode("HAnimJoint");
HAnimJoint1251.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid31.joints[140] = HAnimJoint1251;

HAnimJoint HAnimJoint1252 = createNode("HAnimJoint");
HAnimJoint1252.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid31.joints[141] = HAnimJoint1252;

HAnimJoint HAnimJoint1253 = createNode("HAnimJoint");
HAnimJoint1253.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid31.joints[142] = HAnimJoint1253;

HAnimJoint HAnimJoint1254 = createNode("HAnimJoint");
HAnimJoint1254.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid31.joints[143] = HAnimJoint1254;

HAnimJoint HAnimJoint1255 = createNode("HAnimJoint");
HAnimJoint1255.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid31.joints[144] = HAnimJoint1255;

HAnimJoint HAnimJoint1256 = createNode("HAnimJoint");
HAnimJoint1256.USE = "hanim_r_carpal_proximal_interphalangeal_5";
HAnimHumanoid31.joints[145] = HAnimJoint1256;

HAnimJoint HAnimJoint1257 = createNode("HAnimJoint");
HAnimJoint1257.USE = "hanim_r_carpal_distal_interphalangeal_5";
HAnimHumanoid31.joints[146] = HAnimJoint1257;

HAnimSite HAnimSite1258 = createNode("HAnimSite");
HAnimSite1258.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid31.viewpoints[147] = HAnimSite1258;

HAnimSite HAnimSite1259 = createNode("HAnimSite");
HAnimSite1259.USE = "hanim_crotch_pt";
HAnimHumanoid31.viewpoints[148] = HAnimSite1259;

HAnimSite HAnimSite1260 = createNode("HAnimSite");
HAnimSite1260.USE = "hanim_l_asis_pt";
HAnimHumanoid31.viewpoints[149] = HAnimSite1260;

HAnimSite HAnimSite1261 = createNode("HAnimSite");
HAnimSite1261.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid31.viewpoints[150] = HAnimSite1261;

HAnimSite HAnimSite1262 = createNode("HAnimSite");
HAnimSite1262.USE = "hanim_l_psis_pt";
HAnimHumanoid31.viewpoints[151] = HAnimSite1262;

HAnimSite HAnimSite1263 = createNode("HAnimSite");
HAnimSite1263.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid31.viewpoints[152] = HAnimSite1263;

HAnimSite HAnimSite1264 = createNode("HAnimSite");
HAnimSite1264.USE = "hanim_r_asis_pt";
HAnimHumanoid31.viewpoints[153] = HAnimSite1264;

HAnimSite HAnimSite1265 = createNode("HAnimSite");
HAnimSite1265.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid31.viewpoints[154] = HAnimSite1265;

HAnimSite HAnimSite1266 = createNode("HAnimSite");
HAnimSite1266.USE = "hanim_r_psis_pt";
HAnimHumanoid31.viewpoints[155] = HAnimSite1266;

HAnimSite HAnimSite1267 = createNode("HAnimSite");
HAnimSite1267.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid31.viewpoints[156] = HAnimSite1267;

HAnimSite HAnimSite1268 = createNode("HAnimSite");
HAnimSite1268.USE = "hanim_navel_pt";
HAnimHumanoid31.viewpoints[157] = HAnimSite1268;

HAnimSite HAnimSite1269 = createNode("HAnimSite");
HAnimSite1269.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid31.viewpoints[158] = HAnimSite1269;

HAnimSite HAnimSite1270 = createNode("HAnimSite");
HAnimSite1270.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid31.viewpoints[159] = HAnimSite1270;

HAnimSite HAnimSite1271 = createNode("HAnimSite");
HAnimSite1271.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid31.viewpoints[160] = HAnimSite1271;

HAnimSite HAnimSite1272 = createNode("HAnimSite");
HAnimSite1272.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid31.viewpoints[161] = HAnimSite1272;

HAnimSite HAnimSite1273 = createNode("HAnimSite");
HAnimSite1273.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid31.viewpoints[162] = HAnimSite1273;

HAnimSite HAnimSite1274 = createNode("HAnimSite");
HAnimSite1274.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid31.viewpoints[163] = HAnimSite1274;

HAnimSite HAnimSite1275 = createNode("HAnimSite");
HAnimSite1275.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid31.viewpoints[164] = HAnimSite1275;

HAnimSite HAnimSite1276 = createNode("HAnimSite");
HAnimSite1276.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid31.viewpoints[165] = HAnimSite1276;

HAnimSite HAnimSite1277 = createNode("HAnimSite");
HAnimSite1277.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid31.viewpoints[166] = HAnimSite1277;

HAnimSite HAnimSite1278 = createNode("HAnimSite");
HAnimSite1278.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid31.viewpoints[167] = HAnimSite1278;

HAnimSite HAnimSite1279 = createNode("HAnimSite");
HAnimSite1279.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid31.viewpoints[168] = HAnimSite1279;

HAnimSite HAnimSite1280 = createNode("HAnimSite");
HAnimSite1280.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid31.viewpoints[169] = HAnimSite1280;

HAnimSite HAnimSite1281 = createNode("HAnimSite");
HAnimSite1281.USE = "hanim_l_tibiale_pt";
HAnimHumanoid31.viewpoints[170] = HAnimSite1281;

HAnimSite HAnimSite1282 = createNode("HAnimSite");
HAnimSite1282.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid31.viewpoints[171] = HAnimSite1282;

HAnimSite HAnimSite1283 = createNode("HAnimSite");
HAnimSite1283.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid31.viewpoints[172] = HAnimSite1283;

HAnimSite HAnimSite1284 = createNode("HAnimSite");
HAnimSite1284.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid31.viewpoints[173] = HAnimSite1284;

HAnimSite HAnimSite1285 = createNode("HAnimSite");
HAnimSite1285.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid31.viewpoints[174] = HAnimSite1285;

HAnimSite HAnimSite1286 = createNode("HAnimSite");
HAnimSite1286.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid31.viewpoints[175] = HAnimSite1286;

HAnimSite HAnimSite1287 = createNode("HAnimSite");
HAnimSite1287.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid31.viewpoints[176] = HAnimSite1287;

HAnimSite HAnimSite1288 = createNode("HAnimSite");
HAnimSite1288.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid31.viewpoints[177] = HAnimSite1288;

HAnimSite HAnimSite1289 = createNode("HAnimSite");
HAnimSite1289.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid31.viewpoints[178] = HAnimSite1289;

HAnimSite HAnimSite1290 = createNode("HAnimSite");
HAnimSite1290.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid31.viewpoints[179] = HAnimSite1290;

HAnimSite HAnimSite1291 = createNode("HAnimSite");
HAnimSite1291.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid31.viewpoints[180] = HAnimSite1291;

HAnimSite HAnimSite1292 = createNode("HAnimSite");
HAnimSite1292.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid31.viewpoints[181] = HAnimSite1292;

HAnimSite HAnimSite1293 = createNode("HAnimSite");
HAnimSite1293.USE = "hanim_r_tibiale_pt";
HAnimHumanoid31.viewpoints[182] = HAnimSite1293;

HAnimSite HAnimSite1294 = createNode("HAnimSite");
HAnimSite1294.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid31.viewpoints[183] = HAnimSite1294;

HAnimSite HAnimSite1295 = createNode("HAnimSite");
HAnimSite1295.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid31.viewpoints[184] = HAnimSite1295;

HAnimSite HAnimSite1296 = createNode("HAnimSite");
HAnimSite1296.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid31.viewpoints[185] = HAnimSite1296;

HAnimSite HAnimSite1297 = createNode("HAnimSite");
HAnimSite1297.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid31.viewpoints[186] = HAnimSite1297;

HAnimSite HAnimSite1298 = createNode("HAnimSite");
HAnimSite1298.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid31.viewpoints[187] = HAnimSite1298;

HAnimSite HAnimSite1299 = createNode("HAnimSite");
HAnimSite1299.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid31.viewpoints[188] = HAnimSite1299;

HAnimSite HAnimSite1300 = createNode("HAnimSite");
HAnimSite1300.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid31.viewpoints[189] = HAnimSite1300;

HAnimSite HAnimSite1301 = createNode("HAnimSite");
HAnimSite1301.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid31.viewpoints[190] = HAnimSite1301;

HAnimSite HAnimSite1302 = createNode("HAnimSite");
HAnimSite1302.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid31.viewpoints[191] = HAnimSite1302;

HAnimSite HAnimSite1303 = createNode("HAnimSite");
HAnimSite1303.USE = "hanim_l_rib10_pt";
HAnimHumanoid31.viewpoints[192] = HAnimSite1303;

HAnimSite HAnimSite1304 = createNode("HAnimSite");
HAnimSite1304.USE = "hanim_r_rib10_pt";
HAnimHumanoid31.viewpoints[193] = HAnimSite1304;

HAnimSite HAnimSite1305 = createNode("HAnimSite");
HAnimSite1305.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid31.viewpoints[194] = HAnimSite1305;

HAnimSite HAnimSite1306 = createNode("HAnimSite");
HAnimSite1306.USE = "hanim_substernale_pt";
HAnimHumanoid31.viewpoints[195] = HAnimSite1306;

HAnimSite HAnimSite1307 = createNode("HAnimSite");
HAnimSite1307.USE = "hanim_l_thelion_pt";
HAnimHumanoid31.viewpoints[196] = HAnimSite1307;

HAnimSite HAnimSite1308 = createNode("HAnimSite");
HAnimSite1308.USE = "hanim_r_thelion_pt";
HAnimHumanoid31.viewpoints[197] = HAnimSite1308;

HAnimSite HAnimSite1309 = createNode("HAnimSite");
HAnimSite1309.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid31.viewpoints[198] = HAnimSite1309;

HAnimSite HAnimSite1310 = createNode("HAnimSite");
HAnimSite1310.USE = "hanim_mesosternale_pt";
HAnimHumanoid31.viewpoints[199] = HAnimSite1310;

HAnimSite HAnimSite1311 = createNode("HAnimSite");
HAnimSite1311.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid31.viewpoints[200] = HAnimSite1311;

HAnimSite HAnimSite1312 = createNode("HAnimSite");
HAnimSite1312.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid31.viewpoints[201] = HAnimSite1312;

HAnimSite HAnimSite1313 = createNode("HAnimSite");
HAnimSite1313.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid31.viewpoints[202] = HAnimSite1313;

HAnimSite HAnimSite1314 = createNode("HAnimSite");
HAnimSite1314.USE = "hanim_cervicale_pt";
HAnimHumanoid31.viewpoints[203] = HAnimSite1314;

HAnimSite HAnimSite1315 = createNode("HAnimSite");
HAnimSite1315.USE = "hanim_suprasternale_pt";
HAnimHumanoid31.viewpoints[204] = HAnimSite1315;

HAnimSite HAnimSite1316 = createNode("HAnimSite");
HAnimSite1316.USE = "hanim_l_neck_base_pt";
HAnimHumanoid31.viewpoints[205] = HAnimSite1316;

HAnimSite HAnimSite1317 = createNode("HAnimSite");
HAnimSite1317.USE = "hanim_r_neck_base_pt";
HAnimHumanoid31.viewpoints[206] = HAnimSite1317;

HAnimSite HAnimSite1318 = createNode("HAnimSite");
HAnimSite1318.USE = "hanim_l_acromion_pt";
HAnimHumanoid31.viewpoints[207] = HAnimSite1318;

HAnimSite HAnimSite1319 = createNode("HAnimSite");
HAnimSite1319.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid31.viewpoints[208] = HAnimSite1319;

HAnimSite HAnimSite1320 = createNode("HAnimSite");
HAnimSite1320.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid31.viewpoints[209] = HAnimSite1320;

HAnimSite HAnimSite1321 = createNode("HAnimSite");
HAnimSite1321.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid31.viewpoints[210] = HAnimSite1321;

HAnimSite HAnimSite1322 = createNode("HAnimSite");
HAnimSite1322.USE = "hanim_l_clavicale_pt";
HAnimHumanoid31.viewpoints[211] = HAnimSite1322;

HAnimSite HAnimSite1323 = createNode("HAnimSite");
HAnimSite1323.USE = "hanim_r_acromion_pt";
HAnimHumanoid31.viewpoints[212] = HAnimSite1323;

HAnimSite HAnimSite1324 = createNode("HAnimSite");
HAnimSite1324.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid31.viewpoints[213] = HAnimSite1324;

HAnimSite HAnimSite1325 = createNode("HAnimSite");
HAnimSite1325.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid31.viewpoints[214] = HAnimSite1325;

HAnimSite HAnimSite1326 = createNode("HAnimSite");
HAnimSite1326.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid31.viewpoints[215] = HAnimSite1326;

HAnimSite HAnimSite1327 = createNode("HAnimSite");
HAnimSite1327.USE = "hanim_r_clavicale_pt";
HAnimHumanoid31.viewpoints[216] = HAnimSite1327;

HAnimSite HAnimSite1328 = createNode("HAnimSite");
HAnimSite1328.USE = "hanim_adams_apple_pt";
HAnimHumanoid31.viewpoints[217] = HAnimSite1328;

HAnimSite HAnimSite1329 = createNode("HAnimSite");
HAnimSite1329.USE = "hanim_glabella_pt";
HAnimHumanoid31.viewpoints[218] = HAnimSite1329;

HAnimSite HAnimSite1330 = createNode("HAnimSite");
HAnimSite1330.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid31.viewpoints[219] = HAnimSite1330;

HAnimSite HAnimSite1331 = createNode("HAnimSite");
HAnimSite1331.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid31.viewpoints[220] = HAnimSite1331;

HAnimSite HAnimSite1332 = createNode("HAnimSite");
HAnimSite1332.USE = "hanim_l_tragion_pt";
HAnimHumanoid31.viewpoints[221] = HAnimSite1332;

HAnimSite HAnimSite1333 = createNode("HAnimSite");
HAnimSite1333.USE = "hanim_nuchale_pt";
HAnimHumanoid31.viewpoints[222] = HAnimSite1333;

HAnimSite HAnimSite1334 = createNode("HAnimSite");
HAnimSite1334.USE = "hanim_opisthocranion_pt";
HAnimHumanoid31.viewpoints[223] = HAnimSite1334;

HAnimSite HAnimSite1335 = createNode("HAnimSite");
HAnimSite1335.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid31.viewpoints[224] = HAnimSite1335;

HAnimSite HAnimSite1336 = createNode("HAnimSite");
HAnimSite1336.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid31.viewpoints[225] = HAnimSite1336;

HAnimSite HAnimSite1337 = createNode("HAnimSite");
HAnimSite1337.USE = "hanim_r_tragion_pt";
HAnimHumanoid31.viewpoints[226] = HAnimSite1337;

HAnimSite HAnimSite1338 = createNode("HAnimSite");
HAnimSite1338.USE = "hanim_sellion_pt";
HAnimHumanoid31.viewpoints[227] = HAnimSite1338;

HAnimSite HAnimSite1339 = createNode("HAnimSite");
HAnimSite1339.USE = "hanim_skull_vertex_pt";
HAnimHumanoid31.viewpoints[228] = HAnimSite1339;

HAnimSite HAnimSite1340 = createNode("HAnimSite");
HAnimSite1340.USE = "hanim_l_gonion_pt";
HAnimHumanoid31.viewpoints[229] = HAnimSite1340;

HAnimSite HAnimSite1341 = createNode("HAnimSite");
HAnimSite1341.USE = "hanim_menton_pt";
HAnimHumanoid31.viewpoints[230] = HAnimSite1341;

HAnimSite HAnimSite1342 = createNode("HAnimSite");
HAnimSite1342.USE = "hanim_r_gonion_pt";
HAnimHumanoid31.viewpoints[231] = HAnimSite1342;

HAnimSite HAnimSite1343 = createNode("HAnimSite");
HAnimSite1343.USE = "hanim_supramenton_pt";
HAnimHumanoid31.viewpoints[232] = HAnimSite1343;

HAnimSite HAnimSite1344 = createNode("HAnimSite");
HAnimSite1344.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid31.viewpoints[233] = HAnimSite1344;

HAnimSite HAnimSite1345 = createNode("HAnimSite");
HAnimSite1345.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid31.viewpoints[234] = HAnimSite1345;

HAnimSite HAnimSite1346 = createNode("HAnimSite");
HAnimSite1346.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid31.viewpoints[235] = HAnimSite1346;

HAnimSite HAnimSite1347 = createNode("HAnimSite");
HAnimSite1347.USE = "hanim_l_olecranon_pt";
HAnimHumanoid31.viewpoints[236] = HAnimSite1347;

HAnimSite HAnimSite1348 = createNode("HAnimSite");
HAnimSite1348.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid31.viewpoints[237] = HAnimSite1348;

HAnimSite HAnimSite1349 = createNode("HAnimSite");
HAnimSite1349.USE = "hanim_l_radiale_pt";
HAnimHumanoid31.viewpoints[238] = HAnimSite1349;

HAnimSite HAnimSite1350 = createNode("HAnimSite");
HAnimSite1350.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid31.viewpoints[239] = HAnimSite1350;

HAnimSite HAnimSite1351 = createNode("HAnimSite");
HAnimSite1351.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid31.viewpoints[240] = HAnimSite1351;

HAnimSite HAnimSite1352 = createNode("HAnimSite");
HAnimSite1352.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid31.viewpoints[241] = HAnimSite1352;

HAnimSite HAnimSite1353 = createNode("HAnimSite");
HAnimSite1353.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid31.viewpoints[242] = HAnimSite1353;

HAnimSite HAnimSite1354 = createNode("HAnimSite");
HAnimSite1354.USE = "hanim_l_dactylion_pt";
HAnimHumanoid31.viewpoints[243] = HAnimSite1354;

HAnimSite HAnimSite1355 = createNode("HAnimSite");
HAnimSite1355.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid31.viewpoints[244] = HAnimSite1355;

HAnimSite HAnimSite1356 = createNode("HAnimSite");
HAnimSite1356.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid31.viewpoints[245] = HAnimSite1356;

HAnimSite HAnimSite1357 = createNode("HAnimSite");
HAnimSite1357.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid31.viewpoints[246] = HAnimSite1357;

HAnimSite HAnimSite1358 = createNode("HAnimSite");
HAnimSite1358.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid31.viewpoints[247] = HAnimSite1358;

HAnimSite HAnimSite1359 = createNode("HAnimSite");
HAnimSite1359.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid31.viewpoints[248] = HAnimSite1359;

HAnimSite HAnimSite1360 = createNode("HAnimSite");
HAnimSite1360.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid31.viewpoints[249] = HAnimSite1360;

HAnimSite HAnimSite1361 = createNode("HAnimSite");
HAnimSite1361.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid31.viewpoints[250] = HAnimSite1361;

HAnimSite HAnimSite1362 = createNode("HAnimSite");
HAnimSite1362.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid31.viewpoints[251] = HAnimSite1362;

HAnimSite HAnimSite1363 = createNode("HAnimSite");
HAnimSite1363.USE = "hanim_r_olecranon_pt";
HAnimHumanoid31.viewpoints[252] = HAnimSite1363;

HAnimSite HAnimSite1364 = createNode("HAnimSite");
HAnimSite1364.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid31.viewpoints[253] = HAnimSite1364;

HAnimSite HAnimSite1365 = createNode("HAnimSite");
HAnimSite1365.USE = "hanim_r_radiale_pt";
HAnimHumanoid31.viewpoints[254] = HAnimSite1365;

HAnimSite HAnimSite1366 = createNode("HAnimSite");
HAnimSite1366.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid31.viewpoints[255] = HAnimSite1366;

HAnimSite HAnimSite1367 = createNode("HAnimSite");
HAnimSite1367.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid31.viewpoints[256] = HAnimSite1367;

HAnimSite HAnimSite1368 = createNode("HAnimSite");
HAnimSite1368.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid31.viewpoints[257] = HAnimSite1368;

HAnimSite HAnimSite1369 = createNode("HAnimSite");
HAnimSite1369.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid31.viewpoints[258] = HAnimSite1369;

HAnimSite HAnimSite1370 = createNode("HAnimSite");
HAnimSite1370.USE = "hanim_r_dactylion_pt";
HAnimHumanoid31.viewpoints[259] = HAnimSite1370;

HAnimSite HAnimSite1371 = createNode("HAnimSite");
HAnimSite1371.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid31.viewpoints[260] = HAnimSite1371;

HAnimSite HAnimSite1372 = createNode("HAnimSite");
HAnimSite1372.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid31.viewpoints[261] = HAnimSite1372;

HAnimSite HAnimSite1373 = createNode("HAnimSite");
HAnimSite1373.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid31.viewpoints[262] = HAnimSite1373;

HAnimSite HAnimSite1374 = createNode("HAnimSite");
HAnimSite1374.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid31.viewpoints[263] = HAnimSite1374;

HAnimSite HAnimSite1375 = createNode("HAnimSite");
HAnimSite1375.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid31.viewpoints[264] = HAnimSite1375;

children[4] = HAnimHumanoid31;

}
