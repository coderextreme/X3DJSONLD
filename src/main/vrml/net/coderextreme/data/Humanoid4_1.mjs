let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "Humanoid4_1.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "identifier";
meta3.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "description";
meta4.content = "An attempt at a standard LOA-4 skeleton";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "generator";
meta5.content = "h2.pl";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "14 Jan 2023";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "creator";
meta7.content = "John Carlson";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "created";
meta8.content = "9 November 2020";
head1.meta[6] = meta8;

let component9 = browser.currentScene.createNode("component");
component9.name = "HAnim";
component9.level = 1;
head1.component[7] = component9;

head = head1;

let Transform11 = browser.currentScene.createNode("Transform");
let Shape12 = browser.currentScene.createNode("Shape");
Shape12.DEF = "AxisLinesShape";
let IndexedLineSet13 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet13.colorPerVertex = False;
IndexedLineSet13.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet13.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
let Color14 = browser.currentScene.createNode("Color");
Color14.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet13.color = Color14;

let Coordinate15 = browser.currentScene.createNode("Coordinate");
Coordinate15.point = new MFVec3f(new float[0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
IndexedLineSet13.coord = Coordinate15;

Shape12.geometry = IndexedLineSet13;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Transform11;

let Group16 = browser.currentScene.createNode("Group");
let Transform17 = browser.currentScene.createNode("Transform");
let Transform18 = browser.currentScene.createNode("Transform");
Transform18.translation = new SFVec3f(new float[0,2,0]);
let Shape19 = browser.currentScene.createNode("Shape");
Shape19.DEF = "HAnimRootShape";
let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.DEF = "HAnimRootMaterial";
Material21.diffuseColor = new SFColor(new float[0.8,0,0]);
Material21.transparency = 0.3;
Appearance20.material = Material21;

Shape19.appearance = Appearance20;

let Sphere22 = browser.currentScene.createNode("Sphere");
Sphere22.radius = 0.02;
Shape19.geometry = Sphere22;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Transform17.children = new MFNode();

Transform17.children[0] = Transform18;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,2.1,0]);
let Shape24 = browser.currentScene.createNode("Shape");
Shape24.DEF = "HAnimJointShape";
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.DEF = "HAnimJointMaterial";
Material26.diffuseColor = new SFColor(new float[0,0,0.8]);
Material26.transparency = 0.3;
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

let Sphere27 = browser.currentScene.createNode("Sphere");
Sphere27.radius = 0.02;
Shape24.geometry = Sphere27;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

Transform17.children[1] = Transform23;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.translation = new SFVec3f(new float[0,2.05,0]);
let Shape29 = browser.currentScene.createNode("Shape");
Shape29.DEF = "HAnimSegmentLine";
let LineSet30 = browser.currentScene.createNode("LineSet");
LineSet30.vertexCount = new MFInt32(new int[2]);
let ColorRGBA31 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA31.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA31.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet30.color = ColorRGBA31;

let Coordinate32 = browser.currentScene.createNode("Coordinate");
Coordinate32.point = new MFVec3f(new float[-0.05,0,0,0.05,0,0]);
LineSet30.coord = Coordinate32;

Shape29.geometry = LineSet30;

Transform28.child = new undefined();

Transform28.child[0] = Shape29;

Transform17.children[2] = Transform28;

let Transform33 = browser.currentScene.createNode("Transform");
Transform33.translation = new SFVec3f(new float[0,2.1,0]);
let Shape34 = browser.currentScene.createNode("Shape");
Shape34.DEF = "HAnimSiteShape";
let Appearance35 = browser.currentScene.createNode("Appearance");
let Material36 = browser.currentScene.createNode("Material");
Material36.diffuseColor = new SFColor(new float[1,1,0]);
Material36.transparency = 0.3;
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

let IndexedFaceSet37 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet37.DEF = "DiamondIFS";
IndexedFaceSet37.solid = False;
IndexedFaceSet37.creaseAngle = 0.5;
IndexedFaceSet37.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
let ColorRGBA38 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA38.DEF = "HAnimSiteColorRGBA";
ColorRGBA38.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1]);
IndexedFaceSet37.color = ColorRGBA38;

let Coordinate39 = browser.currentScene.createNode("Coordinate");
Coordinate39.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet37.coord = Coordinate39;

Shape34.geometry = IndexedFaceSet37;

Transform33.child = new undefined();

Transform33.child[0] = Shape34;

Transform17.children[3] = Transform33;

Group16.children = new MFNode();

Group16.children[0] = Transform17;

browser.currentScene.children[1] = Group16;

let NavigationInfo40 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo40.speed = 1.5;
browser.currentScene.children[2] = NavigationInfo40;

let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.description = "default";
browser.currentScene.children[3] = Viewpoint41;

let HAnimHumanoid42 = browser.currentScene.createNode("HAnimHumanoid");
HAnimHumanoid42.DEF = "hanim_HAnim";
HAnimHumanoid42.version = "2.0";
HAnimHumanoid42.name = "HAnim";
HAnimHumanoid42.info = new MFString(new java.lang.String["humanoidVersion=2.0"]);
let HAnimJoint43 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint43.DEF = "hanim_humanoid_root";
HAnimJoint43.name = "humanoid_root";
HAnimJoint43.center = new SFVec3f(new float[0,0.824,0.0277]);
let HAnimSegment44 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment44.DEF = "hanim_sacrum";
HAnimSegment44.name = "sacrum";
let Transform45 = browser.currentScene.createNode("Transform");
Transform45.translation = new SFVec3f(new float[0,0.824,0.0277]);
let Transform46 = browser.currentScene.createNode("Transform");
let Shape47 = browser.currentScene.createNode("Shape");
Shape47.USE = "HAnimJointShape";
Transform46.child = new undefined();

Transform46.child[0] = Shape47;

Transform45.children = new MFNode();

Transform45.children[0] = Transform46;

HAnimSegment44.children = new MFNode();

HAnimSegment44.children[0] = Transform45;

let Shape48 = browser.currentScene.createNode("Shape");
let LineSet49 = browser.currentScene.createNode("LineSet");
LineSet49.vertexCount = new MFInt32(new int[2]);
let ColorRGBA50 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA50.USE = "HAnimSegmentLineColorRGBA";
LineSet49.color = ColorRGBA50;

let Coordinate51 = browser.currentScene.createNode("Coordinate");
Coordinate51.point = new MFVec3f(new float[0,0.824,0.0277,0,0.9149,0.0016]);
LineSet49.coord = Coordinate51;

Shape48.geometry = LineSet49;

HAnimSegment44.children[1] = Shape48;

let HAnimSite52 = browser.currentScene.createNode("HAnimSite");
HAnimSite52.DEF = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimSite52.name = "buttocks_standing_wall_contact_point_pt";
let TouchSensor53 = browser.currentScene.createNode("TouchSensor");
TouchSensor53.description = "HAnimSite buttocks_standing_wall_contact_point_pt";
HAnimSite52.children = new MFNode();

HAnimSite52.children[0] = TouchSensor53;

let Shape54 = browser.currentScene.createNode("Shape");
Shape54.USE = "HAnimSiteShape";
HAnimSite52.children[1] = Shape54;

HAnimSegment44.children[2] = HAnimSite52;

let HAnimSite55 = browser.currentScene.createNode("HAnimSite");
HAnimSite55.DEF = "hanim_crotch_pt";
HAnimSite55.name = "crotch_pt";
HAnimSite55.translation = new SFVec3f(new float[0.0034,0.8266,0.0257]);
let TouchSensor56 = browser.currentScene.createNode("TouchSensor");
TouchSensor56.description = "HAnimSite crotch_pt";
HAnimSite55.children = new MFNode();

HAnimSite55.children[0] = TouchSensor56;

let Shape57 = browser.currentScene.createNode("Shape");
Shape57.USE = "HAnimSiteShape";
HAnimSite55.children[1] = Shape57;

HAnimSegment44.children[3] = HAnimSite55;

let HAnimSite58 = browser.currentScene.createNode("HAnimSite");
HAnimSite58.DEF = "hanim_l_asis_pt";
HAnimSite58.name = "l_asis_pt";
HAnimSite58.translation = new SFVec3f(new float[0.0925,0.9983,0.1052]);
let TouchSensor59 = browser.currentScene.createNode("TouchSensor");
TouchSensor59.description = "HAnimSite l_asis_pt";
HAnimSite58.children = new MFNode();

HAnimSite58.children[0] = TouchSensor59;

let Shape60 = browser.currentScene.createNode("Shape");
Shape60.USE = "HAnimSiteShape";
HAnimSite58.children[1] = Shape60;

HAnimSegment44.children[4] = HAnimSite58;

let HAnimSite61 = browser.currentScene.createNode("HAnimSite");
HAnimSite61.DEF = "hanim_l_iliocristale_pt";
HAnimSite61.name = "l_iliocristale_pt";
HAnimSite61.translation = new SFVec3f(new float[0.1612,1.0537,0.0008]);
let TouchSensor62 = browser.currentScene.createNode("TouchSensor");
TouchSensor62.description = "HAnimSite l_iliocristale_pt";
HAnimSite61.children = new MFNode();

HAnimSite61.children[0] = TouchSensor62;

let Shape63 = browser.currentScene.createNode("Shape");
Shape63.USE = "HAnimSiteShape";
HAnimSite61.children[1] = Shape63;

HAnimSegment44.children[5] = HAnimSite61;

let HAnimSite64 = browser.currentScene.createNode("HAnimSite");
HAnimSite64.DEF = "hanim_l_psis_pt";
HAnimSite64.name = "l_psis_pt";
HAnimSite64.translation = new SFVec3f(new float[0.0774,1.019,-0.1151]);
let TouchSensor65 = browser.currentScene.createNode("TouchSensor");
TouchSensor65.description = "HAnimSite l_psis_pt";
HAnimSite64.children = new MFNode();

HAnimSite64.children[0] = TouchSensor65;

let Shape66 = browser.currentScene.createNode("Shape");
Shape66.USE = "HAnimSiteShape";
HAnimSite64.children[1] = Shape66;

HAnimSegment44.children[6] = HAnimSite64;

let HAnimSite67 = browser.currentScene.createNode("HAnimSite");
HAnimSite67.DEF = "hanim_l_trochanterion_pt";
HAnimSite67.name = "l_trochanterion_pt";
HAnimSite67.translation = new SFVec3f(new float[0.1677,0.8336,0.0303]);
let TouchSensor68 = browser.currentScene.createNode("TouchSensor");
TouchSensor68.description = "HAnimSite l_trochanterion_pt";
HAnimSite67.children = new MFNode();

HAnimSite67.children[0] = TouchSensor68;

let Shape69 = browser.currentScene.createNode("Shape");
Shape69.USE = "HAnimSiteShape";
HAnimSite67.children[1] = Shape69;

HAnimSegment44.children[7] = HAnimSite67;

let HAnimSite70 = browser.currentScene.createNode("HAnimSite");
HAnimSite70.DEF = "hanim_r_asis_pt";
HAnimSite70.name = "r_asis_pt";
HAnimSite70.translation = new SFVec3f(new float[-0.0887,1.0021,0.1112]);
let TouchSensor71 = browser.currentScene.createNode("TouchSensor");
TouchSensor71.description = "HAnimSite r_asis_pt";
HAnimSite70.children = new MFNode();

HAnimSite70.children[0] = TouchSensor71;

let Shape72 = browser.currentScene.createNode("Shape");
Shape72.USE = "HAnimSiteShape";
HAnimSite70.children[1] = Shape72;

HAnimSegment44.children[8] = HAnimSite70;

let HAnimSite73 = browser.currentScene.createNode("HAnimSite");
HAnimSite73.DEF = "hanim_r_iliocristale_pt";
HAnimSite73.name = "r_iliocristale_pt";
HAnimSite73.translation = new SFVec3f(new float[-0.1525,1.0628,0.0035]);
let TouchSensor74 = browser.currentScene.createNode("TouchSensor");
TouchSensor74.description = "HAnimSite r_iliocristale_pt";
HAnimSite73.children = new MFNode();

HAnimSite73.children[0] = TouchSensor74;

let Shape75 = browser.currentScene.createNode("Shape");
Shape75.USE = "HAnimSiteShape";
HAnimSite73.children[1] = Shape75;

HAnimSegment44.children[9] = HAnimSite73;

let HAnimSite76 = browser.currentScene.createNode("HAnimSite");
HAnimSite76.DEF = "hanim_r_psis_pt";
HAnimSite76.name = "r_psis_pt";
HAnimSite76.translation = new SFVec3f(new float[-0.0716,1.019,-0.1138]);
let TouchSensor77 = browser.currentScene.createNode("TouchSensor");
TouchSensor77.description = "HAnimSite r_psis_pt";
HAnimSite76.children = new MFNode();

HAnimSite76.children[0] = TouchSensor77;

let Shape78 = browser.currentScene.createNode("Shape");
Shape78.USE = "HAnimSiteShape";
HAnimSite76.children[1] = Shape78;

HAnimSegment44.children[10] = HAnimSite76;

let HAnimSite79 = browser.currentScene.createNode("HAnimSite");
HAnimSite79.DEF = "hanim_r_trochanterion_pt";
HAnimSite79.name = "r_trochanterion_pt";
HAnimSite79.translation = new SFVec3f(new float[-0.1689,0.8419,0.0352]);
let TouchSensor80 = browser.currentScene.createNode("TouchSensor");
TouchSensor80.description = "HAnimSite r_trochanterion_pt";
HAnimSite79.children = new MFNode();

HAnimSite79.children[0] = TouchSensor80;

let Shape81 = browser.currentScene.createNode("Shape");
Shape81.USE = "HAnimSiteShape";
HAnimSite79.children[1] = Shape81;

HAnimSegment44.children[11] = HAnimSite79;

let Shape82 = browser.currentScene.createNode("Shape");
let LineSet83 = browser.currentScene.createNode("LineSet");
LineSet83.vertexCount = new MFInt32(new int[2]);
let ColorRGBA84 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA84.USE = "HAnimSegmentLineColorRGBA";
LineSet83.color = ColorRGBA84;

let Coordinate85 = browser.currentScene.createNode("Coordinate");
Coordinate85.point = new MFVec3f(new float[0,0.824,0.0277,0.0028,1.0568,-0.0776]);
LineSet83.coord = Coordinate85;

Shape82.geometry = LineSet83;

HAnimSegment44.children[12] = Shape82;

let HAnimSite86 = browser.currentScene.createNode("HAnimSite");
HAnimSite86.DEF = "hanim_navel_pt";
HAnimSite86.name = "navel_pt";
HAnimSite86.translation = new SFVec3f(new float[0.0069,1.0966,0.1017]);
let TouchSensor87 = browser.currentScene.createNode("TouchSensor");
TouchSensor87.description = "HAnimSite navel_pt";
HAnimSite86.children = new MFNode();

HAnimSite86.children[0] = TouchSensor87;

let Shape88 = browser.currentScene.createNode("Shape");
Shape88.USE = "HAnimSiteShape";
HAnimSite86.children[1] = Shape88;

HAnimSegment44.children[13] = HAnimSite86;

let HAnimSite89 = browser.currentScene.createNode("HAnimSite");
HAnimSite89.DEF = "hanim_waist_preferred_anterior_pt";
HAnimSite89.name = "waist_preferred_anterior_pt";
let TouchSensor90 = browser.currentScene.createNode("TouchSensor");
TouchSensor90.description = "HAnimSite waist_preferred_anterior_pt";
HAnimSite89.children = new MFNode();

HAnimSite89.children[0] = TouchSensor90;

let Shape91 = browser.currentScene.createNode("Shape");
Shape91.USE = "HAnimSiteShape";
HAnimSite89.children[1] = Shape91;

HAnimSegment44.children[14] = HAnimSite89;

let HAnimSite92 = browser.currentScene.createNode("HAnimSite");
HAnimSite92.DEF = "hanim_waist_preferred_posterior_pt";
HAnimSite92.name = "waist_preferred_posterior_pt";
HAnimSite92.translation = new SFVec3f(new float[0.29,1.0915,-0.1091]);
let TouchSensor93 = browser.currentScene.createNode("TouchSensor");
TouchSensor93.description = "HAnimSite waist_preferred_posterior_pt";
HAnimSite92.children = new MFNode();

HAnimSite92.children[0] = TouchSensor93;

let Shape94 = browser.currentScene.createNode("Shape");
Shape94.USE = "HAnimSiteShape";
HAnimSite92.children[1] = Shape94;

HAnimSegment44.children[15] = HAnimSite92;

HAnimJoint43.children = new MFNode();

HAnimJoint43.children[0] = HAnimSegment44;

let HAnimJoint95 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint95.DEF = "hanim_sacroiliac";
HAnimJoint95.name = "sacroiliac";
HAnimJoint95.center = new SFVec3f(new float[0,0.9149,0.0016]);
let HAnimSegment96 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment96.DEF = "hanim_pelvis";
HAnimSegment96.name = "pelvis";
let Transform97 = browser.currentScene.createNode("Transform");
Transform97.translation = new SFVec3f(new float[0,0.9149,0.0016]);
let Transform98 = browser.currentScene.createNode("Transform");
let Shape99 = browser.currentScene.createNode("Shape");
Shape99.USE = "HAnimJointShape";
Transform98.child = new undefined();

Transform98.child[0] = Shape99;

Transform97.children = new MFNode();

Transform97.children[0] = Transform98;

HAnimSegment96.children = new MFNode();

HAnimSegment96.children[0] = Transform97;

let Shape100 = browser.currentScene.createNode("Shape");
let LineSet101 = browser.currentScene.createNode("LineSet");
LineSet101.vertexCount = new MFInt32(new int[2]);
let ColorRGBA102 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA102.USE = "HAnimSegmentLineColorRGBA";
LineSet101.color = ColorRGBA102;

let Coordinate103 = browser.currentScene.createNode("Coordinate");
Coordinate103.point = new MFVec3f(new float[0,0.9149,0.0016,0.0961,0.9124,-0.0001]);
LineSet101.coord = Coordinate103;

Shape100.geometry = LineSet101;

HAnimSegment96.children[1] = Shape100;

let HAnimSite104 = browser.currentScene.createNode("HAnimSite");
HAnimSite104.DEF = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimSite104.name = "l_femoral_lateral_epicondyles_pt";
HAnimSite104.translation = new SFVec3f(new float[0.1598,0.4967,0.0297]);
let TouchSensor105 = browser.currentScene.createNode("TouchSensor");
TouchSensor105.description = "HAnimSite l_femoral_lateral_epicondyles_pt";
HAnimSite104.children = new MFNode();

HAnimSite104.children[0] = TouchSensor105;

let Shape106 = browser.currentScene.createNode("Shape");
Shape106.USE = "HAnimSiteShape";
HAnimSite104.children[1] = Shape106;

HAnimSegment96.children[2] = HAnimSite104;

let HAnimSite107 = browser.currentScene.createNode("HAnimSite");
HAnimSite107.DEF = "hanim_l_femoral_medial_epicondyles_pt";
HAnimSite107.name = "l_femoral_medial_epicondyles_pt";
HAnimSite107.translation = new SFVec3f(new float[0.0398,0.4946,0.0303]);
let TouchSensor108 = browser.currentScene.createNode("TouchSensor");
TouchSensor108.description = "HAnimSite l_femoral_medial_epicondyles_pt";
HAnimSite107.children = new MFNode();

HAnimSite107.children[0] = TouchSensor108;

let Shape109 = browser.currentScene.createNode("Shape");
Shape109.USE = "HAnimSiteShape";
HAnimSite107.children[1] = Shape109;

HAnimSegment96.children[3] = HAnimSite107;

let HAnimSite110 = browser.currentScene.createNode("HAnimSite");
HAnimSite110.DEF = "hanim_l_knee_crease_pt";
HAnimSite110.name = "l_knee_crease_pt";
HAnimSite110.translation = new SFVec3f(new float[0.0993,0.4881,-0.0309]);
let TouchSensor111 = browser.currentScene.createNode("TouchSensor");
TouchSensor111.description = "HAnimSite l_knee_crease_pt";
HAnimSite110.children = new MFNode();

HAnimSite110.children[0] = TouchSensor111;

let Shape112 = browser.currentScene.createNode("Shape");
Shape112.USE = "HAnimSiteShape";
HAnimSite110.children[1] = Shape112;

HAnimSegment96.children[4] = HAnimSite110;

let HAnimSite113 = browser.currentScene.createNode("HAnimSite");
HAnimSite113.DEF = "hanim_l_suprapatella_pt";
HAnimSite113.name = "l_suprapatella_pt";
let TouchSensor114 = browser.currentScene.createNode("TouchSensor");
TouchSensor114.description = "HAnimSite l_suprapatella_pt";
HAnimSite113.children = new MFNode();

HAnimSite113.children[0] = TouchSensor114;

let Shape115 = browser.currentScene.createNode("Shape");
Shape115.USE = "HAnimSiteShape";
HAnimSite113.children[1] = Shape115;

HAnimSegment96.children[5] = HAnimSite113;

let Shape116 = browser.currentScene.createNode("Shape");
let LineSet117 = browser.currentScene.createNode("LineSet");
LineSet117.vertexCount = new MFInt32(new int[2]);
let ColorRGBA118 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA118.USE = "HAnimSegmentLineColorRGBA";
LineSet117.color = ColorRGBA118;

let Coordinate119 = browser.currentScene.createNode("Coordinate");
Coordinate119.point = new MFVec3f(new float[0,0.9149,0.0016,-0.095,0.9171,0.0029]);
LineSet117.coord = Coordinate119;

Shape116.geometry = LineSet117;

HAnimSegment96.children[6] = Shape116;

let HAnimSite120 = browser.currentScene.createNode("HAnimSite");
HAnimSite120.DEF = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimSite120.name = "r_femoral_lateral_epicondyles_pt";
HAnimSite120.translation = new SFVec3f(new float[-0.1421,0.4992,0.031]);
let TouchSensor121 = browser.currentScene.createNode("TouchSensor");
TouchSensor121.description = "HAnimSite r_femoral_lateral_epicondyles_pt";
HAnimSite120.children = new MFNode();

HAnimSite120.children[0] = TouchSensor121;

let Shape122 = browser.currentScene.createNode("Shape");
Shape122.USE = "HAnimSiteShape";
HAnimSite120.children[1] = Shape122;

HAnimSegment96.children[7] = HAnimSite120;

let HAnimSite123 = browser.currentScene.createNode("HAnimSite");
HAnimSite123.DEF = "hanim_r_femoral_medial_epicondyles_pt";
HAnimSite123.name = "r_femoral_medial_epicondyles_pt";
HAnimSite123.translation = new SFVec3f(new float[-0.0221,0.5014,0.0289]);
let TouchSensor124 = browser.currentScene.createNode("TouchSensor");
TouchSensor124.description = "HAnimSite r_femoral_medial_epicondyles_pt";
HAnimSite123.children = new MFNode();

HAnimSite123.children[0] = TouchSensor124;

let Shape125 = browser.currentScene.createNode("Shape");
Shape125.USE = "HAnimSiteShape";
HAnimSite123.children[1] = Shape125;

HAnimSegment96.children[8] = HAnimSite123;

let HAnimSite126 = browser.currentScene.createNode("HAnimSite");
HAnimSite126.DEF = "hanim_r_knee_crease_pt";
HAnimSite126.name = "r_knee_crease_pt";
HAnimSite126.translation = new SFVec3f(new float[-0.0825,0.4932,-0.0326]);
let TouchSensor127 = browser.currentScene.createNode("TouchSensor");
TouchSensor127.description = "HAnimSite r_knee_crease_pt";
HAnimSite126.children = new MFNode();

HAnimSite126.children[0] = TouchSensor127;

let Shape128 = browser.currentScene.createNode("Shape");
Shape128.USE = "HAnimSiteShape";
HAnimSite126.children[1] = Shape128;

HAnimSegment96.children[9] = HAnimSite126;

let HAnimSite129 = browser.currentScene.createNode("HAnimSite");
HAnimSite129.DEF = "hanim_r_suprapatella_pt";
HAnimSite129.name = "r_suprapatella_pt";
let TouchSensor130 = browser.currentScene.createNode("TouchSensor");
TouchSensor130.description = "HAnimSite r_suprapatella_pt";
HAnimSite129.children = new MFNode();

HAnimSite129.children[0] = TouchSensor130;

let Shape131 = browser.currentScene.createNode("Shape");
Shape131.USE = "HAnimSiteShape";
HAnimSite129.children[1] = Shape131;

HAnimSegment96.children[10] = HAnimSite129;

HAnimJoint95.children = new MFNode();

HAnimJoint95.children[0] = HAnimSegment96;

let HAnimJoint132 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint132.DEF = "hanim_l_hip";
HAnimJoint132.name = "l_hip";
HAnimJoint132.center = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let HAnimSegment133 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment133.DEF = "hanim_l_thigh";
HAnimSegment133.name = "l_thigh";
let Transform134 = browser.currentScene.createNode("Transform");
Transform134.translation = new SFVec3f(new float[0.0961,0.9124,-0.0001]);
let Transform135 = browser.currentScene.createNode("Transform");
let Shape136 = browser.currentScene.createNode("Shape");
Shape136.USE = "HAnimJointShape";
Transform135.child = new undefined();

Transform135.child[0] = Shape136;

Transform134.children = new MFNode();

Transform134.children[0] = Transform135;

HAnimSegment133.children = new MFNode();

HAnimSegment133.children[0] = Transform134;

let Shape137 = browser.currentScene.createNode("Shape");
let LineSet138 = browser.currentScene.createNode("LineSet");
LineSet138.vertexCount = new MFInt32(new int[2]);
let ColorRGBA139 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA139.USE = "HAnimSegmentLineColorRGBA";
LineSet138.color = ColorRGBA139;

let Coordinate140 = browser.currentScene.createNode("Coordinate");
Coordinate140.point = new MFVec3f(new float[0.0961,0.9124,-0.0001,0.104,0.4867,0.0308]);
LineSet138.coord = Coordinate140;

Shape137.geometry = LineSet138;

HAnimSegment133.children[1] = Shape137;

let HAnimSite141 = browser.currentScene.createNode("HAnimSite");
HAnimSite141.DEF = "hanim_l_lateral_malleolus_pt";
HAnimSite141.name = "l_lateral_malleolus_pt";
HAnimSite141.translation = new SFVec3f(new float[0.1308,0.0597,-0.1032]);
let TouchSensor142 = browser.currentScene.createNode("TouchSensor");
TouchSensor142.description = "HAnimSite l_lateral_malleolus_pt";
HAnimSite141.children = new MFNode();

HAnimSite141.children[0] = TouchSensor142;

let Shape143 = browser.currentScene.createNode("Shape");
Shape143.USE = "HAnimSiteShape";
HAnimSite141.children[1] = Shape143;

HAnimSegment133.children[2] = HAnimSite141;

let HAnimSite144 = browser.currentScene.createNode("HAnimSite");
HAnimSite144.DEF = "hanim_l_medial_malleolus_pt";
HAnimSite144.name = "l_medial_malleolus_pt";
HAnimSite144.translation = new SFVec3f(new float[0.089,0.0716,-0.0881]);
let TouchSensor145 = browser.currentScene.createNode("TouchSensor");
TouchSensor145.description = "HAnimSite l_medial_malleolus_pt";
HAnimSite144.children = new MFNode();

HAnimSite144.children[0] = TouchSensor145;

let Shape146 = browser.currentScene.createNode("Shape");
Shape146.USE = "HAnimSiteShape";
HAnimSite144.children[1] = Shape146;

HAnimSegment133.children[3] = HAnimSite144;

let HAnimSite147 = browser.currentScene.createNode("HAnimSite");
HAnimSite147.DEF = "hanim_l_tibiale_pt";
HAnimSite147.name = "l_tibiale_pt";
let TouchSensor148 = browser.currentScene.createNode("TouchSensor");
TouchSensor148.description = "HAnimSite l_tibiale_pt";
HAnimSite147.children = new MFNode();

HAnimSite147.children[0] = TouchSensor148;

let Shape149 = browser.currentScene.createNode("Shape");
Shape149.USE = "HAnimSiteShape";
HAnimSite147.children[1] = Shape149;

HAnimSegment133.children[4] = HAnimSite147;

HAnimJoint132.children = new MFNode();

HAnimJoint132.children[0] = HAnimSegment133;

let HAnimJoint150 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint150.DEF = "hanim_l_knee";
HAnimJoint150.name = "l_knee";
HAnimJoint150.center = new SFVec3f(new float[0.104,0.4867,0.0308]);
let HAnimSegment151 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment151.DEF = "hanim_l_calf";
HAnimSegment151.name = "l_calf";
let Transform152 = browser.currentScene.createNode("Transform");
Transform152.translation = new SFVec3f(new float[0.104,0.4867,0.0308]);
let Transform153 = browser.currentScene.createNode("Transform");
let Shape154 = browser.currentScene.createNode("Shape");
Shape154.USE = "HAnimJointShape";
Transform153.child = new undefined();

Transform153.child[0] = Shape154;

Transform152.children = new MFNode();

Transform152.children[0] = Transform153;

HAnimSegment151.children = new MFNode();

HAnimSegment151.children[0] = Transform152;

let Shape155 = browser.currentScene.createNode("Shape");
let LineSet156 = browser.currentScene.createNode("LineSet");
LineSet156.vertexCount = new MFInt32(new int[2]);
let ColorRGBA157 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA157.USE = "HAnimSegmentLineColorRGBA";
LineSet156.color = ColorRGBA157;

let Coordinate158 = browser.currentScene.createNode("Coordinate");
Coordinate158.point = new MFVec3f(new float[0.104,0.4867,0.0308,0.1101,0.0656,-0.0736]);
LineSet156.coord = Coordinate158;

Shape155.geometry = LineSet156;

HAnimSegment151.children[1] = Shape155;

let HAnimSite159 = browser.currentScene.createNode("HAnimSite");
HAnimSite159.DEF = "hanim_l_calcaneus_posterior_pt";
HAnimSite159.name = "l_calcaneus_posterior_pt";
HAnimSite159.translation = new SFVec3f(new float[0.0974,0.0259,-0.1171]);
let TouchSensor160 = browser.currentScene.createNode("TouchSensor");
TouchSensor160.description = "HAnimSite l_calcaneus_posterior_pt";
HAnimSite159.children = new MFNode();

HAnimSite159.children[0] = TouchSensor160;

let Shape161 = browser.currentScene.createNode("Shape");
Shape161.USE = "HAnimSiteShape";
HAnimSite159.children[1] = Shape161;

HAnimSegment151.children[2] = HAnimSite159;

let HAnimSite162 = browser.currentScene.createNode("HAnimSite");
HAnimSite162.DEF = "hanim_l_sphyrion_pt";
HAnimSite162.name = "l_sphyrion_pt";
HAnimSite162.translation = new SFVec3f(new float[0.089,0.0575,-0.0943]);
let TouchSensor163 = browser.currentScene.createNode("TouchSensor");
TouchSensor163.description = "HAnimSite l_sphyrion_pt";
HAnimSite162.children = new MFNode();

HAnimSite162.children[0] = TouchSensor163;

let Shape164 = browser.currentScene.createNode("Shape");
Shape164.USE = "HAnimSiteShape";
HAnimSite162.children[1] = Shape164;

HAnimSegment151.children[3] = HAnimSite162;

HAnimJoint150.children = new MFNode();

HAnimJoint150.children[0] = HAnimSegment151;

let HAnimJoint165 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint165.DEF = "hanim_l_talocrural";
HAnimJoint165.name = "l_talocrural";
HAnimJoint165.center = new SFVec3f(new float[0.1101,0.0656,-0.0736]);
let HAnimSegment166 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment166.DEF = "hanim_l_talus";
HAnimSegment166.name = "l_talus";
let Transform167 = browser.currentScene.createNode("Transform");
Transform167.translation = new SFVec3f(new float[0.08,0.06,-0.025]);
Transform167.rotation = new SFRotation(new float[1,0,0,-1.57]);
Transform167.scale = new SFVec3f(new float[0.15,0.15,0.15]);
let Transform168 = browser.currentScene.createNode("Transform");
let Shape169 = browser.currentScene.createNode("Shape");
Shape169.USE = "HAnimJointShape";
Transform168.child = new undefined();

Transform168.child[0] = Shape169;

Transform167.children = new MFNode();

Transform167.children[0] = Transform168;

HAnimSegment166.children = new MFNode();

HAnimSegment166.children[0] = Transform167;

let Shape170 = browser.currentScene.createNode("Shape");
let LineSet171 = browser.currentScene.createNode("LineSet");
LineSet171.vertexCount = new MFInt32(new int[2]);
let ColorRGBA172 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA172.USE = "HAnimSegmentLineColorRGBA";
LineSet171.color = ColorRGBA172;

let Coordinate173 = browser.currentScene.createNode("Coordinate");
Coordinate173.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,3.4715,0.0374,0.6807]);
LineSet171.coord = Coordinate173;

Shape170.geometry = LineSet171;

HAnimSegment166.children[1] = Shape170;

let Shape174 = browser.currentScene.createNode("Shape");
let LineSet175 = browser.currentScene.createNode("LineSet");
LineSet175.vertexCount = new MFInt32(new int[2]);
let ColorRGBA176 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA176.USE = "HAnimSegmentLineColorRGBA";
LineSet175.color = ColorRGBA176;

let Coordinate177 = browser.currentScene.createNode("Coordinate");
Coordinate177.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,3.9515,0.0653,-0.6895]);
LineSet175.coord = Coordinate177;

Shape174.geometry = LineSet175;

HAnimSegment166.children[2] = Shape174;

HAnimJoint165.children = new MFNode();

HAnimJoint165.children[0] = HAnimSegment166;

let HAnimJoint178 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint178.DEF = "hanim_l_talocalcaneonavicular";
HAnimJoint178.name = "l_talocalcaneonavicular";
HAnimJoint178.center = new SFVec3f(new float[3.4715,0.0374,0.6807]);
let HAnimSegment179 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment179.DEF = "hanim_l_navicular";
HAnimSegment179.name = "l_navicular";
let Transform180 = browser.currentScene.createNode("Transform");
Transform180.translation = new SFVec3f(new float[3.4715,0.0374,0.6807]);
let Transform181 = browser.currentScene.createNode("Transform");
let Shape182 = browser.currentScene.createNode("Shape");
Shape182.USE = "HAnimJointShape";
Transform181.child = new undefined();

Transform181.child[0] = Shape182;

Transform180.children = new MFNode();

Transform180.children[0] = Transform181;

HAnimSegment179.children = new MFNode();

HAnimSegment179.children[0] = Transform180;

let Shape183 = browser.currentScene.createNode("Shape");
let LineSet184 = browser.currentScene.createNode("LineSet");
LineSet184.vertexCount = new MFInt32(new int[2]);
let ColorRGBA185 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA185.USE = "HAnimSegmentLineColorRGBA";
LineSet184.color = ColorRGBA185;

let Coordinate186 = browser.currentScene.createNode("Coordinate");
Coordinate186.point = new MFVec3f(new float[3.4715,0.0374,0.6807,2.9855,0.0311,1.2819]);
LineSet184.coord = Coordinate186;

Shape183.geometry = LineSet184;

HAnimSegment179.children[1] = Shape183;

let Shape187 = browser.currentScene.createNode("Shape");
let LineSet188 = browser.currentScene.createNode("LineSet");
LineSet188.vertexCount = new MFInt32(new int[2]);
let ColorRGBA189 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA189.USE = "HAnimSegmentLineColorRGBA";
LineSet188.color = ColorRGBA189;

let Coordinate190 = browser.currentScene.createNode("Coordinate");
Coordinate190.point = new MFVec3f(new float[3.4715,0.0374,0.6807,3.6105,0.033,1.4168]);
LineSet188.coord = Coordinate190;

Shape187.geometry = LineSet188;

HAnimSegment179.children[2] = Shape187;

let Shape191 = browser.currentScene.createNode("Shape");
let LineSet192 = browser.currentScene.createNode("LineSet");
LineSet192.vertexCount = new MFInt32(new int[2]);
let ColorRGBA193 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA193.USE = "HAnimSegmentLineColorRGBA";
LineSet192.color = ColorRGBA193;

let Coordinate194 = browser.currentScene.createNode("Coordinate");
Coordinate194.point = new MFVec3f(new float[3.4715,0.0374,0.6807,4.1235,0.0328,1.3453]);
LineSet192.coord = Coordinate194;

Shape191.geometry = LineSet192;

HAnimSegment179.children[3] = Shape191;

HAnimJoint178.children = new MFNode();

HAnimJoint178.children[0] = HAnimSegment179;

let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.DEF = "hanim_l_cuneonavicular_1";
HAnimJoint195.name = "l_cuneonavicular_1";
HAnimJoint195.center = new SFVec3f(new float[2.9855,0.0311,1.2819]);
let HAnimSegment196 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment196.DEF = "hanim_l_cuneiform_1";
HAnimSegment196.name = "l_cuneiform_1";
let Transform197 = browser.currentScene.createNode("Transform");
Transform197.translation = new SFVec3f(new float[2.9855,0.0311,1.2819]);
let Transform198 = browser.currentScene.createNode("Transform");
let Shape199 = browser.currentScene.createNode("Shape");
Shape199.USE = "HAnimJointShape";
Transform198.child = new undefined();

Transform198.child[0] = Shape199;

Transform197.children = new MFNode();

Transform197.children[0] = Transform198;

HAnimSegment196.children = new MFNode();

HAnimSegment196.children[0] = Transform197;

let Shape200 = browser.currentScene.createNode("Shape");
let LineSet201 = browser.currentScene.createNode("LineSet");
LineSet201.vertexCount = new MFInt32(new int[2]);
let ColorRGBA202 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA202.USE = "HAnimSegmentLineColorRGBA";
LineSet201.color = ColorRGBA202;

let Coordinate203 = browser.currentScene.createNode("Coordinate");
Coordinate203.point = new MFVec3f(new float[2.9855,0.0311,1.2819,2.8635,0.0194,2.4285]);
LineSet201.coord = Coordinate203;

Shape200.geometry = LineSet201;

HAnimSegment196.children[1] = Shape200;

HAnimJoint195.children = new MFNode();

HAnimJoint195.children[0] = HAnimSegment196;

let HAnimJoint204 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint204.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint204.name = "l_tarsometatarsal_1";
HAnimJoint204.center = new SFVec3f(new float[2.8635,0.0194,2.4285]);
let HAnimSegment205 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment205.DEF = "hanim_l_metatarsal_1";
HAnimSegment205.name = "l_metatarsal_1";
let Transform206 = browser.currentScene.createNode("Transform");
Transform206.translation = new SFVec3f(new float[2.8635,0.0194,2.4285]);
let Transform207 = browser.currentScene.createNode("Transform");
let Shape208 = browser.currentScene.createNode("Shape");
Shape208.USE = "HAnimJointShape";
Transform207.child = new undefined();

Transform207.child[0] = Shape208;

Transform206.children = new MFNode();

Transform206.children[0] = Transform207;

HAnimSegment205.children = new MFNode();

HAnimSegment205.children[0] = Transform206;

let Shape209 = browser.currentScene.createNode("Shape");
let LineSet210 = browser.currentScene.createNode("LineSet");
LineSet210.vertexCount = new MFInt32(new int[2]);
let ColorRGBA211 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA211.USE = "HAnimSegmentLineColorRGBA";
LineSet210.color = ColorRGBA211;

let Coordinate212 = browser.currentScene.createNode("Coordinate");
Coordinate212.point = new MFVec3f(new float[2.8635,0.0194,2.4285,2.7525,0.0077,4.6255]);
LineSet210.coord = Coordinate212;

Shape209.geometry = LineSet210;

HAnimSegment205.children[1] = Shape209;

let HAnimSite213 = browser.currentScene.createNode("HAnimSite");
HAnimSite213.DEF = "hanim_l_metatarsal_phalanx_1_pt";
HAnimSite213.name = "l_metatarsal_phalanx_1_pt";
let TouchSensor214 = browser.currentScene.createNode("TouchSensor");
TouchSensor214.description = "HAnimSite l_metatarsal_phalanx_1_pt";
HAnimSite213.children = new MFNode();

HAnimSite213.children[0] = TouchSensor214;

let Shape215 = browser.currentScene.createNode("Shape");
Shape215.USE = "HAnimSiteShape";
HAnimSite213.children[1] = Shape215;

HAnimSegment205.children[2] = HAnimSite213;

HAnimJoint204.children = new MFNode();

HAnimJoint204.children[0] = HAnimSegment205;

let HAnimJoint216 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint216.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint216.name = "l_metatarsophalangeal_1";
HAnimJoint216.center = new SFVec3f(new float[2.7525,0.0077,4.6255]);
let HAnimSegment217 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment217.DEF = "hanim_l_tarsal_proximal_phalanx_1";
HAnimSegment217.name = "l_tarsal_proximal_phalanx_1";
let Transform218 = browser.currentScene.createNode("Transform");
Transform218.translation = new SFVec3f(new float[2.7525,0.0077,4.6255]);
let Transform219 = browser.currentScene.createNode("Transform");
let Shape220 = browser.currentScene.createNode("Shape");
Shape220.USE = "HAnimJointShape";
Transform219.child = new undefined();

Transform219.child[0] = Shape220;

Transform218.children = new MFNode();

Transform218.children[0] = Transform219;

HAnimSegment217.children = new MFNode();

HAnimSegment217.children[0] = Transform218;

let Shape221 = browser.currentScene.createNode("Shape");
let LineSet222 = browser.currentScene.createNode("LineSet");
LineSet222.vertexCount = new MFInt32(new int[2]);
let ColorRGBA223 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA223.USE = "HAnimSegmentLineColorRGBA";
LineSet222.color = ColorRGBA223;

let Coordinate224 = browser.currentScene.createNode("Coordinate");
Coordinate224.point = new MFVec3f(new float[2.7525,0.0077,4.6255,2.7525,0.0077,4.6255]);
LineSet222.coord = Coordinate224;

Shape221.geometry = LineSet222;

HAnimSegment217.children[1] = Shape221;

let HAnimSite225 = browser.currentScene.createNode("HAnimSite");
HAnimSite225.DEF = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimSite225.name = "l_tarsal_distal_phalanx_1_tip";
let TouchSensor226 = browser.currentScene.createNode("TouchSensor");
TouchSensor226.description = "HAnimSite l_tarsal_distal_phalanx_1_tip";
HAnimSite225.children = new MFNode();

HAnimSite225.children[0] = TouchSensor226;

let Shape227 = browser.currentScene.createNode("Shape");
Shape227.USE = "HAnimSiteShape";
HAnimSite225.children[1] = Shape227;

HAnimSegment217.children[2] = HAnimSite225;

HAnimJoint216.children = new MFNode();

HAnimJoint216.children[0] = HAnimSegment217;

let HAnimJoint228 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint228.DEF = "hanim_l_tarsal_interphalangeal_1";
HAnimJoint228.name = "l_tarsal_interphalangeal_1";
HAnimJoint216.children[1] = HAnimJoint228;

HAnimJoint204.children[1] = HAnimJoint216;

HAnimJoint195.children[1] = HAnimJoint204;

HAnimJoint178.children[1] = HAnimJoint195;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.DEF = "hanim_l_cuneonavicular_2";
HAnimJoint229.name = "l_cuneonavicular_2";
HAnimJoint229.center = new SFVec3f(new float[3.6105,0.033,1.4168]);
let HAnimSegment230 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment230.DEF = "hanim_l_cuneiform_2";
HAnimSegment230.name = "l_cuneiform_2";
let Transform231 = browser.currentScene.createNode("Transform");
Transform231.translation = new SFVec3f(new float[3.6105,0.033,1.4168]);
let Transform232 = browser.currentScene.createNode("Transform");
let Shape233 = browser.currentScene.createNode("Shape");
Shape233.USE = "HAnimJointShape";
Transform232.child = new undefined();

Transform232.child[0] = Shape233;

Transform231.children = new MFNode();

Transform231.children[0] = Transform232;

HAnimSegment230.children = new MFNode();

HAnimSegment230.children[0] = Transform231;

let Shape234 = browser.currentScene.createNode("Shape");
let LineSet235 = browser.currentScene.createNode("LineSet");
LineSet235.vertexCount = new MFInt32(new int[2]);
let ColorRGBA236 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA236.USE = "HAnimSegmentLineColorRGBA";
LineSet235.color = ColorRGBA236;

let Coordinate237 = browser.currentScene.createNode("Coordinate");
Coordinate237.point = new MFVec3f(new float[3.6105,0.033,1.4168,3.5555,0.0232,2.2895]);
LineSet235.coord = Coordinate237;

Shape234.geometry = LineSet235;

HAnimSegment230.children[1] = Shape234;

HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

let HAnimJoint238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint238.DEF = "hanim_l_tarsometatarsal_2";
HAnimJoint238.name = "l_tarsometatarsal_2";
HAnimJoint238.center = new SFVec3f(new float[3.5555,0.0232,2.2895]);
let HAnimSegment239 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment239.DEF = "hanim_l_metatarsal_2";
HAnimSegment239.name = "l_metatarsal_2";
let Transform240 = browser.currentScene.createNode("Transform");
Transform240.translation = new SFVec3f(new float[3.5555,0.0232,2.2895]);
let Transform241 = browser.currentScene.createNode("Transform");
let Shape242 = browser.currentScene.createNode("Shape");
Shape242.USE = "HAnimJointShape";
Transform241.child = new undefined();

Transform241.child[0] = Shape242;

Transform240.children = new MFNode();

Transform240.children[0] = Transform241;

HAnimSegment239.children = new MFNode();

HAnimSegment239.children[0] = Transform240;

let Shape243 = browser.currentScene.createNode("Shape");
let LineSet244 = browser.currentScene.createNode("LineSet");
LineSet244.vertexCount = new MFInt32(new int[2]);
let ColorRGBA245 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA245.USE = "HAnimSegmentLineColorRGBA";
LineSet244.color = ColorRGBA245;

let Coordinate246 = browser.currentScene.createNode("Coordinate");
Coordinate246.point = new MFVec3f(new float[3.5555,0.0232,2.2895,3.6595,0.0085,4.8125]);
LineSet244.coord = Coordinate246;

Shape243.geometry = LineSet244;

HAnimSegment239.children[1] = Shape243;

HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

let HAnimJoint247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint247.DEF = "hanim_l_metatarsophalangeal_2";
HAnimJoint247.name = "l_metatarsophalangeal_2";
HAnimJoint247.center = new SFVec3f(new float[3.6595,0.0085,4.8125]);
let HAnimSegment248 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment248.DEF = "hanim_l_tarsal_proximal_phalanx_2";
HAnimSegment248.name = "l_tarsal_proximal_phalanx_2";
let Transform249 = browser.currentScene.createNode("Transform");
Transform249.translation = new SFVec3f(new float[3.6595,0.0085,4.8125]);
let Transform250 = browser.currentScene.createNode("Transform");
let Shape251 = browser.currentScene.createNode("Shape");
Shape251.USE = "HAnimJointShape";
Transform250.child = new undefined();

Transform250.child[0] = Shape251;

Transform249.children = new MFNode();

Transform249.children[0] = Transform250;

HAnimSegment248.children = new MFNode();

HAnimSegment248.children[0] = Transform249;

let Shape252 = browser.currentScene.createNode("Shape");
let LineSet253 = browser.currentScene.createNode("LineSet");
LineSet253.vertexCount = new MFInt32(new int[2]);
let ColorRGBA254 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA254.USE = "HAnimSegmentLineColorRGBA";
LineSet253.color = ColorRGBA254;

let Coordinate255 = browser.currentScene.createNode("Coordinate");
Coordinate255.point = new MFVec3f(new float[3.6595,0.0085,4.8125,3.7385,0.0054,5.5315]);
LineSet253.coord = Coordinate255;

Shape252.geometry = LineSet253;

HAnimSegment248.children[1] = Shape252;

HAnimJoint247.children = new MFNode();

HAnimJoint247.children[0] = HAnimSegment248;

let HAnimJoint256 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint256.DEF = "hanim_l_tarsal_proximal_interphalangeal_1";
HAnimJoint256.name = "l_tarsal_proximal_interphalangeal_2";
HAnimJoint256.center = new SFVec3f(new float[3.7385,0.0054,5.5315]);
let HAnimSegment257 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment257.DEF = "hanim_l_tarsal_middle_phalanx_1";
HAnimSegment257.name = "l_tarsal_middle_phalanx_2";
let Transform258 = browser.currentScene.createNode("Transform");
Transform258.translation = new SFVec3f(new float[3.7385,0.0054,5.5315]);
let Transform259 = browser.currentScene.createNode("Transform");
let Shape260 = browser.currentScene.createNode("Shape");
Shape260.USE = "HAnimJointShape";
Transform259.child = new undefined();

Transform259.child[0] = Shape260;

Transform258.children = new MFNode();

Transform258.children[0] = Transform259;

HAnimSegment257.children = new MFNode();

HAnimSegment257.children[0] = Transform258;

let Shape261 = browser.currentScene.createNode("Shape");
let LineSet262 = browser.currentScene.createNode("LineSet");
LineSet262.vertexCount = new MFInt32(new int[2]);
let ColorRGBA263 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA263.USE = "HAnimSegmentLineColorRGBA";
LineSet262.color = ColorRGBA263;

let Coordinate264 = browser.currentScene.createNode("Coordinate");
Coordinate264.point = new MFVec3f(new float[3.7385,0.0054,5.5315,3.7385,0.0017,5.9505]);
LineSet262.coord = Coordinate264;

Shape261.geometry = LineSet262;

HAnimSegment257.children[1] = Shape261;

let HAnimSite265 = browser.currentScene.createNode("HAnimSite");
HAnimSite265.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite265.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite265.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
let TouchSensor266 = browser.currentScene.createNode("TouchSensor");
TouchSensor266.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite265.children = new MFNode();

HAnimSite265.children[0] = TouchSensor266;

let Shape267 = browser.currentScene.createNode("Shape");
Shape267.USE = "HAnimSiteShape";
HAnimSite265.children[1] = Shape267;

HAnimSegment257.children[2] = HAnimSite265;

HAnimJoint256.children = new MFNode();

HAnimJoint256.children[0] = HAnimSegment257;

let HAnimJoint268 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint268.DEF = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimJoint268.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint268.center = new SFVec3f(new float[3.7385,0.0017,5.9505]);
HAnimJoint256.children[1] = HAnimJoint268;

HAnimJoint247.children[1] = HAnimJoint256;

HAnimJoint238.children[1] = HAnimJoint247;

HAnimJoint229.children[1] = HAnimJoint238;

HAnimJoint178.children[2] = HAnimJoint229;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.DEF = "hanim_l_cuneonavicular_3";
HAnimJoint269.name = "l_cuneonavicular_3";
HAnimJoint269.center = new SFVec3f(new float[4.1235,0.0328,1.3453]);
let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.DEF = "hanim_l_cuneiform_3";
HAnimSegment270.name = "l_cuneiform_3";
let Transform271 = browser.currentScene.createNode("Transform");
Transform271.translation = new SFVec3f(new float[4.1235,0.0328,1.3453]);
let Transform272 = browser.currentScene.createNode("Transform");
let Shape273 = browser.currentScene.createNode("Shape");
Shape273.USE = "HAnimJointShape";
Transform272.child = new undefined();

Transform272.child[0] = Shape273;

Transform271.children = new MFNode();

Transform271.children[0] = Transform272;

HAnimSegment270.children = new MFNode();

HAnimSegment270.children[0] = Transform271;

let Shape274 = browser.currentScene.createNode("Shape");
let LineSet275 = browser.currentScene.createNode("LineSet");
LineSet275.vertexCount = new MFInt32(new int[2]);
let ColorRGBA276 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA276.USE = "HAnimSegmentLineColorRGBA";
LineSet275.color = ColorRGBA276;

let Coordinate277 = browser.currentScene.createNode("Coordinate");
Coordinate277.point = new MFVec3f(new float[4.1235,0.0328,1.3453,3.7385,0.0017,5.9505]);
LineSet275.coord = Coordinate277;

Shape274.geometry = LineSet275;

HAnimSegment270.children[1] = Shape274;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.DEF = "hanim_l_tarsometatarsal_3 ";
HAnimJoint278.name = "l_tarsometatarsal_3 ";
let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.DEF = "hanim_l_metatarsal_3";
HAnimSegment279.name = "l_metatarsal_3";
let Transform280 = browser.currentScene.createNode("Transform");
Transform280.translation = new SFVec3f(new float[4.1235,0.0328,1.3453]);
let Transform281 = browser.currentScene.createNode("Transform");
let Shape282 = browser.currentScene.createNode("Shape");
Shape282.USE = "HAnimJointShape";
Transform281.child = new undefined();

Transform281.child[0] = Shape282;

Transform280.children = new MFNode();

Transform280.children[0] = Transform281;

HAnimSegment279.children = new MFNode();

HAnimSegment279.children[0] = Transform280;

let Shape283 = browser.currentScene.createNode("Shape");
let LineSet284 = browser.currentScene.createNode("LineSet");
LineSet284.vertexCount = new MFInt32(new int[2]);
let ColorRGBA285 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA285.USE = "HAnimSegmentLineColorRGBA";
LineSet284.color = ColorRGBA285;

let Coordinate286 = browser.currentScene.createNode("Coordinate");
Coordinate286.point = new MFVec3f(new float[4.2795,0.0086,4.7055]);
LineSet284.coord = Coordinate286;

Shape283.geometry = LineSet284;

HAnimSegment279.children[1] = Shape283;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

let HAnimJoint287 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint287.DEF = "hanim_l_metatarsophalangeal_3";
HAnimJoint287.name = "l_metatarsophalangeal_3";
HAnimJoint287.center = new SFVec3f(new float[4.2795,0.0086,4.7055]);
let HAnimSegment288 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment288.DEF = "hanim_l_tarsal_proximal_phalanx_3";
HAnimSegment288.name = "l_tarsal_proximal_phalanx_3";
let Transform289 = browser.currentScene.createNode("Transform");
Transform289.translation = new SFVec3f(new float[4.2795,0.0086,4.7055]);
let Transform290 = browser.currentScene.createNode("Transform");
let Shape291 = browser.currentScene.createNode("Shape");
Shape291.USE = "HAnimJointShape";
Transform290.child = new undefined();

Transform290.child[0] = Shape291;

Transform289.children = new MFNode();

Transform289.children[0] = Transform290;

HAnimSegment288.children = new MFNode();

HAnimSegment288.children[0] = Transform289;

let Shape292 = browser.currentScene.createNode("Shape");
let LineSet293 = browser.currentScene.createNode("LineSet");
LineSet293.vertexCount = new MFInt32(new int[2]);
let ColorRGBA294 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA294.USE = "HAnimSegmentLineColorRGBA";
LineSet293.color = ColorRGBA294;

let Coordinate295 = browser.currentScene.createNode("Coordinate");
Coordinate295.point = new MFVec3f(new float[4.2795,0.0086,4.7055,4.3855,0.0044,5.3745]);
LineSet293.coord = Coordinate295;

Shape292.geometry = LineSet293;

HAnimSegment288.children[1] = Shape292;

HAnimJoint287.children = new MFNode();

HAnimJoint287.children[0] = HAnimSegment288;

let HAnimJoint296 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint296.DEF = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimJoint296.name = "l_tarsal_proximal_interphalangeal_3";
HAnimJoint296.center = new SFVec3f(new float[4.3855,0.0044,5.3745]);
let HAnimSegment297 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment297.DEF = "hanim_l_tarsal_middle_phalanx_2";
HAnimSegment297.name = "l_tarsal_middle_phalanx_3";
let Transform298 = browser.currentScene.createNode("Transform");
Transform298.translation = new SFVec3f(new float[4.3855,0.0044,5.3745]);
let Transform299 = browser.currentScene.createNode("Transform");
let Shape300 = browser.currentScene.createNode("Shape");
Shape300.USE = "HAnimJointShape";
Transform299.child = new undefined();

Transform299.child[0] = Shape300;

Transform298.children = new MFNode();

Transform298.children[0] = Transform299;

HAnimSegment297.children = new MFNode();

HAnimSegment297.children[0] = Transform298;

let Shape301 = browser.currentScene.createNode("Shape");
let LineSet302 = browser.currentScene.createNode("LineSet");
LineSet302.vertexCount = new MFInt32(new int[2]);
let ColorRGBA303 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA303.USE = "HAnimSegmentLineColorRGBA";
LineSet302.color = ColorRGBA303;

let Coordinate304 = browser.currentScene.createNode("Coordinate");
Coordinate304.point = new MFVec3f(new float[4.3855,0.0044,5.3745,4.4545,0.0017,5.7845]);
LineSet302.coord = Coordinate304;

Shape301.geometry = LineSet302;

HAnimSegment297.children[1] = Shape301;

let HAnimSite305 = browser.currentScene.createNode("HAnimSite");
HAnimSite305.DEF = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimSite305.name = "l_tarsal_distal_phalanx_3_tip";
let TouchSensor306 = browser.currentScene.createNode("TouchSensor");
TouchSensor306.description = "HAnimSite l_tarsal_distal_phalanx_3_tip";
HAnimSite305.children = new MFNode();

HAnimSite305.children[0] = TouchSensor306;

let Shape307 = browser.currentScene.createNode("Shape");
Shape307.USE = "HAnimSiteShape";
HAnimSite305.children[1] = Shape307;

HAnimSegment297.children[2] = HAnimSite305;

HAnimJoint296.children = new MFNode();

HAnimJoint296.children[0] = HAnimSegment297;

let HAnimJoint308 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint308.DEF = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimJoint308.name = "l_tarsal_distal_interphalangeal_3";
HAnimJoint308.center = new SFVec3f(new float[4.4545,0.0017,5.7845]);
HAnimJoint296.children[1] = HAnimJoint308;

HAnimJoint287.children[1] = HAnimJoint296;

HAnimJoint278.children[1] = HAnimJoint287;

HAnimJoint269.children[1] = HAnimJoint278;

HAnimJoint178.children[3] = HAnimJoint269;

HAnimJoint165.children[1] = HAnimJoint178;

let HAnimJoint309 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint309.DEF = "hanim_l_calcaneocuboid";
HAnimJoint309.name = "l_calcaneocuboid";
HAnimJoint309.center = new SFVec3f(new float[3.9515,0.0653,-0.6895]);
let HAnimSegment310 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment310.DEF = "hanim_l_calcaneus";
HAnimSegment310.name = "l_calcaneus";
let Transform311 = browser.currentScene.createNode("Transform");
Transform311.translation = new SFVec3f(new float[3.9515,0.0653,-0.6895]);
let Transform312 = browser.currentScene.createNode("Transform");
let Shape313 = browser.currentScene.createNode("Shape");
Shape313.USE = "HAnimJointShape";
Transform312.child = new undefined();

Transform312.child[0] = Shape313;

Transform311.children = new MFNode();

Transform311.children[0] = Transform312;

HAnimSegment310.children = new MFNode();

HAnimSegment310.children[0] = Transform311;

let Shape314 = browser.currentScene.createNode("Shape");
let LineSet315 = browser.currentScene.createNode("LineSet");
LineSet315.vertexCount = new MFInt32(new int[2]);
let ColorRGBA316 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA316.USE = "HAnimSegmentLineColorRGBA";
LineSet315.color = ColorRGBA316;

let Coordinate317 = browser.currentScene.createNode("Coordinate");
Coordinate317.point = new MFVec3f(new float[3.9515,0.0653,-0.6895,4.9085,0.0353,0.5574]);
LineSet315.coord = Coordinate317;

Shape314.geometry = LineSet315;

HAnimSegment310.children[1] = Shape314;

HAnimJoint309.children = new MFNode();

HAnimJoint309.children[0] = HAnimSegment310;

let HAnimJoint318 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint318.DEF = "hanim_l_transversetarsal";
HAnimJoint318.name = "l_transversetarsal";
HAnimJoint318.center = new SFVec3f(new float[4.9085,0.0353,0.5574]);
let HAnimSegment319 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment319.DEF = "hanim_l_cuboid";
HAnimSegment319.name = "l_cuboid";
let Transform320 = browser.currentScene.createNode("Transform");
Transform320.translation = new SFVec3f(new float[4.9085,0.0353,0.5574]);
let Transform321 = browser.currentScene.createNode("Transform");
let Shape322 = browser.currentScene.createNode("Shape");
Shape322.USE = "HAnimJointShape";
Transform321.child = new undefined();

Transform321.child[0] = Shape322;

Transform320.children = new MFNode();

Transform320.children[0] = Transform321;

HAnimSegment319.children = new MFNode();

HAnimSegment319.children[0] = Transform320;

let Shape323 = browser.currentScene.createNode("Shape");
let LineSet324 = browser.currentScene.createNode("LineSet");
LineSet324.vertexCount = new MFInt32(new int[2]);
let ColorRGBA325 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA325.USE = "HAnimSegmentLineColorRGBA";
LineSet324.color = ColorRGBA325;

let Coordinate326 = browser.currentScene.createNode("Coordinate");
Coordinate326.point = new MFVec3f(new float[4.9085,0.0353,0.5574,4.7245,0.0211,2.1725]);
LineSet324.coord = Coordinate326;

Shape323.geometry = LineSet324;

HAnimSegment319.children[1] = Shape323;

let Shape327 = browser.currentScene.createNode("Shape");
let LineSet328 = browser.currentScene.createNode("LineSet");
LineSet328.vertexCount = new MFInt32(new int[2]);
let ColorRGBA329 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA329.USE = "HAnimSegmentLineColorRGBA";
LineSet328.color = ColorRGBA329;

let Coordinate330 = browser.currentScene.createNode("Coordinate");
Coordinate330.point = new MFVec3f(new float[4.9085,0.0353,0.5574,5.3615,0.0164,2.0085]);
LineSet328.coord = Coordinate330;

Shape327.geometry = LineSet328;

HAnimSegment319.children[2] = Shape327;

HAnimJoint318.children = new MFNode();

HAnimJoint318.children[0] = HAnimSegment319;

let HAnimJoint331 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint331.DEF = "hanim_l_tarsometatarsal_3";
HAnimJoint331.name = "l_tarsometatarsal_4";
HAnimJoint331.center = new SFVec3f(new float[4.7245,0.0211,2.1725]);
let HAnimSegment332 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment332.DEF = "hanim_l_metatarsal_4";
HAnimSegment332.name = "l_metatarsal_4";
let Transform333 = browser.currentScene.createNode("Transform");
Transform333.translation = new SFVec3f(new float[4.7245,0.0211,2.1725]);
let Transform334 = browser.currentScene.createNode("Transform");
let Shape335 = browser.currentScene.createNode("Shape");
Shape335.USE = "HAnimJointShape";
Transform334.child = new undefined();

Transform334.child[0] = Shape335;

Transform333.children = new MFNode();

Transform333.children[0] = Transform334;

HAnimSegment332.children = new MFNode();

HAnimSegment332.children[0] = Transform333;

let Shape336 = browser.currentScene.createNode("Shape");
let LineSet337 = browser.currentScene.createNode("LineSet");
LineSet337.vertexCount = new MFInt32(new int[2]);
let ColorRGBA338 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA338.USE = "HAnimSegmentLineColorRGBA";
LineSet337.color = ColorRGBA338;

let Coordinate339 = browser.currentScene.createNode("Coordinate");
Coordinate339.point = new MFVec3f(new float[4.7245,0.0211,2.1725,4.8745,0.0076,4.5165]);
LineSet337.coord = Coordinate339;

Shape336.geometry = LineSet337;

HAnimSegment332.children[1] = Shape336;

HAnimJoint331.children = new MFNode();

HAnimJoint331.children[0] = HAnimSegment332;

let HAnimJoint340 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint340.DEF = "hanim_l_metatarsophalangeal_4";
HAnimJoint340.name = "l_metatarsophalangeal_4";
HAnimJoint340.center = new SFVec3f(new float[4.8745,0.0076,4.5165]);
let HAnimSegment341 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment341.DEF = "hanim_l_tarsal_proximal_phalanx_4";
HAnimSegment341.name = "l_tarsal_proximal_phalanx_4";
let Transform342 = browser.currentScene.createNode("Transform");
Transform342.translation = new SFVec3f(new float[4.8745,0.0076,4.5165]);
let Transform343 = browser.currentScene.createNode("Transform");
let Shape344 = browser.currentScene.createNode("Shape");
Shape344.USE = "HAnimJointShape";
Transform343.child = new undefined();

Transform343.child[0] = Shape344;

Transform342.children = new MFNode();

Transform342.children[0] = Transform343;

HAnimSegment341.children = new MFNode();

HAnimSegment341.children[0] = Transform342;

let Shape345 = browser.currentScene.createNode("Shape");
let LineSet346 = browser.currentScene.createNode("LineSet");
LineSet346.vertexCount = new MFInt32(new int[2]);
let ColorRGBA347 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA347.USE = "HAnimSegmentLineColorRGBA";
LineSet346.color = ColorRGBA347;

let Coordinate348 = browser.currentScene.createNode("Coordinate");
Coordinate348.point = new MFVec3f(new float[4.8745,0.0076,4.5165,5.0655,0.0049,5.1895]);
LineSet346.coord = Coordinate348;

Shape345.geometry = LineSet346;

HAnimSegment341.children[1] = Shape345;

HAnimJoint340.children = new MFNode();

HAnimJoint340.children[0] = HAnimSegment341;

let HAnimJoint349 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint349.DEF = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimJoint349.name = "l_tarsal_proximal_interphalangeal_4";
HAnimJoint349.center = new SFVec3f(new float[5.0655,0.0049,5.1895]);
let HAnimSegment350 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment350.DEF = "hanim_l_tarsal_middle_phalanx_3";
HAnimSegment350.name = "l_tarsal_middle_phalanx_4";
let Transform351 = browser.currentScene.createNode("Transform");
Transform351.translation = new SFVec3f(new float[5.0655,0.0049,5.1895]);
let Transform352 = browser.currentScene.createNode("Transform");
let Shape353 = browser.currentScene.createNode("Shape");
Shape353.USE = "HAnimJointShape";
Transform352.child = new undefined();

Transform352.child[0] = Shape353;

Transform351.children = new MFNode();

Transform351.children[0] = Transform352;

HAnimSegment350.children = new MFNode();

HAnimSegment350.children[0] = Transform351;

let Shape354 = browser.currentScene.createNode("Shape");
let LineSet355 = browser.currentScene.createNode("LineSet");
LineSet355.vertexCount = new MFInt32(new int[2]);
let ColorRGBA356 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA356.USE = "HAnimSegmentLineColorRGBA";
LineSet355.color = ColorRGBA356;

let Coordinate357 = browser.currentScene.createNode("Coordinate");
Coordinate357.point = new MFVec3f(new float[5.0655,0.0049,5.1895,5.1325,0.0011,5.5175]);
LineSet355.coord = Coordinate357;

Shape354.geometry = LineSet355;

HAnimSegment350.children[1] = Shape354;

let HAnimSite358 = browser.currentScene.createNode("HAnimSite");
HAnimSite358.DEF = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimSite358.name = "l_tarsal_distal_phalanx_4_tip";
let TouchSensor359 = browser.currentScene.createNode("TouchSensor");
TouchSensor359.description = "HAnimSite l_tarsal_distal_phalanx_4_tip";
HAnimSite358.children = new MFNode();

HAnimSite358.children[0] = TouchSensor359;

let Shape360 = browser.currentScene.createNode("Shape");
Shape360.USE = "HAnimSiteShape";
HAnimSite358.children[1] = Shape360;

HAnimSegment350.children[2] = HAnimSite358;

HAnimJoint349.children = new MFNode();

HAnimJoint349.children[0] = HAnimSegment350;

let HAnimJoint361 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint361.DEF = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimJoint361.name = "l_tarsal_distal_interphalangeal_4";
HAnimJoint361.center = new SFVec3f(new float[5.1325,0.0011,5.5175]);
HAnimJoint349.children[1] = HAnimJoint361;

HAnimJoint340.children[1] = HAnimJoint349;

HAnimJoint331.children[1] = HAnimJoint340;

HAnimJoint318.children[1] = HAnimJoint331;

let HAnimJoint362 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint362.DEF = "hanim_l_tarsometatarsal_4";
HAnimJoint362.name = "l_tarsometatarsal_5";
HAnimJoint362.center = new SFVec3f(new float[5.3615,0.0164,2.0085]);
let HAnimSegment363 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment363.DEF = "hanim_l_metatarsal_5";
HAnimSegment363.name = "l_metatarsal_5";
let Transform364 = browser.currentScene.createNode("Transform");
Transform364.translation = new SFVec3f(new float[5.3615,0.0164,2.0085]);
let Transform365 = browser.currentScene.createNode("Transform");
let Shape366 = browser.currentScene.createNode("Shape");
Shape366.USE = "HAnimJointShape";
Transform365.child = new undefined();

Transform365.child[0] = Shape366;

Transform364.children = new MFNode();

Transform364.children[0] = Transform365;

HAnimSegment363.children = new MFNode();

HAnimSegment363.children[0] = Transform364;

let Shape367 = browser.currentScene.createNode("Shape");
let LineSet368 = browser.currentScene.createNode("LineSet");
LineSet368.vertexCount = new MFInt32(new int[2]);
let ColorRGBA369 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA369.USE = "HAnimSegmentLineColorRGBA";
LineSet368.color = ColorRGBA369;

let Coordinate370 = browser.currentScene.createNode("Coordinate");
Coordinate370.point = new MFVec3f(new float[5.3615,0.0164,2.0085,5.5055,0.0067,4.3115]);
LineSet368.coord = Coordinate370;

Shape367.geometry = LineSet368;

HAnimSegment363.children[1] = Shape367;

let HAnimSite371 = browser.currentScene.createNode("HAnimSite");
HAnimSite371.DEF = "hanim_l_metatarsal_phalanx_5_pt";
HAnimSite371.name = "l_metatarsal_phalanx_5_pt";
let TouchSensor372 = browser.currentScene.createNode("TouchSensor");
TouchSensor372.description = "HAnimSite l_metatarsal_phalanx_5_pt";
HAnimSite371.children = new MFNode();

HAnimSite371.children[0] = TouchSensor372;

let Shape373 = browser.currentScene.createNode("Shape");
Shape373.USE = "HAnimSiteShape";
HAnimSite371.children[1] = Shape373;

HAnimSegment363.children[2] = HAnimSite371;

HAnimJoint362.children = new MFNode();

HAnimJoint362.children[0] = HAnimSegment363;

let HAnimJoint374 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint374.DEF = "hanim_l_metatarsophalangeal_5";
HAnimJoint374.name = "l_metatarsophalangeal_5";
HAnimJoint374.center = new SFVec3f(new float[5.5055,0.0067,4.3115]);
let HAnimSegment375 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment375.DEF = "hanim_l_tarsal_proximal_phalanx_5";
HAnimSegment375.name = "l_tarsal_proximal_phalanx_5";
let Transform376 = browser.currentScene.createNode("Transform");
Transform376.translation = new SFVec3f(new float[5.5055,0.0067,4.3115]);
let Transform377 = browser.currentScene.createNode("Transform");
let Shape378 = browser.currentScene.createNode("Shape");
Shape378.USE = "HAnimJointShape";
Transform377.child = new undefined();

Transform377.child[0] = Shape378;

Transform376.children = new MFNode();

Transform376.children[0] = Transform377;

HAnimSegment375.children = new MFNode();

HAnimSegment375.children[0] = Transform376;

let Shape379 = browser.currentScene.createNode("Shape");
let LineSet380 = browser.currentScene.createNode("LineSet");
LineSet380.vertexCount = new MFInt32(new int[2]);
let ColorRGBA381 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA381.USE = "HAnimSegmentLineColorRGBA";
LineSet380.color = ColorRGBA381;

let Coordinate382 = browser.currentScene.createNode("Coordinate");
Coordinate382.point = new MFVec3f(new float[5.5055,0.0067,4.3115,5.6085,0.003,4.6485]);
LineSet380.coord = Coordinate382;

Shape379.geometry = LineSet380;

HAnimSegment375.children[1] = Shape379;

HAnimJoint374.children = new MFNode();

HAnimJoint374.children[0] = HAnimSegment375;

let HAnimJoint383 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint383.DEF = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimJoint383.name = "l_tarsal_proximal_interphalangeal_5";
HAnimJoint383.center = new SFVec3f(new float[5.6085,0.003,4.6485]);
let HAnimSegment384 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment384.DEF = "hanim_l_tarsal_middle_phalanx_4";
HAnimSegment384.name = "l_tarsal_middle_phalanx_5";
let Transform385 = browser.currentScene.createNode("Transform");
Transform385.translation = new SFVec3f(new float[5.6085,0.003,4.6485]);
let Transform386 = browser.currentScene.createNode("Transform");
let Shape387 = browser.currentScene.createNode("Shape");
Shape387.USE = "HAnimJointShape";
Transform386.child = new undefined();

Transform386.child[0] = Shape387;

Transform385.children = new MFNode();

Transform385.children[0] = Transform386;

HAnimSegment384.children = new MFNode();

HAnimSegment384.children[0] = Transform385;

let Shape388 = browser.currentScene.createNode("Shape");
let LineSet389 = browser.currentScene.createNode("LineSet");
LineSet389.vertexCount = new MFInt32(new int[2]);
let ColorRGBA390 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA390.USE = "HAnimSegmentLineColorRGBA";
LineSet389.color = ColorRGBA390;

let Coordinate391 = browser.currentScene.createNode("Coordinate");
Coordinate391.point = new MFVec3f(new float[5.6085,0.003,4.6485,5.6485,0,4.9925]);
LineSet389.coord = Coordinate391;

Shape388.geometry = LineSet389;

HAnimSegment384.children[1] = Shape388;

let HAnimSite392 = browser.currentScene.createNode("HAnimSite");
HAnimSite392.DEF = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimSite392.name = "l_tarsal_distal_phalanx_5_tip";
let TouchSensor393 = browser.currentScene.createNode("TouchSensor");
TouchSensor393.description = "HAnimSite l_tarsal_distal_phalanx_5_tip";
HAnimSite392.children = new MFNode();

HAnimSite392.children[0] = TouchSensor393;

let Shape394 = browser.currentScene.createNode("Shape");
Shape394.USE = "HAnimSiteShape";
HAnimSite392.children[1] = Shape394;

HAnimSegment384.children[2] = HAnimSite392;

HAnimJoint383.children = new MFNode();

HAnimJoint383.children[0] = HAnimSegment384;

let HAnimJoint395 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint395.DEF = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimJoint395.name = "l_tarsal_distal_interphalangeal_5";
HAnimJoint395.center = new SFVec3f(new float[5.6485,0,4.9925]);
HAnimJoint383.children[1] = HAnimJoint395;

HAnimJoint374.children[1] = HAnimJoint383;

HAnimJoint362.children[1] = HAnimJoint374;

HAnimJoint318.children[2] = HAnimJoint362;

HAnimJoint309.children[1] = HAnimJoint318;

HAnimJoint165.children[2] = HAnimJoint309;

HAnimJoint150.children[1] = HAnimJoint165;

HAnimJoint132.children[1] = HAnimJoint150;

HAnimJoint95.children[1] = HAnimJoint132;

let HAnimJoint396 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint396.DEF = "hanim_r_hip";
HAnimJoint396.name = "r_hip";
HAnimJoint396.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let HAnimSegment397 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment397.DEF = "hanim_r_thigh";
HAnimSegment397.name = "r_thigh";
let Transform398 = browser.currentScene.createNode("Transform");
Transform398.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let Transform399 = browser.currentScene.createNode("Transform");
let Shape400 = browser.currentScene.createNode("Shape");
Shape400.USE = "HAnimJointShape";
Transform399.child = new undefined();

Transform399.child[0] = Shape400;

Transform398.children = new MFNode();

Transform398.children[0] = Transform399;

HAnimSegment397.children = new MFNode();

HAnimSegment397.children[0] = Transform398;

let Shape401 = browser.currentScene.createNode("Shape");
let LineSet402 = browser.currentScene.createNode("LineSet");
LineSet402.vertexCount = new MFInt32(new int[2]);
let ColorRGBA403 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA403.USE = "HAnimSegmentLineColorRGBA";
LineSet402.color = ColorRGBA403;

let Coordinate404 = browser.currentScene.createNode("Coordinate");
Coordinate404.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet402.coord = Coordinate404;

Shape401.geometry = LineSet402;

HAnimSegment397.children[1] = Shape401;

let HAnimSite405 = browser.currentScene.createNode("HAnimSite");
HAnimSite405.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite405.name = "r_lateral_malleolus_pt";
HAnimSite405.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
let TouchSensor406 = browser.currentScene.createNode("TouchSensor");
TouchSensor406.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite405.children = new MFNode();

HAnimSite405.children[0] = TouchSensor406;

let Shape407 = browser.currentScene.createNode("Shape");
Shape407.USE = "HAnimSiteShape";
HAnimSite405.children[1] = Shape407;

HAnimSegment397.children[2] = HAnimSite405;

let HAnimSite408 = browser.currentScene.createNode("HAnimSite");
HAnimSite408.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite408.name = "r_medial_malleolus_pt";
HAnimSite408.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
let TouchSensor409 = browser.currentScene.createNode("TouchSensor");
TouchSensor409.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite408.children = new MFNode();

HAnimSite408.children[0] = TouchSensor409;

let Shape410 = browser.currentScene.createNode("Shape");
Shape410.USE = "HAnimSiteShape";
HAnimSite408.children[1] = Shape410;

HAnimSegment397.children[3] = HAnimSite408;

let HAnimSite411 = browser.currentScene.createNode("HAnimSite");
HAnimSite411.DEF = "hanim_r_tibiale_pt";
HAnimSite411.name = "r_tibiale_pt";
let TouchSensor412 = browser.currentScene.createNode("TouchSensor");
TouchSensor412.description = "HAnimSite r_tibiale_pt";
HAnimSite411.children = new MFNode();

HAnimSite411.children[0] = TouchSensor412;

let Shape413 = browser.currentScene.createNode("Shape");
Shape413.USE = "HAnimSiteShape";
HAnimSite411.children[1] = Shape413;

HAnimSegment397.children[4] = HAnimSite411;

HAnimJoint396.children = new MFNode();

HAnimJoint396.children[0] = HAnimSegment397;

let HAnimJoint414 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint414.DEF = "hanim_r_knee";
HAnimJoint414.name = "r_knee";
HAnimJoint414.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let HAnimSegment415 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment415.DEF = "hanim_r_calf";
HAnimSegment415.name = "r_calf";
let Transform416 = browser.currentScene.createNode("Transform");
Transform416.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let Transform417 = browser.currentScene.createNode("Transform");
let Shape418 = browser.currentScene.createNode("Shape");
Shape418.USE = "HAnimJointShape";
Transform417.child = new undefined();

Transform417.child[0] = Shape418;

Transform416.children = new MFNode();

Transform416.children[0] = Transform417;

HAnimSegment415.children = new MFNode();

HAnimSegment415.children[0] = Transform416;

let Shape419 = browser.currentScene.createNode("Shape");
let LineSet420 = browser.currentScene.createNode("LineSet");
LineSet420.vertexCount = new MFInt32(new int[2]);
let ColorRGBA421 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA421.USE = "HAnimSegmentLineColorRGBA";
LineSet420.color = ColorRGBA421;

let Coordinate422 = browser.currentScene.createNode("Coordinate");
Coordinate422.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet420.coord = Coordinate422;

Shape419.geometry = LineSet420;

HAnimSegment415.children[1] = Shape419;

let HAnimSite423 = browser.currentScene.createNode("HAnimSite");
HAnimSite423.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite423.name = "r_calcaneus_posterior_pt";
HAnimSite423.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
let TouchSensor424 = browser.currentScene.createNode("TouchSensor");
TouchSensor424.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite423.children = new MFNode();

HAnimSite423.children[0] = TouchSensor424;

let Shape425 = browser.currentScene.createNode("Shape");
Shape425.USE = "HAnimSiteShape";
HAnimSite423.children[1] = Shape425;

HAnimSegment415.children[2] = HAnimSite423;

let HAnimSite426 = browser.currentScene.createNode("HAnimSite");
HAnimSite426.DEF = "hanim_r_sphyrion_pt";
HAnimSite426.name = "r_sphyrion_pt";
HAnimSite426.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
let TouchSensor427 = browser.currentScene.createNode("TouchSensor");
TouchSensor427.description = "HAnimSite r_sphyrion_pt";
HAnimSite426.children = new MFNode();

HAnimSite426.children[0] = TouchSensor427;

let Shape428 = browser.currentScene.createNode("Shape");
Shape428.USE = "HAnimSiteShape";
HAnimSite426.children[1] = Shape428;

HAnimSegment415.children[3] = HAnimSite426;

HAnimJoint414.children = new MFNode();

HAnimJoint414.children[0] = HAnimSegment415;

let HAnimJoint429 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint429.DEF = "hanim_r_talocrural";
HAnimJoint429.name = "r_talocrural";
HAnimJoint429.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let HAnimSegment430 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment430.DEF = "hanim_r_talus";
HAnimSegment430.name = "r_talus";
let Transform431 = browser.currentScene.createNode("Transform");
Transform431.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform431.rotation = new SFRotation(new float[1,0,0,-1.57]);
Transform431.scale = new SFVec3f(new float[0.15,0.15,0.15]);
let Transform432 = browser.currentScene.createNode("Transform");
let Shape433 = browser.currentScene.createNode("Shape");
Shape433.USE = "HAnimJointShape";
Transform432.child = new undefined();

Transform432.child[0] = Shape433;

Transform431.children = new MFNode();

Transform431.children[0] = Transform432;

HAnimSegment430.children = new MFNode();

HAnimSegment430.children[0] = Transform431;

let Shape434 = browser.currentScene.createNode("Shape");
let LineSet435 = browser.currentScene.createNode("LineSet");
LineSet435.vertexCount = new MFInt32(new int[2]);
let ColorRGBA436 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA436.USE = "HAnimSegmentLineColorRGBA";
LineSet435.color = ColorRGBA436;

let Coordinate437 = browser.currentScene.createNode("Coordinate");
Coordinate437.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-3.4725,0.0374,0.6807]);
LineSet435.coord = Coordinate437;

Shape434.geometry = LineSet435;

HAnimSegment430.children[1] = Shape434;

let Shape438 = browser.currentScene.createNode("Shape");
let LineSet439 = browser.currentScene.createNode("LineSet");
LineSet439.vertexCount = new MFInt32(new int[2]);
let ColorRGBA440 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA440.USE = "HAnimSegmentLineColorRGBA";
LineSet439.color = ColorRGBA440;

let Coordinate441 = browser.currentScene.createNode("Coordinate");
Coordinate441.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-3.9515,0.0653,-0.6895]);
LineSet439.coord = Coordinate441;

Shape438.geometry = LineSet439;

HAnimSegment430.children[2] = Shape438;

HAnimJoint429.children = new MFNode();

HAnimJoint429.children[0] = HAnimSegment430;

let HAnimJoint442 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint442.DEF = "hanim_r_talocalcaneonavicular";
HAnimJoint442.name = "r_talocalcaneonavicular";
HAnimJoint442.center = new SFVec3f(new float[-3.4725,0.0374,0.6807]);
let HAnimSegment443 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment443.DEF = "hanim_r_navicular";
HAnimSegment443.name = "r_navicular";
let Transform444 = browser.currentScene.createNode("Transform");
Transform444.translation = new SFVec3f(new float[-3.4725,0.0374,0.6807]);
let Transform445 = browser.currentScene.createNode("Transform");
let Shape446 = browser.currentScene.createNode("Shape");
Shape446.USE = "HAnimJointShape";
Transform445.child = new undefined();

Transform445.child[0] = Shape446;

Transform444.children = new MFNode();

Transform444.children[0] = Transform445;

HAnimSegment443.children = new MFNode();

HAnimSegment443.children[0] = Transform444;

let Shape447 = browser.currentScene.createNode("Shape");
let LineSet448 = browser.currentScene.createNode("LineSet");
LineSet448.vertexCount = new MFInt32(new int[2]);
let ColorRGBA449 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA449.USE = "HAnimSegmentLineColorRGBA";
LineSet448.color = ColorRGBA449;

let Coordinate450 = browser.currentScene.createNode("Coordinate");
Coordinate450.point = new MFVec3f(new float[-3.4725,0.0374,0.6807,-2.9855,0.0311,1.2819]);
LineSet448.coord = Coordinate450;

Shape447.geometry = LineSet448;

HAnimSegment443.children[1] = Shape447;

let Shape451 = browser.currentScene.createNode("Shape");
let LineSet452 = browser.currentScene.createNode("LineSet");
LineSet452.vertexCount = new MFInt32(new int[2]);
let ColorRGBA453 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA453.USE = "HAnimSegmentLineColorRGBA";
LineSet452.color = ColorRGBA453;

let Coordinate454 = browser.currentScene.createNode("Coordinate");
Coordinate454.point = new MFVec3f(new float[-3.4725,0.0374,0.6807,-3.6105,0.033,1.4168]);
LineSet452.coord = Coordinate454;

Shape451.geometry = LineSet452;

HAnimSegment443.children[2] = Shape451;

let Shape455 = browser.currentScene.createNode("Shape");
let LineSet456 = browser.currentScene.createNode("LineSet");
LineSet456.vertexCount = new MFInt32(new int[2]);
let ColorRGBA457 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA457.USE = "HAnimSegmentLineColorRGBA";
LineSet456.color = ColorRGBA457;

let Coordinate458 = browser.currentScene.createNode("Coordinate");
Coordinate458.point = new MFVec3f(new float[-3.4725,0.0374,0.6807,-4.1245,0.0328,1.3453]);
LineSet456.coord = Coordinate458;

Shape455.geometry = LineSet456;

HAnimSegment443.children[3] = Shape455;

HAnimJoint442.children = new MFNode();

HAnimJoint442.children[0] = HAnimSegment443;

let HAnimJoint459 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint459.DEF = "hanim_r_cuneonavicular_1";
HAnimJoint459.name = "r_cuneonavicular_1";
HAnimJoint459.center = new SFVec3f(new float[-2.9855,0.0311,1.2819]);
let HAnimSegment460 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment460.DEF = "hanim_r_cuneiform_1";
HAnimSegment460.name = "r_cuneiform_1";
let Transform461 = browser.currentScene.createNode("Transform");
Transform461.translation = new SFVec3f(new float[-2.9855,0.0311,1.2819]);
let Transform462 = browser.currentScene.createNode("Transform");
let Shape463 = browser.currentScene.createNode("Shape");
Shape463.USE = "HAnimJointShape";
Transform462.child = new undefined();

Transform462.child[0] = Shape463;

Transform461.children = new MFNode();

Transform461.children[0] = Transform462;

HAnimSegment460.children = new MFNode();

HAnimSegment460.children[0] = Transform461;

let Shape464 = browser.currentScene.createNode("Shape");
let LineSet465 = browser.currentScene.createNode("LineSet");
LineSet465.vertexCount = new MFInt32(new int[2]);
let ColorRGBA466 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA466.USE = "HAnimSegmentLineColorRGBA";
LineSet465.color = ColorRGBA466;

let Coordinate467 = browser.currentScene.createNode("Coordinate");
Coordinate467.point = new MFVec3f(new float[-2.9855,0.0311,1.2819,-2.8645,0.0194,2.4285]);
LineSet465.coord = Coordinate467;

Shape464.geometry = LineSet465;

HAnimSegment460.children[1] = Shape464;

HAnimJoint459.children = new MFNode();

HAnimJoint459.children[0] = HAnimSegment460;

let HAnimJoint468 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint468.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint468.name = "r_tarsometatarsal_1";
HAnimJoint468.center = new SFVec3f(new float[-2.8645,0.0194,2.4285]);
let HAnimSegment469 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment469.DEF = "hanim_r_metatarsal_1";
HAnimSegment469.name = "r_metatarsal_1";
let Transform470 = browser.currentScene.createNode("Transform");
Transform470.translation = new SFVec3f(new float[-2.8645,0.0194,2.4285]);
let Transform471 = browser.currentScene.createNode("Transform");
let Shape472 = browser.currentScene.createNode("Shape");
Shape472.USE = "HAnimJointShape";
Transform471.child = new undefined();

Transform471.child[0] = Shape472;

Transform470.children = new MFNode();

Transform470.children[0] = Transform471;

HAnimSegment469.children = new MFNode();

HAnimSegment469.children[0] = Transform470;

let Shape473 = browser.currentScene.createNode("Shape");
let LineSet474 = browser.currentScene.createNode("LineSet");
LineSet474.vertexCount = new MFInt32(new int[2]);
let ColorRGBA475 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA475.USE = "HAnimSegmentLineColorRGBA";
LineSet474.color = ColorRGBA475;

let Coordinate476 = browser.currentScene.createNode("Coordinate");
Coordinate476.point = new MFVec3f(new float[-2.8645,0.0194,2.4285,-2.7535,0.0077,4.6255]);
LineSet474.coord = Coordinate476;

Shape473.geometry = LineSet474;

HAnimSegment469.children[1] = Shape473;

let HAnimSite477 = browser.currentScene.createNode("HAnimSite");
HAnimSite477.DEF = "hanim_r_metatarsal_phalanx_1_pt";
HAnimSite477.name = "r_metatarsal_phalanx_1_pt";
let TouchSensor478 = browser.currentScene.createNode("TouchSensor");
TouchSensor478.description = "HAnimSite r_metatarsal_phalanx_1_pt";
HAnimSite477.children = new MFNode();

HAnimSite477.children[0] = TouchSensor478;

let Shape479 = browser.currentScene.createNode("Shape");
Shape479.USE = "HAnimSiteShape";
HAnimSite477.children[1] = Shape479;

HAnimSegment469.children[2] = HAnimSite477;

HAnimJoint468.children = new MFNode();

HAnimJoint468.children[0] = HAnimSegment469;

let HAnimJoint480 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint480.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint480.name = "r_metatarsophalangeal_1";
HAnimJoint480.center = new SFVec3f(new float[-2.7535,0.0077,4.6255]);
let HAnimSegment481 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment481.DEF = "hanim_r_tarsal_proximal_phalanx_1";
HAnimSegment481.name = "r_tarsal_proximal_phalanx_1";
let Transform482 = browser.currentScene.createNode("Transform");
Transform482.translation = new SFVec3f(new float[-2.7535,0.0077,4.6255]);
let Transform483 = browser.currentScene.createNode("Transform");
let Shape484 = browser.currentScene.createNode("Shape");
Shape484.USE = "HAnimJointShape";
Transform483.child = new undefined();

Transform483.child[0] = Shape484;

Transform482.children = new MFNode();

Transform482.children[0] = Transform483;

HAnimSegment481.children = new MFNode();

HAnimSegment481.children[0] = Transform482;

let Shape485 = browser.currentScene.createNode("Shape");
let LineSet486 = browser.currentScene.createNode("LineSet");
LineSet486.vertexCount = new MFInt32(new int[2]);
let ColorRGBA487 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA487.USE = "HAnimSegmentLineColorRGBA";
LineSet486.color = ColorRGBA487;

let Coordinate488 = browser.currentScene.createNode("Coordinate");
Coordinate488.point = new MFVec3f(new float[-2.7535,0.0077,4.6255,-2.7535,0.0077,4.6255]);
LineSet486.coord = Coordinate488;

Shape485.geometry = LineSet486;

HAnimSegment481.children[1] = Shape485;

let HAnimSite489 = browser.currentScene.createNode("HAnimSite");
HAnimSite489.DEF = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimSite489.name = "r_tarsal_distal_phalanx_1_tip";
let TouchSensor490 = browser.currentScene.createNode("TouchSensor");
TouchSensor490.description = "HAnimSite r_tarsal_distal_phalanx_1_tip";
HAnimSite489.children = new MFNode();

HAnimSite489.children[0] = TouchSensor490;

let Shape491 = browser.currentScene.createNode("Shape");
Shape491.USE = "HAnimSiteShape";
HAnimSite489.children[1] = Shape491;

HAnimSegment481.children[2] = HAnimSite489;

HAnimJoint480.children = new MFNode();

HAnimJoint480.children[0] = HAnimSegment481;

let HAnimJoint492 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint492.DEF = "hanim_r_tarsal_interphalangeal_1";
HAnimJoint492.name = "r_tarsal_interphalangeal_1";
HAnimJoint480.children[1] = HAnimJoint492;

HAnimJoint468.children[1] = HAnimJoint480;

HAnimJoint459.children[1] = HAnimJoint468;

HAnimJoint442.children[1] = HAnimJoint459;

let HAnimJoint493 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint493.DEF = "hanim_r_cuneonavicular_2";
HAnimJoint493.name = "r_cuneonavicular_2";
HAnimJoint493.center = new SFVec3f(new float[-3.6105,0.033,1.4168]);
let HAnimSegment494 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment494.DEF = "hanim_r_cuneiform_2";
HAnimSegment494.name = "r_cuneiform_2";
let Transform495 = browser.currentScene.createNode("Transform");
Transform495.translation = new SFVec3f(new float[-3.6105,0.033,1.4168]);
let Transform496 = browser.currentScene.createNode("Transform");
let Shape497 = browser.currentScene.createNode("Shape");
Shape497.USE = "HAnimJointShape";
Transform496.child = new undefined();

Transform496.child[0] = Shape497;

Transform495.children = new MFNode();

Transform495.children[0] = Transform496;

HAnimSegment494.children = new MFNode();

HAnimSegment494.children[0] = Transform495;

let Shape498 = browser.currentScene.createNode("Shape");
let LineSet499 = browser.currentScene.createNode("LineSet");
LineSet499.vertexCount = new MFInt32(new int[2]);
let ColorRGBA500 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA500.USE = "HAnimSegmentLineColorRGBA";
LineSet499.color = ColorRGBA500;

let Coordinate501 = browser.currentScene.createNode("Coordinate");
Coordinate501.point = new MFVec3f(new float[-3.6105,0.033,1.4168,-3.5565,0.0232,2.2895]);
LineSet499.coord = Coordinate501;

Shape498.geometry = LineSet499;

HAnimSegment494.children[1] = Shape498;

HAnimJoint493.children = new MFNode();

HAnimJoint493.children[0] = HAnimSegment494;

let HAnimJoint502 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint502.DEF = "hanim_r_tarsometatarsal_2";
HAnimJoint502.name = "r_tarsometatarsal_2";
HAnimJoint502.center = new SFVec3f(new float[-3.5565,0.0232,2.2895]);
let HAnimSegment503 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment503.DEF = "hanim_r_metatarsal_2";
HAnimSegment503.name = "r_metatarsal_2";
let Transform504 = browser.currentScene.createNode("Transform");
Transform504.translation = new SFVec3f(new float[-3.5565,0.0232,2.2895]);
let Transform505 = browser.currentScene.createNode("Transform");
let Shape506 = browser.currentScene.createNode("Shape");
Shape506.USE = "HAnimJointShape";
Transform505.child = new undefined();

Transform505.child[0] = Shape506;

Transform504.children = new MFNode();

Transform504.children[0] = Transform505;

HAnimSegment503.children = new MFNode();

HAnimSegment503.children[0] = Transform504;

let Shape507 = browser.currentScene.createNode("Shape");
let LineSet508 = browser.currentScene.createNode("LineSet");
LineSet508.vertexCount = new MFInt32(new int[2]);
let ColorRGBA509 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA509.USE = "HAnimSegmentLineColorRGBA";
LineSet508.color = ColorRGBA509;

let Coordinate510 = browser.currentScene.createNode("Coordinate");
Coordinate510.point = new MFVec3f(new float[-3.5565,0.0232,2.2895,-3.6595,0.0085,4.8125]);
LineSet508.coord = Coordinate510;

Shape507.geometry = LineSet508;

HAnimSegment503.children[1] = Shape507;

HAnimJoint502.children = new MFNode();

HAnimJoint502.children[0] = HAnimSegment503;

let HAnimJoint511 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint511.DEF = "hanim_r_metatarsophalangeal_2";
HAnimJoint511.name = "r_metatarsophalangeal_2";
HAnimJoint511.center = new SFVec3f(new float[-3.6595,0.0085,4.8125]);
let HAnimSegment512 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment512.DEF = "hanim_r_tarsal_proximal_phalanx_2";
HAnimSegment512.name = "r_tarsal_proximal_phalanx_2";
let Transform513 = browser.currentScene.createNode("Transform");
Transform513.translation = new SFVec3f(new float[-3.6595,0.0085,4.8125]);
let Transform514 = browser.currentScene.createNode("Transform");
let Shape515 = browser.currentScene.createNode("Shape");
Shape515.USE = "HAnimJointShape";
Transform514.child = new undefined();

Transform514.child[0] = Shape515;

Transform513.children = new MFNode();

Transform513.children[0] = Transform514;

HAnimSegment512.children = new MFNode();

HAnimSegment512.children[0] = Transform513;

let Shape516 = browser.currentScene.createNode("Shape");
let LineSet517 = browser.currentScene.createNode("LineSet");
LineSet517.vertexCount = new MFInt32(new int[2]);
let ColorRGBA518 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA518.USE = "HAnimSegmentLineColorRGBA";
LineSet517.color = ColorRGBA518;

let Coordinate519 = browser.currentScene.createNode("Coordinate");
Coordinate519.point = new MFVec3f(new float[-3.6595,0.0085,4.8125,-3.7385,0.0054,5.5315]);
LineSet517.coord = Coordinate519;

Shape516.geometry = LineSet517;

HAnimSegment512.children[1] = Shape516;

HAnimJoint511.children = new MFNode();

HAnimJoint511.children[0] = HAnimSegment512;

let HAnimJoint520 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint520.DEF = "hanim_r_tarsal_proximal_interphalangeal_1";
HAnimJoint520.name = "r_tarsal_proximal_interphalangeal_2";
HAnimJoint520.center = new SFVec3f(new float[-3.7385,0.0054,5.5315]);
let HAnimSegment521 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment521.DEF = "hanim_r_tarsal_middle_phalanx_1";
HAnimSegment521.name = "r_tarsal_middle_phalanx_2";
let Transform522 = browser.currentScene.createNode("Transform");
Transform522.translation = new SFVec3f(new float[-3.7385,0.0054,5.5315]);
let Transform523 = browser.currentScene.createNode("Transform");
let Shape524 = browser.currentScene.createNode("Shape");
Shape524.USE = "HAnimJointShape";
Transform523.child = new undefined();

Transform523.child[0] = Shape524;

Transform522.children = new MFNode();

Transform522.children[0] = Transform523;

HAnimSegment521.children = new MFNode();

HAnimSegment521.children[0] = Transform522;

let Shape525 = browser.currentScene.createNode("Shape");
let LineSet526 = browser.currentScene.createNode("LineSet");
LineSet526.vertexCount = new MFInt32(new int[2]);
let ColorRGBA527 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA527.USE = "HAnimSegmentLineColorRGBA";
LineSet526.color = ColorRGBA527;

let Coordinate528 = browser.currentScene.createNode("Coordinate");
Coordinate528.point = new MFVec3f(new float[-3.7385,0.0054,5.5315,-3.7385,0.0017,5.9505]);
LineSet526.coord = Coordinate528;

Shape525.geometry = LineSet526;

HAnimSegment521.children[1] = Shape525;

let HAnimSite529 = browser.currentScene.createNode("HAnimSite");
HAnimSite529.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite529.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite529.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
let TouchSensor530 = browser.currentScene.createNode("TouchSensor");
TouchSensor530.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite529.children = new MFNode();

HAnimSite529.children[0] = TouchSensor530;

let Shape531 = browser.currentScene.createNode("Shape");
Shape531.USE = "HAnimSiteShape";
HAnimSite529.children[1] = Shape531;

HAnimSegment521.children[2] = HAnimSite529;

HAnimJoint520.children = new MFNode();

HAnimJoint520.children[0] = HAnimSegment521;

let HAnimJoint532 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint532.DEF = "hanim_r_tarsal_distal_interphalangeal_1";
HAnimJoint532.name = "r_tarsal_distal_interphalangeal_2";
HAnimJoint532.center = new SFVec3f(new float[-3.7385,0.0017,5.9505]);
HAnimJoint520.children[1] = HAnimJoint532;

HAnimJoint511.children[1] = HAnimJoint520;

HAnimJoint502.children[1] = HAnimJoint511;

HAnimJoint493.children[1] = HAnimJoint502;

HAnimJoint442.children[2] = HAnimJoint493;

let HAnimJoint533 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint533.DEF = "hanim_r_cuneonavicular_3";
HAnimJoint533.name = "r_cuneonavicular_3";
HAnimJoint533.center = new SFVec3f(new float[-4.1245,0.0328,1.3453]);
let HAnimSegment534 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment534.DEF = "hanim_r_cuneiform_3";
HAnimSegment534.name = "r_cuneiform_3";
let Transform535 = browser.currentScene.createNode("Transform");
Transform535.translation = new SFVec3f(new float[-4.1245,0.0328,1.3453]);
let Transform536 = browser.currentScene.createNode("Transform");
let Shape537 = browser.currentScene.createNode("Shape");
Shape537.USE = "HAnimJointShape";
Transform536.child = new undefined();

Transform536.child[0] = Shape537;

Transform535.children = new MFNode();

Transform535.children[0] = Transform536;

HAnimSegment534.children = new MFNode();

HAnimSegment534.children[0] = Transform535;

let Shape538 = browser.currentScene.createNode("Shape");
let LineSet539 = browser.currentScene.createNode("LineSet");
LineSet539.vertexCount = new MFInt32(new int[2]);
let ColorRGBA540 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA540.USE = "HAnimSegmentLineColorRGBA";
LineSet539.color = ColorRGBA540;

let Coordinate541 = browser.currentScene.createNode("Coordinate");
Coordinate541.point = new MFVec3f(new float[-4.1245,0.0328,1.3453,-3.7385,0.0017,5.9505]);
LineSet539.coord = Coordinate541;

Shape538.geometry = LineSet539;

HAnimSegment534.children[1] = Shape538;

HAnimJoint533.children = new MFNode();

HAnimJoint533.children[0] = HAnimSegment534;

let HAnimJoint542 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint542.DEF = "hanim_r_tarsometatarsal_3 ";
HAnimJoint542.name = "r_tarsometatarsal_3 ";
let HAnimSegment543 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment543.DEF = "hanim_r_metatarsal_3";
HAnimSegment543.name = "r_metatarsal_3";
let Transform544 = browser.currentScene.createNode("Transform");
Transform544.translation = new SFVec3f(new float[-4.1245,0.0328,1.3453]);
let Transform545 = browser.currentScene.createNode("Transform");
let Shape546 = browser.currentScene.createNode("Shape");
Shape546.USE = "HAnimJointShape";
Transform545.child = new undefined();

Transform545.child[0] = Shape546;

Transform544.children = new MFNode();

Transform544.children[0] = Transform545;

HAnimSegment543.children = new MFNode();

HAnimSegment543.children[0] = Transform544;

let Shape547 = browser.currentScene.createNode("Shape");
let LineSet548 = browser.currentScene.createNode("LineSet");
LineSet548.vertexCount = new MFInt32(new int[2]);
let ColorRGBA549 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA549.USE = "HAnimSegmentLineColorRGBA";
LineSet548.color = ColorRGBA549;

let Coordinate550 = browser.currentScene.createNode("Coordinate");
Coordinate550.point = new MFVec3f(new float[-4.2795,0.0086,4.7055]);
LineSet548.coord = Coordinate550;

Shape547.geometry = LineSet548;

HAnimSegment543.children[1] = Shape547;

HAnimJoint542.children = new MFNode();

HAnimJoint542.children[0] = HAnimSegment543;

let HAnimJoint551 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint551.DEF = "hanim_r_metatarsophalangeal_3";
HAnimJoint551.name = "r_metatarsophalangeal_3";
HAnimJoint551.center = new SFVec3f(new float[-4.2795,0.0086,4.7055]);
let HAnimSegment552 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment552.DEF = "hanim_r_tarsal_proximal_phalanx_3";
HAnimSegment552.name = "r_tarsal_proximal_phalanx_3";
let Transform553 = browser.currentScene.createNode("Transform");
Transform553.translation = new SFVec3f(new float[-4.2795,0.0086,4.7055]);
let Transform554 = browser.currentScene.createNode("Transform");
let Shape555 = browser.currentScene.createNode("Shape");
Shape555.USE = "HAnimJointShape";
Transform554.child = new undefined();

Transform554.child[0] = Shape555;

Transform553.children = new MFNode();

Transform553.children[0] = Transform554;

HAnimSegment552.children = new MFNode();

HAnimSegment552.children[0] = Transform553;

let Shape556 = browser.currentScene.createNode("Shape");
let LineSet557 = browser.currentScene.createNode("LineSet");
LineSet557.vertexCount = new MFInt32(new int[2]);
let ColorRGBA558 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA558.USE = "HAnimSegmentLineColorRGBA";
LineSet557.color = ColorRGBA558;

let Coordinate559 = browser.currentScene.createNode("Coordinate");
Coordinate559.point = new MFVec3f(new float[-4.2795,0.0086,4.7055,-4.3865,0.0044,5.3745]);
LineSet557.coord = Coordinate559;

Shape556.geometry = LineSet557;

HAnimSegment552.children[1] = Shape556;

HAnimJoint551.children = new MFNode();

HAnimJoint551.children[0] = HAnimSegment552;

let HAnimJoint560 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint560.DEF = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimJoint560.name = "r_tarsal_proximal_interphalangeal_3";
HAnimJoint560.center = new SFVec3f(new float[-4.3865,0.0044,5.3745]);
let HAnimSegment561 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment561.DEF = "hanim_r_tarsal_middle_phalanx_2";
HAnimSegment561.name = "r_tarsal_middle_phalanx_3";
let Transform562 = browser.currentScene.createNode("Transform");
Transform562.translation = new SFVec3f(new float[-4.3865,0.0044,5.3745]);
let Transform563 = browser.currentScene.createNode("Transform");
let Shape564 = browser.currentScene.createNode("Shape");
Shape564.USE = "HAnimJointShape";
Transform563.child = new undefined();

Transform563.child[0] = Shape564;

Transform562.children = new MFNode();

Transform562.children[0] = Transform563;

HAnimSegment561.children = new MFNode();

HAnimSegment561.children[0] = Transform562;

let Shape565 = browser.currentScene.createNode("Shape");
let LineSet566 = browser.currentScene.createNode("LineSet");
LineSet566.vertexCount = new MFInt32(new int[2]);
let ColorRGBA567 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA567.USE = "HAnimSegmentLineColorRGBA";
LineSet566.color = ColorRGBA567;

let Coordinate568 = browser.currentScene.createNode("Coordinate");
Coordinate568.point = new MFVec3f(new float[-4.3865,0.0044,5.3745,-4.4545,0.0017,5.7845]);
LineSet566.coord = Coordinate568;

Shape565.geometry = LineSet566;

HAnimSegment561.children[1] = Shape565;

let HAnimSite569 = browser.currentScene.createNode("HAnimSite");
HAnimSite569.DEF = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimSite569.name = "r_tarsal_distal_phalanx_3_tip";
let TouchSensor570 = browser.currentScene.createNode("TouchSensor");
TouchSensor570.description = "HAnimSite r_tarsal_distal_phalanx_3_tip";
HAnimSite569.children = new MFNode();

HAnimSite569.children[0] = TouchSensor570;

let Shape571 = browser.currentScene.createNode("Shape");
Shape571.USE = "HAnimSiteShape";
HAnimSite569.children[1] = Shape571;

HAnimSegment561.children[2] = HAnimSite569;

HAnimJoint560.children = new MFNode();

HAnimJoint560.children[0] = HAnimSegment561;

let HAnimJoint572 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint572.DEF = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimJoint572.name = "r_tarsal_distal_interphalangeal_3";
HAnimJoint572.center = new SFVec3f(new float[-4.4545,0.0017,5.7845]);
HAnimJoint560.children[1] = HAnimJoint572;

HAnimJoint551.children[1] = HAnimJoint560;

HAnimJoint542.children[1] = HAnimJoint551;

HAnimJoint533.children[1] = HAnimJoint542;

HAnimJoint442.children[3] = HAnimJoint533;

HAnimJoint429.children[1] = HAnimJoint442;

let HAnimJoint573 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint573.DEF = "hanim_r_calcaneocuboid";
HAnimJoint573.name = "r_calcaneocuboid";
HAnimJoint573.center = new SFVec3f(new float[-3.9515,0.0653,-0.6895]);
let HAnimSegment574 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment574.DEF = "hanim_r_calcaneus";
HAnimSegment574.name = "r_calcaneus";
let Transform575 = browser.currentScene.createNode("Transform");
Transform575.translation = new SFVec3f(new float[-3.9515,0.0653,-0.6895]);
let Transform576 = browser.currentScene.createNode("Transform");
let Shape577 = browser.currentScene.createNode("Shape");
Shape577.USE = "HAnimJointShape";
Transform576.child = new undefined();

Transform576.child[0] = Shape577;

Transform575.children = new MFNode();

Transform575.children[0] = Transform576;

HAnimSegment574.children = new MFNode();

HAnimSegment574.children[0] = Transform575;

let Shape578 = browser.currentScene.createNode("Shape");
let LineSet579 = browser.currentScene.createNode("LineSet");
LineSet579.vertexCount = new MFInt32(new int[2]);
let ColorRGBA580 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA580.USE = "HAnimSegmentLineColorRGBA";
LineSet579.color = ColorRGBA580;

let Coordinate581 = browser.currentScene.createNode("Coordinate");
Coordinate581.point = new MFVec3f(new float[-3.9515,0.0653,-0.6895,-4.9095,0.0353,0.5574]);
LineSet579.coord = Coordinate581;

Shape578.geometry = LineSet579;

HAnimSegment574.children[1] = Shape578;

HAnimJoint573.children = new MFNode();

HAnimJoint573.children[0] = HAnimSegment574;

let HAnimJoint582 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint582.DEF = "hanim_r_transversetarsal";
HAnimJoint582.name = "r_transversetarsal";
HAnimJoint582.center = new SFVec3f(new float[-4.9095,0.0353,0.5574]);
let HAnimSegment583 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment583.DEF = "hanim_r_cuboid";
HAnimSegment583.name = "r_cuboid";
let Transform584 = browser.currentScene.createNode("Transform");
Transform584.translation = new SFVec3f(new float[-4.9095,0.0353,0.5574]);
let Transform585 = browser.currentScene.createNode("Transform");
let Shape586 = browser.currentScene.createNode("Shape");
Shape586.USE = "HAnimJointShape";
Transform585.child = new undefined();

Transform585.child[0] = Shape586;

Transform584.children = new MFNode();

Transform584.children[0] = Transform585;

HAnimSegment583.children = new MFNode();

HAnimSegment583.children[0] = Transform584;

let Shape587 = browser.currentScene.createNode("Shape");
let LineSet588 = browser.currentScene.createNode("LineSet");
LineSet588.vertexCount = new MFInt32(new int[2]);
let ColorRGBA589 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA589.USE = "HAnimSegmentLineColorRGBA";
LineSet588.color = ColorRGBA589;

let Coordinate590 = browser.currentScene.createNode("Coordinate");
Coordinate590.point = new MFVec3f(new float[-4.9095,0.0353,0.5574,-4.7255,0.0211,2.1725]);
LineSet588.coord = Coordinate590;

Shape587.geometry = LineSet588;

HAnimSegment583.children[1] = Shape587;

let Shape591 = browser.currentScene.createNode("Shape");
let LineSet592 = browser.currentScene.createNode("LineSet");
LineSet592.vertexCount = new MFInt32(new int[2]);
let ColorRGBA593 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA593.USE = "HAnimSegmentLineColorRGBA";
LineSet592.color = ColorRGBA593;

let Coordinate594 = browser.currentScene.createNode("Coordinate");
Coordinate594.point = new MFVec3f(new float[-4.9095,0.0353,0.5574,-5.3615,0.0164,2.0085]);
LineSet592.coord = Coordinate594;

Shape591.geometry = LineSet592;

HAnimSegment583.children[2] = Shape591;

HAnimJoint582.children = new MFNode();

HAnimJoint582.children[0] = HAnimSegment583;

let HAnimJoint595 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint595.DEF = "hanim_r_tarsometatarsal_3";
HAnimJoint595.name = "r_tarsometatarsal_4";
HAnimJoint595.center = new SFVec3f(new float[-4.7255,0.0211,2.1725]);
let HAnimSegment596 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment596.DEF = "hanim_r_metatarsal_4";
HAnimSegment596.name = "r_metatarsal_4";
let Transform597 = browser.currentScene.createNode("Transform");
Transform597.translation = new SFVec3f(new float[-4.7255,0.0211,2.1725]);
let Transform598 = browser.currentScene.createNode("Transform");
let Shape599 = browser.currentScene.createNode("Shape");
Shape599.USE = "HAnimJointShape";
Transform598.child = new undefined();

Transform598.child[0] = Shape599;

Transform597.children = new MFNode();

Transform597.children[0] = Transform598;

HAnimSegment596.children = new MFNode();

HAnimSegment596.children[0] = Transform597;

let Shape600 = browser.currentScene.createNode("Shape");
let LineSet601 = browser.currentScene.createNode("LineSet");
LineSet601.vertexCount = new MFInt32(new int[2]);
let ColorRGBA602 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA602.USE = "HAnimSegmentLineColorRGBA";
LineSet601.color = ColorRGBA602;

let Coordinate603 = browser.currentScene.createNode("Coordinate");
Coordinate603.point = new MFVec3f(new float[-4.7255,0.0211,2.1725,-4.8755,0.0076,4.5165]);
LineSet601.coord = Coordinate603;

Shape600.geometry = LineSet601;

HAnimSegment596.children[1] = Shape600;

HAnimJoint595.children = new MFNode();

HAnimJoint595.children[0] = HAnimSegment596;

let HAnimJoint604 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint604.DEF = "hanim_r_metatarsophalangeal_4";
HAnimJoint604.name = "r_metatarsophalangeal_4";
HAnimJoint604.center = new SFVec3f(new float[-4.8755,0.0076,4.5165]);
let HAnimSegment605 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment605.DEF = "hanim_r_tarsal_proximal_phalanx_4";
HAnimSegment605.name = "r_tarsal_proximal_phalanx_4";
let Transform606 = browser.currentScene.createNode("Transform");
Transform606.translation = new SFVec3f(new float[-4.8755,0.0076,4.5165]);
let Transform607 = browser.currentScene.createNode("Transform");
let Shape608 = browser.currentScene.createNode("Shape");
Shape608.USE = "HAnimJointShape";
Transform607.child = new undefined();

Transform607.child[0] = Shape608;

Transform606.children = new MFNode();

Transform606.children[0] = Transform607;

HAnimSegment605.children = new MFNode();

HAnimSegment605.children[0] = Transform606;

let Shape609 = browser.currentScene.createNode("Shape");
let LineSet610 = browser.currentScene.createNode("LineSet");
LineSet610.vertexCount = new MFInt32(new int[2]);
let ColorRGBA611 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA611.USE = "HAnimSegmentLineColorRGBA";
LineSet610.color = ColorRGBA611;

let Coordinate612 = browser.currentScene.createNode("Coordinate");
Coordinate612.point = new MFVec3f(new float[-4.8755,0.0076,4.5165,-5.0655,0.0049,5.1895]);
LineSet610.coord = Coordinate612;

Shape609.geometry = LineSet610;

HAnimSegment605.children[1] = Shape609;

HAnimJoint604.children = new MFNode();

HAnimJoint604.children[0] = HAnimSegment605;

let HAnimJoint613 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint613.DEF = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimJoint613.name = "r_tarsal_proximal_interphalangeal_4";
HAnimJoint613.center = new SFVec3f(new float[-5.0655,0.0049,5.1895]);
let HAnimSegment614 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment614.DEF = "hanim_r_tarsal_middle_phalanx_3";
HAnimSegment614.name = "r_tarsal_middle_phalanx_4";
let Transform615 = browser.currentScene.createNode("Transform");
Transform615.translation = new SFVec3f(new float[-5.0655,0.0049,5.1895]);
let Transform616 = browser.currentScene.createNode("Transform");
let Shape617 = browser.currentScene.createNode("Shape");
Shape617.USE = "HAnimJointShape";
Transform616.child = new undefined();

Transform616.child[0] = Shape617;

Transform615.children = new MFNode();

Transform615.children[0] = Transform616;

HAnimSegment614.children = new MFNode();

HAnimSegment614.children[0] = Transform615;

let Shape618 = browser.currentScene.createNode("Shape");
let LineSet619 = browser.currentScene.createNode("LineSet");
LineSet619.vertexCount = new MFInt32(new int[2]);
let ColorRGBA620 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA620.USE = "HAnimSegmentLineColorRGBA";
LineSet619.color = ColorRGBA620;

let Coordinate621 = browser.currentScene.createNode("Coordinate");
Coordinate621.point = new MFVec3f(new float[-5.0655,0.0049,5.1895,-5.1335,0.0011,5.5175]);
LineSet619.coord = Coordinate621;

Shape618.geometry = LineSet619;

HAnimSegment614.children[1] = Shape618;

let HAnimSite622 = browser.currentScene.createNode("HAnimSite");
HAnimSite622.DEF = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimSite622.name = "r_tarsal_distal_phalanx_4_tip";
let TouchSensor623 = browser.currentScene.createNode("TouchSensor");
TouchSensor623.description = "HAnimSite r_tarsal_distal_phalanx_4_tip";
HAnimSite622.children = new MFNode();

HAnimSite622.children[0] = TouchSensor623;

let Shape624 = browser.currentScene.createNode("Shape");
Shape624.USE = "HAnimSiteShape";
HAnimSite622.children[1] = Shape624;

HAnimSegment614.children[2] = HAnimSite622;

HAnimJoint613.children = new MFNode();

HAnimJoint613.children[0] = HAnimSegment614;

let HAnimJoint625 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint625.DEF = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimJoint625.name = "r_tarsal_distal_interphalangeal_4";
HAnimJoint625.center = new SFVec3f(new float[-5.1335,0.0011,5.5175]);
HAnimJoint613.children[1] = HAnimJoint625;

HAnimJoint604.children[1] = HAnimJoint613;

HAnimJoint595.children[1] = HAnimJoint604;

HAnimJoint582.children[1] = HAnimJoint595;

let HAnimJoint626 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint626.DEF = "hanim_r_tarsometatarsal_4";
HAnimJoint626.name = "r_tarsometatarsal_5";
HAnimJoint626.center = new SFVec3f(new float[-5.3615,0.0164,2.0085]);
let HAnimSegment627 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment627.DEF = "hanim_r_metatarsal_5";
HAnimSegment627.name = "r_metatarsal_5";
let Transform628 = browser.currentScene.createNode("Transform");
Transform628.translation = new SFVec3f(new float[-5.3615,0.0164,2.0085]);
let Transform629 = browser.currentScene.createNode("Transform");
let Shape630 = browser.currentScene.createNode("Shape");
Shape630.USE = "HAnimJointShape";
Transform629.child = new undefined();

Transform629.child[0] = Shape630;

Transform628.children = new MFNode();

Transform628.children[0] = Transform629;

HAnimSegment627.children = new MFNode();

HAnimSegment627.children[0] = Transform628;

let Shape631 = browser.currentScene.createNode("Shape");
let LineSet632 = browser.currentScene.createNode("LineSet");
LineSet632.vertexCount = new MFInt32(new int[2]);
let ColorRGBA633 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA633.USE = "HAnimSegmentLineColorRGBA";
LineSet632.color = ColorRGBA633;

let Coordinate634 = browser.currentScene.createNode("Coordinate");
Coordinate634.point = new MFVec3f(new float[-5.3615,0.0164,2.0085,-5.5055,0.0067,4.3115]);
LineSet632.coord = Coordinate634;

Shape631.geometry = LineSet632;

HAnimSegment627.children[1] = Shape631;

let HAnimSite635 = browser.currentScene.createNode("HAnimSite");
HAnimSite635.DEF = "hanim_r_metatarsal_phalanx_5_pt";
HAnimSite635.name = "r_metatarsal_phalanx_5_pt";
let TouchSensor636 = browser.currentScene.createNode("TouchSensor");
TouchSensor636.description = "HAnimSite r_metatarsal_phalanx_5_pt";
HAnimSite635.children = new MFNode();

HAnimSite635.children[0] = TouchSensor636;

let Shape637 = browser.currentScene.createNode("Shape");
Shape637.USE = "HAnimSiteShape";
HAnimSite635.children[1] = Shape637;

HAnimSegment627.children[2] = HAnimSite635;

HAnimJoint626.children = new MFNode();

HAnimJoint626.children[0] = HAnimSegment627;

let HAnimJoint638 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint638.DEF = "hanim_r_metatarsophalangeal_5";
HAnimJoint638.name = "r_metatarsophalangeal_5";
HAnimJoint638.center = new SFVec3f(new float[-5.5055,0.0067,4.3115]);
let HAnimSegment639 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment639.DEF = "hanim_r_tarsal_proximal_phalanx_5";
HAnimSegment639.name = "r_tarsal_proximal_phalanx_5";
let Transform640 = browser.currentScene.createNode("Transform");
Transform640.translation = new SFVec3f(new float[-5.5055,0.0067,4.3115]);
let Transform641 = browser.currentScene.createNode("Transform");
let Shape642 = browser.currentScene.createNode("Shape");
Shape642.USE = "HAnimJointShape";
Transform641.child = new undefined();

Transform641.child[0] = Shape642;

Transform640.children = new MFNode();

Transform640.children[0] = Transform641;

HAnimSegment639.children = new MFNode();

HAnimSegment639.children[0] = Transform640;

let Shape643 = browser.currentScene.createNode("Shape");
let LineSet644 = browser.currentScene.createNode("LineSet");
LineSet644.vertexCount = new MFInt32(new int[2]);
let ColorRGBA645 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA645.USE = "HAnimSegmentLineColorRGBA";
LineSet644.color = ColorRGBA645;

let Coordinate646 = browser.currentScene.createNode("Coordinate");
Coordinate646.point = new MFVec3f(new float[-5.5055,0.0067,4.3115,-5.6085,0.003,4.6485]);
LineSet644.coord = Coordinate646;

Shape643.geometry = LineSet644;

HAnimSegment639.children[1] = Shape643;

HAnimJoint638.children = new MFNode();

HAnimJoint638.children[0] = HAnimSegment639;

let HAnimJoint647 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint647.DEF = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimJoint647.name = "r_tarsal_proximal_interphalangeal_5";
HAnimJoint647.center = new SFVec3f(new float[-5.6085,0.003,4.6485]);
let HAnimSegment648 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment648.DEF = "hanim_r_tarsal_middle_phalanx_4";
HAnimSegment648.name = "r_tarsal_middle_phalanx_5";
let Transform649 = browser.currentScene.createNode("Transform");
Transform649.translation = new SFVec3f(new float[-5.6085,0.003,4.6485]);
let Transform650 = browser.currentScene.createNode("Transform");
let Shape651 = browser.currentScene.createNode("Shape");
Shape651.USE = "HAnimJointShape";
Transform650.child = new undefined();

Transform650.child[0] = Shape651;

Transform649.children = new MFNode();

Transform649.children[0] = Transform650;

HAnimSegment648.children = new MFNode();

HAnimSegment648.children[0] = Transform649;

let Shape652 = browser.currentScene.createNode("Shape");
let LineSet653 = browser.currentScene.createNode("LineSet");
LineSet653.vertexCount = new MFInt32(new int[2]);
let ColorRGBA654 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA654.USE = "HAnimSegmentLineColorRGBA";
LineSet653.color = ColorRGBA654;

let Coordinate655 = browser.currentScene.createNode("Coordinate");
Coordinate655.point = new MFVec3f(new float[-5.6085,0.003,4.6485,-5.6495,0,4.9925]);
LineSet653.coord = Coordinate655;

Shape652.geometry = LineSet653;

HAnimSegment648.children[1] = Shape652;

let HAnimSite656 = browser.currentScene.createNode("HAnimSite");
HAnimSite656.DEF = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimSite656.name = "r_tarsal_distal_phalanx_5_tip";
let TouchSensor657 = browser.currentScene.createNode("TouchSensor");
TouchSensor657.description = "HAnimSite r_tarsal_distal_phalanx_5_tip";
HAnimSite656.children = new MFNode();

HAnimSite656.children[0] = TouchSensor657;

let Shape658 = browser.currentScene.createNode("Shape");
Shape658.USE = "HAnimSiteShape";
HAnimSite656.children[1] = Shape658;

HAnimSegment648.children[2] = HAnimSite656;

HAnimJoint647.children = new MFNode();

HAnimJoint647.children[0] = HAnimSegment648;

let HAnimJoint659 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint659.DEF = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimJoint659.name = "r_tarsal_distal_interphalangeal_5";
HAnimJoint659.center = new SFVec3f(new float[-5.6495,0,4.9925]);
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

let HAnimJoint660 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint660.DEF = "hanim_vl5";
HAnimJoint660.name = "vl5";
HAnimJoint660.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let HAnimSegment661 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment661.DEF = "hanim_l5";
HAnimSegment661.name = "l5";
let Transform662 = browser.currentScene.createNode("Transform");
Transform662.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Transform663 = browser.currentScene.createNode("Transform");
let Shape664 = browser.currentScene.createNode("Shape");
Shape664.USE = "HAnimJointShape";
Transform663.child = new undefined();

Transform663.child[0] = Shape664;

Transform662.children = new MFNode();

Transform662.children[0] = Transform663;

HAnimSegment661.children = new MFNode();

HAnimSegment661.children[0] = Transform662;

let Shape665 = browser.currentScene.createNode("Shape");
let LineSet666 = browser.currentScene.createNode("LineSet");
LineSet666.vertexCount = new MFInt32(new int[2]);
let ColorRGBA667 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA667.USE = "HAnimSegmentLineColorRGBA";
LineSet666.color = ColorRGBA667;

let Coordinate668 = browser.currentScene.createNode("Coordinate");
Coordinate668.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787]);
LineSet666.coord = Coordinate668;

Shape665.geometry = LineSet666;

HAnimSegment661.children[1] = Shape665;

HAnimJoint660.children = new MFNode();

HAnimJoint660.children[0] = HAnimSegment661;

let HAnimJoint669 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint669.DEF = "hanim_vl4";
HAnimJoint669.name = "vl4";
HAnimJoint669.center = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let HAnimSegment670 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment670.DEF = "hanim_l4";
HAnimSegment670.name = "l4";
let Transform671 = browser.currentScene.createNode("Transform");
Transform671.translation = new SFVec3f(new float[0.0035,1.0925,-0.0787]);
let Transform672 = browser.currentScene.createNode("Transform");
let Shape673 = browser.currentScene.createNode("Shape");
Shape673.USE = "HAnimJointShape";
Transform672.child = new undefined();

Transform672.child[0] = Shape673;

Transform671.children = new MFNode();

Transform671.children[0] = Transform672;

HAnimSegment670.children = new MFNode();

HAnimSegment670.children[0] = Transform671;

let Shape674 = browser.currentScene.createNode("Shape");
let LineSet675 = browser.currentScene.createNode("LineSet");
LineSet675.vertexCount = new MFInt32(new int[2]);
let ColorRGBA676 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA676.USE = "HAnimSegmentLineColorRGBA";
LineSet675.color = ColorRGBA676;

let Coordinate677 = browser.currentScene.createNode("Coordinate");
Coordinate677.point = new MFVec3f(new float[0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796]);
LineSet675.coord = Coordinate677;

Shape674.geometry = LineSet675;

HAnimSegment670.children[1] = Shape674;

HAnimJoint669.children = new MFNode();

HAnimJoint669.children[0] = HAnimSegment670;

let HAnimJoint678 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint678.DEF = "hanim_vl3";
HAnimJoint678.name = "vl3";
HAnimJoint678.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let HAnimSegment679 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment679.DEF = "hanim_l3";
HAnimSegment679.name = "l3";
let Transform680 = browser.currentScene.createNode("Transform");
Transform680.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let Transform681 = browser.currentScene.createNode("Transform");
let Shape682 = browser.currentScene.createNode("Shape");
Shape682.USE = "HAnimJointShape";
Transform681.child = new undefined();

Transform681.child[0] = Shape682;

Transform680.children = new MFNode();

Transform680.children[0] = Transform681;

HAnimSegment679.children = new MFNode();

HAnimSegment679.children[0] = Transform680;

let Shape683 = browser.currentScene.createNode("Shape");
let LineSet684 = browser.currentScene.createNode("LineSet");
LineSet684.vertexCount = new MFInt32(new int[2]);
let ColorRGBA685 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA685.USE = "HAnimSegmentLineColorRGBA";
LineSet684.color = ColorRGBA685;

let Coordinate686 = browser.currentScene.createNode("Coordinate");
Coordinate686.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08]);
LineSet684.coord = Coordinate686;

Shape683.geometry = LineSet684;

HAnimSegment679.children[1] = Shape683;

let HAnimSite687 = browser.currentScene.createNode("HAnimSite");
HAnimSite687.DEF = "hanim_l_rib10_pt";
HAnimSite687.name = "l_rib10_pt";
HAnimSite687.translation = new SFVec3f(new float[0.0871,1.1925,0.0992]);
let TouchSensor688 = browser.currentScene.createNode("TouchSensor");
TouchSensor688.description = "HAnimSite l_rib10_pt";
HAnimSite687.children = new MFNode();

HAnimSite687.children[0] = TouchSensor688;

let Shape689 = browser.currentScene.createNode("Shape");
Shape689.USE = "HAnimSiteShape";
HAnimSite687.children[1] = Shape689;

HAnimSegment679.children[2] = HAnimSite687;

let HAnimSite690 = browser.currentScene.createNode("HAnimSite");
HAnimSite690.DEF = "hanim_r_rib10_pt";
HAnimSite690.name = "r_rib10_pt";
HAnimSite690.translation = new SFVec3f(new float[-0.0711,1.1941,0.1016]);
let TouchSensor691 = browser.currentScene.createNode("TouchSensor");
TouchSensor691.description = "HAnimSite r_rib10_pt";
HAnimSite690.children = new MFNode();

HAnimSite690.children[0] = TouchSensor691;

let Shape692 = browser.currentScene.createNode("Shape");
Shape692.USE = "HAnimSiteShape";
HAnimSite690.children[1] = Shape692;

HAnimSegment679.children[3] = HAnimSite690;

let HAnimSite693 = browser.currentScene.createNode("HAnimSite");
HAnimSite693.DEF = "hanim_spine_2_middle_back_pt";
HAnimSite693.name = "spine_2_middle_back_pt";
let TouchSensor694 = browser.currentScene.createNode("TouchSensor");
TouchSensor694.description = "HAnimSite spine_2_middle_back_pt";
HAnimSite693.children = new MFNode();

HAnimSite693.children[0] = TouchSensor694;

let Shape695 = browser.currentScene.createNode("Shape");
Shape695.USE = "HAnimSiteShape";
HAnimSite693.children[1] = Shape695;

HAnimSegment679.children[4] = HAnimSite693;

HAnimJoint678.children = new MFNode();

HAnimJoint678.children[0] = HAnimSegment679;

let HAnimJoint696 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint696.DEF = "hanim_vl2";
HAnimJoint696.name = "vl2";
HAnimJoint696.center = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let HAnimSegment697 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment697.DEF = "hanim_l2";
HAnimSegment697.name = "l2";
let Transform698 = browser.currentScene.createNode("Transform");
Transform698.translation = new SFVec3f(new float[0.0045,1.1546,-0.08]);
let Transform699 = browser.currentScene.createNode("Transform");
let Shape700 = browser.currentScene.createNode("Shape");
Shape700.USE = "HAnimJointShape";
Transform699.child = new undefined();

Transform699.child[0] = Shape700;

Transform698.children = new MFNode();

Transform698.children[0] = Transform699;

HAnimSegment697.children = new MFNode();

HAnimSegment697.children[0] = Transform698;

let Shape701 = browser.currentScene.createNode("Shape");
let LineSet702 = browser.currentScene.createNode("LineSet");
LineSet702.vertexCount = new MFInt32(new int[2]);
let ColorRGBA703 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA703.USE = "HAnimSegmentLineColorRGBA";
LineSet702.color = ColorRGBA703;

let Coordinate704 = browser.currentScene.createNode("Coordinate");
Coordinate704.point = new MFVec3f(new float[0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805]);
LineSet702.coord = Coordinate704;

Shape701.geometry = LineSet702;

HAnimSegment697.children[1] = Shape701;

HAnimJoint696.children = new MFNode();

HAnimJoint696.children[0] = HAnimSegment697;

let HAnimJoint705 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint705.DEF = "hanim_vl1";
HAnimJoint705.name = "vl1";
HAnimJoint705.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let HAnimSegment706 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment706.DEF = "hanim_l1";
HAnimSegment706.name = "l1";
let Transform707 = browser.currentScene.createNode("Transform");
Transform707.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let Transform708 = browser.currentScene.createNode("Transform");
let Shape709 = browser.currentScene.createNode("Shape");
Shape709.USE = "HAnimJointShape";
Transform708.child = new undefined();

Transform708.child[0] = Shape709;

Transform707.children = new MFNode();

Transform707.children[0] = Transform708;

HAnimSegment706.children = new MFNode();

HAnimSegment706.children[0] = Transform707;

let Shape710 = browser.currentScene.createNode("Shape");
let LineSet711 = browser.currentScene.createNode("LineSet");
LineSet711.vertexCount = new MFInt32(new int[2]);
let ColorRGBA712 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA712.USE = "HAnimSegmentLineColorRGBA";
LineSet711.color = ColorRGBA712;

let Coordinate713 = browser.currentScene.createNode("Coordinate");
Coordinate713.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808]);
LineSet711.coord = Coordinate713;

Shape710.geometry = LineSet711;

HAnimSegment706.children[1] = Shape710;

HAnimJoint705.children = new MFNode();

HAnimJoint705.children[0] = HAnimSegment706;

let HAnimJoint714 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint714.DEF = "hanim_vt12";
HAnimJoint714.name = "vt12";
HAnimJoint714.center = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let HAnimSegment715 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment715.DEF = "hanim_t12";
HAnimSegment715.name = "t12";
let Transform716 = browser.currentScene.createNode("Transform");
Transform716.translation = new SFVec3f(new float[0.0051,1.2278,-0.0808]);
let Transform717 = browser.currentScene.createNode("Transform");
let Shape718 = browser.currentScene.createNode("Shape");
Shape718.USE = "HAnimJointShape";
Transform717.child = new undefined();

Transform717.child[0] = Shape718;

Transform716.children = new MFNode();

Transform716.children[0] = Transform717;

HAnimSegment715.children = new MFNode();

HAnimSegment715.children[0] = Transform716;

let Shape719 = browser.currentScene.createNode("Shape");
let LineSet720 = browser.currentScene.createNode("LineSet");
LineSet720.vertexCount = new MFInt32(new int[2]);
let ColorRGBA721 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA721.USE = "HAnimSegmentLineColorRGBA";
LineSet720.color = ColorRGBA721;

let Coordinate722 = browser.currentScene.createNode("Coordinate");
Coordinate722.point = new MFVec3f(new float[0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081]);
LineSet720.coord = Coordinate722;

Shape719.geometry = LineSet720;

HAnimSegment715.children[1] = Shape719;

HAnimJoint714.children = new MFNode();

HAnimJoint714.children[0] = HAnimSegment715;

let HAnimJoint723 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint723.DEF = "hanim_vt11";
HAnimJoint723.name = "vt11";
HAnimJoint723.center = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let HAnimSegment724 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment724.DEF = "hanim_t11";
HAnimSegment724.name = "t11";
let Transform725 = browser.currentScene.createNode("Transform");
Transform725.translation = new SFVec3f(new float[0.0053,1.2679,-0.081]);
let Transform726 = browser.currentScene.createNode("Transform");
let Shape727 = browser.currentScene.createNode("Shape");
Shape727.USE = "HAnimJointShape";
Transform726.child = new undefined();

Transform726.child[0] = Shape727;

Transform725.children = new MFNode();

Transform725.children[0] = Transform726;

HAnimSegment724.children = new MFNode();

HAnimSegment724.children[0] = Transform725;

let Shape728 = browser.currentScene.createNode("Shape");
let LineSet729 = browser.currentScene.createNode("LineSet");
LineSet729.vertexCount = new MFInt32(new int[2]);
let ColorRGBA730 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA730.USE = "HAnimSegmentLineColorRGBA";
LineSet729.color = ColorRGBA730;

let Coordinate731 = browser.currentScene.createNode("Coordinate");
Coordinate731.point = new MFVec3f(new float[0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822]);
LineSet729.coord = Coordinate731;

Shape728.geometry = LineSet729;

HAnimSegment724.children[1] = Shape728;

let HAnimSite732 = browser.currentScene.createNode("HAnimSite");
HAnimSite732.DEF = "hanim_substernale_pt";
HAnimSite732.name = "substernale_pt";
HAnimSite732.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
let TouchSensor733 = browser.currentScene.createNode("TouchSensor");
TouchSensor733.description = "HAnimSite substernale_pt";
HAnimSite732.children = new MFNode();

HAnimSite732.children[0] = TouchSensor733;

let Shape734 = browser.currentScene.createNode("Shape");
Shape734.USE = "HAnimSiteShape";
HAnimSite732.children[1] = Shape734;

HAnimSegment724.children[2] = HAnimSite732;

HAnimJoint723.children = new MFNode();

HAnimJoint723.children[0] = HAnimSegment724;

let HAnimJoint735 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint735.DEF = "hanim_vt10";
HAnimJoint735.name = "vt10";
HAnimJoint735.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let HAnimSegment736 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment736.DEF = "hanim_t10";
HAnimSegment736.name = "t10";
let Transform737 = browser.currentScene.createNode("Transform");
Transform737.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Transform738 = browser.currentScene.createNode("Transform");
let Shape739 = browser.currentScene.createNode("Shape");
Shape739.USE = "HAnimJointShape";
Transform738.child = new undefined();

Transform738.child[0] = Shape739;

Transform737.children = new MFNode();

Transform737.children[0] = Transform738;

HAnimSegment736.children = new MFNode();

HAnimSegment736.children[0] = Transform737;

let Shape740 = browser.currentScene.createNode("Shape");
let LineSet741 = browser.currentScene.createNode("LineSet");
LineSet741.vertexCount = new MFInt32(new int[2]);
let ColorRGBA742 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA742.USE = "HAnimSegmentLineColorRGBA";
LineSet741.color = ColorRGBA742;

let Coordinate743 = browser.currentScene.createNode("Coordinate");
Coordinate743.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838]);
LineSet741.coord = Coordinate743;

Shape740.geometry = LineSet741;

HAnimSegment736.children[1] = Shape740;

let HAnimSite744 = browser.currentScene.createNode("HAnimSite");
HAnimSite744.DEF = "hanim_l_thelion_pt";
HAnimSite744.name = "l_thelion_pt";
HAnimSite744.translation = new SFVec3f(new float[0.0918,1.3382,0.1192]);
let TouchSensor745 = browser.currentScene.createNode("TouchSensor");
TouchSensor745.description = "HAnimSite l_thelion_pt";
HAnimSite744.children = new MFNode();

HAnimSite744.children[0] = TouchSensor745;

let Shape746 = browser.currentScene.createNode("Shape");
Shape746.USE = "HAnimSiteShape";
HAnimSite744.children[1] = Shape746;

HAnimSegment736.children[2] = HAnimSite744;

let HAnimSite747 = browser.currentScene.createNode("HAnimSite");
HAnimSite747.DEF = "hanim_r_thelion_pt";
HAnimSite747.name = "r_thelion_pt";
HAnimSite747.translation = new SFVec3f(new float[-0.0736,1.3385,0.1217]);
let TouchSensor748 = browser.currentScene.createNode("TouchSensor");
TouchSensor748.description = "HAnimSite r_thelion_pt";
HAnimSite747.children = new MFNode();

HAnimSite747.children[0] = TouchSensor748;

let Shape749 = browser.currentScene.createNode("Shape");
Shape749.USE = "HAnimSiteShape";
HAnimSite747.children[1] = Shape749;

HAnimSegment736.children[3] = HAnimSite747;

HAnimJoint735.children = new MFNode();

HAnimJoint735.children[0] = HAnimSegment736;

let HAnimJoint750 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint750.DEF = "hanim_vt9";
HAnimJoint750.name = "vt9";
HAnimJoint750.center = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let HAnimSegment751 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment751.DEF = "hanim_t9";
HAnimSegment751.name = "t9";
let Transform752 = browser.currentScene.createNode("Transform");
Transform752.translation = new SFVec3f(new float[0.0057,1.3126,-0.0838]);
let Transform753 = browser.currentScene.createNode("Transform");
let Shape754 = browser.currentScene.createNode("Shape");
Shape754.USE = "HAnimJointShape";
Transform753.child = new undefined();

Transform753.child[0] = Shape754;

Transform752.children = new MFNode();

Transform752.children[0] = Transform753;

HAnimSegment751.children = new MFNode();

HAnimSegment751.children[0] = Transform752;

let Shape755 = browser.currentScene.createNode("Shape");
let LineSet756 = browser.currentScene.createNode("LineSet");
LineSet756.vertexCount = new MFInt32(new int[2]);
let ColorRGBA757 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA757.USE = "HAnimSegmentLineColorRGBA";
LineSet756.color = ColorRGBA757;

let Coordinate758 = browser.currentScene.createNode("Coordinate");
Coordinate758.point = new MFVec3f(new float[0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845]);
LineSet756.coord = Coordinate758;

Shape755.geometry = LineSet756;

HAnimSegment751.children[1] = Shape755;

HAnimJoint750.children = new MFNode();

HAnimJoint750.children[0] = HAnimSegment751;

let HAnimJoint759 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint759.DEF = "hanim_vt8";
HAnimJoint759.name = "vt8";
HAnimJoint759.center = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let HAnimSegment760 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment760.DEF = "hanim_t8";
HAnimSegment760.name = "t8";
let Transform761 = browser.currentScene.createNode("Transform");
Transform761.translation = new SFVec3f(new float[0.0057,1.3382,-0.0845]);
let Transform762 = browser.currentScene.createNode("Transform");
let Shape763 = browser.currentScene.createNode("Shape");
Shape763.USE = "HAnimJointShape";
Transform762.child = new undefined();

Transform762.child[0] = Shape763;

Transform761.children = new MFNode();

Transform761.children[0] = Transform762;

HAnimSegment760.children = new MFNode();

HAnimSegment760.children[0] = Transform761;

let Shape764 = browser.currentScene.createNode("Shape");
let LineSet765 = browser.currentScene.createNode("LineSet");
LineSet765.vertexCount = new MFInt32(new int[2]);
let ColorRGBA766 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA766.USE = "HAnimSegmentLineColorRGBA";
LineSet765.color = ColorRGBA766;

let Coordinate767 = browser.currentScene.createNode("Coordinate");
Coordinate767.point = new MFVec3f(new float[0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833]);
LineSet765.coord = Coordinate767;

Shape764.geometry = LineSet765;

HAnimSegment760.children[1] = Shape764;

HAnimJoint759.children = new MFNode();

HAnimJoint759.children[0] = HAnimSegment760;

let HAnimJoint768 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint768.DEF = "hanim_vt7";
HAnimJoint768.name = "vt7";
HAnimJoint768.center = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let HAnimSegment769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment769.DEF = "hanim_t7";
HAnimSegment769.name = "t7";
let Transform770 = browser.currentScene.createNode("Transform");
Transform770.translation = new SFVec3f(new float[0.0058,1.3625,-0.0833]);
let Transform771 = browser.currentScene.createNode("Transform");
let Shape772 = browser.currentScene.createNode("Shape");
Shape772.USE = "HAnimJointShape";
Transform771.child = new undefined();

Transform771.child[0] = Shape772;

Transform770.children = new MFNode();

Transform770.children[0] = Transform771;

HAnimSegment769.children = new MFNode();

HAnimSegment769.children[0] = Transform770;

let Shape773 = browser.currentScene.createNode("Shape");
let LineSet774 = browser.currentScene.createNode("LineSet");
LineSet774.vertexCount = new MFInt32(new int[2]);
let ColorRGBA775 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA775.USE = "HAnimSegmentLineColorRGBA";
LineSet774.color = ColorRGBA775;

let Coordinate776 = browser.currentScene.createNode("Coordinate");
Coordinate776.point = new MFVec3f(new float[0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08]);
LineSet774.coord = Coordinate776;

Shape773.geometry = LineSet774;

HAnimSegment769.children[1] = Shape773;

let HAnimSite777 = browser.currentScene.createNode("HAnimSite");
HAnimSite777.DEF = "hanim_l_chest_midsagittal_plane_pt";
HAnimSite777.name = "l_chest_midsagittal_plane_pt";
let TouchSensor778 = browser.currentScene.createNode("TouchSensor");
TouchSensor778.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite777.children = new MFNode();

HAnimSite777.children[0] = TouchSensor778;

let Shape779 = browser.currentScene.createNode("Shape");
Shape779.USE = "HAnimSiteShape";
HAnimSite777.children[1] = Shape779;

HAnimSegment769.children[2] = HAnimSite777;

let HAnimSite780 = browser.currentScene.createNode("HAnimSite");
HAnimSite780.DEF = "hanim_mesosternale_pt";
HAnimSite780.name = "mesosternale_pt";
let TouchSensor781 = browser.currentScene.createNode("TouchSensor");
TouchSensor781.description = "HAnimSite mesosternale_pt";
HAnimSite780.children = new MFNode();

HAnimSite780.children[0] = TouchSensor781;

let Shape782 = browser.currentScene.createNode("Shape");
Shape782.USE = "HAnimSiteShape";
HAnimSite780.children[1] = Shape782;

HAnimSegment769.children[3] = HAnimSite780;

let HAnimSite783 = browser.currentScene.createNode("HAnimSite");
HAnimSite783.DEF = "hanim_r_chest_midsagittal_plane_pt";
HAnimSite783.name = "r_chest_midsagittal_plane_pt";
let TouchSensor784 = browser.currentScene.createNode("TouchSensor");
TouchSensor784.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite783.children = new MFNode();

HAnimSite783.children[0] = TouchSensor784;

let Shape785 = browser.currentScene.createNode("Shape");
Shape785.USE = "HAnimSiteShape";
HAnimSite783.children[1] = Shape785;

HAnimSegment769.children[4] = HAnimSite783;

let HAnimSite786 = browser.currentScene.createNode("HAnimSite");
HAnimSite786.DEF = "hanim_rear_center_midsagittal_plane_pt";
HAnimSite786.name = "rear_center_midsagittal_plane_pt";
let TouchSensor787 = browser.currentScene.createNode("TouchSensor");
TouchSensor787.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite786.children = new MFNode();

HAnimSite786.children[0] = TouchSensor787;

let Shape788 = browser.currentScene.createNode("Shape");
Shape788.USE = "HAnimSiteShape";
HAnimSite786.children[1] = Shape788;

HAnimSegment769.children[5] = HAnimSite786;

HAnimJoint768.children = new MFNode();

HAnimJoint768.children[0] = HAnimSegment769;

let HAnimJoint789 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint789.DEF = "hanim_vt6";
HAnimJoint789.name = "vt6";
HAnimJoint789.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let HAnimSegment790 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment790.DEF = "hanim_t6";
HAnimSegment790.name = "t6";
let Transform791 = browser.currentScene.createNode("Transform");
Transform791.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Transform792 = browser.currentScene.createNode("Transform");
let Shape793 = browser.currentScene.createNode("Shape");
Shape793.USE = "HAnimJointShape";
Transform792.child = new undefined();

Transform792.child[0] = Shape793;

Transform791.children = new MFNode();

Transform791.children[0] = Transform792;

HAnimSegment790.children = new MFNode();

HAnimSegment790.children[0] = Transform791;

let Shape794 = browser.currentScene.createNode("Shape");
let LineSet795 = browser.currentScene.createNode("LineSet");
LineSet795.vertexCount = new MFInt32(new int[2]);
let ColorRGBA796 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA796.USE = "HAnimSegmentLineColorRGBA";
LineSet795.color = ColorRGBA796;

let Coordinate797 = browser.currentScene.createNode("Coordinate");
Coordinate797.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.006,1.4102,-0.0745]);
LineSet795.coord = Coordinate797;

Shape794.geometry = LineSet795;

HAnimSegment790.children[1] = Shape794;

let HAnimSite798 = browser.currentScene.createNode("HAnimSite");
HAnimSite798.DEF = "hanim_spine_1_middle_back_pt";
HAnimSite798.name = "spine_1_middle_back_pt";
let TouchSensor799 = browser.currentScene.createNode("TouchSensor");
TouchSensor799.description = "HAnimSite spine_1_middle_back_pt";
HAnimSite798.children = new MFNode();

HAnimSite798.children[0] = TouchSensor799;

let Shape800 = browser.currentScene.createNode("Shape");
Shape800.USE = "HAnimSiteShape";
HAnimSite798.children[1] = Shape800;

HAnimSegment790.children[2] = HAnimSite798;

HAnimJoint789.children = new MFNode();

HAnimJoint789.children[0] = HAnimSegment790;

let HAnimJoint801 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint801.DEF = "hanim_vt5";
HAnimJoint801.name = "vt5";
HAnimJoint801.center = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let HAnimSegment802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment802.DEF = "hanim_t5";
HAnimSegment802.name = "t5";
let Transform803 = browser.currentScene.createNode("Transform");
Transform803.translation = new SFVec3f(new float[0.006,1.4102,-0.0745]);
let Transform804 = browser.currentScene.createNode("Transform");
let Shape805 = browser.currentScene.createNode("Shape");
Shape805.USE = "HAnimJointShape";
Transform804.child = new undefined();

Transform804.child[0] = Shape805;

Transform803.children = new MFNode();

Transform803.children[0] = Transform804;

HAnimSegment802.children = new MFNode();

HAnimSegment802.children[0] = Transform803;

let Shape806 = browser.currentScene.createNode("Shape");
let LineSet807 = browser.currentScene.createNode("LineSet");
LineSet807.vertexCount = new MFInt32(new int[2]);
let ColorRGBA808 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA808.USE = "HAnimSegmentLineColorRGBA";
LineSet807.color = ColorRGBA808;

let Coordinate809 = browser.currentScene.createNode("Coordinate");
Coordinate809.point = new MFVec3f(new float[0.006,1.4102,-0.0745,0.0061,1.432,-0.0675]);
LineSet807.coord = Coordinate809;

Shape806.geometry = LineSet807;

HAnimSegment802.children[1] = Shape806;

HAnimJoint801.children = new MFNode();

HAnimJoint801.children[0] = HAnimSegment802;

let HAnimJoint810 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint810.DEF = "hanim_vt4";
HAnimJoint810.name = "vt4";
HAnimJoint810.center = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let HAnimSegment811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment811.DEF = "hanim_t4";
HAnimSegment811.name = "t4";
let Transform812 = browser.currentScene.createNode("Transform");
Transform812.translation = new SFVec3f(new float[0.0061,1.432,-0.0675]);
let Transform813 = browser.currentScene.createNode("Transform");
let Shape814 = browser.currentScene.createNode("Shape");
Shape814.USE = "HAnimJointShape";
Transform813.child = new undefined();

Transform813.child[0] = Shape814;

Transform812.children = new MFNode();

Transform812.children[0] = Transform813;

HAnimSegment811.children = new MFNode();

HAnimSegment811.children[0] = Transform812;

let Shape815 = browser.currentScene.createNode("Shape");
let LineSet816 = browser.currentScene.createNode("LineSet");
LineSet816.vertexCount = new MFInt32(new int[2]);
let ColorRGBA817 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA817.USE = "HAnimSegmentLineColorRGBA";
LineSet816.color = ColorRGBA817;

let Coordinate818 = browser.currentScene.createNode("Coordinate");
Coordinate818.point = new MFVec3f(new float[0.0061,1.432,-0.0675,0.0062,1.4583,-0.057]);
LineSet816.coord = Coordinate818;

Shape815.geometry = LineSet816;

HAnimSegment811.children[1] = Shape815;

HAnimJoint810.children = new MFNode();

HAnimJoint810.children[0] = HAnimSegment811;

let HAnimJoint819 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint819.DEF = "hanim_vt3";
HAnimJoint819.name = "vt3";
HAnimJoint819.center = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let HAnimSegment820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment820.DEF = "hanim_t3";
HAnimSegment820.name = "t3";
let Transform821 = browser.currentScene.createNode("Transform");
Transform821.translation = new SFVec3f(new float[0.0062,1.4583,-0.057]);
let Transform822 = browser.currentScene.createNode("Transform");
let Shape823 = browser.currentScene.createNode("Shape");
Shape823.USE = "HAnimJointShape";
Transform822.child = new undefined();

Transform822.child[0] = Shape823;

Transform821.children = new MFNode();

Transform821.children[0] = Transform822;

HAnimSegment820.children = new MFNode();

HAnimSegment820.children[0] = Transform821;

let Shape824 = browser.currentScene.createNode("Shape");
let LineSet825 = browser.currentScene.createNode("LineSet");
LineSet825.vertexCount = new MFInt32(new int[2]);
let ColorRGBA826 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA826.USE = "HAnimSegmentLineColorRGBA";
LineSet825.color = ColorRGBA826;

let Coordinate827 = browser.currentScene.createNode("Coordinate");
Coordinate827.point = new MFVec3f(new float[0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484]);
LineSet825.coord = Coordinate827;

Shape824.geometry = LineSet825;

HAnimSegment820.children[1] = Shape824;

HAnimJoint819.children = new MFNode();

HAnimJoint819.children[0] = HAnimSegment820;

let HAnimJoint828 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint828.DEF = "hanim_vt2";
HAnimJoint828.name = "vt2";
HAnimJoint828.center = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let HAnimSegment829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment829.DEF = "hanim_t2";
HAnimSegment829.name = "t2";
let Transform830 = browser.currentScene.createNode("Transform");
Transform830.translation = new SFVec3f(new float[0.0063,1.4761,-0.0484]);
let Transform831 = browser.currentScene.createNode("Transform");
let Shape832 = browser.currentScene.createNode("Shape");
Shape832.USE = "HAnimJointShape";
Transform831.child = new undefined();

Transform831.child[0] = Shape832;

Transform830.children = new MFNode();

Transform830.children[0] = Transform831;

HAnimSegment829.children = new MFNode();

HAnimSegment829.children[0] = Transform830;

let Shape833 = browser.currentScene.createNode("Shape");
let LineSet834 = browser.currentScene.createNode("LineSet");
LineSet834.vertexCount = new MFInt32(new int[2]);
let ColorRGBA835 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA835.USE = "HAnimSegmentLineColorRGBA";
LineSet834.color = ColorRGBA835;

let Coordinate836 = browser.currentScene.createNode("Coordinate");
Coordinate836.point = new MFVec3f(new float[0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387]);
LineSet834.coord = Coordinate836;

Shape833.geometry = LineSet834;

HAnimSegment829.children[1] = Shape833;

let HAnimSite837 = browser.currentScene.createNode("HAnimSite");
HAnimSite837.DEF = "hanim_cervicale_pt";
HAnimSite837.name = "cervicale_pt";
HAnimSite837.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
let TouchSensor838 = browser.currentScene.createNode("TouchSensor");
TouchSensor838.description = "HAnimSite cervicale_pt";
HAnimSite837.children = new MFNode();

HAnimSite837.children[0] = TouchSensor838;

let Shape839 = browser.currentScene.createNode("Shape");
Shape839.USE = "HAnimSiteShape";
HAnimSite837.children[1] = Shape839;

HAnimSegment829.children[2] = HAnimSite837;

let HAnimSite840 = browser.currentScene.createNode("HAnimSite");
HAnimSite840.DEF = "hanim_suprasternale_pt";
HAnimSite840.name = "suprasternale_pt";
HAnimSite840.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
let TouchSensor841 = browser.currentScene.createNode("TouchSensor");
TouchSensor841.description = "HAnimSite suprasternale_pt";
HAnimSite840.children = new MFNode();

HAnimSite840.children[0] = TouchSensor841;

let Shape842 = browser.currentScene.createNode("Shape");
Shape842.USE = "HAnimSiteShape";
HAnimSite840.children[1] = Shape842;

HAnimSegment829.children[3] = HAnimSite840;

HAnimJoint828.children = new MFNode();

HAnimJoint828.children[0] = HAnimSegment829;

let HAnimJoint843 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint843.DEF = "hanim_vt1";
HAnimJoint843.name = "vt1";
HAnimJoint843.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let HAnimSegment844 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment844.DEF = "hanim_t1";
HAnimSegment844.name = "t1";
let Transform845 = browser.currentScene.createNode("Transform");
Transform845.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Transform846 = browser.currentScene.createNode("Transform");
let Shape847 = browser.currentScene.createNode("Shape");
Shape847.USE = "HAnimJointShape";
Transform846.child = new undefined();

Transform846.child[0] = Shape847;

Transform845.children = new MFNode();

Transform845.children[0] = Transform846;

HAnimSegment844.children = new MFNode();

HAnimSegment844.children[0] = Transform845;

let Shape848 = browser.currentScene.createNode("Shape");
let LineSet849 = browser.currentScene.createNode("LineSet");
LineSet849.vertexCount = new MFInt32(new int[2]);
let ColorRGBA850 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA850.USE = "HAnimSegmentLineColorRGBA";
LineSet849.color = ColorRGBA850;

let Coordinate851 = browser.currentScene.createNode("Coordinate");
Coordinate851.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301]);
LineSet849.coord = Coordinate851;

Shape848.geometry = LineSet849;

HAnimSegment844.children[1] = Shape848;

let HAnimSite852 = browser.currentScene.createNode("HAnimSite");
HAnimSite852.DEF = "hanim_l_neck_base_pt";
HAnimSite852.name = "l_neck_base_pt";
HAnimSite852.translation = new SFVec3f(new float[0.0646,1.5141,-0.038]);
let TouchSensor853 = browser.currentScene.createNode("TouchSensor");
TouchSensor853.description = "HAnimSite l_neck_base_pt";
HAnimSite852.children = new MFNode();

HAnimSite852.children[0] = TouchSensor853;

let Shape854 = browser.currentScene.createNode("Shape");
Shape854.USE = "HAnimSiteShape";
HAnimSite852.children[1] = Shape854;

HAnimSegment844.children[2] = HAnimSite852;

let HAnimSite855 = browser.currentScene.createNode("HAnimSite");
HAnimSite855.DEF = "hanim_r_neck_base_pt";
HAnimSite855.name = "r_neck_base_pt";
HAnimSite855.translation = new SFVec3f(new float[-0.0419,1.5149,-0.022]);
let TouchSensor856 = browser.currentScene.createNode("TouchSensor");
TouchSensor856.description = "HAnimSite r_neck_base_pt";
HAnimSite855.children = new MFNode();

HAnimSite855.children[0] = TouchSensor856;

let Shape857 = browser.currentScene.createNode("Shape");
Shape857.USE = "HAnimSiteShape";
HAnimSite855.children[1] = Shape857;

HAnimSegment844.children[3] = HAnimSite855;

let Shape858 = browser.currentScene.createNode("Shape");
let LineSet859 = browser.currentScene.createNode("LineSet");
LineSet859.vertexCount = new MFInt32(new int[2]);
let ColorRGBA860 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA860.USE = "HAnimSegmentLineColorRGBA";
LineSet859.color = ColorRGBA860;

let Coordinate861 = browser.currentScene.createNode("Coordinate");
Coordinate861.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet859.coord = Coordinate861;

Shape858.geometry = LineSet859;

HAnimSegment844.children[4] = Shape858;

let HAnimSite862 = browser.currentScene.createNode("HAnimSite");
HAnimSite862.DEF = "hanim_l_acromion_pt";
HAnimSite862.name = "l_acromion_pt";
HAnimSite862.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
let TouchSensor863 = browser.currentScene.createNode("TouchSensor");
TouchSensor863.description = "HAnimSite l_acromion_pt";
HAnimSite862.children = new MFNode();

HAnimSite862.children[0] = TouchSensor863;

let Shape864 = browser.currentScene.createNode("Shape");
Shape864.USE = "HAnimSiteShape";
HAnimSite862.children[1] = Shape864;

HAnimSegment844.children[5] = HAnimSite862;

let HAnimSite865 = browser.currentScene.createNode("HAnimSite");
HAnimSite865.DEF = "hanim_l_axilla_distal_pt";
HAnimSite865.name = "l_axilla_distal_pt";
HAnimSite865.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
let TouchSensor866 = browser.currentScene.createNode("TouchSensor");
TouchSensor866.description = "HAnimSite l_axilla_distal_pt";
HAnimSite865.children = new MFNode();

HAnimSite865.children[0] = TouchSensor866;

let Shape867 = browser.currentScene.createNode("Shape");
Shape867.USE = "HAnimSiteShape";
HAnimSite865.children[1] = Shape867;

HAnimSegment844.children[6] = HAnimSite865;

let HAnimSite868 = browser.currentScene.createNode("HAnimSite");
HAnimSite868.DEF = "hanim_l_axilla_posterior_folds_pt";
HAnimSite868.name = "l_axilla_posterior_folds_pt";
let TouchSensor869 = browser.currentScene.createNode("TouchSensor");
TouchSensor869.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite868.children = new MFNode();

HAnimSite868.children[0] = TouchSensor869;

let Shape870 = browser.currentScene.createNode("Shape");
Shape870.USE = "HAnimSiteShape";
HAnimSite868.children[1] = Shape870;

HAnimSegment844.children[7] = HAnimSite868;

let HAnimSite871 = browser.currentScene.createNode("HAnimSite");
HAnimSite871.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite871.name = "l_axilla_proximal_pt";
HAnimSite871.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
let TouchSensor872 = browser.currentScene.createNode("TouchSensor");
TouchSensor872.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite871.children = new MFNode();

HAnimSite871.children[0] = TouchSensor872;

let Shape873 = browser.currentScene.createNode("Shape");
Shape873.USE = "HAnimSiteShape";
HAnimSite871.children[1] = Shape873;

HAnimSegment844.children[8] = HAnimSite871;

let HAnimSite874 = browser.currentScene.createNode("HAnimSite");
HAnimSite874.DEF = "hanim_l_clavicale_pt";
HAnimSite874.name = "l_clavicale_pt";
HAnimSite874.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
let TouchSensor875 = browser.currentScene.createNode("TouchSensor");
TouchSensor875.description = "HAnimSite l_clavicale_pt";
HAnimSite874.children = new MFNode();

HAnimSite874.children[0] = TouchSensor875;

let Shape876 = browser.currentScene.createNode("Shape");
Shape876.USE = "HAnimSiteShape";
HAnimSite874.children[1] = Shape876;

HAnimSegment844.children[9] = HAnimSite874;

let Shape877 = browser.currentScene.createNode("Shape");
let LineSet878 = browser.currentScene.createNode("LineSet");
LineSet878.vertexCount = new MFInt32(new int[2]);
let ColorRGBA879 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA879.USE = "HAnimSegmentLineColorRGBA";
LineSet878.color = ColorRGBA879;

let Coordinate880 = browser.currentScene.createNode("Coordinate");
Coordinate880.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet878.coord = Coordinate880;

Shape877.geometry = LineSet878;

HAnimSegment844.children[10] = Shape877;

let HAnimSite881 = browser.currentScene.createNode("HAnimSite");
HAnimSite881.DEF = "hanim_r_acromion_pt";
HAnimSite881.name = "r_acromion_pt";
HAnimSite881.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
let TouchSensor882 = browser.currentScene.createNode("TouchSensor");
TouchSensor882.description = "HAnimSite r_acromion_pt";
HAnimSite881.children = new MFNode();

HAnimSite881.children[0] = TouchSensor882;

let Shape883 = browser.currentScene.createNode("Shape");
Shape883.USE = "HAnimSiteShape";
HAnimSite881.children[1] = Shape883;

HAnimSegment844.children[11] = HAnimSite881;

let HAnimSite884 = browser.currentScene.createNode("HAnimSite");
HAnimSite884.DEF = "hanim_r_axilla_distal_pt";
HAnimSite884.name = "r_axilla_distal_pt";
HAnimSite884.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
let TouchSensor885 = browser.currentScene.createNode("TouchSensor");
TouchSensor885.description = "HAnimSite r_axilla_distal_pt";
HAnimSite884.children = new MFNode();

HAnimSite884.children[0] = TouchSensor885;

let Shape886 = browser.currentScene.createNode("Shape");
Shape886.USE = "HAnimSiteShape";
HAnimSite884.children[1] = Shape886;

HAnimSegment844.children[12] = HAnimSite884;

let HAnimSite887 = browser.currentScene.createNode("HAnimSite");
HAnimSite887.DEF = "hanim_r_axilla_posterior_folds_pt";
HAnimSite887.name = "r_axilla_posterior_folds_pt";
let TouchSensor888 = browser.currentScene.createNode("TouchSensor");
TouchSensor888.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite887.children = new MFNode();

HAnimSite887.children[0] = TouchSensor888;

let Shape889 = browser.currentScene.createNode("Shape");
Shape889.USE = "HAnimSiteShape";
HAnimSite887.children[1] = Shape889;

HAnimSegment844.children[13] = HAnimSite887;

let HAnimSite890 = browser.currentScene.createNode("HAnimSite");
HAnimSite890.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite890.name = "r_axilla_proximal_pt";
HAnimSite890.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
let TouchSensor891 = browser.currentScene.createNode("TouchSensor");
TouchSensor891.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite890.children = new MFNode();

HAnimSite890.children[0] = TouchSensor891;

let Shape892 = browser.currentScene.createNode("Shape");
Shape892.USE = "HAnimSiteShape";
HAnimSite890.children[1] = Shape892;

HAnimSegment844.children[14] = HAnimSite890;

let HAnimSite893 = browser.currentScene.createNode("HAnimSite");
HAnimSite893.DEF = "hanim_r_clavicale_pt";
HAnimSite893.name = "r_clavicale_pt";
HAnimSite893.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
let TouchSensor894 = browser.currentScene.createNode("TouchSensor");
TouchSensor894.description = "HAnimSite r_clavicale_pt";
HAnimSite893.children = new MFNode();

HAnimSite893.children[0] = TouchSensor894;

let Shape895 = browser.currentScene.createNode("Shape");
Shape895.USE = "HAnimSiteShape";
HAnimSite893.children[1] = Shape895;

HAnimSegment844.children[15] = HAnimSite893;

HAnimJoint843.children = new MFNode();

HAnimJoint843.children[0] = HAnimSegment844;

let HAnimJoint896 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint896.DEF = "hanim_vc7";
HAnimJoint896.name = "vc7";
HAnimJoint896.center = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let HAnimSegment897 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment897.DEF = "hanim_c7";
HAnimSegment897.name = "c7";
let Transform898 = browser.currentScene.createNode("Transform");
Transform898.translation = new SFVec3f(new float[0.0066,1.5132,-0.0301]);
let Transform899 = browser.currentScene.createNode("Transform");
let Shape900 = browser.currentScene.createNode("Shape");
Shape900.USE = "HAnimJointShape";
Transform899.child = new undefined();

Transform899.child[0] = Shape900;

Transform898.children = new MFNode();

Transform898.children[0] = Transform899;

HAnimSegment897.children = new MFNode();

HAnimSegment897.children[0] = Transform898;

let Shape901 = browser.currentScene.createNode("Shape");
let LineSet902 = browser.currentScene.createNode("LineSet");
LineSet902.vertexCount = new MFInt32(new int[2]);
let ColorRGBA903 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA903.USE = "HAnimSegmentLineColorRGBA";
LineSet902.color = ColorRGBA903;

let Coordinate904 = browser.currentScene.createNode("Coordinate");
Coordinate904.point = new MFVec3f(new float[0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143]);
LineSet902.coord = Coordinate904;

Shape901.geometry = LineSet902;

HAnimSegment897.children[1] = Shape901;

HAnimJoint896.children = new MFNode();

HAnimJoint896.children[0] = HAnimSegment897;

let HAnimJoint905 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint905.DEF = "hanim_vc6";
HAnimJoint905.name = "vc6";
HAnimJoint905.center = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let HAnimSegment906 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment906.DEF = "hanim_c6";
HAnimSegment906.name = "c6";
let Transform907 = browser.currentScene.createNode("Transform");
Transform907.translation = new SFVec3f(new float[0.0066,1.5357,-0.0143]);
let Transform908 = browser.currentScene.createNode("Transform");
let Shape909 = browser.currentScene.createNode("Shape");
Shape909.USE = "HAnimJointShape";
Transform908.child = new undefined();

Transform908.child[0] = Shape909;

Transform907.children = new MFNode();

Transform907.children[0] = Transform908;

HAnimSegment906.children = new MFNode();

HAnimSegment906.children[0] = Transform907;

let Shape910 = browser.currentScene.createNode("Shape");
let LineSet911 = browser.currentScene.createNode("LineSet");
LineSet911.vertexCount = new MFInt32(new int[2]);
let ColorRGBA912 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA912.USE = "HAnimSegmentLineColorRGBA";
LineSet911.color = ColorRGBA912;

let Coordinate913 = browser.currentScene.createNode("Coordinate");
Coordinate913.point = new MFVec3f(new float[0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082]);
LineSet911.coord = Coordinate913;

Shape910.geometry = LineSet911;

HAnimSegment906.children[1] = Shape910;

HAnimJoint905.children = new MFNode();

HAnimJoint905.children[0] = HAnimSegment906;

let HAnimJoint914 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint914.DEF = "hanim_vc5";
HAnimJoint914.name = "vc5";
HAnimJoint914.center = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let HAnimSegment915 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment915.DEF = "hanim_c5";
HAnimSegment915.name = "c5";
let Transform916 = browser.currentScene.createNode("Transform");
Transform916.translation = new SFVec3f(new float[0.0066,1.552,-0.0082]);
let Transform917 = browser.currentScene.createNode("Transform");
let Shape918 = browser.currentScene.createNode("Shape");
Shape918.USE = "HAnimJointShape";
Transform917.child = new undefined();

Transform917.child[0] = Shape918;

Transform916.children = new MFNode();

Transform916.children[0] = Transform917;

HAnimSegment915.children = new MFNode();

HAnimSegment915.children[0] = Transform916;

let Shape919 = browser.currentScene.createNode("Shape");
let LineSet920 = browser.currentScene.createNode("LineSet");
LineSet920.vertexCount = new MFInt32(new int[2]);
let ColorRGBA921 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA921.USE = "HAnimSegmentLineColorRGBA";
LineSet920.color = ColorRGBA921;

let Coordinate922 = browser.currentScene.createNode("Coordinate");
Coordinate922.point = new MFVec3f(new float[0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084]);
LineSet920.coord = Coordinate922;

Shape919.geometry = LineSet920;

HAnimSegment915.children[1] = Shape919;

HAnimJoint914.children = new MFNode();

HAnimJoint914.children[0] = HAnimSegment915;

let HAnimJoint923 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint923.DEF = "hanim_vc4";
HAnimJoint923.name = "vc4";
HAnimJoint923.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let HAnimSegment924 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment924.DEF = "hanim_c4";
HAnimSegment924.name = "c4";
let Transform925 = browser.currentScene.createNode("Transform");
Transform925.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Transform926 = browser.currentScene.createNode("Transform");
let Shape927 = browser.currentScene.createNode("Shape");
Shape927.USE = "HAnimJointShape";
Transform926.child = new undefined();

Transform926.child[0] = Shape927;

Transform925.children = new MFNode();

Transform925.children[0] = Transform926;

HAnimSegment924.children = new MFNode();

HAnimSegment924.children[0] = Transform925;

let Shape928 = browser.currentScene.createNode("Shape");
let LineSet929 = browser.currentScene.createNode("LineSet");
LineSet929.vertexCount = new MFInt32(new int[2]);
let ColorRGBA930 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA930.USE = "HAnimSegmentLineColorRGBA";
LineSet929.color = ColorRGBA930;

let Coordinate931 = browser.currentScene.createNode("Coordinate");
Coordinate931.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103]);
LineSet929.coord = Coordinate931;

Shape928.geometry = LineSet929;

HAnimSegment924.children[1] = Shape928;

HAnimJoint923.children = new MFNode();

HAnimJoint923.children[0] = HAnimSegment924;

let HAnimJoint932 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint932.DEF = "hanim_vc3";
HAnimJoint932.name = "vc3";
HAnimJoint932.center = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let HAnimSegment933 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment933.DEF = "hanim_c3";
HAnimSegment933.name = "c3";
let Transform934 = browser.currentScene.createNode("Transform");
Transform934.translation = new SFVec3f(new float[0.0066,1.58,-0.0103]);
let Transform935 = browser.currentScene.createNode("Transform");
let Shape936 = browser.currentScene.createNode("Shape");
Shape936.USE = "HAnimJointShape";
Transform935.child = new undefined();

Transform935.child[0] = Shape936;

Transform934.children = new MFNode();

Transform934.children[0] = Transform935;

HAnimSegment933.children = new MFNode();

HAnimSegment933.children[0] = Transform934;

let Shape937 = browser.currentScene.createNode("Shape");
let LineSet938 = browser.currentScene.createNode("LineSet");
LineSet938.vertexCount = new MFInt32(new int[2]);
let ColorRGBA939 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA939.USE = "HAnimSegmentLineColorRGBA";
LineSet938.color = ColorRGBA939;

let Coordinate940 = browser.currentScene.createNode("Coordinate");
Coordinate940.point = new MFVec3f(new float[0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103]);
LineSet938.coord = Coordinate940;

Shape937.geometry = LineSet938;

HAnimSegment933.children[1] = Shape937;

let HAnimSite941 = browser.currentScene.createNode("HAnimSite");
HAnimSite941.DEF = "hanim_adams_apple_pt";
HAnimSite941.name = "adams_apple_pt";
let TouchSensor942 = browser.currentScene.createNode("TouchSensor");
TouchSensor942.description = "HAnimSite adams_apple_pt";
HAnimSite941.children = new MFNode();

HAnimSite941.children[0] = TouchSensor942;

let Shape943 = browser.currentScene.createNode("Shape");
Shape943.USE = "HAnimSiteShape";
HAnimSite941.children[1] = Shape943;

HAnimSegment933.children[2] = HAnimSite941;

HAnimJoint932.children = new MFNode();

HAnimJoint932.children[0] = HAnimSegment933;

let HAnimJoint944 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint944.DEF = "hanim_vc2";
HAnimJoint944.name = "vc2";
HAnimJoint944.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let HAnimSegment945 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment945.DEF = "hanim_c2";
HAnimSegment945.name = "c2";
let Transform946 = browser.currentScene.createNode("Transform");
Transform946.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Transform947 = browser.currentScene.createNode("Transform");
let Shape948 = browser.currentScene.createNode("Shape");
Shape948.USE = "HAnimJointShape";
Transform947.child = new undefined();

Transform947.child[0] = Shape948;

Transform946.children = new MFNode();

Transform946.children[0] = Transform947;

HAnimSegment945.children = new MFNode();

HAnimSegment945.children[0] = Transform946;

let Shape949 = browser.currentScene.createNode("Shape");
let LineSet950 = browser.currentScene.createNode("LineSet");
LineSet950.vertexCount = new MFInt32(new int[2]);
let ColorRGBA951 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA951.USE = "HAnimSegmentLineColorRGBA";
LineSet950.color = ColorRGBA951;

let Coordinate952 = browser.currentScene.createNode("Coordinate");
Coordinate952.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034]);
LineSet950.coord = Coordinate952;

Shape949.geometry = LineSet950;

HAnimSegment945.children[1] = Shape949;

HAnimJoint944.children = new MFNode();

HAnimJoint944.children[0] = HAnimSegment945;

let HAnimJoint953 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint953.DEF = "hanim_vc1";
HAnimJoint953.name = "vc1";
HAnimJoint953.center = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let HAnimSegment954 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment954.DEF = "hanim_c1";
HAnimSegment954.name = "c1";
let Transform955 = browser.currentScene.createNode("Transform");
Transform955.translation = new SFVec3f(new float[0.0066,1.6144,-0.0034]);
let Transform956 = browser.currentScene.createNode("Transform");
let Shape957 = browser.currentScene.createNode("Shape");
Shape957.USE = "HAnimJointShape";
Transform956.child = new undefined();

Transform956.child[0] = Shape957;

Transform955.children = new MFNode();

Transform955.children[0] = Transform956;

HAnimSegment954.children = new MFNode();

HAnimSegment954.children[0] = Transform955;

let Shape958 = browser.currentScene.createNode("Shape");
let LineSet959 = browser.currentScene.createNode("LineSet");
LineSet959.vertexCount = new MFInt32(new int[2]);
let ColorRGBA960 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA960.USE = "HAnimSegmentLineColorRGBA";
LineSet959.color = ColorRGBA960;

let Coordinate961 = browser.currentScene.createNode("Coordinate");
Coordinate961.point = new MFVec3f(new float[0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236]);
LineSet959.coord = Coordinate961;

Shape958.geometry = LineSet959;

HAnimSegment954.children[1] = Shape958;

let HAnimSite962 = browser.currentScene.createNode("HAnimSite");
HAnimSite962.DEF = "hanim_glabella_pt";
HAnimSite962.name = "glabella_pt";
let TouchSensor963 = browser.currentScene.createNode("TouchSensor");
TouchSensor963.description = "HAnimSite glabella_pt";
HAnimSite962.children = new MFNode();

HAnimSite962.children[0] = TouchSensor963;

let Shape964 = browser.currentScene.createNode("Shape");
Shape964.USE = "HAnimSiteShape";
HAnimSite962.children[1] = Shape964;

HAnimSegment954.children[2] = HAnimSite962;

let HAnimSite965 = browser.currentScene.createNode("HAnimSite");
HAnimSite965.DEF = "hanim_l_ectocanthus_pt";
HAnimSite965.name = "l_ectocanthus_pt";
let TouchSensor966 = browser.currentScene.createNode("TouchSensor");
TouchSensor966.description = "HAnimSite l_ectocanthus_pt";
HAnimSite965.children = new MFNode();

HAnimSite965.children[0] = TouchSensor966;

let Shape967 = browser.currentScene.createNode("Shape");
Shape967.USE = "HAnimSiteShape";
HAnimSite965.children[1] = Shape967;

HAnimSegment954.children[3] = HAnimSite965;

let HAnimSite968 = browser.currentScene.createNode("HAnimSite");
HAnimSite968.DEF = "hanim_l_infraorbitale_pt";
HAnimSite968.name = "l_infraorbitale_pt";
HAnimSite968.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
let TouchSensor969 = browser.currentScene.createNode("TouchSensor");
TouchSensor969.description = "HAnimSite l_infraorbitale_pt";
HAnimSite968.children = new MFNode();

HAnimSite968.children[0] = TouchSensor969;

let Shape970 = browser.currentScene.createNode("Shape");
Shape970.USE = "HAnimSiteShape";
HAnimSite968.children[1] = Shape970;

HAnimSegment954.children[4] = HAnimSite968;

let HAnimSite971 = browser.currentScene.createNode("HAnimSite");
HAnimSite971.DEF = "hanim_l_tragion_pt";
HAnimSite971.name = "l_tragion_pt";
HAnimSite971.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
let TouchSensor972 = browser.currentScene.createNode("TouchSensor");
TouchSensor972.description = "HAnimSite l_tragion_pt";
HAnimSite971.children = new MFNode();

HAnimSite971.children[0] = TouchSensor972;

let Shape973 = browser.currentScene.createNode("Shape");
Shape973.USE = "HAnimSiteShape";
HAnimSite971.children[1] = Shape973;

HAnimSegment954.children[5] = HAnimSite971;

let HAnimSite974 = browser.currentScene.createNode("HAnimSite");
HAnimSite974.DEF = "hanim_nuchale_pt";
HAnimSite974.name = "nuchale_pt";
HAnimSite974.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
let TouchSensor975 = browser.currentScene.createNode("TouchSensor");
TouchSensor975.description = "HAnimSite nuchale_pt";
HAnimSite974.children = new MFNode();

HAnimSite974.children[0] = TouchSensor975;

let Shape976 = browser.currentScene.createNode("Shape");
Shape976.USE = "HAnimSiteShape";
HAnimSite974.children[1] = Shape976;

HAnimSegment954.children[6] = HAnimSite974;

let HAnimSite977 = browser.currentScene.createNode("HAnimSite");
HAnimSite977.DEF = "hanim_opisthocranion_pt";
HAnimSite977.name = "opisthocranion_pt";
let TouchSensor978 = browser.currentScene.createNode("TouchSensor");
TouchSensor978.description = "HAnimSite opisthocranion_pt";
HAnimSite977.children = new MFNode();

HAnimSite977.children[0] = TouchSensor978;

let Shape979 = browser.currentScene.createNode("Shape");
Shape979.USE = "HAnimSiteShape";
HAnimSite977.children[1] = Shape979;

HAnimSegment954.children[7] = HAnimSite977;

let HAnimSite980 = browser.currentScene.createNode("HAnimSite");
HAnimSite980.DEF = "hanim_r_ectocanthus_pt";
HAnimSite980.name = "r_ectocanthus_pt";
let TouchSensor981 = browser.currentScene.createNode("TouchSensor");
TouchSensor981.description = "HAnimSite r_ectocanthus_pt";
HAnimSite980.children = new MFNode();

HAnimSite980.children[0] = TouchSensor981;

let Shape982 = browser.currentScene.createNode("Shape");
Shape982.USE = "HAnimSiteShape";
HAnimSite980.children[1] = Shape982;

HAnimSegment954.children[8] = HAnimSite980;

let HAnimSite983 = browser.currentScene.createNode("HAnimSite");
HAnimSite983.DEF = "hanim_r_infraorbitale_pt";
HAnimSite983.name = "r_infraorbitale_pt";
HAnimSite983.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
let TouchSensor984 = browser.currentScene.createNode("TouchSensor");
TouchSensor984.description = "HAnimSite r_infraorbitale_pt";
HAnimSite983.children = new MFNode();

HAnimSite983.children[0] = TouchSensor984;

let Shape985 = browser.currentScene.createNode("Shape");
Shape985.USE = "HAnimSiteShape";
HAnimSite983.children[1] = Shape985;

HAnimSegment954.children[9] = HAnimSite983;

let HAnimSite986 = browser.currentScene.createNode("HAnimSite");
HAnimSite986.DEF = "hanim_r_tragion_pt";
HAnimSite986.name = "r_tragion_pt";
HAnimSite986.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
let TouchSensor987 = browser.currentScene.createNode("TouchSensor");
TouchSensor987.description = "HAnimSite r_tragion_pt";
HAnimSite986.children = new MFNode();

HAnimSite986.children[0] = TouchSensor987;

let Shape988 = browser.currentScene.createNode("Shape");
Shape988.USE = "HAnimSiteShape";
HAnimSite986.children[1] = Shape988;

HAnimSegment954.children[10] = HAnimSite986;

let HAnimSite989 = browser.currentScene.createNode("HAnimSite");
HAnimSite989.DEF = "hanim_sellion_pt";
HAnimSite989.name = "sellion_pt";
HAnimSite989.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
let TouchSensor990 = browser.currentScene.createNode("TouchSensor");
TouchSensor990.description = "HAnimSite sellion_pt";
HAnimSite989.children = new MFNode();

HAnimSite989.children[0] = TouchSensor990;

let Shape991 = browser.currentScene.createNode("Shape");
Shape991.USE = "HAnimSiteShape";
HAnimSite989.children[1] = Shape991;

HAnimSegment954.children[11] = HAnimSite989;

let HAnimSite992 = browser.currentScene.createNode("HAnimSite");
HAnimSite992.DEF = "hanim_skull_vertex_pt";
HAnimSite992.name = "skull_vertex_pt";
HAnimSite992.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
let TouchSensor993 = browser.currentScene.createNode("TouchSensor");
TouchSensor993.description = "HAnimSite skull_vertex_pt";
HAnimSite992.children = new MFNode();

HAnimSite992.children[0] = TouchSensor993;

let Shape994 = browser.currentScene.createNode("Shape");
Shape994.USE = "HAnimSiteShape";
HAnimSite992.children[1] = Shape994;

HAnimSegment954.children[12] = HAnimSite992;

HAnimJoint953.children = new MFNode();

HAnimJoint953.children[0] = HAnimSegment954;

let HAnimJoint995 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint995.DEF = "hanim_skullbase";
HAnimJoint995.name = "skullbase";
HAnimJoint995.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let HAnimSegment996 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment996.DEF = "hanim_skull";
HAnimSegment996.name = "skull";
let Transform997 = browser.currentScene.createNode("Transform");
Transform997.translation = new SFVec3f(new float[0.0044,1.6209,0.0236]);
let Transform998 = browser.currentScene.createNode("Transform");
let Shape999 = browser.currentScene.createNode("Shape");
Shape999.USE = "HAnimJointShape";
Transform998.child = new undefined();

Transform998.child[0] = Shape999;

Transform997.children = new MFNode();

Transform997.children[0] = Transform998;

HAnimSegment996.children = new MFNode();

HAnimSegment996.children[0] = Transform997;

let Shape1000 = browser.currentScene.createNode("Shape");
let LineSet1001 = browser.currentScene.createNode("LineSet");
LineSet1001.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1002 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1002.USE = "HAnimSegmentLineColorRGBA";
LineSet1001.color = ColorRGBA1002;

let Coordinate1003 = browser.currentScene.createNode("Coordinate");
Coordinate1003.point = new MFVec3f(new float[0.0044,1.6209,0.0236,2.2365,1.87,1.9285]);
LineSet1001.coord = Coordinate1003;

Shape1000.geometry = LineSet1001;

HAnimSegment996.children[1] = Shape1000;

let Shape1004 = browser.currentScene.createNode("Shape");
let LineSet1005 = browser.currentScene.createNode("LineSet");
LineSet1005.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1006 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1006.USE = "HAnimSegmentLineColorRGBA";
LineSet1005.color = ColorRGBA1006;

let Coordinate1007 = browser.currentScene.createNode("Coordinate");
Coordinate1007.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-2.2535,1.87,1.9285]);
LineSet1005.coord = Coordinate1007;

Shape1004.geometry = LineSet1005;

HAnimSegment996.children[2] = Shape1004;

let Shape1008 = browser.currentScene.createNode("Shape");
let LineSet1009 = browser.currentScene.createNode("LineSet");
LineSet1009.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1010 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1010.USE = "HAnimSegmentLineColorRGBA";
LineSet1009.color = ColorRGBA1010;

let Coordinate1011 = browser.currentScene.createNode("Coordinate");
Coordinate1011.point = new MFVec3f(new float[0.0044,1.6209,0.0236,2.1305,1.8444,4.1555]);
LineSet1009.coord = Coordinate1011;

Shape1008.geometry = LineSet1009;

HAnimSegment996.children[3] = Shape1008;

let Shape1012 = browser.currentScene.createNode("Shape");
let LineSet1013 = browser.currentScene.createNode("LineSet");
LineSet1013.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1014 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1014.USE = "HAnimSegmentLineColorRGBA";
LineSet1013.color = ColorRGBA1014;

let Coordinate1015 = browser.currentScene.createNode("Coordinate");
Coordinate1015.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-2.1475,1.8444,4.1555]);
LineSet1013.coord = Coordinate1015;

Shape1012.geometry = LineSet1013;

HAnimSegment996.children[4] = Shape1012;

let Shape1016 = browser.currentScene.createNode("Shape");
let LineSet1017 = browser.currentScene.createNode("LineSet");
LineSet1017.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1018 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1018.USE = "HAnimSegmentLineColorRGBA";
LineSet1017.color = ColorRGBA1018;

let Coordinate1019 = browser.currentScene.createNode("Coordinate");
Coordinate1019.point = new MFVec3f(new float[0.0044,1.6209,0.0236,0.9581,1.8563,5.2175]);
LineSet1017.coord = Coordinate1019;

Shape1016.geometry = LineSet1017;

HAnimSegment996.children[5] = Shape1016;

let Shape1020 = browser.currentScene.createNode("Shape");
let LineSet1021 = browser.currentScene.createNode("LineSet");
LineSet1021.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1022 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1022.USE = "HAnimSegmentLineColorRGBA";
LineSet1021.color = ColorRGBA1022;

let Coordinate1023 = browser.currentScene.createNode("Coordinate");
Coordinate1023.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.9751,1.8563,5.2175]);
LineSet1021.coord = Coordinate1023;

Shape1020.geometry = LineSet1021;

HAnimSegment996.children[6] = Shape1020;

let Shape1024 = browser.currentScene.createNode("Shape");
let LineSet1025 = browser.currentScene.createNode("LineSet");
LineSet1025.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1026 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1026.USE = "HAnimSegmentLineColorRGBA";
LineSet1025.color = ColorRGBA1026;

let Coordinate1027 = browser.currentScene.createNode("Coordinate");
Coordinate1027.point = new MFVec3f(new float[0.0044,1.6209,0.0236,-0.0085,1.7229,1.148]);
LineSet1025.coord = Coordinate1027;

Shape1024.geometry = LineSet1025;

HAnimSegment996.children[7] = Shape1024;

let HAnimSite1028 = browser.currentScene.createNode("HAnimSite");
HAnimSite1028.DEF = "hanim_l_gonion_pt";
HAnimSite1028.name = "l_gonion_pt";
HAnimSite1028.translation = new SFVec3f(new float[0.0631,1.553,0.033]);
let TouchSensor1029 = browser.currentScene.createNode("TouchSensor");
TouchSensor1029.description = "HAnimSite l_gonion_pt";
HAnimSite1028.children = new MFNode();

HAnimSite1028.children[0] = TouchSensor1029;

let Shape1030 = browser.currentScene.createNode("Shape");
Shape1030.USE = "HAnimSiteShape";
HAnimSite1028.children[1] = Shape1030;

HAnimSegment996.children[8] = HAnimSite1028;

let HAnimSite1031 = browser.currentScene.createNode("HAnimSite");
HAnimSite1031.DEF = "hanim_menton_pt";
HAnimSite1031.name = "menton_pt";
let TouchSensor1032 = browser.currentScene.createNode("TouchSensor");
TouchSensor1032.description = "HAnimSite menton_pt";
HAnimSite1031.children = new MFNode();

HAnimSite1031.children[0] = TouchSensor1032;

let Shape1033 = browser.currentScene.createNode("Shape");
Shape1033.USE = "HAnimSiteShape";
HAnimSite1031.children[1] = Shape1033;

HAnimSegment996.children[9] = HAnimSite1031;

let HAnimSite1034 = browser.currentScene.createNode("HAnimSite");
HAnimSite1034.DEF = "hanim_r_gonion_pt";
HAnimSite1034.name = "r_gonion_pt";
HAnimSite1034.translation = new SFVec3f(new float[-0.052,1.5529,0.0347]);
let TouchSensor1035 = browser.currentScene.createNode("TouchSensor");
TouchSensor1035.description = "HAnimSite r_gonion_pt";
HAnimSite1034.children = new MFNode();

HAnimSite1034.children[0] = TouchSensor1035;

let Shape1036 = browser.currentScene.createNode("Shape");
Shape1036.USE = "HAnimSiteShape";
HAnimSite1034.children[1] = Shape1036;

HAnimSegment996.children[10] = HAnimSite1034;

let HAnimSite1037 = browser.currentScene.createNode("HAnimSite");
HAnimSite1037.DEF = "hanim_supramenton_pt";
HAnimSite1037.name = "supramenton_pt";
HAnimSite1037.translation = new SFVec3f(new float[0.0061,1.541,0.0805]);
let TouchSensor1038 = browser.currentScene.createNode("TouchSensor");
TouchSensor1038.description = "HAnimSite supramenton_pt";
HAnimSite1037.children = new MFNode();

HAnimSite1037.children[0] = TouchSensor1038;

let Shape1039 = browser.currentScene.createNode("Shape");
Shape1039.USE = "HAnimSiteShape";
HAnimSite1037.children[1] = Shape1039;

HAnimSegment996.children[11] = HAnimSite1037;

HAnimJoint995.children = new MFNode();

HAnimJoint995.children[0] = HAnimSegment996;

let HAnimJoint1040 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1040.DEF = "hanim_l_eyelid_joint";
HAnimJoint1040.name = "l_eyelid_joint";
HAnimJoint1040.center = new SFVec3f(new float[2.2365,1.87,1.9285]);
HAnimJoint995.children[1] = HAnimJoint1040;

let HAnimJoint1041 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1041.DEF = "hanim_r_eyelid_joint";
HAnimJoint1041.name = "r_eyelid_joint";
HAnimJoint1041.center = new SFVec3f(new float[-2.2535,1.87,1.9285]);
HAnimJoint995.children[2] = HAnimJoint1041;

let HAnimJoint1042 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1042.DEF = "hanim_l_eyeball_joint";
HAnimJoint1042.name = "l_eyeball_joint";
HAnimJoint1042.center = new SFVec3f(new float[2.1305,1.8444,4.1555]);
HAnimJoint995.children[3] = HAnimJoint1042;

let HAnimJoint1043 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1043.DEF = "hanim_r_eyeball_joint";
HAnimJoint1043.name = "r_eyeball_joint";
HAnimJoint1043.center = new SFVec3f(new float[-2.1475,1.8444,4.1555]);
HAnimJoint995.children[4] = HAnimJoint1043;

let HAnimJoint1044 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1044.DEF = "hanim_l_eyebrow_joint";
HAnimJoint1044.name = "l_eyebrow_joint";
HAnimJoint1044.center = new SFVec3f(new float[0.9581,1.8563,5.2175]);
HAnimJoint995.children[5] = HAnimJoint1044;

let HAnimJoint1045 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1045.DEF = "hanim_r_eyebrow_joint";
HAnimJoint1045.name = "r_eyebrow_joint";
HAnimJoint1045.center = new SFVec3f(new float[-0.9751,1.8563,5.2175]);
HAnimJoint995.children[6] = HAnimJoint1045;

let HAnimJoint1046 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1046.DEF = "hanim_temporomandibular";
HAnimJoint1046.name = "temporomandibular";
HAnimJoint1046.center = new SFVec3f(new float[-0.0085,1.7229,1.148]);
HAnimJoint995.children[7] = HAnimJoint1046;

HAnimJoint953.children[1] = HAnimJoint995;

HAnimJoint944.children[1] = HAnimJoint953;

HAnimJoint932.children[1] = HAnimJoint944;

HAnimJoint923.children[1] = HAnimJoint932;

HAnimJoint914.children[1] = HAnimJoint923;

HAnimJoint905.children[1] = HAnimJoint914;

HAnimJoint896.children[1] = HAnimJoint905;

HAnimJoint843.children[1] = HAnimJoint896;

let HAnimJoint1047 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1047.DEF = "hanim_l_sternoclavicular";
HAnimJoint1047.name = "l_sternoclavicular";
HAnimJoint1047.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let HAnimSegment1048 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1048.DEF = "hanim_l_clavicle";
HAnimSegment1048.name = "l_clavicle";
let Transform1049 = browser.currentScene.createNode("Transform");
Transform1049.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Transform1050 = browser.currentScene.createNode("Transform");
let Shape1051 = browser.currentScene.createNode("Shape");
Shape1051.USE = "HAnimJointShape";
Transform1050.child = new undefined();

Transform1050.child[0] = Shape1051;

Transform1049.children = new MFNode();

Transform1049.children[0] = Transform1050;

HAnimSegment1048.children = new MFNode();

HAnimSegment1048.children[0] = Transform1049;

let Shape1052 = browser.currentScene.createNode("Shape");
let LineSet1053 = browser.currentScene.createNode("LineSet");
LineSet1053.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1054 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1054.USE = "HAnimSegmentLineColorRGBA";
LineSet1053.color = ColorRGBA1054;

let Coordinate1055 = browser.currentScene.createNode("Coordinate");
Coordinate1055.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet1053.coord = Coordinate1055;

Shape1052.geometry = LineSet1053;

HAnimSegment1048.children[1] = Shape1052;

HAnimJoint1047.children = new MFNode();

HAnimJoint1047.children[0] = HAnimSegment1048;

let HAnimJoint1056 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1056.DEF = "hanim_l_acromioclavicular";
HAnimJoint1056.name = "l_acromioclavicular";
HAnimJoint1056.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let HAnimSegment1057 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1057.DEF = "hanim_l_scapula";
HAnimSegment1057.name = "l_scapula";
let Transform1058 = browser.currentScene.createNode("Transform");
Transform1058.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Transform1059 = browser.currentScene.createNode("Transform");
let Shape1060 = browser.currentScene.createNode("Shape");
Shape1060.USE = "HAnimJointShape";
Transform1059.child = new undefined();

Transform1059.child[0] = Shape1060;

Transform1058.children = new MFNode();

Transform1058.children[0] = Transform1059;

HAnimSegment1057.children = new MFNode();

HAnimSegment1057.children[0] = Transform1058;

let Shape1061 = browser.currentScene.createNode("Shape");
let LineSet1062 = browser.currentScene.createNode("LineSet");
LineSet1062.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1063 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1063.USE = "HAnimSegmentLineColorRGBA";
LineSet1062.color = ColorRGBA1063;

let Coordinate1064 = browser.currentScene.createNode("Coordinate");
Coordinate1064.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet1062.coord = Coordinate1064;

Shape1061.geometry = LineSet1062;

HAnimSegment1057.children[1] = Shape1061;

let HAnimSite1065 = browser.currentScene.createNode("HAnimSite");
HAnimSite1065.DEF = "hanim_l_bideltoid_pt";
HAnimSite1065.name = "l_bideltoid_pt";
let TouchSensor1066 = browser.currentScene.createNode("TouchSensor");
TouchSensor1066.description = "HAnimSite l_bideltoid_pt";
HAnimSite1065.children = new MFNode();

HAnimSite1065.children[0] = TouchSensor1066;

let Shape1067 = browser.currentScene.createNode("Shape");
Shape1067.USE = "HAnimSiteShape";
HAnimSite1065.children[1] = Shape1067;

HAnimSegment1057.children[2] = HAnimSite1065;

let HAnimSite1068 = browser.currentScene.createNode("HAnimSite");
HAnimSite1068.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite1068.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite1068.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
let TouchSensor1069 = browser.currentScene.createNode("TouchSensor");
TouchSensor1069.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite1068.children = new MFNode();

HAnimSite1068.children[0] = TouchSensor1069;

let Shape1070 = browser.currentScene.createNode("Shape");
Shape1070.USE = "HAnimSiteShape";
HAnimSite1068.children[1] = Shape1070;

HAnimSegment1057.children[3] = HAnimSite1068;

HAnimJoint1056.children = new MFNode();

HAnimJoint1056.children[0] = HAnimSegment1057;

let HAnimJoint1071 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1071.DEF = "hanim_l_shoulder";
HAnimJoint1071.name = "l_shoulder";
HAnimJoint1071.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let HAnimSegment1072 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1072.DEF = "hanim_l_upperarm";
HAnimSegment1072.name = "l_upperarm";
let Transform1073 = browser.currentScene.createNode("Transform");
Transform1073.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Transform1074 = browser.currentScene.createNode("Transform");
let Shape1075 = browser.currentScene.createNode("Shape");
Shape1075.USE = "HAnimJointShape";
Transform1074.child = new undefined();

Transform1074.child[0] = Shape1075;

Transform1073.children = new MFNode();

Transform1073.children[0] = Transform1074;

HAnimSegment1072.children = new MFNode();

HAnimSegment1072.children[0] = Transform1073;

let Shape1076 = browser.currentScene.createNode("Shape");
let LineSet1077 = browser.currentScene.createNode("LineSet");
LineSet1077.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1078 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1078.USE = "HAnimSegmentLineColorRGBA";
LineSet1077.color = ColorRGBA1078;

let Coordinate1079 = browser.currentScene.createNode("Coordinate");
Coordinate1079.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet1077.coord = Coordinate1079;

Shape1076.geometry = LineSet1077;

HAnimSegment1072.children[1] = Shape1076;

let HAnimSite1080 = browser.currentScene.createNode("HAnimSite");
HAnimSite1080.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite1080.name = "l_humeral_medial_epicondyles_pt";
HAnimSite1080.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
let TouchSensor1081 = browser.currentScene.createNode("TouchSensor");
TouchSensor1081.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite1080.children = new MFNode();

HAnimSite1080.children[0] = TouchSensor1081;

let Shape1082 = browser.currentScene.createNode("Shape");
Shape1082.USE = "HAnimSiteShape";
HAnimSite1080.children[1] = Shape1082;

HAnimSegment1072.children[2] = HAnimSite1080;

let HAnimSite1083 = browser.currentScene.createNode("HAnimSite");
HAnimSite1083.DEF = "hanim_l_olecranon_pt";
HAnimSite1083.name = "l_olecranon_pt";
HAnimSite1083.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
let TouchSensor1084 = browser.currentScene.createNode("TouchSensor");
TouchSensor1084.description = "HAnimSite l_olecranon_pt";
HAnimSite1083.children = new MFNode();

HAnimSite1083.children[0] = TouchSensor1084;

let Shape1085 = browser.currentScene.createNode("Shape");
Shape1085.USE = "HAnimSiteShape";
HAnimSite1083.children[1] = Shape1085;

HAnimSegment1072.children[3] = HAnimSite1083;

let HAnimSite1086 = browser.currentScene.createNode("HAnimSite");
HAnimSite1086.DEF = "hanim_l_radial_styloid_pt";
HAnimSite1086.name = "l_radial_styloid_pt";
HAnimSite1086.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
let TouchSensor1087 = browser.currentScene.createNode("TouchSensor");
TouchSensor1087.description = "HAnimSite l_radial_styloid_pt";
HAnimSite1086.children = new MFNode();

HAnimSite1086.children[0] = TouchSensor1087;

let Shape1088 = browser.currentScene.createNode("Shape");
Shape1088.USE = "HAnimSiteShape";
HAnimSite1086.children[1] = Shape1088;

HAnimSegment1072.children[4] = HAnimSite1086;

let HAnimSite1089 = browser.currentScene.createNode("HAnimSite");
HAnimSite1089.DEF = "hanim_l_radiale_pt";
HAnimSite1089.name = "l_radiale_pt";
HAnimSite1089.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
let TouchSensor1090 = browser.currentScene.createNode("TouchSensor");
TouchSensor1090.description = "HAnimSite l_radiale_pt";
HAnimSite1089.children = new MFNode();

HAnimSite1089.children[0] = TouchSensor1090;

let Shape1091 = browser.currentScene.createNode("Shape");
Shape1091.USE = "HAnimSiteShape";
HAnimSite1089.children[1] = Shape1091;

HAnimSegment1072.children[5] = HAnimSite1089;

HAnimJoint1071.children = new MFNode();

HAnimJoint1071.children[0] = HAnimSegment1072;

let HAnimJoint1092 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1092.DEF = "hanim_l_elbow";
HAnimJoint1092.name = "l_elbow";
HAnimJoint1092.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let HAnimSegment1093 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1093.DEF = "hanim_l_forearm";
HAnimSegment1093.name = "l_forearm";
let Transform1094 = browser.currentScene.createNode("Transform");
Transform1094.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Transform1095 = browser.currentScene.createNode("Transform");
let Shape1096 = browser.currentScene.createNode("Shape");
Shape1096.USE = "HAnimJointShape";
Transform1095.child = new undefined();

Transform1095.child[0] = Shape1096;

Transform1094.children = new MFNode();

Transform1094.children[0] = Transform1095;

HAnimSegment1093.children = new MFNode();

HAnimSegment1093.children[0] = Transform1094;

let Shape1097 = browser.currentScene.createNode("Shape");
let LineSet1098 = browser.currentScene.createNode("LineSet");
LineSet1098.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1099 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1099.USE = "HAnimSegmentLineColorRGBA";
LineSet1098.color = ColorRGBA1099;

let Coordinate1100 = browser.currentScene.createNode("Coordinate");
Coordinate1100.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet1098.coord = Coordinate1100;

Shape1097.geometry = LineSet1098;

HAnimSegment1093.children[1] = Shape1097;

let HAnimSite1101 = browser.currentScene.createNode("HAnimSite");
HAnimSite1101.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite1101.name = "l_ulnar_styloid_pt";
HAnimSite1101.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
let TouchSensor1102 = browser.currentScene.createNode("TouchSensor");
TouchSensor1102.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite1101.children = new MFNode();

HAnimSite1101.children[0] = TouchSensor1102;

let Shape1103 = browser.currentScene.createNode("Shape");
Shape1103.USE = "HAnimSiteShape";
HAnimSite1101.children[1] = Shape1103;

HAnimSegment1093.children[2] = HAnimSite1101;

HAnimJoint1092.children = new MFNode();

HAnimJoint1092.children[0] = HAnimSegment1093;

let HAnimJoint1104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1104.DEF = "hanim_l_radiocarpal";
HAnimJoint1104.name = "l_radiocarpal";
HAnimJoint1104.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let HAnimSegment1105 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1105.DEF = "hanim_l_carpal";
HAnimSegment1105.name = "l_carpal";
let Transform1106 = browser.currentScene.createNode("Transform");
Transform1106.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform1106.rotation = new SFRotation(new float[0,0,1,-3.14]);
Transform1106.scale = new SFVec3f(new float[0.2,0.2,0.2]);
let Transform1107 = browser.currentScene.createNode("Transform");
Transform1107.rotation = new SFRotation(new float[0,1,0,-1.57]);
let Shape1108 = browser.currentScene.createNode("Shape");
Shape1108.USE = "HAnimJointShape";
Transform1107.child = new undefined();

Transform1107.child[0] = Shape1108;

Transform1106.children = new MFNode();

Transform1106.children[0] = Transform1107;

HAnimSegment1105.children = new MFNode();

HAnimSegment1105.children[0] = Transform1106;

let Shape1109 = browser.currentScene.createNode("Shape");
let LineSet1110 = browser.currentScene.createNode("LineSet");
LineSet1110.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1111 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1111.USE = "HAnimSegmentLineColorRGBA";
LineSet1110.color = ColorRGBA1111;

let Coordinate1112 = browser.currentScene.createNode("Coordinate");
Coordinate1112.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,8.0485,0.9213,1.3235]);
LineSet1110.coord = Coordinate1112;

Shape1109.geometry = LineSet1110;

HAnimSegment1105.children[1] = Shape1109;

let Shape1113 = browser.currentScene.createNode("Shape");
let LineSet1114 = browser.currentScene.createNode("LineSet");
LineSet1114.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1115 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1115.USE = "HAnimSegmentLineColorRGBA";
LineSet1114.color = ColorRGBA1115;

let Coordinate1116 = browser.currentScene.createNode("Coordinate");
Coordinate1116.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,8.0485,0.9225,0.8386]);
LineSet1114.coord = Coordinate1116;

Shape1113.geometry = LineSet1114;

HAnimSegment1105.children[2] = Shape1113;

let Shape1117 = browser.currentScene.createNode("Shape");
let LineSet1118 = browser.currentScene.createNode("LineSet");
LineSet1118.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1119 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1119.USE = "HAnimSegmentLineColorRGBA";
LineSet1118.color = ColorRGBA1119;

let Coordinate1120 = browser.currentScene.createNode("Coordinate");
Coordinate1120.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,8.0395,0.9246,0.2513]);
LineSet1118.coord = Coordinate1120;

Shape1117.geometry = LineSet1118;

HAnimSegment1105.children[3] = Shape1117;

let Shape1121 = browser.currentScene.createNode("Shape");
let LineSet1122 = browser.currentScene.createNode("LineSet");
LineSet1122.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1123 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1123.USE = "HAnimSegmentLineColorRGBA";
LineSet1122.color = ColorRGBA1123;

let Coordinate1124 = browser.currentScene.createNode("Coordinate");
Coordinate1124.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,8.0395,0.921,-0.6795]);
LineSet1122.coord = Coordinate1124;

Shape1121.geometry = LineSet1122;

HAnimSegment1105.children[4] = Shape1121;

HAnimJoint1104.children = new MFNode();

HAnimJoint1104.children[0] = HAnimSegment1105;

let HAnimJoint1125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1125.DEF = "hanim_l_midcarpal_1";
HAnimJoint1125.name = "l_midcarpal_1";
HAnimJoint1125.center = new SFVec3f(new float[8.0485,0.9213,1.3235]);
let HAnimSegment1126 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1126.DEF = "hanim_l_trapezium";
HAnimSegment1126.name = "l_trapezium";
let Transform1127 = browser.currentScene.createNode("Transform");
Transform1127.translation = new SFVec3f(new float[8.0485,0.9213,1.3235]);
let Transform1128 = browser.currentScene.createNode("Transform");
let Shape1129 = browser.currentScene.createNode("Shape");
Shape1129.USE = "HAnimJointShape";
Transform1128.child = new undefined();

Transform1128.child[0] = Shape1129;

Transform1127.children = new MFNode();

Transform1127.children[0] = Transform1128;

HAnimSegment1126.children = new MFNode();

HAnimSegment1126.children[0] = Transform1127;

let Shape1130 = browser.currentScene.createNode("Shape");
let LineSet1131 = browser.currentScene.createNode("LineSet");
LineSet1131.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1132 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1132.USE = "HAnimSegmentLineColorRGBA";
LineSet1131.color = ColorRGBA1132;

let Coordinate1133 = browser.currentScene.createNode("Coordinate");
Coordinate1133.point = new MFVec3f(new float[8.0485,0.9213,1.3235,0.1924,0.8472,-0.0534]);
LineSet1131.coord = Coordinate1133;

Shape1130.geometry = LineSet1131;

HAnimSegment1126.children[1] = Shape1130;

HAnimJoint1125.children = new MFNode();

HAnimJoint1125.children[0] = HAnimSegment1126;

let HAnimJoint1134 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1134.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint1134.name = "l_carpometacarpal_1";
HAnimJoint1134.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let HAnimSegment1135 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1135.DEF = "hanim_l_metacarpal_1";
HAnimSegment1135.name = "l_metacarpal_1";
let Transform1136 = browser.currentScene.createNode("Transform");
Transform1136.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Transform1137 = browser.currentScene.createNode("Transform");
let Shape1138 = browser.currentScene.createNode("Shape");
Shape1138.USE = "HAnimJointShape";
Transform1137.child = new undefined();

Transform1137.child[0] = Shape1138;

Transform1136.children = new MFNode();

Transform1136.children[0] = Transform1137;

HAnimSegment1135.children = new MFNode();

HAnimSegment1135.children[0] = Transform1136;

let Shape1139 = browser.currentScene.createNode("Shape");
let LineSet1140 = browser.currentScene.createNode("LineSet");
LineSet1140.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1141 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1141.USE = "HAnimSegmentLineColorRGBA";
LineSet1140.color = ColorRGBA1141;

let Coordinate1142 = browser.currentScene.createNode("Coordinate");
Coordinate1142.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet1140.coord = Coordinate1142;

Shape1139.geometry = LineSet1140;

HAnimSegment1135.children[1] = Shape1139;

HAnimJoint1134.children = new MFNode();

HAnimJoint1134.children[0] = HAnimSegment1135;

let HAnimJoint1143 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1143.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint1143.name = "l_metacarpophalangeal_1";
HAnimJoint1143.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let HAnimSegment1144 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1144.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment1144.name = "l_carpal_proximal_phalanx_1";
let Transform1145 = browser.currentScene.createNode("Transform");
Transform1145.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Transform1146 = browser.currentScene.createNode("Transform");
let Shape1147 = browser.currentScene.createNode("Shape");
Shape1147.USE = "HAnimJointShape";
Transform1146.child = new undefined();

Transform1146.child[0] = Shape1147;

Transform1145.children = new MFNode();

Transform1145.children[0] = Transform1146;

HAnimSegment1144.children = new MFNode();

HAnimSegment1144.children[0] = Transform1145;

let Shape1148 = browser.currentScene.createNode("Shape");
let LineSet1149 = browser.currentScene.createNode("LineSet");
LineSet1149.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1150 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1150.USE = "HAnimSegmentLineColorRGBA";
LineSet1149.color = ColorRGBA1150;

let Coordinate1151 = browser.currentScene.createNode("Coordinate");
Coordinate1151.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet1149.coord = Coordinate1151;

Shape1148.geometry = LineSet1149;

HAnimSegment1144.children[1] = Shape1148;

let HAnimSite1152 = browser.currentScene.createNode("HAnimSite");
HAnimSite1152.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite1152.name = "l_carpal_distal_phalanx_1_tip";
let TouchSensor1153 = browser.currentScene.createNode("TouchSensor");
TouchSensor1153.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite1152.children = new MFNode();

HAnimSite1152.children[0] = TouchSensor1153;

let Shape1154 = browser.currentScene.createNode("Shape");
Shape1154.USE = "HAnimSiteShape";
HAnimSite1152.children[1] = Shape1154;

HAnimSegment1144.children[2] = HAnimSite1152;

HAnimJoint1143.children = new MFNode();

HAnimJoint1143.children[0] = HAnimSegment1144;

let HAnimJoint1155 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1155.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint1155.name = "l_carpal_interphalangeal_1";
HAnimJoint1155.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint1143.children[1] = HAnimJoint1155;

HAnimJoint1134.children[1] = HAnimJoint1143;

HAnimJoint1125.children[1] = HAnimJoint1134;

HAnimJoint1104.children[1] = HAnimJoint1125;

let HAnimJoint1156 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1156.DEF = "hanim_l_midcarpal_2";
HAnimJoint1156.name = "l_midcarpal_2";
HAnimJoint1156.center = new SFVec3f(new float[8.0485,0.9225,0.8386]);
let HAnimSegment1157 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1157.DEF = "hanim_l_trapezoid";
HAnimSegment1157.name = "l_trapezoid";
let Transform1158 = browser.currentScene.createNode("Transform");
Transform1158.translation = new SFVec3f(new float[8.0485,0.9225,0.8386]);
let Transform1159 = browser.currentScene.createNode("Transform");
let Shape1160 = browser.currentScene.createNode("Shape");
Shape1160.USE = "HAnimJointShape";
Transform1159.child = new undefined();

Transform1159.child[0] = Shape1160;

Transform1158.children = new MFNode();

Transform1158.children[0] = Transform1159;

HAnimSegment1157.children = new MFNode();

HAnimSegment1157.children[0] = Transform1158;

let Shape1161 = browser.currentScene.createNode("Shape");
let LineSet1162 = browser.currentScene.createNode("LineSet");
LineSet1162.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1163 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1163.USE = "HAnimSegmentLineColorRGBA";
LineSet1162.color = ColorRGBA1163;

let Coordinate1164 = browser.currentScene.createNode("Coordinate");
Coordinate1164.point = new MFVec3f(new float[8.0485,0.9225,0.8386,0.1983,0.8024,-0.028]);
LineSet1162.coord = Coordinate1164;

Shape1161.geometry = LineSet1162;

HAnimSegment1157.children[1] = Shape1161;

let HAnimSite1165 = browser.currentScene.createNode("HAnimSite");
HAnimSite1165.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite1165.name = "l_metacarpal_phalanx_2_pt";
HAnimSite1165.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
let TouchSensor1166 = browser.currentScene.createNode("TouchSensor");
TouchSensor1166.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite1165.children = new MFNode();

HAnimSite1165.children[0] = TouchSensor1166;

let Shape1167 = browser.currentScene.createNode("Shape");
Shape1167.USE = "HAnimSiteShape";
HAnimSite1165.children[1] = Shape1167;

HAnimSegment1157.children[2] = HAnimSite1165;

HAnimJoint1156.children = new MFNode();

HAnimJoint1156.children[0] = HAnimSegment1157;

let HAnimJoint1168 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1168.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint1168.name = "l_carpometacarpal_2";
HAnimJoint1168.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let HAnimSegment1169 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1169.DEF = "hanim_l_metacarpal_2";
HAnimSegment1169.name = "l_metacarpal_2";
let Transform1170 = browser.currentScene.createNode("Transform");
Transform1170.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Transform1171 = browser.currentScene.createNode("Transform");
let Shape1172 = browser.currentScene.createNode("Shape");
Shape1172.USE = "HAnimJointShape";
Transform1171.child = new undefined();

Transform1171.child[0] = Shape1172;

Transform1170.children = new MFNode();

Transform1170.children[0] = Transform1171;

HAnimSegment1169.children = new MFNode();

HAnimSegment1169.children[0] = Transform1170;

let Shape1173 = browser.currentScene.createNode("Shape");
let LineSet1174 = browser.currentScene.createNode("LineSet");
LineSet1174.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1175 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1175.USE = "HAnimSegmentLineColorRGBA";
LineSet1174.color = ColorRGBA1175;

let Coordinate1176 = browser.currentScene.createNode("Coordinate");
Coordinate1176.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet1174.coord = Coordinate1176;

Shape1173.geometry = LineSet1174;

HAnimSegment1169.children[1] = Shape1173;

HAnimJoint1168.children = new MFNode();

HAnimJoint1168.children[0] = HAnimSegment1169;

let HAnimJoint1177 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1177.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint1177.name = "l_metacarpophalangeal_2";
HAnimJoint1177.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let HAnimSegment1178 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1178.DEF = "hanim_l_carpal_proximal_phalanx_2 ";
HAnimSegment1178.name = "l_carpal_proximal_phalanx_2 ";
let Transform1179 = browser.currentScene.createNode("Transform");
Transform1179.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Transform1180 = browser.currentScene.createNode("Transform");
let Shape1181 = browser.currentScene.createNode("Shape");
Shape1181.USE = "HAnimJointShape";
Transform1180.child = new undefined();

Transform1180.child[0] = Shape1181;

Transform1179.children = new MFNode();

Transform1179.children[0] = Transform1180;

HAnimSegment1178.children = new MFNode();

HAnimSegment1178.children[0] = Transform1179;

let Shape1182 = browser.currentScene.createNode("Shape");
let LineSet1183 = browser.currentScene.createNode("LineSet");
LineSet1183.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1184 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1184.USE = "HAnimSegmentLineColorRGBA";
LineSet1183.color = ColorRGBA1184;

let Coordinate1185 = browser.currentScene.createNode("Coordinate");
Coordinate1185.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet1183.coord = Coordinate1185;

Shape1182.geometry = LineSet1183;

HAnimSegment1178.children[1] = Shape1182;

HAnimJoint1177.children = new MFNode();

HAnimJoint1177.children[0] = HAnimSegment1178;

let HAnimJoint1186 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1186.DEF = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimJoint1186.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint1186.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let HAnimSegment1187 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1187.DEF = "hanim_l_carpal_middle_phalanx_1";
HAnimSegment1187.name = "l_carpal_middle_phalanx_2";
let Transform1188 = browser.currentScene.createNode("Transform");
Transform1188.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Transform1189 = browser.currentScene.createNode("Transform");
let Shape1190 = browser.currentScene.createNode("Shape");
Shape1190.USE = "HAnimJointShape";
Transform1189.child = new undefined();

Transform1189.child[0] = Shape1190;

Transform1188.children = new MFNode();

Transform1188.children[0] = Transform1189;

HAnimSegment1187.children = new MFNode();

HAnimSegment1187.children[0] = Transform1188;

let Shape1191 = browser.currentScene.createNode("Shape");
let LineSet1192 = browser.currentScene.createNode("LineSet");
LineSet1192.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1193 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1193.USE = "HAnimSegmentLineColorRGBA";
LineSet1192.color = ColorRGBA1193;

let Coordinate1194 = browser.currentScene.createNode("Coordinate");
Coordinate1194.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet1192.coord = Coordinate1194;

Shape1191.geometry = LineSet1192;

HAnimSegment1187.children[1] = Shape1191;

let HAnimSite1195 = browser.currentScene.createNode("HAnimSite");
HAnimSite1195.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite1195.name = "l_carpal_distal_phalanx_2_tip";
let TouchSensor1196 = browser.currentScene.createNode("TouchSensor");
TouchSensor1196.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite1195.children = new MFNode();

HAnimSite1195.children[0] = TouchSensor1196;

let Shape1197 = browser.currentScene.createNode("Shape");
Shape1197.USE = "HAnimSiteShape";
HAnimSite1195.children[1] = Shape1197;

HAnimSegment1187.children[2] = HAnimSite1195;

let HAnimSite1198 = browser.currentScene.createNode("HAnimSite");
HAnimSite1198.DEF = "hanim_l_dactylion_pt";
HAnimSite1198.name = "l_dactylion_pt";
HAnimSite1198.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
let TouchSensor1199 = browser.currentScene.createNode("TouchSensor");
TouchSensor1199.description = "HAnimSite l_dactylion_pt";
HAnimSite1198.children = new MFNode();

HAnimSite1198.children[0] = TouchSensor1199;

let Shape1200 = browser.currentScene.createNode("Shape");
Shape1200.USE = "HAnimSiteShape";
HAnimSite1198.children[1] = Shape1200;

HAnimSegment1187.children[3] = HAnimSite1198;

HAnimJoint1186.children = new MFNode();

HAnimJoint1186.children[0] = HAnimSegment1187;

let HAnimJoint1201 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1201.DEF = "hanim_l_carpal_distal_interphalangeal_1";
HAnimJoint1201.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint1201.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint1186.children[1] = HAnimJoint1201;

HAnimJoint1177.children[1] = HAnimJoint1186;

HAnimJoint1168.children[1] = HAnimJoint1177;

HAnimJoint1156.children[1] = HAnimJoint1168;

HAnimJoint1104.children[2] = HAnimJoint1156;

let HAnimJoint1202 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1202.DEF = "hanim_l_midcarpal_3";
HAnimJoint1202.name = "l_midcarpal_3";
HAnimJoint1202.center = new SFVec3f(new float[8.0395,0.9246,0.2513]);
let HAnimSegment1203 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1203.DEF = "hanim_l_capitate";
HAnimSegment1203.name = "l_capitate";
let Transform1204 = browser.currentScene.createNode("Transform");
Transform1204.translation = new SFVec3f(new float[8.0395,0.9246,0.2513]);
let Transform1205 = browser.currentScene.createNode("Transform");
let Shape1206 = browser.currentScene.createNode("Shape");
Shape1206.USE = "HAnimJointShape";
Transform1205.child = new undefined();

Transform1205.child[0] = Shape1206;

Transform1204.children = new MFNode();

Transform1204.children[0] = Transform1205;

HAnimSegment1203.children = new MFNode();

HAnimSegment1203.children[0] = Transform1204;

let Shape1207 = browser.currentScene.createNode("Shape");
let LineSet1208 = browser.currentScene.createNode("LineSet");
LineSet1208.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1209 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1209.USE = "HAnimSegmentLineColorRGBA";
LineSet1208.color = ColorRGBA1209;

let Coordinate1210 = browser.currentScene.createNode("Coordinate");
Coordinate1210.point = new MFVec3f(new float[8.0395,0.9246,0.2513,0.1987,0.8029,-0.053]);
LineSet1208.coord = Coordinate1210;

Shape1207.geometry = LineSet1208;

HAnimSegment1203.children[1] = Shape1207;

let HAnimSite1211 = browser.currentScene.createNode("HAnimSite");
HAnimSite1211.DEF = "hanim_l_metacarpal_phalanx_3_pt";
HAnimSite1211.name = "l_metacarpal_phalanx_3_pt";
let TouchSensor1212 = browser.currentScene.createNode("TouchSensor");
TouchSensor1212.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite1211.children = new MFNode();

HAnimSite1211.children[0] = TouchSensor1212;

let Shape1213 = browser.currentScene.createNode("Shape");
Shape1213.USE = "HAnimSiteShape";
HAnimSite1211.children[1] = Shape1213;

HAnimSegment1203.children[2] = HAnimSite1211;

HAnimJoint1202.children = new MFNode();

HAnimJoint1202.children[0] = HAnimSegment1203;

let HAnimJoint1214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1214.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint1214.name = "l_carpometacarpal_3";
HAnimJoint1214.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let HAnimSegment1215 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1215.DEF = "hanim_l_metacarpal_3";
HAnimSegment1215.name = "l_metacarpal_3";
let Transform1216 = browser.currentScene.createNode("Transform");
Transform1216.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Transform1217 = browser.currentScene.createNode("Transform");
let Shape1218 = browser.currentScene.createNode("Shape");
Shape1218.USE = "HAnimJointShape";
Transform1217.child = new undefined();

Transform1217.child[0] = Shape1218;

Transform1216.children = new MFNode();

Transform1216.children[0] = Transform1217;

HAnimSegment1215.children = new MFNode();

HAnimSegment1215.children[0] = Transform1216;

let Shape1219 = browser.currentScene.createNode("Shape");
let LineSet1220 = browser.currentScene.createNode("LineSet");
LineSet1220.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1221 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1221.USE = "HAnimSegmentLineColorRGBA";
LineSet1220.color = ColorRGBA1221;

let Coordinate1222 = browser.currentScene.createNode("Coordinate");
Coordinate1222.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet1220.coord = Coordinate1222;

Shape1219.geometry = LineSet1220;

HAnimSegment1215.children[1] = Shape1219;

HAnimJoint1214.children = new MFNode();

HAnimJoint1214.children[0] = HAnimSegment1215;

let HAnimJoint1223 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1223.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint1223.name = "l_metacarpophalangeal_3";
HAnimJoint1223.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let HAnimSegment1224 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1224.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment1224.name = "l_carpal_proximal_phalanx_3";
let Transform1225 = browser.currentScene.createNode("Transform");
Transform1225.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Transform1226 = browser.currentScene.createNode("Transform");
let Shape1227 = browser.currentScene.createNode("Shape");
Shape1227.USE = "HAnimJointShape";
Transform1226.child = new undefined();

Transform1226.child[0] = Shape1227;

Transform1225.children = new MFNode();

Transform1225.children[0] = Transform1226;

HAnimSegment1224.children = new MFNode();

HAnimSegment1224.children[0] = Transform1225;

let Shape1228 = browser.currentScene.createNode("Shape");
let LineSet1229 = browser.currentScene.createNode("LineSet");
LineSet1229.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1230 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1230.USE = "HAnimSegmentLineColorRGBA";
LineSet1229.color = ColorRGBA1230;

let Coordinate1231 = browser.currentScene.createNode("Coordinate");
Coordinate1231.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet1229.coord = Coordinate1231;

Shape1228.geometry = LineSet1229;

HAnimSegment1224.children[1] = Shape1228;

HAnimJoint1223.children = new MFNode();

HAnimJoint1223.children[0] = HAnimSegment1224;

let HAnimJoint1232 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1232.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint1232.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint1232.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let HAnimSegment1233 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1233.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment1233.name = "l_carpal_middle_phalanx_3";
let Transform1234 = browser.currentScene.createNode("Transform");
Transform1234.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Transform1235 = browser.currentScene.createNode("Transform");
let Shape1236 = browser.currentScene.createNode("Shape");
Shape1236.USE = "HAnimJointShape";
Transform1235.child = new undefined();

Transform1235.child[0] = Shape1236;

Transform1234.children = new MFNode();

Transform1234.children[0] = Transform1235;

HAnimSegment1233.children = new MFNode();

HAnimSegment1233.children[0] = Transform1234;

let Shape1237 = browser.currentScene.createNode("Shape");
let LineSet1238 = browser.currentScene.createNode("LineSet");
LineSet1238.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1239 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1239.USE = "HAnimSegmentLineColorRGBA";
LineSet1238.color = ColorRGBA1239;

let Coordinate1240 = browser.currentScene.createNode("Coordinate");
Coordinate1240.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet1238.coord = Coordinate1240;

Shape1237.geometry = LineSet1238;

HAnimSegment1233.children[1] = Shape1237;

let HAnimSite1241 = browser.currentScene.createNode("HAnimSite");
HAnimSite1241.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite1241.name = "l_carpal_distal_phalanx_3_tip";
let TouchSensor1242 = browser.currentScene.createNode("TouchSensor");
TouchSensor1242.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite1241.children = new MFNode();

HAnimSite1241.children[0] = TouchSensor1242;

let Shape1243 = browser.currentScene.createNode("Shape");
Shape1243.USE = "HAnimSiteShape";
HAnimSite1241.children[1] = Shape1243;

HAnimSegment1233.children[2] = HAnimSite1241;

HAnimJoint1232.children = new MFNode();

HAnimJoint1232.children[0] = HAnimSegment1233;

let HAnimJoint1244 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1244.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint1244.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint1244.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint1232.children[1] = HAnimJoint1244;

HAnimJoint1223.children[1] = HAnimJoint1232;

HAnimJoint1214.children[1] = HAnimJoint1223;

HAnimJoint1202.children[1] = HAnimJoint1214;

HAnimJoint1104.children[3] = HAnimJoint1202;

let HAnimJoint1245 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1245.DEF = "hanim_l_midcarpal_4_1";
HAnimJoint1245.name = "l_midcarpal_4_5";
HAnimJoint1245.center = new SFVec3f(new float[8.0395,0.921,-0.6795]);
let HAnimSegment1246 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1246.DEF = "hanim_l_hamate";
HAnimSegment1246.name = "l_hamate";
let Transform1247 = browser.currentScene.createNode("Transform");
Transform1247.translation = new SFVec3f(new float[8.0395,0.921,-0.6795]);
let Transform1248 = browser.currentScene.createNode("Transform");
let Shape1249 = browser.currentScene.createNode("Shape");
Shape1249.USE = "HAnimJointShape";
Transform1248.child = new undefined();

Transform1248.child[0] = Shape1249;

Transform1247.children = new MFNode();

Transform1247.children[0] = Transform1248;

HAnimSegment1246.children = new MFNode();

HAnimSegment1246.children[0] = Transform1247;

let Shape1250 = browser.currentScene.createNode("Shape");
let LineSet1251 = browser.currentScene.createNode("LineSet");
LineSet1251.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1252 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1252.USE = "HAnimSegmentLineColorRGBA";
LineSet1251.color = ColorRGBA1252;

let Coordinate1253 = browser.currentScene.createNode("Coordinate");
Coordinate1253.point = new MFVec3f(new float[8.0395,0.921,-0.6795,0.1956,0.8019,-0.0794]);
LineSet1251.coord = Coordinate1253;

Shape1250.geometry = LineSet1251;

HAnimSegment1246.children[1] = Shape1250;

let Shape1254 = browser.currentScene.createNode("Shape");
let LineSet1255 = browser.currentScene.createNode("LineSet");
LineSet1255.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1256 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1256.USE = "HAnimSegmentLineColorRGBA";
LineSet1255.color = ColorRGBA1256;

let Coordinate1257 = browser.currentScene.createNode("Coordinate");
Coordinate1257.point = new MFVec3f(new float[8.0395,0.921,-0.6795,0.1925,0.8066,-0.1036]);
LineSet1255.coord = Coordinate1257;

Shape1254.geometry = LineSet1255;

HAnimSegment1246.children[2] = Shape1254;

let HAnimSite1258 = browser.currentScene.createNode("HAnimSite");
HAnimSite1258.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite1258.name = "l_metacarpal_phalanx_5_pt";
HAnimSite1258.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
let TouchSensor1259 = browser.currentScene.createNode("TouchSensor");
TouchSensor1259.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite1258.children = new MFNode();

HAnimSite1258.children[0] = TouchSensor1259;

let Shape1260 = browser.currentScene.createNode("Shape");
Shape1260.USE = "HAnimSiteShape";
HAnimSite1258.children[1] = Shape1260;

HAnimSegment1246.children[3] = HAnimSite1258;

HAnimJoint1245.children = new MFNode();

HAnimJoint1245.children[0] = HAnimSegment1246;

let HAnimJoint1261 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1261.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint1261.name = "l_carpometacarpal_4";
HAnimJoint1261.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let HAnimSegment1262 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1262.DEF = "hanim_l_metacarpal_4";
HAnimSegment1262.name = "l_metacarpal_4";
let Transform1263 = browser.currentScene.createNode("Transform");
Transform1263.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Transform1264 = browser.currentScene.createNode("Transform");
let Shape1265 = browser.currentScene.createNode("Shape");
Shape1265.USE = "HAnimJointShape";
Transform1264.child = new undefined();

Transform1264.child[0] = Shape1265;

Transform1263.children = new MFNode();

Transform1263.children[0] = Transform1264;

HAnimSegment1262.children = new MFNode();

HAnimSegment1262.children[0] = Transform1263;

let Shape1266 = browser.currentScene.createNode("Shape");
let LineSet1267 = browser.currentScene.createNode("LineSet");
LineSet1267.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1268 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1268.USE = "HAnimSegmentLineColorRGBA";
LineSet1267.color = ColorRGBA1268;

let Coordinate1269 = browser.currentScene.createNode("Coordinate");
Coordinate1269.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet1267.coord = Coordinate1269;

Shape1266.geometry = LineSet1267;

HAnimSegment1262.children[1] = Shape1266;

HAnimJoint1261.children = new MFNode();

HAnimJoint1261.children[0] = HAnimSegment1262;

let HAnimJoint1270 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1270.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint1270.name = "l_metacarpophalangeal_4";
HAnimJoint1270.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let HAnimSegment1271 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1271.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimSegment1271.name = "l_carpal_proximal_phalanx_4";
let Transform1272 = browser.currentScene.createNode("Transform");
Transform1272.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Transform1273 = browser.currentScene.createNode("Transform");
let Shape1274 = browser.currentScene.createNode("Shape");
Shape1274.USE = "HAnimJointShape";
Transform1273.child = new undefined();

Transform1273.child[0] = Shape1274;

Transform1272.children = new MFNode();

Transform1272.children[0] = Transform1273;

HAnimSegment1271.children = new MFNode();

HAnimSegment1271.children[0] = Transform1272;

let Shape1275 = browser.currentScene.createNode("Shape");
let LineSet1276 = browser.currentScene.createNode("LineSet");
LineSet1276.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1277 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1277.USE = "HAnimSegmentLineColorRGBA";
LineSet1276.color = ColorRGBA1277;

let Coordinate1278 = browser.currentScene.createNode("Coordinate");
Coordinate1278.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet1276.coord = Coordinate1278;

Shape1275.geometry = LineSet1276;

HAnimSegment1271.children[1] = Shape1275;

HAnimJoint1270.children = new MFNode();

HAnimJoint1270.children[0] = HAnimSegment1271;

let HAnimJoint1279 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1279.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint1279.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint1279.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let HAnimSegment1280 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1280.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimSegment1280.name = "l_carpal_middle_phalanx_4";
let Transform1281 = browser.currentScene.createNode("Transform");
Transform1281.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Transform1282 = browser.currentScene.createNode("Transform");
let Shape1283 = browser.currentScene.createNode("Shape");
Shape1283.USE = "HAnimJointShape";
Transform1282.child = new undefined();

Transform1282.child[0] = Shape1283;

Transform1281.children = new MFNode();

Transform1281.children[0] = Transform1282;

HAnimSegment1280.children = new MFNode();

HAnimSegment1280.children[0] = Transform1281;

let Shape1284 = browser.currentScene.createNode("Shape");
let LineSet1285 = browser.currentScene.createNode("LineSet");
LineSet1285.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1286 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1286.USE = "HAnimSegmentLineColorRGBA";
LineSet1285.color = ColorRGBA1286;

let Coordinate1287 = browser.currentScene.createNode("Coordinate");
Coordinate1287.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet1285.coord = Coordinate1287;

Shape1284.geometry = LineSet1285;

HAnimSegment1280.children[1] = Shape1284;

let HAnimSite1288 = browser.currentScene.createNode("HAnimSite");
HAnimSite1288.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite1288.name = "l_carpal_distal_phalanx_4_tip";
let TouchSensor1289 = browser.currentScene.createNode("TouchSensor");
TouchSensor1289.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite1288.children = new MFNode();

HAnimSite1288.children[0] = TouchSensor1289;

let Shape1290 = browser.currentScene.createNode("Shape");
Shape1290.USE = "HAnimSiteShape";
HAnimSite1288.children[1] = Shape1290;

HAnimSegment1280.children[2] = HAnimSite1288;

HAnimJoint1279.children = new MFNode();

HAnimJoint1279.children[0] = HAnimSegment1280;

let HAnimJoint1291 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1291.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint1291.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint1291.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint1279.children[1] = HAnimJoint1291;

HAnimJoint1270.children[1] = HAnimJoint1279;

HAnimJoint1261.children[1] = HAnimJoint1270;

HAnimJoint1245.children[1] = HAnimJoint1261;

let HAnimJoint1292 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1292.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint1292.name = "l_carpometacarpal_5";
HAnimJoint1292.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let HAnimSegment1293 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1293.DEF = "hanim_l_metacarpal_5";
HAnimSegment1293.name = "l_metacarpal_5";
let Transform1294 = browser.currentScene.createNode("Transform");
Transform1294.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Transform1295 = browser.currentScene.createNode("Transform");
let Shape1296 = browser.currentScene.createNode("Shape");
Shape1296.USE = "HAnimJointShape";
Transform1295.child = new undefined();

Transform1295.child[0] = Shape1296;

Transform1294.children = new MFNode();

Transform1294.children[0] = Transform1295;

HAnimSegment1293.children = new MFNode();

HAnimSegment1293.children[0] = Transform1294;

let Shape1297 = browser.currentScene.createNode("Shape");
let LineSet1298 = browser.currentScene.createNode("LineSet");
LineSet1298.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1299 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1299.USE = "HAnimSegmentLineColorRGBA";
LineSet1298.color = ColorRGBA1299;

let Coordinate1300 = browser.currentScene.createNode("Coordinate");
Coordinate1300.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet1298.coord = Coordinate1300;

Shape1297.geometry = LineSet1298;

HAnimSegment1293.children[1] = Shape1297;

HAnimJoint1292.children = new MFNode();

HAnimJoint1292.children[0] = HAnimSegment1293;

let HAnimJoint1301 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1301.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint1301.name = "l_metacarpophalangeal_5";
HAnimJoint1301.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let HAnimSegment1302 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1302.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimSegment1302.name = "l_carpal_proximal_phalanx_5";
let Transform1303 = browser.currentScene.createNode("Transform");
Transform1303.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Transform1304 = browser.currentScene.createNode("Transform");
let Shape1305 = browser.currentScene.createNode("Shape");
Shape1305.USE = "HAnimJointShape";
Transform1304.child = new undefined();

Transform1304.child[0] = Shape1305;

Transform1303.children = new MFNode();

Transform1303.children[0] = Transform1304;

HAnimSegment1302.children = new MFNode();

HAnimSegment1302.children[0] = Transform1303;

let Shape1306 = browser.currentScene.createNode("Shape");
let LineSet1307 = browser.currentScene.createNode("LineSet");
LineSet1307.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1308 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1308.USE = "HAnimSegmentLineColorRGBA";
LineSet1307.color = ColorRGBA1308;

let Coordinate1309 = browser.currentScene.createNode("Coordinate");
Coordinate1309.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet1307.coord = Coordinate1309;

Shape1306.geometry = LineSet1307;

HAnimSegment1302.children[1] = Shape1306;

HAnimJoint1301.children = new MFNode();

HAnimJoint1301.children[0] = HAnimSegment1302;

let HAnimJoint1310 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1310.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint1310.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint1310.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let HAnimSegment1311 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1311.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimSegment1311.name = "l_carpal_middle_phalanx_5";
let Transform1312 = browser.currentScene.createNode("Transform");
Transform1312.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Transform1313 = browser.currentScene.createNode("Transform");
let Shape1314 = browser.currentScene.createNode("Shape");
Shape1314.USE = "HAnimJointShape";
Transform1313.child = new undefined();

Transform1313.child[0] = Shape1314;

Transform1312.children = new MFNode();

Transform1312.children[0] = Transform1313;

HAnimSegment1311.children = new MFNode();

HAnimSegment1311.children[0] = Transform1312;

let Shape1315 = browser.currentScene.createNode("Shape");
let LineSet1316 = browser.currentScene.createNode("LineSet");
LineSet1316.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1317 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1317.USE = "HAnimSegmentLineColorRGBA";
LineSet1316.color = ColorRGBA1317;

let Coordinate1318 = browser.currentScene.createNode("Coordinate");
Coordinate1318.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet1316.coord = Coordinate1318;

Shape1315.geometry = LineSet1316;

HAnimSegment1311.children[1] = Shape1315;

let HAnimSite1319 = browser.currentScene.createNode("HAnimSite");
HAnimSite1319.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite1319.name = "l_carpal_distal_phalanx_5_tip";
let TouchSensor1320 = browser.currentScene.createNode("TouchSensor");
TouchSensor1320.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite1319.children = new MFNode();

HAnimSite1319.children[0] = TouchSensor1320;

let Shape1321 = browser.currentScene.createNode("Shape");
Shape1321.USE = "HAnimSiteShape";
HAnimSite1319.children[1] = Shape1321;

HAnimSegment1311.children[2] = HAnimSite1319;

HAnimJoint1310.children = new MFNode();

HAnimJoint1310.children[0] = HAnimSegment1311;

let HAnimJoint1322 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint1323 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1323.DEF = "hanim_r_sternoclavicular";
HAnimJoint1323.name = "r_sternoclavicular";
HAnimJoint1323.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
let HAnimSegment1324 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1324.DEF = "hanim_r_clavicle";
HAnimSegment1324.name = "r_clavicle";
let Transform1325 = browser.currentScene.createNode("Transform");
Transform1325.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
let Transform1326 = browser.currentScene.createNode("Transform");
let Shape1327 = browser.currentScene.createNode("Shape");
Shape1327.USE = "HAnimJointShape";
Transform1326.child = new undefined();

Transform1326.child[0] = Shape1327;

Transform1325.children = new MFNode();

Transform1325.children[0] = Transform1326;

HAnimSegment1324.children = new MFNode();

HAnimSegment1324.children[0] = Transform1325;

let Shape1328 = browser.currentScene.createNode("Shape");
let LineSet1329 = browser.currentScene.createNode("LineSet");
LineSet1329.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1330 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1330.USE = "HAnimSegmentLineColorRGBA";
LineSet1329.color = ColorRGBA1330;

let Coordinate1331 = browser.currentScene.createNode("Coordinate");
Coordinate1331.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet1329.coord = Coordinate1331;

Shape1328.geometry = LineSet1329;

HAnimSegment1324.children[1] = Shape1328;

HAnimJoint1323.children = new MFNode();

HAnimJoint1323.children[0] = HAnimSegment1324;

let HAnimJoint1332 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1332.DEF = "hanim_r_acromioclavicular";
HAnimJoint1332.name = "r_acromioclavicular";
HAnimJoint1332.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
let HAnimSegment1333 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1333.DEF = "hanim_r_scapula";
HAnimSegment1333.name = "r_scapula";
let Transform1334 = browser.currentScene.createNode("Transform");
Transform1334.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
let Transform1335 = browser.currentScene.createNode("Transform");
let Shape1336 = browser.currentScene.createNode("Shape");
Shape1336.USE = "HAnimJointShape";
Transform1335.child = new undefined();

Transform1335.child[0] = Shape1336;

Transform1334.children = new MFNode();

Transform1334.children[0] = Transform1335;

HAnimSegment1333.children = new MFNode();

HAnimSegment1333.children[0] = Transform1334;

let Shape1337 = browser.currentScene.createNode("Shape");
let LineSet1338 = browser.currentScene.createNode("LineSet");
LineSet1338.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1339 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1339.USE = "HAnimSegmentLineColorRGBA";
LineSet1338.color = ColorRGBA1339;

let Coordinate1340 = browser.currentScene.createNode("Coordinate");
Coordinate1340.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet1338.coord = Coordinate1340;

Shape1337.geometry = LineSet1338;

HAnimSegment1333.children[1] = Shape1337;

let HAnimSite1341 = browser.currentScene.createNode("HAnimSite");
HAnimSite1341.DEF = "hanim_r_bideltoid_pt";
HAnimSite1341.name = "r_bideltoid_pt";
let TouchSensor1342 = browser.currentScene.createNode("TouchSensor");
TouchSensor1342.description = "HAnimSite r_bideltoid_pt";
HAnimSite1341.children = new MFNode();

HAnimSite1341.children[0] = TouchSensor1342;

let Shape1343 = browser.currentScene.createNode("Shape");
Shape1343.USE = "HAnimSiteShape";
HAnimSite1341.children[1] = Shape1343;

HAnimSegment1333.children[2] = HAnimSite1341;

let HAnimSite1344 = browser.currentScene.createNode("HAnimSite");
HAnimSite1344.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite1344.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite1344.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
let TouchSensor1345 = browser.currentScene.createNode("TouchSensor");
TouchSensor1345.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite1344.children = new MFNode();

HAnimSite1344.children[0] = TouchSensor1345;

let Shape1346 = browser.currentScene.createNode("Shape");
Shape1346.USE = "HAnimSiteShape";
HAnimSite1344.children[1] = Shape1346;

HAnimSegment1333.children[3] = HAnimSite1344;

HAnimJoint1332.children = new MFNode();

HAnimJoint1332.children[0] = HAnimSegment1333;

let HAnimJoint1347 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1347.DEF = "hanim_r_shoulder";
HAnimJoint1347.name = "r_shoulder";
HAnimJoint1347.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let HAnimSegment1348 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1348.DEF = "hanim_r_upperarm";
HAnimSegment1348.name = "r_upperarm";
let Transform1349 = browser.currentScene.createNode("Transform");
Transform1349.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let Transform1350 = browser.currentScene.createNode("Transform");
let Shape1351 = browser.currentScene.createNode("Shape");
Shape1351.USE = "HAnimJointShape";
Transform1350.child = new undefined();

Transform1350.child[0] = Shape1351;

Transform1349.children = new MFNode();

Transform1349.children[0] = Transform1350;

HAnimSegment1348.children = new MFNode();

HAnimSegment1348.children[0] = Transform1349;

let Shape1352 = browser.currentScene.createNode("Shape");
let LineSet1353 = browser.currentScene.createNode("LineSet");
LineSet1353.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1354 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1354.USE = "HAnimSegmentLineColorRGBA";
LineSet1353.color = ColorRGBA1354;

let Coordinate1355 = browser.currentScene.createNode("Coordinate");
Coordinate1355.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet1353.coord = Coordinate1355;

Shape1352.geometry = LineSet1353;

HAnimSegment1348.children[1] = Shape1352;

let HAnimSite1356 = browser.currentScene.createNode("HAnimSite");
HAnimSite1356.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite1356.name = "r_humeral_medial_epicondyles_pt";
HAnimSite1356.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
let TouchSensor1357 = browser.currentScene.createNode("TouchSensor");
TouchSensor1357.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite1356.children = new MFNode();

HAnimSite1356.children[0] = TouchSensor1357;

let Shape1358 = browser.currentScene.createNode("Shape");
Shape1358.USE = "HAnimSiteShape";
HAnimSite1356.children[1] = Shape1358;

HAnimSegment1348.children[2] = HAnimSite1356;

let HAnimSite1359 = browser.currentScene.createNode("HAnimSite");
HAnimSite1359.DEF = "hanim_r_olecranon_pt";
HAnimSite1359.name = "r_olecranon_pt";
HAnimSite1359.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
let TouchSensor1360 = browser.currentScene.createNode("TouchSensor");
TouchSensor1360.description = "HAnimSite r_olecranon_pt";
HAnimSite1359.children = new MFNode();

HAnimSite1359.children[0] = TouchSensor1360;

let Shape1361 = browser.currentScene.createNode("Shape");
Shape1361.USE = "HAnimSiteShape";
HAnimSite1359.children[1] = Shape1361;

HAnimSegment1348.children[3] = HAnimSite1359;

let HAnimSite1362 = browser.currentScene.createNode("HAnimSite");
HAnimSite1362.DEF = "hanim_r_radial_styloid_pt";
HAnimSite1362.name = "r_radial_styloid_pt";
HAnimSite1362.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
let TouchSensor1363 = browser.currentScene.createNode("TouchSensor");
TouchSensor1363.description = "HAnimSite r_radial_styloid_pt";
HAnimSite1362.children = new MFNode();

HAnimSite1362.children[0] = TouchSensor1363;

let Shape1364 = browser.currentScene.createNode("Shape");
Shape1364.USE = "HAnimSiteShape";
HAnimSite1362.children[1] = Shape1364;

HAnimSegment1348.children[4] = HAnimSite1362;

let HAnimSite1365 = browser.currentScene.createNode("HAnimSite");
HAnimSite1365.DEF = "hanim_r_radiale_pt";
HAnimSite1365.name = "r_radiale_pt";
HAnimSite1365.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
let TouchSensor1366 = browser.currentScene.createNode("TouchSensor");
TouchSensor1366.description = "HAnimSite r_radiale_pt";
HAnimSite1365.children = new MFNode();

HAnimSite1365.children[0] = TouchSensor1366;

let Shape1367 = browser.currentScene.createNode("Shape");
Shape1367.USE = "HAnimSiteShape";
HAnimSite1365.children[1] = Shape1367;

HAnimSegment1348.children[5] = HAnimSite1365;

HAnimJoint1347.children = new MFNode();

HAnimJoint1347.children[0] = HAnimSegment1348;

let HAnimJoint1368 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1368.DEF = "hanim_r_elbow";
HAnimJoint1368.name = "r_elbow";
HAnimJoint1368.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let HAnimSegment1369 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1369.DEF = "hanim_r_forearm";
HAnimSegment1369.name = "r_forearm";
let Transform1370 = browser.currentScene.createNode("Transform");
Transform1370.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let Transform1371 = browser.currentScene.createNode("Transform");
let Shape1372 = browser.currentScene.createNode("Shape");
Shape1372.USE = "HAnimJointShape";
Transform1371.child = new undefined();

Transform1371.child[0] = Shape1372;

Transform1370.children = new MFNode();

Transform1370.children[0] = Transform1371;

HAnimSegment1369.children = new MFNode();

HAnimSegment1369.children[0] = Transform1370;

let Shape1373 = browser.currentScene.createNode("Shape");
let LineSet1374 = browser.currentScene.createNode("LineSet");
LineSet1374.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1375 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1375.USE = "HAnimSegmentLineColorRGBA";
LineSet1374.color = ColorRGBA1375;

let Coordinate1376 = browser.currentScene.createNode("Coordinate");
Coordinate1376.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet1374.coord = Coordinate1376;

Shape1373.geometry = LineSet1374;

HAnimSegment1369.children[1] = Shape1373;

let HAnimSite1377 = browser.currentScene.createNode("HAnimSite");
HAnimSite1377.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite1377.name = "r_ulnar_styloid_pt";
HAnimSite1377.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
let TouchSensor1378 = browser.currentScene.createNode("TouchSensor");
TouchSensor1378.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite1377.children = new MFNode();

HAnimSite1377.children[0] = TouchSensor1378;

let Shape1379 = browser.currentScene.createNode("Shape");
Shape1379.USE = "HAnimSiteShape";
HAnimSite1377.children[1] = Shape1379;

HAnimSegment1369.children[2] = HAnimSite1377;

HAnimJoint1368.children = new MFNode();

HAnimJoint1368.children[0] = HAnimSegment1369;

let HAnimJoint1380 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1380.DEF = "hanim_r_radiocarpal";
HAnimJoint1380.name = "r_radiocarpal";
HAnimJoint1380.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
let HAnimSegment1381 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1381.DEF = "hanim_r_carpal";
HAnimSegment1381.name = "r_carpal";
let Transform1382 = browser.currentScene.createNode("Transform");
Transform1382.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform1382.rotation = new SFRotation(new float[0,0,1,-3.14]);
Transform1382.scale = new SFVec3f(new float[0.2,0.2,0.2]);
let Transform1383 = browser.currentScene.createNode("Transform");
Transform1383.rotation = new SFRotation(new float[0,1,0,1.57]);
let Shape1384 = browser.currentScene.createNode("Shape");
Shape1384.USE = "HAnimJointShape";
Transform1383.child = new undefined();

Transform1383.child[0] = Shape1384;

Transform1382.children = new MFNode();

Transform1382.children[0] = Transform1383;

HAnimSegment1381.children = new MFNode();

HAnimSegment1381.children[0] = Transform1382;

let Shape1385 = browser.currentScene.createNode("Shape");
let LineSet1386 = browser.currentScene.createNode("LineSet");
LineSet1386.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1387 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1387.USE = "HAnimSegmentLineColorRGBA";
LineSet1386.color = ColorRGBA1387;

let Coordinate1388 = browser.currentScene.createNode("Coordinate");
Coordinate1388.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-8.0515,0.9213,1.3235]);
LineSet1386.coord = Coordinate1388;

Shape1385.geometry = LineSet1386;

HAnimSegment1381.children[1] = Shape1385;

let Shape1389 = browser.currentScene.createNode("Shape");
let LineSet1390 = browser.currentScene.createNode("LineSet");
LineSet1390.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1391 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1391.USE = "HAnimSegmentLineColorRGBA";
LineSet1390.color = ColorRGBA1391;

let Coordinate1392 = browser.currentScene.createNode("Coordinate");
Coordinate1392.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-8.0515,0.9225,0.8386]);
LineSet1390.coord = Coordinate1392;

Shape1389.geometry = LineSet1390;

HAnimSegment1381.children[2] = Shape1389;

let Shape1393 = browser.currentScene.createNode("Shape");
let LineSet1394 = browser.currentScene.createNode("LineSet");
LineSet1394.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1395 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1395.USE = "HAnimSegmentLineColorRGBA";
LineSet1394.color = ColorRGBA1395;

let Coordinate1396 = browser.currentScene.createNode("Coordinate");
Coordinate1396.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-8.0405,0.9246,0.2513]);
LineSet1394.coord = Coordinate1396;

Shape1393.geometry = LineSet1394;

HAnimSegment1381.children[3] = Shape1393;

let Shape1397 = browser.currentScene.createNode("Shape");
let LineSet1398 = browser.currentScene.createNode("LineSet");
LineSet1398.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1399 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1399.USE = "HAnimSegmentLineColorRGBA";
LineSet1398.color = ColorRGBA1399;

let Coordinate1400 = browser.currentScene.createNode("Coordinate");
Coordinate1400.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-8.0405,0.921,-0.6795]);
LineSet1398.coord = Coordinate1400;

Shape1397.geometry = LineSet1398;

HAnimSegment1381.children[4] = Shape1397;

HAnimJoint1380.children = new MFNode();

HAnimJoint1380.children[0] = HAnimSegment1381;

let HAnimJoint1401 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1401.DEF = "hanim_r_midcarpal_1";
HAnimJoint1401.name = "r_midcarpal_1";
HAnimJoint1401.center = new SFVec3f(new float[-8.0515,0.9213,1.3235]);
let HAnimSegment1402 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1402.DEF = "hanim_r_trapezium";
HAnimSegment1402.name = "r_trapezium";
let Transform1403 = browser.currentScene.createNode("Transform");
Transform1403.translation = new SFVec3f(new float[-8.0515,0.9213,1.3235]);
let Transform1404 = browser.currentScene.createNode("Transform");
let Shape1405 = browser.currentScene.createNode("Shape");
Shape1405.USE = "HAnimJointShape";
Transform1404.child = new undefined();

Transform1404.child[0] = Shape1405;

Transform1403.children = new MFNode();

Transform1403.children[0] = Transform1404;

HAnimSegment1402.children = new MFNode();

HAnimSegment1402.children[0] = Transform1403;

let Shape1406 = browser.currentScene.createNode("Shape");
let LineSet1407 = browser.currentScene.createNode("LineSet");
LineSet1407.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1408 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1408.USE = "HAnimSegmentLineColorRGBA";
LineSet1407.color = ColorRGBA1408;

let Coordinate1409 = browser.currentScene.createNode("Coordinate");
Coordinate1409.point = new MFVec3f(new float[-8.0515,0.9213,1.3235,-0.1899,0.8502,-0.0473]);
LineSet1407.coord = Coordinate1409;

Shape1406.geometry = LineSet1407;

HAnimSegment1402.children[1] = Shape1406;

HAnimJoint1401.children = new MFNode();

HAnimJoint1401.children[0] = HAnimSegment1402;

let HAnimJoint1410 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1410.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint1410.name = "r_carpometacarpal_1";
HAnimJoint1410.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
let HAnimSegment1411 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1411.DEF = "hanim_r_metacarpal_1";
HAnimSegment1411.name = "r_metacarpal_1";
let Transform1412 = browser.currentScene.createNode("Transform");
Transform1412.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
let Transform1413 = browser.currentScene.createNode("Transform");
let Shape1414 = browser.currentScene.createNode("Shape");
Shape1414.USE = "HAnimJointShape";
Transform1413.child = new undefined();

Transform1413.child[0] = Shape1414;

Transform1412.children = new MFNode();

Transform1412.children[0] = Transform1413;

HAnimSegment1411.children = new MFNode();

HAnimSegment1411.children[0] = Transform1412;

let Shape1415 = browser.currentScene.createNode("Shape");
let LineSet1416 = browser.currentScene.createNode("LineSet");
LineSet1416.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1417 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1417.USE = "HAnimSegmentLineColorRGBA";
LineSet1416.color = ColorRGBA1417;

let Coordinate1418 = browser.currentScene.createNode("Coordinate");
Coordinate1418.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet1416.coord = Coordinate1418;

Shape1415.geometry = LineSet1416;

HAnimSegment1411.children[1] = Shape1415;

HAnimJoint1410.children = new MFNode();

HAnimJoint1410.children[0] = HAnimSegment1411;

let HAnimJoint1419 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1419.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint1419.name = "r_metacarpophalangeal_1";
HAnimJoint1419.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
let HAnimSegment1420 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1420.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimSegment1420.name = "r_carpal_proximal_phalanx_1";
let Transform1421 = browser.currentScene.createNode("Transform");
Transform1421.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
let Transform1422 = browser.currentScene.createNode("Transform");
let Shape1423 = browser.currentScene.createNode("Shape");
Shape1423.USE = "HAnimJointShape";
Transform1422.child = new undefined();

Transform1422.child[0] = Shape1423;

Transform1421.children = new MFNode();

Transform1421.children[0] = Transform1422;

HAnimSegment1420.children = new MFNode();

HAnimSegment1420.children[0] = Transform1421;

let Shape1424 = browser.currentScene.createNode("Shape");
let LineSet1425 = browser.currentScene.createNode("LineSet");
LineSet1425.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1426 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1426.USE = "HAnimSegmentLineColorRGBA";
LineSet1425.color = ColorRGBA1426;

let Coordinate1427 = browser.currentScene.createNode("Coordinate");
Coordinate1427.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet1425.coord = Coordinate1427;

Shape1424.geometry = LineSet1425;

HAnimSegment1420.children[1] = Shape1424;

let HAnimSite1428 = browser.currentScene.createNode("HAnimSite");
HAnimSite1428.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite1428.name = "r_carpal_distal_phalanx_1_tip";
let TouchSensor1429 = browser.currentScene.createNode("TouchSensor");
TouchSensor1429.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite1428.children = new MFNode();

HAnimSite1428.children[0] = TouchSensor1429;

let Shape1430 = browser.currentScene.createNode("Shape");
Shape1430.USE = "HAnimSiteShape";
HAnimSite1428.children[1] = Shape1430;

HAnimSegment1420.children[2] = HAnimSite1428;

HAnimJoint1419.children = new MFNode();

HAnimJoint1419.children[0] = HAnimSegment1420;

let HAnimJoint1431 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1431.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint1431.name = "r_carpal_interphalangeal_1";
HAnimJoint1431.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint1419.children[1] = HAnimJoint1431;

HAnimJoint1410.children[1] = HAnimJoint1419;

HAnimJoint1401.children[1] = HAnimJoint1410;

HAnimJoint1380.children[1] = HAnimJoint1401;

let HAnimJoint1432 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1432.DEF = "hanim_r_midcarpal_2";
HAnimJoint1432.name = "r_midcarpal_2";
HAnimJoint1432.center = new SFVec3f(new float[-8.0515,0.9225,0.8386]);
let HAnimSegment1433 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1433.DEF = "hanim_r_trapezoid";
HAnimSegment1433.name = "r_trapezoid";
let Transform1434 = browser.currentScene.createNode("Transform");
Transform1434.translation = new SFVec3f(new float[-8.0515,0.9225,0.8386]);
let Transform1435 = browser.currentScene.createNode("Transform");
let Shape1436 = browser.currentScene.createNode("Shape");
Shape1436.USE = "HAnimJointShape";
Transform1435.child = new undefined();

Transform1435.child[0] = Shape1436;

Transform1434.children = new MFNode();

Transform1434.children[0] = Transform1435;

HAnimSegment1433.children = new MFNode();

HAnimSegment1433.children[0] = Transform1434;

let Shape1437 = browser.currentScene.createNode("Shape");
let LineSet1438 = browser.currentScene.createNode("LineSet");
LineSet1438.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1439 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1439.USE = "HAnimSegmentLineColorRGBA";
LineSet1438.color = ColorRGBA1439;

let Coordinate1440 = browser.currentScene.createNode("Coordinate");
Coordinate1440.point = new MFVec3f(new float[-8.0515,0.9225,0.8386,-0.1961,0.8055,-0.0218]);
LineSet1438.coord = Coordinate1440;

Shape1437.geometry = LineSet1438;

HAnimSegment1433.children[1] = Shape1437;

let HAnimSite1441 = browser.currentScene.createNode("HAnimSite");
HAnimSite1441.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite1441.name = "r_metacarpal_phalanx_2_pt";
HAnimSite1441.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
let TouchSensor1442 = browser.currentScene.createNode("TouchSensor");
TouchSensor1442.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite1441.children = new MFNode();

HAnimSite1441.children[0] = TouchSensor1442;

let Shape1443 = browser.currentScene.createNode("Shape");
Shape1443.USE = "HAnimSiteShape";
HAnimSite1441.children[1] = Shape1443;

HAnimSegment1433.children[2] = HAnimSite1441;

HAnimJoint1432.children = new MFNode();

HAnimJoint1432.children[0] = HAnimSegment1433;

let HAnimJoint1444 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1444.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint1444.name = "r_carpometacarpal_2";
HAnimJoint1444.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
let HAnimSegment1445 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1445.DEF = "hanim_r_metacarpal_2";
HAnimSegment1445.name = "r_metacarpal_2";
let Transform1446 = browser.currentScene.createNode("Transform");
Transform1446.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
let Transform1447 = browser.currentScene.createNode("Transform");
let Shape1448 = browser.currentScene.createNode("Shape");
Shape1448.USE = "HAnimJointShape";
Transform1447.child = new undefined();

Transform1447.child[0] = Shape1448;

Transform1446.children = new MFNode();

Transform1446.children[0] = Transform1447;

HAnimSegment1445.children = new MFNode();

HAnimSegment1445.children[0] = Transform1446;

let Shape1449 = browser.currentScene.createNode("Shape");
let LineSet1450 = browser.currentScene.createNode("LineSet");
LineSet1450.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1451 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1451.USE = "HAnimSegmentLineColorRGBA";
LineSet1450.color = ColorRGBA1451;

let Coordinate1452 = browser.currentScene.createNode("Coordinate");
Coordinate1452.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet1450.coord = Coordinate1452;

Shape1449.geometry = LineSet1450;

HAnimSegment1445.children[1] = Shape1449;

HAnimJoint1444.children = new MFNode();

HAnimJoint1444.children[0] = HAnimSegment1445;

let HAnimJoint1453 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1453.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint1453.name = "r_metacarpophalangeal_2";
HAnimJoint1453.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
let HAnimSegment1454 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1454.DEF = "hanim_r_carpal_proximal_phalanx_2 ";
HAnimSegment1454.name = "r_carpal_proximal_phalanx_2 ";
let Transform1455 = browser.currentScene.createNode("Transform");
Transform1455.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
let Transform1456 = browser.currentScene.createNode("Transform");
let Shape1457 = browser.currentScene.createNode("Shape");
Shape1457.USE = "HAnimJointShape";
Transform1456.child = new undefined();

Transform1456.child[0] = Shape1457;

Transform1455.children = new MFNode();

Transform1455.children[0] = Transform1456;

HAnimSegment1454.children = new MFNode();

HAnimSegment1454.children[0] = Transform1455;

let Shape1458 = browser.currentScene.createNode("Shape");
let LineSet1459 = browser.currentScene.createNode("LineSet");
LineSet1459.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1460 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1460.USE = "HAnimSegmentLineColorRGBA";
LineSet1459.color = ColorRGBA1460;

let Coordinate1461 = browser.currentScene.createNode("Coordinate");
Coordinate1461.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet1459.coord = Coordinate1461;

Shape1458.geometry = LineSet1459;

HAnimSegment1454.children[1] = Shape1458;

HAnimJoint1453.children = new MFNode();

HAnimJoint1453.children[0] = HAnimSegment1454;

let HAnimJoint1462 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1462.DEF = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimJoint1462.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint1462.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
let HAnimSegment1463 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1463.DEF = "hanim_r_carpal_middle_phalanx_1";
HAnimSegment1463.name = "r_carpal_middle_phalanx_2";
let Transform1464 = browser.currentScene.createNode("Transform");
Transform1464.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
let Transform1465 = browser.currentScene.createNode("Transform");
let Shape1466 = browser.currentScene.createNode("Shape");
Shape1466.USE = "HAnimJointShape";
Transform1465.child = new undefined();

Transform1465.child[0] = Shape1466;

Transform1464.children = new MFNode();

Transform1464.children[0] = Transform1465;

HAnimSegment1463.children = new MFNode();

HAnimSegment1463.children[0] = Transform1464;

let Shape1467 = browser.currentScene.createNode("Shape");
let LineSet1468 = browser.currentScene.createNode("LineSet");
LineSet1468.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1469 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1469.USE = "HAnimSegmentLineColorRGBA";
LineSet1468.color = ColorRGBA1469;

let Coordinate1470 = browser.currentScene.createNode("Coordinate");
Coordinate1470.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet1468.coord = Coordinate1470;

Shape1467.geometry = LineSet1468;

HAnimSegment1463.children[1] = Shape1467;

let HAnimSite1471 = browser.currentScene.createNode("HAnimSite");
HAnimSite1471.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite1471.name = "r_carpal_distal_phalanx_2_tip";
let TouchSensor1472 = browser.currentScene.createNode("TouchSensor");
TouchSensor1472.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite1471.children = new MFNode();

HAnimSite1471.children[0] = TouchSensor1472;

let Shape1473 = browser.currentScene.createNode("Shape");
Shape1473.USE = "HAnimSiteShape";
HAnimSite1471.children[1] = Shape1473;

HAnimSegment1463.children[2] = HAnimSite1471;

let HAnimSite1474 = browser.currentScene.createNode("HAnimSite");
HAnimSite1474.DEF = "hanim_r_dactylion_pt";
HAnimSite1474.name = "r_dactylion_pt";
HAnimSite1474.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
let TouchSensor1475 = browser.currentScene.createNode("TouchSensor");
TouchSensor1475.description = "HAnimSite r_dactylion_pt";
HAnimSite1474.children = new MFNode();

HAnimSite1474.children[0] = TouchSensor1475;

let Shape1476 = browser.currentScene.createNode("Shape");
Shape1476.USE = "HAnimSiteShape";
HAnimSite1474.children[1] = Shape1476;

HAnimSegment1463.children[3] = HAnimSite1474;

HAnimJoint1462.children = new MFNode();

HAnimJoint1462.children[0] = HAnimSegment1463;

let HAnimJoint1477 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1477.DEF = "hanim_r_carpal_distal_interphalangeal_1";
HAnimJoint1477.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint1477.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint1462.children[1] = HAnimJoint1477;

HAnimJoint1453.children[1] = HAnimJoint1462;

HAnimJoint1444.children[1] = HAnimJoint1453;

HAnimJoint1432.children[1] = HAnimJoint1444;

HAnimJoint1380.children[2] = HAnimJoint1432;

let HAnimJoint1478 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1478.DEF = "hanim_r_midcarpal_3";
HAnimJoint1478.name = "r_midcarpal_3";
HAnimJoint1478.center = new SFVec3f(new float[-8.0405,0.9246,0.2513]);
let HAnimSegment1479 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1479.DEF = "hanim_r_capitate";
HAnimSegment1479.name = "r_capitate";
let Transform1480 = browser.currentScene.createNode("Transform");
Transform1480.translation = new SFVec3f(new float[-8.0405,0.9246,0.2513]);
let Transform1481 = browser.currentScene.createNode("Transform");
let Shape1482 = browser.currentScene.createNode("Shape");
Shape1482.USE = "HAnimJointShape";
Transform1481.child = new undefined();

Transform1481.child[0] = Shape1482;

Transform1480.children = new MFNode();

Transform1480.children[0] = Transform1481;

HAnimSegment1479.children = new MFNode();

HAnimSegment1479.children[0] = Transform1480;

let Shape1483 = browser.currentScene.createNode("Shape");
let LineSet1484 = browser.currentScene.createNode("LineSet");
LineSet1484.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1485 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1485.USE = "HAnimSegmentLineColorRGBA";
LineSet1484.color = ColorRGBA1485;

let Coordinate1486 = browser.currentScene.createNode("Coordinate");
Coordinate1486.point = new MFVec3f(new float[-8.0405,0.9246,0.2513,-0.1972,0.806,-0.0468]);
LineSet1484.coord = Coordinate1486;

Shape1483.geometry = LineSet1484;

HAnimSegment1479.children[1] = Shape1483;

let HAnimSite1487 = browser.currentScene.createNode("HAnimSite");
HAnimSite1487.DEF = "hanim_r_metacarpal_phalanx_3_pt";
HAnimSite1487.name = "r_metacarpal_phalanx_3_pt";
let TouchSensor1488 = browser.currentScene.createNode("TouchSensor");
TouchSensor1488.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite1487.children = new MFNode();

HAnimSite1487.children[0] = TouchSensor1488;

let Shape1489 = browser.currentScene.createNode("Shape");
Shape1489.USE = "HAnimSiteShape";
HAnimSite1487.children[1] = Shape1489;

HAnimSegment1479.children[2] = HAnimSite1487;

HAnimJoint1478.children = new MFNode();

HAnimJoint1478.children[0] = HAnimSegment1479;

let HAnimJoint1490 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1490.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint1490.name = "r_carpometacarpal_3";
HAnimJoint1490.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
let HAnimSegment1491 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1491.DEF = "hanim_r_metacarpal_3";
HAnimSegment1491.name = "r_metacarpal_3";
let Transform1492 = browser.currentScene.createNode("Transform");
Transform1492.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
let Transform1493 = browser.currentScene.createNode("Transform");
let Shape1494 = browser.currentScene.createNode("Shape");
Shape1494.USE = "HAnimJointShape";
Transform1493.child = new undefined();

Transform1493.child[0] = Shape1494;

Transform1492.children = new MFNode();

Transform1492.children[0] = Transform1493;

HAnimSegment1491.children = new MFNode();

HAnimSegment1491.children[0] = Transform1492;

let Shape1495 = browser.currentScene.createNode("Shape");
let LineSet1496 = browser.currentScene.createNode("LineSet");
LineSet1496.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1497 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1497.USE = "HAnimSegmentLineColorRGBA";
LineSet1496.color = ColorRGBA1497;

let Coordinate1498 = browser.currentScene.createNode("Coordinate");
Coordinate1498.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet1496.coord = Coordinate1498;

Shape1495.geometry = LineSet1496;

HAnimSegment1491.children[1] = Shape1495;

HAnimJoint1490.children = new MFNode();

HAnimJoint1490.children[0] = HAnimSegment1491;

let HAnimJoint1499 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1499.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint1499.name = "r_metacarpophalangeal_3";
HAnimJoint1499.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
let HAnimSegment1500 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1500.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimSegment1500.name = "r_carpal_proximal_phalanx_3";
let Transform1501 = browser.currentScene.createNode("Transform");
Transform1501.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
let Transform1502 = browser.currentScene.createNode("Transform");
let Shape1503 = browser.currentScene.createNode("Shape");
Shape1503.USE = "HAnimJointShape";
Transform1502.child = new undefined();

Transform1502.child[0] = Shape1503;

Transform1501.children = new MFNode();

Transform1501.children[0] = Transform1502;

HAnimSegment1500.children = new MFNode();

HAnimSegment1500.children[0] = Transform1501;

let Shape1504 = browser.currentScene.createNode("Shape");
let LineSet1505 = browser.currentScene.createNode("LineSet");
LineSet1505.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1506 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1506.USE = "HAnimSegmentLineColorRGBA";
LineSet1505.color = ColorRGBA1506;

let Coordinate1507 = browser.currentScene.createNode("Coordinate");
Coordinate1507.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet1505.coord = Coordinate1507;

Shape1504.geometry = LineSet1505;

HAnimSegment1500.children[1] = Shape1504;

HAnimJoint1499.children = new MFNode();

HAnimJoint1499.children[0] = HAnimSegment1500;

let HAnimJoint1508 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1508.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint1508.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint1508.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
let HAnimSegment1509 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1509.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimSegment1509.name = "r_carpal_middle_phalanx_3";
let Transform1510 = browser.currentScene.createNode("Transform");
Transform1510.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
let Transform1511 = browser.currentScene.createNode("Transform");
let Shape1512 = browser.currentScene.createNode("Shape");
Shape1512.USE = "HAnimJointShape";
Transform1511.child = new undefined();

Transform1511.child[0] = Shape1512;

Transform1510.children = new MFNode();

Transform1510.children[0] = Transform1511;

HAnimSegment1509.children = new MFNode();

HAnimSegment1509.children[0] = Transform1510;

let Shape1513 = browser.currentScene.createNode("Shape");
let LineSet1514 = browser.currentScene.createNode("LineSet");
LineSet1514.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1515 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1515.USE = "HAnimSegmentLineColorRGBA";
LineSet1514.color = ColorRGBA1515;

let Coordinate1516 = browser.currentScene.createNode("Coordinate");
Coordinate1516.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet1514.coord = Coordinate1516;

Shape1513.geometry = LineSet1514;

HAnimSegment1509.children[1] = Shape1513;

let HAnimSite1517 = browser.currentScene.createNode("HAnimSite");
HAnimSite1517.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite1517.name = "r_carpal_distal_phalanx_3_tip";
let TouchSensor1518 = browser.currentScene.createNode("TouchSensor");
TouchSensor1518.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite1517.children = new MFNode();

HAnimSite1517.children[0] = TouchSensor1518;

let Shape1519 = browser.currentScene.createNode("Shape");
Shape1519.USE = "HAnimSiteShape";
HAnimSite1517.children[1] = Shape1519;

HAnimSegment1509.children[2] = HAnimSite1517;

HAnimJoint1508.children = new MFNode();

HAnimJoint1508.children[0] = HAnimSegment1509;

let HAnimJoint1520 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1520.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint1520.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint1520.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint1508.children[1] = HAnimJoint1520;

HAnimJoint1499.children[1] = HAnimJoint1508;

HAnimJoint1490.children[1] = HAnimJoint1499;

HAnimJoint1478.children[1] = HAnimJoint1490;

HAnimJoint1380.children[3] = HAnimJoint1478;

let HAnimJoint1521 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1521.DEF = "hanim_r_midcarpal_4_1";
HAnimJoint1521.name = "r_midcarpal_4_5";
HAnimJoint1521.center = new SFVec3f(new float[-8.0405,0.921,-0.6795]);
let HAnimSegment1522 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1522.DEF = "hanim_r_hamate";
HAnimSegment1522.name = "r_hamate";
let Transform1523 = browser.currentScene.createNode("Transform");
Transform1523.translation = new SFVec3f(new float[-8.0405,0.921,-0.6795]);
let Transform1524 = browser.currentScene.createNode("Transform");
let Shape1525 = browser.currentScene.createNode("Shape");
Shape1525.USE = "HAnimJointShape";
Transform1524.child = new undefined();

Transform1524.child[0] = Shape1525;

Transform1523.children = new MFNode();

Transform1523.children[0] = Transform1524;

HAnimSegment1522.children = new MFNode();

HAnimSegment1522.children[0] = Transform1523;

let Shape1526 = browser.currentScene.createNode("Shape");
let LineSet1527 = browser.currentScene.createNode("LineSet");
LineSet1527.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1528 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1528.USE = "HAnimSegmentLineColorRGBA";
LineSet1527.color = ColorRGBA1528;

let Coordinate1529 = browser.currentScene.createNode("Coordinate");
Coordinate1529.point = new MFVec3f(new float[-8.0405,0.921,-0.6795,-0.1951,0.8049,-0.0732]);
LineSet1527.coord = Coordinate1529;

Shape1526.geometry = LineSet1527;

HAnimSegment1522.children[1] = Shape1526;

let Shape1530 = browser.currentScene.createNode("Shape");
let LineSet1531 = browser.currentScene.createNode("LineSet");
LineSet1531.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1532 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1532.USE = "HAnimSegmentLineColorRGBA";
LineSet1531.color = ColorRGBA1532;

let Coordinate1533 = browser.currentScene.createNode("Coordinate");
Coordinate1533.point = new MFVec3f(new float[-8.0405,0.921,-0.6795,-0.1926,0.8096,-0.0975]);
LineSet1531.coord = Coordinate1533;

Shape1530.geometry = LineSet1531;

HAnimSegment1522.children[2] = Shape1530;

let HAnimSite1534 = browser.currentScene.createNode("HAnimSite");
HAnimSite1534.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite1534.name = "r_metacarpal_phalanx_5_pt";
HAnimSite1534.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
let TouchSensor1535 = browser.currentScene.createNode("TouchSensor");
TouchSensor1535.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite1534.children = new MFNode();

HAnimSite1534.children[0] = TouchSensor1535;

let Shape1536 = browser.currentScene.createNode("Shape");
Shape1536.USE = "HAnimSiteShape";
HAnimSite1534.children[1] = Shape1536;

HAnimSegment1522.children[3] = HAnimSite1534;

HAnimJoint1521.children = new MFNode();

HAnimJoint1521.children[0] = HAnimSegment1522;

let HAnimJoint1537 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1537.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint1537.name = "r_carpometacarpal_4";
HAnimJoint1537.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
let HAnimSegment1538 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1538.DEF = "hanim_r_metacarpal_4";
HAnimSegment1538.name = "r_metacarpal_4";
let Transform1539 = browser.currentScene.createNode("Transform");
Transform1539.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
let Transform1540 = browser.currentScene.createNode("Transform");
let Shape1541 = browser.currentScene.createNode("Shape");
Shape1541.USE = "HAnimJointShape";
Transform1540.child = new undefined();

Transform1540.child[0] = Shape1541;

Transform1539.children = new MFNode();

Transform1539.children[0] = Transform1540;

HAnimSegment1538.children = new MFNode();

HAnimSegment1538.children[0] = Transform1539;

let Shape1542 = browser.currentScene.createNode("Shape");
let LineSet1543 = browser.currentScene.createNode("LineSet");
LineSet1543.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1544 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1544.USE = "HAnimSegmentLineColorRGBA";
LineSet1543.color = ColorRGBA1544;

let Coordinate1545 = browser.currentScene.createNode("Coordinate");
Coordinate1545.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet1543.coord = Coordinate1545;

Shape1542.geometry = LineSet1543;

HAnimSegment1538.children[1] = Shape1542;

HAnimJoint1537.children = new MFNode();

HAnimJoint1537.children[0] = HAnimSegment1538;

let HAnimJoint1546 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1546.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint1546.name = "r_metacarpophalangeal_4";
HAnimJoint1546.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
let HAnimSegment1547 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1547.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimSegment1547.name = "r_carpal_proximal_phalanx_4";
let Transform1548 = browser.currentScene.createNode("Transform");
Transform1548.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
let Transform1549 = browser.currentScene.createNode("Transform");
let Shape1550 = browser.currentScene.createNode("Shape");
Shape1550.USE = "HAnimJointShape";
Transform1549.child = new undefined();

Transform1549.child[0] = Shape1550;

Transform1548.children = new MFNode();

Transform1548.children[0] = Transform1549;

HAnimSegment1547.children = new MFNode();

HAnimSegment1547.children[0] = Transform1548;

let Shape1551 = browser.currentScene.createNode("Shape");
let LineSet1552 = browser.currentScene.createNode("LineSet");
LineSet1552.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1553 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1553.USE = "HAnimSegmentLineColorRGBA";
LineSet1552.color = ColorRGBA1553;

let Coordinate1554 = browser.currentScene.createNode("Coordinate");
Coordinate1554.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet1552.coord = Coordinate1554;

Shape1551.geometry = LineSet1552;

HAnimSegment1547.children[1] = Shape1551;

HAnimJoint1546.children = new MFNode();

HAnimJoint1546.children[0] = HAnimSegment1547;

let HAnimJoint1555 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1555.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint1555.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint1555.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
let HAnimSegment1556 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1556.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimSegment1556.name = "r_carpal_middle_phalanx_4";
let Transform1557 = browser.currentScene.createNode("Transform");
Transform1557.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
let Transform1558 = browser.currentScene.createNode("Transform");
let Shape1559 = browser.currentScene.createNode("Shape");
Shape1559.USE = "HAnimJointShape";
Transform1558.child = new undefined();

Transform1558.child[0] = Shape1559;

Transform1557.children = new MFNode();

Transform1557.children[0] = Transform1558;

HAnimSegment1556.children = new MFNode();

HAnimSegment1556.children[0] = Transform1557;

let Shape1560 = browser.currentScene.createNode("Shape");
let LineSet1561 = browser.currentScene.createNode("LineSet");
LineSet1561.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1562 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1562.USE = "HAnimSegmentLineColorRGBA";
LineSet1561.color = ColorRGBA1562;

let Coordinate1563 = browser.currentScene.createNode("Coordinate");
Coordinate1563.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet1561.coord = Coordinate1563;

Shape1560.geometry = LineSet1561;

HAnimSegment1556.children[1] = Shape1560;

let HAnimSite1564 = browser.currentScene.createNode("HAnimSite");
HAnimSite1564.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite1564.name = "r_carpal_distal_phalanx_4_tip";
let TouchSensor1565 = browser.currentScene.createNode("TouchSensor");
TouchSensor1565.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite1564.children = new MFNode();

HAnimSite1564.children[0] = TouchSensor1565;

let Shape1566 = browser.currentScene.createNode("Shape");
Shape1566.USE = "HAnimSiteShape";
HAnimSite1564.children[1] = Shape1566;

HAnimSegment1556.children[2] = HAnimSite1564;

HAnimJoint1555.children = new MFNode();

HAnimJoint1555.children[0] = HAnimSegment1556;

let HAnimJoint1567 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1567.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint1567.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint1567.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint1555.children[1] = HAnimJoint1567;

HAnimJoint1546.children[1] = HAnimJoint1555;

HAnimJoint1537.children[1] = HAnimJoint1546;

HAnimJoint1521.children[1] = HAnimJoint1537;

let HAnimJoint1568 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1568.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint1568.name = "r_carpometacarpal_5";
HAnimJoint1568.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
let HAnimSegment1569 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1569.DEF = "hanim_r_metacarpal_5";
HAnimSegment1569.name = "r_metacarpal_5";
let Transform1570 = browser.currentScene.createNode("Transform");
Transform1570.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
let Transform1571 = browser.currentScene.createNode("Transform");
let Shape1572 = browser.currentScene.createNode("Shape");
Shape1572.USE = "HAnimJointShape";
Transform1571.child = new undefined();

Transform1571.child[0] = Shape1572;

Transform1570.children = new MFNode();

Transform1570.children[0] = Transform1571;

HAnimSegment1569.children = new MFNode();

HAnimSegment1569.children[0] = Transform1570;

let Shape1573 = browser.currentScene.createNode("Shape");
let LineSet1574 = browser.currentScene.createNode("LineSet");
LineSet1574.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1575 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1575.USE = "HAnimSegmentLineColorRGBA";
LineSet1574.color = ColorRGBA1575;

let Coordinate1576 = browser.currentScene.createNode("Coordinate");
Coordinate1576.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet1574.coord = Coordinate1576;

Shape1573.geometry = LineSet1574;

HAnimSegment1569.children[1] = Shape1573;

HAnimJoint1568.children = new MFNode();

HAnimJoint1568.children[0] = HAnimSegment1569;

let HAnimJoint1577 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1577.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint1577.name = "r_metacarpophalangeal_5";
HAnimJoint1577.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
let HAnimSegment1578 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1578.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimSegment1578.name = "r_carpal_proximal_phalanx_5";
let Transform1579 = browser.currentScene.createNode("Transform");
Transform1579.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
let Transform1580 = browser.currentScene.createNode("Transform");
let Shape1581 = browser.currentScene.createNode("Shape");
Shape1581.USE = "HAnimJointShape";
Transform1580.child = new undefined();

Transform1580.child[0] = Shape1581;

Transform1579.children = new MFNode();

Transform1579.children[0] = Transform1580;

HAnimSegment1578.children = new MFNode();

HAnimSegment1578.children[0] = Transform1579;

let Shape1582 = browser.currentScene.createNode("Shape");
let LineSet1583 = browser.currentScene.createNode("LineSet");
LineSet1583.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1584 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1584.USE = "HAnimSegmentLineColorRGBA";
LineSet1583.color = ColorRGBA1584;

let Coordinate1585 = browser.currentScene.createNode("Coordinate");
Coordinate1585.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet1583.coord = Coordinate1585;

Shape1582.geometry = LineSet1583;

HAnimSegment1578.children[1] = Shape1582;

HAnimJoint1577.children = new MFNode();

HAnimJoint1577.children[0] = HAnimSegment1578;

let HAnimJoint1586 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1586.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint1586.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint1586.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
let HAnimSegment1587 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1587.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimSegment1587.name = "r_carpal_middle_phalanx_5";
let Transform1588 = browser.currentScene.createNode("Transform");
Transform1588.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
let Transform1589 = browser.currentScene.createNode("Transform");
let Shape1590 = browser.currentScene.createNode("Shape");
Shape1590.USE = "HAnimJointShape";
Transform1589.child = new undefined();

Transform1589.child[0] = Shape1590;

Transform1588.children = new MFNode();

Transform1588.children[0] = Transform1589;

HAnimSegment1587.children = new MFNode();

HAnimSegment1587.children[0] = Transform1588;

let Shape1591 = browser.currentScene.createNode("Shape");
let LineSet1592 = browser.currentScene.createNode("LineSet");
LineSet1592.vertexCount = new MFInt32(new int[2]);
let ColorRGBA1593 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA1593.USE = "HAnimSegmentLineColorRGBA";
LineSet1592.color = ColorRGBA1593;

let Coordinate1594 = browser.currentScene.createNode("Coordinate");
Coordinate1594.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet1592.coord = Coordinate1594;

Shape1591.geometry = LineSet1592;

HAnimSegment1587.children[1] = Shape1591;

let HAnimSite1595 = browser.currentScene.createNode("HAnimSite");
HAnimSite1595.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite1595.name = "r_carpal_distal_phalanx_5_tip";
let TouchSensor1596 = browser.currentScene.createNode("TouchSensor");
TouchSensor1596.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite1595.children = new MFNode();

HAnimSite1595.children[0] = TouchSensor1596;

let Shape1597 = browser.currentScene.createNode("Shape");
Shape1597.USE = "HAnimSiteShape";
HAnimSite1595.children[1] = Shape1597;

HAnimSegment1587.children[2] = HAnimSite1595;

HAnimJoint1586.children = new MFNode();

HAnimJoint1586.children[0] = HAnimSegment1587;

let HAnimJoint1598 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimSite1599 = browser.currentScene.createNode("HAnimSite");
HAnimSite1599.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid42.viewpoints[1] = HAnimSite1599;

let HAnimSite1600 = browser.currentScene.createNode("HAnimSite");
HAnimSite1600.USE = "hanim_crotch_pt";
HAnimHumanoid42.viewpoints[2] = HAnimSite1600;

let HAnimSite1601 = browser.currentScene.createNode("HAnimSite");
HAnimSite1601.USE = "hanim_l_asis_pt";
HAnimHumanoid42.viewpoints[3] = HAnimSite1601;

let HAnimSite1602 = browser.currentScene.createNode("HAnimSite");
HAnimSite1602.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid42.viewpoints[4] = HAnimSite1602;

let HAnimSite1603 = browser.currentScene.createNode("HAnimSite");
HAnimSite1603.USE = "hanim_l_psis_pt";
HAnimHumanoid42.viewpoints[5] = HAnimSite1603;

let HAnimSite1604 = browser.currentScene.createNode("HAnimSite");
HAnimSite1604.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid42.viewpoints[6] = HAnimSite1604;

let HAnimSite1605 = browser.currentScene.createNode("HAnimSite");
HAnimSite1605.USE = "hanim_r_asis_pt";
HAnimHumanoid42.viewpoints[7] = HAnimSite1605;

let HAnimSite1606 = browser.currentScene.createNode("HAnimSite");
HAnimSite1606.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid42.viewpoints[8] = HAnimSite1606;

let HAnimSite1607 = browser.currentScene.createNode("HAnimSite");
HAnimSite1607.USE = "hanim_r_psis_pt";
HAnimHumanoid42.viewpoints[9] = HAnimSite1607;

let HAnimSite1608 = browser.currentScene.createNode("HAnimSite");
HAnimSite1608.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid42.viewpoints[10] = HAnimSite1608;

let HAnimSite1609 = browser.currentScene.createNode("HAnimSite");
HAnimSite1609.USE = "hanim_navel_pt";
HAnimHumanoid42.viewpoints[11] = HAnimSite1609;

let HAnimSite1610 = browser.currentScene.createNode("HAnimSite");
HAnimSite1610.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid42.viewpoints[12] = HAnimSite1610;

let HAnimSite1611 = browser.currentScene.createNode("HAnimSite");
HAnimSite1611.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid42.viewpoints[13] = HAnimSite1611;

let HAnimSite1612 = browser.currentScene.createNode("HAnimSite");
HAnimSite1612.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[14] = HAnimSite1612;

let HAnimSite1613 = browser.currentScene.createNode("HAnimSite");
HAnimSite1613.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[15] = HAnimSite1613;

let HAnimSite1614 = browser.currentScene.createNode("HAnimSite");
HAnimSite1614.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid42.viewpoints[16] = HAnimSite1614;

let HAnimSite1615 = browser.currentScene.createNode("HAnimSite");
HAnimSite1615.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid42.viewpoints[17] = HAnimSite1615;

let HAnimSite1616 = browser.currentScene.createNode("HAnimSite");
HAnimSite1616.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[18] = HAnimSite1616;

let HAnimSite1617 = browser.currentScene.createNode("HAnimSite");
HAnimSite1617.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[19] = HAnimSite1617;

let HAnimSite1618 = browser.currentScene.createNode("HAnimSite");
HAnimSite1618.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid42.viewpoints[20] = HAnimSite1618;

let HAnimSite1619 = browser.currentScene.createNode("HAnimSite");
HAnimSite1619.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid42.viewpoints[21] = HAnimSite1619;

let HAnimSite1620 = browser.currentScene.createNode("HAnimSite");
HAnimSite1620.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[22] = HAnimSite1620;

let HAnimSite1621 = browser.currentScene.createNode("HAnimSite");
HAnimSite1621.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[23] = HAnimSite1621;

let HAnimSite1622 = browser.currentScene.createNode("HAnimSite");
HAnimSite1622.USE = "hanim_l_tibiale_pt";
HAnimHumanoid42.viewpoints[24] = HAnimSite1622;

let HAnimSite1623 = browser.currentScene.createNode("HAnimSite");
HAnimSite1623.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[25] = HAnimSite1623;

let HAnimSite1624 = browser.currentScene.createNode("HAnimSite");
HAnimSite1624.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid42.viewpoints[26] = HAnimSite1624;

let HAnimSite1625 = browser.currentScene.createNode("HAnimSite");
HAnimSite1625.USE = "hanim_l_metatarsal_phalanx_1_pt";
HAnimHumanoid42.viewpoints[27] = HAnimSite1625;

let HAnimSite1626 = browser.currentScene.createNode("HAnimSite");
HAnimSite1626.USE = "hanim_l_tarsal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[28] = HAnimSite1626;

let HAnimSite1627 = browser.currentScene.createNode("HAnimSite");
HAnimSite1627.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[29] = HAnimSite1627;

let HAnimSite1628 = browser.currentScene.createNode("HAnimSite");
HAnimSite1628.USE = "hanim_l_tarsal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[30] = HAnimSite1628;

let HAnimSite1629 = browser.currentScene.createNode("HAnimSite");
HAnimSite1629.USE = "hanim_l_tarsal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[31] = HAnimSite1629;

let HAnimSite1630 = browser.currentScene.createNode("HAnimSite");
HAnimSite1630.USE = "hanim_l_metatarsal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[32] = HAnimSite1630;

let HAnimSite1631 = browser.currentScene.createNode("HAnimSite");
HAnimSite1631.USE = "hanim_l_tarsal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[33] = HAnimSite1631;

let HAnimSite1632 = browser.currentScene.createNode("HAnimSite");
HAnimSite1632.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[34] = HAnimSite1632;

let HAnimSite1633 = browser.currentScene.createNode("HAnimSite");
HAnimSite1633.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[35] = HAnimSite1633;

let HAnimSite1634 = browser.currentScene.createNode("HAnimSite");
HAnimSite1634.USE = "hanim_r_tibiale_pt";
HAnimHumanoid42.viewpoints[36] = HAnimSite1634;

let HAnimSite1635 = browser.currentScene.createNode("HAnimSite");
HAnimSite1635.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[37] = HAnimSite1635;

let HAnimSite1636 = browser.currentScene.createNode("HAnimSite");
HAnimSite1636.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid42.viewpoints[38] = HAnimSite1636;

let HAnimSite1637 = browser.currentScene.createNode("HAnimSite");
HAnimSite1637.USE = "hanim_r_metatarsal_phalanx_1_pt";
HAnimHumanoid42.viewpoints[39] = HAnimSite1637;

let HAnimSite1638 = browser.currentScene.createNode("HAnimSite");
HAnimSite1638.USE = "hanim_r_tarsal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[40] = HAnimSite1638;

let HAnimSite1639 = browser.currentScene.createNode("HAnimSite");
HAnimSite1639.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[41] = HAnimSite1639;

let HAnimSite1640 = browser.currentScene.createNode("HAnimSite");
HAnimSite1640.USE = "hanim_r_tarsal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[42] = HAnimSite1640;

let HAnimSite1641 = browser.currentScene.createNode("HAnimSite");
HAnimSite1641.USE = "hanim_r_tarsal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[43] = HAnimSite1641;

let HAnimSite1642 = browser.currentScene.createNode("HAnimSite");
HAnimSite1642.USE = "hanim_r_metatarsal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[44] = HAnimSite1642;

let HAnimSite1643 = browser.currentScene.createNode("HAnimSite");
HAnimSite1643.USE = "hanim_r_tarsal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[45] = HAnimSite1643;

let HAnimSite1644 = browser.currentScene.createNode("HAnimSite");
HAnimSite1644.USE = "hanim_l_rib10_pt";
HAnimHumanoid42.viewpoints[46] = HAnimSite1644;

let HAnimSite1645 = browser.currentScene.createNode("HAnimSite");
HAnimSite1645.USE = "hanim_r_rib10_pt";
HAnimHumanoid42.viewpoints[47] = HAnimSite1645;

let HAnimSite1646 = browser.currentScene.createNode("HAnimSite");
HAnimSite1646.USE = "hanim_spine_2_middle_back_pt";
HAnimHumanoid42.viewpoints[48] = HAnimSite1646;

let HAnimSite1647 = browser.currentScene.createNode("HAnimSite");
HAnimSite1647.USE = "hanim_substernale_pt";
HAnimHumanoid42.viewpoints[49] = HAnimSite1647;

let HAnimSite1648 = browser.currentScene.createNode("HAnimSite");
HAnimSite1648.USE = "hanim_l_thelion_pt";
HAnimHumanoid42.viewpoints[50] = HAnimSite1648;

let HAnimSite1649 = browser.currentScene.createNode("HAnimSite");
HAnimSite1649.USE = "hanim_r_thelion_pt";
HAnimHumanoid42.viewpoints[51] = HAnimSite1649;

let HAnimSite1650 = browser.currentScene.createNode("HAnimSite");
HAnimSite1650.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[52] = HAnimSite1650;

let HAnimSite1651 = browser.currentScene.createNode("HAnimSite");
HAnimSite1651.USE = "hanim_mesosternale_pt";
HAnimHumanoid42.viewpoints[53] = HAnimSite1651;

let HAnimSite1652 = browser.currentScene.createNode("HAnimSite");
HAnimSite1652.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[54] = HAnimSite1652;

let HAnimSite1653 = browser.currentScene.createNode("HAnimSite");
HAnimSite1653.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[55] = HAnimSite1653;

let HAnimSite1654 = browser.currentScene.createNode("HAnimSite");
HAnimSite1654.USE = "hanim_spine_1_middle_back_pt";
HAnimHumanoid42.viewpoints[56] = HAnimSite1654;

let HAnimSite1655 = browser.currentScene.createNode("HAnimSite");
HAnimSite1655.USE = "hanim_cervicale_pt";
HAnimHumanoid42.viewpoints[57] = HAnimSite1655;

let HAnimSite1656 = browser.currentScene.createNode("HAnimSite");
HAnimSite1656.USE = "hanim_suprasternale_pt";
HAnimHumanoid42.viewpoints[58] = HAnimSite1656;

let HAnimSite1657 = browser.currentScene.createNode("HAnimSite");
HAnimSite1657.USE = "hanim_l_neck_base_pt";
HAnimHumanoid42.viewpoints[59] = HAnimSite1657;

let HAnimSite1658 = browser.currentScene.createNode("HAnimSite");
HAnimSite1658.USE = "hanim_r_neck_base_pt";
HAnimHumanoid42.viewpoints[60] = HAnimSite1658;

let HAnimSite1659 = browser.currentScene.createNode("HAnimSite");
HAnimSite1659.USE = "hanim_l_acromion_pt";
HAnimHumanoid42.viewpoints[61] = HAnimSite1659;

let HAnimSite1660 = browser.currentScene.createNode("HAnimSite");
HAnimSite1660.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid42.viewpoints[62] = HAnimSite1660;

let HAnimSite1661 = browser.currentScene.createNode("HAnimSite");
HAnimSite1661.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid42.viewpoints[63] = HAnimSite1661;

let HAnimSite1662 = browser.currentScene.createNode("HAnimSite");
HAnimSite1662.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid42.viewpoints[64] = HAnimSite1662;

let HAnimSite1663 = browser.currentScene.createNode("HAnimSite");
HAnimSite1663.USE = "hanim_l_clavicale_pt";
HAnimHumanoid42.viewpoints[65] = HAnimSite1663;

let HAnimSite1664 = browser.currentScene.createNode("HAnimSite");
HAnimSite1664.USE = "hanim_r_acromion_pt";
HAnimHumanoid42.viewpoints[66] = HAnimSite1664;

let HAnimSite1665 = browser.currentScene.createNode("HAnimSite");
HAnimSite1665.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid42.viewpoints[67] = HAnimSite1665;

let HAnimSite1666 = browser.currentScene.createNode("HAnimSite");
HAnimSite1666.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid42.viewpoints[68] = HAnimSite1666;

let HAnimSite1667 = browser.currentScene.createNode("HAnimSite");
HAnimSite1667.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid42.viewpoints[69] = HAnimSite1667;

let HAnimSite1668 = browser.currentScene.createNode("HAnimSite");
HAnimSite1668.USE = "hanim_r_clavicale_pt";
HAnimHumanoid42.viewpoints[70] = HAnimSite1668;

let HAnimSite1669 = browser.currentScene.createNode("HAnimSite");
HAnimSite1669.USE = "hanim_adams_apple_pt";
HAnimHumanoid42.viewpoints[71] = HAnimSite1669;

let HAnimSite1670 = browser.currentScene.createNode("HAnimSite");
HAnimSite1670.USE = "hanim_glabella_pt";
HAnimHumanoid42.viewpoints[72] = HAnimSite1670;

let HAnimSite1671 = browser.currentScene.createNode("HAnimSite");
HAnimSite1671.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid42.viewpoints[73] = HAnimSite1671;

let HAnimSite1672 = browser.currentScene.createNode("HAnimSite");
HAnimSite1672.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid42.viewpoints[74] = HAnimSite1672;

let HAnimSite1673 = browser.currentScene.createNode("HAnimSite");
HAnimSite1673.USE = "hanim_l_tragion_pt";
HAnimHumanoid42.viewpoints[75] = HAnimSite1673;

let HAnimSite1674 = browser.currentScene.createNode("HAnimSite");
HAnimSite1674.USE = "hanim_nuchale_pt";
HAnimHumanoid42.viewpoints[76] = HAnimSite1674;

let HAnimSite1675 = browser.currentScene.createNode("HAnimSite");
HAnimSite1675.USE = "hanim_opisthocranion_pt";
HAnimHumanoid42.viewpoints[77] = HAnimSite1675;

let HAnimSite1676 = browser.currentScene.createNode("HAnimSite");
HAnimSite1676.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid42.viewpoints[78] = HAnimSite1676;

let HAnimSite1677 = browser.currentScene.createNode("HAnimSite");
HAnimSite1677.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid42.viewpoints[79] = HAnimSite1677;

let HAnimSite1678 = browser.currentScene.createNode("HAnimSite");
HAnimSite1678.USE = "hanim_r_tragion_pt";
HAnimHumanoid42.viewpoints[80] = HAnimSite1678;

let HAnimSite1679 = browser.currentScene.createNode("HAnimSite");
HAnimSite1679.USE = "hanim_sellion_pt";
HAnimHumanoid42.viewpoints[81] = HAnimSite1679;

let HAnimSite1680 = browser.currentScene.createNode("HAnimSite");
HAnimSite1680.USE = "hanim_skull_vertex_pt";
HAnimHumanoid42.viewpoints[82] = HAnimSite1680;

let HAnimSite1681 = browser.currentScene.createNode("HAnimSite");
HAnimSite1681.USE = "hanim_l_gonion_pt";
HAnimHumanoid42.viewpoints[83] = HAnimSite1681;

let HAnimSite1682 = browser.currentScene.createNode("HAnimSite");
HAnimSite1682.USE = "hanim_menton_pt";
HAnimHumanoid42.viewpoints[84] = HAnimSite1682;

let HAnimSite1683 = browser.currentScene.createNode("HAnimSite");
HAnimSite1683.USE = "hanim_r_gonion_pt";
HAnimHumanoid42.viewpoints[85] = HAnimSite1683;

let HAnimSite1684 = browser.currentScene.createNode("HAnimSite");
HAnimSite1684.USE = "hanim_supramenton_pt";
HAnimHumanoid42.viewpoints[86] = HAnimSite1684;

let HAnimSite1685 = browser.currentScene.createNode("HAnimSite");
HAnimSite1685.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid42.viewpoints[87] = HAnimSite1685;

let HAnimSite1686 = browser.currentScene.createNode("HAnimSite");
HAnimSite1686.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[88] = HAnimSite1686;

let HAnimSite1687 = browser.currentScene.createNode("HAnimSite");
HAnimSite1687.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[89] = HAnimSite1687;

let HAnimSite1688 = browser.currentScene.createNode("HAnimSite");
HAnimSite1688.USE = "hanim_l_olecranon_pt";
HAnimHumanoid42.viewpoints[90] = HAnimSite1688;

let HAnimSite1689 = browser.currentScene.createNode("HAnimSite");
HAnimSite1689.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid42.viewpoints[91] = HAnimSite1689;

let HAnimSite1690 = browser.currentScene.createNode("HAnimSite");
HAnimSite1690.USE = "hanim_l_radiale_pt";
HAnimHumanoid42.viewpoints[92] = HAnimSite1690;

let HAnimSite1691 = browser.currentScene.createNode("HAnimSite");
HAnimSite1691.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[93] = HAnimSite1691;

let HAnimSite1692 = browser.currentScene.createNode("HAnimSite");
HAnimSite1692.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[94] = HAnimSite1692;

let HAnimSite1693 = browser.currentScene.createNode("HAnimSite");
HAnimSite1693.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid42.viewpoints[95] = HAnimSite1693;

let HAnimSite1694 = browser.currentScene.createNode("HAnimSite");
HAnimSite1694.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[96] = HAnimSite1694;

let HAnimSite1695 = browser.currentScene.createNode("HAnimSite");
HAnimSite1695.USE = "hanim_l_dactylion_pt";
HAnimHumanoid42.viewpoints[97] = HAnimSite1695;

let HAnimSite1696 = browser.currentScene.createNode("HAnimSite");
HAnimSite1696.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid42.viewpoints[98] = HAnimSite1696;

let HAnimSite1697 = browser.currentScene.createNode("HAnimSite");
HAnimSite1697.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[99] = HAnimSite1697;

let HAnimSite1698 = browser.currentScene.createNode("HAnimSite");
HAnimSite1698.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[100] = HAnimSite1698;

let HAnimSite1699 = browser.currentScene.createNode("HAnimSite");
HAnimSite1699.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[101] = HAnimSite1699;

let HAnimSite1700 = browser.currentScene.createNode("HAnimSite");
HAnimSite1700.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[102] = HAnimSite1700;

let HAnimSite1701 = browser.currentScene.createNode("HAnimSite");
HAnimSite1701.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid42.viewpoints[103] = HAnimSite1701;

let HAnimSite1702 = browser.currentScene.createNode("HAnimSite");
HAnimSite1702.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[104] = HAnimSite1702;

let HAnimSite1703 = browser.currentScene.createNode("HAnimSite");
HAnimSite1703.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[105] = HAnimSite1703;

let HAnimSite1704 = browser.currentScene.createNode("HAnimSite");
HAnimSite1704.USE = "hanim_r_olecranon_pt";
HAnimHumanoid42.viewpoints[106] = HAnimSite1704;

let HAnimSite1705 = browser.currentScene.createNode("HAnimSite");
HAnimSite1705.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid42.viewpoints[107] = HAnimSite1705;

let HAnimSite1706 = browser.currentScene.createNode("HAnimSite");
HAnimSite1706.USE = "hanim_r_radiale_pt";
HAnimHumanoid42.viewpoints[108] = HAnimSite1706;

let HAnimSite1707 = browser.currentScene.createNode("HAnimSite");
HAnimSite1707.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[109] = HAnimSite1707;

let HAnimSite1708 = browser.currentScene.createNode("HAnimSite");
HAnimSite1708.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[110] = HAnimSite1708;

let HAnimSite1709 = browser.currentScene.createNode("HAnimSite");
HAnimSite1709.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid42.viewpoints[111] = HAnimSite1709;

let HAnimSite1710 = browser.currentScene.createNode("HAnimSite");
HAnimSite1710.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[112] = HAnimSite1710;

let HAnimSite1711 = browser.currentScene.createNode("HAnimSite");
HAnimSite1711.USE = "hanim_r_dactylion_pt";
HAnimHumanoid42.viewpoints[113] = HAnimSite1711;

let HAnimSite1712 = browser.currentScene.createNode("HAnimSite");
HAnimSite1712.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid42.viewpoints[114] = HAnimSite1712;

let HAnimSite1713 = browser.currentScene.createNode("HAnimSite");
HAnimSite1713.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[115] = HAnimSite1713;

let HAnimSite1714 = browser.currentScene.createNode("HAnimSite");
HAnimSite1714.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[116] = HAnimSite1714;

let HAnimSite1715 = browser.currentScene.createNode("HAnimSite");
HAnimSite1715.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[117] = HAnimSite1715;

let HAnimSite1716 = browser.currentScene.createNode("HAnimSite");
HAnimSite1716.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[118] = HAnimSite1716;

let HAnimSegment1717 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1717.USE = "hanim_sacrum";
HAnimHumanoid42.segments[119] = HAnimSegment1717;

let HAnimSegment1718 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1718.USE = "hanim_pelvis";
HAnimHumanoid42.segments[120] = HAnimSegment1718;

let HAnimSegment1719 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1719.USE = "hanim_l_thigh";
HAnimHumanoid42.segments[121] = HAnimSegment1719;

let HAnimSegment1720 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1720.USE = "hanim_l_calf";
HAnimHumanoid42.segments[122] = HAnimSegment1720;

let HAnimSegment1721 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1721.USE = "hanim_l_talus";
HAnimHumanoid42.segments[123] = HAnimSegment1721;

let HAnimSegment1722 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1722.USE = "hanim_l_navicular";
HAnimHumanoid42.segments[124] = HAnimSegment1722;

let HAnimSegment1723 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1723.USE = "hanim_l_cuneiform_1";
HAnimHumanoid42.segments[125] = HAnimSegment1723;

let HAnimSegment1724 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1724.USE = "hanim_l_metatarsal_1";
HAnimHumanoid42.segments[126] = HAnimSegment1724;

let HAnimSegment1725 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1725.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid42.segments[127] = HAnimSegment1725;

let HAnimSegment1726 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1726.USE = "hanim_l_cuneiform_2";
HAnimHumanoid42.segments[128] = HAnimSegment1726;

let HAnimSegment1727 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1727.USE = "hanim_l_metatarsal_2";
HAnimHumanoid42.segments[129] = HAnimSegment1727;

let HAnimSegment1728 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1728.USE = "hanim_l_tarsal_proximal_phalanx_2";
HAnimHumanoid42.segments[130] = HAnimSegment1728;

let HAnimSegment1729 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1729.USE = "hanim_l_tarsal_middle_phalanx_1";
HAnimHumanoid42.segments[131] = HAnimSegment1729;

let HAnimSegment1730 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1730.USE = "hanim_l_cuneiform_3";
HAnimHumanoid42.segments[132] = HAnimSegment1730;

let HAnimSegment1731 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1731.USE = "hanim_l_metatarsal_3";
HAnimHumanoid42.segments[133] = HAnimSegment1731;

let HAnimSegment1732 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1732.USE = "hanim_l_tarsal_proximal_phalanx_3";
HAnimHumanoid42.segments[134] = HAnimSegment1732;

let HAnimSegment1733 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1733.USE = "hanim_l_tarsal_middle_phalanx_2";
HAnimHumanoid42.segments[135] = HAnimSegment1733;

let HAnimSegment1734 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1734.USE = "hanim_l_calcaneus";
HAnimHumanoid42.segments[136] = HAnimSegment1734;

let HAnimSegment1735 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1735.USE = "hanim_l_cuboid";
HAnimHumanoid42.segments[137] = HAnimSegment1735;

let HAnimSegment1736 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1736.USE = "hanim_l_metatarsal_4";
HAnimHumanoid42.segments[138] = HAnimSegment1736;

let HAnimSegment1737 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1737.USE = "hanim_l_tarsal_proximal_phalanx_4";
HAnimHumanoid42.segments[139] = HAnimSegment1737;

let HAnimSegment1738 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1738.USE = "hanim_l_tarsal_middle_phalanx_3";
HAnimHumanoid42.segments[140] = HAnimSegment1738;

let HAnimSegment1739 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1739.USE = "hanim_l_metatarsal_5";
HAnimHumanoid42.segments[141] = HAnimSegment1739;

let HAnimSegment1740 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1740.USE = "hanim_l_tarsal_proximal_phalanx_5";
HAnimHumanoid42.segments[142] = HAnimSegment1740;

let HAnimSegment1741 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1741.USE = "hanim_l_tarsal_middle_phalanx_4";
HAnimHumanoid42.segments[143] = HAnimSegment1741;

let HAnimSegment1742 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1742.USE = "hanim_r_thigh";
HAnimHumanoid42.segments[144] = HAnimSegment1742;

let HAnimSegment1743 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1743.USE = "hanim_r_calf";
HAnimHumanoid42.segments[145] = HAnimSegment1743;

let HAnimSegment1744 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1744.USE = "hanim_r_talus";
HAnimHumanoid42.segments[146] = HAnimSegment1744;

let HAnimSegment1745 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1745.USE = "hanim_r_navicular";
HAnimHumanoid42.segments[147] = HAnimSegment1745;

let HAnimSegment1746 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1746.USE = "hanim_r_cuneiform_1";
HAnimHumanoid42.segments[148] = HAnimSegment1746;

let HAnimSegment1747 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1747.USE = "hanim_r_metatarsal_1";
HAnimHumanoid42.segments[149] = HAnimSegment1747;

let HAnimSegment1748 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1748.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid42.segments[150] = HAnimSegment1748;

let HAnimSegment1749 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1749.USE = "hanim_r_cuneiform_2";
HAnimHumanoid42.segments[151] = HAnimSegment1749;

let HAnimSegment1750 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1750.USE = "hanim_r_metatarsal_2";
HAnimHumanoid42.segments[152] = HAnimSegment1750;

let HAnimSegment1751 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1751.USE = "hanim_r_tarsal_proximal_phalanx_2";
HAnimHumanoid42.segments[153] = HAnimSegment1751;

let HAnimSegment1752 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1752.USE = "hanim_r_tarsal_middle_phalanx_1";
HAnimHumanoid42.segments[154] = HAnimSegment1752;

let HAnimSegment1753 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1753.USE = "hanim_r_cuneiform_3";
HAnimHumanoid42.segments[155] = HAnimSegment1753;

let HAnimSegment1754 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1754.USE = "hanim_r_metatarsal_3";
HAnimHumanoid42.segments[156] = HAnimSegment1754;

let HAnimSegment1755 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1755.USE = "hanim_r_tarsal_proximal_phalanx_3";
HAnimHumanoid42.segments[157] = HAnimSegment1755;

let HAnimSegment1756 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1756.USE = "hanim_r_tarsal_middle_phalanx_2";
HAnimHumanoid42.segments[158] = HAnimSegment1756;

let HAnimSegment1757 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1757.USE = "hanim_r_calcaneus";
HAnimHumanoid42.segments[159] = HAnimSegment1757;

let HAnimSegment1758 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1758.USE = "hanim_r_cuboid";
HAnimHumanoid42.segments[160] = HAnimSegment1758;

let HAnimSegment1759 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1759.USE = "hanim_r_metatarsal_4";
HAnimHumanoid42.segments[161] = HAnimSegment1759;

let HAnimSegment1760 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1760.USE = "hanim_r_tarsal_proximal_phalanx_4";
HAnimHumanoid42.segments[162] = HAnimSegment1760;

let HAnimSegment1761 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1761.USE = "hanim_r_tarsal_middle_phalanx_3";
HAnimHumanoid42.segments[163] = HAnimSegment1761;

let HAnimSegment1762 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1762.USE = "hanim_r_metatarsal_5";
HAnimHumanoid42.segments[164] = HAnimSegment1762;

let HAnimSegment1763 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1763.USE = "hanim_r_tarsal_proximal_phalanx_5";
HAnimHumanoid42.segments[165] = HAnimSegment1763;

let HAnimSegment1764 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1764.USE = "hanim_r_tarsal_middle_phalanx_4";
HAnimHumanoid42.segments[166] = HAnimSegment1764;

let HAnimSegment1765 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1765.USE = "hanim_l5";
HAnimHumanoid42.segments[167] = HAnimSegment1765;

let HAnimSegment1766 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1766.USE = "hanim_l4";
HAnimHumanoid42.segments[168] = HAnimSegment1766;

let HAnimSegment1767 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1767.USE = "hanim_l3";
HAnimHumanoid42.segments[169] = HAnimSegment1767;

let HAnimSegment1768 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1768.USE = "hanim_l2";
HAnimHumanoid42.segments[170] = HAnimSegment1768;

let HAnimSegment1769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1769.USE = "hanim_l1";
HAnimHumanoid42.segments[171] = HAnimSegment1769;

let HAnimSegment1770 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1770.USE = "hanim_t12";
HAnimHumanoid42.segments[172] = HAnimSegment1770;

let HAnimSegment1771 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1771.USE = "hanim_t11";
HAnimHumanoid42.segments[173] = HAnimSegment1771;

let HAnimSegment1772 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1772.USE = "hanim_t10";
HAnimHumanoid42.segments[174] = HAnimSegment1772;

let HAnimSegment1773 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1773.USE = "hanim_t9";
HAnimHumanoid42.segments[175] = HAnimSegment1773;

let HAnimSegment1774 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1774.USE = "hanim_t8";
HAnimHumanoid42.segments[176] = HAnimSegment1774;

let HAnimSegment1775 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1775.USE = "hanim_t7";
HAnimHumanoid42.segments[177] = HAnimSegment1775;

let HAnimSegment1776 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1776.USE = "hanim_t6";
HAnimHumanoid42.segments[178] = HAnimSegment1776;

let HAnimSegment1777 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1777.USE = "hanim_t5";
HAnimHumanoid42.segments[179] = HAnimSegment1777;

let HAnimSegment1778 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1778.USE = "hanim_t4";
HAnimHumanoid42.segments[180] = HAnimSegment1778;

let HAnimSegment1779 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1779.USE = "hanim_t3";
HAnimHumanoid42.segments[181] = HAnimSegment1779;

let HAnimSegment1780 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1780.USE = "hanim_t2";
HAnimHumanoid42.segments[182] = HAnimSegment1780;

let HAnimSegment1781 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1781.USE = "hanim_t1";
HAnimHumanoid42.segments[183] = HAnimSegment1781;

let HAnimSegment1782 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1782.USE = "hanim_c7";
HAnimHumanoid42.segments[184] = HAnimSegment1782;

let HAnimSegment1783 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1783.USE = "hanim_c6";
HAnimHumanoid42.segments[185] = HAnimSegment1783;

let HAnimSegment1784 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1784.USE = "hanim_c5";
HAnimHumanoid42.segments[186] = HAnimSegment1784;

let HAnimSegment1785 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1785.USE = "hanim_c4";
HAnimHumanoid42.segments[187] = HAnimSegment1785;

let HAnimSegment1786 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1786.USE = "hanim_c3";
HAnimHumanoid42.segments[188] = HAnimSegment1786;

let HAnimSegment1787 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1787.USE = "hanim_c2";
HAnimHumanoid42.segments[189] = HAnimSegment1787;

let HAnimSegment1788 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1788.USE = "hanim_c1";
HAnimHumanoid42.segments[190] = HAnimSegment1788;

let HAnimSegment1789 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1789.USE = "hanim_skull";
HAnimHumanoid42.segments[191] = HAnimSegment1789;

let HAnimSegment1790 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1790.USE = "hanim_l_clavicle";
HAnimHumanoid42.segments[192] = HAnimSegment1790;

let HAnimSegment1791 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1791.USE = "hanim_l_scapula";
HAnimHumanoid42.segments[193] = HAnimSegment1791;

let HAnimSegment1792 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1792.USE = "hanim_l_upperarm";
HAnimHumanoid42.segments[194] = HAnimSegment1792;

let HAnimSegment1793 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1793.USE = "hanim_l_forearm";
HAnimHumanoid42.segments[195] = HAnimSegment1793;

let HAnimSegment1794 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1794.USE = "hanim_l_carpal";
HAnimHumanoid42.segments[196] = HAnimSegment1794;

let HAnimSegment1795 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1795.USE = "hanim_l_trapezium";
HAnimHumanoid42.segments[197] = HAnimSegment1795;

let HAnimSegment1796 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1796.USE = "hanim_l_metacarpal_1";
HAnimHumanoid42.segments[198] = HAnimSegment1796;

let HAnimSegment1797 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1797.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid42.segments[199] = HAnimSegment1797;

let HAnimSegment1798 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1798.USE = "hanim_l_trapezoid";
HAnimHumanoid42.segments[200] = HAnimSegment1798;

let HAnimSegment1799 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1799.USE = "hanim_l_metacarpal_2";
HAnimHumanoid42.segments[201] = HAnimSegment1799;

let HAnimSegment1800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1800.USE = "hanim_l_carpal_proximal_phalanx_2 ";
HAnimHumanoid42.segments[202] = HAnimSegment1800;

let HAnimSegment1801 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1801.USE = "hanim_l_carpal_middle_phalanx_1";
HAnimHumanoid42.segments[203] = HAnimSegment1801;

let HAnimSegment1802 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1802.USE = "hanim_l_capitate";
HAnimHumanoid42.segments[204] = HAnimSegment1802;

let HAnimSegment1803 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1803.USE = "hanim_l_metacarpal_3";
HAnimHumanoid42.segments[205] = HAnimSegment1803;

let HAnimSegment1804 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1804.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid42.segments[206] = HAnimSegment1804;

let HAnimSegment1805 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1805.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid42.segments[207] = HAnimSegment1805;

let HAnimSegment1806 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1806.USE = "hanim_l_hamate";
HAnimHumanoid42.segments[208] = HAnimSegment1806;

let HAnimSegment1807 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1807.USE = "hanim_l_metacarpal_4";
HAnimHumanoid42.segments[209] = HAnimSegment1807;

let HAnimSegment1808 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1808.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid42.segments[210] = HAnimSegment1808;

let HAnimSegment1809 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1809.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid42.segments[211] = HAnimSegment1809;

let HAnimSegment1810 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1810.USE = "hanim_l_metacarpal_5";
HAnimHumanoid42.segments[212] = HAnimSegment1810;

let HAnimSegment1811 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1811.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid42.segments[213] = HAnimSegment1811;

let HAnimSegment1812 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1812.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid42.segments[214] = HAnimSegment1812;

let HAnimSegment1813 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1813.USE = "hanim_r_clavicle";
HAnimHumanoid42.segments[215] = HAnimSegment1813;

let HAnimSegment1814 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1814.USE = "hanim_r_scapula";
HAnimHumanoid42.segments[216] = HAnimSegment1814;

let HAnimSegment1815 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1815.USE = "hanim_r_upperarm";
HAnimHumanoid42.segments[217] = HAnimSegment1815;

let HAnimSegment1816 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1816.USE = "hanim_r_forearm";
HAnimHumanoid42.segments[218] = HAnimSegment1816;

let HAnimSegment1817 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1817.USE = "hanim_r_carpal";
HAnimHumanoid42.segments[219] = HAnimSegment1817;

let HAnimSegment1818 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1818.USE = "hanim_r_trapezium";
HAnimHumanoid42.segments[220] = HAnimSegment1818;

let HAnimSegment1819 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1819.USE = "hanim_r_metacarpal_1";
HAnimHumanoid42.segments[221] = HAnimSegment1819;

let HAnimSegment1820 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1820.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid42.segments[222] = HAnimSegment1820;

let HAnimSegment1821 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1821.USE = "hanim_r_trapezoid";
HAnimHumanoid42.segments[223] = HAnimSegment1821;

let HAnimSegment1822 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1822.USE = "hanim_r_metacarpal_2";
HAnimHumanoid42.segments[224] = HAnimSegment1822;

let HAnimSegment1823 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1823.USE = "hanim_r_carpal_proximal_phalanx_2 ";
HAnimHumanoid42.segments[225] = HAnimSegment1823;

let HAnimSegment1824 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1824.USE = "hanim_r_carpal_middle_phalanx_1";
HAnimHumanoid42.segments[226] = HAnimSegment1824;

let HAnimSegment1825 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1825.USE = "hanim_r_capitate";
HAnimHumanoid42.segments[227] = HAnimSegment1825;

let HAnimSegment1826 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1826.USE = "hanim_r_metacarpal_3";
HAnimHumanoid42.segments[228] = HAnimSegment1826;

let HAnimSegment1827 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1827.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid42.segments[229] = HAnimSegment1827;

let HAnimSegment1828 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1828.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid42.segments[230] = HAnimSegment1828;

let HAnimSegment1829 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1829.USE = "hanim_r_hamate";
HAnimHumanoid42.segments[231] = HAnimSegment1829;

let HAnimSegment1830 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1830.USE = "hanim_r_metacarpal_4";
HAnimHumanoid42.segments[232] = HAnimSegment1830;

let HAnimSegment1831 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1831.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid42.segments[233] = HAnimSegment1831;

let HAnimSegment1832 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1832.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid42.segments[234] = HAnimSegment1832;

let HAnimSegment1833 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1833.USE = "hanim_r_metacarpal_5";
HAnimHumanoid42.segments[235] = HAnimSegment1833;

let HAnimSegment1834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1834.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid42.segments[236] = HAnimSegment1834;

let HAnimSegment1835 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1835.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid42.segments[237] = HAnimSegment1835;

let HAnimJoint1836 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1836.USE = "hanim_humanoid_root";
HAnimHumanoid42.joints[238] = HAnimJoint1836;

let HAnimJoint1837 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1837.USE = "hanim_sacroiliac";
HAnimHumanoid42.joints[239] = HAnimJoint1837;

let HAnimJoint1838 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1838.USE = "hanim_l_hip";
HAnimHumanoid42.joints[240] = HAnimJoint1838;

let HAnimJoint1839 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1839.USE = "hanim_l_knee";
HAnimHumanoid42.joints[241] = HAnimJoint1839;

let HAnimJoint1840 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1840.USE = "hanim_l_talocrural";
HAnimHumanoid42.joints[242] = HAnimJoint1840;

let HAnimJoint1841 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1841.USE = "hanim_l_talocalcaneonavicular";
HAnimHumanoid42.joints[243] = HAnimJoint1841;

let HAnimJoint1842 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1842.USE = "hanim_l_cuneonavicular_1";
HAnimHumanoid42.joints[244] = HAnimJoint1842;

let HAnimJoint1843 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1843.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid42.joints[245] = HAnimJoint1843;

let HAnimJoint1844 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1844.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid42.joints[246] = HAnimJoint1844;

let HAnimJoint1845 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1845.USE = "hanim_l_tarsal_interphalangeal_1";
HAnimHumanoid42.joints[247] = HAnimJoint1845;

let HAnimJoint1846 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1846.USE = "hanim_l_cuneonavicular_2";
HAnimHumanoid42.joints[248] = HAnimJoint1846;

let HAnimJoint1847 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1847.USE = "hanim_l_tarsometatarsal_2";
HAnimHumanoid42.joints[249] = HAnimJoint1847;

let HAnimJoint1848 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1848.USE = "hanim_l_metatarsophalangeal_2";
HAnimHumanoid42.joints[250] = HAnimJoint1848;

let HAnimJoint1849 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1849.USE = "hanim_l_tarsal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[251] = HAnimJoint1849;

let HAnimJoint1850 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1850.USE = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimHumanoid42.joints[252] = HAnimJoint1850;

let HAnimJoint1851 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1851.USE = "hanim_l_cuneonavicular_3";
HAnimHumanoid42.joints[253] = HAnimJoint1851;

let HAnimJoint1852 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1852.USE = "hanim_l_tarsometatarsal_3 ";
HAnimHumanoid42.joints[254] = HAnimJoint1852;

let HAnimJoint1853 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1853.USE = "hanim_l_metatarsophalangeal_3";
HAnimHumanoid42.joints[255] = HAnimJoint1853;

let HAnimJoint1854 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1854.USE = "hanim_l_tarsal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[256] = HAnimJoint1854;

let HAnimJoint1855 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1855.USE = "hanim_l_tarsal_distal_interphalangeal_2";
HAnimHumanoid42.joints[257] = HAnimJoint1855;

let HAnimJoint1856 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1856.USE = "hanim_l_calcaneocuboid";
HAnimHumanoid42.joints[258] = HAnimJoint1856;

let HAnimJoint1857 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1857.USE = "hanim_l_transversetarsal";
HAnimHumanoid42.joints[259] = HAnimJoint1857;

let HAnimJoint1858 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1858.USE = "hanim_l_tarsometatarsal_3";
HAnimHumanoid42.joints[260] = HAnimJoint1858;

let HAnimJoint1859 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1859.USE = "hanim_l_metatarsophalangeal_4";
HAnimHumanoid42.joints[261] = HAnimJoint1859;

let HAnimJoint1860 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1860.USE = "hanim_l_tarsal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[262] = HAnimJoint1860;

let HAnimJoint1861 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1861.USE = "hanim_l_tarsal_distal_interphalangeal_3";
HAnimHumanoid42.joints[263] = HAnimJoint1861;

let HAnimJoint1862 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1862.USE = "hanim_l_tarsometatarsal_4";
HAnimHumanoid42.joints[264] = HAnimJoint1862;

let HAnimJoint1863 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1863.USE = "hanim_l_metatarsophalangeal_5";
HAnimHumanoid42.joints[265] = HAnimJoint1863;

let HAnimJoint1864 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1864.USE = "hanim_l_tarsal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[266] = HAnimJoint1864;

let HAnimJoint1865 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1865.USE = "hanim_l_tarsal_distal_interphalangeal_4";
HAnimHumanoid42.joints[267] = HAnimJoint1865;

let HAnimJoint1866 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1866.USE = "hanim_r_hip";
HAnimHumanoid42.joints[268] = HAnimJoint1866;

let HAnimJoint1867 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1867.USE = "hanim_r_knee";
HAnimHumanoid42.joints[269] = HAnimJoint1867;

let HAnimJoint1868 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1868.USE = "hanim_r_talocrural";
HAnimHumanoid42.joints[270] = HAnimJoint1868;

let HAnimJoint1869 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1869.USE = "hanim_r_talocalcaneonavicular";
HAnimHumanoid42.joints[271] = HAnimJoint1869;

let HAnimJoint1870 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1870.USE = "hanim_r_cuneonavicular_1";
HAnimHumanoid42.joints[272] = HAnimJoint1870;

let HAnimJoint1871 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1871.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid42.joints[273] = HAnimJoint1871;

let HAnimJoint1872 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1872.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid42.joints[274] = HAnimJoint1872;

let HAnimJoint1873 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1873.USE = "hanim_r_tarsal_interphalangeal_1";
HAnimHumanoid42.joints[275] = HAnimJoint1873;

let HAnimJoint1874 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1874.USE = "hanim_r_cuneonavicular_2";
HAnimHumanoid42.joints[276] = HAnimJoint1874;

let HAnimJoint1875 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1875.USE = "hanim_r_tarsometatarsal_2";
HAnimHumanoid42.joints[277] = HAnimJoint1875;

let HAnimJoint1876 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1876.USE = "hanim_r_metatarsophalangeal_2";
HAnimHumanoid42.joints[278] = HAnimJoint1876;

let HAnimJoint1877 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1877.USE = "hanim_r_tarsal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[279] = HAnimJoint1877;

let HAnimJoint1878 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1878.USE = "hanim_r_tarsal_distal_interphalangeal_1";
HAnimHumanoid42.joints[280] = HAnimJoint1878;

let HAnimJoint1879 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1879.USE = "hanim_r_cuneonavicular_3";
HAnimHumanoid42.joints[281] = HAnimJoint1879;

let HAnimJoint1880 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1880.USE = "hanim_r_tarsometatarsal_3 ";
HAnimHumanoid42.joints[282] = HAnimJoint1880;

let HAnimJoint1881 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1881.USE = "hanim_r_metatarsophalangeal_3";
HAnimHumanoid42.joints[283] = HAnimJoint1881;

let HAnimJoint1882 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1882.USE = "hanim_r_tarsal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[284] = HAnimJoint1882;

let HAnimJoint1883 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1883.USE = "hanim_r_tarsal_distal_interphalangeal_2";
HAnimHumanoid42.joints[285] = HAnimJoint1883;

let HAnimJoint1884 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1884.USE = "hanim_r_calcaneocuboid";
HAnimHumanoid42.joints[286] = HAnimJoint1884;

let HAnimJoint1885 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1885.USE = "hanim_r_transversetarsal";
HAnimHumanoid42.joints[287] = HAnimJoint1885;

let HAnimJoint1886 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1886.USE = "hanim_r_tarsometatarsal_3";
HAnimHumanoid42.joints[288] = HAnimJoint1886;

let HAnimJoint1887 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1887.USE = "hanim_r_metatarsophalangeal_4";
HAnimHumanoid42.joints[289] = HAnimJoint1887;

let HAnimJoint1888 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1888.USE = "hanim_r_tarsal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[290] = HAnimJoint1888;

let HAnimJoint1889 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1889.USE = "hanim_r_tarsal_distal_interphalangeal_3";
HAnimHumanoid42.joints[291] = HAnimJoint1889;

let HAnimJoint1890 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1890.USE = "hanim_r_tarsometatarsal_4";
HAnimHumanoid42.joints[292] = HAnimJoint1890;

let HAnimJoint1891 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1891.USE = "hanim_r_metatarsophalangeal_5";
HAnimHumanoid42.joints[293] = HAnimJoint1891;

let HAnimJoint1892 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1892.USE = "hanim_r_tarsal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[294] = HAnimJoint1892;

let HAnimJoint1893 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1893.USE = "hanim_r_tarsal_distal_interphalangeal_4";
HAnimHumanoid42.joints[295] = HAnimJoint1893;

let HAnimJoint1894 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1894.USE = "hanim_vl5";
HAnimHumanoid42.joints[296] = HAnimJoint1894;

let HAnimJoint1895 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1895.USE = "hanim_vl4";
HAnimHumanoid42.joints[297] = HAnimJoint1895;

let HAnimJoint1896 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1896.USE = "hanim_vl3";
HAnimHumanoid42.joints[298] = HAnimJoint1896;

let HAnimJoint1897 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1897.USE = "hanim_vl2";
HAnimHumanoid42.joints[299] = HAnimJoint1897;

let HAnimJoint1898 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1898.USE = "hanim_vl1";
HAnimHumanoid42.joints[300] = HAnimJoint1898;

let HAnimJoint1899 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1899.USE = "hanim_vt12";
HAnimHumanoid42.joints[301] = HAnimJoint1899;

let HAnimJoint1900 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1900.USE = "hanim_vt11";
HAnimHumanoid42.joints[302] = HAnimJoint1900;

let HAnimJoint1901 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1901.USE = "hanim_vt10";
HAnimHumanoid42.joints[303] = HAnimJoint1901;

let HAnimJoint1902 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1902.USE = "hanim_vt9";
HAnimHumanoid42.joints[304] = HAnimJoint1902;

let HAnimJoint1903 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1903.USE = "hanim_vt8";
HAnimHumanoid42.joints[305] = HAnimJoint1903;

let HAnimJoint1904 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1904.USE = "hanim_vt7";
HAnimHumanoid42.joints[306] = HAnimJoint1904;

let HAnimJoint1905 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1905.USE = "hanim_vt6";
HAnimHumanoid42.joints[307] = HAnimJoint1905;

let HAnimJoint1906 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1906.USE = "hanim_vt5";
HAnimHumanoid42.joints[308] = HAnimJoint1906;

let HAnimJoint1907 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1907.USE = "hanim_vt4";
HAnimHumanoid42.joints[309] = HAnimJoint1907;

let HAnimJoint1908 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1908.USE = "hanim_vt3";
HAnimHumanoid42.joints[310] = HAnimJoint1908;

let HAnimJoint1909 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1909.USE = "hanim_vt2";
HAnimHumanoid42.joints[311] = HAnimJoint1909;

let HAnimJoint1910 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1910.USE = "hanim_vt1";
HAnimHumanoid42.joints[312] = HAnimJoint1910;

let HAnimJoint1911 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1911.USE = "hanim_vc7";
HAnimHumanoid42.joints[313] = HAnimJoint1911;

let HAnimJoint1912 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1912.USE = "hanim_vc6";
HAnimHumanoid42.joints[314] = HAnimJoint1912;

let HAnimJoint1913 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1913.USE = "hanim_vc5";
HAnimHumanoid42.joints[315] = HAnimJoint1913;

let HAnimJoint1914 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1914.USE = "hanim_vc4";
HAnimHumanoid42.joints[316] = HAnimJoint1914;

let HAnimJoint1915 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1915.USE = "hanim_vc3";
HAnimHumanoid42.joints[317] = HAnimJoint1915;

let HAnimJoint1916 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1916.USE = "hanim_vc2";
HAnimHumanoid42.joints[318] = HAnimJoint1916;

let HAnimJoint1917 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1917.USE = "hanim_vc1";
HAnimHumanoid42.joints[319] = HAnimJoint1917;

let HAnimJoint1918 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1918.USE = "hanim_skullbase";
HAnimHumanoid42.joints[320] = HAnimJoint1918;

let HAnimJoint1919 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1919.USE = "hanim_l_eyelid_joint";
HAnimHumanoid42.joints[321] = HAnimJoint1919;

let HAnimJoint1920 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1920.USE = "hanim_r_eyelid_joint";
HAnimHumanoid42.joints[322] = HAnimJoint1920;

let HAnimJoint1921 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1921.USE = "hanim_l_eyeball_joint";
HAnimHumanoid42.joints[323] = HAnimJoint1921;

let HAnimJoint1922 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1922.USE = "hanim_r_eyeball_joint";
HAnimHumanoid42.joints[324] = HAnimJoint1922;

let HAnimJoint1923 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1923.USE = "hanim_l_eyebrow_joint";
HAnimHumanoid42.joints[325] = HAnimJoint1923;

let HAnimJoint1924 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1924.USE = "hanim_r_eyebrow_joint";
HAnimHumanoid42.joints[326] = HAnimJoint1924;

let HAnimJoint1925 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1925.USE = "hanim_temporomandibular";
HAnimHumanoid42.joints[327] = HAnimJoint1925;

let HAnimJoint1926 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1926.USE = "hanim_l_sternoclavicular";
HAnimHumanoid42.joints[328] = HAnimJoint1926;

let HAnimJoint1927 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1927.USE = "hanim_l_acromioclavicular";
HAnimHumanoid42.joints[329] = HAnimJoint1927;

let HAnimJoint1928 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1928.USE = "hanim_l_shoulder";
HAnimHumanoid42.joints[330] = HAnimJoint1928;

let HAnimJoint1929 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1929.USE = "hanim_l_elbow";
HAnimHumanoid42.joints[331] = HAnimJoint1929;

let HAnimJoint1930 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1930.USE = "hanim_l_radiocarpal";
HAnimHumanoid42.joints[332] = HAnimJoint1930;

let HAnimJoint1931 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1931.USE = "hanim_l_midcarpal_1";
HAnimHumanoid42.joints[333] = HAnimJoint1931;

let HAnimJoint1932 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1932.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid42.joints[334] = HAnimJoint1932;

let HAnimJoint1933 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1933.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid42.joints[335] = HAnimJoint1933;

let HAnimJoint1934 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1934.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid42.joints[336] = HAnimJoint1934;

let HAnimJoint1935 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1935.USE = "hanim_l_midcarpal_2";
HAnimHumanoid42.joints[337] = HAnimJoint1935;

let HAnimJoint1936 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1936.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid42.joints[338] = HAnimJoint1936;

let HAnimJoint1937 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1937.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid42.joints[339] = HAnimJoint1937;

let HAnimJoint1938 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1938.USE = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[340] = HAnimJoint1938;

let HAnimJoint1939 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1939.USE = "hanim_l_carpal_distal_interphalangeal_1";
HAnimHumanoid42.joints[341] = HAnimJoint1939;

let HAnimJoint1940 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1940.USE = "hanim_l_midcarpal_3";
HAnimHumanoid42.joints[342] = HAnimJoint1940;

let HAnimJoint1941 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1941.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid42.joints[343] = HAnimJoint1941;

let HAnimJoint1942 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1942.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid42.joints[344] = HAnimJoint1942;

let HAnimJoint1943 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1943.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[345] = HAnimJoint1943;

let HAnimJoint1944 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1944.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid42.joints[346] = HAnimJoint1944;

let HAnimJoint1945 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1945.USE = "hanim_l_midcarpal_4_1";
HAnimHumanoid42.joints[347] = HAnimJoint1945;

let HAnimJoint1946 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1946.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid42.joints[348] = HAnimJoint1946;

let HAnimJoint1947 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1947.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid42.joints[349] = HAnimJoint1947;

let HAnimJoint1948 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1948.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[350] = HAnimJoint1948;

let HAnimJoint1949 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1949.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid42.joints[351] = HAnimJoint1949;

let HAnimJoint1950 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1950.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid42.joints[352] = HAnimJoint1950;

let HAnimJoint1951 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1951.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid42.joints[353] = HAnimJoint1951;

let HAnimJoint1952 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1952.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[354] = HAnimJoint1952;

let HAnimJoint1953 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1953.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid42.joints[355] = HAnimJoint1953;

let HAnimJoint1954 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1954.USE = "hanim_r_sternoclavicular";
HAnimHumanoid42.joints[356] = HAnimJoint1954;

let HAnimJoint1955 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1955.USE = "hanim_r_acromioclavicular";
HAnimHumanoid42.joints[357] = HAnimJoint1955;

let HAnimJoint1956 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1956.USE = "hanim_r_shoulder";
HAnimHumanoid42.joints[358] = HAnimJoint1956;

let HAnimJoint1957 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1957.USE = "hanim_r_elbow";
HAnimHumanoid42.joints[359] = HAnimJoint1957;

let HAnimJoint1958 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1958.USE = "hanim_r_radiocarpal";
HAnimHumanoid42.joints[360] = HAnimJoint1958;

let HAnimJoint1959 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1959.USE = "hanim_r_midcarpal_1";
HAnimHumanoid42.joints[361] = HAnimJoint1959;

let HAnimJoint1960 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1960.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid42.joints[362] = HAnimJoint1960;

let HAnimJoint1961 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1961.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid42.joints[363] = HAnimJoint1961;

let HAnimJoint1962 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1962.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid42.joints[364] = HAnimJoint1962;

let HAnimJoint1963 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1963.USE = "hanim_r_midcarpal_2";
HAnimHumanoid42.joints[365] = HAnimJoint1963;

let HAnimJoint1964 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1964.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid42.joints[366] = HAnimJoint1964;

let HAnimJoint1965 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1965.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid42.joints[367] = HAnimJoint1965;

let HAnimJoint1966 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1966.USE = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[368] = HAnimJoint1966;

let HAnimJoint1967 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1967.USE = "hanim_r_carpal_distal_interphalangeal_1";
HAnimHumanoid42.joints[369] = HAnimJoint1967;

let HAnimJoint1968 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1968.USE = "hanim_r_midcarpal_3";
HAnimHumanoid42.joints[370] = HAnimJoint1968;

let HAnimJoint1969 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1969.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid42.joints[371] = HAnimJoint1969;

let HAnimJoint1970 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1970.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid42.joints[372] = HAnimJoint1970;

let HAnimJoint1971 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1971.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[373] = HAnimJoint1971;

let HAnimJoint1972 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1972.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid42.joints[374] = HAnimJoint1972;

let HAnimJoint1973 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1973.USE = "hanim_r_midcarpal_4_1";
HAnimHumanoid42.joints[375] = HAnimJoint1973;

let HAnimJoint1974 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1974.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid42.joints[376] = HAnimJoint1974;

let HAnimJoint1975 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1975.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid42.joints[377] = HAnimJoint1975;

let HAnimJoint1976 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1976.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[378] = HAnimJoint1976;

let HAnimJoint1977 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1977.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid42.joints[379] = HAnimJoint1977;

let HAnimJoint1978 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1978.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid42.joints[380] = HAnimJoint1978;

let HAnimJoint1979 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1979.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid42.joints[381] = HAnimJoint1979;

let HAnimJoint1980 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1980.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[382] = HAnimJoint1980;

let HAnimJoint1981 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1981.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid42.joints[383] = HAnimJoint1981;

let Coordinate1982 = browser.currentScene.createNode("Coordinate");
HAnimHumanoid42.skinCoord = Coordinate1982;

browser.currentScene.children[4] = HAnimHumanoid42;

