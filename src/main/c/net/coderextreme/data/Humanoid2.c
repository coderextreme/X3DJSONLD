#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "Humanoid2.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "identifier";
meta3.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid2.x3d";
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
Coordinate173.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.08,0.0175,-0.0608]);
LineSet171.coord = Coordinate173;

Shape170.geometry = LineSet171;

HAnimSegment166.children[1] = Shape170;

HAnimJoint165.children = new MFNode();

HAnimJoint165.children[0] = HAnimSegment166;

HAnimJoint HAnimJoint174 = createNode("HAnimJoint");
HAnimJoint174.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint174.name = "l_tarsometatarsal_2";
HAnimJoint174.center = new SFVec3f(new float[0.08,0.0175,-0.0608]);
HAnimSegment HAnimSegment175 = createNode("HAnimSegment");
HAnimSegment175.DEF = "hanim_l_metatarsal_1";
HAnimSegment175.name = "l_metatarsal_2";
Transform Transform176 = createNode("Transform");
Transform176.translation = new SFVec3f(new float[0.08,0.0175,-0.0608]);
Transform Transform177 = createNode("Transform");
Shape Shape178 = createNode("Shape");
Shape178.USE = "HAnimJointShape";
Transform177.child = new undefined();

Transform177.child[0] = Shape178;

Transform176.children = new MFNode();

Transform176.children[0] = Transform177;

HAnimSegment175.children = new MFNode();

HAnimSegment175.children[0] = Transform176;

Shape Shape179 = createNode("Shape");
LineSet LineSet180 = createNode("LineSet");
LineSet180.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA181 = createNode("ColorRGBA");
ColorRGBA181.USE = "HAnimSegmentLineColorRGBA";
LineSet180.color = ColorRGBA181;

Coordinate Coordinate182 = createNode("Coordinate");
Coordinate182.point = new MFVec3f(new float[0.08,0.0175,-0.0608,0.0824,0.0064,-0.004]);
LineSet180.coord = Coordinate182;

Shape179.geometry = LineSet180;

HAnimSegment175.children[1] = Shape179;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimSegment175;

HAnimJoint HAnimJoint183 = createNode("HAnimJoint");
HAnimJoint183.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint183.name = "l_metatarsophalangeal_2";
HAnimJoint183.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimSegment HAnimSegment184 = createNode("HAnimSegment");
HAnimSegment184.DEF = "hanim_l_tarsal_proximal_phalanx_1";
HAnimSegment184.name = "l_tarsal_proximal_phalanx_2";
Transform Transform185 = createNode("Transform");
Transform185.translation = new SFVec3f(new float[0.0824,0.0064,-0.004]);
Transform Transform186 = createNode("Transform");
Shape Shape187 = createNode("Shape");
Shape187.USE = "HAnimJointShape";
Transform186.child = new undefined();

Transform186.child[0] = Shape187;

Transform185.children = new MFNode();

Transform185.children[0] = Transform186;

HAnimSegment184.children = new MFNode();

HAnimSegment184.children[0] = Transform185;

Shape Shape188 = createNode("Shape");
LineSet LineSet189 = createNode("LineSet");
LineSet189.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA190 = createNode("ColorRGBA");
ColorRGBA190.USE = "HAnimSegmentLineColorRGBA";
LineSet189.color = ColorRGBA190;

Coordinate Coordinate191 = createNode("Coordinate");
Coordinate191.point = new MFVec3f(new float[0.0824,0.0064,-0.004,0.0841,0.0013,0.0216]);
LineSet189.coord = Coordinate191;

Shape188.geometry = LineSet189;

HAnimSegment184.children[1] = Shape188;

HAnimSite HAnimSite192 = createNode("HAnimSite");
HAnimSite192.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite192.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite192.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
TouchSensor TouchSensor193 = createNode("TouchSensor");
TouchSensor193.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite192.children = new MFNode();

HAnimSite192.children[0] = TouchSensor193;

Shape Shape194 = createNode("Shape");
Shape194.USE = "HAnimSiteShape";
HAnimSite192.children[1] = Shape194;

HAnimSegment184.children[2] = HAnimSite192;

HAnimJoint183.children = new MFNode();

HAnimJoint183.children[0] = HAnimSegment184;

HAnimJoint HAnimJoint195 = createNode("HAnimJoint");
HAnimJoint195.DEF = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimJoint195.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint195.center = new SFVec3f(new float[0.0841,0.0013,0.0216]);
HAnimJoint183.children[1] = HAnimJoint195;

HAnimJoint174.children[1] = HAnimJoint183;

HAnimJoint165.children[1] = HAnimJoint174;

HAnimJoint150.children[1] = HAnimJoint165;

HAnimJoint132.children[1] = HAnimJoint150;

HAnimJoint95.children[1] = HAnimJoint132;

HAnimJoint HAnimJoint196 = createNode("HAnimJoint");
HAnimJoint196.DEF = "hanim_r_hip";
HAnimJoint196.name = "r_hip";
HAnimJoint196.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimSegment HAnimSegment197 = createNode("HAnimSegment");
HAnimSegment197.DEF = "hanim_r_thigh";
HAnimSegment197.name = "r_thigh";
Transform Transform198 = createNode("Transform");
Transform198.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Transform Transform199 = createNode("Transform");
Shape Shape200 = createNode("Shape");
Shape200.USE = "HAnimJointShape";
Transform199.child = new undefined();

Transform199.child[0] = Shape200;

Transform198.children = new MFNode();

Transform198.children[0] = Transform199;

HAnimSegment197.children = new MFNode();

HAnimSegment197.children[0] = Transform198;

Shape Shape201 = createNode("Shape");
LineSet LineSet202 = createNode("LineSet");
LineSet202.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA203 = createNode("ColorRGBA");
ColorRGBA203.USE = "HAnimSegmentLineColorRGBA";
LineSet202.color = ColorRGBA203;

Coordinate Coordinate204 = createNode("Coordinate");
Coordinate204.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet202.coord = Coordinate204;

Shape201.geometry = LineSet202;

HAnimSegment197.children[1] = Shape201;

HAnimSite HAnimSite205 = createNode("HAnimSite");
HAnimSite205.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite205.name = "r_lateral_malleolus_pt";
HAnimSite205.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor206 = createNode("TouchSensor");
TouchSensor206.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite205.children = new MFNode();

HAnimSite205.children[0] = TouchSensor206;

Shape Shape207 = createNode("Shape");
Shape207.USE = "HAnimSiteShape";
HAnimSite205.children[1] = Shape207;

HAnimSegment197.children[2] = HAnimSite205;

HAnimSite HAnimSite208 = createNode("HAnimSite");
HAnimSite208.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite208.name = "r_medial_malleolus_pt";
HAnimSite208.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor209 = createNode("TouchSensor");
TouchSensor209.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite208.children = new MFNode();

HAnimSite208.children[0] = TouchSensor209;

Shape Shape210 = createNode("Shape");
Shape210.USE = "HAnimSiteShape";
HAnimSite208.children[1] = Shape210;

HAnimSegment197.children[3] = HAnimSite208;

HAnimSite HAnimSite211 = createNode("HAnimSite");
HAnimSite211.DEF = "hanim_r_tibiale_pt";
HAnimSite211.name = "r_tibiale_pt";
TouchSensor TouchSensor212 = createNode("TouchSensor");
TouchSensor212.description = "HAnimSite r_tibiale_pt";
HAnimSite211.children = new MFNode();

HAnimSite211.children[0] = TouchSensor212;

Shape Shape213 = createNode("Shape");
Shape213.USE = "HAnimSiteShape";
HAnimSite211.children[1] = Shape213;

HAnimSegment197.children[4] = HAnimSite211;

HAnimJoint196.children = new MFNode();

HAnimJoint196.children[0] = HAnimSegment197;

HAnimJoint HAnimJoint214 = createNode("HAnimJoint");
HAnimJoint214.DEF = "hanim_r_knee";
HAnimJoint214.name = "r_knee";
HAnimJoint214.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimSegment HAnimSegment215 = createNode("HAnimSegment");
HAnimSegment215.DEF = "hanim_r_calf";
HAnimSegment215.name = "r_calf";
Transform Transform216 = createNode("Transform");
Transform216.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Transform Transform217 = createNode("Transform");
Shape Shape218 = createNode("Shape");
Shape218.USE = "HAnimJointShape";
Transform217.child = new undefined();

Transform217.child[0] = Shape218;

Transform216.children = new MFNode();

Transform216.children[0] = Transform217;

HAnimSegment215.children = new MFNode();

HAnimSegment215.children[0] = Transform216;

Shape Shape219 = createNode("Shape");
LineSet LineSet220 = createNode("LineSet");
LineSet220.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA221 = createNode("ColorRGBA");
ColorRGBA221.USE = "HAnimSegmentLineColorRGBA";
LineSet220.color = ColorRGBA221;

Coordinate Coordinate222 = createNode("Coordinate");
Coordinate222.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet220.coord = Coordinate222;

Shape219.geometry = LineSet220;

HAnimSegment215.children[1] = Shape219;

HAnimSite HAnimSite223 = createNode("HAnimSite");
HAnimSite223.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite223.name = "r_calcaneus_posterior_pt";
HAnimSite223.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor224 = createNode("TouchSensor");
TouchSensor224.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite223.children = new MFNode();

HAnimSite223.children[0] = TouchSensor224;

Shape Shape225 = createNode("Shape");
Shape225.USE = "HAnimSiteShape";
HAnimSite223.children[1] = Shape225;

HAnimSegment215.children[2] = HAnimSite223;

HAnimSite HAnimSite226 = createNode("HAnimSite");
HAnimSite226.DEF = "hanim_r_sphyrion_pt";
HAnimSite226.name = "r_sphyrion_pt";
HAnimSite226.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor227 = createNode("TouchSensor");
TouchSensor227.description = "HAnimSite r_sphyrion_pt";
HAnimSite226.children = new MFNode();

HAnimSite226.children[0] = TouchSensor227;

Shape Shape228 = createNode("Shape");
Shape228.USE = "HAnimSiteShape";
HAnimSite226.children[1] = Shape228;

HAnimSegment215.children[3] = HAnimSite226;

HAnimJoint214.children = new MFNode();

HAnimJoint214.children[0] = HAnimSegment215;

HAnimJoint HAnimJoint229 = createNode("HAnimJoint");
HAnimJoint229.DEF = "hanim_r_talocrural";
HAnimJoint229.name = "r_talocrural";
HAnimJoint229.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimSegment HAnimSegment230 = createNode("HAnimSegment");
HAnimSegment230.DEF = "hanim_r_talus";
HAnimSegment230.name = "r_talus";
Transform Transform231 = createNode("Transform");
Transform231.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform231.rotation = new SFRotation(new float[1,0,0,-1.57]);
Transform231.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform Transform232 = createNode("Transform");
Shape Shape233 = createNode("Shape");
Shape233.USE = "HAnimJointShape";
Transform232.child = new undefined();

Transform232.child[0] = Shape233;

Transform231.children = new MFNode();

Transform231.children[0] = Transform232;

HAnimSegment230.children = new MFNode();

HAnimSegment230.children[0] = Transform231;

Shape Shape234 = createNode("Shape");
LineSet LineSet235 = createNode("LineSet");
LineSet235.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA236 = createNode("ColorRGBA");
ColorRGBA236.USE = "HAnimSegmentLineColorRGBA";
LineSet235.color = ColorRGBA236;

Coordinate Coordinate237 = createNode("Coordinate");
Coordinate237.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608]);
LineSet235.coord = Coordinate237;

Shape234.geometry = LineSet235;

HAnimSegment230.children[1] = Shape234;

HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

HAnimJoint HAnimJoint238 = createNode("HAnimJoint");
HAnimJoint238.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint238.name = "r_tarsometatarsal_2";
HAnimJoint238.center = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
HAnimSegment HAnimSegment239 = createNode("HAnimSegment");
HAnimSegment239.DEF = "hanim_r_metatarsal_1";
HAnimSegment239.name = "r_metatarsal_2";
Transform Transform240 = createNode("Transform");
Transform240.translation = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
Transform Transform241 = createNode("Transform");
Shape Shape242 = createNode("Shape");
Shape242.USE = "HAnimJointShape";
Transform241.child = new undefined();

Transform241.child[0] = Shape242;

Transform240.children = new MFNode();

Transform240.children[0] = Transform241;

HAnimSegment239.children = new MFNode();

HAnimSegment239.children[0] = Transform240;

Shape Shape243 = createNode("Shape");
LineSet LineSet244 = createNode("LineSet");
LineSet244.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA245 = createNode("ColorRGBA");
ColorRGBA245.USE = "HAnimSegmentLineColorRGBA";
LineSet244.color = ColorRGBA245;

Coordinate Coordinate246 = createNode("Coordinate");
Coordinate246.point = new MFVec3f(new float[-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004]);
LineSet244.coord = Coordinate246;

Shape243.geometry = LineSet244;

HAnimSegment239.children[1] = Shape243;

HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

HAnimJoint HAnimJoint247 = createNode("HAnimJoint");
HAnimJoint247.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint247.name = "r_metatarsophalangeal_2";
HAnimJoint247.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
HAnimSegment HAnimSegment248 = createNode("HAnimSegment");
HAnimSegment248.DEF = "hanim_r_tarsal_proximal_phalanx_1";
HAnimSegment248.name = "r_tarsal_proximal_phalanx_2";
Transform Transform249 = createNode("Transform");
Transform249.translation = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
Transform Transform250 = createNode("Transform");
Shape Shape251 = createNode("Shape");
Shape251.USE = "HAnimJointShape";
Transform250.child = new undefined();

Transform250.child[0] = Shape251;

Transform249.children = new MFNode();

Transform249.children[0] = Transform250;

HAnimSegment248.children = new MFNode();

HAnimSegment248.children[0] = Transform249;

Shape Shape252 = createNode("Shape");
LineSet LineSet253 = createNode("LineSet");
LineSet253.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA254 = createNode("ColorRGBA");
ColorRGBA254.USE = "HAnimSegmentLineColorRGBA";
LineSet253.color = ColorRGBA254;

Coordinate Coordinate255 = createNode("Coordinate");
Coordinate255.point = new MFVec3f(new float[-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216]);
LineSet253.coord = Coordinate255;

Shape252.geometry = LineSet253;

HAnimSegment248.children[1] = Shape252;

HAnimSite HAnimSite256 = createNode("HAnimSite");
HAnimSite256.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite256.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite256.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
TouchSensor TouchSensor257 = createNode("TouchSensor");
TouchSensor257.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite256.children = new MFNode();

HAnimSite256.children[0] = TouchSensor257;

Shape Shape258 = createNode("Shape");
Shape258.USE = "HAnimSiteShape";
HAnimSite256.children[1] = Shape258;

HAnimSegment248.children[2] = HAnimSite256;

HAnimJoint247.children = new MFNode();

HAnimJoint247.children[0] = HAnimSegment248;

HAnimJoint HAnimJoint259 = createNode("HAnimJoint");
HAnimJoint259.DEF = "hanim_r_tarsal_distal_interphalangeal_1";
HAnimJoint259.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint259.center = new SFVec3f(new float[-0.0841,0.0013,0.0216]);
HAnimJoint247.children[1] = HAnimJoint259;

HAnimJoint238.children[1] = HAnimJoint247;

HAnimJoint229.children[1] = HAnimJoint238;

HAnimJoint214.children[1] = HAnimJoint229;

HAnimJoint196.children[1] = HAnimJoint214;

HAnimJoint95.children[2] = HAnimJoint196;

HAnimJoint43.children[1] = HAnimJoint95;

HAnimJoint HAnimJoint260 = createNode("HAnimJoint");
HAnimJoint260.DEF = "hanim_vl5";
HAnimJoint260.name = "vl5";
HAnimJoint260.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimSegment HAnimSegment261 = createNode("HAnimSegment");
HAnimSegment261.DEF = "hanim_l5";
HAnimSegment261.name = "l5";
Transform Transform262 = createNode("Transform");
Transform262.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Transform Transform263 = createNode("Transform");
Shape Shape264 = createNode("Shape");
Shape264.USE = "HAnimJointShape";
Transform263.child = new undefined();

Transform263.child[0] = Shape264;

Transform262.children = new MFNode();

Transform262.children[0] = Transform263;

HAnimSegment261.children = new MFNode();

HAnimSegment261.children[0] = Transform262;

Shape Shape265 = createNode("Shape");
LineSet LineSet266 = createNode("LineSet");
LineSet266.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA267 = createNode("ColorRGBA");
ColorRGBA267.USE = "HAnimSegmentLineColorRGBA";
LineSet266.color = ColorRGBA267;

Coordinate Coordinate268 = createNode("Coordinate");
Coordinate268.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0041,1.1276,-0.0796]);
LineSet266.coord = Coordinate268;

Shape265.geometry = LineSet266;

HAnimSegment261.children[1] = Shape265;

HAnimJoint260.children = new MFNode();

HAnimJoint260.children[0] = HAnimSegment261;

HAnimJoint HAnimJoint269 = createNode("HAnimJoint");
HAnimJoint269.DEF = "hanim_vl3";
HAnimJoint269.name = "vl3";
HAnimJoint269.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimSegment HAnimSegment270 = createNode("HAnimSegment");
HAnimSegment270.DEF = "hanim_l3";
HAnimSegment270.name = "l3";
Transform Transform271 = createNode("Transform");
Transform271.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Transform Transform272 = createNode("Transform");
Shape Shape273 = createNode("Shape");
Shape273.USE = "HAnimJointShape";
Transform272.child = new undefined();

Transform272.child[0] = Shape273;

Transform271.children = new MFNode();

Transform271.children[0] = Transform272;

HAnimSegment270.children = new MFNode();

HAnimSegment270.children[0] = Transform271;

Shape Shape274 = createNode("Shape");
LineSet LineSet275 = createNode("LineSet");
LineSet275.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA276 = createNode("ColorRGBA");
ColorRGBA276.USE = "HAnimSegmentLineColorRGBA";
LineSet275.color = ColorRGBA276;

Coordinate Coordinate277 = createNode("Coordinate");
Coordinate277.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0048,1.1912,-0.0805]);
LineSet275.coord = Coordinate277;

Shape274.geometry = LineSet275;

HAnimSegment270.children[1] = Shape274;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

HAnimJoint HAnimJoint278 = createNode("HAnimJoint");
HAnimJoint278.DEF = "hanim_vl1";
HAnimJoint278.name = "vl1";
HAnimJoint278.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimSegment HAnimSegment279 = createNode("HAnimSegment");
HAnimSegment279.DEF = "hanim_l1";
HAnimSegment279.name = "l1";
Transform Transform280 = createNode("Transform");
Transform280.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Transform Transform281 = createNode("Transform");
Shape Shape282 = createNode("Shape");
Shape282.USE = "HAnimJointShape";
Transform281.child = new undefined();

Transform281.child[0] = Shape282;

Transform280.children = new MFNode();

Transform280.children[0] = Transform281;

HAnimSegment279.children = new MFNode();

HAnimSegment279.children[0] = Transform280;

Shape Shape283 = createNode("Shape");
LineSet LineSet284 = createNode("LineSet");
LineSet284.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA285 = createNode("ColorRGBA");
ColorRGBA285.USE = "HAnimSegmentLineColorRGBA";
LineSet284.color = ColorRGBA285;

Coordinate Coordinate286 = createNode("Coordinate");
Coordinate286.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0056,1.2848,-0.0822]);
LineSet284.coord = Coordinate286;

Shape283.geometry = LineSet284;

HAnimSegment279.children[1] = Shape283;

HAnimSite HAnimSite287 = createNode("HAnimSite");
HAnimSite287.DEF = "hanim_substernale_pt";
HAnimSite287.name = "substernale_pt";
HAnimSite287.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor288 = createNode("TouchSensor");
TouchSensor288.description = "HAnimSite substernale_pt";
HAnimSite287.children = new MFNode();

HAnimSite287.children[0] = TouchSensor288;

Shape Shape289 = createNode("Shape");
Shape289.USE = "HAnimSiteShape";
HAnimSite287.children[1] = Shape289;

HAnimSegment279.children[2] = HAnimSite287;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

HAnimJoint HAnimJoint290 = createNode("HAnimJoint");
HAnimJoint290.DEF = "hanim_vt10";
HAnimJoint290.name = "vt10";
HAnimJoint290.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimSegment HAnimSegment291 = createNode("HAnimSegment");
HAnimSegment291.DEF = "hanim_t10";
HAnimSegment291.name = "t10";
Transform Transform292 = createNode("Transform");
Transform292.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Transform Transform293 = createNode("Transform");
Shape Shape294 = createNode("Shape");
Shape294.USE = "HAnimJointShape";
Transform293.child = new undefined();

Transform293.child[0] = Shape294;

Transform292.children = new MFNode();

Transform292.children[0] = Transform293;

HAnimSegment291.children = new MFNode();

HAnimSegment291.children[0] = Transform292;

Shape Shape295 = createNode("Shape");
LineSet LineSet296 = createNode("LineSet");
LineSet296.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA297 = createNode("ColorRGBA");
ColorRGBA297.USE = "HAnimSegmentLineColorRGBA";
LineSet296.color = ColorRGBA297;

Coordinate Coordinate298 = createNode("Coordinate");
Coordinate298.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0059,1.3866,-0.08]);
LineSet296.coord = Coordinate298;

Shape295.geometry = LineSet296;

HAnimSegment291.children[1] = Shape295;

HAnimSite HAnimSite299 = createNode("HAnimSite");
HAnimSite299.DEF = "hanim_l_chest_midsagittal_plane_pt";
HAnimSite299.name = "l_chest_midsagittal_plane_pt";
TouchSensor TouchSensor300 = createNode("TouchSensor");
TouchSensor300.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite299.children = new MFNode();

HAnimSite299.children[0] = TouchSensor300;

Shape Shape301 = createNode("Shape");
Shape301.USE = "HAnimSiteShape";
HAnimSite299.children[1] = Shape301;

HAnimSegment291.children[2] = HAnimSite299;

HAnimSite HAnimSite302 = createNode("HAnimSite");
HAnimSite302.DEF = "hanim_mesosternale_pt";
HAnimSite302.name = "mesosternale_pt";
TouchSensor TouchSensor303 = createNode("TouchSensor");
TouchSensor303.description = "HAnimSite mesosternale_pt";
HAnimSite302.children = new MFNode();

HAnimSite302.children[0] = TouchSensor303;

Shape Shape304 = createNode("Shape");
Shape304.USE = "HAnimSiteShape";
HAnimSite302.children[1] = Shape304;

HAnimSegment291.children[3] = HAnimSite302;

HAnimSite HAnimSite305 = createNode("HAnimSite");
HAnimSite305.DEF = "hanim_r_chest_midsagittal_plane_pt";
HAnimSite305.name = "r_chest_midsagittal_plane_pt";
TouchSensor TouchSensor306 = createNode("TouchSensor");
TouchSensor306.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite305.children = new MFNode();

HAnimSite305.children[0] = TouchSensor306;

Shape Shape307 = createNode("Shape");
Shape307.USE = "HAnimSiteShape";
HAnimSite305.children[1] = Shape307;

HAnimSegment291.children[4] = HAnimSite305;

HAnimSite HAnimSite308 = createNode("HAnimSite");
HAnimSite308.DEF = "hanim_rear_center_midsagittal_plane_pt";
HAnimSite308.name = "rear_center_midsagittal_plane_pt";
TouchSensor TouchSensor309 = createNode("TouchSensor");
TouchSensor309.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite308.children = new MFNode();

HAnimSite308.children[0] = TouchSensor309;

Shape Shape310 = createNode("Shape");
Shape310.USE = "HAnimSiteShape";
HAnimSite308.children[1] = Shape310;

HAnimSegment291.children[5] = HAnimSite308;

HAnimJoint290.children = new MFNode();

HAnimJoint290.children[0] = HAnimSegment291;

HAnimJoint HAnimJoint311 = createNode("HAnimJoint");
HAnimJoint311.DEF = "hanim_vt6";
HAnimJoint311.name = "vt6";
HAnimJoint311.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimSegment HAnimSegment312 = createNode("HAnimSegment");
HAnimSegment312.DEF = "hanim_t6";
HAnimSegment312.name = "t6";
Transform Transform313 = createNode("Transform");
Transform313.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
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
Coordinate319.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.0065,1.4951,-0.0387]);
LineSet317.coord = Coordinate319;

Shape316.geometry = LineSet317;

HAnimSegment312.children[1] = Shape316;

HAnimSite HAnimSite320 = createNode("HAnimSite");
HAnimSite320.DEF = "hanim_cervicale_pt";
HAnimSite320.name = "cervicale_pt";
HAnimSite320.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor321 = createNode("TouchSensor");
TouchSensor321.description = "HAnimSite cervicale_pt";
HAnimSite320.children = new MFNode();

HAnimSite320.children[0] = TouchSensor321;

Shape Shape322 = createNode("Shape");
Shape322.USE = "HAnimSiteShape";
HAnimSite320.children[1] = Shape322;

HAnimSegment312.children[2] = HAnimSite320;

HAnimSite HAnimSite323 = createNode("HAnimSite");
HAnimSite323.DEF = "hanim_suprasternale_pt";
HAnimSite323.name = "suprasternale_pt";
HAnimSite323.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor324 = createNode("TouchSensor");
TouchSensor324.description = "HAnimSite suprasternale_pt";
HAnimSite323.children = new MFNode();

HAnimSite323.children[0] = TouchSensor324;

Shape Shape325 = createNode("Shape");
Shape325.USE = "HAnimSiteShape";
HAnimSite323.children[1] = Shape325;

HAnimSegment312.children[3] = HAnimSite323;

HAnimJoint311.children = new MFNode();

HAnimJoint311.children[0] = HAnimSegment312;

HAnimJoint HAnimJoint326 = createNode("HAnimJoint");
HAnimJoint326.DEF = "hanim_vt1";
HAnimJoint326.name = "vt1";
HAnimJoint326.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimSegment HAnimSegment327 = createNode("HAnimSegment");
HAnimSegment327.DEF = "hanim_t1";
HAnimSegment327.name = "t1";
Transform Transform328 = createNode("Transform");
Transform328.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Transform Transform329 = createNode("Transform");
Shape Shape330 = createNode("Shape");
Shape330.USE = "HAnimJointShape";
Transform329.child = new undefined();

Transform329.child[0] = Shape330;

Transform328.children = new MFNode();

Transform328.children[0] = Transform329;

HAnimSegment327.children = new MFNode();

HAnimSegment327.children[0] = Transform328;

Shape Shape331 = createNode("Shape");
LineSet LineSet332 = createNode("LineSet");
LineSet332.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA333 = createNode("ColorRGBA");
ColorRGBA333.USE = "HAnimSegmentLineColorRGBA";
LineSet332.color = ColorRGBA333;

Coordinate Coordinate334 = createNode("Coordinate");
Coordinate334.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5662,-0.0084]);
LineSet332.coord = Coordinate334;

Shape331.geometry = LineSet332;

HAnimSegment327.children[1] = Shape331;

Shape Shape335 = createNode("Shape");
LineSet LineSet336 = createNode("LineSet");
LineSet336.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA337 = createNode("ColorRGBA");
ColorRGBA337.USE = "HAnimSegmentLineColorRGBA";
LineSet336.color = ColorRGBA337;

Coordinate Coordinate338 = createNode("Coordinate");
Coordinate338.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet336.coord = Coordinate338;

Shape335.geometry = LineSet336;

HAnimSegment327.children[2] = Shape335;

HAnimSite HAnimSite339 = createNode("HAnimSite");
HAnimSite339.DEF = "hanim_l_acromion_pt";
HAnimSite339.name = "l_acromion_pt";
HAnimSite339.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor340 = createNode("TouchSensor");
TouchSensor340.description = "HAnimSite l_acromion_pt";
HAnimSite339.children = new MFNode();

HAnimSite339.children[0] = TouchSensor340;

Shape Shape341 = createNode("Shape");
Shape341.USE = "HAnimSiteShape";
HAnimSite339.children[1] = Shape341;

HAnimSegment327.children[3] = HAnimSite339;

HAnimSite HAnimSite342 = createNode("HAnimSite");
HAnimSite342.DEF = "hanim_l_axilla_distal_pt";
HAnimSite342.name = "l_axilla_distal_pt";
HAnimSite342.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor343 = createNode("TouchSensor");
TouchSensor343.description = "HAnimSite l_axilla_distal_pt";
HAnimSite342.children = new MFNode();

HAnimSite342.children[0] = TouchSensor343;

Shape Shape344 = createNode("Shape");
Shape344.USE = "HAnimSiteShape";
HAnimSite342.children[1] = Shape344;

HAnimSegment327.children[4] = HAnimSite342;

HAnimSite HAnimSite345 = createNode("HAnimSite");
HAnimSite345.DEF = "hanim_l_axilla_posterior_folds_pt";
HAnimSite345.name = "l_axilla_posterior_folds_pt";
TouchSensor TouchSensor346 = createNode("TouchSensor");
TouchSensor346.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite345.children = new MFNode();

HAnimSite345.children[0] = TouchSensor346;

Shape Shape347 = createNode("Shape");
Shape347.USE = "HAnimSiteShape";
HAnimSite345.children[1] = Shape347;

HAnimSegment327.children[5] = HAnimSite345;

HAnimSite HAnimSite348 = createNode("HAnimSite");
HAnimSite348.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite348.name = "l_axilla_proximal_pt";
HAnimSite348.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor349 = createNode("TouchSensor");
TouchSensor349.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite348.children = new MFNode();

HAnimSite348.children[0] = TouchSensor349;

Shape Shape350 = createNode("Shape");
Shape350.USE = "HAnimSiteShape";
HAnimSite348.children[1] = Shape350;

HAnimSegment327.children[6] = HAnimSite348;

HAnimSite HAnimSite351 = createNode("HAnimSite");
HAnimSite351.DEF = "hanim_l_clavicale_pt";
HAnimSite351.name = "l_clavicale_pt";
HAnimSite351.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor352 = createNode("TouchSensor");
TouchSensor352.description = "HAnimSite l_clavicale_pt";
HAnimSite351.children = new MFNode();

HAnimSite351.children[0] = TouchSensor352;

Shape Shape353 = createNode("Shape");
Shape353.USE = "HAnimSiteShape";
HAnimSite351.children[1] = Shape353;

HAnimSegment327.children[7] = HAnimSite351;

Shape Shape354 = createNode("Shape");
LineSet LineSet355 = createNode("LineSet");
LineSet355.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA356 = createNode("ColorRGBA");
ColorRGBA356.USE = "HAnimSegmentLineColorRGBA";
LineSet355.color = ColorRGBA356;

Coordinate Coordinate357 = createNode("Coordinate");
Coordinate357.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet355.coord = Coordinate357;

Shape354.geometry = LineSet355;

HAnimSegment327.children[8] = Shape354;

HAnimSite HAnimSite358 = createNode("HAnimSite");
HAnimSite358.DEF = "hanim_r_acromion_pt";
HAnimSite358.name = "r_acromion_pt";
HAnimSite358.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor359 = createNode("TouchSensor");
TouchSensor359.description = "HAnimSite r_acromion_pt";
HAnimSite358.children = new MFNode();

HAnimSite358.children[0] = TouchSensor359;

Shape Shape360 = createNode("Shape");
Shape360.USE = "HAnimSiteShape";
HAnimSite358.children[1] = Shape360;

HAnimSegment327.children[9] = HAnimSite358;

HAnimSite HAnimSite361 = createNode("HAnimSite");
HAnimSite361.DEF = "hanim_r_axilla_distal_pt";
HAnimSite361.name = "r_axilla_distal_pt";
HAnimSite361.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor362 = createNode("TouchSensor");
TouchSensor362.description = "HAnimSite r_axilla_distal_pt";
HAnimSite361.children = new MFNode();

HAnimSite361.children[0] = TouchSensor362;

Shape Shape363 = createNode("Shape");
Shape363.USE = "HAnimSiteShape";
HAnimSite361.children[1] = Shape363;

HAnimSegment327.children[10] = HAnimSite361;

HAnimSite HAnimSite364 = createNode("HAnimSite");
HAnimSite364.DEF = "hanim_r_axilla_posterior_folds_pt";
HAnimSite364.name = "r_axilla_posterior_folds_pt";
TouchSensor TouchSensor365 = createNode("TouchSensor");
TouchSensor365.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite364.children = new MFNode();

HAnimSite364.children[0] = TouchSensor365;

Shape Shape366 = createNode("Shape");
Shape366.USE = "HAnimSiteShape";
HAnimSite364.children[1] = Shape366;

HAnimSegment327.children[11] = HAnimSite364;

HAnimSite HAnimSite367 = createNode("HAnimSite");
HAnimSite367.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite367.name = "r_axilla_proximal_pt";
HAnimSite367.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor368 = createNode("TouchSensor");
TouchSensor368.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite367.children = new MFNode();

HAnimSite367.children[0] = TouchSensor368;

Shape Shape369 = createNode("Shape");
Shape369.USE = "HAnimSiteShape";
HAnimSite367.children[1] = Shape369;

HAnimSegment327.children[12] = HAnimSite367;

HAnimSite HAnimSite370 = createNode("HAnimSite");
HAnimSite370.DEF = "hanim_r_clavicale_pt";
HAnimSite370.name = "r_clavicale_pt";
HAnimSite370.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor371 = createNode("TouchSensor");
TouchSensor371.description = "HAnimSite r_clavicale_pt";
HAnimSite370.children = new MFNode();

HAnimSite370.children[0] = TouchSensor371;

Shape Shape372 = createNode("Shape");
Shape372.USE = "HAnimSiteShape";
HAnimSite370.children[1] = Shape372;

HAnimSegment327.children[13] = HAnimSite370;

HAnimJoint326.children = new MFNode();

HAnimJoint326.children[0] = HAnimSegment327;

HAnimJoint HAnimJoint373 = createNode("HAnimJoint");
HAnimJoint373.DEF = "hanim_vc4";
HAnimJoint373.name = "vc4";
HAnimJoint373.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimSegment HAnimSegment374 = createNode("HAnimSegment");
HAnimSegment374.DEF = "hanim_c4";
HAnimSegment374.name = "c4";
Transform Transform375 = createNode("Transform");
Transform375.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Transform Transform376 = createNode("Transform");
Shape Shape377 = createNode("Shape");
Shape377.USE = "HAnimJointShape";
Transform376.child = new undefined();

Transform376.child[0] = Shape377;

Transform375.children = new MFNode();

Transform375.children[0] = Transform376;

HAnimSegment374.children = new MFNode();

HAnimSegment374.children[0] = Transform375;

Shape Shape378 = createNode("Shape");
LineSet LineSet379 = createNode("LineSet");
LineSet379.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA380 = createNode("ColorRGBA");
ColorRGBA380.USE = "HAnimSegmentLineColorRGBA";
LineSet379.color = ColorRGBA380;

Coordinate Coordinate381 = createNode("Coordinate");
Coordinate381.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103]);
LineSet379.coord = Coordinate381;

Shape378.geometry = LineSet379;

HAnimSegment374.children[1] = Shape378;

HAnimSite HAnimSite382 = createNode("HAnimSite");
HAnimSite382.DEF = "hanim_adams_apple_pt";
HAnimSite382.name = "adams_apple_pt";
TouchSensor TouchSensor383 = createNode("TouchSensor");
TouchSensor383.description = "HAnimSite adams_apple_pt";
HAnimSite382.children = new MFNode();

HAnimSite382.children[0] = TouchSensor383;

Shape Shape384 = createNode("Shape");
Shape384.USE = "HAnimSiteShape";
HAnimSite382.children[1] = Shape384;

HAnimSegment374.children[2] = HAnimSite382;

HAnimJoint373.children = new MFNode();

HAnimJoint373.children[0] = HAnimSegment374;

HAnimJoint HAnimJoint385 = createNode("HAnimJoint");
HAnimJoint385.DEF = "hanim_vc2";
HAnimJoint385.name = "vc2";
HAnimJoint385.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimSegment HAnimSegment386 = createNode("HAnimSegment");
HAnimSegment386.DEF = "hanim_c2";
HAnimSegment386.name = "c2";
Transform Transform387 = createNode("Transform");
Transform387.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
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
Coordinate393.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0044,1.6209,0.0236]);
LineSet391.coord = Coordinate393;

Shape390.geometry = LineSet391;

HAnimSegment386.children[1] = Shape390;

HAnimSite HAnimSite394 = createNode("HAnimSite");
HAnimSite394.DEF = "hanim_glabella_pt";
HAnimSite394.name = "glabella_pt";
TouchSensor TouchSensor395 = createNode("TouchSensor");
TouchSensor395.description = "HAnimSite glabella_pt";
HAnimSite394.children = new MFNode();

HAnimSite394.children[0] = TouchSensor395;

Shape Shape396 = createNode("Shape");
Shape396.USE = "HAnimSiteShape";
HAnimSite394.children[1] = Shape396;

HAnimSegment386.children[2] = HAnimSite394;

HAnimSite HAnimSite397 = createNode("HAnimSite");
HAnimSite397.DEF = "hanim_l_ectocanthus_pt";
HAnimSite397.name = "l_ectocanthus_pt";
TouchSensor TouchSensor398 = createNode("TouchSensor");
TouchSensor398.description = "HAnimSite l_ectocanthus_pt";
HAnimSite397.children = new MFNode();

HAnimSite397.children[0] = TouchSensor398;

Shape Shape399 = createNode("Shape");
Shape399.USE = "HAnimSiteShape";
HAnimSite397.children[1] = Shape399;

HAnimSegment386.children[3] = HAnimSite397;

HAnimSite HAnimSite400 = createNode("HAnimSite");
HAnimSite400.DEF = "hanim_l_infraorbitale_pt";
HAnimSite400.name = "l_infraorbitale_pt";
HAnimSite400.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor401 = createNode("TouchSensor");
TouchSensor401.description = "HAnimSite l_infraorbitale_pt";
HAnimSite400.children = new MFNode();

HAnimSite400.children[0] = TouchSensor401;

Shape Shape402 = createNode("Shape");
Shape402.USE = "HAnimSiteShape";
HAnimSite400.children[1] = Shape402;

HAnimSegment386.children[4] = HAnimSite400;

HAnimSite HAnimSite403 = createNode("HAnimSite");
HAnimSite403.DEF = "hanim_l_tragion_pt";
HAnimSite403.name = "l_tragion_pt";
HAnimSite403.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor404 = createNode("TouchSensor");
TouchSensor404.description = "HAnimSite l_tragion_pt";
HAnimSite403.children = new MFNode();

HAnimSite403.children[0] = TouchSensor404;

Shape Shape405 = createNode("Shape");
Shape405.USE = "HAnimSiteShape";
HAnimSite403.children[1] = Shape405;

HAnimSegment386.children[5] = HAnimSite403;

HAnimSite HAnimSite406 = createNode("HAnimSite");
HAnimSite406.DEF = "hanim_nuchale_pt";
HAnimSite406.name = "nuchale_pt";
HAnimSite406.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor407 = createNode("TouchSensor");
TouchSensor407.description = "HAnimSite nuchale_pt";
HAnimSite406.children = new MFNode();

HAnimSite406.children[0] = TouchSensor407;

Shape Shape408 = createNode("Shape");
Shape408.USE = "HAnimSiteShape";
HAnimSite406.children[1] = Shape408;

HAnimSegment386.children[6] = HAnimSite406;

HAnimSite HAnimSite409 = createNode("HAnimSite");
HAnimSite409.DEF = "hanim_opisthocranion_pt";
HAnimSite409.name = "opisthocranion_pt";
TouchSensor TouchSensor410 = createNode("TouchSensor");
TouchSensor410.description = "HAnimSite opisthocranion_pt";
HAnimSite409.children = new MFNode();

HAnimSite409.children[0] = TouchSensor410;

Shape Shape411 = createNode("Shape");
Shape411.USE = "HAnimSiteShape";
HAnimSite409.children[1] = Shape411;

HAnimSegment386.children[7] = HAnimSite409;

HAnimSite HAnimSite412 = createNode("HAnimSite");
HAnimSite412.DEF = "hanim_r_ectocanthus_pt";
HAnimSite412.name = "r_ectocanthus_pt";
TouchSensor TouchSensor413 = createNode("TouchSensor");
TouchSensor413.description = "HAnimSite r_ectocanthus_pt";
HAnimSite412.children = new MFNode();

HAnimSite412.children[0] = TouchSensor413;

Shape Shape414 = createNode("Shape");
Shape414.USE = "HAnimSiteShape";
HAnimSite412.children[1] = Shape414;

HAnimSegment386.children[8] = HAnimSite412;

HAnimSite HAnimSite415 = createNode("HAnimSite");
HAnimSite415.DEF = "hanim_r_infraorbitale_pt";
HAnimSite415.name = "r_infraorbitale_pt";
HAnimSite415.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor416 = createNode("TouchSensor");
TouchSensor416.description = "HAnimSite r_infraorbitale_pt";
HAnimSite415.children = new MFNode();

HAnimSite415.children[0] = TouchSensor416;

Shape Shape417 = createNode("Shape");
Shape417.USE = "HAnimSiteShape";
HAnimSite415.children[1] = Shape417;

HAnimSegment386.children[9] = HAnimSite415;

HAnimSite HAnimSite418 = createNode("HAnimSite");
HAnimSite418.DEF = "hanim_r_tragion_pt";
HAnimSite418.name = "r_tragion_pt";
HAnimSite418.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor419 = createNode("TouchSensor");
TouchSensor419.description = "HAnimSite r_tragion_pt";
HAnimSite418.children = new MFNode();

HAnimSite418.children[0] = TouchSensor419;

Shape Shape420 = createNode("Shape");
Shape420.USE = "HAnimSiteShape";
HAnimSite418.children[1] = Shape420;

HAnimSegment386.children[10] = HAnimSite418;

HAnimSite HAnimSite421 = createNode("HAnimSite");
HAnimSite421.DEF = "hanim_sellion_pt";
HAnimSite421.name = "sellion_pt";
HAnimSite421.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor422 = createNode("TouchSensor");
TouchSensor422.description = "HAnimSite sellion_pt";
HAnimSite421.children = new MFNode();

HAnimSite421.children[0] = TouchSensor422;

Shape Shape423 = createNode("Shape");
Shape423.USE = "HAnimSiteShape";
HAnimSite421.children[1] = Shape423;

HAnimSegment386.children[11] = HAnimSite421;

HAnimSite HAnimSite424 = createNode("HAnimSite");
HAnimSite424.DEF = "hanim_skull_vertex_pt";
HAnimSite424.name = "skull_vertex_pt";
HAnimSite424.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor425 = createNode("TouchSensor");
TouchSensor425.description = "HAnimSite skull_vertex_pt";
HAnimSite424.children = new MFNode();

HAnimSite424.children[0] = TouchSensor425;

Shape Shape426 = createNode("Shape");
Shape426.USE = "HAnimSiteShape";
HAnimSite424.children[1] = Shape426;

HAnimSegment386.children[12] = HAnimSite424;

HAnimJoint385.children = new MFNode();

HAnimJoint385.children[0] = HAnimSegment386;

HAnimJoint HAnimJoint427 = createNode("HAnimJoint");
HAnimJoint427.DEF = "hanim_skullbase";
HAnimJoint427.name = "skullbase";
HAnimJoint427.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint385.children[1] = HAnimJoint427;

HAnimJoint373.children[1] = HAnimJoint385;

HAnimJoint326.children[1] = HAnimJoint373;

HAnimJoint HAnimJoint428 = createNode("HAnimJoint");
HAnimJoint428.DEF = "hanim_l_sternoclavicular";
HAnimJoint428.name = "l_sternoclavicular";
HAnimJoint428.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment429 = createNode("HAnimSegment");
HAnimSegment429.DEF = "hanim_l_clavicle";
HAnimSegment429.name = "l_clavicle";
Transform Transform430 = createNode("Transform");
Transform430.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Transform Transform431 = createNode("Transform");
Shape Shape432 = createNode("Shape");
Shape432.USE = "HAnimJointShape";
Transform431.child = new undefined();

Transform431.child[0] = Shape432;

Transform430.children = new MFNode();

Transform430.children[0] = Transform431;

HAnimSegment429.children = new MFNode();

HAnimSegment429.children[0] = Transform430;

Shape Shape433 = createNode("Shape");
LineSet LineSet434 = createNode("LineSet");
LineSet434.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA435 = createNode("ColorRGBA");
ColorRGBA435.USE = "HAnimSegmentLineColorRGBA";
LineSet434.color = ColorRGBA435;

Coordinate Coordinate436 = createNode("Coordinate");
Coordinate436.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet434.coord = Coordinate436;

Shape433.geometry = LineSet434;

HAnimSegment429.children[1] = Shape433;

HAnimJoint428.children = new MFNode();

HAnimJoint428.children[0] = HAnimSegment429;

HAnimJoint HAnimJoint437 = createNode("HAnimJoint");
HAnimJoint437.DEF = "hanim_l_acromioclavicular";
HAnimJoint437.name = "l_acromioclavicular";
HAnimJoint437.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment438 = createNode("HAnimSegment");
HAnimSegment438.DEF = "hanim_l_scapula";
HAnimSegment438.name = "l_scapula";
Transform Transform439 = createNode("Transform");
Transform439.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Transform Transform440 = createNode("Transform");
Shape Shape441 = createNode("Shape");
Shape441.USE = "HAnimJointShape";
Transform440.child = new undefined();

Transform440.child[0] = Shape441;

Transform439.children = new MFNode();

Transform439.children[0] = Transform440;

HAnimSegment438.children = new MFNode();

HAnimSegment438.children[0] = Transform439;

Shape Shape442 = createNode("Shape");
LineSet LineSet443 = createNode("LineSet");
LineSet443.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA444 = createNode("ColorRGBA");
ColorRGBA444.USE = "HAnimSegmentLineColorRGBA";
LineSet443.color = ColorRGBA444;

Coordinate Coordinate445 = createNode("Coordinate");
Coordinate445.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet443.coord = Coordinate445;

Shape442.geometry = LineSet443;

HAnimSegment438.children[1] = Shape442;

HAnimSite HAnimSite446 = createNode("HAnimSite");
HAnimSite446.DEF = "hanim_l_bideltoid_pt";
HAnimSite446.name = "l_bideltoid_pt";
TouchSensor TouchSensor447 = createNode("TouchSensor");
TouchSensor447.description = "HAnimSite l_bideltoid_pt";
HAnimSite446.children = new MFNode();

HAnimSite446.children[0] = TouchSensor447;

Shape Shape448 = createNode("Shape");
Shape448.USE = "HAnimSiteShape";
HAnimSite446.children[1] = Shape448;

HAnimSegment438.children[2] = HAnimSite446;

HAnimSite HAnimSite449 = createNode("HAnimSite");
HAnimSite449.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite449.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite449.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor450 = createNode("TouchSensor");
TouchSensor450.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite449.children = new MFNode();

HAnimSite449.children[0] = TouchSensor450;

Shape Shape451 = createNode("Shape");
Shape451.USE = "HAnimSiteShape";
HAnimSite449.children[1] = Shape451;

HAnimSegment438.children[3] = HAnimSite449;

HAnimJoint437.children = new MFNode();

HAnimJoint437.children[0] = HAnimSegment438;

HAnimJoint HAnimJoint452 = createNode("HAnimJoint");
HAnimJoint452.DEF = "hanim_l_shoulder";
HAnimJoint452.name = "l_shoulder";
HAnimJoint452.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment453 = createNode("HAnimSegment");
HAnimSegment453.DEF = "hanim_l_upperarm";
HAnimSegment453.name = "l_upperarm";
Transform Transform454 = createNode("Transform");
Transform454.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Transform Transform455 = createNode("Transform");
Shape Shape456 = createNode("Shape");
Shape456.USE = "HAnimJointShape";
Transform455.child = new undefined();

Transform455.child[0] = Shape456;

Transform454.children = new MFNode();

Transform454.children[0] = Transform455;

HAnimSegment453.children = new MFNode();

HAnimSegment453.children[0] = Transform454;

Shape Shape457 = createNode("Shape");
LineSet LineSet458 = createNode("LineSet");
LineSet458.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA459 = createNode("ColorRGBA");
ColorRGBA459.USE = "HAnimSegmentLineColorRGBA";
LineSet458.color = ColorRGBA459;

Coordinate Coordinate460 = createNode("Coordinate");
Coordinate460.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet458.coord = Coordinate460;

Shape457.geometry = LineSet458;

HAnimSegment453.children[1] = Shape457;

HAnimSite HAnimSite461 = createNode("HAnimSite");
HAnimSite461.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite461.name = "l_humeral_medial_epicondyles_pt";
HAnimSite461.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor462 = createNode("TouchSensor");
TouchSensor462.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite461.children = new MFNode();

HAnimSite461.children[0] = TouchSensor462;

Shape Shape463 = createNode("Shape");
Shape463.USE = "HAnimSiteShape";
HAnimSite461.children[1] = Shape463;

HAnimSegment453.children[2] = HAnimSite461;

HAnimSite HAnimSite464 = createNode("HAnimSite");
HAnimSite464.DEF = "hanim_l_olecranon_pt";
HAnimSite464.name = "l_olecranon_pt";
HAnimSite464.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor465 = createNode("TouchSensor");
TouchSensor465.description = "HAnimSite l_olecranon_pt";
HAnimSite464.children = new MFNode();

HAnimSite464.children[0] = TouchSensor465;

Shape Shape466 = createNode("Shape");
Shape466.USE = "HAnimSiteShape";
HAnimSite464.children[1] = Shape466;

HAnimSegment453.children[3] = HAnimSite464;

HAnimSite HAnimSite467 = createNode("HAnimSite");
HAnimSite467.DEF = "hanim_l_radial_styloid_pt";
HAnimSite467.name = "l_radial_styloid_pt";
HAnimSite467.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor468 = createNode("TouchSensor");
TouchSensor468.description = "HAnimSite l_radial_styloid_pt";
HAnimSite467.children = new MFNode();

HAnimSite467.children[0] = TouchSensor468;

Shape Shape469 = createNode("Shape");
Shape469.USE = "HAnimSiteShape";
HAnimSite467.children[1] = Shape469;

HAnimSegment453.children[4] = HAnimSite467;

HAnimSite HAnimSite470 = createNode("HAnimSite");
HAnimSite470.DEF = "hanim_l_radiale_pt";
HAnimSite470.name = "l_radiale_pt";
HAnimSite470.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor471 = createNode("TouchSensor");
TouchSensor471.description = "HAnimSite l_radiale_pt";
HAnimSite470.children = new MFNode();

HAnimSite470.children[0] = TouchSensor471;

Shape Shape472 = createNode("Shape");
Shape472.USE = "HAnimSiteShape";
HAnimSite470.children[1] = Shape472;

HAnimSegment453.children[5] = HAnimSite470;

HAnimJoint452.children = new MFNode();

HAnimJoint452.children[0] = HAnimSegment453;

HAnimJoint HAnimJoint473 = createNode("HAnimJoint");
HAnimJoint473.DEF = "hanim_l_elbow";
HAnimJoint473.name = "l_elbow";
HAnimJoint473.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment474 = createNode("HAnimSegment");
HAnimSegment474.DEF = "hanim_l_forearm";
HAnimSegment474.name = "l_forearm";
Transform Transform475 = createNode("Transform");
Transform475.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform Transform476 = createNode("Transform");
Shape Shape477 = createNode("Shape");
Shape477.USE = "HAnimJointShape";
Transform476.child = new undefined();

Transform476.child[0] = Shape477;

Transform475.children = new MFNode();

Transform475.children[0] = Transform476;

HAnimSegment474.children = new MFNode();

HAnimSegment474.children[0] = Transform475;

Shape Shape478 = createNode("Shape");
LineSet LineSet479 = createNode("LineSet");
LineSet479.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA480 = createNode("ColorRGBA");
ColorRGBA480.USE = "HAnimSegmentLineColorRGBA";
LineSet479.color = ColorRGBA480;

Coordinate Coordinate481 = createNode("Coordinate");
Coordinate481.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet479.coord = Coordinate481;

Shape478.geometry = LineSet479;

HAnimSegment474.children[1] = Shape478;

HAnimSite HAnimSite482 = createNode("HAnimSite");
HAnimSite482.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite482.name = "l_ulnar_styloid_pt";
HAnimSite482.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor483 = createNode("TouchSensor");
TouchSensor483.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite482.children = new MFNode();

HAnimSite482.children[0] = TouchSensor483;

Shape Shape484 = createNode("Shape");
Shape484.USE = "HAnimSiteShape";
HAnimSite482.children[1] = Shape484;

HAnimSegment474.children[2] = HAnimSite482;

HAnimJoint473.children = new MFNode();

HAnimJoint473.children[0] = HAnimSegment474;

HAnimJoint HAnimJoint485 = createNode("HAnimJoint");
HAnimJoint485.DEF = "hanim_l_radiocarpal";
HAnimJoint485.name = "l_radiocarpal";
HAnimJoint485.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment486 = createNode("HAnimSegment");
HAnimSegment486.DEF = "hanim_l_carpal";
HAnimSegment486.name = "l_carpal";
Transform Transform487 = createNode("Transform");
Transform487.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform487.rotation = new SFRotation(new float[0,0,1,-3.14]);
Transform487.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform Transform488 = createNode("Transform");
Transform488.rotation = new SFRotation(new float[0,1,0,-1.57]);
Shape Shape489 = createNode("Shape");
Shape489.USE = "HAnimJointShape";
Transform488.child = new undefined();

Transform488.child[0] = Shape489;

Transform487.children = new MFNode();

Transform487.children[0] = Transform488;

HAnimSegment486.children = new MFNode();

HAnimSegment486.children[0] = Transform487;

Shape Shape490 = createNode("Shape");
LineSet LineSet491 = createNode("LineSet");
LineSet491.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA492 = createNode("ColorRGBA");
ColorRGBA492.USE = "HAnimSegmentLineColorRGBA";
LineSet491.color = ColorRGBA492;

Coordinate Coordinate493 = createNode("Coordinate");
Coordinate493.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet491.coord = Coordinate493;

Shape490.geometry = LineSet491;

HAnimSegment486.children[1] = Shape490;

Shape Shape494 = createNode("Shape");
LineSet LineSet495 = createNode("LineSet");
LineSet495.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA496 = createNode("ColorRGBA");
ColorRGBA496.USE = "HAnimSegmentLineColorRGBA";
LineSet495.color = ColorRGBA496;

Coordinate Coordinate497 = createNode("Coordinate");
Coordinate497.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet495.coord = Coordinate497;

Shape494.geometry = LineSet495;

HAnimSegment486.children[2] = Shape494;

HAnimSite HAnimSite498 = createNode("HAnimSite");
HAnimSite498.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite498.name = "l_metacarpal_phalanx_2_pt";
HAnimSite498.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor499 = createNode("TouchSensor");
TouchSensor499.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite498.children = new MFNode();

HAnimSite498.children[0] = TouchSensor499;

Shape Shape500 = createNode("Shape");
Shape500.USE = "HAnimSiteShape";
HAnimSite498.children[1] = Shape500;

HAnimSegment486.children[3] = HAnimSite498;

Shape Shape501 = createNode("Shape");
LineSet LineSet502 = createNode("LineSet");
LineSet502.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA503 = createNode("ColorRGBA");
ColorRGBA503.USE = "HAnimSegmentLineColorRGBA";
LineSet502.color = ColorRGBA503;

Coordinate Coordinate504 = createNode("Coordinate");
Coordinate504.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet502.coord = Coordinate504;

Shape501.geometry = LineSet502;

HAnimSegment486.children[4] = Shape501;

HAnimSite HAnimSite505 = createNode("HAnimSite");
HAnimSite505.DEF = "hanim_l_metacarpal_phalanx_3_pt";
HAnimSite505.name = "l_metacarpal_phalanx_3_pt";
TouchSensor TouchSensor506 = createNode("TouchSensor");
TouchSensor506.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite505.children = new MFNode();

HAnimSite505.children[0] = TouchSensor506;

Shape Shape507 = createNode("Shape");
Shape507.USE = "HAnimSiteShape";
HAnimSite505.children[1] = Shape507;

HAnimSegment486.children[5] = HAnimSite505;

Shape Shape508 = createNode("Shape");
LineSet LineSet509 = createNode("LineSet");
LineSet509.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA510 = createNode("ColorRGBA");
ColorRGBA510.USE = "HAnimSegmentLineColorRGBA";
LineSet509.color = ColorRGBA510;

Coordinate Coordinate511 = createNode("Coordinate");
Coordinate511.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet509.coord = Coordinate511;

Shape508.geometry = LineSet509;

HAnimSegment486.children[6] = Shape508;

Shape Shape512 = createNode("Shape");
LineSet LineSet513 = createNode("LineSet");
LineSet513.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA514 = createNode("ColorRGBA");
ColorRGBA514.USE = "HAnimSegmentLineColorRGBA";
LineSet513.color = ColorRGBA514;

Coordinate Coordinate515 = createNode("Coordinate");
Coordinate515.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet513.coord = Coordinate515;

Shape512.geometry = LineSet513;

HAnimSegment486.children[7] = Shape512;

HAnimSite HAnimSite516 = createNode("HAnimSite");
HAnimSite516.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite516.name = "l_metacarpal_phalanx_5_pt";
HAnimSite516.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor517 = createNode("TouchSensor");
TouchSensor517.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite516.children = new MFNode();

HAnimSite516.children[0] = TouchSensor517;

Shape Shape518 = createNode("Shape");
Shape518.USE = "HAnimSiteShape";
HAnimSite516.children[1] = Shape518;

HAnimSegment486.children[8] = HAnimSite516;

HAnimJoint485.children = new MFNode();

HAnimJoint485.children[0] = HAnimSegment486;

HAnimJoint HAnimJoint519 = createNode("HAnimJoint");
HAnimJoint519.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint519.name = "l_carpometacarpal_1";
HAnimJoint519.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment520 = createNode("HAnimSegment");
HAnimSegment520.DEF = "hanim_l_metacarpal_1";
HAnimSegment520.name = "l_metacarpal_1";
Transform Transform521 = createNode("Transform");
Transform521.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Transform Transform522 = createNode("Transform");
Shape Shape523 = createNode("Shape");
Shape523.USE = "HAnimJointShape";
Transform522.child = new undefined();

Transform522.child[0] = Shape523;

Transform521.children = new MFNode();

Transform521.children[0] = Transform522;

HAnimSegment520.children = new MFNode();

HAnimSegment520.children[0] = Transform521;

Shape Shape524 = createNode("Shape");
LineSet LineSet525 = createNode("LineSet");
LineSet525.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA526 = createNode("ColorRGBA");
ColorRGBA526.USE = "HAnimSegmentLineColorRGBA";
LineSet525.color = ColorRGBA526;

Coordinate Coordinate527 = createNode("Coordinate");
Coordinate527.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet525.coord = Coordinate527;

Shape524.geometry = LineSet525;

HAnimSegment520.children[1] = Shape524;

HAnimJoint519.children = new MFNode();

HAnimJoint519.children[0] = HAnimSegment520;

HAnimJoint HAnimJoint528 = createNode("HAnimJoint");
HAnimJoint528.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint528.name = "l_metacarpophalangeal_1";
HAnimJoint528.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment529 = createNode("HAnimSegment");
HAnimSegment529.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment529.name = "l_carpal_proximal_phalanx_1";
Transform Transform530 = createNode("Transform");
Transform530.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Transform Transform531 = createNode("Transform");
Shape Shape532 = createNode("Shape");
Shape532.USE = "HAnimJointShape";
Transform531.child = new undefined();

Transform531.child[0] = Shape532;

Transform530.children = new MFNode();

Transform530.children[0] = Transform531;

HAnimSegment529.children = new MFNode();

HAnimSegment529.children[0] = Transform530;

Shape Shape533 = createNode("Shape");
LineSet LineSet534 = createNode("LineSet");
LineSet534.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA535 = createNode("ColorRGBA");
ColorRGBA535.USE = "HAnimSegmentLineColorRGBA";
LineSet534.color = ColorRGBA535;

Coordinate Coordinate536 = createNode("Coordinate");
Coordinate536.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet534.coord = Coordinate536;

Shape533.geometry = LineSet534;

HAnimSegment529.children[1] = Shape533;

HAnimSite HAnimSite537 = createNode("HAnimSite");
HAnimSite537.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite537.name = "l_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor538 = createNode("TouchSensor");
TouchSensor538.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite537.children = new MFNode();

HAnimSite537.children[0] = TouchSensor538;

Shape Shape539 = createNode("Shape");
Shape539.USE = "HAnimSiteShape";
HAnimSite537.children[1] = Shape539;

HAnimSegment529.children[2] = HAnimSite537;

HAnimJoint528.children = new MFNode();

HAnimJoint528.children[0] = HAnimSegment529;

HAnimJoint HAnimJoint540 = createNode("HAnimJoint");
HAnimJoint540.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint540.name = "l_carpal_interphalangeal_1";
HAnimJoint540.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint528.children[1] = HAnimJoint540;

HAnimJoint519.children[1] = HAnimJoint528;

HAnimJoint485.children[1] = HAnimJoint519;

HAnimJoint HAnimJoint541 = createNode("HAnimJoint");
HAnimJoint541.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint541.name = "l_carpometacarpal_2";
HAnimJoint541.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment542 = createNode("HAnimSegment");
HAnimSegment542.DEF = "hanim_l_metacarpal_2";
HAnimSegment542.name = "l_metacarpal_2";
Transform Transform543 = createNode("Transform");
Transform543.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Transform Transform544 = createNode("Transform");
Shape Shape545 = createNode("Shape");
Shape545.USE = "HAnimJointShape";
Transform544.child = new undefined();

Transform544.child[0] = Shape545;

Transform543.children = new MFNode();

Transform543.children[0] = Transform544;

HAnimSegment542.children = new MFNode();

HAnimSegment542.children[0] = Transform543;

Shape Shape546 = createNode("Shape");
LineSet LineSet547 = createNode("LineSet");
LineSet547.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA548 = createNode("ColorRGBA");
ColorRGBA548.USE = "HAnimSegmentLineColorRGBA";
LineSet547.color = ColorRGBA548;

Coordinate Coordinate549 = createNode("Coordinate");
Coordinate549.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet547.coord = Coordinate549;

Shape546.geometry = LineSet547;

HAnimSegment542.children[1] = Shape546;

HAnimJoint541.children = new MFNode();

HAnimJoint541.children[0] = HAnimSegment542;

HAnimJoint HAnimJoint550 = createNode("HAnimJoint");
HAnimJoint550.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint550.name = "l_metacarpophalangeal_2";
HAnimJoint550.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment551 = createNode("HAnimSegment");
HAnimSegment551.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment551.name = "l_carpal_proximal_phalanx_2";
Transform Transform552 = createNode("Transform");
Transform552.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Transform Transform553 = createNode("Transform");
Shape Shape554 = createNode("Shape");
Shape554.USE = "HAnimJointShape";
Transform553.child = new undefined();

Transform553.child[0] = Shape554;

Transform552.children = new MFNode();

Transform552.children[0] = Transform553;

HAnimSegment551.children = new MFNode();

HAnimSegment551.children[0] = Transform552;

Shape Shape555 = createNode("Shape");
LineSet LineSet556 = createNode("LineSet");
LineSet556.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA557 = createNode("ColorRGBA");
ColorRGBA557.USE = "HAnimSegmentLineColorRGBA";
LineSet556.color = ColorRGBA557;

Coordinate Coordinate558 = createNode("Coordinate");
Coordinate558.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet556.coord = Coordinate558;

Shape555.geometry = LineSet556;

HAnimSegment551.children[1] = Shape555;

HAnimJoint550.children = new MFNode();

HAnimJoint550.children[0] = HAnimSegment551;

HAnimJoint HAnimJoint559 = createNode("HAnimJoint");
HAnimJoint559.DEF = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimJoint559.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint559.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment560 = createNode("HAnimSegment");
HAnimSegment560.DEF = "hanim_l_carpal_middle_phalanx_1";
HAnimSegment560.name = "l_carpal_middle_phalanx_2";
Transform Transform561 = createNode("Transform");
Transform561.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Transform Transform562 = createNode("Transform");
Shape Shape563 = createNode("Shape");
Shape563.USE = "HAnimJointShape";
Transform562.child = new undefined();

Transform562.child[0] = Shape563;

Transform561.children = new MFNode();

Transform561.children[0] = Transform562;

HAnimSegment560.children = new MFNode();

HAnimSegment560.children[0] = Transform561;

Shape Shape564 = createNode("Shape");
LineSet LineSet565 = createNode("LineSet");
LineSet565.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA566 = createNode("ColorRGBA");
ColorRGBA566.USE = "HAnimSegmentLineColorRGBA";
LineSet565.color = ColorRGBA566;

Coordinate Coordinate567 = createNode("Coordinate");
Coordinate567.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet565.coord = Coordinate567;

Shape564.geometry = LineSet565;

HAnimSegment560.children[1] = Shape564;

HAnimSite HAnimSite568 = createNode("HAnimSite");
HAnimSite568.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite568.name = "l_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor569 = createNode("TouchSensor");
TouchSensor569.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite568.children = new MFNode();

HAnimSite568.children[0] = TouchSensor569;

Shape Shape570 = createNode("Shape");
Shape570.USE = "HAnimSiteShape";
HAnimSite568.children[1] = Shape570;

HAnimSegment560.children[2] = HAnimSite568;

HAnimSite HAnimSite571 = createNode("HAnimSite");
HAnimSite571.DEF = "hanim_l_dactylion_pt";
HAnimSite571.name = "l_dactylion_pt";
HAnimSite571.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor572 = createNode("TouchSensor");
TouchSensor572.description = "HAnimSite l_dactylion_pt";
HAnimSite571.children = new MFNode();

HAnimSite571.children[0] = TouchSensor572;

Shape Shape573 = createNode("Shape");
Shape573.USE = "HAnimSiteShape";
HAnimSite571.children[1] = Shape573;

HAnimSegment560.children[3] = HAnimSite571;

HAnimJoint559.children = new MFNode();

HAnimJoint559.children[0] = HAnimSegment560;

HAnimJoint HAnimJoint574 = createNode("HAnimJoint");
HAnimJoint574.DEF = "hanim_l_carpal_distal_interphalangeal_1";
HAnimJoint574.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint574.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint559.children[1] = HAnimJoint574;

HAnimJoint550.children[1] = HAnimJoint559;

HAnimJoint541.children[1] = HAnimJoint550;

HAnimJoint485.children[2] = HAnimJoint541;

HAnimJoint HAnimJoint575 = createNode("HAnimJoint");
HAnimJoint575.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint575.name = "l_carpometacarpal_3";
HAnimJoint575.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment576 = createNode("HAnimSegment");
HAnimSegment576.DEF = "hanim_l_metacarpal_3";
HAnimSegment576.name = "l_metacarpal_3";
Transform Transform577 = createNode("Transform");
Transform577.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
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
Coordinate583.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet581.coord = Coordinate583;

Shape580.geometry = LineSet581;

HAnimSegment576.children[1] = Shape580;

HAnimJoint575.children = new MFNode();

HAnimJoint575.children[0] = HAnimSegment576;

HAnimJoint HAnimJoint584 = createNode("HAnimJoint");
HAnimJoint584.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint584.name = "l_metacarpophalangeal_3";
HAnimJoint584.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment585 = createNode("HAnimSegment");
HAnimSegment585.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimSegment585.name = "l_carpal_proximal_phalanx_3";
Transform Transform586 = createNode("Transform");
Transform586.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
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
Coordinate592.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet590.coord = Coordinate592;

Shape589.geometry = LineSet590;

HAnimSegment585.children[1] = Shape589;

HAnimJoint584.children = new MFNode();

HAnimJoint584.children[0] = HAnimSegment585;

HAnimJoint HAnimJoint593 = createNode("HAnimJoint");
HAnimJoint593.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint593.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint593.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment594 = createNode("HAnimSegment");
HAnimSegment594.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment594.name = "l_carpal_middle_phalanx_3";
Transform Transform595 = createNode("Transform");
Transform595.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Transform Transform596 = createNode("Transform");
Shape Shape597 = createNode("Shape");
Shape597.USE = "HAnimJointShape";
Transform596.child = new undefined();

Transform596.child[0] = Shape597;

Transform595.children = new MFNode();

Transform595.children[0] = Transform596;

HAnimSegment594.children = new MFNode();

HAnimSegment594.children[0] = Transform595;

Shape Shape598 = createNode("Shape");
LineSet LineSet599 = createNode("LineSet");
LineSet599.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA600 = createNode("ColorRGBA");
ColorRGBA600.USE = "HAnimSegmentLineColorRGBA";
LineSet599.color = ColorRGBA600;

Coordinate Coordinate601 = createNode("Coordinate");
Coordinate601.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet599.coord = Coordinate601;

Shape598.geometry = LineSet599;

HAnimSegment594.children[1] = Shape598;

HAnimSite HAnimSite602 = createNode("HAnimSite");
HAnimSite602.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite602.name = "l_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor603 = createNode("TouchSensor");
TouchSensor603.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite602.children = new MFNode();

HAnimSite602.children[0] = TouchSensor603;

Shape Shape604 = createNode("Shape");
Shape604.USE = "HAnimSiteShape";
HAnimSite602.children[1] = Shape604;

HAnimSegment594.children[2] = HAnimSite602;

HAnimJoint593.children = new MFNode();

HAnimJoint593.children[0] = HAnimSegment594;

HAnimJoint HAnimJoint605 = createNode("HAnimJoint");
HAnimJoint605.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint605.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint605.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint593.children[1] = HAnimJoint605;

HAnimJoint584.children[1] = HAnimJoint593;

HAnimJoint575.children[1] = HAnimJoint584;

HAnimJoint485.children[3] = HAnimJoint575;

HAnimJoint HAnimJoint606 = createNode("HAnimJoint");
HAnimJoint606.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint606.name = "l_carpometacarpal_4";
HAnimJoint606.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment607 = createNode("HAnimSegment");
HAnimSegment607.DEF = "hanim_l_metacarpal_4";
HAnimSegment607.name = "l_metacarpal_4";
Transform Transform608 = createNode("Transform");
Transform608.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
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
Coordinate614.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet612.coord = Coordinate614;

Shape611.geometry = LineSet612;

HAnimSegment607.children[1] = Shape611;

HAnimJoint606.children = new MFNode();

HAnimJoint606.children[0] = HAnimSegment607;

HAnimJoint HAnimJoint615 = createNode("HAnimJoint");
HAnimJoint615.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint615.name = "l_metacarpophalangeal_4";
HAnimJoint615.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment616 = createNode("HAnimSegment");
HAnimSegment616.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimSegment616.name = "l_carpal_proximal_phalanx_4";
Transform Transform617 = createNode("Transform");
Transform617.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
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
Coordinate623.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet621.coord = Coordinate623;

Shape620.geometry = LineSet621;

HAnimSegment616.children[1] = Shape620;

HAnimJoint615.children = new MFNode();

HAnimJoint615.children[0] = HAnimSegment616;

HAnimJoint HAnimJoint624 = createNode("HAnimJoint");
HAnimJoint624.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint624.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint624.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment625 = createNode("HAnimSegment");
HAnimSegment625.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimSegment625.name = "l_carpal_middle_phalanx_4";
Transform Transform626 = createNode("Transform");
Transform626.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Transform Transform627 = createNode("Transform");
Shape Shape628 = createNode("Shape");
Shape628.USE = "HAnimJointShape";
Transform627.child = new undefined();

Transform627.child[0] = Shape628;

Transform626.children = new MFNode();

Transform626.children[0] = Transform627;

HAnimSegment625.children = new MFNode();

HAnimSegment625.children[0] = Transform626;

Shape Shape629 = createNode("Shape");
LineSet LineSet630 = createNode("LineSet");
LineSet630.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA631 = createNode("ColorRGBA");
ColorRGBA631.USE = "HAnimSegmentLineColorRGBA";
LineSet630.color = ColorRGBA631;

Coordinate Coordinate632 = createNode("Coordinate");
Coordinate632.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet630.coord = Coordinate632;

Shape629.geometry = LineSet630;

HAnimSegment625.children[1] = Shape629;

HAnimSite HAnimSite633 = createNode("HAnimSite");
HAnimSite633.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite633.name = "l_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor634 = createNode("TouchSensor");
TouchSensor634.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite633.children = new MFNode();

HAnimSite633.children[0] = TouchSensor634;

Shape Shape635 = createNode("Shape");
Shape635.USE = "HAnimSiteShape";
HAnimSite633.children[1] = Shape635;

HAnimSegment625.children[2] = HAnimSite633;

HAnimJoint624.children = new MFNode();

HAnimJoint624.children[0] = HAnimSegment625;

HAnimJoint HAnimJoint636 = createNode("HAnimJoint");
HAnimJoint636.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint636.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint636.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint624.children[1] = HAnimJoint636;

HAnimJoint615.children[1] = HAnimJoint624;

HAnimJoint606.children[1] = HAnimJoint615;

HAnimJoint485.children[4] = HAnimJoint606;

HAnimJoint HAnimJoint637 = createNode("HAnimJoint");
HAnimJoint637.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint637.name = "l_carpometacarpal_5";
HAnimJoint637.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment638 = createNode("HAnimSegment");
HAnimSegment638.DEF = "hanim_l_metacarpal_5";
HAnimSegment638.name = "l_metacarpal_5";
Transform Transform639 = createNode("Transform");
Transform639.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Transform Transform640 = createNode("Transform");
Shape Shape641 = createNode("Shape");
Shape641.USE = "HAnimJointShape";
Transform640.child = new undefined();

Transform640.child[0] = Shape641;

Transform639.children = new MFNode();

Transform639.children[0] = Transform640;

HAnimSegment638.children = new MFNode();

HAnimSegment638.children[0] = Transform639;

Shape Shape642 = createNode("Shape");
LineSet LineSet643 = createNode("LineSet");
LineSet643.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA644 = createNode("ColorRGBA");
ColorRGBA644.USE = "HAnimSegmentLineColorRGBA";
LineSet643.color = ColorRGBA644;

Coordinate Coordinate645 = createNode("Coordinate");
Coordinate645.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet643.coord = Coordinate645;

Shape642.geometry = LineSet643;

HAnimSegment638.children[1] = Shape642;

HAnimJoint637.children = new MFNode();

HAnimJoint637.children[0] = HAnimSegment638;

HAnimJoint HAnimJoint646 = createNode("HAnimJoint");
HAnimJoint646.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint646.name = "l_metacarpophalangeal_5";
HAnimJoint646.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment647 = createNode("HAnimSegment");
HAnimSegment647.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimSegment647.name = "l_carpal_proximal_phalanx_5";
Transform Transform648 = createNode("Transform");
Transform648.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Transform Transform649 = createNode("Transform");
Shape Shape650 = createNode("Shape");
Shape650.USE = "HAnimJointShape";
Transform649.child = new undefined();

Transform649.child[0] = Shape650;

Transform648.children = new MFNode();

Transform648.children[0] = Transform649;

HAnimSegment647.children = new MFNode();

HAnimSegment647.children[0] = Transform648;

Shape Shape651 = createNode("Shape");
LineSet LineSet652 = createNode("LineSet");
LineSet652.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA653 = createNode("ColorRGBA");
ColorRGBA653.USE = "HAnimSegmentLineColorRGBA";
LineSet652.color = ColorRGBA653;

Coordinate Coordinate654 = createNode("Coordinate");
Coordinate654.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet652.coord = Coordinate654;

Shape651.geometry = LineSet652;

HAnimSegment647.children[1] = Shape651;

HAnimJoint646.children = new MFNode();

HAnimJoint646.children[0] = HAnimSegment647;

HAnimJoint HAnimJoint655 = createNode("HAnimJoint");
HAnimJoint655.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint655.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint655.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment656 = createNode("HAnimSegment");
HAnimSegment656.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimSegment656.name = "l_carpal_middle_phalanx_5";
Transform Transform657 = createNode("Transform");
Transform657.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Transform Transform658 = createNode("Transform");
Shape Shape659 = createNode("Shape");
Shape659.USE = "HAnimJointShape";
Transform658.child = new undefined();

Transform658.child[0] = Shape659;

Transform657.children = new MFNode();

Transform657.children[0] = Transform658;

HAnimSegment656.children = new MFNode();

HAnimSegment656.children[0] = Transform657;

Shape Shape660 = createNode("Shape");
LineSet LineSet661 = createNode("LineSet");
LineSet661.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA662 = createNode("ColorRGBA");
ColorRGBA662.USE = "HAnimSegmentLineColorRGBA";
LineSet661.color = ColorRGBA662;

Coordinate Coordinate663 = createNode("Coordinate");
Coordinate663.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet661.coord = Coordinate663;

Shape660.geometry = LineSet661;

HAnimSegment656.children[1] = Shape660;

HAnimSite HAnimSite664 = createNode("HAnimSite");
HAnimSite664.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite664.name = "l_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor665 = createNode("TouchSensor");
TouchSensor665.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite664.children = new MFNode();

HAnimSite664.children[0] = TouchSensor665;

Shape Shape666 = createNode("Shape");
Shape666.USE = "HAnimSiteShape";
HAnimSite664.children[1] = Shape666;

HAnimSegment656.children[2] = HAnimSite664;

HAnimJoint655.children = new MFNode();

HAnimJoint655.children[0] = HAnimSegment656;

HAnimJoint HAnimJoint667 = createNode("HAnimJoint");
HAnimJoint667.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint667.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint667.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint655.children[1] = HAnimJoint667;

HAnimJoint646.children[1] = HAnimJoint655;

HAnimJoint637.children[1] = HAnimJoint646;

HAnimJoint485.children[5] = HAnimJoint637;

HAnimJoint473.children[1] = HAnimJoint485;

HAnimJoint452.children[1] = HAnimJoint473;

HAnimJoint437.children[1] = HAnimJoint452;

HAnimJoint428.children[1] = HAnimJoint437;

HAnimJoint326.children[2] = HAnimJoint428;

HAnimJoint HAnimJoint668 = createNode("HAnimJoint");
HAnimJoint668.DEF = "hanim_r_sternoclavicular";
HAnimJoint668.name = "r_sternoclavicular";
HAnimJoint668.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimSegment HAnimSegment669 = createNode("HAnimSegment");
HAnimSegment669.DEF = "hanim_r_clavicle";
HAnimSegment669.name = "r_clavicle";
Transform Transform670 = createNode("Transform");
Transform670.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
Transform Transform671 = createNode("Transform");
Shape Shape672 = createNode("Shape");
Shape672.USE = "HAnimJointShape";
Transform671.child = new undefined();

Transform671.child[0] = Shape672;

Transform670.children = new MFNode();

Transform670.children[0] = Transform671;

HAnimSegment669.children = new MFNode();

HAnimSegment669.children[0] = Transform670;

Shape Shape673 = createNode("Shape");
LineSet LineSet674 = createNode("LineSet");
LineSet674.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA675 = createNode("ColorRGBA");
ColorRGBA675.USE = "HAnimSegmentLineColorRGBA";
LineSet674.color = ColorRGBA675;

Coordinate Coordinate676 = createNode("Coordinate");
Coordinate676.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet674.coord = Coordinate676;

Shape673.geometry = LineSet674;

HAnimSegment669.children[1] = Shape673;

HAnimJoint668.children = new MFNode();

HAnimJoint668.children[0] = HAnimSegment669;

HAnimJoint HAnimJoint677 = createNode("HAnimJoint");
HAnimJoint677.DEF = "hanim_r_acromioclavicular";
HAnimJoint677.name = "r_acromioclavicular";
HAnimJoint677.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimSegment HAnimSegment678 = createNode("HAnimSegment");
HAnimSegment678.DEF = "hanim_r_scapula";
HAnimSegment678.name = "r_scapula";
Transform Transform679 = createNode("Transform");
Transform679.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
Transform Transform680 = createNode("Transform");
Shape Shape681 = createNode("Shape");
Shape681.USE = "HAnimJointShape";
Transform680.child = new undefined();

Transform680.child[0] = Shape681;

Transform679.children = new MFNode();

Transform679.children[0] = Transform680;

HAnimSegment678.children = new MFNode();

HAnimSegment678.children[0] = Transform679;

Shape Shape682 = createNode("Shape");
LineSet LineSet683 = createNode("LineSet");
LineSet683.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA684 = createNode("ColorRGBA");
ColorRGBA684.USE = "HAnimSegmentLineColorRGBA";
LineSet683.color = ColorRGBA684;

Coordinate Coordinate685 = createNode("Coordinate");
Coordinate685.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet683.coord = Coordinate685;

Shape682.geometry = LineSet683;

HAnimSegment678.children[1] = Shape682;

HAnimSite HAnimSite686 = createNode("HAnimSite");
HAnimSite686.DEF = "hanim_r_bideltoid_pt";
HAnimSite686.name = "r_bideltoid_pt";
TouchSensor TouchSensor687 = createNode("TouchSensor");
TouchSensor687.description = "HAnimSite r_bideltoid_pt";
HAnimSite686.children = new MFNode();

HAnimSite686.children[0] = TouchSensor687;

Shape Shape688 = createNode("Shape");
Shape688.USE = "HAnimSiteShape";
HAnimSite686.children[1] = Shape688;

HAnimSegment678.children[2] = HAnimSite686;

HAnimSite HAnimSite689 = createNode("HAnimSite");
HAnimSite689.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite689.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite689.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor690 = createNode("TouchSensor");
TouchSensor690.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite689.children = new MFNode();

HAnimSite689.children[0] = TouchSensor690;

Shape Shape691 = createNode("Shape");
Shape691.USE = "HAnimSiteShape";
HAnimSite689.children[1] = Shape691;

HAnimSegment678.children[3] = HAnimSite689;

HAnimJoint677.children = new MFNode();

HAnimJoint677.children[0] = HAnimSegment678;

HAnimJoint HAnimJoint692 = createNode("HAnimJoint");
HAnimJoint692.DEF = "hanim_r_shoulder";
HAnimJoint692.name = "r_shoulder";
HAnimJoint692.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimSegment HAnimSegment693 = createNode("HAnimSegment");
HAnimSegment693.DEF = "hanim_r_upperarm";
HAnimSegment693.name = "r_upperarm";
Transform Transform694 = createNode("Transform");
Transform694.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform Transform695 = createNode("Transform");
Shape Shape696 = createNode("Shape");
Shape696.USE = "HAnimJointShape";
Transform695.child = new undefined();

Transform695.child[0] = Shape696;

Transform694.children = new MFNode();

Transform694.children[0] = Transform695;

HAnimSegment693.children = new MFNode();

HAnimSegment693.children[0] = Transform694;

Shape Shape697 = createNode("Shape");
LineSet LineSet698 = createNode("LineSet");
LineSet698.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA699 = createNode("ColorRGBA");
ColorRGBA699.USE = "HAnimSegmentLineColorRGBA";
LineSet698.color = ColorRGBA699;

Coordinate Coordinate700 = createNode("Coordinate");
Coordinate700.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet698.coord = Coordinate700;

Shape697.geometry = LineSet698;

HAnimSegment693.children[1] = Shape697;

HAnimSite HAnimSite701 = createNode("HAnimSite");
HAnimSite701.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite701.name = "r_humeral_medial_epicondyles_pt";
HAnimSite701.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor702 = createNode("TouchSensor");
TouchSensor702.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite701.children = new MFNode();

HAnimSite701.children[0] = TouchSensor702;

Shape Shape703 = createNode("Shape");
Shape703.USE = "HAnimSiteShape";
HAnimSite701.children[1] = Shape703;

HAnimSegment693.children[2] = HAnimSite701;

HAnimSite HAnimSite704 = createNode("HAnimSite");
HAnimSite704.DEF = "hanim_r_olecranon_pt";
HAnimSite704.name = "r_olecranon_pt";
HAnimSite704.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor705 = createNode("TouchSensor");
TouchSensor705.description = "HAnimSite r_olecranon_pt";
HAnimSite704.children = new MFNode();

HAnimSite704.children[0] = TouchSensor705;

Shape Shape706 = createNode("Shape");
Shape706.USE = "HAnimSiteShape";
HAnimSite704.children[1] = Shape706;

HAnimSegment693.children[3] = HAnimSite704;

HAnimSite HAnimSite707 = createNode("HAnimSite");
HAnimSite707.DEF = "hanim_r_radial_styloid_pt";
HAnimSite707.name = "r_radial_styloid_pt";
HAnimSite707.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor708 = createNode("TouchSensor");
TouchSensor708.description = "HAnimSite r_radial_styloid_pt";
HAnimSite707.children = new MFNode();

HAnimSite707.children[0] = TouchSensor708;

Shape Shape709 = createNode("Shape");
Shape709.USE = "HAnimSiteShape";
HAnimSite707.children[1] = Shape709;

HAnimSegment693.children[4] = HAnimSite707;

HAnimSite HAnimSite710 = createNode("HAnimSite");
HAnimSite710.DEF = "hanim_r_radiale_pt";
HAnimSite710.name = "r_radiale_pt";
HAnimSite710.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor711 = createNode("TouchSensor");
TouchSensor711.description = "HAnimSite r_radiale_pt";
HAnimSite710.children = new MFNode();

HAnimSite710.children[0] = TouchSensor711;

Shape Shape712 = createNode("Shape");
Shape712.USE = "HAnimSiteShape";
HAnimSite710.children[1] = Shape712;

HAnimSegment693.children[5] = HAnimSite710;

HAnimJoint692.children = new MFNode();

HAnimJoint692.children[0] = HAnimSegment693;

HAnimJoint HAnimJoint713 = createNode("HAnimJoint");
HAnimJoint713.DEF = "hanim_r_elbow";
HAnimJoint713.name = "r_elbow";
HAnimJoint713.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimSegment HAnimSegment714 = createNode("HAnimSegment");
HAnimSegment714.DEF = "hanim_r_forearm";
HAnimSegment714.name = "r_forearm";
Transform Transform715 = createNode("Transform");
Transform715.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform Transform716 = createNode("Transform");
Shape Shape717 = createNode("Shape");
Shape717.USE = "HAnimJointShape";
Transform716.child = new undefined();

Transform716.child[0] = Shape717;

Transform715.children = new MFNode();

Transform715.children[0] = Transform716;

HAnimSegment714.children = new MFNode();

HAnimSegment714.children[0] = Transform715;

Shape Shape718 = createNode("Shape");
LineSet LineSet719 = createNode("LineSet");
LineSet719.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA720 = createNode("ColorRGBA");
ColorRGBA720.USE = "HAnimSegmentLineColorRGBA";
LineSet719.color = ColorRGBA720;

Coordinate Coordinate721 = createNode("Coordinate");
Coordinate721.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet719.coord = Coordinate721;

Shape718.geometry = LineSet719;

HAnimSegment714.children[1] = Shape718;

HAnimSite HAnimSite722 = createNode("HAnimSite");
HAnimSite722.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite722.name = "r_ulnar_styloid_pt";
HAnimSite722.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor723 = createNode("TouchSensor");
TouchSensor723.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite722.children = new MFNode();

HAnimSite722.children[0] = TouchSensor723;

Shape Shape724 = createNode("Shape");
Shape724.USE = "HAnimSiteShape";
HAnimSite722.children[1] = Shape724;

HAnimSegment714.children[2] = HAnimSite722;

HAnimJoint713.children = new MFNode();

HAnimJoint713.children[0] = HAnimSegment714;

HAnimJoint HAnimJoint725 = createNode("HAnimJoint");
HAnimJoint725.DEF = "hanim_r_radiocarpal";
HAnimJoint725.name = "r_radiocarpal";
HAnimJoint725.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimSegment HAnimSegment726 = createNode("HAnimSegment");
HAnimSegment726.DEF = "hanim_r_carpal";
HAnimSegment726.name = "r_carpal";
Transform Transform727 = createNode("Transform");
Transform727.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform727.rotation = new SFRotation(new float[0,0,1,-3.14]);
Transform727.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform Transform728 = createNode("Transform");
Transform728.rotation = new SFRotation(new float[0,1,0,1.57]);
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
Coordinate733.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473]);
LineSet731.coord = Coordinate733;

Shape730.geometry = LineSet731;

HAnimSegment726.children[1] = Shape730;

Shape Shape734 = createNode("Shape");
LineSet LineSet735 = createNode("LineSet");
LineSet735.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA736 = createNode("ColorRGBA");
ColorRGBA736.USE = "HAnimSegmentLineColorRGBA";
LineSet735.color = ColorRGBA736;

Coordinate Coordinate737 = createNode("Coordinate");
Coordinate737.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218]);
LineSet735.coord = Coordinate737;

Shape734.geometry = LineSet735;

HAnimSegment726.children[2] = Shape734;

HAnimSite HAnimSite738 = createNode("HAnimSite");
HAnimSite738.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite738.name = "r_metacarpal_phalanx_2_pt";
HAnimSite738.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor739 = createNode("TouchSensor");
TouchSensor739.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite738.children = new MFNode();

HAnimSite738.children[0] = TouchSensor739;

Shape Shape740 = createNode("Shape");
Shape740.USE = "HAnimSiteShape";
HAnimSite738.children[1] = Shape740;

HAnimSegment726.children[3] = HAnimSite738;

Shape Shape741 = createNode("Shape");
LineSet LineSet742 = createNode("LineSet");
LineSet742.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA743 = createNode("ColorRGBA");
ColorRGBA743.USE = "HAnimSegmentLineColorRGBA";
LineSet742.color = ColorRGBA743;

Coordinate Coordinate744 = createNode("Coordinate");
Coordinate744.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468]);
LineSet742.coord = Coordinate744;

Shape741.geometry = LineSet742;

HAnimSegment726.children[4] = Shape741;

HAnimSite HAnimSite745 = createNode("HAnimSite");
HAnimSite745.DEF = "hanim_r_metacarpal_phalanx_3_pt";
HAnimSite745.name = "r_metacarpal_phalanx_3_pt";
TouchSensor TouchSensor746 = createNode("TouchSensor");
TouchSensor746.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite745.children = new MFNode();

HAnimSite745.children[0] = TouchSensor746;

Shape Shape747 = createNode("Shape");
Shape747.USE = "HAnimSiteShape";
HAnimSite745.children[1] = Shape747;

HAnimSegment726.children[5] = HAnimSite745;

Shape Shape748 = createNode("Shape");
LineSet LineSet749 = createNode("LineSet");
LineSet749.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA750 = createNode("ColorRGBA");
ColorRGBA750.USE = "HAnimSegmentLineColorRGBA";
LineSet749.color = ColorRGBA750;

Coordinate Coordinate751 = createNode("Coordinate");
Coordinate751.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732]);
LineSet749.coord = Coordinate751;

Shape748.geometry = LineSet749;

HAnimSegment726.children[6] = Shape748;

Shape Shape752 = createNode("Shape");
LineSet LineSet753 = createNode("LineSet");
LineSet753.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA754 = createNode("ColorRGBA");
ColorRGBA754.USE = "HAnimSegmentLineColorRGBA";
LineSet753.color = ColorRGBA754;

Coordinate Coordinate755 = createNode("Coordinate");
Coordinate755.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975]);
LineSet753.coord = Coordinate755;

Shape752.geometry = LineSet753;

HAnimSegment726.children[7] = Shape752;

HAnimSite HAnimSite756 = createNode("HAnimSite");
HAnimSite756.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite756.name = "r_metacarpal_phalanx_5_pt";
HAnimSite756.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor757 = createNode("TouchSensor");
TouchSensor757.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite756.children = new MFNode();

HAnimSite756.children[0] = TouchSensor757;

Shape Shape758 = createNode("Shape");
Shape758.USE = "HAnimSiteShape";
HAnimSite756.children[1] = Shape758;

HAnimSegment726.children[8] = HAnimSite756;

HAnimJoint725.children = new MFNode();

HAnimJoint725.children[0] = HAnimSegment726;

HAnimJoint HAnimJoint759 = createNode("HAnimJoint");
HAnimJoint759.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint759.name = "r_carpometacarpal_1";
HAnimJoint759.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimSegment HAnimSegment760 = createNode("HAnimSegment");
HAnimSegment760.DEF = "hanim_r_metacarpal_1";
HAnimSegment760.name = "r_metacarpal_1";
Transform Transform761 = createNode("Transform");
Transform761.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
Transform Transform762 = createNode("Transform");
Shape Shape763 = createNode("Shape");
Shape763.USE = "HAnimJointShape";
Transform762.child = new undefined();

Transform762.child[0] = Shape763;

Transform761.children = new MFNode();

Transform761.children[0] = Transform762;

HAnimSegment760.children = new MFNode();

HAnimSegment760.children[0] = Transform761;

Shape Shape764 = createNode("Shape");
LineSet LineSet765 = createNode("LineSet");
LineSet765.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA766 = createNode("ColorRGBA");
ColorRGBA766.USE = "HAnimSegmentLineColorRGBA";
LineSet765.color = ColorRGBA766;

Coordinate Coordinate767 = createNode("Coordinate");
Coordinate767.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet765.coord = Coordinate767;

Shape764.geometry = LineSet765;

HAnimSegment760.children[1] = Shape764;

HAnimJoint759.children = new MFNode();

HAnimJoint759.children[0] = HAnimSegment760;

HAnimJoint HAnimJoint768 = createNode("HAnimJoint");
HAnimJoint768.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint768.name = "r_metacarpophalangeal_1";
HAnimJoint768.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimSegment HAnimSegment769 = createNode("HAnimSegment");
HAnimSegment769.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimSegment769.name = "r_carpal_proximal_phalanx_1";
Transform Transform770 = createNode("Transform");
Transform770.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
Transform Transform771 = createNode("Transform");
Shape Shape772 = createNode("Shape");
Shape772.USE = "HAnimJointShape";
Transform771.child = new undefined();

Transform771.child[0] = Shape772;

Transform770.children = new MFNode();

Transform770.children[0] = Transform771;

HAnimSegment769.children = new MFNode();

HAnimSegment769.children[0] = Transform770;

Shape Shape773 = createNode("Shape");
LineSet LineSet774 = createNode("LineSet");
LineSet774.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA775 = createNode("ColorRGBA");
ColorRGBA775.USE = "HAnimSegmentLineColorRGBA";
LineSet774.color = ColorRGBA775;

Coordinate Coordinate776 = createNode("Coordinate");
Coordinate776.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet774.coord = Coordinate776;

Shape773.geometry = LineSet774;

HAnimSegment769.children[1] = Shape773;

HAnimSite HAnimSite777 = createNode("HAnimSite");
HAnimSite777.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite777.name = "r_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor778 = createNode("TouchSensor");
TouchSensor778.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite777.children = new MFNode();

HAnimSite777.children[0] = TouchSensor778;

Shape Shape779 = createNode("Shape");
Shape779.USE = "HAnimSiteShape";
HAnimSite777.children[1] = Shape779;

HAnimSegment769.children[2] = HAnimSite777;

HAnimJoint768.children = new MFNode();

HAnimJoint768.children[0] = HAnimSegment769;

HAnimJoint HAnimJoint780 = createNode("HAnimJoint");
HAnimJoint780.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint780.name = "r_carpal_interphalangeal_1";
HAnimJoint780.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint768.children[1] = HAnimJoint780;

HAnimJoint759.children[1] = HAnimJoint768;

HAnimJoint725.children[1] = HAnimJoint759;

HAnimJoint HAnimJoint781 = createNode("HAnimJoint");
HAnimJoint781.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint781.name = "r_carpometacarpal_2";
HAnimJoint781.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimSegment HAnimSegment782 = createNode("HAnimSegment");
HAnimSegment782.DEF = "hanim_r_metacarpal_2";
HAnimSegment782.name = "r_metacarpal_2";
Transform Transform783 = createNode("Transform");
Transform783.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
Transform Transform784 = createNode("Transform");
Shape Shape785 = createNode("Shape");
Shape785.USE = "HAnimJointShape";
Transform784.child = new undefined();

Transform784.child[0] = Shape785;

Transform783.children = new MFNode();

Transform783.children[0] = Transform784;

HAnimSegment782.children = new MFNode();

HAnimSegment782.children[0] = Transform783;

Shape Shape786 = createNode("Shape");
LineSet LineSet787 = createNode("LineSet");
LineSet787.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA788 = createNode("ColorRGBA");
ColorRGBA788.USE = "HAnimSegmentLineColorRGBA";
LineSet787.color = ColorRGBA788;

Coordinate Coordinate789 = createNode("Coordinate");
Coordinate789.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet787.coord = Coordinate789;

Shape786.geometry = LineSet787;

HAnimSegment782.children[1] = Shape786;

HAnimJoint781.children = new MFNode();

HAnimJoint781.children[0] = HAnimSegment782;

HAnimJoint HAnimJoint790 = createNode("HAnimJoint");
HAnimJoint790.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint790.name = "r_metacarpophalangeal_2";
HAnimJoint790.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimSegment HAnimSegment791 = createNode("HAnimSegment");
HAnimSegment791.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimSegment791.name = "r_carpal_proximal_phalanx_2";
Transform Transform792 = createNode("Transform");
Transform792.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
Transform Transform793 = createNode("Transform");
Shape Shape794 = createNode("Shape");
Shape794.USE = "HAnimJointShape";
Transform793.child = new undefined();

Transform793.child[0] = Shape794;

Transform792.children = new MFNode();

Transform792.children[0] = Transform793;

HAnimSegment791.children = new MFNode();

HAnimSegment791.children[0] = Transform792;

Shape Shape795 = createNode("Shape");
LineSet LineSet796 = createNode("LineSet");
LineSet796.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA797 = createNode("ColorRGBA");
ColorRGBA797.USE = "HAnimSegmentLineColorRGBA";
LineSet796.color = ColorRGBA797;

Coordinate Coordinate798 = createNode("Coordinate");
Coordinate798.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet796.coord = Coordinate798;

Shape795.geometry = LineSet796;

HAnimSegment791.children[1] = Shape795;

HAnimJoint790.children = new MFNode();

HAnimJoint790.children[0] = HAnimSegment791;

HAnimJoint HAnimJoint799 = createNode("HAnimJoint");
HAnimJoint799.DEF = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimJoint799.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint799.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimSegment HAnimSegment800 = createNode("HAnimSegment");
HAnimSegment800.DEF = "hanim_r_carpal_middle_phalanx_1";
HAnimSegment800.name = "r_carpal_middle_phalanx_2";
Transform Transform801 = createNode("Transform");
Transform801.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
Transform Transform802 = createNode("Transform");
Shape Shape803 = createNode("Shape");
Shape803.USE = "HAnimJointShape";
Transform802.child = new undefined();

Transform802.child[0] = Shape803;

Transform801.children = new MFNode();

Transform801.children[0] = Transform802;

HAnimSegment800.children = new MFNode();

HAnimSegment800.children[0] = Transform801;

Shape Shape804 = createNode("Shape");
LineSet LineSet805 = createNode("LineSet");
LineSet805.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA806 = createNode("ColorRGBA");
ColorRGBA806.USE = "HAnimSegmentLineColorRGBA";
LineSet805.color = ColorRGBA806;

Coordinate Coordinate807 = createNode("Coordinate");
Coordinate807.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet805.coord = Coordinate807;

Shape804.geometry = LineSet805;

HAnimSegment800.children[1] = Shape804;

HAnimSite HAnimSite808 = createNode("HAnimSite");
HAnimSite808.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite808.name = "r_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor809 = createNode("TouchSensor");
TouchSensor809.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite808.children = new MFNode();

HAnimSite808.children[0] = TouchSensor809;

Shape Shape810 = createNode("Shape");
Shape810.USE = "HAnimSiteShape";
HAnimSite808.children[1] = Shape810;

HAnimSegment800.children[2] = HAnimSite808;

HAnimSite HAnimSite811 = createNode("HAnimSite");
HAnimSite811.DEF = "hanim_r_dactylion_pt";
HAnimSite811.name = "r_dactylion_pt";
HAnimSite811.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor812 = createNode("TouchSensor");
TouchSensor812.description = "HAnimSite r_dactylion_pt";
HAnimSite811.children = new MFNode();

HAnimSite811.children[0] = TouchSensor812;

Shape Shape813 = createNode("Shape");
Shape813.USE = "HAnimSiteShape";
HAnimSite811.children[1] = Shape813;

HAnimSegment800.children[3] = HAnimSite811;

HAnimJoint799.children = new MFNode();

HAnimJoint799.children[0] = HAnimSegment800;

HAnimJoint HAnimJoint814 = createNode("HAnimJoint");
HAnimJoint814.DEF = "hanim_r_carpal_distal_interphalangeal_1";
HAnimJoint814.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint814.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint799.children[1] = HAnimJoint814;

HAnimJoint790.children[1] = HAnimJoint799;

HAnimJoint781.children[1] = HAnimJoint790;

HAnimJoint725.children[2] = HAnimJoint781;

HAnimJoint HAnimJoint815 = createNode("HAnimJoint");
HAnimJoint815.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint815.name = "r_carpometacarpal_3";
HAnimJoint815.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimSegment HAnimSegment816 = createNode("HAnimSegment");
HAnimSegment816.DEF = "hanim_r_metacarpal_3";
HAnimSegment816.name = "r_metacarpal_3";
Transform Transform817 = createNode("Transform");
Transform817.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
Transform Transform818 = createNode("Transform");
Shape Shape819 = createNode("Shape");
Shape819.USE = "HAnimJointShape";
Transform818.child = new undefined();

Transform818.child[0] = Shape819;

Transform817.children = new MFNode();

Transform817.children[0] = Transform818;

HAnimSegment816.children = new MFNode();

HAnimSegment816.children[0] = Transform817;

Shape Shape820 = createNode("Shape");
LineSet LineSet821 = createNode("LineSet");
LineSet821.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA822 = createNode("ColorRGBA");
ColorRGBA822.USE = "HAnimSegmentLineColorRGBA";
LineSet821.color = ColorRGBA822;

Coordinate Coordinate823 = createNode("Coordinate");
Coordinate823.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet821.coord = Coordinate823;

Shape820.geometry = LineSet821;

HAnimSegment816.children[1] = Shape820;

HAnimJoint815.children = new MFNode();

HAnimJoint815.children[0] = HAnimSegment816;

HAnimJoint HAnimJoint824 = createNode("HAnimJoint");
HAnimJoint824.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint824.name = "r_metacarpophalangeal_3";
HAnimJoint824.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimSegment HAnimSegment825 = createNode("HAnimSegment");
HAnimSegment825.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimSegment825.name = "r_carpal_proximal_phalanx_3";
Transform Transform826 = createNode("Transform");
Transform826.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
Transform Transform827 = createNode("Transform");
Shape Shape828 = createNode("Shape");
Shape828.USE = "HAnimJointShape";
Transform827.child = new undefined();

Transform827.child[0] = Shape828;

Transform826.children = new MFNode();

Transform826.children[0] = Transform827;

HAnimSegment825.children = new MFNode();

HAnimSegment825.children[0] = Transform826;

Shape Shape829 = createNode("Shape");
LineSet LineSet830 = createNode("LineSet");
LineSet830.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA831 = createNode("ColorRGBA");
ColorRGBA831.USE = "HAnimSegmentLineColorRGBA";
LineSet830.color = ColorRGBA831;

Coordinate Coordinate832 = createNode("Coordinate");
Coordinate832.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet830.coord = Coordinate832;

Shape829.geometry = LineSet830;

HAnimSegment825.children[1] = Shape829;

HAnimJoint824.children = new MFNode();

HAnimJoint824.children[0] = HAnimSegment825;

HAnimJoint HAnimJoint833 = createNode("HAnimJoint");
HAnimJoint833.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint833.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint833.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimSegment HAnimSegment834 = createNode("HAnimSegment");
HAnimSegment834.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimSegment834.name = "r_carpal_middle_phalanx_3";
Transform Transform835 = createNode("Transform");
Transform835.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
Transform Transform836 = createNode("Transform");
Shape Shape837 = createNode("Shape");
Shape837.USE = "HAnimJointShape";
Transform836.child = new undefined();

Transform836.child[0] = Shape837;

Transform835.children = new MFNode();

Transform835.children[0] = Transform836;

HAnimSegment834.children = new MFNode();

HAnimSegment834.children[0] = Transform835;

Shape Shape838 = createNode("Shape");
LineSet LineSet839 = createNode("LineSet");
LineSet839.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA840 = createNode("ColorRGBA");
ColorRGBA840.USE = "HAnimSegmentLineColorRGBA";
LineSet839.color = ColorRGBA840;

Coordinate Coordinate841 = createNode("Coordinate");
Coordinate841.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet839.coord = Coordinate841;

Shape838.geometry = LineSet839;

HAnimSegment834.children[1] = Shape838;

HAnimSite HAnimSite842 = createNode("HAnimSite");
HAnimSite842.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite842.name = "r_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor843 = createNode("TouchSensor");
TouchSensor843.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite842.children = new MFNode();

HAnimSite842.children[0] = TouchSensor843;

Shape Shape844 = createNode("Shape");
Shape844.USE = "HAnimSiteShape";
HAnimSite842.children[1] = Shape844;

HAnimSegment834.children[2] = HAnimSite842;

HAnimJoint833.children = new MFNode();

HAnimJoint833.children[0] = HAnimSegment834;

HAnimJoint HAnimJoint845 = createNode("HAnimJoint");
HAnimJoint845.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint845.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint845.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint833.children[1] = HAnimJoint845;

HAnimJoint824.children[1] = HAnimJoint833;

HAnimJoint815.children[1] = HAnimJoint824;

HAnimJoint725.children[3] = HAnimJoint815;

HAnimJoint HAnimJoint846 = createNode("HAnimJoint");
HAnimJoint846.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint846.name = "r_carpometacarpal_4";
HAnimJoint846.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimSegment HAnimSegment847 = createNode("HAnimSegment");
HAnimSegment847.DEF = "hanim_r_metacarpal_4";
HAnimSegment847.name = "r_metacarpal_4";
Transform Transform848 = createNode("Transform");
Transform848.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
Transform Transform849 = createNode("Transform");
Shape Shape850 = createNode("Shape");
Shape850.USE = "HAnimJointShape";
Transform849.child = new undefined();

Transform849.child[0] = Shape850;

Transform848.children = new MFNode();

Transform848.children[0] = Transform849;

HAnimSegment847.children = new MFNode();

HAnimSegment847.children[0] = Transform848;

Shape Shape851 = createNode("Shape");
LineSet LineSet852 = createNode("LineSet");
LineSet852.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA853 = createNode("ColorRGBA");
ColorRGBA853.USE = "HAnimSegmentLineColorRGBA";
LineSet852.color = ColorRGBA853;

Coordinate Coordinate854 = createNode("Coordinate");
Coordinate854.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet852.coord = Coordinate854;

Shape851.geometry = LineSet852;

HAnimSegment847.children[1] = Shape851;

HAnimJoint846.children = new MFNode();

HAnimJoint846.children[0] = HAnimSegment847;

HAnimJoint HAnimJoint855 = createNode("HAnimJoint");
HAnimJoint855.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint855.name = "r_metacarpophalangeal_4";
HAnimJoint855.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimSegment HAnimSegment856 = createNode("HAnimSegment");
HAnimSegment856.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimSegment856.name = "r_carpal_proximal_phalanx_4";
Transform Transform857 = createNode("Transform");
Transform857.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
Transform Transform858 = createNode("Transform");
Shape Shape859 = createNode("Shape");
Shape859.USE = "HAnimJointShape";
Transform858.child = new undefined();

Transform858.child[0] = Shape859;

Transform857.children = new MFNode();

Transform857.children[0] = Transform858;

HAnimSegment856.children = new MFNode();

HAnimSegment856.children[0] = Transform857;

Shape Shape860 = createNode("Shape");
LineSet LineSet861 = createNode("LineSet");
LineSet861.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA862 = createNode("ColorRGBA");
ColorRGBA862.USE = "HAnimSegmentLineColorRGBA";
LineSet861.color = ColorRGBA862;

Coordinate Coordinate863 = createNode("Coordinate");
Coordinate863.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet861.coord = Coordinate863;

Shape860.geometry = LineSet861;

HAnimSegment856.children[1] = Shape860;

HAnimJoint855.children = new MFNode();

HAnimJoint855.children[0] = HAnimSegment856;

HAnimJoint HAnimJoint864 = createNode("HAnimJoint");
HAnimJoint864.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint864.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint864.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimSegment HAnimSegment865 = createNode("HAnimSegment");
HAnimSegment865.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimSegment865.name = "r_carpal_middle_phalanx_4";
Transform Transform866 = createNode("Transform");
Transform866.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
Transform Transform867 = createNode("Transform");
Shape Shape868 = createNode("Shape");
Shape868.USE = "HAnimJointShape";
Transform867.child = new undefined();

Transform867.child[0] = Shape868;

Transform866.children = new MFNode();

Transform866.children[0] = Transform867;

HAnimSegment865.children = new MFNode();

HAnimSegment865.children[0] = Transform866;

Shape Shape869 = createNode("Shape");
LineSet LineSet870 = createNode("LineSet");
LineSet870.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA871 = createNode("ColorRGBA");
ColorRGBA871.USE = "HAnimSegmentLineColorRGBA";
LineSet870.color = ColorRGBA871;

Coordinate Coordinate872 = createNode("Coordinate");
Coordinate872.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet870.coord = Coordinate872;

Shape869.geometry = LineSet870;

HAnimSegment865.children[1] = Shape869;

HAnimSite HAnimSite873 = createNode("HAnimSite");
HAnimSite873.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite873.name = "r_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor874 = createNode("TouchSensor");
TouchSensor874.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite873.children = new MFNode();

HAnimSite873.children[0] = TouchSensor874;

Shape Shape875 = createNode("Shape");
Shape875.USE = "HAnimSiteShape";
HAnimSite873.children[1] = Shape875;

HAnimSegment865.children[2] = HAnimSite873;

HAnimJoint864.children = new MFNode();

HAnimJoint864.children[0] = HAnimSegment865;

HAnimJoint HAnimJoint876 = createNode("HAnimJoint");
HAnimJoint876.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint876.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint876.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint864.children[1] = HAnimJoint876;

HAnimJoint855.children[1] = HAnimJoint864;

HAnimJoint846.children[1] = HAnimJoint855;

HAnimJoint725.children[4] = HAnimJoint846;

HAnimJoint HAnimJoint877 = createNode("HAnimJoint");
HAnimJoint877.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint877.name = "r_carpometacarpal_5";
HAnimJoint877.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimSegment HAnimSegment878 = createNode("HAnimSegment");
HAnimSegment878.DEF = "hanim_r_metacarpal_5";
HAnimSegment878.name = "r_metacarpal_5";
Transform Transform879 = createNode("Transform");
Transform879.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
Transform Transform880 = createNode("Transform");
Shape Shape881 = createNode("Shape");
Shape881.USE = "HAnimJointShape";
Transform880.child = new undefined();

Transform880.child[0] = Shape881;

Transform879.children = new MFNode();

Transform879.children[0] = Transform880;

HAnimSegment878.children = new MFNode();

HAnimSegment878.children[0] = Transform879;

Shape Shape882 = createNode("Shape");
LineSet LineSet883 = createNode("LineSet");
LineSet883.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA884 = createNode("ColorRGBA");
ColorRGBA884.USE = "HAnimSegmentLineColorRGBA";
LineSet883.color = ColorRGBA884;

Coordinate Coordinate885 = createNode("Coordinate");
Coordinate885.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet883.coord = Coordinate885;

Shape882.geometry = LineSet883;

HAnimSegment878.children[1] = Shape882;

HAnimJoint877.children = new MFNode();

HAnimJoint877.children[0] = HAnimSegment878;

HAnimJoint HAnimJoint886 = createNode("HAnimJoint");
HAnimJoint886.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint886.name = "r_metacarpophalangeal_5";
HAnimJoint886.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimSegment HAnimSegment887 = createNode("HAnimSegment");
HAnimSegment887.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimSegment887.name = "r_carpal_proximal_phalanx_5";
Transform Transform888 = createNode("Transform");
Transform888.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
Transform Transform889 = createNode("Transform");
Shape Shape890 = createNode("Shape");
Shape890.USE = "HAnimJointShape";
Transform889.child = new undefined();

Transform889.child[0] = Shape890;

Transform888.children = new MFNode();

Transform888.children[0] = Transform889;

HAnimSegment887.children = new MFNode();

HAnimSegment887.children[0] = Transform888;

Shape Shape891 = createNode("Shape");
LineSet LineSet892 = createNode("LineSet");
LineSet892.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA893 = createNode("ColorRGBA");
ColorRGBA893.USE = "HAnimSegmentLineColorRGBA";
LineSet892.color = ColorRGBA893;

Coordinate Coordinate894 = createNode("Coordinate");
Coordinate894.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet892.coord = Coordinate894;

Shape891.geometry = LineSet892;

HAnimSegment887.children[1] = Shape891;

HAnimJoint886.children = new MFNode();

HAnimJoint886.children[0] = HAnimSegment887;

HAnimJoint HAnimJoint895 = createNode("HAnimJoint");
HAnimJoint895.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint895.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint895.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimSegment HAnimSegment896 = createNode("HAnimSegment");
HAnimSegment896.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimSegment896.name = "r_carpal_middle_phalanx_5";
Transform Transform897 = createNode("Transform");
Transform897.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
Transform Transform898 = createNode("Transform");
Shape Shape899 = createNode("Shape");
Shape899.USE = "HAnimJointShape";
Transform898.child = new undefined();

Transform898.child[0] = Shape899;

Transform897.children = new MFNode();

Transform897.children[0] = Transform898;

HAnimSegment896.children = new MFNode();

HAnimSegment896.children[0] = Transform897;

Shape Shape900 = createNode("Shape");
LineSet LineSet901 = createNode("LineSet");
LineSet901.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA902 = createNode("ColorRGBA");
ColorRGBA902.USE = "HAnimSegmentLineColorRGBA";
LineSet901.color = ColorRGBA902;

Coordinate Coordinate903 = createNode("Coordinate");
Coordinate903.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet901.coord = Coordinate903;

Shape900.geometry = LineSet901;

HAnimSegment896.children[1] = Shape900;

HAnimSite HAnimSite904 = createNode("HAnimSite");
HAnimSite904.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite904.name = "r_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor905 = createNode("TouchSensor");
TouchSensor905.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite904.children = new MFNode();

HAnimSite904.children[0] = TouchSensor905;

Shape Shape906 = createNode("Shape");
Shape906.USE = "HAnimSiteShape";
HAnimSite904.children[1] = Shape906;

HAnimSegment896.children[2] = HAnimSite904;

HAnimJoint895.children = new MFNode();

HAnimJoint895.children[0] = HAnimSegment896;

HAnimJoint HAnimJoint907 = createNode("HAnimJoint");
HAnimJoint907.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint907.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint907.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint895.children[1] = HAnimJoint907;

HAnimJoint886.children[1] = HAnimJoint895;

HAnimJoint877.children[1] = HAnimJoint886;

HAnimJoint725.children[5] = HAnimJoint877;

HAnimJoint713.children[1] = HAnimJoint725;

HAnimJoint692.children[1] = HAnimJoint713;

HAnimJoint677.children[1] = HAnimJoint692;

HAnimJoint668.children[1] = HAnimJoint677;

HAnimJoint326.children[3] = HAnimJoint668;

HAnimJoint311.children[1] = HAnimJoint326;

HAnimJoint290.children[1] = HAnimJoint311;

HAnimJoint278.children[1] = HAnimJoint290;

HAnimJoint269.children[1] = HAnimJoint278;

HAnimJoint260.children[1] = HAnimJoint269;

HAnimJoint43.children[2] = HAnimJoint260;

HAnimHumanoid42.joints = new MFNode();

HAnimHumanoid42.joints[0] = HAnimJoint43;

HAnimSite HAnimSite908 = createNode("HAnimSite");
HAnimSite908.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid42.viewpoints[1] = HAnimSite908;

HAnimSite HAnimSite909 = createNode("HAnimSite");
HAnimSite909.USE = "hanim_crotch_pt";
HAnimHumanoid42.viewpoints[2] = HAnimSite909;

HAnimSite HAnimSite910 = createNode("HAnimSite");
HAnimSite910.USE = "hanim_l_asis_pt";
HAnimHumanoid42.viewpoints[3] = HAnimSite910;

HAnimSite HAnimSite911 = createNode("HAnimSite");
HAnimSite911.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid42.viewpoints[4] = HAnimSite911;

HAnimSite HAnimSite912 = createNode("HAnimSite");
HAnimSite912.USE = "hanim_l_psis_pt";
HAnimHumanoid42.viewpoints[5] = HAnimSite912;

HAnimSite HAnimSite913 = createNode("HAnimSite");
HAnimSite913.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid42.viewpoints[6] = HAnimSite913;

HAnimSite HAnimSite914 = createNode("HAnimSite");
HAnimSite914.USE = "hanim_r_asis_pt";
HAnimHumanoid42.viewpoints[7] = HAnimSite914;

HAnimSite HAnimSite915 = createNode("HAnimSite");
HAnimSite915.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid42.viewpoints[8] = HAnimSite915;

HAnimSite HAnimSite916 = createNode("HAnimSite");
HAnimSite916.USE = "hanim_r_psis_pt";
HAnimHumanoid42.viewpoints[9] = HAnimSite916;

HAnimSite HAnimSite917 = createNode("HAnimSite");
HAnimSite917.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid42.viewpoints[10] = HAnimSite917;

HAnimSite HAnimSite918 = createNode("HAnimSite");
HAnimSite918.USE = "hanim_navel_pt";
HAnimHumanoid42.viewpoints[11] = HAnimSite918;

HAnimSite HAnimSite919 = createNode("HAnimSite");
HAnimSite919.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid42.viewpoints[12] = HAnimSite919;

HAnimSite HAnimSite920 = createNode("HAnimSite");
HAnimSite920.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid42.viewpoints[13] = HAnimSite920;

HAnimSite HAnimSite921 = createNode("HAnimSite");
HAnimSite921.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[14] = HAnimSite921;

HAnimSite HAnimSite922 = createNode("HAnimSite");
HAnimSite922.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[15] = HAnimSite922;

HAnimSite HAnimSite923 = createNode("HAnimSite");
HAnimSite923.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid42.viewpoints[16] = HAnimSite923;

HAnimSite HAnimSite924 = createNode("HAnimSite");
HAnimSite924.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid42.viewpoints[17] = HAnimSite924;

HAnimSite HAnimSite925 = createNode("HAnimSite");
HAnimSite925.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[18] = HAnimSite925;

HAnimSite HAnimSite926 = createNode("HAnimSite");
HAnimSite926.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[19] = HAnimSite926;

HAnimSite HAnimSite927 = createNode("HAnimSite");
HAnimSite927.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid42.viewpoints[20] = HAnimSite927;

HAnimSite HAnimSite928 = createNode("HAnimSite");
HAnimSite928.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid42.viewpoints[21] = HAnimSite928;

HAnimSite HAnimSite929 = createNode("HAnimSite");
HAnimSite929.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[22] = HAnimSite929;

HAnimSite HAnimSite930 = createNode("HAnimSite");
HAnimSite930.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[23] = HAnimSite930;

HAnimSite HAnimSite931 = createNode("HAnimSite");
HAnimSite931.USE = "hanim_l_tibiale_pt";
HAnimHumanoid42.viewpoints[24] = HAnimSite931;

HAnimSite HAnimSite932 = createNode("HAnimSite");
HAnimSite932.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[25] = HAnimSite932;

HAnimSite HAnimSite933 = createNode("HAnimSite");
HAnimSite933.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid42.viewpoints[26] = HAnimSite933;

HAnimSite HAnimSite934 = createNode("HAnimSite");
HAnimSite934.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[27] = HAnimSite934;

HAnimSite HAnimSite935 = createNode("HAnimSite");
HAnimSite935.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[28] = HAnimSite935;

HAnimSite HAnimSite936 = createNode("HAnimSite");
HAnimSite936.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[29] = HAnimSite936;

HAnimSite HAnimSite937 = createNode("HAnimSite");
HAnimSite937.USE = "hanim_r_tibiale_pt";
HAnimHumanoid42.viewpoints[30] = HAnimSite937;

HAnimSite HAnimSite938 = createNode("HAnimSite");
HAnimSite938.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[31] = HAnimSite938;

HAnimSite HAnimSite939 = createNode("HAnimSite");
HAnimSite939.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid42.viewpoints[32] = HAnimSite939;

HAnimSite HAnimSite940 = createNode("HAnimSite");
HAnimSite940.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[33] = HAnimSite940;

HAnimSite HAnimSite941 = createNode("HAnimSite");
HAnimSite941.USE = "hanim_substernale_pt";
HAnimHumanoid42.viewpoints[34] = HAnimSite941;

HAnimSite HAnimSite942 = createNode("HAnimSite");
HAnimSite942.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[35] = HAnimSite942;

HAnimSite HAnimSite943 = createNode("HAnimSite");
HAnimSite943.USE = "hanim_mesosternale_pt";
HAnimHumanoid42.viewpoints[36] = HAnimSite943;

HAnimSite HAnimSite944 = createNode("HAnimSite");
HAnimSite944.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[37] = HAnimSite944;

HAnimSite HAnimSite945 = createNode("HAnimSite");
HAnimSite945.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[38] = HAnimSite945;

HAnimSite HAnimSite946 = createNode("HAnimSite");
HAnimSite946.USE = "hanim_cervicale_pt";
HAnimHumanoid42.viewpoints[39] = HAnimSite946;

HAnimSite HAnimSite947 = createNode("HAnimSite");
HAnimSite947.USE = "hanim_suprasternale_pt";
HAnimHumanoid42.viewpoints[40] = HAnimSite947;

HAnimSite HAnimSite948 = createNode("HAnimSite");
HAnimSite948.USE = "hanim_l_acromion_pt";
HAnimHumanoid42.viewpoints[41] = HAnimSite948;

HAnimSite HAnimSite949 = createNode("HAnimSite");
HAnimSite949.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid42.viewpoints[42] = HAnimSite949;

HAnimSite HAnimSite950 = createNode("HAnimSite");
HAnimSite950.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid42.viewpoints[43] = HAnimSite950;

HAnimSite HAnimSite951 = createNode("HAnimSite");
HAnimSite951.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid42.viewpoints[44] = HAnimSite951;

HAnimSite HAnimSite952 = createNode("HAnimSite");
HAnimSite952.USE = "hanim_l_clavicale_pt";
HAnimHumanoid42.viewpoints[45] = HAnimSite952;

HAnimSite HAnimSite953 = createNode("HAnimSite");
HAnimSite953.USE = "hanim_r_acromion_pt";
HAnimHumanoid42.viewpoints[46] = HAnimSite953;

HAnimSite HAnimSite954 = createNode("HAnimSite");
HAnimSite954.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid42.viewpoints[47] = HAnimSite954;

HAnimSite HAnimSite955 = createNode("HAnimSite");
HAnimSite955.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid42.viewpoints[48] = HAnimSite955;

HAnimSite HAnimSite956 = createNode("HAnimSite");
HAnimSite956.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid42.viewpoints[49] = HAnimSite956;

HAnimSite HAnimSite957 = createNode("HAnimSite");
HAnimSite957.USE = "hanim_r_clavicale_pt";
HAnimHumanoid42.viewpoints[50] = HAnimSite957;

HAnimSite HAnimSite958 = createNode("HAnimSite");
HAnimSite958.USE = "hanim_adams_apple_pt";
HAnimHumanoid42.viewpoints[51] = HAnimSite958;

HAnimSite HAnimSite959 = createNode("HAnimSite");
HAnimSite959.USE = "hanim_glabella_pt";
HAnimHumanoid42.viewpoints[52] = HAnimSite959;

HAnimSite HAnimSite960 = createNode("HAnimSite");
HAnimSite960.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid42.viewpoints[53] = HAnimSite960;

HAnimSite HAnimSite961 = createNode("HAnimSite");
HAnimSite961.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid42.viewpoints[54] = HAnimSite961;

HAnimSite HAnimSite962 = createNode("HAnimSite");
HAnimSite962.USE = "hanim_l_tragion_pt";
HAnimHumanoid42.viewpoints[55] = HAnimSite962;

HAnimSite HAnimSite963 = createNode("HAnimSite");
HAnimSite963.USE = "hanim_nuchale_pt";
HAnimHumanoid42.viewpoints[56] = HAnimSite963;

HAnimSite HAnimSite964 = createNode("HAnimSite");
HAnimSite964.USE = "hanim_opisthocranion_pt";
HAnimHumanoid42.viewpoints[57] = HAnimSite964;

HAnimSite HAnimSite965 = createNode("HAnimSite");
HAnimSite965.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid42.viewpoints[58] = HAnimSite965;

HAnimSite HAnimSite966 = createNode("HAnimSite");
HAnimSite966.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid42.viewpoints[59] = HAnimSite966;

HAnimSite HAnimSite967 = createNode("HAnimSite");
HAnimSite967.USE = "hanim_r_tragion_pt";
HAnimHumanoid42.viewpoints[60] = HAnimSite967;

HAnimSite HAnimSite968 = createNode("HAnimSite");
HAnimSite968.USE = "hanim_sellion_pt";
HAnimHumanoid42.viewpoints[61] = HAnimSite968;

HAnimSite HAnimSite969 = createNode("HAnimSite");
HAnimSite969.USE = "hanim_skull_vertex_pt";
HAnimHumanoid42.viewpoints[62] = HAnimSite969;

HAnimSite HAnimSite970 = createNode("HAnimSite");
HAnimSite970.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid42.viewpoints[63] = HAnimSite970;

HAnimSite HAnimSite971 = createNode("HAnimSite");
HAnimSite971.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[64] = HAnimSite971;

HAnimSite HAnimSite972 = createNode("HAnimSite");
HAnimSite972.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[65] = HAnimSite972;

HAnimSite HAnimSite973 = createNode("HAnimSite");
HAnimSite973.USE = "hanim_l_olecranon_pt";
HAnimHumanoid42.viewpoints[66] = HAnimSite973;

HAnimSite HAnimSite974 = createNode("HAnimSite");
HAnimSite974.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid42.viewpoints[67] = HAnimSite974;

HAnimSite HAnimSite975 = createNode("HAnimSite");
HAnimSite975.USE = "hanim_l_radiale_pt";
HAnimHumanoid42.viewpoints[68] = HAnimSite975;

HAnimSite HAnimSite976 = createNode("HAnimSite");
HAnimSite976.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[69] = HAnimSite976;

HAnimSite HAnimSite977 = createNode("HAnimSite");
HAnimSite977.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid42.viewpoints[70] = HAnimSite977;

HAnimSite HAnimSite978 = createNode("HAnimSite");
HAnimSite978.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid42.viewpoints[71] = HAnimSite978;

HAnimSite HAnimSite979 = createNode("HAnimSite");
HAnimSite979.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[72] = HAnimSite979;

HAnimSite HAnimSite980 = createNode("HAnimSite");
HAnimSite980.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[73] = HAnimSite980;

HAnimSite HAnimSite981 = createNode("HAnimSite");
HAnimSite981.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[74] = HAnimSite981;

HAnimSite HAnimSite982 = createNode("HAnimSite");
HAnimSite982.USE = "hanim_l_dactylion_pt";
HAnimHumanoid42.viewpoints[75] = HAnimSite982;

HAnimSite HAnimSite983 = createNode("HAnimSite");
HAnimSite983.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[76] = HAnimSite983;

HAnimSite HAnimSite984 = createNode("HAnimSite");
HAnimSite984.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[77] = HAnimSite984;

HAnimSite HAnimSite985 = createNode("HAnimSite");
HAnimSite985.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[78] = HAnimSite985;

HAnimSite HAnimSite986 = createNode("HAnimSite");
HAnimSite986.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid42.viewpoints[79] = HAnimSite986;

HAnimSite HAnimSite987 = createNode("HAnimSite");
HAnimSite987.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[80] = HAnimSite987;

HAnimSite HAnimSite988 = createNode("HAnimSite");
HAnimSite988.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[81] = HAnimSite988;

HAnimSite HAnimSite989 = createNode("HAnimSite");
HAnimSite989.USE = "hanim_r_olecranon_pt";
HAnimHumanoid42.viewpoints[82] = HAnimSite989;

HAnimSite HAnimSite990 = createNode("HAnimSite");
HAnimSite990.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid42.viewpoints[83] = HAnimSite990;

HAnimSite HAnimSite991 = createNode("HAnimSite");
HAnimSite991.USE = "hanim_r_radiale_pt";
HAnimHumanoid42.viewpoints[84] = HAnimSite991;

HAnimSite HAnimSite992 = createNode("HAnimSite");
HAnimSite992.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[85] = HAnimSite992;

HAnimSite HAnimSite993 = createNode("HAnimSite");
HAnimSite993.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid42.viewpoints[86] = HAnimSite993;

HAnimSite HAnimSite994 = createNode("HAnimSite");
HAnimSite994.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid42.viewpoints[87] = HAnimSite994;

HAnimSite HAnimSite995 = createNode("HAnimSite");
HAnimSite995.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[88] = HAnimSite995;

HAnimSite HAnimSite996 = createNode("HAnimSite");
HAnimSite996.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[89] = HAnimSite996;

HAnimSite HAnimSite997 = createNode("HAnimSite");
HAnimSite997.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[90] = HAnimSite997;

HAnimSite HAnimSite998 = createNode("HAnimSite");
HAnimSite998.USE = "hanim_r_dactylion_pt";
HAnimHumanoid42.viewpoints[91] = HAnimSite998;

HAnimSite HAnimSite999 = createNode("HAnimSite");
HAnimSite999.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[92] = HAnimSite999;

HAnimSite HAnimSite1000 = createNode("HAnimSite");
HAnimSite1000.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[93] = HAnimSite1000;

HAnimSite HAnimSite1001 = createNode("HAnimSite");
HAnimSite1001.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[94] = HAnimSite1001;

HAnimSegment HAnimSegment1002 = createNode("HAnimSegment");
HAnimSegment1002.USE = "hanim_sacrum";
HAnimHumanoid42.segments[95] = HAnimSegment1002;

HAnimSegment HAnimSegment1003 = createNode("HAnimSegment");
HAnimSegment1003.USE = "hanim_pelvis";
HAnimHumanoid42.segments[96] = HAnimSegment1003;

HAnimSegment HAnimSegment1004 = createNode("HAnimSegment");
HAnimSegment1004.USE = "hanim_l_thigh";
HAnimHumanoid42.segments[97] = HAnimSegment1004;

HAnimSegment HAnimSegment1005 = createNode("HAnimSegment");
HAnimSegment1005.USE = "hanim_l_calf";
HAnimHumanoid42.segments[98] = HAnimSegment1005;

HAnimSegment HAnimSegment1006 = createNode("HAnimSegment");
HAnimSegment1006.USE = "hanim_l_talus";
HAnimHumanoid42.segments[99] = HAnimSegment1006;

HAnimSegment HAnimSegment1007 = createNode("HAnimSegment");
HAnimSegment1007.USE = "hanim_l_metatarsal_1";
HAnimHumanoid42.segments[100] = HAnimSegment1007;

HAnimSegment HAnimSegment1008 = createNode("HAnimSegment");
HAnimSegment1008.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid42.segments[101] = HAnimSegment1008;

HAnimSegment HAnimSegment1009 = createNode("HAnimSegment");
HAnimSegment1009.USE = "hanim_r_thigh";
HAnimHumanoid42.segments[102] = HAnimSegment1009;

HAnimSegment HAnimSegment1010 = createNode("HAnimSegment");
HAnimSegment1010.USE = "hanim_r_calf";
HAnimHumanoid42.segments[103] = HAnimSegment1010;

HAnimSegment HAnimSegment1011 = createNode("HAnimSegment");
HAnimSegment1011.USE = "hanim_r_talus";
HAnimHumanoid42.segments[104] = HAnimSegment1011;

HAnimSegment HAnimSegment1012 = createNode("HAnimSegment");
HAnimSegment1012.USE = "hanim_r_metatarsal_1";
HAnimHumanoid42.segments[105] = HAnimSegment1012;

HAnimSegment HAnimSegment1013 = createNode("HAnimSegment");
HAnimSegment1013.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid42.segments[106] = HAnimSegment1013;

HAnimSegment HAnimSegment1014 = createNode("HAnimSegment");
HAnimSegment1014.USE = "hanim_l5";
HAnimHumanoid42.segments[107] = HAnimSegment1014;

HAnimSegment HAnimSegment1015 = createNode("HAnimSegment");
HAnimSegment1015.USE = "hanim_l3";
HAnimHumanoid42.segments[108] = HAnimSegment1015;

HAnimSegment HAnimSegment1016 = createNode("HAnimSegment");
HAnimSegment1016.USE = "hanim_l1";
HAnimHumanoid42.segments[109] = HAnimSegment1016;

HAnimSegment HAnimSegment1017 = createNode("HAnimSegment");
HAnimSegment1017.USE = "hanim_t10";
HAnimHumanoid42.segments[110] = HAnimSegment1017;

HAnimSegment HAnimSegment1018 = createNode("HAnimSegment");
HAnimSegment1018.USE = "hanim_t6";
HAnimHumanoid42.segments[111] = HAnimSegment1018;

HAnimSegment HAnimSegment1019 = createNode("HAnimSegment");
HAnimSegment1019.USE = "hanim_t1";
HAnimHumanoid42.segments[112] = HAnimSegment1019;

HAnimSegment HAnimSegment1020 = createNode("HAnimSegment");
HAnimSegment1020.USE = "hanim_c4";
HAnimHumanoid42.segments[113] = HAnimSegment1020;

HAnimSegment HAnimSegment1021 = createNode("HAnimSegment");
HAnimSegment1021.USE = "hanim_c2";
HAnimHumanoid42.segments[114] = HAnimSegment1021;

HAnimSegment HAnimSegment1022 = createNode("HAnimSegment");
HAnimSegment1022.USE = "hanim_l_clavicle";
HAnimHumanoid42.segments[115] = HAnimSegment1022;

HAnimSegment HAnimSegment1023 = createNode("HAnimSegment");
HAnimSegment1023.USE = "hanim_l_scapula";
HAnimHumanoid42.segments[116] = HAnimSegment1023;

HAnimSegment HAnimSegment1024 = createNode("HAnimSegment");
HAnimSegment1024.USE = "hanim_l_upperarm";
HAnimHumanoid42.segments[117] = HAnimSegment1024;

HAnimSegment HAnimSegment1025 = createNode("HAnimSegment");
HAnimSegment1025.USE = "hanim_l_forearm";
HAnimHumanoid42.segments[118] = HAnimSegment1025;

HAnimSegment HAnimSegment1026 = createNode("HAnimSegment");
HAnimSegment1026.USE = "hanim_l_carpal";
HAnimHumanoid42.segments[119] = HAnimSegment1026;

HAnimSegment HAnimSegment1027 = createNode("HAnimSegment");
HAnimSegment1027.USE = "hanim_l_metacarpal_1";
HAnimHumanoid42.segments[120] = HAnimSegment1027;

HAnimSegment HAnimSegment1028 = createNode("HAnimSegment");
HAnimSegment1028.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid42.segments[121] = HAnimSegment1028;

HAnimSegment HAnimSegment1029 = createNode("HAnimSegment");
HAnimSegment1029.USE = "hanim_l_metacarpal_2";
HAnimHumanoid42.segments[122] = HAnimSegment1029;

HAnimSegment HAnimSegment1030 = createNode("HAnimSegment");
HAnimSegment1030.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid42.segments[123] = HAnimSegment1030;

HAnimSegment HAnimSegment1031 = createNode("HAnimSegment");
HAnimSegment1031.USE = "hanim_l_carpal_middle_phalanx_1";
HAnimHumanoid42.segments[124] = HAnimSegment1031;

HAnimSegment HAnimSegment1032 = createNode("HAnimSegment");
HAnimSegment1032.USE = "hanim_l_metacarpal_3";
HAnimHumanoid42.segments[125] = HAnimSegment1032;

HAnimSegment HAnimSegment1033 = createNode("HAnimSegment");
HAnimSegment1033.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid42.segments[126] = HAnimSegment1033;

HAnimSegment HAnimSegment1034 = createNode("HAnimSegment");
HAnimSegment1034.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid42.segments[127] = HAnimSegment1034;

HAnimSegment HAnimSegment1035 = createNode("HAnimSegment");
HAnimSegment1035.USE = "hanim_l_metacarpal_4";
HAnimHumanoid42.segments[128] = HAnimSegment1035;

HAnimSegment HAnimSegment1036 = createNode("HAnimSegment");
HAnimSegment1036.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid42.segments[129] = HAnimSegment1036;

HAnimSegment HAnimSegment1037 = createNode("HAnimSegment");
HAnimSegment1037.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid42.segments[130] = HAnimSegment1037;

HAnimSegment HAnimSegment1038 = createNode("HAnimSegment");
HAnimSegment1038.USE = "hanim_l_metacarpal_5";
HAnimHumanoid42.segments[131] = HAnimSegment1038;

HAnimSegment HAnimSegment1039 = createNode("HAnimSegment");
HAnimSegment1039.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid42.segments[132] = HAnimSegment1039;

HAnimSegment HAnimSegment1040 = createNode("HAnimSegment");
HAnimSegment1040.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid42.segments[133] = HAnimSegment1040;

HAnimSegment HAnimSegment1041 = createNode("HAnimSegment");
HAnimSegment1041.USE = "hanim_r_clavicle";
HAnimHumanoid42.segments[134] = HAnimSegment1041;

HAnimSegment HAnimSegment1042 = createNode("HAnimSegment");
HAnimSegment1042.USE = "hanim_r_scapula";
HAnimHumanoid42.segments[135] = HAnimSegment1042;

HAnimSegment HAnimSegment1043 = createNode("HAnimSegment");
HAnimSegment1043.USE = "hanim_r_upperarm";
HAnimHumanoid42.segments[136] = HAnimSegment1043;

HAnimSegment HAnimSegment1044 = createNode("HAnimSegment");
HAnimSegment1044.USE = "hanim_r_forearm";
HAnimHumanoid42.segments[137] = HAnimSegment1044;

HAnimSegment HAnimSegment1045 = createNode("HAnimSegment");
HAnimSegment1045.USE = "hanim_r_carpal";
HAnimHumanoid42.segments[138] = HAnimSegment1045;

HAnimSegment HAnimSegment1046 = createNode("HAnimSegment");
HAnimSegment1046.USE = "hanim_r_metacarpal_1";
HAnimHumanoid42.segments[139] = HAnimSegment1046;

HAnimSegment HAnimSegment1047 = createNode("HAnimSegment");
HAnimSegment1047.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid42.segments[140] = HAnimSegment1047;

HAnimSegment HAnimSegment1048 = createNode("HAnimSegment");
HAnimSegment1048.USE = "hanim_r_metacarpal_2";
HAnimHumanoid42.segments[141] = HAnimSegment1048;

HAnimSegment HAnimSegment1049 = createNode("HAnimSegment");
HAnimSegment1049.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid42.segments[142] = HAnimSegment1049;

HAnimSegment HAnimSegment1050 = createNode("HAnimSegment");
HAnimSegment1050.USE = "hanim_r_carpal_middle_phalanx_1";
HAnimHumanoid42.segments[143] = HAnimSegment1050;

HAnimSegment HAnimSegment1051 = createNode("HAnimSegment");
HAnimSegment1051.USE = "hanim_r_metacarpal_3";
HAnimHumanoid42.segments[144] = HAnimSegment1051;

HAnimSegment HAnimSegment1052 = createNode("HAnimSegment");
HAnimSegment1052.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid42.segments[145] = HAnimSegment1052;

HAnimSegment HAnimSegment1053 = createNode("HAnimSegment");
HAnimSegment1053.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid42.segments[146] = HAnimSegment1053;

HAnimSegment HAnimSegment1054 = createNode("HAnimSegment");
HAnimSegment1054.USE = "hanim_r_metacarpal_4";
HAnimHumanoid42.segments[147] = HAnimSegment1054;

HAnimSegment HAnimSegment1055 = createNode("HAnimSegment");
HAnimSegment1055.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid42.segments[148] = HAnimSegment1055;

HAnimSegment HAnimSegment1056 = createNode("HAnimSegment");
HAnimSegment1056.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid42.segments[149] = HAnimSegment1056;

HAnimSegment HAnimSegment1057 = createNode("HAnimSegment");
HAnimSegment1057.USE = "hanim_r_metacarpal_5";
HAnimHumanoid42.segments[150] = HAnimSegment1057;

HAnimSegment HAnimSegment1058 = createNode("HAnimSegment");
HAnimSegment1058.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid42.segments[151] = HAnimSegment1058;

HAnimSegment HAnimSegment1059 = createNode("HAnimSegment");
HAnimSegment1059.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid42.segments[152] = HAnimSegment1059;

HAnimJoint HAnimJoint1060 = createNode("HAnimJoint");
HAnimJoint1060.USE = "hanim_humanoid_root";
HAnimHumanoid42.joints[153] = HAnimJoint1060;

HAnimJoint HAnimJoint1061 = createNode("HAnimJoint");
HAnimJoint1061.USE = "hanim_sacroiliac";
HAnimHumanoid42.joints[154] = HAnimJoint1061;

HAnimJoint HAnimJoint1062 = createNode("HAnimJoint");
HAnimJoint1062.USE = "hanim_l_hip";
HAnimHumanoid42.joints[155] = HAnimJoint1062;

HAnimJoint HAnimJoint1063 = createNode("HAnimJoint");
HAnimJoint1063.USE = "hanim_l_knee";
HAnimHumanoid42.joints[156] = HAnimJoint1063;

HAnimJoint HAnimJoint1064 = createNode("HAnimJoint");
HAnimJoint1064.USE = "hanim_l_talocrural";
HAnimHumanoid42.joints[157] = HAnimJoint1064;

HAnimJoint HAnimJoint1065 = createNode("HAnimJoint");
HAnimJoint1065.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid42.joints[158] = HAnimJoint1065;

HAnimJoint HAnimJoint1066 = createNode("HAnimJoint");
HAnimJoint1066.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid42.joints[159] = HAnimJoint1066;

HAnimJoint HAnimJoint1067 = createNode("HAnimJoint");
HAnimJoint1067.USE = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimHumanoid42.joints[160] = HAnimJoint1067;

HAnimJoint HAnimJoint1068 = createNode("HAnimJoint");
HAnimJoint1068.USE = "hanim_r_hip";
HAnimHumanoid42.joints[161] = HAnimJoint1068;

HAnimJoint HAnimJoint1069 = createNode("HAnimJoint");
HAnimJoint1069.USE = "hanim_r_knee";
HAnimHumanoid42.joints[162] = HAnimJoint1069;

HAnimJoint HAnimJoint1070 = createNode("HAnimJoint");
HAnimJoint1070.USE = "hanim_r_talocrural";
HAnimHumanoid42.joints[163] = HAnimJoint1070;

HAnimJoint HAnimJoint1071 = createNode("HAnimJoint");
HAnimJoint1071.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid42.joints[164] = HAnimJoint1071;

HAnimJoint HAnimJoint1072 = createNode("HAnimJoint");
HAnimJoint1072.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid42.joints[165] = HAnimJoint1072;

HAnimJoint HAnimJoint1073 = createNode("HAnimJoint");
HAnimJoint1073.USE = "hanim_r_tarsal_distal_interphalangeal_1";
HAnimHumanoid42.joints[166] = HAnimJoint1073;

HAnimJoint HAnimJoint1074 = createNode("HAnimJoint");
HAnimJoint1074.USE = "hanim_vl5";
HAnimHumanoid42.joints[167] = HAnimJoint1074;

HAnimJoint HAnimJoint1075 = createNode("HAnimJoint");
HAnimJoint1075.USE = "hanim_vl3";
HAnimHumanoid42.joints[168] = HAnimJoint1075;

HAnimJoint HAnimJoint1076 = createNode("HAnimJoint");
HAnimJoint1076.USE = "hanim_vl1";
HAnimHumanoid42.joints[169] = HAnimJoint1076;

HAnimJoint HAnimJoint1077 = createNode("HAnimJoint");
HAnimJoint1077.USE = "hanim_vt10";
HAnimHumanoid42.joints[170] = HAnimJoint1077;

HAnimJoint HAnimJoint1078 = createNode("HAnimJoint");
HAnimJoint1078.USE = "hanim_vt6";
HAnimHumanoid42.joints[171] = HAnimJoint1078;

HAnimJoint HAnimJoint1079 = createNode("HAnimJoint");
HAnimJoint1079.USE = "hanim_vt1";
HAnimHumanoid42.joints[172] = HAnimJoint1079;

HAnimJoint HAnimJoint1080 = createNode("HAnimJoint");
HAnimJoint1080.USE = "hanim_vc4";
HAnimHumanoid42.joints[173] = HAnimJoint1080;

HAnimJoint HAnimJoint1081 = createNode("HAnimJoint");
HAnimJoint1081.USE = "hanim_vc2";
HAnimHumanoid42.joints[174] = HAnimJoint1081;

HAnimJoint HAnimJoint1082 = createNode("HAnimJoint");
HAnimJoint1082.USE = "hanim_skullbase";
HAnimHumanoid42.joints[175] = HAnimJoint1082;

HAnimJoint HAnimJoint1083 = createNode("HAnimJoint");
HAnimJoint1083.USE = "hanim_l_sternoclavicular";
HAnimHumanoid42.joints[176] = HAnimJoint1083;

HAnimJoint HAnimJoint1084 = createNode("HAnimJoint");
HAnimJoint1084.USE = "hanim_l_acromioclavicular";
HAnimHumanoid42.joints[177] = HAnimJoint1084;

HAnimJoint HAnimJoint1085 = createNode("HAnimJoint");
HAnimJoint1085.USE = "hanim_l_shoulder";
HAnimHumanoid42.joints[178] = HAnimJoint1085;

HAnimJoint HAnimJoint1086 = createNode("HAnimJoint");
HAnimJoint1086.USE = "hanim_l_elbow";
HAnimHumanoid42.joints[179] = HAnimJoint1086;

HAnimJoint HAnimJoint1087 = createNode("HAnimJoint");
HAnimJoint1087.USE = "hanim_l_radiocarpal";
HAnimHumanoid42.joints[180] = HAnimJoint1087;

HAnimJoint HAnimJoint1088 = createNode("HAnimJoint");
HAnimJoint1088.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid42.joints[181] = HAnimJoint1088;

HAnimJoint HAnimJoint1089 = createNode("HAnimJoint");
HAnimJoint1089.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid42.joints[182] = HAnimJoint1089;

HAnimJoint HAnimJoint1090 = createNode("HAnimJoint");
HAnimJoint1090.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid42.joints[183] = HAnimJoint1090;

HAnimJoint HAnimJoint1091 = createNode("HAnimJoint");
HAnimJoint1091.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid42.joints[184] = HAnimJoint1091;

HAnimJoint HAnimJoint1092 = createNode("HAnimJoint");
HAnimJoint1092.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid42.joints[185] = HAnimJoint1092;

HAnimJoint HAnimJoint1093 = createNode("HAnimJoint");
HAnimJoint1093.USE = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[186] = HAnimJoint1093;

HAnimJoint HAnimJoint1094 = createNode("HAnimJoint");
HAnimJoint1094.USE = "hanim_l_carpal_distal_interphalangeal_1";
HAnimHumanoid42.joints[187] = HAnimJoint1094;

HAnimJoint HAnimJoint1095 = createNode("HAnimJoint");
HAnimJoint1095.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid42.joints[188] = HAnimJoint1095;

HAnimJoint HAnimJoint1096 = createNode("HAnimJoint");
HAnimJoint1096.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid42.joints[189] = HAnimJoint1096;

HAnimJoint HAnimJoint1097 = createNode("HAnimJoint");
HAnimJoint1097.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[190] = HAnimJoint1097;

HAnimJoint HAnimJoint1098 = createNode("HAnimJoint");
HAnimJoint1098.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid42.joints[191] = HAnimJoint1098;

HAnimJoint HAnimJoint1099 = createNode("HAnimJoint");
HAnimJoint1099.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid42.joints[192] = HAnimJoint1099;

HAnimJoint HAnimJoint1100 = createNode("HAnimJoint");
HAnimJoint1100.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid42.joints[193] = HAnimJoint1100;

HAnimJoint HAnimJoint1101 = createNode("HAnimJoint");
HAnimJoint1101.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[194] = HAnimJoint1101;

HAnimJoint HAnimJoint1102 = createNode("HAnimJoint");
HAnimJoint1102.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid42.joints[195] = HAnimJoint1102;

HAnimJoint HAnimJoint1103 = createNode("HAnimJoint");
HAnimJoint1103.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid42.joints[196] = HAnimJoint1103;

HAnimJoint HAnimJoint1104 = createNode("HAnimJoint");
HAnimJoint1104.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid42.joints[197] = HAnimJoint1104;

HAnimJoint HAnimJoint1105 = createNode("HAnimJoint");
HAnimJoint1105.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[198] = HAnimJoint1105;

HAnimJoint HAnimJoint1106 = createNode("HAnimJoint");
HAnimJoint1106.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid42.joints[199] = HAnimJoint1106;

HAnimJoint HAnimJoint1107 = createNode("HAnimJoint");
HAnimJoint1107.USE = "hanim_r_sternoclavicular";
HAnimHumanoid42.joints[200] = HAnimJoint1107;

HAnimJoint HAnimJoint1108 = createNode("HAnimJoint");
HAnimJoint1108.USE = "hanim_r_acromioclavicular";
HAnimHumanoid42.joints[201] = HAnimJoint1108;

HAnimJoint HAnimJoint1109 = createNode("HAnimJoint");
HAnimJoint1109.USE = "hanim_r_shoulder";
HAnimHumanoid42.joints[202] = HAnimJoint1109;

HAnimJoint HAnimJoint1110 = createNode("HAnimJoint");
HAnimJoint1110.USE = "hanim_r_elbow";
HAnimHumanoid42.joints[203] = HAnimJoint1110;

HAnimJoint HAnimJoint1111 = createNode("HAnimJoint");
HAnimJoint1111.USE = "hanim_r_radiocarpal";
HAnimHumanoid42.joints[204] = HAnimJoint1111;

HAnimJoint HAnimJoint1112 = createNode("HAnimJoint");
HAnimJoint1112.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid42.joints[205] = HAnimJoint1112;

HAnimJoint HAnimJoint1113 = createNode("HAnimJoint");
HAnimJoint1113.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid42.joints[206] = HAnimJoint1113;

HAnimJoint HAnimJoint1114 = createNode("HAnimJoint");
HAnimJoint1114.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid42.joints[207] = HAnimJoint1114;

HAnimJoint HAnimJoint1115 = createNode("HAnimJoint");
HAnimJoint1115.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid42.joints[208] = HAnimJoint1115;

HAnimJoint HAnimJoint1116 = createNode("HAnimJoint");
HAnimJoint1116.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid42.joints[209] = HAnimJoint1116;

HAnimJoint HAnimJoint1117 = createNode("HAnimJoint");
HAnimJoint1117.USE = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[210] = HAnimJoint1117;

HAnimJoint HAnimJoint1118 = createNode("HAnimJoint");
HAnimJoint1118.USE = "hanim_r_carpal_distal_interphalangeal_1";
HAnimHumanoid42.joints[211] = HAnimJoint1118;

HAnimJoint HAnimJoint1119 = createNode("HAnimJoint");
HAnimJoint1119.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid42.joints[212] = HAnimJoint1119;

HAnimJoint HAnimJoint1120 = createNode("HAnimJoint");
HAnimJoint1120.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid42.joints[213] = HAnimJoint1120;

HAnimJoint HAnimJoint1121 = createNode("HAnimJoint");
HAnimJoint1121.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[214] = HAnimJoint1121;

HAnimJoint HAnimJoint1122 = createNode("HAnimJoint");
HAnimJoint1122.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid42.joints[215] = HAnimJoint1122;

HAnimJoint HAnimJoint1123 = createNode("HAnimJoint");
HAnimJoint1123.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid42.joints[216] = HAnimJoint1123;

HAnimJoint HAnimJoint1124 = createNode("HAnimJoint");
HAnimJoint1124.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid42.joints[217] = HAnimJoint1124;

HAnimJoint HAnimJoint1125 = createNode("HAnimJoint");
HAnimJoint1125.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[218] = HAnimJoint1125;

HAnimJoint HAnimJoint1126 = createNode("HAnimJoint");
HAnimJoint1126.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid42.joints[219] = HAnimJoint1126;

HAnimJoint HAnimJoint1127 = createNode("HAnimJoint");
HAnimJoint1127.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid42.joints[220] = HAnimJoint1127;

HAnimJoint HAnimJoint1128 = createNode("HAnimJoint");
HAnimJoint1128.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid42.joints[221] = HAnimJoint1128;

HAnimJoint HAnimJoint1129 = createNode("HAnimJoint");
HAnimJoint1129.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[222] = HAnimJoint1129;

HAnimJoint HAnimJoint1130 = createNode("HAnimJoint");
HAnimJoint1130.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid42.joints[223] = HAnimJoint1130;

Coordinate Coordinate1131 = createNode("Coordinate");
Coordinate1131.DEF = "TheSkinCoord";
Coordinate1131.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
HAnimHumanoid42.skinCoord = Coordinate1131;

Shape Shape1132 = createNode("Shape");
Shape1132.DEF = "SkinShape";
Appearance Appearance1133 = createNode("Appearance");
Appearance1133.DEF = "SkinAppearance";
Material Material1134 = createNode("Material");
Material1134.DEF = "SkinMaterial";
Material1134.ambientIntensity = 0.6;
Material1134.diffuseColor = new SFColor(new float[1,1,1]);
Material1134.shininess = 0.6;
Material1134.transparency = 0.2;
Appearance1133.material = Material1134;

ImageTexture ImageTexture1135 = createNode("ImageTexture");
ImageTexture1135.DEF = "zBlueSpiralBkg2";
ImageTexture1135.description = "Blue Spiral Pattern";
ImageTexture1135.url = new MFString(new java.lang.String["./data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
Appearance1133.texture = ImageTexture1135;

Shape1132.appearance = Appearance1133;

IndexedFaceSet IndexedFaceSet1136 = createNode("IndexedFaceSet");
IndexedFaceSet1136.creaseAngle = 3.1;
IndexedFaceSet1136.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
Color Color1137 = createNode("Color");
Color1137.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet1136.color = Color1137;

Coordinate Coordinate1138 = createNode("Coordinate");
Coordinate1138.USE = "TheSkinCoord";
IndexedFaceSet1136.coord = Coordinate1138;

Shape1132.geometry = IndexedFaceSet1136;

HAnimHumanoid42.skin[224] = Shape1132;

children[4] = HAnimHumanoid42;

}
