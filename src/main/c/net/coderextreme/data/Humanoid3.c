#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "Humanoid3.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "identifier";
meta3.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid3.x3d";
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
Coordinate268.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet266.coord = Coordinate268;

Shape265.geometry = LineSet266;

HAnimSegment261.children[1] = Shape265;

HAnimJoint260.children = new MFNode();

HAnimJoint260.children[0] = HAnimSegment261;

HAnimJoint HAnimJoint269 = createNode("HAnimJoint");
HAnimJoint269.DEF = "hanim_vl4";
HAnimJoint269.name = "vl4";
HAnimJoint269.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimSegment HAnimSegment270 = createNode("HAnimSegment");
HAnimSegment270.DEF = "hanim_l4";
HAnimSegment270.name = "l4";
Transform Transform271 = createNode("Transform");
Transform271.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
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
Coordinate277.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet275.coord = Coordinate277;

Shape274.geometry = LineSet275;

HAnimSegment270.children[1] = Shape274;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

HAnimJoint HAnimJoint278 = createNode("HAnimJoint");
HAnimJoint278.DEF = "hanim_vl3";
HAnimJoint278.name = "vl3";
HAnimJoint278.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimSegment HAnimSegment279 = createNode("HAnimSegment");
HAnimSegment279.DEF = "hanim_l3";
HAnimSegment279.name = "l3";
Transform Transform280 = createNode("Transform");
Transform280.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
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
Coordinate286.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet284.coord = Coordinate286;

Shape283.geometry = LineSet284;

HAnimSegment279.children[1] = Shape283;

HAnimSite HAnimSite287 = createNode("HAnimSite");
HAnimSite287.DEF = "hanim_l_rib10_pt";
HAnimSite287.name = "l_rib10_pt";
HAnimSite287.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor288 = createNode("TouchSensor");
TouchSensor288.description = "HAnimSite l_rib10_pt";
HAnimSite287.children = new MFNode();

HAnimSite287.children[0] = TouchSensor288;

Shape Shape289 = createNode("Shape");
Shape289.USE = "HAnimSiteShape";
HAnimSite287.children[1] = Shape289;

HAnimSegment279.children[2] = HAnimSite287;

HAnimSite HAnimSite290 = createNode("HAnimSite");
HAnimSite290.DEF = "hanim_r_rib10_pt";
HAnimSite290.name = "r_rib10_pt";
HAnimSite290.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor291 = createNode("TouchSensor");
TouchSensor291.description = "HAnimSite r_rib10_pt";
HAnimSite290.children = new MFNode();

HAnimSite290.children[0] = TouchSensor291;

Shape Shape292 = createNode("Shape");
Shape292.USE = "HAnimSiteShape";
HAnimSite290.children[1] = Shape292;

HAnimSegment279.children[3] = HAnimSite290;

HAnimSite HAnimSite293 = createNode("HAnimSite");
HAnimSite293.DEF = "hanim_spine_2_middle_back_pt";
HAnimSite293.name = "spine_2_middle_back_pt";
TouchSensor TouchSensor294 = createNode("TouchSensor");
TouchSensor294.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite293.children = new MFNode();

HAnimSite293.children[0] = TouchSensor294;

Shape Shape295 = createNode("Shape");
Shape295.USE = "HAnimSiteShape";
HAnimSite293.children[1] = Shape295;

HAnimSegment279.children[4] = HAnimSite293;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

HAnimJoint HAnimJoint296 = createNode("HAnimJoint");
HAnimJoint296.DEF = "hanim_vl2";
HAnimJoint296.name = "vl2";
HAnimJoint296.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimSegment HAnimSegment297 = createNode("HAnimSegment");
HAnimSegment297.DEF = "hanim_l2";
HAnimSegment297.name = "l2";
Transform Transform298 = createNode("Transform");
Transform298.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Transform Transform299 = createNode("Transform");
Shape Shape300 = createNode("Shape");
Shape300.USE = "HAnimJointShape";
Transform299.child = new undefined();

Transform299.child[0] = Shape300;

Transform298.children = new MFNode();

Transform298.children[0] = Transform299;

HAnimSegment297.children = new MFNode();

HAnimSegment297.children[0] = Transform298;

Shape Shape301 = createNode("Shape");
LineSet LineSet302 = createNode("LineSet");
LineSet302.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA303 = createNode("ColorRGBA");
ColorRGBA303.USE = "HAnimSegmentLineColorRGBA";
LineSet302.color = ColorRGBA303;

Coordinate Coordinate304 = createNode("Coordinate");
Coordinate304.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet302.coord = Coordinate304;

Shape301.geometry = LineSet302;

HAnimSegment297.children[1] = Shape301;

HAnimJoint296.children = new MFNode();

HAnimJoint296.children[0] = HAnimSegment297;

HAnimJoint HAnimJoint305 = createNode("HAnimJoint");
HAnimJoint305.DEF = "hanim_vl1";
HAnimJoint305.name = "vl1";
HAnimJoint305.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimSegment HAnimSegment306 = createNode("HAnimSegment");
HAnimSegment306.DEF = "hanim_l1";
HAnimSegment306.name = "l1";
Transform Transform307 = createNode("Transform");
Transform307.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Transform Transform308 = createNode("Transform");
Shape Shape309 = createNode("Shape");
Shape309.USE = "HAnimJointShape";
Transform308.child = new undefined();

Transform308.child[0] = Shape309;

Transform307.children = new MFNode();

Transform307.children[0] = Transform308;

HAnimSegment306.children = new MFNode();

HAnimSegment306.children[0] = Transform307;

Shape Shape310 = createNode("Shape");
LineSet LineSet311 = createNode("LineSet");
LineSet311.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA312 = createNode("ColorRGBA");
ColorRGBA312.USE = "HAnimSegmentLineColorRGBA";
LineSet311.color = ColorRGBA312;

Coordinate Coordinate313 = createNode("Coordinate");
Coordinate313.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet311.coord = Coordinate313;

Shape310.geometry = LineSet311;

HAnimSegment306.children[1] = Shape310;

HAnimJoint305.children = new MFNode();

HAnimJoint305.children[0] = HAnimSegment306;

HAnimJoint HAnimJoint314 = createNode("HAnimJoint");
HAnimJoint314.DEF = "hanim_vt12";
HAnimJoint314.name = "vt12";
HAnimJoint314.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimSegment HAnimSegment315 = createNode("HAnimSegment");
HAnimSegment315.DEF = "hanim_t12";
HAnimSegment315.name = "t12";
Transform Transform316 = createNode("Transform");
Transform316.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Transform Transform317 = createNode("Transform");
Shape Shape318 = createNode("Shape");
Shape318.USE = "HAnimJointShape";
Transform317.child = new undefined();

Transform317.child[0] = Shape318;

Transform316.children = new MFNode();

Transform316.children[0] = Transform317;

HAnimSegment315.children = new MFNode();

HAnimSegment315.children[0] = Transform316;

Shape Shape319 = createNode("Shape");
LineSet LineSet320 = createNode("LineSet");
LineSet320.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA321 = createNode("ColorRGBA");
ColorRGBA321.USE = "HAnimSegmentLineColorRGBA";
LineSet320.color = ColorRGBA321;

Coordinate Coordinate322 = createNode("Coordinate");
Coordinate322.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet320.coord = Coordinate322;

Shape319.geometry = LineSet320;

HAnimSegment315.children[1] = Shape319;

HAnimJoint314.children = new MFNode();

HAnimJoint314.children[0] = HAnimSegment315;

HAnimJoint HAnimJoint323 = createNode("HAnimJoint");
HAnimJoint323.DEF = "hanim_vt11";
HAnimJoint323.name = "vt11";
HAnimJoint323.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimSegment HAnimSegment324 = createNode("HAnimSegment");
HAnimSegment324.DEF = "hanim_t11";
HAnimSegment324.name = "t11";
Transform Transform325 = createNode("Transform");
Transform325.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Transform Transform326 = createNode("Transform");
Shape Shape327 = createNode("Shape");
Shape327.USE = "HAnimJointShape";
Transform326.child = new undefined();

Transform326.child[0] = Shape327;

Transform325.children = new MFNode();

Transform325.children[0] = Transform326;

HAnimSegment324.children = new MFNode();

HAnimSegment324.children[0] = Transform325;

Shape Shape328 = createNode("Shape");
LineSet LineSet329 = createNode("LineSet");
LineSet329.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA330 = createNode("ColorRGBA");
ColorRGBA330.USE = "HAnimSegmentLineColorRGBA";
LineSet329.color = ColorRGBA330;

Coordinate Coordinate331 = createNode("Coordinate");
Coordinate331.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet329.coord = Coordinate331;

Shape328.geometry = LineSet329;

HAnimSegment324.children[1] = Shape328;

HAnimSite HAnimSite332 = createNode("HAnimSite");
HAnimSite332.DEF = "hanim_substernale_pt";
HAnimSite332.name = "substernale_pt";
HAnimSite332.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor333 = createNode("TouchSensor");
TouchSensor333.description = "HAnimSite substernale_pt";
HAnimSite332.children = new MFNode();

HAnimSite332.children[0] = TouchSensor333;

Shape Shape334 = createNode("Shape");
Shape334.USE = "HAnimSiteShape";
HAnimSite332.children[1] = Shape334;

HAnimSegment324.children[2] = HAnimSite332;

HAnimJoint323.children = new MFNode();

HAnimJoint323.children[0] = HAnimSegment324;

HAnimJoint HAnimJoint335 = createNode("HAnimJoint");
HAnimJoint335.DEF = "hanim_vt10";
HAnimJoint335.name = "vt10";
HAnimJoint335.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimSegment HAnimSegment336 = createNode("HAnimSegment");
HAnimSegment336.DEF = "hanim_t10";
HAnimSegment336.name = "t10";
Transform Transform337 = createNode("Transform");
Transform337.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Transform Transform338 = createNode("Transform");
Shape Shape339 = createNode("Shape");
Shape339.USE = "HAnimJointShape";
Transform338.child = new undefined();

Transform338.child[0] = Shape339;

Transform337.children = new MFNode();

Transform337.children[0] = Transform338;

HAnimSegment336.children = new MFNode();

HAnimSegment336.children[0] = Transform337;

Shape Shape340 = createNode("Shape");
LineSet LineSet341 = createNode("LineSet");
LineSet341.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA342 = createNode("ColorRGBA");
ColorRGBA342.USE = "HAnimSegmentLineColorRGBA";
LineSet341.color = ColorRGBA342;

Coordinate Coordinate343 = createNode("Coordinate");
Coordinate343.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet341.coord = Coordinate343;

Shape340.geometry = LineSet341;

HAnimSegment336.children[1] = Shape340;

HAnimSite HAnimSite344 = createNode("HAnimSite");
HAnimSite344.DEF = "hanim_l_thelion_pt";
HAnimSite344.name = "l_thelion_pt";
HAnimSite344.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor345 = createNode("TouchSensor");
TouchSensor345.description = "HAnimSite l_thelion_pt";
HAnimSite344.children = new MFNode();

HAnimSite344.children[0] = TouchSensor345;

Shape Shape346 = createNode("Shape");
Shape346.USE = "HAnimSiteShape";
HAnimSite344.children[1] = Shape346;

HAnimSegment336.children[2] = HAnimSite344;

HAnimSite HAnimSite347 = createNode("HAnimSite");
HAnimSite347.DEF = "hanim_r_thelion_pt";
HAnimSite347.name = "r_thelion_pt";
HAnimSite347.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor348 = createNode("TouchSensor");
TouchSensor348.description = "HAnimSite r_thelion_pt";
HAnimSite347.children = new MFNode();

HAnimSite347.children[0] = TouchSensor348;

Shape Shape349 = createNode("Shape");
Shape349.USE = "HAnimSiteShape";
HAnimSite347.children[1] = Shape349;

HAnimSegment336.children[3] = HAnimSite347;

HAnimJoint335.children = new MFNode();

HAnimJoint335.children[0] = HAnimSegment336;

HAnimJoint HAnimJoint350 = createNode("HAnimJoint");
HAnimJoint350.DEF = "hanim_vt9";
HAnimJoint350.name = "vt9";
HAnimJoint350.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimSegment HAnimSegment351 = createNode("HAnimSegment");
HAnimSegment351.DEF = "hanim_t9";
HAnimSegment351.name = "t9";
Transform Transform352 = createNode("Transform");
Transform352.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Transform Transform353 = createNode("Transform");
Shape Shape354 = createNode("Shape");
Shape354.USE = "HAnimJointShape";
Transform353.child = new undefined();

Transform353.child[0] = Shape354;

Transform352.children = new MFNode();

Transform352.children[0] = Transform353;

HAnimSegment351.children = new MFNode();

HAnimSegment351.children[0] = Transform352;

Shape Shape355 = createNode("Shape");
LineSet LineSet356 = createNode("LineSet");
LineSet356.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA357 = createNode("ColorRGBA");
ColorRGBA357.USE = "HAnimSegmentLineColorRGBA";
LineSet356.color = ColorRGBA357;

Coordinate Coordinate358 = createNode("Coordinate");
Coordinate358.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet356.coord = Coordinate358;

Shape355.geometry = LineSet356;

HAnimSegment351.children[1] = Shape355;

HAnimJoint350.children = new MFNode();

HAnimJoint350.children[0] = HAnimSegment351;

HAnimJoint HAnimJoint359 = createNode("HAnimJoint");
HAnimJoint359.DEF = "hanim_vt8";
HAnimJoint359.name = "vt8";
HAnimJoint359.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimSegment HAnimSegment360 = createNode("HAnimSegment");
HAnimSegment360.DEF = "hanim_t8";
HAnimSegment360.name = "t8";
Transform Transform361 = createNode("Transform");
Transform361.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
Transform Transform362 = createNode("Transform");
Shape Shape363 = createNode("Shape");
Shape363.USE = "HAnimJointShape";
Transform362.child = new undefined();

Transform362.child[0] = Shape363;

Transform361.children = new MFNode();

Transform361.children[0] = Transform362;

HAnimSegment360.children = new MFNode();

HAnimSegment360.children[0] = Transform361;

Shape Shape364 = createNode("Shape");
LineSet LineSet365 = createNode("LineSet");
LineSet365.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA366 = createNode("ColorRGBA");
ColorRGBA366.USE = "HAnimSegmentLineColorRGBA";
LineSet365.color = ColorRGBA366;

Coordinate Coordinate367 = createNode("Coordinate");
Coordinate367.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet365.coord = Coordinate367;

Shape364.geometry = LineSet365;

HAnimSegment360.children[1] = Shape364;

HAnimJoint359.children = new MFNode();

HAnimJoint359.children[0] = HAnimSegment360;

HAnimJoint HAnimJoint368 = createNode("HAnimJoint");
HAnimJoint368.DEF = "hanim_vt7";
HAnimJoint368.name = "vt7";
HAnimJoint368.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimSegment HAnimSegment369 = createNode("HAnimSegment");
HAnimSegment369.DEF = "hanim_t7";
HAnimSegment369.name = "t7";
Transform Transform370 = createNode("Transform");
Transform370.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
Transform Transform371 = createNode("Transform");
Shape Shape372 = createNode("Shape");
Shape372.USE = "HAnimJointShape";
Transform371.child = new undefined();

Transform371.child[0] = Shape372;

Transform370.children = new MFNode();

Transform370.children[0] = Transform371;

HAnimSegment369.children = new MFNode();

HAnimSegment369.children[0] = Transform370;

Shape Shape373 = createNode("Shape");
LineSet LineSet374 = createNode("LineSet");
LineSet374.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA375 = createNode("ColorRGBA");
ColorRGBA375.USE = "HAnimSegmentLineColorRGBA";
LineSet374.color = ColorRGBA375;

Coordinate Coordinate376 = createNode("Coordinate");
Coordinate376.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet374.coord = Coordinate376;

Shape373.geometry = LineSet374;

HAnimSegment369.children[1] = Shape373;

HAnimSite HAnimSite377 = createNode("HAnimSite");
HAnimSite377.DEF = "hanim_l_chest_midsagittal_plane_pt";
HAnimSite377.name = "l_chest_midsagittal_plane_pt";
TouchSensor TouchSensor378 = createNode("TouchSensor");
TouchSensor378.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite377.children = new MFNode();

HAnimSite377.children[0] = TouchSensor378;

Shape Shape379 = createNode("Shape");
Shape379.USE = "HAnimSiteShape";
HAnimSite377.children[1] = Shape379;

HAnimSegment369.children[2] = HAnimSite377;

HAnimSite HAnimSite380 = createNode("HAnimSite");
HAnimSite380.DEF = "hanim_mesosternale_pt";
HAnimSite380.name = "mesosternale_pt";
TouchSensor TouchSensor381 = createNode("TouchSensor");
TouchSensor381.description = "HAnimSite mesosternale_pt";
HAnimSite380.children = new MFNode();

HAnimSite380.children[0] = TouchSensor381;

Shape Shape382 = createNode("Shape");
Shape382.USE = "HAnimSiteShape";
HAnimSite380.children[1] = Shape382;

HAnimSegment369.children[3] = HAnimSite380;

HAnimSite HAnimSite383 = createNode("HAnimSite");
HAnimSite383.DEF = "hanim_r_chest_midsagittal_plane_pt";
HAnimSite383.name = "r_chest_midsagittal_plane_pt";
TouchSensor TouchSensor384 = createNode("TouchSensor");
TouchSensor384.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite383.children = new MFNode();

HAnimSite383.children[0] = TouchSensor384;

Shape Shape385 = createNode("Shape");
Shape385.USE = "HAnimSiteShape";
HAnimSite383.children[1] = Shape385;

HAnimSegment369.children[4] = HAnimSite383;

HAnimSite HAnimSite386 = createNode("HAnimSite");
HAnimSite386.DEF = "hanim_rear_center_midsagittal_plane_pt";
HAnimSite386.name = "rear_center_midsagittal_plane_pt";
TouchSensor TouchSensor387 = createNode("TouchSensor");
TouchSensor387.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite386.children = new MFNode();

HAnimSite386.children[0] = TouchSensor387;

Shape Shape388 = createNode("Shape");
Shape388.USE = "HAnimSiteShape";
HAnimSite386.children[1] = Shape388;

HAnimSegment369.children[5] = HAnimSite386;

HAnimJoint368.children = new MFNode();

HAnimJoint368.children[0] = HAnimSegment369;

HAnimJoint HAnimJoint389 = createNode("HAnimJoint");
HAnimJoint389.DEF = "hanim_vt6";
HAnimJoint389.name = "vt6";
HAnimJoint389.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimSegment HAnimSegment390 = createNode("HAnimSegment");
HAnimSegment390.DEF = "hanim_t6";
HAnimSegment390.name = "t6";
Transform Transform391 = createNode("Transform");
Transform391.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Transform Transform392 = createNode("Transform");
Shape Shape393 = createNode("Shape");
Shape393.USE = "HAnimJointShape";
Transform392.child = new undefined();

Transform392.child[0] = Shape393;

Transform391.children = new MFNode();

Transform391.children[0] = Transform392;

HAnimSegment390.children = new MFNode();

HAnimSegment390.children[0] = Transform391;

Shape Shape394 = createNode("Shape");
LineSet LineSet395 = createNode("LineSet");
LineSet395.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA396 = createNode("ColorRGBA");
ColorRGBA396.USE = "HAnimSegmentLineColorRGBA";
LineSet395.color = ColorRGBA396;

Coordinate Coordinate397 = createNode("Coordinate");
Coordinate397.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet395.coord = Coordinate397;

Shape394.geometry = LineSet395;

HAnimSegment390.children[1] = Shape394;

HAnimSite HAnimSite398 = createNode("HAnimSite");
HAnimSite398.DEF = "hanim_spine_1_middle_back_pt";
HAnimSite398.name = "spine_1_middle_back_pt";
TouchSensor TouchSensor399 = createNode("TouchSensor");
TouchSensor399.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite398.children = new MFNode();

HAnimSite398.children[0] = TouchSensor399;

Shape Shape400 = createNode("Shape");
Shape400.USE = "HAnimSiteShape";
HAnimSite398.children[1] = Shape400;

HAnimSegment390.children[2] = HAnimSite398;

HAnimJoint389.children = new MFNode();

HAnimJoint389.children[0] = HAnimSegment390;

HAnimJoint HAnimJoint401 = createNode("HAnimJoint");
HAnimJoint401.DEF = "hanim_vt5";
HAnimJoint401.name = "vt5";
HAnimJoint401.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimSegment HAnimSegment402 = createNode("HAnimSegment");
HAnimSegment402.DEF = "hanim_t5";
HAnimSegment402.name = "t5";
Transform Transform403 = createNode("Transform");
Transform403.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Transform Transform404 = createNode("Transform");
Shape Shape405 = createNode("Shape");
Shape405.USE = "HAnimJointShape";
Transform404.child = new undefined();

Transform404.child[0] = Shape405;

Transform403.children = new MFNode();

Transform403.children[0] = Transform404;

HAnimSegment402.children = new MFNode();

HAnimSegment402.children[0] = Transform403;

Shape Shape406 = createNode("Shape");
LineSet LineSet407 = createNode("LineSet");
LineSet407.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA408 = createNode("ColorRGBA");
ColorRGBA408.USE = "HAnimSegmentLineColorRGBA";
LineSet407.color = ColorRGBA408;

Coordinate Coordinate409 = createNode("Coordinate");
Coordinate409.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet407.coord = Coordinate409;

Shape406.geometry = LineSet407;

HAnimSegment402.children[1] = Shape406;

HAnimJoint401.children = new MFNode();

HAnimJoint401.children[0] = HAnimSegment402;

HAnimJoint HAnimJoint410 = createNode("HAnimJoint");
HAnimJoint410.DEF = "hanim_vt4";
HAnimJoint410.name = "vt4";
HAnimJoint410.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimSegment HAnimSegment411 = createNode("HAnimSegment");
HAnimSegment411.DEF = "hanim_t4";
HAnimSegment411.name = "t4";
Transform Transform412 = createNode("Transform");
Transform412.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Transform Transform413 = createNode("Transform");
Shape Shape414 = createNode("Shape");
Shape414.USE = "HAnimJointShape";
Transform413.child = new undefined();

Transform413.child[0] = Shape414;

Transform412.children = new MFNode();

Transform412.children[0] = Transform413;

HAnimSegment411.children = new MFNode();

HAnimSegment411.children[0] = Transform412;

Shape Shape415 = createNode("Shape");
LineSet LineSet416 = createNode("LineSet");
LineSet416.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA417 = createNode("ColorRGBA");
ColorRGBA417.USE = "HAnimSegmentLineColorRGBA";
LineSet416.color = ColorRGBA417;

Coordinate Coordinate418 = createNode("Coordinate");
Coordinate418.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet416.coord = Coordinate418;

Shape415.geometry = LineSet416;

HAnimSegment411.children[1] = Shape415;

HAnimJoint410.children = new MFNode();

HAnimJoint410.children[0] = HAnimSegment411;

HAnimJoint HAnimJoint419 = createNode("HAnimJoint");
HAnimJoint419.DEF = "hanim_vt3";
HAnimJoint419.name = "vt3";
HAnimJoint419.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimSegment HAnimSegment420 = createNode("HAnimSegment");
HAnimSegment420.DEF = "hanim_t3";
HAnimSegment420.name = "t3";
Transform Transform421 = createNode("Transform");
Transform421.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Transform Transform422 = createNode("Transform");
Shape Shape423 = createNode("Shape");
Shape423.USE = "HAnimJointShape";
Transform422.child = new undefined();

Transform422.child[0] = Shape423;

Transform421.children = new MFNode();

Transform421.children[0] = Transform422;

HAnimSegment420.children = new MFNode();

HAnimSegment420.children[0] = Transform421;

Shape Shape424 = createNode("Shape");
LineSet LineSet425 = createNode("LineSet");
LineSet425.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA426 = createNode("ColorRGBA");
ColorRGBA426.USE = "HAnimSegmentLineColorRGBA";
LineSet425.color = ColorRGBA426;

Coordinate Coordinate427 = createNode("Coordinate");
Coordinate427.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet425.coord = Coordinate427;

Shape424.geometry = LineSet425;

HAnimSegment420.children[1] = Shape424;

HAnimJoint419.children = new MFNode();

HAnimJoint419.children[0] = HAnimSegment420;

HAnimJoint HAnimJoint428 = createNode("HAnimJoint");
HAnimJoint428.DEF = "hanim_vt2";
HAnimJoint428.name = "vt2";
HAnimJoint428.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimSegment HAnimSegment429 = createNode("HAnimSegment");
HAnimSegment429.DEF = "hanim_t2";
HAnimSegment429.name = "t2";
Transform Transform430 = createNode("Transform");
Transform430.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
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
Coordinate436.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet434.coord = Coordinate436;

Shape433.geometry = LineSet434;

HAnimSegment429.children[1] = Shape433;

HAnimSite HAnimSite437 = createNode("HAnimSite");
HAnimSite437.DEF = "hanim_cervicale_pt";
HAnimSite437.name = "cervicale_pt";
HAnimSite437.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor438 = createNode("TouchSensor");
TouchSensor438.description = "HAnimSite cervicale_pt";
HAnimSite437.children = new MFNode();

HAnimSite437.children[0] = TouchSensor438;

Shape Shape439 = createNode("Shape");
Shape439.USE = "HAnimSiteShape";
HAnimSite437.children[1] = Shape439;

HAnimSegment429.children[2] = HAnimSite437;

HAnimSite HAnimSite440 = createNode("HAnimSite");
HAnimSite440.DEF = "hanim_suprasternale_pt";
HAnimSite440.name = "suprasternale_pt";
HAnimSite440.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor441 = createNode("TouchSensor");
TouchSensor441.description = "HAnimSite suprasternale_pt";
HAnimSite440.children = new MFNode();

HAnimSite440.children[0] = TouchSensor441;

Shape Shape442 = createNode("Shape");
Shape442.USE = "HAnimSiteShape";
HAnimSite440.children[1] = Shape442;

HAnimSegment429.children[3] = HAnimSite440;

HAnimJoint428.children = new MFNode();

HAnimJoint428.children[0] = HAnimSegment429;

HAnimJoint HAnimJoint443 = createNode("HAnimJoint");
HAnimJoint443.DEF = "hanim_vt1";
HAnimJoint443.name = "vt1";
HAnimJoint443.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimSegment HAnimSegment444 = createNode("HAnimSegment");
HAnimSegment444.DEF = "hanim_t1";
HAnimSegment444.name = "t1";
Transform Transform445 = createNode("Transform");
Transform445.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
Transform Transform446 = createNode("Transform");
Shape Shape447 = createNode("Shape");
Shape447.USE = "HAnimJointShape";
Transform446.child = new undefined();

Transform446.child[0] = Shape447;

Transform445.children = new MFNode();

Transform445.children[0] = Transform446;

HAnimSegment444.children = new MFNode();

HAnimSegment444.children[0] = Transform445;

Shape Shape448 = createNode("Shape");
LineSet LineSet449 = createNode("LineSet");
LineSet449.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA450 = createNode("ColorRGBA");
ColorRGBA450.USE = "HAnimSegmentLineColorRGBA";
LineSet449.color = ColorRGBA450;

Coordinate Coordinate451 = createNode("Coordinate");
Coordinate451.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet449.coord = Coordinate451;

Shape448.geometry = LineSet449;

HAnimSegment444.children[1] = Shape448;

HAnimSite HAnimSite452 = createNode("HAnimSite");
HAnimSite452.DEF = "hanim_l_neck_base_pt";
HAnimSite452.name = "l_neck_base_pt";
HAnimSite452.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor453 = createNode("TouchSensor");
TouchSensor453.description = "HAnimSite l_neck_base_pt";
HAnimSite452.children = new MFNode();

HAnimSite452.children[0] = TouchSensor453;

Shape Shape454 = createNode("Shape");
Shape454.USE = "HAnimSiteShape";
HAnimSite452.children[1] = Shape454;

HAnimSegment444.children[2] = HAnimSite452;

HAnimSite HAnimSite455 = createNode("HAnimSite");
HAnimSite455.DEF = "hanim_r_neck_base_pt";
HAnimSite455.name = "r_neck_base_pt";
HAnimSite455.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor456 = createNode("TouchSensor");
TouchSensor456.description = "HAnimSite r_neck_base_pt";
HAnimSite455.children = new MFNode();

HAnimSite455.children[0] = TouchSensor456;

Shape Shape457 = createNode("Shape");
Shape457.USE = "HAnimSiteShape";
HAnimSite455.children[1] = Shape457;

HAnimSegment444.children[3] = HAnimSite455;

Shape Shape458 = createNode("Shape");
LineSet LineSet459 = createNode("LineSet");
LineSet459.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA460 = createNode("ColorRGBA");
ColorRGBA460.USE = "HAnimSegmentLineColorRGBA";
LineSet459.color = ColorRGBA460;

Coordinate Coordinate461 = createNode("Coordinate");
Coordinate461.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet459.coord = Coordinate461;

Shape458.geometry = LineSet459;

HAnimSegment444.children[4] = Shape458;

HAnimSite HAnimSite462 = createNode("HAnimSite");
HAnimSite462.DEF = "hanim_l_acromion_pt";
HAnimSite462.name = "l_acromion_pt";
HAnimSite462.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor463 = createNode("TouchSensor");
TouchSensor463.description = "HAnimSite l_acromion_pt";
HAnimSite462.children = new MFNode();

HAnimSite462.children[0] = TouchSensor463;

Shape Shape464 = createNode("Shape");
Shape464.USE = "HAnimSiteShape";
HAnimSite462.children[1] = Shape464;

HAnimSegment444.children[5] = HAnimSite462;

HAnimSite HAnimSite465 = createNode("HAnimSite");
HAnimSite465.DEF = "hanim_l_axilla_distal_pt";
HAnimSite465.name = "l_axilla_distal_pt";
HAnimSite465.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor466 = createNode("TouchSensor");
TouchSensor466.description = "HAnimSite l_axilla_distal_pt";
HAnimSite465.children = new MFNode();

HAnimSite465.children[0] = TouchSensor466;

Shape Shape467 = createNode("Shape");
Shape467.USE = "HAnimSiteShape";
HAnimSite465.children[1] = Shape467;

HAnimSegment444.children[6] = HAnimSite465;

HAnimSite HAnimSite468 = createNode("HAnimSite");
HAnimSite468.DEF = "hanim_l_axilla_posterior_folds_pt";
HAnimSite468.name = "l_axilla_posterior_folds_pt";
TouchSensor TouchSensor469 = createNode("TouchSensor");
TouchSensor469.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite468.children = new MFNode();

HAnimSite468.children[0] = TouchSensor469;

Shape Shape470 = createNode("Shape");
Shape470.USE = "HAnimSiteShape";
HAnimSite468.children[1] = Shape470;

HAnimSegment444.children[7] = HAnimSite468;

HAnimSite HAnimSite471 = createNode("HAnimSite");
HAnimSite471.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite471.name = "l_axilla_proximal_pt";
HAnimSite471.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor472 = createNode("TouchSensor");
TouchSensor472.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite471.children = new MFNode();

HAnimSite471.children[0] = TouchSensor472;

Shape Shape473 = createNode("Shape");
Shape473.USE = "HAnimSiteShape";
HAnimSite471.children[1] = Shape473;

HAnimSegment444.children[8] = HAnimSite471;

HAnimSite HAnimSite474 = createNode("HAnimSite");
HAnimSite474.DEF = "hanim_l_clavicale_pt";
HAnimSite474.name = "l_clavicale_pt";
HAnimSite474.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor475 = createNode("TouchSensor");
TouchSensor475.description = "HAnimSite l_clavicale_pt";
HAnimSite474.children = new MFNode();

HAnimSite474.children[0] = TouchSensor475;

Shape Shape476 = createNode("Shape");
Shape476.USE = "HAnimSiteShape";
HAnimSite474.children[1] = Shape476;

HAnimSegment444.children[9] = HAnimSite474;

Shape Shape477 = createNode("Shape");
LineSet LineSet478 = createNode("LineSet");
LineSet478.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA479 = createNode("ColorRGBA");
ColorRGBA479.USE = "HAnimSegmentLineColorRGBA";
LineSet478.color = ColorRGBA479;

Coordinate Coordinate480 = createNode("Coordinate");
Coordinate480.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet478.coord = Coordinate480;

Shape477.geometry = LineSet478;

HAnimSegment444.children[10] = Shape477;

HAnimSite HAnimSite481 = createNode("HAnimSite");
HAnimSite481.DEF = "hanim_r_acromion_pt";
HAnimSite481.name = "r_acromion_pt";
HAnimSite481.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor482 = createNode("TouchSensor");
TouchSensor482.description = "HAnimSite r_acromion_pt";
HAnimSite481.children = new MFNode();

HAnimSite481.children[0] = TouchSensor482;

Shape Shape483 = createNode("Shape");
Shape483.USE = "HAnimSiteShape";
HAnimSite481.children[1] = Shape483;

HAnimSegment444.children[11] = HAnimSite481;

HAnimSite HAnimSite484 = createNode("HAnimSite");
HAnimSite484.DEF = "hanim_r_axilla_distal_pt";
HAnimSite484.name = "r_axilla_distal_pt";
HAnimSite484.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor485 = createNode("TouchSensor");
TouchSensor485.description = "HAnimSite r_axilla_distal_pt";
HAnimSite484.children = new MFNode();

HAnimSite484.children[0] = TouchSensor485;

Shape Shape486 = createNode("Shape");
Shape486.USE = "HAnimSiteShape";
HAnimSite484.children[1] = Shape486;

HAnimSegment444.children[12] = HAnimSite484;

HAnimSite HAnimSite487 = createNode("HAnimSite");
HAnimSite487.DEF = "hanim_r_axilla_posterior_folds_pt";
HAnimSite487.name = "r_axilla_posterior_folds_pt";
TouchSensor TouchSensor488 = createNode("TouchSensor");
TouchSensor488.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite487.children = new MFNode();

HAnimSite487.children[0] = TouchSensor488;

Shape Shape489 = createNode("Shape");
Shape489.USE = "HAnimSiteShape";
HAnimSite487.children[1] = Shape489;

HAnimSegment444.children[13] = HAnimSite487;

HAnimSite HAnimSite490 = createNode("HAnimSite");
HAnimSite490.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite490.name = "r_axilla_proximal_pt";
HAnimSite490.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor491 = createNode("TouchSensor");
TouchSensor491.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite490.children = new MFNode();

HAnimSite490.children[0] = TouchSensor491;

Shape Shape492 = createNode("Shape");
Shape492.USE = "HAnimSiteShape";
HAnimSite490.children[1] = Shape492;

HAnimSegment444.children[14] = HAnimSite490;

HAnimSite HAnimSite493 = createNode("HAnimSite");
HAnimSite493.DEF = "hanim_r_clavicale_pt";
HAnimSite493.name = "r_clavicale_pt";
HAnimSite493.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor494 = createNode("TouchSensor");
TouchSensor494.description = "HAnimSite r_clavicale_pt";
HAnimSite493.children = new MFNode();

HAnimSite493.children[0] = TouchSensor494;

Shape Shape495 = createNode("Shape");
Shape495.USE = "HAnimSiteShape";
HAnimSite493.children[1] = Shape495;

HAnimSegment444.children[15] = HAnimSite493;

HAnimJoint443.children = new MFNode();

HAnimJoint443.children[0] = HAnimSegment444;

HAnimJoint HAnimJoint496 = createNode("HAnimJoint");
HAnimJoint496.DEF = "hanim_vc7";
HAnimJoint496.name = "vc7";
HAnimJoint496.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimSegment HAnimSegment497 = createNode("HAnimSegment");
HAnimSegment497.DEF = "hanim_c7";
HAnimSegment497.name = "c7";
Transform Transform498 = createNode("Transform");
Transform498.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
Transform Transform499 = createNode("Transform");
Shape Shape500 = createNode("Shape");
Shape500.USE = "HAnimJointShape";
Transform499.child = new undefined();

Transform499.child[0] = Shape500;

Transform498.children = new MFNode();

Transform498.children[0] = Transform499;

HAnimSegment497.children = new MFNode();

HAnimSegment497.children[0] = Transform498;

Shape Shape501 = createNode("Shape");
LineSet LineSet502 = createNode("LineSet");
LineSet502.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA503 = createNode("ColorRGBA");
ColorRGBA503.USE = "HAnimSegmentLineColorRGBA";
LineSet502.color = ColorRGBA503;

Coordinate Coordinate504 = createNode("Coordinate");
Coordinate504.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet502.coord = Coordinate504;

Shape501.geometry = LineSet502;

HAnimSegment497.children[1] = Shape501;

HAnimJoint496.children = new MFNode();

HAnimJoint496.children[0] = HAnimSegment497;

HAnimJoint HAnimJoint505 = createNode("HAnimJoint");
HAnimJoint505.DEF = "hanim_vc6";
HAnimJoint505.name = "vc6";
HAnimJoint505.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimSegment HAnimSegment506 = createNode("HAnimSegment");
HAnimSegment506.DEF = "hanim_c6";
HAnimSegment506.name = "c6";
Transform Transform507 = createNode("Transform");
Transform507.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Transform Transform508 = createNode("Transform");
Shape Shape509 = createNode("Shape");
Shape509.USE = "HAnimJointShape";
Transform508.child = new undefined();

Transform508.child[0] = Shape509;

Transform507.children = new MFNode();

Transform507.children[0] = Transform508;

HAnimSegment506.children = new MFNode();

HAnimSegment506.children[0] = Transform507;

Shape Shape510 = createNode("Shape");
LineSet LineSet511 = createNode("LineSet");
LineSet511.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA512 = createNode("ColorRGBA");
ColorRGBA512.USE = "HAnimSegmentLineColorRGBA";
LineSet511.color = ColorRGBA512;

Coordinate Coordinate513 = createNode("Coordinate");
Coordinate513.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet511.coord = Coordinate513;

Shape510.geometry = LineSet511;

HAnimSegment506.children[1] = Shape510;

HAnimJoint505.children = new MFNode();

HAnimJoint505.children[0] = HAnimSegment506;

HAnimJoint HAnimJoint514 = createNode("HAnimJoint");
HAnimJoint514.DEF = "hanim_vc5";
HAnimJoint514.name = "vc5";
HAnimJoint514.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimSegment HAnimSegment515 = createNode("HAnimSegment");
HAnimSegment515.DEF = "hanim_c5";
HAnimSegment515.name = "c5";
Transform Transform516 = createNode("Transform");
Transform516.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Transform Transform517 = createNode("Transform");
Shape Shape518 = createNode("Shape");
Shape518.USE = "HAnimJointShape";
Transform517.child = new undefined();

Transform517.child[0] = Shape518;

Transform516.children = new MFNode();

Transform516.children[0] = Transform517;

HAnimSegment515.children = new MFNode();

HAnimSegment515.children[0] = Transform516;

Shape Shape519 = createNode("Shape");
LineSet LineSet520 = createNode("LineSet");
LineSet520.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA521 = createNode("ColorRGBA");
ColorRGBA521.USE = "HAnimSegmentLineColorRGBA";
LineSet520.color = ColorRGBA521;

Coordinate Coordinate522 = createNode("Coordinate");
Coordinate522.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet520.coord = Coordinate522;

Shape519.geometry = LineSet520;

HAnimSegment515.children[1] = Shape519;

HAnimJoint514.children = new MFNode();

HAnimJoint514.children[0] = HAnimSegment515;

HAnimJoint HAnimJoint523 = createNode("HAnimJoint");
HAnimJoint523.DEF = "hanim_vc4";
HAnimJoint523.name = "vc4";
HAnimJoint523.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimSegment HAnimSegment524 = createNode("HAnimSegment");
HAnimSegment524.DEF = "hanim_c4";
HAnimSegment524.name = "c4";
Transform Transform525 = createNode("Transform");
Transform525.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Transform Transform526 = createNode("Transform");
Shape Shape527 = createNode("Shape");
Shape527.USE = "HAnimJointShape";
Transform526.child = new undefined();

Transform526.child[0] = Shape527;

Transform525.children = new MFNode();

Transform525.children[0] = Transform526;

HAnimSegment524.children = new MFNode();

HAnimSegment524.children[0] = Transform525;

Shape Shape528 = createNode("Shape");
LineSet LineSet529 = createNode("LineSet");
LineSet529.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA530 = createNode("ColorRGBA");
ColorRGBA530.USE = "HAnimSegmentLineColorRGBA";
LineSet529.color = ColorRGBA530;

Coordinate Coordinate531 = createNode("Coordinate");
Coordinate531.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet529.coord = Coordinate531;

Shape528.geometry = LineSet529;

HAnimSegment524.children[1] = Shape528;

HAnimJoint523.children = new MFNode();

HAnimJoint523.children[0] = HAnimSegment524;

HAnimJoint HAnimJoint532 = createNode("HAnimJoint");
HAnimJoint532.DEF = "hanim_vc3";
HAnimJoint532.name = "vc3";
HAnimJoint532.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimSegment HAnimSegment533 = createNode("HAnimSegment");
HAnimSegment533.DEF = "hanim_c3";
HAnimSegment533.name = "c3";
Transform Transform534 = createNode("Transform");
Transform534.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
Transform Transform535 = createNode("Transform");
Shape Shape536 = createNode("Shape");
Shape536.USE = "HAnimJointShape";
Transform535.child = new undefined();

Transform535.child[0] = Shape536;

Transform534.children = new MFNode();

Transform534.children[0] = Transform535;

HAnimSegment533.children = new MFNode();

HAnimSegment533.children[0] = Transform534;

Shape Shape537 = createNode("Shape");
LineSet LineSet538 = createNode("LineSet");
LineSet538.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA539 = createNode("ColorRGBA");
ColorRGBA539.USE = "HAnimSegmentLineColorRGBA";
LineSet538.color = ColorRGBA539;

Coordinate Coordinate540 = createNode("Coordinate");
Coordinate540.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet538.coord = Coordinate540;

Shape537.geometry = LineSet538;

HAnimSegment533.children[1] = Shape537;

HAnimSite HAnimSite541 = createNode("HAnimSite");
HAnimSite541.DEF = "hanim_adams_apple_pt";
HAnimSite541.name = "adams_apple_pt";
TouchSensor TouchSensor542 = createNode("TouchSensor");
TouchSensor542.description = "HAnimSite adams_apple_pt";
HAnimSite541.children = new MFNode();

HAnimSite541.children[0] = TouchSensor542;

Shape Shape543 = createNode("Shape");
Shape543.USE = "HAnimSiteShape";
HAnimSite541.children[1] = Shape543;

HAnimSegment533.children[2] = HAnimSite541;

HAnimJoint532.children = new MFNode();

HAnimJoint532.children[0] = HAnimSegment533;

HAnimJoint HAnimJoint544 = createNode("HAnimJoint");
HAnimJoint544.DEF = "hanim_vc2";
HAnimJoint544.name = "vc2";
HAnimJoint544.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimSegment HAnimSegment545 = createNode("HAnimSegment");
HAnimSegment545.DEF = "hanim_c2";
HAnimSegment545.name = "c2";
Transform Transform546 = createNode("Transform");
Transform546.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
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
Coordinate552.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet550.coord = Coordinate552;

Shape549.geometry = LineSet550;

HAnimSegment545.children[1] = Shape549;

HAnimJoint544.children = new MFNode();

HAnimJoint544.children[0] = HAnimSegment545;

HAnimJoint HAnimJoint553 = createNode("HAnimJoint");
HAnimJoint553.DEF = "hanim_vc1";
HAnimJoint553.name = "vc1";
HAnimJoint553.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimSegment HAnimSegment554 = createNode("HAnimSegment");
HAnimSegment554.DEF = "hanim_c1";
HAnimSegment554.name = "c1";
Transform Transform555 = createNode("Transform");
Transform555.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
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
Coordinate561.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet559.coord = Coordinate561;

Shape558.geometry = LineSet559;

HAnimSegment554.children[1] = Shape558;

HAnimSite HAnimSite562 = createNode("HAnimSite");
HAnimSite562.DEF = "hanim_glabella_pt";
HAnimSite562.name = "glabella_pt";
TouchSensor TouchSensor563 = createNode("TouchSensor");
TouchSensor563.description = "HAnimSite glabella_pt";
HAnimSite562.children = new MFNode();

HAnimSite562.children[0] = TouchSensor563;

Shape Shape564 = createNode("Shape");
Shape564.USE = "HAnimSiteShape";
HAnimSite562.children[1] = Shape564;

HAnimSegment554.children[2] = HAnimSite562;

HAnimSite HAnimSite565 = createNode("HAnimSite");
HAnimSite565.DEF = "hanim_l_ectocanthus_pt";
HAnimSite565.name = "l_ectocanthus_pt";
TouchSensor TouchSensor566 = createNode("TouchSensor");
TouchSensor566.description = "HAnimSite l_ectocanthus_pt";
HAnimSite565.children = new MFNode();

HAnimSite565.children[0] = TouchSensor566;

Shape Shape567 = createNode("Shape");
Shape567.USE = "HAnimSiteShape";
HAnimSite565.children[1] = Shape567;

HAnimSegment554.children[3] = HAnimSite565;

HAnimSite HAnimSite568 = createNode("HAnimSite");
HAnimSite568.DEF = "hanim_l_infraorbitale_pt";
HAnimSite568.name = "l_infraorbitale_pt";
HAnimSite568.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor569 = createNode("TouchSensor");
TouchSensor569.description = "HAnimSite l_infraorbitale_pt";
HAnimSite568.children = new MFNode();

HAnimSite568.children[0] = TouchSensor569;

Shape Shape570 = createNode("Shape");
Shape570.USE = "HAnimSiteShape";
HAnimSite568.children[1] = Shape570;

HAnimSegment554.children[4] = HAnimSite568;

HAnimSite HAnimSite571 = createNode("HAnimSite");
HAnimSite571.DEF = "hanim_l_tragion_pt";
HAnimSite571.name = "l_tragion_pt";
HAnimSite571.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor572 = createNode("TouchSensor");
TouchSensor572.description = "HAnimSite l_tragion_pt";
HAnimSite571.children = new MFNode();

HAnimSite571.children[0] = TouchSensor572;

Shape Shape573 = createNode("Shape");
Shape573.USE = "HAnimSiteShape";
HAnimSite571.children[1] = Shape573;

HAnimSegment554.children[5] = HAnimSite571;

HAnimSite HAnimSite574 = createNode("HAnimSite");
HAnimSite574.DEF = "hanim_nuchale_pt";
HAnimSite574.name = "nuchale_pt";
HAnimSite574.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor575 = createNode("TouchSensor");
TouchSensor575.description = "HAnimSite nuchale_pt";
HAnimSite574.children = new MFNode();

HAnimSite574.children[0] = TouchSensor575;

Shape Shape576 = createNode("Shape");
Shape576.USE = "HAnimSiteShape";
HAnimSite574.children[1] = Shape576;

HAnimSegment554.children[6] = HAnimSite574;

HAnimSite HAnimSite577 = createNode("HAnimSite");
HAnimSite577.DEF = "hanim_opisthocranion_pt";
HAnimSite577.name = "opisthocranion_pt";
TouchSensor TouchSensor578 = createNode("TouchSensor");
TouchSensor578.description = "HAnimSite opisthocranion_pt";
HAnimSite577.children = new MFNode();

HAnimSite577.children[0] = TouchSensor578;

Shape Shape579 = createNode("Shape");
Shape579.USE = "HAnimSiteShape";
HAnimSite577.children[1] = Shape579;

HAnimSegment554.children[7] = HAnimSite577;

HAnimSite HAnimSite580 = createNode("HAnimSite");
HAnimSite580.DEF = "hanim_r_ectocanthus_pt";
HAnimSite580.name = "r_ectocanthus_pt";
TouchSensor TouchSensor581 = createNode("TouchSensor");
TouchSensor581.description = "HAnimSite r_ectocanthus_pt";
HAnimSite580.children = new MFNode();

HAnimSite580.children[0] = TouchSensor581;

Shape Shape582 = createNode("Shape");
Shape582.USE = "HAnimSiteShape";
HAnimSite580.children[1] = Shape582;

HAnimSegment554.children[8] = HAnimSite580;

HAnimSite HAnimSite583 = createNode("HAnimSite");
HAnimSite583.DEF = "hanim_r_infraorbitale_pt";
HAnimSite583.name = "r_infraorbitale_pt";
HAnimSite583.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor584 = createNode("TouchSensor");
TouchSensor584.description = "HAnimSite r_infraorbitale_pt";
HAnimSite583.children = new MFNode();

HAnimSite583.children[0] = TouchSensor584;

Shape Shape585 = createNode("Shape");
Shape585.USE = "HAnimSiteShape";
HAnimSite583.children[1] = Shape585;

HAnimSegment554.children[9] = HAnimSite583;

HAnimSite HAnimSite586 = createNode("HAnimSite");
HAnimSite586.DEF = "hanim_r_tragion_pt";
HAnimSite586.name = "r_tragion_pt";
HAnimSite586.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor587 = createNode("TouchSensor");
TouchSensor587.description = "HAnimSite r_tragion_pt";
HAnimSite586.children = new MFNode();

HAnimSite586.children[0] = TouchSensor587;

Shape Shape588 = createNode("Shape");
Shape588.USE = "HAnimSiteShape";
HAnimSite586.children[1] = Shape588;

HAnimSegment554.children[10] = HAnimSite586;

HAnimSite HAnimSite589 = createNode("HAnimSite");
HAnimSite589.DEF = "hanim_sellion_pt";
HAnimSite589.name = "sellion_pt";
HAnimSite589.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor590 = createNode("TouchSensor");
TouchSensor590.description = "HAnimSite sellion_pt";
HAnimSite589.children = new MFNode();

HAnimSite589.children[0] = TouchSensor590;

Shape Shape591 = createNode("Shape");
Shape591.USE = "HAnimSiteShape";
HAnimSite589.children[1] = Shape591;

HAnimSegment554.children[11] = HAnimSite589;

HAnimSite HAnimSite592 = createNode("HAnimSite");
HAnimSite592.DEF = "hanim_skull_vertex_pt";
HAnimSite592.name = "skull_vertex_pt";
HAnimSite592.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor593 = createNode("TouchSensor");
TouchSensor593.description = "HAnimSite skull_vertex_pt";
HAnimSite592.children = new MFNode();

HAnimSite592.children[0] = TouchSensor593;

Shape Shape594 = createNode("Shape");
Shape594.USE = "HAnimSiteShape";
HAnimSite592.children[1] = Shape594;

HAnimSegment554.children[12] = HAnimSite592;

HAnimJoint553.children = new MFNode();

HAnimJoint553.children[0] = HAnimSegment554;

HAnimJoint HAnimJoint595 = createNode("HAnimJoint");
HAnimJoint595.DEF = "hanim_skullbase";
HAnimJoint595.name = "skullbase";
HAnimJoint595.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimSegment HAnimSegment596 = createNode("HAnimSegment");
HAnimSegment596.DEF = "hanim_skull";
HAnimSegment596.name = "skull";
Transform Transform597 = createNode("Transform");
Transform597.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Transform Transform598 = createNode("Transform");
Shape Shape599 = createNode("Shape");
Shape599.USE = "HAnimJointShape";
Transform598.child = new undefined();

Transform598.child[0] = Shape599;

Transform597.children = new MFNode();

Transform597.children[0] = Transform598;

HAnimSegment596.children = new MFNode();

HAnimSegment596.children[0] = Transform597;

Shape Shape600 = createNode("Shape");
LineSet LineSet601 = createNode("LineSet");
LineSet601.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA602 = createNode("ColorRGBA");
ColorRGBA602.USE = "HAnimSegmentLineColorRGBA";
LineSet601.color = ColorRGBA602;

Coordinate Coordinate603 = createNode("Coordinate");
Coordinate603.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689]);
LineSet601.coord = Coordinate603;

Shape600.geometry = LineSet601;

HAnimSegment596.children[1] = Shape600;

Shape Shape604 = createNode("Shape");
LineSet LineSet605 = createNode("LineSet");
LineSet605.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA606 = createNode("ColorRGBA");
ColorRGBA606.USE = "HAnimSegmentLineColorRGBA";
LineSet605.color = ColorRGBA606;

Coordinate Coordinate607 = createNode("Coordinate");
Coordinate607.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689]);
LineSet605.coord = Coordinate607;

Shape604.geometry = LineSet605;

HAnimSegment596.children[2] = Shape604;

Shape Shape608 = createNode("Shape");
LineSet LineSet609 = createNode("LineSet");
LineSet609.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA610 = createNode("ColorRGBA");
ColorRGBA610.USE = "HAnimSegmentLineColorRGBA";
LineSet609.color = ColorRGBA610;

Coordinate Coordinate611 = createNode("Coordinate");
Coordinate611.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188]);
LineSet609.coord = Coordinate611;

Shape608.geometry = LineSet609;

HAnimSegment596.children[3] = Shape608;

Shape Shape612 = createNode("Shape");
LineSet LineSet613 = createNode("LineSet");
LineSet613.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA614 = createNode("ColorRGBA");
ColorRGBA614.USE = "HAnimSegmentLineColorRGBA";
LineSet613.color = ColorRGBA614;

Coordinate Coordinate615 = createNode("Coordinate");
Coordinate615.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188]);
LineSet613.coord = Coordinate615;

Shape612.geometry = LineSet613;

HAnimSegment596.children[4] = Shape612;

Shape Shape616 = createNode("Shape");
LineSet LineSet617 = createNode("LineSet");
LineSet617.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA618 = createNode("ColorRGBA");
ColorRGBA618.USE = "HAnimSegmentLineColorRGBA";
LineSet617.color = ColorRGBA618;

Coordinate Coordinate619 = createNode("Coordinate");
Coordinate619.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0216,1.4053,0.0051]);
LineSet617.coord = Coordinate619;

Shape616.geometry = LineSet617;

HAnimSegment596.children[5] = Shape616;

Shape Shape620 = createNode("Shape");
LineSet LineSet621 = createNode("LineSet");
LineSet621.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA622 = createNode("ColorRGBA");
ColorRGBA622.USE = "HAnimSegmentLineColorRGBA";
LineSet621.color = ColorRGBA622;

Coordinate Coordinate623 = createNode("Coordinate");
Coordinate623.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051]);
LineSet621.coord = Coordinate623;

Shape620.geometry = LineSet621;

HAnimSegment596.children[6] = Shape620;

Shape Shape624 = createNode("Shape");
LineSet LineSet625 = createNode("LineSet");
LineSet625.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA626 = createNode("ColorRGBA");
ColorRGBA626.USE = "HAnimSegmentLineColorRGBA";
LineSet625.color = ColorRGBA626;

Coordinate Coordinate627 = createNode("Coordinate");
Coordinate627.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865]);
LineSet625.coord = Coordinate627;

Shape624.geometry = LineSet625;

HAnimSegment596.children[7] = Shape624;

HAnimSite HAnimSite628 = createNode("HAnimSite");
HAnimSite628.DEF = "hanim_l_gonion_pt";
HAnimSite628.name = "l_gonion_pt";
HAnimSite628.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
TouchSensor TouchSensor629 = createNode("TouchSensor");
TouchSensor629.description = "HAnimSite l_gonion_pt";
HAnimSite628.children = new MFNode();

HAnimSite628.children[0] = TouchSensor629;

Shape Shape630 = createNode("Shape");
Shape630.USE = "HAnimSiteShape";
HAnimSite628.children[1] = Shape630;

HAnimSegment596.children[8] = HAnimSite628;

HAnimSite HAnimSite631 = createNode("HAnimSite");
HAnimSite631.DEF = "hanim_menton_pt";
HAnimSite631.name = "menton_pt";
TouchSensor TouchSensor632 = createNode("TouchSensor");
TouchSensor632.description = "HAnimSite menton_pt";
HAnimSite631.children = new MFNode();

HAnimSite631.children[0] = TouchSensor632;

Shape Shape633 = createNode("Shape");
Shape633.USE = "HAnimSiteShape";
HAnimSite631.children[1] = Shape633;

HAnimSegment596.children[9] = HAnimSite631;

HAnimSite HAnimSite634 = createNode("HAnimSite");
HAnimSite634.DEF = "hanim_r_gonion_pt";
HAnimSite634.name = "r_gonion_pt";
HAnimSite634.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
TouchSensor TouchSensor635 = createNode("TouchSensor");
TouchSensor635.description = "HAnimSite r_gonion_pt";
HAnimSite634.children = new MFNode();

HAnimSite634.children[0] = TouchSensor635;

Shape Shape636 = createNode("Shape");
Shape636.USE = "HAnimSiteShape";
HAnimSite634.children[1] = Shape636;

HAnimSegment596.children[10] = HAnimSite634;

HAnimSite HAnimSite637 = createNode("HAnimSite");
HAnimSite637.DEF = "hanim_supramenton_pt";
HAnimSite637.name = "supramenton_pt";
HAnimSite637.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
TouchSensor TouchSensor638 = createNode("TouchSensor");
TouchSensor638.description = "HAnimSite supramenton_pt";
HAnimSite637.children = new MFNode();

HAnimSite637.children[0] = TouchSensor638;

Shape Shape639 = createNode("Shape");
Shape639.USE = "HAnimSiteShape";
HAnimSite637.children[1] = Shape639;

HAnimSegment596.children[11] = HAnimSite637;

HAnimJoint595.children = new MFNode();

HAnimJoint595.children[0] = HAnimSegment596;

HAnimJoint HAnimJoint640 = createNode("HAnimJoint");
HAnimJoint640.DEF = "hanim_l_eyelid_joint";
HAnimJoint640.name = "l_eyelid_joint";
HAnimJoint640.center = new SFVec3f(new float[0.0503,1.4157,-0.0689]);
HAnimJoint595.children[1] = HAnimJoint640;

HAnimJoint HAnimJoint641 = createNode("HAnimJoint");
HAnimJoint641.DEF = "hanim_r_eyelid_joint";
HAnimJoint641.name = "r_eyelid_joint";
HAnimJoint641.center = new SFVec3f(new float[-0.0507,1.4157,-0.0689]);
HAnimJoint595.children[2] = HAnimJoint641;

HAnimJoint HAnimJoint642 = createNode("HAnimJoint");
HAnimJoint642.DEF = "hanim_l_eyeball_joint";
HAnimJoint642.name = "l_eyeball_joint";
HAnimJoint642.center = new SFVec3f(new float[0.0479,1.3963,-0.0188]);
HAnimJoint595.children[3] = HAnimJoint642;

HAnimJoint HAnimJoint643 = createNode("HAnimJoint");
HAnimJoint643.DEF = "hanim_r_eyeball_joint";
HAnimJoint643.name = "r_eyeball_joint";
HAnimJoint643.center = new SFVec3f(new float[-0.0483,1.3963,-0.0188]);
HAnimJoint595.children[4] = HAnimJoint643;

HAnimJoint HAnimJoint644 = createNode("HAnimJoint");
HAnimJoint644.DEF = "hanim_l_eyebrow_joint";
HAnimJoint644.name = "l_eyebrow_joint";
HAnimJoint644.center = new SFVec3f(new float[0.0216,1.4053,0.0051]);
HAnimJoint595.children[5] = HAnimJoint644;

HAnimJoint HAnimJoint645 = createNode("HAnimJoint");
HAnimJoint645.DEF = "hanim_r_eyebrow_joint";
HAnimJoint645.name = "r_eyebrow_joint";
HAnimJoint645.center = new SFVec3f(new float[-0.0219,1.4053,0.0051]);
HAnimJoint595.children[6] = HAnimJoint645;

HAnimJoint HAnimJoint646 = createNode("HAnimJoint");
HAnimJoint646.DEF = "hanim_temporomandibular";
HAnimJoint646.name = "temporomandibular";
HAnimJoint646.center = new SFVec3f(new float[-0.0002,1.3043,-0.0865]);
HAnimJoint595.children[7] = HAnimJoint646;

HAnimJoint553.children[1] = HAnimJoint595;

HAnimJoint544.children[1] = HAnimJoint553;

HAnimJoint532.children[1] = HAnimJoint544;

HAnimJoint523.children[1] = HAnimJoint532;

HAnimJoint514.children[1] = HAnimJoint523;

HAnimJoint505.children[1] = HAnimJoint514;

HAnimJoint496.children[1] = HAnimJoint505;

HAnimJoint443.children[1] = HAnimJoint496;

HAnimJoint HAnimJoint647 = createNode("HAnimJoint");
HAnimJoint647.DEF = "hanim_l_sternoclavicular";
HAnimJoint647.name = "l_sternoclavicular";
HAnimJoint647.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment648 = createNode("HAnimSegment");
HAnimSegment648.DEF = "hanim_l_clavicle";
HAnimSegment648.name = "l_clavicle";
Transform Transform649 = createNode("Transform");
Transform649.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Transform Transform650 = createNode("Transform");
Shape Shape651 = createNode("Shape");
Shape651.USE = "HAnimJointShape";
Transform650.child = new undefined();

Transform650.child[0] = Shape651;

Transform649.children = new MFNode();

Transform649.children[0] = Transform650;

HAnimSegment648.children = new MFNode();

HAnimSegment648.children[0] = Transform649;

Shape Shape652 = createNode("Shape");
LineSet LineSet653 = createNode("LineSet");
LineSet653.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA654 = createNode("ColorRGBA");
ColorRGBA654.USE = "HAnimSegmentLineColorRGBA";
LineSet653.color = ColorRGBA654;

Coordinate Coordinate655 = createNode("Coordinate");
Coordinate655.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet653.coord = Coordinate655;

Shape652.geometry = LineSet653;

HAnimSegment648.children[1] = Shape652;

HAnimJoint647.children = new MFNode();

HAnimJoint647.children[0] = HAnimSegment648;

HAnimJoint HAnimJoint656 = createNode("HAnimJoint");
HAnimJoint656.DEF = "hanim_l_acromioclavicular";
HAnimJoint656.name = "l_acromioclavicular";
HAnimJoint656.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment657 = createNode("HAnimSegment");
HAnimSegment657.DEF = "hanim_l_scapula";
HAnimSegment657.name = "l_scapula";
Transform Transform658 = createNode("Transform");
Transform658.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Transform Transform659 = createNode("Transform");
Shape Shape660 = createNode("Shape");
Shape660.USE = "HAnimJointShape";
Transform659.child = new undefined();

Transform659.child[0] = Shape660;

Transform658.children = new MFNode();

Transform658.children[0] = Transform659;

HAnimSegment657.children = new MFNode();

HAnimSegment657.children[0] = Transform658;

Shape Shape661 = createNode("Shape");
LineSet LineSet662 = createNode("LineSet");
LineSet662.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA663 = createNode("ColorRGBA");
ColorRGBA663.USE = "HAnimSegmentLineColorRGBA";
LineSet662.color = ColorRGBA663;

Coordinate Coordinate664 = createNode("Coordinate");
Coordinate664.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet662.coord = Coordinate664;

Shape661.geometry = LineSet662;

HAnimSegment657.children[1] = Shape661;

HAnimSite HAnimSite665 = createNode("HAnimSite");
HAnimSite665.DEF = "hanim_l_bideltoid_pt";
HAnimSite665.name = "l_bideltoid_pt";
TouchSensor TouchSensor666 = createNode("TouchSensor");
TouchSensor666.description = "HAnimSite l_bideltoid_pt";
HAnimSite665.children = new MFNode();

HAnimSite665.children[0] = TouchSensor666;

Shape Shape667 = createNode("Shape");
Shape667.USE = "HAnimSiteShape";
HAnimSite665.children[1] = Shape667;

HAnimSegment657.children[2] = HAnimSite665;

HAnimSite HAnimSite668 = createNode("HAnimSite");
HAnimSite668.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite668.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite668.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor669 = createNode("TouchSensor");
TouchSensor669.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite668.children = new MFNode();

HAnimSite668.children[0] = TouchSensor669;

Shape Shape670 = createNode("Shape");
Shape670.USE = "HAnimSiteShape";
HAnimSite668.children[1] = Shape670;

HAnimSegment657.children[3] = HAnimSite668;

HAnimJoint656.children = new MFNode();

HAnimJoint656.children[0] = HAnimSegment657;

HAnimJoint HAnimJoint671 = createNode("HAnimJoint");
HAnimJoint671.DEF = "hanim_l_shoulder";
HAnimJoint671.name = "l_shoulder";
HAnimJoint671.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment672 = createNode("HAnimSegment");
HAnimSegment672.DEF = "hanim_l_upperarm";
HAnimSegment672.name = "l_upperarm";
Transform Transform673 = createNode("Transform");
Transform673.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
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
Coordinate679.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet677.coord = Coordinate679;

Shape676.geometry = LineSet677;

HAnimSegment672.children[1] = Shape676;

HAnimSite HAnimSite680 = createNode("HAnimSite");
HAnimSite680.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite680.name = "l_humeral_medial_epicondyles_pt";
HAnimSite680.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor681 = createNode("TouchSensor");
TouchSensor681.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite680.children = new MFNode();

HAnimSite680.children[0] = TouchSensor681;

Shape Shape682 = createNode("Shape");
Shape682.USE = "HAnimSiteShape";
HAnimSite680.children[1] = Shape682;

HAnimSegment672.children[2] = HAnimSite680;

HAnimSite HAnimSite683 = createNode("HAnimSite");
HAnimSite683.DEF = "hanim_l_olecranon_pt";
HAnimSite683.name = "l_olecranon_pt";
HAnimSite683.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor684 = createNode("TouchSensor");
TouchSensor684.description = "HAnimSite l_olecranon_pt";
HAnimSite683.children = new MFNode();

HAnimSite683.children[0] = TouchSensor684;

Shape Shape685 = createNode("Shape");
Shape685.USE = "HAnimSiteShape";
HAnimSite683.children[1] = Shape685;

HAnimSegment672.children[3] = HAnimSite683;

HAnimSite HAnimSite686 = createNode("HAnimSite");
HAnimSite686.DEF = "hanim_l_radial_styloid_pt";
HAnimSite686.name = "l_radial_styloid_pt";
HAnimSite686.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor687 = createNode("TouchSensor");
TouchSensor687.description = "HAnimSite l_radial_styloid_pt";
HAnimSite686.children = new MFNode();

HAnimSite686.children[0] = TouchSensor687;

Shape Shape688 = createNode("Shape");
Shape688.USE = "HAnimSiteShape";
HAnimSite686.children[1] = Shape688;

HAnimSegment672.children[4] = HAnimSite686;

HAnimSite HAnimSite689 = createNode("HAnimSite");
HAnimSite689.DEF = "hanim_l_radiale_pt";
HAnimSite689.name = "l_radiale_pt";
HAnimSite689.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor690 = createNode("TouchSensor");
TouchSensor690.description = "HAnimSite l_radiale_pt";
HAnimSite689.children = new MFNode();

HAnimSite689.children[0] = TouchSensor690;

Shape Shape691 = createNode("Shape");
Shape691.USE = "HAnimSiteShape";
HAnimSite689.children[1] = Shape691;

HAnimSegment672.children[5] = HAnimSite689;

HAnimJoint671.children = new MFNode();

HAnimJoint671.children[0] = HAnimSegment672;

HAnimJoint HAnimJoint692 = createNode("HAnimJoint");
HAnimJoint692.DEF = "hanim_l_elbow";
HAnimJoint692.name = "l_elbow";
HAnimJoint692.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment693 = createNode("HAnimSegment");
HAnimSegment693.DEF = "hanim_l_forearm";
HAnimSegment693.name = "l_forearm";
Transform Transform694 = createNode("Transform");
Transform694.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
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
Coordinate700.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet698.coord = Coordinate700;

Shape697.geometry = LineSet698;

HAnimSegment693.children[1] = Shape697;

HAnimSite HAnimSite701 = createNode("HAnimSite");
HAnimSite701.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite701.name = "l_ulnar_styloid_pt";
HAnimSite701.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor702 = createNode("TouchSensor");
TouchSensor702.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite701.children = new MFNode();

HAnimSite701.children[0] = TouchSensor702;

Shape Shape703 = createNode("Shape");
Shape703.USE = "HAnimSiteShape";
HAnimSite701.children[1] = Shape703;

HAnimSegment693.children[2] = HAnimSite701;

HAnimJoint692.children = new MFNode();

HAnimJoint692.children[0] = HAnimSegment693;

HAnimJoint HAnimJoint704 = createNode("HAnimJoint");
HAnimJoint704.DEF = "hanim_l_radiocarpal";
HAnimJoint704.name = "l_radiocarpal";
HAnimJoint704.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment705 = createNode("HAnimSegment");
HAnimSegment705.DEF = "hanim_l_carpal";
HAnimSegment705.name = "l_carpal";
Transform Transform706 = createNode("Transform");
Transform706.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform706.rotation = new SFRotation(new float[0,0,1,-3.14]);
Transform706.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform Transform707 = createNode("Transform");
Transform707.rotation = new SFRotation(new float[0,1,0,-1.57]);
Shape Shape708 = createNode("Shape");
Shape708.USE = "HAnimJointShape";
Transform707.child = new undefined();

Transform707.child[0] = Shape708;

Transform706.children = new MFNode();

Transform706.children[0] = Transform707;

HAnimSegment705.children = new MFNode();

HAnimSegment705.children[0] = Transform706;

Shape Shape709 = createNode("Shape");
LineSet LineSet710 = createNode("LineSet");
LineSet710.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA711 = createNode("ColorRGBA");
ColorRGBA711.USE = "HAnimSegmentLineColorRGBA";
LineSet710.color = ColorRGBA711;

Coordinate Coordinate712 = createNode("Coordinate");
Coordinate712.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet710.coord = Coordinate712;

Shape709.geometry = LineSet710;

HAnimSegment705.children[1] = Shape709;

Shape Shape713 = createNode("Shape");
LineSet LineSet714 = createNode("LineSet");
LineSet714.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA715 = createNode("ColorRGBA");
ColorRGBA715.USE = "HAnimSegmentLineColorRGBA";
LineSet714.color = ColorRGBA715;

Coordinate Coordinate716 = createNode("Coordinate");
Coordinate716.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet714.coord = Coordinate716;

Shape713.geometry = LineSet714;

HAnimSegment705.children[2] = Shape713;

HAnimSite HAnimSite717 = createNode("HAnimSite");
HAnimSite717.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite717.name = "l_metacarpal_phalanx_2_pt";
HAnimSite717.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor718 = createNode("TouchSensor");
TouchSensor718.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite717.children = new MFNode();

HAnimSite717.children[0] = TouchSensor718;

Shape Shape719 = createNode("Shape");
Shape719.USE = "HAnimSiteShape";
HAnimSite717.children[1] = Shape719;

HAnimSegment705.children[3] = HAnimSite717;

Shape Shape720 = createNode("Shape");
LineSet LineSet721 = createNode("LineSet");
LineSet721.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA722 = createNode("ColorRGBA");
ColorRGBA722.USE = "HAnimSegmentLineColorRGBA";
LineSet721.color = ColorRGBA722;

Coordinate Coordinate723 = createNode("Coordinate");
Coordinate723.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet721.coord = Coordinate723;

Shape720.geometry = LineSet721;

HAnimSegment705.children[4] = Shape720;

HAnimSite HAnimSite724 = createNode("HAnimSite");
HAnimSite724.DEF = "hanim_l_metacarpal_phalanx_3_pt";
HAnimSite724.name = "l_metacarpal_phalanx_3_pt";
TouchSensor TouchSensor725 = createNode("TouchSensor");
TouchSensor725.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite724.children = new MFNode();

HAnimSite724.children[0] = TouchSensor725;

Shape Shape726 = createNode("Shape");
Shape726.USE = "HAnimSiteShape";
HAnimSite724.children[1] = Shape726;

HAnimSegment705.children[5] = HAnimSite724;

Shape Shape727 = createNode("Shape");
LineSet LineSet728 = createNode("LineSet");
LineSet728.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA729 = createNode("ColorRGBA");
ColorRGBA729.USE = "HAnimSegmentLineColorRGBA";
LineSet728.color = ColorRGBA729;

Coordinate Coordinate730 = createNode("Coordinate");
Coordinate730.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet728.coord = Coordinate730;

Shape727.geometry = LineSet728;

HAnimSegment705.children[6] = Shape727;

Shape Shape731 = createNode("Shape");
LineSet LineSet732 = createNode("LineSet");
LineSet732.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA733 = createNode("ColorRGBA");
ColorRGBA733.USE = "HAnimSegmentLineColorRGBA";
LineSet732.color = ColorRGBA733;

Coordinate Coordinate734 = createNode("Coordinate");
Coordinate734.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet732.coord = Coordinate734;

Shape731.geometry = LineSet732;

HAnimSegment705.children[7] = Shape731;

HAnimSite HAnimSite735 = createNode("HAnimSite");
HAnimSite735.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite735.name = "l_metacarpal_phalanx_5_pt";
HAnimSite735.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor736 = createNode("TouchSensor");
TouchSensor736.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite735.children = new MFNode();

HAnimSite735.children[0] = TouchSensor736;

Shape Shape737 = createNode("Shape");
Shape737.USE = "HAnimSiteShape";
HAnimSite735.children[1] = Shape737;

HAnimSegment705.children[8] = HAnimSite735;

HAnimJoint704.children = new MFNode();

HAnimJoint704.children[0] = HAnimSegment705;

HAnimJoint HAnimJoint738 = createNode("HAnimJoint");
HAnimJoint738.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint738.name = "l_carpometacarpal_1";
HAnimJoint738.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment739 = createNode("HAnimSegment");
HAnimSegment739.DEF = "hanim_l_metacarpal_1";
HAnimSegment739.name = "l_metacarpal_1";
Transform Transform740 = createNode("Transform");
Transform740.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Transform Transform741 = createNode("Transform");
Shape Shape742 = createNode("Shape");
Shape742.USE = "HAnimJointShape";
Transform741.child = new undefined();

Transform741.child[0] = Shape742;

Transform740.children = new MFNode();

Transform740.children[0] = Transform741;

HAnimSegment739.children = new MFNode();

HAnimSegment739.children[0] = Transform740;

Shape Shape743 = createNode("Shape");
LineSet LineSet744 = createNode("LineSet");
LineSet744.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA745 = createNode("ColorRGBA");
ColorRGBA745.USE = "HAnimSegmentLineColorRGBA";
LineSet744.color = ColorRGBA745;

Coordinate Coordinate746 = createNode("Coordinate");
Coordinate746.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet744.coord = Coordinate746;

Shape743.geometry = LineSet744;

HAnimSegment739.children[1] = Shape743;

HAnimJoint738.children = new MFNode();

HAnimJoint738.children[0] = HAnimSegment739;

HAnimJoint HAnimJoint747 = createNode("HAnimJoint");
HAnimJoint747.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint747.name = "l_metacarpophalangeal_1";
HAnimJoint747.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment748 = createNode("HAnimSegment");
HAnimSegment748.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment748.name = "l_carpal_proximal_phalanx_1";
Transform Transform749 = createNode("Transform");
Transform749.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Transform Transform750 = createNode("Transform");
Shape Shape751 = createNode("Shape");
Shape751.USE = "HAnimJointShape";
Transform750.child = new undefined();

Transform750.child[0] = Shape751;

Transform749.children = new MFNode();

Transform749.children[0] = Transform750;

HAnimSegment748.children = new MFNode();

HAnimSegment748.children[0] = Transform749;

Shape Shape752 = createNode("Shape");
LineSet LineSet753 = createNode("LineSet");
LineSet753.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA754 = createNode("ColorRGBA");
ColorRGBA754.USE = "HAnimSegmentLineColorRGBA";
LineSet753.color = ColorRGBA754;

Coordinate Coordinate755 = createNode("Coordinate");
Coordinate755.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet753.coord = Coordinate755;

Shape752.geometry = LineSet753;

HAnimSegment748.children[1] = Shape752;

HAnimSite HAnimSite756 = createNode("HAnimSite");
HAnimSite756.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite756.name = "l_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor757 = createNode("TouchSensor");
TouchSensor757.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite756.children = new MFNode();

HAnimSite756.children[0] = TouchSensor757;

Shape Shape758 = createNode("Shape");
Shape758.USE = "HAnimSiteShape";
HAnimSite756.children[1] = Shape758;

HAnimSegment748.children[2] = HAnimSite756;

HAnimJoint747.children = new MFNode();

HAnimJoint747.children[0] = HAnimSegment748;

HAnimJoint HAnimJoint759 = createNode("HAnimJoint");
HAnimJoint759.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint759.name = "l_carpal_interphalangeal_1";
HAnimJoint759.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint747.children[1] = HAnimJoint759;

HAnimJoint738.children[1] = HAnimJoint747;

HAnimJoint704.children[1] = HAnimJoint738;

HAnimJoint HAnimJoint760 = createNode("HAnimJoint");
HAnimJoint760.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint760.name = "l_carpometacarpal_2";
HAnimJoint760.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment761 = createNode("HAnimSegment");
HAnimSegment761.DEF = "hanim_l_metacarpal_2";
HAnimSegment761.name = "l_metacarpal_2";
Transform Transform762 = createNode("Transform");
Transform762.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Transform Transform763 = createNode("Transform");
Shape Shape764 = createNode("Shape");
Shape764.USE = "HAnimJointShape";
Transform763.child = new undefined();

Transform763.child[0] = Shape764;

Transform762.children = new MFNode();

Transform762.children[0] = Transform763;

HAnimSegment761.children = new MFNode();

HAnimSegment761.children[0] = Transform762;

Shape Shape765 = createNode("Shape");
LineSet LineSet766 = createNode("LineSet");
LineSet766.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA767 = createNode("ColorRGBA");
ColorRGBA767.USE = "HAnimSegmentLineColorRGBA";
LineSet766.color = ColorRGBA767;

Coordinate Coordinate768 = createNode("Coordinate");
Coordinate768.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet766.coord = Coordinate768;

Shape765.geometry = LineSet766;

HAnimSegment761.children[1] = Shape765;

HAnimJoint760.children = new MFNode();

HAnimJoint760.children[0] = HAnimSegment761;

HAnimJoint HAnimJoint769 = createNode("HAnimJoint");
HAnimJoint769.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint769.name = "l_metacarpophalangeal_2";
HAnimJoint769.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment770 = createNode("HAnimSegment");
HAnimSegment770.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment770.name = "l_carpal_proximal_phalanx_2";
Transform Transform771 = createNode("Transform");
Transform771.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Transform Transform772 = createNode("Transform");
Shape Shape773 = createNode("Shape");
Shape773.USE = "HAnimJointShape";
Transform772.child = new undefined();

Transform772.child[0] = Shape773;

Transform771.children = new MFNode();

Transform771.children[0] = Transform772;

HAnimSegment770.children = new MFNode();

HAnimSegment770.children[0] = Transform771;

Shape Shape774 = createNode("Shape");
LineSet LineSet775 = createNode("LineSet");
LineSet775.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA776 = createNode("ColorRGBA");
ColorRGBA776.USE = "HAnimSegmentLineColorRGBA";
LineSet775.color = ColorRGBA776;

Coordinate Coordinate777 = createNode("Coordinate");
Coordinate777.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet775.coord = Coordinate777;

Shape774.geometry = LineSet775;

HAnimSegment770.children[1] = Shape774;

HAnimJoint769.children = new MFNode();

HAnimJoint769.children[0] = HAnimSegment770;

HAnimJoint HAnimJoint778 = createNode("HAnimJoint");
HAnimJoint778.DEF = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimJoint778.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint778.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment779 = createNode("HAnimSegment");
HAnimSegment779.DEF = "hanim_l_carpal_middle_phalanx_1";
HAnimSegment779.name = "l_carpal_middle_phalanx_2";
Transform Transform780 = createNode("Transform");
Transform780.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Transform Transform781 = createNode("Transform");
Shape Shape782 = createNode("Shape");
Shape782.USE = "HAnimJointShape";
Transform781.child = new undefined();

Transform781.child[0] = Shape782;

Transform780.children = new MFNode();

Transform780.children[0] = Transform781;

HAnimSegment779.children = new MFNode();

HAnimSegment779.children[0] = Transform780;

Shape Shape783 = createNode("Shape");
LineSet LineSet784 = createNode("LineSet");
LineSet784.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA785 = createNode("ColorRGBA");
ColorRGBA785.USE = "HAnimSegmentLineColorRGBA";
LineSet784.color = ColorRGBA785;

Coordinate Coordinate786 = createNode("Coordinate");
Coordinate786.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet784.coord = Coordinate786;

Shape783.geometry = LineSet784;

HAnimSegment779.children[1] = Shape783;

HAnimSite HAnimSite787 = createNode("HAnimSite");
HAnimSite787.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite787.name = "l_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor788 = createNode("TouchSensor");
TouchSensor788.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite787.children = new MFNode();

HAnimSite787.children[0] = TouchSensor788;

Shape Shape789 = createNode("Shape");
Shape789.USE = "HAnimSiteShape";
HAnimSite787.children[1] = Shape789;

HAnimSegment779.children[2] = HAnimSite787;

HAnimSite HAnimSite790 = createNode("HAnimSite");
HAnimSite790.DEF = "hanim_l_dactylion_pt";
HAnimSite790.name = "l_dactylion_pt";
HAnimSite790.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor791 = createNode("TouchSensor");
TouchSensor791.description = "HAnimSite l_dactylion_pt";
HAnimSite790.children = new MFNode();

HAnimSite790.children[0] = TouchSensor791;

Shape Shape792 = createNode("Shape");
Shape792.USE = "HAnimSiteShape";
HAnimSite790.children[1] = Shape792;

HAnimSegment779.children[3] = HAnimSite790;

HAnimJoint778.children = new MFNode();

HAnimJoint778.children[0] = HAnimSegment779;

HAnimJoint HAnimJoint793 = createNode("HAnimJoint");
HAnimJoint793.DEF = "hanim_l_carpal_distal_interphalangeal_1";
HAnimJoint793.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint793.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint778.children[1] = HAnimJoint793;

HAnimJoint769.children[1] = HAnimJoint778;

HAnimJoint760.children[1] = HAnimJoint769;

HAnimJoint704.children[2] = HAnimJoint760;

HAnimJoint HAnimJoint794 = createNode("HAnimJoint");
HAnimJoint794.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint794.name = "l_carpometacarpal_3";
HAnimJoint794.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment795 = createNode("HAnimSegment");
HAnimSegment795.DEF = "hanim_l_metacarpal_3";
HAnimSegment795.name = "l_metacarpal_3";
Transform Transform796 = createNode("Transform");
Transform796.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Transform Transform797 = createNode("Transform");
Shape Shape798 = createNode("Shape");
Shape798.USE = "HAnimJointShape";
Transform797.child = new undefined();

Transform797.child[0] = Shape798;

Transform796.children = new MFNode();

Transform796.children[0] = Transform797;

HAnimSegment795.children = new MFNode();

HAnimSegment795.children[0] = Transform796;

Shape Shape799 = createNode("Shape");
LineSet LineSet800 = createNode("LineSet");
LineSet800.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA801 = createNode("ColorRGBA");
ColorRGBA801.USE = "HAnimSegmentLineColorRGBA";
LineSet800.color = ColorRGBA801;

Coordinate Coordinate802 = createNode("Coordinate");
Coordinate802.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet800.coord = Coordinate802;

Shape799.geometry = LineSet800;

HAnimSegment795.children[1] = Shape799;

HAnimJoint794.children = new MFNode();

HAnimJoint794.children[0] = HAnimSegment795;

HAnimJoint HAnimJoint803 = createNode("HAnimJoint");
HAnimJoint803.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint803.name = "l_metacarpophalangeal_3";
HAnimJoint803.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment804 = createNode("HAnimSegment");
HAnimSegment804.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimSegment804.name = "l_carpal_proximal_phalanx_3";
Transform Transform805 = createNode("Transform");
Transform805.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
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
Coordinate811.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet809.coord = Coordinate811;

Shape808.geometry = LineSet809;

HAnimSegment804.children[1] = Shape808;

HAnimJoint803.children = new MFNode();

HAnimJoint803.children[0] = HAnimSegment804;

HAnimJoint HAnimJoint812 = createNode("HAnimJoint");
HAnimJoint812.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint812.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint812.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment813 = createNode("HAnimSegment");
HAnimSegment813.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment813.name = "l_carpal_middle_phalanx_3";
Transform Transform814 = createNode("Transform");
Transform814.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
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
Coordinate820.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet818.coord = Coordinate820;

Shape817.geometry = LineSet818;

HAnimSegment813.children[1] = Shape817;

HAnimSite HAnimSite821 = createNode("HAnimSite");
HAnimSite821.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite821.name = "l_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor822 = createNode("TouchSensor");
TouchSensor822.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite821.children = new MFNode();

HAnimSite821.children[0] = TouchSensor822;

Shape Shape823 = createNode("Shape");
Shape823.USE = "HAnimSiteShape";
HAnimSite821.children[1] = Shape823;

HAnimSegment813.children[2] = HAnimSite821;

HAnimJoint812.children = new MFNode();

HAnimJoint812.children[0] = HAnimSegment813;

HAnimJoint HAnimJoint824 = createNode("HAnimJoint");
HAnimJoint824.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint824.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint824.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint812.children[1] = HAnimJoint824;

HAnimJoint803.children[1] = HAnimJoint812;

HAnimJoint794.children[1] = HAnimJoint803;

HAnimJoint704.children[3] = HAnimJoint794;

HAnimJoint HAnimJoint825 = createNode("HAnimJoint");
HAnimJoint825.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint825.name = "l_carpometacarpal_4";
HAnimJoint825.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment826 = createNode("HAnimSegment");
HAnimSegment826.DEF = "hanim_l_metacarpal_4";
HAnimSegment826.name = "l_metacarpal_4";
Transform Transform827 = createNode("Transform");
Transform827.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Transform Transform828 = createNode("Transform");
Shape Shape829 = createNode("Shape");
Shape829.USE = "HAnimJointShape";
Transform828.child = new undefined();

Transform828.child[0] = Shape829;

Transform827.children = new MFNode();

Transform827.children[0] = Transform828;

HAnimSegment826.children = new MFNode();

HAnimSegment826.children[0] = Transform827;

Shape Shape830 = createNode("Shape");
LineSet LineSet831 = createNode("LineSet");
LineSet831.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA832 = createNode("ColorRGBA");
ColorRGBA832.USE = "HAnimSegmentLineColorRGBA";
LineSet831.color = ColorRGBA832;

Coordinate Coordinate833 = createNode("Coordinate");
Coordinate833.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet831.coord = Coordinate833;

Shape830.geometry = LineSet831;

HAnimSegment826.children[1] = Shape830;

HAnimJoint825.children = new MFNode();

HAnimJoint825.children[0] = HAnimSegment826;

HAnimJoint HAnimJoint834 = createNode("HAnimJoint");
HAnimJoint834.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint834.name = "l_metacarpophalangeal_4";
HAnimJoint834.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment835 = createNode("HAnimSegment");
HAnimSegment835.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimSegment835.name = "l_carpal_proximal_phalanx_4";
Transform Transform836 = createNode("Transform");
Transform836.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Transform Transform837 = createNode("Transform");
Shape Shape838 = createNode("Shape");
Shape838.USE = "HAnimJointShape";
Transform837.child = new undefined();

Transform837.child[0] = Shape838;

Transform836.children = new MFNode();

Transform836.children[0] = Transform837;

HAnimSegment835.children = new MFNode();

HAnimSegment835.children[0] = Transform836;

Shape Shape839 = createNode("Shape");
LineSet LineSet840 = createNode("LineSet");
LineSet840.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA841 = createNode("ColorRGBA");
ColorRGBA841.USE = "HAnimSegmentLineColorRGBA";
LineSet840.color = ColorRGBA841;

Coordinate Coordinate842 = createNode("Coordinate");
Coordinate842.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet840.coord = Coordinate842;

Shape839.geometry = LineSet840;

HAnimSegment835.children[1] = Shape839;

HAnimJoint834.children = new MFNode();

HAnimJoint834.children[0] = HAnimSegment835;

HAnimJoint HAnimJoint843 = createNode("HAnimJoint");
HAnimJoint843.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint843.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint843.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment844 = createNode("HAnimSegment");
HAnimSegment844.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimSegment844.name = "l_carpal_middle_phalanx_4";
Transform Transform845 = createNode("Transform");
Transform845.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Transform Transform846 = createNode("Transform");
Shape Shape847 = createNode("Shape");
Shape847.USE = "HAnimJointShape";
Transform846.child = new undefined();

Transform846.child[0] = Shape847;

Transform845.children = new MFNode();

Transform845.children[0] = Transform846;

HAnimSegment844.children = new MFNode();

HAnimSegment844.children[0] = Transform845;

Shape Shape848 = createNode("Shape");
LineSet LineSet849 = createNode("LineSet");
LineSet849.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA850 = createNode("ColorRGBA");
ColorRGBA850.USE = "HAnimSegmentLineColorRGBA";
LineSet849.color = ColorRGBA850;

Coordinate Coordinate851 = createNode("Coordinate");
Coordinate851.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet849.coord = Coordinate851;

Shape848.geometry = LineSet849;

HAnimSegment844.children[1] = Shape848;

HAnimSite HAnimSite852 = createNode("HAnimSite");
HAnimSite852.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite852.name = "l_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor853 = createNode("TouchSensor");
TouchSensor853.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite852.children = new MFNode();

HAnimSite852.children[0] = TouchSensor853;

Shape Shape854 = createNode("Shape");
Shape854.USE = "HAnimSiteShape";
HAnimSite852.children[1] = Shape854;

HAnimSegment844.children[2] = HAnimSite852;

HAnimJoint843.children = new MFNode();

HAnimJoint843.children[0] = HAnimSegment844;

HAnimJoint HAnimJoint855 = createNode("HAnimJoint");
HAnimJoint855.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint855.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint855.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint843.children[1] = HAnimJoint855;

HAnimJoint834.children[1] = HAnimJoint843;

HAnimJoint825.children[1] = HAnimJoint834;

HAnimJoint704.children[4] = HAnimJoint825;

HAnimJoint HAnimJoint856 = createNode("HAnimJoint");
HAnimJoint856.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint856.name = "l_carpometacarpal_5";
HAnimJoint856.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment857 = createNode("HAnimSegment");
HAnimSegment857.DEF = "hanim_l_metacarpal_5";
HAnimSegment857.name = "l_metacarpal_5";
Transform Transform858 = createNode("Transform");
Transform858.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Transform Transform859 = createNode("Transform");
Shape Shape860 = createNode("Shape");
Shape860.USE = "HAnimJointShape";
Transform859.child = new undefined();

Transform859.child[0] = Shape860;

Transform858.children = new MFNode();

Transform858.children[0] = Transform859;

HAnimSegment857.children = new MFNode();

HAnimSegment857.children[0] = Transform858;

Shape Shape861 = createNode("Shape");
LineSet LineSet862 = createNode("LineSet");
LineSet862.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA863 = createNode("ColorRGBA");
ColorRGBA863.USE = "HAnimSegmentLineColorRGBA";
LineSet862.color = ColorRGBA863;

Coordinate Coordinate864 = createNode("Coordinate");
Coordinate864.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet862.coord = Coordinate864;

Shape861.geometry = LineSet862;

HAnimSegment857.children[1] = Shape861;

HAnimJoint856.children = new MFNode();

HAnimJoint856.children[0] = HAnimSegment857;

HAnimJoint HAnimJoint865 = createNode("HAnimJoint");
HAnimJoint865.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint865.name = "l_metacarpophalangeal_5";
HAnimJoint865.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment866 = createNode("HAnimSegment");
HAnimSegment866.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimSegment866.name = "l_carpal_proximal_phalanx_5";
Transform Transform867 = createNode("Transform");
Transform867.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Transform Transform868 = createNode("Transform");
Shape Shape869 = createNode("Shape");
Shape869.USE = "HAnimJointShape";
Transform868.child = new undefined();

Transform868.child[0] = Shape869;

Transform867.children = new MFNode();

Transform867.children[0] = Transform868;

HAnimSegment866.children = new MFNode();

HAnimSegment866.children[0] = Transform867;

Shape Shape870 = createNode("Shape");
LineSet LineSet871 = createNode("LineSet");
LineSet871.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA872 = createNode("ColorRGBA");
ColorRGBA872.USE = "HAnimSegmentLineColorRGBA";
LineSet871.color = ColorRGBA872;

Coordinate Coordinate873 = createNode("Coordinate");
Coordinate873.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet871.coord = Coordinate873;

Shape870.geometry = LineSet871;

HAnimSegment866.children[1] = Shape870;

HAnimJoint865.children = new MFNode();

HAnimJoint865.children[0] = HAnimSegment866;

HAnimJoint HAnimJoint874 = createNode("HAnimJoint");
HAnimJoint874.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint874.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint874.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment875 = createNode("HAnimSegment");
HAnimSegment875.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimSegment875.name = "l_carpal_middle_phalanx_5";
Transform Transform876 = createNode("Transform");
Transform876.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Transform Transform877 = createNode("Transform");
Shape Shape878 = createNode("Shape");
Shape878.USE = "HAnimJointShape";
Transform877.child = new undefined();

Transform877.child[0] = Shape878;

Transform876.children = new MFNode();

Transform876.children[0] = Transform877;

HAnimSegment875.children = new MFNode();

HAnimSegment875.children[0] = Transform876;

Shape Shape879 = createNode("Shape");
LineSet LineSet880 = createNode("LineSet");
LineSet880.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA881 = createNode("ColorRGBA");
ColorRGBA881.USE = "HAnimSegmentLineColorRGBA";
LineSet880.color = ColorRGBA881;

Coordinate Coordinate882 = createNode("Coordinate");
Coordinate882.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet880.coord = Coordinate882;

Shape879.geometry = LineSet880;

HAnimSegment875.children[1] = Shape879;

HAnimSite HAnimSite883 = createNode("HAnimSite");
HAnimSite883.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite883.name = "l_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor884 = createNode("TouchSensor");
TouchSensor884.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite883.children = new MFNode();

HAnimSite883.children[0] = TouchSensor884;

Shape Shape885 = createNode("Shape");
Shape885.USE = "HAnimSiteShape";
HAnimSite883.children[1] = Shape885;

HAnimSegment875.children[2] = HAnimSite883;

HAnimJoint874.children = new MFNode();

HAnimJoint874.children[0] = HAnimSegment875;

HAnimJoint HAnimJoint886 = createNode("HAnimJoint");
HAnimJoint886.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint886.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint886.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint874.children[1] = HAnimJoint886;

HAnimJoint865.children[1] = HAnimJoint874;

HAnimJoint856.children[1] = HAnimJoint865;

HAnimJoint704.children[5] = HAnimJoint856;

HAnimJoint692.children[1] = HAnimJoint704;

HAnimJoint671.children[1] = HAnimJoint692;

HAnimJoint656.children[1] = HAnimJoint671;

HAnimJoint647.children[1] = HAnimJoint656;

HAnimJoint443.children[2] = HAnimJoint647;

HAnimJoint HAnimJoint887 = createNode("HAnimJoint");
HAnimJoint887.DEF = "hanim_r_sternoclavicular";
HAnimJoint887.name = "r_sternoclavicular";
HAnimJoint887.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimSegment HAnimSegment888 = createNode("HAnimSegment");
HAnimSegment888.DEF = "hanim_r_clavicle";
HAnimSegment888.name = "r_clavicle";
Transform Transform889 = createNode("Transform");
Transform889.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
Transform Transform890 = createNode("Transform");
Shape Shape891 = createNode("Shape");
Shape891.USE = "HAnimJointShape";
Transform890.child = new undefined();

Transform890.child[0] = Shape891;

Transform889.children = new MFNode();

Transform889.children[0] = Transform890;

HAnimSegment888.children = new MFNode();

HAnimSegment888.children[0] = Transform889;

Shape Shape892 = createNode("Shape");
LineSet LineSet893 = createNode("LineSet");
LineSet893.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA894 = createNode("ColorRGBA");
ColorRGBA894.USE = "HAnimSegmentLineColorRGBA";
LineSet893.color = ColorRGBA894;

Coordinate Coordinate895 = createNode("Coordinate");
Coordinate895.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet893.coord = Coordinate895;

Shape892.geometry = LineSet893;

HAnimSegment888.children[1] = Shape892;

HAnimJoint887.children = new MFNode();

HAnimJoint887.children[0] = HAnimSegment888;

HAnimJoint HAnimJoint896 = createNode("HAnimJoint");
HAnimJoint896.DEF = "hanim_r_acromioclavicular";
HAnimJoint896.name = "r_acromioclavicular";
HAnimJoint896.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimSegment HAnimSegment897 = createNode("HAnimSegment");
HAnimSegment897.DEF = "hanim_r_scapula";
HAnimSegment897.name = "r_scapula";
Transform Transform898 = createNode("Transform");
Transform898.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
Transform Transform899 = createNode("Transform");
Shape Shape900 = createNode("Shape");
Shape900.USE = "HAnimJointShape";
Transform899.child = new undefined();

Transform899.child[0] = Shape900;

Transform898.children = new MFNode();

Transform898.children[0] = Transform899;

HAnimSegment897.children = new MFNode();

HAnimSegment897.children[0] = Transform898;

Shape Shape901 = createNode("Shape");
LineSet LineSet902 = createNode("LineSet");
LineSet902.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA903 = createNode("ColorRGBA");
ColorRGBA903.USE = "HAnimSegmentLineColorRGBA";
LineSet902.color = ColorRGBA903;

Coordinate Coordinate904 = createNode("Coordinate");
Coordinate904.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet902.coord = Coordinate904;

Shape901.geometry = LineSet902;

HAnimSegment897.children[1] = Shape901;

HAnimSite HAnimSite905 = createNode("HAnimSite");
HAnimSite905.DEF = "hanim_r_bideltoid_pt";
HAnimSite905.name = "r_bideltoid_pt";
TouchSensor TouchSensor906 = createNode("TouchSensor");
TouchSensor906.description = "HAnimSite r_bideltoid_pt";
HAnimSite905.children = new MFNode();

HAnimSite905.children[0] = TouchSensor906;

Shape Shape907 = createNode("Shape");
Shape907.USE = "HAnimSiteShape";
HAnimSite905.children[1] = Shape907;

HAnimSegment897.children[2] = HAnimSite905;

HAnimSite HAnimSite908 = createNode("HAnimSite");
HAnimSite908.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite908.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite908.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor909 = createNode("TouchSensor");
TouchSensor909.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite908.children = new MFNode();

HAnimSite908.children[0] = TouchSensor909;

Shape Shape910 = createNode("Shape");
Shape910.USE = "HAnimSiteShape";
HAnimSite908.children[1] = Shape910;

HAnimSegment897.children[3] = HAnimSite908;

HAnimJoint896.children = new MFNode();

HAnimJoint896.children[0] = HAnimSegment897;

HAnimJoint HAnimJoint911 = createNode("HAnimJoint");
HAnimJoint911.DEF = "hanim_r_shoulder";
HAnimJoint911.name = "r_shoulder";
HAnimJoint911.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimSegment HAnimSegment912 = createNode("HAnimSegment");
HAnimSegment912.DEF = "hanim_r_upperarm";
HAnimSegment912.name = "r_upperarm";
Transform Transform913 = createNode("Transform");
Transform913.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform Transform914 = createNode("Transform");
Shape Shape915 = createNode("Shape");
Shape915.USE = "HAnimJointShape";
Transform914.child = new undefined();

Transform914.child[0] = Shape915;

Transform913.children = new MFNode();

Transform913.children[0] = Transform914;

HAnimSegment912.children = new MFNode();

HAnimSegment912.children[0] = Transform913;

Shape Shape916 = createNode("Shape");
LineSet LineSet917 = createNode("LineSet");
LineSet917.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA918 = createNode("ColorRGBA");
ColorRGBA918.USE = "HAnimSegmentLineColorRGBA";
LineSet917.color = ColorRGBA918;

Coordinate Coordinate919 = createNode("Coordinate");
Coordinate919.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet917.coord = Coordinate919;

Shape916.geometry = LineSet917;

HAnimSegment912.children[1] = Shape916;

HAnimSite HAnimSite920 = createNode("HAnimSite");
HAnimSite920.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite920.name = "r_humeral_medial_epicondyles_pt";
HAnimSite920.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor921 = createNode("TouchSensor");
TouchSensor921.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite920.children = new MFNode();

HAnimSite920.children[0] = TouchSensor921;

Shape Shape922 = createNode("Shape");
Shape922.USE = "HAnimSiteShape";
HAnimSite920.children[1] = Shape922;

HAnimSegment912.children[2] = HAnimSite920;

HAnimSite HAnimSite923 = createNode("HAnimSite");
HAnimSite923.DEF = "hanim_r_olecranon_pt";
HAnimSite923.name = "r_olecranon_pt";
HAnimSite923.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor924 = createNode("TouchSensor");
TouchSensor924.description = "HAnimSite r_olecranon_pt";
HAnimSite923.children = new MFNode();

HAnimSite923.children[0] = TouchSensor924;

Shape Shape925 = createNode("Shape");
Shape925.USE = "HAnimSiteShape";
HAnimSite923.children[1] = Shape925;

HAnimSegment912.children[3] = HAnimSite923;

HAnimSite HAnimSite926 = createNode("HAnimSite");
HAnimSite926.DEF = "hanim_r_radial_styloid_pt";
HAnimSite926.name = "r_radial_styloid_pt";
HAnimSite926.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor927 = createNode("TouchSensor");
TouchSensor927.description = "HAnimSite r_radial_styloid_pt";
HAnimSite926.children = new MFNode();

HAnimSite926.children[0] = TouchSensor927;

Shape Shape928 = createNode("Shape");
Shape928.USE = "HAnimSiteShape";
HAnimSite926.children[1] = Shape928;

HAnimSegment912.children[4] = HAnimSite926;

HAnimSite HAnimSite929 = createNode("HAnimSite");
HAnimSite929.DEF = "hanim_r_radiale_pt";
HAnimSite929.name = "r_radiale_pt";
HAnimSite929.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor930 = createNode("TouchSensor");
TouchSensor930.description = "HAnimSite r_radiale_pt";
HAnimSite929.children = new MFNode();

HAnimSite929.children[0] = TouchSensor930;

Shape Shape931 = createNode("Shape");
Shape931.USE = "HAnimSiteShape";
HAnimSite929.children[1] = Shape931;

HAnimSegment912.children[5] = HAnimSite929;

HAnimJoint911.children = new MFNode();

HAnimJoint911.children[0] = HAnimSegment912;

HAnimJoint HAnimJoint932 = createNode("HAnimJoint");
HAnimJoint932.DEF = "hanim_r_elbow";
HAnimJoint932.name = "r_elbow";
HAnimJoint932.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimSegment HAnimSegment933 = createNode("HAnimSegment");
HAnimSegment933.DEF = "hanim_r_forearm";
HAnimSegment933.name = "r_forearm";
Transform Transform934 = createNode("Transform");
Transform934.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform Transform935 = createNode("Transform");
Shape Shape936 = createNode("Shape");
Shape936.USE = "HAnimJointShape";
Transform935.child = new undefined();

Transform935.child[0] = Shape936;

Transform934.children = new MFNode();

Transform934.children[0] = Transform935;

HAnimSegment933.children = new MFNode();

HAnimSegment933.children[0] = Transform934;

Shape Shape937 = createNode("Shape");
LineSet LineSet938 = createNode("LineSet");
LineSet938.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA939 = createNode("ColorRGBA");
ColorRGBA939.USE = "HAnimSegmentLineColorRGBA";
LineSet938.color = ColorRGBA939;

Coordinate Coordinate940 = createNode("Coordinate");
Coordinate940.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet938.coord = Coordinate940;

Shape937.geometry = LineSet938;

HAnimSegment933.children[1] = Shape937;

HAnimSite HAnimSite941 = createNode("HAnimSite");
HAnimSite941.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite941.name = "r_ulnar_styloid_pt";
HAnimSite941.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor942 = createNode("TouchSensor");
TouchSensor942.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite941.children = new MFNode();

HAnimSite941.children[0] = TouchSensor942;

Shape Shape943 = createNode("Shape");
Shape943.USE = "HAnimSiteShape";
HAnimSite941.children[1] = Shape943;

HAnimSegment933.children[2] = HAnimSite941;

HAnimJoint932.children = new MFNode();

HAnimJoint932.children[0] = HAnimSegment933;

HAnimJoint HAnimJoint944 = createNode("HAnimJoint");
HAnimJoint944.DEF = "hanim_r_radiocarpal";
HAnimJoint944.name = "r_radiocarpal";
HAnimJoint944.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimSegment HAnimSegment945 = createNode("HAnimSegment");
HAnimSegment945.DEF = "hanim_r_carpal";
HAnimSegment945.name = "r_carpal";
Transform Transform946 = createNode("Transform");
Transform946.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform946.rotation = new SFRotation(new float[0,0,1,-3.14]);
Transform946.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform Transform947 = createNode("Transform");
Transform947.rotation = new SFRotation(new float[0,1,0,1.57]);
Shape Shape948 = createNode("Shape");
Shape948.USE = "HAnimJointShape";
Transform947.child = new undefined();

Transform947.child[0] = Shape948;

Transform946.children = new MFNode();

Transform946.children[0] = Transform947;

HAnimSegment945.children = new MFNode();

HAnimSegment945.children[0] = Transform946;

Shape Shape949 = createNode("Shape");
LineSet LineSet950 = createNode("LineSet");
LineSet950.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA951 = createNode("ColorRGBA");
ColorRGBA951.USE = "HAnimSegmentLineColorRGBA";
LineSet950.color = ColorRGBA951;

Coordinate Coordinate952 = createNode("Coordinate");
Coordinate952.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473]);
LineSet950.coord = Coordinate952;

Shape949.geometry = LineSet950;

HAnimSegment945.children[1] = Shape949;

Shape Shape953 = createNode("Shape");
LineSet LineSet954 = createNode("LineSet");
LineSet954.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA955 = createNode("ColorRGBA");
ColorRGBA955.USE = "HAnimSegmentLineColorRGBA";
LineSet954.color = ColorRGBA955;

Coordinate Coordinate956 = createNode("Coordinate");
Coordinate956.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218]);
LineSet954.coord = Coordinate956;

Shape953.geometry = LineSet954;

HAnimSegment945.children[2] = Shape953;

HAnimSite HAnimSite957 = createNode("HAnimSite");
HAnimSite957.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite957.name = "r_metacarpal_phalanx_2_pt";
HAnimSite957.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor958 = createNode("TouchSensor");
TouchSensor958.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite957.children = new MFNode();

HAnimSite957.children[0] = TouchSensor958;

Shape Shape959 = createNode("Shape");
Shape959.USE = "HAnimSiteShape";
HAnimSite957.children[1] = Shape959;

HAnimSegment945.children[3] = HAnimSite957;

Shape Shape960 = createNode("Shape");
LineSet LineSet961 = createNode("LineSet");
LineSet961.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA962 = createNode("ColorRGBA");
ColorRGBA962.USE = "HAnimSegmentLineColorRGBA";
LineSet961.color = ColorRGBA962;

Coordinate Coordinate963 = createNode("Coordinate");
Coordinate963.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468]);
LineSet961.coord = Coordinate963;

Shape960.geometry = LineSet961;

HAnimSegment945.children[4] = Shape960;

HAnimSite HAnimSite964 = createNode("HAnimSite");
HAnimSite964.DEF = "hanim_r_metacarpal_phalanx_3_pt";
HAnimSite964.name = "r_metacarpal_phalanx_3_pt";
TouchSensor TouchSensor965 = createNode("TouchSensor");
TouchSensor965.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite964.children = new MFNode();

HAnimSite964.children[0] = TouchSensor965;

Shape Shape966 = createNode("Shape");
Shape966.USE = "HAnimSiteShape";
HAnimSite964.children[1] = Shape966;

HAnimSegment945.children[5] = HAnimSite964;

Shape Shape967 = createNode("Shape");
LineSet LineSet968 = createNode("LineSet");
LineSet968.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA969 = createNode("ColorRGBA");
ColorRGBA969.USE = "HAnimSegmentLineColorRGBA";
LineSet968.color = ColorRGBA969;

Coordinate Coordinate970 = createNode("Coordinate");
Coordinate970.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732]);
LineSet968.coord = Coordinate970;

Shape967.geometry = LineSet968;

HAnimSegment945.children[6] = Shape967;

Shape Shape971 = createNode("Shape");
LineSet LineSet972 = createNode("LineSet");
LineSet972.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA973 = createNode("ColorRGBA");
ColorRGBA973.USE = "HAnimSegmentLineColorRGBA";
LineSet972.color = ColorRGBA973;

Coordinate Coordinate974 = createNode("Coordinate");
Coordinate974.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975]);
LineSet972.coord = Coordinate974;

Shape971.geometry = LineSet972;

HAnimSegment945.children[7] = Shape971;

HAnimSite HAnimSite975 = createNode("HAnimSite");
HAnimSite975.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite975.name = "r_metacarpal_phalanx_5_pt";
HAnimSite975.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor976 = createNode("TouchSensor");
TouchSensor976.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite975.children = new MFNode();

HAnimSite975.children[0] = TouchSensor976;

Shape Shape977 = createNode("Shape");
Shape977.USE = "HAnimSiteShape";
HAnimSite975.children[1] = Shape977;

HAnimSegment945.children[8] = HAnimSite975;

HAnimJoint944.children = new MFNode();

HAnimJoint944.children[0] = HAnimSegment945;

HAnimJoint HAnimJoint978 = createNode("HAnimJoint");
HAnimJoint978.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint978.name = "r_carpometacarpal_1";
HAnimJoint978.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimSegment HAnimSegment979 = createNode("HAnimSegment");
HAnimSegment979.DEF = "hanim_r_metacarpal_1";
HAnimSegment979.name = "r_metacarpal_1";
Transform Transform980 = createNode("Transform");
Transform980.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
Transform Transform981 = createNode("Transform");
Shape Shape982 = createNode("Shape");
Shape982.USE = "HAnimJointShape";
Transform981.child = new undefined();

Transform981.child[0] = Shape982;

Transform980.children = new MFNode();

Transform980.children[0] = Transform981;

HAnimSegment979.children = new MFNode();

HAnimSegment979.children[0] = Transform980;

Shape Shape983 = createNode("Shape");
LineSet LineSet984 = createNode("LineSet");
LineSet984.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA985 = createNode("ColorRGBA");
ColorRGBA985.USE = "HAnimSegmentLineColorRGBA";
LineSet984.color = ColorRGBA985;

Coordinate Coordinate986 = createNode("Coordinate");
Coordinate986.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet984.coord = Coordinate986;

Shape983.geometry = LineSet984;

HAnimSegment979.children[1] = Shape983;

HAnimJoint978.children = new MFNode();

HAnimJoint978.children[0] = HAnimSegment979;

HAnimJoint HAnimJoint987 = createNode("HAnimJoint");
HAnimJoint987.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint987.name = "r_metacarpophalangeal_1";
HAnimJoint987.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimSegment HAnimSegment988 = createNode("HAnimSegment");
HAnimSegment988.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimSegment988.name = "r_carpal_proximal_phalanx_1";
Transform Transform989 = createNode("Transform");
Transform989.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
Transform Transform990 = createNode("Transform");
Shape Shape991 = createNode("Shape");
Shape991.USE = "HAnimJointShape";
Transform990.child = new undefined();

Transform990.child[0] = Shape991;

Transform989.children = new MFNode();

Transform989.children[0] = Transform990;

HAnimSegment988.children = new MFNode();

HAnimSegment988.children[0] = Transform989;

Shape Shape992 = createNode("Shape");
LineSet LineSet993 = createNode("LineSet");
LineSet993.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA994 = createNode("ColorRGBA");
ColorRGBA994.USE = "HAnimSegmentLineColorRGBA";
LineSet993.color = ColorRGBA994;

Coordinate Coordinate995 = createNode("Coordinate");
Coordinate995.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet993.coord = Coordinate995;

Shape992.geometry = LineSet993;

HAnimSegment988.children[1] = Shape992;

HAnimSite HAnimSite996 = createNode("HAnimSite");
HAnimSite996.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite996.name = "r_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor997 = createNode("TouchSensor");
TouchSensor997.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite996.children = new MFNode();

HAnimSite996.children[0] = TouchSensor997;

Shape Shape998 = createNode("Shape");
Shape998.USE = "HAnimSiteShape";
HAnimSite996.children[1] = Shape998;

HAnimSegment988.children[2] = HAnimSite996;

HAnimJoint987.children = new MFNode();

HAnimJoint987.children[0] = HAnimSegment988;

HAnimJoint HAnimJoint999 = createNode("HAnimJoint");
HAnimJoint999.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint999.name = "r_carpal_interphalangeal_1";
HAnimJoint999.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint987.children[1] = HAnimJoint999;

HAnimJoint978.children[1] = HAnimJoint987;

HAnimJoint944.children[1] = HAnimJoint978;

HAnimJoint HAnimJoint1000 = createNode("HAnimJoint");
HAnimJoint1000.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1000.name = "r_carpometacarpal_2";
HAnimJoint1000.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimSegment HAnimSegment1001 = createNode("HAnimSegment");
HAnimSegment1001.DEF = "hanim_r_metacarpal_2";
HAnimSegment1001.name = "r_metacarpal_2";
Transform Transform1002 = createNode("Transform");
Transform1002.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
Transform Transform1003 = createNode("Transform");
Shape Shape1004 = createNode("Shape");
Shape1004.USE = "HAnimJointShape";
Transform1003.child = new undefined();

Transform1003.child[0] = Shape1004;

Transform1002.children = new MFNode();

Transform1002.children[0] = Transform1003;

HAnimSegment1001.children = new MFNode();

HAnimSegment1001.children[0] = Transform1002;

Shape Shape1005 = createNode("Shape");
LineSet LineSet1006 = createNode("LineSet");
LineSet1006.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1007 = createNode("ColorRGBA");
ColorRGBA1007.USE = "HAnimSegmentLineColorRGBA";
LineSet1006.color = ColorRGBA1007;

Coordinate Coordinate1008 = createNode("Coordinate");
Coordinate1008.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1006.coord = Coordinate1008;

Shape1005.geometry = LineSet1006;

HAnimSegment1001.children[1] = Shape1005;

HAnimJoint1000.children = new MFNode();

HAnimJoint1000.children[0] = HAnimSegment1001;

HAnimJoint HAnimJoint1009 = createNode("HAnimJoint");
HAnimJoint1009.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1009.name = "r_metacarpophalangeal_2";
HAnimJoint1009.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimSegment HAnimSegment1010 = createNode("HAnimSegment");
HAnimSegment1010.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimSegment1010.name = "r_carpal_proximal_phalanx_2";
Transform Transform1011 = createNode("Transform");
Transform1011.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
Transform Transform1012 = createNode("Transform");
Shape Shape1013 = createNode("Shape");
Shape1013.USE = "HAnimJointShape";
Transform1012.child = new undefined();

Transform1012.child[0] = Shape1013;

Transform1011.children = new MFNode();

Transform1011.children[0] = Transform1012;

HAnimSegment1010.children = new MFNode();

HAnimSegment1010.children[0] = Transform1011;

Shape Shape1014 = createNode("Shape");
LineSet LineSet1015 = createNode("LineSet");
LineSet1015.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1016 = createNode("ColorRGBA");
ColorRGBA1016.USE = "HAnimSegmentLineColorRGBA";
LineSet1015.color = ColorRGBA1016;

Coordinate Coordinate1017 = createNode("Coordinate");
Coordinate1017.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1015.coord = Coordinate1017;

Shape1014.geometry = LineSet1015;

HAnimSegment1010.children[1] = Shape1014;

HAnimJoint1009.children = new MFNode();

HAnimJoint1009.children[0] = HAnimSegment1010;

HAnimJoint HAnimJoint1018 = createNode("HAnimJoint");
HAnimJoint1018.DEF = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimJoint1018.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1018.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimSegment HAnimSegment1019 = createNode("HAnimSegment");
HAnimSegment1019.DEF = "hanim_r_carpal_middle_phalanx_1";
HAnimSegment1019.name = "r_carpal_middle_phalanx_2";
Transform Transform1020 = createNode("Transform");
Transform1020.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
Transform Transform1021 = createNode("Transform");
Shape Shape1022 = createNode("Shape");
Shape1022.USE = "HAnimJointShape";
Transform1021.child = new undefined();

Transform1021.child[0] = Shape1022;

Transform1020.children = new MFNode();

Transform1020.children[0] = Transform1021;

HAnimSegment1019.children = new MFNode();

HAnimSegment1019.children[0] = Transform1020;

Shape Shape1023 = createNode("Shape");
LineSet LineSet1024 = createNode("LineSet");
LineSet1024.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1025 = createNode("ColorRGBA");
ColorRGBA1025.USE = "HAnimSegmentLineColorRGBA";
LineSet1024.color = ColorRGBA1025;

Coordinate Coordinate1026 = createNode("Coordinate");
Coordinate1026.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1024.coord = Coordinate1026;

Shape1023.geometry = LineSet1024;

HAnimSegment1019.children[1] = Shape1023;

HAnimSite HAnimSite1027 = createNode("HAnimSite");
HAnimSite1027.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite1027.name = "r_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor1028 = createNode("TouchSensor");
TouchSensor1028.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1027.children = new MFNode();

HAnimSite1027.children[0] = TouchSensor1028;

Shape Shape1029 = createNode("Shape");
Shape1029.USE = "HAnimSiteShape";
HAnimSite1027.children[1] = Shape1029;

HAnimSegment1019.children[2] = HAnimSite1027;

HAnimSite HAnimSite1030 = createNode("HAnimSite");
HAnimSite1030.DEF = "hanim_r_dactylion_pt";
HAnimSite1030.name = "r_dactylion_pt";
HAnimSite1030.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor1031 = createNode("TouchSensor");
TouchSensor1031.description = "HAnimSite r_dactylion_pt";
HAnimSite1030.children = new MFNode();

HAnimSite1030.children[0] = TouchSensor1031;

Shape Shape1032 = createNode("Shape");
Shape1032.USE = "HAnimSiteShape";
HAnimSite1030.children[1] = Shape1032;

HAnimSegment1019.children[3] = HAnimSite1030;

HAnimJoint1018.children = new MFNode();

HAnimJoint1018.children[0] = HAnimSegment1019;

HAnimJoint HAnimJoint1033 = createNode("HAnimJoint");
HAnimJoint1033.DEF = "hanim_r_carpal_distal_interphalangeal_1";
HAnimJoint1033.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1033.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1018.children[1] = HAnimJoint1033;

HAnimJoint1009.children[1] = HAnimJoint1018;

HAnimJoint1000.children[1] = HAnimJoint1009;

HAnimJoint944.children[2] = HAnimJoint1000;

HAnimJoint HAnimJoint1034 = createNode("HAnimJoint");
HAnimJoint1034.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1034.name = "r_carpometacarpal_3";
HAnimJoint1034.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimSegment HAnimSegment1035 = createNode("HAnimSegment");
HAnimSegment1035.DEF = "hanim_r_metacarpal_3";
HAnimSegment1035.name = "r_metacarpal_3";
Transform Transform1036 = createNode("Transform");
Transform1036.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
Transform Transform1037 = createNode("Transform");
Shape Shape1038 = createNode("Shape");
Shape1038.USE = "HAnimJointShape";
Transform1037.child = new undefined();

Transform1037.child[0] = Shape1038;

Transform1036.children = new MFNode();

Transform1036.children[0] = Transform1037;

HAnimSegment1035.children = new MFNode();

HAnimSegment1035.children[0] = Transform1036;

Shape Shape1039 = createNode("Shape");
LineSet LineSet1040 = createNode("LineSet");
LineSet1040.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1041 = createNode("ColorRGBA");
ColorRGBA1041.USE = "HAnimSegmentLineColorRGBA";
LineSet1040.color = ColorRGBA1041;

Coordinate Coordinate1042 = createNode("Coordinate");
Coordinate1042.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1040.coord = Coordinate1042;

Shape1039.geometry = LineSet1040;

HAnimSegment1035.children[1] = Shape1039;

HAnimJoint1034.children = new MFNode();

HAnimJoint1034.children[0] = HAnimSegment1035;

HAnimJoint HAnimJoint1043 = createNode("HAnimJoint");
HAnimJoint1043.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1043.name = "r_metacarpophalangeal_3";
HAnimJoint1043.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimSegment HAnimSegment1044 = createNode("HAnimSegment");
HAnimSegment1044.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimSegment1044.name = "r_carpal_proximal_phalanx_3";
Transform Transform1045 = createNode("Transform");
Transform1045.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
Transform Transform1046 = createNode("Transform");
Shape Shape1047 = createNode("Shape");
Shape1047.USE = "HAnimJointShape";
Transform1046.child = new undefined();

Transform1046.child[0] = Shape1047;

Transform1045.children = new MFNode();

Transform1045.children[0] = Transform1046;

HAnimSegment1044.children = new MFNode();

HAnimSegment1044.children[0] = Transform1045;

Shape Shape1048 = createNode("Shape");
LineSet LineSet1049 = createNode("LineSet");
LineSet1049.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1050 = createNode("ColorRGBA");
ColorRGBA1050.USE = "HAnimSegmentLineColorRGBA";
LineSet1049.color = ColorRGBA1050;

Coordinate Coordinate1051 = createNode("Coordinate");
Coordinate1051.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1049.coord = Coordinate1051;

Shape1048.geometry = LineSet1049;

HAnimSegment1044.children[1] = Shape1048;

HAnimJoint1043.children = new MFNode();

HAnimJoint1043.children[0] = HAnimSegment1044;

HAnimJoint HAnimJoint1052 = createNode("HAnimJoint");
HAnimJoint1052.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1052.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1052.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimSegment HAnimSegment1053 = createNode("HAnimSegment");
HAnimSegment1053.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimSegment1053.name = "r_carpal_middle_phalanx_3";
Transform Transform1054 = createNode("Transform");
Transform1054.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
Transform Transform1055 = createNode("Transform");
Shape Shape1056 = createNode("Shape");
Shape1056.USE = "HAnimJointShape";
Transform1055.child = new undefined();

Transform1055.child[0] = Shape1056;

Transform1054.children = new MFNode();

Transform1054.children[0] = Transform1055;

HAnimSegment1053.children = new MFNode();

HAnimSegment1053.children[0] = Transform1054;

Shape Shape1057 = createNode("Shape");
LineSet LineSet1058 = createNode("LineSet");
LineSet1058.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1059 = createNode("ColorRGBA");
ColorRGBA1059.USE = "HAnimSegmentLineColorRGBA";
LineSet1058.color = ColorRGBA1059;

Coordinate Coordinate1060 = createNode("Coordinate");
Coordinate1060.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1058.coord = Coordinate1060;

Shape1057.geometry = LineSet1058;

HAnimSegment1053.children[1] = Shape1057;

HAnimSite HAnimSite1061 = createNode("HAnimSite");
HAnimSite1061.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite1061.name = "r_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor1062 = createNode("TouchSensor");
TouchSensor1062.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1061.children = new MFNode();

HAnimSite1061.children[0] = TouchSensor1062;

Shape Shape1063 = createNode("Shape");
Shape1063.USE = "HAnimSiteShape";
HAnimSite1061.children[1] = Shape1063;

HAnimSegment1053.children[2] = HAnimSite1061;

HAnimJoint1052.children = new MFNode();

HAnimJoint1052.children[0] = HAnimSegment1053;

HAnimJoint HAnimJoint1064 = createNode("HAnimJoint");
HAnimJoint1064.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1064.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1064.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1052.children[1] = HAnimJoint1064;

HAnimJoint1043.children[1] = HAnimJoint1052;

HAnimJoint1034.children[1] = HAnimJoint1043;

HAnimJoint944.children[3] = HAnimJoint1034;

HAnimJoint HAnimJoint1065 = createNode("HAnimJoint");
HAnimJoint1065.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1065.name = "r_carpometacarpal_4";
HAnimJoint1065.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimSegment HAnimSegment1066 = createNode("HAnimSegment");
HAnimSegment1066.DEF = "hanim_r_metacarpal_4";
HAnimSegment1066.name = "r_metacarpal_4";
Transform Transform1067 = createNode("Transform");
Transform1067.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
Transform Transform1068 = createNode("Transform");
Shape Shape1069 = createNode("Shape");
Shape1069.USE = "HAnimJointShape";
Transform1068.child = new undefined();

Transform1068.child[0] = Shape1069;

Transform1067.children = new MFNode();

Transform1067.children[0] = Transform1068;

HAnimSegment1066.children = new MFNode();

HAnimSegment1066.children[0] = Transform1067;

Shape Shape1070 = createNode("Shape");
LineSet LineSet1071 = createNode("LineSet");
LineSet1071.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1072 = createNode("ColorRGBA");
ColorRGBA1072.USE = "HAnimSegmentLineColorRGBA";
LineSet1071.color = ColorRGBA1072;

Coordinate Coordinate1073 = createNode("Coordinate");
Coordinate1073.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1071.coord = Coordinate1073;

Shape1070.geometry = LineSet1071;

HAnimSegment1066.children[1] = Shape1070;

HAnimJoint1065.children = new MFNode();

HAnimJoint1065.children[0] = HAnimSegment1066;

HAnimJoint HAnimJoint1074 = createNode("HAnimJoint");
HAnimJoint1074.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1074.name = "r_metacarpophalangeal_4";
HAnimJoint1074.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimSegment HAnimSegment1075 = createNode("HAnimSegment");
HAnimSegment1075.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimSegment1075.name = "r_carpal_proximal_phalanx_4";
Transform Transform1076 = createNode("Transform");
Transform1076.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
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
Coordinate1082.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1080.coord = Coordinate1082;

Shape1079.geometry = LineSet1080;

HAnimSegment1075.children[1] = Shape1079;

HAnimJoint1074.children = new MFNode();

HAnimJoint1074.children[0] = HAnimSegment1075;

HAnimJoint HAnimJoint1083 = createNode("HAnimJoint");
HAnimJoint1083.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1083.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1083.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimSegment HAnimSegment1084 = createNode("HAnimSegment");
HAnimSegment1084.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimSegment1084.name = "r_carpal_middle_phalanx_4";
Transform Transform1085 = createNode("Transform");
Transform1085.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
Transform Transform1086 = createNode("Transform");
Shape Shape1087 = createNode("Shape");
Shape1087.USE = "HAnimJointShape";
Transform1086.child = new undefined();

Transform1086.child[0] = Shape1087;

Transform1085.children = new MFNode();

Transform1085.children[0] = Transform1086;

HAnimSegment1084.children = new MFNode();

HAnimSegment1084.children[0] = Transform1085;

Shape Shape1088 = createNode("Shape");
LineSet LineSet1089 = createNode("LineSet");
LineSet1089.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1090 = createNode("ColorRGBA");
ColorRGBA1090.USE = "HAnimSegmentLineColorRGBA";
LineSet1089.color = ColorRGBA1090;

Coordinate Coordinate1091 = createNode("Coordinate");
Coordinate1091.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1089.coord = Coordinate1091;

Shape1088.geometry = LineSet1089;

HAnimSegment1084.children[1] = Shape1088;

HAnimSite HAnimSite1092 = createNode("HAnimSite");
HAnimSite1092.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite1092.name = "r_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor1093 = createNode("TouchSensor");
TouchSensor1093.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1092.children = new MFNode();

HAnimSite1092.children[0] = TouchSensor1093;

Shape Shape1094 = createNode("Shape");
Shape1094.USE = "HAnimSiteShape";
HAnimSite1092.children[1] = Shape1094;

HAnimSegment1084.children[2] = HAnimSite1092;

HAnimJoint1083.children = new MFNode();

HAnimJoint1083.children[0] = HAnimSegment1084;

HAnimJoint HAnimJoint1095 = createNode("HAnimJoint");
HAnimJoint1095.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1095.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1095.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1083.children[1] = HAnimJoint1095;

HAnimJoint1074.children[1] = HAnimJoint1083;

HAnimJoint1065.children[1] = HAnimJoint1074;

HAnimJoint944.children[4] = HAnimJoint1065;

HAnimJoint HAnimJoint1096 = createNode("HAnimJoint");
HAnimJoint1096.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1096.name = "r_carpometacarpal_5";
HAnimJoint1096.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimSegment HAnimSegment1097 = createNode("HAnimSegment");
HAnimSegment1097.DEF = "hanim_r_metacarpal_5";
HAnimSegment1097.name = "r_metacarpal_5";
Transform Transform1098 = createNode("Transform");
Transform1098.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
Transform Transform1099 = createNode("Transform");
Shape Shape1100 = createNode("Shape");
Shape1100.USE = "HAnimJointShape";
Transform1099.child = new undefined();

Transform1099.child[0] = Shape1100;

Transform1098.children = new MFNode();

Transform1098.children[0] = Transform1099;

HAnimSegment1097.children = new MFNode();

HAnimSegment1097.children[0] = Transform1098;

Shape Shape1101 = createNode("Shape");
LineSet LineSet1102 = createNode("LineSet");
LineSet1102.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1103 = createNode("ColorRGBA");
ColorRGBA1103.USE = "HAnimSegmentLineColorRGBA";
LineSet1102.color = ColorRGBA1103;

Coordinate Coordinate1104 = createNode("Coordinate");
Coordinate1104.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1102.coord = Coordinate1104;

Shape1101.geometry = LineSet1102;

HAnimSegment1097.children[1] = Shape1101;

HAnimJoint1096.children = new MFNode();

HAnimJoint1096.children[0] = HAnimSegment1097;

HAnimJoint HAnimJoint1105 = createNode("HAnimJoint");
HAnimJoint1105.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1105.name = "r_metacarpophalangeal_5";
HAnimJoint1105.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimSegment HAnimSegment1106 = createNode("HAnimSegment");
HAnimSegment1106.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimSegment1106.name = "r_carpal_proximal_phalanx_5";
Transform Transform1107 = createNode("Transform");
Transform1107.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
Transform Transform1108 = createNode("Transform");
Shape Shape1109 = createNode("Shape");
Shape1109.USE = "HAnimJointShape";
Transform1108.child = new undefined();

Transform1108.child[0] = Shape1109;

Transform1107.children = new MFNode();

Transform1107.children[0] = Transform1108;

HAnimSegment1106.children = new MFNode();

HAnimSegment1106.children[0] = Transform1107;

Shape Shape1110 = createNode("Shape");
LineSet LineSet1111 = createNode("LineSet");
LineSet1111.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1112 = createNode("ColorRGBA");
ColorRGBA1112.USE = "HAnimSegmentLineColorRGBA";
LineSet1111.color = ColorRGBA1112;

Coordinate Coordinate1113 = createNode("Coordinate");
Coordinate1113.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1111.coord = Coordinate1113;

Shape1110.geometry = LineSet1111;

HAnimSegment1106.children[1] = Shape1110;

HAnimJoint1105.children = new MFNode();

HAnimJoint1105.children[0] = HAnimSegment1106;

HAnimJoint HAnimJoint1114 = createNode("HAnimJoint");
HAnimJoint1114.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1114.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1114.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimSegment HAnimSegment1115 = createNode("HAnimSegment");
HAnimSegment1115.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimSegment1115.name = "r_carpal_middle_phalanx_5";
Transform Transform1116 = createNode("Transform");
Transform1116.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
Transform Transform1117 = createNode("Transform");
Shape Shape1118 = createNode("Shape");
Shape1118.USE = "HAnimJointShape";
Transform1117.child = new undefined();

Transform1117.child[0] = Shape1118;

Transform1116.children = new MFNode();

Transform1116.children[0] = Transform1117;

HAnimSegment1115.children = new MFNode();

HAnimSegment1115.children[0] = Transform1116;

Shape Shape1119 = createNode("Shape");
LineSet LineSet1120 = createNode("LineSet");
LineSet1120.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1121 = createNode("ColorRGBA");
ColorRGBA1121.USE = "HAnimSegmentLineColorRGBA";
LineSet1120.color = ColorRGBA1121;

Coordinate Coordinate1122 = createNode("Coordinate");
Coordinate1122.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1120.coord = Coordinate1122;

Shape1119.geometry = LineSet1120;

HAnimSegment1115.children[1] = Shape1119;

HAnimSite HAnimSite1123 = createNode("HAnimSite");
HAnimSite1123.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite1123.name = "r_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor1124 = createNode("TouchSensor");
TouchSensor1124.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1123.children = new MFNode();

HAnimSite1123.children[0] = TouchSensor1124;

Shape Shape1125 = createNode("Shape");
Shape1125.USE = "HAnimSiteShape";
HAnimSite1123.children[1] = Shape1125;

HAnimSegment1115.children[2] = HAnimSite1123;

HAnimJoint1114.children = new MFNode();

HAnimJoint1114.children[0] = HAnimSegment1115;

HAnimJoint HAnimJoint1126 = createNode("HAnimJoint");
HAnimJoint1126.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1126.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1126.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1114.children[1] = HAnimJoint1126;

HAnimJoint1105.children[1] = HAnimJoint1114;

HAnimJoint1096.children[1] = HAnimJoint1105;

HAnimJoint944.children[5] = HAnimJoint1096;

HAnimJoint932.children[1] = HAnimJoint944;

HAnimJoint911.children[1] = HAnimJoint932;

HAnimJoint896.children[1] = HAnimJoint911;

HAnimJoint887.children[1] = HAnimJoint896;

HAnimJoint443.children[3] = HAnimJoint887;

HAnimJoint428.children[1] = HAnimJoint443;

HAnimJoint419.children[1] = HAnimJoint428;

HAnimJoint410.children[1] = HAnimJoint419;

HAnimJoint401.children[1] = HAnimJoint410;

HAnimJoint389.children[1] = HAnimJoint401;

HAnimJoint368.children[1] = HAnimJoint389;

HAnimJoint359.children[1] = HAnimJoint368;

HAnimJoint350.children[1] = HAnimJoint359;

HAnimJoint335.children[1] = HAnimJoint350;

HAnimJoint323.children[1] = HAnimJoint335;

HAnimJoint314.children[1] = HAnimJoint323;

HAnimJoint305.children[1] = HAnimJoint314;

HAnimJoint296.children[1] = HAnimJoint305;

HAnimJoint278.children[1] = HAnimJoint296;

HAnimJoint269.children[1] = HAnimJoint278;

HAnimJoint260.children[1] = HAnimJoint269;

HAnimJoint43.children[2] = HAnimJoint260;

HAnimHumanoid42.joints = new MFNode();

HAnimHumanoid42.joints[0] = HAnimJoint43;

HAnimSite HAnimSite1127 = createNode("HAnimSite");
HAnimSite1127.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid42.viewpoints[1] = HAnimSite1127;

HAnimSite HAnimSite1128 = createNode("HAnimSite");
HAnimSite1128.USE = "hanim_crotch_pt";
HAnimHumanoid42.viewpoints[2] = HAnimSite1128;

HAnimSite HAnimSite1129 = createNode("HAnimSite");
HAnimSite1129.USE = "hanim_l_asis_pt";
HAnimHumanoid42.viewpoints[3] = HAnimSite1129;

HAnimSite HAnimSite1130 = createNode("HAnimSite");
HAnimSite1130.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid42.viewpoints[4] = HAnimSite1130;

HAnimSite HAnimSite1131 = createNode("HAnimSite");
HAnimSite1131.USE = "hanim_l_psis_pt";
HAnimHumanoid42.viewpoints[5] = HAnimSite1131;

HAnimSite HAnimSite1132 = createNode("HAnimSite");
HAnimSite1132.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid42.viewpoints[6] = HAnimSite1132;

HAnimSite HAnimSite1133 = createNode("HAnimSite");
HAnimSite1133.USE = "hanim_r_asis_pt";
HAnimHumanoid42.viewpoints[7] = HAnimSite1133;

HAnimSite HAnimSite1134 = createNode("HAnimSite");
HAnimSite1134.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid42.viewpoints[8] = HAnimSite1134;

HAnimSite HAnimSite1135 = createNode("HAnimSite");
HAnimSite1135.USE = "hanim_r_psis_pt";
HAnimHumanoid42.viewpoints[9] = HAnimSite1135;

HAnimSite HAnimSite1136 = createNode("HAnimSite");
HAnimSite1136.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid42.viewpoints[10] = HAnimSite1136;

HAnimSite HAnimSite1137 = createNode("HAnimSite");
HAnimSite1137.USE = "hanim_navel_pt";
HAnimHumanoid42.viewpoints[11] = HAnimSite1137;

HAnimSite HAnimSite1138 = createNode("HAnimSite");
HAnimSite1138.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid42.viewpoints[12] = HAnimSite1138;

HAnimSite HAnimSite1139 = createNode("HAnimSite");
HAnimSite1139.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid42.viewpoints[13] = HAnimSite1139;

HAnimSite HAnimSite1140 = createNode("HAnimSite");
HAnimSite1140.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[14] = HAnimSite1140;

HAnimSite HAnimSite1141 = createNode("HAnimSite");
HAnimSite1141.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[15] = HAnimSite1141;

HAnimSite HAnimSite1142 = createNode("HAnimSite");
HAnimSite1142.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid42.viewpoints[16] = HAnimSite1142;

HAnimSite HAnimSite1143 = createNode("HAnimSite");
HAnimSite1143.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid42.viewpoints[17] = HAnimSite1143;

HAnimSite HAnimSite1144 = createNode("HAnimSite");
HAnimSite1144.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[18] = HAnimSite1144;

HAnimSite HAnimSite1145 = createNode("HAnimSite");
HAnimSite1145.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[19] = HAnimSite1145;

HAnimSite HAnimSite1146 = createNode("HAnimSite");
HAnimSite1146.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid42.viewpoints[20] = HAnimSite1146;

HAnimSite HAnimSite1147 = createNode("HAnimSite");
HAnimSite1147.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid42.viewpoints[21] = HAnimSite1147;

HAnimSite HAnimSite1148 = createNode("HAnimSite");
HAnimSite1148.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[22] = HAnimSite1148;

HAnimSite HAnimSite1149 = createNode("HAnimSite");
HAnimSite1149.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[23] = HAnimSite1149;

HAnimSite HAnimSite1150 = createNode("HAnimSite");
HAnimSite1150.USE = "hanim_l_tibiale_pt";
HAnimHumanoid42.viewpoints[24] = HAnimSite1150;

HAnimSite HAnimSite1151 = createNode("HAnimSite");
HAnimSite1151.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[25] = HAnimSite1151;

HAnimSite HAnimSite1152 = createNode("HAnimSite");
HAnimSite1152.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid42.viewpoints[26] = HAnimSite1152;

HAnimSite HAnimSite1153 = createNode("HAnimSite");
HAnimSite1153.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[27] = HAnimSite1153;

HAnimSite HAnimSite1154 = createNode("HAnimSite");
HAnimSite1154.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[28] = HAnimSite1154;

HAnimSite HAnimSite1155 = createNode("HAnimSite");
HAnimSite1155.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[29] = HAnimSite1155;

HAnimSite HAnimSite1156 = createNode("HAnimSite");
HAnimSite1156.USE = "hanim_r_tibiale_pt";
HAnimHumanoid42.viewpoints[30] = HAnimSite1156;

HAnimSite HAnimSite1157 = createNode("HAnimSite");
HAnimSite1157.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[31] = HAnimSite1157;

HAnimSite HAnimSite1158 = createNode("HAnimSite");
HAnimSite1158.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid42.viewpoints[32] = HAnimSite1158;

HAnimSite HAnimSite1159 = createNode("HAnimSite");
HAnimSite1159.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[33] = HAnimSite1159;

HAnimSite HAnimSite1160 = createNode("HAnimSite");
HAnimSite1160.USE = "hanim_l_rib10_pt";
HAnimHumanoid42.viewpoints[34] = HAnimSite1160;

HAnimSite HAnimSite1161 = createNode("HAnimSite");
HAnimSite1161.USE = "hanim_r_rib10_pt";
HAnimHumanoid42.viewpoints[35] = HAnimSite1161;

HAnimSite HAnimSite1162 = createNode("HAnimSite");
HAnimSite1162.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid42.viewpoints[36] = HAnimSite1162;

HAnimSite HAnimSite1163 = createNode("HAnimSite");
HAnimSite1163.USE = "hanim_substernale_pt";
HAnimHumanoid42.viewpoints[37] = HAnimSite1163;

HAnimSite HAnimSite1164 = createNode("HAnimSite");
HAnimSite1164.USE = "hanim_l_thelion_pt";
HAnimHumanoid42.viewpoints[38] = HAnimSite1164;

HAnimSite HAnimSite1165 = createNode("HAnimSite");
HAnimSite1165.USE = "hanim_r_thelion_pt";
HAnimHumanoid42.viewpoints[39] = HAnimSite1165;

HAnimSite HAnimSite1166 = createNode("HAnimSite");
HAnimSite1166.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[40] = HAnimSite1166;

HAnimSite HAnimSite1167 = createNode("HAnimSite");
HAnimSite1167.USE = "hanim_mesosternale_pt";
HAnimHumanoid42.viewpoints[41] = HAnimSite1167;

HAnimSite HAnimSite1168 = createNode("HAnimSite");
HAnimSite1168.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[42] = HAnimSite1168;

HAnimSite HAnimSite1169 = createNode("HAnimSite");
HAnimSite1169.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[43] = HAnimSite1169;

HAnimSite HAnimSite1170 = createNode("HAnimSite");
HAnimSite1170.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid42.viewpoints[44] = HAnimSite1170;

HAnimSite HAnimSite1171 = createNode("HAnimSite");
HAnimSite1171.USE = "hanim_cervicale_pt";
HAnimHumanoid42.viewpoints[45] = HAnimSite1171;

HAnimSite HAnimSite1172 = createNode("HAnimSite");
HAnimSite1172.USE = "hanim_suprasternale_pt";
HAnimHumanoid42.viewpoints[46] = HAnimSite1172;

HAnimSite HAnimSite1173 = createNode("HAnimSite");
HAnimSite1173.USE = "hanim_l_neck_base_pt";
HAnimHumanoid42.viewpoints[47] = HAnimSite1173;

HAnimSite HAnimSite1174 = createNode("HAnimSite");
HAnimSite1174.USE = "hanim_r_neck_base_pt";
HAnimHumanoid42.viewpoints[48] = HAnimSite1174;

HAnimSite HAnimSite1175 = createNode("HAnimSite");
HAnimSite1175.USE = "hanim_l_acromion_pt";
HAnimHumanoid42.viewpoints[49] = HAnimSite1175;

HAnimSite HAnimSite1176 = createNode("HAnimSite");
HAnimSite1176.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid42.viewpoints[50] = HAnimSite1176;

HAnimSite HAnimSite1177 = createNode("HAnimSite");
HAnimSite1177.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid42.viewpoints[51] = HAnimSite1177;

HAnimSite HAnimSite1178 = createNode("HAnimSite");
HAnimSite1178.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid42.viewpoints[52] = HAnimSite1178;

HAnimSite HAnimSite1179 = createNode("HAnimSite");
HAnimSite1179.USE = "hanim_l_clavicale_pt";
HAnimHumanoid42.viewpoints[53] = HAnimSite1179;

HAnimSite HAnimSite1180 = createNode("HAnimSite");
HAnimSite1180.USE = "hanim_r_acromion_pt";
HAnimHumanoid42.viewpoints[54] = HAnimSite1180;

HAnimSite HAnimSite1181 = createNode("HAnimSite");
HAnimSite1181.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid42.viewpoints[55] = HAnimSite1181;

HAnimSite HAnimSite1182 = createNode("HAnimSite");
HAnimSite1182.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid42.viewpoints[56] = HAnimSite1182;

HAnimSite HAnimSite1183 = createNode("HAnimSite");
HAnimSite1183.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid42.viewpoints[57] = HAnimSite1183;

HAnimSite HAnimSite1184 = createNode("HAnimSite");
HAnimSite1184.USE = "hanim_r_clavicale_pt";
HAnimHumanoid42.viewpoints[58] = HAnimSite1184;

HAnimSite HAnimSite1185 = createNode("HAnimSite");
HAnimSite1185.USE = "hanim_adams_apple_pt";
HAnimHumanoid42.viewpoints[59] = HAnimSite1185;

HAnimSite HAnimSite1186 = createNode("HAnimSite");
HAnimSite1186.USE = "hanim_glabella_pt";
HAnimHumanoid42.viewpoints[60] = HAnimSite1186;

HAnimSite HAnimSite1187 = createNode("HAnimSite");
HAnimSite1187.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid42.viewpoints[61] = HAnimSite1187;

HAnimSite HAnimSite1188 = createNode("HAnimSite");
HAnimSite1188.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid42.viewpoints[62] = HAnimSite1188;

HAnimSite HAnimSite1189 = createNode("HAnimSite");
HAnimSite1189.USE = "hanim_l_tragion_pt";
HAnimHumanoid42.viewpoints[63] = HAnimSite1189;

HAnimSite HAnimSite1190 = createNode("HAnimSite");
HAnimSite1190.USE = "hanim_nuchale_pt";
HAnimHumanoid42.viewpoints[64] = HAnimSite1190;

HAnimSite HAnimSite1191 = createNode("HAnimSite");
HAnimSite1191.USE = "hanim_opisthocranion_pt";
HAnimHumanoid42.viewpoints[65] = HAnimSite1191;

HAnimSite HAnimSite1192 = createNode("HAnimSite");
HAnimSite1192.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid42.viewpoints[66] = HAnimSite1192;

HAnimSite HAnimSite1193 = createNode("HAnimSite");
HAnimSite1193.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid42.viewpoints[67] = HAnimSite1193;

HAnimSite HAnimSite1194 = createNode("HAnimSite");
HAnimSite1194.USE = "hanim_r_tragion_pt";
HAnimHumanoid42.viewpoints[68] = HAnimSite1194;

HAnimSite HAnimSite1195 = createNode("HAnimSite");
HAnimSite1195.USE = "hanim_sellion_pt";
HAnimHumanoid42.viewpoints[69] = HAnimSite1195;

HAnimSite HAnimSite1196 = createNode("HAnimSite");
HAnimSite1196.USE = "hanim_skull_vertex_pt";
HAnimHumanoid42.viewpoints[70] = HAnimSite1196;

HAnimSite HAnimSite1197 = createNode("HAnimSite");
HAnimSite1197.USE = "hanim_l_gonion_pt";
HAnimHumanoid42.viewpoints[71] = HAnimSite1197;

HAnimSite HAnimSite1198 = createNode("HAnimSite");
HAnimSite1198.USE = "hanim_menton_pt";
HAnimHumanoid42.viewpoints[72] = HAnimSite1198;

HAnimSite HAnimSite1199 = createNode("HAnimSite");
HAnimSite1199.USE = "hanim_r_gonion_pt";
HAnimHumanoid42.viewpoints[73] = HAnimSite1199;

HAnimSite HAnimSite1200 = createNode("HAnimSite");
HAnimSite1200.USE = "hanim_supramenton_pt";
HAnimHumanoid42.viewpoints[74] = HAnimSite1200;

HAnimSite HAnimSite1201 = createNode("HAnimSite");
HAnimSite1201.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid42.viewpoints[75] = HAnimSite1201;

HAnimSite HAnimSite1202 = createNode("HAnimSite");
HAnimSite1202.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[76] = HAnimSite1202;

HAnimSite HAnimSite1203 = createNode("HAnimSite");
HAnimSite1203.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[77] = HAnimSite1203;

HAnimSite HAnimSite1204 = createNode("HAnimSite");
HAnimSite1204.USE = "hanim_l_olecranon_pt";
HAnimHumanoid42.viewpoints[78] = HAnimSite1204;

HAnimSite HAnimSite1205 = createNode("HAnimSite");
HAnimSite1205.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid42.viewpoints[79] = HAnimSite1205;

HAnimSite HAnimSite1206 = createNode("HAnimSite");
HAnimSite1206.USE = "hanim_l_radiale_pt";
HAnimHumanoid42.viewpoints[80] = HAnimSite1206;

HAnimSite HAnimSite1207 = createNode("HAnimSite");
HAnimSite1207.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[81] = HAnimSite1207;

HAnimSite HAnimSite1208 = createNode("HAnimSite");
HAnimSite1208.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid42.viewpoints[82] = HAnimSite1208;

HAnimSite HAnimSite1209 = createNode("HAnimSite");
HAnimSite1209.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid42.viewpoints[83] = HAnimSite1209;

HAnimSite HAnimSite1210 = createNode("HAnimSite");
HAnimSite1210.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[84] = HAnimSite1210;

HAnimSite HAnimSite1211 = createNode("HAnimSite");
HAnimSite1211.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[85] = HAnimSite1211;

HAnimSite HAnimSite1212 = createNode("HAnimSite");
HAnimSite1212.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[86] = HAnimSite1212;

HAnimSite HAnimSite1213 = createNode("HAnimSite");
HAnimSite1213.USE = "hanim_l_dactylion_pt";
HAnimHumanoid42.viewpoints[87] = HAnimSite1213;

HAnimSite HAnimSite1214 = createNode("HAnimSite");
HAnimSite1214.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[88] = HAnimSite1214;

HAnimSite HAnimSite1215 = createNode("HAnimSite");
HAnimSite1215.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[89] = HAnimSite1215;

HAnimSite HAnimSite1216 = createNode("HAnimSite");
HAnimSite1216.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[90] = HAnimSite1216;

HAnimSite HAnimSite1217 = createNode("HAnimSite");
HAnimSite1217.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid42.viewpoints[91] = HAnimSite1217;

HAnimSite HAnimSite1218 = createNode("HAnimSite");
HAnimSite1218.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[92] = HAnimSite1218;

HAnimSite HAnimSite1219 = createNode("HAnimSite");
HAnimSite1219.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[93] = HAnimSite1219;

HAnimSite HAnimSite1220 = createNode("HAnimSite");
HAnimSite1220.USE = "hanim_r_olecranon_pt";
HAnimHumanoid42.viewpoints[94] = HAnimSite1220;

HAnimSite HAnimSite1221 = createNode("HAnimSite");
HAnimSite1221.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid42.viewpoints[95] = HAnimSite1221;

HAnimSite HAnimSite1222 = createNode("HAnimSite");
HAnimSite1222.USE = "hanim_r_radiale_pt";
HAnimHumanoid42.viewpoints[96] = HAnimSite1222;

HAnimSite HAnimSite1223 = createNode("HAnimSite");
HAnimSite1223.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[97] = HAnimSite1223;

HAnimSite HAnimSite1224 = createNode("HAnimSite");
HAnimSite1224.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid42.viewpoints[98] = HAnimSite1224;

HAnimSite HAnimSite1225 = createNode("HAnimSite");
HAnimSite1225.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid42.viewpoints[99] = HAnimSite1225;

HAnimSite HAnimSite1226 = createNode("HAnimSite");
HAnimSite1226.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[100] = HAnimSite1226;

HAnimSite HAnimSite1227 = createNode("HAnimSite");
HAnimSite1227.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[101] = HAnimSite1227;

HAnimSite HAnimSite1228 = createNode("HAnimSite");
HAnimSite1228.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[102] = HAnimSite1228;

HAnimSite HAnimSite1229 = createNode("HAnimSite");
HAnimSite1229.USE = "hanim_r_dactylion_pt";
HAnimHumanoid42.viewpoints[103] = HAnimSite1229;

HAnimSite HAnimSite1230 = createNode("HAnimSite");
HAnimSite1230.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[104] = HAnimSite1230;

HAnimSite HAnimSite1231 = createNode("HAnimSite");
HAnimSite1231.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[105] = HAnimSite1231;

HAnimSite HAnimSite1232 = createNode("HAnimSite");
HAnimSite1232.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[106] = HAnimSite1232;

HAnimSegment HAnimSegment1233 = createNode("HAnimSegment");
HAnimSegment1233.USE = "hanim_sacrum";
HAnimHumanoid42.segments[107] = HAnimSegment1233;

HAnimSegment HAnimSegment1234 = createNode("HAnimSegment");
HAnimSegment1234.USE = "hanim_pelvis";
HAnimHumanoid42.segments[108] = HAnimSegment1234;

HAnimSegment HAnimSegment1235 = createNode("HAnimSegment");
HAnimSegment1235.USE = "hanim_l_thigh";
HAnimHumanoid42.segments[109] = HAnimSegment1235;

HAnimSegment HAnimSegment1236 = createNode("HAnimSegment");
HAnimSegment1236.USE = "hanim_l_calf";
HAnimHumanoid42.segments[110] = HAnimSegment1236;

HAnimSegment HAnimSegment1237 = createNode("HAnimSegment");
HAnimSegment1237.USE = "hanim_l_talus";
HAnimHumanoid42.segments[111] = HAnimSegment1237;

HAnimSegment HAnimSegment1238 = createNode("HAnimSegment");
HAnimSegment1238.USE = "hanim_l_metatarsal_1";
HAnimHumanoid42.segments[112] = HAnimSegment1238;

HAnimSegment HAnimSegment1239 = createNode("HAnimSegment");
HAnimSegment1239.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid42.segments[113] = HAnimSegment1239;

HAnimSegment HAnimSegment1240 = createNode("HAnimSegment");
HAnimSegment1240.USE = "hanim_r_thigh";
HAnimHumanoid42.segments[114] = HAnimSegment1240;

HAnimSegment HAnimSegment1241 = createNode("HAnimSegment");
HAnimSegment1241.USE = "hanim_r_calf";
HAnimHumanoid42.segments[115] = HAnimSegment1241;

HAnimSegment HAnimSegment1242 = createNode("HAnimSegment");
HAnimSegment1242.USE = "hanim_r_talus";
HAnimHumanoid42.segments[116] = HAnimSegment1242;

HAnimSegment HAnimSegment1243 = createNode("HAnimSegment");
HAnimSegment1243.USE = "hanim_r_metatarsal_1";
HAnimHumanoid42.segments[117] = HAnimSegment1243;

HAnimSegment HAnimSegment1244 = createNode("HAnimSegment");
HAnimSegment1244.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid42.segments[118] = HAnimSegment1244;

HAnimSegment HAnimSegment1245 = createNode("HAnimSegment");
HAnimSegment1245.USE = "hanim_l5";
HAnimHumanoid42.segments[119] = HAnimSegment1245;

HAnimSegment HAnimSegment1246 = createNode("HAnimSegment");
HAnimSegment1246.USE = "hanim_l4";
HAnimHumanoid42.segments[120] = HAnimSegment1246;

HAnimSegment HAnimSegment1247 = createNode("HAnimSegment");
HAnimSegment1247.USE = "hanim_l3";
HAnimHumanoid42.segments[121] = HAnimSegment1247;

HAnimSegment HAnimSegment1248 = createNode("HAnimSegment");
HAnimSegment1248.USE = "hanim_l2";
HAnimHumanoid42.segments[122] = HAnimSegment1248;

HAnimSegment HAnimSegment1249 = createNode("HAnimSegment");
HAnimSegment1249.USE = "hanim_l1";
HAnimHumanoid42.segments[123] = HAnimSegment1249;

HAnimSegment HAnimSegment1250 = createNode("HAnimSegment");
HAnimSegment1250.USE = "hanim_t12";
HAnimHumanoid42.segments[124] = HAnimSegment1250;

HAnimSegment HAnimSegment1251 = createNode("HAnimSegment");
HAnimSegment1251.USE = "hanim_t11";
HAnimHumanoid42.segments[125] = HAnimSegment1251;

HAnimSegment HAnimSegment1252 = createNode("HAnimSegment");
HAnimSegment1252.USE = "hanim_t10";
HAnimHumanoid42.segments[126] = HAnimSegment1252;

HAnimSegment HAnimSegment1253 = createNode("HAnimSegment");
HAnimSegment1253.USE = "hanim_t9";
HAnimHumanoid42.segments[127] = HAnimSegment1253;

HAnimSegment HAnimSegment1254 = createNode("HAnimSegment");
HAnimSegment1254.USE = "hanim_t8";
HAnimHumanoid42.segments[128] = HAnimSegment1254;

HAnimSegment HAnimSegment1255 = createNode("HAnimSegment");
HAnimSegment1255.USE = "hanim_t7";
HAnimHumanoid42.segments[129] = HAnimSegment1255;

HAnimSegment HAnimSegment1256 = createNode("HAnimSegment");
HAnimSegment1256.USE = "hanim_t6";
HAnimHumanoid42.segments[130] = HAnimSegment1256;

HAnimSegment HAnimSegment1257 = createNode("HAnimSegment");
HAnimSegment1257.USE = "hanim_t5";
HAnimHumanoid42.segments[131] = HAnimSegment1257;

HAnimSegment HAnimSegment1258 = createNode("HAnimSegment");
HAnimSegment1258.USE = "hanim_t4";
HAnimHumanoid42.segments[132] = HAnimSegment1258;

HAnimSegment HAnimSegment1259 = createNode("HAnimSegment");
HAnimSegment1259.USE = "hanim_t3";
HAnimHumanoid42.segments[133] = HAnimSegment1259;

HAnimSegment HAnimSegment1260 = createNode("HAnimSegment");
HAnimSegment1260.USE = "hanim_t2";
HAnimHumanoid42.segments[134] = HAnimSegment1260;

HAnimSegment HAnimSegment1261 = createNode("HAnimSegment");
HAnimSegment1261.USE = "hanim_t1";
HAnimHumanoid42.segments[135] = HAnimSegment1261;

HAnimSegment HAnimSegment1262 = createNode("HAnimSegment");
HAnimSegment1262.USE = "hanim_c7";
HAnimHumanoid42.segments[136] = HAnimSegment1262;

HAnimSegment HAnimSegment1263 = createNode("HAnimSegment");
HAnimSegment1263.USE = "hanim_c6";
HAnimHumanoid42.segments[137] = HAnimSegment1263;

HAnimSegment HAnimSegment1264 = createNode("HAnimSegment");
HAnimSegment1264.USE = "hanim_c5";
HAnimHumanoid42.segments[138] = HAnimSegment1264;

HAnimSegment HAnimSegment1265 = createNode("HAnimSegment");
HAnimSegment1265.USE = "hanim_c4";
HAnimHumanoid42.segments[139] = HAnimSegment1265;

HAnimSegment HAnimSegment1266 = createNode("HAnimSegment");
HAnimSegment1266.USE = "hanim_c3";
HAnimHumanoid42.segments[140] = HAnimSegment1266;

HAnimSegment HAnimSegment1267 = createNode("HAnimSegment");
HAnimSegment1267.USE = "hanim_c2";
HAnimHumanoid42.segments[141] = HAnimSegment1267;

HAnimSegment HAnimSegment1268 = createNode("HAnimSegment");
HAnimSegment1268.USE = "hanim_c1";
HAnimHumanoid42.segments[142] = HAnimSegment1268;

HAnimSegment HAnimSegment1269 = createNode("HAnimSegment");
HAnimSegment1269.USE = "hanim_skull";
HAnimHumanoid42.segments[143] = HAnimSegment1269;

HAnimSegment HAnimSegment1270 = createNode("HAnimSegment");
HAnimSegment1270.USE = "hanim_l_clavicle";
HAnimHumanoid42.segments[144] = HAnimSegment1270;

HAnimSegment HAnimSegment1271 = createNode("HAnimSegment");
HAnimSegment1271.USE = "hanim_l_scapula";
HAnimHumanoid42.segments[145] = HAnimSegment1271;

HAnimSegment HAnimSegment1272 = createNode("HAnimSegment");
HAnimSegment1272.USE = "hanim_l_upperarm";
HAnimHumanoid42.segments[146] = HAnimSegment1272;

HAnimSegment HAnimSegment1273 = createNode("HAnimSegment");
HAnimSegment1273.USE = "hanim_l_forearm";
HAnimHumanoid42.segments[147] = HAnimSegment1273;

HAnimSegment HAnimSegment1274 = createNode("HAnimSegment");
HAnimSegment1274.USE = "hanim_l_carpal";
HAnimHumanoid42.segments[148] = HAnimSegment1274;

HAnimSegment HAnimSegment1275 = createNode("HAnimSegment");
HAnimSegment1275.USE = "hanim_l_metacarpal_1";
HAnimHumanoid42.segments[149] = HAnimSegment1275;

HAnimSegment HAnimSegment1276 = createNode("HAnimSegment");
HAnimSegment1276.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid42.segments[150] = HAnimSegment1276;

HAnimSegment HAnimSegment1277 = createNode("HAnimSegment");
HAnimSegment1277.USE = "hanim_l_metacarpal_2";
HAnimHumanoid42.segments[151] = HAnimSegment1277;

HAnimSegment HAnimSegment1278 = createNode("HAnimSegment");
HAnimSegment1278.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid42.segments[152] = HAnimSegment1278;

HAnimSegment HAnimSegment1279 = createNode("HAnimSegment");
HAnimSegment1279.USE = "hanim_l_carpal_middle_phalanx_1";
HAnimHumanoid42.segments[153] = HAnimSegment1279;

HAnimSegment HAnimSegment1280 = createNode("HAnimSegment");
HAnimSegment1280.USE = "hanim_l_metacarpal_3";
HAnimHumanoid42.segments[154] = HAnimSegment1280;

HAnimSegment HAnimSegment1281 = createNode("HAnimSegment");
HAnimSegment1281.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid42.segments[155] = HAnimSegment1281;

HAnimSegment HAnimSegment1282 = createNode("HAnimSegment");
HAnimSegment1282.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid42.segments[156] = HAnimSegment1282;

HAnimSegment HAnimSegment1283 = createNode("HAnimSegment");
HAnimSegment1283.USE = "hanim_l_metacarpal_4";
HAnimHumanoid42.segments[157] = HAnimSegment1283;

HAnimSegment HAnimSegment1284 = createNode("HAnimSegment");
HAnimSegment1284.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid42.segments[158] = HAnimSegment1284;

HAnimSegment HAnimSegment1285 = createNode("HAnimSegment");
HAnimSegment1285.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid42.segments[159] = HAnimSegment1285;

HAnimSegment HAnimSegment1286 = createNode("HAnimSegment");
HAnimSegment1286.USE = "hanim_l_metacarpal_5";
HAnimHumanoid42.segments[160] = HAnimSegment1286;

HAnimSegment HAnimSegment1287 = createNode("HAnimSegment");
HAnimSegment1287.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid42.segments[161] = HAnimSegment1287;

HAnimSegment HAnimSegment1288 = createNode("HAnimSegment");
HAnimSegment1288.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid42.segments[162] = HAnimSegment1288;

HAnimSegment HAnimSegment1289 = createNode("HAnimSegment");
HAnimSegment1289.USE = "hanim_r_clavicle";
HAnimHumanoid42.segments[163] = HAnimSegment1289;

HAnimSegment HAnimSegment1290 = createNode("HAnimSegment");
HAnimSegment1290.USE = "hanim_r_scapula";
HAnimHumanoid42.segments[164] = HAnimSegment1290;

HAnimSegment HAnimSegment1291 = createNode("HAnimSegment");
HAnimSegment1291.USE = "hanim_r_upperarm";
HAnimHumanoid42.segments[165] = HAnimSegment1291;

HAnimSegment HAnimSegment1292 = createNode("HAnimSegment");
HAnimSegment1292.USE = "hanim_r_forearm";
HAnimHumanoid42.segments[166] = HAnimSegment1292;

HAnimSegment HAnimSegment1293 = createNode("HAnimSegment");
HAnimSegment1293.USE = "hanim_r_carpal";
HAnimHumanoid42.segments[167] = HAnimSegment1293;

HAnimSegment HAnimSegment1294 = createNode("HAnimSegment");
HAnimSegment1294.USE = "hanim_r_metacarpal_1";
HAnimHumanoid42.segments[168] = HAnimSegment1294;

HAnimSegment HAnimSegment1295 = createNode("HAnimSegment");
HAnimSegment1295.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid42.segments[169] = HAnimSegment1295;

HAnimSegment HAnimSegment1296 = createNode("HAnimSegment");
HAnimSegment1296.USE = "hanim_r_metacarpal_2";
HAnimHumanoid42.segments[170] = HAnimSegment1296;

HAnimSegment HAnimSegment1297 = createNode("HAnimSegment");
HAnimSegment1297.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid42.segments[171] = HAnimSegment1297;

HAnimSegment HAnimSegment1298 = createNode("HAnimSegment");
HAnimSegment1298.USE = "hanim_r_carpal_middle_phalanx_1";
HAnimHumanoid42.segments[172] = HAnimSegment1298;

HAnimSegment HAnimSegment1299 = createNode("HAnimSegment");
HAnimSegment1299.USE = "hanim_r_metacarpal_3";
HAnimHumanoid42.segments[173] = HAnimSegment1299;

HAnimSegment HAnimSegment1300 = createNode("HAnimSegment");
HAnimSegment1300.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid42.segments[174] = HAnimSegment1300;

HAnimSegment HAnimSegment1301 = createNode("HAnimSegment");
HAnimSegment1301.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid42.segments[175] = HAnimSegment1301;

HAnimSegment HAnimSegment1302 = createNode("HAnimSegment");
HAnimSegment1302.USE = "hanim_r_metacarpal_4";
HAnimHumanoid42.segments[176] = HAnimSegment1302;

HAnimSegment HAnimSegment1303 = createNode("HAnimSegment");
HAnimSegment1303.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid42.segments[177] = HAnimSegment1303;

HAnimSegment HAnimSegment1304 = createNode("HAnimSegment");
HAnimSegment1304.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid42.segments[178] = HAnimSegment1304;

HAnimSegment HAnimSegment1305 = createNode("HAnimSegment");
HAnimSegment1305.USE = "hanim_r_metacarpal_5";
HAnimHumanoid42.segments[179] = HAnimSegment1305;

HAnimSegment HAnimSegment1306 = createNode("HAnimSegment");
HAnimSegment1306.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid42.segments[180] = HAnimSegment1306;

HAnimSegment HAnimSegment1307 = createNode("HAnimSegment");
HAnimSegment1307.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid42.segments[181] = HAnimSegment1307;

HAnimJoint HAnimJoint1308 = createNode("HAnimJoint");
HAnimJoint1308.USE = "hanim_humanoid_root";
HAnimHumanoid42.joints[182] = HAnimJoint1308;

HAnimJoint HAnimJoint1309 = createNode("HAnimJoint");
HAnimJoint1309.USE = "hanim_sacroiliac";
HAnimHumanoid42.joints[183] = HAnimJoint1309;

HAnimJoint HAnimJoint1310 = createNode("HAnimJoint");
HAnimJoint1310.USE = "hanim_l_hip";
HAnimHumanoid42.joints[184] = HAnimJoint1310;

HAnimJoint HAnimJoint1311 = createNode("HAnimJoint");
HAnimJoint1311.USE = "hanim_l_knee";
HAnimHumanoid42.joints[185] = HAnimJoint1311;

HAnimJoint HAnimJoint1312 = createNode("HAnimJoint");
HAnimJoint1312.USE = "hanim_l_talocrural";
HAnimHumanoid42.joints[186] = HAnimJoint1312;

HAnimJoint HAnimJoint1313 = createNode("HAnimJoint");
HAnimJoint1313.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid42.joints[187] = HAnimJoint1313;

HAnimJoint HAnimJoint1314 = createNode("HAnimJoint");
HAnimJoint1314.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid42.joints[188] = HAnimJoint1314;

HAnimJoint HAnimJoint1315 = createNode("HAnimJoint");
HAnimJoint1315.USE = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimHumanoid42.joints[189] = HAnimJoint1315;

HAnimJoint HAnimJoint1316 = createNode("HAnimJoint");
HAnimJoint1316.USE = "hanim_r_hip";
HAnimHumanoid42.joints[190] = HAnimJoint1316;

HAnimJoint HAnimJoint1317 = createNode("HAnimJoint");
HAnimJoint1317.USE = "hanim_r_knee";
HAnimHumanoid42.joints[191] = HAnimJoint1317;

HAnimJoint HAnimJoint1318 = createNode("HAnimJoint");
HAnimJoint1318.USE = "hanim_r_talocrural";
HAnimHumanoid42.joints[192] = HAnimJoint1318;

HAnimJoint HAnimJoint1319 = createNode("HAnimJoint");
HAnimJoint1319.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid42.joints[193] = HAnimJoint1319;

HAnimJoint HAnimJoint1320 = createNode("HAnimJoint");
HAnimJoint1320.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid42.joints[194] = HAnimJoint1320;

HAnimJoint HAnimJoint1321 = createNode("HAnimJoint");
HAnimJoint1321.USE = "hanim_r_tarsal_distal_interphalangeal_1";
HAnimHumanoid42.joints[195] = HAnimJoint1321;

HAnimJoint HAnimJoint1322 = createNode("HAnimJoint");
HAnimJoint1322.USE = "hanim_vl5";
HAnimHumanoid42.joints[196] = HAnimJoint1322;

HAnimJoint HAnimJoint1323 = createNode("HAnimJoint");
HAnimJoint1323.USE = "hanim_vl4";
HAnimHumanoid42.joints[197] = HAnimJoint1323;

HAnimJoint HAnimJoint1324 = createNode("HAnimJoint");
HAnimJoint1324.USE = "hanim_vl3";
HAnimHumanoid42.joints[198] = HAnimJoint1324;

HAnimJoint HAnimJoint1325 = createNode("HAnimJoint");
HAnimJoint1325.USE = "hanim_vl2";
HAnimHumanoid42.joints[199] = HAnimJoint1325;

HAnimJoint HAnimJoint1326 = createNode("HAnimJoint");
HAnimJoint1326.USE = "hanim_vl1";
HAnimHumanoid42.joints[200] = HAnimJoint1326;

HAnimJoint HAnimJoint1327 = createNode("HAnimJoint");
HAnimJoint1327.USE = "hanim_vt12";
HAnimHumanoid42.joints[201] = HAnimJoint1327;

HAnimJoint HAnimJoint1328 = createNode("HAnimJoint");
HAnimJoint1328.USE = "hanim_vt11";
HAnimHumanoid42.joints[202] = HAnimJoint1328;

HAnimJoint HAnimJoint1329 = createNode("HAnimJoint");
HAnimJoint1329.USE = "hanim_vt10";
HAnimHumanoid42.joints[203] = HAnimJoint1329;

HAnimJoint HAnimJoint1330 = createNode("HAnimJoint");
HAnimJoint1330.USE = "hanim_vt9";
HAnimHumanoid42.joints[204] = HAnimJoint1330;

HAnimJoint HAnimJoint1331 = createNode("HAnimJoint");
HAnimJoint1331.USE = "hanim_vt8";
HAnimHumanoid42.joints[205] = HAnimJoint1331;

HAnimJoint HAnimJoint1332 = createNode("HAnimJoint");
HAnimJoint1332.USE = "hanim_vt7";
HAnimHumanoid42.joints[206] = HAnimJoint1332;

HAnimJoint HAnimJoint1333 = createNode("HAnimJoint");
HAnimJoint1333.USE = "hanim_vt6";
HAnimHumanoid42.joints[207] = HAnimJoint1333;

HAnimJoint HAnimJoint1334 = createNode("HAnimJoint");
HAnimJoint1334.USE = "hanim_vt5";
HAnimHumanoid42.joints[208] = HAnimJoint1334;

HAnimJoint HAnimJoint1335 = createNode("HAnimJoint");
HAnimJoint1335.USE = "hanim_vt4";
HAnimHumanoid42.joints[209] = HAnimJoint1335;

HAnimJoint HAnimJoint1336 = createNode("HAnimJoint");
HAnimJoint1336.USE = "hanim_vt3";
HAnimHumanoid42.joints[210] = HAnimJoint1336;

HAnimJoint HAnimJoint1337 = createNode("HAnimJoint");
HAnimJoint1337.USE = "hanim_vt2";
HAnimHumanoid42.joints[211] = HAnimJoint1337;

HAnimJoint HAnimJoint1338 = createNode("HAnimJoint");
HAnimJoint1338.USE = "hanim_vt1";
HAnimHumanoid42.joints[212] = HAnimJoint1338;

HAnimJoint HAnimJoint1339 = createNode("HAnimJoint");
HAnimJoint1339.USE = "hanim_vc7";
HAnimHumanoid42.joints[213] = HAnimJoint1339;

HAnimJoint HAnimJoint1340 = createNode("HAnimJoint");
HAnimJoint1340.USE = "hanim_vc6";
HAnimHumanoid42.joints[214] = HAnimJoint1340;

HAnimJoint HAnimJoint1341 = createNode("HAnimJoint");
HAnimJoint1341.USE = "hanim_vc5";
HAnimHumanoid42.joints[215] = HAnimJoint1341;

HAnimJoint HAnimJoint1342 = createNode("HAnimJoint");
HAnimJoint1342.USE = "hanim_vc4";
HAnimHumanoid42.joints[216] = HAnimJoint1342;

HAnimJoint HAnimJoint1343 = createNode("HAnimJoint");
HAnimJoint1343.USE = "hanim_vc3";
HAnimHumanoid42.joints[217] = HAnimJoint1343;

HAnimJoint HAnimJoint1344 = createNode("HAnimJoint");
HAnimJoint1344.USE = "hanim_vc2";
HAnimHumanoid42.joints[218] = HAnimJoint1344;

HAnimJoint HAnimJoint1345 = createNode("HAnimJoint");
HAnimJoint1345.USE = "hanim_vc1";
HAnimHumanoid42.joints[219] = HAnimJoint1345;

HAnimJoint HAnimJoint1346 = createNode("HAnimJoint");
HAnimJoint1346.USE = "hanim_skullbase";
HAnimHumanoid42.joints[220] = HAnimJoint1346;

HAnimJoint HAnimJoint1347 = createNode("HAnimJoint");
HAnimJoint1347.USE = "hanim_l_eyelid_joint";
HAnimHumanoid42.joints[221] = HAnimJoint1347;

HAnimJoint HAnimJoint1348 = createNode("HAnimJoint");
HAnimJoint1348.USE = "hanim_r_eyelid_joint";
HAnimHumanoid42.joints[222] = HAnimJoint1348;

HAnimJoint HAnimJoint1349 = createNode("HAnimJoint");
HAnimJoint1349.USE = "hanim_l_eyeball_joint";
HAnimHumanoid42.joints[223] = HAnimJoint1349;

HAnimJoint HAnimJoint1350 = createNode("HAnimJoint");
HAnimJoint1350.USE = "hanim_r_eyeball_joint";
HAnimHumanoid42.joints[224] = HAnimJoint1350;

HAnimJoint HAnimJoint1351 = createNode("HAnimJoint");
HAnimJoint1351.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid42.joints[225] = HAnimJoint1351;

HAnimJoint HAnimJoint1352 = createNode("HAnimJoint");
HAnimJoint1352.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid42.joints[226] = HAnimJoint1352;

HAnimJoint HAnimJoint1353 = createNode("HAnimJoint");
HAnimJoint1353.USE = "hanim_temporomandibular";
HAnimHumanoid42.joints[227] = HAnimJoint1353;

HAnimJoint HAnimJoint1354 = createNode("HAnimJoint");
HAnimJoint1354.USE = "hanim_l_sternoclavicular";
HAnimHumanoid42.joints[228] = HAnimJoint1354;

HAnimJoint HAnimJoint1355 = createNode("HAnimJoint");
HAnimJoint1355.USE = "hanim_l_acromioclavicular";
HAnimHumanoid42.joints[229] = HAnimJoint1355;

HAnimJoint HAnimJoint1356 = createNode("HAnimJoint");
HAnimJoint1356.USE = "hanim_l_shoulder";
HAnimHumanoid42.joints[230] = HAnimJoint1356;

HAnimJoint HAnimJoint1357 = createNode("HAnimJoint");
HAnimJoint1357.USE = "hanim_l_elbow";
HAnimHumanoid42.joints[231] = HAnimJoint1357;

HAnimJoint HAnimJoint1358 = createNode("HAnimJoint");
HAnimJoint1358.USE = "hanim_l_radiocarpal";
HAnimHumanoid42.joints[232] = HAnimJoint1358;

HAnimJoint HAnimJoint1359 = createNode("HAnimJoint");
HAnimJoint1359.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid42.joints[233] = HAnimJoint1359;

HAnimJoint HAnimJoint1360 = createNode("HAnimJoint");
HAnimJoint1360.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid42.joints[234] = HAnimJoint1360;

HAnimJoint HAnimJoint1361 = createNode("HAnimJoint");
HAnimJoint1361.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid42.joints[235] = HAnimJoint1361;

HAnimJoint HAnimJoint1362 = createNode("HAnimJoint");
HAnimJoint1362.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid42.joints[236] = HAnimJoint1362;

HAnimJoint HAnimJoint1363 = createNode("HAnimJoint");
HAnimJoint1363.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid42.joints[237] = HAnimJoint1363;

HAnimJoint HAnimJoint1364 = createNode("HAnimJoint");
HAnimJoint1364.USE = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[238] = HAnimJoint1364;

HAnimJoint HAnimJoint1365 = createNode("HAnimJoint");
HAnimJoint1365.USE = "hanim_l_carpal_distal_interphalangeal_1";
HAnimHumanoid42.joints[239] = HAnimJoint1365;

HAnimJoint HAnimJoint1366 = createNode("HAnimJoint");
HAnimJoint1366.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid42.joints[240] = HAnimJoint1366;

HAnimJoint HAnimJoint1367 = createNode("HAnimJoint");
HAnimJoint1367.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid42.joints[241] = HAnimJoint1367;

HAnimJoint HAnimJoint1368 = createNode("HAnimJoint");
HAnimJoint1368.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[242] = HAnimJoint1368;

HAnimJoint HAnimJoint1369 = createNode("HAnimJoint");
HAnimJoint1369.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid42.joints[243] = HAnimJoint1369;

HAnimJoint HAnimJoint1370 = createNode("HAnimJoint");
HAnimJoint1370.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid42.joints[244] = HAnimJoint1370;

HAnimJoint HAnimJoint1371 = createNode("HAnimJoint");
HAnimJoint1371.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid42.joints[245] = HAnimJoint1371;

HAnimJoint HAnimJoint1372 = createNode("HAnimJoint");
HAnimJoint1372.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[246] = HAnimJoint1372;

HAnimJoint HAnimJoint1373 = createNode("HAnimJoint");
HAnimJoint1373.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid42.joints[247] = HAnimJoint1373;

HAnimJoint HAnimJoint1374 = createNode("HAnimJoint");
HAnimJoint1374.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid42.joints[248] = HAnimJoint1374;

HAnimJoint HAnimJoint1375 = createNode("HAnimJoint");
HAnimJoint1375.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid42.joints[249] = HAnimJoint1375;

HAnimJoint HAnimJoint1376 = createNode("HAnimJoint");
HAnimJoint1376.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[250] = HAnimJoint1376;

HAnimJoint HAnimJoint1377 = createNode("HAnimJoint");
HAnimJoint1377.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid42.joints[251] = HAnimJoint1377;

HAnimJoint HAnimJoint1378 = createNode("HAnimJoint");
HAnimJoint1378.USE = "hanim_r_sternoclavicular";
HAnimHumanoid42.joints[252] = HAnimJoint1378;

HAnimJoint HAnimJoint1379 = createNode("HAnimJoint");
HAnimJoint1379.USE = "hanim_r_acromioclavicular";
HAnimHumanoid42.joints[253] = HAnimJoint1379;

HAnimJoint HAnimJoint1380 = createNode("HAnimJoint");
HAnimJoint1380.USE = "hanim_r_shoulder";
HAnimHumanoid42.joints[254] = HAnimJoint1380;

HAnimJoint HAnimJoint1381 = createNode("HAnimJoint");
HAnimJoint1381.USE = "hanim_r_elbow";
HAnimHumanoid42.joints[255] = HAnimJoint1381;

HAnimJoint HAnimJoint1382 = createNode("HAnimJoint");
HAnimJoint1382.USE = "hanim_r_radiocarpal";
HAnimHumanoid42.joints[256] = HAnimJoint1382;

HAnimJoint HAnimJoint1383 = createNode("HAnimJoint");
HAnimJoint1383.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid42.joints[257] = HAnimJoint1383;

HAnimJoint HAnimJoint1384 = createNode("HAnimJoint");
HAnimJoint1384.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid42.joints[258] = HAnimJoint1384;

HAnimJoint HAnimJoint1385 = createNode("HAnimJoint");
HAnimJoint1385.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid42.joints[259] = HAnimJoint1385;

HAnimJoint HAnimJoint1386 = createNode("HAnimJoint");
HAnimJoint1386.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid42.joints[260] = HAnimJoint1386;

HAnimJoint HAnimJoint1387 = createNode("HAnimJoint");
HAnimJoint1387.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid42.joints[261] = HAnimJoint1387;

HAnimJoint HAnimJoint1388 = createNode("HAnimJoint");
HAnimJoint1388.USE = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[262] = HAnimJoint1388;

HAnimJoint HAnimJoint1389 = createNode("HAnimJoint");
HAnimJoint1389.USE = "hanim_r_carpal_distal_interphalangeal_1";
HAnimHumanoid42.joints[263] = HAnimJoint1389;

HAnimJoint HAnimJoint1390 = createNode("HAnimJoint");
HAnimJoint1390.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid42.joints[264] = HAnimJoint1390;

HAnimJoint HAnimJoint1391 = createNode("HAnimJoint");
HAnimJoint1391.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid42.joints[265] = HAnimJoint1391;

HAnimJoint HAnimJoint1392 = createNode("HAnimJoint");
HAnimJoint1392.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[266] = HAnimJoint1392;

HAnimJoint HAnimJoint1393 = createNode("HAnimJoint");
HAnimJoint1393.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid42.joints[267] = HAnimJoint1393;

HAnimJoint HAnimJoint1394 = createNode("HAnimJoint");
HAnimJoint1394.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid42.joints[268] = HAnimJoint1394;

HAnimJoint HAnimJoint1395 = createNode("HAnimJoint");
HAnimJoint1395.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid42.joints[269] = HAnimJoint1395;

HAnimJoint HAnimJoint1396 = createNode("HAnimJoint");
HAnimJoint1396.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[270] = HAnimJoint1396;

HAnimJoint HAnimJoint1397 = createNode("HAnimJoint");
HAnimJoint1397.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid42.joints[271] = HAnimJoint1397;

HAnimJoint HAnimJoint1398 = createNode("HAnimJoint");
HAnimJoint1398.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid42.joints[272] = HAnimJoint1398;

HAnimJoint HAnimJoint1399 = createNode("HAnimJoint");
HAnimJoint1399.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid42.joints[273] = HAnimJoint1399;

HAnimJoint HAnimJoint1400 = createNode("HAnimJoint");
HAnimJoint1400.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[274] = HAnimJoint1400;

HAnimJoint HAnimJoint1401 = createNode("HAnimJoint");
HAnimJoint1401.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid42.joints[275] = HAnimJoint1401;

Coordinate Coordinate1402 = createNode("Coordinate");
Coordinate1402.DEF = "TheSkinCoord";
Coordinate1402.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
HAnimHumanoid42.skinCoord = Coordinate1402;

Shape Shape1403 = createNode("Shape");
Shape1403.DEF = "SkinShape";
Appearance Appearance1404 = createNode("Appearance");
Appearance1404.DEF = "SkinAppearance";
Material Material1405 = createNode("Material");
Material1405.DEF = "SkinMaterial";
Material1405.ambientIntensity = 0.6;
Material1405.diffuseColor = new SFColor(new float[1,1,1]);
Material1405.shininess = 0.6;
Material1405.transparency = 0.2;
Appearance1404.material = Material1405;

ImageTexture ImageTexture1406 = createNode("ImageTexture");
ImageTexture1406.DEF = "zBlueSpiralBkg2";
ImageTexture1406.description = "Blue Spiral Pattern";
ImageTexture1406.url = new MFString(new java.lang.String["./data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
Appearance1404.texture = ImageTexture1406;

Shape1403.appearance = Appearance1404;

IndexedFaceSet IndexedFaceSet1407 = createNode("IndexedFaceSet");
IndexedFaceSet1407.creaseAngle = 3.1;
IndexedFaceSet1407.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
Color Color1408 = createNode("Color");
Color1408.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet1407.color = Color1408;

Coordinate Coordinate1409 = createNode("Coordinate");
Coordinate1409.USE = "TheSkinCoord";
IndexedFaceSet1407.coord = Coordinate1409;

Shape1403.geometry = IndexedFaceSet1407;

HAnimHumanoid42.skin[276] = Shape1403;

children[4] = HAnimHumanoid42;

}
