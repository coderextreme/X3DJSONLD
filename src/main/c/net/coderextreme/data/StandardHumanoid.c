#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "StandardHumanoid.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "identifier";
meta3.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/StandardHumanoid.x3d";
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
Coordinate173.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0781,0.0283,-0.097]);
LineSet171.coord = Coordinate173;

Shape170.geometry = LineSet171;

HAnimSegment166.children[1] = Shape170;

Shape Shape174 = createNode("Shape");
LineSet LineSet175 = createNode("LineSet");
LineSet175.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA176 = createNode("ColorRGBA");
ColorRGBA176.USE = "HAnimSegmentLineColorRGBA";
LineSet175.color = ColorRGBA176;

Coordinate Coordinate177 = createNode("Coordinate");
Coordinate177.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.0889,0.0494,-0.1278]);
LineSet175.coord = Coordinate177;

Shape174.geometry = LineSet175;

HAnimSegment166.children[2] = Shape174;

HAnimJoint165.children = new MFNode();

HAnimJoint165.children[0] = HAnimSegment166;

HAnimJoint HAnimJoint178 = createNode("HAnimJoint");
HAnimJoint178.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint178.name = "l_talocalcaneonavicular";
HAnimJoint178.center = new SFVec3f(new float[0.0781,0.0283,-0.097]);
HAnimSegment HAnimSegment179 = createNode("HAnimSegment");
HAnimSegment179.DEF = "hanim_l_navicular";
HAnimSegment179.name = "l_navicular";
Transform Transform180 = createNode("Transform");
Transform180.translation = new SFVec3f(new float[0.0781,0.0283,-0.097]);
Transform Transform181 = createNode("Transform");
Shape Shape182 = createNode("Shape");
Shape182.USE = "HAnimJointShape";
Transform181.child = new undefined();

Transform181.child[0] = Shape182;

Transform180.children = new MFNode();

Transform180.children[0] = Transform181;

HAnimSegment179.children = new MFNode();

HAnimSegment179.children[0] = Transform180;

Shape Shape183 = createNode("Shape");
LineSet LineSet184 = createNode("LineSet");
LineSet184.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA185 = createNode("ColorRGBA");
ColorRGBA185.USE = "HAnimSegmentLineColorRGBA";
LineSet184.color = ColorRGBA185;

Coordinate Coordinate186 = createNode("Coordinate");
Coordinate186.point = new MFVec3f(new float[0.0781,0.0283,-0.097,0.0672,0.0235,-0.0835]);
LineSet184.coord = Coordinate186;

Shape183.geometry = LineSet184;

HAnimSegment179.children[1] = Shape183;

Shape Shape187 = createNode("Shape");
LineSet LineSet188 = createNode("LineSet");
LineSet188.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA189 = createNode("ColorRGBA");
ColorRGBA189.USE = "HAnimSegmentLineColorRGBA";
LineSet188.color = ColorRGBA189;

Coordinate Coordinate190 = createNode("Coordinate");
Coordinate190.point = new MFVec3f(new float[0.0781,0.0283,-0.097,0.0812,0.025,-0.0805]);
LineSet188.coord = Coordinate190;

Shape187.geometry = LineSet188;

HAnimSegment179.children[2] = Shape187;

Shape Shape191 = createNode("Shape");
LineSet LineSet192 = createNode("LineSet");
LineSet192.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA193 = createNode("ColorRGBA");
ColorRGBA193.USE = "HAnimSegmentLineColorRGBA";
LineSet192.color = ColorRGBA193;

Coordinate Coordinate194 = createNode("Coordinate");
Coordinate194.point = new MFVec3f(new float[0.0781,0.0283,-0.097,0.0928,0.0248,-0.0821]);
LineSet192.coord = Coordinate194;

Shape191.geometry = LineSet192;

HAnimSegment179.children[3] = Shape191;

HAnimJoint178.children = new MFNode();

HAnimJoint178.children[0] = HAnimSegment179;

HAnimJoint HAnimJoint195 = createNode("HAnimJoint");
HAnimJoint195.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint195.name = "l_cuneonavicular_1";
HAnimJoint195.center = new SFVec3f(new float[0.0672,0.0235,-0.0835]);
HAnimSegment HAnimSegment196 = createNode("HAnimSegment");
HAnimSegment196.DEF = "hanim_l_cuneiform_1";
HAnimSegment196.name = "l_cuneiform_1";
Transform Transform197 = createNode("Transform");
Transform197.translation = new SFVec3f(new float[0.0672,0.0235,-0.0835]);
Transform Transform198 = createNode("Transform");
Shape Shape199 = createNode("Shape");
Shape199.USE = "HAnimJointShape";
Transform198.child = new undefined();

Transform198.child[0] = Shape199;

Transform197.children = new MFNode();

Transform197.children[0] = Transform198;

HAnimSegment196.children = new MFNode();

HAnimSegment196.children[0] = Transform197;

Shape Shape200 = createNode("Shape");
LineSet LineSet201 = createNode("LineSet");
LineSet201.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA202 = createNode("ColorRGBA");
ColorRGBA202.USE = "HAnimSegmentLineColorRGBA";
LineSet201.color = ColorRGBA202;

Coordinate Coordinate203 = createNode("Coordinate");
Coordinate203.point = new MFVec3f(new float[0.0672,0.0235,-0.0835,0.0644,0.0147,-0.0577]);
LineSet201.coord = Coordinate203;

Shape200.geometry = LineSet201;

HAnimSegment196.children[1] = Shape200;

HAnimJoint195.children = new MFNode();

HAnimJoint195.children[0] = HAnimSegment196;

HAnimJoint HAnimJoint204 = createNode("HAnimJoint");
HAnimJoint204.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint204.name = "l_tarsometatarsal_1";
HAnimJoint204.center = new SFVec3f(new float[0.0644,0.0147,-0.0577]);
HAnimSegment HAnimSegment205 = createNode("HAnimSegment");
HAnimSegment205.DEF = "hanim_l_metatarsal_1";
HAnimSegment205.name = "l_metatarsal_1";
Transform Transform206 = createNode("Transform");
Transform206.translation = new SFVec3f(new float[0.0644,0.0147,-0.0577]);
Transform Transform207 = createNode("Transform");
Shape Shape208 = createNode("Shape");
Shape208.USE = "HAnimJointShape";
Transform207.child = new undefined();

Transform207.child[0] = Shape208;

Transform206.children = new MFNode();

Transform206.children[0] = Transform207;

HAnimSegment205.children = new MFNode();

HAnimSegment205.children[0] = Transform206;

Shape Shape209 = createNode("Shape");
LineSet LineSet210 = createNode("LineSet");
LineSet210.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA211 = createNode("ColorRGBA");
ColorRGBA211.USE = "HAnimSegmentLineColorRGBA";
LineSet210.color = ColorRGBA211;

Coordinate Coordinate212 = createNode("Coordinate");
Coordinate212.point = new MFVec3f(new float[0.0644,0.0147,-0.0577,0.0619,0.0059,-0.0083]);
LineSet210.coord = Coordinate212;

Shape209.geometry = LineSet210;

HAnimSegment205.children[1] = Shape209;

HAnimSite HAnimSite213 = createNode("HAnimSite");
HAnimSite213.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite213.name = "l_metatarsal_phalanx_1_pt";
TouchSensor TouchSensor214 = createNode("TouchSensor");
TouchSensor214.description = "HAnimSite l_metatarsal_phalanx_1_pt";
HAnimSite213.children = new MFNode();

HAnimSite213.children[0] = TouchSensor214;

Shape Shape215 = createNode("Shape");
Shape215.USE = "HAnimSiteShape";
HAnimSite213.children[1] = Shape215;

HAnimSegment205.children[2] = HAnimSite213;

HAnimJoint204.children = new MFNode();

HAnimJoint204.children[0] = HAnimSegment205;

HAnimJoint HAnimJoint216 = createNode("HAnimJoint");
HAnimJoint216.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint216.name = "l_metatarsophalangeal_1";
HAnimJoint216.center = new SFVec3f(new float[0.0619,0.0059,-0.0083]);
HAnimSegment HAnimSegment217 = createNode("HAnimSegment");
HAnimSegment217.DEF = "hanim_l_tarsal_proximal_phalanx_1";
HAnimSegment217.name = "l_tarsal_proximal_phalanx_1";
Transform Transform218 = createNode("Transform");
Transform218.translation = new SFVec3f(new float[0.0619,0.0059,-0.0083]);
Transform Transform219 = createNode("Transform");
Shape Shape220 = createNode("Shape");
Shape220.USE = "HAnimJointShape";
Transform219.child = new undefined();

Transform219.child[0] = Shape220;

Transform218.children = new MFNode();

Transform218.children[0] = Transform219;

HAnimSegment217.children = new MFNode();

HAnimSegment217.children[0] = Transform218;

Shape Shape221 = createNode("Shape");
LineSet LineSet222 = createNode("LineSet");
LineSet222.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA223 = createNode("ColorRGBA");
ColorRGBA223.USE = "HAnimSegmentLineColorRGBA";
LineSet222.color = ColorRGBA223;

Coordinate Coordinate224 = createNode("Coordinate");
Coordinate224.point = new MFVec3f(new float[0.0619,0.0059,-0.0083,0.0619,0.0059,-0.0083]);
LineSet222.coord = Coordinate224;

Shape221.geometry = LineSet222;

HAnimSegment217.children[1] = Shape221;

HAnimSite HAnimSite225 = createNode("HAnimSite");
HAnimSite225.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimSite225.name = "l_tarsal_distal_phalanx_1_tip";
TouchSensor TouchSensor226 = createNode("TouchSensor");
TouchSensor226.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite225.children = new MFNode();

HAnimSite225.children[0] = TouchSensor226;

Shape Shape227 = createNode("Shape");
Shape227.USE = "HAnimSiteShape";
HAnimSite225.children[1] = Shape227;

HAnimSegment217.children[2] = HAnimSite225;

HAnimJoint216.children = new MFNode();

HAnimJoint216.children[0] = HAnimSegment217;

HAnimJoint HAnimJoint228 = createNode("HAnimJoint");
HAnimJoint228.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint228.name = "l_tarsal_interphalangeal_1";
HAnimJoint216.children[1] = HAnimJoint228;

HAnimJoint204.children[1] = HAnimJoint216;

HAnimJoint195.children[1] = HAnimJoint204;

HAnimJoint178.children[1] = HAnimJoint195;

HAnimJoint HAnimJoint229 = createNode("HAnimJoint");
HAnimJoint229.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint229.name = "l_cuneonavicular_2";
HAnimJoint229.center = new SFVec3f(new float[0.0812,0.025,-0.0805]);
HAnimSegment HAnimSegment230 = createNode("HAnimSegment");
HAnimSegment230.DEF = "hanim_l_cuneiform_2";
HAnimSegment230.name = "l_cuneiform_2";
Transform Transform231 = createNode("Transform");
Transform231.translation = new SFVec3f(new float[0.0812,0.025,-0.0805]);
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
Coordinate237.point = new MFVec3f(new float[0.0812,0.025,-0.0805,0.08,0.0175,-0.0608]);
LineSet235.coord = Coordinate237;

Shape234.geometry = LineSet235;

HAnimSegment230.children[1] = Shape234;

HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

HAnimJoint HAnimJoint238 = createNode("HAnimJoint");
HAnimJoint238.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint238.name = "l_tarsometatarsal_2";
HAnimJoint238.center = new SFVec3f(new float[0.08,0.0175,-0.0608]);
HAnimSegment HAnimSegment239 = createNode("HAnimSegment");
HAnimSegment239.DEF = "hanim_l_metatarsal_2";
HAnimSegment239.name = "l_metatarsal_2";
Transform Transform240 = createNode("Transform");
Transform240.translation = new SFVec3f(new float[0.08,0.0175,-0.0608]);
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
Coordinate246.point = new MFVec3f(new float[0.08,0.0175,-0.0608,0.0824,0.0064,-0.004]);
LineSet244.coord = Coordinate246;

Shape243.geometry = LineSet244;

HAnimSegment239.children[1] = Shape243;

HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

HAnimJoint HAnimJoint247 = createNode("HAnimJoint");
HAnimJoint247.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint247.name = "l_metatarsophalangeal_2";
HAnimJoint247.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
HAnimSegment HAnimSegment248 = createNode("HAnimSegment");
HAnimSegment248.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSegment248.name = "l_tarsal_proximal_phalanx_2";
Transform Transform249 = createNode("Transform");
Transform249.translation = new SFVec3f(new float[0.0824,0.0064,-0.004]);
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
Coordinate255.point = new MFVec3f(new float[0.0824,0.0064,-0.004,0.0841,0.0041,0.0121]);
LineSet253.coord = Coordinate255;

Shape252.geometry = LineSet253;

HAnimSegment248.children[1] = Shape252;

HAnimJoint247.children = new MFNode();

HAnimJoint247.children[0] = HAnimSegment248;

HAnimJoint HAnimJoint256 = createNode("HAnimJoint");
HAnimJoint256.DEF = "hanim_l_tarsal_proximal_interphalangeal_1";
HAnimJoint256.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint256.center = new SFVec3f(new float[0.0841,0.0041,0.0121]);
HAnimSegment HAnimSegment257 = createNode("HAnimSegment");
HAnimSegment257.DEF = "hanim_l_tarsal_middle_phalanx_1";
HAnimSegment257.name = "l_tarsal_middle_phalanx_2";
Transform Transform258 = createNode("Transform");
Transform258.translation = new SFVec3f(new float[0.0841,0.0041,0.0121]);
Transform Transform259 = createNode("Transform");
Shape Shape260 = createNode("Shape");
Shape260.USE = "HAnimJointShape";
Transform259.child = new undefined();

Transform259.child[0] = Shape260;

Transform258.children = new MFNode();

Transform258.children[0] = Transform259;

HAnimSegment257.children = new MFNode();

HAnimSegment257.children[0] = Transform258;

Shape Shape261 = createNode("Shape");
LineSet LineSet262 = createNode("LineSet");
LineSet262.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA263 = createNode("ColorRGBA");
ColorRGBA263.USE = "HAnimSegmentLineColorRGBA";
LineSet262.color = ColorRGBA263;

Coordinate Coordinate264 = createNode("Coordinate");
Coordinate264.point = new MFVec3f(new float[0.0841,0.0041,0.0121,0.0841,0.0013,0.0216]);
LineSet262.coord = Coordinate264;

Shape261.geometry = LineSet262;

HAnimSegment257.children[1] = Shape261;

HAnimSite HAnimSite265 = createNode("HAnimSite");
HAnimSite265.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite265.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite265.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
TouchSensor TouchSensor266 = createNode("TouchSensor");
TouchSensor266.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite265.children = new MFNode();

HAnimSite265.children[0] = TouchSensor266;

Shape Shape267 = createNode("Shape");
Shape267.USE = "HAnimSiteShape";
HAnimSite265.children[1] = Shape267;

HAnimSegment257.children[2] = HAnimSite265;

HAnimJoint256.children = new MFNode();

HAnimJoint256.children[0] = HAnimSegment257;

HAnimJoint HAnimJoint268 = createNode("HAnimJoint");
HAnimJoint268.DEF = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimJoint268.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint268.center = new SFVec3f(new float[0.0841,0.0013,0.0216]);
HAnimJoint256.children[1] = HAnimJoint268;

HAnimJoint247.children[1] = HAnimJoint256;

HAnimJoint238.children[1] = HAnimJoint247;

HAnimJoint229.children[1] = HAnimJoint238;

HAnimJoint178.children[2] = HAnimJoint229;

HAnimJoint HAnimJoint269 = createNode("HAnimJoint");
HAnimJoint269.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint269.name = "l_cuneonavicular_3";
HAnimJoint269.center = new SFVec3f(new float[0.0928,0.0248,-0.0821]);
HAnimSegment HAnimSegment270 = createNode("HAnimSegment");
HAnimSegment270.DEF = "hanim_l_cuneiform_3";
HAnimSegment270.name = "l_cuneiform_3";
Transform Transform271 = createNode("Transform");
Transform271.translation = new SFVec3f(new float[0.0928,0.0248,-0.0821]);
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
Coordinate277.point = new MFVec3f(new float[0.0928,0.0248,-0.0821,0.0944,0.0175,-0.0625]);
LineSet275.coord = Coordinate277;

Shape274.geometry = LineSet275;

HAnimSegment270.children[1] = Shape274;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

HAnimJoint HAnimJoint278 = createNode("HAnimJoint");
HAnimJoint278.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint278.name = "l_tarsometatarsal_3";
HAnimJoint278.center = new SFVec3f(new float[0.0944,0.0175,-0.0625]);
HAnimSegment HAnimSegment279 = createNode("HAnimSegment");
HAnimSegment279.DEF = "hanim_l_metatarsal_3";
HAnimSegment279.name = "l_metatarsal_3";
Transform Transform280 = createNode("Transform");
Transform280.translation = new SFVec3f(new float[0.0944,0.0175,-0.0625]);
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
Coordinate286.point = new MFVec3f(new float[0.0944,0.0175,-0.0625,0.0963,0.0065,-0.0065]);
LineSet284.coord = Coordinate286;

Shape283.geometry = LineSet284;

HAnimSegment279.children[1] = Shape283;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

HAnimJoint HAnimJoint287 = createNode("HAnimJoint");
HAnimJoint287.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint287.name = "l_metatarsophalangeal_3";
HAnimJoint287.center = new SFVec3f(new float[0.0963,0.0065,-0.0065]);
HAnimSegment HAnimSegment288 = createNode("HAnimSegment");
HAnimSegment288.DEF = "hanim_l_tarsal_proximal_phalanx_3";
HAnimSegment288.name = "l_tarsal_proximal_phalanx_3";
Transform Transform289 = createNode("Transform");
Transform289.translation = new SFVec3f(new float[0.0963,0.0065,-0.0065]);
Transform Transform290 = createNode("Transform");
Shape Shape291 = createNode("Shape");
Shape291.USE = "HAnimJointShape";
Transform290.child = new undefined();

Transform290.child[0] = Shape291;

Transform289.children = new MFNode();

Transform289.children[0] = Transform290;

HAnimSegment288.children = new MFNode();

HAnimSegment288.children[0] = Transform289;

Shape Shape292 = createNode("Shape");
LineSet LineSet293 = createNode("LineSet");
LineSet293.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA294 = createNode("ColorRGBA");
ColorRGBA294.USE = "HAnimSegmentLineColorRGBA";
LineSet293.color = ColorRGBA294;

Coordinate Coordinate295 = createNode("Coordinate");
Coordinate295.point = new MFVec3f(new float[0.0963,0.0065,-0.0065,0.0987,0.0034,0.0086]);
LineSet293.coord = Coordinate295;

Shape292.geometry = LineSet293;

HAnimSegment288.children[1] = Shape292;

HAnimJoint287.children = new MFNode();

HAnimJoint287.children[0] = HAnimSegment288;

HAnimJoint HAnimJoint296 = createNode("HAnimJoint");
HAnimJoint296.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint296.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint296.center = new SFVec3f(new float[0.0987,0.0034,0.0086]);
HAnimSegment HAnimSegment297 = createNode("HAnimSegment");
HAnimSegment297.DEF = "hanim_l_tarsal_middle_phalanx_2";
HAnimSegment297.name = "l_tarsal_middle_phalanx_3";
Transform Transform298 = createNode("Transform");
Transform298.translation = new SFVec3f(new float[0.0987,0.0034,0.0086]);
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
Coordinate304.point = new MFVec3f(new float[0.0987,0.0034,0.0086,0.1002,0.0013,0.0178]);
LineSet302.coord = Coordinate304;

Shape301.geometry = LineSet302;

HAnimSegment297.children[1] = Shape301;

HAnimSite HAnimSite305 = createNode("HAnimSite");
HAnimSite305.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimSite305.name = "l_tarsal_distal_phalanx_3_tip";
TouchSensor TouchSensor306 = createNode("TouchSensor");
TouchSensor306.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite305.children = new MFNode();

HAnimSite305.children[0] = TouchSensor306;

Shape Shape307 = createNode("Shape");
Shape307.USE = "HAnimSiteShape";
HAnimSite305.children[1] = Shape307;

HAnimSegment297.children[2] = HAnimSite305;

HAnimJoint296.children = new MFNode();

HAnimJoint296.children[0] = HAnimSegment297;

HAnimJoint HAnimJoint308 = createNode("HAnimJoint");
HAnimJoint308.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint308.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint308.center = new SFVec3f(new float[0.1002,0.0013,0.0178]);
HAnimJoint296.children[1] = HAnimJoint308;

HAnimJoint287.children[1] = HAnimJoint296;

HAnimJoint278.children[1] = HAnimJoint287;

HAnimJoint269.children[1] = HAnimJoint278;

HAnimJoint178.children[3] = HAnimJoint269;

HAnimJoint165.children[1] = HAnimJoint178;

HAnimJoint HAnimJoint309 = createNode("HAnimJoint");
HAnimJoint309.DEF = "hanim_l_calcaneocuboid";
HAnimJoint309.name = "l_calcaneocuboid";
HAnimJoint309.center = new SFVec3f(new float[0.0889,0.0494,-0.1278]);
HAnimSegment HAnimSegment310 = createNode("HAnimSegment");
HAnimSegment310.DEF = "hanim_l_calcaneus";
HAnimSegment310.name = "l_calcaneus";
Transform Transform311 = createNode("Transform");
Transform311.translation = new SFVec3f(new float[0.0889,0.0494,-0.1278]);
Transform Transform312 = createNode("Transform");
Shape Shape313 = createNode("Shape");
Shape313.USE = "HAnimJointShape";
Transform312.child = new undefined();

Transform312.child[0] = Shape313;

Transform311.children = new MFNode();

Transform311.children[0] = Transform312;

HAnimSegment310.children = new MFNode();

HAnimSegment310.children[0] = Transform311;

Shape Shape314 = createNode("Shape");
LineSet LineSet315 = createNode("LineSet");
LineSet315.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA316 = createNode("ColorRGBA");
ColorRGBA316.USE = "HAnimSegmentLineColorRGBA";
LineSet315.color = ColorRGBA316;

Coordinate Coordinate317 = createNode("Coordinate");
Coordinate317.point = new MFVec3f(new float[0.0889,0.0494,-0.1278,0.1105,0.0267,-0.0998]);
LineSet315.coord = Coordinate317;

Shape314.geometry = LineSet315;

HAnimSegment310.children[1] = Shape314;

HAnimJoint309.children = new MFNode();

HAnimJoint309.children[0] = HAnimSegment310;

HAnimJoint HAnimJoint318 = createNode("HAnimJoint");
HAnimJoint318.DEF = "hanim_l_transversetarsal";
HAnimJoint318.name = "l_transversetarsal";
HAnimJoint318.center = new SFVec3f(new float[0.1105,0.0267,-0.0998]);
HAnimSegment HAnimSegment319 = createNode("HAnimSegment");
HAnimSegment319.DEF = "hanim_l_cuboid";
HAnimSegment319.name = "l_cuboid";
Transform Transform320 = createNode("Transform");
Transform320.translation = new SFVec3f(new float[0.1105,0.0267,-0.0998]);
Transform Transform321 = createNode("Transform");
Shape Shape322 = createNode("Shape");
Shape322.USE = "HAnimJointShape";
Transform321.child = new undefined();

Transform321.child[0] = Shape322;

Transform320.children = new MFNode();

Transform320.children[0] = Transform321;

HAnimSegment319.children = new MFNode();

HAnimSegment319.children[0] = Transform320;

Shape Shape323 = createNode("Shape");
LineSet LineSet324 = createNode("LineSet");
LineSet324.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA325 = createNode("ColorRGBA");
ColorRGBA325.USE = "HAnimSegmentLineColorRGBA";
LineSet324.color = ColorRGBA325;

Coordinate Coordinate326 = createNode("Coordinate");
Coordinate326.point = new MFVec3f(new float[0.1105,0.0267,-0.0998,0.1063,0.016,-0.0634]);
LineSet324.coord = Coordinate326;

Shape323.geometry = LineSet324;

HAnimSegment319.children[1] = Shape323;

Shape Shape327 = createNode("Shape");
LineSet LineSet328 = createNode("LineSet");
LineSet328.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA329 = createNode("ColorRGBA");
ColorRGBA329.USE = "HAnimSegmentLineColorRGBA";
LineSet328.color = ColorRGBA329;

Coordinate Coordinate330 = createNode("Coordinate");
Coordinate330.point = new MFVec3f(new float[0.1105,0.0267,-0.0998,0.1206,0.0124,-0.0671]);
LineSet328.coord = Coordinate330;

Shape327.geometry = LineSet328;

HAnimSegment319.children[2] = Shape327;

HAnimJoint318.children = new MFNode();

HAnimJoint318.children[0] = HAnimSegment319;

HAnimJoint HAnimJoint331 = createNode("HAnimJoint");
HAnimJoint331.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint331.name = "l_tarsometatarsal_4";
HAnimJoint331.center = new SFVec3f(new float[0.1063,0.016,-0.0634]);
HAnimSegment HAnimSegment332 = createNode("HAnimSegment");
HAnimSegment332.DEF = "hanim_l_metatarsal_4";
HAnimSegment332.name = "l_metatarsal_4";
Transform Transform333 = createNode("Transform");
Transform333.translation = new SFVec3f(new float[0.1063,0.016,-0.0634]);
Transform Transform334 = createNode("Transform");
Shape Shape335 = createNode("Shape");
Shape335.USE = "HAnimJointShape";
Transform334.child = new undefined();

Transform334.child[0] = Shape335;

Transform333.children = new MFNode();

Transform333.children[0] = Transform334;

HAnimSegment332.children = new MFNode();

HAnimSegment332.children[0] = Transform333;

Shape Shape336 = createNode("Shape");
LineSet LineSet337 = createNode("LineSet");
LineSet337.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA338 = createNode("ColorRGBA");
ColorRGBA338.USE = "HAnimSegmentLineColorRGBA";
LineSet337.color = ColorRGBA338;

Coordinate Coordinate339 = createNode("Coordinate");
Coordinate339.point = new MFVec3f(new float[0.1063,0.016,-0.0634,0.1097,0.0058,-0.0107]);
LineSet337.coord = Coordinate339;

Shape336.geometry = LineSet337;

HAnimSegment332.children[1] = Shape336;

HAnimJoint331.children = new MFNode();

HAnimJoint331.children[0] = HAnimSegment332;

HAnimJoint HAnimJoint340 = createNode("HAnimJoint");
HAnimJoint340.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint340.name = "l_metatarsophalangeal_4";
HAnimJoint340.center = new SFVec3f(new float[0.1097,0.0058,-0.0107]);
HAnimSegment HAnimSegment341 = createNode("HAnimSegment");
HAnimSegment341.DEF = "hanim_l_tarsal_proximal_phalanx_4";
HAnimSegment341.name = "l_tarsal_proximal_phalanx_4";
Transform Transform342 = createNode("Transform");
Transform342.translation = new SFVec3f(new float[0.1097,0.0058,-0.0107]);
Transform Transform343 = createNode("Transform");
Shape Shape344 = createNode("Shape");
Shape344.USE = "HAnimJointShape";
Transform343.child = new undefined();

Transform343.child[0] = Shape344;

Transform342.children = new MFNode();

Transform342.children[0] = Transform343;

HAnimSegment341.children = new MFNode();

HAnimSegment341.children[0] = Transform342;

Shape Shape345 = createNode("Shape");
LineSet LineSet346 = createNode("LineSet");
LineSet346.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA347 = createNode("ColorRGBA");
ColorRGBA347.USE = "HAnimSegmentLineColorRGBA";
LineSet346.color = ColorRGBA347;

Coordinate Coordinate348 = createNode("Coordinate");
Coordinate348.point = new MFVec3f(new float[0.1097,0.0058,-0.0107,0.114,0.0037,0.0044]);
LineSet346.coord = Coordinate348;

Shape345.geometry = LineSet346;

HAnimSegment341.children[1] = Shape345;

HAnimJoint340.children = new MFNode();

HAnimJoint340.children[0] = HAnimSegment341;

HAnimJoint HAnimJoint349 = createNode("HAnimJoint");
HAnimJoint349.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint349.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint349.center = new SFVec3f(new float[0.114,0.0037,0.0044]);
HAnimSegment HAnimSegment350 = createNode("HAnimSegment");
HAnimSegment350.DEF = "hanim_l_tarsal_middle_phalanx_3";
HAnimSegment350.name = "l_tarsal_middle_phalanx_4";
Transform Transform351 = createNode("Transform");
Transform351.translation = new SFVec3f(new float[0.114,0.0037,0.0044]);
Transform Transform352 = createNode("Transform");
Shape Shape353 = createNode("Shape");
Shape353.USE = "HAnimJointShape";
Transform352.child = new undefined();

Transform352.child[0] = Shape353;

Transform351.children = new MFNode();

Transform351.children[0] = Transform352;

HAnimSegment350.children = new MFNode();

HAnimSegment350.children[0] = Transform351;

Shape Shape354 = createNode("Shape");
LineSet LineSet355 = createNode("LineSet");
LineSet355.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA356 = createNode("ColorRGBA");
ColorRGBA356.USE = "HAnimSegmentLineColorRGBA";
LineSet355.color = ColorRGBA356;

Coordinate Coordinate357 = createNode("Coordinate");
Coordinate357.point = new MFVec3f(new float[0.114,0.0037,0.0044,0.1155,0.0008,0.0118]);
LineSet355.coord = Coordinate357;

Shape354.geometry = LineSet355;

HAnimSegment350.children[1] = Shape354;

HAnimSite HAnimSite358 = createNode("HAnimSite");
HAnimSite358.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimSite358.name = "l_tarsal_distal_phalanx_4_tip";
TouchSensor TouchSensor359 = createNode("TouchSensor");
TouchSensor359.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite358.children = new MFNode();

HAnimSite358.children[0] = TouchSensor359;

Shape Shape360 = createNode("Shape");
Shape360.USE = "HAnimSiteShape";
HAnimSite358.children[1] = Shape360;

HAnimSegment350.children[2] = HAnimSite358;

HAnimJoint349.children = new MFNode();

HAnimJoint349.children[0] = HAnimSegment350;

HAnimJoint HAnimJoint361 = createNode("HAnimJoint");
HAnimJoint361.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint361.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint361.center = new SFVec3f(new float[0.1155,0.0008,0.0118]);
HAnimJoint349.children[1] = HAnimJoint361;

HAnimJoint340.children[1] = HAnimJoint349;

HAnimJoint331.children[1] = HAnimJoint340;

HAnimJoint318.children[1] = HAnimJoint331;

HAnimJoint HAnimJoint362 = createNode("HAnimJoint");
HAnimJoint362.DEF = "hanim_l_tarsometatarsal_5";
HAnimJoint362.name = "l_tarsometatarsal_5";
HAnimJoint362.center = new SFVec3f(new float[0.1206,0.0124,-0.0671]);
HAnimSegment HAnimSegment363 = createNode("HAnimSegment");
HAnimSegment363.DEF = "hanim_l_metatarsal_5";
HAnimSegment363.name = "l_metatarsal_5";
Transform Transform364 = createNode("Transform");
Transform364.translation = new SFVec3f(new float[0.1206,0.0124,-0.0671]);
Transform Transform365 = createNode("Transform");
Shape Shape366 = createNode("Shape");
Shape366.USE = "HAnimJointShape";
Transform365.child = new undefined();

Transform365.child[0] = Shape366;

Transform364.children = new MFNode();

Transform364.children[0] = Transform365;

HAnimSegment363.children = new MFNode();

HAnimSegment363.children[0] = Transform364;

Shape Shape367 = createNode("Shape");
LineSet LineSet368 = createNode("LineSet");
LineSet368.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA369 = createNode("ColorRGBA");
ColorRGBA369.USE = "HAnimSegmentLineColorRGBA";
LineSet368.color = ColorRGBA369;

Coordinate Coordinate370 = createNode("Coordinate");
Coordinate370.point = new MFVec3f(new float[0.1206,0.0124,-0.0671,0.1239,0.0051,-0.0153]);
LineSet368.coord = Coordinate370;

Shape367.geometry = LineSet368;

HAnimSegment363.children[1] = Shape367;

HAnimSite HAnimSite371 = createNode("HAnimSite");
HAnimSite371.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite371.name = "l_metatarsal_phalanx_5_pt";
TouchSensor TouchSensor372 = createNode("TouchSensor");
TouchSensor372.description = "HAnimSite l_metatarsal_phalanx_5_pt";
HAnimSite371.children = new MFNode();

HAnimSite371.children[0] = TouchSensor372;

Shape Shape373 = createNode("Shape");
Shape373.USE = "HAnimSiteShape";
HAnimSite371.children[1] = Shape373;

HAnimSegment363.children[2] = HAnimSite371;

HAnimJoint362.children = new MFNode();

HAnimJoint362.children[0] = HAnimSegment363;

HAnimJoint HAnimJoint374 = createNode("HAnimJoint");
HAnimJoint374.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint374.name = "l_metatarsophalangeal_5";
HAnimJoint374.center = new SFVec3f(new float[0.1239,0.0051,-0.0153]);
HAnimSegment HAnimSegment375 = createNode("HAnimSegment");
HAnimSegment375.DEF = "hanim_l_tarsal_proximal_phalanx_5";
HAnimSegment375.name = "l_tarsal_proximal_phalanx_5";
Transform Transform376 = createNode("Transform");
Transform376.translation = new SFVec3f(new float[0.1239,0.0051,-0.0153]);
Transform Transform377 = createNode("Transform");
Shape Shape378 = createNode("Shape");
Shape378.USE = "HAnimJointShape";
Transform377.child = new undefined();

Transform377.child[0] = Shape378;

Transform376.children = new MFNode();

Transform376.children[0] = Transform377;

HAnimSegment375.children = new MFNode();

HAnimSegment375.children[0] = Transform376;

Shape Shape379 = createNode("Shape");
LineSet LineSet380 = createNode("LineSet");
LineSet380.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA381 = createNode("ColorRGBA");
ColorRGBA381.USE = "HAnimSegmentLineColorRGBA";
LineSet380.color = ColorRGBA381;

Coordinate Coordinate382 = createNode("Coordinate");
Coordinate382.point = new MFVec3f(new float[0.1239,0.0051,-0.0153,0.1262,0.0023,-0.0077]);
LineSet380.coord = Coordinate382;

Shape379.geometry = LineSet380;

HAnimSegment375.children[1] = Shape379;

HAnimJoint374.children = new MFNode();

HAnimJoint374.children[0] = HAnimSegment375;

HAnimJoint HAnimJoint383 = createNode("HAnimJoint");
HAnimJoint383.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint383.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint383.center = new SFVec3f(new float[0.1262,0.0023,-0.0077]);
HAnimSegment HAnimSegment384 = createNode("HAnimSegment");
HAnimSegment384.DEF = "hanim_l_tarsal_middle_phalanx_4";
HAnimSegment384.name = "l_tarsal_middle_phalanx_5";
Transform Transform385 = createNode("Transform");
Transform385.translation = new SFVec3f(new float[0.1262,0.0023,-0.0077]);
Transform Transform386 = createNode("Transform");
Shape Shape387 = createNode("Shape");
Shape387.USE = "HAnimJointShape";
Transform386.child = new undefined();

Transform386.child[0] = Shape387;

Transform385.children = new MFNode();

Transform385.children[0] = Transform386;

HAnimSegment384.children = new MFNode();

HAnimSegment384.children[0] = Transform385;

Shape Shape388 = createNode("Shape");
LineSet LineSet389 = createNode("LineSet");
LineSet389.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA390 = createNode("ColorRGBA");
ColorRGBA390.USE = "HAnimSegmentLineColorRGBA";
LineSet389.color = ColorRGBA390;

Coordinate Coordinate391 = createNode("Coordinate");
Coordinate391.point = new MFVec3f(new float[0.1262,0.0023,-0.0077,0.1271,0,0]);
LineSet389.coord = Coordinate391;

Shape388.geometry = LineSet389;

HAnimSegment384.children[1] = Shape388;

HAnimSite HAnimSite392 = createNode("HAnimSite");
HAnimSite392.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimSite392.name = "l_tarsal_distal_phalanx_5_tip";
TouchSensor TouchSensor393 = createNode("TouchSensor");
TouchSensor393.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite392.children = new MFNode();

HAnimSite392.children[0] = TouchSensor393;

Shape Shape394 = createNode("Shape");
Shape394.USE = "HAnimSiteShape";
HAnimSite392.children[1] = Shape394;

HAnimSegment384.children[2] = HAnimSite392;

HAnimJoint383.children = new MFNode();

HAnimJoint383.children[0] = HAnimSegment384;

HAnimJoint HAnimJoint395 = createNode("HAnimJoint");
HAnimJoint395.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint395.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint395.center = new SFVec3f(new float[0.1271,0,0]);
HAnimJoint383.children[1] = HAnimJoint395;

HAnimJoint374.children[1] = HAnimJoint383;

HAnimJoint362.children[1] = HAnimJoint374;

HAnimJoint318.children[2] = HAnimJoint362;

HAnimJoint309.children[1] = HAnimJoint318;

HAnimJoint165.children[2] = HAnimJoint309;

HAnimJoint150.children[1] = HAnimJoint165;

HAnimJoint132.children[1] = HAnimJoint150;

HAnimJoint95.children[1] = HAnimJoint132;

HAnimJoint HAnimJoint396 = createNode("HAnimJoint");
HAnimJoint396.DEF = "hanim_r_hip";
HAnimJoint396.name = "r_hip";
HAnimJoint396.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
HAnimSegment HAnimSegment397 = createNode("HAnimSegment");
HAnimSegment397.DEF = "hanim_r_thigh";
HAnimSegment397.name = "r_thigh";
Transform Transform398 = createNode("Transform");
Transform398.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
Transform Transform399 = createNode("Transform");
Shape Shape400 = createNode("Shape");
Shape400.USE = "HAnimJointShape";
Transform399.child = new undefined();

Transform399.child[0] = Shape400;

Transform398.children = new MFNode();

Transform398.children[0] = Transform399;

HAnimSegment397.children = new MFNode();

HAnimSegment397.children[0] = Transform398;

Shape Shape401 = createNode("Shape");
LineSet LineSet402 = createNode("LineSet");
LineSet402.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA403 = createNode("ColorRGBA");
ColorRGBA403.USE = "HAnimSegmentLineColorRGBA";
LineSet402.color = ColorRGBA403;

Coordinate Coordinate404 = createNode("Coordinate");
Coordinate404.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet402.coord = Coordinate404;

Shape401.geometry = LineSet402;

HAnimSegment397.children[1] = Shape401;

HAnimSite HAnimSite405 = createNode("HAnimSite");
HAnimSite405.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite405.name = "r_lateral_malleolus_pt";
HAnimSite405.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
TouchSensor TouchSensor406 = createNode("TouchSensor");
TouchSensor406.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite405.children = new MFNode();

HAnimSite405.children[0] = TouchSensor406;

Shape Shape407 = createNode("Shape");
Shape407.USE = "HAnimSiteShape";
HAnimSite405.children[1] = Shape407;

HAnimSegment397.children[2] = HAnimSite405;

HAnimSite HAnimSite408 = createNode("HAnimSite");
HAnimSite408.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite408.name = "r_medial_malleolus_pt";
HAnimSite408.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
TouchSensor TouchSensor409 = createNode("TouchSensor");
TouchSensor409.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite408.children = new MFNode();

HAnimSite408.children[0] = TouchSensor409;

Shape Shape410 = createNode("Shape");
Shape410.USE = "HAnimSiteShape";
HAnimSite408.children[1] = Shape410;

HAnimSegment397.children[3] = HAnimSite408;

HAnimSite HAnimSite411 = createNode("HAnimSite");
HAnimSite411.DEF = "hanim_r_tibiale_pt";
HAnimSite411.name = "r_tibiale_pt";
TouchSensor TouchSensor412 = createNode("TouchSensor");
TouchSensor412.description = "HAnimSite r_tibiale_pt";
HAnimSite411.children = new MFNode();

HAnimSite411.children[0] = TouchSensor412;

Shape Shape413 = createNode("Shape");
Shape413.USE = "HAnimSiteShape";
HAnimSite411.children[1] = Shape413;

HAnimSegment397.children[4] = HAnimSite411;

HAnimJoint396.children = new MFNode();

HAnimJoint396.children[0] = HAnimSegment397;

HAnimJoint HAnimJoint414 = createNode("HAnimJoint");
HAnimJoint414.DEF = "hanim_r_knee";
HAnimJoint414.name = "r_knee";
HAnimJoint414.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
HAnimSegment HAnimSegment415 = createNode("HAnimSegment");
HAnimSegment415.DEF = "hanim_r_calf";
HAnimSegment415.name = "r_calf";
Transform Transform416 = createNode("Transform");
Transform416.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
Transform Transform417 = createNode("Transform");
Shape Shape418 = createNode("Shape");
Shape418.USE = "HAnimJointShape";
Transform417.child = new undefined();

Transform417.child[0] = Shape418;

Transform416.children = new MFNode();

Transform416.children[0] = Transform417;

HAnimSegment415.children = new MFNode();

HAnimSegment415.children[0] = Transform416;

Shape Shape419 = createNode("Shape");
LineSet LineSet420 = createNode("LineSet");
LineSet420.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA421 = createNode("ColorRGBA");
ColorRGBA421.USE = "HAnimSegmentLineColorRGBA";
LineSet420.color = ColorRGBA421;

Coordinate Coordinate422 = createNode("Coordinate");
Coordinate422.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet420.coord = Coordinate422;

Shape419.geometry = LineSet420;

HAnimSegment415.children[1] = Shape419;

HAnimSite HAnimSite423 = createNode("HAnimSite");
HAnimSite423.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite423.name = "r_calcaneus_posterior_pt";
HAnimSite423.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
TouchSensor TouchSensor424 = createNode("TouchSensor");
TouchSensor424.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite423.children = new MFNode();

HAnimSite423.children[0] = TouchSensor424;

Shape Shape425 = createNode("Shape");
Shape425.USE = "HAnimSiteShape";
HAnimSite423.children[1] = Shape425;

HAnimSegment415.children[2] = HAnimSite423;

HAnimSite HAnimSite426 = createNode("HAnimSite");
HAnimSite426.DEF = "hanim_r_sphyrion_pt";
HAnimSite426.name = "r_sphyrion_pt";
HAnimSite426.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
TouchSensor TouchSensor427 = createNode("TouchSensor");
TouchSensor427.description = "HAnimSite r_sphyrion_pt";
HAnimSite426.children = new MFNode();

HAnimSite426.children[0] = TouchSensor427;

Shape Shape428 = createNode("Shape");
Shape428.USE = "HAnimSiteShape";
HAnimSite426.children[1] = Shape428;

HAnimSegment415.children[3] = HAnimSite426;

HAnimJoint414.children = new MFNode();

HAnimJoint414.children[0] = HAnimSegment415;

HAnimJoint HAnimJoint429 = createNode("HAnimJoint");
HAnimJoint429.DEF = "hanim_r_talocrural";
HAnimJoint429.name = "r_talocrural";
HAnimJoint429.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
HAnimSegment HAnimSegment430 = createNode("HAnimSegment");
HAnimSegment430.DEF = "hanim_r_talus";
HAnimSegment430.name = "r_talus";
Transform Transform431 = createNode("Transform");
Transform431.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform431.rotation = new SFRotation(new float[1,0,0,-1.57]);
Transform431.scale = new SFVec3f(new float[0.15,0.15,0.15]);
Transform Transform432 = createNode("Transform");
Shape Shape433 = createNode("Shape");
Shape433.USE = "HAnimJointShape";
Transform432.child = new undefined();

Transform432.child[0] = Shape433;

Transform431.children = new MFNode();

Transform431.children[0] = Transform432;

HAnimSegment430.children = new MFNode();

HAnimSegment430.children[0] = Transform431;

Shape Shape434 = createNode("Shape");
LineSet LineSet435 = createNode("LineSet");
LineSet435.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA436 = createNode("ColorRGBA");
ColorRGBA436.USE = "HAnimSegmentLineColorRGBA";
LineSet435.color = ColorRGBA436;

Coordinate Coordinate437 = createNode("Coordinate");
Coordinate437.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0781,0.0283,-0.097]);
LineSet435.coord = Coordinate437;

Shape434.geometry = LineSet435;

HAnimSegment430.children[1] = Shape434;

Shape Shape438 = createNode("Shape");
LineSet LineSet439 = createNode("LineSet");
LineSet439.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA440 = createNode("ColorRGBA");
ColorRGBA440.USE = "HAnimSegmentLineColorRGBA";
LineSet439.color = ColorRGBA440;

Coordinate Coordinate441 = createNode("Coordinate");
Coordinate441.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.0889,0.0494,-0.1278]);
LineSet439.coord = Coordinate441;

Shape438.geometry = LineSet439;

HAnimSegment430.children[2] = Shape438;

HAnimJoint429.children = new MFNode();

HAnimJoint429.children[0] = HAnimSegment430;

HAnimJoint HAnimJoint442 = createNode("HAnimJoint");
HAnimJoint442.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint442.name = "r_talocalcaneonavicular";
HAnimJoint442.center = new SFVec3f(new float[-0.0781,0.0283,-0.097]);
HAnimSegment HAnimSegment443 = createNode("HAnimSegment");
HAnimSegment443.DEF = "hanim_r_navicular";
HAnimSegment443.name = "r_navicular";
Transform Transform444 = createNode("Transform");
Transform444.translation = new SFVec3f(new float[-0.0781,0.0283,-0.097]);
Transform Transform445 = createNode("Transform");
Shape Shape446 = createNode("Shape");
Shape446.USE = "HAnimJointShape";
Transform445.child = new undefined();

Transform445.child[0] = Shape446;

Transform444.children = new MFNode();

Transform444.children[0] = Transform445;

HAnimSegment443.children = new MFNode();

HAnimSegment443.children[0] = Transform444;

Shape Shape447 = createNode("Shape");
LineSet LineSet448 = createNode("LineSet");
LineSet448.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA449 = createNode("ColorRGBA");
ColorRGBA449.USE = "HAnimSegmentLineColorRGBA";
LineSet448.color = ColorRGBA449;

Coordinate Coordinate450 = createNode("Coordinate");
Coordinate450.point = new MFVec3f(new float[-0.0781,0.0283,-0.097,-0.0672,0.0235,-0.0835]);
LineSet448.coord = Coordinate450;

Shape447.geometry = LineSet448;

HAnimSegment443.children[1] = Shape447;

Shape Shape451 = createNode("Shape");
LineSet LineSet452 = createNode("LineSet");
LineSet452.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA453 = createNode("ColorRGBA");
ColorRGBA453.USE = "HAnimSegmentLineColorRGBA";
LineSet452.color = ColorRGBA453;

Coordinate Coordinate454 = createNode("Coordinate");
Coordinate454.point = new MFVec3f(new float[-0.0781,0.0283,-0.097,-0.0812,0.025,-0.0805]);
LineSet452.coord = Coordinate454;

Shape451.geometry = LineSet452;

HAnimSegment443.children[2] = Shape451;

Shape Shape455 = createNode("Shape");
LineSet LineSet456 = createNode("LineSet");
LineSet456.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA457 = createNode("ColorRGBA");
ColorRGBA457.USE = "HAnimSegmentLineColorRGBA";
LineSet456.color = ColorRGBA457;

Coordinate Coordinate458 = createNode("Coordinate");
Coordinate458.point = new MFVec3f(new float[-0.0781,0.0283,-0.097,-0.0928,0.0248,-0.0821]);
LineSet456.coord = Coordinate458;

Shape455.geometry = LineSet456;

HAnimSegment443.children[3] = Shape455;

HAnimJoint442.children = new MFNode();

HAnimJoint442.children[0] = HAnimSegment443;

HAnimJoint HAnimJoint459 = createNode("HAnimJoint");
HAnimJoint459.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint459.name = "r_cuneonavicular_1";
HAnimJoint459.center = new SFVec3f(new float[-0.0672,0.0235,-0.0835]);
HAnimSegment HAnimSegment460 = createNode("HAnimSegment");
HAnimSegment460.DEF = "hanim_r_cuneiform_1";
HAnimSegment460.name = "r_cuneiform_1";
Transform Transform461 = createNode("Transform");
Transform461.translation = new SFVec3f(new float[-0.0672,0.0235,-0.0835]);
Transform Transform462 = createNode("Transform");
Shape Shape463 = createNode("Shape");
Shape463.USE = "HAnimJointShape";
Transform462.child = new undefined();

Transform462.child[0] = Shape463;

Transform461.children = new MFNode();

Transform461.children[0] = Transform462;

HAnimSegment460.children = new MFNode();

HAnimSegment460.children[0] = Transform461;

Shape Shape464 = createNode("Shape");
LineSet LineSet465 = createNode("LineSet");
LineSet465.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA466 = createNode("ColorRGBA");
ColorRGBA466.USE = "HAnimSegmentLineColorRGBA";
LineSet465.color = ColorRGBA466;

Coordinate Coordinate467 = createNode("Coordinate");
Coordinate467.point = new MFVec3f(new float[-0.0672,0.0235,-0.0835,-0.0644,0.0147,-0.0577]);
LineSet465.coord = Coordinate467;

Shape464.geometry = LineSet465;

HAnimSegment460.children[1] = Shape464;

HAnimJoint459.children = new MFNode();

HAnimJoint459.children[0] = HAnimSegment460;

HAnimJoint HAnimJoint468 = createNode("HAnimJoint");
HAnimJoint468.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint468.name = "r_tarsometatarsal_1";
HAnimJoint468.center = new SFVec3f(new float[-0.0644,0.0147,-0.0577]);
HAnimSegment HAnimSegment469 = createNode("HAnimSegment");
HAnimSegment469.DEF = "hanim_r_metatarsal_1";
HAnimSegment469.name = "r_metatarsal_1";
Transform Transform470 = createNode("Transform");
Transform470.translation = new SFVec3f(new float[-0.0644,0.0147,-0.0577]);
Transform Transform471 = createNode("Transform");
Shape Shape472 = createNode("Shape");
Shape472.USE = "HAnimJointShape";
Transform471.child = new undefined();

Transform471.child[0] = Shape472;

Transform470.children = new MFNode();

Transform470.children[0] = Transform471;

HAnimSegment469.children = new MFNode();

HAnimSegment469.children[0] = Transform470;

Shape Shape473 = createNode("Shape");
LineSet LineSet474 = createNode("LineSet");
LineSet474.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA475 = createNode("ColorRGBA");
ColorRGBA475.USE = "HAnimSegmentLineColorRGBA";
LineSet474.color = ColorRGBA475;

Coordinate Coordinate476 = createNode("Coordinate");
Coordinate476.point = new MFVec3f(new float[-0.0644,0.0147,-0.0577,-0.0619,0.0059,-0.0083]);
LineSet474.coord = Coordinate476;

Shape473.geometry = LineSet474;

HAnimSegment469.children[1] = Shape473;

HAnimSite HAnimSite477 = createNode("HAnimSite");
HAnimSite477.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite477.name = "r_metatarsal_phalanx_1_pt";
TouchSensor TouchSensor478 = createNode("TouchSensor");
TouchSensor478.description = "HAnimSite r_metatarsal_phalanx_1_pt";
HAnimSite477.children = new MFNode();

HAnimSite477.children[0] = TouchSensor478;

Shape Shape479 = createNode("Shape");
Shape479.USE = "HAnimSiteShape";
HAnimSite477.children[1] = Shape479;

HAnimSegment469.children[2] = HAnimSite477;

HAnimJoint468.children = new MFNode();

HAnimJoint468.children[0] = HAnimSegment469;

HAnimJoint HAnimJoint480 = createNode("HAnimJoint");
HAnimJoint480.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint480.name = "r_metatarsophalangeal_1";
HAnimJoint480.center = new SFVec3f(new float[-0.0619,0.0059,-0.0083]);
HAnimSegment HAnimSegment481 = createNode("HAnimSegment");
HAnimSegment481.DEF = "hanim_r_tarsal_proximal_phalanx_1";
HAnimSegment481.name = "r_tarsal_proximal_phalanx_1";
Transform Transform482 = createNode("Transform");
Transform482.translation = new SFVec3f(new float[-0.0619,0.0059,-0.0083]);
Transform Transform483 = createNode("Transform");
Shape Shape484 = createNode("Shape");
Shape484.USE = "HAnimJointShape";
Transform483.child = new undefined();

Transform483.child[0] = Shape484;

Transform482.children = new MFNode();

Transform482.children[0] = Transform483;

HAnimSegment481.children = new MFNode();

HAnimSegment481.children[0] = Transform482;

Shape Shape485 = createNode("Shape");
LineSet LineSet486 = createNode("LineSet");
LineSet486.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA487 = createNode("ColorRGBA");
ColorRGBA487.USE = "HAnimSegmentLineColorRGBA";
LineSet486.color = ColorRGBA487;

Coordinate Coordinate488 = createNode("Coordinate");
Coordinate488.point = new MFVec3f(new float[-0.0619,0.0059,-0.0083,-0.0619,0.0059,-0.0083]);
LineSet486.coord = Coordinate488;

Shape485.geometry = LineSet486;

HAnimSegment481.children[1] = Shape485;

HAnimSite HAnimSite489 = createNode("HAnimSite");
HAnimSite489.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimSite489.name = "r_tarsal_distal_phalanx_1_tip";
TouchSensor TouchSensor490 = createNode("TouchSensor");
TouchSensor490.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite489.children = new MFNode();

HAnimSite489.children[0] = TouchSensor490;

Shape Shape491 = createNode("Shape");
Shape491.USE = "HAnimSiteShape";
HAnimSite489.children[1] = Shape491;

HAnimSegment481.children[2] = HAnimSite489;

HAnimJoint480.children = new MFNode();

HAnimJoint480.children[0] = HAnimSegment481;

HAnimJoint HAnimJoint492 = createNode("HAnimJoint");
HAnimJoint492.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint492.name = "r_tarsal_interphalangeal_1";
HAnimJoint480.children[1] = HAnimJoint492;

HAnimJoint468.children[1] = HAnimJoint480;

HAnimJoint459.children[1] = HAnimJoint468;

HAnimJoint442.children[1] = HAnimJoint459;

HAnimJoint HAnimJoint493 = createNode("HAnimJoint");
HAnimJoint493.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint493.name = "r_cuneonavicular_2";
HAnimJoint493.center = new SFVec3f(new float[-0.0812,0.025,-0.0805]);
HAnimSegment HAnimSegment494 = createNode("HAnimSegment");
HAnimSegment494.DEF = "hanim_r_cuneiform_2";
HAnimSegment494.name = "r_cuneiform_2";
Transform Transform495 = createNode("Transform");
Transform495.translation = new SFVec3f(new float[-0.0812,0.025,-0.0805]);
Transform Transform496 = createNode("Transform");
Shape Shape497 = createNode("Shape");
Shape497.USE = "HAnimJointShape";
Transform496.child = new undefined();

Transform496.child[0] = Shape497;

Transform495.children = new MFNode();

Transform495.children[0] = Transform496;

HAnimSegment494.children = new MFNode();

HAnimSegment494.children[0] = Transform495;

Shape Shape498 = createNode("Shape");
LineSet LineSet499 = createNode("LineSet");
LineSet499.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA500 = createNode("ColorRGBA");
ColorRGBA500.USE = "HAnimSegmentLineColorRGBA";
LineSet499.color = ColorRGBA500;

Coordinate Coordinate501 = createNode("Coordinate");
Coordinate501.point = new MFVec3f(new float[-0.0812,0.025,-0.0805,-0.08,0.0175,-0.0608]);
LineSet499.coord = Coordinate501;

Shape498.geometry = LineSet499;

HAnimSegment494.children[1] = Shape498;

HAnimJoint493.children = new MFNode();

HAnimJoint493.children[0] = HAnimSegment494;

HAnimJoint HAnimJoint502 = createNode("HAnimJoint");
HAnimJoint502.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint502.name = "r_tarsometatarsal_2";
HAnimJoint502.center = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
HAnimSegment HAnimSegment503 = createNode("HAnimSegment");
HAnimSegment503.DEF = "hanim_r_metatarsal_2";
HAnimSegment503.name = "r_metatarsal_2";
Transform Transform504 = createNode("Transform");
Transform504.translation = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
Transform Transform505 = createNode("Transform");
Shape Shape506 = createNode("Shape");
Shape506.USE = "HAnimJointShape";
Transform505.child = new undefined();

Transform505.child[0] = Shape506;

Transform504.children = new MFNode();

Transform504.children[0] = Transform505;

HAnimSegment503.children = new MFNode();

HAnimSegment503.children[0] = Transform504;

Shape Shape507 = createNode("Shape");
LineSet LineSet508 = createNode("LineSet");
LineSet508.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA509 = createNode("ColorRGBA");
ColorRGBA509.USE = "HAnimSegmentLineColorRGBA";
LineSet508.color = ColorRGBA509;

Coordinate Coordinate510 = createNode("Coordinate");
Coordinate510.point = new MFVec3f(new float[-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004]);
LineSet508.coord = Coordinate510;

Shape507.geometry = LineSet508;

HAnimSegment503.children[1] = Shape507;

HAnimJoint502.children = new MFNode();

HAnimJoint502.children[0] = HAnimSegment503;

HAnimJoint HAnimJoint511 = createNode("HAnimJoint");
HAnimJoint511.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint511.name = "r_metatarsophalangeal_2";
HAnimJoint511.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
HAnimSegment HAnimSegment512 = createNode("HAnimSegment");
HAnimSegment512.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSegment512.name = "r_tarsal_proximal_phalanx_2";
Transform Transform513 = createNode("Transform");
Transform513.translation = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
Transform Transform514 = createNode("Transform");
Shape Shape515 = createNode("Shape");
Shape515.USE = "HAnimJointShape";
Transform514.child = new undefined();

Transform514.child[0] = Shape515;

Transform513.children = new MFNode();

Transform513.children[0] = Transform514;

HAnimSegment512.children = new MFNode();

HAnimSegment512.children[0] = Transform513;

Shape Shape516 = createNode("Shape");
LineSet LineSet517 = createNode("LineSet");
LineSet517.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA518 = createNode("ColorRGBA");
ColorRGBA518.USE = "HAnimSegmentLineColorRGBA";
LineSet517.color = ColorRGBA518;

Coordinate Coordinate519 = createNode("Coordinate");
Coordinate519.point = new MFVec3f(new float[-0.0823,0.0064,-0.004,-0.0841,0.0041,0.0121]);
LineSet517.coord = Coordinate519;

Shape516.geometry = LineSet517;

HAnimSegment512.children[1] = Shape516;

HAnimJoint511.children = new MFNode();

HAnimJoint511.children[0] = HAnimSegment512;

HAnimJoint HAnimJoint520 = createNode("HAnimJoint");
HAnimJoint520.DEF = "hanim_r_tarsal_proximal_interphalangeal_1";
HAnimJoint520.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint520.center = new SFVec3f(new float[-0.0841,0.0041,0.0121]);
HAnimSegment HAnimSegment521 = createNode("HAnimSegment");
HAnimSegment521.DEF = "hanim_r_tarsal_middle_phalanx_1";
HAnimSegment521.name = "r_tarsal_middle_phalanx_2";
Transform Transform522 = createNode("Transform");
Transform522.translation = new SFVec3f(new float[-0.0841,0.0041,0.0121]);
Transform Transform523 = createNode("Transform");
Shape Shape524 = createNode("Shape");
Shape524.USE = "HAnimJointShape";
Transform523.child = new undefined();

Transform523.child[0] = Shape524;

Transform522.children = new MFNode();

Transform522.children[0] = Transform523;

HAnimSegment521.children = new MFNode();

HAnimSegment521.children[0] = Transform522;

Shape Shape525 = createNode("Shape");
LineSet LineSet526 = createNode("LineSet");
LineSet526.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA527 = createNode("ColorRGBA");
ColorRGBA527.USE = "HAnimSegmentLineColorRGBA";
LineSet526.color = ColorRGBA527;

Coordinate Coordinate528 = createNode("Coordinate");
Coordinate528.point = new MFVec3f(new float[-0.0841,0.0041,0.0121,-0.0841,0.0013,0.0216]);
LineSet526.coord = Coordinate528;

Shape525.geometry = LineSet526;

HAnimSegment521.children[1] = Shape525;

HAnimSite HAnimSite529 = createNode("HAnimSite");
HAnimSite529.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite529.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite529.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
TouchSensor TouchSensor530 = createNode("TouchSensor");
TouchSensor530.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite529.children = new MFNode();

HAnimSite529.children[0] = TouchSensor530;

Shape Shape531 = createNode("Shape");
Shape531.USE = "HAnimSiteShape";
HAnimSite529.children[1] = Shape531;

HAnimSegment521.children[2] = HAnimSite529;

HAnimJoint520.children = new MFNode();

HAnimJoint520.children[0] = HAnimSegment521;

HAnimJoint HAnimJoint532 = createNode("HAnimJoint");
HAnimJoint532.DEF = "hanim_r_tarsal_distal_interphalangeal_1";
HAnimJoint532.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint532.center = new SFVec3f(new float[-0.0841,0.0013,0.0216]);
HAnimJoint520.children[1] = HAnimJoint532;

HAnimJoint511.children[1] = HAnimJoint520;

HAnimJoint502.children[1] = HAnimJoint511;

HAnimJoint493.children[1] = HAnimJoint502;

HAnimJoint442.children[2] = HAnimJoint493;

HAnimJoint HAnimJoint533 = createNode("HAnimJoint");
HAnimJoint533.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint533.name = "r_cuneonavicular_3";
HAnimJoint533.center = new SFVec3f(new float[-0.0928,0.0248,-0.0821]);
HAnimSegment HAnimSegment534 = createNode("HAnimSegment");
HAnimSegment534.DEF = "hanim_r_cuneiform_3";
HAnimSegment534.name = "r_cuneiform_3";
Transform Transform535 = createNode("Transform");
Transform535.translation = new SFVec3f(new float[-0.0928,0.0248,-0.0821]);
Transform Transform536 = createNode("Transform");
Shape Shape537 = createNode("Shape");
Shape537.USE = "HAnimJointShape";
Transform536.child = new undefined();

Transform536.child[0] = Shape537;

Transform535.children = new MFNode();

Transform535.children[0] = Transform536;

HAnimSegment534.children = new MFNode();

HAnimSegment534.children[0] = Transform535;

Shape Shape538 = createNode("Shape");
LineSet LineSet539 = createNode("LineSet");
LineSet539.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA540 = createNode("ColorRGBA");
ColorRGBA540.USE = "HAnimSegmentLineColorRGBA";
LineSet539.color = ColorRGBA540;

Coordinate Coordinate541 = createNode("Coordinate");
Coordinate541.point = new MFVec3f(new float[-0.0928,0.0248,-0.0821,-0.0944,0.0175,-0.0625]);
LineSet539.coord = Coordinate541;

Shape538.geometry = LineSet539;

HAnimSegment534.children[1] = Shape538;

HAnimJoint533.children = new MFNode();

HAnimJoint533.children[0] = HAnimSegment534;

HAnimJoint HAnimJoint542 = createNode("HAnimJoint");
HAnimJoint542.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint542.name = "r_tarsometatarsal_3";
HAnimJoint542.center = new SFVec3f(new float[-0.0944,0.0175,-0.0625]);
HAnimSegment HAnimSegment543 = createNode("HAnimSegment");
HAnimSegment543.DEF = "hanim_r_metatarsal_3";
HAnimSegment543.name = "r_metatarsal_3";
Transform Transform544 = createNode("Transform");
Transform544.translation = new SFVec3f(new float[-0.0944,0.0175,-0.0625]);
Transform Transform545 = createNode("Transform");
Shape Shape546 = createNode("Shape");
Shape546.USE = "HAnimJointShape";
Transform545.child = new undefined();

Transform545.child[0] = Shape546;

Transform544.children = new MFNode();

Transform544.children[0] = Transform545;

HAnimSegment543.children = new MFNode();

HAnimSegment543.children[0] = Transform544;

Shape Shape547 = createNode("Shape");
LineSet LineSet548 = createNode("LineSet");
LineSet548.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA549 = createNode("ColorRGBA");
ColorRGBA549.USE = "HAnimSegmentLineColorRGBA";
LineSet548.color = ColorRGBA549;

Coordinate Coordinate550 = createNode("Coordinate");
Coordinate550.point = new MFVec3f(new float[-0.0944,0.0175,-0.0625,-0.0963,0.0065,-0.0065]);
LineSet548.coord = Coordinate550;

Shape547.geometry = LineSet548;

HAnimSegment543.children[1] = Shape547;

HAnimJoint542.children = new MFNode();

HAnimJoint542.children[0] = HAnimSegment543;

HAnimJoint HAnimJoint551 = createNode("HAnimJoint");
HAnimJoint551.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint551.name = "r_metatarsophalangeal_3";
HAnimJoint551.center = new SFVec3f(new float[-0.0963,0.0065,-0.0065]);
HAnimSegment HAnimSegment552 = createNode("HAnimSegment");
HAnimSegment552.DEF = "hanim_r_tarsal_proximal_phalanx_3";
HAnimSegment552.name = "r_tarsal_proximal_phalanx_3";
Transform Transform553 = createNode("Transform");
Transform553.translation = new SFVec3f(new float[-0.0963,0.0065,-0.0065]);
Transform Transform554 = createNode("Transform");
Shape Shape555 = createNode("Shape");
Shape555.USE = "HAnimJointShape";
Transform554.child = new undefined();

Transform554.child[0] = Shape555;

Transform553.children = new MFNode();

Transform553.children[0] = Transform554;

HAnimSegment552.children = new MFNode();

HAnimSegment552.children[0] = Transform553;

Shape Shape556 = createNode("Shape");
LineSet LineSet557 = createNode("LineSet");
LineSet557.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA558 = createNode("ColorRGBA");
ColorRGBA558.USE = "HAnimSegmentLineColorRGBA";
LineSet557.color = ColorRGBA558;

Coordinate Coordinate559 = createNode("Coordinate");
Coordinate559.point = new MFVec3f(new float[-0.0963,0.0065,-0.0065,-0.0987,0.0034,0.0086]);
LineSet557.coord = Coordinate559;

Shape556.geometry = LineSet557;

HAnimSegment552.children[1] = Shape556;

HAnimJoint551.children = new MFNode();

HAnimJoint551.children[0] = HAnimSegment552;

HAnimJoint HAnimJoint560 = createNode("HAnimJoint");
HAnimJoint560.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint560.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint560.center = new SFVec3f(new float[-0.0987,0.0034,0.0086]);
HAnimSegment HAnimSegment561 = createNode("HAnimSegment");
HAnimSegment561.DEF = "hanim_r_tarsal_middle_phalanx_2";
HAnimSegment561.name = "r_tarsal_middle_phalanx_3";
Transform Transform562 = createNode("Transform");
Transform562.translation = new SFVec3f(new float[-0.0987,0.0034,0.0086]);
Transform Transform563 = createNode("Transform");
Shape Shape564 = createNode("Shape");
Shape564.USE = "HAnimJointShape";
Transform563.child = new undefined();

Transform563.child[0] = Shape564;

Transform562.children = new MFNode();

Transform562.children[0] = Transform563;

HAnimSegment561.children = new MFNode();

HAnimSegment561.children[0] = Transform562;

Shape Shape565 = createNode("Shape");
LineSet LineSet566 = createNode("LineSet");
LineSet566.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA567 = createNode("ColorRGBA");
ColorRGBA567.USE = "HAnimSegmentLineColorRGBA";
LineSet566.color = ColorRGBA567;

Coordinate Coordinate568 = createNode("Coordinate");
Coordinate568.point = new MFVec3f(new float[-0.0987,0.0034,0.0086,-0.1002,0.0013,0.0178]);
LineSet566.coord = Coordinate568;

Shape565.geometry = LineSet566;

HAnimSegment561.children[1] = Shape565;

HAnimSite HAnimSite569 = createNode("HAnimSite");
HAnimSite569.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimSite569.name = "r_tarsal_distal_phalanx_3_tip";
TouchSensor TouchSensor570 = createNode("TouchSensor");
TouchSensor570.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite569.children = new MFNode();

HAnimSite569.children[0] = TouchSensor570;

Shape Shape571 = createNode("Shape");
Shape571.USE = "HAnimSiteShape";
HAnimSite569.children[1] = Shape571;

HAnimSegment561.children[2] = HAnimSite569;

HAnimJoint560.children = new MFNode();

HAnimJoint560.children[0] = HAnimSegment561;

HAnimJoint HAnimJoint572 = createNode("HAnimJoint");
HAnimJoint572.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint572.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint572.center = new SFVec3f(new float[-0.1002,0.0013,0.0178]);
HAnimJoint560.children[1] = HAnimJoint572;

HAnimJoint551.children[1] = HAnimJoint560;

HAnimJoint542.children[1] = HAnimJoint551;

HAnimJoint533.children[1] = HAnimJoint542;

HAnimJoint442.children[3] = HAnimJoint533;

HAnimJoint429.children[1] = HAnimJoint442;

HAnimJoint HAnimJoint573 = createNode("HAnimJoint");
HAnimJoint573.DEF = "hanim_r_calcaneocuboid";
HAnimJoint573.name = "r_calcaneocuboid";
HAnimJoint573.center = new SFVec3f(new float[-0.0889,0.0494,-0.1278]);
HAnimSegment HAnimSegment574 = createNode("HAnimSegment");
HAnimSegment574.DEF = "hanim_r_calcaneus";
HAnimSegment574.name = "r_calcaneus";
Transform Transform575 = createNode("Transform");
Transform575.translation = new SFVec3f(new float[-0.0889,0.0494,-0.1278]);
Transform Transform576 = createNode("Transform");
Shape Shape577 = createNode("Shape");
Shape577.USE = "HAnimJointShape";
Transform576.child = new undefined();

Transform576.child[0] = Shape577;

Transform575.children = new MFNode();

Transform575.children[0] = Transform576;

HAnimSegment574.children = new MFNode();

HAnimSegment574.children[0] = Transform575;

Shape Shape578 = createNode("Shape");
LineSet LineSet579 = createNode("LineSet");
LineSet579.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA580 = createNode("ColorRGBA");
ColorRGBA580.USE = "HAnimSegmentLineColorRGBA";
LineSet579.color = ColorRGBA580;

Coordinate Coordinate581 = createNode("Coordinate");
Coordinate581.point = new MFVec3f(new float[-0.0889,0.0494,-0.1278,-0.1105,0.0267,-0.0998]);
LineSet579.coord = Coordinate581;

Shape578.geometry = LineSet579;

HAnimSegment574.children[1] = Shape578;

HAnimJoint573.children = new MFNode();

HAnimJoint573.children[0] = HAnimSegment574;

HAnimJoint HAnimJoint582 = createNode("HAnimJoint");
HAnimJoint582.DEF = "hanim_r_transversetarsal";
HAnimJoint582.name = "r_transversetarsal";
HAnimJoint582.center = new SFVec3f(new float[-0.1105,0.0267,-0.0998]);
HAnimSegment HAnimSegment583 = createNode("HAnimSegment");
HAnimSegment583.DEF = "hanim_r_cuboid";
HAnimSegment583.name = "r_cuboid";
Transform Transform584 = createNode("Transform");
Transform584.translation = new SFVec3f(new float[-0.1105,0.0267,-0.0998]);
Transform Transform585 = createNode("Transform");
Shape Shape586 = createNode("Shape");
Shape586.USE = "HAnimJointShape";
Transform585.child = new undefined();

Transform585.child[0] = Shape586;

Transform584.children = new MFNode();

Transform584.children[0] = Transform585;

HAnimSegment583.children = new MFNode();

HAnimSegment583.children[0] = Transform584;

Shape Shape587 = createNode("Shape");
LineSet LineSet588 = createNode("LineSet");
LineSet588.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA589 = createNode("ColorRGBA");
ColorRGBA589.USE = "HAnimSegmentLineColorRGBA";
LineSet588.color = ColorRGBA589;

Coordinate Coordinate590 = createNode("Coordinate");
Coordinate590.point = new MFVec3f(new float[-0.1105,0.0267,-0.0998,-0.1063,0.016,-0.0634]);
LineSet588.coord = Coordinate590;

Shape587.geometry = LineSet588;

HAnimSegment583.children[1] = Shape587;

Shape Shape591 = createNode("Shape");
LineSet LineSet592 = createNode("LineSet");
LineSet592.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA593 = createNode("ColorRGBA");
ColorRGBA593.USE = "HAnimSegmentLineColorRGBA";
LineSet592.color = ColorRGBA593;

Coordinate Coordinate594 = createNode("Coordinate");
Coordinate594.point = new MFVec3f(new float[-0.1105,0.0267,-0.0998,-0.1206,0.0124,-0.0671]);
LineSet592.coord = Coordinate594;

Shape591.geometry = LineSet592;

HAnimSegment583.children[2] = Shape591;

HAnimJoint582.children = new MFNode();

HAnimJoint582.children[0] = HAnimSegment583;

HAnimJoint HAnimJoint595 = createNode("HAnimJoint");
HAnimJoint595.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint595.name = "r_tarsometatarsal_4";
HAnimJoint595.center = new SFVec3f(new float[-0.1063,0.016,-0.0634]);
HAnimSegment HAnimSegment596 = createNode("HAnimSegment");
HAnimSegment596.DEF = "hanim_r_metatarsal_4";
HAnimSegment596.name = "r_metatarsal_4";
Transform Transform597 = createNode("Transform");
Transform597.translation = new SFVec3f(new float[-0.1063,0.016,-0.0634]);
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
Coordinate603.point = new MFVec3f(new float[-0.1063,0.016,-0.0634,-0.1097,0.0058,-0.0107]);
LineSet601.coord = Coordinate603;

Shape600.geometry = LineSet601;

HAnimSegment596.children[1] = Shape600;

HAnimJoint595.children = new MFNode();

HAnimJoint595.children[0] = HAnimSegment596;

HAnimJoint HAnimJoint604 = createNode("HAnimJoint");
HAnimJoint604.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint604.name = "r_metatarsophalangeal_4";
HAnimJoint604.center = new SFVec3f(new float[-0.1097,0.0058,-0.0107]);
HAnimSegment HAnimSegment605 = createNode("HAnimSegment");
HAnimSegment605.DEF = "hanim_r_tarsal_proximal_phalanx_4";
HAnimSegment605.name = "r_tarsal_proximal_phalanx_4";
Transform Transform606 = createNode("Transform");
Transform606.translation = new SFVec3f(new float[-0.1097,0.0058,-0.0107]);
Transform Transform607 = createNode("Transform");
Shape Shape608 = createNode("Shape");
Shape608.USE = "HAnimJointShape";
Transform607.child = new undefined();

Transform607.child[0] = Shape608;

Transform606.children = new MFNode();

Transform606.children[0] = Transform607;

HAnimSegment605.children = new MFNode();

HAnimSegment605.children[0] = Transform606;

Shape Shape609 = createNode("Shape");
LineSet LineSet610 = createNode("LineSet");
LineSet610.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA611 = createNode("ColorRGBA");
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA";
LineSet610.color = ColorRGBA611;

Coordinate Coordinate612 = createNode("Coordinate");
Coordinate612.point = new MFVec3f(new float[-0.1097,0.0058,-0.0107,-0.114,0.0037,0.0044]);
LineSet610.coord = Coordinate612;

Shape609.geometry = LineSet610;

HAnimSegment605.children[1] = Shape609;

HAnimJoint604.children = new MFNode();

HAnimJoint604.children[0] = HAnimSegment605;

HAnimJoint HAnimJoint613 = createNode("HAnimJoint");
HAnimJoint613.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint613.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint613.center = new SFVec3f(new float[-0.114,0.0037,0.0044]);
HAnimSegment HAnimSegment614 = createNode("HAnimSegment");
HAnimSegment614.DEF = "hanim_r_tarsal_middle_phalanx_3";
HAnimSegment614.name = "r_tarsal_middle_phalanx_4";
Transform Transform615 = createNode("Transform");
Transform615.translation = new SFVec3f(new float[-0.114,0.0037,0.0044]);
Transform Transform616 = createNode("Transform");
Shape Shape617 = createNode("Shape");
Shape617.USE = "HAnimJointShape";
Transform616.child = new undefined();

Transform616.child[0] = Shape617;

Transform615.children = new MFNode();

Transform615.children[0] = Transform616;

HAnimSegment614.children = new MFNode();

HAnimSegment614.children[0] = Transform615;

Shape Shape618 = createNode("Shape");
LineSet LineSet619 = createNode("LineSet");
LineSet619.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA620 = createNode("ColorRGBA");
ColorRGBA620.USE = "HAnimSegmentLineColorRGBA";
LineSet619.color = ColorRGBA620;

Coordinate Coordinate621 = createNode("Coordinate");
Coordinate621.point = new MFVec3f(new float[-0.114,0.0037,0.0044,-0.1155,0.0008,0.0118]);
LineSet619.coord = Coordinate621;

Shape618.geometry = LineSet619;

HAnimSegment614.children[1] = Shape618;

HAnimSite HAnimSite622 = createNode("HAnimSite");
HAnimSite622.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimSite622.name = "r_tarsal_distal_phalanx_4_tip";
TouchSensor TouchSensor623 = createNode("TouchSensor");
TouchSensor623.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite622.children = new MFNode();

HAnimSite622.children[0] = TouchSensor623;

Shape Shape624 = createNode("Shape");
Shape624.USE = "HAnimSiteShape";
HAnimSite622.children[1] = Shape624;

HAnimSegment614.children[2] = HAnimSite622;

HAnimJoint613.children = new MFNode();

HAnimJoint613.children[0] = HAnimSegment614;

HAnimJoint HAnimJoint625 = createNode("HAnimJoint");
HAnimJoint625.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint625.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint625.center = new SFVec3f(new float[-0.1155,0.0008,0.0118]);
HAnimJoint613.children[1] = HAnimJoint625;

HAnimJoint604.children[1] = HAnimJoint613;

HAnimJoint595.children[1] = HAnimJoint604;

HAnimJoint582.children[1] = HAnimJoint595;

HAnimJoint HAnimJoint626 = createNode("HAnimJoint");
HAnimJoint626.DEF = "hanim_r_tarsometatarsal_5";
HAnimJoint626.name = "r_tarsometatarsal_5";
HAnimJoint626.center = new SFVec3f(new float[-0.1206,0.0124,-0.0671]);
HAnimSegment HAnimSegment627 = createNode("HAnimSegment");
HAnimSegment627.DEF = "hanim_r_metatarsal_5";
HAnimSegment627.name = "r_metatarsal_5";
Transform Transform628 = createNode("Transform");
Transform628.translation = new SFVec3f(new float[-0.1206,0.0124,-0.0671]);
Transform Transform629 = createNode("Transform");
Shape Shape630 = createNode("Shape");
Shape630.USE = "HAnimJointShape";
Transform629.child = new undefined();

Transform629.child[0] = Shape630;

Transform628.children = new MFNode();

Transform628.children[0] = Transform629;

HAnimSegment627.children = new MFNode();

HAnimSegment627.children[0] = Transform628;

Shape Shape631 = createNode("Shape");
LineSet LineSet632 = createNode("LineSet");
LineSet632.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA633 = createNode("ColorRGBA");
ColorRGBA633.USE = "HAnimSegmentLineColorRGBA";
LineSet632.color = ColorRGBA633;

Coordinate Coordinate634 = createNode("Coordinate");
Coordinate634.point = new MFVec3f(new float[-0.1206,0.0124,-0.0671,-0.1239,0.0051,-0.0153]);
LineSet632.coord = Coordinate634;

Shape631.geometry = LineSet632;

HAnimSegment627.children[1] = Shape631;

HAnimSite HAnimSite635 = createNode("HAnimSite");
HAnimSite635.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite635.name = "r_metatarsal_phalanx_5_pt";
TouchSensor TouchSensor636 = createNode("TouchSensor");
TouchSensor636.description = "HAnimSite r_metatarsal_phalanx_5_pt";
HAnimSite635.children = new MFNode();

HAnimSite635.children[0] = TouchSensor636;

Shape Shape637 = createNode("Shape");
Shape637.USE = "HAnimSiteShape";
HAnimSite635.children[1] = Shape637;

HAnimSegment627.children[2] = HAnimSite635;

HAnimJoint626.children = new MFNode();

HAnimJoint626.children[0] = HAnimSegment627;

HAnimJoint HAnimJoint638 = createNode("HAnimJoint");
HAnimJoint638.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint638.name = "r_metatarsophalangeal_5";
HAnimJoint638.center = new SFVec3f(new float[-0.1239,0.0051,-0.0153]);
HAnimSegment HAnimSegment639 = createNode("HAnimSegment");
HAnimSegment639.DEF = "hanim_r_tarsal_proximal_phalanx_5";
HAnimSegment639.name = "r_tarsal_proximal_phalanx_5";
Transform Transform640 = createNode("Transform");
Transform640.translation = new SFVec3f(new float[-0.1239,0.0051,-0.0153]);
Transform Transform641 = createNode("Transform");
Shape Shape642 = createNode("Shape");
Shape642.USE = "HAnimJointShape";
Transform641.child = new undefined();

Transform641.child[0] = Shape642;

Transform640.children = new MFNode();

Transform640.children[0] = Transform641;

HAnimSegment639.children = new MFNode();

HAnimSegment639.children[0] = Transform640;

Shape Shape643 = createNode("Shape");
LineSet LineSet644 = createNode("LineSet");
LineSet644.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA645 = createNode("ColorRGBA");
ColorRGBA645.USE = "HAnimSegmentLineColorRGBA";
LineSet644.color = ColorRGBA645;

Coordinate Coordinate646 = createNode("Coordinate");
Coordinate646.point = new MFVec3f(new float[-0.1239,0.0051,-0.0153,-0.1262,0.0023,-0.0077]);
LineSet644.coord = Coordinate646;

Shape643.geometry = LineSet644;

HAnimSegment639.children[1] = Shape643;

HAnimJoint638.children = new MFNode();

HAnimJoint638.children[0] = HAnimSegment639;

HAnimJoint HAnimJoint647 = createNode("HAnimJoint");
HAnimJoint647.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint647.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint647.center = new SFVec3f(new float[-0.1262,0.0023,-0.0077]);
HAnimSegment HAnimSegment648 = createNode("HAnimSegment");
HAnimSegment648.DEF = "hanim_r_tarsal_middle_phalanx_4";
HAnimSegment648.name = "r_tarsal_middle_phalanx_5";
Transform Transform649 = createNode("Transform");
Transform649.translation = new SFVec3f(new float[-0.1262,0.0023,-0.0077]);
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
Coordinate655.point = new MFVec3f(new float[-0.1262,0.0023,-0.0077,-0.1271,0,0]);
LineSet653.coord = Coordinate655;

Shape652.geometry = LineSet653;

HAnimSegment648.children[1] = Shape652;

HAnimSite HAnimSite656 = createNode("HAnimSite");
HAnimSite656.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimSite656.name = "r_tarsal_distal_phalanx_5_tip";
TouchSensor TouchSensor657 = createNode("TouchSensor");
TouchSensor657.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite656.children = new MFNode();

HAnimSite656.children[0] = TouchSensor657;

Shape Shape658 = createNode("Shape");
Shape658.USE = "HAnimSiteShape";
HAnimSite656.children[1] = Shape658;

HAnimSegment648.children[2] = HAnimSite656;

HAnimJoint647.children = new MFNode();

HAnimJoint647.children[0] = HAnimSegment648;

HAnimJoint HAnimJoint659 = createNode("HAnimJoint");
HAnimJoint659.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint659.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint659.center = new SFVec3f(new float[-0.1271,0,0]);
HAnimJoint647.children[1] = HAnimJoint659;

HAnimJoint638.children[1] = HAnimJoint647;

HAnimJoint626.children[1] = HAnimJoint638;

HAnimJoint582.children[2] = HAnimJoint626;

HAnimJoint573.children[1] = HAnimJoint582;

HAnimJoint429.children[2] = HAnimJoint573;

HAnimJoint414.children[1] = HAnimJoint429;

HAnimJoint396.children[1] = HAnimJoint414;

HAnimJoint95.children[2] = HAnimJoint396;

HAnimJoint43.children[1] = HAnimJoint95;

HAnimJoint HAnimJoint660 = createNode("HAnimJoint");
HAnimJoint660.DEF = "hanim_vl5";
HAnimJoint660.name = "vl5";
HAnimJoint660.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
HAnimSegment HAnimSegment661 = createNode("HAnimSegment");
HAnimSegment661.DEF = "hanim_l5";
HAnimSegment661.name = "l5";
Transform Transform662 = createNode("Transform");
Transform662.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
Transform Transform663 = createNode("Transform");
Shape Shape664 = createNode("Shape");
Shape664.USE = "HAnimJointShape";
Transform663.child = new undefined();

Transform663.child[0] = Shape664;

Transform662.children = new MFNode();

Transform662.children[0] = Transform663;

HAnimSegment661.children = new MFNode();

HAnimSegment661.children[0] = Transform662;

Shape Shape665 = createNode("Shape");
LineSet LineSet666 = createNode("LineSet");
LineSet666.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA667 = createNode("ColorRGBA");
ColorRGBA667.USE = "HAnimSegmentLineColorRGBA";
LineSet666.color = ColorRGBA667;

Coordinate Coordinate668 = createNode("Coordinate");
Coordinate668.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet666.coord = Coordinate668;

Shape665.geometry = LineSet666;

HAnimSegment661.children[1] = Shape665;

HAnimJoint660.children = new MFNode();

HAnimJoint660.children[0] = HAnimSegment661;

HAnimJoint HAnimJoint669 = createNode("HAnimJoint");
HAnimJoint669.DEF = "hanim_vl4";
HAnimJoint669.name = "vl4";
HAnimJoint669.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
HAnimSegment HAnimSegment670 = createNode("HAnimSegment");
HAnimSegment670.DEF = "hanim_l4";
HAnimSegment670.name = "l4";
Transform Transform671 = createNode("Transform");
Transform671.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
Transform Transform672 = createNode("Transform");
Shape Shape673 = createNode("Shape");
Shape673.USE = "HAnimJointShape";
Transform672.child = new undefined();

Transform672.child[0] = Shape673;

Transform671.children = new MFNode();

Transform671.children[0] = Transform672;

HAnimSegment670.children = new MFNode();

HAnimSegment670.children[0] = Transform671;

Shape Shape674 = createNode("Shape");
LineSet LineSet675 = createNode("LineSet");
LineSet675.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA676 = createNode("ColorRGBA");
ColorRGBA676.USE = "HAnimSegmentLineColorRGBA";
LineSet675.color = ColorRGBA676;

Coordinate Coordinate677 = createNode("Coordinate");
Coordinate677.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet675.coord = Coordinate677;

Shape674.geometry = LineSet675;

HAnimSegment670.children[1] = Shape674;

HAnimJoint669.children = new MFNode();

HAnimJoint669.children[0] = HAnimSegment670;

HAnimJoint HAnimJoint678 = createNode("HAnimJoint");
HAnimJoint678.DEF = "hanim_vl3";
HAnimJoint678.name = "vl3";
HAnimJoint678.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
HAnimSegment HAnimSegment679 = createNode("HAnimSegment");
HAnimSegment679.DEF = "hanim_l3";
HAnimSegment679.name = "l3";
Transform Transform680 = createNode("Transform");
Transform680.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
Transform Transform681 = createNode("Transform");
Shape Shape682 = createNode("Shape");
Shape682.USE = "HAnimJointShape";
Transform681.child = new undefined();

Transform681.child[0] = Shape682;

Transform680.children = new MFNode();

Transform680.children[0] = Transform681;

HAnimSegment679.children = new MFNode();

HAnimSegment679.children[0] = Transform680;

Shape Shape683 = createNode("Shape");
LineSet LineSet684 = createNode("LineSet");
LineSet684.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA685 = createNode("ColorRGBA");
ColorRGBA685.USE = "HAnimSegmentLineColorRGBA";
LineSet684.color = ColorRGBA685;

Coordinate Coordinate686 = createNode("Coordinate");
Coordinate686.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet684.coord = Coordinate686;

Shape683.geometry = LineSet684;

HAnimSegment679.children[1] = Shape683;

HAnimSite HAnimSite687 = createNode("HAnimSite");
HAnimSite687.DEF = "hanim_l_rib10_pt";
HAnimSite687.name = "l_rib10_pt";
HAnimSite687.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
TouchSensor TouchSensor688 = createNode("TouchSensor");
TouchSensor688.description = "HAnimSite l_rib10_pt";
HAnimSite687.children = new MFNode();

HAnimSite687.children[0] = TouchSensor688;

Shape Shape689 = createNode("Shape");
Shape689.USE = "HAnimSiteShape";
HAnimSite687.children[1] = Shape689;

HAnimSegment679.children[2] = HAnimSite687;

HAnimSite HAnimSite690 = createNode("HAnimSite");
HAnimSite690.DEF = "hanim_r_rib10_pt";
HAnimSite690.name = "r_rib10_pt";
HAnimSite690.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
TouchSensor TouchSensor691 = createNode("TouchSensor");
TouchSensor691.description = "HAnimSite r_rib10_pt";
HAnimSite690.children = new MFNode();

HAnimSite690.children[0] = TouchSensor691;

Shape Shape692 = createNode("Shape");
Shape692.USE = "HAnimSiteShape";
HAnimSite690.children[1] = Shape692;

HAnimSegment679.children[3] = HAnimSite690;

HAnimSite HAnimSite693 = createNode("HAnimSite");
HAnimSite693.DEF = "hanim_spine_2_middle_back_pt";
HAnimSite693.name = "spine_2_middle_back_pt";
TouchSensor TouchSensor694 = createNode("TouchSensor");
TouchSensor694.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite693.children = new MFNode();

HAnimSite693.children[0] = TouchSensor694;

Shape Shape695 = createNode("Shape");
Shape695.USE = "HAnimSiteShape";
HAnimSite693.children[1] = Shape695;

HAnimSegment679.children[4] = HAnimSite693;

HAnimJoint678.children = new MFNode();

HAnimJoint678.children[0] = HAnimSegment679;

HAnimJoint HAnimJoint696 = createNode("HAnimJoint");
HAnimJoint696.DEF = "hanim_vl2";
HAnimJoint696.name = "vl2";
HAnimJoint696.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
HAnimSegment HAnimSegment697 = createNode("HAnimSegment");
HAnimSegment697.DEF = "hanim_l2";
HAnimSegment697.name = "l2";
Transform Transform698 = createNode("Transform");
Transform698.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
Transform Transform699 = createNode("Transform");
Shape Shape700 = createNode("Shape");
Shape700.USE = "HAnimJointShape";
Transform699.child = new undefined();

Transform699.child[0] = Shape700;

Transform698.children = new MFNode();

Transform698.children[0] = Transform699;

HAnimSegment697.children = new MFNode();

HAnimSegment697.children[0] = Transform698;

Shape Shape701 = createNode("Shape");
LineSet LineSet702 = createNode("LineSet");
LineSet702.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA703 = createNode("ColorRGBA");
ColorRGBA703.USE = "HAnimSegmentLineColorRGBA";
LineSet702.color = ColorRGBA703;

Coordinate Coordinate704 = createNode("Coordinate");
Coordinate704.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet702.coord = Coordinate704;

Shape701.geometry = LineSet702;

HAnimSegment697.children[1] = Shape701;

HAnimJoint696.children = new MFNode();

HAnimJoint696.children[0] = HAnimSegment697;

HAnimJoint HAnimJoint705 = createNode("HAnimJoint");
HAnimJoint705.DEF = "hanim_vl1";
HAnimJoint705.name = "vl1";
HAnimJoint705.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
HAnimSegment HAnimSegment706 = createNode("HAnimSegment");
HAnimSegment706.DEF = "hanim_l1";
HAnimSegment706.name = "l1";
Transform Transform707 = createNode("Transform");
Transform707.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
Transform Transform708 = createNode("Transform");
Shape Shape709 = createNode("Shape");
Shape709.USE = "HAnimJointShape";
Transform708.child = new undefined();

Transform708.child[0] = Shape709;

Transform707.children = new MFNode();

Transform707.children[0] = Transform708;

HAnimSegment706.children = new MFNode();

HAnimSegment706.children[0] = Transform707;

Shape Shape710 = createNode("Shape");
LineSet LineSet711 = createNode("LineSet");
LineSet711.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA712 = createNode("ColorRGBA");
ColorRGBA712.USE = "HAnimSegmentLineColorRGBA";
LineSet711.color = ColorRGBA712;

Coordinate Coordinate713 = createNode("Coordinate");
Coordinate713.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet711.coord = Coordinate713;

Shape710.geometry = LineSet711;

HAnimSegment706.children[1] = Shape710;

HAnimJoint705.children = new MFNode();

HAnimJoint705.children[0] = HAnimSegment706;

HAnimJoint HAnimJoint714 = createNode("HAnimJoint");
HAnimJoint714.DEF = "hanim_vt12";
HAnimJoint714.name = "vt12";
HAnimJoint714.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
HAnimSegment HAnimSegment715 = createNode("HAnimSegment");
HAnimSegment715.DEF = "hanim_t12";
HAnimSegment715.name = "t12";
Transform Transform716 = createNode("Transform");
Transform716.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
Transform Transform717 = createNode("Transform");
Shape Shape718 = createNode("Shape");
Shape718.USE = "HAnimJointShape";
Transform717.child = new undefined();

Transform717.child[0] = Shape718;

Transform716.children = new MFNode();

Transform716.children[0] = Transform717;

HAnimSegment715.children = new MFNode();

HAnimSegment715.children[0] = Transform716;

Shape Shape719 = createNode("Shape");
LineSet LineSet720 = createNode("LineSet");
LineSet720.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA721 = createNode("ColorRGBA");
ColorRGBA721.USE = "HAnimSegmentLineColorRGBA";
LineSet720.color = ColorRGBA721;

Coordinate Coordinate722 = createNode("Coordinate");
Coordinate722.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet720.coord = Coordinate722;

Shape719.geometry = LineSet720;

HAnimSegment715.children[1] = Shape719;

HAnimJoint714.children = new MFNode();

HAnimJoint714.children[0] = HAnimSegment715;

HAnimJoint HAnimJoint723 = createNode("HAnimJoint");
HAnimJoint723.DEF = "hanim_vt11";
HAnimJoint723.name = "vt11";
HAnimJoint723.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
HAnimSegment HAnimSegment724 = createNode("HAnimSegment");
HAnimSegment724.DEF = "hanim_t11";
HAnimSegment724.name = "t11";
Transform Transform725 = createNode("Transform");
Transform725.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
Transform Transform726 = createNode("Transform");
Shape Shape727 = createNode("Shape");
Shape727.USE = "HAnimJointShape";
Transform726.child = new undefined();

Transform726.child[0] = Shape727;

Transform725.children = new MFNode();

Transform725.children[0] = Transform726;

HAnimSegment724.children = new MFNode();

HAnimSegment724.children[0] = Transform725;

Shape Shape728 = createNode("Shape");
LineSet LineSet729 = createNode("LineSet");
LineSet729.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA730 = createNode("ColorRGBA");
ColorRGBA730.USE = "HAnimSegmentLineColorRGBA";
LineSet729.color = ColorRGBA730;

Coordinate Coordinate731 = createNode("Coordinate");
Coordinate731.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet729.coord = Coordinate731;

Shape728.geometry = LineSet729;

HAnimSegment724.children[1] = Shape728;

HAnimSite HAnimSite732 = createNode("HAnimSite");
HAnimSite732.DEF = "hanim_substernale_pt";
HAnimSite732.name = "substernale_pt";
HAnimSite732.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
TouchSensor TouchSensor733 = createNode("TouchSensor");
TouchSensor733.description = "HAnimSite substernale_pt";
HAnimSite732.children = new MFNode();

HAnimSite732.children[0] = TouchSensor733;

Shape Shape734 = createNode("Shape");
Shape734.USE = "HAnimSiteShape";
HAnimSite732.children[1] = Shape734;

HAnimSegment724.children[2] = HAnimSite732;

HAnimJoint723.children = new MFNode();

HAnimJoint723.children[0] = HAnimSegment724;

HAnimJoint HAnimJoint735 = createNode("HAnimJoint");
HAnimJoint735.DEF = "hanim_vt10";
HAnimJoint735.name = "vt10";
HAnimJoint735.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
HAnimSegment HAnimSegment736 = createNode("HAnimSegment");
HAnimSegment736.DEF = "hanim_t10";
HAnimSegment736.name = "t10";
Transform Transform737 = createNode("Transform");
Transform737.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
Transform Transform738 = createNode("Transform");
Shape Shape739 = createNode("Shape");
Shape739.USE = "HAnimJointShape";
Transform738.child = new undefined();

Transform738.child[0] = Shape739;

Transform737.children = new MFNode();

Transform737.children[0] = Transform738;

HAnimSegment736.children = new MFNode();

HAnimSegment736.children[0] = Transform737;

Shape Shape740 = createNode("Shape");
LineSet LineSet741 = createNode("LineSet");
LineSet741.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA742 = createNode("ColorRGBA");
ColorRGBA742.USE = "HAnimSegmentLineColorRGBA";
LineSet741.color = ColorRGBA742;

Coordinate Coordinate743 = createNode("Coordinate");
Coordinate743.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet741.coord = Coordinate743;

Shape740.geometry = LineSet741;

HAnimSegment736.children[1] = Shape740;

HAnimSite HAnimSite744 = createNode("HAnimSite");
HAnimSite744.DEF = "hanim_l_thelion_pt";
HAnimSite744.name = "l_thelion_pt";
HAnimSite744.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
TouchSensor TouchSensor745 = createNode("TouchSensor");
TouchSensor745.description = "HAnimSite l_thelion_pt";
HAnimSite744.children = new MFNode();

HAnimSite744.children[0] = TouchSensor745;

Shape Shape746 = createNode("Shape");
Shape746.USE = "HAnimSiteShape";
HAnimSite744.children[1] = Shape746;

HAnimSegment736.children[2] = HAnimSite744;

HAnimSite HAnimSite747 = createNode("HAnimSite");
HAnimSite747.DEF = "hanim_r_thelion_pt";
HAnimSite747.name = "r_thelion_pt";
HAnimSite747.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
TouchSensor TouchSensor748 = createNode("TouchSensor");
TouchSensor748.description = "HAnimSite r_thelion_pt";
HAnimSite747.children = new MFNode();

HAnimSite747.children[0] = TouchSensor748;

Shape Shape749 = createNode("Shape");
Shape749.USE = "HAnimSiteShape";
HAnimSite747.children[1] = Shape749;

HAnimSegment736.children[3] = HAnimSite747;

HAnimJoint735.children = new MFNode();

HAnimJoint735.children[0] = HAnimSegment736;

HAnimJoint HAnimJoint750 = createNode("HAnimJoint");
HAnimJoint750.DEF = "hanim_vt9";
HAnimJoint750.name = "vt9";
HAnimJoint750.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
HAnimSegment HAnimSegment751 = createNode("HAnimSegment");
HAnimSegment751.DEF = "hanim_t9";
HAnimSegment751.name = "t9";
Transform Transform752 = createNode("Transform");
Transform752.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
Transform Transform753 = createNode("Transform");
Shape Shape754 = createNode("Shape");
Shape754.USE = "HAnimJointShape";
Transform753.child = new undefined();

Transform753.child[0] = Shape754;

Transform752.children = new MFNode();

Transform752.children[0] = Transform753;

HAnimSegment751.children = new MFNode();

HAnimSegment751.children[0] = Transform752;

Shape Shape755 = createNode("Shape");
LineSet LineSet756 = createNode("LineSet");
LineSet756.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA757 = createNode("ColorRGBA");
ColorRGBA757.USE = "HAnimSegmentLineColorRGBA";
LineSet756.color = ColorRGBA757;

Coordinate Coordinate758 = createNode("Coordinate");
Coordinate758.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet756.coord = Coordinate758;

Shape755.geometry = LineSet756;

HAnimSegment751.children[1] = Shape755;

HAnimJoint750.children = new MFNode();

HAnimJoint750.children[0] = HAnimSegment751;

HAnimJoint HAnimJoint759 = createNode("HAnimJoint");
HAnimJoint759.DEF = "hanim_vt8";
HAnimJoint759.name = "vt8";
HAnimJoint759.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
HAnimSegment HAnimSegment760 = createNode("HAnimSegment");
HAnimSegment760.DEF = "hanim_t8";
HAnimSegment760.name = "t8";
Transform Transform761 = createNode("Transform");
Transform761.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
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
Coordinate767.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet765.coord = Coordinate767;

Shape764.geometry = LineSet765;

HAnimSegment760.children[1] = Shape764;

HAnimJoint759.children = new MFNode();

HAnimJoint759.children[0] = HAnimSegment760;

HAnimJoint HAnimJoint768 = createNode("HAnimJoint");
HAnimJoint768.DEF = "hanim_vt7";
HAnimJoint768.name = "vt7";
HAnimJoint768.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
HAnimSegment HAnimSegment769 = createNode("HAnimSegment");
HAnimSegment769.DEF = "hanim_t7";
HAnimSegment769.name = "t7";
Transform Transform770 = createNode("Transform");
Transform770.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
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
Coordinate776.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet774.coord = Coordinate776;

Shape773.geometry = LineSet774;

HAnimSegment769.children[1] = Shape773;

HAnimSite HAnimSite777 = createNode("HAnimSite");
HAnimSite777.DEF = "hanim_l_chest_midsagittal_plane_pt";
HAnimSite777.name = "l_chest_midsagittal_plane_pt";
TouchSensor TouchSensor778 = createNode("TouchSensor");
TouchSensor778.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite777.children = new MFNode();

HAnimSite777.children[0] = TouchSensor778;

Shape Shape779 = createNode("Shape");
Shape779.USE = "HAnimSiteShape";
HAnimSite777.children[1] = Shape779;

HAnimSegment769.children[2] = HAnimSite777;

HAnimSite HAnimSite780 = createNode("HAnimSite");
HAnimSite780.DEF = "hanim_mesosternale_pt";
HAnimSite780.name = "mesosternale_pt";
TouchSensor TouchSensor781 = createNode("TouchSensor");
TouchSensor781.description = "HAnimSite mesosternale_pt";
HAnimSite780.children = new MFNode();

HAnimSite780.children[0] = TouchSensor781;

Shape Shape782 = createNode("Shape");
Shape782.USE = "HAnimSiteShape";
HAnimSite780.children[1] = Shape782;

HAnimSegment769.children[3] = HAnimSite780;

HAnimSite HAnimSite783 = createNode("HAnimSite");
HAnimSite783.DEF = "hanim_r_chest_midsagittal_plane_pt";
HAnimSite783.name = "r_chest_midsagittal_plane_pt";
TouchSensor TouchSensor784 = createNode("TouchSensor");
TouchSensor784.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite783.children = new MFNode();

HAnimSite783.children[0] = TouchSensor784;

Shape Shape785 = createNode("Shape");
Shape785.USE = "HAnimSiteShape";
HAnimSite783.children[1] = Shape785;

HAnimSegment769.children[4] = HAnimSite783;

HAnimSite HAnimSite786 = createNode("HAnimSite");
HAnimSite786.DEF = "hanim_rear_center_midsagittal_plane_pt";
HAnimSite786.name = "rear_center_midsagittal_plane_pt";
TouchSensor TouchSensor787 = createNode("TouchSensor");
TouchSensor787.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite786.children = new MFNode();

HAnimSite786.children[0] = TouchSensor787;

Shape Shape788 = createNode("Shape");
Shape788.USE = "HAnimSiteShape";
HAnimSite786.children[1] = Shape788;

HAnimSegment769.children[5] = HAnimSite786;

HAnimJoint768.children = new MFNode();

HAnimJoint768.children[0] = HAnimSegment769;

HAnimJoint HAnimJoint789 = createNode("HAnimJoint");
HAnimJoint789.DEF = "hanim_vt6";
HAnimJoint789.name = "vt6";
HAnimJoint789.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
HAnimSegment HAnimSegment790 = createNode("HAnimSegment");
HAnimSegment790.DEF = "hanim_t6";
HAnimSegment790.name = "t6";
Transform Transform791 = createNode("Transform");
Transform791.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
Transform Transform792 = createNode("Transform");
Shape Shape793 = createNode("Shape");
Shape793.USE = "HAnimJointShape";
Transform792.child = new undefined();

Transform792.child[0] = Shape793;

Transform791.children = new MFNode();

Transform791.children[0] = Transform792;

HAnimSegment790.children = new MFNode();

HAnimSegment790.children[0] = Transform791;

Shape Shape794 = createNode("Shape");
LineSet LineSet795 = createNode("LineSet");
LineSet795.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA796 = createNode("ColorRGBA");
ColorRGBA796.USE = "HAnimSegmentLineColorRGBA";
LineSet795.color = ColorRGBA796;

Coordinate Coordinate797 = createNode("Coordinate");
Coordinate797.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet795.coord = Coordinate797;

Shape794.geometry = LineSet795;

HAnimSegment790.children[1] = Shape794;

HAnimSite HAnimSite798 = createNode("HAnimSite");
HAnimSite798.DEF = "hanim_spine_1_middle_back_pt";
HAnimSite798.name = "spine_1_middle_back_pt";
TouchSensor TouchSensor799 = createNode("TouchSensor");
TouchSensor799.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite798.children = new MFNode();

HAnimSite798.children[0] = TouchSensor799;

Shape Shape800 = createNode("Shape");
Shape800.USE = "HAnimSiteShape";
HAnimSite798.children[1] = Shape800;

HAnimSegment790.children[2] = HAnimSite798;

HAnimJoint789.children = new MFNode();

HAnimJoint789.children[0] = HAnimSegment790;

HAnimJoint HAnimJoint801 = createNode("HAnimJoint");
HAnimJoint801.DEF = "hanim_vt5";
HAnimJoint801.name = "vt5";
HAnimJoint801.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
HAnimSegment HAnimSegment802 = createNode("HAnimSegment");
HAnimSegment802.DEF = "hanim_t5";
HAnimSegment802.name = "t5";
Transform Transform803 = createNode("Transform");
Transform803.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
Transform Transform804 = createNode("Transform");
Shape Shape805 = createNode("Shape");
Shape805.USE = "HAnimJointShape";
Transform804.child = new undefined();

Transform804.child[0] = Shape805;

Transform803.children = new MFNode();

Transform803.children[0] = Transform804;

HAnimSegment802.children = new MFNode();

HAnimSegment802.children[0] = Transform803;

Shape Shape806 = createNode("Shape");
LineSet LineSet807 = createNode("LineSet");
LineSet807.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA808 = createNode("ColorRGBA");
ColorRGBA808.USE = "HAnimSegmentLineColorRGBA";
LineSet807.color = ColorRGBA808;

Coordinate Coordinate809 = createNode("Coordinate");
Coordinate809.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet807.coord = Coordinate809;

Shape806.geometry = LineSet807;

HAnimSegment802.children[1] = Shape806;

HAnimJoint801.children = new MFNode();

HAnimJoint801.children[0] = HAnimSegment802;

HAnimJoint HAnimJoint810 = createNode("HAnimJoint");
HAnimJoint810.DEF = "hanim_vt4";
HAnimJoint810.name = "vt4";
HAnimJoint810.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
HAnimSegment HAnimSegment811 = createNode("HAnimSegment");
HAnimSegment811.DEF = "hanim_t4";
HAnimSegment811.name = "t4";
Transform Transform812 = createNode("Transform");
Transform812.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
Transform Transform813 = createNode("Transform");
Shape Shape814 = createNode("Shape");
Shape814.USE = "HAnimJointShape";
Transform813.child = new undefined();

Transform813.child[0] = Shape814;

Transform812.children = new MFNode();

Transform812.children[0] = Transform813;

HAnimSegment811.children = new MFNode();

HAnimSegment811.children[0] = Transform812;

Shape Shape815 = createNode("Shape");
LineSet LineSet816 = createNode("LineSet");
LineSet816.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA817 = createNode("ColorRGBA");
ColorRGBA817.USE = "HAnimSegmentLineColorRGBA";
LineSet816.color = ColorRGBA817;

Coordinate Coordinate818 = createNode("Coordinate");
Coordinate818.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet816.coord = Coordinate818;

Shape815.geometry = LineSet816;

HAnimSegment811.children[1] = Shape815;

HAnimJoint810.children = new MFNode();

HAnimJoint810.children[0] = HAnimSegment811;

HAnimJoint HAnimJoint819 = createNode("HAnimJoint");
HAnimJoint819.DEF = "hanim_vt3";
HAnimJoint819.name = "vt3";
HAnimJoint819.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
HAnimSegment HAnimSegment820 = createNode("HAnimSegment");
HAnimSegment820.DEF = "hanim_t3";
HAnimSegment820.name = "t3";
Transform Transform821 = createNode("Transform");
Transform821.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
Transform Transform822 = createNode("Transform");
Shape Shape823 = createNode("Shape");
Shape823.USE = "HAnimJointShape";
Transform822.child = new undefined();

Transform822.child[0] = Shape823;

Transform821.children = new MFNode();

Transform821.children[0] = Transform822;

HAnimSegment820.children = new MFNode();

HAnimSegment820.children[0] = Transform821;

Shape Shape824 = createNode("Shape");
LineSet LineSet825 = createNode("LineSet");
LineSet825.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA826 = createNode("ColorRGBA");
ColorRGBA826.USE = "HAnimSegmentLineColorRGBA";
LineSet825.color = ColorRGBA826;

Coordinate Coordinate827 = createNode("Coordinate");
Coordinate827.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet825.coord = Coordinate827;

Shape824.geometry = LineSet825;

HAnimSegment820.children[1] = Shape824;

HAnimJoint819.children = new MFNode();

HAnimJoint819.children[0] = HAnimSegment820;

HAnimJoint HAnimJoint828 = createNode("HAnimJoint");
HAnimJoint828.DEF = "hanim_vt2";
HAnimJoint828.name = "vt2";
HAnimJoint828.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
HAnimSegment HAnimSegment829 = createNode("HAnimSegment");
HAnimSegment829.DEF = "hanim_t2";
HAnimSegment829.name = "t2";
Transform Transform830 = createNode("Transform");
Transform830.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
Transform Transform831 = createNode("Transform");
Shape Shape832 = createNode("Shape");
Shape832.USE = "HAnimJointShape";
Transform831.child = new undefined();

Transform831.child[0] = Shape832;

Transform830.children = new MFNode();

Transform830.children[0] = Transform831;

HAnimSegment829.children = new MFNode();

HAnimSegment829.children[0] = Transform830;

Shape Shape833 = createNode("Shape");
LineSet LineSet834 = createNode("LineSet");
LineSet834.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA835 = createNode("ColorRGBA");
ColorRGBA835.USE = "HAnimSegmentLineColorRGBA";
LineSet834.color = ColorRGBA835;

Coordinate Coordinate836 = createNode("Coordinate");
Coordinate836.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet834.coord = Coordinate836;

Shape833.geometry = LineSet834;

HAnimSegment829.children[1] = Shape833;

HAnimSite HAnimSite837 = createNode("HAnimSite");
HAnimSite837.DEF = "hanim_cervicale_pt";
HAnimSite837.name = "cervicale_pt";
HAnimSite837.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
TouchSensor TouchSensor838 = createNode("TouchSensor");
TouchSensor838.description = "HAnimSite cervicale_pt";
HAnimSite837.children = new MFNode();

HAnimSite837.children[0] = TouchSensor838;

Shape Shape839 = createNode("Shape");
Shape839.USE = "HAnimSiteShape";
HAnimSite837.children[1] = Shape839;

HAnimSegment829.children[2] = HAnimSite837;

HAnimSite HAnimSite840 = createNode("HAnimSite");
HAnimSite840.DEF = "hanim_suprasternale_pt";
HAnimSite840.name = "suprasternale_pt";
HAnimSite840.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
TouchSensor TouchSensor841 = createNode("TouchSensor");
TouchSensor841.description = "HAnimSite suprasternale_pt";
HAnimSite840.children = new MFNode();

HAnimSite840.children[0] = TouchSensor841;

Shape Shape842 = createNode("Shape");
Shape842.USE = "HAnimSiteShape";
HAnimSite840.children[1] = Shape842;

HAnimSegment829.children[3] = HAnimSite840;

HAnimJoint828.children = new MFNode();

HAnimJoint828.children[0] = HAnimSegment829;

HAnimJoint HAnimJoint843 = createNode("HAnimJoint");
HAnimJoint843.DEF = "hanim_vt1";
HAnimJoint843.name = "vt1";
HAnimJoint843.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
HAnimSegment HAnimSegment844 = createNode("HAnimSegment");
HAnimSegment844.DEF = "hanim_t1";
HAnimSegment844.name = "t1";
Transform Transform845 = createNode("Transform");
Transform845.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
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
Coordinate851.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet849.coord = Coordinate851;

Shape848.geometry = LineSet849;

HAnimSegment844.children[1] = Shape848;

HAnimSite HAnimSite852 = createNode("HAnimSite");
HAnimSite852.DEF = "hanim_l_neck_base_pt";
HAnimSite852.name = "l_neck_base_pt";
HAnimSite852.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
TouchSensor TouchSensor853 = createNode("TouchSensor");
TouchSensor853.description = "HAnimSite l_neck_base_pt";
HAnimSite852.children = new MFNode();

HAnimSite852.children[0] = TouchSensor853;

Shape Shape854 = createNode("Shape");
Shape854.USE = "HAnimSiteShape";
HAnimSite852.children[1] = Shape854;

HAnimSegment844.children[2] = HAnimSite852;

HAnimSite HAnimSite855 = createNode("HAnimSite");
HAnimSite855.DEF = "hanim_r_neck_base_pt";
HAnimSite855.name = "r_neck_base_pt";
HAnimSite855.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
TouchSensor TouchSensor856 = createNode("TouchSensor");
TouchSensor856.description = "HAnimSite r_neck_base_pt";
HAnimSite855.children = new MFNode();

HAnimSite855.children[0] = TouchSensor856;

Shape Shape857 = createNode("Shape");
Shape857.USE = "HAnimSiteShape";
HAnimSite855.children[1] = Shape857;

HAnimSegment844.children[3] = HAnimSite855;

Shape Shape858 = createNode("Shape");
LineSet LineSet859 = createNode("LineSet");
LineSet859.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA860 = createNode("ColorRGBA");
ColorRGBA860.USE = "HAnimSegmentLineColorRGBA";
LineSet859.color = ColorRGBA860;

Coordinate Coordinate861 = createNode("Coordinate");
Coordinate861.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet859.coord = Coordinate861;

Shape858.geometry = LineSet859;

HAnimSegment844.children[4] = Shape858;

HAnimSite HAnimSite862 = createNode("HAnimSite");
HAnimSite862.DEF = "hanim_l_acromion_pt";
HAnimSite862.name = "l_acromion_pt";
HAnimSite862.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
TouchSensor TouchSensor863 = createNode("TouchSensor");
TouchSensor863.description = "HAnimSite l_acromion_pt";
HAnimSite862.children = new MFNode();

HAnimSite862.children[0] = TouchSensor863;

Shape Shape864 = createNode("Shape");
Shape864.USE = "HAnimSiteShape";
HAnimSite862.children[1] = Shape864;

HAnimSegment844.children[5] = HAnimSite862;

HAnimSite HAnimSite865 = createNode("HAnimSite");
HAnimSite865.DEF = "hanim_l_axilla_distal_pt";
HAnimSite865.name = "l_axilla_distal_pt";
HAnimSite865.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
TouchSensor TouchSensor866 = createNode("TouchSensor");
TouchSensor866.description = "HAnimSite l_axilla_distal_pt";
HAnimSite865.children = new MFNode();

HAnimSite865.children[0] = TouchSensor866;

Shape Shape867 = createNode("Shape");
Shape867.USE = "HAnimSiteShape";
HAnimSite865.children[1] = Shape867;

HAnimSegment844.children[6] = HAnimSite865;

HAnimSite HAnimSite868 = createNode("HAnimSite");
HAnimSite868.DEF = "hanim_l_axilla_posterior_folds_pt";
HAnimSite868.name = "l_axilla_posterior_folds_pt";
TouchSensor TouchSensor869 = createNode("TouchSensor");
TouchSensor869.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite868.children = new MFNode();

HAnimSite868.children[0] = TouchSensor869;

Shape Shape870 = createNode("Shape");
Shape870.USE = "HAnimSiteShape";
HAnimSite868.children[1] = Shape870;

HAnimSegment844.children[7] = HAnimSite868;

HAnimSite HAnimSite871 = createNode("HAnimSite");
HAnimSite871.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite871.name = "l_axilla_proximal_pt";
HAnimSite871.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
TouchSensor TouchSensor872 = createNode("TouchSensor");
TouchSensor872.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite871.children = new MFNode();

HAnimSite871.children[0] = TouchSensor872;

Shape Shape873 = createNode("Shape");
Shape873.USE = "HAnimSiteShape";
HAnimSite871.children[1] = Shape873;

HAnimSegment844.children[8] = HAnimSite871;

HAnimSite HAnimSite874 = createNode("HAnimSite");
HAnimSite874.DEF = "hanim_l_clavicale_pt";
HAnimSite874.name = "l_clavicale_pt";
HAnimSite874.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
TouchSensor TouchSensor875 = createNode("TouchSensor");
TouchSensor875.description = "HAnimSite l_clavicale_pt";
HAnimSite874.children = new MFNode();

HAnimSite874.children[0] = TouchSensor875;

Shape Shape876 = createNode("Shape");
Shape876.USE = "HAnimSiteShape";
HAnimSite874.children[1] = Shape876;

HAnimSegment844.children[9] = HAnimSite874;

Shape Shape877 = createNode("Shape");
LineSet LineSet878 = createNode("LineSet");
LineSet878.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA879 = createNode("ColorRGBA");
ColorRGBA879.USE = "HAnimSegmentLineColorRGBA";
LineSet878.color = ColorRGBA879;

Coordinate Coordinate880 = createNode("Coordinate");
Coordinate880.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet878.coord = Coordinate880;

Shape877.geometry = LineSet878;

HAnimSegment844.children[10] = Shape877;

HAnimSite HAnimSite881 = createNode("HAnimSite");
HAnimSite881.DEF = "hanim_r_acromion_pt";
HAnimSite881.name = "r_acromion_pt";
HAnimSite881.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
TouchSensor TouchSensor882 = createNode("TouchSensor");
TouchSensor882.description = "HAnimSite r_acromion_pt";
HAnimSite881.children = new MFNode();

HAnimSite881.children[0] = TouchSensor882;

Shape Shape883 = createNode("Shape");
Shape883.USE = "HAnimSiteShape";
HAnimSite881.children[1] = Shape883;

HAnimSegment844.children[11] = HAnimSite881;

HAnimSite HAnimSite884 = createNode("HAnimSite");
HAnimSite884.DEF = "hanim_r_axilla_distal_pt";
HAnimSite884.name = "r_axilla_distal_pt";
HAnimSite884.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
TouchSensor TouchSensor885 = createNode("TouchSensor");
TouchSensor885.description = "HAnimSite r_axilla_distal_pt";
HAnimSite884.children = new MFNode();

HAnimSite884.children[0] = TouchSensor885;

Shape Shape886 = createNode("Shape");
Shape886.USE = "HAnimSiteShape";
HAnimSite884.children[1] = Shape886;

HAnimSegment844.children[12] = HAnimSite884;

HAnimSite HAnimSite887 = createNode("HAnimSite");
HAnimSite887.DEF = "hanim_r_axilla_posterior_folds_pt";
HAnimSite887.name = "r_axilla_posterior_folds_pt";
TouchSensor TouchSensor888 = createNode("TouchSensor");
TouchSensor888.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite887.children = new MFNode();

HAnimSite887.children[0] = TouchSensor888;

Shape Shape889 = createNode("Shape");
Shape889.USE = "HAnimSiteShape";
HAnimSite887.children[1] = Shape889;

HAnimSegment844.children[13] = HAnimSite887;

HAnimSite HAnimSite890 = createNode("HAnimSite");
HAnimSite890.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite890.name = "r_axilla_proximal_pt";
HAnimSite890.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
TouchSensor TouchSensor891 = createNode("TouchSensor");
TouchSensor891.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite890.children = new MFNode();

HAnimSite890.children[0] = TouchSensor891;

Shape Shape892 = createNode("Shape");
Shape892.USE = "HAnimSiteShape";
HAnimSite890.children[1] = Shape892;

HAnimSegment844.children[14] = HAnimSite890;

HAnimSite HAnimSite893 = createNode("HAnimSite");
HAnimSite893.DEF = "hanim_r_clavicale_pt";
HAnimSite893.name = "r_clavicale_pt";
HAnimSite893.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
TouchSensor TouchSensor894 = createNode("TouchSensor");
TouchSensor894.description = "HAnimSite r_clavicale_pt";
HAnimSite893.children = new MFNode();

HAnimSite893.children[0] = TouchSensor894;

Shape Shape895 = createNode("Shape");
Shape895.USE = "HAnimSiteShape";
HAnimSite893.children[1] = Shape895;

HAnimSegment844.children[15] = HAnimSite893;

HAnimJoint843.children = new MFNode();

HAnimJoint843.children[0] = HAnimSegment844;

HAnimJoint HAnimJoint896 = createNode("HAnimJoint");
HAnimJoint896.DEF = "hanim_vc7";
HAnimJoint896.name = "vc7";
HAnimJoint896.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
HAnimSegment HAnimSegment897 = createNode("HAnimSegment");
HAnimSegment897.DEF = "hanim_c7";
HAnimSegment897.name = "c7";
Transform Transform898 = createNode("Transform");
Transform898.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
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
Coordinate904.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet902.coord = Coordinate904;

Shape901.geometry = LineSet902;

HAnimSegment897.children[1] = Shape901;

HAnimJoint896.children = new MFNode();

HAnimJoint896.children[0] = HAnimSegment897;

HAnimJoint HAnimJoint905 = createNode("HAnimJoint");
HAnimJoint905.DEF = "hanim_vc6";
HAnimJoint905.name = "vc6";
HAnimJoint905.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
HAnimSegment HAnimSegment906 = createNode("HAnimSegment");
HAnimSegment906.DEF = "hanim_c6";
HAnimSegment906.name = "c6";
Transform Transform907 = createNode("Transform");
Transform907.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
Transform Transform908 = createNode("Transform");
Shape Shape909 = createNode("Shape");
Shape909.USE = "HAnimJointShape";
Transform908.child = new undefined();

Transform908.child[0] = Shape909;

Transform907.children = new MFNode();

Transform907.children[0] = Transform908;

HAnimSegment906.children = new MFNode();

HAnimSegment906.children[0] = Transform907;

Shape Shape910 = createNode("Shape");
LineSet LineSet911 = createNode("LineSet");
LineSet911.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA912 = createNode("ColorRGBA");
ColorRGBA912.USE = "HAnimSegmentLineColorRGBA";
LineSet911.color = ColorRGBA912;

Coordinate Coordinate913 = createNode("Coordinate");
Coordinate913.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet911.coord = Coordinate913;

Shape910.geometry = LineSet911;

HAnimSegment906.children[1] = Shape910;

HAnimJoint905.children = new MFNode();

HAnimJoint905.children[0] = HAnimSegment906;

HAnimJoint HAnimJoint914 = createNode("HAnimJoint");
HAnimJoint914.DEF = "hanim_vc5";
HAnimJoint914.name = "vc5";
HAnimJoint914.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
HAnimSegment HAnimSegment915 = createNode("HAnimSegment");
HAnimSegment915.DEF = "hanim_c5";
HAnimSegment915.name = "c5";
Transform Transform916 = createNode("Transform");
Transform916.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
Transform Transform917 = createNode("Transform");
Shape Shape918 = createNode("Shape");
Shape918.USE = "HAnimJointShape";
Transform917.child = new undefined();

Transform917.child[0] = Shape918;

Transform916.children = new MFNode();

Transform916.children[0] = Transform917;

HAnimSegment915.children = new MFNode();

HAnimSegment915.children[0] = Transform916;

Shape Shape919 = createNode("Shape");
LineSet LineSet920 = createNode("LineSet");
LineSet920.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA921 = createNode("ColorRGBA");
ColorRGBA921.USE = "HAnimSegmentLineColorRGBA";
LineSet920.color = ColorRGBA921;

Coordinate Coordinate922 = createNode("Coordinate");
Coordinate922.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet920.coord = Coordinate922;

Shape919.geometry = LineSet920;

HAnimSegment915.children[1] = Shape919;

HAnimJoint914.children = new MFNode();

HAnimJoint914.children[0] = HAnimSegment915;

HAnimJoint HAnimJoint923 = createNode("HAnimJoint");
HAnimJoint923.DEF = "hanim_vc4";
HAnimJoint923.name = "vc4";
HAnimJoint923.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
HAnimSegment HAnimSegment924 = createNode("HAnimSegment");
HAnimSegment924.DEF = "hanim_c4";
HAnimSegment924.name = "c4";
Transform Transform925 = createNode("Transform");
Transform925.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
Transform Transform926 = createNode("Transform");
Shape Shape927 = createNode("Shape");
Shape927.USE = "HAnimJointShape";
Transform926.child = new undefined();

Transform926.child[0] = Shape927;

Transform925.children = new MFNode();

Transform925.children[0] = Transform926;

HAnimSegment924.children = new MFNode();

HAnimSegment924.children[0] = Transform925;

Shape Shape928 = createNode("Shape");
LineSet LineSet929 = createNode("LineSet");
LineSet929.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA930 = createNode("ColorRGBA");
ColorRGBA930.USE = "HAnimSegmentLineColorRGBA";
LineSet929.color = ColorRGBA930;

Coordinate Coordinate931 = createNode("Coordinate");
Coordinate931.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet929.coord = Coordinate931;

Shape928.geometry = LineSet929;

HAnimSegment924.children[1] = Shape928;

HAnimJoint923.children = new MFNode();

HAnimJoint923.children[0] = HAnimSegment924;

HAnimJoint HAnimJoint932 = createNode("HAnimJoint");
HAnimJoint932.DEF = "hanim_vc3";
HAnimJoint932.name = "vc3";
HAnimJoint932.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
HAnimSegment HAnimSegment933 = createNode("HAnimSegment");
HAnimSegment933.DEF = "hanim_c3";
HAnimSegment933.name = "c3";
Transform Transform934 = createNode("Transform");
Transform934.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
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
Coordinate940.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet938.coord = Coordinate940;

Shape937.geometry = LineSet938;

HAnimSegment933.children[1] = Shape937;

HAnimSite HAnimSite941 = createNode("HAnimSite");
HAnimSite941.DEF = "hanim_adams_apple_pt";
HAnimSite941.name = "adams_apple_pt";
TouchSensor TouchSensor942 = createNode("TouchSensor");
TouchSensor942.description = "HAnimSite adams_apple_pt";
HAnimSite941.children = new MFNode();

HAnimSite941.children[0] = TouchSensor942;

Shape Shape943 = createNode("Shape");
Shape943.USE = "HAnimSiteShape";
HAnimSite941.children[1] = Shape943;

HAnimSegment933.children[2] = HAnimSite941;

HAnimJoint932.children = new MFNode();

HAnimJoint932.children[0] = HAnimSegment933;

HAnimJoint HAnimJoint944 = createNode("HAnimJoint");
HAnimJoint944.DEF = "hanim_vc2";
HAnimJoint944.name = "vc2";
HAnimJoint944.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
HAnimSegment HAnimSegment945 = createNode("HAnimSegment");
HAnimSegment945.DEF = "hanim_c2";
HAnimSegment945.name = "c2";
Transform Transform946 = createNode("Transform");
Transform946.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
Transform Transform947 = createNode("Transform");
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
Coordinate952.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet950.coord = Coordinate952;

Shape949.geometry = LineSet950;

HAnimSegment945.children[1] = Shape949;

HAnimJoint944.children = new MFNode();

HAnimJoint944.children[0] = HAnimSegment945;

HAnimJoint HAnimJoint953 = createNode("HAnimJoint");
HAnimJoint953.DEF = "hanim_vc1";
HAnimJoint953.name = "vc1";
HAnimJoint953.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
HAnimSegment HAnimSegment954 = createNode("HAnimSegment");
HAnimSegment954.DEF = "hanim_c1";
HAnimSegment954.name = "c1";
Transform Transform955 = createNode("Transform");
Transform955.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
Transform Transform956 = createNode("Transform");
Shape Shape957 = createNode("Shape");
Shape957.USE = "HAnimJointShape";
Transform956.child = new undefined();

Transform956.child[0] = Shape957;

Transform955.children = new MFNode();

Transform955.children[0] = Transform956;

HAnimSegment954.children = new MFNode();

HAnimSegment954.children[0] = Transform955;

Shape Shape958 = createNode("Shape");
LineSet LineSet959 = createNode("LineSet");
LineSet959.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA960 = createNode("ColorRGBA");
ColorRGBA960.USE = "HAnimSegmentLineColorRGBA";
LineSet959.color = ColorRGBA960;

Coordinate Coordinate961 = createNode("Coordinate");
Coordinate961.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet959.coord = Coordinate961;

Shape958.geometry = LineSet959;

HAnimSegment954.children[1] = Shape958;

HAnimSite HAnimSite962 = createNode("HAnimSite");
HAnimSite962.DEF = "hanim_glabella_pt";
HAnimSite962.name = "glabella_pt";
TouchSensor TouchSensor963 = createNode("TouchSensor");
TouchSensor963.description = "HAnimSite glabella_pt";
HAnimSite962.children = new MFNode();

HAnimSite962.children[0] = TouchSensor963;

Shape Shape964 = createNode("Shape");
Shape964.USE = "HAnimSiteShape";
HAnimSite962.children[1] = Shape964;

HAnimSegment954.children[2] = HAnimSite962;

HAnimSite HAnimSite965 = createNode("HAnimSite");
HAnimSite965.DEF = "hanim_l_ectocanthus_pt";
HAnimSite965.name = "l_ectocanthus_pt";
TouchSensor TouchSensor966 = createNode("TouchSensor");
TouchSensor966.description = "HAnimSite l_ectocanthus_pt";
HAnimSite965.children = new MFNode();

HAnimSite965.children[0] = TouchSensor966;

Shape Shape967 = createNode("Shape");
Shape967.USE = "HAnimSiteShape";
HAnimSite965.children[1] = Shape967;

HAnimSegment954.children[3] = HAnimSite965;

HAnimSite HAnimSite968 = createNode("HAnimSite");
HAnimSite968.DEF = "hanim_l_infraorbitale_pt";
HAnimSite968.name = "l_infraorbitale_pt";
HAnimSite968.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
TouchSensor TouchSensor969 = createNode("TouchSensor");
TouchSensor969.description = "HAnimSite l_infraorbitale_pt";
HAnimSite968.children = new MFNode();

HAnimSite968.children[0] = TouchSensor969;

Shape Shape970 = createNode("Shape");
Shape970.USE = "HAnimSiteShape";
HAnimSite968.children[1] = Shape970;

HAnimSegment954.children[4] = HAnimSite968;

HAnimSite HAnimSite971 = createNode("HAnimSite");
HAnimSite971.DEF = "hanim_l_tragion_pt";
HAnimSite971.name = "l_tragion_pt";
HAnimSite971.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
TouchSensor TouchSensor972 = createNode("TouchSensor");
TouchSensor972.description = "HAnimSite l_tragion_pt";
HAnimSite971.children = new MFNode();

HAnimSite971.children[0] = TouchSensor972;

Shape Shape973 = createNode("Shape");
Shape973.USE = "HAnimSiteShape";
HAnimSite971.children[1] = Shape973;

HAnimSegment954.children[5] = HAnimSite971;

HAnimSite HAnimSite974 = createNode("HAnimSite");
HAnimSite974.DEF = "hanim_nuchale_pt";
HAnimSite974.name = "nuchale_pt";
HAnimSite974.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
TouchSensor TouchSensor975 = createNode("TouchSensor");
TouchSensor975.description = "HAnimSite nuchale_pt";
HAnimSite974.children = new MFNode();

HAnimSite974.children[0] = TouchSensor975;

Shape Shape976 = createNode("Shape");
Shape976.USE = "HAnimSiteShape";
HAnimSite974.children[1] = Shape976;

HAnimSegment954.children[6] = HAnimSite974;

HAnimSite HAnimSite977 = createNode("HAnimSite");
HAnimSite977.DEF = "hanim_opisthocranion_pt";
HAnimSite977.name = "opisthocranion_pt";
TouchSensor TouchSensor978 = createNode("TouchSensor");
TouchSensor978.description = "HAnimSite opisthocranion_pt";
HAnimSite977.children = new MFNode();

HAnimSite977.children[0] = TouchSensor978;

Shape Shape979 = createNode("Shape");
Shape979.USE = "HAnimSiteShape";
HAnimSite977.children[1] = Shape979;

HAnimSegment954.children[7] = HAnimSite977;

HAnimSite HAnimSite980 = createNode("HAnimSite");
HAnimSite980.DEF = "hanim_r_ectocanthus_pt";
HAnimSite980.name = "r_ectocanthus_pt";
TouchSensor TouchSensor981 = createNode("TouchSensor");
TouchSensor981.description = "HAnimSite r_ectocanthus_pt";
HAnimSite980.children = new MFNode();

HAnimSite980.children[0] = TouchSensor981;

Shape Shape982 = createNode("Shape");
Shape982.USE = "HAnimSiteShape";
HAnimSite980.children[1] = Shape982;

HAnimSegment954.children[8] = HAnimSite980;

HAnimSite HAnimSite983 = createNode("HAnimSite");
HAnimSite983.DEF = "hanim_r_infraorbitale_pt";
HAnimSite983.name = "r_infraorbitale_pt";
HAnimSite983.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
TouchSensor TouchSensor984 = createNode("TouchSensor");
TouchSensor984.description = "HAnimSite r_infraorbitale_pt";
HAnimSite983.children = new MFNode();

HAnimSite983.children[0] = TouchSensor984;

Shape Shape985 = createNode("Shape");
Shape985.USE = "HAnimSiteShape";
HAnimSite983.children[1] = Shape985;

HAnimSegment954.children[9] = HAnimSite983;

HAnimSite HAnimSite986 = createNode("HAnimSite");
HAnimSite986.DEF = "hanim_r_tragion_pt";
HAnimSite986.name = "r_tragion_pt";
HAnimSite986.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
TouchSensor TouchSensor987 = createNode("TouchSensor");
TouchSensor987.description = "HAnimSite r_tragion_pt";
HAnimSite986.children = new MFNode();

HAnimSite986.children[0] = TouchSensor987;

Shape Shape988 = createNode("Shape");
Shape988.USE = "HAnimSiteShape";
HAnimSite986.children[1] = Shape988;

HAnimSegment954.children[10] = HAnimSite986;

HAnimSite HAnimSite989 = createNode("HAnimSite");
HAnimSite989.DEF = "hanim_sellion_pt";
HAnimSite989.name = "sellion_pt";
HAnimSite989.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
TouchSensor TouchSensor990 = createNode("TouchSensor");
TouchSensor990.description = "HAnimSite sellion_pt";
HAnimSite989.children = new MFNode();

HAnimSite989.children[0] = TouchSensor990;

Shape Shape991 = createNode("Shape");
Shape991.USE = "HAnimSiteShape";
HAnimSite989.children[1] = Shape991;

HAnimSegment954.children[11] = HAnimSite989;

HAnimSite HAnimSite992 = createNode("HAnimSite");
HAnimSite992.DEF = "hanim_skull_vertex_pt";
HAnimSite992.name = "skull_vertex_pt";
HAnimSite992.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
TouchSensor TouchSensor993 = createNode("TouchSensor");
TouchSensor993.description = "HAnimSite skull_vertex_pt";
HAnimSite992.children = new MFNode();

HAnimSite992.children[0] = TouchSensor993;

Shape Shape994 = createNode("Shape");
Shape994.USE = "HAnimSiteShape";
HAnimSite992.children[1] = Shape994;

HAnimSegment954.children[12] = HAnimSite992;

HAnimJoint953.children = new MFNode();

HAnimJoint953.children[0] = HAnimSegment954;

HAnimJoint HAnimJoint995 = createNode("HAnimJoint");
HAnimJoint995.DEF = "hanim_skullbase";
HAnimJoint995.name = "skullbase";
HAnimJoint995.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimSegment HAnimSegment996 = createNode("HAnimSegment");
HAnimSegment996.DEF = "hanim_skull";
HAnimSegment996.name = "skull";
Transform Transform997 = createNode("Transform");
Transform997.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
Transform Transform998 = createNode("Transform");
Shape Shape999 = createNode("Shape");
Shape999.USE = "HAnimJointShape";
Transform998.child = new undefined();

Transform998.child[0] = Shape999;

Transform997.children = new MFNode();

Transform997.children[0] = Transform998;

HAnimSegment996.children = new MFNode();

HAnimSegment996.children[0] = Transform997;

Shape Shape1000 = createNode("Shape");
LineSet LineSet1001 = createNode("LineSet");
LineSet1001.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1002 = createNode("ColorRGBA");
ColorRGBA1002.USE = "HAnimSegmentLineColorRGBA";
LineSet1001.color = ColorRGBA1002;

Coordinate Coordinate1003 = createNode("Coordinate");
Coordinate1003.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0503,1.4157,-0.0689]);
LineSet1001.coord = Coordinate1003;

Shape1000.geometry = LineSet1001;

HAnimSegment996.children[1] = Shape1000;

Shape Shape1004 = createNode("Shape");
LineSet LineSet1005 = createNode("LineSet");
LineSet1005.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1006 = createNode("ColorRGBA");
ColorRGBA1006.USE = "HAnimSegmentLineColorRGBA";
LineSet1005.color = ColorRGBA1006;

Coordinate Coordinate1007 = createNode("Coordinate");
Coordinate1007.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0507,1.4157,-0.0689]);
LineSet1005.coord = Coordinate1007;

Shape1004.geometry = LineSet1005;

HAnimSegment996.children[2] = Shape1004;

Shape Shape1008 = createNode("Shape");
LineSet LineSet1009 = createNode("LineSet");
LineSet1009.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1010 = createNode("ColorRGBA");
ColorRGBA1010.USE = "HAnimSegmentLineColorRGBA";
LineSet1009.color = ColorRGBA1010;

Coordinate Coordinate1011 = createNode("Coordinate");
Coordinate1011.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0479,1.3963,-0.0188]);
LineSet1009.coord = Coordinate1011;

Shape1008.geometry = LineSet1009;

HAnimSegment996.children[3] = Shape1008;

Shape Shape1012 = createNode("Shape");
LineSet LineSet1013 = createNode("LineSet");
LineSet1013.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1014 = createNode("ColorRGBA");
ColorRGBA1014.USE = "HAnimSegmentLineColorRGBA";
LineSet1013.color = ColorRGBA1014;

Coordinate Coordinate1015 = createNode("Coordinate");
Coordinate1015.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0483,1.3963,-0.0188]);
LineSet1013.coord = Coordinate1015;

Shape1012.geometry = LineSet1013;

HAnimSegment996.children[4] = Shape1012;

Shape Shape1016 = createNode("Shape");
LineSet LineSet1017 = createNode("LineSet");
LineSet1017.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1018 = createNode("ColorRGBA");
ColorRGBA1018.USE = "HAnimSegmentLineColorRGBA";
LineSet1017.color = ColorRGBA1018;

Coordinate Coordinate1019 = createNode("Coordinate");
Coordinate1019.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.0216,1.4053,0.0051]);
LineSet1017.coord = Coordinate1019;

Shape1016.geometry = LineSet1017;

HAnimSegment996.children[5] = Shape1016;

Shape Shape1020 = createNode("Shape");
LineSet LineSet1021 = createNode("LineSet");
LineSet1021.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1022 = createNode("ColorRGBA");
ColorRGBA1022.USE = "HAnimSegmentLineColorRGBA";
LineSet1021.color = ColorRGBA1022;

Coordinate Coordinate1023 = createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0219,1.4053,0.0051]);
LineSet1021.coord = Coordinate1023;

Shape1020.geometry = LineSet1021;

HAnimSegment996.children[6] = Shape1020;

Shape Shape1024 = createNode("Shape");
LineSet LineSet1025 = createNode("LineSet");
LineSet1025.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1026 = createNode("ColorRGBA");
ColorRGBA1026.USE = "HAnimSegmentLineColorRGBA";
LineSet1025.color = ColorRGBA1026;

Coordinate Coordinate1027 = createNode("Coordinate");
Coordinate1027.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0002,1.3043,-0.0865]);
LineSet1025.coord = Coordinate1027;

Shape1024.geometry = LineSet1025;

HAnimSegment996.children[7] = Shape1024;

HAnimSite HAnimSite1028 = createNode("HAnimSite");
HAnimSite1028.DEF = "hanim_l_gonion_pt";
HAnimSite1028.name = "l_gonion_pt";
HAnimSite1028.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
TouchSensor TouchSensor1029 = createNode("TouchSensor");
TouchSensor1029.description = "HAnimSite l_gonion_pt";
HAnimSite1028.children = new MFNode();

HAnimSite1028.children[0] = TouchSensor1029;

Shape Shape1030 = createNode("Shape");
Shape1030.USE = "HAnimSiteShape";
HAnimSite1028.children[1] = Shape1030;

HAnimSegment996.children[8] = HAnimSite1028;

HAnimSite HAnimSite1031 = createNode("HAnimSite");
HAnimSite1031.DEF = "hanim_menton_pt";
HAnimSite1031.name = "menton_pt";
TouchSensor TouchSensor1032 = createNode("TouchSensor");
TouchSensor1032.description = "HAnimSite menton_pt";
HAnimSite1031.children = new MFNode();

HAnimSite1031.children[0] = TouchSensor1032;

Shape Shape1033 = createNode("Shape");
Shape1033.USE = "HAnimSiteShape";
HAnimSite1031.children[1] = Shape1033;

HAnimSegment996.children[9] = HAnimSite1031;

HAnimSite HAnimSite1034 = createNode("HAnimSite");
HAnimSite1034.DEF = "hanim_r_gonion_pt";
HAnimSite1034.name = "r_gonion_pt";
HAnimSite1034.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
TouchSensor TouchSensor1035 = createNode("TouchSensor");
TouchSensor1035.description = "HAnimSite r_gonion_pt";
HAnimSite1034.children = new MFNode();

HAnimSite1034.children[0] = TouchSensor1035;

Shape Shape1036 = createNode("Shape");
Shape1036.USE = "HAnimSiteShape";
HAnimSite1034.children[1] = Shape1036;

HAnimSegment996.children[10] = HAnimSite1034;

HAnimSite HAnimSite1037 = createNode("HAnimSite");
HAnimSite1037.DEF = "hanim_supramenton_pt";
HAnimSite1037.name = "supramenton_pt";
HAnimSite1037.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
TouchSensor TouchSensor1038 = createNode("TouchSensor");
TouchSensor1038.description = "HAnimSite supramenton_pt";
HAnimSite1037.children = new MFNode();

HAnimSite1037.children[0] = TouchSensor1038;

Shape Shape1039 = createNode("Shape");
Shape1039.USE = "HAnimSiteShape";
HAnimSite1037.children[1] = Shape1039;

HAnimSegment996.children[11] = HAnimSite1037;

HAnimJoint995.children = new MFNode();

HAnimJoint995.children[0] = HAnimSegment996;

HAnimJoint HAnimJoint1040 = createNode("HAnimJoint");
HAnimJoint1040.DEF = "hanim_l_eyelid_joint";
HAnimJoint1040.name = "l_eyelid_joint";
HAnimJoint1040.center = new SFVec3f(new float[0.0503,1.4157,-0.0689]);
HAnimJoint995.children[1] = HAnimJoint1040;

HAnimJoint HAnimJoint1041 = createNode("HAnimJoint");
HAnimJoint1041.DEF = "hanim_r_eyelid_joint";
HAnimJoint1041.name = "r_eyelid_joint";
HAnimJoint1041.center = new SFVec3f(new float[-0.0507,1.4157,-0.0689]);
HAnimJoint995.children[2] = HAnimJoint1041;

HAnimJoint HAnimJoint1042 = createNode("HAnimJoint");
HAnimJoint1042.DEF = "hanim_l_eyeball_joint";
HAnimJoint1042.name = "l_eyeball_joint";
HAnimJoint1042.center = new SFVec3f(new float[0.0479,1.3963,-0.0188]);
HAnimJoint995.children[3] = HAnimJoint1042;

HAnimJoint HAnimJoint1043 = createNode("HAnimJoint");
HAnimJoint1043.DEF = "hanim_r_eyeball_joint";
HAnimJoint1043.name = "r_eyeball_joint";
HAnimJoint1043.center = new SFVec3f(new float[-0.0483,1.3963,-0.0188]);
HAnimJoint995.children[4] = HAnimJoint1043;

HAnimJoint HAnimJoint1044 = createNode("HAnimJoint");
HAnimJoint1044.DEF = "hanim_l_eyebrow_joint";
HAnimJoint1044.name = "l_eyebrow_joint";
HAnimJoint1044.center = new SFVec3f(new float[0.0216,1.4053,0.0051]);
HAnimJoint995.children[5] = HAnimJoint1044;

HAnimJoint HAnimJoint1045 = createNode("HAnimJoint");
HAnimJoint1045.DEF = "hanim_r_eyebrow_joint";
HAnimJoint1045.name = "r_eyebrow_joint";
HAnimJoint1045.center = new SFVec3f(new float[-0.0219,1.4053,0.0051]);
HAnimJoint995.children[6] = HAnimJoint1045;

HAnimJoint HAnimJoint1046 = createNode("HAnimJoint");
HAnimJoint1046.DEF = "hanim_temporomandibular";
HAnimJoint1046.name = "temporomandibular";
HAnimJoint1046.center = new SFVec3f(new float[-0.0002,1.3043,-0.0865]);
HAnimJoint995.children[7] = HAnimJoint1046;

HAnimJoint953.children[1] = HAnimJoint995;

HAnimJoint944.children[1] = HAnimJoint953;

HAnimJoint932.children[1] = HAnimJoint944;

HAnimJoint923.children[1] = HAnimJoint932;

HAnimJoint914.children[1] = HAnimJoint923;

HAnimJoint905.children[1] = HAnimJoint914;

HAnimJoint896.children[1] = HAnimJoint905;

HAnimJoint843.children[1] = HAnimJoint896;

HAnimJoint HAnimJoint1047 = createNode("HAnimJoint");
HAnimJoint1047.DEF = "hanim_l_sternoclavicular";
HAnimJoint1047.name = "l_sternoclavicular";
HAnimJoint1047.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
HAnimSegment HAnimSegment1048 = createNode("HAnimSegment");
HAnimSegment1048.DEF = "hanim_l_clavicle";
HAnimSegment1048.name = "l_clavicle";
Transform Transform1049 = createNode("Transform");
Transform1049.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
Transform Transform1050 = createNode("Transform");
Shape Shape1051 = createNode("Shape");
Shape1051.USE = "HAnimJointShape";
Transform1050.child = new undefined();

Transform1050.child[0] = Shape1051;

Transform1049.children = new MFNode();

Transform1049.children[0] = Transform1050;

HAnimSegment1048.children = new MFNode();

HAnimSegment1048.children[0] = Transform1049;

Shape Shape1052 = createNode("Shape");
LineSet LineSet1053 = createNode("LineSet");
LineSet1053.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1054 = createNode("ColorRGBA");
ColorRGBA1054.USE = "HAnimSegmentLineColorRGBA";
LineSet1053.color = ColorRGBA1054;

Coordinate Coordinate1055 = createNode("Coordinate");
Coordinate1055.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet1053.coord = Coordinate1055;

Shape1052.geometry = LineSet1053;

HAnimSegment1048.children[1] = Shape1052;

HAnimJoint1047.children = new MFNode();

HAnimJoint1047.children[0] = HAnimSegment1048;

HAnimJoint HAnimJoint1056 = createNode("HAnimJoint");
HAnimJoint1056.DEF = "hanim_l_acromioclavicular";
HAnimJoint1056.name = "l_acromioclavicular";
HAnimJoint1056.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
HAnimSegment HAnimSegment1057 = createNode("HAnimSegment");
HAnimSegment1057.DEF = "hanim_l_scapula";
HAnimSegment1057.name = "l_scapula";
Transform Transform1058 = createNode("Transform");
Transform1058.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
Transform Transform1059 = createNode("Transform");
Shape Shape1060 = createNode("Shape");
Shape1060.USE = "HAnimJointShape";
Transform1059.child = new undefined();

Transform1059.child[0] = Shape1060;

Transform1058.children = new MFNode();

Transform1058.children[0] = Transform1059;

HAnimSegment1057.children = new MFNode();

HAnimSegment1057.children[0] = Transform1058;

Shape Shape1061 = createNode("Shape");
LineSet LineSet1062 = createNode("LineSet");
LineSet1062.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1063 = createNode("ColorRGBA");
ColorRGBA1063.USE = "HAnimSegmentLineColorRGBA";
LineSet1062.color = ColorRGBA1063;

Coordinate Coordinate1064 = createNode("Coordinate");
Coordinate1064.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet1062.coord = Coordinate1064;

Shape1061.geometry = LineSet1062;

HAnimSegment1057.children[1] = Shape1061;

HAnimSite HAnimSite1065 = createNode("HAnimSite");
HAnimSite1065.DEF = "hanim_l_bideltoid_pt";
HAnimSite1065.name = "l_bideltoid_pt";
TouchSensor TouchSensor1066 = createNode("TouchSensor");
TouchSensor1066.description = "HAnimSite l_bideltoid_pt";
HAnimSite1065.children = new MFNode();

HAnimSite1065.children[0] = TouchSensor1066;

Shape Shape1067 = createNode("Shape");
Shape1067.USE = "HAnimSiteShape";
HAnimSite1065.children[1] = Shape1067;

HAnimSegment1057.children[2] = HAnimSite1065;

HAnimSite HAnimSite1068 = createNode("HAnimSite");
HAnimSite1068.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite1068.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite1068.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
TouchSensor TouchSensor1069 = createNode("TouchSensor");
TouchSensor1069.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite1068.children = new MFNode();

HAnimSite1068.children[0] = TouchSensor1069;

Shape Shape1070 = createNode("Shape");
Shape1070.USE = "HAnimSiteShape";
HAnimSite1068.children[1] = Shape1070;

HAnimSegment1057.children[3] = HAnimSite1068;

HAnimJoint1056.children = new MFNode();

HAnimJoint1056.children[0] = HAnimSegment1057;

HAnimJoint HAnimJoint1071 = createNode("HAnimJoint");
HAnimJoint1071.DEF = "hanim_l_shoulder";
HAnimJoint1071.name = "l_shoulder";
HAnimJoint1071.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
HAnimSegment HAnimSegment1072 = createNode("HAnimSegment");
HAnimSegment1072.DEF = "hanim_l_upperarm";
HAnimSegment1072.name = "l_upperarm";
Transform Transform1073 = createNode("Transform");
Transform1073.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
Transform Transform1074 = createNode("Transform");
Shape Shape1075 = createNode("Shape");
Shape1075.USE = "HAnimJointShape";
Transform1074.child = new undefined();

Transform1074.child[0] = Shape1075;

Transform1073.children = new MFNode();

Transform1073.children[0] = Transform1074;

HAnimSegment1072.children = new MFNode();

HAnimSegment1072.children[0] = Transform1073;

Shape Shape1076 = createNode("Shape");
LineSet LineSet1077 = createNode("LineSet");
LineSet1077.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1078 = createNode("ColorRGBA");
ColorRGBA1078.USE = "HAnimSegmentLineColorRGBA";
LineSet1077.color = ColorRGBA1078;

Coordinate Coordinate1079 = createNode("Coordinate");
Coordinate1079.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet1077.coord = Coordinate1079;

Shape1076.geometry = LineSet1077;

HAnimSegment1072.children[1] = Shape1076;

HAnimSite HAnimSite1080 = createNode("HAnimSite");
HAnimSite1080.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite1080.name = "l_humeral_medial_epicondyles_pt";
HAnimSite1080.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
TouchSensor TouchSensor1081 = createNode("TouchSensor");
TouchSensor1081.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite1080.children = new MFNode();

HAnimSite1080.children[0] = TouchSensor1081;

Shape Shape1082 = createNode("Shape");
Shape1082.USE = "HAnimSiteShape";
HAnimSite1080.children[1] = Shape1082;

HAnimSegment1072.children[2] = HAnimSite1080;

HAnimSite HAnimSite1083 = createNode("HAnimSite");
HAnimSite1083.DEF = "hanim_l_olecranon_pt";
HAnimSite1083.name = "l_olecranon_pt";
HAnimSite1083.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
TouchSensor TouchSensor1084 = createNode("TouchSensor");
TouchSensor1084.description = "HAnimSite l_olecranon_pt";
HAnimSite1083.children = new MFNode();

HAnimSite1083.children[0] = TouchSensor1084;

Shape Shape1085 = createNode("Shape");
Shape1085.USE = "HAnimSiteShape";
HAnimSite1083.children[1] = Shape1085;

HAnimSegment1072.children[3] = HAnimSite1083;

HAnimSite HAnimSite1086 = createNode("HAnimSite");
HAnimSite1086.DEF = "hanim_l_radial_styloid_pt";
HAnimSite1086.name = "l_radial_styloid_pt";
HAnimSite1086.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
TouchSensor TouchSensor1087 = createNode("TouchSensor");
TouchSensor1087.description = "HAnimSite l_radial_styloid_pt";
HAnimSite1086.children = new MFNode();

HAnimSite1086.children[0] = TouchSensor1087;

Shape Shape1088 = createNode("Shape");
Shape1088.USE = "HAnimSiteShape";
HAnimSite1086.children[1] = Shape1088;

HAnimSegment1072.children[4] = HAnimSite1086;

HAnimSite HAnimSite1089 = createNode("HAnimSite");
HAnimSite1089.DEF = "hanim_l_radiale_pt";
HAnimSite1089.name = "l_radiale_pt";
HAnimSite1089.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
TouchSensor TouchSensor1090 = createNode("TouchSensor");
TouchSensor1090.description = "HAnimSite l_radiale_pt";
HAnimSite1089.children = new MFNode();

HAnimSite1089.children[0] = TouchSensor1090;

Shape Shape1091 = createNode("Shape");
Shape1091.USE = "HAnimSiteShape";
HAnimSite1089.children[1] = Shape1091;

HAnimSegment1072.children[5] = HAnimSite1089;

HAnimJoint1071.children = new MFNode();

HAnimJoint1071.children[0] = HAnimSegment1072;

HAnimJoint HAnimJoint1092 = createNode("HAnimJoint");
HAnimJoint1092.DEF = "hanim_l_elbow";
HAnimJoint1092.name = "l_elbow";
HAnimJoint1092.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
HAnimSegment HAnimSegment1093 = createNode("HAnimSegment");
HAnimSegment1093.DEF = "hanim_l_forearm";
HAnimSegment1093.name = "l_forearm";
Transform Transform1094 = createNode("Transform");
Transform1094.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
Transform Transform1095 = createNode("Transform");
Shape Shape1096 = createNode("Shape");
Shape1096.USE = "HAnimJointShape";
Transform1095.child = new undefined();

Transform1095.child[0] = Shape1096;

Transform1094.children = new MFNode();

Transform1094.children[0] = Transform1095;

HAnimSegment1093.children = new MFNode();

HAnimSegment1093.children[0] = Transform1094;

Shape Shape1097 = createNode("Shape");
LineSet LineSet1098 = createNode("LineSet");
LineSet1098.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1099 = createNode("ColorRGBA");
ColorRGBA1099.USE = "HAnimSegmentLineColorRGBA";
LineSet1098.color = ColorRGBA1099;

Coordinate Coordinate1100 = createNode("Coordinate");
Coordinate1100.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet1098.coord = Coordinate1100;

Shape1097.geometry = LineSet1098;

HAnimSegment1093.children[1] = Shape1097;

HAnimSite HAnimSite1101 = createNode("HAnimSite");
HAnimSite1101.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1101.name = "l_ulnar_styloid_pt";
HAnimSite1101.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
TouchSensor TouchSensor1102 = createNode("TouchSensor");
TouchSensor1102.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite1101.children = new MFNode();

HAnimSite1101.children[0] = TouchSensor1102;

Shape Shape1103 = createNode("Shape");
Shape1103.USE = "HAnimSiteShape";
HAnimSite1101.children[1] = Shape1103;

HAnimSegment1093.children[2] = HAnimSite1101;

HAnimJoint1092.children = new MFNode();

HAnimJoint1092.children[0] = HAnimSegment1093;

HAnimJoint HAnimJoint1104 = createNode("HAnimJoint");
HAnimJoint1104.DEF = "hanim_l_radiocarpal";
HAnimJoint1104.name = "l_radiocarpal";
HAnimJoint1104.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
HAnimSegment HAnimSegment1105 = createNode("HAnimSegment");
HAnimSegment1105.DEF = "hanim_l_carpal";
HAnimSegment1105.name = "l_carpal";
Transform Transform1106 = createNode("Transform");
Transform1106.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform1106.rotation = new SFRotation(new float[0,0,1,-3.14]);
Transform1106.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform Transform1107 = createNode("Transform");
Transform1107.rotation = new SFRotation(new float[0,1,0,-1.57]);
Shape Shape1108 = createNode("Shape");
Shape1108.USE = "HAnimJointShape";
Transform1107.child = new undefined();

Transform1107.child[0] = Shape1108;

Transform1106.children = new MFNode();

Transform1106.children[0] = Transform1107;

HAnimSegment1105.children = new MFNode();

HAnimSegment1105.children[0] = Transform1106;

Shape Shape1109 = createNode("Shape");
LineSet LineSet1110 = createNode("LineSet");
LineSet1110.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1111 = createNode("ColorRGBA");
ColorRGBA1111.USE = "HAnimSegmentLineColorRGBA";
LineSet1110.color = ColorRGBA1111;

Coordinate Coordinate1112 = createNode("Coordinate");
Coordinate1112.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1811,0.6975,-0.0826]);
LineSet1110.coord = Coordinate1112;

Shape1109.geometry = LineSet1110;

HAnimSegment1105.children[1] = Shape1109;

Shape Shape1113 = createNode("Shape");
LineSet LineSet1114 = createNode("LineSet");
LineSet1114.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1115 = createNode("ColorRGBA");
ColorRGBA1115.USE = "HAnimSegmentLineColorRGBA";
LineSet1114.color = ColorRGBA1115;

Coordinate Coordinate1116 = createNode("Coordinate");
Coordinate1116.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1811,0.6984,-0.0935]);
LineSet1114.coord = Coordinate1116;

Shape1113.geometry = LineSet1114;

HAnimSegment1105.children[2] = Shape1113;

Shape Shape1117 = createNode("Shape");
LineSet LineSet1118 = createNode("LineSet");
LineSet1118.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1119 = createNode("ColorRGBA");
ColorRGBA1119.USE = "HAnimSegmentLineColorRGBA";
LineSet1118.color = ColorRGBA1119;

Coordinate Coordinate1120 = createNode("Coordinate");
Coordinate1120.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1809,0.7,-0.1067]);
LineSet1118.coord = Coordinate1120;

Shape1117.geometry = LineSet1118;

HAnimSegment1105.children[3] = Shape1117;

Shape Shape1121 = createNode("Shape");
LineSet LineSet1122 = createNode("LineSet");
LineSet1122.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1123 = createNode("ColorRGBA");
ColorRGBA1123.USE = "HAnimSegmentLineColorRGBA";
LineSet1122.color = ColorRGBA1123;

Coordinate Coordinate1124 = createNode("Coordinate");
Coordinate1124.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1809,0.6973,-0.1276]);
LineSet1122.coord = Coordinate1124;

Shape1121.geometry = LineSet1122;

HAnimSegment1105.children[4] = Shape1121;

HAnimJoint1104.children = new MFNode();

HAnimJoint1104.children[0] = HAnimSegment1105;

HAnimJoint HAnimJoint1125 = createNode("HAnimJoint");
HAnimJoint1125.DEF = "hanim_l_midcarpal_1";
HAnimJoint1125.name = "l_midcarpal_1";
HAnimJoint1125.center = new SFVec3f(new float[0.1811,0.6975,-0.0826]);
HAnimSegment HAnimSegment1126 = createNode("HAnimSegment");
HAnimSegment1126.DEF = "hanim_l_trapezium";
HAnimSegment1126.name = "l_trapezium";
Transform Transform1127 = createNode("Transform");
Transform1127.translation = new SFVec3f(new float[0.1811,0.6975,-0.0826]);
Transform Transform1128 = createNode("Transform");
Shape Shape1129 = createNode("Shape");
Shape1129.USE = "HAnimJointShape";
Transform1128.child = new undefined();

Transform1128.child[0] = Shape1129;

Transform1127.children = new MFNode();

Transform1127.children[0] = Transform1128;

HAnimSegment1126.children = new MFNode();

HAnimSegment1126.children[0] = Transform1127;

Shape Shape1130 = createNode("Shape");
LineSet LineSet1131 = createNode("LineSet");
LineSet1131.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1132 = createNode("ColorRGBA");
ColorRGBA1132.USE = "HAnimSegmentLineColorRGBA";
LineSet1131.color = ColorRGBA1132;

Coordinate Coordinate1133 = createNode("Coordinate");
Coordinate1133.point = new MFVec3f(new float[0.1811,0.6975,-0.0826,0.1924,0.8472,-0.0534]);
LineSet1131.coord = Coordinate1133;

Shape1130.geometry = LineSet1131;

HAnimSegment1126.children[1] = Shape1130;

HAnimJoint1125.children = new MFNode();

HAnimJoint1125.children[0] = HAnimSegment1126;

HAnimJoint HAnimJoint1134 = createNode("HAnimJoint");
HAnimJoint1134.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1134.name = "l_carpometacarpal_1";
HAnimJoint1134.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
HAnimSegment HAnimSegment1135 = createNode("HAnimSegment");
HAnimSegment1135.DEF = "hanim_l_metacarpal_1";
HAnimSegment1135.name = "l_metacarpal_1";
Transform Transform1136 = createNode("Transform");
Transform1136.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
Transform Transform1137 = createNode("Transform");
Shape Shape1138 = createNode("Shape");
Shape1138.USE = "HAnimJointShape";
Transform1137.child = new undefined();

Transform1137.child[0] = Shape1138;

Transform1136.children = new MFNode();

Transform1136.children[0] = Transform1137;

HAnimSegment1135.children = new MFNode();

HAnimSegment1135.children[0] = Transform1136;

Shape Shape1139 = createNode("Shape");
LineSet LineSet1140 = createNode("LineSet");
LineSet1140.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1141 = createNode("ColorRGBA");
ColorRGBA1141.USE = "HAnimSegmentLineColorRGBA";
LineSet1140.color = ColorRGBA1141;

Coordinate Coordinate1142 = createNode("Coordinate");
Coordinate1142.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1140.coord = Coordinate1142;

Shape1139.geometry = LineSet1140;

HAnimSegment1135.children[1] = Shape1139;

HAnimJoint1134.children = new MFNode();

HAnimJoint1134.children[0] = HAnimSegment1135;

HAnimJoint HAnimJoint1143 = createNode("HAnimJoint");
HAnimJoint1143.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1143.name = "l_metacarpophalangeal_1";
HAnimJoint1143.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
HAnimSegment HAnimSegment1144 = createNode("HAnimSegment");
HAnimSegment1144.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment1144.name = "l_carpal_proximal_phalanx_1";
Transform Transform1145 = createNode("Transform");
Transform1145.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
Transform Transform1146 = createNode("Transform");
Shape Shape1147 = createNode("Shape");
Shape1147.USE = "HAnimJointShape";
Transform1146.child = new undefined();

Transform1146.child[0] = Shape1147;

Transform1145.children = new MFNode();

Transform1145.children[0] = Transform1146;

HAnimSegment1144.children = new MFNode();

HAnimSegment1144.children[0] = Transform1145;

Shape Shape1148 = createNode("Shape");
LineSet LineSet1149 = createNode("LineSet");
LineSet1149.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1150 = createNode("ColorRGBA");
ColorRGBA1150.USE = "HAnimSegmentLineColorRGBA";
LineSet1149.color = ColorRGBA1150;

Coordinate Coordinate1151 = createNode("Coordinate");
Coordinate1151.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1149.coord = Coordinate1151;

Shape1148.geometry = LineSet1149;

HAnimSegment1144.children[1] = Shape1148;

HAnimSite HAnimSite1152 = createNode("HAnimSite");
HAnimSite1152.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite1152.name = "l_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor1153 = createNode("TouchSensor");
TouchSensor1153.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite1152.children = new MFNode();

HAnimSite1152.children[0] = TouchSensor1153;

Shape Shape1154 = createNode("Shape");
Shape1154.USE = "HAnimSiteShape";
HAnimSite1152.children[1] = Shape1154;

HAnimSegment1144.children[2] = HAnimSite1152;

HAnimJoint1143.children = new MFNode();

HAnimJoint1143.children[0] = HAnimSegment1144;

HAnimJoint HAnimJoint1155 = createNode("HAnimJoint");
HAnimJoint1155.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1155.name = "l_carpal_interphalangeal_1";
HAnimJoint1155.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1143.children[1] = HAnimJoint1155;

HAnimJoint1134.children[1] = HAnimJoint1143;

HAnimJoint1125.children[1] = HAnimJoint1134;

HAnimJoint1104.children[1] = HAnimJoint1125;

HAnimJoint HAnimJoint1156 = createNode("HAnimJoint");
HAnimJoint1156.DEF = "hanim_l_midcarpal_2";
HAnimJoint1156.name = "l_midcarpal_2";
HAnimJoint1156.center = new SFVec3f(new float[0.1811,0.6984,-0.0935]);
HAnimSegment HAnimSegment1157 = createNode("HAnimSegment");
HAnimSegment1157.DEF = "hanim_l_trapezoid";
HAnimSegment1157.name = "l_trapezoid";
Transform Transform1158 = createNode("Transform");
Transform1158.translation = new SFVec3f(new float[0.1811,0.6984,-0.0935]);
Transform Transform1159 = createNode("Transform");
Shape Shape1160 = createNode("Shape");
Shape1160.USE = "HAnimJointShape";
Transform1159.child = new undefined();

Transform1159.child[0] = Shape1160;

Transform1158.children = new MFNode();

Transform1158.children[0] = Transform1159;

HAnimSegment1157.children = new MFNode();

HAnimSegment1157.children[0] = Transform1158;

Shape Shape1161 = createNode("Shape");
LineSet LineSet1162 = createNode("LineSet");
LineSet1162.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1163 = createNode("ColorRGBA");
ColorRGBA1163.USE = "HAnimSegmentLineColorRGBA";
LineSet1162.color = ColorRGBA1163;

Coordinate Coordinate1164 = createNode("Coordinate");
Coordinate1164.point = new MFVec3f(new float[0.1811,0.6984,-0.0935,0.1983,0.8024,-0.028]);
LineSet1162.coord = Coordinate1164;

Shape1161.geometry = LineSet1162;

HAnimSegment1157.children[1] = Shape1161;

HAnimSite HAnimSite1165 = createNode("HAnimSite");
HAnimSite1165.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1165.name = "l_metacarpal_phalanx_2_pt";
HAnimSite1165.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
TouchSensor TouchSensor1166 = createNode("TouchSensor");
TouchSensor1166.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite1165.children = new MFNode();

HAnimSite1165.children[0] = TouchSensor1166;

Shape Shape1167 = createNode("Shape");
Shape1167.USE = "HAnimSiteShape";
HAnimSite1165.children[1] = Shape1167;

HAnimSegment1157.children[2] = HAnimSite1165;

HAnimJoint1156.children = new MFNode();

HAnimJoint1156.children[0] = HAnimSegment1157;

HAnimJoint HAnimJoint1168 = createNode("HAnimJoint");
HAnimJoint1168.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1168.name = "l_carpometacarpal_2";
HAnimJoint1168.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
HAnimSegment HAnimSegment1169 = createNode("HAnimSegment");
HAnimSegment1169.DEF = "hanim_l_metacarpal_2";
HAnimSegment1169.name = "l_metacarpal_2";
Transform Transform1170 = createNode("Transform");
Transform1170.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
Transform Transform1171 = createNode("Transform");
Shape Shape1172 = createNode("Shape");
Shape1172.USE = "HAnimJointShape";
Transform1171.child = new undefined();

Transform1171.child[0] = Shape1172;

Transform1170.children = new MFNode();

Transform1170.children[0] = Transform1171;

HAnimSegment1169.children = new MFNode();

HAnimSegment1169.children[0] = Transform1170;

Shape Shape1173 = createNode("Shape");
LineSet LineSet1174 = createNode("LineSet");
LineSet1174.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1175 = createNode("ColorRGBA");
ColorRGBA1175.USE = "HAnimSegmentLineColorRGBA";
LineSet1174.color = ColorRGBA1175;

Coordinate Coordinate1176 = createNode("Coordinate");
Coordinate1176.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1174.coord = Coordinate1176;

Shape1173.geometry = LineSet1174;

HAnimSegment1169.children[1] = Shape1173;

HAnimJoint1168.children = new MFNode();

HAnimJoint1168.children[0] = HAnimSegment1169;

HAnimJoint HAnimJoint1177 = createNode("HAnimJoint");
HAnimJoint1177.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1177.name = "l_metacarpophalangeal_2";
HAnimJoint1177.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
HAnimSegment HAnimSegment1178 = createNode("HAnimSegment");
HAnimSegment1178.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment1178.name = "l_carpal_proximal_phalanx_2";
Transform Transform1179 = createNode("Transform");
Transform1179.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
Transform Transform1180 = createNode("Transform");
Shape Shape1181 = createNode("Shape");
Shape1181.USE = "HAnimJointShape";
Transform1180.child = new undefined();

Transform1180.child[0] = Shape1181;

Transform1179.children = new MFNode();

Transform1179.children[0] = Transform1180;

HAnimSegment1178.children = new MFNode();

HAnimSegment1178.children[0] = Transform1179;

Shape Shape1182 = createNode("Shape");
LineSet LineSet1183 = createNode("LineSet");
LineSet1183.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1184 = createNode("ColorRGBA");
ColorRGBA1184.USE = "HAnimSegmentLineColorRGBA";
LineSet1183.color = ColorRGBA1184;

Coordinate Coordinate1185 = createNode("Coordinate");
Coordinate1185.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1183.coord = Coordinate1185;

Shape1182.geometry = LineSet1183;

HAnimSegment1178.children[1] = Shape1182;

HAnimJoint1177.children = new MFNode();

HAnimJoint1177.children[0] = HAnimSegment1178;

HAnimJoint HAnimJoint1186 = createNode("HAnimJoint");
HAnimJoint1186.DEF = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimJoint1186.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1186.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
HAnimSegment HAnimSegment1187 = createNode("HAnimSegment");
HAnimSegment1187.DEF = "hanim_l_carpal_middle_phalanx_1";
HAnimSegment1187.name = "l_carpal_middle_phalanx_2";
Transform Transform1188 = createNode("Transform");
Transform1188.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
Transform Transform1189 = createNode("Transform");
Shape Shape1190 = createNode("Shape");
Shape1190.USE = "HAnimJointShape";
Transform1189.child = new undefined();

Transform1189.child[0] = Shape1190;

Transform1188.children = new MFNode();

Transform1188.children[0] = Transform1189;

HAnimSegment1187.children = new MFNode();

HAnimSegment1187.children[0] = Transform1188;

Shape Shape1191 = createNode("Shape");
LineSet LineSet1192 = createNode("LineSet");
LineSet1192.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1193 = createNode("ColorRGBA");
ColorRGBA1193.USE = "HAnimSegmentLineColorRGBA";
LineSet1192.color = ColorRGBA1193;

Coordinate Coordinate1194 = createNode("Coordinate");
Coordinate1194.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1192.coord = Coordinate1194;

Shape1191.geometry = LineSet1192;

HAnimSegment1187.children[1] = Shape1191;

HAnimSite HAnimSite1195 = createNode("HAnimSite");
HAnimSite1195.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite1195.name = "l_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor1196 = createNode("TouchSensor");
TouchSensor1196.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite1195.children = new MFNode();

HAnimSite1195.children[0] = TouchSensor1196;

Shape Shape1197 = createNode("Shape");
Shape1197.USE = "HAnimSiteShape";
HAnimSite1195.children[1] = Shape1197;

HAnimSegment1187.children[2] = HAnimSite1195;

HAnimSite HAnimSite1198 = createNode("HAnimSite");
HAnimSite1198.DEF = "hanim_l_dactylion_pt";
HAnimSite1198.name = "l_dactylion_pt";
HAnimSite1198.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
TouchSensor TouchSensor1199 = createNode("TouchSensor");
TouchSensor1199.description = "HAnimSite l_dactylion_pt";
HAnimSite1198.children = new MFNode();

HAnimSite1198.children[0] = TouchSensor1199;

Shape Shape1200 = createNode("Shape");
Shape1200.USE = "HAnimSiteShape";
HAnimSite1198.children[1] = Shape1200;

HAnimSegment1187.children[3] = HAnimSite1198;

HAnimJoint1186.children = new MFNode();

HAnimJoint1186.children[0] = HAnimSegment1187;

HAnimJoint HAnimJoint1201 = createNode("HAnimJoint");
HAnimJoint1201.DEF = "hanim_l_carpal_distal_interphalangeal_1";
HAnimJoint1201.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1201.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1186.children[1] = HAnimJoint1201;

HAnimJoint1177.children[1] = HAnimJoint1186;

HAnimJoint1168.children[1] = HAnimJoint1177;

HAnimJoint1156.children[1] = HAnimJoint1168;

HAnimJoint1104.children[2] = HAnimJoint1156;

HAnimJoint HAnimJoint1202 = createNode("HAnimJoint");
HAnimJoint1202.DEF = "hanim_l_midcarpal_3";
HAnimJoint1202.name = "l_midcarpal_3";
HAnimJoint1202.center = new SFVec3f(new float[0.1809,0.7,-0.1067]);
HAnimSegment HAnimSegment1203 = createNode("HAnimSegment");
HAnimSegment1203.DEF = "hanim_l_capitate";
HAnimSegment1203.name = "l_capitate";
Transform Transform1204 = createNode("Transform");
Transform1204.translation = new SFVec3f(new float[0.1809,0.7,-0.1067]);
Transform Transform1205 = createNode("Transform");
Shape Shape1206 = createNode("Shape");
Shape1206.USE = "HAnimJointShape";
Transform1205.child = new undefined();

Transform1205.child[0] = Shape1206;

Transform1204.children = new MFNode();

Transform1204.children[0] = Transform1205;

HAnimSegment1203.children = new MFNode();

HAnimSegment1203.children[0] = Transform1204;

Shape Shape1207 = createNode("Shape");
LineSet LineSet1208 = createNode("LineSet");
LineSet1208.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1209 = createNode("ColorRGBA");
ColorRGBA1209.USE = "HAnimSegmentLineColorRGBA";
LineSet1208.color = ColorRGBA1209;

Coordinate Coordinate1210 = createNode("Coordinate");
Coordinate1210.point = new MFVec3f(new float[0.1809,0.7,-0.1067,0.1987,0.8029,-0.053]);
LineSet1208.coord = Coordinate1210;

Shape1207.geometry = LineSet1208;

HAnimSegment1203.children[1] = Shape1207;

HAnimSite HAnimSite1211 = createNode("HAnimSite");
HAnimSite1211.DEF = "hanim_l_metacarpal_phalanx_3_pt";
HAnimSite1211.name = "l_metacarpal_phalanx_3_pt";
TouchSensor TouchSensor1212 = createNode("TouchSensor");
TouchSensor1212.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite1211.children = new MFNode();

HAnimSite1211.children[0] = TouchSensor1212;

Shape Shape1213 = createNode("Shape");
Shape1213.USE = "HAnimSiteShape";
HAnimSite1211.children[1] = Shape1213;

HAnimSegment1203.children[2] = HAnimSite1211;

HAnimJoint1202.children = new MFNode();

HAnimJoint1202.children[0] = HAnimSegment1203;

HAnimJoint HAnimJoint1214 = createNode("HAnimJoint");
HAnimJoint1214.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1214.name = "l_carpometacarpal_3";
HAnimJoint1214.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
HAnimSegment HAnimSegment1215 = createNode("HAnimSegment");
HAnimSegment1215.DEF = "hanim_l_metacarpal_3";
HAnimSegment1215.name = "l_metacarpal_3";
Transform Transform1216 = createNode("Transform");
Transform1216.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
Transform Transform1217 = createNode("Transform");
Shape Shape1218 = createNode("Shape");
Shape1218.USE = "HAnimJointShape";
Transform1217.child = new undefined();

Transform1217.child[0] = Shape1218;

Transform1216.children = new MFNode();

Transform1216.children[0] = Transform1217;

HAnimSegment1215.children = new MFNode();

HAnimSegment1215.children[0] = Transform1216;

Shape Shape1219 = createNode("Shape");
LineSet LineSet1220 = createNode("LineSet");
LineSet1220.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1221 = createNode("ColorRGBA");
ColorRGBA1221.USE = "HAnimSegmentLineColorRGBA";
LineSet1220.color = ColorRGBA1221;

Coordinate Coordinate1222 = createNode("Coordinate");
Coordinate1222.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1220.coord = Coordinate1222;

Shape1219.geometry = LineSet1220;

HAnimSegment1215.children[1] = Shape1219;

HAnimJoint1214.children = new MFNode();

HAnimJoint1214.children[0] = HAnimSegment1215;

HAnimJoint HAnimJoint1223 = createNode("HAnimJoint");
HAnimJoint1223.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1223.name = "l_metacarpophalangeal_3";
HAnimJoint1223.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
HAnimSegment HAnimSegment1224 = createNode("HAnimSegment");
HAnimSegment1224.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimSegment1224.name = "l_carpal_proximal_phalanx_3";
Transform Transform1225 = createNode("Transform");
Transform1225.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
Transform Transform1226 = createNode("Transform");
Shape Shape1227 = createNode("Shape");
Shape1227.USE = "HAnimJointShape";
Transform1226.child = new undefined();

Transform1226.child[0] = Shape1227;

Transform1225.children = new MFNode();

Transform1225.children[0] = Transform1226;

HAnimSegment1224.children = new MFNode();

HAnimSegment1224.children[0] = Transform1225;

Shape Shape1228 = createNode("Shape");
LineSet LineSet1229 = createNode("LineSet");
LineSet1229.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1230 = createNode("ColorRGBA");
ColorRGBA1230.USE = "HAnimSegmentLineColorRGBA";
LineSet1229.color = ColorRGBA1230;

Coordinate Coordinate1231 = createNode("Coordinate");
Coordinate1231.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1229.coord = Coordinate1231;

Shape1228.geometry = LineSet1229;

HAnimSegment1224.children[1] = Shape1228;

HAnimJoint1223.children = new MFNode();

HAnimJoint1223.children[0] = HAnimSegment1224;

HAnimJoint HAnimJoint1232 = createNode("HAnimJoint");
HAnimJoint1232.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1232.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1232.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
HAnimSegment HAnimSegment1233 = createNode("HAnimSegment");
HAnimSegment1233.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment1233.name = "l_carpal_middle_phalanx_3";
Transform Transform1234 = createNode("Transform");
Transform1234.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
Transform Transform1235 = createNode("Transform");
Shape Shape1236 = createNode("Shape");
Shape1236.USE = "HAnimJointShape";
Transform1235.child = new undefined();

Transform1235.child[0] = Shape1236;

Transform1234.children = new MFNode();

Transform1234.children[0] = Transform1235;

HAnimSegment1233.children = new MFNode();

HAnimSegment1233.children[0] = Transform1234;

Shape Shape1237 = createNode("Shape");
LineSet LineSet1238 = createNode("LineSet");
LineSet1238.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1239 = createNode("ColorRGBA");
ColorRGBA1239.USE = "HAnimSegmentLineColorRGBA";
LineSet1238.color = ColorRGBA1239;

Coordinate Coordinate1240 = createNode("Coordinate");
Coordinate1240.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1238.coord = Coordinate1240;

Shape1237.geometry = LineSet1238;

HAnimSegment1233.children[1] = Shape1237;

HAnimSite HAnimSite1241 = createNode("HAnimSite");
HAnimSite1241.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite1241.name = "l_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor1242 = createNode("TouchSensor");
TouchSensor1242.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite1241.children = new MFNode();

HAnimSite1241.children[0] = TouchSensor1242;

Shape Shape1243 = createNode("Shape");
Shape1243.USE = "HAnimSiteShape";
HAnimSite1241.children[1] = Shape1243;

HAnimSegment1233.children[2] = HAnimSite1241;

HAnimJoint1232.children = new MFNode();

HAnimJoint1232.children[0] = HAnimSegment1233;

HAnimJoint HAnimJoint1244 = createNode("HAnimJoint");
HAnimJoint1244.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1244.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1244.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1232.children[1] = HAnimJoint1244;

HAnimJoint1223.children[1] = HAnimJoint1232;

HAnimJoint1214.children[1] = HAnimJoint1223;

HAnimJoint1202.children[1] = HAnimJoint1214;

HAnimJoint1104.children[3] = HAnimJoint1202;

HAnimJoint HAnimJoint1245 = createNode("HAnimJoint");
HAnimJoint1245.DEF = "hanim_l_midcarpal_4_1";
HAnimJoint1245.name = "l_midcarpal_4_5";
HAnimJoint1245.center = new SFVec3f(new float[0.1809,0.6973,-0.1276]);
HAnimSegment HAnimSegment1246 = createNode("HAnimSegment");
HAnimSegment1246.DEF = "hanim_l_hamate";
HAnimSegment1246.name = "l_hamate";
Transform Transform1247 = createNode("Transform");
Transform1247.translation = new SFVec3f(new float[0.1809,0.6973,-0.1276]);
Transform Transform1248 = createNode("Transform");
Shape Shape1249 = createNode("Shape");
Shape1249.USE = "HAnimJointShape";
Transform1248.child = new undefined();

Transform1248.child[0] = Shape1249;

Transform1247.children = new MFNode();

Transform1247.children[0] = Transform1248;

HAnimSegment1246.children = new MFNode();

HAnimSegment1246.children[0] = Transform1247;

Shape Shape1250 = createNode("Shape");
LineSet LineSet1251 = createNode("LineSet");
LineSet1251.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1252 = createNode("ColorRGBA");
ColorRGBA1252.USE = "HAnimSegmentLineColorRGBA";
LineSet1251.color = ColorRGBA1252;

Coordinate Coordinate1253 = createNode("Coordinate");
Coordinate1253.point = new MFVec3f(new float[0.1809,0.6973,-0.1276,0.1956,0.8019,-0.0794]);
LineSet1251.coord = Coordinate1253;

Shape1250.geometry = LineSet1251;

HAnimSegment1246.children[1] = Shape1250;

Shape Shape1254 = createNode("Shape");
LineSet LineSet1255 = createNode("LineSet");
LineSet1255.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1256 = createNode("ColorRGBA");
ColorRGBA1256.USE = "HAnimSegmentLineColorRGBA";
LineSet1255.color = ColorRGBA1256;

Coordinate Coordinate1257 = createNode("Coordinate");
Coordinate1257.point = new MFVec3f(new float[0.1809,0.6973,-0.1276,0.1925,0.8066,-0.1036]);
LineSet1255.coord = Coordinate1257;

Shape1254.geometry = LineSet1255;

HAnimSegment1246.children[2] = Shape1254;

HAnimSite HAnimSite1258 = createNode("HAnimSite");
HAnimSite1258.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1258.name = "l_metacarpal_phalanx_5_pt";
HAnimSite1258.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
TouchSensor TouchSensor1259 = createNode("TouchSensor");
TouchSensor1259.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite1258.children = new MFNode();

HAnimSite1258.children[0] = TouchSensor1259;

Shape Shape1260 = createNode("Shape");
Shape1260.USE = "HAnimSiteShape";
HAnimSite1258.children[1] = Shape1260;

HAnimSegment1246.children[3] = HAnimSite1258;

HAnimJoint1245.children = new MFNode();

HAnimJoint1245.children[0] = HAnimSegment1246;

HAnimJoint HAnimJoint1261 = createNode("HAnimJoint");
HAnimJoint1261.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1261.name = "l_carpometacarpal_4";
HAnimJoint1261.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
HAnimSegment HAnimSegment1262 = createNode("HAnimSegment");
HAnimSegment1262.DEF = "hanim_l_metacarpal_4";
HAnimSegment1262.name = "l_metacarpal_4";
Transform Transform1263 = createNode("Transform");
Transform1263.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
Transform Transform1264 = createNode("Transform");
Shape Shape1265 = createNode("Shape");
Shape1265.USE = "HAnimJointShape";
Transform1264.child = new undefined();

Transform1264.child[0] = Shape1265;

Transform1263.children = new MFNode();

Transform1263.children[0] = Transform1264;

HAnimSegment1262.children = new MFNode();

HAnimSegment1262.children[0] = Transform1263;

Shape Shape1266 = createNode("Shape");
LineSet LineSet1267 = createNode("LineSet");
LineSet1267.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1268 = createNode("ColorRGBA");
ColorRGBA1268.USE = "HAnimSegmentLineColorRGBA";
LineSet1267.color = ColorRGBA1268;

Coordinate Coordinate1269 = createNode("Coordinate");
Coordinate1269.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1267.coord = Coordinate1269;

Shape1266.geometry = LineSet1267;

HAnimSegment1262.children[1] = Shape1266;

HAnimJoint1261.children = new MFNode();

HAnimJoint1261.children[0] = HAnimSegment1262;

HAnimJoint HAnimJoint1270 = createNode("HAnimJoint");
HAnimJoint1270.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1270.name = "l_metacarpophalangeal_4";
HAnimJoint1270.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
HAnimSegment HAnimSegment1271 = createNode("HAnimSegment");
HAnimSegment1271.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimSegment1271.name = "l_carpal_proximal_phalanx_4";
Transform Transform1272 = createNode("Transform");
Transform1272.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
Transform Transform1273 = createNode("Transform");
Shape Shape1274 = createNode("Shape");
Shape1274.USE = "HAnimJointShape";
Transform1273.child = new undefined();

Transform1273.child[0] = Shape1274;

Transform1272.children = new MFNode();

Transform1272.children[0] = Transform1273;

HAnimSegment1271.children = new MFNode();

HAnimSegment1271.children[0] = Transform1272;

Shape Shape1275 = createNode("Shape");
LineSet LineSet1276 = createNode("LineSet");
LineSet1276.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1277 = createNode("ColorRGBA");
ColorRGBA1277.USE = "HAnimSegmentLineColorRGBA";
LineSet1276.color = ColorRGBA1277;

Coordinate Coordinate1278 = createNode("Coordinate");
Coordinate1278.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1276.coord = Coordinate1278;

Shape1275.geometry = LineSet1276;

HAnimSegment1271.children[1] = Shape1275;

HAnimJoint1270.children = new MFNode();

HAnimJoint1270.children[0] = HAnimSegment1271;

HAnimJoint HAnimJoint1279 = createNode("HAnimJoint");
HAnimJoint1279.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1279.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1279.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
HAnimSegment HAnimSegment1280 = createNode("HAnimSegment");
HAnimSegment1280.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimSegment1280.name = "l_carpal_middle_phalanx_4";
Transform Transform1281 = createNode("Transform");
Transform1281.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
Transform Transform1282 = createNode("Transform");
Shape Shape1283 = createNode("Shape");
Shape1283.USE = "HAnimJointShape";
Transform1282.child = new undefined();

Transform1282.child[0] = Shape1283;

Transform1281.children = new MFNode();

Transform1281.children[0] = Transform1282;

HAnimSegment1280.children = new MFNode();

HAnimSegment1280.children[0] = Transform1281;

Shape Shape1284 = createNode("Shape");
LineSet LineSet1285 = createNode("LineSet");
LineSet1285.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1286 = createNode("ColorRGBA");
ColorRGBA1286.USE = "HAnimSegmentLineColorRGBA";
LineSet1285.color = ColorRGBA1286;

Coordinate Coordinate1287 = createNode("Coordinate");
Coordinate1287.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1285.coord = Coordinate1287;

Shape1284.geometry = LineSet1285;

HAnimSegment1280.children[1] = Shape1284;

HAnimSite HAnimSite1288 = createNode("HAnimSite");
HAnimSite1288.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite1288.name = "l_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor1289 = createNode("TouchSensor");
TouchSensor1289.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite1288.children = new MFNode();

HAnimSite1288.children[0] = TouchSensor1289;

Shape Shape1290 = createNode("Shape");
Shape1290.USE = "HAnimSiteShape";
HAnimSite1288.children[1] = Shape1290;

HAnimSegment1280.children[2] = HAnimSite1288;

HAnimJoint1279.children = new MFNode();

HAnimJoint1279.children[0] = HAnimSegment1280;

HAnimJoint HAnimJoint1291 = createNode("HAnimJoint");
HAnimJoint1291.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1291.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1291.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1279.children[1] = HAnimJoint1291;

HAnimJoint1270.children[1] = HAnimJoint1279;

HAnimJoint1261.children[1] = HAnimJoint1270;

HAnimJoint1245.children[1] = HAnimJoint1261;

HAnimJoint HAnimJoint1292 = createNode("HAnimJoint");
HAnimJoint1292.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1292.name = "l_carpometacarpal_5";
HAnimJoint1292.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
HAnimSegment HAnimSegment1293 = createNode("HAnimSegment");
HAnimSegment1293.DEF = "hanim_l_metacarpal_5";
HAnimSegment1293.name = "l_metacarpal_5";
Transform Transform1294 = createNode("Transform");
Transform1294.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
Transform Transform1295 = createNode("Transform");
Shape Shape1296 = createNode("Shape");
Shape1296.USE = "HAnimJointShape";
Transform1295.child = new undefined();

Transform1295.child[0] = Shape1296;

Transform1294.children = new MFNode();

Transform1294.children[0] = Transform1295;

HAnimSegment1293.children = new MFNode();

HAnimSegment1293.children[0] = Transform1294;

Shape Shape1297 = createNode("Shape");
LineSet LineSet1298 = createNode("LineSet");
LineSet1298.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1299 = createNode("ColorRGBA");
ColorRGBA1299.USE = "HAnimSegmentLineColorRGBA";
LineSet1298.color = ColorRGBA1299;

Coordinate Coordinate1300 = createNode("Coordinate");
Coordinate1300.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1298.coord = Coordinate1300;

Shape1297.geometry = LineSet1298;

HAnimSegment1293.children[1] = Shape1297;

HAnimJoint1292.children = new MFNode();

HAnimJoint1292.children[0] = HAnimSegment1293;

HAnimJoint HAnimJoint1301 = createNode("HAnimJoint");
HAnimJoint1301.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1301.name = "l_metacarpophalangeal_5";
HAnimJoint1301.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
HAnimSegment HAnimSegment1302 = createNode("HAnimSegment");
HAnimSegment1302.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimSegment1302.name = "l_carpal_proximal_phalanx_5";
Transform Transform1303 = createNode("Transform");
Transform1303.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
Transform Transform1304 = createNode("Transform");
Shape Shape1305 = createNode("Shape");
Shape1305.USE = "HAnimJointShape";
Transform1304.child = new undefined();

Transform1304.child[0] = Shape1305;

Transform1303.children = new MFNode();

Transform1303.children[0] = Transform1304;

HAnimSegment1302.children = new MFNode();

HAnimSegment1302.children[0] = Transform1303;

Shape Shape1306 = createNode("Shape");
LineSet LineSet1307 = createNode("LineSet");
LineSet1307.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1308 = createNode("ColorRGBA");
ColorRGBA1308.USE = "HAnimSegmentLineColorRGBA";
LineSet1307.color = ColorRGBA1308;

Coordinate Coordinate1309 = createNode("Coordinate");
Coordinate1309.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1307.coord = Coordinate1309;

Shape1306.geometry = LineSet1307;

HAnimSegment1302.children[1] = Shape1306;

HAnimJoint1301.children = new MFNode();

HAnimJoint1301.children[0] = HAnimSegment1302;

HAnimJoint HAnimJoint1310 = createNode("HAnimJoint");
HAnimJoint1310.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1310.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1310.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
HAnimSegment HAnimSegment1311 = createNode("HAnimSegment");
HAnimSegment1311.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimSegment1311.name = "l_carpal_middle_phalanx_5";
Transform Transform1312 = createNode("Transform");
Transform1312.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
Transform Transform1313 = createNode("Transform");
Shape Shape1314 = createNode("Shape");
Shape1314.USE = "HAnimJointShape";
Transform1313.child = new undefined();

Transform1313.child[0] = Shape1314;

Transform1312.children = new MFNode();

Transform1312.children[0] = Transform1313;

HAnimSegment1311.children = new MFNode();

HAnimSegment1311.children[0] = Transform1312;

Shape Shape1315 = createNode("Shape");
LineSet LineSet1316 = createNode("LineSet");
LineSet1316.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1317 = createNode("ColorRGBA");
ColorRGBA1317.USE = "HAnimSegmentLineColorRGBA";
LineSet1316.color = ColorRGBA1317;

Coordinate Coordinate1318 = createNode("Coordinate");
Coordinate1318.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1316.coord = Coordinate1318;

Shape1315.geometry = LineSet1316;

HAnimSegment1311.children[1] = Shape1315;

HAnimSite HAnimSite1319 = createNode("HAnimSite");
HAnimSite1319.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite1319.name = "l_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor1320 = createNode("TouchSensor");
TouchSensor1320.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite1319.children = new MFNode();

HAnimSite1319.children[0] = TouchSensor1320;

Shape Shape1321 = createNode("Shape");
Shape1321.USE = "HAnimSiteShape";
HAnimSite1319.children[1] = Shape1321;

HAnimSegment1311.children[2] = HAnimSite1319;

HAnimJoint1310.children = new MFNode();

HAnimJoint1310.children[0] = HAnimSegment1311;

HAnimJoint HAnimJoint1322 = createNode("HAnimJoint");
HAnimJoint1322.DEF = "hanim_l_carpal_distal_interphalangeal_4";
HAnimJoint1322.name = "l_carpal_distal_interphalangeal_5";
HAnimJoint1322.center = new SFVec3f(new float[0.1948,0.7277,-0.1017]);
HAnimJoint1310.children[1] = HAnimJoint1322;

HAnimJoint1301.children[1] = HAnimJoint1310;

HAnimJoint1292.children[1] = HAnimJoint1301;

HAnimJoint1245.children[2] = HAnimJoint1292;

HAnimJoint1104.children[4] = HAnimJoint1245;

HAnimJoint1092.children[1] = HAnimJoint1104;

HAnimJoint1071.children[1] = HAnimJoint1092;

HAnimJoint1056.children[1] = HAnimJoint1071;

HAnimJoint1047.children[1] = HAnimJoint1056;

HAnimJoint843.children[2] = HAnimJoint1047;

HAnimJoint HAnimJoint1323 = createNode("HAnimJoint");
HAnimJoint1323.DEF = "hanim_r_sternoclavicular";
HAnimJoint1323.name = "r_sternoclavicular";
HAnimJoint1323.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
HAnimSegment HAnimSegment1324 = createNode("HAnimSegment");
HAnimSegment1324.DEF = "hanim_r_clavicle";
HAnimSegment1324.name = "r_clavicle";
Transform Transform1325 = createNode("Transform");
Transform1325.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
Transform Transform1326 = createNode("Transform");
Shape Shape1327 = createNode("Shape");
Shape1327.USE = "HAnimJointShape";
Transform1326.child = new undefined();

Transform1326.child[0] = Shape1327;

Transform1325.children = new MFNode();

Transform1325.children[0] = Transform1326;

HAnimSegment1324.children = new MFNode();

HAnimSegment1324.children[0] = Transform1325;

Shape Shape1328 = createNode("Shape");
LineSet LineSet1329 = createNode("LineSet");
LineSet1329.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1330 = createNode("ColorRGBA");
ColorRGBA1330.USE = "HAnimSegmentLineColorRGBA";
LineSet1329.color = ColorRGBA1330;

Coordinate Coordinate1331 = createNode("Coordinate");
Coordinate1331.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet1329.coord = Coordinate1331;

Shape1328.geometry = LineSet1329;

HAnimSegment1324.children[1] = Shape1328;

HAnimJoint1323.children = new MFNode();

HAnimJoint1323.children[0] = HAnimSegment1324;

HAnimJoint HAnimJoint1332 = createNode("HAnimJoint");
HAnimJoint1332.DEF = "hanim_r_acromioclavicular";
HAnimJoint1332.name = "r_acromioclavicular";
HAnimJoint1332.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
HAnimSegment HAnimSegment1333 = createNode("HAnimSegment");
HAnimSegment1333.DEF = "hanim_r_scapula";
HAnimSegment1333.name = "r_scapula";
Transform Transform1334 = createNode("Transform");
Transform1334.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
Transform Transform1335 = createNode("Transform");
Shape Shape1336 = createNode("Shape");
Shape1336.USE = "HAnimJointShape";
Transform1335.child = new undefined();

Transform1335.child[0] = Shape1336;

Transform1334.children = new MFNode();

Transform1334.children[0] = Transform1335;

HAnimSegment1333.children = new MFNode();

HAnimSegment1333.children[0] = Transform1334;

Shape Shape1337 = createNode("Shape");
LineSet LineSet1338 = createNode("LineSet");
LineSet1338.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1339 = createNode("ColorRGBA");
ColorRGBA1339.USE = "HAnimSegmentLineColorRGBA";
LineSet1338.color = ColorRGBA1339;

Coordinate Coordinate1340 = createNode("Coordinate");
Coordinate1340.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet1338.coord = Coordinate1340;

Shape1337.geometry = LineSet1338;

HAnimSegment1333.children[1] = Shape1337;

HAnimSite HAnimSite1341 = createNode("HAnimSite");
HAnimSite1341.DEF = "hanim_r_bideltoid_pt";
HAnimSite1341.name = "r_bideltoid_pt";
TouchSensor TouchSensor1342 = createNode("TouchSensor");
TouchSensor1342.description = "HAnimSite r_bideltoid_pt";
HAnimSite1341.children = new MFNode();

HAnimSite1341.children[0] = TouchSensor1342;

Shape Shape1343 = createNode("Shape");
Shape1343.USE = "HAnimSiteShape";
HAnimSite1341.children[1] = Shape1343;

HAnimSegment1333.children[2] = HAnimSite1341;

HAnimSite HAnimSite1344 = createNode("HAnimSite");
HAnimSite1344.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite1344.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite1344.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
TouchSensor TouchSensor1345 = createNode("TouchSensor");
TouchSensor1345.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite1344.children = new MFNode();

HAnimSite1344.children[0] = TouchSensor1345;

Shape Shape1346 = createNode("Shape");
Shape1346.USE = "HAnimSiteShape";
HAnimSite1344.children[1] = Shape1346;

HAnimSegment1333.children[3] = HAnimSite1344;

HAnimJoint1332.children = new MFNode();

HAnimJoint1332.children[0] = HAnimSegment1333;

HAnimJoint HAnimJoint1347 = createNode("HAnimJoint");
HAnimJoint1347.DEF = "hanim_r_shoulder";
HAnimJoint1347.name = "r_shoulder";
HAnimJoint1347.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
HAnimSegment HAnimSegment1348 = createNode("HAnimSegment");
HAnimSegment1348.DEF = "hanim_r_upperarm";
HAnimSegment1348.name = "r_upperarm";
Transform Transform1349 = createNode("Transform");
Transform1349.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
Transform Transform1350 = createNode("Transform");
Shape Shape1351 = createNode("Shape");
Shape1351.USE = "HAnimJointShape";
Transform1350.child = new undefined();

Transform1350.child[0] = Shape1351;

Transform1349.children = new MFNode();

Transform1349.children[0] = Transform1350;

HAnimSegment1348.children = new MFNode();

HAnimSegment1348.children[0] = Transform1349;

Shape Shape1352 = createNode("Shape");
LineSet LineSet1353 = createNode("LineSet");
LineSet1353.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1354 = createNode("ColorRGBA");
ColorRGBA1354.USE = "HAnimSegmentLineColorRGBA";
LineSet1353.color = ColorRGBA1354;

Coordinate Coordinate1355 = createNode("Coordinate");
Coordinate1355.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet1353.coord = Coordinate1355;

Shape1352.geometry = LineSet1353;

HAnimSegment1348.children[1] = Shape1352;

HAnimSite HAnimSite1356 = createNode("HAnimSite");
HAnimSite1356.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite1356.name = "r_humeral_medial_epicondyles_pt";
HAnimSite1356.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
TouchSensor TouchSensor1357 = createNode("TouchSensor");
TouchSensor1357.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite1356.children = new MFNode();

HAnimSite1356.children[0] = TouchSensor1357;

Shape Shape1358 = createNode("Shape");
Shape1358.USE = "HAnimSiteShape";
HAnimSite1356.children[1] = Shape1358;

HAnimSegment1348.children[2] = HAnimSite1356;

HAnimSite HAnimSite1359 = createNode("HAnimSite");
HAnimSite1359.DEF = "hanim_r_olecranon_pt";
HAnimSite1359.name = "r_olecranon_pt";
HAnimSite1359.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
TouchSensor TouchSensor1360 = createNode("TouchSensor");
TouchSensor1360.description = "HAnimSite r_olecranon_pt";
HAnimSite1359.children = new MFNode();

HAnimSite1359.children[0] = TouchSensor1360;

Shape Shape1361 = createNode("Shape");
Shape1361.USE = "HAnimSiteShape";
HAnimSite1359.children[1] = Shape1361;

HAnimSegment1348.children[3] = HAnimSite1359;

HAnimSite HAnimSite1362 = createNode("HAnimSite");
HAnimSite1362.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1362.name = "r_radial_styloid_pt";
HAnimSite1362.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
TouchSensor TouchSensor1363 = createNode("TouchSensor");
TouchSensor1363.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1362.children = new MFNode();

HAnimSite1362.children[0] = TouchSensor1363;

Shape Shape1364 = createNode("Shape");
Shape1364.USE = "HAnimSiteShape";
HAnimSite1362.children[1] = Shape1364;

HAnimSegment1348.children[4] = HAnimSite1362;

HAnimSite HAnimSite1365 = createNode("HAnimSite");
HAnimSite1365.DEF = "hanim_r_radiale_pt";
HAnimSite1365.name = "r_radiale_pt";
HAnimSite1365.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
TouchSensor TouchSensor1366 = createNode("TouchSensor");
TouchSensor1366.description = "HAnimSite r_radiale_pt";
HAnimSite1365.children = new MFNode();

HAnimSite1365.children[0] = TouchSensor1366;

Shape Shape1367 = createNode("Shape");
Shape1367.USE = "HAnimSiteShape";
HAnimSite1365.children[1] = Shape1367;

HAnimSegment1348.children[5] = HAnimSite1365;

HAnimJoint1347.children = new MFNode();

HAnimJoint1347.children[0] = HAnimSegment1348;

HAnimJoint HAnimJoint1368 = createNode("HAnimJoint");
HAnimJoint1368.DEF = "hanim_r_elbow";
HAnimJoint1368.name = "r_elbow";
HAnimJoint1368.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
HAnimSegment HAnimSegment1369 = createNode("HAnimSegment");
HAnimSegment1369.DEF = "hanim_r_forearm";
HAnimSegment1369.name = "r_forearm";
Transform Transform1370 = createNode("Transform");
Transform1370.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
Transform Transform1371 = createNode("Transform");
Shape Shape1372 = createNode("Shape");
Shape1372.USE = "HAnimJointShape";
Transform1371.child = new undefined();

Transform1371.child[0] = Shape1372;

Transform1370.children = new MFNode();

Transform1370.children[0] = Transform1371;

HAnimSegment1369.children = new MFNode();

HAnimSegment1369.children[0] = Transform1370;

Shape Shape1373 = createNode("Shape");
LineSet LineSet1374 = createNode("LineSet");
LineSet1374.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1375 = createNode("ColorRGBA");
ColorRGBA1375.USE = "HAnimSegmentLineColorRGBA";
LineSet1374.color = ColorRGBA1375;

Coordinate Coordinate1376 = createNode("Coordinate");
Coordinate1376.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet1374.coord = Coordinate1376;

Shape1373.geometry = LineSet1374;

HAnimSegment1369.children[1] = Shape1373;

HAnimSite HAnimSite1377 = createNode("HAnimSite");
HAnimSite1377.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1377.name = "r_ulnar_styloid_pt";
HAnimSite1377.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
TouchSensor TouchSensor1378 = createNode("TouchSensor");
TouchSensor1378.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1377.children = new MFNode();

HAnimSite1377.children[0] = TouchSensor1378;

Shape Shape1379 = createNode("Shape");
Shape1379.USE = "HAnimSiteShape";
HAnimSite1377.children[1] = Shape1379;

HAnimSegment1369.children[2] = HAnimSite1377;

HAnimJoint1368.children = new MFNode();

HAnimJoint1368.children[0] = HAnimSegment1369;

HAnimJoint HAnimJoint1380 = createNode("HAnimJoint");
HAnimJoint1380.DEF = "hanim_r_radiocarpal";
HAnimJoint1380.name = "r_radiocarpal";
HAnimJoint1380.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
HAnimSegment HAnimSegment1381 = createNode("HAnimSegment");
HAnimSegment1381.DEF = "hanim_r_carpal";
HAnimSegment1381.name = "r_carpal";
Transform Transform1382 = createNode("Transform");
Transform1382.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform1382.rotation = new SFRotation(new float[0,0,1,-3.14]);
Transform1382.scale = new SFVec3f(new float[0.2,0.2,0.2]);
Transform Transform1383 = createNode("Transform");
Transform1383.rotation = new SFRotation(new float[0,1,0,1.57]);
Shape Shape1384 = createNode("Shape");
Shape1384.USE = "HAnimJointShape";
Transform1383.child = new undefined();

Transform1383.child[0] = Shape1384;

Transform1382.children = new MFNode();

Transform1382.children[0] = Transform1383;

HAnimSegment1381.children = new MFNode();

HAnimSegment1381.children[0] = Transform1382;

Shape Shape1385 = createNode("Shape");
LineSet LineSet1386 = createNode("LineSet");
LineSet1386.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1387 = createNode("ColorRGBA");
ColorRGBA1387.USE = "HAnimSegmentLineColorRGBA";
LineSet1386.color = ColorRGBA1387;

Coordinate Coordinate1388 = createNode("Coordinate");
Coordinate1388.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1811,0.6975,-0.0826]);
LineSet1386.coord = Coordinate1388;

Shape1385.geometry = LineSet1386;

HAnimSegment1381.children[1] = Shape1385;

Shape Shape1389 = createNode("Shape");
LineSet LineSet1390 = createNode("LineSet");
LineSet1390.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1391 = createNode("ColorRGBA");
ColorRGBA1391.USE = "HAnimSegmentLineColorRGBA";
LineSet1390.color = ColorRGBA1391;

Coordinate Coordinate1392 = createNode("Coordinate");
Coordinate1392.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1811,0.6984,-0.0935]);
LineSet1390.coord = Coordinate1392;

Shape1389.geometry = LineSet1390;

HAnimSegment1381.children[2] = Shape1389;

Shape Shape1393 = createNode("Shape");
LineSet LineSet1394 = createNode("LineSet");
LineSet1394.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1395 = createNode("ColorRGBA");
ColorRGBA1395.USE = "HAnimSegmentLineColorRGBA";
LineSet1394.color = ColorRGBA1395;

Coordinate Coordinate1396 = createNode("Coordinate");
Coordinate1396.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1809,0.7,-0.1067]);
LineSet1394.coord = Coordinate1396;

Shape1393.geometry = LineSet1394;

HAnimSegment1381.children[3] = Shape1393;

Shape Shape1397 = createNode("Shape");
LineSet LineSet1398 = createNode("LineSet");
LineSet1398.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1399 = createNode("ColorRGBA");
ColorRGBA1399.USE = "HAnimSegmentLineColorRGBA";
LineSet1398.color = ColorRGBA1399;

Coordinate Coordinate1400 = createNode("Coordinate");
Coordinate1400.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1809,0.6973,-0.1276]);
LineSet1398.coord = Coordinate1400;

Shape1397.geometry = LineSet1398;

HAnimSegment1381.children[4] = Shape1397;

HAnimJoint1380.children = new MFNode();

HAnimJoint1380.children[0] = HAnimSegment1381;

HAnimJoint HAnimJoint1401 = createNode("HAnimJoint");
HAnimJoint1401.DEF = "hanim_r_midcarpal_1";
HAnimJoint1401.name = "r_midcarpal_1";
HAnimJoint1401.center = new SFVec3f(new float[-0.1811,0.6975,-0.0826]);
HAnimSegment HAnimSegment1402 = createNode("HAnimSegment");
HAnimSegment1402.DEF = "hanim_r_trapezium";
HAnimSegment1402.name = "r_trapezium";
Transform Transform1403 = createNode("Transform");
Transform1403.translation = new SFVec3f(new float[-0.1811,0.6975,-0.0826]);
Transform Transform1404 = createNode("Transform");
Shape Shape1405 = createNode("Shape");
Shape1405.USE = "HAnimJointShape";
Transform1404.child = new undefined();

Transform1404.child[0] = Shape1405;

Transform1403.children = new MFNode();

Transform1403.children[0] = Transform1404;

HAnimSegment1402.children = new MFNode();

HAnimSegment1402.children[0] = Transform1403;

Shape Shape1406 = createNode("Shape");
LineSet LineSet1407 = createNode("LineSet");
LineSet1407.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1408 = createNode("ColorRGBA");
ColorRGBA1408.USE = "HAnimSegmentLineColorRGBA";
LineSet1407.color = ColorRGBA1408;

Coordinate Coordinate1409 = createNode("Coordinate");
Coordinate1409.point = new MFVec3f(new float[-0.1811,0.6975,-0.0826,-0.1899,0.8502,-0.0473]);
LineSet1407.coord = Coordinate1409;

Shape1406.geometry = LineSet1407;

HAnimSegment1402.children[1] = Shape1406;

HAnimJoint1401.children = new MFNode();

HAnimJoint1401.children[0] = HAnimSegment1402;

HAnimJoint HAnimJoint1410 = createNode("HAnimJoint");
HAnimJoint1410.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1410.name = "r_carpometacarpal_1";
HAnimJoint1410.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
HAnimSegment HAnimSegment1411 = createNode("HAnimSegment");
HAnimSegment1411.DEF = "hanim_r_metacarpal_1";
HAnimSegment1411.name = "r_metacarpal_1";
Transform Transform1412 = createNode("Transform");
Transform1412.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
Transform Transform1413 = createNode("Transform");
Shape Shape1414 = createNode("Shape");
Shape1414.USE = "HAnimJointShape";
Transform1413.child = new undefined();

Transform1413.child[0] = Shape1414;

Transform1412.children = new MFNode();

Transform1412.children[0] = Transform1413;

HAnimSegment1411.children = new MFNode();

HAnimSegment1411.children[0] = Transform1412;

Shape Shape1415 = createNode("Shape");
LineSet LineSet1416 = createNode("LineSet");
LineSet1416.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1417 = createNode("ColorRGBA");
ColorRGBA1417.USE = "HAnimSegmentLineColorRGBA";
LineSet1416.color = ColorRGBA1417;

Coordinate Coordinate1418 = createNode("Coordinate");
Coordinate1418.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1416.coord = Coordinate1418;

Shape1415.geometry = LineSet1416;

HAnimSegment1411.children[1] = Shape1415;

HAnimJoint1410.children = new MFNode();

HAnimJoint1410.children[0] = HAnimSegment1411;

HAnimJoint HAnimJoint1419 = createNode("HAnimJoint");
HAnimJoint1419.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1419.name = "r_metacarpophalangeal_1";
HAnimJoint1419.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
HAnimSegment HAnimSegment1420 = createNode("HAnimSegment");
HAnimSegment1420.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimSegment1420.name = "r_carpal_proximal_phalanx_1";
Transform Transform1421 = createNode("Transform");
Transform1421.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
Transform Transform1422 = createNode("Transform");
Shape Shape1423 = createNode("Shape");
Shape1423.USE = "HAnimJointShape";
Transform1422.child = new undefined();

Transform1422.child[0] = Shape1423;

Transform1421.children = new MFNode();

Transform1421.children[0] = Transform1422;

HAnimSegment1420.children = new MFNode();

HAnimSegment1420.children[0] = Transform1421;

Shape Shape1424 = createNode("Shape");
LineSet LineSet1425 = createNode("LineSet");
LineSet1425.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1426 = createNode("ColorRGBA");
ColorRGBA1426.USE = "HAnimSegmentLineColorRGBA";
LineSet1425.color = ColorRGBA1426;

Coordinate Coordinate1427 = createNode("Coordinate");
Coordinate1427.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1425.coord = Coordinate1427;

Shape1424.geometry = LineSet1425;

HAnimSegment1420.children[1] = Shape1424;

HAnimSite HAnimSite1428 = createNode("HAnimSite");
HAnimSite1428.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite1428.name = "r_carpal_distal_phalanx_1_tip";
TouchSensor TouchSensor1429 = createNode("TouchSensor");
TouchSensor1429.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1428.children = new MFNode();

HAnimSite1428.children[0] = TouchSensor1429;

Shape Shape1430 = createNode("Shape");
Shape1430.USE = "HAnimSiteShape";
HAnimSite1428.children[1] = Shape1430;

HAnimSegment1420.children[2] = HAnimSite1428;

HAnimJoint1419.children = new MFNode();

HAnimJoint1419.children[0] = HAnimSegment1420;

HAnimJoint HAnimJoint1431 = createNode("HAnimJoint");
HAnimJoint1431.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1431.name = "r_carpal_interphalangeal_1";
HAnimJoint1431.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1419.children[1] = HAnimJoint1431;

HAnimJoint1410.children[1] = HAnimJoint1419;

HAnimJoint1401.children[1] = HAnimJoint1410;

HAnimJoint1380.children[1] = HAnimJoint1401;

HAnimJoint HAnimJoint1432 = createNode("HAnimJoint");
HAnimJoint1432.DEF = "hanim_r_midcarpal_2";
HAnimJoint1432.name = "r_midcarpal_2";
HAnimJoint1432.center = new SFVec3f(new float[-0.1811,0.6984,-0.0935]);
HAnimSegment HAnimSegment1433 = createNode("HAnimSegment");
HAnimSegment1433.DEF = "hanim_r_trapezoid";
HAnimSegment1433.name = "r_trapezoid";
Transform Transform1434 = createNode("Transform");
Transform1434.translation = new SFVec3f(new float[-0.1811,0.6984,-0.0935]);
Transform Transform1435 = createNode("Transform");
Shape Shape1436 = createNode("Shape");
Shape1436.USE = "HAnimJointShape";
Transform1435.child = new undefined();

Transform1435.child[0] = Shape1436;

Transform1434.children = new MFNode();

Transform1434.children[0] = Transform1435;

HAnimSegment1433.children = new MFNode();

HAnimSegment1433.children[0] = Transform1434;

Shape Shape1437 = createNode("Shape");
LineSet LineSet1438 = createNode("LineSet");
LineSet1438.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1439 = createNode("ColorRGBA");
ColorRGBA1439.USE = "HAnimSegmentLineColorRGBA";
LineSet1438.color = ColorRGBA1439;

Coordinate Coordinate1440 = createNode("Coordinate");
Coordinate1440.point = new MFVec3f(new float[-0.1811,0.6984,-0.0935,-0.1961,0.8055,-0.0218]);
LineSet1438.coord = Coordinate1440;

Shape1437.geometry = LineSet1438;

HAnimSegment1433.children[1] = Shape1437;

HAnimSite HAnimSite1441 = createNode("HAnimSite");
HAnimSite1441.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1441.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1441.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
TouchSensor TouchSensor1442 = createNode("TouchSensor");
TouchSensor1442.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite1441.children = new MFNode();

HAnimSite1441.children[0] = TouchSensor1442;

Shape Shape1443 = createNode("Shape");
Shape1443.USE = "HAnimSiteShape";
HAnimSite1441.children[1] = Shape1443;

HAnimSegment1433.children[2] = HAnimSite1441;

HAnimJoint1432.children = new MFNode();

HAnimJoint1432.children[0] = HAnimSegment1433;

HAnimJoint HAnimJoint1444 = createNode("HAnimJoint");
HAnimJoint1444.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1444.name = "r_carpometacarpal_2";
HAnimJoint1444.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
HAnimSegment HAnimSegment1445 = createNode("HAnimSegment");
HAnimSegment1445.DEF = "hanim_r_metacarpal_2";
HAnimSegment1445.name = "r_metacarpal_2";
Transform Transform1446 = createNode("Transform");
Transform1446.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
Transform Transform1447 = createNode("Transform");
Shape Shape1448 = createNode("Shape");
Shape1448.USE = "HAnimJointShape";
Transform1447.child = new undefined();

Transform1447.child[0] = Shape1448;

Transform1446.children = new MFNode();

Transform1446.children[0] = Transform1447;

HAnimSegment1445.children = new MFNode();

HAnimSegment1445.children[0] = Transform1446;

Shape Shape1449 = createNode("Shape");
LineSet LineSet1450 = createNode("LineSet");
LineSet1450.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1451 = createNode("ColorRGBA");
ColorRGBA1451.USE = "HAnimSegmentLineColorRGBA";
LineSet1450.color = ColorRGBA1451;

Coordinate Coordinate1452 = createNode("Coordinate");
Coordinate1452.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1450.coord = Coordinate1452;

Shape1449.geometry = LineSet1450;

HAnimSegment1445.children[1] = Shape1449;

HAnimJoint1444.children = new MFNode();

HAnimJoint1444.children[0] = HAnimSegment1445;

HAnimJoint HAnimJoint1453 = createNode("HAnimJoint");
HAnimJoint1453.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1453.name = "r_metacarpophalangeal_2";
HAnimJoint1453.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
HAnimSegment HAnimSegment1454 = createNode("HAnimSegment");
HAnimSegment1454.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimSegment1454.name = "r_carpal_proximal_phalanx_2";
Transform Transform1455 = createNode("Transform");
Transform1455.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
Transform Transform1456 = createNode("Transform");
Shape Shape1457 = createNode("Shape");
Shape1457.USE = "HAnimJointShape";
Transform1456.child = new undefined();

Transform1456.child[0] = Shape1457;

Transform1455.children = new MFNode();

Transform1455.children[0] = Transform1456;

HAnimSegment1454.children = new MFNode();

HAnimSegment1454.children[0] = Transform1455;

Shape Shape1458 = createNode("Shape");
LineSet LineSet1459 = createNode("LineSet");
LineSet1459.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1460 = createNode("ColorRGBA");
ColorRGBA1460.USE = "HAnimSegmentLineColorRGBA";
LineSet1459.color = ColorRGBA1460;

Coordinate Coordinate1461 = createNode("Coordinate");
Coordinate1461.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1459.coord = Coordinate1461;

Shape1458.geometry = LineSet1459;

HAnimSegment1454.children[1] = Shape1458;

HAnimJoint1453.children = new MFNode();

HAnimJoint1453.children[0] = HAnimSegment1454;

HAnimJoint HAnimJoint1462 = createNode("HAnimJoint");
HAnimJoint1462.DEF = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimJoint1462.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1462.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
HAnimSegment HAnimSegment1463 = createNode("HAnimSegment");
HAnimSegment1463.DEF = "hanim_r_carpal_middle_phalanx_1";
HAnimSegment1463.name = "r_carpal_middle_phalanx_2";
Transform Transform1464 = createNode("Transform");
Transform1464.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
Transform Transform1465 = createNode("Transform");
Shape Shape1466 = createNode("Shape");
Shape1466.USE = "HAnimJointShape";
Transform1465.child = new undefined();

Transform1465.child[0] = Shape1466;

Transform1464.children = new MFNode();

Transform1464.children[0] = Transform1465;

HAnimSegment1463.children = new MFNode();

HAnimSegment1463.children[0] = Transform1464;

Shape Shape1467 = createNode("Shape");
LineSet LineSet1468 = createNode("LineSet");
LineSet1468.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1469 = createNode("ColorRGBA");
ColorRGBA1469.USE = "HAnimSegmentLineColorRGBA";
LineSet1468.color = ColorRGBA1469;

Coordinate Coordinate1470 = createNode("Coordinate");
Coordinate1470.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1468.coord = Coordinate1470;

Shape1467.geometry = LineSet1468;

HAnimSegment1463.children[1] = Shape1467;

HAnimSite HAnimSite1471 = createNode("HAnimSite");
HAnimSite1471.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite1471.name = "r_carpal_distal_phalanx_2_tip";
TouchSensor TouchSensor1472 = createNode("TouchSensor");
TouchSensor1472.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1471.children = new MFNode();

HAnimSite1471.children[0] = TouchSensor1472;

Shape Shape1473 = createNode("Shape");
Shape1473.USE = "HAnimSiteShape";
HAnimSite1471.children[1] = Shape1473;

HAnimSegment1463.children[2] = HAnimSite1471;

HAnimSite HAnimSite1474 = createNode("HAnimSite");
HAnimSite1474.DEF = "hanim_r_dactylion_pt";
HAnimSite1474.name = "r_dactylion_pt";
HAnimSite1474.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
TouchSensor TouchSensor1475 = createNode("TouchSensor");
TouchSensor1475.description = "HAnimSite r_dactylion_pt";
HAnimSite1474.children = new MFNode();

HAnimSite1474.children[0] = TouchSensor1475;

Shape Shape1476 = createNode("Shape");
Shape1476.USE = "HAnimSiteShape";
HAnimSite1474.children[1] = Shape1476;

HAnimSegment1463.children[3] = HAnimSite1474;

HAnimJoint1462.children = new MFNode();

HAnimJoint1462.children[0] = HAnimSegment1463;

HAnimJoint HAnimJoint1477 = createNode("HAnimJoint");
HAnimJoint1477.DEF = "hanim_r_carpal_distal_interphalangeal_1";
HAnimJoint1477.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1477.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1462.children[1] = HAnimJoint1477;

HAnimJoint1453.children[1] = HAnimJoint1462;

HAnimJoint1444.children[1] = HAnimJoint1453;

HAnimJoint1432.children[1] = HAnimJoint1444;

HAnimJoint1380.children[2] = HAnimJoint1432;

HAnimJoint HAnimJoint1478 = createNode("HAnimJoint");
HAnimJoint1478.DEF = "hanim_r_midcarpal_3";
HAnimJoint1478.name = "r_midcarpal_3";
HAnimJoint1478.center = new SFVec3f(new float[-0.1809,0.7,-0.1067]);
HAnimSegment HAnimSegment1479 = createNode("HAnimSegment");
HAnimSegment1479.DEF = "hanim_r_capitate";
HAnimSegment1479.name = "r_capitate";
Transform Transform1480 = createNode("Transform");
Transform1480.translation = new SFVec3f(new float[-0.1809,0.7,-0.1067]);
Transform Transform1481 = createNode("Transform");
Shape Shape1482 = createNode("Shape");
Shape1482.USE = "HAnimJointShape";
Transform1481.child = new undefined();

Transform1481.child[0] = Shape1482;

Transform1480.children = new MFNode();

Transform1480.children[0] = Transform1481;

HAnimSegment1479.children = new MFNode();

HAnimSegment1479.children[0] = Transform1480;

Shape Shape1483 = createNode("Shape");
LineSet LineSet1484 = createNode("LineSet");
LineSet1484.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1485 = createNode("ColorRGBA");
ColorRGBA1485.USE = "HAnimSegmentLineColorRGBA";
LineSet1484.color = ColorRGBA1485;

Coordinate Coordinate1486 = createNode("Coordinate");
Coordinate1486.point = new MFVec3f(new float[-0.1809,0.7,-0.1067,-0.1972,0.806,-0.0468]);
LineSet1484.coord = Coordinate1486;

Shape1483.geometry = LineSet1484;

HAnimSegment1479.children[1] = Shape1483;

HAnimSite HAnimSite1487 = createNode("HAnimSite");
HAnimSite1487.DEF = "hanim_r_metacarpal_phalanx_3_pt";
HAnimSite1487.name = "r_metacarpal_phalanx_3_pt";
TouchSensor TouchSensor1488 = createNode("TouchSensor");
TouchSensor1488.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite1487.children = new MFNode();

HAnimSite1487.children[0] = TouchSensor1488;

Shape Shape1489 = createNode("Shape");
Shape1489.USE = "HAnimSiteShape";
HAnimSite1487.children[1] = Shape1489;

HAnimSegment1479.children[2] = HAnimSite1487;

HAnimJoint1478.children = new MFNode();

HAnimJoint1478.children[0] = HAnimSegment1479;

HAnimJoint HAnimJoint1490 = createNode("HAnimJoint");
HAnimJoint1490.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1490.name = "r_carpometacarpal_3";
HAnimJoint1490.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
HAnimSegment HAnimSegment1491 = createNode("HAnimSegment");
HAnimSegment1491.DEF = "hanim_r_metacarpal_3";
HAnimSegment1491.name = "r_metacarpal_3";
Transform Transform1492 = createNode("Transform");
Transform1492.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
Transform Transform1493 = createNode("Transform");
Shape Shape1494 = createNode("Shape");
Shape1494.USE = "HAnimJointShape";
Transform1493.child = new undefined();

Transform1493.child[0] = Shape1494;

Transform1492.children = new MFNode();

Transform1492.children[0] = Transform1493;

HAnimSegment1491.children = new MFNode();

HAnimSegment1491.children[0] = Transform1492;

Shape Shape1495 = createNode("Shape");
LineSet LineSet1496 = createNode("LineSet");
LineSet1496.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1497 = createNode("ColorRGBA");
ColorRGBA1497.USE = "HAnimSegmentLineColorRGBA";
LineSet1496.color = ColorRGBA1497;

Coordinate Coordinate1498 = createNode("Coordinate");
Coordinate1498.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1496.coord = Coordinate1498;

Shape1495.geometry = LineSet1496;

HAnimSegment1491.children[1] = Shape1495;

HAnimJoint1490.children = new MFNode();

HAnimJoint1490.children[0] = HAnimSegment1491;

HAnimJoint HAnimJoint1499 = createNode("HAnimJoint");
HAnimJoint1499.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1499.name = "r_metacarpophalangeal_3";
HAnimJoint1499.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
HAnimSegment HAnimSegment1500 = createNode("HAnimSegment");
HAnimSegment1500.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimSegment1500.name = "r_carpal_proximal_phalanx_3";
Transform Transform1501 = createNode("Transform");
Transform1501.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
Transform Transform1502 = createNode("Transform");
Shape Shape1503 = createNode("Shape");
Shape1503.USE = "HAnimJointShape";
Transform1502.child = new undefined();

Transform1502.child[0] = Shape1503;

Transform1501.children = new MFNode();

Transform1501.children[0] = Transform1502;

HAnimSegment1500.children = new MFNode();

HAnimSegment1500.children[0] = Transform1501;

Shape Shape1504 = createNode("Shape");
LineSet LineSet1505 = createNode("LineSet");
LineSet1505.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1506 = createNode("ColorRGBA");
ColorRGBA1506.USE = "HAnimSegmentLineColorRGBA";
LineSet1505.color = ColorRGBA1506;

Coordinate Coordinate1507 = createNode("Coordinate");
Coordinate1507.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1505.coord = Coordinate1507;

Shape1504.geometry = LineSet1505;

HAnimSegment1500.children[1] = Shape1504;

HAnimJoint1499.children = new MFNode();

HAnimJoint1499.children[0] = HAnimSegment1500;

HAnimJoint HAnimJoint1508 = createNode("HAnimJoint");
HAnimJoint1508.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1508.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1508.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
HAnimSegment HAnimSegment1509 = createNode("HAnimSegment");
HAnimSegment1509.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimSegment1509.name = "r_carpal_middle_phalanx_3";
Transform Transform1510 = createNode("Transform");
Transform1510.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
Transform Transform1511 = createNode("Transform");
Shape Shape1512 = createNode("Shape");
Shape1512.USE = "HAnimJointShape";
Transform1511.child = new undefined();

Transform1511.child[0] = Shape1512;

Transform1510.children = new MFNode();

Transform1510.children[0] = Transform1511;

HAnimSegment1509.children = new MFNode();

HAnimSegment1509.children[0] = Transform1510;

Shape Shape1513 = createNode("Shape");
LineSet LineSet1514 = createNode("LineSet");
LineSet1514.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1515 = createNode("ColorRGBA");
ColorRGBA1515.USE = "HAnimSegmentLineColorRGBA";
LineSet1514.color = ColorRGBA1515;

Coordinate Coordinate1516 = createNode("Coordinate");
Coordinate1516.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1514.coord = Coordinate1516;

Shape1513.geometry = LineSet1514;

HAnimSegment1509.children[1] = Shape1513;

HAnimSite HAnimSite1517 = createNode("HAnimSite");
HAnimSite1517.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite1517.name = "r_carpal_distal_phalanx_3_tip";
TouchSensor TouchSensor1518 = createNode("TouchSensor");
TouchSensor1518.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1517.children = new MFNode();

HAnimSite1517.children[0] = TouchSensor1518;

Shape Shape1519 = createNode("Shape");
Shape1519.USE = "HAnimSiteShape";
HAnimSite1517.children[1] = Shape1519;

HAnimSegment1509.children[2] = HAnimSite1517;

HAnimJoint1508.children = new MFNode();

HAnimJoint1508.children[0] = HAnimSegment1509;

HAnimJoint HAnimJoint1520 = createNode("HAnimJoint");
HAnimJoint1520.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1520.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1520.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1508.children[1] = HAnimJoint1520;

HAnimJoint1499.children[1] = HAnimJoint1508;

HAnimJoint1490.children[1] = HAnimJoint1499;

HAnimJoint1478.children[1] = HAnimJoint1490;

HAnimJoint1380.children[3] = HAnimJoint1478;

HAnimJoint HAnimJoint1521 = createNode("HAnimJoint");
HAnimJoint1521.DEF = "hanim_r_midcarpal_4_1";
HAnimJoint1521.name = "r_midcarpal_4_5";
HAnimJoint1521.center = new SFVec3f(new float[-0.1809,0.6973,-0.1276]);
HAnimSegment HAnimSegment1522 = createNode("HAnimSegment");
HAnimSegment1522.DEF = "hanim_r_hamate";
HAnimSegment1522.name = "r_hamate";
Transform Transform1523 = createNode("Transform");
Transform1523.translation = new SFVec3f(new float[-0.1809,0.6973,-0.1276]);
Transform Transform1524 = createNode("Transform");
Shape Shape1525 = createNode("Shape");
Shape1525.USE = "HAnimJointShape";
Transform1524.child = new undefined();

Transform1524.child[0] = Shape1525;

Transform1523.children = new MFNode();

Transform1523.children[0] = Transform1524;

HAnimSegment1522.children = new MFNode();

HAnimSegment1522.children[0] = Transform1523;

Shape Shape1526 = createNode("Shape");
LineSet LineSet1527 = createNode("LineSet");
LineSet1527.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1528 = createNode("ColorRGBA");
ColorRGBA1528.USE = "HAnimSegmentLineColorRGBA";
LineSet1527.color = ColorRGBA1528;

Coordinate Coordinate1529 = createNode("Coordinate");
Coordinate1529.point = new MFVec3f(new float[-0.1809,0.6973,-0.1276,-0.1951,0.8049,-0.0732]);
LineSet1527.coord = Coordinate1529;

Shape1526.geometry = LineSet1527;

HAnimSegment1522.children[1] = Shape1526;

Shape Shape1530 = createNode("Shape");
LineSet LineSet1531 = createNode("LineSet");
LineSet1531.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1532 = createNode("ColorRGBA");
ColorRGBA1532.USE = "HAnimSegmentLineColorRGBA";
LineSet1531.color = ColorRGBA1532;

Coordinate Coordinate1533 = createNode("Coordinate");
Coordinate1533.point = new MFVec3f(new float[-0.1809,0.6973,-0.1276,-0.1926,0.8096,-0.0975]);
LineSet1531.coord = Coordinate1533;

Shape1530.geometry = LineSet1531;

HAnimSegment1522.children[2] = Shape1530;

HAnimSite HAnimSite1534 = createNode("HAnimSite");
HAnimSite1534.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1534.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1534.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
TouchSensor TouchSensor1535 = createNode("TouchSensor");
TouchSensor1535.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite1534.children = new MFNode();

HAnimSite1534.children[0] = TouchSensor1535;

Shape Shape1536 = createNode("Shape");
Shape1536.USE = "HAnimSiteShape";
HAnimSite1534.children[1] = Shape1536;

HAnimSegment1522.children[3] = HAnimSite1534;

HAnimJoint1521.children = new MFNode();

HAnimJoint1521.children[0] = HAnimSegment1522;

HAnimJoint HAnimJoint1537 = createNode("HAnimJoint");
HAnimJoint1537.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1537.name = "r_carpometacarpal_4";
HAnimJoint1537.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
HAnimSegment HAnimSegment1538 = createNode("HAnimSegment");
HAnimSegment1538.DEF = "hanim_r_metacarpal_4";
HAnimSegment1538.name = "r_metacarpal_4";
Transform Transform1539 = createNode("Transform");
Transform1539.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
Transform Transform1540 = createNode("Transform");
Shape Shape1541 = createNode("Shape");
Shape1541.USE = "HAnimJointShape";
Transform1540.child = new undefined();

Transform1540.child[0] = Shape1541;

Transform1539.children = new MFNode();

Transform1539.children[0] = Transform1540;

HAnimSegment1538.children = new MFNode();

HAnimSegment1538.children[0] = Transform1539;

Shape Shape1542 = createNode("Shape");
LineSet LineSet1543 = createNode("LineSet");
LineSet1543.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1544 = createNode("ColorRGBA");
ColorRGBA1544.USE = "HAnimSegmentLineColorRGBA";
LineSet1543.color = ColorRGBA1544;

Coordinate Coordinate1545 = createNode("Coordinate");
Coordinate1545.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1543.coord = Coordinate1545;

Shape1542.geometry = LineSet1543;

HAnimSegment1538.children[1] = Shape1542;

HAnimJoint1537.children = new MFNode();

HAnimJoint1537.children[0] = HAnimSegment1538;

HAnimJoint HAnimJoint1546 = createNode("HAnimJoint");
HAnimJoint1546.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1546.name = "r_metacarpophalangeal_4";
HAnimJoint1546.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
HAnimSegment HAnimSegment1547 = createNode("HAnimSegment");
HAnimSegment1547.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimSegment1547.name = "r_carpal_proximal_phalanx_4";
Transform Transform1548 = createNode("Transform");
Transform1548.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
Transform Transform1549 = createNode("Transform");
Shape Shape1550 = createNode("Shape");
Shape1550.USE = "HAnimJointShape";
Transform1549.child = new undefined();

Transform1549.child[0] = Shape1550;

Transform1548.children = new MFNode();

Transform1548.children[0] = Transform1549;

HAnimSegment1547.children = new MFNode();

HAnimSegment1547.children[0] = Transform1548;

Shape Shape1551 = createNode("Shape");
LineSet LineSet1552 = createNode("LineSet");
LineSet1552.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1553 = createNode("ColorRGBA");
ColorRGBA1553.USE = "HAnimSegmentLineColorRGBA";
LineSet1552.color = ColorRGBA1553;

Coordinate Coordinate1554 = createNode("Coordinate");
Coordinate1554.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1552.coord = Coordinate1554;

Shape1551.geometry = LineSet1552;

HAnimSegment1547.children[1] = Shape1551;

HAnimJoint1546.children = new MFNode();

HAnimJoint1546.children[0] = HAnimSegment1547;

HAnimJoint HAnimJoint1555 = createNode("HAnimJoint");
HAnimJoint1555.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1555.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1555.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
HAnimSegment HAnimSegment1556 = createNode("HAnimSegment");
HAnimSegment1556.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimSegment1556.name = "r_carpal_middle_phalanx_4";
Transform Transform1557 = createNode("Transform");
Transform1557.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
Transform Transform1558 = createNode("Transform");
Shape Shape1559 = createNode("Shape");
Shape1559.USE = "HAnimJointShape";
Transform1558.child = new undefined();

Transform1558.child[0] = Shape1559;

Transform1557.children = new MFNode();

Transform1557.children[0] = Transform1558;

HAnimSegment1556.children = new MFNode();

HAnimSegment1556.children[0] = Transform1557;

Shape Shape1560 = createNode("Shape");
LineSet LineSet1561 = createNode("LineSet");
LineSet1561.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1562 = createNode("ColorRGBA");
ColorRGBA1562.USE = "HAnimSegmentLineColorRGBA";
LineSet1561.color = ColorRGBA1562;

Coordinate Coordinate1563 = createNode("Coordinate");
Coordinate1563.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1561.coord = Coordinate1563;

Shape1560.geometry = LineSet1561;

HAnimSegment1556.children[1] = Shape1560;

HAnimSite HAnimSite1564 = createNode("HAnimSite");
HAnimSite1564.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite1564.name = "r_carpal_distal_phalanx_4_tip";
TouchSensor TouchSensor1565 = createNode("TouchSensor");
TouchSensor1565.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1564.children = new MFNode();

HAnimSite1564.children[0] = TouchSensor1565;

Shape Shape1566 = createNode("Shape");
Shape1566.USE = "HAnimSiteShape";
HAnimSite1564.children[1] = Shape1566;

HAnimSegment1556.children[2] = HAnimSite1564;

HAnimJoint1555.children = new MFNode();

HAnimJoint1555.children[0] = HAnimSegment1556;

HAnimJoint HAnimJoint1567 = createNode("HAnimJoint");
HAnimJoint1567.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1567.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1567.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1555.children[1] = HAnimJoint1567;

HAnimJoint1546.children[1] = HAnimJoint1555;

HAnimJoint1537.children[1] = HAnimJoint1546;

HAnimJoint1521.children[1] = HAnimJoint1537;

HAnimJoint HAnimJoint1568 = createNode("HAnimJoint");
HAnimJoint1568.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1568.name = "r_carpometacarpal_5";
HAnimJoint1568.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
HAnimSegment HAnimSegment1569 = createNode("HAnimSegment");
HAnimSegment1569.DEF = "hanim_r_metacarpal_5";
HAnimSegment1569.name = "r_metacarpal_5";
Transform Transform1570 = createNode("Transform");
Transform1570.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
Transform Transform1571 = createNode("Transform");
Shape Shape1572 = createNode("Shape");
Shape1572.USE = "HAnimJointShape";
Transform1571.child = new undefined();

Transform1571.child[0] = Shape1572;

Transform1570.children = new MFNode();

Transform1570.children[0] = Transform1571;

HAnimSegment1569.children = new MFNode();

HAnimSegment1569.children[0] = Transform1570;

Shape Shape1573 = createNode("Shape");
LineSet LineSet1574 = createNode("LineSet");
LineSet1574.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1575 = createNode("ColorRGBA");
ColorRGBA1575.USE = "HAnimSegmentLineColorRGBA";
LineSet1574.color = ColorRGBA1575;

Coordinate Coordinate1576 = createNode("Coordinate");
Coordinate1576.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1574.coord = Coordinate1576;

Shape1573.geometry = LineSet1574;

HAnimSegment1569.children[1] = Shape1573;

HAnimJoint1568.children = new MFNode();

HAnimJoint1568.children[0] = HAnimSegment1569;

HAnimJoint HAnimJoint1577 = createNode("HAnimJoint");
HAnimJoint1577.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1577.name = "r_metacarpophalangeal_5";
HAnimJoint1577.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
HAnimSegment HAnimSegment1578 = createNode("HAnimSegment");
HAnimSegment1578.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimSegment1578.name = "r_carpal_proximal_phalanx_5";
Transform Transform1579 = createNode("Transform");
Transform1579.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
Transform Transform1580 = createNode("Transform");
Shape Shape1581 = createNode("Shape");
Shape1581.USE = "HAnimJointShape";
Transform1580.child = new undefined();

Transform1580.child[0] = Shape1581;

Transform1579.children = new MFNode();

Transform1579.children[0] = Transform1580;

HAnimSegment1578.children = new MFNode();

HAnimSegment1578.children[0] = Transform1579;

Shape Shape1582 = createNode("Shape");
LineSet LineSet1583 = createNode("LineSet");
LineSet1583.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1584 = createNode("ColorRGBA");
ColorRGBA1584.USE = "HAnimSegmentLineColorRGBA";
LineSet1583.color = ColorRGBA1584;

Coordinate Coordinate1585 = createNode("Coordinate");
Coordinate1585.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1583.coord = Coordinate1585;

Shape1582.geometry = LineSet1583;

HAnimSegment1578.children[1] = Shape1582;

HAnimJoint1577.children = new MFNode();

HAnimJoint1577.children[0] = HAnimSegment1578;

HAnimJoint HAnimJoint1586 = createNode("HAnimJoint");
HAnimJoint1586.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1586.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1586.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
HAnimSegment HAnimSegment1587 = createNode("HAnimSegment");
HAnimSegment1587.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimSegment1587.name = "r_carpal_middle_phalanx_5";
Transform Transform1588 = createNode("Transform");
Transform1588.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
Transform Transform1589 = createNode("Transform");
Shape Shape1590 = createNode("Shape");
Shape1590.USE = "HAnimJointShape";
Transform1589.child = new undefined();

Transform1589.child[0] = Shape1590;

Transform1588.children = new MFNode();

Transform1588.children[0] = Transform1589;

HAnimSegment1587.children = new MFNode();

HAnimSegment1587.children[0] = Transform1588;

Shape Shape1591 = createNode("Shape");
LineSet LineSet1592 = createNode("LineSet");
LineSet1592.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA1593 = createNode("ColorRGBA");
ColorRGBA1593.USE = "HAnimSegmentLineColorRGBA";
LineSet1592.color = ColorRGBA1593;

Coordinate Coordinate1594 = createNode("Coordinate");
Coordinate1594.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1592.coord = Coordinate1594;

Shape1591.geometry = LineSet1592;

HAnimSegment1587.children[1] = Shape1591;

HAnimSite HAnimSite1595 = createNode("HAnimSite");
HAnimSite1595.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite1595.name = "r_carpal_distal_phalanx_5_tip";
TouchSensor TouchSensor1596 = createNode("TouchSensor");
TouchSensor1596.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1595.children = new MFNode();

HAnimSite1595.children[0] = TouchSensor1596;

Shape Shape1597 = createNode("Shape");
Shape1597.USE = "HAnimSiteShape";
HAnimSite1595.children[1] = Shape1597;

HAnimSegment1587.children[2] = HAnimSite1595;

HAnimJoint1586.children = new MFNode();

HAnimJoint1586.children[0] = HAnimSegment1587;

HAnimJoint HAnimJoint1598 = createNode("HAnimJoint");
HAnimJoint1598.DEF = "hanim_r_carpal_distal_interphalangeal_4";
HAnimJoint1598.name = "r_carpal_distal_interphalangeal_5";
HAnimJoint1598.center = new SFVec3f(new float[-0.1908,0.754,-0.096]);
HAnimJoint1586.children[1] = HAnimJoint1598;

HAnimJoint1577.children[1] = HAnimJoint1586;

HAnimJoint1568.children[1] = HAnimJoint1577;

HAnimJoint1521.children[2] = HAnimJoint1568;

HAnimJoint1380.children[4] = HAnimJoint1521;

HAnimJoint1368.children[1] = HAnimJoint1380;

HAnimJoint1347.children[1] = HAnimJoint1368;

HAnimJoint1332.children[1] = HAnimJoint1347;

HAnimJoint1323.children[1] = HAnimJoint1332;

HAnimJoint843.children[3] = HAnimJoint1323;

HAnimJoint828.children[1] = HAnimJoint843;

HAnimJoint819.children[1] = HAnimJoint828;

HAnimJoint810.children[1] = HAnimJoint819;

HAnimJoint801.children[1] = HAnimJoint810;

HAnimJoint789.children[1] = HAnimJoint801;

HAnimJoint768.children[1] = HAnimJoint789;

HAnimJoint759.children[1] = HAnimJoint768;

HAnimJoint750.children[1] = HAnimJoint759;

HAnimJoint735.children[1] = HAnimJoint750;

HAnimJoint723.children[1] = HAnimJoint735;

HAnimJoint714.children[1] = HAnimJoint723;

HAnimJoint705.children[1] = HAnimJoint714;

HAnimJoint696.children[1] = HAnimJoint705;

HAnimJoint678.children[1] = HAnimJoint696;

HAnimJoint669.children[1] = HAnimJoint678;

HAnimJoint660.children[1] = HAnimJoint669;

HAnimJoint43.children[2] = HAnimJoint660;

HAnimHumanoid42.joints = new MFNode();

HAnimHumanoid42.joints[0] = HAnimJoint43;

HAnimSite HAnimSite1599 = createNode("HAnimSite");
HAnimSite1599.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid42.viewpoints[1] = HAnimSite1599;

HAnimSite HAnimSite1600 = createNode("HAnimSite");
HAnimSite1600.USE = "hanim_crotch_pt";
HAnimHumanoid42.viewpoints[2] = HAnimSite1600;

HAnimSite HAnimSite1601 = createNode("HAnimSite");
HAnimSite1601.USE = "hanim_l_asis_pt";
HAnimHumanoid42.viewpoints[3] = HAnimSite1601;

HAnimSite HAnimSite1602 = createNode("HAnimSite");
HAnimSite1602.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid42.viewpoints[4] = HAnimSite1602;

HAnimSite HAnimSite1603 = createNode("HAnimSite");
HAnimSite1603.USE = "hanim_l_psis_pt";
HAnimHumanoid42.viewpoints[5] = HAnimSite1603;

HAnimSite HAnimSite1604 = createNode("HAnimSite");
HAnimSite1604.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid42.viewpoints[6] = HAnimSite1604;

HAnimSite HAnimSite1605 = createNode("HAnimSite");
HAnimSite1605.USE = "hanim_r_asis_pt";
HAnimHumanoid42.viewpoints[7] = HAnimSite1605;

HAnimSite HAnimSite1606 = createNode("HAnimSite");
HAnimSite1606.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid42.viewpoints[8] = HAnimSite1606;

HAnimSite HAnimSite1607 = createNode("HAnimSite");
HAnimSite1607.USE = "hanim_r_psis_pt";
HAnimHumanoid42.viewpoints[9] = HAnimSite1607;

HAnimSite HAnimSite1608 = createNode("HAnimSite");
HAnimSite1608.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid42.viewpoints[10] = HAnimSite1608;

HAnimSite HAnimSite1609 = createNode("HAnimSite");
HAnimSite1609.USE = "hanim_navel_pt";
HAnimHumanoid42.viewpoints[11] = HAnimSite1609;

HAnimSite HAnimSite1610 = createNode("HAnimSite");
HAnimSite1610.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid42.viewpoints[12] = HAnimSite1610;

HAnimSite HAnimSite1611 = createNode("HAnimSite");
HAnimSite1611.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid42.viewpoints[13] = HAnimSite1611;

HAnimSite HAnimSite1612 = createNode("HAnimSite");
HAnimSite1612.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[14] = HAnimSite1612;

HAnimSite HAnimSite1613 = createNode("HAnimSite");
HAnimSite1613.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[15] = HAnimSite1613;

HAnimSite HAnimSite1614 = createNode("HAnimSite");
HAnimSite1614.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid42.viewpoints[16] = HAnimSite1614;

HAnimSite HAnimSite1615 = createNode("HAnimSite");
HAnimSite1615.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid42.viewpoints[17] = HAnimSite1615;

HAnimSite HAnimSite1616 = createNode("HAnimSite");
HAnimSite1616.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[18] = HAnimSite1616;

HAnimSite HAnimSite1617 = createNode("HAnimSite");
HAnimSite1617.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[19] = HAnimSite1617;

HAnimSite HAnimSite1618 = createNode("HAnimSite");
HAnimSite1618.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid42.viewpoints[20] = HAnimSite1618;

HAnimSite HAnimSite1619 = createNode("HAnimSite");
HAnimSite1619.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid42.viewpoints[21] = HAnimSite1619;

HAnimSite HAnimSite1620 = createNode("HAnimSite");
HAnimSite1620.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[22] = HAnimSite1620;

HAnimSite HAnimSite1621 = createNode("HAnimSite");
HAnimSite1621.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[23] = HAnimSite1621;

HAnimSite HAnimSite1622 = createNode("HAnimSite");
HAnimSite1622.USE = "hanim_l_tibiale_pt";
HAnimHumanoid42.viewpoints[24] = HAnimSite1622;

HAnimSite HAnimSite1623 = createNode("HAnimSite");
HAnimSite1623.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[25] = HAnimSite1623;

HAnimSite HAnimSite1624 = createNode("HAnimSite");
HAnimSite1624.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid42.viewpoints[26] = HAnimSite1624;

HAnimSite HAnimSite1625 = createNode("HAnimSite");
HAnimSite1625.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid42.viewpoints[27] = HAnimSite1625;

HAnimSite HAnimSite1626 = createNode("HAnimSite");
HAnimSite1626.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[28] = HAnimSite1626;

HAnimSite HAnimSite1627 = createNode("HAnimSite");
HAnimSite1627.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[29] = HAnimSite1627;

HAnimSite HAnimSite1628 = createNode("HAnimSite");
HAnimSite1628.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[30] = HAnimSite1628;

HAnimSite HAnimSite1629 = createNode("HAnimSite");
HAnimSite1629.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[31] = HAnimSite1629;

HAnimSite HAnimSite1630 = createNode("HAnimSite");
HAnimSite1630.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[32] = HAnimSite1630;

HAnimSite HAnimSite1631 = createNode("HAnimSite");
HAnimSite1631.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[33] = HAnimSite1631;

HAnimSite HAnimSite1632 = createNode("HAnimSite");
HAnimSite1632.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[34] = HAnimSite1632;

HAnimSite HAnimSite1633 = createNode("HAnimSite");
HAnimSite1633.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[35] = HAnimSite1633;

HAnimSite HAnimSite1634 = createNode("HAnimSite");
HAnimSite1634.USE = "hanim_r_tibiale_pt";
HAnimHumanoid42.viewpoints[36] = HAnimSite1634;

HAnimSite HAnimSite1635 = createNode("HAnimSite");
HAnimSite1635.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[37] = HAnimSite1635;

HAnimSite HAnimSite1636 = createNode("HAnimSite");
HAnimSite1636.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid42.viewpoints[38] = HAnimSite1636;

HAnimSite HAnimSite1637 = createNode("HAnimSite");
HAnimSite1637.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid42.viewpoints[39] = HAnimSite1637;

HAnimSite HAnimSite1638 = createNode("HAnimSite");
HAnimSite1638.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[40] = HAnimSite1638;

HAnimSite HAnimSite1639 = createNode("HAnimSite");
HAnimSite1639.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[41] = HAnimSite1639;

HAnimSite HAnimSite1640 = createNode("HAnimSite");
HAnimSite1640.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[42] = HAnimSite1640;

HAnimSite HAnimSite1641 = createNode("HAnimSite");
HAnimSite1641.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[43] = HAnimSite1641;

HAnimSite HAnimSite1642 = createNode("HAnimSite");
HAnimSite1642.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[44] = HAnimSite1642;

HAnimSite HAnimSite1643 = createNode("HAnimSite");
HAnimSite1643.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[45] = HAnimSite1643;

HAnimSite HAnimSite1644 = createNode("HAnimSite");
HAnimSite1644.USE = "hanim_l_rib10_pt";
HAnimHumanoid42.viewpoints[46] = HAnimSite1644;

HAnimSite HAnimSite1645 = createNode("HAnimSite");
HAnimSite1645.USE = "hanim_r_rib10_pt";
HAnimHumanoid42.viewpoints[47] = HAnimSite1645;

HAnimSite HAnimSite1646 = createNode("HAnimSite");
HAnimSite1646.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid42.viewpoints[48] = HAnimSite1646;

HAnimSite HAnimSite1647 = createNode("HAnimSite");
HAnimSite1647.USE = "hanim_substernale_pt";
HAnimHumanoid42.viewpoints[49] = HAnimSite1647;

HAnimSite HAnimSite1648 = createNode("HAnimSite");
HAnimSite1648.USE = "hanim_l_thelion_pt";
HAnimHumanoid42.viewpoints[50] = HAnimSite1648;

HAnimSite HAnimSite1649 = createNode("HAnimSite");
HAnimSite1649.USE = "hanim_r_thelion_pt";
HAnimHumanoid42.viewpoints[51] = HAnimSite1649;

HAnimSite HAnimSite1650 = createNode("HAnimSite");
HAnimSite1650.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[52] = HAnimSite1650;

HAnimSite HAnimSite1651 = createNode("HAnimSite");
HAnimSite1651.USE = "hanim_mesosternale_pt";
HAnimHumanoid42.viewpoints[53] = HAnimSite1651;

HAnimSite HAnimSite1652 = createNode("HAnimSite");
HAnimSite1652.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[54] = HAnimSite1652;

HAnimSite HAnimSite1653 = createNode("HAnimSite");
HAnimSite1653.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[55] = HAnimSite1653;

HAnimSite HAnimSite1654 = createNode("HAnimSite");
HAnimSite1654.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid42.viewpoints[56] = HAnimSite1654;

HAnimSite HAnimSite1655 = createNode("HAnimSite");
HAnimSite1655.USE = "hanim_cervicale_pt";
HAnimHumanoid42.viewpoints[57] = HAnimSite1655;

HAnimSite HAnimSite1656 = createNode("HAnimSite");
HAnimSite1656.USE = "hanim_suprasternale_pt";
HAnimHumanoid42.viewpoints[58] = HAnimSite1656;

HAnimSite HAnimSite1657 = createNode("HAnimSite");
HAnimSite1657.USE = "hanim_l_neck_base_pt";
HAnimHumanoid42.viewpoints[59] = HAnimSite1657;

HAnimSite HAnimSite1658 = createNode("HAnimSite");
HAnimSite1658.USE = "hanim_r_neck_base_pt";
HAnimHumanoid42.viewpoints[60] = HAnimSite1658;

HAnimSite HAnimSite1659 = createNode("HAnimSite");
HAnimSite1659.USE = "hanim_l_acromion_pt";
HAnimHumanoid42.viewpoints[61] = HAnimSite1659;

HAnimSite HAnimSite1660 = createNode("HAnimSite");
HAnimSite1660.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid42.viewpoints[62] = HAnimSite1660;

HAnimSite HAnimSite1661 = createNode("HAnimSite");
HAnimSite1661.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid42.viewpoints[63] = HAnimSite1661;

HAnimSite HAnimSite1662 = createNode("HAnimSite");
HAnimSite1662.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid42.viewpoints[64] = HAnimSite1662;

HAnimSite HAnimSite1663 = createNode("HAnimSite");
HAnimSite1663.USE = "hanim_l_clavicale_pt";
HAnimHumanoid42.viewpoints[65] = HAnimSite1663;

HAnimSite HAnimSite1664 = createNode("HAnimSite");
HAnimSite1664.USE = "hanim_r_acromion_pt";
HAnimHumanoid42.viewpoints[66] = HAnimSite1664;

HAnimSite HAnimSite1665 = createNode("HAnimSite");
HAnimSite1665.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid42.viewpoints[67] = HAnimSite1665;

HAnimSite HAnimSite1666 = createNode("HAnimSite");
HAnimSite1666.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid42.viewpoints[68] = HAnimSite1666;

HAnimSite HAnimSite1667 = createNode("HAnimSite");
HAnimSite1667.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid42.viewpoints[69] = HAnimSite1667;

HAnimSite HAnimSite1668 = createNode("HAnimSite");
HAnimSite1668.USE = "hanim_r_clavicale_pt";
HAnimHumanoid42.viewpoints[70] = HAnimSite1668;

HAnimSite HAnimSite1669 = createNode("HAnimSite");
HAnimSite1669.USE = "hanim_adams_apple_pt";
HAnimHumanoid42.viewpoints[71] = HAnimSite1669;

HAnimSite HAnimSite1670 = createNode("HAnimSite");
HAnimSite1670.USE = "hanim_glabella_pt";
HAnimHumanoid42.viewpoints[72] = HAnimSite1670;

HAnimSite HAnimSite1671 = createNode("HAnimSite");
HAnimSite1671.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid42.viewpoints[73] = HAnimSite1671;

HAnimSite HAnimSite1672 = createNode("HAnimSite");
HAnimSite1672.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid42.viewpoints[74] = HAnimSite1672;

HAnimSite HAnimSite1673 = createNode("HAnimSite");
HAnimSite1673.USE = "hanim_l_tragion_pt";
HAnimHumanoid42.viewpoints[75] = HAnimSite1673;

HAnimSite HAnimSite1674 = createNode("HAnimSite");
HAnimSite1674.USE = "hanim_nuchale_pt";
HAnimHumanoid42.viewpoints[76] = HAnimSite1674;

HAnimSite HAnimSite1675 = createNode("HAnimSite");
HAnimSite1675.USE = "hanim_opisthocranion_pt";
HAnimHumanoid42.viewpoints[77] = HAnimSite1675;

HAnimSite HAnimSite1676 = createNode("HAnimSite");
HAnimSite1676.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid42.viewpoints[78] = HAnimSite1676;

HAnimSite HAnimSite1677 = createNode("HAnimSite");
HAnimSite1677.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid42.viewpoints[79] = HAnimSite1677;

HAnimSite HAnimSite1678 = createNode("HAnimSite");
HAnimSite1678.USE = "hanim_r_tragion_pt";
HAnimHumanoid42.viewpoints[80] = HAnimSite1678;

HAnimSite HAnimSite1679 = createNode("HAnimSite");
HAnimSite1679.USE = "hanim_sellion_pt";
HAnimHumanoid42.viewpoints[81] = HAnimSite1679;

HAnimSite HAnimSite1680 = createNode("HAnimSite");
HAnimSite1680.USE = "hanim_skull_vertex_pt";
HAnimHumanoid42.viewpoints[82] = HAnimSite1680;

HAnimSite HAnimSite1681 = createNode("HAnimSite");
HAnimSite1681.USE = "hanim_l_gonion_pt";
HAnimHumanoid42.viewpoints[83] = HAnimSite1681;

HAnimSite HAnimSite1682 = createNode("HAnimSite");
HAnimSite1682.USE = "hanim_menton_pt";
HAnimHumanoid42.viewpoints[84] = HAnimSite1682;

HAnimSite HAnimSite1683 = createNode("HAnimSite");
HAnimSite1683.USE = "hanim_r_gonion_pt";
HAnimHumanoid42.viewpoints[85] = HAnimSite1683;

HAnimSite HAnimSite1684 = createNode("HAnimSite");
HAnimSite1684.USE = "hanim_supramenton_pt";
HAnimHumanoid42.viewpoints[86] = HAnimSite1684;

HAnimSite HAnimSite1685 = createNode("HAnimSite");
HAnimSite1685.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid42.viewpoints[87] = HAnimSite1685;

HAnimSite HAnimSite1686 = createNode("HAnimSite");
HAnimSite1686.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[88] = HAnimSite1686;

HAnimSite HAnimSite1687 = createNode("HAnimSite");
HAnimSite1687.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[89] = HAnimSite1687;

HAnimSite HAnimSite1688 = createNode("HAnimSite");
HAnimSite1688.USE = "hanim_l_olecranon_pt";
HAnimHumanoid42.viewpoints[90] = HAnimSite1688;

HAnimSite HAnimSite1689 = createNode("HAnimSite");
HAnimSite1689.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid42.viewpoints[91] = HAnimSite1689;

HAnimSite HAnimSite1690 = createNode("HAnimSite");
HAnimSite1690.USE = "hanim_l_radiale_pt";
HAnimHumanoid42.viewpoints[92] = HAnimSite1690;

HAnimSite HAnimSite1691 = createNode("HAnimSite");
HAnimSite1691.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[93] = HAnimSite1691;

HAnimSite HAnimSite1692 = createNode("HAnimSite");
HAnimSite1692.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[94] = HAnimSite1692;

HAnimSite HAnimSite1693 = createNode("HAnimSite");
HAnimSite1693.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid42.viewpoints[95] = HAnimSite1693;

HAnimSite HAnimSite1694 = createNode("HAnimSite");
HAnimSite1694.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[96] = HAnimSite1694;

HAnimSite HAnimSite1695 = createNode("HAnimSite");
HAnimSite1695.USE = "hanim_l_dactylion_pt";
HAnimHumanoid42.viewpoints[97] = HAnimSite1695;

HAnimSite HAnimSite1696 = createNode("HAnimSite");
HAnimSite1696.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid42.viewpoints[98] = HAnimSite1696;

HAnimSite HAnimSite1697 = createNode("HAnimSite");
HAnimSite1697.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[99] = HAnimSite1697;

HAnimSite HAnimSite1698 = createNode("HAnimSite");
HAnimSite1698.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[100] = HAnimSite1698;

HAnimSite HAnimSite1699 = createNode("HAnimSite");
HAnimSite1699.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[101] = HAnimSite1699;

HAnimSite HAnimSite1700 = createNode("HAnimSite");
HAnimSite1700.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[102] = HAnimSite1700;

HAnimSite HAnimSite1701 = createNode("HAnimSite");
HAnimSite1701.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid42.viewpoints[103] = HAnimSite1701;

HAnimSite HAnimSite1702 = createNode("HAnimSite");
HAnimSite1702.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[104] = HAnimSite1702;

HAnimSite HAnimSite1703 = createNode("HAnimSite");
HAnimSite1703.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[105] = HAnimSite1703;

HAnimSite HAnimSite1704 = createNode("HAnimSite");
HAnimSite1704.USE = "hanim_r_olecranon_pt";
HAnimHumanoid42.viewpoints[106] = HAnimSite1704;

HAnimSite HAnimSite1705 = createNode("HAnimSite");
HAnimSite1705.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid42.viewpoints[107] = HAnimSite1705;

HAnimSite HAnimSite1706 = createNode("HAnimSite");
HAnimSite1706.USE = "hanim_r_radiale_pt";
HAnimHumanoid42.viewpoints[108] = HAnimSite1706;

HAnimSite HAnimSite1707 = createNode("HAnimSite");
HAnimSite1707.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[109] = HAnimSite1707;

HAnimSite HAnimSite1708 = createNode("HAnimSite");
HAnimSite1708.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[110] = HAnimSite1708;

HAnimSite HAnimSite1709 = createNode("HAnimSite");
HAnimSite1709.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid42.viewpoints[111] = HAnimSite1709;

HAnimSite HAnimSite1710 = createNode("HAnimSite");
HAnimSite1710.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[112] = HAnimSite1710;

HAnimSite HAnimSite1711 = createNode("HAnimSite");
HAnimSite1711.USE = "hanim_r_dactylion_pt";
HAnimHumanoid42.viewpoints[113] = HAnimSite1711;

HAnimSite HAnimSite1712 = createNode("HAnimSite");
HAnimSite1712.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid42.viewpoints[114] = HAnimSite1712;

HAnimSite HAnimSite1713 = createNode("HAnimSite");
HAnimSite1713.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[115] = HAnimSite1713;

HAnimSite HAnimSite1714 = createNode("HAnimSite");
HAnimSite1714.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[116] = HAnimSite1714;

HAnimSite HAnimSite1715 = createNode("HAnimSite");
HAnimSite1715.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[117] = HAnimSite1715;

HAnimSite HAnimSite1716 = createNode("HAnimSite");
HAnimSite1716.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[118] = HAnimSite1716;

HAnimSegment HAnimSegment1717 = createNode("HAnimSegment");
HAnimSegment1717.USE = "hanim_sacrum";
HAnimHumanoid42.segments[119] = HAnimSegment1717;

HAnimSegment HAnimSegment1718 = createNode("HAnimSegment");
HAnimSegment1718.USE = "hanim_pelvis";
HAnimHumanoid42.segments[120] = HAnimSegment1718;

HAnimSegment HAnimSegment1719 = createNode("HAnimSegment");
HAnimSegment1719.USE = "hanim_l_thigh";
HAnimHumanoid42.segments[121] = HAnimSegment1719;

HAnimSegment HAnimSegment1720 = createNode("HAnimSegment");
HAnimSegment1720.USE = "hanim_l_calf";
HAnimHumanoid42.segments[122] = HAnimSegment1720;

HAnimSegment HAnimSegment1721 = createNode("HAnimSegment");
HAnimSegment1721.USE = "hanim_l_talus";
HAnimHumanoid42.segments[123] = HAnimSegment1721;

HAnimSegment HAnimSegment1722 = createNode("HAnimSegment");
HAnimSegment1722.USE = "hanim_l_navicular";
HAnimHumanoid42.segments[124] = HAnimSegment1722;

HAnimSegment HAnimSegment1723 = createNode("HAnimSegment");
HAnimSegment1723.USE = "hanim_l_cuneiform_1";
HAnimHumanoid42.segments[125] = HAnimSegment1723;

HAnimSegment HAnimSegment1724 = createNode("HAnimSegment");
HAnimSegment1724.USE = "hanim_l_metatarsal_1";
HAnimHumanoid42.segments[126] = HAnimSegment1724;

HAnimSegment HAnimSegment1725 = createNode("HAnimSegment");
HAnimSegment1725.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid42.segments[127] = HAnimSegment1725;

HAnimSegment HAnimSegment1726 = createNode("HAnimSegment");
HAnimSegment1726.USE = "hanim_l_cuneiform_2";
HAnimHumanoid42.segments[128] = HAnimSegment1726;

HAnimSegment HAnimSegment1727 = createNode("HAnimSegment");
HAnimSegment1727.USE = "hanim_l_metatarsal_2";
HAnimHumanoid42.segments[129] = HAnimSegment1727;

HAnimSegment HAnimSegment1728 = createNode("HAnimSegment");
HAnimSegment1728.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid42.segments[130] = HAnimSegment1728;

HAnimSegment HAnimSegment1729 = createNode("HAnimSegment");
HAnimSegment1729.USE = "hanim_l_tarsal_middle_phalanx_1";
HAnimHumanoid42.segments[131] = HAnimSegment1729;

HAnimSegment HAnimSegment1730 = createNode("HAnimSegment");
HAnimSegment1730.USE = "hanim_l_cuneiform_3";
HAnimHumanoid42.segments[132] = HAnimSegment1730;

HAnimSegment HAnimSegment1731 = createNode("HAnimSegment");
HAnimSegment1731.USE = "hanim_l_metatarsal_3";
HAnimHumanoid42.segments[133] = HAnimSegment1731;

HAnimSegment HAnimSegment1732 = createNode("HAnimSegment");
HAnimSegment1732.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid42.segments[134] = HAnimSegment1732;

HAnimSegment HAnimSegment1733 = createNode("HAnimSegment");
HAnimSegment1733.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid42.segments[135] = HAnimSegment1733;

HAnimSegment HAnimSegment1734 = createNode("HAnimSegment");
HAnimSegment1734.USE = "hanim_l_calcaneus";
HAnimHumanoid42.segments[136] = HAnimSegment1734;

HAnimSegment HAnimSegment1735 = createNode("HAnimSegment");
HAnimSegment1735.USE = "hanim_l_cuboid";
HAnimHumanoid42.segments[137] = HAnimSegment1735;

HAnimSegment HAnimSegment1736 = createNode("HAnimSegment");
HAnimSegment1736.USE = "hanim_l_metatarsal_4";
HAnimHumanoid42.segments[138] = HAnimSegment1736;

HAnimSegment HAnimSegment1737 = createNode("HAnimSegment");
HAnimSegment1737.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid42.segments[139] = HAnimSegment1737;

HAnimSegment HAnimSegment1738 = createNode("HAnimSegment");
HAnimSegment1738.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid42.segments[140] = HAnimSegment1738;

HAnimSegment HAnimSegment1739 = createNode("HAnimSegment");
HAnimSegment1739.USE = "hanim_l_metatarsal_5";
HAnimHumanoid42.segments[141] = HAnimSegment1739;

HAnimSegment HAnimSegment1740 = createNode("HAnimSegment");
HAnimSegment1740.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid42.segments[142] = HAnimSegment1740;

HAnimSegment HAnimSegment1741 = createNode("HAnimSegment");
HAnimSegment1741.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid42.segments[143] = HAnimSegment1741;

HAnimSegment HAnimSegment1742 = createNode("HAnimSegment");
HAnimSegment1742.USE = "hanim_r_thigh";
HAnimHumanoid42.segments[144] = HAnimSegment1742;

HAnimSegment HAnimSegment1743 = createNode("HAnimSegment");
HAnimSegment1743.USE = "hanim_r_calf";
HAnimHumanoid42.segments[145] = HAnimSegment1743;

HAnimSegment HAnimSegment1744 = createNode("HAnimSegment");
HAnimSegment1744.USE = "hanim_r_talus";
HAnimHumanoid42.segments[146] = HAnimSegment1744;

HAnimSegment HAnimSegment1745 = createNode("HAnimSegment");
HAnimSegment1745.USE = "hanim_r_navicular";
HAnimHumanoid42.segments[147] = HAnimSegment1745;

HAnimSegment HAnimSegment1746 = createNode("HAnimSegment");
HAnimSegment1746.USE = "hanim_r_cuneiform_1";
HAnimHumanoid42.segments[148] = HAnimSegment1746;

HAnimSegment HAnimSegment1747 = createNode("HAnimSegment");
HAnimSegment1747.USE = "hanim_r_metatarsal_1";
HAnimHumanoid42.segments[149] = HAnimSegment1747;

HAnimSegment HAnimSegment1748 = createNode("HAnimSegment");
HAnimSegment1748.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid42.segments[150] = HAnimSegment1748;

HAnimSegment HAnimSegment1749 = createNode("HAnimSegment");
HAnimSegment1749.USE = "hanim_r_cuneiform_2";
HAnimHumanoid42.segments[151] = HAnimSegment1749;

HAnimSegment HAnimSegment1750 = createNode("HAnimSegment");
HAnimSegment1750.USE = "hanim_r_metatarsal_2";
HAnimHumanoid42.segments[152] = HAnimSegment1750;

HAnimSegment HAnimSegment1751 = createNode("HAnimSegment");
HAnimSegment1751.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid42.segments[153] = HAnimSegment1751;

HAnimSegment HAnimSegment1752 = createNode("HAnimSegment");
HAnimSegment1752.USE = "hanim_r_tarsal_middle_phalanx_1";
HAnimHumanoid42.segments[154] = HAnimSegment1752;

HAnimSegment HAnimSegment1753 = createNode("HAnimSegment");
HAnimSegment1753.USE = "hanim_r_cuneiform_3";
HAnimHumanoid42.segments[155] = HAnimSegment1753;

HAnimSegment HAnimSegment1754 = createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_r_metatarsal_3";
HAnimHumanoid42.segments[156] = HAnimSegment1754;

HAnimSegment HAnimSegment1755 = createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid42.segments[157] = HAnimSegment1755;

HAnimSegment HAnimSegment1756 = createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid42.segments[158] = HAnimSegment1756;

HAnimSegment HAnimSegment1757 = createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_r_calcaneus";
HAnimHumanoid42.segments[159] = HAnimSegment1757;

HAnimSegment HAnimSegment1758 = createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_r_cuboid";
HAnimHumanoid42.segments[160] = HAnimSegment1758;

HAnimSegment HAnimSegment1759 = createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_r_metatarsal_4";
HAnimHumanoid42.segments[161] = HAnimSegment1759;

HAnimSegment HAnimSegment1760 = createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid42.segments[162] = HAnimSegment1760;

HAnimSegment HAnimSegment1761 = createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid42.segments[163] = HAnimSegment1761;

HAnimSegment HAnimSegment1762 = createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_r_metatarsal_5";
HAnimHumanoid42.segments[164] = HAnimSegment1762;

HAnimSegment HAnimSegment1763 = createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid42.segments[165] = HAnimSegment1763;

HAnimSegment HAnimSegment1764 = createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid42.segments[166] = HAnimSegment1764;

HAnimSegment HAnimSegment1765 = createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_l5";
HAnimHumanoid42.segments[167] = HAnimSegment1765;

HAnimSegment HAnimSegment1766 = createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_l4";
HAnimHumanoid42.segments[168] = HAnimSegment1766;

HAnimSegment HAnimSegment1767 = createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_l3";
HAnimHumanoid42.segments[169] = HAnimSegment1767;

HAnimSegment HAnimSegment1768 = createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_l2";
HAnimHumanoid42.segments[170] = HAnimSegment1768;

HAnimSegment HAnimSegment1769 = createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_l1";
HAnimHumanoid42.segments[171] = HAnimSegment1769;

HAnimSegment HAnimSegment1770 = createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_t12";
HAnimHumanoid42.segments[172] = HAnimSegment1770;

HAnimSegment HAnimSegment1771 = createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_t11";
HAnimHumanoid42.segments[173] = HAnimSegment1771;

HAnimSegment HAnimSegment1772 = createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_t10";
HAnimHumanoid42.segments[174] = HAnimSegment1772;

HAnimSegment HAnimSegment1773 = createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_t9";
HAnimHumanoid42.segments[175] = HAnimSegment1773;

HAnimSegment HAnimSegment1774 = createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_t8";
HAnimHumanoid42.segments[176] = HAnimSegment1774;

HAnimSegment HAnimSegment1775 = createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_t7";
HAnimHumanoid42.segments[177] = HAnimSegment1775;

HAnimSegment HAnimSegment1776 = createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_t6";
HAnimHumanoid42.segments[178] = HAnimSegment1776;

HAnimSegment HAnimSegment1777 = createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_t5";
HAnimHumanoid42.segments[179] = HAnimSegment1777;

HAnimSegment HAnimSegment1778 = createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_t4";
HAnimHumanoid42.segments[180] = HAnimSegment1778;

HAnimSegment HAnimSegment1779 = createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_t3";
HAnimHumanoid42.segments[181] = HAnimSegment1779;

HAnimSegment HAnimSegment1780 = createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_t2";
HAnimHumanoid42.segments[182] = HAnimSegment1780;

HAnimSegment HAnimSegment1781 = createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_t1";
HAnimHumanoid42.segments[183] = HAnimSegment1781;

HAnimSegment HAnimSegment1782 = createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_c7";
HAnimHumanoid42.segments[184] = HAnimSegment1782;

HAnimSegment HAnimSegment1783 = createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_c6";
HAnimHumanoid42.segments[185] = HAnimSegment1783;

HAnimSegment HAnimSegment1784 = createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_c5";
HAnimHumanoid42.segments[186] = HAnimSegment1784;

HAnimSegment HAnimSegment1785 = createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_c4";
HAnimHumanoid42.segments[187] = HAnimSegment1785;

HAnimSegment HAnimSegment1786 = createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_c3";
HAnimHumanoid42.segments[188] = HAnimSegment1786;

HAnimSegment HAnimSegment1787 = createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_c2";
HAnimHumanoid42.segments[189] = HAnimSegment1787;

HAnimSegment HAnimSegment1788 = createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_c1";
HAnimHumanoid42.segments[190] = HAnimSegment1788;

HAnimSegment HAnimSegment1789 = createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_skull";
HAnimHumanoid42.segments[191] = HAnimSegment1789;

HAnimSegment HAnimSegment1790 = createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_l_clavicle";
HAnimHumanoid42.segments[192] = HAnimSegment1790;

HAnimSegment HAnimSegment1791 = createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_l_scapula";
HAnimHumanoid42.segments[193] = HAnimSegment1791;

HAnimSegment HAnimSegment1792 = createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_l_upperarm";
HAnimHumanoid42.segments[194] = HAnimSegment1792;

HAnimSegment HAnimSegment1793 = createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_l_forearm";
HAnimHumanoid42.segments[195] = HAnimSegment1793;

HAnimSegment HAnimSegment1794 = createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_l_carpal";
HAnimHumanoid42.segments[196] = HAnimSegment1794;

HAnimSegment HAnimSegment1795 = createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_l_trapezium";
HAnimHumanoid42.segments[197] = HAnimSegment1795;

HAnimSegment HAnimSegment1796 = createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_l_metacarpal_1";
HAnimHumanoid42.segments[198] = HAnimSegment1796;

HAnimSegment HAnimSegment1797 = createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid42.segments[199] = HAnimSegment1797;

HAnimSegment HAnimSegment1798 = createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_l_trapezoid";
HAnimHumanoid42.segments[200] = HAnimSegment1798;

HAnimSegment HAnimSegment1799 = createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_l_metacarpal_2";
HAnimHumanoid42.segments[201] = HAnimSegment1799;

HAnimSegment HAnimSegment1800 = createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid42.segments[202] = HAnimSegment1800;

HAnimSegment HAnimSegment1801 = createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_l_carpal_middle_phalanx_1";
HAnimHumanoid42.segments[203] = HAnimSegment1801;

HAnimSegment HAnimSegment1802 = createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_l_capitate";
HAnimHumanoid42.segments[204] = HAnimSegment1802;

HAnimSegment HAnimSegment1803 = createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_l_metacarpal_3";
HAnimHumanoid42.segments[205] = HAnimSegment1803;

HAnimSegment HAnimSegment1804 = createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid42.segments[206] = HAnimSegment1804;

HAnimSegment HAnimSegment1805 = createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid42.segments[207] = HAnimSegment1805;

HAnimSegment HAnimSegment1806 = createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_l_hamate";
HAnimHumanoid42.segments[208] = HAnimSegment1806;

HAnimSegment HAnimSegment1807 = createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_l_metacarpal_4";
HAnimHumanoid42.segments[209] = HAnimSegment1807;

HAnimSegment HAnimSegment1808 = createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid42.segments[210] = HAnimSegment1808;

HAnimSegment HAnimSegment1809 = createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid42.segments[211] = HAnimSegment1809;

HAnimSegment HAnimSegment1810 = createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_l_metacarpal_5";
HAnimHumanoid42.segments[212] = HAnimSegment1810;

HAnimSegment HAnimSegment1811 = createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid42.segments[213] = HAnimSegment1811;

HAnimSegment HAnimSegment1812 = createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid42.segments[214] = HAnimSegment1812;

HAnimSegment HAnimSegment1813 = createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_r_clavicle";
HAnimHumanoid42.segments[215] = HAnimSegment1813;

HAnimSegment HAnimSegment1814 = createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_r_scapula";
HAnimHumanoid42.segments[216] = HAnimSegment1814;

HAnimSegment HAnimSegment1815 = createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_r_upperarm";
HAnimHumanoid42.segments[217] = HAnimSegment1815;

HAnimSegment HAnimSegment1816 = createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_r_forearm";
HAnimHumanoid42.segments[218] = HAnimSegment1816;

HAnimSegment HAnimSegment1817 = createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_r_carpal";
HAnimHumanoid42.segments[219] = HAnimSegment1817;

HAnimSegment HAnimSegment1818 = createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_r_trapezium";
HAnimHumanoid42.segments[220] = HAnimSegment1818;

HAnimSegment HAnimSegment1819 = createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_r_metacarpal_1";
HAnimHumanoid42.segments[221] = HAnimSegment1819;

HAnimSegment HAnimSegment1820 = createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid42.segments[222] = HAnimSegment1820;

HAnimSegment HAnimSegment1821 = createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_r_trapezoid";
HAnimHumanoid42.segments[223] = HAnimSegment1821;

HAnimSegment HAnimSegment1822 = createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_r_metacarpal_2";
HAnimHumanoid42.segments[224] = HAnimSegment1822;

HAnimSegment HAnimSegment1823 = createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid42.segments[225] = HAnimSegment1823;

HAnimSegment HAnimSegment1824 = createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_r_carpal_middle_phalanx_1";
HAnimHumanoid42.segments[226] = HAnimSegment1824;

HAnimSegment HAnimSegment1825 = createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_r_capitate";
HAnimHumanoid42.segments[227] = HAnimSegment1825;

HAnimSegment HAnimSegment1826 = createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_r_metacarpal_3";
HAnimHumanoid42.segments[228] = HAnimSegment1826;

HAnimSegment HAnimSegment1827 = createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid42.segments[229] = HAnimSegment1827;

HAnimSegment HAnimSegment1828 = createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid42.segments[230] = HAnimSegment1828;

HAnimSegment HAnimSegment1829 = createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_r_hamate";
HAnimHumanoid42.segments[231] = HAnimSegment1829;

HAnimSegment HAnimSegment1830 = createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_r_metacarpal_4";
HAnimHumanoid42.segments[232] = HAnimSegment1830;

HAnimSegment HAnimSegment1831 = createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid42.segments[233] = HAnimSegment1831;

HAnimSegment HAnimSegment1832 = createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid42.segments[234] = HAnimSegment1832;

HAnimSegment HAnimSegment1833 = createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_r_metacarpal_5";
HAnimHumanoid42.segments[235] = HAnimSegment1833;

HAnimSegment HAnimSegment1834 = createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid42.segments[236] = HAnimSegment1834;

HAnimSegment HAnimSegment1835 = createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid42.segments[237] = HAnimSegment1835;

HAnimJoint HAnimJoint1836 = createNode("HAnimJoint");
HAnimJoint1836.USE = "hanim_humanoid_root";
HAnimHumanoid42.joints[238] = HAnimJoint1836;

HAnimJoint HAnimJoint1837 = createNode("HAnimJoint");
HAnimJoint1837.USE = "hanim_sacroiliac";
HAnimHumanoid42.joints[239] = HAnimJoint1837;

HAnimJoint HAnimJoint1838 = createNode("HAnimJoint");
HAnimJoint1838.USE = "hanim_l_hip";
HAnimHumanoid42.joints[240] = HAnimJoint1838;

HAnimJoint HAnimJoint1839 = createNode("HAnimJoint");
HAnimJoint1839.USE = "hanim_l_knee";
HAnimHumanoid42.joints[241] = HAnimJoint1839;

HAnimJoint HAnimJoint1840 = createNode("HAnimJoint");
HAnimJoint1840.USE = "hanim_l_talocrural";
HAnimHumanoid42.joints[242] = HAnimJoint1840;

HAnimJoint HAnimJoint1841 = createNode("HAnimJoint");
HAnimJoint1841.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid42.joints[243] = HAnimJoint1841;

HAnimJoint HAnimJoint1842 = createNode("HAnimJoint");
HAnimJoint1842.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid42.joints[244] = HAnimJoint1842;

HAnimJoint HAnimJoint1843 = createNode("HAnimJoint");
HAnimJoint1843.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid42.joints[245] = HAnimJoint1843;

HAnimJoint HAnimJoint1844 = createNode("HAnimJoint");
HAnimJoint1844.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid42.joints[246] = HAnimJoint1844;

HAnimJoint HAnimJoint1845 = createNode("HAnimJoint");
HAnimJoint1845.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid42.joints[247] = HAnimJoint1845;

HAnimJoint HAnimJoint1846 = createNode("HAnimJoint");
HAnimJoint1846.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid42.joints[248] = HAnimJoint1846;

HAnimJoint HAnimJoint1847 = createNode("HAnimJoint");
HAnimJoint1847.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid42.joints[249] = HAnimJoint1847;

HAnimJoint HAnimJoint1848 = createNode("HAnimJoint");
HAnimJoint1848.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid42.joints[250] = HAnimJoint1848;

HAnimJoint HAnimJoint1849 = createNode("HAnimJoint");
HAnimJoint1849.USE = "hanim_l_tarsal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[251] = HAnimJoint1849;

HAnimJoint HAnimJoint1850 = createNode("HAnimJoint");
HAnimJoint1850.USE = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimHumanoid42.joints[252] = HAnimJoint1850;

HAnimJoint HAnimJoint1851 = createNode("HAnimJoint");
HAnimJoint1851.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid42.joints[253] = HAnimJoint1851;

HAnimJoint HAnimJoint1852 = createNode("HAnimJoint");
HAnimJoint1852.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid42.joints[254] = HAnimJoint1852;

HAnimJoint HAnimJoint1853 = createNode("HAnimJoint");
HAnimJoint1853.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid42.joints[255] = HAnimJoint1853;

HAnimJoint HAnimJoint1854 = createNode("HAnimJoint");
HAnimJoint1854.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[256] = HAnimJoint1854;

HAnimJoint HAnimJoint1855 = createNode("HAnimJoint");
HAnimJoint1855.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid42.joints[257] = HAnimJoint1855;

HAnimJoint HAnimJoint1856 = createNode("HAnimJoint");
HAnimJoint1856.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid42.joints[258] = HAnimJoint1856;

HAnimJoint HAnimJoint1857 = createNode("HAnimJoint");
HAnimJoint1857.USE = "hanim_l_transversetarsal";
HAnimHumanoid42.joints[259] = HAnimJoint1857;

HAnimJoint HAnimJoint1858 = createNode("HAnimJoint");
HAnimJoint1858.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid42.joints[260] = HAnimJoint1858;

HAnimJoint HAnimJoint1859 = createNode("HAnimJoint");
HAnimJoint1859.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid42.joints[261] = HAnimJoint1859;

HAnimJoint HAnimJoint1860 = createNode("HAnimJoint");
HAnimJoint1860.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[262] = HAnimJoint1860;

HAnimJoint HAnimJoint1861 = createNode("HAnimJoint");
HAnimJoint1861.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid42.joints[263] = HAnimJoint1861;

HAnimJoint HAnimJoint1862 = createNode("HAnimJoint");
HAnimJoint1862.USE = "hanim_l_tarsometatarsal_5";
HAnimHumanoid42.joints[264] = HAnimJoint1862;

HAnimJoint HAnimJoint1863 = createNode("HAnimJoint");
HAnimJoint1863.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid42.joints[265] = HAnimJoint1863;

HAnimJoint HAnimJoint1864 = createNode("HAnimJoint");
HAnimJoint1864.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[266] = HAnimJoint1864;

HAnimJoint HAnimJoint1865 = createNode("HAnimJoint");
HAnimJoint1865.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid42.joints[267] = HAnimJoint1865;

HAnimJoint HAnimJoint1866 = createNode("HAnimJoint");
HAnimJoint1866.USE = "hanim_r_hip";
HAnimHumanoid42.joints[268] = HAnimJoint1866;

HAnimJoint HAnimJoint1867 = createNode("HAnimJoint");
HAnimJoint1867.USE = "hanim_r_knee";
HAnimHumanoid42.joints[269] = HAnimJoint1867;

HAnimJoint HAnimJoint1868 = createNode("HAnimJoint");
HAnimJoint1868.USE = "hanim_r_talocrural";
HAnimHumanoid42.joints[270] = HAnimJoint1868;

HAnimJoint HAnimJoint1869 = createNode("HAnimJoint");
HAnimJoint1869.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid42.joints[271] = HAnimJoint1869;

HAnimJoint HAnimJoint1870 = createNode("HAnimJoint");
HAnimJoint1870.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid42.joints[272] = HAnimJoint1870;

HAnimJoint HAnimJoint1871 = createNode("HAnimJoint");
HAnimJoint1871.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid42.joints[273] = HAnimJoint1871;

HAnimJoint HAnimJoint1872 = createNode("HAnimJoint");
HAnimJoint1872.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid42.joints[274] = HAnimJoint1872;

HAnimJoint HAnimJoint1873 = createNode("HAnimJoint");
HAnimJoint1873.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid42.joints[275] = HAnimJoint1873;

HAnimJoint HAnimJoint1874 = createNode("HAnimJoint");
HAnimJoint1874.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid42.joints[276] = HAnimJoint1874;

HAnimJoint HAnimJoint1875 = createNode("HAnimJoint");
HAnimJoint1875.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid42.joints[277] = HAnimJoint1875;

HAnimJoint HAnimJoint1876 = createNode("HAnimJoint");
HAnimJoint1876.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid42.joints[278] = HAnimJoint1876;

HAnimJoint HAnimJoint1877 = createNode("HAnimJoint");
HAnimJoint1877.USE = "hanim_r_tarsal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[279] = HAnimJoint1877;

HAnimJoint HAnimJoint1878 = createNode("HAnimJoint");
HAnimJoint1878.USE = "hanim_r_tarsal_distal_interphalangeal_1";
HAnimHumanoid42.joints[280] = HAnimJoint1878;

HAnimJoint HAnimJoint1879 = createNode("HAnimJoint");
HAnimJoint1879.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid42.joints[281] = HAnimJoint1879;

HAnimJoint HAnimJoint1880 = createNode("HAnimJoint");
HAnimJoint1880.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid42.joints[282] = HAnimJoint1880;

HAnimJoint HAnimJoint1881 = createNode("HAnimJoint");
HAnimJoint1881.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid42.joints[283] = HAnimJoint1881;

HAnimJoint HAnimJoint1882 = createNode("HAnimJoint");
HAnimJoint1882.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[284] = HAnimJoint1882;

HAnimJoint HAnimJoint1883 = createNode("HAnimJoint");
HAnimJoint1883.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid42.joints[285] = HAnimJoint1883;

HAnimJoint HAnimJoint1884 = createNode("HAnimJoint");
HAnimJoint1884.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid42.joints[286] = HAnimJoint1884;

HAnimJoint HAnimJoint1885 = createNode("HAnimJoint");
HAnimJoint1885.USE = "hanim_r_transversetarsal";
HAnimHumanoid42.joints[287] = HAnimJoint1885;

HAnimJoint HAnimJoint1886 = createNode("HAnimJoint");
HAnimJoint1886.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid42.joints[288] = HAnimJoint1886;

HAnimJoint HAnimJoint1887 = createNode("HAnimJoint");
HAnimJoint1887.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid42.joints[289] = HAnimJoint1887;

HAnimJoint HAnimJoint1888 = createNode("HAnimJoint");
HAnimJoint1888.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[290] = HAnimJoint1888;

HAnimJoint HAnimJoint1889 = createNode("HAnimJoint");
HAnimJoint1889.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid42.joints[291] = HAnimJoint1889;

HAnimJoint HAnimJoint1890 = createNode("HAnimJoint");
HAnimJoint1890.USE = "hanim_r_tarsometatarsal_5";
HAnimHumanoid42.joints[292] = HAnimJoint1890;

HAnimJoint HAnimJoint1891 = createNode("HAnimJoint");
HAnimJoint1891.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid42.joints[293] = HAnimJoint1891;

HAnimJoint HAnimJoint1892 = createNode("HAnimJoint");
HAnimJoint1892.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[294] = HAnimJoint1892;

HAnimJoint HAnimJoint1893 = createNode("HAnimJoint");
HAnimJoint1893.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid42.joints[295] = HAnimJoint1893;

HAnimJoint HAnimJoint1894 = createNode("HAnimJoint");
HAnimJoint1894.USE = "hanim_vl5";
HAnimHumanoid42.joints[296] = HAnimJoint1894;

HAnimJoint HAnimJoint1895 = createNode("HAnimJoint");
HAnimJoint1895.USE = "hanim_vl4";
HAnimHumanoid42.joints[297] = HAnimJoint1895;

HAnimJoint HAnimJoint1896 = createNode("HAnimJoint");
HAnimJoint1896.USE = "hanim_vl3";
HAnimHumanoid42.joints[298] = HAnimJoint1896;

HAnimJoint HAnimJoint1897 = createNode("HAnimJoint");
HAnimJoint1897.USE = "hanim_vl2";
HAnimHumanoid42.joints[299] = HAnimJoint1897;

HAnimJoint HAnimJoint1898 = createNode("HAnimJoint");
HAnimJoint1898.USE = "hanim_vl1";
HAnimHumanoid42.joints[300] = HAnimJoint1898;

HAnimJoint HAnimJoint1899 = createNode("HAnimJoint");
HAnimJoint1899.USE = "hanim_vt12";
HAnimHumanoid42.joints[301] = HAnimJoint1899;

HAnimJoint HAnimJoint1900 = createNode("HAnimJoint");
HAnimJoint1900.USE = "hanim_vt11";
HAnimHumanoid42.joints[302] = HAnimJoint1900;

HAnimJoint HAnimJoint1901 = createNode("HAnimJoint");
HAnimJoint1901.USE = "hanim_vt10";
HAnimHumanoid42.joints[303] = HAnimJoint1901;

HAnimJoint HAnimJoint1902 = createNode("HAnimJoint");
HAnimJoint1902.USE = "hanim_vt9";
HAnimHumanoid42.joints[304] = HAnimJoint1902;

HAnimJoint HAnimJoint1903 = createNode("HAnimJoint");
HAnimJoint1903.USE = "hanim_vt8";
HAnimHumanoid42.joints[305] = HAnimJoint1903;

HAnimJoint HAnimJoint1904 = createNode("HAnimJoint");
HAnimJoint1904.USE = "hanim_vt7";
HAnimHumanoid42.joints[306] = HAnimJoint1904;

HAnimJoint HAnimJoint1905 = createNode("HAnimJoint");
HAnimJoint1905.USE = "hanim_vt6";
HAnimHumanoid42.joints[307] = HAnimJoint1905;

HAnimJoint HAnimJoint1906 = createNode("HAnimJoint");
HAnimJoint1906.USE = "hanim_vt5";
HAnimHumanoid42.joints[308] = HAnimJoint1906;

HAnimJoint HAnimJoint1907 = createNode("HAnimJoint");
HAnimJoint1907.USE = "hanim_vt4";
HAnimHumanoid42.joints[309] = HAnimJoint1907;

HAnimJoint HAnimJoint1908 = createNode("HAnimJoint");
HAnimJoint1908.USE = "hanim_vt3";
HAnimHumanoid42.joints[310] = HAnimJoint1908;

HAnimJoint HAnimJoint1909 = createNode("HAnimJoint");
HAnimJoint1909.USE = "hanim_vt2";
HAnimHumanoid42.joints[311] = HAnimJoint1909;

HAnimJoint HAnimJoint1910 = createNode("HAnimJoint");
HAnimJoint1910.USE = "hanim_vt1";
HAnimHumanoid42.joints[312] = HAnimJoint1910;

HAnimJoint HAnimJoint1911 = createNode("HAnimJoint");
HAnimJoint1911.USE = "hanim_vc7";
HAnimHumanoid42.joints[313] = HAnimJoint1911;

HAnimJoint HAnimJoint1912 = createNode("HAnimJoint");
HAnimJoint1912.USE = "hanim_vc6";
HAnimHumanoid42.joints[314] = HAnimJoint1912;

HAnimJoint HAnimJoint1913 = createNode("HAnimJoint");
HAnimJoint1913.USE = "hanim_vc5";
HAnimHumanoid42.joints[315] = HAnimJoint1913;

HAnimJoint HAnimJoint1914 = createNode("HAnimJoint");
HAnimJoint1914.USE = "hanim_vc4";
HAnimHumanoid42.joints[316] = HAnimJoint1914;

HAnimJoint HAnimJoint1915 = createNode("HAnimJoint");
HAnimJoint1915.USE = "hanim_vc3";
HAnimHumanoid42.joints[317] = HAnimJoint1915;

HAnimJoint HAnimJoint1916 = createNode("HAnimJoint");
HAnimJoint1916.USE = "hanim_vc2";
HAnimHumanoid42.joints[318] = HAnimJoint1916;

HAnimJoint HAnimJoint1917 = createNode("HAnimJoint");
HAnimJoint1917.USE = "hanim_vc1";
HAnimHumanoid42.joints[319] = HAnimJoint1917;

HAnimJoint HAnimJoint1918 = createNode("HAnimJoint");
HAnimJoint1918.USE = "hanim_skullbase";
HAnimHumanoid42.joints[320] = HAnimJoint1918;

HAnimJoint HAnimJoint1919 = createNode("HAnimJoint");
HAnimJoint1919.USE = "hanim_l_eyelid_joint";
HAnimHumanoid42.joints[321] = HAnimJoint1919;

HAnimJoint HAnimJoint1920 = createNode("HAnimJoint");
HAnimJoint1920.USE = "hanim_r_eyelid_joint";
HAnimHumanoid42.joints[322] = HAnimJoint1920;

HAnimJoint HAnimJoint1921 = createNode("HAnimJoint");
HAnimJoint1921.USE = "hanim_l_eyeball_joint";
HAnimHumanoid42.joints[323] = HAnimJoint1921;

HAnimJoint HAnimJoint1922 = createNode("HAnimJoint");
HAnimJoint1922.USE = "hanim_r_eyeball_joint";
HAnimHumanoid42.joints[324] = HAnimJoint1922;

HAnimJoint HAnimJoint1923 = createNode("HAnimJoint");
HAnimJoint1923.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid42.joints[325] = HAnimJoint1923;

HAnimJoint HAnimJoint1924 = createNode("HAnimJoint");
HAnimJoint1924.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid42.joints[326] = HAnimJoint1924;

HAnimJoint HAnimJoint1925 = createNode("HAnimJoint");
HAnimJoint1925.USE = "hanim_temporomandibular";
HAnimHumanoid42.joints[327] = HAnimJoint1925;

HAnimJoint HAnimJoint1926 = createNode("HAnimJoint");
HAnimJoint1926.USE = "hanim_l_sternoclavicular";
HAnimHumanoid42.joints[328] = HAnimJoint1926;

HAnimJoint HAnimJoint1927 = createNode("HAnimJoint");
HAnimJoint1927.USE = "hanim_l_acromioclavicular";
HAnimHumanoid42.joints[329] = HAnimJoint1927;

HAnimJoint HAnimJoint1928 = createNode("HAnimJoint");
HAnimJoint1928.USE = "hanim_l_shoulder";
HAnimHumanoid42.joints[330] = HAnimJoint1928;

HAnimJoint HAnimJoint1929 = createNode("HAnimJoint");
HAnimJoint1929.USE = "hanim_l_elbow";
HAnimHumanoid42.joints[331] = HAnimJoint1929;

HAnimJoint HAnimJoint1930 = createNode("HAnimJoint");
HAnimJoint1930.USE = "hanim_l_radiocarpal";
HAnimHumanoid42.joints[332] = HAnimJoint1930;

HAnimJoint HAnimJoint1931 = createNode("HAnimJoint");
HAnimJoint1931.USE = "hanim_l_midcarpal_1";
HAnimHumanoid42.joints[333] = HAnimJoint1931;

HAnimJoint HAnimJoint1932 = createNode("HAnimJoint");
HAnimJoint1932.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid42.joints[334] = HAnimJoint1932;

HAnimJoint HAnimJoint1933 = createNode("HAnimJoint");
HAnimJoint1933.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid42.joints[335] = HAnimJoint1933;

HAnimJoint HAnimJoint1934 = createNode("HAnimJoint");
HAnimJoint1934.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid42.joints[336] = HAnimJoint1934;

HAnimJoint HAnimJoint1935 = createNode("HAnimJoint");
HAnimJoint1935.USE = "hanim_l_midcarpal_2";
HAnimHumanoid42.joints[337] = HAnimJoint1935;

HAnimJoint HAnimJoint1936 = createNode("HAnimJoint");
HAnimJoint1936.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid42.joints[338] = HAnimJoint1936;

HAnimJoint HAnimJoint1937 = createNode("HAnimJoint");
HAnimJoint1937.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid42.joints[339] = HAnimJoint1937;

HAnimJoint HAnimJoint1938 = createNode("HAnimJoint");
HAnimJoint1938.USE = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[340] = HAnimJoint1938;

HAnimJoint HAnimJoint1939 = createNode("HAnimJoint");
HAnimJoint1939.USE = "hanim_l_carpal_distal_interphalangeal_1";
HAnimHumanoid42.joints[341] = HAnimJoint1939;

HAnimJoint HAnimJoint1940 = createNode("HAnimJoint");
HAnimJoint1940.USE = "hanim_l_midcarpal_3";
HAnimHumanoid42.joints[342] = HAnimJoint1940;

HAnimJoint HAnimJoint1941 = createNode("HAnimJoint");
HAnimJoint1941.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid42.joints[343] = HAnimJoint1941;

HAnimJoint HAnimJoint1942 = createNode("HAnimJoint");
HAnimJoint1942.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid42.joints[344] = HAnimJoint1942;

HAnimJoint HAnimJoint1943 = createNode("HAnimJoint");
HAnimJoint1943.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[345] = HAnimJoint1943;

HAnimJoint HAnimJoint1944 = createNode("HAnimJoint");
HAnimJoint1944.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid42.joints[346] = HAnimJoint1944;

HAnimJoint HAnimJoint1945 = createNode("HAnimJoint");
HAnimJoint1945.USE = "hanim_l_midcarpal_4_1";
HAnimHumanoid42.joints[347] = HAnimJoint1945;

HAnimJoint HAnimJoint1946 = createNode("HAnimJoint");
HAnimJoint1946.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid42.joints[348] = HAnimJoint1946;

HAnimJoint HAnimJoint1947 = createNode("HAnimJoint");
HAnimJoint1947.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid42.joints[349] = HAnimJoint1947;

HAnimJoint HAnimJoint1948 = createNode("HAnimJoint");
HAnimJoint1948.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[350] = HAnimJoint1948;

HAnimJoint HAnimJoint1949 = createNode("HAnimJoint");
HAnimJoint1949.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid42.joints[351] = HAnimJoint1949;

HAnimJoint HAnimJoint1950 = createNode("HAnimJoint");
HAnimJoint1950.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid42.joints[352] = HAnimJoint1950;

HAnimJoint HAnimJoint1951 = createNode("HAnimJoint");
HAnimJoint1951.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid42.joints[353] = HAnimJoint1951;

HAnimJoint HAnimJoint1952 = createNode("HAnimJoint");
HAnimJoint1952.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[354] = HAnimJoint1952;

HAnimJoint HAnimJoint1953 = createNode("HAnimJoint");
HAnimJoint1953.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid42.joints[355] = HAnimJoint1953;

HAnimJoint HAnimJoint1954 = createNode("HAnimJoint");
HAnimJoint1954.USE = "hanim_r_sternoclavicular";
HAnimHumanoid42.joints[356] = HAnimJoint1954;

HAnimJoint HAnimJoint1955 = createNode("HAnimJoint");
HAnimJoint1955.USE = "hanim_r_acromioclavicular";
HAnimHumanoid42.joints[357] = HAnimJoint1955;

HAnimJoint HAnimJoint1956 = createNode("HAnimJoint");
HAnimJoint1956.USE = "hanim_r_shoulder";
HAnimHumanoid42.joints[358] = HAnimJoint1956;

HAnimJoint HAnimJoint1957 = createNode("HAnimJoint");
HAnimJoint1957.USE = "hanim_r_elbow";
HAnimHumanoid42.joints[359] = HAnimJoint1957;

HAnimJoint HAnimJoint1958 = createNode("HAnimJoint");
HAnimJoint1958.USE = "hanim_r_radiocarpal";
HAnimHumanoid42.joints[360] = HAnimJoint1958;

HAnimJoint HAnimJoint1959 = createNode("HAnimJoint");
HAnimJoint1959.USE = "hanim_r_midcarpal_1";
HAnimHumanoid42.joints[361] = HAnimJoint1959;

HAnimJoint HAnimJoint1960 = createNode("HAnimJoint");
HAnimJoint1960.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid42.joints[362] = HAnimJoint1960;

HAnimJoint HAnimJoint1961 = createNode("HAnimJoint");
HAnimJoint1961.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid42.joints[363] = HAnimJoint1961;

HAnimJoint HAnimJoint1962 = createNode("HAnimJoint");
HAnimJoint1962.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid42.joints[364] = HAnimJoint1962;

HAnimJoint HAnimJoint1963 = createNode("HAnimJoint");
HAnimJoint1963.USE = "hanim_r_midcarpal_2";
HAnimHumanoid42.joints[365] = HAnimJoint1963;

HAnimJoint HAnimJoint1964 = createNode("HAnimJoint");
HAnimJoint1964.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid42.joints[366] = HAnimJoint1964;

HAnimJoint HAnimJoint1965 = createNode("HAnimJoint");
HAnimJoint1965.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid42.joints[367] = HAnimJoint1965;

HAnimJoint HAnimJoint1966 = createNode("HAnimJoint");
HAnimJoint1966.USE = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[368] = HAnimJoint1966;

HAnimJoint HAnimJoint1967 = createNode("HAnimJoint");
HAnimJoint1967.USE = "hanim_r_carpal_distal_interphalangeal_1";
HAnimHumanoid42.joints[369] = HAnimJoint1967;

HAnimJoint HAnimJoint1968 = createNode("HAnimJoint");
HAnimJoint1968.USE = "hanim_r_midcarpal_3";
HAnimHumanoid42.joints[370] = HAnimJoint1968;

HAnimJoint HAnimJoint1969 = createNode("HAnimJoint");
HAnimJoint1969.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid42.joints[371] = HAnimJoint1969;

HAnimJoint HAnimJoint1970 = createNode("HAnimJoint");
HAnimJoint1970.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid42.joints[372] = HAnimJoint1970;

HAnimJoint HAnimJoint1971 = createNode("HAnimJoint");
HAnimJoint1971.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[373] = HAnimJoint1971;

HAnimJoint HAnimJoint1972 = createNode("HAnimJoint");
HAnimJoint1972.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid42.joints[374] = HAnimJoint1972;

HAnimJoint HAnimJoint1973 = createNode("HAnimJoint");
HAnimJoint1973.USE = "hanim_r_midcarpal_4_1";
HAnimHumanoid42.joints[375] = HAnimJoint1973;

HAnimJoint HAnimJoint1974 = createNode("HAnimJoint");
HAnimJoint1974.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid42.joints[376] = HAnimJoint1974;

HAnimJoint HAnimJoint1975 = createNode("HAnimJoint");
HAnimJoint1975.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid42.joints[377] = HAnimJoint1975;

HAnimJoint HAnimJoint1976 = createNode("HAnimJoint");
HAnimJoint1976.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[378] = HAnimJoint1976;

HAnimJoint HAnimJoint1977 = createNode("HAnimJoint");
HAnimJoint1977.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid42.joints[379] = HAnimJoint1977;

HAnimJoint HAnimJoint1978 = createNode("HAnimJoint");
HAnimJoint1978.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid42.joints[380] = HAnimJoint1978;

HAnimJoint HAnimJoint1979 = createNode("HAnimJoint");
HAnimJoint1979.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid42.joints[381] = HAnimJoint1979;

HAnimJoint HAnimJoint1980 = createNode("HAnimJoint");
HAnimJoint1980.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[382] = HAnimJoint1980;

HAnimJoint HAnimJoint1981 = createNode("HAnimJoint");
HAnimJoint1981.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid42.joints[383] = HAnimJoint1981;

Coordinate Coordinate1982 = createNode("Coordinate");
Coordinate1982.DEF = "TheSkinCoord";
Coordinate1982.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
HAnimHumanoid42.skinCoord = Coordinate1982;

Shape Shape1983 = createNode("Shape");
Shape1983.DEF = "SkinShape";
Appearance Appearance1984 = createNode("Appearance");
Appearance1984.DEF = "SkinAppearance";
Material Material1985 = createNode("Material");
Material1985.DEF = "SkinMaterial";
Material1985.ambientIntensity = 0.6;
Material1985.diffuseColor = new SFColor(new float[1,1,1]);
Material1985.shininess = 0.6;
Material1985.transparency = 0.2;
Appearance1984.material = Material1985;

ImageTexture ImageTexture1986 = createNode("ImageTexture");
ImageTexture1986.DEF = "zBlueSpiralBkg2";
ImageTexture1986.description = "Blue Spiral Pattern";
ImageTexture1986.url = new MFString(new java.lang.String["./data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
Appearance1984.texture = ImageTexture1986;

Shape1983.appearance = Appearance1984;

IndexedFaceSet IndexedFaceSet1987 = createNode("IndexedFaceSet");
IndexedFaceSet1987.creaseAngle = 3.1;
IndexedFaceSet1987.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
Color Color1988 = createNode("Color");
Color1988.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet1987.color = Color1988;

Coordinate Coordinate1989 = createNode("Coordinate");
Coordinate1989.USE = "TheSkinCoord";
IndexedFaceSet1987.coord = Coordinate1989;

Shape1983.geometry = IndexedFaceSet1987;

HAnimHumanoid42.skin[384] = Shape1983;

children[4] = HAnimHumanoid42;

}
