#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "Humanoid1.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "identifier";
meta3.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid1.x3d";
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
meta6.content = "14 Jan 2023";
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
Transform Transform45 = createNode("Transform");
Transform45.translation = new SFVec3f(new float[0,0.824,0.0277]);
Transform Transform46 = createNode("Transform");
Shape Shape47 = createNode("Shape");
Shape47.USE = "HAnimJointShape";
Transform46.child = new undefined();

Transform46.child[0] = Shape47;

Transform45.children = new MFNode();

Transform45.children[0] = Transform46;

HAnimSegment44.children = new MFNode();

HAnimSegment44.children[0] = Transform45;

Shape Shape48 = createNode("Shape");
LineSet LineSet49 = createNode("LineSet");
LineSet49.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA50 = createNode("ColorRGBA");
ColorRGBA50.USE = "HAnimSegmentLineColorRGBA";
LineSet49.color = ColorRGBA50;

Coordinate Coordinate51 = createNode("Coordinate");
Coordinate51.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet49.coord = Coordinate51;

Shape48.geometry = LineSet49;

HAnimSegment44.children[1] = Shape48;

HAnimSite HAnimSite52 = createNode("HAnimSite");
HAnimSite52.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimSite52.name = "buttocks_standing_wall_contact_point_pt";
TouchSensor TouchSensor53 = createNode("TouchSensor");
TouchSensor53.description = "HAnimSite buttocks_standing_wall_contact_point_pt";
HAnimSite52.children = new MFNode();

HAnimSite52.children[0] = TouchSensor53;

Shape Shape54 = createNode("Shape");
Shape54.USE = "HAnimSiteShape";
HAnimSite52.children[1] = Shape54;

HAnimSegment44.children[2] = HAnimSite52;

HAnimSite HAnimSite55 = createNode("HAnimSite");
HAnimSite55.DEF = "hanim_crotch_pt";
HAnimSite55.name = "crotch_pt";
HAnimSite55.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
TouchSensor TouchSensor56 = createNode("TouchSensor");
TouchSensor56.description = "HAnimSite crotch_pt";
HAnimSite55.children = new MFNode();

HAnimSite55.children[0] = TouchSensor56;

Shape Shape57 = createNode("Shape");
Shape57.USE = "HAnimSiteShape";
HAnimSite55.children[1] = Shape57;

HAnimSegment44.children[3] = HAnimSite55;

HAnimSite HAnimSite58 = createNode("HAnimSite");
HAnimSite58.DEF = "hanim_l_asis_pt";
HAnimSite58.name = "l_asis_pt";
HAnimSite58.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
TouchSensor TouchSensor59 = createNode("TouchSensor");
TouchSensor59.description = "HAnimSite l_asis_pt";
HAnimSite58.children = new MFNode();

HAnimSite58.children[0] = TouchSensor59;

Shape Shape60 = createNode("Shape");
Shape60.USE = "HAnimSiteShape";
HAnimSite58.children[1] = Shape60;

HAnimSegment44.children[4] = HAnimSite58;

HAnimSite HAnimSite61 = createNode("HAnimSite");
HAnimSite61.DEF = "hanim_l_iliocristale_pt";
HAnimSite61.name = "l_iliocristale_pt";
HAnimSite61.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
TouchSensor TouchSensor62 = createNode("TouchSensor");
TouchSensor62.description = "HAnimSite l_iliocristale_pt";
HAnimSite61.children = new MFNode();

HAnimSite61.children[0] = TouchSensor62;

Shape Shape63 = createNode("Shape");
Shape63.USE = "HAnimSiteShape";
HAnimSite61.children[1] = Shape63;

HAnimSegment44.children[5] = HAnimSite61;

HAnimSite HAnimSite64 = createNode("HAnimSite");
HAnimSite64.DEF = "hanim_l_psis_pt";
HAnimSite64.name = "l_psis_pt";
HAnimSite64.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
TouchSensor TouchSensor65 = createNode("TouchSensor");
TouchSensor65.description = "HAnimSite l_psis_pt";
HAnimSite64.children = new MFNode();

HAnimSite64.children[0] = TouchSensor65;

Shape Shape66 = createNode("Shape");
Shape66.USE = "HAnimSiteShape";
HAnimSite64.children[1] = Shape66;

HAnimSegment44.children[6] = HAnimSite64;

HAnimSite HAnimSite67 = createNode("HAnimSite");
HAnimSite67.DEF = "hanim_l_trochanterion_pt";
HAnimSite67.name = "l_trochanterion_pt";
HAnimSite67.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
TouchSensor TouchSensor68 = createNode("TouchSensor");
TouchSensor68.description = "HAnimSite l_trochanterion_pt";
HAnimSite67.children = new MFNode();

HAnimSite67.children[0] = TouchSensor68;

Shape Shape69 = createNode("Shape");
Shape69.USE = "HAnimSiteShape";
HAnimSite67.children[1] = Shape69;

HAnimSegment44.children[7] = HAnimSite67;

HAnimSite HAnimSite70 = createNode("HAnimSite");
HAnimSite70.DEF = "hanim_r_asis_pt";
HAnimSite70.name = "r_asis_pt";
HAnimSite70.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
TouchSensor TouchSensor71 = createNode("TouchSensor");
TouchSensor71.description = "HAnimSite r_asis_pt";
HAnimSite70.children = new MFNode();

HAnimSite70.children[0] = TouchSensor71;

Shape Shape72 = createNode("Shape");
Shape72.USE = "HAnimSiteShape";
HAnimSite70.children[1] = Shape72;

HAnimSegment44.children[8] = HAnimSite70;

HAnimSite HAnimSite73 = createNode("HAnimSite");
HAnimSite73.DEF = "hanim_r_iliocristale_pt";
HAnimSite73.name = "r_iliocristale_pt";
HAnimSite73.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
TouchSensor TouchSensor74 = createNode("TouchSensor");
TouchSensor74.description = "HAnimSite r_iliocristale_pt";
HAnimSite73.children = new MFNode();

HAnimSite73.children[0] = TouchSensor74;

Shape Shape75 = createNode("Shape");
Shape75.USE = "HAnimSiteShape";
HAnimSite73.children[1] = Shape75;

HAnimSegment44.children[9] = HAnimSite73;

HAnimSite HAnimSite76 = createNode("HAnimSite");
HAnimSite76.DEF = "hanim_r_psis_pt";
HAnimSite76.name = "r_psis_pt";
HAnimSite76.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
TouchSensor TouchSensor77 = createNode("TouchSensor");
TouchSensor77.description = "HAnimSite r_psis_pt";
HAnimSite76.children = new MFNode();

HAnimSite76.children[0] = TouchSensor77;

Shape Shape78 = createNode("Shape");
Shape78.USE = "HAnimSiteShape";
HAnimSite76.children[1] = Shape78;

HAnimSegment44.children[10] = HAnimSite76;

HAnimSite HAnimSite79 = createNode("HAnimSite");
HAnimSite79.DEF = "hanim_r_trochanterion_pt";
HAnimSite79.name = "r_trochanterion_pt";
HAnimSite79.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
TouchSensor TouchSensor80 = createNode("TouchSensor");
TouchSensor80.description = "HAnimSite r_trochanterion_pt";
HAnimSite79.children = new MFNode();

HAnimSite79.children[0] = TouchSensor80;

Shape Shape81 = createNode("Shape");
Shape81.USE = "HAnimSiteShape";
HAnimSite79.children[1] = Shape81;

HAnimSegment44.children[11] = HAnimSite79;

Shape Shape82 = createNode("Shape");
LineSet LineSet83 = createNode("LineSet");
LineSet83.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA84 = createNode("ColorRGBA");
ColorRGBA84.USE = "HAnimSegmentLineColorRGBA";
LineSet83.color = ColorRGBA84;

Coordinate Coordinate85 = createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet83.coord = Coordinate85;

Shape82.geometry = LineSet83;

HAnimSegment44.children[12] = Shape82;

HAnimSite HAnimSite86 = createNode("HAnimSite");
HAnimSite86.DEF = "hanim_navel_pt";
HAnimSite86.name = "navel_pt";
HAnimSite86.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
TouchSensor TouchSensor87 = createNode("TouchSensor");
TouchSensor87.description = "HAnimSite navel_pt";
HAnimSite86.children = new MFNode();

HAnimSite86.children[0] = TouchSensor87;

Shape Shape88 = createNode("Shape");
Shape88.USE = "HAnimSiteShape";
HAnimSite86.children[1] = Shape88;

HAnimSegment44.children[13] = HAnimSite86;

HAnimSite HAnimSite89 = createNode("HAnimSite");
HAnimSite89.DEF = "hanim_waist_preferred_anterior_pt";
HAnimSite89.name = "waist_preferred_anterior_pt";
TouchSensor TouchSensor90 = createNode("TouchSensor");
TouchSensor90.description = "HAnimSite waist_preferred_anterior_pt";
HAnimSite89.children = new MFNode();

HAnimSite89.children[0] = TouchSensor90;

Shape Shape91 = createNode("Shape");
Shape91.USE = "HAnimSiteShape";
HAnimSite89.children[1] = Shape91;

HAnimSegment44.children[14] = HAnimSite89;

HAnimSite HAnimSite92 = createNode("HAnimSite");
HAnimSite92.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite92.name = "waist_preferred_posterior_pt";
HAnimSite92.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
TouchSensor TouchSensor93 = createNode("TouchSensor");
TouchSensor93.description = "HAnimSite waist_preferred_posterior_pt";
HAnimSite92.children = new MFNode();

HAnimSite92.children[0] = TouchSensor93;

Shape Shape94 = createNode("Shape");
Shape94.USE = "HAnimSiteShape";
HAnimSite92.children[1] = Shape94;

HAnimSegment44.children[15] = HAnimSite92;

HAnimJoint43.children = new MFNode();

HAnimJoint43.children[0] = HAnimSegment44;

HAnimJoint HAnimJoint95 = createNode("HAnimJoint");
HAnimJoint95.DEF = "hanim_sacroiliac";
HAnimJoint95.name = "sacroiliac";
HAnimJoint95.center = new SFVec3f(new float[0,0.9149,0.0016]);
HAnimSegment HAnimSegment96 = createNode("HAnimSegment");
HAnimSegment96.DEF = "hanim_pelvis";
HAnimSegment96.name = "pelvis";
Transform Transform97 = createNode("Transform");
Transform97.translation = new SFVec3f(new float[0,0.9149,0.0016]);
Transform Transform98 = createNode("Transform");
Shape Shape99 = createNode("Shape");
Shape99.USE = "HAnimJointShape";
Transform98.child = new undefined();

Transform98.child[0] = Shape99;

Transform97.children = new MFNode();

Transform97.children[0] = Transform98;

HAnimSegment96.children = new MFNode();

HAnimSegment96.children[0] = Transform97;

Shape Shape100 = createNode("Shape");
LineSet LineSet101 = createNode("LineSet");
LineSet101.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA102 = createNode("ColorRGBA");
ColorRGBA102.USE = "HAnimSegmentLineColorRGBA";
LineSet101.color = ColorRGBA102;

Coordinate Coordinate103 = createNode("Coordinate");
Coordinate103.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet101.coord = Coordinate103;

Shape100.geometry = LineSet101;

HAnimSegment96.children[1] = Shape100;

HAnimSite HAnimSite104 = createNode("HAnimSite");
HAnimSite104.DEF = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimSite104.name = "l_femoral_lateral_epicondyles_pt";
HAnimSite104.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
TouchSensor TouchSensor105 = createNode("TouchSensor");
TouchSensor105.description = "HAnimSite l_femoral_lateral_epicondyles_pt";
HAnimSite104.children = new MFNode();

HAnimSite104.children[0] = TouchSensor105;

Shape Shape106 = createNode("Shape");
Shape106.USE = "HAnimSiteShape";
HAnimSite104.children[1] = Shape106;

HAnimSegment96.children[2] = HAnimSite104;

HAnimSite HAnimSite107 = createNode("HAnimSite");
HAnimSite107.DEF = "hanim_l_femoral_medial_epicondyles_pt";
HAnimSite107.name = "l_femoral_medial_epicondyles_pt";
HAnimSite107.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
TouchSensor TouchSensor108 = createNode("TouchSensor");
TouchSensor108.description = "HAnimSite l_femoral_medial_epicondyles_pt";
HAnimSite107.children = new MFNode();

HAnimSite107.children[0] = TouchSensor108;

Shape Shape109 = createNode("Shape");
Shape109.USE = "HAnimSiteShape";
HAnimSite107.children[1] = Shape109;

HAnimSegment96.children[3] = HAnimSite107;

HAnimSite HAnimSite110 = createNode("HAnimSite");
HAnimSite110.DEF = "hanim_l_knee_crease_pt";
HAnimSite110.name = "l_knee_crease_pt";
HAnimSite110.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
TouchSensor TouchSensor111 = createNode("TouchSensor");
TouchSensor111.description = "HAnimSite l_knee_crease_pt";
HAnimSite110.children = new MFNode();

HAnimSite110.children[0] = TouchSensor111;

Shape Shape112 = createNode("Shape");
Shape112.USE = "HAnimSiteShape";
HAnimSite110.children[1] = Shape112;

HAnimSegment96.children[4] = HAnimSite110;

HAnimSite HAnimSite113 = createNode("HAnimSite");
HAnimSite113.DEF = "hanim_l_suprapatella_pt";
HAnimSite113.name = "l_suprapatella_pt";
TouchSensor TouchSensor114 = createNode("TouchSensor");
TouchSensor114.description = "HAnimSite l_suprapatella_pt";
HAnimSite113.children = new MFNode();

HAnimSite113.children[0] = TouchSensor114;

Shape Shape115 = createNode("Shape");
Shape115.USE = "HAnimSiteShape";
HAnimSite113.children[1] = Shape115;

HAnimSegment96.children[5] = HAnimSite113;

Shape Shape116 = createNode("Shape");
LineSet LineSet117 = createNode("LineSet");
LineSet117.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA118 = createNode("ColorRGBA");
ColorRGBA118.USE = "HAnimSegmentLineColorRGBA";
LineSet117.color = ColorRGBA118;

Coordinate Coordinate119 = createNode("Coordinate");
Coordinate119.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet117.coord = Coordinate119;

Shape116.geometry = LineSet117;

HAnimSegment96.children[6] = Shape116;

HAnimSite HAnimSite120 = createNode("HAnimSite");
HAnimSite120.DEF = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimSite120.name = "r_femoral_lateral_epicondyles_pt";
HAnimSite120.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
TouchSensor TouchSensor121 = createNode("TouchSensor");
TouchSensor121.description = "HAnimSite r_femoral_lateral_epicondyles_pt";
HAnimSite120.children = new MFNode();

HAnimSite120.children[0] = TouchSensor121;

Shape Shape122 = createNode("Shape");
Shape122.USE = "HAnimSiteShape";
HAnimSite120.children[1] = Shape122;

HAnimSegment96.children[7] = HAnimSite120;

HAnimSite HAnimSite123 = createNode("HAnimSite");
HAnimSite123.DEF = "hanim_r_femoral_medial_epicondyles_pt";
HAnimSite123.name = "r_femoral_medial_epicondyles_pt";
HAnimSite123.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
TouchSensor TouchSensor124 = createNode("TouchSensor");
TouchSensor124.description = "HAnimSite r_femoral_medial_epicondyles_pt";
HAnimSite123.children = new MFNode();

HAnimSite123.children[0] = TouchSensor124;

Shape Shape125 = createNode("Shape");
Shape125.USE = "HAnimSiteShape";
HAnimSite123.children[1] = Shape125;

HAnimSegment96.children[8] = HAnimSite123;

HAnimSite HAnimSite126 = createNode("HAnimSite");
HAnimSite126.DEF = "hanim_r_knee_crease_pt";
HAnimSite126.name = "r_knee_crease_pt";
HAnimSite126.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
TouchSensor TouchSensor127 = createNode("TouchSensor");
TouchSensor127.description = "HAnimSite r_knee_crease_pt";
HAnimSite126.children = new MFNode();

HAnimSite126.children[0] = TouchSensor127;

Shape Shape128 = createNode("Shape");
Shape128.USE = "HAnimSiteShape";
HAnimSite126.children[1] = Shape128;

HAnimSegment96.children[9] = HAnimSite126;

HAnimSite HAnimSite129 = createNode("HAnimSite");
HAnimSite129.DEF = "hanim_r_suprapatella_pt";
HAnimSite129.name = "r_suprapatella_pt";
TouchSensor TouchSensor130 = createNode("TouchSensor");
TouchSensor130.description = "HAnimSite r_suprapatella_pt";
HAnimSite129.children = new MFNode();

HAnimSite129.children[0] = TouchSensor130;

Shape Shape131 = createNode("Shape");
Shape131.USE = "HAnimSiteShape";
HAnimSite129.children[1] = Shape131;

HAnimSegment96.children[10] = HAnimSite129;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimSegment96;

HAnimJoint HAnimJoint132 = createNode("HAnimJoint");
HAnimJoint132.DEF = "hanim_l_hip";
HAnimJoint132.name = "l_hip";
HAnimJoint132.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
HAnimSegment HAnimSegment133 = createNode("HAnimSegment");
HAnimSegment133.DEF = "hanim_l_thigh";
HAnimSegment133.name = "l_thigh";
Transform Transform134 = createNode("Transform");
Transform134.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
Transform Transform135 = createNode("Transform");
Shape Shape136 = createNode("Shape");
Shape136.USE = "HAnimJointShape";
Transform135.child = new undefined();

Transform135.child[0] = Shape136;

Transform134.children = new MFNode();

Transform134.children[0] = Transform135;

HAnimSegment133.children = new MFNode();

HAnimSegment133.children[0] = Transform134;

Shape Shape137 = createNode("Shape");
LineSet LineSet138 = createNode("LineSet");
LineSet138.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA139 = createNode("ColorRGBA");
ColorRGBA139.USE = "HAnimSegmentLineColorRGBA";
LineSet138.color = ColorRGBA139;

Coordinate Coordinate140 = createNode("Coordinate");
Coordinate140.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet138.coord = Coordinate140;

Shape137.geometry = LineSet138;

HAnimSegment133.children[1] = Shape137;

HAnimSite HAnimSite141 = createNode("HAnimSite");
HAnimSite141.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite141.name = "l_lateral_malleolus_pt";
HAnimSite141.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
TouchSensor TouchSensor142 = createNode("TouchSensor");
TouchSensor142.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite141.children = new MFNode();

HAnimSite141.children[0] = TouchSensor142;

Shape Shape143 = createNode("Shape");
Shape143.USE = "HAnimSiteShape";
HAnimSite141.children[1] = Shape143;

HAnimSegment133.children[2] = HAnimSite141;

HAnimSite HAnimSite144 = createNode("HAnimSite");
HAnimSite144.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite144.name = "l_medial_malleolus_pt";
HAnimSite144.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
TouchSensor TouchSensor145 = createNode("TouchSensor");
TouchSensor145.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite144.children = new MFNode();

HAnimSite144.children[0] = TouchSensor145;

Shape Shape146 = createNode("Shape");
Shape146.USE = "HAnimSiteShape";
HAnimSite144.children[1] = Shape146;

HAnimSegment133.children[3] = HAnimSite144;

HAnimSite HAnimSite147 = createNode("HAnimSite");
HAnimSite147.DEF = "hanim_l_tibiale_pt";
HAnimSite147.name = "l_tibiale_pt";
TouchSensor TouchSensor148 = createNode("TouchSensor");
TouchSensor148.description = "HAnimSite l_tibiale_pt";
HAnimSite147.children = new MFNode();

HAnimSite147.children[0] = TouchSensor148;

Shape Shape149 = createNode("Shape");
Shape149.USE = "HAnimSiteShape";
HAnimSite147.children[1] = Shape149;

HAnimSegment133.children[4] = HAnimSite147;

HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimSegment133;

HAnimJoint HAnimJoint150 = createNode("HAnimJoint");
HAnimJoint150.DEF = "hanim_l_knee";
HAnimJoint150.name = "l_knee";
HAnimJoint150.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
HAnimSegment HAnimSegment151 = createNode("HAnimSegment");
HAnimSegment151.DEF = "hanim_l_calf";
HAnimSegment151.name = "l_calf";
Transform Transform152 = createNode("Transform");
Transform152.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
Transform Transform153 = createNode("Transform");
Shape Shape154 = createNode("Shape");
Shape154.USE = "HAnimJointShape";
Transform153.child = new undefined();

Transform153.child[0] = Shape154;

Transform152.children = new MFNode();

Transform152.children[0] = Transform153;

HAnimSegment151.children = new MFNode();

HAnimSegment151.children[0] = Transform152;

Shape Shape155 = createNode("Shape");
LineSet LineSet156 = createNode("LineSet");
LineSet156.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA157 = createNode("ColorRGBA");
ColorRGBA157.USE = "HAnimSegmentLineColorRGBA";
LineSet156.color = ColorRGBA157;

Coordinate Coordinate158 = createNode("Coordinate");
Coordinate158.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet156.coord = Coordinate158;

Shape155.geometry = LineSet156;

HAnimSegment151.children[1] = Shape155;

HAnimSite HAnimSite159 = createNode("HAnimSite");
HAnimSite159.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite159.name = "l_calcaneus_posterior_pt";
HAnimSite159.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
TouchSensor TouchSensor160 = createNode("TouchSensor");
TouchSensor160.description = "HAnimSite l_calcaneus_posterior_pt";
HAnimSite159.children = new MFNode();

HAnimSite159.children[0] = TouchSensor160;

Shape Shape161 = createNode("Shape");
Shape161.USE = "HAnimSiteShape";
HAnimSite159.children[1] = Shape161;

HAnimSegment151.children[2] = HAnimSite159;

HAnimSite HAnimSite162 = createNode("HAnimSite");
HAnimSite162.DEF = "hanim_l_sphyrion_pt";
HAnimSite162.name = "l_sphyrion_pt";
HAnimSite162.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
TouchSensor TouchSensor163 = createNode("TouchSensor");
TouchSensor163.description = "HAnimSite l_sphyrion_pt";
HAnimSite162.children = new MFNode();

HAnimSite162.children[0] = TouchSensor163;

Shape Shape164 = createNode("Shape");
Shape164.USE = "HAnimSiteShape";
HAnimSite162.children[1] = Shape164;

HAnimSegment151.children[3] = HAnimSite162;

HAnimJoint150.children = new MFNode();

HAnimJoint150.children[0] = HAnimSegment151;

HAnimJoint HAnimJoint165 = createNode("HAnimJoint");
HAnimJoint165.DEF = "hanim_l_talocrural";
HAnimJoint165.name = "l_talocrural";
HAnimJoint165.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
HAnimSegment HAnimSegment166 = createNode("HAnimSegment");
HAnimSegment166.DEF = "hanim_l_talus";
HAnimSegment166.name = "l_talus";
Transform Transform167 = createNode("Transform");
Transform167.translation = new SFVec3f(new float[0.08,0.06,-0.025]);
Transform167.rotation = new SFRotation(new float[1,0,0,-1.57]);
Transform167.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform Transform168 = createNode("Transform");
Shape Shape169 = createNode("Shape");
Shape169.USE = "HAnimJointShape";
Transform168.child = new undefined();

Transform168.child[0] = Shape169;

Transform167.children = new MFNode();

Transform167.children[0] = Transform168;

HAnimSegment166.children = new MFNode();

HAnimSegment166.children[0] = Transform167;

Shape Shape170 = createNode("Shape");
LineSet LineSet171 = createNode("LineSet");
LineSet171.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA172 = createNode("ColorRGBA");
ColorRGBA172.USE = "HAnimSegmentLineColorRGBA";
LineSet171.color = ColorRGBA172;

Coordinate Coordinate173 = createNode("Coordinate");
Coordinate173.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0824,0.0064,-0.004]);
LineSet171.coord = Coordinate173;

Shape170.geometry = LineSet171;

HAnimSegment166.children[1] = Shape170;

HAnimJoint165.children = new MFNode();

HAnimJoint165.children[0] = HAnimSegment166;

HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint174.name = "l_metatarsophalangeal_2";
HAnimJoint174.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimJoint165.children[1] = HAnimJoint174;

HAnimJoint150.children[1] = HAnimJoint165;

HAnimJoint132.children[1] = HAnimJoint150;

HAnimJoint95.children[1] = HAnimJoint132;

HAnimJoint HAnimJoint175 = createNode("HAnimJoint");
HAnimJoint175.DEF = "hanim_r_hip";
HAnimJoint175.name = "r_hip";
HAnimJoint175.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimSegment HAnimSegment176 = createNode("HAnimSegment");
HAnimSegment176.DEF = "hanim_r_thigh";
HAnimSegment176.name = "r_thigh";
Transform Transform177 = createNode("Transform");
Transform177.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Transform Transform178 = createNode("Transform");
Shape Shape179 = createNode("Shape");
Shape179.USE = "HAnimJointShape";
Transform178.child = new undefined();

Transform178.child[0] = Shape179;

Transform177.children = new MFNode();

Transform177.children[0] = Transform178;

HAnimSegment176.children = new MFNode();

HAnimSegment176.children[0] = Transform177;

Shape Shape180 = createNode("Shape");
LineSet LineSet181 = createNode("LineSet");
LineSet181.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA182 = createNode("ColorRGBA");
ColorRGBA182.USE = "HAnimSegmentLineColorRGBA";
LineSet181.color = ColorRGBA182;

Coordinate Coordinate183 = createNode("Coordinate");
Coordinate183.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet181.coord = Coordinate183;

Shape180.geometry = LineSet181;

HAnimSegment176.children[1] = Shape180;

HAnimSite HAnimSite184 = createNode("HAnimSite");
HAnimSite184.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite184.name = "r_lateral_malleolus_pt";
HAnimSite184.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor185 = createNode("TouchSensor");
TouchSensor185.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite184.children = new MFNode();

HAnimSite184.children[0] = TouchSensor185;

Shape Shape186 = createNode("Shape");
Shape186.USE = "HAnimSiteShape";
HAnimSite184.children[1] = Shape186;

HAnimSegment176.children[2] = HAnimSite184;

HAnimSite HAnimSite187 = createNode("HAnimSite");
HAnimSite187.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite187.name = "r_medial_malleolus_pt";
HAnimSite187.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor188 = createNode("TouchSensor");
TouchSensor188.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite187.children = new MFNode();

HAnimSite187.children[0] = TouchSensor188;

Shape Shape189 = createNode("Shape");
Shape189.USE = "HAnimSiteShape";
HAnimSite187.children[1] = Shape189;

HAnimSegment176.children[3] = HAnimSite187;

HAnimSite HAnimSite190 = createNode("HAnimSite");
HAnimSite190.DEF = "hanim_r_tibiale_pt";
HAnimSite190.name = "r_tibiale_pt";
TouchSensor TouchSensor191 = createNode("TouchSensor");
TouchSensor191.description = "HAnimSite r_tibiale_pt";
HAnimSite190.children = new MFNode();

HAnimSite190.children[0] = TouchSensor191;

Shape Shape192 = createNode("Shape");
Shape192.USE = "HAnimSiteShape";
HAnimSite190.children[1] = Shape192;

HAnimSegment176.children[4] = HAnimSite190;

HAnimJoint175.children = new MFNode();

HAnimJoint175.children[0] = HAnimSegment176;

HAnimJoint HAnimJoint193 = createNode("HAnimJoint");
HAnimJoint193.DEF = "hanim_r_knee";
HAnimJoint193.name = "r_knee";
HAnimJoint193.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimSegment HAnimSegment194 = createNode("HAnimSegment");
HAnimSegment194.DEF = "hanim_r_calf";
HAnimSegment194.name = "r_calf";
Transform Transform195 = createNode("Transform");
Transform195.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Transform Transform196 = createNode("Transform");
Shape Shape197 = createNode("Shape");
Shape197.USE = "HAnimJointShape";
Transform196.child = new undefined();

Transform196.child[0] = Shape197;

Transform195.children = new MFNode();

Transform195.children[0] = Transform196;

HAnimSegment194.children = new MFNode();

HAnimSegment194.children[0] = Transform195;

Shape Shape198 = createNode("Shape");
LineSet LineSet199 = createNode("LineSet");
LineSet199.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA200 = createNode("ColorRGBA");
ColorRGBA200.USE = "HAnimSegmentLineColorRGBA";
LineSet199.color = ColorRGBA200;

Coordinate Coordinate201 = createNode("Coordinate");
Coordinate201.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet199.coord = Coordinate201;

Shape198.geometry = LineSet199;

HAnimSegment194.children[1] = Shape198;

HAnimSite HAnimSite202 = createNode("HAnimSite");
HAnimSite202.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite202.name = "r_calcaneus_posterior_pt";
HAnimSite202.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor203 = createNode("TouchSensor");
TouchSensor203.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite202.children = new MFNode();

HAnimSite202.children[0] = TouchSensor203;

Shape Shape204 = createNode("Shape");
Shape204.USE = "HAnimSiteShape";
HAnimSite202.children[1] = Shape204;

HAnimSegment194.children[2] = HAnimSite202;

HAnimSite HAnimSite205 = createNode("HAnimSite");
HAnimSite205.DEF = "hanim_r_sphyrion_pt";
HAnimSite205.name = "r_sphyrion_pt";
HAnimSite205.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor206 = createNode("TouchSensor");
TouchSensor206.description = "HAnimSite r_sphyrion_pt";
HAnimSite205.children = new MFNode();

HAnimSite205.children[0] = TouchSensor206;

Shape Shape207 = createNode("Shape");
Shape207.USE = "HAnimSiteShape";
HAnimSite205.children[1] = Shape207;

HAnimSegment194.children[3] = HAnimSite205;

HAnimJoint193.children = new MFNode();

HAnimJoint193.children[0] = HAnimSegment194;

HAnimJoint HAnimJoint208 = createNode("HAnimJoint");
HAnimJoint208.DEF = "hanim_r_talocrural";
HAnimJoint208.name = "r_talocrural";
HAnimJoint208.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimSegment HAnimSegment209 = createNode("HAnimSegment");
HAnimSegment209.DEF = "hanim_r_talus";
HAnimSegment209.name = "r_talus";
Transform Transform210 = createNode("Transform");
Transform210.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform210.rotation = new SFRotation(new float[1,0,0,-1.57]);
Transform210.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform Transform211 = createNode("Transform");
Shape Shape212 = createNode("Shape");
Shape212.USE = "HAnimJointShape";
Transform211.child = new undefined();

Transform211.child[0] = Shape212;

Transform210.children = new MFNode();

Transform210.children[0] = Transform211;

HAnimSegment209.children = new MFNode();

HAnimSegment209.children[0] = Transform210;

Shape Shape213 = createNode("Shape");
LineSet LineSet214 = createNode("LineSet");
LineSet214.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA215 = createNode("ColorRGBA");
ColorRGBA215.USE = "HAnimSegmentLineColorRGBA";
LineSet214.color = ColorRGBA215;

Coordinate Coordinate216 = createNode("Coordinate");
Coordinate216.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0823,0.0064,-0.004]);
LineSet214.coord = Coordinate216;

Shape213.geometry = LineSet214;

HAnimSegment209.children[1] = Shape213;

HAnimJoint208.children = new MFNode();

HAnimJoint208.children[0] = HAnimSegment209;

HAnimJoint HAnimJoint217 = createNode("HAnimJoint");
HAnimJoint217.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint217.name = "r_metatarsophalangeal_2";
HAnimJoint217.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
HAnimJoint208.children[1] = HAnimJoint217;

HAnimJoint193.children[1] = HAnimJoint208;

HAnimJoint175.children[1] = HAnimJoint193;

HAnimJoint95.children[2] = HAnimJoint175;

HAnimJoint43.children[1] = HAnimJoint95;

HAnimJoint HAnimJoint218 = createNode("HAnimJoint");
HAnimJoint218.DEF = "hanim_vl5";
HAnimJoint218.name = "vl5";
HAnimJoint218.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimSegment HAnimSegment219 = createNode("HAnimSegment");
HAnimSegment219.DEF = "hanim_l5";
HAnimSegment219.name = "l5";
Transform Transform220 = createNode("Transform");
Transform220.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
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
Coordinate226.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0044,1.6209,0.0236]);
LineSet224.coord = Coordinate226;

Shape223.geometry = LineSet224;

HAnimSegment219.children[1] = Shape223;

HAnimSite HAnimSite227 = createNode("HAnimSite");
HAnimSite227.DEF = "hanim_glabella_pt";
HAnimSite227.name = "glabella_pt";
TouchSensor TouchSensor228 = createNode("TouchSensor");
TouchSensor228.description = "HAnimSite glabella_pt";
HAnimSite227.children = new MFNode();

HAnimSite227.children[0] = TouchSensor228;

Shape Shape229 = createNode("Shape");
Shape229.USE = "HAnimSiteShape";
HAnimSite227.children[1] = Shape229;

HAnimSegment219.children[2] = HAnimSite227;

HAnimSite HAnimSite230 = createNode("HAnimSite");
HAnimSite230.DEF = "hanim_l_ectocanthus_pt";
HAnimSite230.name = "l_ectocanthus_pt";
TouchSensor TouchSensor231 = createNode("TouchSensor");
TouchSensor231.description = "HAnimSite l_ectocanthus_pt";
HAnimSite230.children = new MFNode();

HAnimSite230.children[0] = TouchSensor231;

Shape Shape232 = createNode("Shape");
Shape232.USE = "HAnimSiteShape";
HAnimSite230.children[1] = Shape232;

HAnimSegment219.children[3] = HAnimSite230;

HAnimSite HAnimSite233 = createNode("HAnimSite");
HAnimSite233.DEF = "hanim_l_infraorbitale_pt";
HAnimSite233.name = "l_infraorbitale_pt";
HAnimSite233.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor234 = createNode("TouchSensor");
TouchSensor234.description = "HAnimSite l_infraorbitale_pt";
HAnimSite233.children = new MFNode();

HAnimSite233.children[0] = TouchSensor234;

Shape Shape235 = createNode("Shape");
Shape235.USE = "HAnimSiteShape";
HAnimSite233.children[1] = Shape235;

HAnimSegment219.children[4] = HAnimSite233;

HAnimSite HAnimSite236 = createNode("HAnimSite");
HAnimSite236.DEF = "hanim_l_tragion_pt";
HAnimSite236.name = "l_tragion_pt";
HAnimSite236.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor237 = createNode("TouchSensor");
TouchSensor237.description = "HAnimSite l_tragion_pt";
HAnimSite236.children = new MFNode();

HAnimSite236.children[0] = TouchSensor237;

Shape Shape238 = createNode("Shape");
Shape238.USE = "HAnimSiteShape";
HAnimSite236.children[1] = Shape238;

HAnimSegment219.children[5] = HAnimSite236;

HAnimSite HAnimSite239 = createNode("HAnimSite");
HAnimSite239.DEF = "hanim_nuchale_pt";
HAnimSite239.name = "nuchale_pt";
HAnimSite239.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor240 = createNode("TouchSensor");
TouchSensor240.description = "HAnimSite nuchale_pt";
HAnimSite239.children = new MFNode();

HAnimSite239.children[0] = TouchSensor240;

Shape Shape241 = createNode("Shape");
Shape241.USE = "HAnimSiteShape";
HAnimSite239.children[1] = Shape241;

HAnimSegment219.children[6] = HAnimSite239;

HAnimSite HAnimSite242 = createNode("HAnimSite");
HAnimSite242.DEF = "hanim_opisthocranion_pt";
HAnimSite242.name = "opisthocranion_pt";
TouchSensor TouchSensor243 = createNode("TouchSensor");
TouchSensor243.description = "HAnimSite opisthocranion_pt";
HAnimSite242.children = new MFNode();

HAnimSite242.children[0] = TouchSensor243;

Shape Shape244 = createNode("Shape");
Shape244.USE = "HAnimSiteShape";
HAnimSite242.children[1] = Shape244;

HAnimSegment219.children[7] = HAnimSite242;

HAnimSite HAnimSite245 = createNode("HAnimSite");
HAnimSite245.DEF = "hanim_r_ectocanthus_pt";
HAnimSite245.name = "r_ectocanthus_pt";
TouchSensor TouchSensor246 = createNode("TouchSensor");
TouchSensor246.description = "HAnimSite r_ectocanthus_pt";
HAnimSite245.children = new MFNode();

HAnimSite245.children[0] = TouchSensor246;

Shape Shape247 = createNode("Shape");
Shape247.USE = "HAnimSiteShape";
HAnimSite245.children[1] = Shape247;

HAnimSegment219.children[8] = HAnimSite245;

HAnimSite HAnimSite248 = createNode("HAnimSite");
HAnimSite248.DEF = "hanim_r_infraorbitale_pt";
HAnimSite248.name = "r_infraorbitale_pt";
HAnimSite248.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor249 = createNode("TouchSensor");
TouchSensor249.description = "HAnimSite r_infraorbitale_pt";
HAnimSite248.children = new MFNode();

HAnimSite248.children[0] = TouchSensor249;

Shape Shape250 = createNode("Shape");
Shape250.USE = "HAnimSiteShape";
HAnimSite248.children[1] = Shape250;

HAnimSegment219.children[9] = HAnimSite248;

HAnimSite HAnimSite251 = createNode("HAnimSite");
HAnimSite251.DEF = "hanim_r_tragion_pt";
HAnimSite251.name = "r_tragion_pt";
HAnimSite251.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor252 = createNode("TouchSensor");
TouchSensor252.description = "HAnimSite r_tragion_pt";
HAnimSite251.children = new MFNode();

HAnimSite251.children[0] = TouchSensor252;

Shape Shape253 = createNode("Shape");
Shape253.USE = "HAnimSiteShape";
HAnimSite251.children[1] = Shape253;

HAnimSegment219.children[10] = HAnimSite251;

HAnimSite HAnimSite254 = createNode("HAnimSite");
HAnimSite254.DEF = "hanim_sellion_pt";
HAnimSite254.name = "sellion_pt";
HAnimSite254.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor255 = createNode("TouchSensor");
TouchSensor255.description = "HAnimSite sellion_pt";
HAnimSite254.children = new MFNode();

HAnimSite254.children[0] = TouchSensor255;

Shape Shape256 = createNode("Shape");
Shape256.USE = "HAnimSiteShape";
HAnimSite254.children[1] = Shape256;

HAnimSegment219.children[11] = HAnimSite254;

HAnimSite HAnimSite257 = createNode("HAnimSite");
HAnimSite257.DEF = "hanim_skull_vertex_pt";
HAnimSite257.name = "skull_vertex_pt";
HAnimSite257.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor258 = createNode("TouchSensor");
TouchSensor258.description = "HAnimSite skull_vertex_pt";
HAnimSite257.children = new MFNode();

HAnimSite257.children[0] = TouchSensor258;

Shape Shape259 = createNode("Shape");
Shape259.USE = "HAnimSiteShape";
HAnimSite257.children[1] = Shape259;

HAnimSegment219.children[12] = HAnimSite257;

Shape Shape260 = createNode("Shape");
LineSet LineSet261 = createNode("LineSet");
LineSet261.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA262 = createNode("ColorRGBA");
ColorRGBA262.USE = "HAnimSegmentLineColorRGBA";
LineSet261.color = ColorRGBA262;

Coordinate Coordinate263 = createNode("Coordinate");
Coordinate263.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.2029,1.4376,-0.0387]);
LineSet261.coord = Coordinate263;

Shape260.geometry = LineSet261;

HAnimSegment219.children[13] = Shape260;

HAnimSite HAnimSite264 = createNode("HAnimSite");
HAnimSite264.DEF = "hanim_l_bideltoid_pt";
HAnimSite264.name = "l_bideltoid_pt";
TouchSensor TouchSensor265 = createNode("TouchSensor");
TouchSensor265.description = "HAnimSite l_bideltoid_pt";
HAnimSite264.children = new MFNode();

HAnimSite264.children[0] = TouchSensor265;

Shape Shape266 = createNode("Shape");
Shape266.USE = "HAnimSiteShape";
HAnimSite264.children[1] = Shape266;

HAnimSegment219.children[14] = HAnimSite264;

HAnimSite HAnimSite267 = createNode("HAnimSite");
HAnimSite267.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite267.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite267.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor268 = createNode("TouchSensor");
TouchSensor268.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite267.children = new MFNode();

HAnimSite267.children[0] = TouchSensor268;

Shape Shape269 = createNode("Shape");
Shape269.USE = "HAnimSiteShape";
HAnimSite267.children[1] = Shape269;

HAnimSegment219.children[15] = HAnimSite267;

Shape Shape270 = createNode("Shape");
LineSet LineSet271 = createNode("LineSet");
LineSet271.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA272 = createNode("ColorRGBA");
ColorRGBA272.USE = "HAnimSegmentLineColorRGBA";
LineSet271.color = ColorRGBA272;

Coordinate Coordinate273 = createNode("Coordinate");
Coordinate273.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,-0.1907,1.4407,-0.0325]);
LineSet271.coord = Coordinate273;

Shape270.geometry = LineSet271;

HAnimSegment219.children[16] = Shape270;

HAnimSite HAnimSite274 = createNode("HAnimSite");
HAnimSite274.DEF = "hanim_r_bideltoid_pt";
HAnimSite274.name = "r_bideltoid_pt";
TouchSensor TouchSensor275 = createNode("TouchSensor");
TouchSensor275.description = "HAnimSite r_bideltoid_pt";
HAnimSite274.children = new MFNode();

HAnimSite274.children[0] = TouchSensor275;

Shape Shape276 = createNode("Shape");
Shape276.USE = "HAnimSiteShape";
HAnimSite274.children[1] = Shape276;

HAnimSegment219.children[17] = HAnimSite274;

HAnimSite HAnimSite277 = createNode("HAnimSite");
HAnimSite277.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite277.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite277.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor278 = createNode("TouchSensor");
TouchSensor278.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite277.children = new MFNode();

HAnimSite277.children[0] = TouchSensor278;

Shape Shape279 = createNode("Shape");
Shape279.USE = "HAnimSiteShape";
HAnimSite277.children[1] = Shape279;

HAnimSegment219.children[18] = HAnimSite277;

HAnimJoint218.children = new MFNode();

HAnimJoint218.children[0] = HAnimSegment219;

HAnimJoint HAnimJoint280 = createNode("HAnimJoint");
HAnimJoint280.DEF = "hanim_skullbase";
HAnimJoint280.name = "skullbase";
HAnimJoint280.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint218.children[1] = HAnimJoint280;

HAnimJoint HAnimJoint281 = createNode("HAnimJoint");
HAnimJoint281.DEF = "hanim_l_shoulder";
HAnimJoint281.name = "l_shoulder";
HAnimJoint281.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment282 = createNode("HAnimSegment");
HAnimSegment282.DEF = "hanim_l_upperarm";
HAnimSegment282.name = "l_upperarm";
Transform Transform283 = createNode("Transform");
Transform283.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Transform Transform284 = createNode("Transform");
Shape Shape285 = createNode("Shape");
Shape285.USE = "HAnimJointShape";
Transform284.child = new undefined();

Transform284.child[0] = Shape285;

Transform283.children = new MFNode();

Transform283.children[0] = Transform284;

HAnimSegment282.children = new MFNode();

HAnimSegment282.children[0] = Transform283;

Shape Shape286 = createNode("Shape");
LineSet LineSet287 = createNode("LineSet");
LineSet287.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA288 = createNode("ColorRGBA");
ColorRGBA288.USE = "HAnimSegmentLineColorRGBA";
LineSet287.color = ColorRGBA288;

Coordinate Coordinate289 = createNode("Coordinate");
Coordinate289.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet287.coord = Coordinate289;

Shape286.geometry = LineSet287;

HAnimSegment282.children[1] = Shape286;

HAnimSite HAnimSite290 = createNode("HAnimSite");
HAnimSite290.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite290.name = "l_humeral_medial_epicondyles_pt";
HAnimSite290.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor291 = createNode("TouchSensor");
TouchSensor291.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite290.children = new MFNode();

HAnimSite290.children[0] = TouchSensor291;

Shape Shape292 = createNode("Shape");
Shape292.USE = "HAnimSiteShape";
HAnimSite290.children[1] = Shape292;

HAnimSegment282.children[2] = HAnimSite290;

HAnimSite HAnimSite293 = createNode("HAnimSite");
HAnimSite293.DEF = "hanim_l_olecranon_pt";
HAnimSite293.name = "l_olecranon_pt";
HAnimSite293.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor294 = createNode("TouchSensor");
TouchSensor294.description = "HAnimSite l_olecranon_pt";
HAnimSite293.children = new MFNode();

HAnimSite293.children[0] = TouchSensor294;

Shape Shape295 = createNode("Shape");
Shape295.USE = "HAnimSiteShape";
HAnimSite293.children[1] = Shape295;

HAnimSegment282.children[3] = HAnimSite293;

HAnimSite HAnimSite296 = createNode("HAnimSite");
HAnimSite296.DEF = "hanim_l_radial_styloid_pt";
HAnimSite296.name = "l_radial_styloid_pt";
HAnimSite296.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor297 = createNode("TouchSensor");
TouchSensor297.description = "HAnimSite l_radial_styloid_pt";
HAnimSite296.children = new MFNode();

HAnimSite296.children[0] = TouchSensor297;

Shape Shape298 = createNode("Shape");
Shape298.USE = "HAnimSiteShape";
HAnimSite296.children[1] = Shape298;

HAnimSegment282.children[4] = HAnimSite296;

HAnimSite HAnimSite299 = createNode("HAnimSite");
HAnimSite299.DEF = "hanim_l_radiale_pt";
HAnimSite299.name = "l_radiale_pt";
HAnimSite299.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor300 = createNode("TouchSensor");
TouchSensor300.description = "HAnimSite l_radiale_pt";
HAnimSite299.children = new MFNode();

HAnimSite299.children[0] = TouchSensor300;

Shape Shape301 = createNode("Shape");
Shape301.USE = "HAnimSiteShape";
HAnimSite299.children[1] = Shape301;

HAnimSegment282.children[5] = HAnimSite299;

HAnimJoint281.children = new MFNode();

HAnimJoint281.children[0] = HAnimSegment282;

HAnimJoint HAnimJoint302 = createNode("HAnimJoint");
HAnimJoint302.DEF = "hanim_l_elbow";
HAnimJoint302.name = "l_elbow";
HAnimJoint302.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment303 = createNode("HAnimSegment");
HAnimSegment303.DEF = "hanim_l_forearm";
HAnimSegment303.name = "l_forearm";
Transform Transform304 = createNode("Transform");
Transform304.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform Transform305 = createNode("Transform");
Shape Shape306 = createNode("Shape");
Shape306.USE = "HAnimJointShape";
Transform305.child = new undefined();

Transform305.child[0] = Shape306;

Transform304.children = new MFNode();

Transform304.children[0] = Transform305;

HAnimSegment303.children = new MFNode();

HAnimSegment303.children[0] = Transform304;

Shape Shape307 = createNode("Shape");
LineSet LineSet308 = createNode("LineSet");
LineSet308.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA309 = createNode("ColorRGBA");
ColorRGBA309.USE = "HAnimSegmentLineColorRGBA";
LineSet308.color = ColorRGBA309;

Coordinate Coordinate310 = createNode("Coordinate");
Coordinate310.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet308.coord = Coordinate310;

Shape307.geometry = LineSet308;

HAnimSegment303.children[1] = Shape307;

HAnimSite HAnimSite311 = createNode("HAnimSite");
HAnimSite311.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite311.name = "l_ulnar_styloid_pt";
HAnimSite311.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor312 = createNode("TouchSensor");
TouchSensor312.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite311.children = new MFNode();

HAnimSite311.children[0] = TouchSensor312;

Shape Shape313 = createNode("Shape");
Shape313.USE = "HAnimSiteShape";
HAnimSite311.children[1] = Shape313;

HAnimSegment303.children[2] = HAnimSite311;

HAnimJoint302.children = new MFNode();

HAnimJoint302.children[0] = HAnimSegment303;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.DEF = "hanim_l_radiocarpal";
HAnimJoint314.name = "l_radiocarpal";
HAnimJoint314.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimJoint302.children[1] = HAnimJoint314;

HAnimJoint281.children[1] = HAnimJoint302;

HAnimJoint218.children[2] = HAnimJoint281;

HAnimJoint HAnimJoint315 = createNode("HAnimJoint");
HAnimJoint315.DEF = "hanim_r_shoulder";
HAnimJoint315.name = "r_shoulder";
HAnimJoint315.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimSegment HAnimSegment316 = createNode("HAnimSegment");
HAnimSegment316.DEF = "hanim_r_upperarm";
HAnimSegment316.name = "r_upperarm";
Transform Transform317 = createNode("Transform");
Transform317.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform Transform318 = createNode("Transform");
Shape Shape319 = createNode("Shape");
Shape319.USE = "HAnimJointShape";
Transform318.child = new undefined();

Transform318.child[0] = Shape319;

Transform317.children = new MFNode();

Transform317.children[0] = Transform318;

HAnimSegment316.children = new MFNode();

HAnimSegment316.children[0] = Transform317;

Shape Shape320 = createNode("Shape");
LineSet LineSet321 = createNode("LineSet");
LineSet321.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA322 = createNode("ColorRGBA");
ColorRGBA322.USE = "HAnimSegmentLineColorRGBA";
LineSet321.color = ColorRGBA322;

Coordinate Coordinate323 = createNode("Coordinate");
Coordinate323.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet321.coord = Coordinate323;

Shape320.geometry = LineSet321;

HAnimSegment316.children[1] = Shape320;

HAnimSite HAnimSite324 = createNode("HAnimSite");
HAnimSite324.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite324.name = "r_humeral_medial_epicondyles_pt";
HAnimSite324.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor325 = createNode("TouchSensor");
TouchSensor325.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite324.children = new MFNode();

HAnimSite324.children[0] = TouchSensor325;

Shape Shape326 = createNode("Shape");
Shape326.USE = "HAnimSiteShape";
HAnimSite324.children[1] = Shape326;

HAnimSegment316.children[2] = HAnimSite324;

HAnimSite HAnimSite327 = createNode("HAnimSite");
HAnimSite327.DEF = "hanim_r_olecranon_pt";
HAnimSite327.name = "r_olecranon_pt";
HAnimSite327.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor328 = createNode("TouchSensor");
TouchSensor328.description = "HAnimSite r_olecranon_pt";
HAnimSite327.children = new MFNode();

HAnimSite327.children[0] = TouchSensor328;

Shape Shape329 = createNode("Shape");
Shape329.USE = "HAnimSiteShape";
HAnimSite327.children[1] = Shape329;

HAnimSegment316.children[3] = HAnimSite327;

HAnimSite HAnimSite330 = createNode("HAnimSite");
HAnimSite330.DEF = "hanim_r_radial_styloid_pt";
HAnimSite330.name = "r_radial_styloid_pt";
HAnimSite330.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor331 = createNode("TouchSensor");
TouchSensor331.description = "HAnimSite r_radial_styloid_pt";
HAnimSite330.children = new MFNode();

HAnimSite330.children[0] = TouchSensor331;

Shape Shape332 = createNode("Shape");
Shape332.USE = "HAnimSiteShape";
HAnimSite330.children[1] = Shape332;

HAnimSegment316.children[4] = HAnimSite330;

HAnimSite HAnimSite333 = createNode("HAnimSite");
HAnimSite333.DEF = "hanim_r_radiale_pt";
HAnimSite333.name = "r_radiale_pt";
HAnimSite333.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor334 = createNode("TouchSensor");
TouchSensor334.description = "HAnimSite r_radiale_pt";
HAnimSite333.children = new MFNode();

HAnimSite333.children[0] = TouchSensor334;

Shape Shape335 = createNode("Shape");
Shape335.USE = "HAnimSiteShape";
HAnimSite333.children[1] = Shape335;

HAnimSegment316.children[5] = HAnimSite333;

HAnimJoint315.children = new MFNode();

HAnimJoint315.children[0] = HAnimSegment316;

HAnimJoint HAnimJoint336 = createNode("HAnimJoint");
HAnimJoint336.DEF = "hanim_r_elbow";
HAnimJoint336.name = "r_elbow";
HAnimJoint336.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimSegment HAnimSegment337 = createNode("HAnimSegment");
HAnimSegment337.DEF = "hanim_r_forearm";
HAnimSegment337.name = "r_forearm";
Transform Transform338 = createNode("Transform");
Transform338.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform Transform339 = createNode("Transform");
Shape Shape340 = createNode("Shape");
Shape340.USE = "HAnimJointShape";
Transform339.child = new undefined();

Transform339.child[0] = Shape340;

Transform338.children = new MFNode();

Transform338.children[0] = Transform339;

HAnimSegment337.children = new MFNode();

HAnimSegment337.children[0] = Transform338;

Shape Shape341 = createNode("Shape");
LineSet LineSet342 = createNode("LineSet");
LineSet342.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA343 = createNode("ColorRGBA");
ColorRGBA343.USE = "HAnimSegmentLineColorRGBA";
LineSet342.color = ColorRGBA343;

Coordinate Coordinate344 = createNode("Coordinate");
Coordinate344.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet342.coord = Coordinate344;

Shape341.geometry = LineSet342;

HAnimSegment337.children[1] = Shape341;

HAnimSite HAnimSite345 = createNode("HAnimSite");
HAnimSite345.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite345.name = "r_ulnar_styloid_pt";
HAnimSite345.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor346 = createNode("TouchSensor");
TouchSensor346.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite345.children = new MFNode();

HAnimSite345.children[0] = TouchSensor346;

Shape Shape347 = createNode("Shape");
Shape347.USE = "HAnimSiteShape";
HAnimSite345.children[1] = Shape347;

HAnimSegment337.children[2] = HAnimSite345;

HAnimJoint336.children = new MFNode();

HAnimJoint336.children[0] = HAnimSegment337;

HAnimJoint HAnimJoint348 = createNode("HAnimJoint");
HAnimJoint348.DEF = "hanim_r_radiocarpal";
HAnimJoint348.name = "r_radiocarpal";
HAnimJoint348.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimJoint336.children[1] = HAnimJoint348;

HAnimJoint315.children[1] = HAnimJoint336;

HAnimJoint218.children[3] = HAnimJoint315;

HAnimJoint43.children[2] = HAnimJoint218;

HAnimHumanoid42.joints = new MFNode();

HAnimHumanoid42.joints[0] = HAnimJoint43;

HAnimSite HAnimSite349 = createNode("HAnimSite");
HAnimSite349.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid42.viewpoints[1] = HAnimSite349;

HAnimSite HAnimSite350 = createNode("HAnimSite");
HAnimSite350.USE = "hanim_crotch_pt";
HAnimHumanoid42.viewpoints[2] = HAnimSite350;

HAnimSite HAnimSite351 = createNode("HAnimSite");
HAnimSite351.USE = "hanim_l_asis_pt";
HAnimHumanoid42.viewpoints[3] = HAnimSite351;

HAnimSite HAnimSite352 = createNode("HAnimSite");
HAnimSite352.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid42.viewpoints[4] = HAnimSite352;

HAnimSite HAnimSite353 = createNode("HAnimSite");
HAnimSite353.USE = "hanim_l_psis_pt";
HAnimHumanoid42.viewpoints[5] = HAnimSite353;

HAnimSite HAnimSite354 = createNode("HAnimSite");
HAnimSite354.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid42.viewpoints[6] = HAnimSite354;

HAnimSite HAnimSite355 = createNode("HAnimSite");
HAnimSite355.USE = "hanim_r_asis_pt";
HAnimHumanoid42.viewpoints[7] = HAnimSite355;

HAnimSite HAnimSite356 = createNode("HAnimSite");
HAnimSite356.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid42.viewpoints[8] = HAnimSite356;

HAnimSite HAnimSite357 = createNode("HAnimSite");
HAnimSite357.USE = "hanim_r_psis_pt";
HAnimHumanoid42.viewpoints[9] = HAnimSite357;

HAnimSite HAnimSite358 = createNode("HAnimSite");
HAnimSite358.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid42.viewpoints[10] = HAnimSite358;

HAnimSite HAnimSite359 = createNode("HAnimSite");
HAnimSite359.USE = "hanim_navel_pt";
HAnimHumanoid42.viewpoints[11] = HAnimSite359;

HAnimSite HAnimSite360 = createNode("HAnimSite");
HAnimSite360.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid42.viewpoints[12] = HAnimSite360;

HAnimSite HAnimSite361 = createNode("HAnimSite");
HAnimSite361.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid42.viewpoints[13] = HAnimSite361;

HAnimSite HAnimSite362 = createNode("HAnimSite");
HAnimSite362.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[14] = HAnimSite362;

HAnimSite HAnimSite363 = createNode("HAnimSite");
HAnimSite363.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[15] = HAnimSite363;

HAnimSite HAnimSite364 = createNode("HAnimSite");
HAnimSite364.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid42.viewpoints[16] = HAnimSite364;

HAnimSite HAnimSite365 = createNode("HAnimSite");
HAnimSite365.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid42.viewpoints[17] = HAnimSite365;

HAnimSite HAnimSite366 = createNode("HAnimSite");
HAnimSite366.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[18] = HAnimSite366;

HAnimSite HAnimSite367 = createNode("HAnimSite");
HAnimSite367.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[19] = HAnimSite367;

HAnimSite HAnimSite368 = createNode("HAnimSite");
HAnimSite368.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid42.viewpoints[20] = HAnimSite368;

HAnimSite HAnimSite369 = createNode("HAnimSite");
HAnimSite369.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid42.viewpoints[21] = HAnimSite369;

HAnimSite HAnimSite370 = createNode("HAnimSite");
HAnimSite370.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[22] = HAnimSite370;

HAnimSite HAnimSite371 = createNode("HAnimSite");
HAnimSite371.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[23] = HAnimSite371;

HAnimSite HAnimSite372 = createNode("HAnimSite");
HAnimSite372.USE = "hanim_l_tibiale_pt";
HAnimHumanoid42.viewpoints[24] = HAnimSite372;

HAnimSite HAnimSite373 = createNode("HAnimSite");
HAnimSite373.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[25] = HAnimSite373;

HAnimSite HAnimSite374 = createNode("HAnimSite");
HAnimSite374.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid42.viewpoints[26] = HAnimSite374;

HAnimSite HAnimSite375 = createNode("HAnimSite");
HAnimSite375.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[27] = HAnimSite375;

HAnimSite HAnimSite376 = createNode("HAnimSite");
HAnimSite376.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[28] = HAnimSite376;

HAnimSite HAnimSite377 = createNode("HAnimSite");
HAnimSite377.USE = "hanim_r_tibiale_pt";
HAnimHumanoid42.viewpoints[29] = HAnimSite377;

HAnimSite HAnimSite378 = createNode("HAnimSite");
HAnimSite378.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[30] = HAnimSite378;

HAnimSite HAnimSite379 = createNode("HAnimSite");
HAnimSite379.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid42.viewpoints[31] = HAnimSite379;

HAnimSite HAnimSite380 = createNode("HAnimSite");
HAnimSite380.USE = "hanim_glabella_pt";
HAnimHumanoid42.viewpoints[32] = HAnimSite380;

HAnimSite HAnimSite381 = createNode("HAnimSite");
HAnimSite381.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid42.viewpoints[33] = HAnimSite381;

HAnimSite HAnimSite382 = createNode("HAnimSite");
HAnimSite382.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid42.viewpoints[34] = HAnimSite382;

HAnimSite HAnimSite383 = createNode("HAnimSite");
HAnimSite383.USE = "hanim_l_tragion_pt";
HAnimHumanoid42.viewpoints[35] = HAnimSite383;

HAnimSite HAnimSite384 = createNode("HAnimSite");
HAnimSite384.USE = "hanim_nuchale_pt";
HAnimHumanoid42.viewpoints[36] = HAnimSite384;

HAnimSite HAnimSite385 = createNode("HAnimSite");
HAnimSite385.USE = "hanim_opisthocranion_pt";
HAnimHumanoid42.viewpoints[37] = HAnimSite385;

HAnimSite HAnimSite386 = createNode("HAnimSite");
HAnimSite386.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid42.viewpoints[38] = HAnimSite386;

HAnimSite HAnimSite387 = createNode("HAnimSite");
HAnimSite387.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid42.viewpoints[39] = HAnimSite387;

HAnimSite HAnimSite388 = createNode("HAnimSite");
HAnimSite388.USE = "hanim_r_tragion_pt";
HAnimHumanoid42.viewpoints[40] = HAnimSite388;

HAnimSite HAnimSite389 = createNode("HAnimSite");
HAnimSite389.USE = "hanim_sellion_pt";
HAnimHumanoid42.viewpoints[41] = HAnimSite389;

HAnimSite HAnimSite390 = createNode("HAnimSite");
HAnimSite390.USE = "hanim_skull_vertex_pt";
HAnimHumanoid42.viewpoints[42] = HAnimSite390;

HAnimSite HAnimSite391 = createNode("HAnimSite");
HAnimSite391.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid42.viewpoints[43] = HAnimSite391;

HAnimSite HAnimSite392 = createNode("HAnimSite");
HAnimSite392.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[44] = HAnimSite392;

HAnimSite HAnimSite393 = createNode("HAnimSite");
HAnimSite393.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid42.viewpoints[45] = HAnimSite393;

HAnimSite HAnimSite394 = createNode("HAnimSite");
HAnimSite394.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[46] = HAnimSite394;

HAnimSite HAnimSite395 = createNode("HAnimSite");
HAnimSite395.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[47] = HAnimSite395;

HAnimSite HAnimSite396 = createNode("HAnimSite");
HAnimSite396.USE = "hanim_l_olecranon_pt";
HAnimHumanoid42.viewpoints[48] = HAnimSite396;

HAnimSite HAnimSite397 = createNode("HAnimSite");
HAnimSite397.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid42.viewpoints[49] = HAnimSite397;

HAnimSite HAnimSite398 = createNode("HAnimSite");
HAnimSite398.USE = "hanim_l_radiale_pt";
HAnimHumanoid42.viewpoints[50] = HAnimSite398;

HAnimSite HAnimSite399 = createNode("HAnimSite");
HAnimSite399.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[51] = HAnimSite399;

HAnimSite HAnimSite400 = createNode("HAnimSite");
HAnimSite400.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[52] = HAnimSite400;

HAnimSite HAnimSite401 = createNode("HAnimSite");
HAnimSite401.USE = "hanim_r_olecranon_pt";
HAnimHumanoid42.viewpoints[53] = HAnimSite401;

HAnimSite HAnimSite402 = createNode("HAnimSite");
HAnimSite402.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid42.viewpoints[54] = HAnimSite402;

HAnimSite HAnimSite403 = createNode("HAnimSite");
HAnimSite403.USE = "hanim_r_radiale_pt";
HAnimHumanoid42.viewpoints[55] = HAnimSite403;

HAnimSite HAnimSite404 = createNode("HAnimSite");
HAnimSite404.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[56] = HAnimSite404;

HAnimSegment HAnimSegment405 = createNode("HAnimSegment");
HAnimSegment405.USE = "hanim_sacrum";
HAnimHumanoid42.segments[57] = HAnimSegment405;

HAnimSegment HAnimSegment406 = createNode("HAnimSegment");
HAnimSegment406.USE = "hanim_pelvis";
HAnimHumanoid42.segments[58] = HAnimSegment406;

HAnimSegment HAnimSegment407 = createNode("HAnimSegment");
HAnimSegment407.USE = "hanim_l_thigh";
HAnimHumanoid42.segments[59] = HAnimSegment407;

HAnimSegment HAnimSegment408 = createNode("HAnimSegment");
HAnimSegment408.USE = "hanim_l_calf";
HAnimHumanoid42.segments[60] = HAnimSegment408;

HAnimSegment HAnimSegment409 = createNode("HAnimSegment");
HAnimSegment409.USE = "hanim_l_talus";
HAnimHumanoid42.segments[61] = HAnimSegment409;

HAnimSegment HAnimSegment410 = createNode("HAnimSegment");
HAnimSegment410.USE = "hanim_r_thigh";
HAnimHumanoid42.segments[62] = HAnimSegment410;

HAnimSegment HAnimSegment411 = createNode("HAnimSegment");
HAnimSegment411.USE = "hanim_r_calf";
HAnimHumanoid42.segments[63] = HAnimSegment411;

HAnimSegment HAnimSegment412 = createNode("HAnimSegment");
HAnimSegment412.USE = "hanim_r_talus";
HAnimHumanoid42.segments[64] = HAnimSegment412;

HAnimSegment HAnimSegment413 = createNode("HAnimSegment");
HAnimSegment413.USE = "hanim_l5";
HAnimHumanoid42.segments[65] = HAnimSegment413;

HAnimSegment HAnimSegment414 = createNode("HAnimSegment");
HAnimSegment414.USE = "hanim_l_upperarm";
HAnimHumanoid42.segments[66] = HAnimSegment414;

HAnimSegment HAnimSegment415 = createNode("HAnimSegment");
HAnimSegment415.USE = "hanim_l_forearm";
HAnimHumanoid42.segments[67] = HAnimSegment415;

HAnimSegment HAnimSegment416 = createNode("HAnimSegment");
HAnimSegment416.USE = "hanim_r_upperarm";
HAnimHumanoid42.segments[68] = HAnimSegment416;

HAnimSegment HAnimSegment417 = createNode("HAnimSegment");
HAnimSegment417.USE = "hanim_r_forearm";
HAnimHumanoid42.segments[69] = HAnimSegment417;

HAnimJoint HAnimJoint418 = createNode("HAnimJoint");
HAnimJoint418.USE = "hanim_humanoid_root";
HAnimHumanoid42.joints[70] = HAnimJoint418;

HAnimJoint HAnimJoint419 = createNode("HAnimJoint");
HAnimJoint419.USE = "hanim_sacroiliac";
HAnimHumanoid42.joints[71] = HAnimJoint419;

HAnimJoint HAnimJoint420 = createNode("HAnimJoint");
HAnimJoint420.USE = "hanim_l_hip";
HAnimHumanoid42.joints[72] = HAnimJoint420;

HAnimJoint HAnimJoint421 = createNode("HAnimJoint");
HAnimJoint421.USE = "hanim_l_knee";
HAnimHumanoid42.joints[73] = HAnimJoint421;

HAnimJoint HAnimJoint422 = createNode("HAnimJoint");
HAnimJoint422.USE = "hanim_l_talocrural";
HAnimHumanoid42.joints[74] = HAnimJoint422;

HAnimJoint HAnimJoint423 = createNode("HAnimJoint");
HAnimJoint423.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid42.joints[75] = HAnimJoint423;

HAnimJoint HAnimJoint424 = createNode("HAnimJoint");
HAnimJoint424.USE = "hanim_r_hip";
HAnimHumanoid42.joints[76] = HAnimJoint424;

HAnimJoint HAnimJoint425 = createNode("HAnimJoint");
HAnimJoint425.USE = "hanim_r_knee";
HAnimHumanoid42.joints[77] = HAnimJoint425;

HAnimJoint HAnimJoint426 = createNode("HAnimJoint");
HAnimJoint426.USE = "hanim_r_talocrural";
HAnimHumanoid42.joints[78] = HAnimJoint426;

HAnimJoint HAnimJoint427 = createNode("HAnimJoint");
HAnimJoint427.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid42.joints[79] = HAnimJoint427;

HAnimJoint HAnimJoint428 = createNode("HAnimJoint");
HAnimJoint428.USE = "hanim_vl5";
HAnimHumanoid42.joints[80] = HAnimJoint428;

HAnimJoint HAnimJoint429 = createNode("HAnimJoint");
HAnimJoint429.USE = "hanim_skullbase";
HAnimHumanoid42.joints[81] = HAnimJoint429;

HAnimJoint HAnimJoint430 = createNode("HAnimJoint");
HAnimJoint430.USE = "hanim_l_shoulder";
HAnimHumanoid42.joints[82] = HAnimJoint430;

HAnimJoint HAnimJoint431 = createNode("HAnimJoint");
HAnimJoint431.USE = "hanim_l_elbow";
HAnimHumanoid42.joints[83] = HAnimJoint431;

HAnimJoint HAnimJoint432 = createNode("HAnimJoint");
HAnimJoint432.USE = "hanim_l_radiocarpal";
HAnimHumanoid42.joints[84] = HAnimJoint432;

HAnimJoint HAnimJoint433 = createNode("HAnimJoint");
HAnimJoint433.USE = "hanim_r_shoulder";
HAnimHumanoid42.joints[85] = HAnimJoint433;

HAnimJoint HAnimJoint434 = createNode("HAnimJoint");
HAnimJoint434.USE = "hanim_r_elbow";
HAnimHumanoid42.joints[86] = HAnimJoint434;

HAnimJoint HAnimJoint435 = createNode("HAnimJoint");
HAnimJoint435.USE = "hanim_r_radiocarpal";
HAnimHumanoid42.joints[87] = HAnimJoint435;

Coordinate Coordinate436 = createNode("Coordinate");
Coordinate436.DEF = "TheSkinCoord";
Coordinate436.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
HAnimHumanoid42.skinCoord = Coordinate436;

Shape Shape437 = createNode("Shape");
Shape437.DEF = "SkinShape";
Appearance Appearance438 = createNode("Appearance");
Appearance438.DEF = "SkinAppearance";
Material Material439 = createNode("Material");
Material439.DEF = "SkinMaterial";
Material439.ambientIntensity = 0.6;
Material439.diffuseColor = new SFColor(new float[1,1,1]);
Material439.shininess = 0.6;
Material439.transparency = 0.2;
Appearance438.material = Material439;

ImageTexture ImageTexture440 = createNode("ImageTexture");
ImageTexture440.DEF = "zBlueSpiralBkg2";
ImageTexture440.description = "Blue Spiral Pattern";
ImageTexture440.url = new MFString(new java.lang.String["./data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
Appearance438.texture = ImageTexture440;

Shape437.appearance = Appearance438;

IndexedFaceSet IndexedFaceSet441 = createNode("IndexedFaceSet");
IndexedFaceSet441.creaseAngle = 3.1;
IndexedFaceSet441.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
Color Color442 = createNode("Color");
Color442.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet441.color = Color442;

Coordinate Coordinate443 = createNode("Coordinate");
Coordinate443.USE = "TheSkinCoord";
IndexedFaceSet441.coord = Coordinate443;

Shape437.geometry = IndexedFaceSet441;

HAnimHumanoid42.skin[88] = Shape437;

children[4] = HAnimHumanoid42;

}
