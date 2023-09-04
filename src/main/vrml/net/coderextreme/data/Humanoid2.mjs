let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "Humanoid2.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "identifier";
meta3.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid2.x3d";
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
Coordinate173.point = new MFVec3f(new float[0.1101,0.0656,-0.0736,0.08,0.0175,-0.0608]);
LineSet171.coord = Coordinate173;

Shape170.geometry = LineSet171;

HAnimSegment166.children[1] = Shape170;

HAnimJoint165.children = new MFNode();

HAnimJoint165.children[0] = HAnimSegment166;

let HAnimJoint174 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint174.DEF = "hanim_l_tarsometatarsal_1";
HAnimJoint174.name = "l_tarsometatarsal_2";
HAnimJoint174.center = new SFVec3f(new float[0.08,0.0175,-0.0608]);
let HAnimSegment175 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment175.DEF = "hanim_l_metatarsal_1";
HAnimSegment175.name = "l_metatarsal_2";
let Transform176 = browser.currentScene.createNode("Transform");
Transform176.translation = new SFVec3f(new float[0.08,0.0175,-0.0608]);
let Transform177 = browser.currentScene.createNode("Transform");
let Shape178 = browser.currentScene.createNode("Shape");
Shape178.USE = "HAnimJointShape";
Transform177.child = new undefined();

Transform177.child[0] = Shape178;

Transform176.children = new MFNode();

Transform176.children[0] = Transform177;

HAnimSegment175.children = new MFNode();

HAnimSegment175.children[0] = Transform176;

let Shape179 = browser.currentScene.createNode("Shape");
let LineSet180 = browser.currentScene.createNode("LineSet");
LineSet180.vertexCount = new MFInt32(new int[2]);
let ColorRGBA181 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA181.USE = "HAnimSegmentLineColorRGBA";
LineSet180.color = ColorRGBA181;

let Coordinate182 = browser.currentScene.createNode("Coordinate");
Coordinate182.point = new MFVec3f(new float[0.08,0.0175,-0.0608,0.0824,0.0064,-0.004]);
LineSet180.coord = Coordinate182;

Shape179.geometry = LineSet180;

HAnimSegment175.children[1] = Shape179;

HAnimJoint174.children = new MFNode();

HAnimJoint174.children[0] = HAnimSegment175;

let HAnimJoint183 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint183.DEF = "hanim_l_metatarsophalangeal_1";
HAnimJoint183.name = "l_metatarsophalangeal_2";
HAnimJoint183.center = new SFVec3f(new float[0.0824,0.0064,-0.004]);
let HAnimSegment184 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment184.DEF = "hanim_l_tarsal_proximal_phalanx_1";
HAnimSegment184.name = "l_tarsal_proximal_phalanx_2";
let Transform185 = browser.currentScene.createNode("Transform");
Transform185.translation = new SFVec3f(new float[0.0824,0.0064,-0.004]);
let Transform186 = browser.currentScene.createNode("Transform");
let Shape187 = browser.currentScene.createNode("Shape");
Shape187.USE = "HAnimJointShape";
Transform186.child = new undefined();

Transform186.child[0] = Shape187;

Transform185.children = new MFNode();

Transform185.children[0] = Transform186;

HAnimSegment184.children = new MFNode();

HAnimSegment184.children[0] = Transform185;

let Shape188 = browser.currentScene.createNode("Shape");
let LineSet189 = browser.currentScene.createNode("LineSet");
LineSet189.vertexCount = new MFInt32(new int[2]);
let ColorRGBA190 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA190.USE = "HAnimSegmentLineColorRGBA";
LineSet189.color = ColorRGBA190;

let Coordinate191 = browser.currentScene.createNode("Coordinate");
Coordinate191.point = new MFVec3f(new float[0.0824,0.0064,-0.004,0.0841,0.0013,0.0216]);
LineSet189.coord = Coordinate191;

Shape188.geometry = LineSet189;

HAnimSegment184.children[1] = Shape188;

let HAnimSite192 = browser.currentScene.createNode("HAnimSite");
HAnimSite192.DEF = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimSite192.name = "l_tarsal_distal_phalanx_2_tip";
HAnimSite192.translation = new SFVec3f(new float[0.1195,0.0079,0.1433]);
let TouchSensor193 = browser.currentScene.createNode("TouchSensor");
TouchSensor193.description = "HAnimSite l_tarsal_distal_phalanx_2_tip";
HAnimSite192.children = new MFNode();

HAnimSite192.children[0] = TouchSensor193;

let Shape194 = browser.currentScene.createNode("Shape");
Shape194.USE = "HAnimSiteShape";
HAnimSite192.children[1] = Shape194;

HAnimSegment184.children[2] = HAnimSite192;

HAnimJoint183.children = new MFNode();

HAnimJoint183.children[0] = HAnimSegment184;

let HAnimJoint195 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint195.DEF = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimJoint195.name = "l_tarsal_distal_interphalangeal_2";
HAnimJoint195.center = new SFVec3f(new float[0.0841,0.0013,0.0216]);
HAnimJoint183.children[1] = HAnimJoint195;

HAnimJoint174.children[1] = HAnimJoint183;

HAnimJoint165.children[1] = HAnimJoint174;

HAnimJoint150.children[1] = HAnimJoint165;

HAnimJoint132.children[1] = HAnimJoint150;

HAnimJoint95.children[1] = HAnimJoint132;

let HAnimJoint196 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint196.DEF = "hanim_r_hip";
HAnimJoint196.name = "r_hip";
HAnimJoint196.center = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let HAnimSegment197 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment197.DEF = "hanim_r_thigh";
HAnimSegment197.name = "r_thigh";
let Transform198 = browser.currentScene.createNode("Transform");
Transform198.translation = new SFVec3f(new float[-0.095,0.9171,0.0029]);
let Transform199 = browser.currentScene.createNode("Transform");
let Shape200 = browser.currentScene.createNode("Shape");
Shape200.USE = "HAnimJointShape";
Transform199.child = new undefined();

Transform199.child[0] = Shape200;

Transform198.children = new MFNode();

Transform198.children[0] = Transform199;

HAnimSegment197.children = new MFNode();

HAnimSegment197.children[0] = Transform198;

let Shape201 = browser.currentScene.createNode("Shape");
let LineSet202 = browser.currentScene.createNode("LineSet");
LineSet202.vertexCount = new MFInt32(new int[2]);
let ColorRGBA203 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA203.USE = "HAnimSegmentLineColorRGBA";
LineSet202.color = ColorRGBA203;

let Coordinate204 = browser.currentScene.createNode("Coordinate");
Coordinate204.point = new MFVec3f(new float[-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318]);
LineSet202.coord = Coordinate204;

Shape201.geometry = LineSet202;

HAnimSegment197.children[1] = Shape201;

let HAnimSite205 = browser.currentScene.createNode("HAnimSite");
HAnimSite205.DEF = "hanim_r_lateral_malleolus_pt";
HAnimSite205.name = "r_lateral_malleolus_pt";
HAnimSite205.translation = new SFVec3f(new float[-0.1006,0.0658,-0.1075]);
let TouchSensor206 = browser.currentScene.createNode("TouchSensor");
TouchSensor206.description = "HAnimSite r_lateral_malleolus_pt";
HAnimSite205.children = new MFNode();

HAnimSite205.children[0] = TouchSensor206;

let Shape207 = browser.currentScene.createNode("Shape");
Shape207.USE = "HAnimSiteShape";
HAnimSite205.children[1] = Shape207;

HAnimSegment197.children[2] = HAnimSite205;

let HAnimSite208 = browser.currentScene.createNode("HAnimSite");
HAnimSite208.DEF = "hanim_r_medial_malleolus_pt";
HAnimSite208.name = "r_medial_malleolus_pt";
HAnimSite208.translation = new SFVec3f(new float[-0.0591,0.076,-0.0928]);
let TouchSensor209 = browser.currentScene.createNode("TouchSensor");
TouchSensor209.description = "HAnimSite r_medial_malleolus_pt";
HAnimSite208.children = new MFNode();

HAnimSite208.children[0] = TouchSensor209;

let Shape210 = browser.currentScene.createNode("Shape");
Shape210.USE = "HAnimSiteShape";
HAnimSite208.children[1] = Shape210;

HAnimSegment197.children[3] = HAnimSite208;

let HAnimSite211 = browser.currentScene.createNode("HAnimSite");
HAnimSite211.DEF = "hanim_r_tibiale_pt";
HAnimSite211.name = "r_tibiale_pt";
let TouchSensor212 = browser.currentScene.createNode("TouchSensor");
TouchSensor212.description = "HAnimSite r_tibiale_pt";
HAnimSite211.children = new MFNode();

HAnimSite211.children[0] = TouchSensor212;

let Shape213 = browser.currentScene.createNode("Shape");
Shape213.USE = "HAnimSiteShape";
HAnimSite211.children[1] = Shape213;

HAnimSegment197.children[4] = HAnimSite211;

HAnimJoint196.children = new MFNode();

HAnimJoint196.children[0] = HAnimSegment197;

let HAnimJoint214 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint214.DEF = "hanim_r_knee";
HAnimJoint214.name = "r_knee";
HAnimJoint214.center = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let HAnimSegment215 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment215.DEF = "hanim_r_calf";
HAnimSegment215.name = "r_calf";
let Transform216 = browser.currentScene.createNode("Transform");
Transform216.translation = new SFVec3f(new float[-0.0867,0.4913,0.0318]);
let Transform217 = browser.currentScene.createNode("Transform");
let Shape218 = browser.currentScene.createNode("Shape");
Shape218.USE = "HAnimJointShape";
Transform217.child = new undefined();

Transform217.child[0] = Shape218;

Transform216.children = new MFNode();

Transform216.children[0] = Transform217;

HAnimSegment215.children = new MFNode();

HAnimSegment215.children[0] = Transform216;

let Shape219 = browser.currentScene.createNode("Shape");
let LineSet220 = browser.currentScene.createNode("LineSet");
LineSet220.vertexCount = new MFInt32(new int[2]);
let ColorRGBA221 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA221.USE = "HAnimSegmentLineColorRGBA";
LineSet220.color = ColorRGBA221;

let Coordinate222 = browser.currentScene.createNode("Coordinate");
Coordinate222.point = new MFVec3f(new float[-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766]);
LineSet220.coord = Coordinate222;

Shape219.geometry = LineSet220;

HAnimSegment215.children[1] = Shape219;

let HAnimSite223 = browser.currentScene.createNode("HAnimSite");
HAnimSite223.DEF = "hanim_r_calcaneus_posterior_pt";
HAnimSite223.name = "r_calcaneus_posterior_pt";
HAnimSite223.translation = new SFVec3f(new float[-0.0692,0.0297,-0.1221]);
let TouchSensor224 = browser.currentScene.createNode("TouchSensor");
TouchSensor224.description = "HAnimSite r_calcaneus_posterior_pt";
HAnimSite223.children = new MFNode();

HAnimSite223.children[0] = TouchSensor224;

let Shape225 = browser.currentScene.createNode("Shape");
Shape225.USE = "HAnimSiteShape";
HAnimSite223.children[1] = Shape225;

HAnimSegment215.children[2] = HAnimSite223;

let HAnimSite226 = browser.currentScene.createNode("HAnimSite");
HAnimSite226.DEF = "hanim_r_sphyrion_pt";
HAnimSite226.name = "r_sphyrion_pt";
HAnimSite226.translation = new SFVec3f(new float[-0.0603,0.061,-0.1002]);
let TouchSensor227 = browser.currentScene.createNode("TouchSensor");
TouchSensor227.description = "HAnimSite r_sphyrion_pt";
HAnimSite226.children = new MFNode();

HAnimSite226.children[0] = TouchSensor227;

let Shape228 = browser.currentScene.createNode("Shape");
Shape228.USE = "HAnimSiteShape";
HAnimSite226.children[1] = Shape228;

HAnimSegment215.children[3] = HAnimSite226;

HAnimJoint214.children = new MFNode();

HAnimJoint214.children[0] = HAnimSegment215;

let HAnimJoint229 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint229.DEF = "hanim_r_talocrural";
HAnimJoint229.name = "r_talocrural";
HAnimJoint229.center = new SFVec3f(new float[-0.0801,0.0712,-0.0766]);
let HAnimSegment230 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment230.DEF = "hanim_r_talus";
HAnimSegment230.name = "r_talus";
let Transform231 = browser.currentScene.createNode("Transform");
Transform231.translation = new SFVec3f(new float[-0.05,0.06,-0.025]);
Transform231.rotation = new SFRotation(new float[1,0,0,-1.57]);
Transform231.scale = new SFVec3f(new float[0.15,0.15,0.15]);
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
Coordinate237.point = new MFVec3f(new float[-0.0801,0.0712,-0.0766,-0.08,0.0175,-0.0608]);
LineSet235.coord = Coordinate237;

Shape234.geometry = LineSet235;

HAnimSegment230.children[1] = Shape234;

HAnimJoint229.children = new MFNode();

HAnimJoint229.children[0] = HAnimSegment230;

let HAnimJoint238 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint238.DEF = "hanim_r_tarsometatarsal_1";
HAnimJoint238.name = "r_tarsometatarsal_2";
HAnimJoint238.center = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
let HAnimSegment239 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment239.DEF = "hanim_r_metatarsal_1";
HAnimSegment239.name = "r_metatarsal_2";
let Transform240 = browser.currentScene.createNode("Transform");
Transform240.translation = new SFVec3f(new float[-0.08,0.0175,-0.0608]);
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
Coordinate246.point = new MFVec3f(new float[-0.08,0.0175,-0.0608,-0.0823,0.0064,-0.004]);
LineSet244.coord = Coordinate246;

Shape243.geometry = LineSet244;

HAnimSegment239.children[1] = Shape243;

HAnimJoint238.children = new MFNode();

HAnimJoint238.children[0] = HAnimSegment239;

let HAnimJoint247 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint247.DEF = "hanim_r_metatarsophalangeal_1";
HAnimJoint247.name = "r_metatarsophalangeal_2";
HAnimJoint247.center = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
let HAnimSegment248 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment248.DEF = "hanim_r_tarsal_proximal_phalanx_1";
HAnimSegment248.name = "r_tarsal_proximal_phalanx_2";
let Transform249 = browser.currentScene.createNode("Transform");
Transform249.translation = new SFVec3f(new float[-0.0823,0.0064,-0.004]);
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
Coordinate255.point = new MFVec3f(new float[-0.0823,0.0064,-0.004,-0.0841,0.0013,0.0216]);
LineSet253.coord = Coordinate255;

Shape252.geometry = LineSet253;

HAnimSegment248.children[1] = Shape252;

let HAnimSite256 = browser.currentScene.createNode("HAnimSite");
HAnimSite256.DEF = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimSite256.name = "r_tarsal_distal_phalanx_2_tip";
HAnimSite256.translation = new SFVec3f(new float[-0.0883,0.0134,0.1383]);
let TouchSensor257 = browser.currentScene.createNode("TouchSensor");
TouchSensor257.description = "HAnimSite r_tarsal_distal_phalanx_2_tip";
HAnimSite256.children = new MFNode();

HAnimSite256.children[0] = TouchSensor257;

let Shape258 = browser.currentScene.createNode("Shape");
Shape258.USE = "HAnimSiteShape";
HAnimSite256.children[1] = Shape258;

HAnimSegment248.children[2] = HAnimSite256;

HAnimJoint247.children = new MFNode();

HAnimJoint247.children[0] = HAnimSegment248;

let HAnimJoint259 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint260 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint260.DEF = "hanim_vl5";
HAnimJoint260.name = "vl5";
HAnimJoint260.center = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let HAnimSegment261 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment261.DEF = "hanim_l5";
HAnimSegment261.name = "l5";
let Transform262 = browser.currentScene.createNode("Transform");
Transform262.translation = new SFVec3f(new float[0.0028,1.0568,-0.0776]);
let Transform263 = browser.currentScene.createNode("Transform");
let Shape264 = browser.currentScene.createNode("Shape");
Shape264.USE = "HAnimJointShape";
Transform263.child = new undefined();

Transform263.child[0] = Shape264;

Transform262.children = new MFNode();

Transform262.children[0] = Transform263;

HAnimSegment261.children = new MFNode();

HAnimSegment261.children[0] = Transform262;

let Shape265 = browser.currentScene.createNode("Shape");
let LineSet266 = browser.currentScene.createNode("LineSet");
LineSet266.vertexCount = new MFInt32(new int[2]);
let ColorRGBA267 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA267.USE = "HAnimSegmentLineColorRGBA";
LineSet266.color = ColorRGBA267;

let Coordinate268 = browser.currentScene.createNode("Coordinate");
Coordinate268.point = new MFVec3f(new float[0.0028,1.0568,-0.0776,0.0041,1.1276,-0.0796]);
LineSet266.coord = Coordinate268;

Shape265.geometry = LineSet266;

HAnimSegment261.children[1] = Shape265;

HAnimJoint260.children = new MFNode();

HAnimJoint260.children[0] = HAnimSegment261;

let HAnimJoint269 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint269.DEF = "hanim_vl3";
HAnimJoint269.name = "vl3";
HAnimJoint269.center = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
let HAnimSegment270 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment270.DEF = "hanim_l3";
HAnimSegment270.name = "l3";
let Transform271 = browser.currentScene.createNode("Transform");
Transform271.translation = new SFVec3f(new float[0.0041,1.1276,-0.0796]);
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
Coordinate277.point = new MFVec3f(new float[0.0041,1.1276,-0.0796,0.0048,1.1912,-0.0805]);
LineSet275.coord = Coordinate277;

Shape274.geometry = LineSet275;

HAnimSegment270.children[1] = Shape274;

HAnimJoint269.children = new MFNode();

HAnimJoint269.children[0] = HAnimSegment270;

let HAnimJoint278 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint278.DEF = "hanim_vl1";
HAnimJoint278.name = "vl1";
HAnimJoint278.center = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
let HAnimSegment279 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment279.DEF = "hanim_l1";
HAnimSegment279.name = "l1";
let Transform280 = browser.currentScene.createNode("Transform");
Transform280.translation = new SFVec3f(new float[0.0048,1.1912,-0.0805]);
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
Coordinate286.point = new MFVec3f(new float[0.0048,1.1912,-0.0805,0.0056,1.2848,-0.0822]);
LineSet284.coord = Coordinate286;

Shape283.geometry = LineSet284;

HAnimSegment279.children[1] = Shape283;

let HAnimSite287 = browser.currentScene.createNode("HAnimSite");
HAnimSite287.DEF = "hanim_substernale_pt";
HAnimSite287.name = "substernale_pt";
HAnimSite287.translation = new SFVec3f(new float[0.0085,1.2995,0.1147]);
let TouchSensor288 = browser.currentScene.createNode("TouchSensor");
TouchSensor288.description = "HAnimSite substernale_pt";
HAnimSite287.children = new MFNode();

HAnimSite287.children[0] = TouchSensor288;

let Shape289 = browser.currentScene.createNode("Shape");
Shape289.USE = "HAnimSiteShape";
HAnimSite287.children[1] = Shape289;

HAnimSegment279.children[2] = HAnimSite287;

HAnimJoint278.children = new MFNode();

HAnimJoint278.children[0] = HAnimSegment279;

let HAnimJoint290 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint290.DEF = "hanim_vt10";
HAnimJoint290.name = "vt10";
HAnimJoint290.center = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let HAnimSegment291 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment291.DEF = "hanim_t10";
HAnimSegment291.name = "t10";
let Transform292 = browser.currentScene.createNode("Transform");
Transform292.translation = new SFVec3f(new float[0.0056,1.2848,-0.0822]);
let Transform293 = browser.currentScene.createNode("Transform");
let Shape294 = browser.currentScene.createNode("Shape");
Shape294.USE = "HAnimJointShape";
Transform293.child = new undefined();

Transform293.child[0] = Shape294;

Transform292.children = new MFNode();

Transform292.children[0] = Transform293;

HAnimSegment291.children = new MFNode();

HAnimSegment291.children[0] = Transform292;

let Shape295 = browser.currentScene.createNode("Shape");
let LineSet296 = browser.currentScene.createNode("LineSet");
LineSet296.vertexCount = new MFInt32(new int[2]);
let ColorRGBA297 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA297.USE = "HAnimSegmentLineColorRGBA";
LineSet296.color = ColorRGBA297;

let Coordinate298 = browser.currentScene.createNode("Coordinate");
Coordinate298.point = new MFVec3f(new float[0.0056,1.2848,-0.0822,0.0059,1.3866,-0.08]);
LineSet296.coord = Coordinate298;

Shape295.geometry = LineSet296;

HAnimSegment291.children[1] = Shape295;

let HAnimSite299 = browser.currentScene.createNode("HAnimSite");
HAnimSite299.DEF = "hanim_l_chest_midsagittal_plane_pt";
HAnimSite299.name = "l_chest_midsagittal_plane_pt";
let TouchSensor300 = browser.currentScene.createNode("TouchSensor");
TouchSensor300.description = "HAnimSite l_chest_midsagittal_plane_pt";
HAnimSite299.children = new MFNode();

HAnimSite299.children[0] = TouchSensor300;

let Shape301 = browser.currentScene.createNode("Shape");
Shape301.USE = "HAnimSiteShape";
HAnimSite299.children[1] = Shape301;

HAnimSegment291.children[2] = HAnimSite299;

let HAnimSite302 = browser.currentScene.createNode("HAnimSite");
HAnimSite302.DEF = "hanim_mesosternale_pt";
HAnimSite302.name = "mesosternale_pt";
let TouchSensor303 = browser.currentScene.createNode("TouchSensor");
TouchSensor303.description = "HAnimSite mesosternale_pt";
HAnimSite302.children = new MFNode();

HAnimSite302.children[0] = TouchSensor303;

let Shape304 = browser.currentScene.createNode("Shape");
Shape304.USE = "HAnimSiteShape";
HAnimSite302.children[1] = Shape304;

HAnimSegment291.children[3] = HAnimSite302;

let HAnimSite305 = browser.currentScene.createNode("HAnimSite");
HAnimSite305.DEF = "hanim_r_chest_midsagittal_plane_pt";
HAnimSite305.name = "r_chest_midsagittal_plane_pt";
let TouchSensor306 = browser.currentScene.createNode("TouchSensor");
TouchSensor306.description = "HAnimSite r_chest_midsagittal_plane_pt";
HAnimSite305.children = new MFNode();

HAnimSite305.children[0] = TouchSensor306;

let Shape307 = browser.currentScene.createNode("Shape");
Shape307.USE = "HAnimSiteShape";
HAnimSite305.children[1] = Shape307;

HAnimSegment291.children[4] = HAnimSite305;

let HAnimSite308 = browser.currentScene.createNode("HAnimSite");
HAnimSite308.DEF = "hanim_rear_center_midsagittal_plane_pt";
HAnimSite308.name = "rear_center_midsagittal_plane_pt";
let TouchSensor309 = browser.currentScene.createNode("TouchSensor");
TouchSensor309.description = "HAnimSite rear_center_midsagittal_plane_pt";
HAnimSite308.children = new MFNode();

HAnimSite308.children[0] = TouchSensor309;

let Shape310 = browser.currentScene.createNode("Shape");
Shape310.USE = "HAnimSiteShape";
HAnimSite308.children[1] = Shape310;

HAnimSegment291.children[5] = HAnimSite308;

HAnimJoint290.children = new MFNode();

HAnimJoint290.children[0] = HAnimSegment291;

let HAnimJoint311 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint311.DEF = "hanim_vt6";
HAnimJoint311.name = "vt6";
HAnimJoint311.center = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let HAnimSegment312 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment312.DEF = "hanim_t6";
HAnimSegment312.name = "t6";
let Transform313 = browser.currentScene.createNode("Transform");
Transform313.translation = new SFVec3f(new float[0.0059,1.3866,-0.08]);
let Transform314 = browser.currentScene.createNode("Transform");
let Shape315 = browser.currentScene.createNode("Shape");
Shape315.USE = "HAnimJointShape";
Transform314.child = new undefined();

Transform314.child[0] = Shape315;

Transform313.children = new MFNode();

Transform313.children[0] = Transform314;

HAnimSegment312.children = new MFNode();

HAnimSegment312.children[0] = Transform313;

let Shape316 = browser.currentScene.createNode("Shape");
let LineSet317 = browser.currentScene.createNode("LineSet");
LineSet317.vertexCount = new MFInt32(new int[2]);
let ColorRGBA318 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA318.USE = "HAnimSegmentLineColorRGBA";
LineSet317.color = ColorRGBA318;

let Coordinate319 = browser.currentScene.createNode("Coordinate");
Coordinate319.point = new MFVec3f(new float[0.0059,1.3866,-0.08,0.0065,1.4951,-0.0387]);
LineSet317.coord = Coordinate319;

Shape316.geometry = LineSet317;

HAnimSegment312.children[1] = Shape316;

let HAnimSite320 = browser.currentScene.createNode("HAnimSite");
HAnimSite320.DEF = "hanim_cervicale_pt";
HAnimSite320.name = "cervicale_pt";
HAnimSite320.translation = new SFVec3f(new float[0.0064,1.52,-0.0815]);
let TouchSensor321 = browser.currentScene.createNode("TouchSensor");
TouchSensor321.description = "HAnimSite cervicale_pt";
HAnimSite320.children = new MFNode();

HAnimSite320.children[0] = TouchSensor321;

let Shape322 = browser.currentScene.createNode("Shape");
Shape322.USE = "HAnimSiteShape";
HAnimSite320.children[1] = Shape322;

HAnimSegment312.children[2] = HAnimSite320;

let HAnimSite323 = browser.currentScene.createNode("HAnimSite");
HAnimSite323.DEF = "hanim_suprasternale_pt";
HAnimSite323.name = "suprasternale_pt";
HAnimSite323.translation = new SFVec3f(new float[0.0084,1.4714,0.0551]);
let TouchSensor324 = browser.currentScene.createNode("TouchSensor");
TouchSensor324.description = "HAnimSite suprasternale_pt";
HAnimSite323.children = new MFNode();

HAnimSite323.children[0] = TouchSensor324;

let Shape325 = browser.currentScene.createNode("Shape");
Shape325.USE = "HAnimSiteShape";
HAnimSite323.children[1] = Shape325;

HAnimSegment312.children[3] = HAnimSite323;

HAnimJoint311.children = new MFNode();

HAnimJoint311.children[0] = HAnimSegment312;

let HAnimJoint326 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint326.DEF = "hanim_vt1";
HAnimJoint326.name = "vt1";
HAnimJoint326.center = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let HAnimSegment327 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment327.DEF = "hanim_t1";
HAnimSegment327.name = "t1";
let Transform328 = browser.currentScene.createNode("Transform");
Transform328.translation = new SFVec3f(new float[0.0065,1.4951,-0.0387]);
let Transform329 = browser.currentScene.createNode("Transform");
let Shape330 = browser.currentScene.createNode("Shape");
Shape330.USE = "HAnimJointShape";
Transform329.child = new undefined();

Transform329.child[0] = Shape330;

Transform328.children = new MFNode();

Transform328.children[0] = Transform329;

HAnimSegment327.children = new MFNode();

HAnimSegment327.children[0] = Transform328;

let Shape331 = browser.currentScene.createNode("Shape");
let LineSet332 = browser.currentScene.createNode("LineSet");
LineSet332.vertexCount = new MFInt32(new int[2]);
let ColorRGBA333 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA333.USE = "HAnimSegmentLineColorRGBA";
LineSet332.color = ColorRGBA333;

let Coordinate334 = browser.currentScene.createNode("Coordinate");
Coordinate334.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.0066,1.5662,-0.0084]);
LineSet332.coord = Coordinate334;

Shape331.geometry = LineSet332;

HAnimSegment327.children[1] = Shape331;

let Shape335 = browser.currentScene.createNode("Shape");
let LineSet336 = browser.currentScene.createNode("LineSet");
LineSet336.vertexCount = new MFInt32(new int[2]);
let ColorRGBA337 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA337.USE = "HAnimSegmentLineColorRGBA";
LineSet336.color = ColorRGBA337;

let Coordinate338 = browser.currentScene.createNode("Coordinate");
Coordinate338.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353]);
LineSet336.coord = Coordinate338;

Shape335.geometry = LineSet336;

HAnimSegment327.children[2] = Shape335;

let HAnimSite339 = browser.currentScene.createNode("HAnimSite");
HAnimSite339.DEF = "hanim_l_acromion_pt";
HAnimSite339.name = "l_acromion_pt";
HAnimSite339.translation = new SFVec3f(new float[0.2032,1.476,-0.049]);
let TouchSensor340 = browser.currentScene.createNode("TouchSensor");
TouchSensor340.description = "HAnimSite l_acromion_pt";
HAnimSite339.children = new MFNode();

HAnimSite339.children[0] = TouchSensor340;

let Shape341 = browser.currentScene.createNode("Shape");
Shape341.USE = "HAnimSiteShape";
HAnimSite339.children[1] = Shape341;

HAnimSegment327.children[3] = HAnimSite339;

let HAnimSite342 = browser.currentScene.createNode("HAnimSite");
HAnimSite342.DEF = "hanim_l_axilla_distal_pt";
HAnimSite342.name = "l_axilla_distal_pt";
HAnimSite342.translation = new SFVec3f(new float[0.1706,1.4072,-0.0875]);
let TouchSensor343 = browser.currentScene.createNode("TouchSensor");
TouchSensor343.description = "HAnimSite l_axilla_distal_pt";
HAnimSite342.children = new MFNode();

HAnimSite342.children[0] = TouchSensor343;

let Shape344 = browser.currentScene.createNode("Shape");
Shape344.USE = "HAnimSiteShape";
HAnimSite342.children[1] = Shape344;

HAnimSegment327.children[4] = HAnimSite342;

let HAnimSite345 = browser.currentScene.createNode("HAnimSite");
HAnimSite345.DEF = "hanim_l_axilla_posterior_folds_pt";
HAnimSite345.name = "l_axilla_posterior_folds_pt";
let TouchSensor346 = browser.currentScene.createNode("TouchSensor");
TouchSensor346.description = "HAnimSite l_axilla_posterior_folds_pt";
HAnimSite345.children = new MFNode();

HAnimSite345.children[0] = TouchSensor346;

let Shape347 = browser.currentScene.createNode("Shape");
Shape347.USE = "HAnimSiteShape";
HAnimSite345.children[1] = Shape347;

HAnimSegment327.children[5] = HAnimSite345;

let HAnimSite348 = browser.currentScene.createNode("HAnimSite");
HAnimSite348.DEF = "hanim_l_axilla_proximal_pt";
HAnimSite348.name = "l_axilla_proximal_pt";
HAnimSite348.translation = new SFVec3f(new float[0.1777,1.4065,-0.0075]);
let TouchSensor349 = browser.currentScene.createNode("TouchSensor");
TouchSensor349.description = "HAnimSite l_axilla_proximal_pt";
HAnimSite348.children = new MFNode();

HAnimSite348.children[0] = TouchSensor349;

let Shape350 = browser.currentScene.createNode("Shape");
Shape350.USE = "HAnimSiteShape";
HAnimSite348.children[1] = Shape350;

HAnimSegment327.children[6] = HAnimSite348;

let HAnimSite351 = browser.currentScene.createNode("HAnimSite");
HAnimSite351.DEF = "hanim_l_clavicale_pt";
HAnimSite351.name = "l_clavicale_pt";
HAnimSite351.translation = new SFVec3f(new float[0.0271,1.4943,0.0394]);
let TouchSensor352 = browser.currentScene.createNode("TouchSensor");
TouchSensor352.description = "HAnimSite l_clavicale_pt";
HAnimSite351.children = new MFNode();

HAnimSite351.children[0] = TouchSensor352;

let Shape353 = browser.currentScene.createNode("Shape");
Shape353.USE = "HAnimSiteShape";
HAnimSite351.children[1] = Shape353;

HAnimSegment327.children[7] = HAnimSite351;

let Shape354 = browser.currentScene.createNode("Shape");
let LineSet355 = browser.currentScene.createNode("LineSet");
LineSet355.vertexCount = new MFInt32(new int[2]);
let ColorRGBA356 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA356.USE = "HAnimSegmentLineColorRGBA";
LineSet355.color = ColorRGBA356;

let Coordinate357 = browser.currentScene.createNode("Coordinate");
Coordinate357.point = new MFVec3f(new float[0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033]);
LineSet355.coord = Coordinate357;

Shape354.geometry = LineSet355;

HAnimSegment327.children[8] = Shape354;

let HAnimSite358 = browser.currentScene.createNode("HAnimSite");
HAnimSite358.DEF = "hanim_r_acromion_pt";
HAnimSite358.name = "r_acromion_pt";
HAnimSite358.translation = new SFVec3f(new float[-0.1905,1.4791,-0.0431]);
let TouchSensor359 = browser.currentScene.createNode("TouchSensor");
TouchSensor359.description = "HAnimSite r_acromion_pt";
HAnimSite358.children = new MFNode();

HAnimSite358.children[0] = TouchSensor359;

let Shape360 = browser.currentScene.createNode("Shape");
Shape360.USE = "HAnimSiteShape";
HAnimSite358.children[1] = Shape360;

HAnimSegment327.children[9] = HAnimSite358;

let HAnimSite361 = browser.currentScene.createNode("HAnimSite");
HAnimSite361.DEF = "hanim_r_axilla_distal_pt";
HAnimSite361.name = "r_axilla_distal_pt";
HAnimSite361.translation = new SFVec3f(new float[-0.1603,1.4098,-0.0826]);
let TouchSensor362 = browser.currentScene.createNode("TouchSensor");
TouchSensor362.description = "HAnimSite r_axilla_distal_pt";
HAnimSite361.children = new MFNode();

HAnimSite361.children[0] = TouchSensor362;

let Shape363 = browser.currentScene.createNode("Shape");
Shape363.USE = "HAnimSiteShape";
HAnimSite361.children[1] = Shape363;

HAnimSegment327.children[10] = HAnimSite361;

let HAnimSite364 = browser.currentScene.createNode("HAnimSite");
HAnimSite364.DEF = "hanim_r_axilla_posterior_folds_pt";
HAnimSite364.name = "r_axilla_posterior_folds_pt";
let TouchSensor365 = browser.currentScene.createNode("TouchSensor");
TouchSensor365.description = "HAnimSite r_axilla_posterior_folds_pt";
HAnimSite364.children = new MFNode();

HAnimSite364.children[0] = TouchSensor365;

let Shape366 = browser.currentScene.createNode("Shape");
Shape366.USE = "HAnimSiteShape";
HAnimSite364.children[1] = Shape366;

HAnimSegment327.children[11] = HAnimSite364;

let HAnimSite367 = browser.currentScene.createNode("HAnimSite");
HAnimSite367.DEF = "hanim_r_axilla_proximal_pt";
HAnimSite367.name = "r_axilla_proximal_pt";
HAnimSite367.translation = new SFVec3f(new float[-0.1626,1.4072,-0.0031]);
let TouchSensor368 = browser.currentScene.createNode("TouchSensor");
TouchSensor368.description = "HAnimSite r_axilla_proximal_pt";
HAnimSite367.children = new MFNode();

HAnimSite367.children[0] = TouchSensor368;

let Shape369 = browser.currentScene.createNode("Shape");
Shape369.USE = "HAnimSiteShape";
HAnimSite367.children[1] = Shape369;

HAnimSegment327.children[12] = HAnimSite367;

let HAnimSite370 = browser.currentScene.createNode("HAnimSite");
HAnimSite370.DEF = "hanim_r_clavicale_pt";
HAnimSite370.name = "r_clavicale_pt";
HAnimSite370.translation = new SFVec3f(new float[-0.0115,1.4943,0.04]);
let TouchSensor371 = browser.currentScene.createNode("TouchSensor");
TouchSensor371.description = "HAnimSite r_clavicale_pt";
HAnimSite370.children = new MFNode();

HAnimSite370.children[0] = TouchSensor371;

let Shape372 = browser.currentScene.createNode("Shape");
Shape372.USE = "HAnimSiteShape";
HAnimSite370.children[1] = Shape372;

HAnimSegment327.children[13] = HAnimSite370;

HAnimJoint326.children = new MFNode();

HAnimJoint326.children[0] = HAnimSegment327;

let HAnimJoint373 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint373.DEF = "hanim_vc4";
HAnimJoint373.name = "vc4";
HAnimJoint373.center = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let HAnimSegment374 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment374.DEF = "hanim_c4";
HAnimSegment374.name = "c4";
let Transform375 = browser.currentScene.createNode("Transform");
Transform375.translation = new SFVec3f(new float[0.0066,1.5662,-0.0084]);
let Transform376 = browser.currentScene.createNode("Transform");
let Shape377 = browser.currentScene.createNode("Shape");
Shape377.USE = "HAnimJointShape";
Transform376.child = new undefined();

Transform376.child[0] = Shape377;

Transform375.children = new MFNode();

Transform375.children[0] = Transform376;

HAnimSegment374.children = new MFNode();

HAnimSegment374.children[0] = Transform375;

let Shape378 = browser.currentScene.createNode("Shape");
let LineSet379 = browser.currentScene.createNode("LineSet");
LineSet379.vertexCount = new MFInt32(new int[2]);
let ColorRGBA380 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA380.USE = "HAnimSegmentLineColorRGBA";
LineSet379.color = ColorRGBA380;

let Coordinate381 = browser.currentScene.createNode("Coordinate");
Coordinate381.point = new MFVec3f(new float[0.0066,1.5662,-0.0084,0.0066,1.5928,-0.0103]);
LineSet379.coord = Coordinate381;

Shape378.geometry = LineSet379;

HAnimSegment374.children[1] = Shape378;

let HAnimSite382 = browser.currentScene.createNode("HAnimSite");
HAnimSite382.DEF = "hanim_adams_apple_pt";
HAnimSite382.name = "adams_apple_pt";
let TouchSensor383 = browser.currentScene.createNode("TouchSensor");
TouchSensor383.description = "HAnimSite adams_apple_pt";
HAnimSite382.children = new MFNode();

HAnimSite382.children[0] = TouchSensor383;

let Shape384 = browser.currentScene.createNode("Shape");
Shape384.USE = "HAnimSiteShape";
HAnimSite382.children[1] = Shape384;

HAnimSegment374.children[2] = HAnimSite382;

HAnimJoint373.children = new MFNode();

HAnimJoint373.children[0] = HAnimSegment374;

let HAnimJoint385 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint385.DEF = "hanim_vc2";
HAnimJoint385.name = "vc2";
HAnimJoint385.center = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let HAnimSegment386 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment386.DEF = "hanim_c2";
HAnimSegment386.name = "c2";
let Transform387 = browser.currentScene.createNode("Transform");
Transform387.translation = new SFVec3f(new float[0.0066,1.5928,-0.0103]);
let Transform388 = browser.currentScene.createNode("Transform");
let Shape389 = browser.currentScene.createNode("Shape");
Shape389.USE = "HAnimJointShape";
Transform388.child = new undefined();

Transform388.child[0] = Shape389;

Transform387.children = new MFNode();

Transform387.children[0] = Transform388;

HAnimSegment386.children = new MFNode();

HAnimSegment386.children[0] = Transform387;

let Shape390 = browser.currentScene.createNode("Shape");
let LineSet391 = browser.currentScene.createNode("LineSet");
LineSet391.vertexCount = new MFInt32(new int[2]);
let ColorRGBA392 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA392.USE = "HAnimSegmentLineColorRGBA";
LineSet391.color = ColorRGBA392;

let Coordinate393 = browser.currentScene.createNode("Coordinate");
Coordinate393.point = new MFVec3f(new float[0.0066,1.5928,-0.0103,0.0044,1.6209,0.0236]);
LineSet391.coord = Coordinate393;

Shape390.geometry = LineSet391;

HAnimSegment386.children[1] = Shape390;

let HAnimSite394 = browser.currentScene.createNode("HAnimSite");
HAnimSite394.DEF = "hanim_glabella_pt";
HAnimSite394.name = "glabella_pt";
let TouchSensor395 = browser.currentScene.createNode("TouchSensor");
TouchSensor395.description = "HAnimSite glabella_pt";
HAnimSite394.children = new MFNode();

HAnimSite394.children[0] = TouchSensor395;

let Shape396 = browser.currentScene.createNode("Shape");
Shape396.USE = "HAnimSiteShape";
HAnimSite394.children[1] = Shape396;

HAnimSegment386.children[2] = HAnimSite394;

let HAnimSite397 = browser.currentScene.createNode("HAnimSite");
HAnimSite397.DEF = "hanim_l_ectocanthus_pt";
HAnimSite397.name = "l_ectocanthus_pt";
let TouchSensor398 = browser.currentScene.createNode("TouchSensor");
TouchSensor398.description = "HAnimSite l_ectocanthus_pt";
HAnimSite397.children = new MFNode();

HAnimSite397.children[0] = TouchSensor398;

let Shape399 = browser.currentScene.createNode("Shape");
Shape399.USE = "HAnimSiteShape";
HAnimSite397.children[1] = Shape399;

HAnimSegment386.children[3] = HAnimSite397;

let HAnimSite400 = browser.currentScene.createNode("HAnimSite");
HAnimSite400.DEF = "hanim_l_infraorbitale_pt";
HAnimSite400.name = "l_infraorbitale_pt";
HAnimSite400.translation = new SFVec3f(new float[0.0341,1.6171,0.0752]);
let TouchSensor401 = browser.currentScene.createNode("TouchSensor");
TouchSensor401.description = "HAnimSite l_infraorbitale_pt";
HAnimSite400.children = new MFNode();

HAnimSite400.children[0] = TouchSensor401;

let Shape402 = browser.currentScene.createNode("Shape");
Shape402.USE = "HAnimSiteShape";
HAnimSite400.children[1] = Shape402;

HAnimSegment386.children[4] = HAnimSite400;

let HAnimSite403 = browser.currentScene.createNode("HAnimSite");
HAnimSite403.DEF = "hanim_l_tragion_pt";
HAnimSite403.name = "l_tragion_pt";
HAnimSite403.translation = new SFVec3f(new float[0.0739,1.6348,0.0282]);
let TouchSensor404 = browser.currentScene.createNode("TouchSensor");
TouchSensor404.description = "HAnimSite l_tragion_pt";
HAnimSite403.children = new MFNode();

HAnimSite403.children[0] = TouchSensor404;

let Shape405 = browser.currentScene.createNode("Shape");
Shape405.USE = "HAnimSiteShape";
HAnimSite403.children[1] = Shape405;

HAnimSegment386.children[5] = HAnimSite403;

let HAnimSite406 = browser.currentScene.createNode("HAnimSite");
HAnimSite406.DEF = "hanim_nuchale_pt";
HAnimSite406.name = "nuchale_pt";
HAnimSite406.translation = new SFVec3f(new float[0.0039,1.5972,-0.0796]);
let TouchSensor407 = browser.currentScene.createNode("TouchSensor");
TouchSensor407.description = "HAnimSite nuchale_pt";
HAnimSite406.children = new MFNode();

HAnimSite406.children[0] = TouchSensor407;

let Shape408 = browser.currentScene.createNode("Shape");
Shape408.USE = "HAnimSiteShape";
HAnimSite406.children[1] = Shape408;

HAnimSegment386.children[6] = HAnimSite406;

let HAnimSite409 = browser.currentScene.createNode("HAnimSite");
HAnimSite409.DEF = "hanim_opisthocranion_pt";
HAnimSite409.name = "opisthocranion_pt";
let TouchSensor410 = browser.currentScene.createNode("TouchSensor");
TouchSensor410.description = "HAnimSite opisthocranion_pt";
HAnimSite409.children = new MFNode();

HAnimSite409.children[0] = TouchSensor410;

let Shape411 = browser.currentScene.createNode("Shape");
Shape411.USE = "HAnimSiteShape";
HAnimSite409.children[1] = Shape411;

HAnimSegment386.children[7] = HAnimSite409;

let HAnimSite412 = browser.currentScene.createNode("HAnimSite");
HAnimSite412.DEF = "hanim_r_ectocanthus_pt";
HAnimSite412.name = "r_ectocanthus_pt";
let TouchSensor413 = browser.currentScene.createNode("TouchSensor");
TouchSensor413.description = "HAnimSite r_ectocanthus_pt";
HAnimSite412.children = new MFNode();

HAnimSite412.children[0] = TouchSensor413;

let Shape414 = browser.currentScene.createNode("Shape");
Shape414.USE = "HAnimSiteShape";
HAnimSite412.children[1] = Shape414;

HAnimSegment386.children[8] = HAnimSite412;

let HAnimSite415 = browser.currentScene.createNode("HAnimSite");
HAnimSite415.DEF = "hanim_r_infraorbitale_pt";
HAnimSite415.name = "r_infraorbitale_pt";
HAnimSite415.translation = new SFVec3f(new float[-0.0237,1.6171,0.0752]);
let TouchSensor416 = browser.currentScene.createNode("TouchSensor");
TouchSensor416.description = "HAnimSite r_infraorbitale_pt";
HAnimSite415.children = new MFNode();

HAnimSite415.children[0] = TouchSensor416;

let Shape417 = browser.currentScene.createNode("Shape");
Shape417.USE = "HAnimSiteShape";
HAnimSite415.children[1] = Shape417;

HAnimSegment386.children[9] = HAnimSite415;

let HAnimSite418 = browser.currentScene.createNode("HAnimSite");
HAnimSite418.DEF = "hanim_r_tragion_pt";
HAnimSite418.name = "r_tragion_pt";
HAnimSite418.translation = new SFVec3f(new float[-0.0646,1.6347,0.0302]);
let TouchSensor419 = browser.currentScene.createNode("TouchSensor");
TouchSensor419.description = "HAnimSite r_tragion_pt";
HAnimSite418.children = new MFNode();

HAnimSite418.children[0] = TouchSensor419;

let Shape420 = browser.currentScene.createNode("Shape");
Shape420.USE = "HAnimSiteShape";
HAnimSite418.children[1] = Shape420;

HAnimSegment386.children[10] = HAnimSite418;

let HAnimSite421 = browser.currentScene.createNode("HAnimSite");
HAnimSite421.DEF = "hanim_sellion_pt";
HAnimSite421.name = "sellion_pt";
HAnimSite421.translation = new SFVec3f(new float[0.0058,1.6316,0.0852]);
let TouchSensor422 = browser.currentScene.createNode("TouchSensor");
TouchSensor422.description = "HAnimSite sellion_pt";
HAnimSite421.children = new MFNode();

HAnimSite421.children[0] = TouchSensor422;

let Shape423 = browser.currentScene.createNode("Shape");
Shape423.USE = "HAnimSiteShape";
HAnimSite421.children[1] = Shape423;

HAnimSegment386.children[11] = HAnimSite421;

let HAnimSite424 = browser.currentScene.createNode("HAnimSite");
HAnimSite424.DEF = "hanim_skull_vertex_pt";
HAnimSite424.name = "skull_vertex_pt";
HAnimSite424.translation = new SFVec3f(new float[0.005,1.7504,0.0055]);
let TouchSensor425 = browser.currentScene.createNode("TouchSensor");
TouchSensor425.description = "HAnimSite skull_vertex_pt";
HAnimSite424.children = new MFNode();

HAnimSite424.children[0] = TouchSensor425;

let Shape426 = browser.currentScene.createNode("Shape");
Shape426.USE = "HAnimSiteShape";
HAnimSite424.children[1] = Shape426;

HAnimSegment386.children[12] = HAnimSite424;

HAnimJoint385.children = new MFNode();

HAnimJoint385.children[0] = HAnimSegment386;

let HAnimJoint427 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint427.DEF = "hanim_skullbase";
HAnimJoint427.name = "skullbase";
HAnimJoint427.center = new SFVec3f(new float[0.0044,1.6209,0.0236]);
HAnimJoint385.children[1] = HAnimJoint427;

HAnimJoint373.children[1] = HAnimJoint385;

HAnimJoint326.children[1] = HAnimJoint373;

let HAnimJoint428 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint428.DEF = "hanim_l_sternoclavicular";
HAnimJoint428.name = "l_sternoclavicular";
HAnimJoint428.center = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let HAnimSegment429 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment429.DEF = "hanim_l_clavicle";
HAnimSegment429.name = "l_clavicle";
let Transform430 = browser.currentScene.createNode("Transform");
Transform430.translation = new SFVec3f(new float[0.082,1.4488,-0.0353]);
let Transform431 = browser.currentScene.createNode("Transform");
let Shape432 = browser.currentScene.createNode("Shape");
Shape432.USE = "HAnimJointShape";
Transform431.child = new undefined();

Transform431.child[0] = Shape432;

Transform430.children = new MFNode();

Transform430.children[0] = Transform431;

HAnimSegment429.children = new MFNode();

HAnimSegment429.children[0] = Transform430;

let Shape433 = browser.currentScene.createNode("Shape");
let LineSet434 = browser.currentScene.createNode("LineSet");
LineSet434.vertexCount = new MFInt32(new int[2]);
let ColorRGBA435 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA435.USE = "HAnimSegmentLineColorRGBA";
LineSet434.color = ColorRGBA435;

let Coordinate436 = browser.currentScene.createNode("Coordinate");
Coordinate436.point = new MFVec3f(new float[0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]);
LineSet434.coord = Coordinate436;

Shape433.geometry = LineSet434;

HAnimSegment429.children[1] = Shape433;

HAnimJoint428.children = new MFNode();

HAnimJoint428.children[0] = HAnimSegment429;

let HAnimJoint437 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint437.DEF = "hanim_l_acromioclavicular";
HAnimJoint437.name = "l_acromioclavicular";
HAnimJoint437.center = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let HAnimSegment438 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment438.DEF = "hanim_l_scapula";
HAnimSegment438.name = "l_scapula";
let Transform439 = browser.currentScene.createNode("Transform");
Transform439.translation = new SFVec3f(new float[0.0962,1.4269,-0.0424]);
let Transform440 = browser.currentScene.createNode("Transform");
let Shape441 = browser.currentScene.createNode("Shape");
Shape441.USE = "HAnimJointShape";
Transform440.child = new undefined();

Transform440.child[0] = Shape441;

Transform439.children = new MFNode();

Transform439.children[0] = Transform440;

HAnimSegment438.children = new MFNode();

HAnimSegment438.children[0] = Transform439;

let Shape442 = browser.currentScene.createNode("Shape");
let LineSet443 = browser.currentScene.createNode("LineSet");
LineSet443.vertexCount = new MFInt32(new int[2]);
let ColorRGBA444 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA444.USE = "HAnimSegmentLineColorRGBA";
LineSet443.color = ColorRGBA444;

let Coordinate445 = browser.currentScene.createNode("Coordinate");
Coordinate445.point = new MFVec3f(new float[0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387]);
LineSet443.coord = Coordinate445;

Shape442.geometry = LineSet443;

HAnimSegment438.children[1] = Shape442;

let HAnimSite446 = browser.currentScene.createNode("HAnimSite");
HAnimSite446.DEF = "hanim_l_bideltoid_pt";
HAnimSite446.name = "l_bideltoid_pt";
let TouchSensor447 = browser.currentScene.createNode("TouchSensor");
TouchSensor447.description = "HAnimSite l_bideltoid_pt";
HAnimSite446.children = new MFNode();

HAnimSite446.children[0] = TouchSensor447;

let Shape448 = browser.currentScene.createNode("Shape");
Shape448.USE = "HAnimSiteShape";
HAnimSite446.children[1] = Shape448;

HAnimSegment438.children[2] = HAnimSite446;

let HAnimSite449 = browser.currentScene.createNode("HAnimSite");
HAnimSite449.DEF = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimSite449.name = "l_humeral_lateral_epicondyles_pt";
HAnimSite449.translation = new SFVec3f(new float[0.228,1.1482,-0.11]);
let TouchSensor450 = browser.currentScene.createNode("TouchSensor");
TouchSensor450.description = "HAnimSite l_humeral_lateral_epicondyles_pt";
HAnimSite449.children = new MFNode();

HAnimSite449.children[0] = TouchSensor450;

let Shape451 = browser.currentScene.createNode("Shape");
Shape451.USE = "HAnimSiteShape";
HAnimSite449.children[1] = Shape451;

HAnimSegment438.children[3] = HAnimSite449;

HAnimJoint437.children = new MFNode();

HAnimJoint437.children[0] = HAnimSegment438;

let HAnimJoint452 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint452.DEF = "hanim_l_shoulder";
HAnimJoint452.name = "l_shoulder";
HAnimJoint452.center = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let HAnimSegment453 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment453.DEF = "hanim_l_upperarm";
HAnimSegment453.name = "l_upperarm";
let Transform454 = browser.currentScene.createNode("Transform");
Transform454.translation = new SFVec3f(new float[0.2029,1.4376,-0.0387]);
let Transform455 = browser.currentScene.createNode("Transform");
let Shape456 = browser.currentScene.createNode("Shape");
Shape456.USE = "HAnimJointShape";
Transform455.child = new undefined();

Transform455.child[0] = Shape456;

Transform454.children = new MFNode();

Transform454.children[0] = Transform455;

HAnimSegment453.children = new MFNode();

HAnimSegment453.children[0] = Transform454;

let Shape457 = browser.currentScene.createNode("Shape");
let LineSet458 = browser.currentScene.createNode("LineSet");
LineSet458.vertexCount = new MFInt32(new int[2]);
let ColorRGBA459 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA459.USE = "HAnimSegmentLineColorRGBA";
LineSet458.color = ColorRGBA459;

let Coordinate460 = browser.currentScene.createNode("Coordinate");
Coordinate460.point = new MFVec3f(new float[0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682]);
LineSet458.coord = Coordinate460;

Shape457.geometry = LineSet458;

HAnimSegment453.children[1] = Shape457;

let HAnimSite461 = browser.currentScene.createNode("HAnimSite");
HAnimSite461.DEF = "hanim_l_humeral_medial_epicondyles_pt";
HAnimSite461.name = "l_humeral_medial_epicondyles_pt";
HAnimSite461.translation = new SFVec3f(new float[0.1735,1.1272,-0.1113]);
let TouchSensor462 = browser.currentScene.createNode("TouchSensor");
TouchSensor462.description = "HAnimSite l_humeral_medial_epicondyles_pt";
HAnimSite461.children = new MFNode();

HAnimSite461.children[0] = TouchSensor462;

let Shape463 = browser.currentScene.createNode("Shape");
Shape463.USE = "HAnimSiteShape";
HAnimSite461.children[1] = Shape463;

HAnimSegment453.children[2] = HAnimSite461;

let HAnimSite464 = browser.currentScene.createNode("HAnimSite");
HAnimSite464.DEF = "hanim_l_olecranon_pt";
HAnimSite464.name = "l_olecranon_pt";
HAnimSite464.translation = new SFVec3f(new float[-0.1962,1.1375,-0.1123]);
let TouchSensor465 = browser.currentScene.createNode("TouchSensor");
TouchSensor465.description = "HAnimSite l_olecranon_pt";
HAnimSite464.children = new MFNode();

HAnimSite464.children[0] = TouchSensor465;

let Shape466 = browser.currentScene.createNode("Shape");
Shape466.USE = "HAnimSiteShape";
HAnimSite464.children[1] = Shape466;

HAnimSegment453.children[3] = HAnimSite464;

let HAnimSite467 = browser.currentScene.createNode("HAnimSite");
HAnimSite467.DEF = "hanim_l_radial_styloid_pt";
HAnimSite467.name = "l_radial_styloid_pt";
HAnimSite467.translation = new SFVec3f(new float[0.1901,0.8645,-0.0415]);
let TouchSensor468 = browser.currentScene.createNode("TouchSensor");
TouchSensor468.description = "HAnimSite l_radial_styloid_pt";
HAnimSite467.children = new MFNode();

HAnimSite467.children[0] = TouchSensor468;

let Shape469 = browser.currentScene.createNode("Shape");
Shape469.USE = "HAnimSiteShape";
HAnimSite467.children[1] = Shape469;

HAnimSegment453.children[4] = HAnimSite467;

let HAnimSite470 = browser.currentScene.createNode("HAnimSite");
HAnimSite470.DEF = "hanim_l_radiale_pt";
HAnimSite470.name = "l_radiale_pt";
HAnimSite470.translation = new SFVec3f(new float[0.2182,1.1212,-0.1167]);
let TouchSensor471 = browser.currentScene.createNode("TouchSensor");
TouchSensor471.description = "HAnimSite l_radiale_pt";
HAnimSite470.children = new MFNode();

HAnimSite470.children[0] = TouchSensor471;

let Shape472 = browser.currentScene.createNode("Shape");
Shape472.USE = "HAnimSiteShape";
HAnimSite470.children[1] = Shape472;

HAnimSegment453.children[5] = HAnimSite470;

HAnimJoint452.children = new MFNode();

HAnimJoint452.children[0] = HAnimSegment453;

let HAnimJoint473 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint473.DEF = "hanim_l_elbow";
HAnimJoint473.name = "l_elbow";
HAnimJoint473.center = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let HAnimSegment474 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment474.DEF = "hanim_l_forearm";
HAnimSegment474.name = "l_forearm";
let Transform475 = browser.currentScene.createNode("Transform");
Transform475.translation = new SFVec3f(new float[0.2014,1.1357,-0.0682]);
let Transform476 = browser.currentScene.createNode("Transform");
let Shape477 = browser.currentScene.createNode("Shape");
Shape477.USE = "HAnimJointShape";
Transform476.child = new undefined();

Transform476.child[0] = Shape477;

Transform475.children = new MFNode();

Transform475.children[0] = Transform476;

HAnimSegment474.children = new MFNode();

HAnimSegment474.children[0] = Transform475;

let Shape478 = browser.currentScene.createNode("Shape");
let LineSet479 = browser.currentScene.createNode("LineSet");
LineSet479.vertexCount = new MFInt32(new int[2]);
let ColorRGBA480 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA480.USE = "HAnimSegmentLineColorRGBA";
LineSet479.color = ColorRGBA480;

let Coordinate481 = browser.currentScene.createNode("Coordinate");
Coordinate481.point = new MFVec3f(new float[0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583]);
LineSet479.coord = Coordinate481;

Shape478.geometry = LineSet479;

HAnimSegment474.children[1] = Shape478;

let HAnimSite482 = browser.currentScene.createNode("HAnimSite");
HAnimSite482.DEF = "hanim_l_ulnar_styloid_pt";
HAnimSite482.name = "l_ulnar_styloid_pt";
HAnimSite482.translation = new SFVec3f(new float[-0.2142,0.8529,-0.0648]);
let TouchSensor483 = browser.currentScene.createNode("TouchSensor");
TouchSensor483.description = "HAnimSite l_ulnar_styloid_pt";
HAnimSite482.children = new MFNode();

HAnimSite482.children[0] = TouchSensor483;

let Shape484 = browser.currentScene.createNode("Shape");
Shape484.USE = "HAnimSiteShape";
HAnimSite482.children[1] = Shape484;

HAnimSegment474.children[2] = HAnimSite482;

HAnimJoint473.children = new MFNode();

HAnimJoint473.children[0] = HAnimSegment474;

let HAnimJoint485 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint485.DEF = "hanim_l_radiocarpal";
HAnimJoint485.name = "l_radiocarpal";
HAnimJoint485.center = new SFVec3f(new float[0.1984,0.8663,-0.0583]);
let HAnimSegment486 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment486.DEF = "hanim_l_carpal";
HAnimSegment486.name = "l_carpal";
let Transform487 = browser.currentScene.createNode("Transform");
Transform487.translation = new SFVec3f(new float[0.2,0.85,-0.05]);
Transform487.rotation = new SFRotation(new float[0,0,1,-3.14]);
Transform487.scale = new SFVec3f(new float[0.2,0.2,0.2]);
let Transform488 = browser.currentScene.createNode("Transform");
Transform488.rotation = new SFRotation(new float[0,1,0,-1.57]);
let Shape489 = browser.currentScene.createNode("Shape");
Shape489.USE = "HAnimJointShape";
Transform488.child = new undefined();

Transform488.child[0] = Shape489;

Transform487.children = new MFNode();

Transform487.children[0] = Transform488;

HAnimSegment486.children = new MFNode();

HAnimSegment486.children[0] = Transform487;

let Shape490 = browser.currentScene.createNode("Shape");
let LineSet491 = browser.currentScene.createNode("LineSet");
LineSet491.vertexCount = new MFInt32(new int[2]);
let ColorRGBA492 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA492.USE = "HAnimSegmentLineColorRGBA";
LineSet491.color = ColorRGBA492;

let Coordinate493 = browser.currentScene.createNode("Coordinate");
Coordinate493.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534]);
LineSet491.coord = Coordinate493;

Shape490.geometry = LineSet491;

HAnimSegment486.children[1] = Shape490;

let Shape494 = browser.currentScene.createNode("Shape");
let LineSet495 = browser.currentScene.createNode("LineSet");
LineSet495.vertexCount = new MFInt32(new int[2]);
let ColorRGBA496 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA496.USE = "HAnimSegmentLineColorRGBA";
LineSet495.color = ColorRGBA496;

let Coordinate497 = browser.currentScene.createNode("Coordinate");
Coordinate497.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028]);
LineSet495.coord = Coordinate497;

Shape494.geometry = LineSet495;

HAnimSegment486.children[2] = Shape494;

let HAnimSite498 = browser.currentScene.createNode("HAnimSite");
HAnimSite498.DEF = "hanim_l_metacarpal_phalanx_2_pt";
HAnimSite498.name = "l_metacarpal_phalanx_2_pt";
HAnimSite498.translation = new SFVec3f(new float[0.2009,0.8139,-0.0237]);
let TouchSensor499 = browser.currentScene.createNode("TouchSensor");
TouchSensor499.description = "HAnimSite l_metacarpal_phalanx_2_pt";
HAnimSite498.children = new MFNode();

HAnimSite498.children[0] = TouchSensor499;

let Shape500 = browser.currentScene.createNode("Shape");
Shape500.USE = "HAnimSiteShape";
HAnimSite498.children[1] = Shape500;

HAnimSegment486.children[3] = HAnimSite498;

let Shape501 = browser.currentScene.createNode("Shape");
let LineSet502 = browser.currentScene.createNode("LineSet");
LineSet502.vertexCount = new MFInt32(new int[2]);
let ColorRGBA503 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA503.USE = "HAnimSegmentLineColorRGBA";
LineSet502.color = ColorRGBA503;

let Coordinate504 = browser.currentScene.createNode("Coordinate");
Coordinate504.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053]);
LineSet502.coord = Coordinate504;

Shape501.geometry = LineSet502;

HAnimSegment486.children[4] = Shape501;

let HAnimSite505 = browser.currentScene.createNode("HAnimSite");
HAnimSite505.DEF = "hanim_l_metacarpal_phalanx_3_pt";
HAnimSite505.name = "l_metacarpal_phalanx_3_pt";
let TouchSensor506 = browser.currentScene.createNode("TouchSensor");
TouchSensor506.description = "HAnimSite l_metacarpal_phalanx_3_pt";
HAnimSite505.children = new MFNode();

HAnimSite505.children[0] = TouchSensor506;

let Shape507 = browser.currentScene.createNode("Shape");
Shape507.USE = "HAnimSiteShape";
HAnimSite505.children[1] = Shape507;

HAnimSegment486.children[5] = HAnimSite505;

let Shape508 = browser.currentScene.createNode("Shape");
let LineSet509 = browser.currentScene.createNode("LineSet");
LineSet509.vertexCount = new MFInt32(new int[2]);
let ColorRGBA510 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA510.USE = "HAnimSegmentLineColorRGBA";
LineSet509.color = ColorRGBA510;

let Coordinate511 = browser.currentScene.createNode("Coordinate");
Coordinate511.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794]);
LineSet509.coord = Coordinate511;

Shape508.geometry = LineSet509;

HAnimSegment486.children[6] = Shape508;

let Shape512 = browser.currentScene.createNode("Shape");
let LineSet513 = browser.currentScene.createNode("LineSet");
LineSet513.vertexCount = new MFInt32(new int[2]);
let ColorRGBA514 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA514.USE = "HAnimSegmentLineColorRGBA";
LineSet513.color = ColorRGBA514;

let Coordinate515 = browser.currentScene.createNode("Coordinate");
Coordinate515.point = new MFVec3f(new float[0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036]);
LineSet513.coord = Coordinate515;

Shape512.geometry = LineSet513;

HAnimSegment486.children[7] = Shape512;

let HAnimSite516 = browser.currentScene.createNode("HAnimSite");
HAnimSite516.DEF = "hanim_l_metacarpal_phalanx_5_pt";
HAnimSite516.name = "l_metacarpal_phalanx_5_pt";
HAnimSite516.translation = new SFVec3f(new float[0.1929,0.786,-0.1122]);
let TouchSensor517 = browser.currentScene.createNode("TouchSensor");
TouchSensor517.description = "HAnimSite l_metacarpal_phalanx_5_pt";
HAnimSite516.children = new MFNode();

HAnimSite516.children[0] = TouchSensor517;

let Shape518 = browser.currentScene.createNode("Shape");
Shape518.USE = "HAnimSiteShape";
HAnimSite516.children[1] = Shape518;

HAnimSegment486.children[8] = HAnimSite516;

HAnimJoint485.children = new MFNode();

HAnimJoint485.children[0] = HAnimSegment486;

let HAnimJoint519 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint519.DEF = "hanim_l_carpometacarpal_1";
HAnimJoint519.name = "l_carpometacarpal_1";
HAnimJoint519.center = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let HAnimSegment520 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment520.DEF = "hanim_l_metacarpal_1";
HAnimSegment520.name = "l_metacarpal_1";
let Transform521 = browser.currentScene.createNode("Transform");
Transform521.translation = new SFVec3f(new float[0.1924,0.8472,-0.0534]);
let Transform522 = browser.currentScene.createNode("Transform");
let Shape523 = browser.currentScene.createNode("Shape");
Shape523.USE = "HAnimJointShape";
Transform522.child = new undefined();

Transform522.child[0] = Shape523;

Transform521.children = new MFNode();

Transform521.children[0] = Transform522;

HAnimSegment520.children = new MFNode();

HAnimSegment520.children[0] = Transform521;

let Shape524 = browser.currentScene.createNode("Shape");
let LineSet525 = browser.currentScene.createNode("LineSet");
LineSet525.vertexCount = new MFInt32(new int[2]);
let ColorRGBA526 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA526.USE = "HAnimSegmentLineColorRGBA";
LineSet525.color = ColorRGBA526;

let Coordinate527 = browser.currentScene.createNode("Coordinate");
Coordinate527.point = new MFVec3f(new float[0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]);
LineSet525.coord = Coordinate527;

Shape524.geometry = LineSet525;

HAnimSegment520.children[1] = Shape524;

HAnimJoint519.children = new MFNode();

HAnimJoint519.children[0] = HAnimSegment520;

let HAnimJoint528 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint528.DEF = "hanim_l_metacarpophalangeal_1";
HAnimJoint528.name = "l_metacarpophalangeal_1";
HAnimJoint528.center = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let HAnimSegment529 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment529.DEF = "hanim_l_carpal_proximal_phalanx_1";
HAnimSegment529.name = "l_carpal_proximal_phalanx_1";
let Transform530 = browser.currentScene.createNode("Transform");
Transform530.translation = new SFVec3f(new float[0.1951,0.8226,0.0246]);
let Transform531 = browser.currentScene.createNode("Transform");
let Shape532 = browser.currentScene.createNode("Shape");
Shape532.USE = "HAnimJointShape";
Transform531.child = new undefined();

Transform531.child[0] = Shape532;

Transform530.children = new MFNode();

Transform530.children[0] = Transform531;

HAnimSegment529.children = new MFNode();

HAnimSegment529.children[0] = Transform530;

let Shape533 = browser.currentScene.createNode("Shape");
let LineSet534 = browser.currentScene.createNode("LineSet");
LineSet534.vertexCount = new MFInt32(new int[2]);
let ColorRGBA535 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA535.USE = "HAnimSegmentLineColorRGBA";
LineSet534.color = ColorRGBA535;

let Coordinate536 = browser.currentScene.createNode("Coordinate");
Coordinate536.point = new MFVec3f(new float[0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]);
LineSet534.coord = Coordinate536;

Shape533.geometry = LineSet534;

HAnimSegment529.children[1] = Shape533;

let HAnimSite537 = browser.currentScene.createNode("HAnimSite");
HAnimSite537.DEF = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimSite537.name = "l_carpal_distal_phalanx_1_tip";
let TouchSensor538 = browser.currentScene.createNode("TouchSensor");
TouchSensor538.description = "HAnimSite l_carpal_distal_phalanx_1_tip";
HAnimSite537.children = new MFNode();

HAnimSite537.children[0] = TouchSensor538;

let Shape539 = browser.currentScene.createNode("Shape");
Shape539.USE = "HAnimSiteShape";
HAnimSite537.children[1] = Shape539;

HAnimSegment529.children[2] = HAnimSite537;

HAnimJoint528.children = new MFNode();

HAnimJoint528.children[0] = HAnimSegment529;

let HAnimJoint540 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint540.DEF = "hanim_l_carpal_interphalangeal_1";
HAnimJoint540.name = "l_carpal_interphalangeal_1";
HAnimJoint540.center = new SFVec3f(new float[0.1955,0.8159,0.0464]);
HAnimJoint528.children[1] = HAnimJoint540;

HAnimJoint519.children[1] = HAnimJoint528;

HAnimJoint485.children[1] = HAnimJoint519;

let HAnimJoint541 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint541.DEF = "hanim_l_carpometacarpal_2";
HAnimJoint541.name = "l_carpometacarpal_2";
HAnimJoint541.center = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let HAnimSegment542 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment542.DEF = "hanim_l_metacarpal_2";
HAnimSegment542.name = "l_metacarpal_2";
let Transform543 = browser.currentScene.createNode("Transform");
Transform543.translation = new SFVec3f(new float[0.1983,0.8024,-0.028]);
let Transform544 = browser.currentScene.createNode("Transform");
let Shape545 = browser.currentScene.createNode("Shape");
Shape545.USE = "HAnimJointShape";
Transform544.child = new undefined();

Transform544.child[0] = Shape545;

Transform543.children = new MFNode();

Transform543.children[0] = Transform544;

HAnimSegment542.children = new MFNode();

HAnimSegment542.children[0] = Transform543;

let Shape546 = browser.currentScene.createNode("Shape");
let LineSet547 = browser.currentScene.createNode("LineSet");
LineSet547.vertexCount = new MFInt32(new int[2]);
let ColorRGBA548 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA548.USE = "HAnimSegmentLineColorRGBA";
LineSet547.color = ColorRGBA548;

let Coordinate549 = browser.currentScene.createNode("Coordinate");
Coordinate549.point = new MFVec3f(new float[0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]);
LineSet547.coord = Coordinate549;

Shape546.geometry = LineSet547;

HAnimSegment542.children[1] = Shape546;

HAnimJoint541.children = new MFNode();

HAnimJoint541.children[0] = HAnimSegment542;

let HAnimJoint550 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint550.DEF = "hanim_l_metacarpophalangeal_2";
HAnimJoint550.name = "l_metacarpophalangeal_2";
HAnimJoint550.center = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let HAnimSegment551 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment551.DEF = "hanim_l_carpal_proximal_phalanx_2";
HAnimSegment551.name = "l_carpal_proximal_phalanx_2";
let Transform552 = browser.currentScene.createNode("Transform");
Transform552.translation = new SFVec3f(new float[0.1983,0.7815,-0.028]);
let Transform553 = browser.currentScene.createNode("Transform");
let Shape554 = browser.currentScene.createNode("Shape");
Shape554.USE = "HAnimJointShape";
Transform553.child = new undefined();

Transform553.child[0] = Shape554;

Transform552.children = new MFNode();

Transform552.children[0] = Transform553;

HAnimSegment551.children = new MFNode();

HAnimSegment551.children[0] = Transform552;

let Shape555 = browser.currentScene.createNode("Shape");
let LineSet556 = browser.currentScene.createNode("LineSet");
LineSet556.vertexCount = new MFInt32(new int[2]);
let ColorRGBA557 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA557.USE = "HAnimSegmentLineColorRGBA";
LineSet556.color = ColorRGBA557;

let Coordinate558 = browser.currentScene.createNode("Coordinate");
Coordinate558.point = new MFVec3f(new float[0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]);
LineSet556.coord = Coordinate558;

Shape555.geometry = LineSet556;

HAnimSegment551.children[1] = Shape555;

HAnimJoint550.children = new MFNode();

HAnimJoint550.children[0] = HAnimSegment551;

let HAnimJoint559 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint559.DEF = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimJoint559.name = "l_carpal_proximal_interphalangeal_2";
HAnimJoint559.center = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let HAnimSegment560 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment560.DEF = "hanim_l_carpal_middle_phalanx_1";
HAnimSegment560.name = "l_carpal_middle_phalanx_2";
let Transform561 = browser.currentScene.createNode("Transform");
Transform561.translation = new SFVec3f(new float[0.2017,0.7363,-0.0248]);
let Transform562 = browser.currentScene.createNode("Transform");
let Shape563 = browser.currentScene.createNode("Shape");
Shape563.USE = "HAnimJointShape";
Transform562.child = new undefined();

Transform562.child[0] = Shape563;

Transform561.children = new MFNode();

Transform561.children[0] = Transform562;

HAnimSegment560.children = new MFNode();

HAnimSegment560.children[0] = Transform561;

let Shape564 = browser.currentScene.createNode("Shape");
let LineSet565 = browser.currentScene.createNode("LineSet");
LineSet565.vertexCount = new MFInt32(new int[2]);
let ColorRGBA566 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA566.USE = "HAnimSegmentLineColorRGBA";
LineSet565.color = ColorRGBA566;

let Coordinate567 = browser.currentScene.createNode("Coordinate");
Coordinate567.point = new MFVec3f(new float[0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]);
LineSet565.coord = Coordinate567;

Shape564.geometry = LineSet565;

HAnimSegment560.children[1] = Shape564;

let HAnimSite568 = browser.currentScene.createNode("HAnimSite");
HAnimSite568.DEF = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimSite568.name = "l_carpal_distal_phalanx_2_tip";
let TouchSensor569 = browser.currentScene.createNode("TouchSensor");
TouchSensor569.description = "HAnimSite l_carpal_distal_phalanx_2_tip";
HAnimSite568.children = new MFNode();

HAnimSite568.children[0] = TouchSensor569;

let Shape570 = browser.currentScene.createNode("Shape");
Shape570.USE = "HAnimSiteShape";
HAnimSite568.children[1] = Shape570;

HAnimSegment560.children[2] = HAnimSite568;

let HAnimSite571 = browser.currentScene.createNode("HAnimSite");
HAnimSite571.DEF = "hanim_l_dactylion_pt";
HAnimSite571.name = "l_dactylion_pt";
HAnimSite571.translation = new SFVec3f(new float[0.2056,0.6743,-0.0482]);
let TouchSensor572 = browser.currentScene.createNode("TouchSensor");
TouchSensor572.description = "HAnimSite l_dactylion_pt";
HAnimSite571.children = new MFNode();

HAnimSite571.children[0] = TouchSensor572;

let Shape573 = browser.currentScene.createNode("Shape");
Shape573.USE = "HAnimSiteShape";
HAnimSite571.children[1] = Shape573;

HAnimSegment560.children[3] = HAnimSite571;

HAnimJoint559.children = new MFNode();

HAnimJoint559.children[0] = HAnimSegment560;

let HAnimJoint574 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint574.DEF = "hanim_l_carpal_distal_interphalangeal_1";
HAnimJoint574.name = "l_carpal_distal_interphalangeal_2";
HAnimJoint574.center = new SFVec3f(new float[0.2028,0.7139,-0.0236]);
HAnimJoint559.children[1] = HAnimJoint574;

HAnimJoint550.children[1] = HAnimJoint559;

HAnimJoint541.children[1] = HAnimJoint550;

HAnimJoint485.children[2] = HAnimJoint541;

let HAnimJoint575 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint575.DEF = "hanim_l_carpometacarpal_3";
HAnimJoint575.name = "l_carpometacarpal_3";
HAnimJoint575.center = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let HAnimSegment576 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment576.DEF = "hanim_l_metacarpal_3";
HAnimSegment576.name = "l_metacarpal_3";
let Transform577 = browser.currentScene.createNode("Transform");
Transform577.translation = new SFVec3f(new float[0.1987,0.8029,-0.053]);
let Transform578 = browser.currentScene.createNode("Transform");
let Shape579 = browser.currentScene.createNode("Shape");
Shape579.USE = "HAnimJointShape";
Transform578.child = new undefined();

Transform578.child[0] = Shape579;

Transform577.children = new MFNode();

Transform577.children[0] = Transform578;

HAnimSegment576.children = new MFNode();

HAnimSegment576.children[0] = Transform577;

let Shape580 = browser.currentScene.createNode("Shape");
let LineSet581 = browser.currentScene.createNode("LineSet");
LineSet581.vertexCount = new MFInt32(new int[2]);
let ColorRGBA582 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA582.USE = "HAnimSegmentLineColorRGBA";
LineSet581.color = ColorRGBA582;

let Coordinate583 = browser.currentScene.createNode("Coordinate");
Coordinate583.point = new MFVec3f(new float[0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]);
LineSet581.coord = Coordinate583;

Shape580.geometry = LineSet581;

HAnimSegment576.children[1] = Shape580;

HAnimJoint575.children = new MFNode();

HAnimJoint575.children[0] = HAnimSegment576;

let HAnimJoint584 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint584.DEF = "hanim_l_metacarpophalangeal_3";
HAnimJoint584.name = "l_metacarpophalangeal_3";
HAnimJoint584.center = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let HAnimSegment585 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment585.DEF = "hanim_l_carpal_proximal_phalanx_3";
HAnimSegment585.name = "l_carpal_proximal_phalanx_3";
let Transform586 = browser.currentScene.createNode("Transform");
Transform586.translation = new SFVec3f(new float[0.1987,0.7818,-0.053]);
let Transform587 = browser.currentScene.createNode("Transform");
let Shape588 = browser.currentScene.createNode("Shape");
Shape588.USE = "HAnimJointShape";
Transform587.child = new undefined();

Transform587.child[0] = Shape588;

Transform586.children = new MFNode();

Transform586.children[0] = Transform587;

HAnimSegment585.children = new MFNode();

HAnimSegment585.children[0] = Transform586;

let Shape589 = browser.currentScene.createNode("Shape");
let LineSet590 = browser.currentScene.createNode("LineSet");
LineSet590.vertexCount = new MFInt32(new int[2]);
let ColorRGBA591 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA591.USE = "HAnimSegmentLineColorRGBA";
LineSet590.color = ColorRGBA591;

let Coordinate592 = browser.currentScene.createNode("Coordinate");
Coordinate592.point = new MFVec3f(new float[0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]);
LineSet590.coord = Coordinate592;

Shape589.geometry = LineSet590;

HAnimSegment585.children[1] = Shape589;

HAnimJoint584.children = new MFNode();

HAnimJoint584.children[0] = HAnimSegment585;

let HAnimJoint593 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint593.DEF = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimJoint593.name = "l_carpal_proximal_interphalangeal_3";
HAnimJoint593.center = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let HAnimSegment594 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment594.DEF = "hanim_l_carpal_middle_phalanx_2";
HAnimSegment594.name = "l_carpal_middle_phalanx_3";
let Transform595 = browser.currentScene.createNode("Transform");
Transform595.translation = new SFVec3f(new float[0.2013,0.7273,-0.0503]);
let Transform596 = browser.currentScene.createNode("Transform");
let Shape597 = browser.currentScene.createNode("Shape");
Shape597.USE = "HAnimJointShape";
Transform596.child = new undefined();

Transform596.child[0] = Shape597;

Transform595.children = new MFNode();

Transform595.children[0] = Transform596;

HAnimSegment594.children = new MFNode();

HAnimSegment594.children[0] = Transform595;

let Shape598 = browser.currentScene.createNode("Shape");
let LineSet599 = browser.currentScene.createNode("LineSet");
LineSet599.vertexCount = new MFInt32(new int[2]);
let ColorRGBA600 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA600.USE = "HAnimSegmentLineColorRGBA";
LineSet599.color = ColorRGBA600;

let Coordinate601 = browser.currentScene.createNode("Coordinate");
Coordinate601.point = new MFVec3f(new float[0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]);
LineSet599.coord = Coordinate601;

Shape598.geometry = LineSet599;

HAnimSegment594.children[1] = Shape598;

let HAnimSite602 = browser.currentScene.createNode("HAnimSite");
HAnimSite602.DEF = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimSite602.name = "l_carpal_distal_phalanx_3_tip";
let TouchSensor603 = browser.currentScene.createNode("TouchSensor");
TouchSensor603.description = "HAnimSite l_carpal_distal_phalanx_3_tip";
HAnimSite602.children = new MFNode();

HAnimSite602.children[0] = TouchSensor603;

let Shape604 = browser.currentScene.createNode("Shape");
Shape604.USE = "HAnimSiteShape";
HAnimSite602.children[1] = Shape604;

HAnimSegment594.children[2] = HAnimSite602;

HAnimJoint593.children = new MFNode();

HAnimJoint593.children[0] = HAnimSegment594;

let HAnimJoint605 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint605.DEF = "hanim_l_carpal_distal_interphalangeal_2";
HAnimJoint605.name = "l_carpal_distal_interphalangeal_3";
HAnimJoint605.center = new SFVec3f(new float[0.2026,0.7011,-0.0494]);
HAnimJoint593.children[1] = HAnimJoint605;

HAnimJoint584.children[1] = HAnimJoint593;

HAnimJoint575.children[1] = HAnimJoint584;

HAnimJoint485.children[3] = HAnimJoint575;

let HAnimJoint606 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint606.DEF = "hanim_l_carpometacarpal_4";
HAnimJoint606.name = "l_carpometacarpal_4";
HAnimJoint606.center = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let HAnimSegment607 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment607.DEF = "hanim_l_metacarpal_4";
HAnimSegment607.name = "l_metacarpal_4";
let Transform608 = browser.currentScene.createNode("Transform");
Transform608.translation = new SFVec3f(new float[0.1956,0.8019,-0.0794]);
let Transform609 = browser.currentScene.createNode("Transform");
let Shape610 = browser.currentScene.createNode("Shape");
Shape610.USE = "HAnimJointShape";
Transform609.child = new undefined();

Transform609.child[0] = Shape610;

Transform608.children = new MFNode();

Transform608.children[0] = Transform609;

HAnimSegment607.children = new MFNode();

HAnimSegment607.children[0] = Transform608;

let Shape611 = browser.currentScene.createNode("Shape");
let LineSet612 = browser.currentScene.createNode("LineSet");
LineSet612.vertexCount = new MFInt32(new int[2]);
let ColorRGBA613 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA613.USE = "HAnimSegmentLineColorRGBA";
LineSet612.color = ColorRGBA613;

let Coordinate614 = browser.currentScene.createNode("Coordinate");
Coordinate614.point = new MFVec3f(new float[0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]);
LineSet612.coord = Coordinate614;

Shape611.geometry = LineSet612;

HAnimSegment607.children[1] = Shape611;

HAnimJoint606.children = new MFNode();

HAnimJoint606.children[0] = HAnimSegment607;

let HAnimJoint615 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint615.DEF = "hanim_l_metacarpophalangeal_4";
HAnimJoint615.name = "l_metacarpophalangeal_4";
HAnimJoint615.center = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let HAnimSegment616 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment616.DEF = "hanim_l_carpal_proximal_phalanx_4";
HAnimSegment616.name = "l_carpal_proximal_phalanx_4";
let Transform617 = browser.currentScene.createNode("Transform");
Transform617.translation = new SFVec3f(new float[0.1956,0.7815,-0.0794]);
let Transform618 = browser.currentScene.createNode("Transform");
let Shape619 = browser.currentScene.createNode("Shape");
Shape619.USE = "HAnimJointShape";
Transform618.child = new undefined();

Transform618.child[0] = Shape619;

Transform617.children = new MFNode();

Transform617.children[0] = Transform618;

HAnimSegment616.children = new MFNode();

HAnimSegment616.children[0] = Transform617;

let Shape620 = browser.currentScene.createNode("Shape");
let LineSet621 = browser.currentScene.createNode("LineSet");
LineSet621.vertexCount = new MFInt32(new int[2]);
let ColorRGBA622 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA622.USE = "HAnimSegmentLineColorRGBA";
LineSet621.color = ColorRGBA622;

let Coordinate623 = browser.currentScene.createNode("Coordinate");
Coordinate623.point = new MFVec3f(new float[0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]);
LineSet621.coord = Coordinate623;

Shape620.geometry = LineSet621;

HAnimSegment616.children[1] = Shape620;

HAnimJoint615.children = new MFNode();

HAnimJoint615.children[0] = HAnimSegment616;

let HAnimJoint624 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint624.DEF = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimJoint624.name = "l_carpal_proximal_interphalangeal_4";
HAnimJoint624.center = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let HAnimSegment625 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment625.DEF = "hanim_l_carpal_middle_phalanx_3";
HAnimSegment625.name = "l_carpal_middle_phalanx_4";
let Transform626 = browser.currentScene.createNode("Transform");
Transform626.translation = new SFVec3f(new float[0.1973,0.7287,-0.0777]);
let Transform627 = browser.currentScene.createNode("Transform");
let Shape628 = browser.currentScene.createNode("Shape");
Shape628.USE = "HAnimJointShape";
Transform627.child = new undefined();

Transform627.child[0] = Shape628;

Transform626.children = new MFNode();

Transform626.children[0] = Transform627;

HAnimSegment625.children = new MFNode();

HAnimSegment625.children[0] = Transform626;

let Shape629 = browser.currentScene.createNode("Shape");
let LineSet630 = browser.currentScene.createNode("LineSet");
LineSet630.vertexCount = new MFInt32(new int[2]);
let ColorRGBA631 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA631.USE = "HAnimSegmentLineColorRGBA";
LineSet630.color = ColorRGBA631;

let Coordinate632 = browser.currentScene.createNode("Coordinate");
Coordinate632.point = new MFVec3f(new float[0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]);
LineSet630.coord = Coordinate632;

Shape629.geometry = LineSet630;

HAnimSegment625.children[1] = Shape629;

let HAnimSite633 = browser.currentScene.createNode("HAnimSite");
HAnimSite633.DEF = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimSite633.name = "l_carpal_distal_phalanx_4_tip";
let TouchSensor634 = browser.currentScene.createNode("TouchSensor");
TouchSensor634.description = "HAnimSite l_carpal_distal_phalanx_4_tip";
HAnimSite633.children = new MFNode();

HAnimSite633.children[0] = TouchSensor634;

let Shape635 = browser.currentScene.createNode("Shape");
Shape635.USE = "HAnimSiteShape";
HAnimSite633.children[1] = Shape635;

HAnimSegment625.children[2] = HAnimSite633;

HAnimJoint624.children = new MFNode();

HAnimJoint624.children[0] = HAnimSegment625;

let HAnimJoint636 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint636.DEF = "hanim_l_carpal_distal_interphalangeal_3";
HAnimJoint636.name = "l_carpal_distal_interphalangeal_4";
HAnimJoint636.center = new SFVec3f(new float[0.1983,0.7045,-0.0767]);
HAnimJoint624.children[1] = HAnimJoint636;

HAnimJoint615.children[1] = HAnimJoint624;

HAnimJoint606.children[1] = HAnimJoint615;

HAnimJoint485.children[4] = HAnimJoint606;

let HAnimJoint637 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint637.DEF = "hanim_l_carpometacarpal_5";
HAnimJoint637.name = "l_carpometacarpal_5";
HAnimJoint637.center = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let HAnimSegment638 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment638.DEF = "hanim_l_metacarpal_5";
HAnimSegment638.name = "l_metacarpal_5";
let Transform639 = browser.currentScene.createNode("Transform");
Transform639.translation = new SFVec3f(new float[0.1925,0.8066,-0.1036]);
let Transform640 = browser.currentScene.createNode("Transform");
let Shape641 = browser.currentScene.createNode("Shape");
Shape641.USE = "HAnimJointShape";
Transform640.child = new undefined();

Transform640.child[0] = Shape641;

Transform639.children = new MFNode();

Transform639.children[0] = Transform640;

HAnimSegment638.children = new MFNode();

HAnimSegment638.children[0] = Transform639;

let Shape642 = browser.currentScene.createNode("Shape");
let LineSet643 = browser.currentScene.createNode("LineSet");
LineSet643.vertexCount = new MFInt32(new int[2]);
let ColorRGBA644 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA644.USE = "HAnimSegmentLineColorRGBA";
LineSet643.color = ColorRGBA644;

let Coordinate645 = browser.currentScene.createNode("Coordinate");
Coordinate645.point = new MFVec3f(new float[0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]);
LineSet643.coord = Coordinate645;

Shape642.geometry = LineSet643;

HAnimSegment638.children[1] = Shape642;

HAnimJoint637.children = new MFNode();

HAnimJoint637.children[0] = HAnimSegment638;

let HAnimJoint646 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint646.DEF = "hanim_l_metacarpophalangeal_5";
HAnimJoint646.name = "l_metacarpophalangeal_5";
HAnimJoint646.center = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let HAnimSegment647 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment647.DEF = "hanim_l_carpal_proximal_phalanx_5";
HAnimSegment647.name = "l_carpal_proximal_phalanx_5";
let Transform648 = browser.currentScene.createNode("Transform");
Transform648.translation = new SFVec3f(new float[0.1925,0.7866,-0.1036]);
let Transform649 = browser.currentScene.createNode("Transform");
let Shape650 = browser.currentScene.createNode("Shape");
Shape650.USE = "HAnimJointShape";
Transform649.child = new undefined();

Transform649.child[0] = Shape650;

Transform648.children = new MFNode();

Transform648.children[0] = Transform649;

HAnimSegment647.children = new MFNode();

HAnimSegment647.children[0] = Transform648;

let Shape651 = browser.currentScene.createNode("Shape");
let LineSet652 = browser.currentScene.createNode("LineSet");
LineSet652.vertexCount = new MFInt32(new int[2]);
let ColorRGBA653 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA653.USE = "HAnimSegmentLineColorRGBA";
LineSet652.color = ColorRGBA653;

let Coordinate654 = browser.currentScene.createNode("Coordinate");
Coordinate654.point = new MFVec3f(new float[0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]);
LineSet652.coord = Coordinate654;

Shape651.geometry = LineSet652;

HAnimSegment647.children[1] = Shape651;

HAnimJoint646.children = new MFNode();

HAnimJoint646.children[0] = HAnimSegment647;

let HAnimJoint655 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint655.DEF = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimJoint655.name = "l_carpal_proximal_interphalangeal_5";
HAnimJoint655.center = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let HAnimSegment656 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment656.DEF = "hanim_l_carpal_middle_phalanx_4";
HAnimSegment656.name = "l_carpal_middle_phalanx_5";
let Transform657 = browser.currentScene.createNode("Transform");
Transform657.translation = new SFVec3f(new float[0.1938,0.7452,-0.1024]);
let Transform658 = browser.currentScene.createNode("Transform");
let Shape659 = browser.currentScene.createNode("Shape");
Shape659.USE = "HAnimJointShape";
Transform658.child = new undefined();

Transform658.child[0] = Shape659;

Transform657.children = new MFNode();

Transform657.children[0] = Transform658;

HAnimSegment656.children = new MFNode();

HAnimSegment656.children[0] = Transform657;

let Shape660 = browser.currentScene.createNode("Shape");
let LineSet661 = browser.currentScene.createNode("LineSet");
LineSet661.vertexCount = new MFInt32(new int[2]);
let ColorRGBA662 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA662.USE = "HAnimSegmentLineColorRGBA";
LineSet661.color = ColorRGBA662;

let Coordinate663 = browser.currentScene.createNode("Coordinate");
Coordinate663.point = new MFVec3f(new float[0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]);
LineSet661.coord = Coordinate663;

Shape660.geometry = LineSet661;

HAnimSegment656.children[1] = Shape660;

let HAnimSite664 = browser.currentScene.createNode("HAnimSite");
HAnimSite664.DEF = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimSite664.name = "l_carpal_distal_phalanx_5_tip";
let TouchSensor665 = browser.currentScene.createNode("TouchSensor");
TouchSensor665.description = "HAnimSite l_carpal_distal_phalanx_5_tip";
HAnimSite664.children = new MFNode();

HAnimSite664.children[0] = TouchSensor665;

let Shape666 = browser.currentScene.createNode("Shape");
Shape666.USE = "HAnimSiteShape";
HAnimSite664.children[1] = Shape666;

HAnimSegment656.children[2] = HAnimSite664;

HAnimJoint655.children = new MFNode();

HAnimJoint655.children[0] = HAnimSegment656;

let HAnimJoint667 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimJoint668 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint668.DEF = "hanim_r_sternoclavicular";
HAnimJoint668.name = "r_sternoclavicular";
HAnimJoint668.center = new SFVec3f(new float[-0.0694,1.46,-0.033]);
let HAnimSegment669 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment669.DEF = "hanim_r_clavicle";
HAnimSegment669.name = "r_clavicle";
let Transform670 = browser.currentScene.createNode("Transform");
Transform670.translation = new SFVec3f(new float[-0.0694,1.46,-0.033]);
let Transform671 = browser.currentScene.createNode("Transform");
let Shape672 = browser.currentScene.createNode("Shape");
Shape672.USE = "HAnimJointShape";
Transform671.child = new undefined();

Transform671.child[0] = Shape672;

Transform670.children = new MFNode();

Transform670.children[0] = Transform671;

HAnimSegment669.children = new MFNode();

HAnimSegment669.children[0] = Transform670;

let Shape673 = browser.currentScene.createNode("Shape");
let LineSet674 = browser.currentScene.createNode("LineSet");
LineSet674.vertexCount = new MFInt32(new int[2]);
let ColorRGBA675 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA675.USE = "HAnimSegmentLineColorRGBA";
LineSet674.color = ColorRGBA675;

let Coordinate676 = browser.currentScene.createNode("Coordinate");
Coordinate676.point = new MFVec3f(new float[-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401]);
LineSet674.coord = Coordinate676;

Shape673.geometry = LineSet674;

HAnimSegment669.children[1] = Shape673;

HAnimJoint668.children = new MFNode();

HAnimJoint668.children[0] = HAnimSegment669;

let HAnimJoint677 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint677.DEF = "hanim_r_acromioclavicular";
HAnimJoint677.name = "r_acromioclavicular";
HAnimJoint677.center = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
let HAnimSegment678 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment678.DEF = "hanim_r_scapula";
HAnimSegment678.name = "r_scapula";
let Transform679 = browser.currentScene.createNode("Transform");
Transform679.translation = new SFVec3f(new float[-0.0836,1.4281,-0.0401]);
let Transform680 = browser.currentScene.createNode("Transform");
let Shape681 = browser.currentScene.createNode("Shape");
Shape681.USE = "HAnimJointShape";
Transform680.child = new undefined();

Transform680.child[0] = Shape681;

Transform679.children = new MFNode();

Transform679.children[0] = Transform680;

HAnimSegment678.children = new MFNode();

HAnimSegment678.children[0] = Transform679;

let Shape682 = browser.currentScene.createNode("Shape");
let LineSet683 = browser.currentScene.createNode("LineSet");
LineSet683.vertexCount = new MFInt32(new int[2]);
let ColorRGBA684 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA684.USE = "HAnimSegmentLineColorRGBA";
LineSet683.color = ColorRGBA684;

let Coordinate685 = browser.currentScene.createNode("Coordinate");
Coordinate685.point = new MFVec3f(new float[-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325]);
LineSet683.coord = Coordinate685;

Shape682.geometry = LineSet683;

HAnimSegment678.children[1] = Shape682;

let HAnimSite686 = browser.currentScene.createNode("HAnimSite");
HAnimSite686.DEF = "hanim_r_bideltoid_pt";
HAnimSite686.name = "r_bideltoid_pt";
let TouchSensor687 = browser.currentScene.createNode("TouchSensor");
TouchSensor687.description = "HAnimSite r_bideltoid_pt";
HAnimSite686.children = new MFNode();

HAnimSite686.children[0] = TouchSensor687;

let Shape688 = browser.currentScene.createNode("Shape");
Shape688.USE = "HAnimSiteShape";
HAnimSite686.children[1] = Shape688;

HAnimSegment678.children[2] = HAnimSite686;

let HAnimSite689 = browser.currentScene.createNode("HAnimSite");
HAnimSite689.DEF = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimSite689.name = "r_humeral_lateral_epicondyles_pt";
HAnimSite689.translation = new SFVec3f(new float[-0.2224,1.1517,-0.1033]);
let TouchSensor690 = browser.currentScene.createNode("TouchSensor");
TouchSensor690.description = "HAnimSite r_humeral_lateral_epicondyles_pt";
HAnimSite689.children = new MFNode();

HAnimSite689.children[0] = TouchSensor690;

let Shape691 = browser.currentScene.createNode("Shape");
Shape691.USE = "HAnimSiteShape";
HAnimSite689.children[1] = Shape691;

HAnimSegment678.children[3] = HAnimSite689;

HAnimJoint677.children = new MFNode();

HAnimJoint677.children[0] = HAnimSegment678;

let HAnimJoint692 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint692.DEF = "hanim_r_shoulder";
HAnimJoint692.name = "r_shoulder";
HAnimJoint692.center = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let HAnimSegment693 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment693.DEF = "hanim_r_upperarm";
HAnimSegment693.name = "r_upperarm";
let Transform694 = browser.currentScene.createNode("Transform");
Transform694.translation = new SFVec3f(new float[-0.1907,1.4407,-0.0325]);
let Transform695 = browser.currentScene.createNode("Transform");
let Shape696 = browser.currentScene.createNode("Shape");
Shape696.USE = "HAnimJointShape";
Transform695.child = new undefined();

Transform695.child[0] = Shape696;

Transform694.children = new MFNode();

Transform694.children[0] = Transform695;

HAnimSegment693.children = new MFNode();

HAnimSegment693.children[0] = Transform694;

let Shape697 = browser.currentScene.createNode("Shape");
let LineSet698 = browser.currentScene.createNode("LineSet");
LineSet698.vertexCount = new MFInt32(new int[2]);
let ColorRGBA699 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA699.USE = "HAnimSegmentLineColorRGBA";
LineSet698.color = ColorRGBA699;

let Coordinate700 = browser.currentScene.createNode("Coordinate");
Coordinate700.point = new MFVec3f(new float[-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062]);
LineSet698.coord = Coordinate700;

Shape697.geometry = LineSet698;

HAnimSegment693.children[1] = Shape697;

let HAnimSite701 = browser.currentScene.createNode("HAnimSite");
HAnimSite701.DEF = "hanim_r_humeral_medial_epicondyles_pt";
HAnimSite701.name = "r_humeral_medial_epicondyles_pt";
HAnimSite701.translation = new SFVec3f(new float[-0.168,1.1298,-0.1062]);
let TouchSensor702 = browser.currentScene.createNode("TouchSensor");
TouchSensor702.description = "HAnimSite r_humeral_medial_epicondyles_pt";
HAnimSite701.children = new MFNode();

HAnimSite701.children[0] = TouchSensor702;

let Shape703 = browser.currentScene.createNode("Shape");
Shape703.USE = "HAnimSiteShape";
HAnimSite701.children[1] = Shape703;

HAnimSegment693.children[2] = HAnimSite701;

let HAnimSite704 = browser.currentScene.createNode("HAnimSite");
HAnimSite704.DEF = "hanim_r_olecranon_pt";
HAnimSite704.name = "r_olecranon_pt";
HAnimSite704.translation = new SFVec3f(new float[-0.1907,1.1405,-0.1065]);
let TouchSensor705 = browser.currentScene.createNode("TouchSensor");
TouchSensor705.description = "HAnimSite r_olecranon_pt";
HAnimSite704.children = new MFNode();

HAnimSite704.children[0] = TouchSensor705;

let Shape706 = browser.currentScene.createNode("Shape");
Shape706.USE = "HAnimSiteShape";
HAnimSite704.children[1] = Shape706;

HAnimSegment693.children[3] = HAnimSite704;

let HAnimSite707 = browser.currentScene.createNode("HAnimSite");
HAnimSite707.DEF = "hanim_r_radial_styloid_pt";
HAnimSite707.name = "r_radial_styloid_pt";
HAnimSite707.translation = new SFVec3f(new float[-0.1884,0.8676,-0.036]);
let TouchSensor708 = browser.currentScene.createNode("TouchSensor");
TouchSensor708.description = "HAnimSite r_radial_styloid_pt";
HAnimSite707.children = new MFNode();

HAnimSite707.children[0] = TouchSensor708;

let Shape709 = browser.currentScene.createNode("Shape");
Shape709.USE = "HAnimSiteShape";
HAnimSite707.children[1] = Shape709;

HAnimSegment693.children[4] = HAnimSite707;

let HAnimSite710 = browser.currentScene.createNode("HAnimSite");
HAnimSite710.DEF = "hanim_r_radiale_pt";
HAnimSite710.name = "r_radiale_pt";
HAnimSite710.translation = new SFVec3f(new float[-0.213,1.1305,-0.1091]);
let TouchSensor711 = browser.currentScene.createNode("TouchSensor");
TouchSensor711.description = "HAnimSite r_radiale_pt";
HAnimSite710.children = new MFNode();

HAnimSite710.children[0] = TouchSensor711;

let Shape712 = browser.currentScene.createNode("Shape");
Shape712.USE = "HAnimSiteShape";
HAnimSite710.children[1] = Shape712;

HAnimSegment693.children[5] = HAnimSite710;

HAnimJoint692.children = new MFNode();

HAnimJoint692.children[0] = HAnimSegment693;

let HAnimJoint713 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint713.DEF = "hanim_r_elbow";
HAnimJoint713.name = "r_elbow";
HAnimJoint713.center = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let HAnimSegment714 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment714.DEF = "hanim_r_forearm";
HAnimSegment714.name = "r_forearm";
let Transform715 = browser.currentScene.createNode("Transform");
Transform715.translation = new SFVec3f(new float[-0.1949,1.1388,-0.062]);
let Transform716 = browser.currentScene.createNode("Transform");
let Shape717 = browser.currentScene.createNode("Shape");
Shape717.USE = "HAnimJointShape";
Transform716.child = new undefined();

Transform716.child[0] = Shape717;

Transform715.children = new MFNode();

Transform715.children[0] = Transform716;

HAnimSegment714.children = new MFNode();

HAnimSegment714.children[0] = Transform715;

let Shape718 = browser.currentScene.createNode("Shape");
let LineSet719 = browser.currentScene.createNode("LineSet");
LineSet719.vertexCount = new MFInt32(new int[2]);
let ColorRGBA720 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA720.USE = "HAnimSegmentLineColorRGBA";
LineSet719.color = ColorRGBA720;

let Coordinate721 = browser.currentScene.createNode("Coordinate");
Coordinate721.point = new MFVec3f(new float[-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521]);
LineSet719.coord = Coordinate721;

Shape718.geometry = LineSet719;

HAnimSegment714.children[1] = Shape718;

let HAnimSite722 = browser.currentScene.createNode("HAnimSite");
HAnimSite722.DEF = "hanim_r_ulnar_styloid_pt";
HAnimSite722.name = "r_ulnar_styloid_pt";
HAnimSite722.translation = new SFVec3f(new float[-0.2117,0.8562,-0.0584]);
let TouchSensor723 = browser.currentScene.createNode("TouchSensor");
TouchSensor723.description = "HAnimSite r_ulnar_styloid_pt";
HAnimSite722.children = new MFNode();

HAnimSite722.children[0] = TouchSensor723;

let Shape724 = browser.currentScene.createNode("Shape");
Shape724.USE = "HAnimSiteShape";
HAnimSite722.children[1] = Shape724;

HAnimSegment714.children[2] = HAnimSite722;

HAnimJoint713.children = new MFNode();

HAnimJoint713.children[0] = HAnimSegment714;

let HAnimJoint725 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint725.DEF = "hanim_r_radiocarpal";
HAnimJoint725.name = "r_radiocarpal";
HAnimJoint725.center = new SFVec3f(new float[-0.1959,0.8694,-0.0521]);
let HAnimSegment726 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment726.DEF = "hanim_r_carpal";
HAnimSegment726.name = "r_carpal";
let Transform727 = browser.currentScene.createNode("Transform");
Transform727.translation = new SFVec3f(new float[-0.2,0.85,-0.05]);
Transform727.rotation = new SFRotation(new float[0,0,1,-3.14]);
Transform727.scale = new SFVec3f(new float[0.2,0.2,0.2]);
let Transform728 = browser.currentScene.createNode("Transform");
Transform728.rotation = new SFRotation(new float[0,1,0,1.57]);
let Shape729 = browser.currentScene.createNode("Shape");
Shape729.USE = "HAnimJointShape";
Transform728.child = new undefined();

Transform728.child[0] = Shape729;

Transform727.children = new MFNode();

Transform727.children[0] = Transform728;

HAnimSegment726.children = new MFNode();

HAnimSegment726.children[0] = Transform727;

let Shape730 = browser.currentScene.createNode("Shape");
let LineSet731 = browser.currentScene.createNode("LineSet");
LineSet731.vertexCount = new MFInt32(new int[2]);
let ColorRGBA732 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA732.USE = "HAnimSegmentLineColorRGBA";
LineSet731.color = ColorRGBA732;

let Coordinate733 = browser.currentScene.createNode("Coordinate");
Coordinate733.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1899,0.8502,-0.0473]);
LineSet731.coord = Coordinate733;

Shape730.geometry = LineSet731;

HAnimSegment726.children[1] = Shape730;

let Shape734 = browser.currentScene.createNode("Shape");
let LineSet735 = browser.currentScene.createNode("LineSet");
LineSet735.vertexCount = new MFInt32(new int[2]);
let ColorRGBA736 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA736.USE = "HAnimSegmentLineColorRGBA";
LineSet735.color = ColorRGBA736;

let Coordinate737 = browser.currentScene.createNode("Coordinate");
Coordinate737.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1961,0.8055,-0.0218]);
LineSet735.coord = Coordinate737;

Shape734.geometry = LineSet735;

HAnimSegment726.children[2] = Shape734;

let HAnimSite738 = browser.currentScene.createNode("HAnimSite");
HAnimSite738.DEF = "hanim_r_metacarpal_phalanx_2_pt";
HAnimSite738.name = "r_metacarpal_phalanx_2_pt";
HAnimSite738.translation = new SFVec3f(new float[-0.1977,0.8169,-0.0177]);
let TouchSensor739 = browser.currentScene.createNode("TouchSensor");
TouchSensor739.description = "HAnimSite r_metacarpal_phalanx_2_pt";
HAnimSite738.children = new MFNode();

HAnimSite738.children[0] = TouchSensor739;

let Shape740 = browser.currentScene.createNode("Shape");
Shape740.USE = "HAnimSiteShape";
HAnimSite738.children[1] = Shape740;

HAnimSegment726.children[3] = HAnimSite738;

let Shape741 = browser.currentScene.createNode("Shape");
let LineSet742 = browser.currentScene.createNode("LineSet");
LineSet742.vertexCount = new MFInt32(new int[2]);
let ColorRGBA743 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA743.USE = "HAnimSegmentLineColorRGBA";
LineSet742.color = ColorRGBA743;

let Coordinate744 = browser.currentScene.createNode("Coordinate");
Coordinate744.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1972,0.806,-0.0468]);
LineSet742.coord = Coordinate744;

Shape741.geometry = LineSet742;

HAnimSegment726.children[4] = Shape741;

let HAnimSite745 = browser.currentScene.createNode("HAnimSite");
HAnimSite745.DEF = "hanim_r_metacarpal_phalanx_3_pt";
HAnimSite745.name = "r_metacarpal_phalanx_3_pt";
let TouchSensor746 = browser.currentScene.createNode("TouchSensor");
TouchSensor746.description = "HAnimSite r_metacarpal_phalanx_3_pt";
HAnimSite745.children = new MFNode();

HAnimSite745.children[0] = TouchSensor746;

let Shape747 = browser.currentScene.createNode("Shape");
Shape747.USE = "HAnimSiteShape";
HAnimSite745.children[1] = Shape747;

HAnimSegment726.children[5] = HAnimSite745;

let Shape748 = browser.currentScene.createNode("Shape");
let LineSet749 = browser.currentScene.createNode("LineSet");
LineSet749.vertexCount = new MFInt32(new int[2]);
let ColorRGBA750 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA750.USE = "HAnimSegmentLineColorRGBA";
LineSet749.color = ColorRGBA750;

let Coordinate751 = browser.currentScene.createNode("Coordinate");
Coordinate751.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1951,0.8049,-0.0732]);
LineSet749.coord = Coordinate751;

Shape748.geometry = LineSet749;

HAnimSegment726.children[6] = Shape748;

let Shape752 = browser.currentScene.createNode("Shape");
let LineSet753 = browser.currentScene.createNode("LineSet");
LineSet753.vertexCount = new MFInt32(new int[2]);
let ColorRGBA754 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA754.USE = "HAnimSegmentLineColorRGBA";
LineSet753.color = ColorRGBA754;

let Coordinate755 = browser.currentScene.createNode("Coordinate");
Coordinate755.point = new MFVec3f(new float[-0.1959,0.8694,-0.0521,-0.1926,0.8096,-0.0975]);
LineSet753.coord = Coordinate755;

Shape752.geometry = LineSet753;

HAnimSegment726.children[7] = Shape752;

let HAnimSite756 = browser.currentScene.createNode("HAnimSite");
HAnimSite756.DEF = "hanim_r_metacarpal_phalanx_5_pt";
HAnimSite756.name = "r_metacarpal_phalanx_5_pt";
HAnimSite756.translation = new SFVec3f(new float[-0.1929,0.789,-0.1064]);
let TouchSensor757 = browser.currentScene.createNode("TouchSensor");
TouchSensor757.description = "HAnimSite r_metacarpal_phalanx_5_pt";
HAnimSite756.children = new MFNode();

HAnimSite756.children[0] = TouchSensor757;

let Shape758 = browser.currentScene.createNode("Shape");
Shape758.USE = "HAnimSiteShape";
HAnimSite756.children[1] = Shape758;

HAnimSegment726.children[8] = HAnimSite756;

HAnimJoint725.children = new MFNode();

HAnimJoint725.children[0] = HAnimSegment726;

let HAnimJoint759 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint759.DEF = "hanim_r_carpometacarpal_1";
HAnimJoint759.name = "r_carpometacarpal_1";
HAnimJoint759.center = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
let HAnimSegment760 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment760.DEF = "hanim_r_metacarpal_1";
HAnimSegment760.name = "r_metacarpal_1";
let Transform761 = browser.currentScene.createNode("Transform");
Transform761.translation = new SFVec3f(new float[-0.1899,0.8502,-0.0473]);
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
Coordinate767.point = new MFVec3f(new float[-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306]);
LineSet765.coord = Coordinate767;

Shape764.geometry = LineSet765;

HAnimSegment760.children[1] = Shape764;

HAnimJoint759.children = new MFNode();

HAnimJoint759.children[0] = HAnimSegment760;

let HAnimJoint768 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint768.DEF = "hanim_r_metacarpophalangeal_1";
HAnimJoint768.name = "r_metacarpophalangeal_1";
HAnimJoint768.center = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
let HAnimSegment769 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment769.DEF = "hanim_r_carpal_proximal_phalanx_1";
HAnimSegment769.name = "r_carpal_proximal_phalanx_1";
let Transform770 = browser.currentScene.createNode("Transform");
Transform770.translation = new SFVec3f(new float[-0.1874,0.8256,0.0306]);
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
Coordinate776.point = new MFVec3f(new float[-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506]);
LineSet774.coord = Coordinate776;

Shape773.geometry = LineSet774;

HAnimSegment769.children[1] = Shape773;

let HAnimSite777 = browser.currentScene.createNode("HAnimSite");
HAnimSite777.DEF = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimSite777.name = "r_carpal_distal_phalanx_1_tip";
let TouchSensor778 = browser.currentScene.createNode("TouchSensor");
TouchSensor778.description = "HAnimSite r_carpal_distal_phalanx_1_tip";
HAnimSite777.children = new MFNode();

HAnimSite777.children[0] = TouchSensor778;

let Shape779 = browser.currentScene.createNode("Shape");
Shape779.USE = "HAnimSiteShape";
HAnimSite777.children[1] = Shape779;

HAnimSegment769.children[2] = HAnimSite777;

HAnimJoint768.children = new MFNode();

HAnimJoint768.children[0] = HAnimSegment769;

let HAnimJoint780 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint780.DEF = "hanim_r_carpal_interphalangeal_1";
HAnimJoint780.name = "r_carpal_interphalangeal_1";
HAnimJoint780.center = new SFVec3f(new float[-0.1864,0.819,0.0506]);
HAnimJoint768.children[1] = HAnimJoint780;

HAnimJoint759.children[1] = HAnimJoint768;

HAnimJoint725.children[1] = HAnimJoint759;

let HAnimJoint781 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint781.DEF = "hanim_r_carpometacarpal_2";
HAnimJoint781.name = "r_carpometacarpal_2";
HAnimJoint781.center = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
let HAnimSegment782 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment782.DEF = "hanim_r_metacarpal_2";
HAnimSegment782.name = "r_metacarpal_2";
let Transform783 = browser.currentScene.createNode("Transform");
Transform783.translation = new SFVec3f(new float[-0.1961,0.8055,-0.0218]);
let Transform784 = browser.currentScene.createNode("Transform");
let Shape785 = browser.currentScene.createNode("Shape");
Shape785.USE = "HAnimJointShape";
Transform784.child = new undefined();

Transform784.child[0] = Shape785;

Transform783.children = new MFNode();

Transform783.children[0] = Transform784;

HAnimSegment782.children = new MFNode();

HAnimSegment782.children[0] = Transform783;

let Shape786 = browser.currentScene.createNode("Shape");
let LineSet787 = browser.currentScene.createNode("LineSet");
LineSet787.vertexCount = new MFInt32(new int[2]);
let ColorRGBA788 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA788.USE = "HAnimSegmentLineColorRGBA";
LineSet787.color = ColorRGBA788;

let Coordinate789 = browser.currentScene.createNode("Coordinate");
Coordinate789.point = new MFVec3f(new float[-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218]);
LineSet787.coord = Coordinate789;

Shape786.geometry = LineSet787;

HAnimSegment782.children[1] = Shape786;

HAnimJoint781.children = new MFNode();

HAnimJoint781.children[0] = HAnimSegment782;

let HAnimJoint790 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint790.DEF = "hanim_r_metacarpophalangeal_2";
HAnimJoint790.name = "r_metacarpophalangeal_2";
HAnimJoint790.center = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
let HAnimSegment791 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment791.DEF = "hanim_r_carpal_proximal_phalanx_2";
HAnimSegment791.name = "r_carpal_proximal_phalanx_2";
let Transform792 = browser.currentScene.createNode("Transform");
Transform792.translation = new SFVec3f(new float[-0.1961,0.7846,-0.0218]);
let Transform793 = browser.currentScene.createNode("Transform");
let Shape794 = browser.currentScene.createNode("Shape");
Shape794.USE = "HAnimJointShape";
Transform793.child = new undefined();

Transform793.child[0] = Shape794;

Transform792.children = new MFNode();

Transform792.children[0] = Transform793;

HAnimSegment791.children = new MFNode();

HAnimSegment791.children[0] = Transform792;

let Shape795 = browser.currentScene.createNode("Shape");
let LineSet796 = browser.currentScene.createNode("LineSet");
LineSet796.vertexCount = new MFInt32(new int[2]);
let ColorRGBA797 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA797.USE = "HAnimSegmentLineColorRGBA";
LineSet796.color = ColorRGBA797;

let Coordinate798 = browser.currentScene.createNode("Coordinate");
Coordinate798.point = new MFVec3f(new float[-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185]);
LineSet796.coord = Coordinate798;

Shape795.geometry = LineSet796;

HAnimSegment791.children[1] = Shape795;

HAnimJoint790.children = new MFNode();

HAnimJoint790.children[0] = HAnimSegment791;

let HAnimJoint799 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint799.DEF = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimJoint799.name = "r_carpal_proximal_interphalangeal_2";
HAnimJoint799.center = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
let HAnimSegment800 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment800.DEF = "hanim_r_carpal_middle_phalanx_1";
HAnimSegment800.name = "r_carpal_middle_phalanx_2";
let Transform801 = browser.currentScene.createNode("Transform");
Transform801.translation = new SFVec3f(new float[-0.1954,0.7393,-0.0185]);
let Transform802 = browser.currentScene.createNode("Transform");
let Shape803 = browser.currentScene.createNode("Shape");
Shape803.USE = "HAnimJointShape";
Transform802.child = new undefined();

Transform802.child[0] = Shape803;

Transform801.children = new MFNode();

Transform801.children[0] = Transform802;

HAnimSegment800.children = new MFNode();

HAnimSegment800.children[0] = Transform801;

let Shape804 = browser.currentScene.createNode("Shape");
let LineSet805 = browser.currentScene.createNode("LineSet");
LineSet805.vertexCount = new MFInt32(new int[2]);
let ColorRGBA806 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA806.USE = "HAnimSegmentLineColorRGBA";
LineSet805.color = ColorRGBA806;

let Coordinate807 = browser.currentScene.createNode("Coordinate");
Coordinate807.point = new MFVec3f(new float[-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173]);
LineSet805.coord = Coordinate807;

Shape804.geometry = LineSet805;

HAnimSegment800.children[1] = Shape804;

let HAnimSite808 = browser.currentScene.createNode("HAnimSite");
HAnimSite808.DEF = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimSite808.name = "r_carpal_distal_phalanx_2_tip";
let TouchSensor809 = browser.currentScene.createNode("TouchSensor");
TouchSensor809.description = "HAnimSite r_carpal_distal_phalanx_2_tip";
HAnimSite808.children = new MFNode();

HAnimSite808.children[0] = TouchSensor809;

let Shape810 = browser.currentScene.createNode("Shape");
Shape810.USE = "HAnimSiteShape";
HAnimSite808.children[1] = Shape810;

HAnimSegment800.children[2] = HAnimSite808;

let HAnimSite811 = browser.currentScene.createNode("HAnimSite");
HAnimSite811.DEF = "hanim_r_dactylion_pt";
HAnimSite811.name = "r_dactylion_pt";
HAnimSite811.translation = new SFVec3f(new float[-0.1941,0.6772,-0.0423]);
let TouchSensor812 = browser.currentScene.createNode("TouchSensor");
TouchSensor812.description = "HAnimSite r_dactylion_pt";
HAnimSite811.children = new MFNode();

HAnimSite811.children[0] = TouchSensor812;

let Shape813 = browser.currentScene.createNode("Shape");
Shape813.USE = "HAnimSiteShape";
HAnimSite811.children[1] = Shape813;

HAnimSegment800.children[3] = HAnimSite811;

HAnimJoint799.children = new MFNode();

HAnimJoint799.children[0] = HAnimSegment800;

let HAnimJoint814 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint814.DEF = "hanim_r_carpal_distal_interphalangeal_1";
HAnimJoint814.name = "r_carpal_distal_interphalangeal_2";
HAnimJoint814.center = new SFVec3f(new float[-0.1945,0.7169,-0.0173]);
HAnimJoint799.children[1] = HAnimJoint814;

HAnimJoint790.children[1] = HAnimJoint799;

HAnimJoint781.children[1] = HAnimJoint790;

HAnimJoint725.children[2] = HAnimJoint781;

let HAnimJoint815 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint815.DEF = "hanim_r_carpometacarpal_3";
HAnimJoint815.name = "r_carpometacarpal_3";
HAnimJoint815.center = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
let HAnimSegment816 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment816.DEF = "hanim_r_metacarpal_3";
HAnimSegment816.name = "r_metacarpal_3";
let Transform817 = browser.currentScene.createNode("Transform");
Transform817.translation = new SFVec3f(new float[-0.1972,0.806,-0.0468]);
let Transform818 = browser.currentScene.createNode("Transform");
let Shape819 = browser.currentScene.createNode("Shape");
Shape819.USE = "HAnimJointShape";
Transform818.child = new undefined();

Transform818.child[0] = Shape819;

Transform817.children = new MFNode();

Transform817.children[0] = Transform818;

HAnimSegment816.children = new MFNode();

HAnimSegment816.children[0] = Transform817;

let Shape820 = browser.currentScene.createNode("Shape");
let LineSet821 = browser.currentScene.createNode("LineSet");
LineSet821.vertexCount = new MFInt32(new int[2]);
let ColorRGBA822 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA822.USE = "HAnimSegmentLineColorRGBA";
LineSet821.color = ColorRGBA822;

let Coordinate823 = browser.currentScene.createNode("Coordinate");
Coordinate823.point = new MFVec3f(new float[-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468]);
LineSet821.coord = Coordinate823;

Shape820.geometry = LineSet821;

HAnimSegment816.children[1] = Shape820;

HAnimJoint815.children = new MFNode();

HAnimJoint815.children[0] = HAnimSegment816;

let HAnimJoint824 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint824.DEF = "hanim_r_metacarpophalangeal_3";
HAnimJoint824.name = "r_metacarpophalangeal_3";
HAnimJoint824.center = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
let HAnimSegment825 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment825.DEF = "hanim_r_carpal_proximal_phalanx_3";
HAnimSegment825.name = "r_carpal_proximal_phalanx_3";
let Transform826 = browser.currentScene.createNode("Transform");
Transform826.translation = new SFVec3f(new float[-0.1972,0.7849,-0.0468]);
let Transform827 = browser.currentScene.createNode("Transform");
let Shape828 = browser.currentScene.createNode("Shape");
Shape828.USE = "HAnimJointShape";
Transform827.child = new undefined();

Transform827.child[0] = Shape828;

Transform826.children = new MFNode();

Transform826.children[0] = Transform827;

HAnimSegment825.children = new MFNode();

HAnimSegment825.children[0] = Transform826;

let Shape829 = browser.currentScene.createNode("Shape");
let LineSet830 = browser.currentScene.createNode("LineSet");
LineSet830.vertexCount = new MFInt32(new int[2]);
let ColorRGBA831 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA831.USE = "HAnimSegmentLineColorRGBA";
LineSet830.color = ColorRGBA831;

let Coordinate832 = browser.currentScene.createNode("Coordinate");
Coordinate832.point = new MFVec3f(new float[-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441]);
LineSet830.coord = Coordinate832;

Shape829.geometry = LineSet830;

HAnimSegment825.children[1] = Shape829;

HAnimJoint824.children = new MFNode();

HAnimJoint824.children[0] = HAnimSegment825;

let HAnimJoint833 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint833.DEF = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimJoint833.name = "r_carpal_proximal_interphalangeal_3";
HAnimJoint833.center = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
let HAnimSegment834 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment834.DEF = "hanim_r_carpal_middle_phalanx_2";
HAnimSegment834.name = "r_carpal_middle_phalanx_3";
let Transform835 = browser.currentScene.createNode("Transform");
Transform835.translation = new SFVec3f(new float[-0.195,0.7304,-0.0441]);
let Transform836 = browser.currentScene.createNode("Transform");
let Shape837 = browser.currentScene.createNode("Shape");
Shape837.USE = "HAnimJointShape";
Transform836.child = new undefined();

Transform836.child[0] = Shape837;

Transform835.children = new MFNode();

Transform835.children[0] = Transform836;

HAnimSegment834.children = new MFNode();

HAnimSegment834.children[0] = Transform835;

let Shape838 = browser.currentScene.createNode("Shape");
let LineSet839 = browser.currentScene.createNode("LineSet");
LineSet839.vertexCount = new MFInt32(new int[2]);
let ColorRGBA840 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA840.USE = "HAnimSegmentLineColorRGBA";
LineSet839.color = ColorRGBA840;

let Coordinate841 = browser.currentScene.createNode("Coordinate");
Coordinate841.point = new MFVec3f(new float[-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432]);
LineSet839.coord = Coordinate841;

Shape838.geometry = LineSet839;

HAnimSegment834.children[1] = Shape838;

let HAnimSite842 = browser.currentScene.createNode("HAnimSite");
HAnimSite842.DEF = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimSite842.name = "r_carpal_distal_phalanx_3_tip";
let TouchSensor843 = browser.currentScene.createNode("TouchSensor");
TouchSensor843.description = "HAnimSite r_carpal_distal_phalanx_3_tip";
HAnimSite842.children = new MFNode();

HAnimSite842.children[0] = TouchSensor843;

let Shape844 = browser.currentScene.createNode("Shape");
Shape844.USE = "HAnimSiteShape";
HAnimSite842.children[1] = Shape844;

HAnimSegment834.children[2] = HAnimSite842;

HAnimJoint833.children = new MFNode();

HAnimJoint833.children[0] = HAnimSegment834;

let HAnimJoint845 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint845.DEF = "hanim_r_carpal_distal_interphalangeal_2";
HAnimJoint845.name = "r_carpal_distal_interphalangeal_3";
HAnimJoint845.center = new SFVec3f(new float[-0.1939,0.7042,-0.0432]);
HAnimJoint833.children[1] = HAnimJoint845;

HAnimJoint824.children[1] = HAnimJoint833;

HAnimJoint815.children[1] = HAnimJoint824;

HAnimJoint725.children[3] = HAnimJoint815;

let HAnimJoint846 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint846.DEF = "hanim_r_carpometacarpal_4";
HAnimJoint846.name = "r_carpometacarpal_4";
HAnimJoint846.center = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
let HAnimSegment847 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment847.DEF = "hanim_r_metacarpal_4";
HAnimSegment847.name = "r_metacarpal_4";
let Transform848 = browser.currentScene.createNode("Transform");
Transform848.translation = new SFVec3f(new float[-0.1951,0.8049,-0.0732]);
let Transform849 = browser.currentScene.createNode("Transform");
let Shape850 = browser.currentScene.createNode("Shape");
Shape850.USE = "HAnimJointShape";
Transform849.child = new undefined();

Transform849.child[0] = Shape850;

Transform848.children = new MFNode();

Transform848.children[0] = Transform849;

HAnimSegment847.children = new MFNode();

HAnimSegment847.children[0] = Transform848;

let Shape851 = browser.currentScene.createNode("Shape");
let LineSet852 = browser.currentScene.createNode("LineSet");
LineSet852.vertexCount = new MFInt32(new int[2]);
let ColorRGBA853 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA853.USE = "HAnimSegmentLineColorRGBA";
LineSet852.color = ColorRGBA853;

let Coordinate854 = browser.currentScene.createNode("Coordinate");
Coordinate854.point = new MFVec3f(new float[-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732]);
LineSet852.coord = Coordinate854;

Shape851.geometry = LineSet852;

HAnimSegment847.children[1] = Shape851;

HAnimJoint846.children = new MFNode();

HAnimJoint846.children[0] = HAnimSegment847;

let HAnimJoint855 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint855.DEF = "hanim_r_metacarpophalangeal_4";
HAnimJoint855.name = "r_metacarpophalangeal_4";
HAnimJoint855.center = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
let HAnimSegment856 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment856.DEF = "hanim_r_carpal_proximal_phalanx_4";
HAnimSegment856.name = "r_carpal_proximal_phalanx_4";
let Transform857 = browser.currentScene.createNode("Transform");
Transform857.translation = new SFVec3f(new float[-0.1951,0.7845,-0.0732]);
let Transform858 = browser.currentScene.createNode("Transform");
let Shape859 = browser.currentScene.createNode("Shape");
Shape859.USE = "HAnimJointShape";
Transform858.child = new undefined();

Transform858.child[0] = Shape859;

Transform857.children = new MFNode();

Transform857.children[0] = Transform858;

HAnimSegment856.children = new MFNode();

HAnimSegment856.children[0] = Transform857;

let Shape860 = browser.currentScene.createNode("Shape");
let LineSet861 = browser.currentScene.createNode("LineSet");
LineSet861.vertexCount = new MFInt32(new int[2]);
let ColorRGBA862 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA862.USE = "HAnimSegmentLineColorRGBA";
LineSet861.color = ColorRGBA862;

let Coordinate863 = browser.currentScene.createNode("Coordinate");
Coordinate863.point = new MFVec3f(new float[-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716]);
LineSet861.coord = Coordinate863;

Shape860.geometry = LineSet861;

HAnimSegment856.children[1] = Shape860;

HAnimJoint855.children = new MFNode();

HAnimJoint855.children[0] = HAnimSegment856;

let HAnimJoint864 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint864.DEF = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimJoint864.name = "r_carpal_proximal_interphalangeal_4";
HAnimJoint864.center = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
let HAnimSegment865 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment865.DEF = "hanim_r_carpal_middle_phalanx_3";
HAnimSegment865.name = "r_carpal_middle_phalanx_4";
let Transform866 = browser.currentScene.createNode("Transform");
Transform866.translation = new SFVec3f(new float[-0.192,0.7318,-0.0716]);
let Transform867 = browser.currentScene.createNode("Transform");
let Shape868 = browser.currentScene.createNode("Shape");
Shape868.USE = "HAnimJointShape";
Transform867.child = new undefined();

Transform867.child[0] = Shape868;

Transform866.children = new MFNode();

Transform866.children[0] = Transform867;

HAnimSegment865.children = new MFNode();

HAnimSegment865.children[0] = Transform866;

let Shape869 = browser.currentScene.createNode("Shape");
let LineSet870 = browser.currentScene.createNode("LineSet");
LineSet870.vertexCount = new MFInt32(new int[2]);
let ColorRGBA871 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA871.USE = "HAnimSegmentLineColorRGBA";
LineSet870.color = ColorRGBA871;

let Coordinate872 = browser.currentScene.createNode("Coordinate");
Coordinate872.point = new MFVec3f(new float[-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706]);
LineSet870.coord = Coordinate872;

Shape869.geometry = LineSet870;

HAnimSegment865.children[1] = Shape869;

let HAnimSite873 = browser.currentScene.createNode("HAnimSite");
HAnimSite873.DEF = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimSite873.name = "r_carpal_distal_phalanx_4_tip";
let TouchSensor874 = browser.currentScene.createNode("TouchSensor");
TouchSensor874.description = "HAnimSite r_carpal_distal_phalanx_4_tip";
HAnimSite873.children = new MFNode();

HAnimSite873.children[0] = TouchSensor874;

let Shape875 = browser.currentScene.createNode("Shape");
Shape875.USE = "HAnimSiteShape";
HAnimSite873.children[1] = Shape875;

HAnimSegment865.children[2] = HAnimSite873;

HAnimJoint864.children = new MFNode();

HAnimJoint864.children[0] = HAnimSegment865;

let HAnimJoint876 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint876.DEF = "hanim_r_carpal_distal_interphalangeal_3";
HAnimJoint876.name = "r_carpal_distal_interphalangeal_4";
HAnimJoint876.center = new SFVec3f(new float[-0.1908,0.7077,-0.0706]);
HAnimJoint864.children[1] = HAnimJoint876;

HAnimJoint855.children[1] = HAnimJoint864;

HAnimJoint846.children[1] = HAnimJoint855;

HAnimJoint725.children[4] = HAnimJoint846;

let HAnimJoint877 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint877.DEF = "hanim_r_carpometacarpal_5";
HAnimJoint877.name = "r_carpometacarpal_5";
HAnimJoint877.center = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
let HAnimSegment878 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment878.DEF = "hanim_r_metacarpal_5";
HAnimSegment878.name = "r_metacarpal_5";
let Transform879 = browser.currentScene.createNode("Transform");
Transform879.translation = new SFVec3f(new float[-0.1926,0.8096,-0.0975]);
let Transform880 = browser.currentScene.createNode("Transform");
let Shape881 = browser.currentScene.createNode("Shape");
Shape881.USE = "HAnimJointShape";
Transform880.child = new undefined();

Transform880.child[0] = Shape881;

Transform879.children = new MFNode();

Transform879.children[0] = Transform880;

HAnimSegment878.children = new MFNode();

HAnimSegment878.children[0] = Transform879;

let Shape882 = browser.currentScene.createNode("Shape");
let LineSet883 = browser.currentScene.createNode("LineSet");
LineSet883.vertexCount = new MFInt32(new int[2]);
let ColorRGBA884 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA884.USE = "HAnimSegmentLineColorRGBA";
LineSet883.color = ColorRGBA884;

let Coordinate885 = browser.currentScene.createNode("Coordinate");
Coordinate885.point = new MFVec3f(new float[-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975]);
LineSet883.coord = Coordinate885;

Shape882.geometry = LineSet883;

HAnimSegment878.children[1] = Shape882;

HAnimJoint877.children = new MFNode();

HAnimJoint877.children[0] = HAnimSegment878;

let HAnimJoint886 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint886.DEF = "hanim_r_metacarpophalangeal_5";
HAnimJoint886.name = "r_metacarpophalangeal_5";
HAnimJoint886.center = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
let HAnimSegment887 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment887.DEF = "hanim_r_carpal_proximal_phalanx_5";
HAnimSegment887.name = "r_carpal_proximal_phalanx_5";
let Transform888 = browser.currentScene.createNode("Transform");
Transform888.translation = new SFVec3f(new float[-0.1926,0.7896,-0.0975]);
let Transform889 = browser.currentScene.createNode("Transform");
let Shape890 = browser.currentScene.createNode("Shape");
Shape890.USE = "HAnimJointShape";
Transform889.child = new undefined();

Transform889.child[0] = Shape890;

Transform888.children = new MFNode();

Transform888.children[0] = Transform889;

HAnimSegment887.children = new MFNode();

HAnimSegment887.children[0] = Transform888;

let Shape891 = browser.currentScene.createNode("Shape");
let LineSet892 = browser.currentScene.createNode("LineSet");
LineSet892.vertexCount = new MFInt32(new int[2]);
let ColorRGBA893 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA893.USE = "HAnimSegmentLineColorRGBA";
LineSet892.color = ColorRGBA893;

let Coordinate894 = browser.currentScene.createNode("Coordinate");
Coordinate894.point = new MFVec3f(new float[-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963]);
LineSet892.coord = Coordinate894;

Shape891.geometry = LineSet892;

HAnimSegment887.children[1] = Shape891;

HAnimJoint886.children = new MFNode();

HAnimJoint886.children[0] = HAnimSegment887;

let HAnimJoint895 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint895.DEF = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimJoint895.name = "r_carpal_proximal_interphalangeal_5";
HAnimJoint895.center = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
let HAnimSegment896 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment896.DEF = "hanim_r_carpal_middle_phalanx_4";
HAnimSegment896.name = "r_carpal_middle_phalanx_5";
let Transform897 = browser.currentScene.createNode("Transform");
Transform897.translation = new SFVec3f(new float[-0.1902,0.7483,-0.0963]);
let Transform898 = browser.currentScene.createNode("Transform");
let Shape899 = browser.currentScene.createNode("Shape");
Shape899.USE = "HAnimJointShape";
Transform898.child = new undefined();

Transform898.child[0] = Shape899;

Transform897.children = new MFNode();

Transform897.children[0] = Transform898;

HAnimSegment896.children = new MFNode();

HAnimSegment896.children[0] = Transform897;

let Shape900 = browser.currentScene.createNode("Shape");
let LineSet901 = browser.currentScene.createNode("LineSet");
LineSet901.vertexCount = new MFInt32(new int[2]);
let ColorRGBA902 = browser.currentScene.createNode("ColorRGBA");
ColorRGBA902.USE = "HAnimSegmentLineColorRGBA";
LineSet901.color = ColorRGBA902;

let Coordinate903 = browser.currentScene.createNode("Coordinate");
Coordinate903.point = new MFVec3f(new float[-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096]);
LineSet901.coord = Coordinate903;

Shape900.geometry = LineSet901;

HAnimSegment896.children[1] = Shape900;

let HAnimSite904 = browser.currentScene.createNode("HAnimSite");
HAnimSite904.DEF = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimSite904.name = "r_carpal_distal_phalanx_5_tip";
let TouchSensor905 = browser.currentScene.createNode("TouchSensor");
TouchSensor905.description = "HAnimSite r_carpal_distal_phalanx_5_tip";
HAnimSite904.children = new MFNode();

HAnimSite904.children[0] = TouchSensor905;

let Shape906 = browser.currentScene.createNode("Shape");
Shape906.USE = "HAnimSiteShape";
HAnimSite904.children[1] = Shape906;

HAnimSegment896.children[2] = HAnimSite904;

HAnimJoint895.children = new MFNode();

HAnimJoint895.children[0] = HAnimSegment896;

let HAnimJoint907 = browser.currentScene.createNode("HAnimJoint");
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

let HAnimSite908 = browser.currentScene.createNode("HAnimSite");
HAnimSite908.USE = "hanim_buttocks_standing_wall_contact_point_pt";
HAnimHumanoid42.viewpoints[1] = HAnimSite908;

let HAnimSite909 = browser.currentScene.createNode("HAnimSite");
HAnimSite909.USE = "hanim_crotch_pt";
HAnimHumanoid42.viewpoints[2] = HAnimSite909;

let HAnimSite910 = browser.currentScene.createNode("HAnimSite");
HAnimSite910.USE = "hanim_l_asis_pt";
HAnimHumanoid42.viewpoints[3] = HAnimSite910;

let HAnimSite911 = browser.currentScene.createNode("HAnimSite");
HAnimSite911.USE = "hanim_l_iliocristale_pt";
HAnimHumanoid42.viewpoints[4] = HAnimSite911;

let HAnimSite912 = browser.currentScene.createNode("HAnimSite");
HAnimSite912.USE = "hanim_l_psis_pt";
HAnimHumanoid42.viewpoints[5] = HAnimSite912;

let HAnimSite913 = browser.currentScene.createNode("HAnimSite");
HAnimSite913.USE = "hanim_l_trochanterion_pt";
HAnimHumanoid42.viewpoints[6] = HAnimSite913;

let HAnimSite914 = browser.currentScene.createNode("HAnimSite");
HAnimSite914.USE = "hanim_r_asis_pt";
HAnimHumanoid42.viewpoints[7] = HAnimSite914;

let HAnimSite915 = browser.currentScene.createNode("HAnimSite");
HAnimSite915.USE = "hanim_r_iliocristale_pt";
HAnimHumanoid42.viewpoints[8] = HAnimSite915;

let HAnimSite916 = browser.currentScene.createNode("HAnimSite");
HAnimSite916.USE = "hanim_r_psis_pt";
HAnimHumanoid42.viewpoints[9] = HAnimSite916;

let HAnimSite917 = browser.currentScene.createNode("HAnimSite");
HAnimSite917.USE = "hanim_r_trochanterion_pt";
HAnimHumanoid42.viewpoints[10] = HAnimSite917;

let HAnimSite918 = browser.currentScene.createNode("HAnimSite");
HAnimSite918.USE = "hanim_navel_pt";
HAnimHumanoid42.viewpoints[11] = HAnimSite918;

let HAnimSite919 = browser.currentScene.createNode("HAnimSite");
HAnimSite919.USE = "hanim_waist_preferred_anterior_pt";
HAnimHumanoid42.viewpoints[12] = HAnimSite919;

let HAnimSite920 = browser.currentScene.createNode("HAnimSite");
HAnimSite920.USE = "hanim_waist_preferred_posterior_pt";
HAnimHumanoid42.viewpoints[13] = HAnimSite920;

let HAnimSite921 = browser.currentScene.createNode("HAnimSite");
HAnimSite921.USE = "hanim_l_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[14] = HAnimSite921;

let HAnimSite922 = browser.currentScene.createNode("HAnimSite");
HAnimSite922.USE = "hanim_l_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[15] = HAnimSite922;

let HAnimSite923 = browser.currentScene.createNode("HAnimSite");
HAnimSite923.USE = "hanim_l_knee_crease_pt";
HAnimHumanoid42.viewpoints[16] = HAnimSite923;

let HAnimSite924 = browser.currentScene.createNode("HAnimSite");
HAnimSite924.USE = "hanim_l_suprapatella_pt";
HAnimHumanoid42.viewpoints[17] = HAnimSite924;

let HAnimSite925 = browser.currentScene.createNode("HAnimSite");
HAnimSite925.USE = "hanim_r_femoral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[18] = HAnimSite925;

let HAnimSite926 = browser.currentScene.createNode("HAnimSite");
HAnimSite926.USE = "hanim_r_femoral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[19] = HAnimSite926;

let HAnimSite927 = browser.currentScene.createNode("HAnimSite");
HAnimSite927.USE = "hanim_r_knee_crease_pt";
HAnimHumanoid42.viewpoints[20] = HAnimSite927;

let HAnimSite928 = browser.currentScene.createNode("HAnimSite");
HAnimSite928.USE = "hanim_r_suprapatella_pt";
HAnimHumanoid42.viewpoints[21] = HAnimSite928;

let HAnimSite929 = browser.currentScene.createNode("HAnimSite");
HAnimSite929.USE = "hanim_l_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[22] = HAnimSite929;

let HAnimSite930 = browser.currentScene.createNode("HAnimSite");
HAnimSite930.USE = "hanim_l_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[23] = HAnimSite930;

let HAnimSite931 = browser.currentScene.createNode("HAnimSite");
HAnimSite931.USE = "hanim_l_tibiale_pt";
HAnimHumanoid42.viewpoints[24] = HAnimSite931;

let HAnimSite932 = browser.currentScene.createNode("HAnimSite");
HAnimSite932.USE = "hanim_l_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[25] = HAnimSite932;

let HAnimSite933 = browser.currentScene.createNode("HAnimSite");
HAnimSite933.USE = "hanim_l_sphyrion_pt";
HAnimHumanoid42.viewpoints[26] = HAnimSite933;

let HAnimSite934 = browser.currentScene.createNode("HAnimSite");
HAnimSite934.USE = "hanim_l_tarsal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[27] = HAnimSite934;

let HAnimSite935 = browser.currentScene.createNode("HAnimSite");
HAnimSite935.USE = "hanim_r_lateral_malleolus_pt";
HAnimHumanoid42.viewpoints[28] = HAnimSite935;

let HAnimSite936 = browser.currentScene.createNode("HAnimSite");
HAnimSite936.USE = "hanim_r_medial_malleolus_pt";
HAnimHumanoid42.viewpoints[29] = HAnimSite936;

let HAnimSite937 = browser.currentScene.createNode("HAnimSite");
HAnimSite937.USE = "hanim_r_tibiale_pt";
HAnimHumanoid42.viewpoints[30] = HAnimSite937;

let HAnimSite938 = browser.currentScene.createNode("HAnimSite");
HAnimSite938.USE = "hanim_r_calcaneus_posterior_pt";
HAnimHumanoid42.viewpoints[31] = HAnimSite938;

let HAnimSite939 = browser.currentScene.createNode("HAnimSite");
HAnimSite939.USE = "hanim_r_sphyrion_pt";
HAnimHumanoid42.viewpoints[32] = HAnimSite939;

let HAnimSite940 = browser.currentScene.createNode("HAnimSite");
HAnimSite940.USE = "hanim_r_tarsal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[33] = HAnimSite940;

let HAnimSite941 = browser.currentScene.createNode("HAnimSite");
HAnimSite941.USE = "hanim_substernale_pt";
HAnimHumanoid42.viewpoints[34] = HAnimSite941;

let HAnimSite942 = browser.currentScene.createNode("HAnimSite");
HAnimSite942.USE = "hanim_l_chest_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[35] = HAnimSite942;

let HAnimSite943 = browser.currentScene.createNode("HAnimSite");
HAnimSite943.USE = "hanim_mesosternale_pt";
HAnimHumanoid42.viewpoints[36] = HAnimSite943;

let HAnimSite944 = browser.currentScene.createNode("HAnimSite");
HAnimSite944.USE = "hanim_r_chest_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[37] = HAnimSite944;

let HAnimSite945 = browser.currentScene.createNode("HAnimSite");
HAnimSite945.USE = "hanim_rear_center_midsagittal_plane_pt";
HAnimHumanoid42.viewpoints[38] = HAnimSite945;

let HAnimSite946 = browser.currentScene.createNode("HAnimSite");
HAnimSite946.USE = "hanim_cervicale_pt";
HAnimHumanoid42.viewpoints[39] = HAnimSite946;

let HAnimSite947 = browser.currentScene.createNode("HAnimSite");
HAnimSite947.USE = "hanim_suprasternale_pt";
HAnimHumanoid42.viewpoints[40] = HAnimSite947;

let HAnimSite948 = browser.currentScene.createNode("HAnimSite");
HAnimSite948.USE = "hanim_l_acromion_pt";
HAnimHumanoid42.viewpoints[41] = HAnimSite948;

let HAnimSite949 = browser.currentScene.createNode("HAnimSite");
HAnimSite949.USE = "hanim_l_axilla_distal_pt";
HAnimHumanoid42.viewpoints[42] = HAnimSite949;

let HAnimSite950 = browser.currentScene.createNode("HAnimSite");
HAnimSite950.USE = "hanim_l_axilla_posterior_folds_pt";
HAnimHumanoid42.viewpoints[43] = HAnimSite950;

let HAnimSite951 = browser.currentScene.createNode("HAnimSite");
HAnimSite951.USE = "hanim_l_axilla_proximal_pt";
HAnimHumanoid42.viewpoints[44] = HAnimSite951;

let HAnimSite952 = browser.currentScene.createNode("HAnimSite");
HAnimSite952.USE = "hanim_l_clavicale_pt";
HAnimHumanoid42.viewpoints[45] = HAnimSite952;

let HAnimSite953 = browser.currentScene.createNode("HAnimSite");
HAnimSite953.USE = "hanim_r_acromion_pt";
HAnimHumanoid42.viewpoints[46] = HAnimSite953;

let HAnimSite954 = browser.currentScene.createNode("HAnimSite");
HAnimSite954.USE = "hanim_r_axilla_distal_pt";
HAnimHumanoid42.viewpoints[47] = HAnimSite954;

let HAnimSite955 = browser.currentScene.createNode("HAnimSite");
HAnimSite955.USE = "hanim_r_axilla_posterior_folds_pt";
HAnimHumanoid42.viewpoints[48] = HAnimSite955;

let HAnimSite956 = browser.currentScene.createNode("HAnimSite");
HAnimSite956.USE = "hanim_r_axilla_proximal_pt";
HAnimHumanoid42.viewpoints[49] = HAnimSite956;

let HAnimSite957 = browser.currentScene.createNode("HAnimSite");
HAnimSite957.USE = "hanim_r_clavicale_pt";
HAnimHumanoid42.viewpoints[50] = HAnimSite957;

let HAnimSite958 = browser.currentScene.createNode("HAnimSite");
HAnimSite958.USE = "hanim_adams_apple_pt";
HAnimHumanoid42.viewpoints[51] = HAnimSite958;

let HAnimSite959 = browser.currentScene.createNode("HAnimSite");
HAnimSite959.USE = "hanim_glabella_pt";
HAnimHumanoid42.viewpoints[52] = HAnimSite959;

let HAnimSite960 = browser.currentScene.createNode("HAnimSite");
HAnimSite960.USE = "hanim_l_ectocanthus_pt";
HAnimHumanoid42.viewpoints[53] = HAnimSite960;

let HAnimSite961 = browser.currentScene.createNode("HAnimSite");
HAnimSite961.USE = "hanim_l_infraorbitale_pt";
HAnimHumanoid42.viewpoints[54] = HAnimSite961;

let HAnimSite962 = browser.currentScene.createNode("HAnimSite");
HAnimSite962.USE = "hanim_l_tragion_pt";
HAnimHumanoid42.viewpoints[55] = HAnimSite962;

let HAnimSite963 = browser.currentScene.createNode("HAnimSite");
HAnimSite963.USE = "hanim_nuchale_pt";
HAnimHumanoid42.viewpoints[56] = HAnimSite963;

let HAnimSite964 = browser.currentScene.createNode("HAnimSite");
HAnimSite964.USE = "hanim_opisthocranion_pt";
HAnimHumanoid42.viewpoints[57] = HAnimSite964;

let HAnimSite965 = browser.currentScene.createNode("HAnimSite");
HAnimSite965.USE = "hanim_r_ectocanthus_pt";
HAnimHumanoid42.viewpoints[58] = HAnimSite965;

let HAnimSite966 = browser.currentScene.createNode("HAnimSite");
HAnimSite966.USE = "hanim_r_infraorbitale_pt";
HAnimHumanoid42.viewpoints[59] = HAnimSite966;

let HAnimSite967 = browser.currentScene.createNode("HAnimSite");
HAnimSite967.USE = "hanim_r_tragion_pt";
HAnimHumanoid42.viewpoints[60] = HAnimSite967;

let HAnimSite968 = browser.currentScene.createNode("HAnimSite");
HAnimSite968.USE = "hanim_sellion_pt";
HAnimHumanoid42.viewpoints[61] = HAnimSite968;

let HAnimSite969 = browser.currentScene.createNode("HAnimSite");
HAnimSite969.USE = "hanim_skull_vertex_pt";
HAnimHumanoid42.viewpoints[62] = HAnimSite969;

let HAnimSite970 = browser.currentScene.createNode("HAnimSite");
HAnimSite970.USE = "hanim_l_bideltoid_pt";
HAnimHumanoid42.viewpoints[63] = HAnimSite970;

let HAnimSite971 = browser.currentScene.createNode("HAnimSite");
HAnimSite971.USE = "hanim_l_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[64] = HAnimSite971;

let HAnimSite972 = browser.currentScene.createNode("HAnimSite");
HAnimSite972.USE = "hanim_l_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[65] = HAnimSite972;

let HAnimSite973 = browser.currentScene.createNode("HAnimSite");
HAnimSite973.USE = "hanim_l_olecranon_pt";
HAnimHumanoid42.viewpoints[66] = HAnimSite973;

let HAnimSite974 = browser.currentScene.createNode("HAnimSite");
HAnimSite974.USE = "hanim_l_radial_styloid_pt";
HAnimHumanoid42.viewpoints[67] = HAnimSite974;

let HAnimSite975 = browser.currentScene.createNode("HAnimSite");
HAnimSite975.USE = "hanim_l_radiale_pt";
HAnimHumanoid42.viewpoints[68] = HAnimSite975;

let HAnimSite976 = browser.currentScene.createNode("HAnimSite");
HAnimSite976.USE = "hanim_l_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[69] = HAnimSite976;

let HAnimSite977 = browser.currentScene.createNode("HAnimSite");
HAnimSite977.USE = "hanim_l_metacarpal_phalanx_2_pt";
HAnimHumanoid42.viewpoints[70] = HAnimSite977;

let HAnimSite978 = browser.currentScene.createNode("HAnimSite");
HAnimSite978.USE = "hanim_l_metacarpal_phalanx_3_pt";
HAnimHumanoid42.viewpoints[71] = HAnimSite978;

let HAnimSite979 = browser.currentScene.createNode("HAnimSite");
HAnimSite979.USE = "hanim_l_metacarpal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[72] = HAnimSite979;

let HAnimSite980 = browser.currentScene.createNode("HAnimSite");
HAnimSite980.USE = "hanim_l_carpal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[73] = HAnimSite980;

let HAnimSite981 = browser.currentScene.createNode("HAnimSite");
HAnimSite981.USE = "hanim_l_carpal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[74] = HAnimSite981;

let HAnimSite982 = browser.currentScene.createNode("HAnimSite");
HAnimSite982.USE = "hanim_l_dactylion_pt";
HAnimHumanoid42.viewpoints[75] = HAnimSite982;

let HAnimSite983 = browser.currentScene.createNode("HAnimSite");
HAnimSite983.USE = "hanim_l_carpal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[76] = HAnimSite983;

let HAnimSite984 = browser.currentScene.createNode("HAnimSite");
HAnimSite984.USE = "hanim_l_carpal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[77] = HAnimSite984;

let HAnimSite985 = browser.currentScene.createNode("HAnimSite");
HAnimSite985.USE = "hanim_l_carpal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[78] = HAnimSite985;

let HAnimSite986 = browser.currentScene.createNode("HAnimSite");
HAnimSite986.USE = "hanim_r_bideltoid_pt";
HAnimHumanoid42.viewpoints[79] = HAnimSite986;

let HAnimSite987 = browser.currentScene.createNode("HAnimSite");
HAnimSite987.USE = "hanim_r_humeral_lateral_epicondyles_pt";
HAnimHumanoid42.viewpoints[80] = HAnimSite987;

let HAnimSite988 = browser.currentScene.createNode("HAnimSite");
HAnimSite988.USE = "hanim_r_humeral_medial_epicondyles_pt";
HAnimHumanoid42.viewpoints[81] = HAnimSite988;

let HAnimSite989 = browser.currentScene.createNode("HAnimSite");
HAnimSite989.USE = "hanim_r_olecranon_pt";
HAnimHumanoid42.viewpoints[82] = HAnimSite989;

let HAnimSite990 = browser.currentScene.createNode("HAnimSite");
HAnimSite990.USE = "hanim_r_radial_styloid_pt";
HAnimHumanoid42.viewpoints[83] = HAnimSite990;

let HAnimSite991 = browser.currentScene.createNode("HAnimSite");
HAnimSite991.USE = "hanim_r_radiale_pt";
HAnimHumanoid42.viewpoints[84] = HAnimSite991;

let HAnimSite992 = browser.currentScene.createNode("HAnimSite");
HAnimSite992.USE = "hanim_r_ulnar_styloid_pt";
HAnimHumanoid42.viewpoints[85] = HAnimSite992;

let HAnimSite993 = browser.currentScene.createNode("HAnimSite");
HAnimSite993.USE = "hanim_r_metacarpal_phalanx_2_pt";
HAnimHumanoid42.viewpoints[86] = HAnimSite993;

let HAnimSite994 = browser.currentScene.createNode("HAnimSite");
HAnimSite994.USE = "hanim_r_metacarpal_phalanx_3_pt";
HAnimHumanoid42.viewpoints[87] = HAnimSite994;

let HAnimSite995 = browser.currentScene.createNode("HAnimSite");
HAnimSite995.USE = "hanim_r_metacarpal_phalanx_5_pt";
HAnimHumanoid42.viewpoints[88] = HAnimSite995;

let HAnimSite996 = browser.currentScene.createNode("HAnimSite");
HAnimSite996.USE = "hanim_r_carpal_distal_phalanx_1_tip";
HAnimHumanoid42.viewpoints[89] = HAnimSite996;

let HAnimSite997 = browser.currentScene.createNode("HAnimSite");
HAnimSite997.USE = "hanim_r_carpal_distal_phalanx_2_tip";
HAnimHumanoid42.viewpoints[90] = HAnimSite997;

let HAnimSite998 = browser.currentScene.createNode("HAnimSite");
HAnimSite998.USE = "hanim_r_dactylion_pt";
HAnimHumanoid42.viewpoints[91] = HAnimSite998;

let HAnimSite999 = browser.currentScene.createNode("HAnimSite");
HAnimSite999.USE = "hanim_r_carpal_distal_phalanx_3_tip";
HAnimHumanoid42.viewpoints[92] = HAnimSite999;

let HAnimSite1000 = browser.currentScene.createNode("HAnimSite");
HAnimSite1000.USE = "hanim_r_carpal_distal_phalanx_4_tip";
HAnimHumanoid42.viewpoints[93] = HAnimSite1000;

let HAnimSite1001 = browser.currentScene.createNode("HAnimSite");
HAnimSite1001.USE = "hanim_r_carpal_distal_phalanx_5_tip";
HAnimHumanoid42.viewpoints[94] = HAnimSite1001;

let HAnimSegment1002 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1002.USE = "hanim_sacrum";
HAnimHumanoid42.segments[95] = HAnimSegment1002;

let HAnimSegment1003 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1003.USE = "hanim_pelvis";
HAnimHumanoid42.segments[96] = HAnimSegment1003;

let HAnimSegment1004 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1004.USE = "hanim_l_thigh";
HAnimHumanoid42.segments[97] = HAnimSegment1004;

let HAnimSegment1005 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1005.USE = "hanim_l_calf";
HAnimHumanoid42.segments[98] = HAnimSegment1005;

let HAnimSegment1006 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1006.USE = "hanim_l_talus";
HAnimHumanoid42.segments[99] = HAnimSegment1006;

let HAnimSegment1007 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1007.USE = "hanim_l_metatarsal_1";
HAnimHumanoid42.segments[100] = HAnimSegment1007;

let HAnimSegment1008 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1008.USE = "hanim_l_tarsal_proximal_phalanx_1";
HAnimHumanoid42.segments[101] = HAnimSegment1008;

let HAnimSegment1009 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1009.USE = "hanim_r_thigh";
HAnimHumanoid42.segments[102] = HAnimSegment1009;

let HAnimSegment1010 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1010.USE = "hanim_r_calf";
HAnimHumanoid42.segments[103] = HAnimSegment1010;

let HAnimSegment1011 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1011.USE = "hanim_r_talus";
HAnimHumanoid42.segments[104] = HAnimSegment1011;

let HAnimSegment1012 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1012.USE = "hanim_r_metatarsal_1";
HAnimHumanoid42.segments[105] = HAnimSegment1012;

let HAnimSegment1013 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1013.USE = "hanim_r_tarsal_proximal_phalanx_1";
HAnimHumanoid42.segments[106] = HAnimSegment1013;

let HAnimSegment1014 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1014.USE = "hanim_l5";
HAnimHumanoid42.segments[107] = HAnimSegment1014;

let HAnimSegment1015 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1015.USE = "hanim_l3";
HAnimHumanoid42.segments[108] = HAnimSegment1015;

let HAnimSegment1016 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1016.USE = "hanim_l1";
HAnimHumanoid42.segments[109] = HAnimSegment1016;

let HAnimSegment1017 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1017.USE = "hanim_t10";
HAnimHumanoid42.segments[110] = HAnimSegment1017;

let HAnimSegment1018 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1018.USE = "hanim_t6";
HAnimHumanoid42.segments[111] = HAnimSegment1018;

let HAnimSegment1019 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1019.USE = "hanim_t1";
HAnimHumanoid42.segments[112] = HAnimSegment1019;

let HAnimSegment1020 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1020.USE = "hanim_c4";
HAnimHumanoid42.segments[113] = HAnimSegment1020;

let HAnimSegment1021 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1021.USE = "hanim_c2";
HAnimHumanoid42.segments[114] = HAnimSegment1021;

let HAnimSegment1022 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1022.USE = "hanim_l_clavicle";
HAnimHumanoid42.segments[115] = HAnimSegment1022;

let HAnimSegment1023 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1023.USE = "hanim_l_scapula";
HAnimHumanoid42.segments[116] = HAnimSegment1023;

let HAnimSegment1024 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1024.USE = "hanim_l_upperarm";
HAnimHumanoid42.segments[117] = HAnimSegment1024;

let HAnimSegment1025 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1025.USE = "hanim_l_forearm";
HAnimHumanoid42.segments[118] = HAnimSegment1025;

let HAnimSegment1026 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1026.USE = "hanim_l_carpal";
HAnimHumanoid42.segments[119] = HAnimSegment1026;

let HAnimSegment1027 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1027.USE = "hanim_l_metacarpal_1";
HAnimHumanoid42.segments[120] = HAnimSegment1027;

let HAnimSegment1028 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1028.USE = "hanim_l_carpal_proximal_phalanx_1";
HAnimHumanoid42.segments[121] = HAnimSegment1028;

let HAnimSegment1029 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1029.USE = "hanim_l_metacarpal_2";
HAnimHumanoid42.segments[122] = HAnimSegment1029;

let HAnimSegment1030 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1030.USE = "hanim_l_carpal_proximal_phalanx_2";
HAnimHumanoid42.segments[123] = HAnimSegment1030;

let HAnimSegment1031 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1031.USE = "hanim_l_carpal_middle_phalanx_1";
HAnimHumanoid42.segments[124] = HAnimSegment1031;

let HAnimSegment1032 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1032.USE = "hanim_l_metacarpal_3";
HAnimHumanoid42.segments[125] = HAnimSegment1032;

let HAnimSegment1033 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1033.USE = "hanim_l_carpal_proximal_phalanx_3";
HAnimHumanoid42.segments[126] = HAnimSegment1033;

let HAnimSegment1034 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1034.USE = "hanim_l_carpal_middle_phalanx_2";
HAnimHumanoid42.segments[127] = HAnimSegment1034;

let HAnimSegment1035 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1035.USE = "hanim_l_metacarpal_4";
HAnimHumanoid42.segments[128] = HAnimSegment1035;

let HAnimSegment1036 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1036.USE = "hanim_l_carpal_proximal_phalanx_4";
HAnimHumanoid42.segments[129] = HAnimSegment1036;

let HAnimSegment1037 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1037.USE = "hanim_l_carpal_middle_phalanx_3";
HAnimHumanoid42.segments[130] = HAnimSegment1037;

let HAnimSegment1038 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1038.USE = "hanim_l_metacarpal_5";
HAnimHumanoid42.segments[131] = HAnimSegment1038;

let HAnimSegment1039 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1039.USE = "hanim_l_carpal_proximal_phalanx_5";
HAnimHumanoid42.segments[132] = HAnimSegment1039;

let HAnimSegment1040 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1040.USE = "hanim_l_carpal_middle_phalanx_4";
HAnimHumanoid42.segments[133] = HAnimSegment1040;

let HAnimSegment1041 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1041.USE = "hanim_r_clavicle";
HAnimHumanoid42.segments[134] = HAnimSegment1041;

let HAnimSegment1042 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1042.USE = "hanim_r_scapula";
HAnimHumanoid42.segments[135] = HAnimSegment1042;

let HAnimSegment1043 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1043.USE = "hanim_r_upperarm";
HAnimHumanoid42.segments[136] = HAnimSegment1043;

let HAnimSegment1044 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1044.USE = "hanim_r_forearm";
HAnimHumanoid42.segments[137] = HAnimSegment1044;

let HAnimSegment1045 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1045.USE = "hanim_r_carpal";
HAnimHumanoid42.segments[138] = HAnimSegment1045;

let HAnimSegment1046 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1046.USE = "hanim_r_metacarpal_1";
HAnimHumanoid42.segments[139] = HAnimSegment1046;

let HAnimSegment1047 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1047.USE = "hanim_r_carpal_proximal_phalanx_1";
HAnimHumanoid42.segments[140] = HAnimSegment1047;

let HAnimSegment1048 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1048.USE = "hanim_r_metacarpal_2";
HAnimHumanoid42.segments[141] = HAnimSegment1048;

let HAnimSegment1049 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1049.USE = "hanim_r_carpal_proximal_phalanx_2";
HAnimHumanoid42.segments[142] = HAnimSegment1049;

let HAnimSegment1050 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1050.USE = "hanim_r_carpal_middle_phalanx_1";
HAnimHumanoid42.segments[143] = HAnimSegment1050;

let HAnimSegment1051 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1051.USE = "hanim_r_metacarpal_3";
HAnimHumanoid42.segments[144] = HAnimSegment1051;

let HAnimSegment1052 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1052.USE = "hanim_r_carpal_proximal_phalanx_3";
HAnimHumanoid42.segments[145] = HAnimSegment1052;

let HAnimSegment1053 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1053.USE = "hanim_r_carpal_middle_phalanx_2";
HAnimHumanoid42.segments[146] = HAnimSegment1053;

let HAnimSegment1054 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1054.USE = "hanim_r_metacarpal_4";
HAnimHumanoid42.segments[147] = HAnimSegment1054;

let HAnimSegment1055 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1055.USE = "hanim_r_carpal_proximal_phalanx_4";
HAnimHumanoid42.segments[148] = HAnimSegment1055;

let HAnimSegment1056 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1056.USE = "hanim_r_carpal_middle_phalanx_3";
HAnimHumanoid42.segments[149] = HAnimSegment1056;

let HAnimSegment1057 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1057.USE = "hanim_r_metacarpal_5";
HAnimHumanoid42.segments[150] = HAnimSegment1057;

let HAnimSegment1058 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1058.USE = "hanim_r_carpal_proximal_phalanx_5";
HAnimHumanoid42.segments[151] = HAnimSegment1058;

let HAnimSegment1059 = browser.currentScene.createNode("HAnimSegment");
HAnimSegment1059.USE = "hanim_r_carpal_middle_phalanx_4";
HAnimHumanoid42.segments[152] = HAnimSegment1059;

let HAnimJoint1060 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1060.USE = "hanim_humanoid_root";
HAnimHumanoid42.joints[153] = HAnimJoint1060;

let HAnimJoint1061 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1061.USE = "hanim_sacroiliac";
HAnimHumanoid42.joints[154] = HAnimJoint1061;

let HAnimJoint1062 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1062.USE = "hanim_l_hip";
HAnimHumanoid42.joints[155] = HAnimJoint1062;

let HAnimJoint1063 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1063.USE = "hanim_l_knee";
HAnimHumanoid42.joints[156] = HAnimJoint1063;

let HAnimJoint1064 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1064.USE = "hanim_l_talocrural";
HAnimHumanoid42.joints[157] = HAnimJoint1064;

let HAnimJoint1065 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1065.USE = "hanim_l_tarsometatarsal_1";
HAnimHumanoid42.joints[158] = HAnimJoint1065;

let HAnimJoint1066 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1066.USE = "hanim_l_metatarsophalangeal_1";
HAnimHumanoid42.joints[159] = HAnimJoint1066;

let HAnimJoint1067 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1067.USE = "hanim_l_tarsal_distal_interphalangeal_1";
HAnimHumanoid42.joints[160] = HAnimJoint1067;

let HAnimJoint1068 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1068.USE = "hanim_r_hip";
HAnimHumanoid42.joints[161] = HAnimJoint1068;

let HAnimJoint1069 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1069.USE = "hanim_r_knee";
HAnimHumanoid42.joints[162] = HAnimJoint1069;

let HAnimJoint1070 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1070.USE = "hanim_r_talocrural";
HAnimHumanoid42.joints[163] = HAnimJoint1070;

let HAnimJoint1071 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1071.USE = "hanim_r_tarsometatarsal_1";
HAnimHumanoid42.joints[164] = HAnimJoint1071;

let HAnimJoint1072 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1072.USE = "hanim_r_metatarsophalangeal_1";
HAnimHumanoid42.joints[165] = HAnimJoint1072;

let HAnimJoint1073 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1073.USE = "hanim_r_tarsal_distal_interphalangeal_1";
HAnimHumanoid42.joints[166] = HAnimJoint1073;

let HAnimJoint1074 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1074.USE = "hanim_vl5";
HAnimHumanoid42.joints[167] = HAnimJoint1074;

let HAnimJoint1075 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1075.USE = "hanim_vl3";
HAnimHumanoid42.joints[168] = HAnimJoint1075;

let HAnimJoint1076 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1076.USE = "hanim_vl1";
HAnimHumanoid42.joints[169] = HAnimJoint1076;

let HAnimJoint1077 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1077.USE = "hanim_vt10";
HAnimHumanoid42.joints[170] = HAnimJoint1077;

let HAnimJoint1078 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1078.USE = "hanim_vt6";
HAnimHumanoid42.joints[171] = HAnimJoint1078;

let HAnimJoint1079 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1079.USE = "hanim_vt1";
HAnimHumanoid42.joints[172] = HAnimJoint1079;

let HAnimJoint1080 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1080.USE = "hanim_vc4";
HAnimHumanoid42.joints[173] = HAnimJoint1080;

let HAnimJoint1081 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1081.USE = "hanim_vc2";
HAnimHumanoid42.joints[174] = HAnimJoint1081;

let HAnimJoint1082 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1082.USE = "hanim_skullbase";
HAnimHumanoid42.joints[175] = HAnimJoint1082;

let HAnimJoint1083 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1083.USE = "hanim_l_sternoclavicular";
HAnimHumanoid42.joints[176] = HAnimJoint1083;

let HAnimJoint1084 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1084.USE = "hanim_l_acromioclavicular";
HAnimHumanoid42.joints[177] = HAnimJoint1084;

let HAnimJoint1085 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1085.USE = "hanim_l_shoulder";
HAnimHumanoid42.joints[178] = HAnimJoint1085;

let HAnimJoint1086 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1086.USE = "hanim_l_elbow";
HAnimHumanoid42.joints[179] = HAnimJoint1086;

let HAnimJoint1087 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1087.USE = "hanim_l_radiocarpal";
HAnimHumanoid42.joints[180] = HAnimJoint1087;

let HAnimJoint1088 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1088.USE = "hanim_l_carpometacarpal_1";
HAnimHumanoid42.joints[181] = HAnimJoint1088;

let HAnimJoint1089 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1089.USE = "hanim_l_metacarpophalangeal_1";
HAnimHumanoid42.joints[182] = HAnimJoint1089;

let HAnimJoint1090 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1090.USE = "hanim_l_carpal_interphalangeal_1";
HAnimHumanoid42.joints[183] = HAnimJoint1090;

let HAnimJoint1091 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1091.USE = "hanim_l_carpometacarpal_2";
HAnimHumanoid42.joints[184] = HAnimJoint1091;

let HAnimJoint1092 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1092.USE = "hanim_l_metacarpophalangeal_2";
HAnimHumanoid42.joints[185] = HAnimJoint1092;

let HAnimJoint1093 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1093.USE = "hanim_l_carpal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[186] = HAnimJoint1093;

let HAnimJoint1094 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1094.USE = "hanim_l_carpal_distal_interphalangeal_1";
HAnimHumanoid42.joints[187] = HAnimJoint1094;

let HAnimJoint1095 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1095.USE = "hanim_l_carpometacarpal_3";
HAnimHumanoid42.joints[188] = HAnimJoint1095;

let HAnimJoint1096 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1096.USE = "hanim_l_metacarpophalangeal_3";
HAnimHumanoid42.joints[189] = HAnimJoint1096;

let HAnimJoint1097 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1097.USE = "hanim_l_carpal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[190] = HAnimJoint1097;

let HAnimJoint1098 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1098.USE = "hanim_l_carpal_distal_interphalangeal_2";
HAnimHumanoid42.joints[191] = HAnimJoint1098;

let HAnimJoint1099 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1099.USE = "hanim_l_carpometacarpal_4";
HAnimHumanoid42.joints[192] = HAnimJoint1099;

let HAnimJoint1100 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1100.USE = "hanim_l_metacarpophalangeal_4";
HAnimHumanoid42.joints[193] = HAnimJoint1100;

let HAnimJoint1101 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1101.USE = "hanim_l_carpal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[194] = HAnimJoint1101;

let HAnimJoint1102 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1102.USE = "hanim_l_carpal_distal_interphalangeal_3";
HAnimHumanoid42.joints[195] = HAnimJoint1102;

let HAnimJoint1103 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1103.USE = "hanim_l_carpometacarpal_5";
HAnimHumanoid42.joints[196] = HAnimJoint1103;

let HAnimJoint1104 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1104.USE = "hanim_l_metacarpophalangeal_5";
HAnimHumanoid42.joints[197] = HAnimJoint1104;

let HAnimJoint1105 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1105.USE = "hanim_l_carpal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[198] = HAnimJoint1105;

let HAnimJoint1106 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1106.USE = "hanim_l_carpal_distal_interphalangeal_4";
HAnimHumanoid42.joints[199] = HAnimJoint1106;

let HAnimJoint1107 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1107.USE = "hanim_r_sternoclavicular";
HAnimHumanoid42.joints[200] = HAnimJoint1107;

let HAnimJoint1108 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1108.USE = "hanim_r_acromioclavicular";
HAnimHumanoid42.joints[201] = HAnimJoint1108;

let HAnimJoint1109 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1109.USE = "hanim_r_shoulder";
HAnimHumanoid42.joints[202] = HAnimJoint1109;

let HAnimJoint1110 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1110.USE = "hanim_r_elbow";
HAnimHumanoid42.joints[203] = HAnimJoint1110;

let HAnimJoint1111 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1111.USE = "hanim_r_radiocarpal";
HAnimHumanoid42.joints[204] = HAnimJoint1111;

let HAnimJoint1112 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1112.USE = "hanim_r_carpometacarpal_1";
HAnimHumanoid42.joints[205] = HAnimJoint1112;

let HAnimJoint1113 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1113.USE = "hanim_r_metacarpophalangeal_1";
HAnimHumanoid42.joints[206] = HAnimJoint1113;

let HAnimJoint1114 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1114.USE = "hanim_r_carpal_interphalangeal_1";
HAnimHumanoid42.joints[207] = HAnimJoint1114;

let HAnimJoint1115 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1115.USE = "hanim_r_carpometacarpal_2";
HAnimHumanoid42.joints[208] = HAnimJoint1115;

let HAnimJoint1116 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1116.USE = "hanim_r_metacarpophalangeal_2";
HAnimHumanoid42.joints[209] = HAnimJoint1116;

let HAnimJoint1117 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1117.USE = "hanim_r_carpal_proximal_interphalangeal_1";
HAnimHumanoid42.joints[210] = HAnimJoint1117;

let HAnimJoint1118 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1118.USE = "hanim_r_carpal_distal_interphalangeal_1";
HAnimHumanoid42.joints[211] = HAnimJoint1118;

let HAnimJoint1119 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1119.USE = "hanim_r_carpometacarpal_3";
HAnimHumanoid42.joints[212] = HAnimJoint1119;

let HAnimJoint1120 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1120.USE = "hanim_r_metacarpophalangeal_3";
HAnimHumanoid42.joints[213] = HAnimJoint1120;

let HAnimJoint1121 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1121.USE = "hanim_r_carpal_proximal_interphalangeal_2";
HAnimHumanoid42.joints[214] = HAnimJoint1121;

let HAnimJoint1122 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1122.USE = "hanim_r_carpal_distal_interphalangeal_2";
HAnimHumanoid42.joints[215] = HAnimJoint1122;

let HAnimJoint1123 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1123.USE = "hanim_r_carpometacarpal_4";
HAnimHumanoid42.joints[216] = HAnimJoint1123;

let HAnimJoint1124 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1124.USE = "hanim_r_metacarpophalangeal_4";
HAnimHumanoid42.joints[217] = HAnimJoint1124;

let HAnimJoint1125 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1125.USE = "hanim_r_carpal_proximal_interphalangeal_3";
HAnimHumanoid42.joints[218] = HAnimJoint1125;

let HAnimJoint1126 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1126.USE = "hanim_r_carpal_distal_interphalangeal_3";
HAnimHumanoid42.joints[219] = HAnimJoint1126;

let HAnimJoint1127 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1127.USE = "hanim_r_carpometacarpal_5";
HAnimHumanoid42.joints[220] = HAnimJoint1127;

let HAnimJoint1128 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1128.USE = "hanim_r_metacarpophalangeal_5";
HAnimHumanoid42.joints[221] = HAnimJoint1128;

let HAnimJoint1129 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1129.USE = "hanim_r_carpal_proximal_interphalangeal_4";
HAnimHumanoid42.joints[222] = HAnimJoint1129;

let HAnimJoint1130 = browser.currentScene.createNode("HAnimJoint");
HAnimJoint1130.USE = "hanim_r_carpal_distal_interphalangeal_4";
HAnimHumanoid42.joints[223] = HAnimJoint1130;

let Coordinate1131 = browser.currentScene.createNode("Coordinate");
Coordinate1131.DEF = "TheSkinCoord";
Coordinate1131.point = new MFVec3f(new float[0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]);
HAnimHumanoid42.skinCoord = Coordinate1131;

let Shape1132 = browser.currentScene.createNode("Shape");
Shape1132.DEF = "SkinShape";
let Appearance1133 = browser.currentScene.createNode("Appearance");
Appearance1133.DEF = "SkinAppearance";
let Material1134 = browser.currentScene.createNode("Material");
Material1134.DEF = "SkinMaterial";
Material1134.ambientIntensity = 0.6;
Material1134.diffuseColor = new SFColor(new float[1,1,1]);
Material1134.shininess = 0.6;
Material1134.transparency = 0.2;
Appearance1133.material = Material1134;

let ImageTexture1135 = browser.currentScene.createNode("ImageTexture");
ImageTexture1135.DEF = "zBlueSpiralBkg2";
ImageTexture1135.description = "Blue Spiral Pattern";
ImageTexture1135.url = new MFString(new java.lang.String["./data/zBlueSpiralBkg2.gif","zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"]);
Appearance1133.texture = ImageTexture1135;

Shape1132.appearance = Appearance1133;

let IndexedFaceSet1136 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet1136.creaseAngle = 3.1;
IndexedFaceSet1136.coordIndex = new MFInt32(new int[0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1]);
let Color1137 = browser.currentScene.createNode("Color");
Color1137.color = new MFColor(new float[1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]);
IndexedFaceSet1136.color = Color1137;

let Coordinate1138 = browser.currentScene.createNode("Coordinate");
Coordinate1138.USE = "TheSkinCoord";
IndexedFaceSet1136.coord = Coordinate1138;

Shape1132.geometry = IndexedFaceSet1136;

HAnimHumanoid42.skin[224] = Shape1132;

browser.currentScene.children[4] = HAnimHumanoid42;

